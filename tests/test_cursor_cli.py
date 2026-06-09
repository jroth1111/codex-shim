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


def _check(condition: bool, message: str = "") -> None:
    if not condition:
        raise AssertionError(message)


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

record_cwd = os.environ.get("CURSOR_CLI_RECORD_CWD")
if record_cwd:
    with open(record_cwd, "w", encoding="utf-8") as handle:
        handle.write(os.getcwd())

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
    if stream_style == "tool-events":
        print(json.dumps({"type": "tool_call", "subtype": "started", "call_id": "call_1", "tool_call": {"name": "local_shell", "arguments": {"command": "pwd"}}, "session_id": session_id}))
        print(json.dumps({"type": "tool_call", "subtype": "completed", "call_id": "call_1", "session_id": session_id}))
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": "Cursor CLI"}]}, "session_id": session_id, "timestamp_ms": 2}))
        print(json.dumps({"type": "result", "subtype": "success", "is_error": False, "result": "Cursor CLI", "session_id": session_id, "usage": {"inputTokens": 3, "outputTokens": 2}}))
        raise SystemExit(0)
    if stream_style == "tool-case-events":
        print(json.dumps({"type": "tool_call", "subtype": "started", "call_id": "call_1", "tool_call": {"tool": {"case": "shellToolCall", "value": {"args": {"command": "pwd"}}}}, "session_id": session_id}))
        print(json.dumps({"type": "tool_call", "subtype": "completed", "call_id": "call_1", "session_id": session_id}))
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": "Cursor CLI"}]}, "session_id": session_id, "timestamp_ms": 2}))
        print(json.dumps({"type": "result", "subtype": "success", "is_error": False, "result": "Cursor CLI", "session_id": session_id, "usage": {"inputTokens": 3, "outputTokens": 2}}))
        raise SystemExit(0)
    if stream_style == "partial":
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": "Cursor "}]}, "session_id": session_id, "timestamp_ms": 1}))
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": "CLI"}]}, "session_id": session_id, "timestamp_ms": 2}))
    if stream_style == "duplicate-partials":
        line = "I'll scan the repo docs."
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": line}]}, "session_id": session_id, "timestamp_ms": 1}))
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": line}]}, "session_id": session_id, "timestamp_ms": 2}))
        print(json.dumps({"type": "result", "subtype": "success", "is_error": False, "result": line, "session_id": session_id, "usage": {"inputTokens": 3, "outputTokens": 2}}))
        raise SystemExit(0)
    if stream_style == "duplicate-lines":
        line = "I'll scan the repo docs."
        text = f"{line}\n{line}\nDone."
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": text}]}, "session_id": session_id, "timestamp_ms": 1}))
        print(json.dumps({"type": "result", "subtype": "success", "is_error": False, "result": text, "session_id": session_id, "usage": {"inputTokens": 3, "outputTokens": 2}}))
        raise SystemExit(0)
    if stream_style == "cumulative":
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": "Cursor "}]}, "session_id": session_id, "timestamp_ms": 1}))
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": "Cursor CLI"}]}, "session_id": session_id, "timestamp_ms": 2}))
        print(json.dumps({"type": "result", "subtype": "success", "is_error": False, "result": "Cursor CLI", "session_id": session_id, "usage": {"inputTokens": 3, "outputTokens": 2}}))
        raise SystemExit(0)
    if stream_style == "snapshot-replay":
        mcall = "fake-model-call-id"
        line1 = "I'll scan the repo docs."
        line2 = "No root README found."
        for chunk in ("I'll", " scan", " the", " repo", " docs."):
            print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": chunk}]}, "session_id": session_id, "timestamp_ms": 1}))
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": f"{line1}\n"}]}, "session_id": session_id, "timestamp_ms": 2, "model_call_id": mcall}))
        for chunk in ("\nNo", " root", " README", " found."):
            print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": chunk}]}, "session_id": session_id, "timestamp_ms": 3}))
        print(json.dumps({"type": "assistant", "message": {"role": "assistant", "content": [{"type": "text", "text": f"{line2}\n"}]}, "session_id": session_id, "timestamp_ms": 4, "model_call_id": mcall}))
        final = f"{line1}\n{line2}\n"
        print(json.dumps({"type": "result", "subtype": "success", "is_error": False, "result": final, "session_id": session_id, "usage": {"inputTokens": 3, "outputTokens": 2}}))
        raise SystemExit(0)
    if stream_style == "invalid-before-result":
        print("not json")
    if stream_style == "unknown-events":
        print(json.dumps({"type": "new_event_type", "payload": {"v": 1}, "session_id": session_id}))
        print(json.dumps({"type": "thinking", "subtype": "completed", "session_id": session_id}))
        print(json.dumps({"type": "thinking", "subtype": "completed", "session_id": session_id}))
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

    _check(config.command == "cursor")
    _check(config.args == ["agent", "--print", "--trust", "--yolo", "--model", "auto"])


def test_cursor_agent_provider_loads_without_base_url(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path)

    [model] = ModelSettings(settings).load()

    _check(model.provider == "cursor-agent")
    _check(model.base_url == "")
    _check(model.is_cursor_cli is True)
    _check(model.is_cursor_acp is False)


async def test_native_transport_attaches_shim_native_envelope(tmp_path):
    fake = tmp_path / "fake_cursor_cli.py"
    fake.write_text(FAKE_CURSOR_CLI)
    capture = tmp_path / "capture.jsonl"
    env = {"CURSOR_CLI_CAPTURE": str(capture)}
    settings = tmp_path / "settings.json"
    settings.write_text(
        json.dumps(
            {
                "customModels": [
                    {
                        "slug": "native-cursor",
                        "model": "auto",
                        "displayName": "Cursor Native",
                        "provider": "cursor-agent",
                        "useNativeTransport": True,
                        "command": sys.executable,
                        "args": [str(fake), "agent", "--print", "--trust", "--yolo", "--model", "auto"],
                        "env": env,
                        "baseURL": "",
                    }
                ]
            }
        )
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "native-cursor", "input": [{"role": "user", "content": "Say hello."}]},
    )

    _check(resp.status == 200)
    payload = await resp.json()
    _check(payload["metadata"]["shim_route"]["transport"] == "cursor-agent-grpc")
    _check("shim_native_envelope" in payload["metadata"])
    envelope = payload["metadata"]["shim_native_envelope"]
    _check("clientEnvelope" in envelope)

    await shim_client.close()


async def test_responses_routes_to_cursor_agent_cli(tmp_path):
    settings, capture = _cursor_cli_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={"model": "auto", "instructions": "Be terse.", "input": [{"role": "user", "content": "Say hello."}]},
    )

    _check(resp.status == 200)
    payload = await resp.json()
    _check(payload["model"] == "auto")
    _check(payload["output"][0]["content"][0]["text"] == "Cursor CLI")
    _check(payload["usage"] == {"input_tokens": 3, "output_tokens": 2, "total_tokens": 5})
    _check(payload["metadata"]["shim_route"]["transport"] == "cursor_cli")
    argv = _capture(capture)[0]["argv"]
    _check(argv[:6] == ["agent", "--print", "--trust", "--yolo", "--model", "auto"])
    _check(argv[6:8] == ["--output-format", "json"])
    _check(argv[-1] == "Say hello.")

    await shim_client.close()


async def test_streaming_responses_routes_to_cursor_agent_cli(tmp_path):
    settings, capture = _cursor_cli_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    deltas = [event["delta"] for event in events if event.get("type") == "response.output_text.delta"]
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    _check(deltas == ["Cursor ", "CLI"])
    _check(completed["response"]["output"][0]["content"][0]["text"] == "Cursor CLI")
    _check(completed["response"]["usage"] == {"input_tokens": 3, "output_tokens": 2, "total_tokens": 5})
    argv = _capture(capture)[0]["argv"]
    _check(argv[6:9] == ["--output-format", "stream-json", "--stream-partial-output"])

    await shim_client.close()


async def test_streaming_responses_uses_aggregate_cursor_event_when_partials_are_absent(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="aggregate")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    deltas = [event["delta"] for event in events if event.get("type") == "response.output_text.delta"]
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    _check(deltas == ["Cursor CLI"])
    _check(completed["response"]["output"][0]["content"][0]["text"] == "Cursor CLI")

    await shim_client.close()


async def test_streaming_responses_dedupes_duplicate_cursor_partials(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="duplicate-partials")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    _check(completed["response"]["output"][0]["content"][0]["text"] == "I'll scan the repo docs.")

    await shim_client.close()


async def test_streaming_responses_dedupes_duplicate_lines_in_cursor_event(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="duplicate-lines")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    _check(completed["response"]["output"][0]["content"][0]["text"] == "I'll scan the repo docs.\nDone.")

    await shim_client.close()


async def test_streaming_responses_skips_model_call_snapshot_replays(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="snapshot-replay")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    _check(
        completed["response"]["output"][0]["content"][0]["text"]
        == "I'll scan the repo docs.\nNo root README found."
    )

    await shim_client.close()


async def test_streaming_responses_handles_cumulative_cursor_partials(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="cumulative")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    deltas = [event["delta"] for event in events if event.get("type") == "response.output_text.delta"]
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    _check(deltas == ["Cursor ", "CLI"])
    _check(completed["response"]["output"][0]["content"][0]["text"] == "Cursor CLI")

    await shim_client.close()


async def test_streaming_responses_ignores_malformed_cursor_cli_lines(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="invalid-before-result")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    _check(completed["response"]["output"][0]["content"][0]["text"] == "Cursor CLI")
    _check(completed["response"]["metadata"]["shim_anomalies"]["malformed_cursor_events"] >= 1)

    await shim_client.close()


async def test_streaming_responses_reports_unknown_cursor_events_in_metadata(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="unknown-events")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    anomalies = completed["response"]["metadata"]["shim_anomalies"]
    _check("new_event_type" in anomalies["unknown_cursor_event_types"])
    _check(anomalies["duplicate_reasoning_completed"] >= 1)

    await shim_client.close()


async def test_streaming_responses_accepts_long_cursor_cli_json_lines(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="long-line")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    text = completed["response"]["output"][0]["content"][0]["text"]
    _check(len(text) == 70000)
    _check(text == "x" * 70000)

    await shim_client.close()


async def test_streaming_responses_suppresses_tool_items_in_delegate_mode(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="tool-events")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    opened = [event for event in events if event.get("type") == "response.output_item.added"]
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    _check(not any(event["item"].get("type") == "local_shell_call" for event in opened))
    _check(completed["response"]["metadata"]["shim_route"]["execution_mode"] == "delegate")
    tool_items = [
        item for item in completed["response"]["output"] if str(item.get("type") or "").endswith("_call")
    ]
    _check(not tool_items)
    anomalies = completed["response"]["metadata"].get("shim_anomalies") or {}
    _check(anomalies.get("delegated_tool_events_suppressed", 0) >= 1)

    await shim_client.close()


async def test_streaming_responses_delegate_mode_maps_no_native_shell_call(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path, stream_style="tool-case-events")
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi", "stream": True})

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    completed = [event for event in events if event.get("type") == "response.completed"][-1]
    tool_items = [item for item in completed["response"]["output"] if item.get("type") == "local_shell_call"]
    _check(not tool_items)
    _check(completed["response"]["metadata"]["shim_route"]["execution_mode"] == "delegate")

    await shim_client.close()


async def test_responses_cursor_cli_nonzero_exit_returns_502(tmp_path):
    settings, _capture_path = _cursor_cli_settings(
        tmp_path,
        extra_env={"CURSOR_CLI_FAIL": "1", "CURSOR_CLI_FAIL_MESSAGE": "plan limit reached", "CURSOR_CLI_FAIL_CODE": "42"},
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi"})

    _check(resp.status == 502)
    payload = await resp.json()
    _check(payload["error"]["type"] == "cursor_cli_error")
    _check("exited 42" in payload["error"]["message"])
    _check("plan limit reached" in payload["error"]["message"])

    await shim_client.close()


async def test_responses_cursor_cli_timeout_returns_502(tmp_path, monkeypatch):
    emitted: list[dict] = []

    def _capture_emit(self, **kwargs):
        emitted.append(kwargs)

    monkeypatch.setattr("codex_shim.governance.audit.GovernanceAuditSink.emit", _capture_emit)
    settings, _capture_path = _cursor_cli_settings(
        tmp_path,
        extra_env={"CURSOR_CLI_SLEEP": "1"},
        timeout_seconds=0.01,
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses", json={"model": "auto", "input": "hi"})

    _check(resp.status == 502)
    payload = await resp.json()
    _check(payload["error"]["type"] == "cursor_turn_timeout")
    _check("Timed out waiting for Cursor Agent command" in payload["error"]["message"])
    _check(any(item.get("failure_category") == "cursor_turn_timeout" for item in emitted))

    await shim_client.close()


async def test_responses_cursor_cli_resolves_workspace_from_metadata(tmp_path):
    project = tmp_path / "project"
    project.mkdir()
    cwd_record = tmp_path / "cwd.txt"
    settings, _capture_path = _cursor_cli_settings(
        tmp_path,
        extra_env={"CURSOR_CLI_RECORD_CWD": str(cwd_record)},
    )
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/responses",
        json={
            "model": "auto",
            "metadata": {"cwd": str(project)},
            "input": [{"role": "user", "content": "Say hello."}],
        },
    )

    _check(resp.status == 200)
    payload = await resp.json()
    _check(payload["metadata"]["shim_route"]["workspace"] == str(project.resolve()))
    _check(cwd_record.read_text(encoding="utf-8") == str(project.resolve()))

    await shim_client.close()


async def test_chat_completions_stream_routes_to_cursor_agent_cli(tmp_path):
    settings, capture = _cursor_cli_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post(
        "/v1/chat/completions",
        json={"model": "auto", "messages": [{"role": "user", "content": "hi"}], "stream": True},
    )

    _check(resp.status == 200)
    events = _sse_events(await resp.text())
    deltas = [event["choices"][0]["delta"].get("content") for event in events if event["choices"][0]["delta"]]
    done = [event for event in events if event["choices"][0]["finish_reason"] == "stop"][-1]
    _check(deltas == ["Cursor ", "CLI"])
    _check(done["model"] == "auto")
    argv = _capture(capture)[0]["argv"]
    _check(argv[6:9] == ["--output-format", "stream-json", "--stream-partial-output"])

    await shim_client.close()


async def test_compact_routes_to_cursor_agent_cli(tmp_path):
    settings, _capture_path = _cursor_cli_settings(tmp_path)
    shim_client = TestClient(TestServer(ShimServer(settings).app()))
    await shim_client.start_server()

    resp = await shim_client.post("/v1/responses/compact", json={"model": "auto", "input": "old state", "stream": True})

    _check(resp.status == 200)
    payload = await resp.json()
    _check(payload["status"] == "completed")
    _check(payload["model"] == "auto")
    _check(payload["output"][-1]["type"] == "context_compaction")
    summary = payload["output"][-1]["summary"][0]["text"]
    _check("Cursor CLI" in summary)
    _check("[shim-compact-warning: projection_unverified]" in summary)
    _check("old state" in summary)
    _check(payload["usage"] == {"input_tokens": 3, "output_tokens": 2, "total_tokens": 5})

    await shim_client.close()


def _route_from_settings(settings_path) -> ShimModel:
    models = ModelSettings(settings_path).load()
    _check(len(models) == 1)
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
    _check(pid_file.exists(), "fake cursor CLI did not write child pid file")
    pid = int(pid_file.read_text())
    task.cancel()
    with suppress(asyncio.CancelledError):
        await task
    for _ in range(50):
        if _child_pid_gone(pid):
            break
        await asyncio.sleep(0.05)
    _check(_child_pid_gone(pid), f"child process {pid} still running after task cancel")


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
    _check(pid_file.exists())
    pid = int(pid_file.read_text())
    task.cancel()
    with suppress(asyncio.CancelledError):
        await task
    for _ in range(50):
        if _child_pid_gone(pid):
            break
        await asyncio.sleep(0.05)
    _check(_child_pid_gone(pid))


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

    _check(pid_file.exists())
    pid = int(pid_file.read_text())
    for _ in range(50):
        if _child_pid_gone(pid):
            break
        await asyncio.sleep(0.05)
    _check(_child_pid_gone(pid))


def test_cursor_cli_output_format_args_are_not_duplicated():
    from codex_shim.cursor_cli import _with_output_format

    args = ["agent", "--print", "--output-format", "json"]

    _check(_with_output_format(args, "stream-json", stream_partial=True) == [
        "agent",
        "--print",
        "--output-format",
        "stream-json",
        "--stream-partial-output",
    ])
