from __future__ import annotations

import asyncio
import json
from dataclasses import dataclass
from pathlib import Path
from typing import Any

from aiohttp import ClientConnectorError, ClientResponseError, ClientSession, ClientTimeout

from .. import settings as settings_module
from ..providers import CursorAcpError, CursorCliError, run_cursor_acp, run_cursor_cli
from ..settings import CHATGPT_MODEL_SLUG, ModelSettings, ShimModel, chatgpt_passthrough_model
from ..translate import responses_to_anthropic, responses_to_chat


@dataclass(frozen=True)
class SmokeResolution:
    route: ShimModel | None
    matches: list[ShimModel]
    error: str | None = None


@dataclass(frozen=True)
class SmokeResult:
    ok: bool
    route: ShimModel | None
    status: str
    message: str
    payload: dict[str, Any] | None = None


def resolve_smoke_target(settings_path: Path, target: str) -> SmokeResolution:
    configured = ModelSettings(settings_path).load()
    models: list[ShimModel] = []
    synthetic = chatgpt_passthrough_model()
    if synthetic is not None:
        models.append(synthetic)
    models.extend(configured)
    requested = target.strip()
    if not requested:
        return SmokeResolution(None, [], "target is required")

    exact_slug = [model for model in models if model.slug == requested]
    if exact_slug:
        return _single_or_ambiguous(exact_slug, requested, "slug")

    exact_model = [model for model in models if model.model == requested]
    if exact_model:
        return _single_or_ambiguous(exact_model, requested, "upstream model")

    lowered = requested.lower()
    exact_provider = [model for model in models if model.provider.lower() == lowered]
    if exact_provider:
        return _single_or_ambiguous(exact_provider, requested, "provider")

    exact_display = [model for model in models if model.display_name.lower() == lowered]
    if exact_display:
        return _single_or_ambiguous(exact_display, requested, "display name")

    display_matches = [model for model in models if lowered in model.display_name.lower()]
    if display_matches:
        return _single_or_ambiguous(display_matches, requested, "display name")
    return SmokeResolution(None, [], f"unknown target: {requested}")


async def run_provider_smoke(route: ShimModel) -> SmokeResult:
    if not route.visible:
        return SmokeResult(
            ok=False,
            route=route,
            status="hidden",
            message=route.unavailable_reason or "model is hidden",
        )
    body = {
        "model": route.slug,
        "input": "Reply with exactly: OK",
        "stream": False,
        "max_output_tokens": 32,
        "metadata": {"trace_id": "codex-shim-smoke"},
    }
    try:
        if route.is_cursor_acp:
            result = await run_cursor_acp(route, body)
            return _text_result(route, result.text, result.usage)
        if route.is_cursor_cli:
            result = await run_cursor_cli(route, body)
            return _text_result(route, result.text, result.usage)
        if route.is_openai_chat:
            return await _smoke_openai_chat(route, body)
        if route.is_anthropic:
            return await _smoke_anthropic(route, body)
        if route.is_chatgpt:
            return await _smoke_chatgpt(route, body)
    except (CursorAcpError, CursorCliError) as exc:
        return SmokeResult(False, route, _classify_command_error(str(exc)), str(exc))
    except asyncio.TimeoutError as exc:
        return SmokeResult(False, route, "timeout", f"timed out while testing {route.slug}: {exc}")
    except ClientConnectorError as exc:
        return SmokeResult(False, route, "bad_url", f"could not connect to upstream for {route.slug}: {exc}")
    except ClientResponseError as exc:
        return SmokeResult(False, route, _status_error_class(exc.status), f"upstream HTTP {exc.status}: {exc.message}")
    except OSError as exc:
        return SmokeResult(False, route, "connection_error", f"could not test {route.slug}: {exc}")
    return SmokeResult(False, route, "unsupported_route", f"unsupported route transport for provider {route.provider}")


async def _smoke_openai_chat(route: ShimModel, body: dict[str, Any]) -> SmokeResult:
    from ..providers import openai_headers as _openai_headers

    forwarded = responses_to_chat(body, route.model, route.provider, thinking_behavior=route.thinking_behavior)
    async with ClientSession(timeout=ClientTimeout(total=60)) as session:
        async with session.post(route.endpoint_url, json=forwarded, headers=_openai_headers(route)) as response:
            if response.status >= 400:
                text = await response.text()
                return SmokeResult(False, route, _status_error_class(response.status), _http_error_message(response.status, text))
            payload = await response.json(content_type=None)
    text = _chat_payload_text(payload)
    return _text_result(route, text, payload.get("usage") if isinstance(payload, dict) else None, payload=payload)


async def _smoke_anthropic(route: ShimModel, body: dict[str, Any]) -> SmokeResult:
    from ..providers import anthropic_headers as _anthropic_headers
    from ..providers import join_url as _join_url

    forwarded = responses_to_anthropic(body, route.model, route.max_output_tokens)
    async with ClientSession(timeout=ClientTimeout(total=60)) as session:
        async with session.post(_join_url(route.base_url, "/messages"), json=forwarded, headers=_anthropic_headers(route)) as response:
            if response.status >= 400:
                text = await response.text()
                return SmokeResult(False, route, _status_error_class(response.status), _http_error_message(response.status, text))
            payload = await response.json(content_type=None)
    return _text_result(route, _anthropic_payload_text(payload), payload.get("usage") if isinstance(payload, dict) else None, payload=payload)


async def _smoke_chatgpt(route: ShimModel, body: dict[str, Any]) -> SmokeResult:
    from ..providers import metadata_as_forward_headers as _metadata_as_forward_headers

    auth = json.loads(settings_module.DEFAULT_CODEX_AUTH.expanduser().read_text())
    tokens = auth.get("tokens") or {}
    access_token = tokens.get("access_token")
    if not access_token:
        return SmokeResult(False, route, "auth_failure", "auth.json has no access_token")
    forwarded = dict(body)
    forwarded["model"] = CHATGPT_MODEL_SLUG
    headers = {
        "Authorization": f"Bearer {access_token}",
        "Content-Type": "application/json",
        "Accept": "application/json",
        "OpenAI-Beta": "responses=2026-02-06",
        "originator": "codex_cli_rs",
        "chatgpt-account-id": str(tokens.get("account_id") or ""),
        **_metadata_as_forward_headers(body),
    }
    async with ClientSession(timeout=ClientTimeout(total=60)) as session:
        async with session.post(route.endpoint_url, json=forwarded, headers=headers) as response:
            if response.status >= 400:
                text = await response.text()
                return SmokeResult(False, route, _status_error_class(response.status), _http_error_message(response.status, text))
            payload = await response.json(content_type=None)
    return _text_result(route, _responses_payload_text(payload), payload.get("usage") if isinstance(payload, dict) else None, payload=payload)


def _single_or_ambiguous(matches: list[ShimModel], requested: str, kind: str) -> SmokeResolution:
    if len(matches) == 1:
        return SmokeResolution(matches[0], matches)
    labels = ", ".join(f"{model.slug} ({model.display_name})" for model in matches)
    return SmokeResolution(None, matches, f"ambiguous {kind} {requested!r}: {labels}")


def _text_result(
    route: ShimModel,
    text: str,
    usage: dict[str, Any] | None = None,
    *,
    payload: dict[str, Any] | None = None,
) -> SmokeResult:
    if not text.strip():
        return SmokeResult(False, route, "empty_response", f"{route.slug} returned no assistant text", payload=payload)
    suffix = f" usage={json.dumps(usage, sort_keys=True)}" if usage else ""
    return SmokeResult(True, route, "ok", f"{route.slug} responded with text.{suffix}", payload=payload)


def _chat_payload_text(payload: dict[str, Any]) -> str:
    choice = (payload.get("choices") or [{}])[0]
    message = choice.get("message") or {}
    return str(message.get("content") or "")


def _anthropic_payload_text(payload: dict[str, Any]) -> str:
    chunks = []
    for item in payload.get("content") or []:
        if isinstance(item, dict) and item.get("type") == "text":
            chunks.append(str(item.get("text") or ""))
    return "".join(chunks)


def _responses_payload_text(payload: dict[str, Any]) -> str:
    chunks = []
    for item in payload.get("output") or []:
        if not isinstance(item, dict):
            continue
        for part in item.get("content") or []:
            if isinstance(part, dict) and part.get("type") in {"output_text", "text"}:
                chunks.append(str(part.get("text") or ""))
    return "".join(chunks)


def _classify_command_error(message: str) -> str:
    lowered = message.lower()
    if "failed to start" in lowered or "no such file" in lowered or "not found" in lowered:
        return "missing_command"
    if "timed out" in lowered:
        return "timeout"
    return "command_error"


def _status_error_class(status: int) -> str:
    if status in {401, 403}:
        return "auth_failure"
    if status == 404:
        return "unsupported_route"
    return "upstream_error"


def _http_error_message(status: int, text: str) -> str:
    excerpt = text.strip()[:500]
    return f"upstream HTTP {status}" + (f": {excerpt}" if excerpt else "")
