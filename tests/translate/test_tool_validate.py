from __future__ import annotations

import pytest

from codex_shim.translate.tool_validate import ToolValidationError, validate_chat_tools


def test_validate_chat_tools_rejects_duplicate_names():
    tools = [
        {"type": "function", "function": {"name": "dup", "parameters": {"type": "object"}}},
        {"type": "function", "function": {"name": "dup", "parameters": {"type": "object"}}},
    ]
    with pytest.raises(ToolValidationError, match="duplicate"):
        validate_chat_tools(tools)


def test_validate_chat_tools_rejects_invalid_openrouter_name():
    tools = [{"type": "function", "function": {"name": "bad name!", "parameters": {"type": "object"}}}]
    with pytest.raises(ToolValidationError, match="must match"):
        validate_chat_tools(tools, provider="openrouter")


def test_validate_chat_tools_accepts_valid_tools():
    tools = [{"type": "function", "function": {"name": "list_files", "parameters": {"type": "object"}}}]
    validate_chat_tools(tools, provider="openrouter")
