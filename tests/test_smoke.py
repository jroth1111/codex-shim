from __future__ import annotations

import json
import sys

from aiohttp import web
from aiohttp.test_utils import TestClient, TestServer

from codex_shim import cli
from codex_shim.smoke import resolve_smoke_target, run_provider_smoke


async def test_provider_smoke_openai_compatible_success(tmp_path):
    async def chat(request):
        body = await request.json()
        assert body["model"] == "real-model"
        assert body["stream"] is False
        return web.json_response(
            {
                "choices": [{"message": {"role": "assistant", "content": "OK"}}],
                "usage": {"prompt_tokens": 1, "completion_tokens": 1, "total_tokens": 2},
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "ok",
                        "model": "real-model",
                        "display_name": "OK Model",
                        "provider": "generic-chat-completion-api",
                        "base_url": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )

    route = resolve_smoke_target(settings, "ok").route
    result = await run_provider_smoke(route)

    assert result.ok is True
    assert result.status == "ok"
    assert "usage=" in result.message

    await upstream_client.close()


async def test_provider_smoke_reports_upstream_auth_failure(tmp_path):
    async def chat(_request):
        return web.json_response({"error": "bad key"}, status=401)

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "auth",
                        "model": "real-model",
                        "display_name": "Auth Model",
                        "provider": "generic-chat-completion-api",
                        "base_url": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )

    result = await run_provider_smoke(resolve_smoke_target(settings, "auth").route)

    assert result.ok is False
    assert result.status == "auth_failure"
    assert "HTTP 401" in result.message

    await upstream_client.close()


def test_provider_smoke_resolution_reports_ambiguous_provider(tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {"id": "one", "model": "one", "display_name": "One", "provider": "openai", "base_url": "http://x/v1"},
                    {"id": "two", "model": "two", "display_name": "Two", "provider": "openai", "base_url": "http://x/v1"},
                ]
            }
        )
    )

    resolution = resolve_smoke_target(settings, "openai")

    assert resolution.route is None
    assert "ambiguous provider" in resolution.error
    assert [model.slug for model in resolution.matches] == ["one", "two"]


async def test_provider_smoke_hidden_model_is_not_called(tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "hidden",
                        "model": "hidden-model",
                        "display_name": "Hidden",
                        "provider": "zai",
                        "api_key_env": "MISSING_ZAI_KEY",
                    }
                ]
            }
        )
    )

    route = resolve_smoke_target(settings, "hidden").route
    result = await run_provider_smoke(route)

    assert result.ok is False
    assert result.status == "hidden"
    assert "missing API key" in result.message


def test_provider_smoke_command_missing_is_visible_in_cli_output(tmp_path, capsys):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "cursor",
                        "model": "auto",
                        "display_name": "Cursor",
                        "provider": "cursor-agent",
                        "command": str(tmp_path / "missing-cursor"),
                    }
                ]
            }
        )
    )

    assert cli.test_provider_route(settings, "cursor") == 1

    out = capsys.readouterr()
    assert "hidden (command not found:" in out.out
    assert "Smoke test failed (hidden" in out.err


def test_provider_smoke_cursor_command_can_be_resolved_when_present(tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "cursor",
                        "model": "auto",
                        "display_name": "Cursor",
                        "provider": "cursor-agent",
                        "command": sys.executable,
                    }
                ]
            }
        )
    )

    route = resolve_smoke_target(settings, "cursor").route

    assert route.visible is True
    assert route.is_cursor_cli is True
