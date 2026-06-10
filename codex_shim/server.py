from __future__ import annotations

import argparse
import secrets
from pathlib import Path
from typing import Any

from aiohttp import ClientSession, ClientTimeout, web

from .clientconfig import CATALOG_PATH, write_catalog
from .gateway import GatewayHandlers, ResponsesOrchestrator, build_app
from .governance import GovernanceAuditSink
from .observability import ObservabilitySink
from .persistence import JsonOperationalStore
from .providers import (
    CursorThreadSessionStore,
    ProviderDispatcher,
    ProviderRuntime,
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
from .providers import governance_inference_kwargs as _governance_inference_kwargs
from .providers import join_url as _join_url
from .providers import openai_headers as _openai_headers
from .providers.cursor_agent import CursorAgentTransport
from .routing import AutoRouterService, refresh_subscription_catalog
from .routing import auto_router as router_module
from .sessions import (
    PreparedResponsesRequest,
    ResponseStore,
    SessionService,
    default_store_path,
)
from .settings import (
    DEFAULT_HOST,
    DEFAULT_PORT,
    DEFAULT_SETTINGS,
    ModelSettings,
    ShimModel,
)
from .tools import ToolPolicy
from .wire import StreamSink, WsStreamResponse

# Compatibility aliases: tests/test_server.py imports the underscore names from
# codex_shim.server. Delete once test imports are repointed at codex_shim.passthrough
# (migration phase 10).
_merge_codex_forward_headers = merge_codex_forward_headers
_metadata_as_forward_headers = metadata_as_forward_headers
_passthrough_forward_headers = passthrough_forward_headers
_rewrite_response_model = rewrite_response_model
_sanitize_chatgpt_passthrough_body = sanitize_chatgpt_passthrough_body


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
        self.responses = ResponsesOrchestrator(self)
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

    def app(self) -> web.Application:
        return build_app(self)

    async def chat_completions(self, request: web.Request) -> StreamSink:
        return await self.responses.chat_completions(request)

    async def _dispatch_responses(
        self,
        request: web.Request,
        body: dict[str, Any],
        ws_stream: WsStreamResponse | None = None,
    ) -> StreamSink:
        return await self.responses._dispatch_responses(request, body, ws_stream=ws_stream)

    async def responses_compact(self, request: web.Request) -> StreamSink:
        return await self.responses.responses_compact(request)

    async def responses_compact_from_body(self, request: web.Request, body: dict[str, Any]) -> StreamSink:
        return await self.responses.responses_compact_from_body(request, body)

    def _route(self, body: dict[str, Any], request: web.Request | None = None) -> ShimModel:
        return self.responses._route(body, request)

    def _store_response_history(
        self,
        prepared: PreparedResponsesRequest,
        response_payload: dict[str, Any],
        *,
        route: ShimModel | None = None,
    ) -> None:
        """Persist completed turn items for multi-turn BYOK / passthrough history."""
        self.session_service.store_response_history(prepared, response_payload, route=route)

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

    async def _provider_openai_dispatch(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        prepared: PreparedResponsesRequest | None,
        stream_response: WsStreamResponse | None,
    ) -> StreamSink:
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
    ) -> StreamSink:
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
    ) -> StreamSink:
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
    ) -> StreamSink:
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
    ) -> StreamSink:
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
    ) -> StreamSink:
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
    ) -> StreamSink:
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
    ) -> StreamSink:
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
    ) -> StreamSink:
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
    ) -> StreamSink:
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
