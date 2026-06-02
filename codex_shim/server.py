from __future__ import annotations

import argparse
import asyncio
from contextlib import suppress
import json
import time
from pathlib import Path
from typing import Any
from urllib.parse import urljoin

from aiohttp import ClientSession, ClientTimeout, web

from .access_log import elapsed_ms as _elapsed_ms
from .access_log import log_access as _log_access
from .access_log import log_incoming_request as _log_incoming_request
from .compact import as_compact_response as _as_compact_response
from .cursor_acp import CursorAcpError, cursor_acp_chat_payload, cursor_acp_response_payload, run_cursor_acp
from .cursor_cli import CursorCliError, run_cursor_cli
from .debug_dump import DEBUG_DIR
from .debug_dump import dump_debug_request as _dump_debug_request
from .errors import (
    cursor_acp_error_response as _cursor_acp_error_response,
    cursor_acp_stream_error as _cursor_acp_stream_error,
    cursor_agent_error_response as _cursor_agent_error_response,
    cursor_agent_stream_error as _cursor_agent_stream_error,
    error_response as _error_response,
    invalid_request_error_response as _invalid_request_error_response,
    unsupported_capability_response as _unsupported_capability_response,
    unsupported_compact_response as _unsupported_compact_response,
)
from .hostguard import build_allowed_hosts, host_guard_middleware
from .image_gate import needs_image_generation
from .governance import GovernanceAuditSink
from .gateway import GatewayHandlers
from .observability import ObservabilitySink
from .passthrough import (
    chatgpt_compact_passthrough,
    chatgpt_passthrough,
    merge_codex_forward_headers as _merge_codex_forward_headers,
    metadata_as_forward_headers as _metadata_as_forward_headers,
    passthrough_forward_headers as _passthrough_forward_headers,
    rewrite_response_model as _rewrite_response_model,
    sanitize_chatgpt_passthrough_body as _sanitize_chatgpt_passthrough_body,
)
from .picker import CODEX_CONFIG_PATH
from .picker import current_managed_model as _current_managed_model
from .picker import picker_html as _picker_html
from .picker import restart_codex_app as _restart_codex_app
from .picker import set_active_model as _set_active_model
from .responses_request import PreparedResponsesRequest
from .responses_ws import WsStreamResponse
from .routing import resolve_model_route
from .providers import ProviderDispatcher
from .response_store import ResponseStore, default_store_path
from .sessions import SessionService
from .persistence import JsonOperationalStore
from .settings import (
    CHATGPT_MODEL_SLUG,
    COMPACT_UNSUPPORTED,
    DEFAULT_CODEX_AUTH,
    DEFAULT_SETTINGS,
    DEFAULT_HOST,
    DEFAULT_PORT,
    ModelSettings,
    ShimModel,
    chatgpt_passthrough_available,
)
from .capabilities import route_capabilities
from .streaming import ClientDisconnected, ResponsesStreamState
from .streaming import anthropic_stream_to_chat_chunk as _anthropic_stream_to_chat_chunk
from .streaming import open_stream_sink as _open_stream_sink
from .streaming import safe_write as _safe_write
from .streaming import sse_lines as _sse_lines
from .streaming import write_sse as _write_sse
from .translate import (
    ResponsesInputError,
    anthropic_to_chat_response,
    anthropic_to_response,
    chat_completion_to_response,
    chat_to_responses_request,
    chat_to_anthropic,
    responses_to_anthropic,
    responses_to_chat,
    validate_responses_input,
)


async def _await_cursor_inference(coro):
    """Run cursor CLI/ACP inference; cancel the child process if the request task is cancelled."""
    task = asyncio.create_task(coro)
    try:
        return await task
    except asyncio.CancelledError:
        if not task.done():
            task.cancel()
        with suppress(asyncio.CancelledError):
            await task
        raise


def _executed_tool_count_from_response_payload(response_payload: dict[str, Any] | None) -> int:
    """
    Best-effort extraction of how many tools were executed in this completed turn.

    For non-stream `/v1/responses`, provider translators build `output` items that
    include tool-call-like types (e.g. `web_search_call`, `local_shell_call`,
    `function_call`). We count those here.
    """
    if not isinstance(response_payload, dict):
        return 0
    output = response_payload.get("output")
    if not isinstance(output, list):
        return 0
    tool_types = {
        "function_call",
        "local_shell_call",
        "web_search_call",
        "image_generation_call",
        "tool_search_call",
        "mcp_tool_call",
        "custom_tool_call",
        "function_call_output",
        "tool_result",
    }
    count = 0
    for item in output:
        if not isinstance(item, dict):
            continue
        t = str(item.get("type") or "")
        if t in tool_types or t.endswith("_call") or t.endswith("_result"):
            count += 1
    return count


def _shim_response_metadata(route: ShimModel, prepared: PreparedResponsesRequest | None) -> dict[str, Any]:
    caps = route_capabilities(route)
    metadata: dict[str, Any] = {
        "shim_route": {
            "provider": route.provider,
            "transport": route.transport,
            "capabilities": {
                "local_shell": caps.local_shell,
                "web_search": caps.web_search,
                "tool_search": caps.tool_search,
                "image_generation": caps.image_generation,
                "mcp_tools": caps.mcp_tools,
                "reasoning": caps.reasoning,
            },
        }
    }
    if prepared is not None and prepared.chained_from_previous:
        metadata["shim_history"] = {"expanded_previous_response_id": True}
    return metadata


def _attach_response_metadata(
    response_payload: dict[str, Any],
    route: ShimModel,
    prepared: PreparedResponsesRequest | None,
) -> dict[str, Any]:
    payload = dict(response_payload)
    existing = payload.get("metadata")
    merged = dict(existing) if isinstance(existing, dict) else {}
    merged.update(_shim_response_metadata(route, prepared))
    payload["metadata"] = merged
    return payload


class ShimServer:
    def __init__(
        self,
        settings_path: Path = DEFAULT_SETTINGS,
        host: str = DEFAULT_HOST,
        response_store_path: Path | None = None,
    ):
        self.settings = ModelSettings(settings_path)
        self.host = host
        self.timeout = ClientTimeout(total=None, sock_connect=120, sock_read=None)
        self.response_store = ResponseStore(path=response_store_path or default_store_path())
        self.session_service = SessionService(self.response_store, self._content_to_debug_text)
        self.provider_dispatcher = ProviderDispatcher(
            openai_handler=self._provider_openai_dispatch,
            anthropic_handler=self._provider_anthropic_dispatch,
            cursor_acp_handler=self._provider_cursor_acp_dispatch,
            cursor_cli_handler=self._provider_cursor_cli_dispatch,
        )
        runtime_root = default_store_path().parent
        self.governance = GovernanceAuditSink(runtime_root / "governance_events.jsonl")
        self.observability = ObservabilitySink(runtime_root / "observability_events.jsonl")
        self.operational_store = JsonOperationalStore(runtime_root / "ops")
        self.gateway_handlers = GatewayHandlers(self)

    def app(self) -> web.Application:
        allowed_hosts = build_allowed_hosts(self.host)
        app = web.Application(
            client_max_size=64 * 1024 * 1024,
            middlewares=[host_guard_middleware(allowed_hosts)],
        )
        app.router.add_get("/health", self.health)
        app.router.add_get("/v1/models", self.models)
        app.router.add_post("/v1/chat/completions", self.gateway_handlers.chat_completions)
        app.router.add_post("/v1/responses", self.gateway_handlers.responses)
        app.router.add_get("/v1/responses", self.gateway_handlers.responses_websocket)
        app.router.add_post("/v1/responses/compact", self.gateway_handlers.responses_compact)
        app.router.add_get("/picker", self.picker_page)
        app.router.add_get("/api/models", self.api_models)
        app.router.add_post("/api/switch", self.switch_model)
        return app

    async def picker_page(self, _request: web.Request) -> web.Response:
        return web.Response(text=_picker_html(), content_type="text/html")

    async def api_models(self, request: web.Request) -> web.Response:
        current = _current_managed_model()
        data: list[dict[str, Any]] = []
        include_unavailable = str(request.query.get("include_unavailable") or "").lower() in {"1", "true", "yes", "on"}
        models = (
            [*self.settings.desktop_models(), *self.settings.unavailable_models()]
            if include_unavailable
            else self.settings.desktop_models()
        )
        for m in models:
            row = {
                "slug": m.slug,
                "display_name": m.display_name,
                "provider": m.provider,
                "active": current == m.slug,
            }
            if include_unavailable:
                row["visible"] = m.visible
                row["unavailable_reason"] = m.unavailable_reason
            data.append(row)
        return web.json_response(data)

    async def switch_model(self, request: web.Request) -> web.Response:
        try:
            body = await request.json()
        except json.JSONDecodeError:
            return web.json_response({"error": "invalid JSON body"}, status=400)
        slug = str(body.get("slug") or "").strip()
        if not slug:
            return web.json_response({"error": "slug is required"}, status=400)
        models = self.settings.desktop_models()
        valid = {m.slug for m in models}
        display_for: dict[str, str] = {m.slug: m.display_name for m in models}
        if slug not in valid:
            return web.json_response({"error": f"unknown model: {slug}"}, status=404)
        _set_active_model(slug, display_for.get(slug, slug))
        restart = bool(body.get("restart_codex"))
        if restart:
            _restart_codex_app()
        return web.json_response({"ok": True, "model": slug, "restarted": restart})

    async def health(self, _request: web.Request) -> web.Response:
        models = self.settings.desktop_models()
        count = len(models)
        return web.json_response(
            {
                "ok": True,
                "models": count,
                "chatgpt_passthrough": chatgpt_passthrough_available(),
            }
        )

    async def models(self, _request: web.Request) -> web.Response:
        now = int(time.time())
        data: list[dict[str, Any]] = []
        data.extend(
            {
                "id": model.slug,
                "object": "model",
                "created": now,
                "owned_by": "chatgpt" if model.is_chatgpt else "codex-shim",
            }
            for model in self.settings.desktop_models()
        )
        return web.json_response({"object": "list", "data": data})

    async def chat_completions(self, request: web.Request) -> web.StreamResponse:
        body = await request.json()
        route = self._route(body)
        if route.is_chatgpt:
            raise web.HTTPBadGateway(text="ChatGPT passthrough supports /v1/responses, not /v1/chat/completions")
        if route.is_openai_chat:
            forwarded = dict(body)
            forwarded["model"] = route.model
            if "messages" in forwarded:
                forwarded["messages"] = _normalize_roles(forwarded["messages"])
            return await self._post_openai_chat(request, route, forwarded, as_responses=False)
        if route.is_anthropic:
            forwarded = chat_to_anthropic(body, route.model, route.max_output_tokens)
            return await self._post_anthropic(request, route, forwarded, as_responses=False)
        if route.is_cursor_acp:
            forwarded = chat_to_responses_request(body, route.model, route.max_output_tokens)
            return await self._post_cursor_acp(request, route, forwarded, as_responses=False)
        if route.is_cursor_cli:
            forwarded = chat_to_responses_request(body, route.model, route.max_output_tokens)
            return await self._post_cursor_cli(request, route, forwarded, as_responses=False)
        raise web.HTTPBadGateway(text=f"Unsupported model provider: {route.provider}")

    async def _dispatch_responses(
        self,
        request: web.Request,
        body: dict[str, Any],
        ws_stream: WsStreamResponse | None = None,
    ) -> web.StreamResponse | web.Response:
        _log_incoming_request("/v1/responses", body)
        model = str(body.get("model") or "")
        resolution = resolve_model_route(self.settings, body)
        route = resolution.selected_route
        policy = resolution.policy
        requested_tool_count = 0
        tools = body.get("tools")
        if isinstance(tools, list):
            requested_tool_count = len(tools)
        self.observability.emit(
            stage="route_selected",
            path="/v1/responses",
            provider=route.provider,
            model_slug=route.slug,
            attributes={"requested_model": model, "requested_tool_count": requested_tool_count},
        )
        idempotency_key = str(request.headers.get("Idempotency-Key") or "").strip()
        if idempotency_key:
            self.operational_store.put(
                "idempotency",
                idempotency_key,
                {"path": "/v1/responses", "model": route.slug, "stream": bool(body.get("stream"))},
            )
        if needs_image_generation(body):
            if not route.capabilities.supports_image_generation:
                return _unsupported_capability_response(
                    "Image generation requires a model that supports image generation. "
                    "Select gpt-5.5 ChatGPT passthrough or remove image-generation tools."
                )
        if route.is_chatgpt:
            response_model_override = model if model and model != CHATGPT_MODEL_SLUG else None
            return await chatgpt_passthrough(
                self,
                request,
                route,
                body,
                response_model_override=response_model_override,
                ws_stream=ws_stream,
            )
        try:
            prepared = self.session_service.prepare(request, body)
        except KeyError as exc:
            self.governance.emit(
                path="/v1/responses",
                provider=route.provider,
                model_slug=route.slug,
                outcome="error",
                body=body,
                failure_category="previous_response_missing",
                selected_by=resolution.selected_by,
            )
            return web.json_response(
                {"error": {"type": "not_found", "message": f"Unknown previous_response_id: {exc.args[0]}"}},
                status=404,
            )
        try:
            validate_responses_input(prepared.body)
            return await self._forward_byok_responses(
                request,
                route,
                prepared,
                fallback_route=resolution.fallback_route,
                selected_by=resolution.selected_by,
                policy=policy,
                ws_stream=ws_stream,
            )
        except ResponsesInputError as exc:
            self.governance.emit(
                path="/v1/responses",
                provider=route.provider,
                model_slug=route.slug,
                outcome="error",
                body=body,
                failure_category="invalid_request",
                selected_by=resolution.selected_by,
            )
            return _invalid_request_error_response(exc)
        raise web.HTTPBadGateway(text=f"Unsupported model provider: {route.provider}")

    async def _forward_byok_responses(
        self,
        request: web.Request,
        route: ShimModel,
        prepared: PreparedResponsesRequest,
        *,
        fallback_route: ShimModel | None = None,
        selected_by: str | None = None,
        policy=None,
        ws_stream: WsStreamResponse | None = None,
        force_non_stream: bool = False,
        compact_body_for_wrap: dict[str, Any] | None = None,
    ) -> web.StreamResponse | web.Response:
        stream_target = ws_stream if ws_stream is not None else None
        dispatch_stats: dict[str, Any] = {}
        body = prepared.body
        requested_tool_count = 0
        tools = body.get("tools")
        if isinstance(tools, list):
            requested_tool_count = len(tools)
        chained = prepared.chained_from_previous
        if route.is_openai_chat:
            forwarded = responses_to_chat(
                body,
                route.model,
                route.provider,
                thinking_behavior=route.thinking_behavior,
                chained_from_previous=chained,
            )
            if force_non_stream:
                forwarded["stream"] = False
            result = await self.provider_dispatcher.dispatch(
                request,
                route,
                forwarded,
                as_responses=True,
                policy=policy,
                stats=dispatch_stats,
                prepared=prepared,
                stream_response=stream_target,
            )
        elif route.is_anthropic:
            forwarded = responses_to_anthropic(
                body,
                route.model,
                route.max_output_tokens,
                chained_from_previous=chained,
            )
            if force_non_stream:
                forwarded["stream"] = False
            result = await self.provider_dispatcher.dispatch(
                request,
                route,
                forwarded,
                as_responses=True,
                policy=policy,
                stats=dispatch_stats,
                prepared=prepared,
                stream_response=stream_target,
            )
        elif route.is_cursor_acp:
            dispatch_body = dict(body)
            if force_non_stream:
                dispatch_body["stream"] = False
            result = await self.provider_dispatcher.dispatch(
                request,
                route,
                dispatch_body,
                as_responses=True,
                policy=policy,
                stats=dispatch_stats,
                prepared=prepared,
                stream_response=stream_target,
            )
        elif route.is_cursor_cli:
            dispatch_body = dict(body)
            if force_non_stream:
                dispatch_body["stream"] = False
            result = await self.provider_dispatcher.dispatch(
                request,
                route,
                dispatch_body,
                as_responses=True,
                policy=policy,
                stats=dispatch_stats,
                prepared=prepared,
                stream_response=stream_target,
            )
        else:
            raise web.HTTPBadGateway(text=f"Unsupported model provider: {route.provider}")
        status = getattr(result, "status", 200)
        fallback_used = False
        if (
            policy is not None
            and getattr(policy, "fallback_enabled", False)
            and fallback_route is not None
            and status >= 400
            and status in getattr(policy, "retryable_statuses", ())
            and not bool(body.get("stream"))
        ):
            fallback_used = True
            dispatch_body = dict(body)
            dispatch_body["model"] = fallback_route.model
            result = await self.provider_dispatcher.dispatch(
                request,
                fallback_route,
                dispatch_body,
                as_responses=True,
                policy=policy,
                stats=dispatch_stats,
                prepared=prepared,
                stream_response=stream_target,
            )
            status = getattr(result, "status", 200)
        outcome = "ok" if status < 400 else "error"
        failure_category = None if status < 400 else "upstream_error"
        executed_tool_count = getattr(result, "_codex_shim_executed_tool_count", None)
        self.governance.emit(
            path=str(request.path),
            provider=fallback_route.provider if fallback_used and fallback_route is not None else route.provider,
            model_slug=fallback_route.slug if fallback_used and fallback_route is not None else route.slug,
            outcome=outcome,
            body=prepared.body,
            failure_category=failure_category,
            selected_by=selected_by,
            retry_attempts=int(dispatch_stats.get("attempts", 0)),
            fallback_used=fallback_used,
            tool_count_override=executed_tool_count,
        )
        self.observability.emit(
            stage="provider_dispatched",
            path=str(request.path),
            provider=route.provider,
            model_slug=route.slug,
            attributes={
                "status": status,
                "requested_tool_count": requested_tool_count,
                "executed_tool_count": int(executed_tool_count) if executed_tool_count is not None else None,
                "tool_evidence": "response_output" if executed_tool_count is not None else "unknown",
            },
        )
        if compact_body_for_wrap is not None:
            return await _as_compact_response(result, route.slug, compact_body_for_wrap)
        return result

    def _store_response_history(
        self,
        prepared: PreparedResponsesRequest,
        response_payload: dict[str, Any],
    ) -> None:
        """Persist completed turn items for multi-turn BYOK / passthrough history."""
        self.session_service.store_response_history(prepared, response_payload)

    async def responses_compact(self, request: web.Request) -> web.StreamResponse:
        body = await request.json()
        return await self.responses_compact_from_body(request, body)

    async def responses_compact_from_body(self, request: web.Request, body: dict[str, Any]) -> web.StreamResponse:
        _log_incoming_request("/v1/responses/compact", body)
        resolution = resolve_model_route(self.settings, body)
        route = resolution.selected_route
        if route.is_chatgpt:
            return await chatgpt_compact_passthrough(self, request, route, body)
        if route.capabilities.compact_behavior == COMPACT_UNSUPPORTED:
            return _unsupported_compact_response(route)
        try:
            prepared = self.session_service.prepare(request, body)
        except KeyError as exc:
            self.governance.emit(
                path="/v1/responses/compact",
                provider=route.provider,
                model_slug=route.slug,
                outcome="error",
                body=body,
                failure_category="previous_response_missing",
                selected_by=resolution.selected_by,
            )
            return web.json_response(
                {"error": {"type": "not_found", "message": f"Unknown previous_response_id: {exc.args[0]}"}},
                status=404,
            )
        compact_body = self.session_service.compact_body(prepared, route.model)
        try:
            validate_responses_input(compact_body)
            compact_prepared = PreparedResponsesRequest(
                body=compact_body,
                session_id=prepared.session_id,
                chained_from_previous=prepared.chained_from_previous,
            )
            return await self._forward_byok_responses(
                request,
                route,
                compact_prepared,
                fallback_route=resolution.fallback_route,
                selected_by=resolution.selected_by,
                policy=resolution.policy,
                force_non_stream=True,
                compact_body_for_wrap=compact_body,
            )
        except ResponsesInputError as exc:
            self.governance.emit(
                path="/v1/responses/compact",
                provider=route.provider,
                model_slug=route.slug,
                outcome="error",
                body=body,
                failure_category="invalid_request",
                selected_by=resolution.selected_by,
            )
            return _invalid_request_error_response(exc)
        raise web.HTTPBadGateway(text=f"Unsupported model provider: {route.provider}")

    def _content_to_debug_text(self, content: Any) -> str:
        if content is None:
            return ""
        if isinstance(content, str):
            return content
        if isinstance(content, list):
            parts = []
            for part in content:
                if isinstance(part, dict):
                    parts.append(str(part.get("text") or part.get("content") or ""))
                else:
                    parts.append(str(part))
            return "\n".join(part for part in parts if part)
        if isinstance(content, dict):
            return str(content.get("text") or content.get("content") or "")
        return str(content)

    def _route(self, body: dict[str, Any]) -> ShimModel:
        return resolve_model_route(self.settings, body).selected_route

    async def _provider_openai_dispatch(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None,
        stream_response: WsStreamResponse | None,
    ) -> web.StreamResponse:
        return await self._post_openai_chat(
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
        )

    async def _provider_anthropic_dispatch(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None,
        stream_response: WsStreamResponse | None,
    ) -> web.StreamResponse:
        return await self._post_anthropic(
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
        )

    async def _provider_cursor_acp_dispatch(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None,
        stream_response: WsStreamResponse | None,
    ) -> web.StreamResponse:
        return await self._post_cursor_acp(
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
        )

    async def _provider_cursor_cli_dispatch(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None,
        stream_response: WsStreamResponse | None,
    ) -> web.StreamResponse:
        return await self._post_cursor_cli(
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
        )

    async def _post_openai_chat(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = time.monotonic()
        provider_started_at = time.monotonic()
        url = route.endpoint_url or _join_url(route.base_url, "/chat/completions")
        headers = _openai_headers(route)
        _dump_debug_request(route.slug, url, body)
        async with ClientSession(timeout=self.timeout) as session:
            upstream = await session.post(url, json=body, headers=headers)
            if upstream.status >= 400:
                _log_access(
                    request,
                    route,
                    upstream.status,
                    started_at,
                    stream=bool(body.get("stream")),
                    error="upstream_error",
                    request_body=prepared.body if prepared is not None else body,
                    provider_ms=_elapsed_ms(provider_started_at),
                )
                return await _error_response(upstream, slug=route.slug)
            if body.get("stream"):
                return await self._stream_openai_chat(
                    request,
                    upstream,
                    route,
                    as_responses,
                    prepared=prepared,
                    started_at=started_at,
                    stream_response=stream_response,
                )
            payload = await upstream.json(content_type=None)
            provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = _attach_response_metadata(
                chat_completion_to_response(payload, route.slug),
                route,
                prepared,
            )
            if prepared is not None:
                self._store_response_history(prepared, response_payload)
            resp = web.json_response(response_payload)
            executed_tool_count = _executed_tool_count_from_response_payload(response_payload)
            if executed_tool_count > 0:
                setattr(resp, "_codex_shim_executed_tool_count", executed_tool_count)
            _log_access(
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
        _log_access(request, route, 200, started_at, payload=payload, stream=False, request_body=body, provider_ms=provider_ms)
        return web.json_response(payload)

    async def _post_anthropic(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = time.monotonic()
        provider_started_at = time.monotonic()
        url = _join_url(route.base_url, "/messages")
        headers = _anthropic_headers(route)
        async with ClientSession(timeout=self.timeout) as session:
            upstream = await session.post(url, json=body, headers=headers)
            if upstream.status >= 400:
                _log_access(
                    request,
                    route,
                    upstream.status,
                    started_at,
                    stream=bool(body.get("stream")),
                    error="upstream_error",
                    request_body=prepared.body if prepared is not None else body,
                    provider_ms=_elapsed_ms(provider_started_at),
                )
                return await _error_response(upstream)
            if body.get("stream"):
                return await self._stream_anthropic(
                    request,
                    upstream,
                    route,
                    as_responses,
                    prepared=prepared,
                    started_at=started_at,
                    stream_response=stream_response,
                )
            payload = await upstream.json(content_type=None)
            provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = _attach_response_metadata(
                anthropic_to_response(payload, route.slug),
                route,
                prepared,
            )
            if prepared is not None:
                self._store_response_history(prepared, response_payload)
            resp = web.json_response(response_payload)
            executed_tool_count = _executed_tool_count_from_response_payload(response_payload)
            if executed_tool_count > 0:
                setattr(resp, "_codex_shim_executed_tool_count", executed_tool_count)
            _log_access(
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
        chat_payload = anthropic_to_chat_response(payload, route.slug)
        _log_access(
            request,
            route,
            200,
            started_at,
            payload=chat_payload,
            stream=False,
            request_body=body,
            provider_ms=provider_ms,
        )
        return web.json_response(chat_payload)

    async def _post_cursor_acp(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = time.monotonic()
        if body.get("stream"):
            return await self._stream_cursor_acp(
                request,
                route,
                body,
                as_responses,
                prepared=prepared,
                started_at=started_at,
                stream_response=stream_response,
            )
        provider_started_at = time.monotonic()
        try:
            chained = prepared.chained_from_previous if prepared is not None else False
            result = await _await_cursor_inference(
                run_cursor_acp(route, body, chained_from_previous=chained)
            )
        except CursorAcpError as exc:
            _log_access(
                request,
                route,
                502,
                started_at,
                stream=False,
                error="cursor_acp_error",
                request_body=prepared.body if prepared is not None else body,
                provider_ms=_elapsed_ms(provider_started_at),
            )
            return _cursor_acp_error_response(exc)
        provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = _attach_response_metadata(
                cursor_acp_response_payload(result, route.slug),
                route,
                prepared,
            )
            if prepared is not None:
                self._store_response_history(prepared, response_payload)
            resp = web.json_response(response_payload)
            executed_tool_count = _executed_tool_count_from_response_payload(response_payload)
            if executed_tool_count > 0:
                setattr(resp, "_codex_shim_executed_tool_count", executed_tool_count)
            _log_access(
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
        chat_payload = cursor_acp_chat_payload(result, route.slug)
        _log_access(
            request,
            route,
            200,
            started_at,
            payload=chat_payload,
            stream=False,
            request_body=body,
            provider_ms=provider_ms,
        )
        return web.json_response(chat_payload)

    async def _post_cursor_cli(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = time.monotonic()
        if body.get("stream"):
            return await self._stream_cursor_cli(
                request,
                route,
                body,
                as_responses,
                prepared=prepared,
                started_at=started_at,
                stream_response=stream_response,
            )
        provider_started_at = time.monotonic()
        try:
            chained = prepared.chained_from_previous if prepared is not None else False
            result = await _await_cursor_inference(
                run_cursor_cli(route, body, chained_from_previous=chained)
            )
        except CursorCliError as exc:
            _log_access(
                request,
                route,
                502,
                started_at,
                stream=False,
                error="cursor_cli_error",
                request_body=prepared.body if prepared is not None else body,
                provider_ms=_elapsed_ms(provider_started_at),
            )
            return _cursor_agent_error_response(exc, "cursor_cli_error")
        provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = _attach_response_metadata(
                cursor_acp_response_payload(result, route.slug),
                route,
                prepared,
            )
            if prepared is not None:
                self._store_response_history(prepared, response_payload)
            resp = web.json_response(response_payload)
            executed_tool_count = _executed_tool_count_from_response_payload(response_payload)
            if executed_tool_count > 0:
                setattr(resp, "_codex_shim_executed_tool_count", executed_tool_count)
            _log_access(
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
        chat_payload = cursor_acp_chat_payload(result, route.slug)
        _log_access(
            request,
            route,
            200,
            started_at,
            payload=chat_payload,
            stream=False,
            request_body=body,
            provider_ms=provider_ms,
        )
        return web.json_response(chat_payload)

    async def _stream_openai_chat(
        self,
        request: web.Request,
        upstream,
        route: ShimModel,
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        started_at: float | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = started_at or time.monotonic()
        response = await _open_stream_sink(request, stream_response)
        if as_responses:
            state = ResponsesStreamState(route.slug, tools=(prepared.body if prepared is not None else {}).get("tools"))
            state.metadata = _shim_response_metadata(route, prepared)
        try:
            if as_responses:
                await state.start(response)
            async for line in _sse_lines(upstream):
                if line == "[DONE]":
                    break
                try:
                    event = json.loads(line)
                except json.JSONDecodeError:
                    continue
                if as_responses:
                    await state.write_chat_delta(response, event)
                else:
                    await _write_sse(response, event)
            if as_responses:
                final_response = await state.finish(response)
                if prepared is not None:
                    self._store_response_history(prepared, final_response)
                _log_access(request, route, 200, started_at, payload=final_response, stream=True)
            else:
                await _safe_write(response, b"data: [DONE]\n\n")
                _log_access(request, route, 200, started_at, stream=True)
        except ClientDisconnected:
            pass
        finally:
            upstream.release()
        try:
            await response.write_eof()
        except Exception:
            pass
        return response

    async def _stream_anthropic(
        self,
        request: web.Request,
        upstream,
        route: ShimModel,
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        started_at: float | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = started_at or time.monotonic()
        response = await _open_stream_sink(request, stream_response)
        if as_responses:
            state = ResponsesStreamState(route.slug, tools=(prepared.body if prepared is not None else {}).get("tools"))
            state.metadata = _shim_response_metadata(route, prepared)
        try:
            if as_responses:
                await state.start(response)
            async for line in _sse_lines(upstream):
                if line == "[DONE]":
                    break
                try:
                    event = json.loads(line)
                except json.JSONDecodeError:
                    continue
                if as_responses:
                    await state.write_anthropic_delta(response, event)
                else:
                    await _write_sse(response, _anthropic_stream_to_chat_chunk(event, route.slug))
            if as_responses:
                final_response = await state.finish(response)
                if prepared is not None:
                    self._store_response_history(prepared, final_response)
                _log_access(request, route, 200, started_at, payload=final_response, stream=True)
            else:
                await _safe_write(response, b"data: [DONE]\n\n")
                _log_access(request, route, 200, started_at, stream=True)
        except ClientDisconnected:
            pass
        finally:
            upstream.release()
        try:
            await response.write_eof()
        except Exception:
            pass
        return response

    async def _stream_cursor_acp(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        started_at: float | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = started_at or time.monotonic()
        response = await _open_stream_sink(request, stream_response)
        state = ResponsesStreamState(route.slug, tools=(prepared.body if prepared is not None else {}).get("tools")) if as_responses else None
        if state is not None:
            state.metadata = _shim_response_metadata(route, prepared)
        chained = prepared.chained_from_previous if prepared is not None else False
        try:
            if state is not None:
                await state.start(response)

                async def write_responses_delta(text: str) -> None:
                    await state.write_chat_delta(response, {"choices": [{"delta": {"content": text}}]})

                result = await _await_cursor_inference(
                    run_cursor_acp(route, body, on_text=write_responses_delta, chained_from_previous=chained)
                )
                if result.usage is not None:
                    state.usage = result.usage
                final_response = await state.finish(response)
                if prepared is not None:
                    self._store_response_history(prepared, final_response)
                _log_access(request, route, 200, started_at, payload=final_response, stream=True)
            else:
                created = int(time.time())

                async def write_chat_delta(text: str) -> None:
                    await _write_sse(
                        response,
                        {
                            "id": f"chatcmpl_cursor_acp_{created}",
                            "object": "chat.completion.chunk",
                            "created": created,
                            "model": route.slug,
                            "choices": [{"index": 0, "delta": {"content": text}, "finish_reason": None}],
                        },
                    )

                await _await_cursor_inference(
                    run_cursor_acp(route, body, on_text=write_chat_delta, chained_from_previous=chained)
                )
                await _write_sse(
                    response,
                    {
                        "id": f"chatcmpl_cursor_acp_{created}",
                        "object": "chat.completion.chunk",
                        "created": created,
                        "model": route.slug,
                        "choices": [{"index": 0, "delta": {}, "finish_reason": "stop"}],
                    },
                )
                await _safe_write(response, b"data: [DONE]\n\n")
                _log_access(request, route, 200, started_at, stream=True)
        except ClientDisconnected:
            pass
        except CursorAcpError as exc:
            _log_access(request, route, 502, started_at, stream=bool(body.get("stream")), error="cursor_acp_error")
            await _write_sse(response, _cursor_acp_stream_error(route.slug, exc))
            if not as_responses:
                await _safe_write(response, b"data: [DONE]\n\n")
        try:
            await response.write_eof()
        except Exception:
            pass
        return response

    async def _stream_cursor_cli(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        started_at: float | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = started_at or time.monotonic()
        response = await _open_stream_sink(request, stream_response)
        state = ResponsesStreamState(route.slug, tools=(prepared.body if prepared is not None else {}).get("tools")) if as_responses else None
        if state is not None:
            state.metadata = _shim_response_metadata(route, prepared)
        chained = prepared.chained_from_previous if prepared is not None else False
        try:
            if state is not None:
                await state.start(response)

                async def write_responses_delta(text: str) -> None:
                    await state.write_chat_delta(response, {"choices": [{"delta": {"content": text}}]})

                async def write_responses_event(event: dict[str, Any]) -> None:
                    await state.write_cursor_cli_event(response, event)

                result = await _await_cursor_inference(
                    run_cursor_cli(
                        route,
                        body,
                        on_text=write_responses_delta,
                        on_event=write_responses_event,
                        chained_from_previous=chained,
                    )
                )
                if result.usage is not None:
                    state.usage = result.usage
                final_response = await state.finish(response)
                if prepared is not None:
                    self._store_response_history(prepared, final_response)
                _log_access(request, route, 200, started_at, payload=final_response, stream=True)
            else:
                created = int(time.time())

                async def write_chat_delta(text: str) -> None:
                    await _write_sse(
                        response,
                        {
                            "id": f"chatcmpl_cursor_cli_{created}",
                            "object": "chat.completion.chunk",
                            "created": created,
                            "model": route.slug,
                            "choices": [{"index": 0, "delta": {"content": text}, "finish_reason": None}],
                        },
                    )

                await _await_cursor_inference(
                    run_cursor_cli(route, body, on_text=write_chat_delta, chained_from_previous=chained)
                )
                await _write_sse(
                    response,
                    {
                        "id": f"chatcmpl_cursor_cli_{created}",
                        "object": "chat.completion.chunk",
                        "created": created,
                        "model": route.slug,
                        "choices": [{"index": 0, "delta": {}, "finish_reason": "stop"}],
                    },
                )
                await _safe_write(response, b"data: [DONE]\n\n")
                _log_access(request, route, 200, started_at, stream=True)
        except ClientDisconnected:
            pass
        except CursorCliError as exc:
            _log_access(request, route, 502, started_at, stream=bool(body.get("stream")), error="cursor_cli_error")
            await _write_sse(response, _cursor_agent_stream_error(route.slug, exc, "cursor_cli_error"))
            if not as_responses:
                await _safe_write(response, b"data: [DONE]\n\n")
        try:
            await response.write_eof()
        except Exception:
            pass
        return response


def _join_url(base_url: str, endpoint: str) -> str:
    base = base_url.rstrip("/")
    if base.endswith("/v1"):
        return base + endpoint
    if endpoint == "/messages":
        return base + "/v1/messages"
    return urljoin(base + "/", "v1" + endpoint)


def _openai_headers(route: ShimModel) -> dict[str, str]:
    headers = {"Content-Type": "application/json", **route.extra_headers}
    if route.api_key:
        headers.setdefault("Authorization", f"Bearer {route.api_key}")
    return headers


def _anthropic_headers(route: ShimModel) -> dict[str, str]:
    headers = {
        "Content-Type": "application/json",
        "anthropic-version": "2023-06-01",
        **route.extra_headers,
    }
    if route.api_key:
        headers.setdefault("x-api-key", route.api_key)
        headers.setdefault("Authorization", f"Bearer {route.api_key}")
    return headers


def _normalize_roles(messages: list[dict]) -> list[dict]:
    result = []
    for message in messages:
        if isinstance(message, dict):
            message = dict(message)
            if message.get("role") == "developer":
                message["role"] = "system"
        result.append(message)
    return result



def main(argv: list[str] | None = None) -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--settings", type=Path, default=DEFAULT_SETTINGS)
    parser.add_argument("--host", default=DEFAULT_HOST)
    parser.add_argument("--port", type=int, default=DEFAULT_PORT)
    args = parser.parse_args(argv)

    shim = ShimServer(args.settings, host=args.host)
    web.run_app(shim.app(), host=args.host, port=args.port, handle_signals=True)


if __name__ == "__main__":
    main()
