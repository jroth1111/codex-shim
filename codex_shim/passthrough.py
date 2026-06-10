from __future__ import annotations

import json
import os
import time
from copy import deepcopy
from pathlib import Path
from typing import TYPE_CHECKING, Any

from aiohttp import ClientSession, web

from . import settings
from .access_log import elapsed_ms as _elapsed_ms
from .access_log import log_access as _log_access
from .errors import error_response
from .passthrough_prepare import prepare_chatgpt_passthrough_body
from .passthrough_upstream import (
    UpstreamProfile,
    align_upstream_to_reference,
    apply_parity_mode,
    apply_upstream_shape,
    dump_passthrough_upstream,
    promote_desktop_direct_upstream_body,
    resolve_upstream_profile,
    snapshot_upstream_response,
    uses_websockets_upstream_beta,
)
from .settings import CHATGPT_MODEL_SLUG, ShimModel
from .translate import SHIM_ENCRYPTED_CONTENT_PREFIX
from .upstream_capture import capture_value
from .wire import ClientDisconnected, WsStreamResponse, open_stream_sink, safe_write, sse_lines, write_sse

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


def rewrite_response_model(
    payload: Any,
    model: str | None,
    *,
    subscription_slugs: frozenset[str] | None = None,
) -> None:
    if not model:
        return
    if subscription_slugs is None:
        from .routing import known_subscription_slugs

        subscription_slugs = known_subscription_slugs()
    if isinstance(payload, dict):
        upstream_model = payload.get("model")
        if upstream_model in subscription_slugs or upstream_model == CHATGPT_MODEL_SLUG:
            payload["model"] = model
        for value in payload.values():
            rewrite_response_model(value, model, subscription_slugs=subscription_slugs)
    elif isinstance(payload, list):
        for item in payload:
            rewrite_response_model(item, model, subscription_slugs=subscription_slugs)


def merge_codex_forward_headers(request: web.Request) -> dict[str, str]:
    forwarded: dict[str, str] = {}
    allow_exact = {
        "session_id",
        "session-id",
        "thread-id",
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


def chatgpt_openai_beta_header(*, profile: UpstreamProfile) -> str:
    override = os.environ.get("CODEX_SHIM_OPENAI_BETA", "").strip()
    if override:
        return override
    if uses_websockets_upstream_beta(profile):
        return "responses_websockets=2026-02-06"
    return "responses=2026-02-06"


def _prepare_upstream_request(
    request: web.Request,
    body: dict[str, Any],
    *,
    compact: bool,
) -> tuple[dict[str, Any], dict[str, str]]:
    sanitized = sanitize_chatgpt_passthrough_body(body)
    profile = resolve_upstream_profile(request, body)
    forwarded = prepare_chatgpt_passthrough_body(
        sanitized,
        compact=compact,
        inject_default_instructions=profile != UpstreamProfile.DESKTOP,
    )
    forwarded_headers = passthrough_forward_headers(request, body)
    forwarded, upstream_headers, applied_profile = apply_upstream_shape(
        request,
        body,
        forwarded,
        forwarded=forwarded_headers,
    )
    if applied_profile in {UpstreamProfile.DESKTOP, UpstreamProfile.CLI}:
        inbound_keys = (
            "input",
            "instructions",
            "tools",
            "include",
            "reasoning",
            "text",
            "tool_choice",
            "parallel_tool_calls",
            "store",
            "stream",
            "type",
            "prompt_cache_key",
        )
        for key in inbound_keys:
            if key in body:
                forwarded[key] = deepcopy(body[key])
            else:
                forwarded.pop(key, None)
        if applied_profile == UpstreamProfile.DESKTOP:
            forwarded = promote_desktop_direct_upstream_body(forwarded)
            forwarded = apply_parity_mode(forwarded)
        elif applied_profile == UpstreamProfile.CLI:
            reasoning = forwarded.get("reasoning")
            if isinstance(reasoning, dict) and "summary" in reasoning:
                trimmed = deepcopy(reasoning)
                trimmed.pop("summary", None)
                if trimmed:
                    forwarded["reasoning"] = trimmed
                else:
                    forwarded.pop("reasoning", None)
    reference_path = (
        os.environ.get("CODEX_SHIM_PASSTHROUGH_REFERENCE_CAPTURE", "").strip()
        or (capture_value(env_name="CODEX_SHIM_PASSTHROUGH_REFERENCE_CAPTURE", config_key="reference_capture") or "")
    )
    reference_aligned = False
    if reference_path and applied_profile in {UpstreamProfile.DESKTOP, UpstreamProfile.CLI}:
        reference = json.loads(Path(reference_path).expanduser().read_text(encoding="utf-8"))
        if isinstance(reference, dict):
            forwarded, upstream_headers = align_upstream_to_reference(
                forwarded,
                upstream_headers,
                reference,
            )
            reference_aligned = True
    if not reference_aligned:
        if applied_profile in {UpstreamProfile.DESKTOP, UpstreamProfile.CLI}:
            model = body.get("model") or forwarded.get("model")
            forwarded["model"] = model if model else CHATGPT_MODEL_SLUG
        else:
            forwarded["model"] = CHATGPT_MODEL_SLUG
    if compact:
        forwarded.pop("stream", None)
    auth_path = settings.DEFAULT_CODEX_AUTH.expanduser()
    auth = json.loads(auth_path.read_text())
    tokens = auth.get("tokens") or {}
    access_token = tokens.get("access_token")
    account_id = tokens.get("account_id") or ""
    if not access_token:
        raise web.HTTPUnauthorized(text="auth.json has no access_token")
    accept = "application/json" if compact or not forwarded.get("stream") else "text/event-stream"
    base_headers = {
        "Authorization": f"Bearer {access_token}",
        "Content-Type": "application/json",
        "Accept": accept,
        "OpenAI-Beta": chatgpt_openai_beta_header(profile=applied_profile),
        "chatgpt-account-id": account_id,
    }
    return forwarded, {**upstream_headers, **base_headers}


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
    try:
        forwarded, headers = _prepare_upstream_request(request, body, compact=False)
    except FileNotFoundError as exc:
        raise web.HTTPUnauthorized(text="~/.codex/auth.json not found") from exc
    except (json.JSONDecodeError, ValueError) as exc:
        raise web.HTTPUnauthorized(text="~/.codex/auth.json is malformed") from exc
    url = "https://chatgpt.com/backend-api/codex/responses"
    started_at = time.monotonic()
    provider_started_at = time.monotonic()
    async with ClientSession(timeout=shim.timeout) as session:
        upstream = await session.post(url, json=forwarded, headers=headers)
        dump_passthrough_upstream(
            url,
            headers,
            forwarded,
            request=request,
            upstream_response=snapshot_upstream_response(upstream.status, upstream.headers),
        )
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
            try:
                return await error_response(upstream)
            finally:
                upstream.release()
        if not forwarded.get("stream"):
            payload = await upstream.json(content_type=None)
            upstream.release()
            provider_ms = _elapsed_ms(provider_started_at)
            rewrite_response_model(payload, response_model_override)
            from .sessions import prepare_passthrough_store_request

            prepared = prepare_passthrough_store_request(request, body)
            shim._store_response_history(prepared, payload)
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
    try:
        forwarded, headers = _prepare_upstream_request(request, body, compact=True)
    except FileNotFoundError as exc:
        raise web.HTTPUnauthorized(text="~/.codex/auth.json not found") from exc
    except (json.JSONDecodeError, ValueError) as exc:
        raise web.HTTPUnauthorized(text="~/.codex/auth.json is malformed") from exc
    original_model = str(body.get("model") or forwarded.get("model") or "")
    url = "https://chatgpt.com/backend-api/codex/responses/compact"
    started_at = time.monotonic()
    provider_started_at = time.monotonic()
    async with ClientSession(timeout=shim.timeout) as session:
        upstream = await session.post(url, json=forwarded, headers=headers)
        dump_passthrough_upstream(
            url,
            headers,
            forwarded,
            request=request,
            upstream_response=snapshot_upstream_response(upstream.status, upstream.headers),
        )
        try:
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
        finally:
            upstream.release()
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
    from .sessions import responses_items_from_input as _items_from_input

    return _items_from_input(value)
