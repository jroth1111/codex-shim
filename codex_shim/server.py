from __future__ import annotations

import argparse
from copy import deepcopy
import json
import re
import sys
import time
from pathlib import Path
from typing import Any
from urllib.parse import urljoin

from aiohttp import ClientSession, ClientTimeout, web

from .cursor_acp import CursorAcpError, cursor_acp_chat_payload, cursor_acp_response_payload, run_cursor_acp
from .cursor_cli import CursorCliError, run_cursor_cli
from .hostguard import build_allowed_hosts, host_guard_middleware
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
from .translate import (
    SHIM_ENCRYPTED_CONTENT_PREFIX,
    NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME,
    ResponsesInputError,
    anthropic_to_chat_response,
    anthropic_to_response,
    chat_completion_to_response,
    chat_to_responses_request,
    chat_to_anthropic,
    function_call_to_native_item,
    normalize_responses_usage,
    responses_to_anthropic,
    responses_to_chat,
    validate_responses_input,
)

DEBUG_DIR = Path(__file__).resolve().parents[1] / ".codex-shim"
CODEX_CONFIG_PATH = Path.home() / ".codex" / "config.toml"


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
        if self._needs_image_gen(body) or self._needs_image_followup(body):
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
        session_id: str = "",
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

    def _needs_image_gen(self, body: dict[str, Any]) -> bool:
        tools = body.get("tools") or []
        image_tool_names: set[str] = set()
        non_image_tool_count = 0
        for tool in tools:
            if not isinstance(tool, dict):
                non_image_tool_count += 1
                continue
            tool_type = str(tool.get("type") or "")
            fn = tool.get("function") or tool.get("name") or {}
            name = fn.get("name") if isinstance(fn, dict) else fn
            normalized = f"{tool_type} {name or ''}".lower()
            is_image_tool = tool_type in {"image_generation", "image_gen"} or ("image" in normalized and "gen" in normalized)
            if is_image_tool:
                image_tool_names.add(str(name or tool_type))
            else:
                non_image_tool_count += 1
        if not image_tool_names:
            return False

        tool_choice = body.get("tool_choice")
        if isinstance(tool_choice, str):
            if any(name.lower() in tool_choice.lower() for name in image_tool_names):
                return True
        elif isinstance(tool_choice, dict):
            fn = tool_choice.get("function") or {}
            choice_name = str(tool_choice.get("name") or (fn.get("name") if isinstance(fn, dict) else "") or tool_choice.get("type") or "").lower()
            if any(name.lower() in choice_name for name in image_tool_names):
                return True

        if non_image_tool_count == 0:
            return True

        latest = self._latest_user_text(body).lower()
        if not latest:
            return False
        image_intent_markers = (
            "@image",
            "imagegen",
            "image gen",
            "image_gen",
            "generate image",
            "generate an image",
            "generate a picture",
            "generate a photo",
            "generate an illustration",
            "create image",
            "create an image",
            "create a picture",
            "create a photo",
            "draw image",
            "draw an image",
            "make image",
            "make an image",
            "render image",
        )
        if any(marker in latest for marker in image_intent_markers):
            return True
        code_words = {"code", "component", "react", "tsx", "jsx", "html", "css", "svg", "file"}
        latest_words = {"".join(ch for ch in word if ch.isalnum()) for word in latest.split()}
        if latest_words & code_words:
            return False
        creative_objects = ("icon", "logo", "wallpaper", "poster", "banner", "avatar")
        creative_verbs = ("generate", "create", "draw", "design", "make", "render")
        return any(verb in latest for verb in creative_verbs) and any(obj in latest for obj in creative_objects)

    def _needs_image_followup(self, body: dict[str, Any]) -> bool:
        if not self._has_image_generation_history(body):
            return False
        latest = self._latest_user_text(body).lower()
        if not latest:
            return False
        direct_image_refs = ("image", "picture", "photo", "icon", "logo", "illustration")
        followup_actions = (
            "inspect",
            "look at",
            "view",
            "describe",
            "what do you see",
            "analyze",
            "modify",
            "edit",
            "change",
            "improve",
            "enhance",
            "upscale",
            "variation",
            "use",
            "based on",
            "same",
        )
        if any(ref in latest for ref in direct_image_refs) and any(action in latest for action in followup_actions):
            return True
        pronoun_followups = (
            "inspect it",
            "look at it",
            "view it",
            "describe it",
            "analyze it",
            "modify it",
            "edit it",
            "change it",
            "improve it",
            "enhance it",
            "upscale it",
            "make it brighter",
            "make it darker",
            "make it more",
            "use it",
            "based on it",
        )
        return any(marker in latest for marker in pronoun_followups)

    def _has_image_generation_history(self, body: dict[str, Any]) -> bool:
        inputs = body.get("input") or []
        if not isinstance(inputs, list):
            return False
        return any(isinstance(item, dict) and item.get("type") == "image_generation_call" for item in inputs)

    def _latest_user_text(self, body: dict[str, Any]) -> str:
        inputs = body.get("input") or []
        if isinstance(inputs, str):
            return inputs
        if not isinstance(inputs, list):
            return ""
        for item in reversed(inputs):
            if isinstance(item, str):
                return item
            if not isinstance(item, dict):
                continue
            if item.get("role") == "user":
                text = self._content_to_debug_text(item.get("content"))
                if text:
                    return text
            elif item.get("type") in {"input_text", "text"}:
                text = self._content_to_debug_text(item)
                if text:
                    return text
        return ""

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
            "OpenAI-Beta": "responses=2026-02-06",
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
                            await _safe_write(response, b"data: [DONE]\n\n")
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
            "OpenAI-Beta": "responses=2026-02-06",
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
            state = ResponsesStreamState(route.slug)
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
            state = ResponsesStreamState(route.slug)
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
        state = ResponsesStreamState(route.slug) if as_responses else None
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
        state = ResponsesStreamState(route.slug) if as_responses else None
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


class ResponsesStreamState:
    """Translates upstream chat-completions / anthropic stream events into the
    Codex Desktop Responses-API event sequence. Keeps the message item and
    each tool call as separate output items with stable indices, and emits
    proper .added / .delta / .done / .completed events plus a final
    `response.completed` with the full reconciled `output` array."""

    def __init__(self, model: str):
        self.response_id = f"resp_{int(time.time() * 1000)}"
        self.message_item_id = f"msg_{int(time.time() * 1000)}"
        self.model = model
        self.message_index: int | None = None  # output_index for the assistant message
        self.message_text = ""
        self.message_opened = False
        self.message_closed = False
        self.usage: dict[str, Any] | None = None
        # Tool call state, keyed by upstream "index" (chat-completions) or
        # anthropic content_block_index. Each entry tracks its assigned
        # output_index, accumulated arguments, name, etc.
        self.tool_calls: dict[int, dict[str, Any]] = {}
        # Reasoning (extended thinking) blocks, keyed by upstream index.
        self.reasoning_blocks: dict[Any, dict[str, Any]] = {}
        self.next_output_index = 0

    # ------------------------------------------------------------------
    # Lifecycle
    # ------------------------------------------------------------------
    async def start(self, response: web.StreamResponse) -> None:
        await _write_sse(response, {"type": "response.created", "response": self._response("in_progress")})

    async def finish(self, response: web.StreamResponse) -> dict[str, Any]:
        for state in sorted(self.reasoning_blocks.values(), key=lambda s: s["output_index"]):
            if not state.get("closed"):
                await self._close_reasoning(response, state)
        if self.message_opened and not self.message_closed:
            await self._close_message(response)
        for state in sorted(self.tool_calls.values(), key=lambda s: s["output_index"]):
            if not state.get("closed"):
                await self._close_tool(response, state)
        final_response = self._response("completed", final=True)
        await _write_sse(response, {"type": "response.completed", "response": final_response})
        await response.write(b"data: [DONE]\n\n")
        return final_response

    # ------------------------------------------------------------------
    # Chat-completions (OpenAI-style) deltas
    # ------------------------------------------------------------------
    async def write_chat_delta(self, response: web.StreamResponse, chunk: dict[str, Any]) -> None:
        usage = chunk.get("usage")
        if isinstance(usage, dict):
            self.usage = normalize_responses_usage(usage)
        choice = (chunk.get("choices") or [{}])[0]
        delta = choice.get("delta") or {}
        reasoning = delta.get("reasoning_content") or delta.get("reasoning")
        if reasoning:
            await self._chat_reasoning_delta(response, reasoning)
        content = delta.get("content")
        if content:
            for state in list(self.reasoning_blocks.values()):
                if not state.get("closed"):
                    await self._close_reasoning(response, state)
            await self._text_delta(response, content)
        for call in delta.get("tool_calls") or []:
            await self._chat_tool_delta(response, call)

    async def _chat_reasoning_delta(self, response: web.StreamResponse, text: str) -> None:
        state = self.reasoning_blocks.get(("chat",))
        if state is None:
            state = await self._open_reasoning(response, key=("chat",))
        state["text"] += text
        await _write_sse(
            response,
            {
                "type": "response.reasoning_summary_text.delta",
                "item_id": state["id"],
                "output_index": state["output_index"],
                "summary_index": 0,
                "delta": text,
            },
        )

    async def _chat_tool_delta(self, response: web.StreamResponse, call: dict[str, Any]) -> None:
        index = int(call.get("index", 0))
        fn = call.get("function") or {}
        state = self.tool_calls.get(index)
        if state is None:
            call_id = call.get("id") or f"call_{index}"
            state = await self._open_tool(response, key=index, call_id=call_id, name=fn.get("name") or "")
        else:
            if fn.get("name"):
                state["name"] += fn["name"]
        arg_delta = fn.get("arguments") or ""
        if arg_delta:
            state["arguments"] += arg_delta
            await _write_sse(
                response,
                {
                    "type": "response.function_call_arguments.delta",
                    "item_id": state["id"],
                    "output_index": state["output_index"],
                    "delta": arg_delta,
                },
            )

    # ------------------------------------------------------------------
    # Anthropic deltas
    # ------------------------------------------------------------------
    async def write_anthropic_delta(self, response: web.StreamResponse, event: dict[str, Any]) -> None:
        event_type = event.get("type")
        if event_type == "message_start":
            message = event.get("message") or {}
            usage = message.get("usage")
            if isinstance(usage, dict):
                self.usage = normalize_responses_usage(usage)
        if event_type == "content_block_start":
            block = event.get("content_block") or {}
            idx = int(event.get("index", 0))
            btype = block.get("type")
            if btype == "text":
                seed = block.get("text") or ""
                if seed:
                    await self._text_delta(response, seed)
            elif btype == "tool_use":
                await self._open_tool(
                    response,
                    key=("anthropic", idx),
                    call_id=block.get("id") or f"call_{idx}",
                    name=block.get("name") or "",
                )
            elif btype in {"thinking", "redacted_thinking"}:
                await self._open_reasoning(
                    response,
                    key=("anthropic_thinking", idx),
                    initial_text=block.get("thinking") or "",
                    initial_signature=block.get("signature") or "",
                    redacted=(btype == "redacted_thinking"),
                    redacted_data=block.get("data") or "",
                )
        elif event_type == "content_block_delta":
            idx = int(event.get("index", 0))
            delta = event.get("delta") or {}
            dtype = delta.get("type")
            if dtype == "text_delta":
                await self._text_delta(response, delta.get("text", ""))
            elif dtype == "input_json_delta":
                state = self.tool_calls.get(("anthropic", idx))
                if state is not None:
                    arg_delta = delta.get("partial_json") or ""
                    if arg_delta:
                        state["arguments"] += arg_delta
                        await _write_sse(
                            response,
                            {
                                "type": "response.function_call_arguments.delta",
                                "item_id": state["id"],
                                "output_index": state["output_index"],
                                "delta": arg_delta,
                            },
                        )
            elif dtype == "thinking_delta":
                state = self.reasoning_blocks.get(("anthropic_thinking", idx))
                if state is None:
                    state = await self._open_reasoning(response, key=("anthropic_thinking", idx))
                txt = delta.get("thinking") or ""
                if txt:
                    state["text"] += txt
                    await _write_sse(
                        response,
                        {
                            "type": "response.reasoning_summary_text.delta",
                            "item_id": state["id"],
                            "output_index": state["output_index"],
                            "summary_index": 0,
                            "delta": txt,
                        },
                    )
            elif dtype == "signature_delta":
                state = self.reasoning_blocks.get(("anthropic_thinking", idx))
                if state is None:
                    state = await self._open_reasoning(response, key=("anthropic_thinking", idx))
                state["signature"] += delta.get("signature") or ""
        elif event_type == "message_delta":
            usage = event.get("usage")
            if isinstance(usage, dict):
                if self.usage is None or any(
                    key in usage for key in ("input_tokens", "prompt_tokens", "cache_read_input_tokens", "cache_creation_input_tokens")
                ):
                    normalized = normalize_responses_usage(usage)
                    if normalized is not None:
                        self.usage = normalized if self.usage is None else {**self.usage, **normalized}
                output_tokens = usage.get("output_tokens")
                if isinstance(output_tokens, int) and not isinstance(output_tokens, bool):
                    if self.usage is None:
                        self.usage = normalize_responses_usage(usage)
                    else:
                        self.usage["output_tokens"] = output_tokens
                        self.usage["total_tokens"] = int(self.usage.get("input_tokens") or 0) + output_tokens
        elif event_type == "content_block_stop":
            idx = int(event.get("index", 0))
            tool_state = self.tool_calls.get(("anthropic", idx))
            if tool_state is not None and not tool_state.get("closed"):
                await self._close_tool(response, tool_state)
            r_state = self.reasoning_blocks.get(("anthropic_thinking", idx))
            if r_state is not None and not r_state.get("closed"):
                await self._close_reasoning(response, r_state)

    # ------------------------------------------------------------------
    # Internals
    # ------------------------------------------------------------------
    async def _open_message(self, response: web.StreamResponse) -> None:
        self.message_index = self.next_output_index
        self.next_output_index += 1
        self.message_opened = True
        await _write_sse(
            response,
            {
                "type": "response.output_item.added",
                "output_index": self.message_index,
                "item": {
                    "id": self.message_item_id,
                    "type": "message",
                    "status": "in_progress",
                    "role": "assistant",
                    "content": [],
                },
            },
        )
        await _write_sse(
            response,
            {
                "type": "response.content_part.added",
                "item_id": self.message_item_id,
                "output_index": self.message_index,
                "content_index": 0,
                "part": {"type": "output_text", "text": "", "annotations": []},
            },
        )

    async def _close_message(self, response: web.StreamResponse) -> None:
        if not self.message_opened or self.message_closed:
            return
        self.message_closed = True
        await _write_sse(
            response,
            {
                "type": "response.output_text.done",
                "item_id": self.message_item_id,
                "output_index": self.message_index,
                "content_index": 0,
                "text": self.message_text,
            },
        )
        await _write_sse(
            response,
            {
                "type": "response.content_part.done",
                "item_id": self.message_item_id,
                "output_index": self.message_index,
                "content_index": 0,
                "part": {"type": "output_text", "text": self.message_text, "annotations": []},
            },
        )
        await _write_sse(
            response,
            {
                "type": "response.output_item.done",
                "output_index": self.message_index,
                "item": self._message_item("completed"),
            },
        )

    async def _text_delta(self, response: web.StreamResponse, text: str) -> None:
        if not text:
            return
        if not self.message_opened:
            await self._open_message(response)
        self.message_text += text
        await _write_sse(
            response,
            {
                "type": "response.output_text.delta",
                "item_id": self.message_item_id,
                "output_index": self.message_index,
                "content_index": 0,
                "delta": text,
            },
        )

    async def _open_tool(self, response: web.StreamResponse, *, key: Any, call_id: str, name: str) -> dict[str, Any]:
        # Close the assistant message before opening tool items, matching the
        # OpenAI Responses-API ordering Codex expects.
        if self.message_opened and not self.message_closed:
            await self._close_message(response)
        output_index = self.next_output_index
        self.next_output_index += 1
        native_type = NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME.get(name)
        item_type = native_type or "function_call"
        state: dict[str, Any] = {
            "id": call_id,
            "call_id": call_id,
            "name": name,
            "arguments": "",
            "output_index": output_index,
            "closed": False,
            "native_type": item_type,
        }
        self.tool_calls[key] = state
        item: dict[str, Any] = {
            "id": call_id,
            "type": item_type,
            "status": "in_progress",
            "call_id": call_id,
        }
        if item_type == "function_call":
            item["name"] = name
            item["arguments"] = ""
        elif item_type == "tool_search_call":
            item["arguments"] = ""
        else:
            item["action"] = {}
        await _write_sse(
            response,
            {
                "type": "response.output_item.added",
                "output_index": output_index,
                "item": item,
            },
        )
        return state

    async def _close_tool(self, response: web.StreamResponse, state: dict[str, Any]) -> None:
        state["closed"] = True
        await _write_sse(
            response,
            {
                "type": "response.function_call_arguments.done",
                "item_id": state["id"],
                "output_index": state["output_index"],
                "arguments": state["arguments"],
            },
        )
        await _write_sse(
            response,
            {
                "type": "response.output_item.done",
                "output_index": state["output_index"],
                "item": self._tool_item(state, "completed"),
            },
        )

    async def _open_reasoning(
        self,
        response: web.StreamResponse,
        *,
        key: Any,
        initial_text: str = "",
        initial_signature: str = "",
        redacted: bool = False,
        redacted_data: str = "",
    ) -> dict[str, Any]:
        # Reasoning items are emitted before the assistant message/tool calls
        # so we open them eagerly. If a message/tool was already opened we
        # still slot them in at the next available output_index; Codex orders
        # by output_index when reconciling.
        output_index = self.next_output_index
        self.next_output_index += 1
        item_id = f"rs_{int(time.time() * 1000)}_{output_index}"
        state: dict[str, Any] = {
            "id": item_id,
            "output_index": output_index,
            "text": initial_text,
            "signature": initial_signature,
            "redacted": redacted,
            "redacted_data": redacted_data,
            "closed": False,
        }
        self.reasoning_blocks[key] = state
        await _write_sse(
            response,
            {
                "type": "response.output_item.added",
                "output_index": output_index,
                "item": {
                    "id": item_id,
                    "type": "reasoning",
                    "status": "in_progress",
                    "summary": [],
                    "encrypted_content": None,
                },
            },
        )
        if initial_text:
            await _write_sse(
                response,
                {
                    "type": "response.reasoning_summary_text.delta",
                    "item_id": item_id,
                    "output_index": output_index,
                    "summary_index": 0,
                    "delta": initial_text,
                },
            )
        return state

    async def _close_reasoning(self, response: web.StreamResponse, state: dict[str, Any]) -> None:
        state["closed"] = True
        # Emit summary_text.done so renderers can finalize the reasoning bubble.
        await _write_sse(
            response,
            {
                "type": "response.reasoning_summary_text.done",
                "item_id": state["id"],
                "output_index": state["output_index"],
                "summary_index": 0,
                "text": state["text"],
            },
        )
        await _write_sse(
            response,
            {
                "type": "response.output_item.done",
                "output_index": state["output_index"],
                "item": self._reasoning_item(state, "completed"),
            },
        )

    def _reasoning_item(self, state: dict[str, Any], status: str) -> dict[str, Any]:
        # Encode the original Anthropic thinking block in encrypted_content so
        # we can roundtrip it back on the next turn. Codex preserves this
        # field verbatim across turns.
        if state.get("redacted"):
            payload = {"type": "redacted_thinking", "data": state.get("redacted_data", "")}
        else:
            payload = {
                "type": "thinking",
                "thinking": state.get("text", ""),
                "signature": state.get("signature", ""),
            }
        encrypted = _encode_thinking_payload(payload)
        return {
            "id": state["id"],
            "type": "reasoning",
            "status": status,
            "summary": (
                [{"type": "summary_text", "text": state.get("text", "")}]
                if state.get("text") and not state.get("redacted")
                else []
            ),
            "encrypted_content": encrypted,
        }

    def _message_item(self, status: str) -> dict[str, Any]:
        return {
            "id": self.message_item_id,
            "type": "message",
            "status": status,
            "role": "assistant",
            "content": [
                {"type": "output_text", "text": self.message_text, "annotations": []}
            ] if self.message_text else [],
        }

    def _tool_item(self, state: dict[str, Any], status: str) -> dict[str, Any]:
        native = function_call_to_native_item(
            state.get("name") or "",
            state["call_id"],
            state.get("arguments") or "",
            status=status,
        )
        if native is not None:
            return native
        return {
            "id": state["id"],
            "type": "function_call",
            "status": status,
            "call_id": state["call_id"],
            "name": state["name"],
            "arguments": state["arguments"],
        }

    def _response(self, status: str, *, final: bool = False) -> dict[str, Any]:
        output: list[dict[str, Any]] = []
        if final:
            collected: list[tuple[int, dict[str, Any]]] = []
            for state in self.reasoning_blocks.values():
                collected.append((state["output_index"], self._reasoning_item(state, "completed")))
            if self.message_opened and self.message_text and self.message_index is not None:
                collected.append((self.message_index, self._message_item("completed")))
            for state in self.tool_calls.values():
                collected.append((state["output_index"], self._tool_item(state, "completed")))
            collected.sort(key=lambda pair: pair[0])
            output = [item for _, item in collected]
        payload = {
            "id": self.response_id,
            "object": "response",
            "created_at": int(time.time()),
            "status": status,
            "model": self.model,
            "output": output,
        }
        if self.usage is not None:
            payload["usage"] = self.usage
        elif final:
            payload["usage"] = {"input_tokens": 0, "output_tokens": 0, "total_tokens": 0}
        return payload


_THINKING_MAGIC = "anthropic-thinking-v1:"


def _encode_thinking_payload(payload: dict[str, Any]) -> str:
    import base64

    raw = json.dumps(payload, separators=(",", ":")).encode("utf-8")
    return _THINKING_MAGIC + base64.urlsafe_b64encode(raw).decode("ascii")


def _decode_thinking_payload(encoded: str) -> dict[str, Any] | None:
    import base64

    if not isinstance(encoded, str) or not encoded.startswith(_THINKING_MAGIC):
        return None
    blob = encoded[len(_THINKING_MAGIC) :]
    try:
        raw = base64.urlsafe_b64decode(blob.encode("ascii"))
        data = json.loads(raw.decode("utf-8"))
    except Exception:
        return None
    return data if isinstance(data, dict) else None


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


async def _open_stream_sink(
    request: web.Request,
    stream_response: WsStreamResponse | None,
) -> web.StreamResponse | WsStreamResponse:
    if stream_response is not None:
        await stream_response.prepare(request)
        return stream_response
    response = _sse_response()
    await response.prepare(request)
    return response


def _sse_response() -> web.StreamResponse:
    response = web.StreamResponse(
        status=200,
        headers={
            "Content-Type": "text/event-stream",
            "Cache-Control": "no-cache",
            "Connection": "keep-alive",
        },
    )
    return response


async def _safe_write(response: web.StreamResponse, data: bytes) -> None:
    try:
        await response.write(data)
    except (ConnectionResetError, ConnectionError):
        raise ClientDisconnected()
    except Exception as exc:
        if exc.__class__.__name__ in {
            "ClientConnectionResetError",
            "ClientConnectionError",
            "ClientPayloadError",
        }:
            raise ClientDisconnected() from exc
        raise


async def _write_sse(response: web.StreamResponse, payload: dict[str, Any]) -> None:
    try:
        await response.write(f"data: {json.dumps(payload, separators=(',', ':'))}\n\n".encode())
    except (ConnectionResetError, ConnectionError) as exc:
        raise ClientDisconnected() from exc
    except Exception as exc:
        # aiohttp raises ClientConnectionResetError (an OSError subclass on
        # some versions, a ClientConnectionError on others). Trap both.
        if exc.__class__.__name__ in {
            "ClientConnectionResetError",
            "ClientConnectionError",
            "ClientPayloadError",
        }:
            raise ClientDisconnected() from exc
        raise


class ClientDisconnected(Exception):
    """Raised when the downstream Codex client closes the SSE connection."""


def _log_incoming_request(endpoint: str, body: dict[str, Any]) -> None:
    try:
        tools = body.get("tools") or []
        names = []
        for t in tools[:80]:
            if isinstance(t, dict):
                name = t.get("name") or (t.get("function") or {}).get("name") or t.get("type")
                if name:
                    names.append(str(name))
        input_items = body.get("input") or []
        input_summary = []
        if isinstance(input_items, list):
            for item in input_items[-6:]:
                if isinstance(item, dict):
                    t = item.get("type") or item.get("role") or "?"
                    extra = ""
                    if t == "function_call":
                        extra = f"({item.get('name', '?')})"
                    elif t == "function_call_output":
                        extra = f"(call_id={str(item.get('call_id', ''))[:24]})"
                    input_summary.append(f"{t}{extra}")
        print(
            f"[req] {endpoint} model={body.get('model')!r} stream={body.get('stream')!r} "
            f"tools={len(tools)} ({names[:8]}) "
            f"input={len(input_items)} ({input_summary})",
            flush=True,
        )
    except Exception as exc:
        print(f"[req] failed to log: {exc}", flush=True)


def _log_access(
    request: web.Request,
    route: ShimModel,
    status: int,
    started_at: float,
    *,
    payload: dict[str, Any] | None = None,
    stream: bool,
    error: str | None = None,
    request_body: dict[str, Any] | None = None,
    provider_ms: int | None = None,
    model_route: str | None = None,
) -> None:
    try:
        usage = _usage_summary(payload.get("usage") if isinstance(payload, dict) else None)
        total_ms = int((time.monotonic() - started_at) * 1000)
        record: dict[str, Any] = {
            "trace_id": _trace_id(request, request_body, payload),
            "path": request.path,
            "status": status,
            "model": route.slug,
            "provider": route.provider,
            "provider_model": route.model,
            "model_route": model_route or _model_route_label(route, request_body),
            "stream": stream,
            "latency_ms": total_ms,
            "total_ms": total_ms,
            "provider_ms": provider_ms if provider_ms is not None else total_ms,
            "token_stats": usage,
        }
        if error:
            record["error"] = error
        print("[access] " + json.dumps(record, sort_keys=True, separators=(",", ":")), flush=True)
    except Exception as exc:
        print(f"[access] failed to log: {exc}", flush=True)


def _trace_id(
    request: web.Request,
    request_body: dict[str, Any] | None,
    payload: dict[str, Any] | None,
) -> str:
    if isinstance(request_body, dict):
        metadata = request_body.get("metadata")
        if isinstance(metadata, dict):
            for key in ("trace_id", "request_id"):
                value = metadata.get(key)
                if value:
                    return str(value)
        for key in ("trace_id", "request_id"):
            value = request_body.get(key)
            if value:
                return str(value)
    for header in ("x-request-id", "x-trace-id", "request-id"):
        value = request.headers.get(header)
        if value:
            return value
    if isinstance(payload, dict):
        value = payload.get("id")
        if value:
            return str(value)
    return f"trace_{int(time.time() * 1000)}"


def _model_route_label(route: ShimModel, request_body: dict[str, Any] | None) -> str:
    if route.is_chatgpt:
        return "chatgpt_passthrough"
    if route.is_cursor_acp:
        return "cursor_acp"
    if route.is_cursor_cli:
        return "cursor_cli"
    requested = str((request_body or {}).get("model") or "")
    if requested == route.slug:
        return "direct_slug"
    if requested == route.model:
        return "model_alias"
    if not requested:
        return "fallback"
    return "fallback"


def _elapsed_ms(started_at: float) -> int:
    return int((time.monotonic() - started_at) * 1000)


def _usage_summary(usage: Any) -> dict[str, Any]:
    if not isinstance(usage, dict):
        return {}
    input_tokens = _first_usage_value(usage, "input_tokens", "prompt_tokens", "inputTokens", "inputTokenCount")
    output_tokens = _first_usage_value(usage, "output_tokens", "completion_tokens", "outputTokens", "outputTokenCount")
    total_tokens = _first_usage_value(usage, "total_tokens", "totalTokens", "totalTokenCount")
    if total_tokens is None and isinstance(input_tokens, int) and isinstance(output_tokens, int):
        total_tokens = input_tokens + output_tokens
    cached_tokens = _cached_usage_tokens(usage)
    reasoning_tokens = _reasoning_usage_tokens(usage)
    return {
        key: value
        for key, value in {
            "input_tokens": input_tokens,
            "output_tokens": output_tokens,
            "total_tokens": total_tokens,
            "cached_tokens": cached_tokens,
            "reasoning_tokens": reasoning_tokens,
        }.items()
        if value is not None
    }


def _first_usage_value(usage: dict[str, Any], *keys: str) -> int | None:
    for key in keys:
        value = usage.get(key)
        if isinstance(value, int):
            return value
    return None


def _cached_usage_tokens(usage: dict[str, Any]) -> int | None:
    direct = _first_usage_value(usage, "cached_tokens", "cachedTokens")
    if direct is not None:
        return direct
    for key in ("prompt_tokens_details", "input_tokens_details", "inputTokenDetails", "input_token_details"):
        value = usage.get(key)
        if isinstance(value, dict):
            nested = _first_usage_value(value, "cached_tokens", "cachedTokens", "cache_read", "cacheReadInputTokens")
            if nested is not None:
                return nested
    return None


def _reasoning_usage_tokens(usage: dict[str, Any]) -> int | None:
    direct = _first_usage_value(usage, "reasoning_tokens", "reasoningTokens")
    if direct is not None:
        return direct
    for key in ("completion_tokens_details", "output_tokens_details", "outputTokenDetails", "output_token_details"):
        value = usage.get(key)
        if isinstance(value, dict):
            nested = _first_usage_value(value, "reasoning_tokens", "reasoningTokens")
            if nested is not None:
                return nested
    return None


async def _sse_lines(upstream) -> Any:
    buffer = b""
    async for chunk in upstream.content.iter_chunked(4096):
        buffer += chunk
        while b"\n" in buffer:
            raw, buffer = buffer.split(b"\n", 1)
            line = raw.decode("utf-8", errors="replace").strip()
            if line.startswith("data:"):
                yield line[5:].strip()
    tail = buffer.decode("utf-8", errors="replace").strip()
    if tail.startswith("data:"):
        yield tail[5:].strip()


def _anthropic_stream_to_chat_chunk(event: dict[str, Any], model: str) -> dict[str, Any]:
    content = ""
    if event.get("type") == "content_block_delta":
        delta = event.get("delta") or {}
        if delta.get("type") == "text_delta":
            content = delta.get("text", "")
    return {"object": "chat.completion.chunk", "model": model, "choices": [{"index": 0, "delta": {"content": content}, "finish_reason": None}]}


def _compact_request_body(body: dict[str, Any], upstream_model: str) -> dict[str, Any]:
    instructions = body.get("instructions") or _default_compact_instructions()
    return {
        "model": upstream_model,
        "instructions": instructions,
        "input": body.get("input") or [],
        "max_output_tokens": body.get("max_output_tokens") or body.get("max_tokens") or 4096,
        "stream": False,
    }


def _default_compact_instructions() -> str:
    return (
        "Compact the conversation into a concise state handoff for the next Codex turn. "
        "Preserve the active task, user requirements, important file paths, commands already run, "
        "tool results, decisions, blockers, and the latest state. Omit filler and repeated text."
    )


async def _as_compact_response(response: web.StreamResponse, model: str, request_body: dict[str, Any] | None = None) -> web.Response:
    if not isinstance(response, web.Response) or response.status >= 400:
        return response
    try:
        payload = json.loads(response.text or "{}")
    except json.JSONDecodeError:
        return response
    output = payload.get("output") if isinstance(payload, dict) else None
    summary = _compact_summary_from_output(output)
    include_trigger = _input_has_compaction_trigger((request_body or {}).get("input"))
    compacted = _compact_response_payload(
        model,
        summary,
        payload.get("usage") if isinstance(payload, dict) else None,
        include_trigger=include_trigger,
    )
    return web.json_response(compacted)


def _input_has_compaction_trigger(value: Any) -> bool:
    if not isinstance(value, list):
        return False
    return any(isinstance(item, dict) and item.get("type") == "compaction_trigger" for item in value)


def _compact_summary_from_output(output: Any) -> str:
    parts: list[str] = []
    if isinstance(output, list):
        for item in output:
            if not isinstance(item, dict):
                continue
            item_type = item.get("type")
            if item_type in {"context_compaction", "compaction"}:
                summary = item.get("summary") or []
                if isinstance(summary, list):
                    for part in summary:
                        if isinstance(part, dict) and part.get("text"):
                            parts.append(str(part["text"]))
                continue
            if item.get("type") == "message":
                content = item.get("content") or []
                if isinstance(content, list):
                    for part in content:
                        if isinstance(part, dict) and part.get("text"):
                            parts.append(str(part["text"]))
            elif item.get("type") == "output_text" and item.get("text"):
                parts.append(str(item["text"]))
    return "\n".join(part for part in parts if part).strip()


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


def _compact_response_payload(model: str, summary: str, usage: Any = None, *, include_trigger: bool = False) -> dict[str, Any]:
    now = int(time.time())
    response_id = f"resp_compact_{now}"
    text = summary or "No prior conversation state was available to compact."
    output: list[dict[str, Any]] = []
    if include_trigger:
        output.append({"id": f"trg_{now}", "type": "compaction_trigger"})
    output.append(
        {
            "id": f"cmp_{now}",
            "type": "context_compaction",
            "status": "completed",
            "summary": [{"type": "summary_text", "text": text}],
            "encrypted_content": None,
        }
    )
    payload = {
        "id": response_id,
        "object": "response",
        "created_at": now,
        "status": "completed",
        "model": model,
        "output": output,
    }
    if usage is not None:
        payload["usage"] = usage
    return payload


async def _error_response(upstream, *, slug: str | None = None) -> web.Response:
    text = await upstream.text()
    if slug:
        print(
            f"[err] upstream {slug} returned {upstream.status}: {text[:500]}",
            flush=True,
        )
    return web.Response(status=upstream.status, text=text, content_type=upstream.content_type or "text/plain")


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


def _dump_debug_request(slug: str, url: str, body: dict[str, Any]) -> None:
    """Best-effort dump of the last forwarded request body for debugging.

    Writes ``.codex-shim/last_request.json`` next to the rest of the runtime
    state (catalog, pid, log). Failures are silently swallowed — this is a
    debug aid, not a code path the request should depend on.
    """
    try:
        dump_path = DEBUG_DIR / "last_request.json"
        dump_path.parent.mkdir(parents=True, exist_ok=True)
        payload = {"slug": slug, "url": url, "body": body}
        full = json.dumps(payload, indent=2, default=str)
        if len(full) > 2_000_000:
            messages = body.get("messages") or []
            summary = {
                "slug": slug,
                "url": url,
                "_truncated": True,
                "_full_size": len(full),
                "message_count": len(messages),
                "tool_count": len(body.get("tools") or []),
                "last_3_messages": messages[-3:],
            }
            dump_path.write_text(json.dumps(summary, indent=2, default=str))
        else:
            dump_path.write_text(full)
    except OSError as exc:
        print(f"[debug] dump failed: {exc}", flush=True)


def _current_managed_model() -> str | None:
    """Return the first ``model = "..."`` value from ~/.codex/config.toml."""
    if not CODEX_CONFIG_PATH.exists():
        return None
    try:
        text = CODEX_CONFIG_PATH.read_text()
    except OSError:
        return None
    for line in text.splitlines():
        stripped = line.strip()
        if stripped.startswith("model = "):
            return stripped.split("=", 1)[1].strip().strip('"')
    return None


_MODEL_LINE_RE = re.compile(r'(?m)^(\s*model\s*=\s*")[^"]*(")')
_PROVIDER_NAME_RE = re.compile(
    r'(\[model_providers\.' + re.escape(PROVIDER_NAME) + r'\][^\[]*?\n\s*name\s*=\s*")[^"]*(")',
    re.DOTALL,
)


def _set_active_model(slug: str, display_name: str | None = None) -> None:
    """Rewrite the active model + provider label in ~/.codex/config.toml."""
    if not CODEX_CONFIG_PATH.exists():
        return
    try:
        text = CODEX_CONFIG_PATH.read_text()
    except OSError:
        return
    text = _MODEL_LINE_RE.sub(rf'\g<1>{slug}\g<2>', text, count=1)
    if display_name:
        text = _PROVIDER_NAME_RE.sub(rf'\g<1>{display_name}\g<2>', text, count=1)
    try:
        CODEX_CONFIG_PATH.write_text(text)
    except OSError as exc:
        print(f"[switch] failed to write {CODEX_CONFIG_PATH}: {exc}", flush=True)
        return
    print(f"[switch] set active model to {slug} ({display_name})", flush=True)


def _restart_codex_app() -> None:
    """Quit and relaunch Codex Desktop in a background thread (non-blocking).

    Cross-platform: ``taskkill`` + ``Codex.exe`` on Windows, ``osascript`` +
    ``open -a Codex`` on macOS. Linux has no Codex Desktop build today, so
    the branch is a no-op there.
    """
    import os as _os
    import subprocess as _subprocess
    import threading as _threading
    import time as _time

    def _do_restart() -> None:
        try:
            if _os.name == "nt":
                _subprocess.run(
                    ["taskkill", "/IM", "Codex.exe", "/F"],
                    check=False,
                    stdout=_subprocess.DEVNULL,
                    stderr=_subprocess.DEVNULL,
                )
                _time.sleep(1.5)
                local_appdata = _os.environ.get("LOCALAPPDATA", "")
                codex_exe = Path(local_appdata) / "Programs" / "Codex" / "Codex.exe"
                if codex_exe.exists():
                    _subprocess.Popen([str(codex_exe)])
                else:
                    _subprocess.Popen(["Codex.exe"], shell=True)
            elif sys.platform == "darwin":
                quit_script = 'tell application "Codex" to if it is running then quit'
                _subprocess.run(
                    ["osascript", "-e", quit_script],
                    check=False,
                    stdout=_subprocess.DEVNULL,
                    stderr=_subprocess.DEVNULL,
                )
                _time.sleep(1.5)
                _subprocess.Popen(["open", "-a", "Codex"])
        except OSError:
            pass

    _threading.Thread(target=_do_restart, daemon=True).start()


def _picker_html() -> str:
    return '''<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>Codex Shim - Model Picker</title>
<style>
  * { box-sizing: border-box; margin: 0; padding: 0; }
  body {
    font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, sans-serif;
    background: #0d1117; color: #c9d1d9;
    display: flex; justify-content: center; align-items: center;
    min-height: 100vh; padding: 20px;
  }
  .container { max-width: 500px; width: 100%; }
  h1 { font-size: 24px; margin-bottom: 8px; color: #f0f6fc; }
  .subtitle { color: #8b949e; margin-bottom: 24px; font-size: 14px; }
  .model-card {
    background: #161b22; border: 1px solid #30363d; border-radius: 8px;
    padding: 16px; margin-bottom: 12px; cursor: pointer;
    transition: all 0.15s ease; display: flex; align-items: center;
    justify-content: space-between;
  }
  .model-card:hover { border-color: #58a6ff; background: #1c2333; }
  .model-card.active { border-color: #3fb950; background: #1a2e1a; }
  .model-info { flex: 1; }
  .model-name { font-size: 16px; font-weight: 600; color: #f0f6fc; }
  .model-provider { font-size: 12px; color: #8b949e; margin-top: 4px; }
  .model-badge {
    font-size: 11px; padding: 2px 8px; border-radius: 12px;
    font-weight: 600; text-transform: uppercase;
  }
  .badge-active { background: #1a4d2e; color: #3fb950; }
  .badge-switch { background: #1c2333; color: #58a6ff; }
  .status { text-align: center; margin-top: 16px; font-size: 14px; min-height: 20px; }
  .status.ok { color: #3fb950; }
  .status.err { color: #f85149; }
  .status.loading { color: #d29922; }
  .restart-note { color: #8b949e; font-size: 12px; text-align: center; margin-top: 8px; }
  .opt { display: flex; align-items: center; justify-content: center; gap: 8px; margin-top: 12px; }
  .opt label { font-size: 13px; color: #8b949e; cursor: pointer; }
  .opt input { cursor: pointer; }
</style>
</head>
<body>
<div class="container">
  <h1>Model Picker</h1>
  <p class="subtitle">Choose the active model for Codex Desktop</p>
  <div id="models"><div class="status loading">Loading models...</div></div>
  <div class="opt">
    <input type="checkbox" id="autoRestart" checked>
    <label for="autoRestart">Auto-restart Codex after switching</label>
  </div>
  <div id="status" class="status"></div>
  <p class="restart-note">Codex needs to restart to use the new model</p>
</div>
<script>
async function loadModels() {
  const res = await fetch('/api/models');
  const models = await res.json();
  const container = document.getElementById('models');
  container.innerHTML = '';
  models.forEach(m => {
    const card = document.createElement('div');
    card.className = 'model-card' + (m.active ? ' active' : '');
    const info = document.createElement('div');
    info.className = 'model-info';
    const name = document.createElement('div');
    name.className = 'model-name';
    name.textContent = m.display_name;
    const prov = document.createElement('div');
    prov.className = 'model-provider';
    prov.textContent = m.provider + ' \u00b7 ' + m.slug;
    info.appendChild(name);
    info.appendChild(prov);
    const badge = document.createElement('span');
    badge.className = 'model-badge ' + (m.active ? 'badge-active' : 'badge-switch');
    badge.textContent = m.active ? 'Active' : 'Switch';
    card.appendChild(info);
    card.appendChild(badge);
    if (!m.active) {
      card.onclick = () => switchModel(m.slug);
    }
    container.appendChild(card);
  });
}
async function switchModel(slug) {
  const status = document.getElementById('status');
  const restart = document.getElementById('autoRestart').checked;
  status.className = 'status loading';
  status.textContent = 'Switching to ' + slug + '...';
  try {
    const res = await fetch('/api/switch', {
      method: 'POST',
      headers: {'Content-Type': 'application/json'},
      body: JSON.stringify({slug, restart_codex: restart})
    });
    const data = await res.json();
    if (data.ok) {
      status.className = 'status ok';
      status.textContent = 'Switched to ' + slug + (restart ? ' \u2014 Codex restarting...' : '');
      setTimeout(loadModels, 1000);
    } else {
      status.className = 'status err';
      status.textContent = data.error || 'Failed';
    }
  } catch(e) {
    status.className = 'status err';
    status.textContent = 'Error: ' + e.message;
  }
}
loadModels();
</script>
</body>
</html>'''


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
