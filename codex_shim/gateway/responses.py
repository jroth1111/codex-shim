"""/v1 request orchestration: route resolution, translation, dispatch, compact."""
from __future__ import annotations

from typing import TYPE_CHECKING, Any

from aiohttp import web

from ..capabilities import is_delegate_route
from ..errors import (
    invalid_request_error_response as _invalid_request_error_response,
)
from ..errors import (
    unsupported_compact_response as _unsupported_compact_response,
)
from ..observability import log_incoming_request as _log_incoming_request
from ..providers import (
    chatgpt_compact_passthrough,
    chatgpt_passthrough,
    cursor_passthrough_handler,
    is_cursor_passthrough_slug,
)
from ..providers import governance_inference_kwargs as _governance_inference_kwargs
from ..providers import normalize_roles as _normalize_roles
from ..routing import (
    RouteResolution,
    apply_helper_model_policy,
    is_helper_model_slug,
    resolve_model_route,
    resolve_workspace,
)
from ..sessions import (
    PreparedResponsesRequest,
    extract_compact_frontier,
    git_status_short,
)
from ..sessions import as_compact_response as _as_compact_response
from ..settings import CHATGPT_MODEL_SLUG, COMPACT_UNSUPPORTED, ShimModel
from ..translate import (
    ResponsesInputError,
    ToolValidationError,
    chat_to_anthropic,
    chat_to_responses_request,
    responses_to_anthropic,
    responses_to_chat,
    validate_anthropic_tools,
    validate_chat_tools,
    validate_responses_input,
)
from ..wire import StreamSink, WsStreamResponse

if TYPE_CHECKING:
    from ..server import ShimServer


class ResponsesOrchestrator:
    """Validate -> route -> translate -> dispatch glue behind the /v1 handlers."""

    def __init__(self, server: "ShimServer") -> None:
        self._server = server

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
        tool_eval = self._server.tool_policy.evaluate(body=body, route=route, inference=inference)
        self._server.observability.emit(
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
        self._server.observability.emit(
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
        self._server.observability.emit(
            stage="policy_applied",
            path=path,
            provider=route.provider,
            model_slug=route.slug,
            attributes=tool_eval,
        )
        return route, tool_eval

    async def chat_completions(self, request: web.Request) -> StreamSink:
        body = await request.json()
        body = await self._server.auto_router.maybe_apply_auto_router(body)
        route = self._route(body, request)
        if route.is_chatgpt:
            raise web.HTTPBadGateway(text="ChatGPT passthrough supports /v1/responses, not /v1/chat/completions")
        if route.is_openai_chat:
            forwarded = dict(body)
            forwarded["model"] = route.model
            if "messages" in forwarded:
                forwarded["messages"] = _normalize_roles(forwarded["messages"])
            return await self._server._post_openai_chat(request, route, forwarded, as_responses=False)
        if route.is_anthropic:
            forwarded = chat_to_anthropic(body, route.model, route.max_output_tokens)
            return await self._server._post_anthropic(request, route, forwarded, as_responses=False)
        if route.is_cursor_agent:
            forwarded = chat_to_responses_request(body, route.model, route.max_output_tokens)
            resolution = resolve_model_route(self._server.settings, body, request=request, store=self._server.operational_store)
            setattr(request, "_codex_shim_inference", resolution.inference)
            return await self._server._post_cursor_agent(request, route, forwarded, as_responses=False)
        if route.is_cursor_acp:
            forwarded = chat_to_responses_request(body, route.model, route.max_output_tokens)
            return await self._server._post_cursor_acp(request, route, forwarded, as_responses=False)
        if route.is_cursor_cli:
            forwarded = chat_to_responses_request(body, route.model, route.max_output_tokens)
            return await self._server._post_cursor_cli(request, route, forwarded, as_responses=False)
        raise web.HTTPBadGateway(text=f"Unsupported model provider: {route.provider}")

    async def _dispatch_responses(
        self,
        request: web.Request,
        body: dict[str, Any],
        ws_stream: WsStreamResponse | None = None,
    ) -> StreamSink:
        _log_incoming_request("/v1/responses", body)
        body = await self._server.auto_router.maybe_apply_auto_router(body)
        model = str(body.get("model") or "")
        if is_cursor_passthrough_slug(model):
            return await cursor_passthrough_handler(self._server, request, body, response_model_override=model)
        if is_helper_model_slug(model):
            try:
                body, _helper_route, helper_category = apply_helper_model_policy(
                    self._server.settings, body, requested=model
                )
                if helper_category:
                    setattr(request, "_codex_shim_helper_category", helper_category)
            except web.HTTPNotImplemented as exc:
                self._server.governance.emit(
                    path="/v1/responses",
                    provider="helper",
                    model_slug=model,
                    outcome="error",
                    body=body,
                    failure_category="helper_model_rejected",
                )
                return web.Response(text=str(exc.text or exc), status=501)
        resolution = resolve_model_route(self._server.settings, body, request=request, store=self._server.operational_store)
        route, _tool_eval = self._emit_inference_observability(
            path="/v1/responses",
            resolution=resolution,
            body=body,
        )
        helper_category = getattr(request, "_codex_shim_helper_category", None)
        if helper_category:
            self._server.governance.emit(
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
            self._server.operational_store.put(
                "idempotency",
                idempotency_key,
                {"path": "/v1/responses", "model": route.slug, "stream": bool(body.get("stream"))},
            )
        image_block = self._server.tool_policy.image_generation_block(body, route)
        if image_block is not None:
            return image_block
        if route.is_chatgpt:
            response_model_override = model if model and model != CHATGPT_MODEL_SLUG else None
            return await chatgpt_passthrough(
                self._server,
                request,
                route,
                body,
                response_model_override=response_model_override,
                ws_stream=ws_stream,
            )
        try:
            prepared = self._server.session_service.prepare(request, body, route=route)
        except KeyError as exc:
            self._server.governance.emit(
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
            self._server.governance.emit(
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
    ) -> StreamSink:
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
            result = await self._server.provider_dispatcher.dispatch(
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
            result = await self._server.provider_dispatcher.dispatch(
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
            result = await self._server.provider_dispatcher.dispatch(
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
            result = await self._server.provider_dispatcher.dispatch(
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
            result = await self._server.provider_dispatcher.dispatch(
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
            result = await self._server.provider_dispatcher.dispatch(
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
        self._server.governance.emit(
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
        self._server.observability.emit(
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
                self._server.observability.emit(
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

    async def responses_compact(self, request: web.Request) -> StreamSink:
        body = await request.json()
        return await self.responses_compact_from_body(request, body)

    async def responses_compact_from_body(self, request: web.Request, body: dict[str, Any]) -> StreamSink:
        _log_incoming_request("/v1/responses/compact", body)
        body = await self._server.auto_router.maybe_apply_auto_router(body)
        model = str(body.get("model") or "")
        if is_cursor_passthrough_slug(model):
            return await cursor_passthrough_handler(
                self._server,
                request,
                body,
                response_model_override=model,
                force_non_stream=True,
            )
        resolution = resolve_model_route(self._server.settings, body, request=request, store=self._server.operational_store)
        route, _tool_eval = self._emit_inference_observability(
            path="/v1/responses/compact",
            resolution=resolution,
            body=body,
        )
        image_block = self._server.tool_policy.image_generation_block(body, route)
        if image_block is not None:
            return image_block
        if route.is_chatgpt:
            return await chatgpt_compact_passthrough(self._server, request, route, body)
        if route.capabilities.compact_behavior == COMPACT_UNSUPPORTED:
            return _unsupported_compact_response(route)
        try:
            prepared = self._server.session_service.prepare(request, body, route=route)
        except KeyError as exc:
            self._server.governance.emit(
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
        compact_body = self._server.session_service.compact_body(
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
            self._server.governance.emit(
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

    def _route(self, body: dict[str, Any], request: web.Request | None = None) -> ShimModel:
        return resolve_model_route(
            self._server.settings, body, request=request, store=self._server.operational_store
        ).selected_route

