from __future__ import annotations

import json
import os
import time
from copy import deepcopy
from typing import TYPE_CHECKING, Any

from aiohttp import ClientSession, web

from .access_log import elapsed_ms as _elapsed_ms
from .access_log import log_access as _log_access
from .errors import error_response
from .responses_ws import WsStreamResponse
from . import settings
from .settings import CHATGPT_MODEL_SLUG, ShimModel
from .streaming import ClientDisconnected, open_stream_sink, safe_write, sse_lines, write_sse
from .passthrough_prepare import prepare_chatgpt_passthrough_body
from .translate import SHIM_ENCRYPTED_CONTENT_PREFIX

if TYPE_CHECKING:
    from .server import ShimServer


_DROP_ITEM = object()


def sanitize_chatgpt_passthrough_body(body: dict[str, Any]) -> dict[str, Any]:
    sanitized = sanitize_chatgpt_passthrough_value(body)
    return sanitized if isinstance(sanitized, dict) else {}


def sanitize_chatgpt_passthrough_value(value: Any) -> Any:
    if isinstance(value, list):
        output = []
        for item in value:
            sanitized = sanitize_chatgpt_passthrough_value(item)
            if sanitized is not _DROP_ITEM:
                output.append(sanitized)
        return output
    if isinstance(value, dict):
        if value.get("type") == "reasoning" and has_shim_encrypted_content(value):
            return _DROP_ITEM
        output = {}
        for key, item in value.items():
            if key == "encrypted_content" and isinstance(item, str) and item.startswith(SHIM_ENCRYPTED_CONTENT_PREFIX):
                continue
            sanitized = sanitize_chatgpt_passthrough_value(item)
            if sanitized is not _DROP_ITEM:
                output[key] = sanitized
        return output
    return value


def has_shim_encrypted_content(value: dict[str, Any]) -> bool:
    encrypted_content = value.get("encrypted_content")
    return isinstance(encrypted_content, str) and encrypted_content.startswith(SHIM_ENCRYPTED_CONTENT_PREFIX)


def rewrite_response_model(payload: Any, model: str | None) -> None:
    if not model:
        return
    if isinstance(payload, dict):
        if payload.get("model") == CHATGPT_MODEL_SLUG:
            payload["model"] = model
        for value in payload.values():
            rewrite_response_model(value, model)
    elif isinstance(payload, list):
        for item in payload:
            rewrite_response_model(item, model)


def merge_codex_forward_headers(request: web.Request) -> dict[str, str]:
    forwarded: dict[str, str] = {}
    allow_exact = {
        "session_id",
        "x-request-id",
        "x-trace-id",
        "x-client-request-id",
        "request-id",
        "traceparent",
        "tracestate",
        "cf-ray",
        "x-oai-attestation",
        "x-openai-subagent",
        "x-responsesapi-include-timing-metrics",
    }
    for key, value in request.headers.items():
        if not value:
            continue
        lower = key.lower()
        if lower in {"authorization", "host", "content-length", "content-type", "accept"}:
            continue
        if lower in allow_exact or lower.startswith("x-codex-"):
            forwarded[key] = value
    return forwarded


def metadata_as_forward_headers(body: dict[str, Any]) -> dict[str, str]:
    forwarded: dict[str, str] = {}
    metadata = body.get("metadata")
    if isinstance(metadata, dict):
        trace_id = metadata.get("trace_id")
        if trace_id:
            forwarded["x-trace-id"] = str(trace_id)
        request_id = metadata.get("request_id")
        if request_id:
            forwarded["x-request-id"] = str(request_id)
    for key, header in (("trace_id", "x-trace-id"), ("request_id", "x-request-id")):
        value = body.get(key)
        if value and header not in {existing.lower() for existing in forwarded}:
            forwarded[header] = str(value)
    return forwarded


def passthrough_forward_headers(request: web.Request, body: dict[str, Any]) -> dict[str, str]:
    merged = merge_codex_forward_headers(request)
    existing = {key.lower() for key in merged}
    for key, value in metadata_as_forward_headers(body).items():
        if key.lower() not in existing:
            merged[key] = value
    return merged


def chatgpt_openai_beta_header() -> str:
    return os.environ.get("CODEX_SHIM_OPENAI_BETA", "responses=2026-02-06").strip() or "responses=2026-02-06"


async def chatgpt_passthrough(
    shim: ShimServer,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
    *,
    response_model_override: str | None = None,
    ws_stream: WsStreamResponse | None = None,
) -> web.StreamResponse:
    """Forward a Responses request to chatgpt.com using the user's Codex auth."""
    auth_path = settings.DEFAULT_CODEX_AUTH.expanduser()
    try:
        auth = json.loads(auth_path.read_text())
    except FileNotFoundError:
        raise web.HTTPUnauthorized(text="~/.codex/auth.json not found")
    tokens = auth.get("tokens") or {}
    access_token = tokens.get("access_token")
    account_id = tokens.get("account_id") or ""
    if not access_token:
        raise web.HTTPUnauthorized(text="auth.json has no access_token")
    forwarded = prepare_chatgpt_passthrough_body(sanitize_chatgpt_passthrough_body(body), compact=False)
    forwarded["model"] = CHATGPT_MODEL_SLUG
    headers = {
        "Authorization": f"Bearer {access_token}",
        "Content-Type": "application/json",
        "Accept": "text/event-stream" if forwarded.get("stream") else "application/json",
        "OpenAI-Beta": chatgpt_openai_beta_header(),
        "originator": "codex_cli_rs",
        "chatgpt-account-id": account_id,
        "session_id": request.headers.get("session_id", ""),
        **passthrough_forward_headers(request, body),
    }
    url = "https://chatgpt.com/backend-api/codex/responses"
    started_at = time.monotonic()
    provider_started_at = time.monotonic()
    async with ClientSession(timeout=shim.timeout) as session:
        upstream = await session.post(url, json=forwarded, headers=headers)
        if upstream.status >= 400:
            _log_access(
                request,
                route,
                upstream.status,
                started_at,
                stream=bool(forwarded.get("stream")),
                error="upstream_error",
                request_body=body,
                provider_ms=_elapsed_ms(provider_started_at),
            )
            return await error_response(upstream)
        if not forwarded.get("stream"):
            payload = await upstream.json(content_type=None)
            provider_ms = _elapsed_ms(provider_started_at)
            rewrite_response_model(payload, response_model_override)
            store_body = shim._store_body_with_session(body, request)
            shim._store_response_history(store_body, payload)
            _log_access(
                request,
                route,
                200,
                started_at,
                payload=payload,
                stream=False,
                request_body=body,
                provider_ms=provider_ms,
            )
            return web.json_response(payload)
        response = await open_stream_sink(request, ws_stream)
        parse_sse = bool(response_model_override or ws_stream is not None)
        try:
            if parse_sse:
                async for line in sse_lines(upstream):
                    if line == "[DONE]":
                        break
                    try:
                        payload = json.loads(line)
                    except json.JSONDecodeError:
                        await safe_write(response, f"data: {line}\n\n".encode())
                        continue
                    if response_model_override:
                        rewrite_response_model(payload, response_model_override)
                    await write_sse(response, payload)
            else:
                async for chunk in upstream.content.iter_chunked(4096):
                    await safe_write(response, chunk)
        except ClientDisconnected:
            pass
        finally:
            upstream.release()
        _log_access(request, route, 200, started_at, stream=True, request_body=body)
        try:
            await response.write_eof()
        except Exception:
            pass
        return response


async def chatgpt_compact_passthrough(
    shim: ShimServer,
    request: web.Request,
    route: ShimModel,
    body: dict[str, Any],
) -> web.StreamResponse:
    auth_path = settings.DEFAULT_CODEX_AUTH.expanduser()
    try:
        auth = json.loads(auth_path.read_text())
    except FileNotFoundError:
        raise web.HTTPUnauthorized(text="~/.codex/auth.json not found")
    tokens = auth.get("tokens") or {}
    access_token = tokens.get("access_token")
    account_id = tokens.get("account_id") or ""
    if not access_token:
        raise web.HTTPUnauthorized(text="auth.json has no access_token")
    forwarded = prepare_chatgpt_passthrough_body(sanitize_chatgpt_passthrough_body(body), compact=True)
    original_model = str(forwarded.get("model") or "")
    forwarded["model"] = CHATGPT_MODEL_SLUG
    forwarded.pop("stream", None)
    headers = {
        "Authorization": f"Bearer {access_token}",
        "Content-Type": "application/json",
        "Accept": "application/json",
        "OpenAI-Beta": chatgpt_openai_beta_header(),
        "originator": "codex_cli_rs",
        "chatgpt-account-id": account_id,
        "session_id": request.headers.get("session_id", ""),
        **passthrough_forward_headers(request, body),
    }
    url = "https://chatgpt.com/backend-api/codex/responses/compact"
    started_at = time.monotonic()
    provider_started_at = time.monotonic()
    async with ClientSession(timeout=shim.timeout) as session:
        upstream = await session.post(url, json=forwarded, headers=headers)
        if upstream.status >= 400:
            _log_access(
                request,
                route,
                upstream.status,
                started_at,
                stream=False,
                error="upstream_error",
                request_body=body,
                provider_ms=_elapsed_ms(provider_started_at),
            )
            return await error_response(upstream)
        payload = await upstream.json(content_type=None)
        provider_ms = _elapsed_ms(provider_started_at)
    rewrite_response_model(payload, original_model or None)
    _log_access(
        request,
        route,
        200,
        started_at,
        payload=payload,
        stream=False,
        request_body=body,
        provider_ms=provider_ms,
    )
    return web.json_response(payload)


def responses_items_from_input(value: Any) -> list[dict[str, Any]]:
    if value is None:
        return []
    if isinstance(value, str):
        return [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": value}]}]
    if isinstance(value, dict):
        return [deepcopy(value)]
    if isinstance(value, list):
        items: list[dict[str, Any]] = []
        for item in value:
            if isinstance(item, str):
                items.append({"type": "message", "role": "user", "content": [{"type": "input_text", "text": item}]})
            elif isinstance(item, dict):
                items.append(deepcopy(item))
        return items
    return [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": str(value)}]}]
