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
from .compact import compact_request_body as _compact_request_body
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
from .passthrough import (
    chatgpt_compact_passthrough,
    chatgpt_passthrough,
    merge_codex_forward_headers as _merge_codex_forward_headers,
    metadata_as_forward_headers as _metadata_as_forward_headers,
    passthrough_forward_headers as _passthrough_forward_headers,
    responses_items_from_input as _responses_items_from_input,
    rewrite_response_model as _rewrite_response_model,
    sanitize_chatgpt_passthrough_body as _sanitize_chatgpt_passthrough_body,
)
from .picker import CODEX_CONFIG_PATH
from .picker import current_managed_model as _current_managed_model
from .picker import picker_html as _picker_html
from .picker import restart_codex_app as _restart_codex_app
from .picker import set_active_model as _set_active_model
from .responses_ws import WsStreamResponse, handle_responses_websocket
from .response_store import ResponseStore, default_store_path
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

    def app(self) -> web.Application:
        allowed_hosts = build_allowed_hosts(self.host)
        app = web.Application(
            client_max_size=64 * 1024 * 1024,
            middlewares=[host_guard_middleware(allowed_hosts)],
        )
        app.router.add_get("/health", self.health)
        app.router.add_get("/v1/models", self.models)
        app.router.add_post("/v1/chat/completions", self.chat_completions)
        app.router.add_post("/v1/responses", self.responses)
        app.router.add_get("/v1/responses", self.responses_websocket)
        app.router.add_post("/v1/responses/compact", self.responses_compact)
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

    async def responses(self, request: web.Request) -> web.StreamResponse:
        body = await request.json()
        return await self._dispatch_responses(request, body)

    async def responses_websocket(self, request: web.Request) -> web.WebSocketResponse:
        return await handle_responses_websocket(request, dispatch=self._dispatch_responses)

    async def _dispatch_responses(
        self,
        request: web.Request,
        body: dict[str, Any],
        ws_stream: WsStreamResponse | None = None,
    ) -> web.StreamResponse | web.Response:
        _log_incoming_request("/v1/responses", body)
        model = str(body.get("model") or "")
        route = self._route(body)
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
            session_id = request.headers.get("session_id", "") or ""
            body = self._body_with_previous_response(body, session_id)
            body["_shim_session_id"] = session_id
        except KeyError as exc:
            return web.json_response(
                {"error": {"type": "not_found", "message": f"Unknown previous_response_id: {exc.args[0]}"}},
                status=404,
            )
        try:
            validate_responses_input(body)
            stream_target = ws_stream if ws_stream is not None else None
            if route.is_openai_chat:
                forwarded = responses_to_chat(body, route.model, route.provider, thinking_behavior=route.thinking_behavior)
                return await self._post_openai_chat(
                    request,
                    route,
                    forwarded,
                    as_responses=True,
                    responses_body=body,
                    stream_response=stream_target,
                )
            if route.is_anthropic:
                forwarded = responses_to_anthropic(body, route.model, route.max_output_tokens)
                return await self._post_anthropic(
                    request,
                    route,
                    forwarded,
                    as_responses=True,
                    responses_body=body,
                    stream_response=stream_target,
                )
            if route.is_cursor_acp:
                return await self._post_cursor_acp(
                    request,
                    route,
                    body,
                    as_responses=True,
                    responses_body=body,
                    stream_response=stream_target,
                )
            if route.is_cursor_cli:
                return await self._post_cursor_cli(
                    request,
                    route,
                    body,
                    as_responses=True,
                    responses_body=body,
                    stream_response=stream_target,
                )
        except ResponsesInputError as exc:
            return _invalid_request_error_response(exc)
        raise web.HTTPBadGateway(text=f"Unsupported model provider: {route.provider}")

    def _body_with_previous_response(self, body: dict[str, Any], session_id: str = "") -> dict[str, Any]:
        previous_response_id = body.get("previous_response_id")
        if not previous_response_id:
            return body
        previous_items = self.response_store.get(str(previous_response_id), session_id)
        if previous_items is None:
            raise KeyError(str(previous_response_id))
        combined = dict(body)
        combined.pop("previous_response_id", None)
        combined["input"] = previous_items + _responses_items_from_input(body.get("input"))
        combined["_shim_chained_from_previous"] = True
        return combined

    def _store_response_history(
        self,
        request_body: dict[str, Any],
        response_payload: dict[str, Any],
    ) -> None:
        """Persist completed turn items; session id comes from _shim_session_id on request_body."""
        response_id = str(response_payload.get("id") or "")
        if not response_id:
            return
        session_id = str(request_body.get("_shim_session_id") or "")
        items: list[dict[str, Any]] = []
        instructions = request_body.get("instructions")
        if instructions and not request_body.get("_shim_chained_from_previous"):
            items.append(
                {
                    "type": "message",
                    "role": "developer",
                    "content": [{"type": "input_text", "text": self._content_to_debug_text(instructions)}],
                }
            )
        items.extend(_responses_items_from_input(request_body.get("input")))
        output = response_payload.get("output")
        if isinstance(output, list):
            items.extend(item for item in output if isinstance(item, dict))
        self.response_store.put(
            response_id,
            items,
            session_id=session_id,
            model=str(request_body.get("model") or response_payload.get("model") or ""),
        )

    def _store_body_with_session(self, body: dict[str, Any], request: web.Request) -> dict[str, Any]:
        session_id = request.headers.get("session_id", "") or ""
        store_body = dict(body)
        store_body["_shim_session_id"] = session_id
        return store_body

    async def responses_compact(self, request: web.Request) -> web.StreamResponse:
        body = await request.json()
        _log_incoming_request("/v1/responses/compact", body)
        route = self._route(body)
        if route.is_chatgpt:
            return await chatgpt_compact_passthrough(self, request, route, body)
        if route.capabilities.compact_behavior == COMPACT_UNSUPPORTED:
            return _unsupported_compact_response(route)
        session_id = request.headers.get("session_id", "") or ""
        try:
            body = self._body_with_previous_response(body, session_id)
        except KeyError as exc:
            return web.json_response(
                {"error": {"type": "not_found", "message": f"Unknown previous_response_id: {exc.args[0]}"}},
                status=404,
            )
        compact_body = _compact_request_body(body, route.model)
        try:
            validate_responses_input(compact_body)
            if route.is_openai_chat:
                forwarded = responses_to_chat(
                    compact_body,
                    route.model,
                    route.provider,
                    thinking_behavior=route.thinking_behavior,
                )
                forwarded["stream"] = False
                response = await self._post_openai_chat(request, route, forwarded, as_responses=True)
                return await _as_compact_response(response, route.slug, compact_body)
            if route.is_anthropic:
                forwarded = responses_to_anthropic(compact_body, route.model, route.max_output_tokens)
                forwarded["stream"] = False
                response = await self._post_anthropic(request, route, forwarded, as_responses=True)
                return await _as_compact_response(response, route.slug, compact_body)
            if route.is_cursor_acp:
                compact_body["stream"] = False
                response = await self._post_cursor_acp(request, route, compact_body, as_responses=True)
                return await _as_compact_response(response, route.slug, compact_body)
            if route.is_cursor_cli:
                compact_body["stream"] = False
                response = await self._post_cursor_cli(request, route, compact_body, as_responses=True)
                return await _as_compact_response(response, route.slug, compact_body)
        except ResponsesInputError as exc:
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
        requested = str(body.get("model") or "")
        route = self.settings.by_slug_or_model(requested)
        if route is None:
            raise web.HTTPNotFound(text=f"Unknown model slug/model: {requested}")
        return route

    async def _post_openai_chat(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        responses_body: dict[str, Any] | None = None,
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
                    request_body=responses_body or body,
                    provider_ms=_elapsed_ms(provider_started_at),
                )
                return await _error_response(upstream, slug=route.slug)
            if body.get("stream"):
                return await self._stream_openai_chat(
                    request,
                    upstream,
                    route,
                    as_responses,
                    responses_body=responses_body,
                    started_at=started_at,
                    stream_response=stream_response,
                )
            payload = await upstream.json(content_type=None)
            provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = chat_completion_to_response(payload, route.slug)
            if responses_body is not None:
                self._store_response_history(responses_body, response_payload)
            _log_access(
                request,
                route,
                200,
                started_at,
                payload=response_payload,
                stream=False,
                request_body=responses_body or body,
                provider_ms=provider_ms,
            )
            return web.json_response(response_payload)
        _log_access(request, route, 200, started_at, payload=payload, stream=False, request_body=body, provider_ms=provider_ms)
        return web.json_response(payload)

    async def _post_anthropic(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        as_responses: bool,
        responses_body: dict[str, Any] | None = None,
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
                    request_body=responses_body or body,
                    provider_ms=_elapsed_ms(provider_started_at),
                )
                return await _error_response(upstream)
            if body.get("stream"):
                return await self._stream_anthropic(
                    request,
                    upstream,
                    route,
                    as_responses,
                    responses_body=responses_body,
                    started_at=started_at,
                    stream_response=stream_response,
                )
            payload = await upstream.json(content_type=None)
            provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = anthropic_to_response(payload, route.slug)
            if responses_body is not None:
                self._store_response_history(responses_body, response_payload)
            _log_access(
                request,
                route,
                200,
                started_at,
                payload=response_payload,
                stream=False,
                request_body=responses_body or body,
                provider_ms=provider_ms,
            )
            return web.json_response(response_payload)
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
        responses_body: dict[str, Any] | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = time.monotonic()
        if body.get("stream"):
            return await self._stream_cursor_acp(
                request,
                route,
                body,
                as_responses,
                responses_body=responses_body,
                started_at=started_at,
                stream_response=stream_response,
            )
        provider_started_at = time.monotonic()
        try:
            result = await _await_cursor_inference(run_cursor_acp(route, body))
        except CursorAcpError as exc:
            _log_access(
                request,
                route,
                502,
                started_at,
                stream=False,
                error="cursor_acp_error",
                request_body=responses_body or body,
                provider_ms=_elapsed_ms(provider_started_at),
            )
            return _cursor_acp_error_response(exc)
        provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = cursor_acp_response_payload(result, route.slug)
            if responses_body is not None:
                self._store_response_history(responses_body, response_payload)
            _log_access(
                request,
                route,
                200,
                started_at,
                payload=response_payload,
                stream=False,
                request_body=responses_body or body,
                provider_ms=provider_ms,
            )
            return web.json_response(response_payload)
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
        responses_body: dict[str, Any] | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = time.monotonic()
        if body.get("stream"):
            return await self._stream_cursor_cli(
                request,
                route,
                body,
                as_responses,
                responses_body=responses_body,
                started_at=started_at,
                stream_response=stream_response,
            )
        provider_started_at = time.monotonic()
        try:
            result = await _await_cursor_inference(run_cursor_cli(route, body))
        except CursorCliError as exc:
            _log_access(
                request,
                route,
                502,
                started_at,
                stream=False,
                error="cursor_cli_error",
                request_body=responses_body or body,
                provider_ms=_elapsed_ms(provider_started_at),
            )
            return _cursor_agent_error_response(exc, "cursor_cli_error")
        provider_ms = _elapsed_ms(provider_started_at)
        if as_responses:
            response_payload = cursor_acp_response_payload(result, route.slug)
            if responses_body is not None:
                self._store_response_history(responses_body, response_payload)
            _log_access(
                request,
                route,
                200,
                started_at,
                payload=response_payload,
                stream=False,
                request_body=responses_body or body,
                provider_ms=provider_ms,
            )
            return web.json_response(response_payload)
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
        responses_body: dict[str, Any] | None = None,
        started_at: float | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = started_at or time.monotonic()
        response = await _open_stream_sink(request, stream_response)
        if as_responses:
            state = ResponsesStreamState(route.slug, tools=(responses_body or {}).get("tools"))
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
                if responses_body is not None:
                    self._store_response_history(responses_body, final_response)
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
        responses_body: dict[str, Any] | None = None,
        started_at: float | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = started_at or time.monotonic()
        response = await _open_stream_sink(request, stream_response)
        if as_responses:
            state = ResponsesStreamState(route.slug, tools=(responses_body or {}).get("tools"))
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
                if responses_body is not None:
                    self._store_response_history(responses_body, final_response)
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
        responses_body: dict[str, Any] | None = None,
        started_at: float | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = started_at or time.monotonic()
        response = await _open_stream_sink(request, stream_response)
        state = ResponsesStreamState(route.slug, tools=(responses_body or {}).get("tools")) if as_responses else None
        try:
            if state is not None:
                await state.start(response)

                async def write_responses_delta(text: str) -> None:
                    await state.write_chat_delta(response, {"choices": [{"delta": {"content": text}}]})

                result = await _await_cursor_inference(run_cursor_acp(route, body, on_text=write_responses_delta))
                if result.usage is not None:
                    state.usage = result.usage
                final_response = await state.finish(response)
                if responses_body is not None:
                    self._store_response_history(responses_body, final_response)
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

                await _await_cursor_inference(run_cursor_acp(route, body, on_text=write_chat_delta))
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
        responses_body: dict[str, Any] | None = None,
        started_at: float | None = None,
        stream_response: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        started_at = started_at or time.monotonic()
        response = await _open_stream_sink(request, stream_response)
        state = ResponsesStreamState(route.slug, tools=(responses_body or {}).get("tools")) if as_responses else None
        try:
            if state is not None:
                await state.start(response)

                async def write_responses_delta(text: str) -> None:
                    await state.write_chat_delta(response, {"choices": [{"delta": {"content": text}}]})

                result = await _await_cursor_inference(run_cursor_cli(route, body, on_text=write_responses_delta))
                if result.usage is not None:
                    state.usage = result.usage
                final_response = await state.finish(response)
                if responses_body is not None:
                    self._store_response_history(responses_body, final_response)
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

                await _await_cursor_inference(run_cursor_cli(route, body, on_text=write_chat_delta))
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
