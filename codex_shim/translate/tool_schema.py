from __future__ import annotations

import re
from typing import Any


def responses_tools_to_chat_tools(tools: Any) -> list[dict[str, Any]]:
    if not isinstance(tools, list):
        return []
    converted = []
    for tool in tools:
        function_tool = responses_tool_to_chat_function(tool)
        if function_tool:
            converted.append(function_tool)
    return converted


def responses_tool_to_chat_function(tool: Any) -> dict[str, Any] | None:
    if not isinstance(tool, dict):
        return None
    if tool.get("type") == "function" and "function" in tool:
        return tool
    name = responses_tool_function_name(tool)
    if not name:
        return None
    return {
        "type": "function",
        "function": {
            "name": name,
            "description": tool.get("description") or native_tool_description(tool),
            "parameters": tool.get("parameters") or native_tool_parameters(tool),
        },
    }


def responses_tool_function_name(tool: dict[str, Any]) -> str:
    fn = tool.get("function")
    if isinstance(fn, dict) and fn.get("name"):
        return sanitize_tool_name(str(fn["name"]))
    if tool.get("name"):
        return sanitize_tool_name(str(tool["name"]))
    tool_type = str(tool.get("type") or "").strip().lower()
    aliases = {
        "web_search": "web_search",
        "web_search_preview": "web_search",
        "computer_use": "computer_use",
        "computer_use_preview": "computer_use",
        "apply_patch": "apply_patch",
        "local_shell": "local_shell",
        "shell": "local_shell",
        "tool_search": "tool_search",
        "tool_search_call": "tool_search",
    }
    if tool_type in aliases:
        return aliases[tool_type]
    if tool_type.startswith("mcp"):
        return sanitize_tool_name(tool_type)
    return ""


def sanitize_tool_name(name: str) -> str:
    clean = re.sub(r"[^a-zA-Z0-9_-]+", "_", name.strip())[:64]
    return clean.strip("_") or "tool"


def native_tool_description(tool: dict[str, Any]) -> str:
    tool_type = str(tool.get("type") or "tool")
    if tool_type.startswith("web_search"):
        return "Search the web using Codex's web-search tool fallback."
    if tool_type.startswith("computer_use"):
        return "Request a Codex computer-use action."
    if tool_type == "apply_patch":
        return "Apply a unified diff patch to the working tree."
    if tool_type in {"local_shell", "shell"}:
        return "Run a local shell command through Codex."
    if tool_type.startswith("mcp"):
        return "Interact with Codex MCP resources."
    if tool_type.startswith("tool_search"):
        return "Search available tools using Codex's tool-search fallback."
    if tool_type == "custom_tool_call":
        return "Invoke a custom Codex tool through the shim function-tool fallback."
    return f"Codex tool fallback for Responses tool type {tool_type}."


def native_tool_parameters(tool: dict[str, Any]) -> dict[str, Any]:
    tool_type = str(tool.get("type") or "").strip().lower()
    if tool_type.startswith("web_search"):
        return {
            "type": "object",
            "properties": {
                "query": {"type": "string", "description": "Search query"},
            },
            "required": ["query"],
            "additionalProperties": True,
        }
    if tool_type.startswith("computer_use"):
        return {
            "type": "object",
            "properties": {
                "action": {"type": "string", "description": "Computer action to perform"},
                "x": {"type": "number", "description": "Screen x coordinate, when relevant"},
                "y": {"type": "number", "description": "Screen y coordinate, when relevant"},
                "text": {"type": "string", "description": "Text to type, when relevant"},
            },
            "required": ["action"],
            "additionalProperties": True,
        }
    if tool_type == "apply_patch":
        return {
            "type": "object",
            "properties": {"patch": {"type": "string", "description": "Unified diff patch"}},
            "required": ["patch"],
            "additionalProperties": True,
        }
    if tool_type in {"local_shell", "shell"}:
        return {
            "type": "object",
            "properties": {"command": {"type": "string", "description": "Shell command to run"}},
            "required": ["command"],
            "additionalProperties": True,
        }
    if tool_type.startswith("tool_search"):
        return {
            "type": "object",
            "properties": {
                "query": {"type": "string", "description": "Tool search query"},
                "namespace": {"type": "string", "description": "Optional tool namespace"},
            },
            "required": ["query"],
            "additionalProperties": True,
        }
    if tool_type == "custom_tool_call":
        return {
            "type": "object",
            "properties": {
                "input": {"type": "string", "description": "Custom tool input payload"},
                "arguments": {"type": "object", "description": "Custom tool arguments"},
            },
            "additionalProperties": True,
        }
    return {"type": "object", "properties": {"input": {"type": "string"}}, "additionalProperties": True}


def responses_tool_choice_to_chat(tool_choice: Any, tools: Any) -> Any:
    if tool_choice is None:
        return None
    if isinstance(tool_choice, str):
        if tool_choice in {"auto", "none", "required"}:
            return tool_choice
        name = tool_choice_name(tool_choice, tools)
        return {"type": "function", "function": {"name": name}} if name else tool_choice
    if isinstance(tool_choice, dict):
        if tool_choice.get("type") == "function" and "function" in tool_choice:
            return tool_choice
        name = tool_choice_name(str(tool_choice.get("name") or tool_choice.get("type") or ""), tools)
        return {"type": "function", "function": {"name": name}} if name else tool_choice
    return tool_choice


def tool_choice_name(choice: str, tools: Any) -> str:
    choice = choice.lower().strip()
    if isinstance(tools, list):
        for tool in tools:
            if not isinstance(tool, dict):
                continue
            names = {
                str(tool.get("type") or "").lower(),
                str(tool.get("name") or "").lower(),
            }
            fn = tool.get("function")
            if isinstance(fn, dict):
                names.add(str(fn.get("name") or "").lower())
            if choice in names:
                return responses_tool_function_name(tool)
    return sanitize_tool_name(choice)


def responses_tools_to_anthropic_tools(tools: Any) -> list[dict[str, Any]]:
    chat_tools = responses_tools_to_chat_tools(tools)
    converted = []
    for tool in chat_tools:
        fn = tool.get("function") or {}
        converted.append(
            {
                "name": fn.get("name"),
                "description": fn.get("description", ""),
                "input_schema": fn.get("parameters") or {"type": "object", "properties": {}},
            }
        )
    return [tool for tool in converted if tool.get("name")]
