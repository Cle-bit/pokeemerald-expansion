import re
import unicodedata
from pathlib import Path
from typing import Dict, List, Tuple

REPO_ROOT = Path(__file__).resolve().parents[2]
INPUT_PATH = REPO_ROOT / "src/data/battle_frontier/vgc_teams_dedup.md"
OUTPUT_PATH = REPO_ROOT / "src/data/battle_frontier/battle_tower_doubles_teams.h"

STAT_ORDER = ["hp", "atk", "def", "spa", "spd", "spe"]
STAT_INDEX = {name: idx for idx, name in enumerate(STAT_ORDER)}

GENDER_MARKS = {"m", "f", "M", "F", "♂", "♀", "雄", "雌", "��", "��"}


def normalize_key(name: str) -> str:
    text = unicodedata.normalize("NFKD", name)
    text = text.encode("ascii", "ignore").decode("ascii")
    text = text.replace("♀", "f").replace("♂", "m")
    text = text.replace("’", "'").replace("‘", "'")
    return re.sub(r"[^a-z0-9]+", "", text.lower())


def build_define_map(path: Path, prefix: str) -> Dict[str, str]:
    text = path.read_text(encoding="utf-8")
    mapping: Dict[str, str] = {}
    for name in re.findall(r"#define\s+(" + re.escape(prefix) + r"_[A-Z0-9_]+)", text):
        base = name[len(prefix) + 1 :]
        key = normalize_key(base)
        if key not in mapping:
            mapping[key] = name
    return mapping


def build_species_map(path: Path) -> Tuple[Dict[str, str], Dict[str, str]]:
    text = path.read_text(encoding="utf-8")
    mapping: Dict[str, str] = {}
    alias: Dict[str, str] = {}
    pattern = re.compile(
        r"#define\s+(SPECIES_[A-Z0-9_]+)\s+([A-Z0-9_]+|0x[0-9A-F]+|\d+)"
    )
    for name, value in pattern.findall(text):
        base = name[len("SPECIES_") :]
        key = normalize_key(base)
        if key not in mapping:
            mapping[key] = name
        if value.startswith("SPECIES_"):
            alias[name] = value
    return mapping, alias


def build_ability_map(path: Path) -> Dict[str, str]:
    text = path.read_text(encoding="utf-8")
    mapping: Dict[str, str] = {}
    for name in set(re.findall(r"\bABILITY_[A-Z0-9_]+\b", text)):
        base = name[len("ABILITY_") :]
        key = normalize_key(base)
        mapping.setdefault(key, name)
    # Manual aliases for Showdown wording
    mapping["asoneglastrier"] = "ABILITY_AS_ONE_ICE_RIDER"
    mapping["asonespectrier"] = "ABILITY_AS_ONE_SHADOW_RIDER"
    return mapping


def build_species_flags() -> Tuple[Dict[str, bool], Dict[str, bool]]:
    legend: Dict[str, bool] = {}
    myth: Dict[str, bool] = {}
    for path in (REPO_ROOT / "src/data/pokemon/species_info").glob("*.h"):
        lines = path.read_text(encoding="utf-8").splitlines()
        pending = None
        current = None
        body: List[str] = []
        depth = 0
        for line in lines:
            start = re.match(r"\s*\[(SPECIES_[A-Z0-9_]+)\]\s*=", line)
            if start and current is None:
                pending = start.group(1)
            if current is None and pending and "{" in line:
                current = pending
                pending = None
                body = []
                depth = 0
            if current is None:
                continue
            body.append(line)
            depth += line.count("{")
            depth -= line.count("}")
            if depth <= 0:
                joined = "\n".join(body)
                if "isLegendary = TRUE" in joined:
                    legend[current] = True
                if "isMythical = TRUE" in joined:
                    myth[current] = True
                current = None
                body = []
    return legend, myth


def resolve_alias(name: str, alias: Dict[str, str]) -> str:
    seen = set()
    current = name
    while current in alias and current not in seen:
        seen.add(current)
        current = alias[current]
    return current


def parse_species_name(line: str) -> str:
    before_at = line.split("@", 1)[0].strip()
    paren_contents = [m.group(1).strip() for m in re.finditer(r"\(([^()]*)\)", before_at)]
    for content in paren_contents:
        if content not in GENDER_MARKS:
            return content
    if paren_contents:
        idx = before_at.find("(")
        if idx > 0:
            return before_at[:idx].strip()
    return before_at


def normalize_stat(token: str) -> str:
    clean = re.sub(r"[^a-z]", "", token.lower())
    replacements = {
        "spatk": "spa",
        "spattack": "spa",
        "spdef": "spd",
        "spdefense": "spd",
        "spd": "spd",
        "spe": "spe",
        "speed": "spe",
    }
    return replacements.get(clean, clean)


def parse_stat_line(text: str, default: int) -> List[int]:
    values = [default] * 6
    for part in text.split("/"):
        part = part.strip()
        if not part:
            continue
        match = re.match(r"(\d+)\s*([A-Za-z]+)", part)
        if not match:
            raise ValueError(f"Cannot parse stat chunk '{part}' from '{text}'")
        amount = int(match.group(1))
        stat_key = normalize_stat(match.group(2))
        if stat_key not in STAT_INDEX:
            raise ValueError(f"Unknown stat '{stat_key}' in '{text}'")
        values[STAT_INDEX[stat_key]] = amount
    return values


def parse_pokemon_block(block: List[str]) -> Dict[str, object]:
    head = block[0]
    species = parse_species_name(head)
    item = head.split("@", 1)[1].strip() if "@" in head else "None"
    ability = None
    nature = None
    evs = [0] * 6
    ivs = [31] * 6
    moves: List[str] = []

    for line in block[1:]:
        stripped = line.strip()
        lower = stripped.lower()
        if not stripped:
            continue
        if lower.startswith("ability:"):
            ability = stripped.split(":", 1)[1].strip()
        elif lower.startswith("evs:"):
            evs = parse_stat_line(stripped.split(":", 1)[1].strip(), 0)
        elif lower.startswith("ivs:"):
            ivs = parse_stat_line(stripped.split(":", 1)[1].strip(), 31)
        elif lower.endswith("nature"):
            nature = stripped.split()[0]
        elif lower.startswith("level:"):
            continue
        elif lower.startswith("tera type:"):
            continue
        elif lower.startswith("shiny:"):
            continue
        elif lower.startswith("dynamax level:"):
            continue
        elif lower.startswith("gigantamax:"):
            continue
        elif lower.startswith("gender:"):
            continue
        elif lower.startswith("happiness:"):
            continue
        elif lower.startswith("pokeball:") or lower.startswith("ball:"):
            continue
        elif stripped.startswith("-"):
            move = stripped[1:].strip()
            if move:
                moves.append(move)
        else:
            raise ValueError(f"Unrecognized line '{line}' in block starting with '{head}'")

    if ability is None:
        raise ValueError(f"Missing ability in block starting with '{head}'")
    if nature is None:
        nature = "Hardy"

    return {
        "species": species,
        "item": item,
        "ability": ability,
        "evs": evs,
        "ivs": ivs,
        "moves": moves,
        "nature": nature,
    }


def load_team_blocks() -> List[Tuple[int, List[List[str]]]]:
    lines = INPUT_PATH.read_text(encoding="utf-8").splitlines()
    teams: List[Tuple[int, List[List[str]]]] = []
    current_team = None
    current_blocks: List[List[str]] = []
    current_mon: List[str] = []

    def flush_mon():
        nonlocal current_mon
        if current_mon:
            current_blocks.append(current_mon)
            current_mon = []

    def flush_team():
        nonlocal current_team, current_blocks
        if current_team is not None:
            flush_mon()
            teams.append((current_team, current_blocks))
        current_blocks = []

    for raw in lines:
        stripped = raw.strip()
        if stripped.lower() == "x":
            continue
        header = re.match(r"^\ufeff?Team(\d+)", raw)
        if header:
            flush_team()
            current_team = int(header.group(1))
            current_mon = []
            continue
        if current_team is None:
            continue
        if stripped == "":
            flush_mon()
            continue
        current_mon.append(stripped)

    flush_team()
    return teams


def to_constant(name: str, mapping: Dict[str, str], label: str) -> str:
    key = normalize_key(name)
    if key in mapping:
        return mapping[key]
    raise KeyError(f"Unknown {label}: '{name}' (key: {key})")


def format_mon(mon: Dict[str, object], indent: str = "        ") -> List[str]:
    moves = list(mon["moves"])
    while len(moves) < 4:
        moves.append("MOVE_NONE")
    if len(moves) > 4:
        raise ValueError(f"Too many moves for {mon['species']}: {moves}")
    return [
        f"{indent}{{",
        f"{indent}    .species = {mon['species']},",
        f"{indent}    .heldItem = {mon['item']},",
        f"{indent}    .ability = {mon['ability']},",
        f"{indent}    .iv = TRAINER_PARTY_IVS({', '.join(str(v) for v in mon['ivs'])}),",
        f"{indent}    .ev = TRAINER_PARTY_EVS({', '.join(str(v) for v in mon['evs'])}),",
        f"{indent}    .moves = {{{', '.join(moves)}}},",
        f"{indent}    .nature = {mon['nature']},",
        f"{indent}}},",
    ]


def main():
    species_map, species_alias = build_species_map(REPO_ROOT / "include/constants/species.h")
    move_map = build_define_map(REPO_ROOT / "include/constants/moves.h", "MOVE")
    item_map = build_define_map(REPO_ROOT / "include/constants/items.h", "ITEM")
    nature_map = build_define_map(REPO_ROOT / "include/constants/pokemon.h", "NATURE")
    ability_map = build_ability_map(REPO_ROOT / "include/constants/abilities.h")

    # Manual species name overrides for Showdown wording
    species_map.update(
        {
            "taurospaldeafire": "SPECIES_TAUROS_PALDEA_BLAZE",
            "taurospaldeawater": "SPECIES_TAUROS_PALDEA_AQUA",
        }
    )

    legend_flags, myth_flags = build_species_flags()

    teams_raw = load_team_blocks()
    normal_teams: List[List[Dict[str, object]]] = []
    legend_teams: List[List[Dict[str, object]]] = []

    for team_id, blocks in teams_raw:
        mons: List[Dict[str, object]] = []
        for block in blocks:
            mon_text = parse_pokemon_block(block)
            species_const = resolve_alias(
                to_constant(mon_text["species"], species_map, "species"), species_alias
            )
            item_const = to_constant(mon_text["item"], item_map, "item")
            ability_const = to_constant(mon_text["ability"], ability_map, "ability")
            nature_const = to_constant(mon_text["nature"], nature_map, "nature")
            move_consts = [to_constant(m, move_map, "move") for m in mon_text["moves"]]

            mons.append(
                {
                    "species": species_const,
                    "item": item_const,
                    "ability": ability_const,
                    "evs": mon_text["evs"],
                    "ivs": mon_text["ivs"],
                    "moves": move_consts,
                    "nature": nature_const,
                }
            )

        legend_count = sum(
            1
            for mon in mons
            if legend_flags.get(mon["species"]) or myth_flags.get(mon["species"])
        )
        if legend_count > 1:
            legend_teams.append(mons)
        else:
            normal_teams.append(mons)

    lines: List[str] = []
    lines.append("static const struct TrainerMon sBattleTowerDoubleNormalTeams[][FRONTIER_DOUBLES_PARTY_SIZE] =")
    lines.append("{")
    lines.append("")
    for team in normal_teams:
        lines.append("    {")
        for mon in team:
            lines.extend(format_mon(mon))
        lines.append("    },")
    lines.append("};")
    lines.append("")
    lines.append("static const struct TrainerMon sBattleTowerDoubleLegendaryTeams[][FRONTIER_DOUBLES_PARTY_SIZE] =")
    lines.append("{")
    lines.append("")
    for team in legend_teams:
        lines.append("    {")
        for mon in team:
            lines.extend(format_mon(mon))
        lines.append("    },")
    lines.append("};")
    lines.append("")
    lines.append("#define BATTLE_TOWER_DOUBLE_NORMAL_TEAM_COUNT ARRAY_COUNT(sBattleTowerDoubleNormalTeams)")
    lines.append("#define BATTLE_TOWER_DOUBLE_LEGENDARY_TEAM_COUNT ARRAY_COUNT(sBattleTowerDoubleLegendaryTeams)")
    lines.append("")

    OUTPUT_PATH.write_text("\n".join(lines), encoding="utf-8")

    print(f"Normal teams: {len(normal_teams)}")
    print(f"Legendary teams: {len(legend_teams)}")
    print(f"Total teams processed: {len(normal_teams) + len(legend_teams)}")


if __name__ == "__main__":
    main()
