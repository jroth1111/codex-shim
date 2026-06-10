from __future__ import annotations

import json
from typing import TYPE_CHECKING, Any

from aiohttp import ClientSession, web

from .debug_dump import dump_debug_request
from .errors import error_response
from .translate import (
    AnthropicMessagesStreamState,
    anthropic_messages_to_chat,
    chat_completion_to_anthropic_message,
)
from .wire import ClientDisconnected, safe_write, sse_lines, sse_response, write_anthropic_sse

if TYPE_CHECKING:
    from .server import ShimServer
    from .settings import ShimModel


async def anthropic_messages_handler(server: ShimServer, request: web.Request) -> web.StreamResponse:
    body = await request.json()
    body = await server.auto_router.maybe_apply_auto_router(body)
    route = server._route(body, request)
    if route.is_openai_chat:
        forwarded = anthropic_messages_to_chat(body, route.model, route.max_output_tokens)
        return await post_openai_chat_as_anthropic(server, request, route, forwarded)
    if route.is_anthropic:
        forwarded = dict(body)
        forwarded["model"] = route.model
        return await post_anthropic_messages(server, request, route, forwarded)
    raise web.HTTPBadGateway(text=f"Unsupported model provider for /v1/messages: {route.provider}")


async def post_openai_chat_as_anthropic(
    server: ShimServer,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
) -> web.StreamResponse:
    from .server import _join_url, _openai_headers

    url = route.endpoint_url or _join_url(route.base_url, "/chat/completions")
    headers = _openai_headers(route)
    dump_debug_request(route.slug, url, body)
    async with ClientSession(timeout=server.timeout) as session:
        upstream = await session.post(url, json=body, headers=headers)
        if upstream.status >= 400:
            return await anthropic_error_response(upstream)
        if body.get("stream"):
            return await stream_openai_chat_as_anthropic(request, upstream, route)
        payload = await upstream.json(content_type=None)
        upstream.release()
    return web.json_response(chat_completion_to_anthropic_message(payload, route.slug))


async def post_anthropic_messages(
    server: ShimServer,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
) -> web.StreamResponse:
    from .server import _anthropic_headers, _join_url

    url = _join_url(route.base_url, "/messages")
    headers = _anthropic_headers(route)
    async with ClientSession(timeout=server.timeout) as session:
        upstream = await session.post(url, json=body, headers=headers)
        if upstream.status >= 400:
            return await error_response(upstream, slug=route.slug)
        if body.get("stream"):
            return await stream_raw_sse(request, upstream, route.slug)
        payload = await upstream.json(content_type=None)
        upstream.release()
    if isinstance(payload, dict):
        payload["model"] = route.slug
    return web.json_response(payload)


async def stream_openai_chat_as_anthropic(
    request: web.Request,
    upstream,
    route: ShimModel,
) -> web.StreamResponse:
    response = sse_response()
    await response.prepare(request)
    state = AnthropicMessagesStreamState(route.slug)
    try:
        await state.start(response)
        async for line in sse_lines(upstream):
            if line == "[DONE]":
                break
            try:
                event = json.loads(line)
            except json.JSONDecodeError:
                continue
            await state.write_chat_delta(response, event)
        await state.finish(response)
    except ClientDisconnected:
        pass
    finally:
        upstream.release()
    try:
        await response.write_eof()
    except Exception:
        pass
    return response


async def stream_raw_sse(
    request: web.Request,
    upstream,
    model_slug: str | None = None,
) -> web.StreamResponse:
    response = sse_response()
    await response.prepare(request)
    try:
        async for line in sse_lines(upstream):
            if model_slug and line.startswith("{"):
                try:
                    event = json.loads(line)
                    if isinstance(event, dict) and event.get("type") == "message_start":
                        msg = event.get("message")
                        if isinstance(msg, dict):
                            msg["model"] = model_slug
                    await write_anthropic_sse(response, event.get("type", "message"), event)
                    continue
                except json.JSONDecodeError:
                    pass
            await safe_write(response, f"data: {line}\n\n".encode())
    except ClientDisconnected:
        pass
    finally:
        upstream.release()
    try:
        await response.write_eof()
    except Exception:
        pass
    return response


async def anthropic_error_response(upstream) -> web.Response:
    text = await upstream.text()
    message = text
    error_type = "api_error"
    try:
        payload = json.loads(text)
    except json.JSONDecodeError:
        payload = None
    if isinstance(payload, dict):
        err = payload.get("error")
        if isinstance(err, dict):
            message = str(err.get("message") or message)
            error_type = str(err.get("type") or error_type)
        elif payload.get("message"):
            message = str(payload["message"])
    status_type = {
        400: "invalid_request_error",
        401: "authentication_error",
        403: "permission_error",
        404: "not_found_error",
        413: "request_too_large",
        429: "rate_limit_error",
    }.get(upstream.status)
    if status_type:
        error_type = status_type
    body = {
        "type": "error",
        "error": {"type": error_type, "message": message},
    }
    request_id = upstream.headers.get("request-id") or upstream.headers.get("x-request-id")
    if request_id:
        body["request_id"] = request_id
    return web.json_response(body, status=upstream.status)
