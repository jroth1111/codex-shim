"""OpenAI chat-completions transport."""
from __future__ import annotations

import json
import time
from typing import Any

from aiohttp import ClientSession, web

from ..errors import error_response
from ..observability import dump_debug_request, elapsed_ms, log_access
from ..sessions import PreparedResponsesRequest
from ..settings import ShimModel
from ..translate import (
    chat_completion_to_response,
    merge_extra_body_params,
)
from ..wire import (
    ClientDisconnected,
    StreamSink,
    WsStreamResponse,
    open_stream_sink,
    safe_write,
    sse_lines,
    write_sse,
)
from .common import (
    ProviderRuntime,
    attach_response_metadata,
    executed_tool_count_from_response_payload,
    responses_stream_state,
    shim_response_metadata,
)
from .http import join_url, openai_headers


async def post_openai_chat(
    runtime: ProviderRuntime,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
    as_responses: bool,
    prepared: PreparedResponsesRequest | None = None,
    stream_response: WsStreamResponse | None = None,
) -> StreamSink:
    started_at = time.monotonic()
    provider_started_at = time.monotonic()
    url = route.endpoint_url or join_url(route.base_url, "/chat/completions")
    headers = openai_headers(route)
    upstream_body = merge_extra_body_params(body, route.extra_body_params)
    dump_debug_request(route.slug, url, upstream_body)
    async with ClientSession(timeout=runtime.timeout) as session:
        upstream = await session.post(url, json=upstream_body, headers=headers)
        try:
            if upstream.status >= 400:
                log_access(
                    request,
                    route,
                    upstream.status,
                    started_at,
                    stream=bool(body.get("stream")),
                    error="upstream_error",
                    request_body=prepared.body if prepared is not None else body,
                    provider_ms=elapsed_ms(provider_started_at),
                )
                return await error_response(upstream, slug=route.slug)
            if body.get("stream"):
                # _stream_openai_chat owns the response and releases it in its finally block.
                return await stream_openai_chat(
                runtime,
                    request,
                    upstream,
                    route,
                    as_responses,
                    prepared=prepared,
                    started_at=started_at,
                    stream_response=stream_response,
                )
            payload = await upstream.json(content_type=None)
            provider_ms = elapsed_ms(provider_started_at)
        finally:
            upstream.release()
    if as_responses:
        response_payload = attach_response_metadata(
            chat_completion_to_response(payload, route.slug),
            route,
            prepared,
        )
        if prepared is not None:
            runtime.store_history(prepared, response_payload, route=route)
        resp = web.json_response(response_payload)
        executed_tool_count = executed_tool_count_from_response_payload(response_payload)
        if executed_tool_count > 0:
            setattr(resp, "_codex_shim_executed_tool_count", executed_tool_count)
        log_access(
            request,
            route,
            200,
            started_at,
            payload=response_payload,
            stream=False,
            request_body=prepared.body if prepared is not None else body,
            provider_ms=provider_ms,
        )
        return resp
    log_access(request, route, 200, started_at, payload=payload, stream=False, request_body=body, provider_ms=provider_ms)
    return web.json_response(payload)


async def stream_openai_chat(
    runtime: ProviderRuntime,
    request: web.Request,
    upstream,
    route: ShimModel,
    as_responses: bool,
    prepared: PreparedResponsesRequest | None = None,
    started_at: float | None = None,
    stream_response: WsStreamResponse | None = None,
) -> StreamSink:
    started_at = started_at or time.monotonic()
    response = await open_stream_sink(request, stream_response)
    if as_responses:
        state = responses_stream_state(route, (prepared.body if prepared is not None else {}).get("tools"))
        state.metadata = shim_response_metadata(route, prepared)
    try:
        if as_responses:
            await state.start(response)
        async for line in sse_lines(upstream):
            if line == "[DONE]":
                break
            try:
                event = json.loads(line)
            except json.JSONDecodeError:
                continue
            if as_responses:
                await state.write_chat_delta(response, event)
            else:
                await write_sse(response, event)
        if as_responses:
            final_response = await state.finish(response)
            if prepared is not None:
                runtime.store_history(prepared, final_response, route=route)
            log_access(request, route, 200, started_at, payload=final_response, stream=True)
        else:
            await safe_write(response, b"data: [DONE]\n\n")
            log_access(request, route, 200, started_at, stream=True)
    except ClientDisconnected:
        pass
    finally:
        upstream.release()
    try:
        await response.write_eof()
    except Exception:
        pass
    return response

