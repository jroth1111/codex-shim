from __future__ import annotations

import json
import time
from typing import Any

from aiohttp import web

from ..settings import ShimModel


def log_incoming_request(endpoint: str, body: dict[str, Any]) -> None:
    try:
        tools = body.get("tools") or []
        names = []
        for tool in tools[:80]:
            if isinstance(tool, dict):
                name = tool.get("name") or (tool.get("function") or {}).get("name") or tool.get("type")
                if name:
                    names.append(str(name))
        input_items = body.get("input") or []
        input_summary = []
        if isinstance(input_items, list):
            for item in input_items[-6:]:
                if isinstance(item, dict):
                    item_type = item.get("type") or item.get("role") or "?"
                    extra = ""
                    if item_type == "function_call":
                        extra = f"({item.get('name', '?')})"
                    elif item_type == "function_call_output":
                        extra = f"(call_id={str(item.get('call_id', ''))[:24]})"
                    input_summary.append(f"{item_type}{extra}")
        print(
            f"[req] {endpoint} model={body.get('model')!r} stream={body.get('stream')!r} "
            f"tools={len(tools)} ({names[:8]}) "
            f"input={len(input_items)} ({input_summary})",
            flush=True,
        )
    except Exception as exc:
        print(f"[req] failed to log: {exc}", flush=True)


def log_access(
    request: web.Request,
    route: ShimModel,
    status: int,
    started_at: float,
    *,
    payload: dict[str, Any] | None = None,
    stream: bool,
    error: str | None = None,
    request_body: dict[str, Any] | None = None,
    provider_ms: int | None = None,
    model_route: str | None = None,
    workspace: str | None = None,
    compact_summary_status: str | None = None,
) -> None:
    try:
        usage = usage_summary(payload.get("usage") if isinstance(payload, dict) else None)
        total_ms = elapsed_ms(started_at)
        record: dict[str, Any] = {
            "trace_id": trace_id(request, request_body, payload),
            "path": request.path,
            "status": status,
            "model": route.slug,
            "provider": route.provider,
            "provider_model": route.model,
            "model_route": model_route or model_route_label(route, request_body),
            "stream": stream,
            "latency_ms": total_ms,
            "total_ms": total_ms,
            "provider_ms": provider_ms if provider_ms is not None else total_ms,
            "token_stats": usage,
        }
        if error:
            record["error"] = error
        if workspace:
            record["workspace"] = workspace
        if compact_summary_status:
            record["compact_summary_status"] = compact_summary_status
        print("[access] " + json.dumps(record, sort_keys=True, separators=(",", ":")), flush=True)
    except Exception as exc:
        print(f"[access] failed to log: {exc}", flush=True)


def trace_id(request: web.Request, request_body: dict[str, Any] | None, payload: dict[str, Any] | None) -> str:
    if isinstance(request_body, dict):
        metadata = request_body.get("metadata")
        if isinstance(metadata, dict):
            for key in ("trace_id", "request_id"):
                value = metadata.get(key)
                if value:
                    return str(value)
        for key in ("trace_id", "request_id"):
            value = request_body.get(key)
            if value:
                return str(value)
    for header in ("x-request-id", "x-trace-id", "request-id"):
        value = request.headers.get(header)
        if value:
            return value
    if isinstance(payload, dict):
        value = payload.get("id")
        if value:
            return str(value)
    return f"trace_{int(time.time() * 1000)}"


def model_route_label(route: ShimModel, request_body: dict[str, Any] | None) -> str:
    if route.is_chatgpt:
        return "chatgpt_passthrough"
    if route.is_cursor_acp:
        return "cursor_acp"
    if route.is_cursor_cli:
        return "cursor_cli"
    requested = str((request_body or {}).get("model") or "")
    if requested == route.slug:
        return "direct_slug"
    if requested == route.model:
        return "model_alias"
    if not requested:
        return "fallback"
    return "fallback"


def elapsed_ms(started_at: float) -> int:
    return int((time.monotonic() - started_at) * 1000)


def usage_summary(usage: Any) -> dict[str, Any]:
    if not isinstance(usage, dict):
        return {}
    input_tokens = first_usage_value(usage, "input_tokens", "prompt_tokens", "inputTokens", "inputTokenCount")
    output_tokens = first_usage_value(usage, "output_tokens", "completion_tokens", "outputTokens", "outputTokenCount")
    total_tokens = first_usage_value(usage, "total_tokens", "totalTokens", "totalTokenCount")
    if total_tokens is None and isinstance(input_tokens, int) and isinstance(output_tokens, int):
        total_tokens = input_tokens + output_tokens
    cached_tokens = cached_usage_tokens(usage)
    reasoning_tokens = reasoning_usage_tokens(usage)
    return {
        key: value
        for key, value in {
            "input_tokens": input_tokens,
            "output_tokens": output_tokens,
            "total_tokens": total_tokens,
            "cached_tokens": cached_tokens,
            "reasoning_tokens": reasoning_tokens,
        }.items()
        if value is not None
    }


def first_usage_value(usage: dict[str, Any], *keys: str) -> int | None:
    for key in keys:
        value = usage.get(key)
        if isinstance(value, int):
            return value
    return None


def cached_usage_tokens(usage: dict[str, Any]) -> int | None:
    direct = first_usage_value(usage, "cached_tokens", "cachedTokens")
    if direct is not None:
        return direct
    for key in ("prompt_tokens_details", "input_tokens_details", "inputTokenDetails", "input_token_details"):
        value = usage.get(key)
        if isinstance(value, dict):
            nested = first_usage_value(value, "cached_tokens", "cachedTokens", "cache_read", "cacheReadInputTokens")
            if nested is not None:
                return nested
    return None


def reasoning_usage_tokens(usage: dict[str, Any]) -> int | None:
    direct = first_usage_value(usage, "reasoning_tokens", "reasoningTokens")
    if direct is not None:
        return direct
    for key in ("completion_tokens_details", "output_tokens_details", "outputTokenDetails", "output_token_details"):
        value = usage.get(key)
        if isinstance(value, dict):
            nested = first_usage_value(value, "reasoning_tokens", "reasoningTokens")
            if nested is not None:
                return nested
    return None
