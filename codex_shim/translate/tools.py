from __future__ import annotations

import json
from typing import Any

from ..desktop_contract import (
    DESKTOP_LOCAL_SHELL_ACTION_FIELDS,
    DESKTOP_WEB_SEARCH_ACTION_FIELDS,
    DESKTOP_WEB_SEARCH_ACTION_TYPES,
)
from ..desktop_validate import assert_image_generation_action, assert_local_shell_action, assert_web_search_action
from .common import jsonish, parse_json_object
from .tool_schema import responses_tool_function_name

NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME = {
    "web_search": "web_search_call",
    "local_shell": "local_shell_call",
    "tool_search": "tool_search_call",
    "image_generation": "image_generation_call",
}

WEB_SEARCH_ACTION_TYPES = DESKTOP_WEB_SEARCH_ACTION_TYPES


def _filtered_web_search_action(action_type: str, parsed: dict[str, Any]) -> dict[str, Any]:
    allowed = DESKTOP_WEB_SEARCH_ACTION_FIELDS.get(action_type, frozenset())
    return {
        key: parsed[key]
        for key in parsed
        if key == "type" or key in allowed
    }


def normalize_web_search_action(parsed: dict[str, Any] | None, arguments: str) -> dict[str, Any]:
    if isinstance(parsed, dict):
        action_type = parsed.get("type")
        if action_type in WEB_SEARCH_ACTION_TYPES:
            return _filtered_web_search_action(str(action_type), parsed)
        if "url" in parsed and action_type != "search":
            merged = {"type": "open_page", **parsed}
            return _filtered_web_search_action("open_page", merged)
        if "pattern" in parsed or "find" in parsed:
            merged = dict(parsed)
            merged.setdefault("type", "find_in_page")
            if "find" in merged and "pattern" not in merged:
                merged["pattern"] = merged.pop("find")
            return _filtered_web_search_action("find_in_page", merged)
        if parsed:
            merged = {"type": "search", **parsed}
            return _filtered_web_search_action("search", merged)
    query = arguments.strip()
    return {"type": "search", "query": query}


def normalize_local_shell_action(parsed: dict[str, Any] | None, arguments: str) -> dict[str, Any]:
    if isinstance(parsed, dict) and parsed:
        filtered = {key: parsed[key] for key in parsed if key in DESKTOP_LOCAL_SHELL_ACTION_FIELDS}
        if "command" in filtered:
            return filtered
        if parsed.get("command"):
            filtered["command"] = str(parsed["command"])
            return filtered
    command = arguments.strip()
    return {"command": command} if command else {}


def normalize_hosted_call_item(item: dict[str, Any]) -> dict[str, Any]:
    item_type = str(item.get("type") or "")
    action = item.get("action")
    if not isinstance(action, dict):
        return item
    if item_type == "web_search_call":
        normalized = normalize_web_search_action(action, jsonish(action))
        return {**item, "action": normalized}
    if item_type == "local_shell_call":
        normalized = normalize_local_shell_action(action, jsonish(action))
        return {**item, "action": normalized}
    return item


def initial_native_tool_action(item_type: str) -> dict[str, Any]:
    if item_type == "web_search_call":
        return {"type": "search"}
    if item_type == "local_shell_call":
        return {}
    if item_type == "image_generation_call":
        return {}
    return {}


def build_streaming_tool_output_types(tools: Any) -> dict[str, str]:
    mapping: dict[str, str] = {}
    if not isinstance(tools, list):
        return mapping
    for tool in tools:
        if not isinstance(tool, dict):
            continue
        name = responses_tool_function_name(tool)
        if not name:
            continue
        tool_type = str(tool.get("type") or "").strip().lower()
        if tool_type.startswith("mcp"):
            mapping[name] = "mcp_tool_call"
        elif tool_type in {"custom", "custom_tool_call"}:
            mapping[name] = "custom_tool_call"
        elif name in NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME:
            mapping[name] = NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME[name]
    return mapping


def streaming_tool_output_type(name: str, tool_types: dict[str, str]) -> str:
    if name in tool_types:
        return tool_types[name]
    return NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME.get(name, "function_call")


def streaming_tool_open_item(
    item_type: str,
    *,
    call_id: str,
    name: str,
) -> dict[str, Any]:
    item: dict[str, Any] = {
        "id": call_id,
        "type": item_type,
        "status": "in_progress",
        "call_id": call_id,
    }
    if item_type == "function_call":
        item["name"] = name
        item["arguments"] = ""
    elif item_type == "tool_search_call":
        item["arguments"] = ""
    elif item_type == "mcp_tool_call":
        item["tool_name"] = name
        item["arguments"] = ""
    elif item_type == "custom_tool_call":
        item["name"] = name
        item["input"] = ""
    else:
        item["action"] = initial_native_tool_action(item_type)
    return item


def streaming_tool_completed_item(
    item_type: str,
    *,
    call_id: str,
    name: str,
    arguments: str,
    status: str = "completed",
) -> dict[str, Any]:
    if item_type == "mcp_tool_call":
        return {
            "id": call_id,
            "type": "mcp_tool_call",
            "status": status,
            "call_id": call_id,
            "tool_name": name,
            "arguments": arguments or "{}",
        }
    if item_type == "custom_tool_call":
        return {
            "id": call_id,
            "type": "custom_tool_call",
            "status": status,
            "call_id": call_id,
            "name": name,
            "input": arguments or "",
        }
    native = function_call_to_native_item(name, call_id, arguments, status=status)
    if native is not None:
        return native
    return {
        "id": call_id,
        "type": "function_call",
        "status": status,
        "call_id": call_id,
        "name": name,
        "arguments": arguments,
    }

HOSTED_CALL_FALLBACK_NAMES = {
    "local_shell_call": "local_shell",
    "web_search_call": "web_search",
    "image_generation_call": "image_generation",
    "tool_search_call": "tool_search",
}


def hosted_tool_arguments(item: dict[str, Any]) -> str:
    raw = item.get("arguments") or item.get("input")
    if isinstance(raw, str):
        return raw
    if raw is not None:
        return jsonish(raw)
    action = item.get("action")
    if action is not None:
        return action if isinstance(action, str) else jsonish(action)
    extras = {key: item[key] for key in ("command", "query", "prompt") if item.get(key)}
    if extras:
        return jsonish(extras)
    return "{}"


def hosted_call_to_function_tool(item: dict[str, Any]) -> dict[str, Any] | None:
    item_type = str(item.get("type") or "")
    fallback_name = HOSTED_CALL_FALLBACK_NAMES.get(item_type)
    if not fallback_name:
        return None
    call_id = item.get("call_id") or item.get("id") or "call_0"
    return {
        "id": call_id,
        "type": "function",
        "function": {
            "name": fallback_name,
            "arguments": hosted_tool_arguments(item),
        },
    }


def compaction_summary_text(item: dict[str, Any]) -> str:
    summary = item.get("summary")
    if isinstance(summary, list):
        parts = []
        for part in summary:
            if isinstance(part, dict) and part.get("text"):
                parts.append(str(part["text"]))
            elif isinstance(part, str):
                parts.append(part)
        text = "\n".join(part for part in parts if part).strip()
        if text:
            return text
    content = item.get("content")
    if isinstance(content, list):
        parts = [str(part.get("text") or "") for part in content if isinstance(part, dict)]
        text = "\n".join(part for part in parts if part).strip()
        if text:
            return text
    return str(item.get("text") or "").strip()


def compaction_to_system_message(item: dict[str, Any]) -> dict[str, Any] | None:
    summary = compaction_summary_text(item)
    if not summary:
        return None
    return {"role": "system", "content": f"[Compacted conversation context]\n{summary}"}


def function_call_to_native_item(
    name: str,
    call_id: str,
    arguments: str,
    *,
    status: str = "completed",
) -> dict[str, Any] | None:
    native_type = NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME.get(name)
    if not native_type:
        return None
    parsed = parse_json_object(arguments)
    item: dict[str, Any] = {
        "id": call_id,
        "type": native_type,
        "status": status,
        "call_id": call_id,
    }
    if native_type == "web_search_call":
        item["action"] = normalize_web_search_action(parsed, arguments)
        assert_web_search_action(item["action"])
    elif native_type == "local_shell_call":
        item["action"] = normalize_local_shell_action(parsed, arguments)
        assert_local_shell_action(item["action"])
    elif native_type == "tool_search_call":
        item["arguments"] = arguments or "{}"
    elif native_type == "image_generation_call":
        parsed_action = parsed if parsed else {}
        if not parsed_action and arguments:
            parsed_action = {"prompt": arguments}
        item["action"] = parsed_action
        assert_image_generation_action(item["action"])
        revised = parsed_action.get("revised_prompt") or parsed_action.get("prompt")
        if revised:
            item["revised_prompt"] = str(revised)
    return item


def tool_call_to_response_item(call: dict[str, Any], *, status: str = "completed") -> dict[str, Any]:
    fn = call.get("function") or {}
    name = fn.get("name") or ""
    call_id = call.get("id") or "call_0"
    arguments = fn.get("arguments") or ""
    native = function_call_to_native_item(name, call_id, arguments, status=status)
    if native is not None:
        return native
    fc_item: dict[str, Any] = {
        "id": call_id,
        "type": "function_call",
        "status": status,
        "call_id": call_id,
        "name": name,
        "arguments": arguments,
    }
    # Preserve thought_signature so Codex echoes it back on the next turn.
    # Without this, Gemini thinking models reject the follow-up request.
    if call.get("thought_signature"):
        fc_item["thought_signature"] = call["thought_signature"]
    return fc_item
