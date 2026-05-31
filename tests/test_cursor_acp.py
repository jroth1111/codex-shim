from __future__ import annotations

import asyncio
import json
import os
import sys

from aiohttp.test_utils import TestClient, TestServer

from codex_shim.server import ShimServer
from codex_shim.settings import ModelSettings


FAKE_ACP = r'''
from __future__ import annotations

import json
import os
import sys


def send(message):
    sys.stdout.write(json.dumps(message, separators=(",", ":")) + "\n")
    sys.stdout.flush()


def record(message):
    path = os.environ.get("ACP_CAPTURE")
    if not path:
        return
    with open(path, "a", encoding="utf-8") as handle:
        handle.write(json.dumps(message, separators=(",", ":")) + "\n")


for line in sys.stdin:
    line = line.strip()
    if not line:
        continue
    message = json.loads(line)
    record(message)
    method = message.get("method")
    request_id = message.get("id")
    params = message.get("params") or {}
    if os.environ.get("ACP_PID_FILE"):
        from pathlib import Path

        Path(os.environ["ACP_PID_FILE"]).write_text(str(os.getpid()), encoding="utf-8")
    if method == "initialize":
        send(
            {
                "jsonrpc": "2.0",
                "id": request_id,
                "result": {
                    "protocolVersion": 1,
                    "agentCapabilities": {"promptCapabilities": {"image": False, "audio": False, "embeddedContext": False}},
                    "authMethods": [],
                },
            }
        )
    elif method == "session/new":
        if os.environ.get("ACP_FAIL") == "missing_session":
            send({"jsonrpc": "2.0", "id": request_id, "result": {}})
            continue
        send(
            {
                "jsonrpc": "2.0",
                "id": request_id,
                "result": {
                    "sessionId": "fake-session-1",
                    "modes": {"currentModeId": "agent", "availableModes": [{"id": "agent", "name": "Agent"}]},
                    "models": {"currentModelId": "default[]", "availableModels": [{"modelId": "default[]", "name": "Auto"}]},
                    "configOptions": [],
                },
            }
        )
    elif method == "session/set_mode" and os.environ.get("ACP_FAIL") == "set_mode_error":
        send({"jsonrpc": "2.0", "id": request_id, "error": {"code": -32000, "message": "mode unavailable"}})
    elif method == "session/prompt":
        if os.environ.get("ACP_FAIL") == "prompt_timeout":
            continue
        prompt = params.get("prompt") or []
        text = prompt[0].get("text", "") if prompt and isinstance(prompt[0], dict) else ""
        send(
            {
                "jsonrpc": "2.0",
                "method": "session/update",
                "params": {
                    "sessionId": params.get("sessionId"),
                    "update": {
                        "sessionUpdate": "available_commands_update",
                        "availableCommands": [{"name": "ignored", "description": "must not leak"}],
                    },
                },
            }
        )
        for chunk in ("Cursor ", "ACP"):
            send(
                {
                    "jsonrpc": "2.0",
                    "method": "session/update",
                    "params": {
                        "sessionId": params.get("sessionId"),
                        "update": {"sessionUpdate": "agent_message_chunk", "content": {"type": "text", "text": chunk}},
                    },
                }
            )
        send(
            {
                "jsonrpc": "2.0",
                "id": request_id,
                "result": {
                    "stopReason": "end_turn",
                    "usage": {"inputTokens": len(text), "outputTokens": 2, "totalTokens": len(text) + 2},
                },
            }
        )
    elif request_id is not None:
        send({"jsonrpc": "2.0", "id": request_id, "result": {}})
'''


def _cursor_settings(tmp_path, *, extra_env: dict[str, str] | None = None, command: str | None = None):
    fake = tmp_path / "fake_acp.py"
    fake.write_text(FAKE_ACP)
    capture = tmp_path / "capture.jsonl"
    settings = tmp_path / "settings.json"
    env = {"ACP_CAPTURE": str(capture)}
    if extra_env:
        env.update(extra_env)
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "default[]",
                        "display_name": "Cursor Agent Auto",
                        "provider": "cursor-acp",
                        "command": command or sys.executable,
                        "args": [str(fake)],
                        "env": env,
                        "timeoutSeconds": 30,
                    }
                ]
            }
        )
    )
    return settings, capture


def _capture_messages(path):
    return [json.loads(line) for line in path.read_text().splitlines()]


def _sse_events(text: str) -> list[dict]:
    events = []
    for block in text.split("\n\n"):
        if not block.startswith("data:"):
            continue
        data = block.removeprefix("data:").strip()
        if data and data != "[DONE]":
            events.append(json.loads(data))
    return events


def _child_pid_gone(pid: int) -> bool:
    try:
        os.kill(pid, 0)
    except ProcessLookupError:
        return True
    except PermissionError:
        return False
    return False


def test_cursor_agent_provider_loads_without_base_url(tmp_path):
    settings, _capture = _cursor_settings(tmp_path)

    [model] = ModelSettings(settings).load()

    assert model.provider == "cursor-acp"
    assert model.base_url == ""
    assert model.is_cursor_acp is True
    assert model.is_cursor_cli is False


def test_cursor_acp_defaults_to_auto_model_and_agent_mode(tmp_path):
    settings, _capture = _cursor_settings(tmp_path)
    [model] = ModelSettings(settings).load()

    from codex_shim.cursor_acp import cursor_acp_config

    config = cursor_acp_config(model)
    assert config.model == "default[]"
    assert config.mode == "agent"


async def test_responses_routes_to_cursor_agent_acp(tmp_path):
    settings, capture = _cursor_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "default",
            "instructions": "Be terse.",
            "input": [{"role": "user", "content": "Say hello."}],
        },
    )

    assert resp.status == 200
    payload = await resp.json()
    assert payload["model"] == "default"
    assert payload["output"][0]["content"][0]["text"] == "Cursor ACP"
    assert payload["usage"]["output_tokens"] == 2

    prompt = [m for m in _capture_messages(capture) if m.get("method") == "session/prompt"][0]
    prompt_text = prompt["params"]["prompt"][0]["text"]
    assert "SYSTEM:\nBe terse." in prompt_text
    assert "USER:\nSay hello." in prompt_text
    set_mode = [m for m in _capture_messages(capture) if m.get("method") == "session/set_mode"][0]
    set_model = [m for m in _capture_messages(capture) if m.get("method") == "session/set_config_option" and m["params"].get("configId") == "model"][0]
    assert set_mode["params"]["modeId"] == "agent"
    assert set_model["params"]["value"] == "default[]"

    await shim_client.close()


async def test_streaming_responses_routes_to_cursor_agent_acp(tmp_path):
    settings, capture = _cursor_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "default", "input": "hi", "stream": True})

    assert resp.status == 200
    events = _sse_events(await resp.text())
    deltas = [event["delta"] for event in events if event.get("type") == "response.output_text.delta"]
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    assert deltas == ["Cursor ", "ACP"]
    assert completed["response"]["output"][0]["content"][0]["text"] == "Cursor ACP"
    assert completed["response"]["usage"]["output_tokens"] == 2

    methods = [message.get("method") for message in _capture_messages(capture)]
    assert methods[:2] == ["initialize", "session/new"]
    assert "session/prompt" in methods

    await shim_client.close()


async def test_responses_cursor_acp_missing_session_id_returns_502(tmp_path):
    settings, _capture = _cursor_settings(tmp_path, extra_env={"ACP_FAIL": "missing_session"})
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "default", "input": "hi"})

    assert resp.status == 502
    payload = await resp.json()
    assert payload["error"]["type"] == "cursor_acp_error"
    assert "session/new did not return a session id" in payload["error"]["message"]

    await shim_client.close()


async def test_responses_cursor_acp_set_mode_error_returns_502(tmp_path):
    settings, _capture = _cursor_settings(tmp_path, extra_env={"ACP_FAIL": "set_mode_error"})
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "default", "input": "hi"})

    assert resp.status == 502
    payload = await resp.json()
    assert payload["error"]["type"] == "cursor_acp_error"
    assert "session/set_mode failed" in payload["error"]["message"]
    assert "mode unavailable" in payload["error"]["message"]

    await shim_client.close()


async def test_responses_cursor_acp_prompt_timeout_returns_502_and_closes_child(tmp_path):
    pid_file = tmp_path / "acp.pid"
    settings, _capture = _cursor_settings(
        tmp_path,
        extra_env={"ACP_FAIL": "prompt_timeout", "ACP_PID_FILE": str(pid_file)},
    )
    data = json.loads(settings.read_text())
    data["models"][0]["timeoutSeconds"] = 0.2
    settings.write_text(json.dumps(data))
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "default", "input": "hi"})

    assert resp.status == 502
    payload = await resp.json()
    assert payload["error"]["type"] == "cursor_acp_error"
    assert "Timed out waiting for ACP session/prompt response" in payload["error"]["message"]
    assert pid_file.exists()
    pid = int(pid_file.read_text())
    for _ in range(50):
        if _child_pid_gone(pid):
            break
        await asyncio.sleep(0.05)
    assert _child_pid_gone(pid)

    await shim_client.close()


async def test_responses_cursor_acp_missing_command_is_hidden_and_unroutable(tmp_path):
    settings, _capture = _cursor_settings(tmp_path, command=str(tmp_path / "missing-cursor-agent"))
    [model] = ModelSettings(settings).load()
    assert model.visible is False
    assert model.unavailable_reason == f"command not found: {tmp_path / 'missing-cursor-agent'}"

    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "default", "input": "hi"})

    assert resp.status == 404

    await shim_client.close()


async def test_compact_routes_to_cursor_agent_acp(tmp_path):
    settings, _capture = _cursor_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses/compact", json={"model": "default", "input": "old state", "stream": True})

    assert resp.status == 200
    payload = await resp.json()
    assert payload["status"] == "completed"
    assert payload["model"] == "default"
    assert payload["output"][-1]["type"] == "context_compaction"
    assert payload["output"][-1]["summary"][0]["text"] == "Cursor ACP"
    assert payload["usage"]["output_tokens"] == 2

    await shim_client.close()
