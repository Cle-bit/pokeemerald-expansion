"""
Validate Battle Tower doubles team data for common mistakes.

Checks:
1) EV total must equal 508.
2) IV entries may have at most one zero.
3) All listed moves must exist in the species' learnset (level-up + teachable).

Outputs one line per offending Pokémon with the species name and the problems found.
"""

from __future__ import annotations

import re
from collections import defaultdict
from pathlib import Path
from typing import Dict, Iterable, List, Set


REPO_ROOT = Path(__file__).resolve().parents[1]
DOUBLES_PATH = REPO_ROOT / "src/data/battle_frontier/battle_tower_doubles_teams.h"
SPECIES_INFO_GLOBS = ["src/data/pokemon/species_info/*.h"]
LEVEL_UP_PATH = REPO_ROOT / "src/data/pokemon/level_up_learnsets"
TEACHABLE_PATH = REPO_ROOT / "src/data/pokemon/teachable_learnsets.h"


def read(path: Path) -> str:
    return path.read_text(encoding="utf-8")


def find_species_learnset_mapping() -> Dict[str, Dict[str, str]]:
    """Map SPECIES_* -> {'level': symbol, 'teach': symbol} from species_info files."""
    mapping: Dict[str, Dict[str, str]] = {}
    for glob in SPECIES_INFO_GLOBS:
        for path in REPO_ROOT.glob(glob):
            lines = read(path).splitlines()
            pending_species = None
            current_species = None
            body_lines: List[str] = []
            depth = 0
            for line in lines:
                start_match = re.match(r"\s*\[(SPECIES_[A-Z0-9_]+)\]\s*=", line)
                if start_match and current_species is None:
                    pending_species = start_match.group(1)

                if current_species is None and pending_species and "{" in line:
                    current_species = pending_species
                    pending_species = None
                    body_lines = []
                    depth = 0  # will be updated below

                if current_species is None:
                    continue

                body_lines.append(line)
                depth += line.count("{")
                depth -= line.count("}")

                if depth <= 0:
                    body = "\n".join(body_lines)
                    level = re.search(r"\.levelUpLearnset\s*=\s*(\w+)", body)
                    teach = re.search(r"\.teachableLearnset\s*=\s*(\w+)", body)
                    mapping[current_species] = {
                        "level": level.group(1) if level else "",
                        "teach": teach.group(1) if teach else "",
                    }
                    current_species = None
                    body_lines = []
    return mapping


def parse_level_up_moves() -> Dict[str, Set[str]]:
    """Parse all level-up learnset symbols -> set of MOVE_* names."""
    moves_by_symbol: Dict[str, Set[str]] = {}
    for path in LEVEL_UP_PATH.glob("*.h"):
        text = read(path)
        for match in re.finditer(
            r"static const struct LevelUpMove\s+(\w+)\[\]\s*=\s*\{(.*?)\};",
            text,
            flags=re.S,
        ):
            symbol, body = match.groups()
            moves = set(re.findall(r"MOVE_[A-Z0-9_]+", body))
            moves_by_symbol[symbol] = moves
    return moves_by_symbol


def parse_teachable_moves() -> Dict[str, Set[str]]:
    """Parse teachable learnsets (TM/tutor) -> set of MOVE_* names."""
    text = read(TEACHABLE_PATH)
    moves_by_symbol: Dict[str, Set[str]] = {}
    for match in re.finditer(
        r"static const u16\s+(\w+)\[\]\s*=\s*\{(.*?)\};", text, flags=re.S
    ):
        symbol, body = match.groups()
        moves = set(re.findall(r"MOVE_[A-Z0-9_]+", body))
        moves_by_symbol[symbol] = moves
    return moves_by_symbol


def build_species_allowed_moves() -> Dict[str, Set[str]]:
    mapping = find_species_learnset_mapping()
    level_moves = parse_level_up_moves()
    teachable_moves = parse_teachable_moves()
    allowed: Dict[str, Set[str]] = defaultdict(set)

    for species, symbols in mapping.items():
        if symbols["level"]:
            allowed[species].update(level_moves.get(symbols["level"], set()))
        if symbols["teach"]:
            allowed[species].update(teachable_moves.get(symbols["teach"], set()))
        allowed[species].add("MOVE_NONE")
    return allowed


def parse_doubles_file() -> Iterable[Dict[str, object]]:
    """Yield mon entries from the doubles teams header."""
    text = read(DOUBLES_PATH)
    for match in re.finditer(
        r"\{\s*\.species\s*=\s*(SPECIES_[A-Z0-9_]+)\s*,(.*?)\n\s*\},",
        text,
        flags=re.S,
    ):
        species, body = match.groups()
        iv_match = re.search(r"TRAINER_PARTY_IVS\(([^)]+)\)", body)
        ev_match = re.search(r"TRAINER_PARTY_EVS\(([^)]+)\)", body)
        moves_match = re.search(r"\.moves\s*=\s*\{([^}]+)\}", body)

        ivs = []
        if iv_match:
            ivs = [int(x.strip()) for x in iv_match.group(1).split(",")]

        evs = []
        if ev_match:
            evs = [int(x.strip()) for x in ev_match.group(1).split(",")]

        moves: List[str] = []
        if moves_match:
            moves = [m.strip() for m in moves_match.group(1).split(",")]

        yield {"species": species, "ivs": ivs, "evs": evs, "moves": moves}


def validate():
    allowed_moves = build_species_allowed_moves()
    issues: List[str] = []

    for mon in parse_doubles_file():
        species = mon["species"]
        ivs: List[int] = mon["ivs"]
        evs: List[int] = mon["evs"]
        moves: List[str] = mon["moves"]
        mon_issues: List[str] = []

        if evs and sum(evs) != 508:
            mon_issues.append(f"EV total {sum(evs)}")

        if ivs and sum(1 for v in ivs if v == 0) > 1:
            mon_issues.append(f"IV zeros > 1 ({sum(1 for v in ivs if v == 0)})")

        allowed = allowed_moves.get(species, set())
        invalid_moves = [m for m in moves if m and m not in allowed]
        if invalid_moves:
            mon_issues.append(f"illegal moves: {', '.join(invalid_moves)}")

        if mon_issues:
            issues.append(f"{species}: " + "; ".join(mon_issues))

    if not issues:
        print("No issues found.")
        return

    for line in issues:
        print(line)


if __name__ == "__main__":
    validate()
