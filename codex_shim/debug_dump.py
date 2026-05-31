from __future__ import annotations

import json
import os
from pathlib import Path
from typing import Any


DEBUG_DIR = Path(__file__).resolve().parents[1] / ".codex-shim"

SENSITIVE_KEYS = {
    "content",
    "text",
    "input",
    "output",
    "messages",
    "prompt",
    "instructions",
    "developer",
    "system",
    "user",
}


def dump_debug_request(slug: str, url: str, body: dict[str, Any]) -> None:
    if not _truthy(os.environ.get("CODEX_SHIM_DEBUG_DUMP")):
        return
    try:
        dump_path = Path(os.environ.get("CODEX_SHIM_DEBUG_DUMP_PATH") or (DEBUG_DIR / "last_request.json")).expanduser()
        dump_path.parent.mkdir(parents=True, exist_ok=True)
        request_body = body if _truthy(os.environ.get("CODEX_SHIM_DEBUG_DUMP_FULL")) else _redacted(body)
        payload = {"slug": slug, "url": url, "body": request_body}
        full = json.dumps(payload, indent=2, default=str)
        if len(full) > 2_000_000:
            messages = body.get("messages") or []
            summary = {
                "slug": slug,
                "url": url,
                "_truncated": True,
                "_full_size": len(full),
                "message_count": len(messages),
                "tool_count": len(body.get("tools") or []),
                "last_3_messages": _redacted(messages[-3:]),
            }
            dump_path.write_text(json.dumps(summary, indent=2, default=str))
        else:
            dump_path.write_text(full)
    except OSError as exc:
        print(f"[debug] dump failed: {exc}", flush=True)


def _truthy(value: str | None) -> bool:
    return str(value or "").strip().lower() in {"1", "true", "yes", "on", "full"}


def _redacted(value: Any) -> Any:
    if isinstance(value, dict):
        result: dict[str, Any] = {}
        for key, item in value.items():
            lowered = str(key).lower()
            if lowered in SENSITIVE_KEYS:
                result[key] = _redaction_summary(item)
            else:
                result[key] = _redacted(item)
        return result
    if isinstance(value, list):
        return [_redacted(item) for item in value]
    return value


def _redaction_summary(value: Any) -> dict[str, Any]:
    summary: dict[str, Any] = {"_redacted": True}
    if isinstance(value, str):
        summary["type"] = "str"
        summary["chars"] = len(value)
    elif isinstance(value, list):
        summary["type"] = "list"
        summary["items"] = len(value)
    elif isinstance(value, dict):
        summary["type"] = "dict"
        summary["keys"] = sorted(str(key) for key in value.keys())
    elif value is None:
        summary["type"] = "none"
    else:
        summary["type"] = type(value).__name__
    return summary
