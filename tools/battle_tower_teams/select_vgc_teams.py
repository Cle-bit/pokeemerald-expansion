import os
import re
import random
from typing import List, Dict, Any, Set

# 输入 / 输出文件路径
INPUT_PATH = r"C:\Users\86159\Desktop\vgc_teams.md"
OUTPUT_PATH = r"C:\Users\86159\Desktop\vgc_teams_dedup.md"

TEAM_HEADER_RE = re.compile(r"^Team\s*(\d+)\s*$", re.IGNORECASE)


def parse_pokemon_name(line: str) -> str:
    """
    从一行类似：
      - 'Baxcalibur (M) @ Loaded Dice'
      - 'Gholdengo @ Choice Specs'
      - 'Dinko (Ursaluna) @ Flame Orb'
      - '一拳月月熊 (Ursaluna) (M) @ Flame Orb'
    中提取宝可梦的“种族名”。
    """
    # 先截到 @ 前面
    before_at = line.split("@", 1)[0].strip()

    # 找出所有括号内容 (xxx)
    paren_contents = [m.group(1).strip() for m in re.finditer(r"\(([^()]*)\)", before_at)]
    gender_marks = {"M", "F", "♂", "♀"}

    # 1. 如果存在至少一个“非性别”的括号内容，就取第一个非性别括号当种族名
    for content in paren_contents:
        if content not in gender_marks:
            # 例如 'Indeedee-F', 'Ursaluna', 'Lilligant-Hisui'
            return content

    # 2. 否则（所有括号都是性别）：
    #    比如 'Baxcalibur (M)'、'Garchomp (F)'，取括号前面的部分
    if paren_contents:
        # 去掉从第一个括号开始的部分
        idx = before_at.find("(")
        if idx > 0:
            return before_at[:idx].strip()

    # 3. 没有括号：直接整段也是种族名
    return before_at


def load_teams(path: str) -> List[Dict[str, Any]]:
    """
    从 vgc_teams.md 读取所有队伍。
    返回列表，每个元素为：
      {
        "pkm": ["Baxcalibur", "Garganacl", ...],  # 这支队伍的宝可梦名
        "body_lines": [ ... ]                    # 不含 TeamX 头的所有原始行
      }
    """
    teams: List[Dict[str, Any]] = []

    # ★ 用 utf-8-sig，兼容带 BOM 的文件
    with open(path, "r", encoding="utf-8-sig") as f:
        lines = f.readlines()

    current_body: List[str] = []
    current_pkm: List[str] = []
    in_team = False

    for raw in lines:
        # 用 strip() 去掉首尾空白，避免 "Team123\r" 这类匹配不到
        line = raw.strip()

        # 识别 Team 行
        m = TEAM_HEADER_RE.match(line)
        if m:
            # 收尾上一支队伍
            if in_team and current_body:
                teams.append(
                    {
                        "pkm": current_pkm,
                        "body_lines": current_body,
                    }
                )
            # 开始新队伍：不把 TeamX 行放入 body_lines
            in_team = True
            current_body = []
            current_pkm = []
            continue

        if not in_team:
            # 还没遇到第一个 Team 头，忽略
            continue

        # 记录正文行（保留原始 raw，方便原样输出）
        current_body.append(raw)

        # 每只宝可梦的第一行形如 'xxx @ yyy'
        if "@" in line:
            name = parse_pokemon_name(line)
            current_pkm.append(name)

    # 文件结束，收尾最后一支队伍
    if in_team and current_body:
        teams.append(
            {
                "pkm": current_pkm,
                "body_lines": current_body,
            }
        )

    return teams


def build_conflict_graph(teams: List[Dict[str, Any]], max_overlap: int = 3):
    """
    构造“冲突图”：如果两队宝可梦重合数 > max_overlap，就认为有冲突。
    返回：
      - conflict: List[Set[int]]，conflict[i] = 与 i 冲突的队伍索引集合
      - name_sets: List[Set[str]]，每支队伍的宝可梦集合
    """
    n = len(teams)
    name_sets: List[Set[str]] = []
    for t in teams:
        s = set(t["pkm"])
        name_sets.append(s)

    conflict: List[Set[int]] = [set() for _ in range(n)]

    for i in range(n):
        si = name_sets[i]
        if not si:
            continue
        for j in range(i + 1, n):
            sj = name_sets[j]
            if not sj:
                continue
            overlap = len(si & sj)
            if overlap > max_overlap:
                conflict[i].add(j)
                conflict[j].add(i)

    return conflict, name_sets


def greedy_independent_set(order: List[int], conflict: List[Set[int]]) -> List[int]:
    """
    按给定顺序顺次尝试加入队伍，只要与当前已选集合中所有队伍都不冲突，就加入。
    返回保留的队伍索引列表。
    """
    selected: List[int] = []
    selected_set: Set[int] = set()

    for idx in order:
        # 只要 idx 与已选任意一个不冲突，就可以选
        if all((j not in conflict[idx]) for j in selected_set):
            selected.append(idx)
            selected_set.add(idx)

    return selected


def smart_select_teams(conflict: List[Set[int]], tries: int = 80) -> List[int]:
    """
    在冲突图上做“聪明的贪心 + 多次随机重启”，尽量找到大的独立集。
    """
    n = len(conflict)
    all_indices = list(range(n))

    degree = [len(conflict[i]) for i in range(n)]

    best_sel: List[int] = []

    # 1. 按度数从小到大（冲突少的队伍优先）
    order_deg_asc = sorted(all_indices, key=lambda i: degree[i])
    sel1 = greedy_independent_set(order_deg_asc, conflict)
    best_sel = sel1

    # 2. 原始顺序再贪心一次
    sel2 = greedy_independent_set(all_indices, conflict)
    if len(sel2) > len(best_sel):
        best_sel = sel2

    # 3. 多次随机顺序贪心
    for _ in range(tries):
        order_random = all_indices[:]
        random.shuffle(order_random)
        sel = greedy_independent_set(order_random, conflict)
        if len(sel) > len(best_sel):
            best_sel = sel

    # 为了读起来顺眼一点，最后按原索引排序
    best_sel_sorted = sorted(best_sel)
    return best_sel_sorted


def trim_trailing_blank_lines(lines: List[str]) -> List[str]:
    """
    去掉队伍末尾多余的空行，只保留队伍内部的结构。
    （只动末尾连续的空行，不影响中间的空行）
    """
    i = len(lines) - 1
    while i >= 0 and lines[i].strip() == "":
        i -= 1
    return lines[: i + 1]


def save_teams(path: str, teams: List[Dict[str, Any]], indices: List[int]):
    """
    按给定的索引列表把队伍写出，并重新编号 Team0, Team1, Team2, ...
    同时保证：
      - 队伍内部格式原样保持
      - 队伍之间严格只有 1 行空行
    """
    # ★ 这里也用 utf-8-sig，方便记事本识别
    with open(path, "w", encoding="utf-8-sig") as f:
        for new_id, idx in enumerate(indices):  # 从 0 开始
            team = teams[idx]
            f.write(f"Team{new_id}\n")

            body = trim_trailing_blank_lines(team["body_lines"])

            for raw in body:
                # 确保每一行都有换行符
                if raw.endswith("\n"):
                    f.write(raw)
                else:
                    f.write(raw + "\n")

            # 队伍之间加 1 行空行（最后一支不强制）
            if new_id < len(indices) - 1:
                f.write("\n")


def main():
    if not os.path.exists(INPUT_PATH):
        print("找不到输入文件：", INPUT_PATH)
        return

    print("正在读取队伍...")
    teams = load_teams(INPUT_PATH)
    print(f"总共读取到 {len(teams)} 支队伍。")

    print("正在构造冲突图（重合>3 视为冲突）...")
    conflict, _ = build_conflict_graph(teams, max_overlap=3)
    print("构造完成。")

    print("正在进行智能选择（尝试保留更多队伍）...")
    best_indices = smart_select_teams(conflict, tries=80)
    print(f"智能选择后保留 {len(best_indices)} 支队伍。")

    print("正在写入结果到：", OUTPUT_PATH)
    save_teams(OUTPUT_PATH, teams, best_indices)
    print("完成！")


if __name__ == "__main__":
    main()
