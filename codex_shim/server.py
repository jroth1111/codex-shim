from __future__ import annotations

import argparse
import asyncio
import json
import re
import secrets
import time
from contextlib import suppress
from pathlib import Path
from typing import Any
from urllib.parse import urljoin

from aiohttp import ClientSession, ClientTimeout, web

from . import router as router_module
from .access_log import elapsed_ms as _elapsed_ms
from .access_log import log_access as _log_access
from .access_log import log_incoming_request as _log_incoming_request
from .auto_router_service import AutoRouterService
from .capabilities import execution_mode, is_delegate_route, route_capabilities
from .catalog import CATALOG_PATH, write_catalog
from .cursor_acp import CursorAcpError, cursor_acp_chat_payload, cursor_acp_response_payload, run_cursor_acp
from .cursor_cli import CursorCliError, run_cursor_cli
from .cursor_parity import CursorThreadSessionStore, build_cursor_cli_turn_options
from .cursor_passthrough import (
    cursor_passthrough_available,
    cursor_passthrough_display_names,
    is_cursor_passthrough_slug,
)
from .cursor_passthrough_handlers import cursor_passthrough_handler
from .debug_dump import dump_debug_request as _dump_debug_request
from .errors import (
    cursor_acp_error_response as _cursor_acp_error_response,
)
from .errors import (
    cursor_acp_stream_error as _cursor_acp_stream_error,
)
from .errors import (
    cursor_agent_error_response as _cursor_agent_error_response,
)
from .errors import (
    cursor_agent_stream_error as _cursor_agent_stream_error,
)
from .errors import (
    error_response as _error_response,
)
from .errors import (
    invalid_request_error_response as _invalid_request_error_response,
)
from .errors import (
    unsupported_compact_response as _unsupported_compact_response,
)
from .gateway import GatewayHandlers
from .governance import GovernanceAuditSink
from .hostguard import build_allowed_hosts, host_guard_middleware
from .observability import ObservabilitySink
from .passthrough import (
    chatgpt_compact_passthrough,
    chatgpt_passthrough,
    merge_codex_forward_headers,
    metadata_as_forward_headers,
    passthrough_forward_headers,
    rewrite_response_model,
    sanitize_chatgpt_passthrough_body,
)
from .persistence import JsonOperationalStore
from .picker import PICKER_TOKEN_HEADER
from .picker import current_managed_model as _current_managed_model
from .picker import picker_html as _picker_html
from .picker import restart_codex_app as _restart_codex_app
from .picker import set_active_model as _set_active_model
from .providers import ProviderDispatcher
from .providers.cursor_agent import CursorAgentTransport, CursorAgentTransportError
from .responses_ws import WsStreamResponse
from .routing import RouteResolution, resolve_model_route
from .routing.helper_models import apply_helper_model_policy, is_helper_model_slug
from .routing.workspace import resolve_workspace
from .sessions import (
    PreparedResponsesRequest,
    ResponseStore,
    SessionService,
    default_store_path,
    extract_compact_frontier,
    git_status_short,
)
from .sessions import as_compact_response as _as_compact_response
from .settings import (
    CHATGPT_MODEL_SLUG,
    COMPACT_UNSUPPORTED,
    DEFAULT_HOST,
    DEFAULT_PORT,
    DEFAULT_SETTINGS,
    ModelSettings,
    ShimModel,
    chatgpt_passthrough_available,
    chatgpt_passthrough_slugs,
)
from .streaming import ClientDisconnected, ResponsesStreamState
from .streaming import anthropic_stream_to_chat_chunk as _anthropic_stream_to_chat_chunk
from .streaming import open_stream_sink as _open_stream_sink
from .streaming import safe_write as _safe_write
from .streaming import sse_lines as _sse_lines
from .streaming import write_sse as _write_sse
from .subscription_catalog import refresh_subscription_catalog
from .tools import ToolPolicy
from .translate import (
    ResponsesInputError,
    anthropic_to_chat_response,
    anthropic_to_response,
    chat_completion_to_response,
    chat_to_anthropic,
    chat_to_responses_request,
    responses_to_anthropic,
    responses_to_chat,
    validate_responses_input,
)
from .translate.common import merge_extra_body_params
from .translate.tool_validate import ToolValidationError, validate_anthropic_tools, validate_chat_tools

# Compatibility aliases: tests/test_server.py imports the underscore names from
# codex_shim.server. Delete once test imports are repointed at codex_shim.passthrough
# (migration phase 10).
_merge_codex_forward_headers = merge_codex_forward_headers
_metadata_as_forward_headers = metadata_as_forward_headers
_passthrough_forward_headers = passthrough_forward_headers
_rewrite_response_model = rewrite_response_model
_sanitize_chatgpt_passthrough_body = sanitize_chatgpt_passthrough_body


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


def _responses_stream_state(route: ShimModel, tools: Any) -> ResponsesStreamState:
    return ResponsesStreamState(route.slug, tools=tools, delegate_mode=is_delegate_route(route))


def _shim_response_metadata(
    route: ShimModel,
    prepared: PreparedResponsesRequest | None,
    *,
    native_envelope: dict[str, Any] | None = None,
    workspace: Path | None = None,
) -> dict[str, Any]:
    caps = route_capabilities(route)
    mode = execution_mode(route)
    metadata: dict[str, Any] = {
        "shim_route": {
            "provider": route.provider,
            "transport": route.transport,
            "execution_mode": mode,
            "tool_authority": "cursor" if mode == "delegate" else "codex",
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
    if workspace is not None:
        metadata["shim_route"]["workspace"] = str(workspace)
    if prepared is not None and prepared.chained_from_previous:
        metadata["shim_history"] = {"expanded_previous_response_id": True}
    if native_envelope is not None:
        metadata["shim_native_envelope"] = native_envelope
    return metadata


def _governance_inference_kwargs(inference) -> dict[str, Any]:
    if inference is None:
        return {}
    return {
        "inference_mode": inference.cli_mode,
        "metadata_mode": inference.metadata_mode,
        "surface": inference.surface,
        "model_prefetch_status": inference.prefetch_status,
        "force_run_everything": inference.force_run_everything,
        "transport_selected": inference.transport_selected,
    }


def _workspace_log_value(workspace: Path | None) -> str | None:
    return str(workspace) if workspace is not None else None


def _attach_response_metadata(
    response_payload: dict[str, Any],
    route: ShimModel,
    prepared: PreparedResponsesRequest | None,
    *,
    native_envelope: dict[str, Any] | None = None,
    workspace: Path | None = None,
) -> dict[str, Any]:
    payload = dict(response_payload)
    existing = payload.get("metadata")
    merged = dict(existing) if isinstance(existing, dict) else {}
    merged.update(_shim_response_metadata(route, prepared, native_envelope=native_envelope, workspace=workspace))
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
        self.cursor_thread_sessions = CursorThreadSessionStore()
        self.session_service = SessionService(self.response_store, self._content_to_debug_text)
        self.tool_policy = ToolPolicy()
        self.cursor_agent_transport = CursorAgentTransport()
        self.provider_dispatcher = ProviderDispatcher(
            openai_handler=self._provider_openai_dispatch,
            anthropic_handler=self._provider_anthropic_dispatch,
            cursor_acp_handler=self._provider_cursor_acp_dispatch,
            cursor_cli_handler=self._provider_cursor_cli_dispatch,
            cursor_agent_handler=self._provider_cursor_agent_dispatch,
        )
        runtime_root = default_store_path().parent
        self.governance = GovernanceAuditSink(runtime_root / "governance_events.jsonl")
        self.observability = ObservabilitySink(runtime_root / "observability_events.jsonl")
        self.operational_store = JsonOperationalStore(runtime_root / "ops")
        self.gateway_handlers = GatewayHandlers(self)
        self.auto_router = AutoRouterService(self)
        self.picker_token = secrets.token_urlsafe(32)
        self.subscription_catalog = refresh_subscription_catalog()
        try:
            write_catalog(
                self.settings.load(),
                CATALOG_PATH,
                snapshot=self.subscription_catalog,
            )
        except OSError:
            pass

    def _emit_cursor_governance_error(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        failure_category: str,
        *,
        inference=None,
    ) -> None:
        self.governance.emit(
            path=str(request.path),
            provider=route.provider,
            model_slug=route.slug,
            outcome="error",
            body=body,
            failure_category=failure_category,
            **_governance_inference_kwargs(inference),
        )

    def _emit_inference_observability(
        self,
        *,
        path: str,
        resolution: RouteResolution,
        body: dict[str, Any],
    ) -> tuple[ShimModel, dict[str, Any]]:
        """Emit route_selected, model_resolved, and policy_applied (plan A5)."""
        route = resolution.selected_route
        inference = resolution.inference
        model = str(body.get("model") or "")
        requested_tool_count = 0
        tools = body.get("tools")
        if isinstance(tools, list):
            requested_tool_count = len(tools)
        tool_eval = self.tool_policy.evaluate(body=body, route=route, inference=inference)
        self.observability.emit(
            stage="route_selected",
            path=path,
            provider=route.provider,
            model_slug=route.slug,
            attributes={
                "requested_model": model,
                "requested_tool_count": requested_tool_count,
                **inference.observability_attributes(),
            },
        )
        self.observability.emit(
            stage="model_resolved",
            path=path,
            provider=route.provider,
            model_slug=route.slug,
            attributes={
                "resolved_model_id": resolution.resolved_model_id,
                "prefetch_status": resolution.prefetch_status,
                "selected_by": resolution.selected_by,
                "usable_models": list(resolution.catalog.usable_model_ids) if resolution.catalog else [],
                "default_model_id": resolution.catalog.default_model_id if resolution.catalog else None,
            },
        )
        self.observability.emit(
            stage="policy_applied",
            path=path,
            provider=route.provider,
            model_slug=route.slug,
            attributes=tool_eval,
        )
        return route, tool_eval

    def app(self) -> web.Application:
        allowed_hosts = build_allowed_hosts(self.host)
        app = web.Application(
            client_max_size=64 * 1024 * 1024,
            middlewares=[host_guard_middleware(allowed_hosts)],
        )
        app.router.add_get("/health", self.health)
        app.router.add_get("/v1/models", self.models)
        app.router.add_post("/v1/chat/completions", self.gateway_handlers.chat_completions)
        app.router.add_post("/v1/messages", self.gateway_handlers.anthropic_messages)
        app.router.add_post("/v1/responses", self.gateway_handlers.responses)
        app.router.add_get("/v1/responses", self.gateway_handlers.responses_websocket)
        app.router.add_post("/v1/responses/compact", self.gateway_handlers.responses_compact)
        app.router.add_get("/picker", self.picker_page)
        app.router.add_get("/api/models", self.api_models)
        app.router.add_post("/api/switch", self.switch_model)
        return app

    async def picker_page(self, _request: web.Request) -> web.Response:
        return web.Response(text=_picker_html(self.picker_token), content_type="text/html")

    async def api_models(self, request: web.Request) -> web.Response:
        current = _current_managed_model()
        data: list[dict[str, Any]] = []
        include_unavailable = str(request.query.get("include_unavailable") or "").lower() in {"1", "true", "yes", "on"}
        models = (
            [*self.settings.desktop_models(), *self.settings.unavailable_models()]
            if include_unavailable
            else self.settings.desktop_models()
        )
        router_config = self.auto_router.active_router()
        if router_config is not None:
            data.append(
                {
                    "slug": router_config.slug,
                    "display_name": router_config.display_name,
                    "provider": "auto",
                    "active": current == router_config.slug,
                }
            )
        if cursor_passthrough_available():
            for slug, display_name in cursor_passthrough_display_names().items():
                data.append(
                    {
                        "slug": slug,
                        "display_name": display_name,
                        "provider": "cursor",
                        "active": current == slug,
                    }
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

    def _valid_picker_token(self, request: web.Request) -> bool:
        token = request.headers.get(PICKER_TOKEN_HEADER, "")
        return secrets.compare_digest(token, self.picker_token)

    async def switch_model(self, request: web.Request) -> web.Response:
        if not self._valid_picker_token(request):
            return web.json_response({"error": "forbidden"}, status=403)
        try:
            body = await request.json()
        except json.JSONDecodeError:
            return web.json_response({"error": "invalid JSON body"}, status=400)
        slug = str(body.get("slug") or "").strip()
        if not slug:
            return web.json_response({"error": "slug is required"}, status=400)
        models = self.settings.desktop_models()
        router_config = self.auto_router.active_router()
        valid = {m.slug for m in models}
        display_for: dict[str, str] = {m.slug: m.display_name for m in models}
        if router_config is not None:
            valid.add(router_config.slug)
            display_for[router_config.slug] = router_config.display_name
        if cursor_passthrough_available():
            valid.update(cursor_passthrough_display_names())
            display_for.update(cursor_passthrough_display_names())
        if slug not in valid:
            return web.json_response({"error": f"unknown model: {slug}"}, status=404)
        _set_active_model(slug, display_for.get(slug, slug))
        restart = bool(body.get("restart_codex"))
        if restart:
            _restart_codex_app()
        return web.json_response({"ok": True, "model": slug, "restarted": restart})

    async def health(self, _request: web.Request) -> web.Response:
        from .settings import usable_byok_models

        models = usable_byok_models(self.settings.load())
        chatgpt_ok = chatgpt_passthrough_available()
        cursor_ok = cursor_passthrough_available()
        passthrough_count = len(chatgpt_passthrough_slugs()) if chatgpt_ok else 0
        if cursor_ok:
            passthrough_count += len(cursor_passthrough_display_names())
        count = len(models) + passthrough_count
        snapshot = getattr(self, "subscription_catalog", None) or refresh_subscription_catalog()
        return web.json_response(
            {
                "ok": True,
                "models": count,
                "chatgpt_passthrough": chatgpt_ok,
                "cursor_passthrough": cursor_ok,
                "auto_router": self.auto_router.active_router() is not None,
                "subscription_catalog_status": snapshot.status,
                "subscription_model_count": len(snapshot.models),
                "subscription_cache_age_s": snapshot.age_s,
            }
        )

    async def models(self, _request: web.Request) -> web.Response:
        now = int(time.time())
        data: list[dict[str, Any]] = []
        router_config = self.auto_router.active_router()
        if router_config is not None:
            data.append(router_module.router_models_entry(router_config, now))
        if cursor_passthrough_available():
            for slug in sorted(cursor_passthrough_display_names()):
                data.append(
                    {
                        "id": slug,
                        "object": "model",
                        "created": now,
                        "owned_by": "cursor",
                    }
                )
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
        body = await self.auto_router.maybe_apply_auto_router(body)
        route = self._route(body, request)
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
        if route.is_cursor_agent:
            forwarded = chat_to_responses_request(body, route.model, route.max_output_tokens)
            resolution = resolve_model_route(self.settings, body, request=request, store=self.operational_store)
            setattr(request, "_codex_shim_inference", resolution.inference)
            return await self._post_cursor_agent(request, route, forwarded, as_responses=False)
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
        body = await self.auto_router.maybe_apply_auto_router(body)
        model = str(body.get("model") or "")
        if is_cursor_passthrough_slug(model):
            return await cursor_passthrough_handler(self, request, body, response_model_override=model)
        if is_helper_model_slug(model):
            try:
                body, _helper_route, helper_category = apply_helper_model_policy(
                    self.settings, body, requested=model
                )
                if helper_category:
                    setattr(request, "_codex_shim_helper_category", helper_category)
            except web.HTTPNotImplemented as exc:
                self.governance.emit(
                    path="/v1/responses",
                    provider="helper",
                    model_slug=model,
                    outcome="error",
                    body=body,
                    failure_category="helper_model_rejected",
                )
                return web.Response(text=str(exc.text or exc), status=501)
        resolution = resolve_model_route(self.settings, body, request=request, store=self.operational_store)
        route, _tool_eval = self._emit_inference_observability(
            path="/v1/responses",
            resolution=resolution,
            body=body,
        )
        helper_category = getattr(request, "_codex_shim_helper_category", None)
        if helper_category:
            self.governance.emit(
                path="/v1/responses",
                provider=route.provider,
                model_slug=route.slug,
                outcome="rerouted",
                body=body,
                failure_category=helper_category,
                fallback_used=True,
                selected_by=resolution.selected_by,
                **_governance_inference_kwargs(resolution.inference),
            )
        policy = resolution.policy
        inference = resolution.inference
        idempotency_key = str(request.headers.get("Idempotency-Key") or "").strip()
        if idempotency_key:
            self.operational_store.put(
                "idempotency",
                idempotency_key,
                {"path": "/v1/responses", "model": route.slug, "stream": bool(body.get("stream"))},
            )
        image_block = self.tool_policy.image_generation_block(body, route)
        if image_block is not None:
            return image_block
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
            prepared = self.session_service.prepare(request, body, route=route)
        except KeyError as exc:
            self.governance.emit(
                path="/v1/responses",
                provider=route.provider,
                model_slug=route.slug,
                outcome="error",
                body=body,
                failure_category="previous_response_missing",
                selected_by=resolution.selected_by,
                **_governance_inference_kwargs(inference),
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
                inference=inference,
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
                **_governance_inference_kwargs(inference),
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
        inference=None,
        ws_stream: WsStreamResponse | None = None,
        force_non_stream: bool = False,
        compact_body_for_wrap: dict[str, Any] | None = None,
    ) -> web.StreamResponse | web.Response:
        stream_target = ws_stream if ws_stream is not None else None
        dispatch_stats: dict[str, Any] = {}
        body = prepared.body
        setattr(request, "_codex_shim_inference", inference)
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
            try:
                validate_chat_tools(forwarded.get("tools"), provider=route.provider)
            except ToolValidationError as exc:
                return _invalid_request_error_response(exc)
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
            try:
                validate_anthropic_tools(forwarded.get("tools"), provider=route.provider)
            except ToolValidationError as exc:
                return _invalid_request_error_response(exc)
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
        elif route.is_cursor_agent:
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
        fallback_reason: str | None = None
        fallback_statuses = (
            getattr(policy, "fallback_only_statuses", None) or getattr(policy, "retryable_statuses", ())
            if policy is not None
            else ()
        )
        if (
            policy is not None
            and getattr(policy, "fallback_enabled", False)
            and fallback_route is not None
            and status >= 400
            and status in fallback_statuses
            and not bool(body.get("stream"))
        ):
            fallback_used = True
            fallback_reason = f"upstream_status_{status}"
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
            fallback_reason=fallback_reason,
            **_governance_inference_kwargs(inference),
        )
        obs_attrs: dict[str, Any] = {
            "status": status,
            "requested_tool_count": requested_tool_count,
            "executed_tool_count": int(executed_tool_count) if executed_tool_count is not None else None,
            "tool_evidence": "response_output" if executed_tool_count is not None else "unknown",
            "dispatch_stats": dispatch_stats,
        }
        if inference is not None:
            obs_attrs.update(inference.observability_attributes())
        if is_delegate_route(route):
            resolved = resolve_workspace(request, prepared.body, route)
            if resolved is not None:
                obs_attrs["resolved_workspace"] = str(resolved)
        self.observability.emit(
            stage="provider_dispatched",
            path=str(request.path),
            provider=route.provider,
            model_slug=route.slug,
            attributes=obs_attrs,
        )
        if compact_body_for_wrap is not None:
            frontier = getattr(request, "_codex_shim_compact_frontier", None)
            git_status = getattr(request, "_codex_shim_compact_git_status", None)
            workspace_value = getattr(request, "_codex_shim_compact_workspace", None)

            def _compact_audit_callback(audit: dict[str, Any]) -> None:
                setattr(request, "_codex_shim_compact_summary_status", audit.get("summary_status"))
                setattr(request, "_codex_shim_compact_augmented", audit.get("augmented"))
                self.observability.emit(
                    stage="emulated_compact",
                    path=str(request.path),
                    provider=route.provider,
                    model_slug=route.slug,
                    attributes=audit,
                )

            return await _as_compact_response(
                result,
                route.slug,
                compact_body_for_wrap,
                frontier=frontier,
                git_status=git_status,
                workspace=workspace_value,
                audit_callback=_compact_audit_callback,
            )
        return result

    def _store_response_history(
        self,
        prepared: PreparedResponsesRequest,
        response_payload: dict[str, Any],
        *,
        route: ShimModel | None = None,
    ) -> None:
        """Persist completed turn items for multi-turn BYOK / passthrough history."""
        self.session_service.store_response_history(prepared, response_payload, route=route)

    async def responses_compact(self, request: web.Request) -> web.StreamResponse:
        body = await request.json()
        return await self.responses_compact_from_body(request, body)

    async def responses_compact_from_body(self, request: web.Request, body: dict[str, Any]) -> web.StreamResponse:
        _log_incoming_request("/v1/responses/compact", body)
        body = await self.auto_router.maybe_apply_auto_router(body)
        model = str(body.get("model") or "")
        if is_cursor_passthrough_slug(model):
            return await cursor_passthrough_handler(
                self,
                request,
                body,
                response_model_override=model,
                force_non_stream=True,
            )
        resolution = resolve_model_route(self.settings, body, request=request, store=self.operational_store)
        route, _tool_eval = self._emit_inference_observability(
            path="/v1/responses/compact",
            resolution=resolution,
            body=body,
        )
        image_block = self.tool_policy.image_generation_block(body, route)
        if image_block is not None:
            return image_block
        if route.is_chatgpt:
            return await chatgpt_compact_passthrough(self, request, route, body)
        if route.capabilities.compact_behavior == COMPACT_UNSUPPORTED:
            return _unsupported_compact_response(route)
        try:
            prepared = self.session_service.prepare(request, body, route=route)
        except KeyError as exc:
            self.governance.emit(
                path="/v1/responses/compact",
                provider=route.provider,
                model_slug=route.slug,
                outcome="error",
                body=body,
                failure_category="previous_response_missing",
                selected_by=resolution.selected_by,
                **_governance_inference_kwargs(resolution.inference),
            )
            return web.json_response(
                {"error": {"type": "not_found", "message": f"Unknown previous_response_id: {exc.args[0]}"}},
                status=404,
            )
        workspace = resolve_workspace(request, prepared.body, route)
        compact_body = self.session_service.compact_body(
            prepared,
            route.model,
            route=route,
            workspace=workspace,
        )
        frontier = extract_compact_frontier(compact_body.get("input"))
        git_status = git_status_short(workspace) if workspace is not None else None
        setattr(request, "_codex_shim_compact_frontier", frontier)
        setattr(request, "_codex_shim_compact_git_status", git_status)
        setattr(request, "_codex_shim_compact_workspace", str(workspace) if workspace is not None else None)
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
                inference=resolution.inference,
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
                **_governance_inference_kwargs(resolution.inference),
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

    def _route(self, body: dict[str, Any], request: web.Request | None = None) -> ShimModel:
        return resolve_model_route(
            self.settings, body, request=request, store=self.operational_store
        ).selected_route

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

    def _cursor_workspace(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
    ) -> Path | None:
        return resolve_workspace(request, body, route)

    def _cursor_cli_turn_options(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        *,
        chained_from_previous: bool,
        workspace: Path | None,
    ):
        inference = getattr(request, "_codex_shim_inference", None)
        cli_mode = inference.cli_mode if inference is not None and inference.cli_mode in {"plan", "ask"} else None
        return build_cursor_cli_turn_options(
            route,
            body,
            request=request,
            chained_from_previous=chained_from_previous,
            workspace=workspace,
            inference_cli_mode=cli_mode,
            session_store=self.cursor_thread_sessions,
        )

    def _persist_cursor_thread_session(self, turn_options, result) -> None:
        thread_id = getattr(turn_options, "thread_id", None)
        session_id = getattr(result, "session_id", None)
        if thread_id and session_id:
            self.cursor_thread_sessions.put(thread_id, session_id)

    def _prepare_cursor_agent_native(
        self,
        body: dict[str, Any],
        *,
        inference,
        route: ShimModel,
        chained_from_previous: bool,
        workspace: Path | None = None,
    ):
        from .cursor_acp import cursor_prompt_for_body

        turn_options = build_cursor_cli_turn_options(
            route,
            body,
            chained_from_previous=chained_from_previous,
            workspace=workspace,
            inference_cli_mode=inference.cli_mode if inference is not None and inference.cli_mode in {"plan", "ask"} else None,
        )
        prompt_text = cursor_prompt_for_body(
            body,
            route,
            chained_from_previous=chained_from_previous,
            workspace=workspace,
            upstream_parity=turn_options.upstream_parity,
            resume_chat_id=turn_options.resume_chat_id,
        )
        return self.cursor_agent_transport.prepare(
            body,
            inference=inference,
            chained_from_previous=chained_from_previous,
            model_row=route.raw if isinstance(route.raw, dict) else None,
            workspace=workspace,
            prompt_text=prompt_text,
        )

    async def _provider_cursor_agent_dispatch(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None,
        stream_response: WsStreamResponse | None,
    ) -> web.StreamResponse:
        inference = getattr(request, "_codex_shim_inference", None)
        return await self._post_cursor_agent(
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
            inference=inference,
        )

    async def _post_cursor_agent(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
        *,
        inference=None,
    ) -> web.StreamResponse:
        if inference is None:
            inference = resolve_model_route(
                self.settings, body, request=request, store=self.operational_store
            ).inference
        chained = prepared.chained_from_previous if prepared is not None else False
        workspace = self._cursor_workspace(request, route, body)
        native_envelope: dict[str, Any] | None = None
        try:
            prepared_native = self._prepare_cursor_agent_native(
                body,
                inference=inference,
                route=route,
                chained_from_previous=chained,
                workspace=workspace,
            )
            native_envelope = prepared_native.envelope
            if self.cursor_agent_transport.mock_url:
                await self.cursor_agent_transport.validate_with_mock(prepared_native)
        except CursorAgentTransportError as exc:
            return web.json_response(
                {"error": {"type": "upstream_error", "message": str(exc)}},
                status=502,
            )
        if body.get("stream"):
            if self.cursor_agent_transport.live_enabled:
                return await self._stream_cursor_agent_native(
                    request,
                    route,
                    body,
                    as_responses=as_responses,
                    prepared=prepared,
                    inference=inference,
                    native_envelope=native_envelope,
                    stream_response=stream_response,
                )
            return await self._stream_cursor_cli(
                request,
                route,
                body,
                as_responses,
                prepared=prepared,
                started_at=time.monotonic(),
                stream_response=stream_response,
                native_envelope=native_envelope,
            )
        if self.cursor_agent_transport.live_enabled:
            return await self._post_cursor_agent_native(
                request,
                route,
                body,
                as_responses=as_responses,
                prepared=prepared,
                inference=inference,
                native_envelope=native_envelope,
            )
        return await self._post_cursor_cli(
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
            native_envelope=native_envelope,
        )

    async def _post_cursor_agent_native(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        *,
        as_responses: bool,
        prepared: PreparedResponsesRequest | None,
        inference,
        native_envelope: dict[str, Any] | None,
    ) -> web.StreamResponse | web.Response:
        started_at = time.monotonic()
        provider_started_at = time.monotonic()
        chained = prepared.chained_from_previous if prepared is not None else False
        workspace = self._cursor_workspace(request, route, body if prepared is None else prepared.body)
        try:
            prepared_native = self._prepare_cursor_agent_native(
                body,
                inference=inference,
                route=route,
                chained_from_previous=chained,
                workspace=workspace,
            )
            if self.cursor_agent_transport.mock_url:
                await self.cursor_agent_transport.validate_with_mock(prepared_native)
            if prepared_native.transport_mode == "http2":
                from .providers.cursor_agent.live_run import collect_run_live_turn

                result = await collect_run_live_turn(prepared_native)
            else:
                from .providers.cursor_agent.live_http1 import collect_http1_live_turn

                result = await collect_http1_live_turn(prepared_native)
        except CursorAgentTransportError as exc:
            _log_access(
                request,
                route,
                502,
                started_at,
                stream=False,
                error="cursor_agent_live_error",
                request_body=prepared.body if prepared is not None else body,
                provider_ms=_elapsed_ms(provider_started_at),
            )
            return web.json_response(
                {"error": {"type": "upstream_error", "message": str(exc)}},
                status=502,
            )
        provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = _attach_response_metadata(
                cursor_acp_response_payload(result, route.slug),
                route,
                prepared,
                native_envelope=native_envelope,
            )
            if prepared is not None:
                self._store_response_history(prepared, response_payload, route=route)
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

    async def _stream_cursor_agent_native(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        *,
        as_responses: bool,
        prepared: PreparedResponsesRequest | None,
        inference,
        native_envelope: dict[str, Any] | None,
        stream_response: WsStreamResponse | None,
    ) -> web.StreamResponse:
        from .providers.cursor_agent.decode import write_cursor_agent_event

        started_at = time.monotonic()
        response = await _open_stream_sink(request, stream_response)
        workspace = self._cursor_workspace(request, route, body)
        state = _responses_stream_state(route, body.get("tools")) if as_responses else None
        if state is not None:
            state.metadata = _shim_response_metadata(route, prepared, native_envelope=native_envelope, workspace=workspace)
            await state.start(response)
        try:
            chained = prepared.chained_from_previous if prepared is not None else False
            native = self._prepare_cursor_agent_native(
                body,
                inference=inference,
                route=route,
                chained_from_previous=chained,
                workspace=workspace,
            )
            async for event in self.cursor_agent_transport.stream_events(native):
                if str(event.get("type") or "") in {"stream_end", "turn_ended"}:
                    break
                if state is not None:
                    await write_cursor_agent_event(state, response, event)
                else:
                    text = event.get("text") or event.get("content")
                    if text:
                        await _write_sse(
                            response,
                            {"choices": [{"delta": {"content": str(text)}, "finish_reason": None}]},
                        )
            if state is not None:
                final_response = await state.finish(response)
                if prepared is not None:
                    self._store_response_history(prepared, final_response, route=route)
                _log_access(
                    request,
                    route,
                    200,
                    started_at,
                    payload=final_response,
                    stream=True,
                    workspace=_workspace_log_value(workspace),
                )
        except ClientDisconnected:
            pass
        except CursorAgentTransportError as exc:
            failure = "cursor_turn_timeout" if "Timed out waiting" in str(exc) else "cursor_agent_live_error"
            await _write_sse(response, _cursor_agent_stream_error(route.slug, exc, failure))
            self._emit_cursor_governance_error(
                request,
                route,
                prepared.body if prepared is not None else body,
                failure,
                inference=inference,
            )
            _log_access(
                request,
                route,
                502,
                started_at,
                stream=True,
                error=failure,
                request_body=body,
                workspace=_workspace_log_value(workspace),
            )
        try:
            await response.write_eof()
        except Exception:
            pass
        return response

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
        upstream_body = merge_extra_body_params(body, route.extra_body_params)
        _dump_debug_request(route.slug, url, upstream_body)
        async with ClientSession(timeout=self.timeout) as session:
            upstream = await session.post(url, json=upstream_body, headers=headers)
            try:
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
                    # _stream_openai_chat owns the response and releases it in its finally block.
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
            finally:
                upstream.release()
        if as_responses:
            response_payload = _attach_response_metadata(
                chat_completion_to_response(payload, route.slug),
                route,
                prepared,
            )
            if prepared is not None:
                self._store_response_history(prepared, response_payload, route=route)
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
        upstream_body = merge_extra_body_params(body, route.extra_body_params)
        async with ClientSession(timeout=self.timeout) as session:
            upstream = await session.post(url, json=upstream_body, headers=headers)
            try:
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
                    # _stream_anthropic owns the response and releases it in its finally block.
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
            finally:
                upstream.release()
        if as_responses:
            response_payload = _attach_response_metadata(
                anthropic_to_response(payload, route.slug),
                route,
                prepared,
            )
            if prepared is not None:
                self._store_response_history(prepared, response_payload, route=route)
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
        workspace = self._cursor_workspace(request, route, body if prepared is None else prepared.body)
        try:
            chained = prepared.chained_from_previous if prepared is not None else False
            result = await _await_cursor_inference(
                run_cursor_acp(route, body, chained_from_previous=chained, workspace=workspace)
            )
        except CursorAcpError as exc:
            self._emit_cursor_governance_error(
                request,
                route,
                prepared.body if prepared is not None else body,
                "cursor_acp_error",
                inference=getattr(request, "_codex_shim_inference", None),
            )
            _log_access(
                request,
                route,
                502,
                started_at,
                stream=False,
                error="cursor_acp_error",
                request_body=prepared.body if prepared is not None else body,
                provider_ms=_elapsed_ms(provider_started_at),
                workspace=_workspace_log_value(workspace),
            )
            return _cursor_acp_error_response(exc)
        provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = _attach_response_metadata(
                cursor_acp_response_payload(result, route.slug),
                route,
                prepared,
                workspace=workspace,
            )
            if prepared is not None:
                self._store_response_history(prepared, response_payload, route=route)
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
                workspace=_workspace_log_value(workspace),
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
            workspace=_workspace_log_value(workspace),
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
        *,
        native_envelope: dict[str, Any] | None = None,
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
                native_envelope=native_envelope,
            )
        provider_started_at = time.monotonic()
        workspace = self._cursor_workspace(request, route, body if prepared is None else prepared.body)
        try:
            chained = prepared.chained_from_previous if prepared is not None else False
            turn_options = self._cursor_cli_turn_options(
                request,
                route,
                body if prepared is None else prepared.body,
                chained_from_previous=chained,
                workspace=workspace,
            )
            inference = getattr(request, "_codex_shim_inference", None)
            result = await _await_cursor_inference(
                run_cursor_cli(
                    route,
                    body,
                    chained_from_previous=chained,
                    workspace=workspace,
                    request=request,
                    turn_options=turn_options,
                    inference_cli_mode=inference.cli_mode if inference is not None else None,
                )
            )
            self._persist_cursor_thread_session(turn_options, result)
        except CursorCliError as exc:
            failure = "cursor_turn_timeout" if "Timed out waiting" in str(exc) else "cursor_cli_error"
            self._emit_cursor_governance_error(
                request,
                route,
                prepared.body if prepared is not None else body,
                failure,
                inference=getattr(request, "_codex_shim_inference", None),
            )
            _log_access(
                request,
                route,
                502,
                started_at,
                stream=False,
                error=failure,
                request_body=prepared.body if prepared is not None else body,
                provider_ms=_elapsed_ms(provider_started_at),
                workspace=_workspace_log_value(workspace),
            )
            return _cursor_agent_error_response(exc, failure)
        provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = _attach_response_metadata(
                cursor_acp_response_payload(result, route.slug),
                route,
                prepared,
                native_envelope=native_envelope,
                workspace=workspace,
            )
            if prepared is not None:
                self._store_response_history(prepared, response_payload, route=route)
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
                workspace=_workspace_log_value(workspace),
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
            workspace=_workspace_log_value(workspace),
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
            state = _responses_stream_state(route, (prepared.body if prepared is not None else {}).get("tools"))
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
                    self._store_response_history(prepared, final_response, route=route)
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
            state = _responses_stream_state(route, (prepared.body if prepared is not None else {}).get("tools"))
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
                    self._store_response_history(prepared, final_response, route=route)
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
        workspace = self._cursor_workspace(request, route, body if prepared is None else prepared.body)
        state = _responses_stream_state(route, (prepared.body if prepared is not None else {}).get("tools")) if as_responses else None
        if state is not None:
            state.metadata = _shim_response_metadata(route, prepared, workspace=workspace)
        chained = prepared.chained_from_previous if prepared is not None else False
        try:
            if state is not None:
                await state.start(response)

                async def write_responses_delta(text: str) -> None:
                    await state.write_chat_delta(response, {"choices": [{"delta": {"content": text}}]})

                result = await _await_cursor_inference(
                    run_cursor_acp(
                        route,
                        body,
                        on_text=write_responses_delta,
                        chained_from_previous=chained,
                        workspace=workspace,
                    )
                )
                if result.usage is not None:
                    state.usage = result.usage
                final_response = await state.finish(response)
                if prepared is not None:
                    self._store_response_history(prepared, final_response, route=route)
                _log_access(
                    request,
                    route,
                    200,
                    started_at,
                    payload=final_response,
                    stream=True,
                    workspace=_workspace_log_value(workspace),
                )
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
                    run_cursor_acp(
                        route,
                        body,
                        on_text=write_chat_delta,
                        chained_from_previous=chained,
                        workspace=workspace,
                    )
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
                _log_access(
                    request,
                    route,
                    200,
                    started_at,
                    stream=True,
                    workspace=_workspace_log_value(workspace),
                )
        except ClientDisconnected:
            pass
        except CursorAcpError as exc:
            self._emit_cursor_governance_error(
                request,
                route,
                prepared.body if prepared is not None else body,
                "cursor_acp_error",
                inference=getattr(request, "_codex_shim_inference", None),
            )
            _log_access(
                request,
                route,
                502,
                started_at,
                stream=bool(body.get("stream")),
                error="cursor_acp_error",
                workspace=_workspace_log_value(workspace),
            )
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
        *,
        native_envelope: dict[str, Any] | None = None,
    ) -> web.StreamResponse:
        started_at = started_at or time.monotonic()
        response = await _open_stream_sink(request, stream_response)
        workspace = self._cursor_workspace(request, route, body if prepared is None else prepared.body)
        state = _responses_stream_state(route, (prepared.body if prepared is not None else body).get("tools")) if as_responses else None
        if state is not None:
            state.metadata = _shim_response_metadata(route, prepared, native_envelope=native_envelope, workspace=workspace)
        chained = prepared.chained_from_previous if prepared is not None else False
        turn_options = self._cursor_cli_turn_options(
            request,
            route,
            body if prepared is not None else body,
            chained_from_previous=chained,
            workspace=workspace,
        )
        inference = getattr(request, "_codex_shim_inference", None)
        try:
            if state is not None:
                await state.start(response)

                async def write_responses_delta(text: str) -> None:
                    await state.write_chat_delta(response, {"choices": [{"delta": {"content": text}}]})

                async def write_responses_event(event: dict[str, Any]) -> None:
                    await state.write_cursor_cli_event(response, event)

                async def write_keepalive() -> None:
                    await _safe_write(response, b": keepalive\n\n")

                result = await _await_cursor_inference(
                    run_cursor_cli(
                        route,
                        body,
                        on_text=write_responses_delta,
                        on_event=write_responses_event,
                        on_keepalive=write_keepalive,
                        chained_from_previous=chained,
                        workspace=workspace,
                        request=request,
                        turn_options=turn_options,
                        inference_cli_mode=inference.cli_mode if inference is not None else None,
                    )
                )
                self._persist_cursor_thread_session(turn_options, result)
                if result.usage is not None:
                    state.usage = result.usage
                final_response = await state.finish(response)
                if prepared is not None:
                    self._store_response_history(prepared, final_response, route=route)
                _log_access(
                    request,
                    route,
                    200,
                    started_at,
                    payload=final_response,
                    stream=True,
                    workspace=_workspace_log_value(workspace),
                )
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

                result = await _await_cursor_inference(
                    run_cursor_cli(
                        route,
                        body,
                        on_text=write_chat_delta,
                        chained_from_previous=chained,
                        workspace=workspace,
                        request=request,
                        turn_options=turn_options,
                        inference_cli_mode=inference.cli_mode if inference is not None else None,
                    )
                )
                self._persist_cursor_thread_session(turn_options, result)
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
                _log_access(
                    request,
                    route,
                    200,
                    started_at,
                    stream=True,
                    workspace=_workspace_log_value(workspace),
                )
        except ClientDisconnected:
            pass
        except CursorCliError as exc:
            failure = "cursor_turn_timeout" if "Timed out waiting" in str(exc) else "cursor_cli_error"
            self._emit_cursor_governance_error(
                request,
                route,
                prepared.body if prepared is not None else body,
                failure,
                inference=getattr(request, "_codex_shim_inference", None),
            )
            _log_access(
                request,
                route,
                502,
                started_at,
                stream=bool(body.get("stream")),
                error=failure,
                workspace=_workspace_log_value(workspace),
            )
            await _write_sse(response, _cursor_agent_stream_error(route.slug, exc, failure))
            if not as_responses:
                await _safe_write(response, b"data: [DONE]\n\n")
        try:
            await response.write_eof()
        except Exception:
            pass
        return response


_VERSIONED_BASE_RE = re.compile(r"(?:^|/)v\d+$")


def _join_url(base_url: str, endpoint: str) -> str:
    base = base_url.rstrip("/")
    if _VERSIONED_BASE_RE.search(base):
        return base + endpoint
    if endpoint == "/messages":
        return base + "/v1/messages"
    return urljoin(base + "/", "v1" + endpoint)


def _openai_headers(route: ShimModel) -> dict[str, str]:
    from .auth_tokens import resolve_bearer_token

    headers = {"Content-Type": "application/json", **route.extra_headers}
    token = route.api_key
    if not token:
        try:
            token = resolve_bearer_token(route.slug, route.raw if isinstance(route.raw, dict) else {})
        except RuntimeError:
            token = ""
    if token:
        headers.setdefault("Authorization", f"Bearer {token}")
    return headers


def _anthropic_text(payload: Any) -> str:
    if not isinstance(payload, dict):
        return ""
    parts = [
        str(block.get("text") or "")
        for block in (payload.get("content") or [])
        if isinstance(block, dict) and block.get("type") == "text"
    ]
    return "".join(parts)


def _anthropic_headers(route: ShimModel) -> dict[str, str]:
    from .auth_tokens import resolve_bearer_token

    headers = {
        "Content-Type": "application/json",
        "anthropic-version": "2023-06-01",
        **route.extra_headers,
    }
    token = route.api_key
    if not token:
        try:
            token = resolve_bearer_token(route.slug, route.raw if isinstance(route.raw, dict) else {})
        except RuntimeError:
            token = ""
    if token:
        headers.setdefault("x-api-key", token)
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
