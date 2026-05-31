from __future__ import annotations

from typing import Any


def normalize_responses_usage(usage: Any) -> dict[str, Any] | None:
    if not isinstance(usage, dict):
        return None

    input_tokens = _int_token(usage.get("input_tokens"))
    if input_tokens is None:
        input_tokens = _int_token(usage.get("prompt_tokens"))

    output_tokens = _int_token(usage.get("output_tokens"))
    if output_tokens is None:
        output_tokens = _int_token(usage.get("completion_tokens"))

    total_tokens = _int_token(usage.get("total_tokens"))
    if total_tokens is None and input_tokens is not None and output_tokens is not None:
        total_tokens = input_tokens + output_tokens

    if input_tokens is None:
        input_tokens = max(total_tokens - output_tokens, 0) if total_tokens is not None and output_tokens is not None else 0
    if output_tokens is None:
        output_tokens = max(total_tokens - input_tokens, 0) if total_tokens is not None else 0
    if total_tokens is None:
        total_tokens = input_tokens + output_tokens

    normalized: dict[str, Any] = {
        "input_tokens": input_tokens,
        "output_tokens": output_tokens,
        "total_tokens": total_tokens,
    }

    input_details: dict[str, Any] = {}
    if isinstance(usage.get("input_tokens_details"), dict):
        input_details.update(usage["input_tokens_details"])
    if isinstance(usage.get("prompt_tokens_details"), dict):
        input_details.update(usage["prompt_tokens_details"])

    cache_read = _int_token(usage.get("cache_read_input_tokens"))
    if cache_read is not None:
        input_details.setdefault("cached_tokens", cache_read)
        input_details.setdefault("cache_read_input_tokens", cache_read)
    cache_created = _int_token(usage.get("cache_creation_input_tokens"))
    if cache_created is not None:
        input_details.setdefault("cache_creation_input_tokens", cache_created)

    if input_details:
        normalized["input_tokens_details"] = input_details

    output_details: dict[str, Any] = {}
    if isinstance(usage.get("output_tokens_details"), dict):
        output_details.update(usage["output_tokens_details"])
    if isinstance(usage.get("completion_tokens_details"), dict):
        output_details.update(usage["completion_tokens_details"])
    if output_details:
        normalized["output_tokens_details"] = output_details

    return normalized


def _int_token(value: Any) -> int | None:
    if isinstance(value, bool):
        return None
    if isinstance(value, int):
        return value
    if isinstance(value, float) and value.is_integer():
        return int(value)
    return None
