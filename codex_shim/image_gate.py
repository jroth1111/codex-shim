from __future__ import annotations

from typing import Any


IMAGE_TOOL_TYPES = {"image_generation", "image_gen"}
IMAGE_TOOL_NAMES = {"image_generation", "image_gen"}


def needs_image_generation(body: dict[str, Any]) -> bool:
    """Return true only for explicit image-generation tool usage/history."""
    if has_image_generation_history(body):
        return True

    image_tool_names, non_image_tool_count = _tool_inventory(body.get("tools"))
    if not image_tool_names:
        return False

    if _tool_choice_selects_image_tool(body.get("tool_choice"), image_tool_names):
        return True

    return non_image_tool_count == 0


def has_image_generation_history(body: dict[str, Any]) -> bool:
    inputs = body.get("input") or []
    if not isinstance(inputs, list):
        return False
    return any(isinstance(item, dict) and item.get("type") == "image_generation_call" for item in inputs)


def _tool_inventory(tools: Any) -> tuple[set[str], int]:
    image_tool_names: set[str] = set()
    non_image_tool_count = 0
    if not isinstance(tools, list):
        return image_tool_names, non_image_tool_count
    for tool in tools:
        if not isinstance(tool, dict):
            non_image_tool_count += 1
            continue
        name = _tool_name(tool)
        tool_type = str(tool.get("type") or "")
        if _is_image_tool(tool_type, name):
            image_tool_names.add(name or tool_type)
        else:
            non_image_tool_count += 1
    return image_tool_names, non_image_tool_count


def _tool_choice_selects_image_tool(tool_choice: Any, image_tool_names: set[str]) -> bool:
    if tool_choice in (None, "auto", "none", "required"):
        return False
    candidates: set[str] = set()
    if isinstance(tool_choice, str):
        candidates.add(tool_choice)
    elif isinstance(tool_choice, dict):
        fn = tool_choice.get("function") or {}
        if isinstance(fn, dict):
            candidates.add(str(fn.get("name") or ""))
        candidates.add(str(tool_choice.get("name") or ""))
        candidates.add(str(tool_choice.get("type") or ""))
    normalized = {_normalize(value) for value in candidates if value}
    return bool(normalized & {_normalize(name) for name in image_tool_names})


def _tool_name(tool: dict[str, Any]) -> str:
    fn = tool.get("function") or {}
    if isinstance(fn, dict) and fn.get("name"):
        return str(fn["name"])
    name = tool.get("name")
    return str(name or "")


def _is_image_tool(tool_type: str, name: str) -> bool:
    return _normalize(tool_type) in IMAGE_TOOL_TYPES or _normalize(name) in IMAGE_TOOL_NAMES


def _normalize(value: str) -> str:
    return str(value or "").strip().lower()
