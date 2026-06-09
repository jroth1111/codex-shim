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


def merge_extra_body_params(body: dict[str, Any], extra: dict[str, Any] | None) -> dict[str, Any]:
    """Deep-merge provider-specific body params without forwarding the merge key itself."""
    if not extra:
        return body
    merged = dict(body)
    for key, value in extra.items():
        if key == "extra_body_params":
            continue
        if isinstance(value, dict) and isinstance(merged.get(key), dict):
            nested = dict(merged[key])
            nested.update(value)
            merged[key] = nested
        else:
            merged[key] = value
    merged.pop("extra_body_params", None)
    return merged


def anthropic_stop(reason: Any) -> str:
    return "tool_calls" if reason == "tool_use" else "stop"


def chat_finish_to_anthropic_stop(reason: Any) -> str:
    if reason in {"tool_calls", "function_call"}:
        return "tool_use"
    if reason == "length":
        return "max_tokens"
    if reason == "content_filter":
        return "refusal"
    return "end_turn"


def responses_usage_to_anthropic_usage(usage: dict[str, Any] | None) -> dict[str, Any] | None:
    if usage is None:
        return None
    result = {
        "input_tokens": int(usage.get("input_tokens") or 0),
        "output_tokens": int(usage.get("output_tokens") or 0),
    }
    input_details = usage.get("input_tokens_details")
    if isinstance(input_details, dict):
        cache_read = input_details.get("cache_read_input_tokens", input_details.get("cached_tokens"))
        if isinstance(cache_read, int) and not isinstance(cache_read, bool):
            result["cache_read_input_tokens"] = cache_read
        cache_created = input_details.get("cache_creation_input_tokens")
        if isinstance(cache_created, int) and not isinstance(cache_created, bool):
            result["cache_creation_input_tokens"] = cache_created
    return result


def jsonish(value: Any) -> str:
    if isinstance(value, str):
        return value
    return json.dumps(value, separators=(",", ":"))


def sanitize_string(value: str) -> str:
    value = value.replace("\x00", "")
    return "".join(char for char in value if char in "\n\r\t" or ord(char) >= 0x20)
