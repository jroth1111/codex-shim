#!/usr/bin/env python3
"""Parse HAR captures into redacted JSONL for RE analysis."""

from __future__ import annotations

import argparse
import json
import re
import sys
from datetime import datetime, timezone
from pathlib import Path
from typing import Any
from urllib.parse import urlparse

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from codex_shim.desktop_decompiled import desktop_decompiled_root  # noqa: E402

REDACT_KEYS = frozenset(
    {
        "authorization",
        "api-key",
        "api_key",
        "access_token",
        "refresh_token",
        "cookie",
        "set-cookie",
        "content",
        "text",
        "input",
        "output",
        "instructions",
        "messages",
        "prompt",
        "developer",
        "system",
        "user",
        "arguments",
        "encrypted_content",
    }
)
HEADER_ALLOWLIST = frozenset(
    {
        "content-type",
        "accept",
        "openai-beta",
        "originator",
        "session_id",
        "x-request-id",
        "x-trace-id",
        "x-codex-model",
        "chatgpt-account-id",
    }
)
SHIM_PATH_RE = re.compile(r"^/v1/(responses|models)")


def _truthy(value: str | None) -> bool:
    return str(value or "").strip().lower() in {"1", "true", "yes", "on"}


def _redact(value: Any, *, depth: int = 0) -> Any:
    if depth > 12:
        return "<max_depth>"
    if isinstance(value, dict):
        out: dict[str, Any] = {}
        for key, item in value.items():
            lowered = str(key).lower()
            if lowered in REDACT_KEYS:
                out[key] = "<redacted>"
            else:
                out[key] = _redact(item, depth=depth + 1)
        return out
    if isinstance(value, list):
        if len(value) > 40:
            return [_redact(value[0], depth=depth + 1), "…", f"<{len(value)} items>"]
        return [_redact(item, depth=depth + 1) for item in value]
    if isinstance(value, str) and len(value) > 500:
        return value[:500] + "…"
    return value


def _parse_body(text: str | None, mime: str | None) -> Any:
    if not text:
        return None
    mime = (mime or "").lower()
    if "json" in mime:
        try:
            return _redact(json.loads(text))
        except json.JSONDecodeError:
            return {"_parse_error": "json", "_preview": text[:200]}
    return {"_raw_preview": text[:200]}


def _entry_record(entry: dict[str, Any], *, scenario: str, source: Path) -> dict[str, Any] | None:
    request = entry.get("request") or {}
    response = entry.get("response") or {}
    url = request.get("url") or ""
    parsed = urlparse(url)
    if parsed.hostname not in {"127.0.0.1", "localhost"}:
        return None
    if not SHIM_PATH_RE.match(parsed.path or ""):
        return None
    headers = {
        str(item.get("name", "")).lower(): str(item.get("value", ""))
        for item in request.get("headers") or []
        if str(item.get("name", "")).lower() in HEADER_ALLOWLIST
    }
    post = request.get("postData") or {}
    body = _parse_body(post.get("text"), post.get("mimeType"))
    resp_content = response.get("content") or {}
    resp_body = _parse_body(resp_content.get("text"), resp_content.get("mimeType"))
    return {
        "scenario": scenario,
        "source_har": str(source),
        "started": entry.get("startedDateTime"),
        "method": request.get("method"),
        "url": url,
        "path": parsed.path,
        "request_headers": headers,
        "request_body": body,
        "status": response.get("status"),
        "response_body": resp_body,
    }


def ingest_har(path: Path, *, scenario: str) -> list[dict[str, Any]]:
    payload = json.loads(path.read_text(encoding="utf-8"))
    entries = payload.get("log", {}).get("entries") or []
    records: list[dict[str, Any]] = []
    for entry in entries:
        if not isinstance(entry, dict):
            continue
        record = _entry_record(entry, scenario=scenario, source=path)
        if record is not None:
            records.append(record)
    return records


def _append_manifest(manifest_path: Path, *, scenario: str, har: Path, out: Path, count: int) -> None:
    if manifest_path.is_file():
        manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    else:
        template = desktop_decompiled_root() / "captures" / "MANIFEST.template.json"
        manifest = json.loads(template.read_text(encoding="utf-8")) if template.is_file() else {"runs": []}
    manifest.setdefault("runs", []).append(
        {
            "scenario": scenario,
            "har": str(har),
            "parsed": str(out),
            "entries": count,
            "ingested_at": datetime.now(timezone.utc).isoformat(),
        }
    )
    manifest_path.parent.mkdir(parents=True, exist_ok=True)
    manifest_path.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("har", type=Path, help="Path to .har file")
    parser.add_argument("--scenario", required=True, help="Scenario id, e.g. S1")
    parser.add_argument("--out", type=Path, help="Output .jsonl (default: captures/parsed/<scenario>_<stem>.jsonl)")
    parser.add_argument("--append-manifest", action="store_true")
    args = parser.parse_args(argv)

    har = args.har.expanduser().resolve()
    if not har.is_file():
        print(f"HAR not found: {har}", file=sys.stderr)
        return 1

    records = ingest_har(har, scenario=args.scenario)
    out = args.out
    if out is None:
        out = desktop_decompiled_root() / "captures" / "parsed" / f"{args.scenario}_{har.stem}.jsonl"
    out = out.expanduser().resolve()
    out.parent.mkdir(parents=True, exist_ok=True)
    with out.open("w", encoding="utf-8") as handle:
        for record in records:
            handle.write(json.dumps(record, default=str) + "\n")

    print(f"wrote {out} ({len(records)} shim entries)")
    if args.append_manifest:
        manifest = desktop_decompiled_root() / "captures" / "MANIFEST.json"
        _append_manifest(manifest, scenario=args.scenario, har=har, out=out, count=len(records))
        print(f"updated {manifest}")
    return 0 if records else 2


if __name__ == "__main__":
    raise SystemExit(main())
