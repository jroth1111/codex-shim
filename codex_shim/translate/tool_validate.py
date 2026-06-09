from __future__ import annotations

import re
from typing import Any


class ToolValidationError(ValueError):
    """Raised when translated tool definitions are invalid for the upstream provider."""


_TOOL_NAME_RE = re.compile(r"^[a-zA-Z0-9_-]{1,64}$")


def validate_chat_tools(tools: Any, *, provider: str = "") -> None:
    if not isinstance(tools, list) or not tools:
        return
    seen: set[str] = set()
    strict_names = provider.lower() in {"openrouter", "generic-chat-completion-api"}
    for index, tool in enumerate(tools):
        if not isinstance(tool, dict):
            raise ToolValidationError(f"tools[{index}] must be an object")
        if tool.get("type") != "function":
            raise ToolValidationError(f"tools[{index}] must be type 'function' after translation")
        fn = tool.get("function")
        if not isinstance(fn, dict):
            raise ToolValidationError(f"tools[{index}].function must be an object")
        name = str(fn.get("name") or "").strip()
        if not name:
            raise ToolValidationError(f"tools[{index}].function.name is required")
        if len(name) > 64:
            raise ToolValidationError(f"tools[{index}].function.name exceeds 64 characters: {name!r}")
        if strict_names and not _TOOL_NAME_RE.match(name):
            raise ToolValidationError(
                f"tools[{index}].function.name {name!r} must match [a-zA-Z0-9_-]{{1,64}} for provider {provider!r}"
            )
        if name in seen:
            raise ToolValidationError(f"duplicate tool name after translation: {name!r}")
        seen.add(name)
        params = fn.get("parameters")
        if params is not None:
            if not isinstance(params, dict):
                raise ToolValidationError(f"tools[{index}].function.parameters must be an object")
            if params.get("type") not in {None, "object"}:
                raise ToolValidationError(f"tools[{index}].function.parameters.type must be 'object'")


def validate_anthropic_tools(tools: Any, *, provider: str = "") -> None:
    if not isinstance(tools, list) or not tools:
        return
    seen: set[str] = set()
    for index, tool in enumerate(tools):
        if not isinstance(tool, dict):
            raise ToolValidationError(f"tools[{index}] must be an object")
        name = str(tool.get("name") or "").strip()
        if not name:
            raise ToolValidationError(f"tools[{index}].name is required")
        if len(name) > 64:
            raise ToolValidationError(f"tools[{index}].name exceeds 64 characters: {name!r}")
        if name in seen:
            raise ToolValidationError(f"duplicate tool name after translation: {name!r}")
        seen.add(name)
        schema = tool.get("input_schema")
        if schema is not None:
            if not isinstance(schema, dict):
                raise ToolValidationError(f"tools[{index}].input_schema must be an object")
            if schema.get("type") not in {None, "object"}:
                raise ToolValidationError(f"tools[{index}].input_schema.type must be 'object'")
