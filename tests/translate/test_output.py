from __future__ import annotations

from codex_shim.translate import (
    chat_completion_to_response,
)


def test_chat_completion_to_response_strips_think():
    payload = {
        "id": "chatcmpl_1",
        "choices": [{"message": {"role": "assistant", "content": "<think>secret</think>Hello"}}],
    }
    out = chat_completion_to_response(payload, "slug")
    assert out["model"] == "slug"
    assert out["output"][0]["content"][0]["text"] == "Hello"


def test_chat_completion_to_response_preserves_reasoning_content_for_tool_calls():
    payload = {
        "id": "chatcmpl_1",
        "choices": [
            {
                "message": {
                    "role": "assistant",
                    "reasoning_content": "Need the current date before answering.",
                    "content": "Let me check the date.",
                    "tool_calls": [
                        {
                            "id": "call_date",
                            "type": "function",
                            "function": {"name": "get_date", "arguments": "{}"},
                        }
                    ],
                }
            }
        ],
    }

    out = chat_completion_to_response(payload, "deepseek-v4-pro")

    assert [item["type"] for item in out["output"]] == ["reasoning", "message", "function_call"]
    assert out["output"][0]["summary"][0]["text"] == "Need the current date before answering."
    assert out["output"][0]["encrypted_content"] is None


def test_chat_completion_to_response_preserves_thought_signature_on_function_call():
    payload = {
        "id": "chatcmpl_gemini",
        "choices": [
            {
                "message": {
                    "role": "assistant",
                    "content": "",
                    "tool_calls": [
                        {
                            "id": "call_gemini",
                            "type": "function",
                            "thought_signature": "sig-abc123",
                            "function": {"name": "lookup", "arguments": "{\"q\":\"repo\"}"},
                        }
                    ],
                }
            }
        ],
    }

    out = chat_completion_to_response(payload, "gemini-model")

    assert out["output"][0]["type"] == "function_call"
    assert out["output"][0]["thought_signature"] == "sig-abc123"


def test_chat_completion_to_response_normalizes_cached_usage():
    payload = {
        "id": "chatcmpl_1",
        "choices": [{"message": {"role": "assistant", "content": "Hello"}}],
        "usage": {
            "prompt_tokens": 10,
            "completion_tokens": 2,
            "total_tokens": 12,
            "prompt_tokens_details": {"cached_tokens": 8},
            "completion_tokens_details": {"reasoning_tokens": 1},
        },
    }

    out = chat_completion_to_response(payload, "slug")

    assert out["usage"] == {
        "input_tokens": 10,
        "output_tokens": 2,
        "total_tokens": 12,
        "input_tokens_details": {"cached_tokens": 8},
        "output_tokens_details": {"reasoning_tokens": 1},
    }


def test_chat_completion_to_response_preserves_minimax_reasoning_details():
    payload = {
        "id": "chatcmpl_1",
        "created": 0,
        "choices": [
            {
                "message": {
                    "role": "assistant",
                    "content": "Answer",
                    "reasoning_details": [
                        {"type": "reasoning.text", "text": "First thought."},
                        {"type": "reasoning.text", "text": "Second thought."},
                    ],
                }
            }
        ],
    }

    out = chat_completion_to_response(payload, "MiniMax-M2")

    assert out["output"][0]["type"] == "reasoning"
    assert out["output"][0]["summary"][0]["text"] == "First thought.\nSecond thought."
    assert out["output"][1]["content"][0]["text"] == "Answer"
    assert out["output"][0]["encrypted_content"] is None
