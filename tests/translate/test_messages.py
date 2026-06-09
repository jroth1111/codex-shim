from __future__ import annotations

from codex_shim.translate.messages import (
    drop_reasoning_content,
    merge_consecutive_messages,
    sanitize_chat_messages,
)


def test_sanitize_chat_messages_strips_null_bytes_and_tool_ids():
    messages = [
        {"role": "system", "content": "System\x00one"},
        {"role": "user", "content": "hi\x00"},
        {
            "role": "assistant",
            "content": None,
            "tool_calls": [
                {"id": "call\x000", "type": "function", "function": {"name": "tool", "arguments": "{\"x\":\"y\x00\"}"}}
            ],
        },
    ]

    cleaned = sanitize_chat_messages(messages)

    assert cleaned == [
        {"role": "system", "content": "Systemone"},
        {"role": "user", "content": "hi"},
        {
            "role": "assistant",
            "content": "",
            "tool_calls": [
                {"id": "call0", "type": "function", "function": {"name": "tool", "arguments": "{\"x\":\"y\"}"}}
            ],
        },
    ]


def test_merge_consecutive_messages_merges_same_role_text():
    messages = [
        {"role": "system", "content": "rules"},
        {"role": "system", "content": "more"},
        {"role": "user", "content": "hi"},
        {"role": "user", "content": "again"},
    ]

    merged = merge_consecutive_messages(messages)

    assert merged == [
        {"role": "system", "content": "rules\n\nmore"},
        {"role": "user", "content": "hi\n\nagain"},
    ]


def test_drop_reasoning_content_skips_reasoning_only_rows():
    messages = [
        {"role": "assistant", "_reasoning_only": True, "reasoning_content": "hidden"},
        {"role": "assistant", "content": "visible", "reasoning_content": "stripped"},
    ]

    cleaned = drop_reasoning_content(messages)

    assert cleaned == [{"role": "assistant", "content": "visible"}]
