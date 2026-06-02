from __future__ import annotations

from typing import Any


class ToolPolicy:
    """Centralized tool-dispatch metadata hooks."""

    def summarize(self, body: dict[str, Any]) -> dict[str, Any]:
        tools = body.get("tools")
        if not isinstance(tools, list):
            return {"tool_count": 0}
        tool_types: list[str] = []
        for tool in tools:
            if isinstance(tool, dict):
                tool_types.append(str(tool.get("type") or "unknown"))
        return {"tool_count": len(tools), "tool_types": tool_types}
