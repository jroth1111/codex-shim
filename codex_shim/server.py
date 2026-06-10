from __future__ import annotations

import argparse
import secrets
from pathlib import Path
from typing import Any

from aiohttp import ClientSession, ClientTimeout, web

from .capabilities import is_delegate_route
from .catalog import CATALOG_PATH, write_catalog
from .errors import (
    invalid_request_error_response as _invalid_request_error_response,
)
from .errors import (
    unsupported_compact_response as _unsupported_compact_response,
)
from .gateway import GatewayHandlers, build_app
from .governance import GovernanceAuditSink
from .observability import ObservabilitySink
from .observability import log_incoming_request as _log_incoming_request
from .persistence import JsonOperationalStore
from .providers import (
    CursorThreadSessionStore,
    ProviderDispatcher,
    ProviderRuntime,
    chatgpt_compact_passthrough,
    chatgpt_passthrough,
    cursor_passthrough_handler,
    is_cursor_passthrough_slug,
    merge_codex_forward_headers,
    metadata_as_forward_headers,
    passthrough_forward_headers,
    post_anthropic,
    post_cursor_acp,
    post_cursor_agent,
    post_cursor_cli,
    post_openai_chat,
    rewrite_response_model,
    sanitize_chatgpt_passthrough_body,
)
from .providers import anthropic_headers as _anthropic_headers
from .providers import anthropic_text as _anthropic_text
from .providers import join_url as _join_url
from .providers import normalize_roles as _normalize_roles
from .providers import openai_headers as _openai_headers
from .providers.cursor_agent import CursorAgentTransport
from .routing import AutoRouterService, RouteResolution, refresh_subscription_catalog, resolve_model_route
from .routing import auto_router as router_module
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
)
from .tools import ToolPolicy
from .translate import (
    ResponsesInputError,
    chat_to_anthropic,
    chat_to_responses_request,
    responses_to_anthropic,
    responses_to_chat,
    validate_responses_input,
)
from .translate.tool_validate import ToolValidationError, validate_anthropic_tools, validate_chat_tools
from .wire import WsStreamResponse

# Compatibility aliases: tests/test_server.py imports the underscore names from
# codex_shim.server. Delete once test imports are repointed at codex_shim.passthrough
# (migration phase 10).
_merge_codex_forward_headers = merge_codex_forward_headers
_metadata_as_forward_headers = metadata_as_forward_headers
_passthrough_forward_headers = passthrough_forward_headers
_rewrite_response_model = rewrite_response_model
_sanitize_chatgpt_passthrough_body = sanitize_chatgpt_passthrough_body


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
        self._provider_runtime = ProviderRuntime(
            timeout=self.timeout,
            settings=self.settings,
            operational_store=self.operational_store,
            cursor_thread_sessions=self.cursor_thread_sessions,
            cursor_agent_transport=self.cursor_agent_transport,
            store_history=self._store_response_history,
            emit_governance_error=self._emit_cursor_governance_error,
        )
        self.gateway_handlers = GatewayHandlers(self)
        self.auto_router = AutoRouterService(self.settings, classify_factory=_make_router_classifier)
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
        return build_app(self)

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

    async def _post_cursor_acp(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        return await post_cursor_acp(
            self._provider_runtime,
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
        )

    async def _post_cursor_cli(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        return await post_cursor_cli(
            self._provider_runtime,
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
        )

    async def _post_cursor_agent(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
        inference=None,
    ) -> web.StreamResponse:
        return await post_cursor_agent(
            self._provider_runtime,
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
            inference=inference,
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

    async def _post_openai_chat(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        return await post_openai_chat(
            self._provider_runtime,
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
        )

    async def _post_anthropic(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        return await post_anthropic(
            self._provider_runtime,
            request,
            route,
            body,
            as_responses=as_responses,
            prepared=prepared,
            stream_response=stream_response,
        )


def _make_router_classifier(model: ShimModel, config: router_module.RouterConfig):
    """Auto-router classifier transport, injected into routing.AutoRouterService.

    Lives in the composition root because it needs provider HTTP plumbing
    (headers/urls), which the routing module must not depend on.
    """
    timeout = ClientTimeout(total=config.timeout + 5, sock_connect=config.timeout, sock_read=config.timeout)

    async def classify(system_prompt: str, user_content: str) -> str:
        async with ClientSession(timeout=timeout) as session:
            if model.is_anthropic:
                url = _join_url(model.base_url, "/messages")
                payload = {
                    "model": model.model,
                    "max_tokens": config.max_tokens,
                    "system": system_prompt,
                    "messages": [{"role": "user", "content": user_content}],
                }
                upstream = await session.post(url, json=payload, headers=_anthropic_headers(model))
                upstream.raise_for_status()
                data = await upstream.json(content_type=None)
                return _anthropic_text(data)
            url = _join_url(model.base_url, "/chat/completions")
            payload = {
                "model": model.model,
                "stream": False,
                "temperature": 0,
                "max_tokens": config.max_tokens,
                "messages": [
                    {"role": "system", "content": system_prompt},
                    {"role": "user", "content": user_content},
                ],
            }
            upstream = await session.post(url, json=payload, headers=_openai_headers(model))
            upstream.raise_for_status()
            data = await upstream.json(content_type=None)
            message = (data.get("choices") or [{}])[0].get("message") or {}
            return str(message.get("content") or "")

    return classify



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
