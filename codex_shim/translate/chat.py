from __future__ import annotations

from typing import Any

from ..settings import (
    THINKING_DROP,
    THINKING_FORCE_DISABLED,
    THINKING_FORCE_ENABLED,
    THINKING_KEEP_ALL,
    THINKING_PASS,
)
from .common import copy_if_present
from .content import content_to_text
from .input import responses_input_to_messages
from .messages import (
    drop_reasoning_content,
    enabled_thinking_options,
    merge_consecutive_messages,
    normalize_chat_roles,
    provider_thinking_behavior,
    sanitize_chat_messages,
)
from .tool_schema import responses_tool_choice_to_chat, responses_tools_to_chat_tools


def responses_to_chat(
    body: dict[str, Any],
    upstream_model: str,
    provider: str = "generic-chat-completion-api",
    thinking_behavior: str | None = None,
) -> dict[str, Any]:
    messages = []
    instructions = body.get("instructions")
    if instructions:
        messages.append({"role": "system", "content": content_to_text(instructions)})
    has_reasoning_content = False
    pending_reasoning: list[str] = []
    for m in responses_input_to_messages(body.get("input")):
        if m.get("_reasoning_only"):
            text = str(m.get("reasoning_content") or "")
            if text:
                pending_reasoning.append(text)
                has_reasoning_content = True
            continue
        if pending_reasoning and m.get("role") == "assistant":
            existing = str(m.get("reasoning_content") or "")
            pieces = [*pending_reasoning, existing] if existing else pending_reasoning
            m["reasoning_content"] = "\n".join(piece for piece in pieces if piece)
            pending_reasoning = []
        elif pending_reasoning:
            messages.append({"role": "assistant", "content": "", "reasoning_content": "\n".join(pending_reasoning)})
            pending_reasoning = []
        messages.append(m)
    if pending_reasoning:
        messages.append({"role": "assistant", "content": "", "reasoning_content": "\n".join(pending_reasoning)})
    behavior = provider_thinking_behavior(provider.lower(), upstream_model, thinking_behavior)
    if behavior in {THINKING_DROP, THINKING_FORCE_DISABLED}:
        messages = drop_reasoning_content(messages)
    messages = sanitize_chat_messages(merge_consecutive_messages(normalize_chat_roles(messages)))

    chat: dict[str, Any] = {
        "model": upstream_model,
        "messages": messages or [{"role": "user", "content": ""}],
        "stream": bool(body.get("stream", False)),
    }
    copy_if_present(body, chat, "temperature")
    copy_if_present(body, chat, "top_p")
    copy_if_present(body, chat, "max_output_tokens", "max_tokens")
    copy_if_present(body, chat, "max_tokens")
    copy_if_present(body, chat, "parallel_tool_calls")
    copy_if_present(body, chat, "reasoning_effort")
    thinking_raw = body.get("thinking")
    if behavior == THINKING_FORCE_DISABLED:
        chat["thinking"] = {"type": "disabled"}
    elif behavior in {THINKING_PASS, THINKING_KEEP_ALL, THINKING_FORCE_ENABLED}:
        if thinking_raw is True:
            chat["thinking"] = enabled_thinking_options(provider.lower(), upstream_model, behavior)
        elif thinking_raw:
            chat["thinking"] = thinking_raw
        elif behavior == THINKING_FORCE_ENABLED or has_reasoning_content:
            chat["thinking"] = enabled_thinking_options(provider.lower(), upstream_model, behavior)

    tools = responses_tools_to_chat_tools(body.get("tools"))
    if tools:
        chat["tools"] = tools
        tool_choice = responses_tool_choice_to_chat(body.get("tool_choice"), body.get("tools"))
        if tool_choice is not None:
            chat["tool_choice"] = tool_choice
    return chat


def chat_to_responses_request(body: dict[str, Any], upstream_model: str, max_tokens: int | None = None) -> dict[str, Any]:
    converted = {
        "model": upstream_model,
        "input": body.get("messages", []),
        "stream": bool(body.get("stream", False)),
    }
    for src, dst in [("temperature", "temperature"), ("top_p", "top_p"), ("max_tokens", "max_output_tokens")]:
        if src in body:
            converted[dst] = body[src]
    if max_tokens and "max_output_tokens" not in converted:
        converted["max_output_tokens"] = max_tokens
    if "tools" in body:
        converted["tools"] = body["tools"]
    return converted


def chat_to_anthropic(body: dict[str, Any], upstream_model: str, max_tokens: int | None) -> dict[str, Any]:
    from .anthropic import responses_to_anthropic

    pseudo_responses = chat_to_responses_request(body, upstream_model, max_tokens=max_tokens)
    return responses_to_anthropic(pseudo_responses, upstream_model, max_tokens)
