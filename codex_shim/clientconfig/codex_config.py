"""Helpers for safe read/write of ~/.codex/config.toml."""
from __future__ import annotations

import re
import tomllib
from collections import Counter
from pathlib import Path

CODEX_CONFIG_PATH = Path.home() / ".codex" / "config.toml"
_SECTION_HEADER_RE = re.compile(r"^\[([^\]]+)\]\s*$")


def remove_toml_section(text: str, section: str) -> str:
    """Remove every occurrence of a ``[section]`` table block."""
    header = f"[{section}]"
    while header in text:
        lines = text.splitlines()
        output: list[str] = []
        skipping = False
        for line in lines:
            stripped = line.strip()
            if stripped == header:
                skipping = True
                continue
            if skipping:
                if stripped.startswith("[") and stripped != header:
                    skipping = False
                else:
                    continue
            output.append(line)
        text = "\n".join(output) + ("\n" if text.endswith("\n") else "")
    return text


def _split_toml_blocks(text: str) -> tuple[str, list[tuple[str, str]]]:
    preamble_lines: list[str] = []
    blocks: list[tuple[str, str]] = []
    current_section: str | None = None
    current_lines: list[str] = []

    for line in text.splitlines(keepends=True):
        stripped = line.strip()
        match = _SECTION_HEADER_RE.match(stripped)
        if match is not None:
            if current_section is not None:
                blocks.append((current_section, "".join(current_lines)))
            current_section = match.group(1)
            current_lines = [line]
            continue
        if current_section is None:
            preamble_lines.append(line)
        else:
            current_lines.append(line)

    if current_section is not None:
        blocks.append((current_section, "".join(current_lines)))
    return "".join(preamble_lines), blocks


def dedupe_toml_sections(text: str, *, keep: str = "last") -> tuple[str, list[str]]:
    """Collapse repeated ``[section]`` headers so TOML parsers accept the file."""
    preamble, blocks = _split_toml_blocks(text)
    if not blocks:
        return text, []

    counts = Counter(name for name, _ in blocks)
    duplicates = {name for name, count in counts.items() if count > 1}
    if not duplicates:
        return text, []

    removed: list[str] = []
    if keep == "last":
        last_index = {name: index for index, (name, _) in enumerate(blocks)}
        kept_blocks = []
        for index, (name, block) in enumerate(blocks):
            if name in duplicates and index != last_index[name]:
                removed.append(name)
                continue
            kept_blocks.append(block)
    else:
        seen: set[str] = set()
        kept_blocks = []
        for name, block in blocks:
            if name in duplicates:
                if name in seen:
                    removed.append(name)
                    continue
                seen.add(name)
            kept_blocks.append(block)

    repaired = preamble + "".join(kept_blocks)
    if text.endswith("\n") and not repaired.endswith("\n"):
        repaired += "\n"
    return repaired, removed


def validate_toml_text(text: str, *, path: Path | None = None) -> None:
    label = str(path or CODEX_CONFIG_PATH)
    try:
        tomllib.loads(text)
    except tomllib.TOMLDecodeError as exc:
        raise ValueError(f"invalid TOML in {label}: {exc}") from exc


def repair_codex_config_text(text: str, *, keep: str = "last") -> tuple[str, list[str]]:
    repaired, removed = dedupe_toml_sections(text, keep=keep)
    validate_toml_text(repaired)
    return repaired, removed


def read_codex_config(path: Path = CODEX_CONFIG_PATH) -> str:
    if not path.exists():
        return ""
    return path.read_text(encoding="utf-8")


def write_codex_config(
    text: str,
    path: Path = CODEX_CONFIG_PATH,
    *,
    repair: bool = True,
    keep: str = "last",
) -> list[str]:
    payload = text
    removed: list[str] = []
    if repair:
        payload, removed = dedupe_toml_sections(payload, keep=keep)
    validate_toml_text(payload, path=path)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(payload, encoding="utf-8")
    return removed


def repair_codex_config(path: Path = CODEX_CONFIG_PATH, *, keep: str = "last") -> list[str]:
    if not path.exists():
        return []
    original = path.read_text(encoding="utf-8")
    repaired, removed = repair_codex_config_text(original, keep=keep)
    if repaired != original:
        path.write_text(repaired, encoding="utf-8")
    return removed
