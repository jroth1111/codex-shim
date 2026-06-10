#!/usr/bin/env python3
"""Extract app-server protocol schemas from the Desktop codex binary."""

from __future__ import annotations

import argparse
import hashlib
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from codex_shim.desktop_decompiled import require_available  # noqa: E402
from scripts.desktop_re_common import (  # noqa: E402
    codex_binary_path,
    codex_strings_path,
    parse_rpc_methods,
    parse_thread_settings_fields,
    schemas_dir,
    source_version,
    strings_text,
    try_extract_json_blob,
    write_json,
)

SCHEMA_FILES = (
    "codex_app_server_protocol.schemas.json",
    "codex_app_server_protocol.v2.schemas.json",
)


def _looks_like_app_server_schema(payload: dict) -> bool:
    if len(payload) < 5:
        return False
    keys = set(payload)
    if "$schema" in keys or "definitions" in keys or "methods" in keys:
        return True
    if any(isinstance(value, dict) and value for value in payload.values()):
        return len(json.dumps(payload)) > 10_000
    return False


def _extract_from_binary(binary: Path) -> dict[str, dict]:
    data = binary.read_bytes()
    extracted: dict[str, dict] = {}
    for name in SCHEMA_FILES:
        marker = name.encode("ascii")
        idx = data.find(marker)
        if idx < 0:
            continue
        anchor = data.find(b'"thread/start"', idx)
        if anchor < 0:
            anchor = idx
        blob = try_extract_json_blob(data, anchor)
        if blob is None:
            blob = try_extract_json_blob(data, idx)
        if blob is None:
            continue
        payload = json.loads(blob)
        if not _looks_like_app_server_schema(payload):
            continue
        extracted[name] = payload
    return extracted


def _fallback_index(text: str) -> dict[str, object]:
    return {
        "source": "codex.strings.txt",
        "rpc_methods": list(parse_rpc_methods(text)),
        "thread_settings_fields": list(parse_thread_settings_fields(text)),
        "note": "Reduced index from serde-reflection strings; full JSON schema not embedded as contiguous UTF-8.",
    }


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--require", action="store_true", help="Fail if extraction cannot produce v2 or fallback.")
    args = parser.parse_args(argv)

    binary = codex_binary_path()
    strings = codex_strings_path()
    if not binary.is_file() or not strings.is_file():
        message = f"Desktop RE inputs missing: binary={binary} strings={strings}"
        if args.require and not require_available():
            print(message, file=sys.stderr)
            return 1
        print(f"skip schema extraction ({message})", file=sys.stderr)
        return 0

    out = schemas_dir()
    out.mkdir(parents=True, exist_ok=True)
    manifest: dict[str, object] = {
        "desktop_version": source_version(),
        "binary_sha256": hashlib.sha256(binary.read_bytes()).hexdigest(),
        "strings_sha256": hashlib.sha256(strings.read_bytes()).hexdigest(),
        "artifacts": {},
    }

    extracted = _extract_from_binary(binary)
    for name, payload in extracted.items():
        path = out / name
        write_json(path, payload)
        manifest["artifacts"][name] = {
            "path": str(path.relative_to(out.parent.parent)),
            "method": "binary_json_blob",
            "bytes": path.stat().st_size,
        }

    text = strings_text()
    fallback_path = out / "app_server_fallback_index.json"
    write_json(fallback_path, _fallback_index(text))
    manifest["artifacts"]["app_server_fallback_index.json"] = {
        "path": str(fallback_path.relative_to(out.parent.parent)),
        "method": "strings_serde_reflection",
        "bytes": fallback_path.stat().st_size,
    }

    manifest_path = out / "manifest.json"
    write_json(manifest_path, manifest)

    if args.require and "codex_app_server_protocol.v2.schemas.json" not in extracted:
        if "app_server_fallback_index.json" not in manifest["artifacts"]:
            print("schema extraction produced no artifacts", file=sys.stderr)
            return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
