import os
import re
import time
from typing import List

import requests
from bs4 import BeautifulSoup


VICTORY_ROAD_URLS = [
    "https://victoryroad.pro/sv-rental-teams/",
    "https://victoryroad.pro/sv-rental-teams-reg-set-a/",
    "https://victoryroad.pro/sv-rental-teams-reg-set-b/",
    "https://victoryroad.pro/sv-rental-teams-reg-set-c/",
    "https://victoryroad.pro/sv-rental-teams-reg-set-d/",
    "https://victoryroad.pro/sv-rental-teams-reg-set-e/",
    "https://victoryroad.pro/sv-rental-teams-reg-set-f/",
    "https://victoryroad.pro/sv-rental-teams-reg-set-g/",
    "https://victoryroad.pro/sv-rental-teams-reg-set-h/",
    "https://victoryroad.pro/sv-rental-teams-vgc-reg-set-i/",
]

# 输出文件路径
OUTPUT_PATH = r"C:\Users\86159\Desktop\vgc_teams.md"

HEADERS = {
    "User-Agent": (
        "Mozilla/5.0 (Windows NT 10.0; Win64; x64) "
        "AppleWebKit/537.36 (KHTML, like Gecko) "
        "Chrome/123.0 Safari/537.36"
    )
}


def get_html(url: str) -> str:
    """获取网页 HTML 文本，带简单重试。强制按 UTF-8 解码。"""
    for i in range(3):
        try:
            resp = requests.get(url, headers=HEADERS, timeout=15)
            resp.raise_for_status()
            # ★ 强制用 UTF-8，避免乱码
            resp.encoding = "utf-8"
            return resp.text
        except Exception as e:
            print(f"[WARN] 获取 {url} 失败，第 {i+1} 次尝试：{e}")
            time.sleep(1 + i)
    raise RuntimeError(f"多次重试后仍无法访问 {url}")


def find_pokepaste_links(page_url: str) -> List[str]:
    """
    在 Victory Road 某个 Regulation Set 页面中抓出所有 pokepast.es 链接。
    只要 href 里包含 'pokepast.es' 就记录下来，并去重保持顺序。
    """
    html = get_html(page_url)
    soup = BeautifulSoup(html, "html.parser")

    links: List[str] = []
    seen = set()

    for a in soup.find_all("a", href=True):
        href = a["href"]
        if "pokepast.es" not in href:
            continue

        # 统一成完整 https 链接
        if href.startswith("//"):
            href = "https:" + href
        elif href.startswith("http://"):
            href = "https://" + href[len("http://") :]
        elif href.startswith("/"):
            href = "https://pokepast.es" + href

        if href not in seen:
            seen.add(href)
            links.append(href)

    return links


def pokepaste_to_raw_url(paste_url: str) -> str:
    """
    把普通 pokepast.es 链接转换成 raw 文本链接。
    例如：https://pokepast.es/762a7dc9b02f248a  ->  https://pokepast.es/762a7dc9b02f248a/raw
    """
    url = paste_url.rstrip("/")
    paste_id = url.split("/")[-1]
    if not re.fullmatch(r"[0-9a-fA-F]+", paste_id):
        return url + "/raw"
    return f"https://pokepast.es/{paste_id}/raw"


def get_paste_text(paste_url: str) -> str:
    """
    获取某个 pokepast.es paste 的文本内容（优先用 /raw）。
    """
    raw_url = pokepaste_to_raw_url(paste_url)
    try:
        resp = requests.get(raw_url, headers=HEADERS, timeout=15)
        # ★ raw 文本也强制 UTF-8
        resp.encoding = "utf-8"
        if resp.status_code == 200 and resp.text.strip():
            return resp.text.strip()
        else:
            print(f"[WARN] raw 链接返回异常({resp.status_code})，改用 HTML 解析：{raw_url}")
    except Exception as e:
        print(f"[WARN] 访问 raw 链接失败 {raw_url}：{e}")

    # 兜底：解析 HTML
    html = get_html(paste_url)
    soup = BeautifulSoup(html, "html.parser")

    pre = soup.find("pre")
    if pre is not None:
        return pre.get_text("\n", strip=True)

    text = soup.get_text("\n", strip=True)
    return text


def normalize_paste(paste_text: str) -> str:
    """
    把 paste 的文本“压缩”成：
    - 同一个宝可梦内部：行与行之间不留空行
    - 不同宝可梦之间：保留 1 行空行
    """
    lines = paste_text.splitlines()

    blocks: List[List[str]] = []
    current_block: List[str] = []

    for line in lines:
        if line.strip() == "":
            if current_block:
                blocks.append(current_block)
                current_block = []
        else:
            current_block.append(line.rstrip())

    if current_block:
        blocks.append(current_block)

    block_strings = ["\n".join(block) for block in blocks]
    return "\n\n".join(block_strings).strip()


def print_progress(done: int, total: int, bar_len: int = 30):
    """
    简易终端进度条：
    [##########----------] 10/100 (10.0%)
    """
    if total <= 0:
        return
    ratio = done / total
    filled = int(bar_len * ratio)
    bar = "#" * filled + "-" * (bar_len - filled)
    print(f"\r进度: [{bar}] {done}/{total} ({ratio*100:5.1f}%)", end="", flush=True)


def main():
    # 1. 从多个 Victory Road 页面收集所有 pokepast 链接
    all_paste_urls: List[str] = []
    for page in VICTORY_ROAD_URLS:
        print(f"正在解析页面：{page}")
        links = find_pokepaste_links(page)
        print(f"  找到 {len(links)} 个 pokepast 链接")
        all_paste_urls.extend(links)

    if not all_paste_urls:
        print("没有从页面中找到任何 pokepast.es 链接，请检查页面结构或脚本逻辑。")
        return

    total = len(all_paste_urls)
    print(f"总共找到 {total} 个队伍 Paste 链接。")

    # 确保输出目录存在
    os.makedirs(os.path.dirname(OUTPUT_PATH), exist_ok=True)

    # 2. 逐个访问 pokepast，写入 markdown 文件，并展示进度条
    print("开始抓取并写入 vgc_teams.md ...")

    # ★ 用 utf-8-sig，方便 Windows 记事本识别
    with open(OUTPUT_PATH, "w", encoding="utf-8-sig") as f:
        for idx, paste_url in enumerate(all_paste_urls, start=1):
            print_progress(idx - 1, total)

            try:
                paste_text = get_paste_text(paste_url)
            except Exception as e:
                print(f"\n[ERROR] 获取 Paste 失败：{paste_url}，错误：{e}")
                continue

            normalized = normalize_paste(paste_text)

            f.write(f"Team{idx}\n")
            f.write(normalized)
            f.write("\n\n")  # 队伍之间空一行

            print_progress(idx, total)

    print("\n完成！所有队伍已写入：", OUTPUT_PATH)


if __name__ == "__main__":
    main()
