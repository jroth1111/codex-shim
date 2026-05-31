from __future__ import annotations

import json
import re
from typing import Any

THINK_RE = re.compile(r"<think>.*?</think>", re.IGNORECASE | re.DOTALL)

class ResponsesInputError(ValueError):
    """Raised when a Responses request contains content this shim cannot translate."""


def strip_think(text: str) -> str:
    return THINK_RE.sub("", text or "")

def parse_json_object(raw: str) -> dict[str, Any] | None:
    if not raw:
        return None
    try:
        parsed = json.loads(raw)
    except json.JSONDecodeError:
        return None
    return parsed if isinstance(parsed, dict) else None


def copy_if_present(src: dict[str, Any], dst: dict[str, Any], src_key: str, dst_key: str | None = None) -> None:
    if src_key in src and src[src_key] is not None:
        dst[dst_key or src_key] = src[src_key]


def anthropic_stop(reason: Any) -> str:
    return "tool_calls" if reason == "tool_use" else "stop"


def jsonish(value: Any) -> str:
    if isinstance(value, str):
        return value
    return json.dumps(value, separators=(",", ":"))


def sanitize_string(value: str) -> str:
    value = value.replace("\x00", "")
    return "".join(char for char in value if char in "\n\r\t" or ord(char) >= 0x20)
