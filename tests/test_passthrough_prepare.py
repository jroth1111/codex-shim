from __future__ import annotations

import json
from pathlib import Path

import pytest

from codex_shim.providers.chatgpt.prepare import (
    normalize_chatgpt_passthrough_input,
    prepare_chatgpt_passthrough_body,
)

FIXTURES = Path(__file__).parent / "fixtures" / "desktop"


def test_prepare_injects_defaults_for_responses():
    prepared = prepare_chatgpt_passthrough_body({"model": "gpt-5.5", "input": "hello"})
    assert prepared["instructions"].startswith("You are Codex")
    assert prepared["store"] is False
    assert prepared["stream"] is True
    assert prepared["input"][0]["role"] == "user"


def test_prepare_strips_unsupported_top_level_fields():
    prepared = prepare_chatgpt_passthrough_body(
        {
            "model": "gpt-5.5",
            "input": "hello",
            "metadata": {"trace_id": "t"},
            "max_output_tokens": 32,
            "previous_response_id": "resp_old",
            "trace_id": "body-trace",
        }
    )
    assert "metadata" not in prepared
    assert "max_output_tokens" not in prepared
    assert "previous_response_id" not in prepared
    assert "trace_id" not in prepared


def test_prepare_keeps_previous_response_id_when_env_set(monkeypatch):
    monkeypatch.setenv("CODEX_SHIM_PASSTHROUGH_KEEP_PREVIOUS_RESPONSE_ID", "1")
    prepared = prepare_chatgpt_passthrough_body(
        {"model": "gpt-5.5", "input": "hello", "previous_response_id": "resp_old"}
    )
    assert prepared["previous_response_id"] == "resp_old"


def test_prepare_compact_does_not_force_stream_or_store():
    prepared = prepare_chatgpt_passthrough_body({"model": "gpt-5.5", "input": []}, compact=True)
    assert "stream" not in prepared
    assert "store" not in prepared
    assert prepared["instructions"].startswith("You are Codex")


def test_normalize_local_shell_output_pairing():
    items = normalize_chatgpt_passthrough_input(
        [
            {"type": "local_shell_call", "call_id": "call_shell", "action": {"command": "echo hi"}},
            {"type": "function_call_output", "call_id": "call_shell", "output": "hi\n"},
        ]
    )
    assert items[0]["type"] == "function_call"
    assert items[0]["name"] == "local_shell"
    assert items[0]["id"] == "fc_shell"
    assert items[0]["arguments"] == '{"command":"echo hi"}'
    assert items[1]["type"] == "function_call_output"
    assert items[1]["call_id"] == "fc_shell"


def test_normalize_web_search_output_pairing():
    items = normalize_chatgpt_passthrough_input(
        [
            {
                "type": "web_search_call",
                "call_id": "call_ws",
                "status": "completed",
                "action": {"type": "search", "query": "codex"},
            },
            {"type": "function_call_output", "call_id": "call_ws", "output": "results"},
        ]
    )
    assert items[0]["type"] == "function_call"
    assert items[0]["name"] == "web_search"
    assert items[0]["id"] == "fc_ws"
    assert items[1]["type"] == "function_call_output"
    assert items[1]["call_id"] == "fc_ws"


def test_normalize_mcp_to_function_call():
    items = normalize_chatgpt_passthrough_input(
        [
            {
                "type": "mcp_tool_call",
                "call_id": "call_mcp",
                "tool_name": "list_files",
                "arguments": '{"path":"."}',
            },
            {"type": "mcp_tool_call_output", "call_id": "call_mcp", "output": "[]"},
        ]
    )
    assert items[0]["type"] == "function_call"
    assert items[0]["name"] == "list_files"
    assert items[0]["arguments"] == '{"path":"."}'
    assert items[0]["id"] == "fc_mcp"
    assert items[1]["type"] == "function_call_output"


def test_normalize_context_compaction_to_compaction():
    items = normalize_chatgpt_passthrough_input(
        [{"type": "context_compaction", "summary": [{"type": "summary_text", "text": "state"}]}]
    )
    assert items[0]["type"] == "message"
    assert "Compacted conversation context" in items[0]["content"][0]["text"]


def test_normalize_tool_search_arguments_object():
    items = normalize_chatgpt_passthrough_input(
        [
            {"type": "tool_search_call", "call_id": "call_ts", "arguments": '{"query":"grep"}'},
            {"type": "tool_search_output", "call_id": "call_ts", "output": "found 3 tools"},
        ]
    )
    assert items[0]["type"] == "function_call"
    assert items[0]["name"] == "tool_search"
    assert items[0]["arguments"] == '{"query":"grep"}'
    assert items[1]["type"] == "function_call_output"


@pytest.mark.parametrize(
    "fixture_name",
    [
        "tool_heavy_turn.json",
        "compaction_turn.json",
        "reasoning_turn.json",
        "mcp_tool_turn.json",
        "web_search_turn.json",
        "image_gen_turn.json",
        "tool_search_turn.json",
    ],
)
def test_prepare_desktop_fixtures(fixture_name: str):
    payload = json.loads((FIXTURES / fixture_name).read_text())
    prepared = prepare_chatgpt_passthrough_body({"model": "gpt-5.5", "input": payload["input"]})
    assert prepared["instructions"]
    assert isinstance(prepared["input"], list)
    assert prepared["input"]
