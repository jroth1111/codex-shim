from __future__ import annotations

from typing import Any

from ..desktop_contract import DESKTOP_RESPONSE_ITEM_TYPES, SHIM_EXTRA_RESPONSE_INPUT_TYPES
from ..thinking import decode_thinking_payload
from .common import ResponsesInputError
from .content import (
    computer_output_to_chat_content,
    content_to_text,
    has_visual_content,
    responses_content_to_chat_content,
    visual_feedback_chat_content,
)
from .tools import compaction_to_system_message, hosted_call_to_function_tool, normalize_hosted_call_item

KNOWN_RESPONSE_INPUT_TYPES = DESKTOP_RESPONSE_ITEM_TYPES | SHIM_EXTRA_RESPONSE_INPUT_TYPES


def validate_responses_items(value: Any) -> None:
    if value is None or isinstance(value, str):
        return
    if not isinstance(value, list):
        return
    for item in value:
        if not isinstance(item, dict):
            continue
        item_type = item.get("type")
        if item_type is None and "role" in item:
            continue
        if item_type is None:
            continue
        if str(item_type) not in KNOWN_RESPONSE_INPUT_TYPES:
            raise ResponsesInputError(f"Unsupported Responses input item type: {item_type}")


def validate_responses_input(body: dict[str, Any]) -> None:
    validate_responses_items(body.get("input"))
    responses_input_to_messages(body.get("input"))


def responses_input_to_messages(value: Any) -> list[dict[str, Any]]:
    if value is None:
        return []
    if isinstance(value, str):
        return [{"role": "user", "content": value}]
    if not isinstance(value, list):
        return [{"role": "user", "content": responses_content_to_chat_content(value)}]
    messages: list[dict[str, Any]] = []
    pending_tool_calls: list[dict[str, Any]] = []

    def flush_pending_assistant_tool_calls():
        if pending_tool_calls:
            if (
                messages
                and messages[-1].get("role") == "assistant"
                and not messages[-1].get("_reasoning_only")
                and "tool_calls" not in messages[-1]
            ):
                messages[-1]["tool_calls"] = list(pending_tool_calls)
            else:
                messages.append({"role": "assistant", "content": "", "tool_calls": list(pending_tool_calls)})
            pending_tool_calls.clear()

    for item in value:
        if isinstance(item, str):
            flush_pending_assistant_tool_calls()
            messages.append({"role": "user", "content": item})
            continue
        if not isinstance(item, dict):
            continue
        item_type = item.get("type")
        if item_type in {"message", None} and "role" in item:
            flush_pending_assistant_tool_calls()
            role = item.get("role", "user")
            if role == "developer":
                role = "system"
            if role == "tool":
                messages.append(
                    {
                        "role": "tool",
                        "tool_call_id": item.get("tool_call_id"),
                        "content": responses_content_to_chat_content(item.get("content", "")),
                    }
                )
                continue
            tool_calls = item.get("tool_calls")
            if role == "assistant" and isinstance(tool_calls, list) and tool_calls:
                content = item.get("content")
                message: dict[str, Any] = {"role": "assistant", "tool_calls": tool_calls}
                if content is not None and content != "":
                    message["content"] = responses_content_to_chat_content(content)
                else:
                    message["content"] = ""
                messages.append(message)
                continue
            messages.append({"role": role, "content": responses_content_to_chat_content(item.get("content", ""))})
        elif item_type in {"input_text", "text", "input_image", "input_audio"}:
            flush_pending_assistant_tool_calls()
            messages.append({"role": "user", "content": responses_content_to_chat_content(item)})
        elif item_type == "computer_call_output":
            flush_pending_assistant_tool_calls()
            messages.append({"role": "user", "content": computer_output_to_chat_content(item)})
        elif item_type == "function_call":
            # Coalesce consecutive function_call items into a single assistant
            # message with multiple tool_calls so chat-completions upstreams
            # accept the subsequent tool messages.
            call_id = item.get("call_id") or item.get("id") or "call_0"
            pending_tool_calls.append(
                {
                    "id": call_id,
                    "type": "function",
                    "function": {
                        "name": item.get("name") or "",
                        "arguments": item.get("arguments") or "",
                    },
                }
            )
        elif item_type == "function_call_output":
            flush_pending_assistant_tool_calls()
            output = item.get("output", "")
            messages.append({"role": "tool", "tool_call_id": item.get("call_id"), "content": content_to_text(output)})
            if has_visual_content(output):
                messages.append({"role": "user", "content": visual_feedback_chat_content(output, item.get("call_id"))})
        elif item_type in {"custom_tool_call", "mcp_tool_call"}:
            call_id = item.get("call_id") or item.get("id") or "call_0"
            default_name = "mcp_tool_call" if item_type == "mcp_tool_call" else "custom_tool_call"
            pending_tool_calls.append(
                {
                    "id": call_id,
                    "type": "function",
                    "function": {
                        "name": item.get("name") or item.get("tool_name") or default_name,
                        "arguments": item.get("arguments") or item.get("input") or "",
                    },
                }
            )
        elif item_type in {"custom_tool_call_output", "mcp_tool_call_output", "tool_search_output"}:
            flush_pending_assistant_tool_calls()
            output = item.get("output", item.get("content", ""))
            messages.append({"role": "tool", "tool_call_id": item.get("call_id"), "content": content_to_text(output)})
            if has_visual_content(output):
                messages.append({"role": "user", "content": visual_feedback_chat_content(output, item.get("call_id"))})
        elif item_type == "tool_search_call":
            tool = hosted_call_to_function_tool(item)
            if tool:
                pending_tool_calls.append(tool)
        elif item_type in {"local_shell_call", "web_search_call", "image_generation_call"}:
            tool = hosted_call_to_function_tool(normalize_hosted_call_item(item))
            if tool:
                pending_tool_calls.append(tool)
        elif item_type in {"context_compaction", "compaction"}:
            flush_pending_assistant_tool_calls()
            msg = compaction_to_system_message(item)
            if msg:
                messages.append(msg)
        elif item_type in {"compaction_trigger", "other"}:
            flush_pending_assistant_tool_calls()
            continue
        elif item_type == "reasoning":
            # For Chat-Completions upstreams reasoning is informational only.
            # We keep it as a marker so the Anthropic translator can reattach
            # encrypted_content as a `thinking` block on the assistant turn.
            flush_pending_assistant_tool_calls()
            encrypted = item.get("encrypted_content")
            decoded = decode_thinking_payload(encrypted)
            reasoning_content = ""
            if decoded is not None and decoded.get("thinking"):
                reasoning_content = str(decoded["thinking"])
            else:
                summary_chunks = []
                for summary in item.get("summary") or []:
                    if isinstance(summary, dict) and summary.get("text"):
                        summary_chunks.append(str(summary["text"]))
                    elif isinstance(summary, str):
                        summary_chunks.append(summary)
                reasoning_content = "\n".join(summary_chunks)
            messages.append(
                {
                    "role": "assistant",
                    "_reasoning_only": True,
                    "encrypted_content": encrypted,
                    "reasoning_content": reasoning_content,
                    "summary": item.get("summary") or [],
                    "content": "",
                }
            )
    flush_pending_assistant_tool_calls()
    return messages
