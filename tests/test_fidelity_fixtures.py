from __future__ import annotations

import json
from pathlib import Path

from codex_shim.desktop_validate import (
    assert_image_generation_action,
    assert_local_shell_action,
    assert_web_search_action,
)
from codex_shim.translate import function_call_to_native_item, responses_to_chat, validate_responses_input
from codex_shim.verification.probe import validate_compact_response

FIXTURES = Path(__file__).parent / "fixtures" / "desktop"

DESKTOP_INPUT_FIXTURES = (
    "tool_heavy_turn.json",
    "compaction_turn.json",
    "reasoning_turn.json",
    "mcp_tool_turn.json",
    "web_search_turn.json",
    "image_gen_turn.json",
    "tool_search_turn.json",
)


def _validate_fixture_hosted_actions(payload: dict) -> None:
    for item in payload.get("input") or []:
        if not isinstance(item, dict):
            continue
        action = item.get("action")
        if not isinstance(action, dict):
            continue
        item_type = item.get("type")
        if item_type == "web_search_call":
            assert_web_search_action(action)
        elif item_type == "local_shell_call":
            assert_local_shell_action(action)
        elif item_type == "image_generation_call":
            assert_image_generation_action(action)


def test_all_desktop_input_fixtures_validate_against_contract():
    for name in DESKTOP_INPUT_FIXTURES:
        payload = json.loads((FIXTURES / name).read_text())
        body = {"model": "slug", "input": payload["input"]}
        validate_responses_input(body)
        _validate_fixture_hosted_actions(payload)


def test_tool_heavy_fixture_translates_hosted_calls():
    payload = json.loads((FIXTURES / "tool_heavy_turn.json").read_text())
    body = {"model": "slug", "input": payload["input"]}
    validate_responses_input(body)
    out = responses_to_chat(body, "real-model")
    tool_names = []
    for message in out["messages"]:
        for call in message.get("tool_calls") or []:
            tool_names.append(call["function"]["name"])
        if message.get("role") == "assistant" and message.get("tool_calls"):
            assert message.get("content") == "", "assistant tool-call rows must not send content=null upstream"
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


def test_image_generation_call_input_translates():
    body = {
        "model": "slug",
        "input": [{"type": "image_generation_call", "call_id": "call_img", "action": {"prompt": "neon fox"}}],
    }
    validate_responses_input(body)
    out = responses_to_chat(body, "real-model")
    tool_names = [
        call["function"]["name"]
        for message in out["messages"]
        for call in message.get("tool_calls") or []
    ]
    assert tool_names == ["image_generation"]


def test_web_search_fixture_translates_with_action_type():
    payload = json.loads((FIXTURES / "web_search_turn.json").read_text())
    body = {"model": "slug", "input": payload["input"]}
    validate_responses_input(body)
    out = responses_to_chat(body, "real-model")
    tool_names = [
        call["function"]["name"]
        for message in out["messages"]
        for call in message.get("tool_calls") or []
    ]
    assert tool_names == ["web_search"]


def test_image_gen_fixture_translates_tool_call():
    payload = json.loads((FIXTURES / "image_gen_turn.json").read_text())
    body = {"model": "slug", "input": payload["input"]}
    validate_responses_input(body)
    out = responses_to_chat(body, "real-model")
    tool_names = [
        call["function"]["name"]
        for message in out["messages"]
        for call in message.get("tool_calls") or []
    ]
    assert tool_names == ["image_generation"]
    for item in payload["input"]:
        if item.get("type") == "image_generation_call" and isinstance(item.get("action"), dict):
            assert_image_generation_action(item["action"])


def test_hosted_tool_emission_matches_desktop_contract():
    web_item = function_call_to_native_item("web_search", "call_1", '{"query":"docs"}')
    assert web_item is not None
    assert_web_search_action(web_item["action"])

    shell_item = function_call_to_native_item("local_shell", "call_2", '{"command":"pwd"}')
    assert shell_item is not None
    assert_local_shell_action(shell_item["action"])

    image_item = function_call_to_native_item("image_generation", "call_3", '{"prompt":"fox"}')
    assert image_item is not None
    assert_image_generation_action(image_item["action"])


def test_tool_search_fixture_translates_tool_call():
    payload = json.loads((FIXTURES / "tool_search_turn.json").read_text())
    body = {"model": "slug", "input": payload["input"]}
    validate_responses_input(body)
    out = responses_to_chat(body, "real-model")
    tool_names = [
        call["function"]["name"]
        for message in out["messages"]
        for call in message.get("tool_calls") or []
    ]
    assert tool_names == ["tool_search"]
