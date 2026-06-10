from __future__ import annotations

from typing import Any

from ..settings import THINKING_KEEP_ALL, provider_thinking_options
from ..settings import provider_thinking_behavior as settings_thinking_behavior
from .common import sanitize_string
from .content import content_to_text


def minimax_reasoning(message: dict[str, Any]) -> str:
    details = message.get("reasoning_details")
    if not isinstance(details, list):
        return ""
    chunks: list[str] = []
    for item in details:
        if not isinstance(item, dict):
            continue
        text = item.get("text") or item.get("reasoning_content") or item.get("content")
        if text:
            chunks.append(str(text))
    return "\n".join(chunks)


def provider_thinking_behavior(provider: str, upstream_model: str, override: str | None = None) -> str:
    if override:
        return str(override).strip().lower().replace("-", "_").replace(" ", "_")
    return settings_thinking_behavior(provider, upstream_model)


def enabled_thinking_options(provider: str, upstream_model: str, behavior: str | None = None) -> dict[str, Any]:
    if behavior == THINKING_KEEP_ALL:
        return {"type": "enabled", "keep": "all"}
    return provider_thinking_options(provider, upstream_model)


def drop_reasoning_content(messages: list[dict[str, Any]]) -> list[dict[str, Any]]:
    cleaned: list[dict[str, Any]] = []
    for message in messages:
        if message.get("_reasoning_only"):
            continue
        item = dict(message)
        item.pop("reasoning_content", None)
        item.pop("reasoning", None)
        cleaned.append(item)
    return cleaned


def sanitize_chat_content_parts(parts: list[Any]) -> list[dict[str, Any]]:
    cleaned = []
    for part in parts:
        if isinstance(part, str):
            cleaned.append({"type": "text", "text": sanitize_string(part)})
            continue
        if not isinstance(part, dict):
            continue
        current = dict(part)
        if current.get("type") == "text":
            current["text"] = sanitize_string(str(current.get("text", "")))
        elif current.get("type") == "image_url":
            image_url = current.get("image_url")
            if isinstance(image_url, dict):
                current["image_url"] = {k: sanitize_string(str(v)) for k, v in image_url.items() if v is not None}
            elif isinstance(image_url, str):
                current["image_url"] = {"url": sanitize_string(image_url)}
        cleaned.append(current)
    return cleaned


def sanitize_chat_messages(messages: list[dict[str, Any]]) -> list[dict[str, Any]]:
    cleaned = []
    for message in messages:
        current = dict(message)
        current.pop("_reasoning_only", None)
        current.pop("encrypted_content", None)
        current.pop("summary", None)
        content = current.get("content")
        if content is None:
            current["content"] = ""
        elif isinstance(content, list):
            current["content"] = sanitize_chat_content_parts(content)
        elif isinstance(content, str):
            current["content"] = sanitize_string(content)
        else:
            current["content"] = sanitize_string(content_to_text(content))

        if isinstance(current.get("reasoning_content"), str):
            current["reasoning_content"] = sanitize_string(current["reasoning_content"])
        tool_calls = current.get("tool_calls")
        if tool_calls:
            copied_calls = []
            for call in tool_calls:
                if not isinstance(call, dict):
                    continue
                copied_call = dict(call)
                if isinstance(copied_call.get("id"), str):
                    copied_call["id"] = sanitize_string(copied_call["id"])
                function = copied_call.get("function")
                if isinstance(function, dict):
                    function = dict(function)
                    arguments = function.get("arguments")
                    if isinstance(arguments, str):
                        function["arguments"] = sanitize_string(arguments)
                    copied_call["function"] = function
                copied_calls.append(copied_call)
            current["tool_calls"] = copied_calls
        tool_call_id = current.get("tool_call_id")
        if isinstance(tool_call_id, str):
            current["tool_call_id"] = sanitize_string(tool_call_id)
        cleaned.append(current)
    return cleaned


def normalize_chat_roles(messages: list[dict[str, Any]]) -> list[dict[str, Any]]:
    normalized = []
    for message in messages:
        current = dict(message)
        if current.get("role") == "developer":
            current["role"] = "system"
        normalized.append(current)
    return normalized


def merge_consecutive_messages(messages: list[dict[str, Any]]) -> list[dict[str, Any]]:
    merged: list[dict[str, Any]] = []
    for message in messages:
        current = dict(message)
        role = current.get("role")
        if merged and role == merged[-1].get("role") and role in {"system", "user", "assistant"}:
            previous = merged[-1]
            previous["content"] = merge_chat_content(previous.get("content"), current.get("content"))
            if role == "assistant":
                if current.get("reasoning_content") and not previous.get("reasoning_content"):
                    previous["reasoning_content"] = current["reasoning_content"]
                tool_calls = list(previous.get("tool_calls") or []) + list(current.get("tool_calls") or [])
                if tool_calls:
                    previous["tool_calls"] = tool_calls
            continue
        merged.append(current)
    return merged


def merge_chat_content(left: Any, right: Any) -> Any:
    if not left:
        return right or ""
    if not right:
        return left
    if isinstance(left, list) or isinstance(right, list):
        merged: list[Any] = []
        merged.extend(left if isinstance(left, list) else [{"type": "text", "text": str(left)}])
        if merged and right:
            merged.append({"type": "text", "text": ""})
        merged.extend(right if isinstance(right, list) else [{"type": "text", "text": str(right)}])
        return merged
    return f"{left}\n\n{right}"
