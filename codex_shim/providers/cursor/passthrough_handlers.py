from __future__ import annotations

import time
from typing import TYPE_CHECKING, Any

from aiohttp import web

from ...translate import ResponsesStreamState, normalize_responses_usage
from ...wire import ClientDisconnected, sse_response
from .passthrough import (
    CURSOR_MODEL_SLUG,
    build_cursor_prompt,
    cursor_passthrough_available,
    cursor_upstream_model,
    iter_cursor_agent_events,
)

if TYPE_CHECKING:
    from ...server import ShimServer


async def cursor_passthrough_handler(
    server: ShimServer,
    request: web.Request,
    body: dict[str, Any],
    *,
    response_model_override: str | None = None,
    upstream_model: str | None = None,
    force_non_stream: bool = False,
) -> web.StreamResponse:
    """Route Composer through cursor-agent using Cursor subscription login."""
    if not cursor_passthrough_available():
        raise web.HTTPUnauthorized(
            text="Cursor subscription auth unavailable. Run `cursor-agent login`, then retry."
        )
    slug = response_model_override or str(body.get("model") or CURSOR_MODEL_SLUG)
    upstream = upstream_model or cursor_upstream_model(slug)
    prompt = build_cursor_prompt(body)
    stream = bool(body.get("stream")) and not force_non_stream

    if not stream:
        text = ""
        usage: dict[str, Any] | None = None
        async for event in iter_cursor_agent_events(prompt, upstream):
            if event["type"] == "completed":
                text = str(event.get("text") or text)
            elif event["type"] == "usage":
                usage = event.get("usage") if isinstance(event.get("usage"), dict) else None
            elif event["type"] == "error":
                raise web.HTTPBadGateway(text=str(event.get("message") or "cursor-agent failed"))
        payload: dict[str, Any] = {
            "id": f"resp_{int(time.time() * 1000)}",
            "object": "response",
            "model": slug,
            "status": "completed",
            "output": [
                {
                    "id": "msg_0",
                    "type": "message",
                    "status": "completed",
                    "role": "assistant",
                    "content": [{"type": "output_text", "text": text, "annotations": []}],
                }
            ],
        }
        normalized_usage = normalize_responses_usage(usage)
        if normalized_usage:
            payload["usage"] = normalized_usage
        return web.json_response(payload)

    response = sse_response()
    await response.prepare(request)
    state = ResponsesStreamState(slug)
    try:
        await state.start(response)
        async for event in iter_cursor_agent_events(prompt, upstream):
            if event["type"] == "text_delta":
                await state.write_chat_delta(
                    response,
                    {"choices": [{"delta": {"content": event["delta"]}}]},
                )
            elif event["type"] == "usage":
                normalized_usage = normalize_responses_usage(event.get("usage"))
                if normalized_usage:
                    state.usage = normalized_usage
            elif event["type"] == "error":
                message = str(event.get("message") or "cursor-agent failed")
                await state.write_chat_delta(
                    response,
                    {"choices": [{"delta": {"content": message}}]},
                )
                break
        await state.finish(response)
    except ClientDisconnected:
        pass
    except Exception as exc:
        print(f"[err] cursor passthrough {slug}: {exc}", flush=True)
        raise web.HTTPBadGateway(text=str(exc)) from exc
    try:
        await response.write_eof()
    except Exception:
        pass
    return response
