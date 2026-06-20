from __future__ import annotations

import json
from pathlib import Path
from typing import Any

import pytest
from aiohttp import web
from aiohttp.test_utils import TestClient, TestServer

from codex_shim.clientconfig import picker as picker_module
from codex_shim.clientconfig.picker import PICKER_TOKEN_HEADER
from codex_shim.clientconfig.picker import current_managed_model as _current_managed_model
from codex_shim.clientconfig.picker import picker_html as _picker_html
from codex_shim.clientconfig.picker import set_active_model as _set_active_model
from codex_shim.providers import merge_codex_forward_headers as _merge_codex_forward_headers
from codex_shim.providers import metadata_as_forward_headers as _metadata_as_forward_headers
from codex_shim.providers import passthrough_forward_headers as _passthrough_forward_headers
from codex_shim.providers import rewrite_response_model as _rewrite_response_model
from codex_shim.providers import sanitize_chatgpt_passthrough_body as _sanitize_chatgpt_passthrough_body
from codex_shim.routing import needs_image_generation
from codex_shim.server import ShimServer
from codex_shim.translate import (
    SHIM_ENCRYPTED_CONTENT_PREFIX,
    ResponsesStreamState,
    streaming_tool_open_item,
)


@pytest.fixture
def auth_present(monkeypatch, tmp_path):
    auth = tmp_path / "auth.json"
    auth.write_text(json.dumps({"tokens": {"access_token": "stub", "account_id": "acct"}}))
    monkeypatch.setattr("codex_shim.settings.DEFAULT_CODEX_AUTH", auth)
    monkeypatch.setattr("codex_shim.routing.subscription_catalog.settings_module.DEFAULT_CODEX_AUTH", auth)
    monkeypatch.setattr("codex_shim.routing.subscription_catalog.CACHE_PATH", tmp_path / "subscription_models_cache.json")
    return auth


@pytest.fixture
def auth_missing(monkeypatch, tmp_path):
    missing = tmp_path / "missing-auth.json"
    monkeypatch.setattr("codex_shim.settings.DEFAULT_CODEX_AUTH", missing)
    monkeypatch.setattr("codex_shim.routing.subscription_catalog.settings_module.DEFAULT_CODEX_AUTH", missing)


def test_sanitize_chatgpt_passthrough_body_preserves_hosted_tool_input_items():
    body = {
        "input": [
            {"type": "local_shell_call", "call_id": "call_shell", "action": {"command": "pwd"}},
            {"type": "web_search_call", "call_id": "call_search", "action": {"query": "docs"}},
        ]
    }
    sanitized = _sanitize_chatgpt_passthrough_body(body)
    types = [item.get("type") for item in sanitized["input"]]
    assert types == ["local_shell_call", "web_search_call"]


def test_sanitize_chatgpt_passthrough_body_drops_shim_reasoning():
    body = {
        "model": "claude-local",
        "input": [
            {"type": "message", "role": "user", "content": "hi"},
            {
                "id": "rs_shim",
                "type": "reasoning",
                "summary": [{"type": "summary_text", "text": "local thought"}],
                "encrypted_content": f"{SHIM_ENCRYPTED_CONTENT_PREFIX}deadbeef",
            },
            {
                "id": "rs_openai",
                "type": "reasoning",
                "summary": [{"type": "summary_text", "text": "openai thought"}],
                "encrypted_content": "openai-verifiable-content",
            },
        ],
    }

    sanitized = _sanitize_chatgpt_passthrough_body(body)

    assert sanitized is not body
    assert sanitized["input"] is not body["input"]
    assert [item["id"] for item in sanitized["input"] if item.get("type") == "reasoning"] == ["rs_openai"]
    assert sanitized["input"][1]["encrypted_content"] == "openai-verifiable-content"
    assert len(body["input"]) == 3


def test_sanitize_chatgpt_passthrough_body_removes_nested_shim_encrypted_content():
    body = {
        "model": "claude-local",
        "input": [
            {
                "type": "message",
                "role": "assistant",
                "content": [
                    {
                        "type": "output_text",
                        "text": "done",
                        "encrypted_content": f"{SHIM_ENCRYPTED_CONTENT_PREFIX}deadbeef",
                    }
                ],
            }
        ],
    }

    sanitized = _sanitize_chatgpt_passthrough_body(body)

    assert "encrypted_content" not in sanitized["input"][0]["content"][0]
    assert "encrypted_content" in body["input"][0]["content"][0]


def test_sanitize_chatgpt_passthrough_body_preserves_bare_string_input():
    body = {"model": "gpt-5.5", "input": "hi", "stream": True}
    sanitized = _sanitize_chatgpt_passthrough_body(body)
    assert sanitized["input"] == "hi"
    assert sanitized["stream"] is True


def test_sanitize_chatgpt_passthrough_body_preserves_previous_response_id():
    body = {
        "model": "claude-local",
        "previous_response_id": "resp_prior",
        "input": [
            {
                "id": "rs_shim",
                "type": "reasoning",
                "summary": [{"type": "summary_text", "text": "local thought"}],
                "encrypted_content": f"{SHIM_ENCRYPTED_CONTENT_PREFIX}deadbeef",
            },
        ],
    }
    sanitized = _sanitize_chatgpt_passthrough_body(body)
    assert sanitized["previous_response_id"] == "resp_prior"
    assert sanitized["input"] == []


async def test_chatgpt_passthrough_streaming_forwards_hosted_tool_input(monkeypatch, tmp_path, auth_present):
    captured = {}

    class _FakeStreamContent:
        def __init__(self, chunks: list[bytes]):
            self._chunks = chunks

        def iter_chunked(self, _size: int):
            async def _gen():
                for chunk in self._chunks:
                    yield chunk

            return _gen()

    class FakeUpstream:
        status = 200
        headers = {"Content-Type": "text/event-stream"}

        def __init__(self):
            self.content = _FakeStreamContent(
                [
                    b'data: {"type":"response.completed","response":{"id":"resp_stream_tools","status":"completed","output":[]}}\n\n',
                    b"data: [DONE]\n\n",
                ]
            )

        def release(self):
            pass

    async def fake_post(self, url, json=None, headers=None):
        captured["body"] = json
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "gpt-5.5",
            "stream": True,
            "input": [
                {"type": "local_shell_call", "call_id": "call_shell", "action": {"command": "pwd"}},
            ],
        },
    )
    assert resp.status == 200
    assert captured["body"]["stream"] is True
    assert captured["body"]["input"][0]["type"] == "function_call"
    assert captured["body"]["input"][0]["name"] == "local_shell"

    await shim_client.close()


def test_rewrite_response_model_only_rewrites_chatgpt_metadata():
    payload = {
        "model": "gpt-5.5",
        "nested": [{"model": "gpt-5.5"}, {"model": "other"}],
    }

    _rewrite_response_model(payload, "custom-model")

    assert payload == {
        "model": "custom-model",
        "nested": [{"model": "custom-model"}, {"model": "other"}],
    }


def test_image_generation_detection_is_conservative():
    tools = [
        {"type": "function", "function": {"name": "shell"}},
        {"type": "image_generation", "name": "image_generation"},
    ]

    assert needs_image_generation({"tools": tools, "input": [{"role": "user", "content": "write code for an icon component"}]}) is False
    assert needs_image_generation({"tools": tools, "input": [{"role": "user", "content": "@image generate a neon fox"}]}) is False
    assert needs_image_generation({"tools": tools, "tool_choice": {"type": "image_generation"}, "input": "hi"}) is True
    assert needs_image_generation({"tools": [{"type": "image_generation", "name": "image_generation"}], "input": "hi"}) is True
    assert needs_image_generation(
        {
            "input": [
                {"type": "image_generation_call", "id": "ig_1"},
                {"role": "user", "content": "make it brighter"},
            ]
        }
    ) is True


async def test_image_generation_does_not_bypass_selected_non_image_model(monkeypatch, tmp_path, auth_present):
    captured = {"called": False}

    class FakeUpstream:
        status = 200
        content_type = "application/json"
        headers = {"Content-Type": "application/json"}

        async def json(self, content_type=None):
            return {"id": "resp_img", "model": "gpt-5.5", "output": [{"type": "image_generation_call", "model": "gpt-5.5"}]}

        def release(self):
            pass

    async def fake_post(self, url, json=None, headers=None):
        captured["called"] = True
        captured["url"] = url
        captured["body"] = json
        captured["headers"] = headers
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": "http://example.invalid/v1",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "real-openai",
            "input": [{"role": "user", "content": "@image generate a neon fox"}],
            "tools": [{"type": "image_generation", "name": "image_generation"}],
        },
    )
    assert resp.status == 400
    payload = await resp.json()
    assert payload["error"]["type"] == "unsupported_capability"
    assert "Image generation requires" in payload["error"]["message"]
    assert captured["called"] is False

    await shim_client.close()


async def test_chatgpt_image_generation_routes_to_chatgpt_passthrough(monkeypatch, tmp_path, auth_present):
    captured = {}

    class FakeUpstream:
        status = 200
        content_type = "application/json"
        headers = {"Content-Type": "application/json"}

        async def json(self, content_type=None):
            return {"id": "resp_img", "model": "gpt-5.5", "output": [{"type": "image_generation_call", "model": "gpt-5.5"}]}

        def release(self):
            pass

    async def fake_post(self, url, json=None, headers=None):
        captured["url"] = url
        captured["body"] = json
        captured["headers"] = headers
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "gpt-5.5",
            "stream": False,
            "input": [{"role": "user", "content": "@image generate a neon fox"}],
            "tools": [{"type": "image_generation", "name": "image_generation"}],
        },
    )
    assert resp.status == 200
    payload = await resp.json()
    assert payload["model"] == "gpt-5.5"
    assert payload["output"][0]["model"] == "gpt-5.5"
    assert captured["body"]["model"] == "gpt-5.5"
    assert captured["headers"]["Authorization"] == "Bearer stub"

    await shim_client.close()


async def test_chatgpt_passthrough_strips_previous_response_id_by_default(monkeypatch, tmp_path, auth_present):
    captured = {}

    class FakeUpstream:
        status = 200
        content_type = "application/json"
        headers = {"Content-Type": "application/json"}

        async def json(self, content_type=None):
            return {"id": "resp_native_next", "model": "gpt-5.5", "output": [{"type": "message", "role": "assistant"}]}

        def release(self):
            pass

    async def fake_post(self, url, json=None, headers=None):
        captured["url"] = url
        captured["body"] = json
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "gpt-5.5",
            "previous_response_id": "native-upstream-id",
            "input": "continue",
            "stream": False,
        },
    )

    assert resp.status == 200
    payload = await resp.json()
    assert payload["id"] == "resp_native_next"
    assert captured["url"] == "https://chatgpt.com/backend-api/codex/responses"
    assert "previous_response_id" not in captured["body"]
    assert captured["body"]["instructions"]
    assert captured["body"]["store"] is False
    assert captured["body"]["stream"] is False

    await shim_client.close()


async def test_chatgpt_passthrough_forwards_previous_response_id_when_env_set(
    monkeypatch, tmp_path, auth_present
):
    captured = {}
    monkeypatch.setenv("CODEX_SHIM_PASSTHROUGH_KEEP_PREVIOUS_RESPONSE_ID", "1")

    class FakeUpstream:
        status = 200
        content_type = "application/json"
        headers = {"Content-Type": "application/json"}

        async def json(self, content_type=None):
            return {"id": "resp_native_next", "model": "gpt-5.5", "output": [{"type": "message", "role": "assistant"}]}

        def release(self):
            pass

    async def fake_post(self, url, json=None, headers=None):
        captured["body"] = json
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "gpt-5.5",
            "previous_response_id": "native-upstream-id",
            "input": "continue",
            "stream": False,
        },
    )
    assert resp.status == 200
    assert captured["body"]["previous_response_id"] == "native-upstream-id"

    await shim_client.close()


async def test_responses_routes_to_openai_chat(tmp_path):
    captured = {}

    async def chat(request):
        captured["headers"] = dict(request.headers)
        captured["body"] = await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_fake",
                "choices": [{"message": {"role": "assistant", "content": "hello"}}],
                "usage": {"prompt_tokens": 2, "completion_tokens": 1, "total_tokens": 3},
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "hi"})
    assert resp.status == 200
    payload = await resp.json()
    assert payload["output"][0]["content"][0]["text"] == "hello"
    assert payload["usage"] == {"input_tokens": 2, "output_tokens": 1, "total_tokens": 3}
    assert captured["body"]["model"] == "real-openai"
    assert captured["headers"]["Authorization"] == "Bearer secret"

    await shim_client.close()
    await upstream_client.close()


async def test_responses_invalid_tools_returns_400_without_upstream_call(tmp_path):
    captured = {"called": False}

    async def chat(request):
        captured["called"] = True
        return web.json_response({"id": "x", "choices": [{"message": {"role": "assistant", "content": "hi"}}]})

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "or-model",
                        "displayName": "OpenRouter",
                        "provider": "openrouter",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "or-model",
            "input": "hi",
            "tools": [
                {"type": "function", "name": "dup", "parameters": {"type": "object"}},
                {"type": "function", "name": "dup", "parameters": {"type": "object"}},
            ],
        },
    )

    assert resp.status == 400
    payload = await resp.json()
    assert payload["error"]["type"] == "invalid_request_error"
    assert "duplicate" in payload["error"]["message"]
    assert captured["called"] is False

    await shim_client.close()
    await upstream_client.close()


async def test_responses_invalid_content_returns_400_without_upstream_call(tmp_path):
    captured = {"called": False}

    async def chat(request):
        captured["called"] = True
        return web.json_response({"id": "chatcmpl_fake", "choices": [{"message": {"role": "assistant", "content": "hello"}}]})

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "input": [{"role": "user", "content": [{"type": "file", "file_id": "file_123"}]}]},
    )

    assert resp.status == 400
    payload = await resp.json()
    assert payload["error"]["type"] == "invalid_request_error"
    assert "Unsupported Responses content part type: file" in payload["error"]["message"]
    assert captured["called"] is False

    await shim_client.close()
    await upstream_client.close()


async def test_responses_previous_response_id_replays_stored_window(tmp_path):
    captured: list[dict] = []

    async def chat(request):
        body = await request.json()
        captured.append(body)
        turn = len(captured)
        return web.json_response(
            {
                "id": "chatcmpl_first" if turn == 1 else "chatcmpl_second",
                "choices": [{"message": {"role": "assistant", "content": "first answer" if turn == 1 else "second answer"}}],
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    first = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "first"})
    assert first.status == 200
    first_payload = await first.json()
    assert first_payload["id"] == "chatcmpl_first"

    second = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "previous_response_id": "chatcmpl_first", "input": "second"},
    )
    assert second.status == 200

    assert captured[1]["messages"] == [
        {"role": "user", "content": "first"},
        {"role": "assistant", "content": "first answer"},
        {"role": "user", "content": "second"},
    ]

    await shim_client.close()
    await upstream_client.close()


async def test_responses_previous_response_id_requires_consistent_session_id(tmp_path):
    async def chat(request):
        return web.json_response(
            {"id": "chatcmpl_first", "choices": [{"message": {"role": "assistant", "content": "first answer"}}]}
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    first = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "first"})
    assert first.status == 200
    first_payload = await first.json()

    second = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "previous_response_id": first_payload["id"], "input": "second"},
        headers={"session_id": "later-session"},
    )
    assert second.status == 404

    await shim_client.close()
    await upstream_client.close()


async def test_responses_chained_turn_does_not_duplicate_instructions(tmp_path):
    captured: list[dict] = []

    async def chat(request):
        body = await request.json()
        captured.append(body)
        turn = len(captured)
        return web.json_response(
            {
                "id": "chatcmpl_first" if turn == 1 else "chatcmpl_second",
                "choices": [{"message": {"role": "assistant", "content": "ok"}}],
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    instructions = "Stay concise."
    first = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "input": "first", "instructions": instructions},
        headers={"session_id": "instr-session"},
    )
    assert first.status == 200
    first_payload = await first.json()

    second = await shim_client.post(
        "/v1/responses",
        json={
            "model": "real-openai",
            "previous_response_id": first_payload["id"],
            "input": "second",
            "instructions": instructions,
        },
        headers={"session_id": "instr-session"},
    )
    assert second.status == 200

    system_messages = [message for message in captured[1]["messages"] if message.get("role") == "system"]
    assert len(system_messages) == 1
    assert system_messages[0]["content"] == instructions

    await shim_client.close()
    await upstream_client.close()


async def test_responses_previous_response_id_unknown_returns_404(tmp_path):
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": "http://example.invalid/v1",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "previous_response_id": "missing", "input": "second"},
    )

    assert resp.status == 404
    payload = await resp.json()
    assert payload["error"]["type"] == "not_found"
    assert "missing" in payload["error"]["message"]

    await shim_client.close()


async def test_structured_access_log_includes_trace_latency_and_tokens(tmp_path, capsys):
    async def chat(request):
        await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_logged",
                "choices": [{"message": {"role": "assistant", "content": "logged"}}],
                "usage": {
                    "prompt_tokens": 4,
                    "completion_tokens": 3,
                    "total_tokens": 7,
                    "prompt_tokens_details": {"cached_tokens": 2},
                    "completion_tokens_details": {"reasoning_tokens": 1},
                },
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "input": "hi", "metadata": {"trace_id": "metadata-trace"}},
        headers={"x-trace-id": "trace-test"},
    )
    assert resp.status == 200

    access_line = [line for line in capsys.readouterr().out.splitlines() if line.startswith("[access] ")][-1]
    record = json.loads(access_line.removeprefix("[access] "))
    assert record["trace_id"] == "metadata-trace"
    assert record["path"] == "/v1/responses"
    assert record["model"] == "real-openai"
    assert record["provider_model"] == "real-openai"
    assert record["model_route"] == "direct_slug"
    assert record["status"] == 200
    assert record["stream"] is False
    assert isinstance(record["latency_ms"], int)
    assert isinstance(record["provider_ms"], int)
    assert isinstance(record["total_ms"], int)
    assert record["token_stats"] == {
        "input_tokens": 4,
        "output_tokens": 3,
        "total_tokens": 7,
        "cached_tokens": 2,
        "reasoning_tokens": 1,
    }

    await shim_client.close()
    await upstream_client.close()


async def test_streaming_response_is_stored_for_previous_response_id(tmp_path):
    captured: list[dict] = []

    async def chat(request):
        body = await request.json()
        captured.append(body)
        if body.get("stream"):
            response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
            await response.prepare(request)
            await response.write(b'data: {"choices":[{"delta":{"content":"streamed answer"}}]}\n\n')
            await response.write(b"data: [DONE]\n\n")
            await response.write_eof()
            return response
        return web.json_response(
            {"id": "chatcmpl_after_stream", "choices": [{"message": {"role": "assistant", "content": "after stream"}}]}
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    first = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "first", "stream": True})
    assert first.status == 200
    completed = [event for event in _sse_events(await first.text()) if event.get("type") == "response.completed"][-1]
    response_id = completed["response"]["id"]

    second = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "previous_response_id": response_id, "input": "second"},
    )
    assert second.status == 200
    assert captured[1]["messages"] == [
        {"role": "user", "content": "first"},
        {"role": "assistant", "content": "streamed answer"},
        {"role": "user", "content": "second"},
    ]

    await shim_client.close()
    await upstream_client.close()


async def test_streaming_hosted_tool_turn_stored_with_session_id(tmp_path):
    captured: list[dict] = []

    async def chat(request):
        body = await request.json()
        captured.append(body)
        if body.get("stream"):
            response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
            await response.prepare(request)
            await response.write(
                b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"id":"call_shell","type":"function","function":{"name":"local_shell","arguments":""}}]}}]}\n\n'
            )
            await response.write(
                b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"function":{"arguments":"{\\"command\\":\\"echo probe\\"}"}}]}}]}\n\n'
            )
            await response.write(b"data: [DONE]\n\n")
            await response.write_eof()
            return response
        return web.json_response(
            {"id": "chatcmpl_follow", "choices": [{"message": {"role": "assistant", "content": "acknowledged"}}]}
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    first = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "input": "run shell", "stream": True},
        headers={"session_id": "stream-hosted-session"},
    )
    assert first.status == 200
    completed = [event for event in _sse_events(await first.text()) if event.get("type") == "response.completed"][-1]
    response_id = completed["response"]["id"]
    tool_types = [item.get("type") for item in completed["response"].get("output") or []]
    assert "local_shell_call" in tool_types

    second = await shim_client.post(
        "/v1/responses",
        json={
            "model": "real-openai",
            "previous_response_id": response_id,
            "input": [{"type": "function_call_output", "call_id": "call_shell", "output": "probe"}],
            "stream": False,
        },
        headers={"session_id": "stream-hosted-session"},
    )
    assert second.status == 200
    follow_up = captured[1]
    tool_names = [
        call["function"]["name"]
        for message in follow_up["messages"]
        for call in message.get("tool_calls") or []
    ]
    assert "local_shell" in tool_names

    await shim_client.close()
    await upstream_client.close()


async def test_compact_returns_501_when_provider_policy_disables_compact(tmp_path):
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "no-compact",
                        "model": "real-model",
                        "display_name": "No Compact",
                        "provider": "generic-chat-completion-api",
                        "base_url": "http://127.0.0.1:9/v1",
                        "supports_compact": False,
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses/compact", json={"model": "no-compact", "input": "old state"})

    assert resp.status == 501
    payload = await resp.json()
    assert payload["error"]["type"] == "unsupported_route"
    assert "does not support" in payload["error"]["message"]

    await shim_client.close()


async def test_deepseek_replays_reasoning_content_on_tool_followup(tmp_path):
    captured = {}

    async def chat(request):
        captured["body"] = await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_fake",
                "choices": [{"message": {"role": "assistant", "content": "done"}}],
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "deepseek-chat",
                        "display_name": "DeepSeek Chat",
                        "provider": "deepseek",
                        "base_url": str(upstream_client.make_url("/v1")),
                        "api_key": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "deepseek-chat",
            "input": [
                {
                    "type": "reasoning",
                    "summary": [{"type": "summary_text", "text": "Need the current date before answering."}],
                },
                {
                    "type": "message",
                    "role": "assistant",
                    "content": [{"type": "output_text", "text": "Let me check the date."}],
                },
                {
                    "type": "function_call",
                    "call_id": "call_date",
                    "name": "get_date",
                    "arguments": "{}",
                },
                {
                    "type": "function_call_output",
                    "call_id": "call_date",
                    "output": "2026-05-26",
                },
            ],
        },
    )

    assert resp.status == 200
    assert captured["body"]["model"] == "deepseek-chat"
    assert captured["body"]["thinking"] == {"type": "enabled"}
    assert captured["body"]["messages"][0] == {
        "role": "assistant",
        "content": "Let me check the date.",
        "tool_calls": [
            {
                "id": "call_date",
                "type": "function",
                "function": {"name": "get_date", "arguments": "{}"},
            }
        ],
        "reasoning_content": "Need the current date before answering.",
    }

    await shim_client.close()
    await upstream_client.close()


async def test_moonshot_legacy_model_does_not_forward_codex_thinking(tmp_path):
    captured = {}

    async def chat(request):
        captured["body"] = await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_fake",
                "choices": [{"message": {"role": "assistant", "content": "done"}}],
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "moonshot-v1-32k",
                        "display_name": "Moonshot v1 32K",
                        "provider": "moonshot",
                        "base_url": str(upstream_client.make_url("/v1")),
                        "api_key": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "moonshot-v1-32k", "input": "hi", "thinking": True},
    )

    assert resp.status == 200
    assert "thinking" not in captured["body"]

    await shim_client.close()
    await upstream_client.close()


def _sse_events(text: str) -> list[dict]:
    events = []
    for block in text.split("\n\n"):
        if not block.startswith("data:"):
            continue
        data = block.removeprefix("data:").strip()
        if data and data != "[DONE]":
            events.append(json.loads(data))
    return events


class _FakeStreamResponse:
    def __init__(self):
        self.chunks: list[bytes] = []

    async def write(self, data: bytes):
        self.chunks.append(data)

    def text(self) -> str:
        return b"".join(self.chunks).decode()


async def test_streaming_openai_chat_response_completed_includes_usage(tmp_path):
    async def chat(request):
        await request.json()
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(b'data: {"choices":[{"delta":{"content":"hello"}}]}\n\n')
        await response.write(
            b'data: {"choices":[{"delta":{}}],"usage":{"prompt_tokens":4,"completion_tokens":2,"total_tokens":6,"prompt_tokens_details":{"cached_tokens":3}}}\n\n'
        )
        await response.write(b"data: [DONE]\n\n")
        await response.write_eof()
        return response

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "hi", "stream": True})
    assert resp.status == 200
    events = _sse_events(await resp.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    assert completed["response"]["usage"] == {
        "input_tokens": 4,
        "output_tokens": 2,
        "total_tokens": 6,
        "input_tokens_details": {"cached_tokens": 3},
    }

    await shim_client.close()
    await upstream_client.close()


async def test_streaming_anthropic_response_completed_includes_usage():
    downstream = _FakeStreamResponse()
    state = ResponsesStreamState("claude-real")
    await state.write_anthropic_delta(
        downstream,
        {
            "type": "message_start",
            "message": {
                "usage": {
                    "input_tokens": 5,
                    "cache_read_input_tokens": 4,
                    "output_tokens": 1,
                }
            },
        },
    )
    await state.write_anthropic_delta(
        downstream,
        {
            "type": "message_delta",
            "delta": {"stop_reason": "end_turn"},
            "usage": {"output_tokens": 3},
        },
    )
    await state.finish(downstream)

    events = _sse_events(downstream.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    assert completed["response"]["usage"] == {
        "input_tokens": 5,
        "output_tokens": 3,
        "total_tokens": 8,
        "input_tokens_details": {
            "cached_tokens": 4,
            "cache_read_input_tokens": 4,
        },
    }


async def test_response_stream_state_emits_reasoning_text_and_tool_items():
    downstream = _FakeStreamResponse()
    state = ResponsesStreamState("real-openai")

    await state.start(downstream)
    await state.write_chat_delta(downstream, {"choices": [{"delta": {"reasoning_content": "think"}}]})
    await state.write_chat_delta(downstream, {"choices": [{"delta": {"content": "hello"}}]})
    await state.write_chat_delta(
        downstream,
        {
            "choices": [
                {
                    "delta": {
                        "tool_calls": [
                            {
                                "index": 0,
                                "id": "call_weather",
                                "function": {"name": "weather", "arguments": '{"city":'},
                            }
                        ]
                    }
                }
            ]
        },
    )
    await state.write_chat_delta(
        downstream,
        {"choices": [{"delta": {"tool_calls": [{"index": 0, "function": {"arguments": '"Paris"}'}}]}}]},
    )
    final_response = await state.finish(downstream)

    events = _sse_events(downstream.text())
    types = [event.get("type") for event in events]
    assert "response.reasoning_summary_text.delta" in types
    assert "response.output_text.delta" in types
    assert "response.function_call_arguments.delta" in types
    assert types[-1] == "response.completed"
    assert "data: [DONE]" not in downstream.text()
    assert [item["type"] for item in final_response["output"]] == ["reasoning", "message", "function_call"]
    assert final_response["output"][0]["summary"][0]["text"] == "think"
    assert final_response["output"][1]["content"][0]["text"] == "hello"
    assert final_response["output"][2]["arguments"] == '{"city":"Paris"}'


async def test_response_stream_state_accepts_anthropic_deltas():
    downstream = _FakeStreamResponse()
    state = ResponsesStreamState("claude-real")

    await state.start(downstream)
    await state.write_anthropic_delta(
        downstream,
        {
            "type": "content_block_start",
            "index": 0,
            "content_block": {"type": "thinking", "thinking": "plan ", "signature": "sig-"},
        },
    )
    await state.write_anthropic_delta(
        downstream,
        {"type": "content_block_delta", "index": 0, "delta": {"type": "thinking_delta", "thinking": "more"}},
    )
    await state.write_anthropic_delta(
        downstream,
        {"type": "content_block_delta", "index": 0, "delta": {"type": "signature_delta", "signature": "tail"}},
    )
    await state.write_anthropic_delta(downstream, {"type": "content_block_stop", "index": 0})
    await state.write_anthropic_delta(
        downstream,
        {"type": "content_block_start", "index": 1, "content_block": {"type": "text", "text": "hello"}},
    )
    await state.write_anthropic_delta(
        downstream,
        {"type": "content_block_delta", "index": 1, "delta": {"type": "text_delta", "text": " there"}},
    )
    await state.write_anthropic_delta(
        downstream,
        {
            "type": "content_block_start",
            "index": 2,
            "content_block": {"type": "tool_use", "id": "toolu_1", "name": "lookup", "input": {}},
        },
    )
    await state.write_anthropic_delta(
        downstream,
        {"type": "content_block_delta", "index": 2, "delta": {"type": "input_json_delta", "partial_json": '{"q":"x"}'}},
    )
    await state.write_anthropic_delta(downstream, {"type": "content_block_stop", "index": 2})
    await state.write_anthropic_delta(
        downstream,
        {"type": "message_delta", "usage": {"input_tokens": 3, "output_tokens": 4}},
    )
    final_response = await state.finish(downstream)

    events = _sse_events(downstream.text())
    assert [item["type"] for item in final_response["output"]] == ["reasoning", "message", "function_call"]
    assert final_response["output"][0]["summary"][0]["text"] == "plan more"
    assert final_response["output"][0]["encrypted_content"].startswith("anthropic-thinking-v1:")
    assert final_response["output"][1]["content"][0]["text"] == "hello there"
    assert final_response["output"][2]["arguments"] == '{"q":"x"}'
    assert final_response["usage"] == {"input_tokens": 3, "output_tokens": 4, "total_tokens": 7}
    assert any(event.get("type") == "response.reasoning_summary_text.done" for event in events)
    assert any(event.get("type") == "response.output_item.done" for event in events)


async def test_responses_compact_routes_to_openai_chat_and_returns_compacted_window(tmp_path):
    captured = {}

    async def chat(request):
        captured["body"] = await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_compact",
                "choices": [{"message": {"role": "assistant", "content": "Task: keep implementing compact support."}}],
                "usage": {"prompt_tokens": 9, "completion_tokens": 2, "total_tokens": 11},
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses/compact",
        json={
            "model": "real-openai",
            "input": [
                {"role": "user", "content": "implement compact"},
                {"type": "function_call_output", "call_id": "call_1", "output": "tests pass"},
            ],
            "service_tier": "priority",
            "stream": True,
        },
    )
    assert resp.status == 200
    payload = await resp.json()
    assert payload["status"] == "completed"
    assert payload["model"] == "real-openai"
    assert payload["output"][0]["type"] == "context_compaction"
    assert payload["output"][0]["summary"][0]["text"] == "Task: keep implementing compact support."
    assert payload["usage"] == {"input_tokens": 9, "output_tokens": 2, "total_tokens": 11}
    assert captured["body"]["model"] == "real-openai"
    assert captured["body"]["stream"] is False
    assert "service_tier" not in captured["body"]
    assert "LAST_USER_INTENT" in captured["body"]["messages"][0]["content"]
    assert "implement compact" in captured["body"]["messages"][0]["content"]

    await shim_client.close()
    await upstream_client.close()


async def test_responses_compact_augments_bad_upstream_summary(tmp_path):
    async def chat(request):
        return web.json_response(
            {
                "id": "chatcmpl_compact_bad",
                "choices": [{"message": {"role": "assistant", "content": "Unrelated generic summary."}}],
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses/compact",
        json={
            "model": "real-openai",
            "input": [{"role": "user", "content": "implement compact support now"}],
        },
    )
    assert resp.status == 200
    payload = await resp.json()
    summary = payload["output"][0]["summary"][0]["text"]
    assert "[shim-compact-warning: projection_unverified]" in summary
    assert "implement compact support now" in summary

    await shim_client.close()
    await upstream_client.close()


async def test_responses_compact_appends_postcompact_capture(tmp_path, monkeypatch):
    capture_path = tmp_path / "postcompact-captures.jsonl"
    monkeypatch.setattr("codex_shim.sessions.compact.POSTCOMPACT_CAPTURE_PATH", capture_path)

    async def chat(request):
        return web.json_response(
            {
                "id": "chatcmpl_compact_capture",
                "choices": [{"message": {"role": "assistant", "content": "Unrelated generic summary."}}],
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses/compact",
        json={
            "model": "real-openai",
            "input": [{"role": "user", "content": "capture compaction audit"}],
        },
    )
    assert resp.status == 200
    lines = capture_path.read_text(encoding="utf-8").splitlines()
    assert len(lines) == 1
    record = json.loads(lines[0])
    assert record["model"] == "real-openai"
    assert record["summary_status"] == "projection_unverified"
    assert record["augmented"] is True
    assert record["last_user_intent"] == "capture compaction audit"
    assert record["summary_hash"]
    assert record["summary_excerpt"]

    await shim_client.close()
    await upstream_client.close()


async def test_responses_compact_includes_git_status_when_workspace_present(tmp_path, monkeypatch):
    async def chat(request):
        captured["body"] = await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_compact_git",
                "choices": [{"message": {"role": "assistant", "content": "LAST_USER_INTENT: ship"}}],
            }
        )

    captured: dict[str, Any] = {}

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    monkeypatch.setattr(
        "codex_shim.sessions.service.git_status_short",
        lambda workspace: " M compact.py",
    )

    resp = await shim_client.post(
        "/v1/responses/compact",
        json={
            "model": "real-openai",
            "metadata": {"cwd": str(tmp_path)},
            "input": [{"role": "user", "content": "ship compaction"}],
        },
    )
    assert resp.status == 200
    assert "GIT_STATUS:  M compact.py" in captured["body"]["messages"][0]["content"]

    await shim_client.close()
    await upstream_client.close()


async def test_responses_compact_expands_previous_response_id(tmp_path):
    captured = {}

    async def chat(request):
        captured["body"] = await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_compact_prev",
                "choices": [{"message": {"role": "assistant", "content": "Compacted prior shell work."}}],
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim = ShimServer(settings)
    shim_client = TestClient(TestServer(shim.app()))
    await shim_client.start_server()

    first = await shim_client.post(
        "/v1/responses",
        json={
            "model": "real-openai",
            "input": [
                {"type": "local_shell_call", "call_id": "call_shell", "action": {"command": "pwd"}},
                {"type": "function_call_output", "call_id": "call_shell", "output": "/tmp"},
            ],
            "stream": False,
        },
        headers={"session_id": "compact-session"},
    )
    first_payload = await first.json()
    resp = await shim_client.post(
        "/v1/responses/compact",
        json={
            "model": "real-openai",
            "previous_response_id": first_payload["id"],
            "input": [{"type": "compaction_trigger"}],
            "stream": False,
        },
        headers={"session_id": "compact-session"},
    )
    assert resp.status == 200
    payload = await resp.json()
    assert payload["output"][-1]["type"] == "context_compaction"
    assert payload["output"][0]["type"] == "compaction_trigger"
    messages = captured["body"]["messages"]
    assert any("local_shell" in str(message) for message in messages)

    await shim_client.close()
    await upstream_client.close()


async def test_byok_compact_upstream_502_returns_normalized_error(tmp_path):
    async def chat(request):
        return web.Response(text="bad gateway", status=502)

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses/compact",
        json={"model": "real-openai", "input": [{"type": "compaction_trigger"}]},
    )
    assert resp.status == 502
    payload = await resp.json()
    assert payload == {"error": {"type": "upstream_error", "message": "bad gateway"}}

    await shim_client.close()
    await upstream_client.close()


async def test_byok_compact_upstream_500_returns_normalized_error(tmp_path):
    async def chat(request):
        return web.Response(text="", status=500)

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses/compact",
        json={"model": "real-openai", "input": [{"type": "compaction_trigger"}]},
    )
    assert resp.status == 500
    payload = await resp.json()
    assert payload == {"error": {"type": "upstream_error", "message": "Upstream request failed with status 500"}}

    await shim_client.close()
    await upstream_client.close()


async def test_responses_compact_chatgpt_passthrough_uses_compact_endpoint(monkeypatch, tmp_path, auth_present):
    captured = {}

    class FakeUpstream:
        status = 200
        content_type = "application/json"
        headers = {"Content-Type": "application/json"}

        async def json(self, content_type=None):
            return {"id": "resp_compact", "model": "gpt-5.5", "output": [{"type": "message", "model": "gpt-5.5"}]}

        def release(self):
            pass

    async def fake_post(self, url, json=None, headers=None):
        captured["url"] = url
        captured["body"] = json
        captured["headers"] = headers
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses/compact", json={"model": "openai-gpt-5-5-codex-max", "input": "hi", "stream": True})
    assert resp.status == 200
    payload = await resp.json()
    assert payload["model"] == "openai-gpt-5-5-codex-max"
    assert payload["output"][0]["model"] == "openai-gpt-5-5-codex-max"
    assert captured["url"] == "https://chatgpt.com/backend-api/codex/responses/compact"
    assert captured["body"]["model"] == "gpt-5.5"
    assert "stream" not in captured["body"]
    assert captured["headers"]["Accept"] == "application/json"

    await shim_client.close()


async def test_health_and_models_include_chatgpt_passthrough_when_auth_present(tmp_path, auth_present):
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    health = await shim_client.get("/health")
    assert health.status == 200
    body = await health.json()
    assert body["models"] == 1
    assert body["chatgpt_passthrough"] is True

    models = await shim_client.get("/v1/models")
    assert models.status == 200
    payload = await models.json()
    assert [model["id"] for model in payload["data"]] == ["gpt-5.5"]

    await shim_client.close()


async def test_health_and_models_hide_chatgpt_passthrough_when_auth_missing(tmp_path, auth_missing):
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    health = await shim_client.get("/health")
    body = await health.json()
    assert body["models"] == 0
    assert body["chatgpt_passthrough"] is False

    models = await shim_client.get("/v1/models")
    payload = await models.json()
    assert payload["data"] == []

    await shim_client.close()


async def test_hidden_unconfigured_models_do_not_route_or_list(tmp_path, auth_missing):
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {"id": "hidden-zai", "model": "glm-5.2", "display_name": "Hidden Z.AI", "provider": "zai", "api_key_env": "ZAI_API_KEY"},
                    {"id": "visible-openai", "model": "visible-openai", "display_name": "Visible", "provider": "openai", "base_url": "http://example.invalid/v1"},
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        models = await shim_client.get("/v1/models")
        payload = await models.json()
        assert [model["id"] for model in payload["data"]] == ["visible-openai"]

        api_models = await shim_client.get("/api/models?include_unavailable=1")
        api_payload = await api_models.json()
        hidden = [model for model in api_payload if model["slug"] == "hidden-zai"][0]
        assert hidden["visible"] is False
        assert hidden["unavailable_reason"] == "missing API key from ZAI_API_KEY"

        resp = await shim_client.post("/v1/responses", json={"model": "hidden-zai", "input": "hi"})
        assert resp.status == 404
    finally:
        await shim_client.close()


async def test_zai_provider_posts_to_v4_chat_completions_without_v1_injection(tmp_path, auth_missing):
    captured = {}

    async def chat(request):
        captured["path"] = request.path
        captured["headers"] = dict(request.headers)
        captured["body"] = await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_zai",
                "choices": [{"message": {"role": "assistant", "content": "zai hello"}}],
                "usage": {"total_tokens": 3},
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/api/paas/v4/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "zai",
                        "model": "glm-5.2",
                        "display_name": "Z.AI GLM-5.2",
                        "provider": "zai",
                        "base_url": str(upstream_client.make_url("/api/paas/v4")),
                        "api_key": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.post("/v1/responses", json={"model": "zai", "input": "hi"})
        assert resp.status == 200
        payload = await resp.json()
        assert payload["output"][0]["content"][0]["text"] == "zai hello"
        assert captured["path"] == "/api/paas/v4/chat/completions"
        assert captured["body"]["model"] == "glm-5.2"
        assert captured["headers"]["Authorization"] == "Bearer secret"
    finally:
        await shim_client.close()
        await upstream_client.close()


async def test_nvidia_nim_provider_uses_openai_v1_chat_completions(tmp_path, auth_missing):
    captured = {}

    async def chat(request):
        captured["path"] = request.path
        captured["body"] = await request.json()
        return web.json_response({"id": "chatcmpl_nim", "choices": [{"message": {"role": "assistant", "content": "nim hello"}}]})

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "id": "nim",
                        "model": "z-ai/glm-5.2",
                        "display_name": "NIM GLM",
                        "provider": "nvidia-nim",
                        "base_url": str(upstream_client.make_url("/v1")),
                        "api_key": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.post("/v1/responses", json={"model": "nim", "input": "hi"})
        assert resp.status == 200
        assert captured["path"] == "/v1/chat/completions"
        assert captured["body"]["model"] == "z-ai/glm-5.2"
    finally:
        await shim_client.close()
        await upstream_client.close()


async def test_chat_routes_to_openai_normalizes_developer_role(tmp_path):
    captured = {}

    async def chat(request):
        captured["body"] = await request.json()
        return web.json_response({"id": "chatcmpl_fake", "choices": [{"message": {"role": "assistant", "content": "ok"}}]})

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "deepseek-reasoner",
                        "displayName": "DeepSeek Reasoner",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/chat/completions",
        json={"model": "deepseek-reasoner", "messages": [{"role": "developer", "content": "rules"}, {"role": "user", "content": "hi"}]},
    )
    assert resp.status == 200
    assert [message["role"] for message in captured["body"]["messages"]] == ["system", "user"]

    await shim_client.close()
    await upstream_client.close()


async def test_chat_routes_to_anthropic(tmp_path):
    captured = {}

    async def messages(request):
        captured["headers"] = dict(request.headers)
        captured["body"] = await request.json()
        return web.json_response({"id": "msg_fake", "content": [{"type": "text", "text": "anthropic hello"}], "stop_reason": "end_turn"})

    upstream = web.Application()
    upstream.router.add_post("/v1/messages", messages)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "claude-real",
                        "displayName": "Claude Real",
                        "provider": "anthropic",
                        "baseUrl": str(upstream_client.make_url("")),
                        "apiKey": "secret",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/chat/completions", json={"model": "claude-real", "messages": [{"role": "user", "content": "hi"}]})
    assert resp.status == 200
    payload = await resp.json()
    assert payload["choices"][0]["message"]["content"] == "anthropic hello"
    assert captured["body"]["model"] == "claude-real"
    assert captured["headers"]["x-api-key"] == "secret"
    assert "Authorization" not in captured["headers"]

    await shim_client.close()
    await upstream_client.close()


def _picker_settings_file(tmp_path):
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "kimi-k26",
                        "displayName": "Kimi K2.6",
                        "provider": "openai",
                        "baseUrl": "http://example.invalid/v1",
                        "apiKey": "k",
                    },
                    {
                        "model": "deepseek-v4-pro",
                        "displayName": "DeepSeek V4 Pro",
                        "provider": "openai",
                        "baseUrl": "http://example.invalid/v1",
                        "apiKey": "k",
                    },
                ]
            }
        )
    )
    return settings


def _stub_codex_config(monkeypatch, tmp_path, *, model: str = "kimi-k26") -> "Path":
    config = tmp_path / "config.toml"
    config.write_text(
        f'model = "{model}"\n'
        'model_provider = "codex_shim"\n'
        '\n'
        '[model_providers.codex_shim]\n'
        'name = "Codex Shim"\n'
        'base_url = "http://127.0.0.1:8765/v1"\n'
        'wire_api = "responses"\n'
    )
    monkeypatch.setattr(picker_module, "CODEX_CONFIG_PATH", config)
    return config


def _picker_headers(shim: ShimServer) -> dict[str, str]:
    return {PICKER_TOKEN_HEADER: shim.picker_token}


def test_picker_html_renders_self_contained_page():
    html = _picker_html("test-token")
    assert html.startswith("<!DOCTYPE html>")
    assert "/api/models" in html
    assert "/api/switch" in html
    assert "test-token" in html


def test_current_managed_model_reads_top_level_model(monkeypatch, tmp_path):
    _stub_codex_config(monkeypatch, tmp_path, model="deepseek-v4-pro")
    assert _current_managed_model() == "deepseek-v4-pro"


def test_current_managed_model_returns_none_when_config_missing(monkeypatch, tmp_path):
    monkeypatch.setattr(picker_module, "CODEX_CONFIG_PATH", tmp_path / "nope.toml")
    assert _current_managed_model() is None


def test_set_active_model_rewrites_model_and_provider_name(monkeypatch, tmp_path):
    config = _stub_codex_config(monkeypatch, tmp_path)
    _set_active_model("deepseek-v4-pro", "DeepSeek V4 Pro")
    text = config.read_text()
    assert 'model = "deepseek-v4-pro"' in text
    assert 'name = "DeepSeek V4 Pro"' in text


def test_set_active_model_no_op_when_config_missing(monkeypatch, tmp_path):
    monkeypatch.setattr(picker_module, "CODEX_CONFIG_PATH", tmp_path / "nope.toml")
    # Should not raise.
    _set_active_model("anything", "Anything")


async def test_picker_page_served_at_picker(tmp_path, auth_missing):
    settings = _picker_settings_file(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.get("/picker")
        assert resp.status == 200
        text = await resp.text()
        assert "/api/models" in text
    finally:
        await shim_client.close()


async def test_api_models_lists_configured_models_with_active_flag(
    monkeypatch, tmp_path, auth_missing
):
    settings = _picker_settings_file(tmp_path)
    _stub_codex_config(monkeypatch, tmp_path, model="deepseek-v4-pro")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.get("/api/models")
        assert resp.status == 200
        data = await resp.json()
        slugs = [m["slug"] for m in data]
        assert slugs == ["kimi-k26", "deepseek-v4-pro"]
        active = {m["slug"]: m["active"] for m in data}
        assert active == {"kimi-k26": False, "deepseek-v4-pro": True}
    finally:
        await shim_client.close()


async def test_api_models_includes_chatgpt_when_auth_present(
    monkeypatch, tmp_path, auth_present
):
    settings = _picker_settings_file(tmp_path)
    _stub_codex_config(monkeypatch, tmp_path, model="gpt-5.5")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.get("/api/models")
        data = await resp.json()
        slugs = [m["slug"] for m in data]
        assert slugs[0] == "gpt-5.5"
        assert data[0]["active"] is True
    finally:
        await shim_client.close()


async def test_switch_model_rewrites_config_without_restart(
    monkeypatch, tmp_path, auth_missing
):
    settings = _picker_settings_file(tmp_path)
    config = _stub_codex_config(monkeypatch, tmp_path, model="kimi-k2.6")
    restart_calls = []
    monkeypatch.setattr("codex_shim.clientconfig.picker.restart_codex_app", lambda: restart_calls.append(True))

    shim = ShimServer(settings)
    shim_client = TestClient(TestServer(shim.app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.post(
            "/api/switch",
            json={"slug": "deepseek-v4-pro", "restart_codex": False},
            headers=_picker_headers(shim),
        )
        assert resp.status == 200
        payload = await resp.json()
        assert payload == {"ok": True, "model": "deepseek-v4-pro", "restarted": False}
        text = config.read_text()
        assert 'model = "deepseek-v4-pro"' in text
        assert 'name = "DeepSeek V4 Pro"' in text
        assert restart_calls == []
    finally:
        await shim_client.close()


async def test_switch_model_triggers_restart_when_requested(
    monkeypatch, tmp_path, auth_missing
):
    settings = _picker_settings_file(tmp_path)
    _stub_codex_config(monkeypatch, tmp_path, model="kimi-k2.6")
    restart_calls = []
    monkeypatch.setattr("codex_shim.clientconfig.picker.restart_codex_app", lambda: restart_calls.append(True))

    shim = ShimServer(settings)
    shim_client = TestClient(TestServer(shim.app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.post(
            "/api/switch",
            json={"slug": "deepseek-v4-pro", "restart_codex": True},
            headers=_picker_headers(shim),
        )
        assert resp.status == 200
        payload = await resp.json()
        assert payload["restarted"] is True
        assert restart_calls == [True]
    finally:
        await shim_client.close()


async def test_switch_model_rejects_missing_picker_token(monkeypatch, tmp_path, auth_missing):
    settings = _picker_settings_file(tmp_path)
    config = _stub_codex_config(monkeypatch, tmp_path, model="kimi-k2.6")
    restart_calls = []
    monkeypatch.setattr("codex_shim.clientconfig.picker.restart_codex_app", lambda: restart_calls.append(True))

    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.post(
            "/api/switch",
            json={"slug": "deepseek-v4-pro", "restart_codex": True},
        )
        assert resp.status == 403
        assert await resp.json() == {"error": "forbidden"}
        assert 'model = "kimi-k2.6"' in config.read_text()
        assert restart_calls == []
    finally:
        await shim_client.close()


async def test_switch_model_rejects_bad_picker_token(monkeypatch, tmp_path, auth_missing):
    settings = _picker_settings_file(tmp_path)
    config = _stub_codex_config(monkeypatch, tmp_path, model="kimi-k2.6")
    restart_calls = []
    monkeypatch.setattr("codex_shim.clientconfig.picker.restart_codex_app", lambda: restart_calls.append(True))

    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.post(
            "/api/switch",
            json={"slug": "deepseek-v4-pro", "restart_codex": True},
            headers={PICKER_TOKEN_HEADER: "wrong"},
        )
        assert resp.status == 403
        assert await resp.json() == {"error": "forbidden"}
        assert 'model = "kimi-k2.6"' in config.read_text()
        assert restart_calls == []
    finally:
        await shim_client.close()


async def test_switch_model_rejects_unknown_slug(monkeypatch, tmp_path, auth_missing):
    settings = _picker_settings_file(tmp_path)
    _stub_codex_config(monkeypatch, tmp_path)
    shim = ShimServer(settings)
    shim_client = TestClient(TestServer(shim.app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.post("/api/switch", json={"slug": "nope"}, headers=_picker_headers(shim))
        assert resp.status == 404
    finally:
        await shim_client.close()


async def test_switch_model_requires_slug(tmp_path, auth_missing):
    settings = _picker_settings_file(tmp_path)
    shim = ShimServer(settings)
    shim_client = TestClient(TestServer(shim.app()))
    await shim_client.start_server()
    try:
        resp = await shim_client.post("/api/switch", json={}, headers=_picker_headers(shim))
        assert resp.status == 400
    finally:
        await shim_client.close()


def test_merge_codex_forward_headers_allowlists_trace_metadata():
    class FakeRequest:
        headers = {
            "Authorization": "Bearer client",
            "session_id": "sess_1",
            "x-codex-installation-id": "install_1",
            "x-codex-window-id": "win_1",
            "x-codex-parent-thread-id": "thread_parent",
            "x-client-request-id": "client_req_1",
            "x-oai-attestation": "attest_stub",
            "x-openai-subagent": "subagent_1",
            "x-responsesapi-include-timing-metrics": "1",
            "traceparent": "00-abc-def-01",
            "x-request-id": "req_1",
            "cf-ray": "ray_stub",
        }

    forwarded = _merge_codex_forward_headers(FakeRequest())  # type: ignore[arg-type]
    assert forwarded["session_id"] == "sess_1"
    assert forwarded["x-codex-installation-id"] == "install_1"
    assert forwarded["x-codex-window-id"] == "win_1"
    assert forwarded["x-codex-parent-thread-id"] == "thread_parent"
    assert forwarded["x-client-request-id"] == "client_req_1"
    assert forwarded["x-oai-attestation"] == "attest_stub"
    assert forwarded["x-openai-subagent"] == "subagent_1"
    assert forwarded["x-responsesapi-include-timing-metrics"] == "1"
    assert forwarded["traceparent"] == "00-abc-def-01"
    assert forwarded["x-request-id"] == "req_1"
    assert forwarded["cf-ray"] == "ray_stub"
    assert "Authorization" not in forwarded


def test_metadata_as_forward_headers_maps_body_trace_ids():
    headers = _metadata_as_forward_headers({"metadata": {"trace_id": "trace_body", "request_id": "req_body"}})
    assert headers["x-trace-id"] == "trace_body"
    assert headers["x-request-id"] == "req_body"


def test_passthrough_forward_headers_prefers_request_headers_over_body_metadata():
    class FakeRequest:
        headers = {"x-trace-id": "trace_header", "x-codex-window-id": "win_1"}

    merged = _passthrough_forward_headers(
        FakeRequest(),  # type: ignore[arg-type]
        {"metadata": {"trace_id": "trace_body", "request_id": "req_body"}},
    )
    assert merged["x-trace-id"] == "trace_header"
    assert merged["x-request-id"] == "req_body"
    assert merged["x-codex-window-id"] == "win_1"


async def test_chatgpt_passthrough_forwards_codex_and_metadata_headers(monkeypatch, tmp_path, auth_present):
    captured = {}

    class FakeUpstream:
        status = 200
        content_type = "application/json"
        headers = {"Content-Type": "application/json"}

        async def json(self, content_type=None):
            return {"id": "resp_headers", "model": "gpt-5.5", "output": []}

        def release(self):
            pass

    async def fake_post(self, url, json=None, headers=None):
        captured["headers"] = headers
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "gpt-5.5",
            "input": "hello",
            "metadata": {"trace_id": "trace_meta", "request_id": "req_meta"},
        },
        headers={
            "x-codex-installation-id": "install_1",
            "session_id": "sess_client",
        },
    )
    assert resp.status == 200
    forwarded = captured["headers"]
    assert forwarded["x-codex-installation-id"] == "install_1"
    assert forwarded["session_id"] == "sess_client"
    assert forwarded["x-trace-id"] == "trace_meta"
    assert forwarded["x-request-id"] == "req_meta"
    assert forwarded["Authorization"] == "Bearer stub"
    assert "host" not in {key.lower() for key in forwarded}

    await shim_client.close()


async def test_chatgpt_passthrough_compact_returns_native_shape(monkeypatch, tmp_path, auth_present):
    fixture = json.loads(
        (Path(__file__).parent / "fixtures" / "desktop" / "passthrough_compact.json").read_text()
    )

    class FakeUpstream:
        status = 200
        content_type = "application/json"
        headers = {"Content-Type": "application/json"}

        async def json(self, content_type=None):
            return {"id": "resp_compact_native", "model": "gpt-5.5", **fixture}

        def release(self):
            pass

    async def fake_post(self, url, json=None, headers=None):
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses/compact",
        json={"model": "gpt-5.5", "input": "compact me"},
        headers={"x-codex-window-id": "win_compact", "session_id": "sess_compact"},
    )
    assert resp.status == 200
    payload = await resp.json()
    assert payload["output"][0]["type"] == "context_compaction"
    assert payload["model"] == "gpt-5.5"

    await shim_client.close()


async def test_chatgpt_passthrough_compact_forwards_headers(monkeypatch, tmp_path, auth_present):
    captured = {}

    class FakeUpstream:
        status = 200
        content_type = "application/json"
        headers = {"Content-Type": "application/json"}

        async def json(self, content_type=None):
            return {
                "id": "resp_compact_hdr",
                "model": "gpt-5.5",
                "status": "completed",
                "output": [{"type": "context_compaction", "summary": [{"type": "summary_text", "text": "ok"}]}],
            }

        def release(self):
            pass

    async def fake_post(self, url, json=None, headers=None):
        captured["headers"] = headers
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses/compact",
        json={"model": "gpt-5.5", "input": "hi", "metadata": {"trace_id": "compact_trace"}},
        headers={"x-client-request-id": "client_req_compact"},
    )
    assert resp.status == 200
    assert captured["headers"]["x-client-request-id"] == "client_req_compact"
    assert captured["headers"]["x-trace-id"] == "compact_trace"

    await shim_client.close()


async def test_chatgpt_passthrough_streaming_forwards_raw_sse(monkeypatch, tmp_path, auth_present):
    """Tier A HTTP streaming forwards upstream SSE bytes unchanged (no parse/re-emit)."""
    captured = {}

    class FakeUpstream:
        status = 200
        headers = {"Content-Type": "text/event-stream"}

        def __init__(self):
            self.content = _FakeStreamContent(
                [
                    b'data: {"type":"response.completed","response":{"id":"resp_stream","status":"completed","output":[]}}\n\n',
                    b"data: [DONE]\n\n",
                ]
            )

        def release(self):
            pass

    class _FakeStreamContent:
        def __init__(self, chunks: list[bytes]):
            self._chunks = chunks

        def iter_chunked(self, _size: int):
            async def _gen():
                for chunk in self._chunks:
                    yield chunk

            return _gen()

    async def fake_post(self, url, json=None, headers=None):
        captured["stream"] = json.get("stream")
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "gpt-5.5", "input": "hi", "stream": True})
    assert resp.status == 200
    assert captured["stream"] is True
    text = await resp.text()
    assert "response.completed" in text

    await shim_client.close()


@pytest.mark.asyncio
async def test_chatgpt_passthrough_websocket_streaming_parses_sse(monkeypatch, tmp_path, auth_present):
    """Tier A WebSocket streaming parses upstream SSE and emits JSON event frames."""
    captured = {}

    class FakeUpstream:
        status = 200
        headers = {"Content-Type": "text/event-stream"}

        def __init__(self):
            self.content = _FakeStreamContent(
                [
                    b'data: {"type":"response.completed","response":{"id":"resp_ws_stream","status":"completed","output":[{"type":"message","role":"assistant","content":[{"type":"output_text","text":"ws stream ok"}]}]}}\n\n',
                    b"data: [DONE]\n\n",
                ]
            )

        def release(self):
            pass

    class _FakeStreamContent:
        def __init__(self, chunks: list[bytes]):
            self._chunks = chunks

        def iter_chunked(self, _size: int):
            async def _gen():
                for chunk in self._chunks:
                    yield chunk

            return _gen()

    async def fake_post(self, url, json=None, headers=None):
        captured["stream"] = json.get("stream")
        return FakeUpstream()

    monkeypatch.setattr("codex_shim.server.ClientSession.post", fake_post)
    settings = tmp_path / "settings.json"
    settings.write_text(json.dumps({"customModels": []}))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    try:
        ws = await shim_client.ws_connect("/v1/responses")
        await ws.send_json({"model": "gpt-5.5", "input": "hi", "stream": True})
        frames = []
        while True:
            msg = await ws.receive()
            if msg.type.name == "CLOSE":
                break
            if msg.type.name == "TEXT":
                frames.append(json.loads(msg.data))
        assert captured["stream"] is True
        completed = [frame for frame in frames if frame.get("type") == "response.completed"]
        assert completed
        assert completed[-1]["response"]["id"] == "resp_ws_stream"
    finally:
        await shim_client.close()


@pytest.mark.asyncio
async def test_streaming_web_search_emits_action_type(tmp_path):
    async def chat(request):
        await request.json()
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"id":"call_search","type":"function","function":{"name":"web_search","arguments":""}}]}}]}\n\n'
        )
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"function":{"arguments":"{\\"query\\":\\"codex shim\\"}"}}]}}]}\n\n'
        )
        await response.write(b"data: [DONE]\n\n")
        await response.write_eof()
        return response

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "input": "search", "stream": True},
    )
    assert resp.status == 200
    completed = [event for event in _sse_events(await resp.text()) if event.get("type") == "response.completed"][-1]
    web_items = [item for item in completed["response"]["output"] if item.get("type") == "web_search_call"]
    assert web_items
    assert web_items[0]["action"] == {"type": "search", "query": "codex shim"}

    await shim_client.close()
    await upstream_client.close()


@pytest.mark.asyncio
async def test_streaming_mcp_tool_preserves_native_item_type(tmp_path):
    async def chat(request):
        await request.json()
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"id":"call_mcp","type":"function","function":{"name":"list_files","arguments":"{}"}}]}}]}\n\n'
        )
        await response.write(b"data: [DONE]\n\n")
        await response.write_eof()
        return response

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "real-openai",
            "input": "list files",
            "stream": True,
            "tools": [{"type": "mcp", "name": "list_files"}],
        },
    )
    assert resp.status == 200
    completed = [event for event in _sse_events(await resp.text()) if event.get("type") == "response.completed"][-1]
    mcp_items = [item for item in completed["response"]["output"] if item.get("type") == "mcp_tool_call"]
    assert mcp_items
    assert mcp_items[0]["tool_name"] == "list_files"

    await shim_client.close()
    await upstream_client.close()


@pytest.mark.asyncio
async def test_byok_upstream_error_is_normalized(tmp_path):
    async def chat(request):
        return web.json_response(
            {"error": {"type": "rate_limit_error", "message": "Too many requests"}},
            status=429,
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "hi", "stream": False})
    assert resp.status == 429
    payload = await resp.json()
    assert payload == {"error": {"type": "rate_limit_error", "message": "Too many requests"}}

    await shim_client.close()
    await upstream_client.close()


async def test_byok_upstream_error_preserves_code_and_param(tmp_path):
    async def chat(request):
        return web.json_response(
            {
                "error": {
                    "type": "invalid_request_error",
                    "message": "Invalid model",
                    "code": "model_not_found",
                    "param": "model",
                }
            },
            status=400,
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "hi", "stream": False})
    assert resp.status == 400
    payload = await resp.json()
    err = payload["error"]
    assert err["type"] == "invalid_request_error"
    assert err["message"] == "Invalid model"
    assert err["code"] == "model_not_found"
    assert err["param"] == "model"

    await shim_client.close()
    await upstream_client.close()


def test_streaming_tool_open_item_seeds_web_search_action_type():
    item = streaming_tool_open_item("web_search_call", call_id="call_search", name="web_search")
    assert item["action"] == {"type": "search"}


def test_responses_stream_state_emits_native_local_shell_item():
    state = ResponsesStreamState("slug")
    tool_state = {
        "id": "call_shell",
        "call_id": "call_shell",
        "name": "local_shell",
        "arguments": '{"command":"pwd"}',
        "output_index": 0,
        "closed": False,
        "native_type": "local_shell_call",
    }
    item = state._tool_item(tool_state, "completed")
    assert item["type"] == "local_shell_call"
    assert item["action"]["command"] == "pwd"


def test_responses_stream_state_reasoning_without_signature_is_summary_only():
    state = ResponsesStreamState("slug")
    reasoning_state = {
        "id": "rs_1",
        "output_index": 0,
        "text": "plan only",
        "signature": "",
        "redacted": False,
        "redacted_data": "",
        "closed": True,
    }
    item = state._reasoning_item(reasoning_state, "completed")
    assert item["summary"] == [{"type": "summary_text", "text": "plan only"}]
    assert item["encrypted_content"] is None


def test_responses_stream_state_emits_native_image_generation_item():
    state = ResponsesStreamState("slug")
    tool_state = {
        "id": "call_img",
        "call_id": "call_img",
        "name": "image_generation",
        "arguments": '{"prompt":"neon fox"}',
        "output_index": 0,
        "closed": False,
        "native_type": "image_generation_call",
    }
    item = state._tool_item(tool_state, "completed")
    assert item["type"] == "image_generation_call"
    assert item["action"]["prompt"] == "neon fox"


# --- BYOK error relay expansion (audit F-005 regression guard) ---


@pytest.mark.asyncio
async def test_byok_upstream_500_empty_body_wraps_in_error_envelope(tmp_path):
    async def chat(request):
        return web.Response(text="", status=500)

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "hi", "stream": False})
    assert resp.status == 500
    payload = await resp.json()
    assert payload == {"error": {"type": "upstream_error", "message": "Upstream request failed with status 500"}}

    await shim_client.close()
    await upstream_client.close()


@pytest.mark.asyncio
async def test_byok_upstream_502_plain_text_wraps_in_error_envelope(tmp_path):
    async def chat(request):
        return web.Response(text="bad gateway", status=502)

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "hi", "stream": False})
    assert resp.status == 502
    payload = await resp.json()
    assert payload == {"error": {"type": "upstream_error", "message": "bad gateway"}}

    await shim_client.close()
    await upstream_client.close()


@pytest.mark.asyncio
async def test_byok_upstream_400_preserves_nested_error_type(tmp_path):
    async def chat(request):
        return web.json_response(
            {"error": {"type": "context_length_exceeded", "message": "too many tokens"}},
            status=400,
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "hi", "stream": False})
    assert resp.status == 400
    payload = await resp.json()
    assert payload["error"]["type"] == "context_length_exceeded"
    assert payload["error"]["message"] == "too many tokens"

    await shim_client.close()
    await upstream_client.close()


@pytest.mark.asyncio
async def test_byok_anthropic_upstream_529_normalizes_to_error_envelope(tmp_path):
    async def messages(request):
        return web.json_response(
            {"type": "error", "error": {"type": "overloaded_error", "message": "Overloaded"}},
            status=529,
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/messages", messages)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-claude",
                        "displayName": "Real Claude",
                        "provider": "anthropic",
                        "apiKey": "stub-test-key-123",
                        "baseUrl": str(upstream_client.make_url("")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "real-claude", "input": "hi", "stream": False})
    assert resp.status == 529
    payload = await resp.json()
    assert "error" in payload
    assert payload["error"]["message"] == "Overloaded"

    await shim_client.close()
    await upstream_client.close()


@pytest.mark.asyncio
async def test_byok_upstream_top_level_error_message_is_normalized(tmp_path):
    async def chat(request):
        return web.json_response({"type": "invalid_request_error", "message": "bad input"}, status=400)

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "real-openai", "input": "hi", "stream": False})
    assert resp.status == 400
    assert await resp.json() == {"error": {"type": "invalid_request_error", "message": "bad input"}}

    await shim_client.close()
    await upstream_client.close()


# --- Streaming hosted-tool end-to-end tests (audit F-004 regression guard) ---


@pytest.mark.asyncio
async def test_streaming_tool_search_emits_native_item(tmp_path):
    async def chat(request):
        await request.json()
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"id":"call_tsearch","type":"function","function":{"name":"tool_search","arguments":""}}]}}]}\n\n'
        )
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"function":{"arguments":"{\\"query\\":\\"grep\\"}"}}]}}]}\n\n'
        )
        await response.write(b"data: [DONE]\n\n")
        await response.write_eof()
        return response

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "input": "search tools", "stream": True},
    )
    assert resp.status == 200
    completed = [event for event in _sse_events(await resp.text()) if event.get("type") == "response.completed"][-1]
    search_items = [item for item in completed["response"]["output"] if item.get("type") == "tool_search_call"]
    assert search_items
    assert search_items[0]["arguments"] == '{"query":"grep"}'

    await shim_client.close()
    await upstream_client.close()


@pytest.mark.asyncio
async def test_streaming_custom_tool_call_emits_native_item(tmp_path):
    async def chat(request):
        await request.json()
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"id":"call_deploy","type":"function","function":{"name":"deploy","arguments":""}}]}}]}\n\n'
        )
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"function":{"arguments":"{\\"env\\":\\"prod\\"}"}}]}}]}\n\n'
        )
        await response.write(b"data: [DONE]\n\n")
        await response.write_eof()
        return response

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "real-openai",
            "input": "deploy",
            "stream": True,
            "tools": [{"type": "custom_tool_call", "name": "deploy"}],
        },
    )
    assert resp.status == 200
    completed = [event for event in _sse_events(await resp.text()) if event.get("type") == "response.completed"][-1]
    custom_items = [item for item in completed["response"]["output"] if item.get("type") == "custom_tool_call"]
    assert custom_items
    assert custom_items[0]["name"] == "deploy"
    assert custom_items[0]["input"] == '{"env":"prod"}'

    await shim_client.close()
    await upstream_client.close()


@pytest.mark.asyncio
async def test_streaming_image_generation_emits_native_item(tmp_path):
    async def chat(request):
        await request.json()
        response = web.StreamResponse(headers={"Content-Type": "text/event-stream"})
        await response.prepare(request)
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"id":"call_img","type":"function","function":{"name":"image_generation","arguments":""}}]}}]}\n\n'
        )
        await response.write(
            b'data: {"choices":[{"delta":{"tool_calls":[{"index":0,"function":{"arguments":"{\\"prompt\\":\\"neon fox\\"}"}}]}}]}\n\n'
        )
        await response.write(b"data: [DONE]\n\n")
        await response.write_eof()
        return response

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "input": "draw a fox", "stream": True},
    )
    assert resp.status == 200
    events = _sse_events(await resp.text())
    open_items = [event for event in events if event.get("type") == "response.output_item.added"]
    img_open = [event for event in open_items if event.get("item", {}).get("type") == "image_generation_call"]
    assert img_open
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    img_items = [item for item in completed["response"]["output"] if item.get("type") == "image_generation_call"]
    assert img_items
    assert img_items[0]["action"]["prompt"] == "neon fox"

    await shim_client.close()
    await upstream_client.close()


@pytest.mark.asyncio
async def test_byok_upstream_401_normalizes_error_envelope(tmp_path):
    async def chat(request):
        return web.json_response({"error": {"type": "invalid_api_key", "message": "Incorrect API key"}}, status=401)

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    secret_key = "stub-secret-key-401"
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": secret_key,
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "input": "hi", "stream": False},
        headers={"Authorization": f"Bearer {secret_key}"},
    )
    assert resp.status == 401
    payload = await resp.json()
    assert payload == {"error": {"type": "invalid_api_key", "message": "Incorrect API key"}}

    await shim_client.close()
    await upstream_client.close()


@pytest.mark.asyncio
async def test_access_log_never_contains_secrets(tmp_path, capsys):
    async def chat(request):
        await request.json()
        return web.json_response(
            {
                "id": "chatcmpl_logged",
                "choices": [{"message": {"role": "assistant", "content": "logged"}}],
            }
        )

    upstream = web.Application()
    upstream.router.add_post("/v1/chat/completions", chat)
    upstream_client = TestClient(TestServer(upstream))
    await upstream_client.start_server()

    secret_key = "stub-secret-access-log-key"
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "model": "real-openai",
                        "displayName": "Real OpenAI",
                        "provider": "openai",
                        "baseUrl": str(upstream_client.make_url("/v1")),
                        "apiKey": secret_key,
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "real-openai", "input": "hi"},
        headers={"Authorization": f"Bearer {secret_key}"},
    )
    assert resp.status == 200

    output = capsys.readouterr().out
    access_line = [line for line in output.splitlines() if line.startswith("[access] ")][-1]
    assert secret_key not in access_line
    assert "Bearer" not in access_line
    record = json.loads(access_line.removeprefix("[access] "))
    assert "authorization" not in record
    assert secret_key not in json.dumps(record)

    await shim_client.close()
    await upstream_client.close()
