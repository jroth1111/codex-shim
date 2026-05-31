from __future__ import annotations

import pytest

from codex_shim.translate import (
    ResponsesInputError,
    anthropic_to_response,
    responses_to_anthropic,
    responses_to_chat,
)


def test_responses_to_anthropic_skips_summary_only_reasoning_without_signature():
    body = {
        "model": "slug",
        "input": [
            {
                "type": "reasoning",
                "summary": [{"type": "summary_text", "text": "Plan without blob."}],
            },
            {"role": "user", "content": "next"},
        ],
    }
    out = responses_to_anthropic(body, "claude-real", 4096)
    assert out["messages"] == [{"role": "user", "content": "next"}]


def test_responses_to_anthropic_drops_unsigned_thinking_blob_on_replay():
    from codex_shim.thinking import encode_thinking_payload

    unsigned = encode_thinking_payload({"type": "thinking", "thinking": "unsigned", "signature": ""})
    body = {
        "model": "slug",
        "input": [
            {"type": "reasoning", "summary": [{"type": "summary_text", "text": "unsigned"}], "encrypted_content": unsigned},
            {"role": "user", "content": "next"},
        ],
    }
    out = responses_to_anthropic(body, "claude-real", 4096)
    assert out["messages"] == [{"role": "user", "content": "next"}]


def test_responses_to_anthropic_messages():
    body = {"model": "slug", "input": [{"role": "user", "content": [{"type": "input_text", "text": "Hi"}]}]}
    out = responses_to_anthropic(body, "claude-real", 123)
    assert out["model"] == "claude-real"
    assert out["max_tokens"] == 123
    assert out["messages"] == [{"role": "user", "content": "Hi"}]


def test_responses_to_anthropic_converts_tools_and_reasoning():
    from codex_shim.thinking import encode_thinking_payload

    signed_reasoning = {
        "id": "rs_0",
        "type": "reasoning",
        "status": "completed",
        "summary": [{"type": "summary_text", "text": "Plan the lookup."}],
        "encrypted_content": encode_thinking_payload(
            {"type": "thinking", "thinking": "Plan the lookup.", "signature": "sig"}
        ),
    }
    prior_message = {
        "id": "msg_0",
        "type": "message",
        "status": "completed",
        "role": "assistant",
        "content": [{"type": "output_text", "text": "Calling the tool.", "annotations": []}],
    }
    body = {
        "model": "slug",
        "instructions": "System rules",
        "tools": [{"type": "function", "name": "lookup", "description": "Lookup data", "parameters": {"type": "object"}}],
        "input": [
            signed_reasoning,
            prior_message,
            {"type": "function_call", "call_id": "call_lookup", "name": "lookup", "arguments": '{"q":"weather"}'},
            {"type": "function_call_output", "call_id": "call_lookup", "output": "sunny"},
        ],
    }

    out = responses_to_anthropic(body, "claude-real", 123)

    assert out["system"] == "System rules"
    assert out["tools"] == [
        {"name": "lookup", "description": "Lookup data", "input_schema": {"type": "object"}}
    ]
    assert out["messages"][0]["role"] == "assistant"
    assert out["messages"][0]["content"][0]["type"] == "thinking"
    assert out["messages"][0]["content"][0]["thinking"] == "Plan the lookup."
    assert out["messages"][0]["content"][1] == {"type": "text", "text": "Calling the tool."}
    assert out["messages"][0]["content"][2] == {
        "type": "tool_use",
        "id": "call_lookup",
        "name": "lookup",
        "input": {"q": "weather"},
    }
    assert out["messages"][1] == {
        "role": "user",
        "content": [{"type": "tool_result", "tool_use_id": "call_lookup", "content": "sunny"}],
    }


def test_anthropic_to_response_converts_thinking_text_and_tool_use():
    payload = {
        "id": "msg_123",
        "created_at": 99,
        "usage": {"input_tokens": 10, "output_tokens": 5},
        "content": [
            {"type": "thinking", "thinking": "Plan first.", "signature": "sig"},
            {"type": "text", "text": "I will call a tool."},
            {"type": "tool_use", "id": "toolu_1", "name": "lookup", "input": {"q": "weather"}},
        ],
    }

    out = anthropic_to_response(payload, "claude-real")

    assert out["id"] == "msg_123"
    assert out["model"] == "claude-real"
    assert out["usage"] == {"input_tokens": 10, "output_tokens": 5, "total_tokens": 15}
    assert [item["type"] for item in out["output"]] == ["reasoning", "message", "function_call"]
    assert out["output"][0]["summary"] == [{"type": "summary_text", "text": "Plan first."}]
    assert out["output"][0]["encrypted_content"].startswith("anthropic-thinking-v1:")
    assert out["output"][1]["content"][0]["text"] == "I will call a tool."
    assert out["output"][2] == {
        "id": "toolu_1",
        "type": "function_call",
        "status": "completed",
        "call_id": "toolu_1",
        "name": "lookup",
        "arguments": '{"q":"weather"}',
    }


def test_responses_to_anthropic_preserves_visual_feedback_as_image_blocks():
    body = {
        "model": "slug",
        "input": [
            {
                "role": "user",
                "content": [
                    {"type": "input_text", "text": "Inspect this."},
                    {"type": "input_image", "image_url": "data:image/png;base64,DDD"},
                ],
            },
            {"type": "computer_call_output", "call_id": "cu_2", "output": {"type": "input_image", "image_url": "https://example.invalid/screen.png"}},
        ],
    }

    out = responses_to_anthropic(body, "claude-real", 123)

    assert out["messages"] == [
        {
            "role": "user",
            "content": [
                {"type": "text", "text": "Inspect this."},
                {"type": "image", "source": {"type": "base64", "media_type": "image/png", "data": "DDD"}},
                {"type": "text", "text": "Computer output for cu_2."},
                {"type": "image", "source": {"type": "url", "url": "https://example.invalid/screen.png"}},
            ],
        }
    ]


def test_anthropic_to_response_normalizes_cache_usage():
    payload = {
        "id": "msg_1",
        "content": [{"type": "text", "text": "Hello"}],
        "usage": {
            "input_tokens": 10,
            "cache_read_input_tokens": 8,
            "cache_creation_input_tokens": 2,
            "output_tokens": 3,
        },
    }

    out = anthropic_to_response(payload, "slug")

    assert out["usage"] == {
        "input_tokens": 10,
        "output_tokens": 3,
        "total_tokens": 13,
        "input_tokens_details": {
            "cached_tokens": 8,
            "cache_read_input_tokens": 8,
            "cache_creation_input_tokens": 2,
        },
    }
