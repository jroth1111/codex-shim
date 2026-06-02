from __future__ import annotations

import json

from aiohttp import web
import pytest

from codex_shim.governance import GovernanceAuditSink
from codex_shim.observability import ObservabilitySink
from codex_shim.providers import ProviderDispatcher
from codex_shim.routing import resolve_model_route
from codex_shim.settings import ModelSettings
from codex_shim.workers import enqueue_job, run_worker_once
from codex_shim.server import _executed_tool_count_from_response_payload


def test_resolve_model_route_returns_selected_slug(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "demo-model",
                        "model": "gpt-4o-mini",
                        "displayName": "Demo",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    }
                ]
            }
        )
    )
    settings = ModelSettings(settings_path)
    resolution = resolve_model_route(settings, {"model": "demo-model"})
    assert resolution.selected_route.slug == "demo-model"
    assert resolution.requested_model == "demo-model"
    assert resolution.selected_by == "slug"


@pytest.mark.asyncio
async def test_provider_dispatcher_uses_openai_handler(monkeypatch):
    async def _handler(request, route, body, as_responses, prepared, stream_response):
        assert as_responses is True
        return web.json_response({"ok": True, "model": route.slug, "stream": bool(body.get("stream"))})

    dispatcher = ProviderDispatcher(
        openai_handler=_handler,
        anthropic_handler=_handler,
        cursor_acp_handler=_handler,
        cursor_cli_handler=_handler,
    )
    class _Route:
        slug = "m1"
        provider = "generic"
        is_openai_chat = True
        is_anthropic = False
        is_cursor_acp = False
        is_cursor_cli = False

    resp = await dispatcher.dispatch(None, _Route(), {"stream": False}, as_responses=True)
    assert resp.status == 200


@pytest.mark.asyncio
async def test_provider_dispatcher_retries_retryable_status():
    calls = {"count": 0}

    async def _handler(request, route, body, as_responses, prepared, stream_response):
        calls["count"] += 1
        status = 503 if calls["count"] == 1 else 200
        return web.json_response({"ok": status == 200}, status=status)

    dispatcher = ProviderDispatcher(
        openai_handler=_handler,
        anthropic_handler=_handler,
        cursor_acp_handler=_handler,
        cursor_cli_handler=_handler,
    )

    class _Route:
        slug = "m1"
        provider = "generic"
        is_openai_chat = True
        is_anthropic = False
        is_cursor_acp = False
        is_cursor_cli = False

    resp = await dispatcher.dispatch(None, _Route(), {"stream": False}, as_responses=True)
    assert resp.status == 200
    assert calls["count"] == 2


@pytest.mark.asyncio
async def test_provider_dispatcher_stats_capture_attempts():
    async def _handler(request, route, body, as_responses, prepared, stream_response):
        return web.json_response({"ok": True}, status=200)

    dispatcher = ProviderDispatcher(
        openai_handler=_handler,
        anthropic_handler=_handler,
        cursor_acp_handler=_handler,
        cursor_cli_handler=_handler,
    )

    class _Route:
        slug = "m1"
        provider = "generic"
        is_openai_chat = True
        is_anthropic = False
        is_cursor_acp = False
        is_cursor_cli = False

    stats = {}
    resp = await dispatcher.dispatch(None, _Route(), {"stream": False}, as_responses=True, stats=stats)
    assert resp.status == 200
    assert stats["attempts"] == 1


def test_governance_and_observability_sinks_write_expected_fields(tmp_path):
    governance_path = tmp_path / "governance.jsonl"
    observability_path = tmp_path / "observability.jsonl"
    governance = GovernanceAuditSink(governance_path)
    observability = ObservabilitySink(observability_path)

    governance.emit(
        path="/v1/responses",
        provider="generic-chat-completion-api",
        model_slug="demo-model",
        outcome="ok",
        body={"tools": [{"type": "function"}]},
        selected_by="slug",
        retry_attempts=2,
        fallback_used=True,
        tool_count_override=2,
    )
    observability.emit(
        stage="route_selected",
        path="/v1/responses",
        provider="generic-chat-completion-api",
        model_slug="demo-model",
        attributes={"stream": False},
    )

    gov_event = json.loads(governance_path.read_text().strip())
    obs_event = json.loads(observability_path.read_text().strip())

    assert gov_event["provider"] == "generic-chat-completion-api"
    assert gov_event["requested_tool_count"] == 1
    assert gov_event["executed_tool_count"] == 2
    assert gov_event["model_slug"] == "demo-model"
    assert gov_event["selected_by"] == "slug"
    assert gov_event["retry_attempts"] == 2
    assert gov_event["fallback_used"] is True
    assert obs_event["stage"] == "route_selected"
    assert obs_event["provider"] == "generic-chat-completion-api"


def test_worker_queue_processes_jobs(tmp_path, monkeypatch):
    queue_path = tmp_path / "jobs.jsonl"
    results_path = tmp_path / "results.jsonl"
    monkeypatch.setattr("codex_shim.workers.DEFAULT_QUEUE_PATH", queue_path)
    monkeypatch.setattr("codex_shim.workers.DEFAULT_RESULTS_PATH", results_path)
    enqueue_job("capture_ingest", {"fixture": "S1"}, queue_path=queue_path)
    assert run_worker_once(queue_path=queue_path, results_path=results_path) == 0
    lines = [line for line in results_path.read_text().splitlines() if line.strip()]
    assert len(lines) == 1
    payload = json.loads(lines[0])
    assert payload["type"] == "capture_ingest"


def test_executed_tool_count_from_response_payload_counts_tool_calls():
    payload = {
        "output": [
            {"type": "reasoning"},
            {"type": "function_call"},
            {"type": "message"},
            {"type": "web_search_call"},
            {"type": "output_text"},
        ]
    }
    assert _executed_tool_count_from_response_payload(payload) == 2


def test_resolve_model_route_sets_fallback_candidate(tmp_path):
    settings_path = tmp_path / "settings.json"
    settings_path.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "a",
                        "model": "m-a",
                        "displayName": "A",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    },
                    {
                        "slug": "b",
                        "model": "m-b",
                        "displayName": "B",
                        "provider": "generic-chat-completion-api",
                        "baseURL": "https://example.test/v1",
                    },
                ]
            }
        )
    )
    settings = ModelSettings(settings_path)
    resolution = resolve_model_route(settings, {"model": "a"})
    assert resolution.fallback_route is not None
    assert resolution.fallback_route.slug != resolution.selected_route.slug
