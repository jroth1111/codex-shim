from __future__ import annotations

import json
from typing import Any

from .common import (
    chat_finish_to_anthropic_stop,
    copy_if_present,
    jsonish,
    responses_usage_to_anthropic_usage,
    strip_think,
)
from .content import chat_image_part, content_to_text
from .messages import merge_consecutive_messages, normalize_chat_roles, sanitize_chat_messages
from .usage import normalize_responses_usage


def anthropic_messages_to_chat(body: dict[str, Any], upstream_model: str, max_tokens: int | None = None) -> dict[str, Any]:
    messages: list[dict[str, Any]] = []
    system = body.get("system")
    if system:
        messages.append({"role": "system", "content": anthropic_content_to_text(system)})

    for raw_msg in body.get("messages") or []:
        if not isinstance(raw_msg, dict):
            continue
        role = str(raw_msg.get("role") or "user")
        content = raw_msg.get("content", "")
        if role == "assistant":
            messages.append(anthropic_assistant_message_to_chat(content))
        elif role == "user":
            messages.extend(anthropic_user_message_to_chat(content))
        else:
            messages.append({"role": role, "content": anthropic_content_to_chat_content(content)})

    messages = sanitize_chat_messages(merge_consecutive_messages(normalize_chat_roles(messages)))
    chat: dict[str, Any] = {
        "model": upstream_model,
        "messages": messages or [{"role": "user", "content": ""}],
        "stream": bool(body.get("stream", False)),
    }
    copy_if_present(body, chat, "temperature")
    copy_if_present(body, chat, "top_p")
    copy_if_present(body, chat, "max_tokens")
    if max_tokens and "max_tokens" not in chat:
        chat["max_tokens"] = max_tokens
    copy_if_present(body, chat, "stop_sequences", "stop")

    thinking = body.get("thinking")
    if isinstance(thinking, dict) and thinking.get("effort"):
        chat["reasoning_effort"] = thinking["effort"]
    output_config = body.get("output_config")
    if isinstance(output_config, dict) and output_config.get("effort"):
        chat["reasoning_effort"] = output_config["effort"]

    tools = anthropic_tools_to_chat_tools(body.get("tools"))
    if tools:
        chat["tools"] = tools
        tool_choice = anthropic_tool_choice_to_chat(body.get("tool_choice"))
        if tool_choice is not None:
            chat["tool_choice"] = tool_choice
    if chat["stream"]:
        stream_options = dict(body.get("stream_options") or {})
        stream_options["include_usage"] = True
        chat["stream_options"] = stream_options
    return chat


def chat_completion_to_anthropic_message(payload: dict[str, Any], requested_model: str) -> dict[str, Any]:
    choice = (payload.get("choices") or [{}])[0]
    message = choice.get("message") or {}
    content: list[dict[str, Any]] = []
    reasoning = message.get("reasoning_content") or message.get("reasoning")
    if reasoning:
        content.append({"type": "thinking", "thinking": str(reasoning)})
    text = strip_think(message.get("content") or "")
    if text:
        content.append({"type": "text", "text": text})
    for call in message.get("tool_calls") or []:
        if not isinstance(call, dict):
            continue
        fn = call.get("function") or {}
        args_raw = fn.get("arguments") or ""
        try:
            args_obj = json.loads(args_raw) if args_raw else {}
        except json.JSONDecodeError:
            args_obj = {"_raw": args_raw}
        content.append(
            {
                "type": "tool_use",
                "id": call.get("id") or "call_0",
                "name": fn.get("name") or "",
                "input": args_obj,
            }
        )
    if not content:
        content.append({"type": "text", "text": ""})

    response: dict[str, Any] = {
        "id": payload.get("id") or "msg_chat",
        "type": "message",
        "role": "assistant",
        "model": requested_model,
        "content": content,
        "stop_reason": chat_finish_to_anthropic_stop(choice.get("finish_reason")),
        "stop_sequence": None,
    }
    usage = responses_usage_to_anthropic_usage(normalize_responses_usage(payload.get("usage")))
    if usage is not None:
        response["usage"] = usage
    return response


def anthropic_content_to_chat_content(content: Any) -> str | list[dict[str, Any]]:
    parts = anthropic_content_to_chat_parts(content)
    if not parts:
        return ""
    if any(part.get("type") == "image_url" for part in parts):
        return parts
    return "\n".join(str(part.get("text", "")) for part in parts if part.get("type") == "text")


def anthropic_content_to_text(content: Any) -> str:
    return content_to_text(anthropic_content_to_chat_content(content))


def anthropic_content_to_chat_parts(content: Any) -> list[dict[str, Any]]:
    if content is None:
        return []
    if isinstance(content, str):
        return [{"type": "text", "text": content}] if content else []
    if isinstance(content, list):
        parts: list[dict[str, Any]] = []
        for block in content:
            if not isinstance(block, dict):
                parts.extend(anthropic_content_to_chat_parts(block))
                continue
            block_type = block.get("type")
            if block_type == "text":
                text = str(block.get("text", ""))
                if text:
                    parts.append({"type": "text", "text": text})
            elif block_type == "image":
                image = anthropic_image_block_to_chat_part(block)
                if image:
                    parts.append(image)
            elif block_type == "image_url" or "image_url" in block:
                image = chat_image_part(block)
                if image:
                    parts.append(image)
            elif "content" in block:
                parts.extend(anthropic_content_to_chat_parts(block.get("content")))
        return parts
    if isinstance(content, dict):
        return anthropic_content_to_chat_parts([content])
    return [{"type": "text", "text": str(content)}]


def anthropic_image_block_to_chat_part(block: dict[str, Any]) -> dict[str, Any] | None:
    source = block.get("source")
    if not isinstance(source, dict):
        return None
    url = ""
    if source.get("type") == "base64":
        media_type = str(source.get("media_type") or "image/png")
        data = str(source.get("data") or "")
        if data:
            url = f"data:{media_type};base64,{data}"
    elif source.get("type") == "url":
        url = str(source.get("url") or "")
    if not url:
        return None
    return {"type": "image_url", "image_url": {"url": url}}


def anthropic_assistant_message_to_chat(content: Any) -> dict[str, Any]:
    text_parts: list[Any] = []
    tool_calls: list[dict[str, Any]] = []
    reasoning_parts: list[str] = []
    blocks = content if isinstance(content, list) else [{"type": "text", "text": content}]
    for block in blocks:
        if not isinstance(block, dict):
            text_parts.append(block)
            continue
        block_type = block.get("type")
        if block_type == "tool_use":
            tool_calls.append(
                {
                    "id": block.get("id") or f"call_{len(tool_calls)}",
                    "type": "function",
                    "function": {
                        "name": block.get("name") or "",
                        "arguments": jsonish(block.get("input", {})),
                    },
                }
            )
        elif block_type in {"thinking", "redacted_thinking"}:
            thinking = block.get("thinking") or block.get("data") or ""
            if thinking:
                reasoning_parts.append(str(thinking))
        else:
            text_parts.append(block)
    message: dict[str, Any] = {
        "role": "assistant",
        "content": anthropic_content_to_chat_content(text_parts) if text_parts else "",
    }
    if tool_calls:
        message["tool_calls"] = tool_calls
    if reasoning_parts:
        message["reasoning_content"] = "\n".join(reasoning_parts)
    return message


def anthropic_user_message_to_chat(content: Any) -> list[dict[str, Any]]:
    if not isinstance(content, list):
        return [{"role": "user", "content": anthropic_content_to_chat_content(content)}]
    tool_messages: list[dict[str, Any]] = []
    user_parts: list[Any] = []
    for block in content:
        if isinstance(block, dict) and block.get("type") == "tool_result":
            tool_content = block.get("content", "")
            tool_use_id = block.get("tool_use_id") or "call_0"
            tool_messages.append(
                {
                    "role": "tool",
                    "tool_call_id": tool_use_id,
                    "content": anthropic_content_to_text(tool_content),
                }
            )
            if anthropic_has_visual_content(tool_content):
                user_parts.extend(
                    anthropic_visual_tool_result_chat_parts(tool_content, tool_use_id)
                )
        else:
            user_parts.append(block)
    messages = list(tool_messages)
    if user_parts or not messages:
        messages.append({"role": "user", "content": anthropic_content_to_chat_content(user_parts)})
    return messages


def anthropic_has_visual_content(content: Any) -> bool:
    return any(part.get("type") == "image_url" for part in anthropic_content_to_chat_parts(content))


def anthropic_visual_tool_result_chat_parts(content: Any, tool_use_id: Any) -> list[dict[str, Any]]:
    prefix = f"Visual tool result for {tool_use_id}." if tool_use_id else "Visual tool result."
    images = [part for part in anthropic_content_to_chat_parts(content) if part.get("type") == "image_url"]
    return [{"type": "text", "text": prefix}, *images]


def anthropic_tools_to_chat_tools(tools: Any) -> list[dict[str, Any]]:
    if not isinstance(tools, list):
        return []
    converted: list[dict[str, Any]] = []
    for tool in tools:
        if not isinstance(tool, dict):
            continue
        name = tool.get("name")
        if not name:
            continue
        converted.append(
            {
                "type": "function",
                "function": {
                    "name": str(name),
                    "description": tool.get("description") or "",
                    "parameters": tool.get("input_schema") or {"type": "object", "properties": {}},
                },
            }
        )
    return converted


def anthropic_tool_choice_to_chat(tool_choice: Any) -> Any:
    if tool_choice is None:
        return None
    if isinstance(tool_choice, str):
        if tool_choice in {"auto", "none"}:
            return tool_choice
        if tool_choice == "any":
            return "required"
        return {"type": "function", "function": {"name": tool_choice}}
    if isinstance(tool_choice, dict):
        choice_type = tool_choice.get("type")
        if choice_type in {"auto", "none"}:
            return choice_type
        if choice_type == "any":
            return "required"
        if choice_type == "tool" and tool_choice.get("name"):
            return {"type": "function", "function": {"name": str(tool_choice["name"])}}
    return tool_choice
