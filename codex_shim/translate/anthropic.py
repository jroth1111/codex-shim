from __future__ import annotations

import json
from typing import Any

from .common import anthropic_stop, copy_if_present, jsonish, strip_think
from .content import chat_content_to_anthropic_blocks, chat_content_to_anthropic_content, content_to_text
from .input import responses_input_to_messages
from .thinking import (
    decode_thinking_payload,
    is_signed_thinking_block,
)
from .tool_schema import responses_tools_to_anthropic_tools


def responses_to_anthropic(
    body: dict[str, Any],
    upstream_model: str,
    max_tokens: int | None,
    *,
    chained_from_previous: bool = False,
) -> dict[str, Any]:
    system_parts: list[str] = []
    instructions = body.get("instructions")
    if instructions and not chained_from_previous:
        system_parts.append(content_to_text(instructions))

    messages: list[dict[str, Any]] = []

    def append(role: str, content: Any) -> None:
        if messages and messages[-1]["role"] == role and isinstance(messages[-1]["content"], list) and isinstance(content, list):
            messages[-1]["content"].extend(content)
        else:
            messages.append({"role": role, "content": content})

    pending_thinking: list[dict[str, Any]] = []
    for chat_msg in responses_input_to_messages(body.get("input")):
        role = chat_msg.get("role", "user")
        if chat_msg.get("_reasoning_only"):
            decoded = decode_thinking_payload(chat_msg.get("encrypted_content"))
            if decoded is not None and is_signed_thinking_block(decoded):
                pending_thinking.append(decoded)
            else:
                # Summary-only fallback: skip unsigned thinking blocks. Anthropic
                # rejects assistant thinking without a valid signature.
                pass
            continue
        if role in {"system", "developer"}:
            system_parts.append(content_to_text(chat_msg.get("content", "")))
            continue
        if role == "assistant":
            blocks: list[dict[str, Any]] = []
            blocks.extend(block for block in pending_thinking if is_signed_thinking_block(block))
            pending_thinking = []
            content = chat_msg.get("content")
            if content:
                blocks.extend(chat_content_to_anthropic_blocks(content))
            for call in chat_msg.get("tool_calls") or []:
                fn = call.get("function") or {}
                args_raw = fn.get("arguments") or ""
                try:
                    args_obj = json.loads(args_raw) if args_raw else {}
                except json.JSONDecodeError:
                    args_obj = {"_raw": args_raw}
                blocks.append(
                    {
                        "type": "tool_use",
                        "id": call.get("id") or "call_0",
                        "name": fn.get("name") or "",
                        "input": args_obj,
                    }
                )
            if blocks:
                append("assistant", blocks)
            continue
        if role == "tool":
            # Reasoning items only attach to assistant turns; drop any pending
            # thinking when a tool result interrupts (shouldn't happen in
            # normal Codex flows but defensive).
            pending_thinking = []
            append(
                "user",
                [
                    {
                        "type": "tool_result",
                        "tool_use_id": chat_msg.get("tool_call_id") or "call_0",
                        "content": content_to_text(chat_msg.get("content", "")),
                    }
                ],
            )
            continue
        # user / anything else
        pending_thinking = []
        append(role, chat_content_to_anthropic_content(chat_msg.get("content", "")))

    # If reasoning items appeared without a following assistant turn (e.g. the
    # final pending think after a tool_use round-trip), emit an assistant
    # message containing them so Anthropic's API accepts the followup.
    signed_pending = [block for block in pending_thinking if is_signed_thinking_block(block)]
    if signed_pending:
        append("assistant", signed_pending)

    anthropic: dict[str, Any] = {
        "model": upstream_model,
        "messages": messages or [{"role": "user", "content": ""}],
        "max_tokens": int(body.get("max_output_tokens") or body.get("max_tokens") or max_tokens or 4096),
        "stream": bool(body.get("stream", False)),
    }
    if system_parts:
        anthropic["system"] = "\n\n".join(system_parts)
    copy_if_present(body, anthropic, "temperature")
    copy_if_present(body, anthropic, "top_p")

    tools = responses_tools_to_anthropic_tools(body.get("tools"))
    if tools:
        anthropic["tools"] = tools
    return anthropic


def anthropic_to_chat_response(payload: dict[str, Any], requested_model: str) -> dict[str, Any]:
    content = ""
    tool_calls = []
    for block in payload.get("content", []):
        if block.get("type") == "text":
            content += block.get("text", "")
        elif block.get("type") == "tool_use":
            tool_calls.append(
                {
                    "id": block.get("id"),
                    "type": "function",
                    "function": {
                        "name": block.get("name", ""),
                        "arguments": jsonish(block.get("input", {})),
                    },
                }
            )
    message: dict[str, Any] = {"role": "assistant", "content": strip_think(content)}
    if tool_calls:
        message["tool_calls"] = tool_calls
    return {
        "id": payload.get("id", "chatcmpl-anthropic"),
        "object": "chat.completion",
        "created": 0,
        "model": requested_model,
        "choices": [{"index": 0, "message": message, "finish_reason": anthropic_stop(payload.get("stop_reason"))}],
    }
