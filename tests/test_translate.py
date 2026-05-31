from __future__ import annotations

import json

import pytest

from codex_shim import translate as translate_module
from codex_shim.translate import (
    ResponsesInputError,
    anthropic_to_response,
    chat_completion_to_response,
    responses_to_anthropic,
    responses_to_chat,
    validate_responses_input,
)


def test_responses_to_chat_text_input():
    body = {"model": "slug", "instructions": "System", "input": "Hello", "stream": True, "max_output_tokens": 99}
    out = responses_to_chat(body, "real-model")
    assert out["model"] == "real-model"
    assert out["stream"] is True
    assert out["max_tokens"] == 99
    assert out["messages"] == [{"role": "system", "content": "System"}, {"role": "user", "content": "Hello"}]


def test_responses_to_chat_preserves_reasoning_and_effort_for_deepseek():
    body = {
        "model": "slug",
        "reasoning_effort": "high",
        "input": [
            {"type": "reasoning", "summary": [{"type": "summary_text", "text": "prior thought"}]},
            {"type": "message", "role": "assistant", "content": [{"type": "output_text", "text": "prior answer"}]},
            {"type": "message", "role": "developer", "content": [{"type": "input_text", "text": "rules"}]},
            {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "next"}]},
        ],
    }

    out = responses_to_chat(body, "deepseek-reasoner")

    assert out["reasoning_effort"] == "high"
    assert out["messages"] == [
        {"role": "assistant", "content": "prior answer", "reasoning_content": "prior thought"},
        {"role": "system", "content": "rules"},
        {"role": "user", "content": "next"},
    ]


def test_responses_to_chat_deepseek_safe_mode_disables_thinking():
    body = {
        "model": "slug",
        "input": [
            {"type": "reasoning", "summary": [{"type": "summary_text", "text": "prior thought"}]},
            {"type": "message", "role": "assistant", "content": [{"type": "output_text", "text": "prior answer"}]},
            {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "next"}]},
        ],
    }

    out = responses_to_chat(body, "deepseek-reasoner", "deepseek", thinking_behavior="force_disabled")

    assert out["thinking"] == {"type": "disabled"}
    assert out["messages"] == [
        {"role": "assistant", "content": "prior answer"},
        {"role": "user", "content": "next"},
    ]


def test_responses_to_chat_provider_policy_pass_drop_and_keep_all():
    body = {"model": "slug", "thinking": True, "input": "hi"}

    zai = responses_to_chat(body, "glm-5.1", "zai")
    moonshot = responses_to_chat(body, "moonshot-v1-32k", "moonshot")
    kimi = responses_to_chat(body, "kimi-k2", "moonshot")

    assert zai["thinking"] == {"type": "enabled"}
    assert "thinking" not in moonshot
    assert kimi["thinking"] == {"type": "enabled", "keep": "all"}


def test_responses_to_chat_sanitizes_and_merges_strict_provider_messages():
    body = {
        "model": "slug",
        "instructions": "System\x00one",
        "input": [
            {"type": "message", "role": "developer", "content": [{"type": "input_text", "text": "rules\x00two"}]},
            {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "hi\x00"}]},
            {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "again\x01"}]},
            {"type": "function_call", "call_id": "call\x000", "name": "tool", "arguments": "{\"x\":\"y\x00\"}"},
        ],
    }

    out = responses_to_chat(body, "kimi-k2")

    assert out["messages"] == [
        {"role": "system", "content": "Systemone\n\nrulestwo"},
        {"role": "user", "content": "hi\n\nagain"},
        {
            "role": "assistant",
            "content": None,
            "tool_calls": [
                {"id": "call0", "type": "function", "function": {"name": "tool", "arguments": "{\"x\":\"y\"}"}}
            ],
        },
    ]


def test_responses_function_tools_convert_to_chat_shape():
    body = {
        "model": "slug",
        "input": "Hi",
        "tools": [{"type": "function", "name": "do_work", "description": "Do work", "parameters": {"type": "object"}}],
    }
    out = responses_to_chat(body, "real-model")
    assert out["tools"] == [
        {
            "type": "function",
            "function": {"name": "do_work", "description": "Do work", "parameters": {"type": "object"}},
        }
    ]


def test_native_responses_tools_get_function_fallbacks_for_byok_chat():
    body = {
        "model": "slug",
        "input": "Use the browser",
        "tool_choice": {"type": "computer_use_preview"},
        "tools": [
            {"type": "computer_use_preview"},
            {"type": "web_search_preview"},
            {"type": "apply_patch"},
            {"type": "function", "name": "list_mcp_resources", "parameters": {"type": "object"}},
        ],
    }

    out = responses_to_chat(body, "real-model")

    functions = [tool["function"] for tool in out["tools"]]
    assert [fn["name"] for fn in functions] == ["computer_use", "web_search", "apply_patch", "list_mcp_resources"]
    assert functions[0]["parameters"]["required"] == ["action"]
    assert functions[1]["parameters"]["required"] == ["query"]
    assert functions[2]["parameters"]["required"] == ["patch"]
    assert out["tool_choice"] == {"type": "function", "function": {"name": "computer_use"}}


def test_native_responses_tools_get_anthropic_fallbacks():
    body = {
        "model": "slug",
        "input": "Search",
        "tools": [{"type": "web_search_preview"}, {"type": "computer_use_preview"}],
    }

    out = responses_to_anthropic(body, "claude-real", 123)

    assert [tool["name"] for tool in out["tools"]] == ["web_search", "computer_use"]
    assert out["tools"][0]["input_schema"]["required"] == ["query"]
    assert out["tools"][1]["input_schema"]["required"] == ["action"]


def test_tool_search_and_custom_tool_call_get_function_fallbacks():
    body = {
        "model": "slug",
        "input": "Find tools",
        "tools": [
            {"type": "tool_search"},
            {"type": "custom_tool_call", "name": "deploy_app"},
        ],
    }

    out = responses_to_chat(body, "real-model")

    assert [tool["function"]["name"] for tool in out["tools"]] == ["tool_search", "deploy_app"]
    assert out["tools"][0]["function"]["parameters"]["required"] == ["query"]


def test_responses_input_accepts_custom_tool_and_tool_search_output_items():
    body = {
        "model": "slug",
        "input": [
            {"type": "custom_tool_call", "call_id": "call_custom", "name": "deploy_app", "arguments": '{"env":"prod"}'},
            {"type": "custom_tool_call_output", "call_id": "call_custom", "output": "deployed"},
            {"type": "tool_search_call", "call_id": "call_search", "arguments": '{"query":"grep"}'},
            {"type": "tool_search_output", "call_id": "call_search", "output": "found 3 tools"},
            {"type": "message", "role": "user", "content": [{"type": "input_text", "text": "continue"}]},
        ],
    }

    out = responses_to_chat(body, "real-model")

    assert out["messages"] == [
        {
            "role": "assistant",
            "content": None,
            "tool_calls": [
                {"id": "call_custom", "type": "function", "function": {"name": "deploy_app", "arguments": '{"env":"prod"}'}},
            ],
        },
        {"role": "tool", "tool_call_id": "call_custom", "content": "deployed"},
        {
            "role": "assistant",
            "content": None,
            "tool_calls": [
                {"id": "call_search", "type": "function", "function": {"name": "tool_search", "arguments": '{"query":"grep"}'}},
            ],
        },
        {"role": "tool", "tool_call_id": "call_search", "content": "found 3 tools"},
        {"role": "user", "content": "continue"},
    ]


def test_responses_to_anthropic_messages():
    body = {"model": "slug", "input": [{"role": "user", "content": [{"type": "input_text", "text": "Hi"}]}]}
    out = responses_to_anthropic(body, "claude-real", 123)
    assert out["model"] == "claude-real"
    assert out["max_tokens"] == 123
    assert out["messages"] == [{"role": "user", "content": "Hi"}]


def test_responses_to_anthropic_converts_tools_and_reasoning():
    prior = chat_completion_to_response(
        {
            "choices": [
                {
                    "message": {
                        "reasoning_content": "Plan the lookup.",
                        "content": "Calling the tool.",
                    }
                }
            ]
        },
        "deepseek",
    )
    body = {
        "model": "slug",
        "instructions": "System rules",
        "tools": [{"type": "function", "name": "lookup", "description": "Lookup data", "parameters": {"type": "object"}}],
        "input": [
            prior["output"][0],
            prior["output"][1],
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
    assert out["usage"] == {"input_tokens": 10, "output_tokens": 5}
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


def test_responses_to_chat_preserves_input_images_for_vision_models():
    body = {
        "model": "slug",
        "input": [
            {
                "role": "user",
                "content": [
                    {"type": "input_text", "text": "What is visible?"},
                    {"type": "input_image", "image_url": "data:image/png;base64,AAA", "detail": "high"},
                ],
            }
        ],
    }

    out = responses_to_chat(body, "vision-model")

    assert out["messages"] == [
        {
            "role": "user",
            "content": [
                {"type": "text", "text": "What is visible?"},
                {"type": "image_url", "image_url": {"url": "data:image/png;base64,AAA", "detail": "high"}},
            ],
        }
    ]


def test_responses_to_chat_preserves_input_audio_for_audio_models():
    body = {
        "model": "slug",
        "input": [
            {
                "role": "user",
                "content": [
                    {"type": "input_audio", "input_audio": {"data": "data:audio/mpeg;base64,AAAA", "format": "mp3"}},
                    {"type": "input_text", "text": "Transcribe this."},
                ],
            }
        ],
    }

    out = responses_to_chat(body, "audio-model")

    assert out["messages"] == [
        {
            "role": "user",
            "content": [
                {"type": "input_audio", "input_audio": {"data": "data:audio/mpeg;base64,AAAA", "format": "mp3"}},
                {"type": "text", "text": "Transcribe this."},
            ],
        }
    ]


def test_responses_to_chat_infers_input_audio_format_from_data_url():
    body = {"model": "slug", "input": {"type": "input_audio", "data": "data:audio/mpeg;base64,AAAA"}}

    out = responses_to_chat(body, "audio-model")

    assert out["messages"] == [
        {"role": "user", "content": [{"type": "input_audio", "input_audio": {"data": "data:audio/mpeg;base64,AAAA", "format": "mp3"}}]}
    ]


def test_responses_to_chat_rejects_unsupported_audio_format():
    body = {"model": "slug", "input": {"type": "input_audio", "data": "AAAA", "format": "aac"}}

    with pytest.raises(ResponsesInputError, match="Unsupported input_audio format"):
        responses_to_chat(body, "audio-model")


def test_responses_to_chat_rejects_unsupported_audio_media_type():
    body = {"model": "slug", "input": {"type": "input_audio", "data": "data:audio/aac;base64,AAAA"}}

    with pytest.raises(ResponsesInputError, match="Unsupported input_audio media type"):
        responses_to_chat(body, "audio-model")


def test_responses_to_chat_rejects_oversized_inline_media(monkeypatch):
    monkeypatch.setattr(translate_module, "MAX_INLINE_MEDIA_BYTES", 2)
    body = {"model": "slug", "input": {"type": "input_audio", "data": "data:audio/wav;base64,AAAA"}}

    with pytest.raises(ResponsesInputError, match="exceeds 2 bytes"):
        responses_to_chat(body, "audio-model")


def test_responses_to_chat_rejects_unknown_content_part_type():
    body = {
        "model": "slug",
        "input": [{"role": "user", "content": [{"type": "file", "file_id": "file_123"}]}],
    }

    with pytest.raises(ResponsesInputError, match="Unsupported Responses content part type: file"):
        responses_to_chat(body, "real-model")


def test_top_level_input_audio_reaches_openai_chat_payload():
    body = {"model": "slug", "input": {"type": "input_audio", "data": "AAAA", "format": "wav"}}

    out = responses_to_chat(body, "audio-model")

    assert out["messages"] == [
        {"role": "user", "content": [{"type": "input_audio", "input_audio": {"data": "AAAA", "format": "wav"}}]}
    ]


def test_computer_call_output_screenshot_reaches_openai_chat_vision():
    body = {
        "model": "slug",
        "input": [
            {"type": "computer_call_output", "call_id": "cu_1", "output": {"type": "input_image", "image_url": "data:image/png;base64,BBB"}}
        ],
    }

    out = responses_to_chat(body, "vision-model")

    assert out["messages"] == [
        {
            "role": "user",
            "content": [
                {"type": "text", "text": "Computer output for cu_1."},
                {"type": "image_url", "image_url": {"url": "data:image/png;base64,BBB"}},
            ],
        }
    ]


def test_function_call_output_visual_feedback_adds_followup_image_message():
    body = {
        "model": "slug",
        "input": [
            {"type": "function_call", "call_id": "call_1", "name": "computer_use", "arguments": "{}"},
            {"type": "function_call_output", "call_id": "call_1", "output": [{"type": "input_image", "image_url": "data:image/png;base64,CCC"}]},
        ],
    }

    out = responses_to_chat(body, "vision-model")

    assert out["messages"][1] == {"role": "tool", "tool_call_id": "call_1", "content": "[image]"}
    assert out["messages"][2] == {
        "role": "user",
        "content": [
            {"type": "text", "text": "Visual tool output for call_1."},
            {"type": "image_url", "image_url": {"url": "data:image/png;base64,CCC"}},
        ],
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
    assert out["output"][0]["encrypted_content"].startswith("anthropic-thinking-v1:")


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
    decoded = json.loads(
        __import__("base64")
        .urlsafe_b64decode(out["output"][0]["encrypted_content"].removeprefix("anthropic-thinking-v1:").encode("ascii"))
        .decode("utf-8")
    )
    assert decoded["thinking"] == "First thought.\nSecond thought."


def test_responses_to_chat_replays_reasoning_on_same_assistant_tool_call_message():
    body = {
        "model": "deepseek",
        "input": [
            {
                "id": "rs_0",
                "type": "reasoning",
                "summary": [{"type": "summary_text", "text": "Need the current date before answering."}],
            },
            {
                "id": "msg_0",
                "type": "message",
                "role": "assistant",
                "content": [{"type": "output_text", "text": "Let me check the date."}],
            },
            {
                "id": "call_date",
                "type": "function_call",
                "call_id": "call_date",
                "name": "get_date",
                "arguments": "{}",
            },
            {
                "type": "function_call_output",
                "call_id": "call_date",
                "output": "2026-05-26",
            },
        ],
    }

    out = responses_to_chat(body, "deepseek-v4-pro", "deepseek")

    assert out["messages"] == [
        {
            "role": "assistant",
            "content": "Let me check the date.",
            "tool_calls": [
                {
                    "id": "call_date",
                    "type": "function",
                    "function": {"name": "get_date", "arguments": "{}"},
                }
            ],
            "reasoning_content": "Need the current date before answering.",
        },
        {"role": "tool", "tool_call_id": "call_date", "content": "2026-05-26"},
    ]


def test_responses_to_chat_replays_reasoning_when_tool_call_has_no_message_text():
    body = {
        "model": "deepseek",
        "input": [
            {
                "type": "reasoning",
                "summary": [{"type": "summary_text", "text": "Need the current date before answering."}],
            },
            {
                "type": "function_call",
                "call_id": "call_date",
                "name": "get_date",
                "arguments": "{}",
            },
            {
                "type": "function_call_output",
                "call_id": "call_date",
                "output": "2026-05-26",
            },
        ],
    }

    out = responses_to_chat(body, "deepseek-v4-pro", "deepseek")

    assert out["messages"] == [
        {
            "role": "assistant",
            "content": None,
            "tool_calls": [
                {
                    "id": "call_date",
                    "type": "function",
                    "function": {"name": "get_date", "arguments": "{}"},
                }
            ],
            "reasoning_content": "Need the current date before answering.",
        },
        {"role": "tool", "tool_call_id": "call_date", "content": "2026-05-26"},
    ]


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


def test_tool_call_to_response_item_emits_native_web_search_call():
    from codex_shim.translate import tool_call_to_response_item

    item = tool_call_to_response_item(
        {
            "id": "call_search",
            "function": {"name": "web_search", "arguments": '{"query":"docs"}'},
        }
    )
    assert item["type"] == "web_search_call"
    assert item["action"]["query"] == "docs"


def test_tool_call_to_response_item_emits_native_local_shell_call():
    from codex_shim.translate import tool_call_to_response_item

    item = tool_call_to_response_item(
        {
            "id": "call_shell",
            "function": {"name": "local_shell", "arguments": '{"command":"ls"}'},
        }
    )
    assert item["type"] == "local_shell_call"
    assert item["action"]["command"] == "ls"


def test_tool_call_to_response_item_emits_native_image_generation_call():
    from codex_shim.translate import tool_call_to_response_item

    item = tool_call_to_response_item(
        {
            "id": "call_img",
            "function": {"name": "image_generation", "arguments": '{"prompt":"neon fox"}'},
        }
    )
    assert item["type"] == "image_generation_call"
    assert item["action"]["prompt"] == "neon fox"
    assert item["revised_prompt"] == "neon fox"
