#!/usr/bin/env python3
"""Inventory Desktop bundle paths relevant to shim integration."""

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from codex_shim.desktop_decompiled import desktop_decompiled_root  # noqa: E402
from scripts.desktop_re_common import source_version  # noqa: E402

DEFAULT_CODEX_APP = Path("/Applications/Codex.app")


def _interesting_name(name: str) -> bool:
    lowered = name.lower()
    return any(token in lowered for token in ("codex", "openai", "mcp", "pty", "sqlite"))


def _walk(root: Path, *, max_depth: int = 4) -> list[dict[str, object]]:
    entries: list[dict[str, object]] = []
    if not root.is_dir():
        return entries
    for path in sorted(root.rglob("*")):
        rel = path.relative_to(root)
        if len(rel.parts) > max_depth:
            continue
        if path.is_dir():
            if _interesting_name(path.name):
                entries.append({"path": str(rel), "kind": "dir", "interesting": True})
            continue
        entry: dict[str, object] = {
            "path": str(rel),
            "kind": "file",
            "bytes": path.stat().st_size,
            "interesting": _interesting_name(path.name) or path.suffix == ".node",
        }
        entries.append(entry)
    return entries


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--codex-app", type=Path, default=DEFAULT_CODEX_APP)
    args = parser.parse_args(argv)

    app = args.codex_app.expanduser()
    payload: dict[str, object] = {
        "codex_app": str(app),
        "desktop_version": source_version(),
        "unpacked_node_modules": _walk(app / "Contents/Resources/app.asar.unpacked/node_modules"),
        "plugins_openai_bundled": _walk(app / "Contents/Resources/plugins/openai-bundled"),
    }

    out = desktop_decompiled_root() / "extracted" / "bundle_inventory.json"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(payload, indent=2) + "\n", encoding="utf-8")
    print(f"wrote {out}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
