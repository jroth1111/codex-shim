from __future__ import annotations

import argparse
from copy import deepcopy
import json
import os
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
from .debug_dump import DEBUG_DIR
from .debug_dump import dump_debug_request as _dump_debug_request
from .cursor_acp import CursorAcpError, cursor_acp_chat_payload, cursor_acp_response_payload, run_cursor_acp
from .cursor_cli import CursorCliError, run_cursor_cli
from .hostguard import build_allowed_hosts, host_guard_middleware
from .image_gate import needs_image_generation
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
    PROVIDER_NAME,
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
    SHIM_ENCRYPTED_CONTENT_PREFIX,
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
            return await self._chatgpt_passthrough(
                request,
                route,
                body,
                response_model_override=response_model_override,
                ws_stream=ws_stream,
            )
        try:
            session_id = request.headers.get("session_id", "") or ""
            body = self._body_with_previous_response(body, session_id)
            if session_id:
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
        return combined

    def _store_response_history(
        self,
        request_body: dict[str, Any],
        response_payload: dict[str, Any],
    ) -> None:
        response_id = str(response_payload.get("id") or "")
        if not response_id:
            return
        session_id = str(request_body.get("_shim_session_id") or "")
        items: list[dict[str, Any]] = []
        instructions = request_body.get("instructions")
        if instructions:
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
        if not session_id:
            return body
        store_body = dict(body)
        store_body["_shim_session_id"] = session_id
        return store_body

    async def responses_compact(self, request: web.Request) -> web.StreamResponse:
        body = await request.json()
        _log_incoming_request("/v1/responses/compact", body)
        route = self._route(body)
        if route.is_chatgpt:
            return await self._chatgpt_compact_passthrough(request, route, body)
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

    async def _chatgpt_passthrough(
        self,
        request: web.Request,
        route: ShimModel,
        body: dict[str, Any],
        response_model_override: str | None = None,
        ws_stream: WsStreamResponse | None = None,
    ) -> web.StreamResponse:
        """Forward a Responses request to chatgpt.com using the user's Codex auth.

        Lets the picker expose OpenAI's real GPT-5.5 (ChatGPT subscription) as a
        first-class model alongside configured BYOK entries.
        """
        auth_path = DEFAULT_CODEX_AUTH.expanduser()
        try:
            auth = json.loads(auth_path.read_text())
        except FileNotFoundError:
            raise web.HTTPUnauthorized(text="~/.codex/auth.json not found")
        tokens = auth.get("tokens") or {}
        access_token = tokens.get("access_token")
        account_id = tokens.get("account_id") or ""
        if not access_token:
            raise web.HTTPUnauthorized(text="auth.json has no access_token")
        forwarded = _sanitize_chatgpt_passthrough_body(body)
        forwarded["model"] = CHATGPT_MODEL_SLUG
        headers = {
            "Authorization": f"Bearer {access_token}",
            "Content-Type": "application/json",
            "Accept": "text/event-stream" if forwarded.get("stream") else "application/json",
            "OpenAI-Beta": _chatgpt_openai_beta_header(),
            "originator": "codex_cli_rs",
            "chatgpt-account-id": account_id,
            "session_id": request.headers.get("session_id", ""),
            **_passthrough_forward_headers(request, body),
        }
        url = "https://chatgpt.com/backend-api/codex/responses"
        started_at = time.monotonic()
        provider_started_at = time.monotonic()
        async with ClientSession(timeout=self.timeout) as session:
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
                return await _error_response(upstream)
            if not forwarded.get("stream"):
                payload = await upstream.json(content_type=None)
                provider_ms = _elapsed_ms(provider_started_at)
                _rewrite_response_model(payload, response_model_override)
                store_body = self._store_body_with_session(body, request)
                self._store_response_history(store_body, payload)
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
            response = await _open_stream_sink(request, ws_stream)
            parse_sse = bool(response_model_override or ws_stream is not None)
            try:
                if parse_sse:
                    async for line in _sse_lines(upstream):
                        if line == "[DONE]":
                            break
                        try:
                            payload = json.loads(line)
                        except json.JSONDecodeError:
                            await _safe_write(response, f"data: {line}\n\n".encode())
                            continue
                        if response_model_override:
                            _rewrite_response_model(payload, response_model_override)
                        await _write_sse(response, payload)
                else:
                    async for chunk in upstream.content.iter_chunked(4096):
                        await _safe_write(response, chunk)
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

    async def _chatgpt_compact_passthrough(
        self, request: web.Request, route: ShimModel, body: dict[str, Any]
    ) -> web.StreamResponse:
        auth_path = DEFAULT_CODEX_AUTH.expanduser()
        try:
            auth = json.loads(auth_path.read_text())
        except FileNotFoundError:
            raise web.HTTPUnauthorized(text="~/.codex/auth.json not found")
        tokens = auth.get("tokens") or {}
        access_token = tokens.get("access_token")
        account_id = tokens.get("account_id") or ""
        if not access_token:
            raise web.HTTPUnauthorized(text="auth.json has no access_token")
        forwarded = _sanitize_chatgpt_passthrough_body(body)
        original_model = str(forwarded.get("model") or "")
        forwarded["model"] = CHATGPT_MODEL_SLUG
        forwarded.pop("stream", None)
        headers = {
            "Authorization": f"Bearer {access_token}",
            "Content-Type": "application/json",
            "Accept": "application/json",
            "OpenAI-Beta": _chatgpt_openai_beta_header(),
            "originator": "codex_cli_rs",
            "chatgpt-account-id": account_id,
            "session_id": request.headers.get("session_id", ""),
            **_passthrough_forward_headers(request, body),
        }
        url = "https://chatgpt.com/backend-api/codex/responses/compact"
        started_at = time.monotonic()
        provider_started_at = time.monotonic()
        async with ClientSession(timeout=self.timeout) as session:
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
                return await _error_response(upstream)
            payload = await upstream.json(content_type=None)
            provider_ms = _elapsed_ms(provider_started_at)
        _rewrite_response_model(payload, original_model or None)
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
            result = await run_cursor_acp(route, body)
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
            result = await run_cursor_cli(route, body)
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

                result = await run_cursor_acp(route, body, on_text=write_responses_delta)
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

                await run_cursor_acp(route, body, on_text=write_chat_delta)
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

                result = await run_cursor_cli(route, body, on_text=write_responses_delta)
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

                await run_cursor_cli(route, body, on_text=write_chat_delta)
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


def _responses_items_from_input(value: Any) -> list[dict[str, Any]]:
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


_DROP_ITEM = object()


def _sanitize_chatgpt_passthrough_body(body: dict[str, Any]) -> dict[str, Any]:
    sanitized = _sanitize_chatgpt_passthrough_value(body)
    return sanitized if isinstance(sanitized, dict) else {}


def _sanitize_chatgpt_passthrough_value(value: Any) -> Any:
    if isinstance(value, list):
        output = []
        for item in value:
            sanitized = _sanitize_chatgpt_passthrough_value(item)
            if sanitized is not _DROP_ITEM:
                output.append(sanitized)
        return output
    if isinstance(value, dict):
        if value.get("type") == "reasoning" and _has_shim_encrypted_content(value):
            return _DROP_ITEM
        output = {}
        for key, item in value.items():
            if key == "encrypted_content" and isinstance(item, str) and item.startswith(SHIM_ENCRYPTED_CONTENT_PREFIX):
                continue
            sanitized = _sanitize_chatgpt_passthrough_value(item)
            if sanitized is not _DROP_ITEM:
                output[key] = sanitized
        return output
    return value


def _has_shim_encrypted_content(value: dict[str, Any]) -> bool:
    encrypted_content = value.get("encrypted_content")
    return isinstance(encrypted_content, str) and encrypted_content.startswith(SHIM_ENCRYPTED_CONTENT_PREFIX)


def _rewrite_response_model(payload: Any, model: str | None) -> None:
    if not model:
        return
    if isinstance(payload, dict):
        if payload.get("model") == CHATGPT_MODEL_SLUG:
            payload["model"] = model
        for value in payload.values():
            _rewrite_response_model(value, model)
    elif isinstance(payload, list):
        for item in payload:
            _rewrite_response_model(item, model)



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



def _merge_codex_forward_headers(request: web.Request) -> dict[str, str]:
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


def _metadata_as_forward_headers(body: dict[str, Any]) -> dict[str, str]:
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


def _passthrough_forward_headers(request: web.Request, body: dict[str, Any]) -> dict[str, str]:
    merged = _merge_codex_forward_headers(request)
    existing = {key.lower() for key in merged}
    for key, value in _metadata_as_forward_headers(body).items():
        if key.lower() not in existing:
            merged[key] = value
    return merged



async def _error_response(upstream, *, slug: str | None = None) -> web.Response:
    text = await upstream.text()
    status = upstream.status
    message = text.strip() or f"Upstream request failed with status {status}"
    error_type = "upstream_error"
    if slug:
        print(
            f"[err] upstream {slug} returned {status}: {text[:500]}",
            flush=True,
        )
    try:
        payload = json.loads(text)
    except json.JSONDecodeError:
        payload = None
    if isinstance(payload, dict):
        nested = payload.get("error")
        if isinstance(nested, dict):
            message = str(nested.get("message") or message)
            error_type = str(nested.get("type") or error_type)
        elif payload.get("message"):
            message = str(payload.get("message") or message)
            error_type = str(payload.get("type") or error_type)
    return web.json_response({"error": {"type": error_type, "message": message}}, status=status)


def _chatgpt_openai_beta_header() -> str:
    # Desktop strings expose responses_websockets=2026-02-06 for WS transport;
    # HTTP passthrough uses responses=2026-02-06 (override via env for capture A/B).
    return os.environ.get("CODEX_SHIM_OPENAI_BETA", "responses=2026-02-06").strip() or "responses=2026-02-06"


def _cursor_acp_error_response(exc: CursorAcpError) -> web.Response:
    return _cursor_agent_error_response(exc, "cursor_acp_error")


def _cursor_agent_error_response(exc: Exception, error_type: str) -> web.Response:
    return web.json_response({"error": {"type": error_type, "message": str(exc)}}, status=502)


def _invalid_request_error_response(exc: ResponsesInputError) -> web.Response:
    return web.json_response({"error": {"type": "invalid_request_error", "message": str(exc)}}, status=400)


def _unsupported_capability_response(message: str) -> web.Response:
    return web.json_response({"error": {"type": "unsupported_capability", "message": message}}, status=400)


def _unsupported_compact_response(route: ShimModel) -> web.Response:
    return web.json_response(
        {
            "error": {
                "type": "unsupported_route",
                "message": f"{route.slug} ({route.provider}) does not support /v1/responses/compact.",
            }
        },
        status=501,
    )


def _cursor_acp_stream_error(model: str, exc: CursorAcpError) -> dict[str, Any]:
    return _cursor_agent_stream_error(model, exc, "cursor_acp_error")


def _cursor_agent_stream_error(model: str, exc: Exception, error_type: str) -> dict[str, Any]:
    return {
        "type": "response.failed",
        "response": {
            "id": f"resp_cursor_acp_failed_{int(time.time())}",
            "object": "response",
            "created_at": int(time.time()),
            "status": "failed",
            "model": model,
            "output": [],
            "error": {"type": error_type, "message": str(exc)},
        },
    }


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
