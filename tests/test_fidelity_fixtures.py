from __future__ import annotations

import json
from pathlib import Path

from codex_shim.probe import validate_compact_response
from codex_shim.translate import responses_to_chat, validate_responses_input


FIXTURES = Path(__file__).parent / "fixtures" / "desktop"


def test_tool_heavy_fixture_translates_hosted_calls():
    payload = json.loads((FIXTURES / "tool_heavy_turn.json").read_text())
    body = {"model": "slug", "input": payload["input"]}
    validate_responses_input(body)
    out = responses_to_chat(body, "real-model")
    tool_names = []
    for message in out["messages"]:
        for call in message.get("tool_calls") or []:
            tool_names.append(call["function"]["name"])
    assert tool_names == ["local_shell", "web_search"]


def test_compaction_fixture_injects_system_summary():
    payload = json.loads((FIXTURES / "compaction_turn.json").read_text())
    body = {"model": "slug", "input": payload["input"]}
    out = responses_to_chat(body, "real-model")
    assert out["messages"][0]["role"] == "system"
    assert "Compacted conversation context" in out["messages"][0]["content"]
    assert out["messages"][1]["role"] == "user"


def test_reasoning_fixture_validates_and_translates():
    payload = json.loads((FIXTURES / "reasoning_turn.json").read_text())
    body = {"model": "slug", "input": payload["input"], "thinking": True}
    validate_responses_input(body)
    out = responses_to_chat(body, "real-model", provider="deepseek")
    assert any(message.get("reasoning_content") for message in out["messages"] if message.get("role") == "assistant")


def test_mcp_fixture_translates_tool_calls():
    payload = json.loads((FIXTURES / "mcp_tool_turn.json").read_text())
    body = {"model": "slug", "input": payload["input"]}
    validate_responses_input(body)
    out = responses_to_chat(body, "real-model")
    tool_names = [
        call["function"]["name"]
        for message in out["messages"]
        for call in message.get("tool_calls") or []
    ]
    assert tool_names == ["list_files"]


def test_passthrough_compact_fixture_matches_validator():
    payload = json.loads((FIXTURES / "passthrough_compact.json").read_text())
    item_type, summary = validate_compact_response(payload)
    assert item_type == "context_compaction"
    assert "Native compact summary" in summary
