from __future__ import annotations

import pytest

from codex_shim.translate import (
    ResponsesInputError,
    responses_to_chat,
    validate_responses_input,
)


def test_validate_responses_input_rejects_unknown_item_type():
    with pytest.raises(ResponsesInputError, match="Unsupported Responses input item type"):
        validate_responses_input({"model": "slug", "input": [{"type": "unknown_desktop_item", "call_id": "x"}]})


def test_responses_input_accepts_mcp_tool_call():
    body = {
        "model": "slug",
        "input": [
            {"type": "mcp_tool_call", "call_id": "call_mcp", "tool_name": "list_files", "arguments": "{}"},
            {"type": "mcp_tool_call_output", "call_id": "call_mcp", "output": "ok"},
        ],
    }
    validate_responses_input(body)
    out = responses_to_chat(body, "slug-model")
    assert out["messages"][-2]["tool_calls"][0]["function"]["name"] == "list_files"
    assert out["messages"][-1]["role"] == "tool"


def test_responses_input_accepts_local_shell_and_web_search_calls():
    body = {
        "model": "slug",
        "input": [
            {"type": "local_shell_call", "call_id": "call_shell", "action": {"command": "pwd"}},
            {"type": "function_call_output", "call_id": "call_shell", "output": "/tmp"},
            {"type": "web_search_call", "call_id": "call_search", "action": {"query": "weather"}},
            {"type": "function_call_output", "call_id": "call_search", "output": "sunny"},
        ],
    }
    out = responses_to_chat(body, "real-model")
    names = [call["function"]["name"] for msg in out["messages"] for call in (msg.get("tool_calls") or [])]
    assert names == ["local_shell", "web_search"]


def test_responses_input_preserves_context_compaction_as_system_message():
    body = {
        "model": "slug",
        "input": [
            {
                "type": "context_compaction",
                "summary": [{"type": "summary_text", "text": "Prior task: fix tests."}],
            },
            {"role": "user", "content": "next"},
        ],
    }
    out = responses_to_chat(body, "real-model")
    assert out["messages"][0]["role"] == "system"
    assert "Prior task: fix tests." in out["messages"][0]["content"]


def test_known_response_input_types_covers_all_desktop_item_types():
    """Compilation gate: catches accidental removal of a Desktop ResponseItem type."""
    from codex_shim.translate import KNOWN_RESPONSE_INPUT_TYPES

    expected = {
        "message",
        "input_text",
        "text",
        "input_image",
        "input_audio",
        "computer_call_output",
        "function_call",
        "function_call_output",
        "custom_tool_call",
        "custom_tool_call_output",
        "mcp_tool_call",
        "mcp_tool_call_output",
        "tool_search_call",
        "tool_search_output",
        "local_shell_call",
        "web_search_call",
        "image_generation_call",
        "context_compaction",
        "compaction",
        "compaction_trigger",
        "reasoning",
        "other",
    }
    assert KNOWN_RESPONSE_INPUT_TYPES == expected
