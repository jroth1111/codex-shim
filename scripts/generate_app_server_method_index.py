#!/usr/bin/env python3
"""Build app-server method index from strings + fallback schema index."""

from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from scripts.desktop_re_common import (  # noqa: E402
    extracted_dir,
    parse_rpc_methods,
    source_version,
    strings_sha256,
    strings_text,
    write_json,
)

PROTO_RE = re.compile(
    r"codex_app_server_protocol::protocol::v2::([a-zA-Z0-9_]+)::([A-Za-z0-9]+)"
)


def _methods_from_fallback() -> list[str]:
    path = extracted_dir() / "schemas" / "app_server_fallback_index.json"
    if not path.is_file():
        return []
    payload = json.loads(path.read_text(encoding="utf-8"))
    return list(payload.get("rpc_methods") or [])


def _protocol_types(text: str) -> dict[str, list[str]]:
    types: dict[str, set[str]] = {}
    for match in PROTO_RE.finditer(text):
        module, name = match.group(1), match.group(2)
        types.setdefault(module, set()).add(name)
    return {module: sorted(names) for module, names in sorted(types.items())}


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--write", action="store_true")
    args = parser.parse_args(argv)

    text = strings_text()
    methods = sorted(set(_methods_from_fallback()) | set(parse_rpc_methods(text)))
    payload = {
        "desktop_version": source_version(),
        "strings_sha256": strings_sha256(),
        "rpc_methods": methods,
        "protocol_v2_types": _protocol_types(text),
        "method_count": len(methods),
    }
    out = extracted_dir() / "app_server_method_index.json"
    if args.write:
        write_json(out, payload)
        print(f"wrote {out} ({len(methods)} methods)")
        return 0
    print(json.dumps(payload, indent=2)[:4000])
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
