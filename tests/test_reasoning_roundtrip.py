from __future__ import annotations

import json
from pathlib import Path

from codex_shim.translate import (
    anthropic_to_response,
    responses_input_to_messages,
    responses_to_anthropic,
    responses_to_chat,
    validate_responses_input,
)

FIXTURES = Path(__file__).parent / "fixtures" / "desktop"


def test_reasoning_roundtrip_chat():
    input_items = [
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Hello"}]},
        {
            "type": "reasoning",
            "summary": [{"type": "summary_text", "text": "The user is greeting me."}],
            "encrypted_content": (
                "anthropic-thinking-v1:"
                "eyJ0eXBlIjoidGhpbmtpbmciLCJ0aGlua2luZyI6IlRoZSB1c2VyIGlzIGdyZWV0aW5nIG1lLiIsInNpZ25hdHVyZSI6IiJ9"
            ),
        },
        {
            "type": "message",
            "role": "assistant",
            "content": [{"type": "output_text", "text": "Hi there!"}],
        },
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "How are you?"}]},
    ]

    result = responses_to_chat(
        {"input": input_items, "thinking": True, "stream": True, "model": "deepseek"},
        upstream_model="deepseek-chat",
        provider="deepseek",
    )

    assert result["thinking"] == {"type": "enabled"}
    assert result["messages"] == [
        {"role": "user", "content": "Hello"},
        {
            "role": "assistant",
            "content": "Hi there!",
            "reasoning_content": "The user is greeting me.",
        },
        {"role": "user", "content": "How are you?"},
    ]


def test_second_turn_reasoning_replay_avoids_null_content():
    """Follow-up turns with reasoning blocks must not send content: null to chat upstreams."""
    input_items = [
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "First"}]},
        {
            "type": "reasoning",
            "summary": [{"type": "summary_text", "text": "Planning tool use."}],
        },
        {
            "type": "message",
            "role": "assistant",
            "content": [{"type": "output_text", "text": "Done."}],
        },
        {
            "type": "function_call",
            "call_id": "call_1",
            "name": "local_shell",
            "arguments": '{"command":"echo hi"}',
        },
        {"type": "function_call_output", "call_id": "call_1", "output": "hi"},
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Second turn"}]},
    ]

    result = responses_to_chat(
        {"input": input_items, "stream": True, "model": "deepseek"},
        upstream_model="deepseek-chat",
        provider="deepseek",
    )

    for message in result["messages"]:
        if message.get("reasoning_content"):
            assert message.get("content") is not None


def test_reasoning_at_end_of_conversation():
    input_items = [
        {"type": "reasoning", "summary": [{"type": "summary_text", "text": "My final thought."}]},
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "New question"}]},
    ]

    result = responses_to_chat(
        {"input": input_items, "stream": True, "model": "deepseek"},
        upstream_model="deepseek-chat",
        provider="deepseek",
    )

    assert result["messages"] == [
        {"role": "assistant", "content": "", "reasoning_content": "My final thought."},
        {"role": "user", "content": "New question"},
    ]
    assert result["thinking"] == {"type": "enabled"}


def test_reasoning_from_encrypted_content():
    input_items = [
        {
            "type": "reasoning",
            "summary": [],
            "encrypted_content": (
                "anthropic-thinking-v1:"
                "eyJ0eXBlIjoidGhpbmtpbmciLCJ0aGlua2luZyI6IkRlY29kZWQgdGhpbmtpbmciLCJzaWduYXR1cmUiOiIifQ=="
            ),
        },
        {
            "type": "message",
            "role": "assistant",
            "content": [{"type": "output_text", "text": "Answer"}],
        },
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Next"}]},
    ]

    result = responses_to_chat(
        {"input": input_items, "thinking": True, "stream": True},
        upstream_model="deepseek-chat",
        provider="deepseek",
    )

    assert result["messages"][0]["reasoning_content"] == "Decoded thinking"


def test_no_reasoning_preserves_thinking():
    result = responses_to_chat(
        {
            "input": [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Hi"}]}],
            "thinking": True,
            "stream": True,
        },
        upstream_model="deepseek-chat",
        provider="deepseek",
    )

    assert result["thinking"] == {"type": "enabled"}
    assert all("reasoning_content" not in message for message in result["messages"])


def test_thinking_disabled_but_reasoning_present():
    input_items = [
        {"type": "reasoning", "summary": [{"type": "summary_text", "text": "Think."}]},
        {
            "type": "message",
            "role": "assistant",
            "content": [{"type": "output_text", "text": "Hi"}],
        },
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Q"}]},
    ]

    result = responses_to_chat(
        {"input": input_items, "thinking": False, "stream": True},
        upstream_model="deepseek-chat",
        provider="deepseek",
    )

    assert result["thinking"] == {"type": "enabled"}
    assert result["messages"][0]["reasoning_content"] == "Think."


def test_moonshot_legacy_model_drops_thinking_option():
    result = responses_to_chat(
        {
            "input": [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Hi"}]}],
            "thinking": True,
            "stream": True,
        },
        upstream_model="moonshot-v1-32k",
        provider="moonshot",
    )

    assert "thinking" not in result


def test_mimo_provider_drops_codex_thinking_option():
    result = responses_to_chat(
        {
            "input": [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Hi"}]}],
            "thinking": True,
            "stream": True,
        },
        upstream_model="mimo-v2.5-pro",
        provider="mimo",
    )

    assert "thinking" not in result


def test_kimi_model_keeps_thinking_option():
    result = responses_to_chat(
        {
            "input": [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Hi"}]}],
            "thinking": True,
            "stream": True,
        },
        upstream_model="kimi-k2.6",
        provider="moonshot",
    )

    assert result["thinking"] == {"type": "enabled", "keep": "all"}


def test_generic_chat_provider_can_opt_into_thinking_passthrough():
    result = responses_to_chat(
        {
            "input": [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Hi"}]}],
            "thinking": {"type": "enabled"},
            "stream": True,
        },
        upstream_model="reasoning-model",
        provider="generic-chat-completion-api",
    )

    assert result["thinking"] == {"type": "enabled"}


def test_zai_provider_can_opt_into_thinking_passthrough():
    result = responses_to_chat(
        {
            "input": [{"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Hi"}]}],
            "thinking": {"type": "enabled"},
            "stream": True,
        },
        upstream_model="glm-5.2",
        provider="zai",
    )

    assert result["thinking"] == {"type": "enabled"}


def test_encrypted_content_preserved_in_reasoning_only():
    encrypted = "anthropic-thinking-v1:eyJ0eXBlIjoidGhpbmtpbmciLCJ0aGlua2luZyI6InRlc3QiLCJzaWduYXR1cmUiOiJzaWcifQ=="
    input_items = [
        {
            "type": "reasoning",
            "summary": [{"type": "summary_text", "text": "test"}],
            "encrypted_content": encrypted,
        },
        {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "Q"}]},
    ]

    messages = responses_input_to_messages(input_items)
    reasoning_msgs = [message for message in messages if message.get("_reasoning_only")]
    assert len(reasoning_msgs) == 1
    assert reasoning_msgs[0]["encrypted_content"] == encrypted


def test_reasoning_turn_fixture_roundtrip_chat():
    payload = json.loads((FIXTURES / "reasoning_turn.json").read_text())
    body = {"model": "deepseek", "input": payload["input"], "thinking": True, "stream": True}
    validate_responses_input(body)
    out = responses_to_chat(body, "deepseek-chat", provider="deepseek")
    assert out["thinking"] == {"type": "enabled"}
    assert any(message.get("reasoning_content") for message in out["messages"] if message.get("role") == "assistant")
    tool_names = [
        call["function"]["name"]
        for message in out["messages"]
        for call in message.get("tool_calls") or []
    ]
    assert "local_shell" in tool_names


def test_reasoning_turn_fixture_roundtrip_anthropic():
    payload = json.loads((FIXTURES / "reasoning_turn.json").read_text())
    body = {"model": "slug", "input": payload["input"], "thinking": True}
    validate_responses_input(body)
    anthropic_body = responses_to_anthropic(body, "claude-real", 4096)
    assert anthropic_body["messages"]
    thinking_blocks = [
        block
        for message in anthropic_body["messages"]
        if message.get("role") == "assistant"
        for block in message.get("content") or []
        if isinstance(block, dict) and block.get("type") == "thinking"
    ]
    assert thinking_blocks
    response_payload = anthropic_to_response(
        {
            "id": "msg_reason",
            "created_at": 1,
            "usage": {"input_tokens": 1, "output_tokens": 1},
            "content": [
                {"type": "thinking", "thinking": "Plan a shell command.", "signature": "sig"},
                {"type": "text", "text": "Use echo to verify the environment."},
                {"type": "tool_use", "id": "call_reason_shell", "name": "local_shell", "input": {"command": "echo plan"}},
            ],
        },
        "slug",
    )
    assert response_payload["output"][0]["type"] == "reasoning"
    assert response_payload["output"][-1]["type"] == "local_shell_call"
    assert response_payload["output"][-1]["action"]["command"] == "echo plan"
