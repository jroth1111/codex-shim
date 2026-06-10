from __future__ import annotations

import pytest

from codex_shim.translate import (
    ResponsesInputError,
    responses_to_chat,
)


def test_responses_to_chat_text_input():
    body = {"model": "slug", "instructions": "System", "input": "Hello", "stream": True, "max_output_tokens": 99}
    out = responses_to_chat(body, "real-model")
    assert out["model"] == "real-model"
    assert out["stream"] is True
    assert out["max_tokens"] == 99
    assert out["messages"] == [{"role": "system", "content": "System"}, {"role": "user", "content": "Hello"}]


def test_responses_to_chat_skips_instructions_when_chained_from_previous():
    body = {"model": "slug", "instructions": "System", "input": "Hello"}
    out = responses_to_chat(body, "real-model", chained_from_previous=True)
    assert out["messages"] == [{"role": "user", "content": "Hello"}]


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
            "content": "",
            "tool_calls": [
                {"id": "call0", "type": "function", "function": {"name": "tool", "arguments": "{\"x\":\"y\"}"}}
            ],
        },
    ]


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
            "content": "",
            "tool_calls": [
                {"id": "call_custom", "type": "function", "function": {"name": "deploy_app", "arguments": '{"env":"prod"}'}},
            ],
        },
        {"role": "tool", "tool_call_id": "call_custom", "content": "deployed"},
        {
            "role": "assistant",
            "content": "",
            "tool_calls": [
                {"id": "call_search", "type": "function", "function": {"name": "tool_search", "arguments": '{"query":"grep"}'}},
            ],
        },
        {"role": "tool", "tool_call_id": "call_search", "content": "found 3 tools"},
        {"role": "user", "content": "continue"},
    ]


def test_responses_to_chat_rejects_unsupported_audio_format():
    body = {"model": "slug", "input": {"type": "input_audio", "data": "AAAA", "format": "aac"}}

    with pytest.raises(ResponsesInputError, match="Unsupported input_audio format"):
        responses_to_chat(body, "audio-model")


def test_responses_to_chat_rejects_unsupported_audio_media_type():
    body = {"model": "slug", "input": {"type": "input_audio", "data": "data:audio/aac;base64,AAAA"}}

    with pytest.raises(ResponsesInputError, match="Unsupported input_audio media type"):
        responses_to_chat(body, "audio-model")


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
            "content": "",
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
