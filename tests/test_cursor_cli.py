from __future__ import annotations

import asyncio
import json
import os
import sys
from contextlib import suppress

import pytest

from aiohttp.test_utils import TestClient, TestServer

from codex_shim.cursor_cli import cursor_cli_config, run_cursor_cli
from codex_shim.server import ShimServer
from codex_shim.settings import ModelSettings, ShimModel


FAKE_CURSOR_CLI = r'''
from __future__ import annotations

import json
import os
import sys
import time

capture = os.environ.get("CURSOR_CLI_CAPTURE")
if capture:
    with open(capture, "a", encoding="utf-8") as handle:
        handle.write(json.dumps({"argv": sys.argv[1:]}, separators=(",", ":")) + "\n")

if os.environ.get("CURSOR_CLI_PID_FILE"):
    from pathlib import Path

    Path(os.environ["CURSOR_CLI_PID_FILE"]).write_text(str(os.getpid()), encoding="utf-8")

if os.environ.get("CURSOR_CLI_HANG"):
    time.sleep(float(os.environ.get("CURSOR_CLI_SLEEP", "60")))
    raise SystemExit(0)

if os.environ.get("CURSOR_CLI_SLEEP"):
    time.sleep(float(os.environ["CURSOR_CLI_SLEEP"]))

if os.environ.get("CURSOR_CLI_FAIL"):
    print(os.environ.get("CURSOR_CLI_FAIL_MESSAGE", "cursor failed"), file=sys.stderr)
    raise SystemExit(int(os.environ.get("CURSOR_CLI_FAIL_CODE", "7")))

if "--output-format" in sys.argv:
    output_format = sys.argv[sys.argv.index("--output-format") + 1]
else:
    output_format = "text"

if output_format == "stream-json":
    session_id = "fake-session"
    print(json.dumps({"type": "system", "subtype": "init", "session_id": session_id}))
    stream_style = os.environ.get("CURSOR_CLI_STREAM_STYLE", "partial")
    if stream_style == "partial":
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": "Cursor "}]}, "session_id": session_id, "timestamp_ms": 1}))
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": "CLI"}]}, "session_id": session_id, "timestamp_ms": 2}))
    if stream_style == "invalid-before-result":
        print("not json")
    if stream_style == "long-line":
        long_text = "x" * 70000
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": long_text}]}, "session_id": session_id, "timestamp_ms": 1}))
        print(json.dumps({"type": "result", "subtype": "success", "is_error": False, "result": long_text, "session_id": session_id, "usage": {"inputTokens": 3, "outputTokens": 2}}))
        raise SystemExit(0)
    print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": "Cursor CLI"}]}, "session_id": session_id}))
    print(json.dumps({"type": "result", "subtype": "success", "is_error": False, "result": "Cursor CLI", "session_id": session_id, "usage": {"inputTokens": 3, "outputTokens": 2}}))
    raise SystemExit(0)

if output_format == "json":
    print(json.dumps({"type": "result", "subtype": "success", "is_error": False, "result": "Cursor CLI", "usage": {"inputTokens": 3, "outputTokens": 2}}))
    raise SystemExit(0)

print("Cursor CLI")
'''


def _cursor_cli_settings(
    tmp_path,
    *,
    stream_style: str = "partial",
    args: list[str] | None = None,
    extra_env: dict[str, str] | None = None,
    timeout_seconds: float = 30,
):
    fake = tmp_path / "fake_cursor_cli.py"
    fake.write_text(FAKE_CURSOR_CLI)
    capture = tmp_path / "capture.jsonl"
    env = {"CURSOR_CLI_CAPTURE": str(capture), "CURSOR_CLI_STREAM_STYLE": stream_style}
    if extra_env:
        env.update(extra_env)
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "auto",
                        "display_name": "Cursor Agent Auto",
                        "provider": "cursor-agent",
                        "command": sys.executable,
                        "args": args or [str(fake), "agent", "--print", "--trust", "--yolo", "--model", "auto"],
                        "env": env,
                        "timeoutSeconds": timeout_seconds,
                    }
                ]
            }
        )
    )
    return settings, capture


def _capture(path):
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


def test_cursor_agent_provider_defaults_to_forkandflag_cli_flags():
    model = ShimModel(
        slug="cursor-agent-auto",
        model="auto",
        display_name="Cursor Agent Auto",
        provider="cursor-agent",
        base_url="",
    )

    config = cursor_cli_config(model)

    assert config.command == "cursor"
    assert config.args == ["agent", "--print", "--trust", "--yolo", "--model", "auto"]


def test_cursor_agent_provider_loads_without_base_url(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path)

    [model] = ModelSettings(settings).load()

    assert model.provider == "cursor-agent"
    assert model.base_url == ""
    assert model.is_cursor_cli is True
    assert model.is_cursor_acp is False


async def test_responses_routes_to_cursor_agent_cli(tmp_path):
    settings, capture = _cursor_cli_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "auto", "instructions": "Be terse.", "input": [{"role": "user", "content": "Say hello."}]},
    )

    assert resp.status == 200
    payload = await resp.json()
    assert payload["model"] == "auto"
    assert payload["output"][0]["content"][0]["text"] == "Cursor CLI"
    assert payload["usage"] == {"input_tokens": 3, "output_tokens": 2, "total_tokens": 5}
    argv = _capture(capture)[0]["argv"]
    assert argv[:6] == ["agent", "--print", "--trust", "--yolo", "--model", "auto"]
    assert argv[6:8] == ["--output-format", "json"]
    assert "SYSTEM:\nBe terse." in argv[-1]
    assert "USER:\nSay hello." in argv[-1]

    await shim_client.close()


async def test_streaming_responses_routes_to_cursor_agent_cli(tmp_path):
    settings, capture = _cursor_cli_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    assert resp.status == 200
    events = _sse_events(await resp.text())
    deltas = [event["delta"] for event in events if event.get("type") == "response.output_text.delta"]
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    assert deltas == ["Cursor ", "CLI"]
    assert completed["response"]["output"][0]["content"][0]["text"] == "Cursor CLI"
    assert completed["response"]["usage"] == {"input_tokens": 3, "output_tokens": 2, "total_tokens": 5}
    argv = _capture(capture)[0]["argv"]
    assert argv[6:9] == ["--output-format", "stream-json", "--stream-partial-output"]

    await shim_client.close()


async def test_streaming_responses_uses_aggregate_cursor_event_when_partials_are_absent(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="aggregate")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    assert resp.status == 200
    events = _sse_events(await resp.text())
    deltas = [event["delta"] for event in events if event.get("type") == "response.output_text.delta"]
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    assert deltas == ["Cursor CLI"]
    assert completed["response"]["output"][0]["content"][0]["text"] == "Cursor CLI"

    await shim_client.close()


async def test_streaming_responses_ignores_malformed_cursor_cli_lines(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="invalid-before-result")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    assert resp.status == 200
    events = _sse_events(await resp.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    assert completed["response"]["output"][0]["content"][0]["text"] == "Cursor CLI"

    await shim_client.close()


async def test_streaming_responses_accepts_long_cursor_cli_json_lines(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="long-line")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    assert resp.status == 200
    events = _sse_events(await resp.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    text = completed["response"]["output"][0]["content"][0]["text"]
    assert len(text) == 70000
    assert text == "x" * 70000

    await shim_client.close()


async def test_responses_cursor_cli_nonzero_exit_returns_502(tmp_path):
    settings, _capture_path = _cursor_cli_settings(
        tmp_path,
        extra_env={"CURSOR_CLI_FAIL": "1", "CURSOR_CLI_FAIL_MESSAGE": "plan limit reached", "CURSOR_CLI_FAIL_CODE": "42"},
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi"})

    assert resp.status == 502
    payload = await resp.json()
    assert payload["error"]["type"] == "cursor_cli_error"
    assert "exited 42" in payload["error"]["message"]
    assert "plan limit reached" in payload["error"]["message"]

    await shim_client.close()


async def test_responses_cursor_cli_timeout_returns_502(tmp_path):
    settings, _capture_path = _cursor_cli_settings(
        tmp_path,
        extra_env={"CURSOR_CLI_SLEEP": "1"},
        timeout_seconds=0.01,
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi"})

    assert resp.status == 502
    payload = await resp.json()
    assert payload["error"]["type"] == "cursor_cli_error"
    assert "Timed out waiting for Cursor Agent command" in payload["error"]["message"]

    await shim_client.close()


async def test_chat_completions_stream_routes_to_cursor_agent_cli(tmp_path):
    settings, capture = _cursor_cli_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/chat/completions",
        json={"model": "auto", "messages": [{"role": "user", "content": "hi"}], "stream": True},
    )

    assert resp.status == 200
    events = _sse_events(await resp.text())
    deltas = [event["choices"][0]["delta"].get("content") for event in events if event["choices"][0]["delta"]]
    done = [event for event in events if event["choices"][0]["finish_reason"] == "stop"][-1]
    assert deltas == ["Cursor ", "CLI"]
    assert done["model"] == "auto"
    argv = _capture(capture)[0]["argv"]
    assert argv[6:9] == ["--output-format", "stream-json", "--stream-partial-output"]

    await shim_client.close()


async def test_compact_routes_to_cursor_agent_cli(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses/compact", json={"model": "auto", "input": "old state", "stream": True})

    assert resp.status == 200
    payload = await resp.json()
    assert payload["status"] == "completed"
    assert payload["model"] == "auto"
    assert payload["output"][-1]["type"] == "context_compaction"
    assert payload["output"][-1]["summary"][0]["text"] == "Cursor CLI"
    assert payload["usage"] == {"input_tokens": 3, "output_tokens": 2, "total_tokens": 5}

    await shim_client.close()


def _route_from_settings(settings_path) -> ShimModel:
    models = ModelSettings(settings_path).load()
    assert len(models) == 1
    return models[0]


def _child_pid_gone(pid: int) -> bool:
    try:
        os.kill(pid, 0)
    except ProcessLookupError:
        return True
    except PermissionError:
        return False
    return False


@pytest.mark.asyncio
async def test_cursor_cli_cancel_during_stream_kills_child(tmp_path):
    pid_file = tmp_path / "child.pid"
    settings, _capture = _cursor_cli_settings(
        tmp_path,
        extra_env={
            "CURSOR_CLI_PID_FILE": str(pid_file),
            "CURSOR_CLI_HANG": "1",
            "CURSOR_CLI_SLEEP": "60",
        },
        timeout_seconds=60,
    )
    route = _route_from_settings(settings)

    async def noop(_text: str) -> None:
        return None

    task = asyncio.create_task(run_cursor_cli(route, {"model": "auto", "input": "hi"}, on_text=noop))
    for _ in range(50):
        if pid_file.exists():
            break
        await asyncio.sleep(0.05)
    assert pid_file.exists(), "fake cursor CLI did not write child pid file"
    pid = int(pid_file.read_text())
    task.cancel()
    with suppress(asyncio.CancelledError):
        await task
    for _ in range(50):
        if _child_pid_gone(pid):
            break
        await asyncio.sleep(0.05)
    assert _child_pid_gone(pid), f"child process {pid} still running after task cancel"


@pytest.mark.asyncio
async def test_cursor_cli_cancel_during_json_kills_child(tmp_path):
    pid_file = tmp_path / "child.pid"
    settings, _capture = _cursor_cli_settings(
        tmp_path,
        extra_env={
            "CURSOR_CLI_PID_FILE": str(pid_file),
            "CURSOR_CLI_HANG": "1",
            "CURSOR_CLI_SLEEP": "60",
        },
        timeout_seconds=60,
    )
    route = _route_from_settings(settings)

    task = asyncio.create_task(run_cursor_cli(route, {"model": "auto", "input": "hi"}))
    for _ in range(50):
        if pid_file.exists():
            break
        await asyncio.sleep(0.05)
    assert pid_file.exists()
    pid = int(pid_file.read_text())
    task.cancel()
    with suppress(asyncio.CancelledError):
        await task
    for _ in range(50):
        if _child_pid_gone(pid):
            break
        await asyncio.sleep(0.05)
    assert _child_pid_gone(pid)


@pytest.mark.asyncio
async def test_cursor_cli_timeout_kills_child(tmp_path):
    pid_file = tmp_path / "child.pid"
    settings, _capture = _cursor_cli_settings(
        tmp_path,
        extra_env={
            "CURSOR_CLI_PID_FILE": str(pid_file),
            "CURSOR_CLI_HANG": "1",
            "CURSOR_CLI_SLEEP": "60",
        },
        timeout_seconds=0.2,
    )
    route = _route_from_settings(settings)

    from codex_shim.cursor_cli import CursorCliError

    with pytest.raises(CursorCliError, match="Timed out"):
        await run_cursor_cli(route, {"model": "auto", "input": "hi"})

    assert pid_file.exists()
    pid = int(pid_file.read_text())
    for _ in range(50):
        if _child_pid_gone(pid):
            break
        await asyncio.sleep(0.05)
    assert _child_pid_gone(pid)


def test_cursor_cli_output_format_args_are_not_duplicated():
    from codex_shim.cursor_cli import _with_output_format

    args = ["agent", "--print", "--output-format", "json"]

    assert _with_output_format(args, "stream-json", stream_partial=True) == [
        "agent",
        "--print",
        "--output-format",
        "json",
        "--stream-partial-output",
    ]
