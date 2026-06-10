"""History filtering for delegate-mode conversation replay."""
from __future__ import annotations

from typing import Any

_DELEGATE_TOOL_ITEM_TYPES = frozenset(
    {
        "function_call",
        "function_call_output",
        "local_shell_call",
        "web_search_call",
        "image_generation_call",
        "tool_search_call",
        "mcp_tool_call",
        "mcp_tool_call_output",
        "custom_tool_call",
        "custom_tool_call_output",
        "tool_search_output",
        "tool_result",
        "computer_call",
        "computer_call_output",
    }
)


def filter_delegate_history_items(items: list[dict[str, Any]]) -> list[dict[str, Any]]:
    """Keep user/assistant messages and reasoning for cursor delegate history."""
    kept: list[dict[str, Any]] = []
    suppressed_tools = 0
    for item in items:
        if not isinstance(item, dict):
            continue
        item_type = str(item.get("type") or "")
        if item_type in _DELEGATE_TOOL_ITEM_TYPES or item_type.endswith("_call") or item_type.endswith("_output"):
            suppressed_tools += 1
            continue
        if item_type in {"message", "reasoning", "compaction", "context_compaction", "compaction_trigger"}:
            kept.append(item)
            continue
        role = item.get("role")
        if role in {"user", "assistant", "developer"}:
            kept.append(item)
    if suppressed_tools:
        kept.append(
            {
                "type": "message",
                "role": "developer",
                "content": [
                    {
                        "type": "input_text",
                        "text": f"Prior turn: Cursor completed {suppressed_tools} tool action(s) autonomously.",
                    }
                ],
            }
        )
    return kept
