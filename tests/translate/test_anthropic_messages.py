from __future__ import annotations

from codex_shim.translate import anthropic_messages_to_chat, chat_completion_to_anthropic_message


def test_anthropic_messages_to_chat_preserves_tools_images_and_tool_results():
    body = {
        "model": "slug",
        "system": [{"type": "text", "text": "System"}],
        "messages": [
            {
                "role": "assistant",
                "content": [{"type": "tool_use", "id": "toolu_1", "name": "lookup", "input": {"q": "repo"}}],
            },
            {
                "role": "user",
                "content": [
                    {
                        "type": "tool_result",
                        "tool_use_id": "toolu_1",
                        "content": [
                            {"type": "text", "text": "result"},
                            {"type": "image", "source": {"type": "base64", "media_type": "image/jpeg", "data": "BBB"}},
                        ],
                    },
                    {"type": "text", "text": "Next"},
                    {"type": "image", "source": {"type": "base64", "media_type": "image/png", "data": "AAA"}},
                ],
            },
        ],
        "max_tokens": 99,
        "stop_sequences": ["END"],
        "stream": True,
        "tools": [{"name": "lookup", "description": "Lookup", "input_schema": {"type": "object"}}],
        "tool_choice": {"type": "tool", "name": "lookup"},
    }

    out = anthropic_messages_to_chat(body, "real-model")

    assert out["model"] == "real-model"
    assert out["max_tokens"] == 99
    assert out["stop"] == ["END"]
    assert out["stream_options"] == {"include_usage": True}
    assert out["tool_choice"] == {"type": "function", "function": {"name": "lookup"}}
    assert out["tools"] == [
        {
            "type": "function",
            "function": {"name": "lookup", "description": "Lookup", "parameters": {"type": "object"}},
        }
    ]
    assert out["messages"] == [
        {"role": "system", "content": "System"},
        {
            "role": "assistant",
            "content": "",
            "tool_calls": [
                {"id": "toolu_1", "type": "function", "function": {"name": "lookup", "arguments": "{\"q\":\"repo\"}"}}
            ],
        },
        {"role": "tool", "tool_call_id": "toolu_1", "content": "result\n[image]"},
        {
            "role": "user",
            "content": [
                {"type": "text", "text": "Visual tool result for toolu_1."},
                {"type": "image_url", "image_url": {"url": "data:image/jpeg;base64,BBB"}},
                {"type": "text", "text": "Next"},
                {"type": "image_url", "image_url": {"url": "data:image/png;base64,AAA"}},
            ],
        },
    ]


def test_chat_completion_to_anthropic_message_preserves_text_tools_and_usage():
    payload = {
        "id": "chatcmpl_fake",
        "choices": [
            {
                "finish_reason": "tool_calls",
                "message": {
                    "role": "assistant",
                    "content": "hello",
                    "tool_calls": [
                        {"id": "call_1", "type": "function", "function": {"name": "lookup", "arguments": "{\"q\":\"repo\"}"}},
                        {"id": "call_2", "type": "function", "function": {"name": "broken", "arguments": "{"}},
                    ],
                },
            }
        ],
        "usage": {"prompt_tokens": 4, "completion_tokens": 2, "total_tokens": 6},
    }

    out = chat_completion_to_anthropic_message(payload, "shim-model")

    assert out["id"] == "chatcmpl_fake"
    assert out["type"] == "message"
    assert out["role"] == "assistant"
    assert out["model"] == "shim-model"
    assert out["stop_reason"] == "tool_use"
    assert out["usage"] == {"input_tokens": 4, "output_tokens": 2}
    assert out["content"] == [
        {"type": "text", "text": "hello"},
        {"type": "tool_use", "id": "call_1", "name": "lookup", "input": {"q": "repo"}},
        {"type": "tool_use", "id": "call_2", "name": "broken", "input": {"_raw": "{"}},
    ]


def test_chat_completion_to_anthropic_message_tool_only_uses_empty_content():
    payload = {
        "id": "chatcmpl_tool_only",
        "choices": [
            {
                "finish_reason": "tool_calls",
                "message": {
                    "role": "assistant",
                    "content": "",
                    "tool_calls": [
                        {"id": "call_1", "type": "function", "function": {"name": "lookup", "arguments": "{\"q\":\"repo\"}"}},
                    ],
                },
            }
        ],
        "usage": {"prompt_tokens": 2, "completion_tokens": 1, "total_tokens": 3},
    }

    out = chat_completion_to_anthropic_message(payload, "shim-model")

    assert out["content"] == [
        {"type": "tool_use", "id": "call_1", "name": "lookup", "input": {"q": "repo"}},
    ]
    assert out["stop_reason"] == "tool_use"


def test_chat_completion_to_anthropic_message_includes_reasoning():
    payload = {
        "id": "chatcmpl_reason",
        "choices": [
            {
                "finish_reason": "stop",
                "message": {
                    "role": "assistant",
                    "content": "answer",
                    "reasoning_content": "thinking hard",
                },
            }
        ],
        "usage": {"prompt_tokens": 3, "completion_tokens": 2, "total_tokens": 5},
    }

    out = chat_completion_to_anthropic_message(payload, "shim-model")

    assert out["content"] == [
        {"type": "thinking", "thinking": "thinking hard"},
        {"type": "text", "text": "answer"},
    ]
