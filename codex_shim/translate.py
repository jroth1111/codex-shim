from __future__ import annotations

import json
import re
from typing import Any

from .settings import (
    THINKING_DROP,
    THINKING_FORCE_DISABLED,
    THINKING_FORCE_ENABLED,
    THINKING_KEEP_ALL,
    THINKING_PASS,
    provider_thinking_behavior,
    provider_thinking_options,
)


THINK_RE = re.compile(r"<think>.*?</think>", re.IGNORECASE | re.DOTALL)

SHIM_ENCRYPTED_CONTENT_PREFIX = "anthropic-thinking-v1:"
_THINKING_MAGIC = SHIM_ENCRYPTED_CONTENT_PREFIX
MAX_INLINE_MEDIA_BYTES = 50 * 1024 * 1024
SUPPORTED_AUDIO_FORMATS = {"mp3", "wav", "webm", "ogg", "flac", "mp4", "m4a"}
SUPPORTED_AUDIO_MIME_FORMATS = {
    "audio/mpeg": "mp3",
    "audio/mp3": "mp3",
    "audio/wav": "wav",
    "audio/x-wav": "wav",
    "audio/webm": "webm",
    "audio/ogg": "ogg",
    "audio/flac": "flac",
    "audio/mp4": "mp4",
    "audio/m4a": "m4a",
}


class ResponsesInputError(ValueError):
    """Raised when a Responses request contains content this shim cannot translate."""


def _encode_thinking_blob(payload: dict[str, Any]) -> str:
    import base64

    raw = json.dumps(payload, separators=(",", ":")).encode("utf-8")
    return _THINKING_MAGIC + base64.urlsafe_b64encode(raw).decode("ascii")


def _decode_thinking_blob(encoded: Any) -> dict[str, Any] | None:
    import base64

    if not isinstance(encoded, str) or not encoded.startswith(_THINKING_MAGIC):
        return None
    blob = encoded[len(_THINKING_MAGIC) :]
    try:
        raw = base64.urlsafe_b64decode(blob.encode("ascii"))
        data = json.loads(raw.decode("utf-8"))
    except Exception:
        return None
    if not isinstance(data, dict):
        return None
    return data


def responses_to_chat(
    body: dict[str, Any],
    upstream_model: str,
    provider: str = "generic-chat-completion-api",
    thinking_behavior: str | None = None,
) -> dict[str, Any]:
    messages = []
    instructions = body.get("instructions")
    if instructions:
        messages.append({"role": "system", "content": _content_to_text(instructions)})
    has_reasoning_content = False
    pending_reasoning: list[str] = []
    for m in _responses_input_to_messages(body.get("input")):
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
    behavior = _provider_thinking_behavior(provider.lower(), upstream_model, thinking_behavior)
    if behavior in {THINKING_DROP, THINKING_FORCE_DISABLED}:
        messages = _drop_reasoning_content(messages)
    messages = _sanitize_chat_messages(_merge_consecutive_messages(_normalize_chat_roles(messages)))

    chat: dict[str, Any] = {
        "model": upstream_model,
        "messages": messages or [{"role": "user", "content": ""}],
        "stream": bool(body.get("stream", False)),
    }
    _copy_if_present(body, chat, "temperature")
    _copy_if_present(body, chat, "top_p")
    _copy_if_present(body, chat, "max_output_tokens", "max_tokens")
    _copy_if_present(body, chat, "max_tokens")
    _copy_if_present(body, chat, "parallel_tool_calls")
    _copy_if_present(body, chat, "reasoning_effort")
    thinking_raw = body.get("thinking")
    if behavior == THINKING_FORCE_DISABLED:
        chat["thinking"] = {"type": "disabled"}
    elif behavior in {THINKING_PASS, THINKING_KEEP_ALL, THINKING_FORCE_ENABLED}:
        if thinking_raw is True:
            chat["thinking"] = _enabled_thinking_options(provider.lower(), upstream_model, behavior)
        elif thinking_raw:
            chat["thinking"] = thinking_raw
        elif behavior == THINKING_FORCE_ENABLED or has_reasoning_content:
            chat["thinking"] = _enabled_thinking_options(provider.lower(), upstream_model, behavior)

    tools = _responses_tools_to_chat_tools(body.get("tools"))
    if tools:
        chat["tools"] = tools
        tool_choice = _responses_tool_choice_to_chat(body.get("tool_choice"), body.get("tools"))
        if tool_choice is not None:
            chat["tool_choice"] = tool_choice
    return chat


def validate_responses_input(body: dict[str, Any]) -> None:
    _validate_responses_items(body.get("input"))
    _responses_input_to_messages(body.get("input"))


KNOWN_RESPONSE_INPUT_TYPES = {
    "message",
    "input_text",
    "text",
    "input_image",
    "input_audio",
    "computer_call_output",
    "function_call",
    "function_call_output",
    "custom_tool_call",
    "custom_tool_call_output",
    "mcp_tool_call",
    "mcp_tool_call_output",
    "tool_search_call",
    "tool_search_output",
    "local_shell_call",
    "web_search_call",
    "image_generation_call",
    "context_compaction",
    "compaction",
    "compaction_trigger",
    "reasoning",
    "other",
}


def _validate_responses_items(value: Any) -> None:
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


def responses_to_anthropic(body: dict[str, Any], upstream_model: str, max_tokens: int | None) -> dict[str, Any]:
    system_parts: list[str] = []
    instructions = body.get("instructions")
    if instructions:
        system_parts.append(_content_to_text(instructions))

    messages: list[dict[str, Any]] = []

    def append(role: str, content: Any) -> None:
        if messages and messages[-1]["role"] == role and isinstance(messages[-1]["content"], list) and isinstance(content, list):
            messages[-1]["content"].extend(content)
        else:
            messages.append({"role": role, "content": content})

    pending_thinking: list[dict[str, Any]] = []
    for chat_msg in _responses_input_to_messages(body.get("input")):
        role = chat_msg.get("role", "user")
        if chat_msg.get("_reasoning_only"):
            decoded = _decode_thinking_blob(chat_msg.get("encrypted_content"))
            if decoded is not None:
                pending_thinking.append(decoded)
            else:
                # Summary-only fallback: emit a plain `thinking` block (no
                # signature). Anthropic requires `signature` on the original
                # session; if we lack it, skip rather than upsetting strict
                # APIs.
                for summary in chat_msg.get("summary") or []:
                    text = summary.get("text") if isinstance(summary, dict) else None
                    if text:
                        pending_thinking.append({"type": "thinking", "thinking": text, "signature": ""})
            continue
        if role in {"system", "developer"}:
            system_parts.append(_content_to_text(chat_msg.get("content", "")))
            continue
        if role == "assistant":
            blocks: list[dict[str, Any]] = []
            blocks.extend(pending_thinking)
            pending_thinking = []
            content = chat_msg.get("content")
            if content:
                blocks.extend(_chat_content_to_anthropic_blocks(content))
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
                        "content": _content_to_text(chat_msg.get("content", "")),
                    }
                ],
            )
            continue
        # user / anything else
        pending_thinking = []
        append(role, _chat_content_to_anthropic_content(chat_msg.get("content", "")))

    # If reasoning items appeared without a following assistant turn (e.g. the
    # final pending think after a tool_use round-trip), emit an assistant
    # message containing them so Anthropic's API accepts the followup.
    if pending_thinking:
        append("assistant", pending_thinking)

    anthropic: dict[str, Any] = {
        "model": upstream_model,
        "messages": messages or [{"role": "user", "content": ""}],
        "max_tokens": int(body.get("max_output_tokens") or body.get("max_tokens") or max_tokens or 4096),
        "stream": bool(body.get("stream", False)),
    }
    if system_parts:
        anthropic["system"] = "\n\n".join(system_parts)
    _copy_if_present(body, anthropic, "temperature")
    _copy_if_present(body, anthropic, "top_p")

    tools = _responses_tools_to_anthropic_tools(body.get("tools"))
    if tools:
        anthropic["tools"] = tools
    return anthropic


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
    pseudo_responses = chat_to_responses_request(body, upstream_model, max_tokens=max_tokens)
    return responses_to_anthropic(pseudo_responses, upstream_model, max_tokens)


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
                        "arguments": _jsonish(block.get("input", {})),
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
        "choices": [{"index": 0, "message": message, "finish_reason": _anthropic_stop(payload.get("stop_reason"))}],
    }


def chat_completion_to_response(payload: dict[str, Any], requested_model: str) -> dict[str, Any]:
    choice = (payload.get("choices") or [{}])[0]
    message = choice.get("message") or {}
    output: list[dict[str, Any]] = []
    reasoning = message.get("reasoning_content") or message.get("reasoning") or _minimax_reasoning(message)
    if reasoning:
        reasoning_text = str(reasoning)
        output.append(
            {
                "id": "rs_0",
                "type": "reasoning",
                "status": "completed",
                "summary": [{"type": "summary_text", "text": reasoning_text}],
                "encrypted_content": _encode_thinking_blob(
                    {"type": "thinking", "thinking": reasoning_text, "signature": ""}
                ),
            }
        )
    text = strip_think(message.get("content") or "")
    if text:
        output.append(
            {
                "id": "msg_0",
                "type": "message",
                "status": "completed",
                "role": "assistant",
                "content": [{"type": "output_text", "text": text, "annotations": []}],
            }
        )
    for call in message.get("tool_calls") or []:
        output.append(tool_call_to_response_item(call, status="completed"))
    return {
        "id": payload.get("id", "resp_chat"),
        "object": "response",
        "created_at": payload.get("created", 0),
        "status": "completed",
        "model": requested_model,
        "output": output,
        "usage": payload.get("usage"),
    }


def anthropic_to_response(payload: dict[str, Any], requested_model: str) -> dict[str, Any]:
    output: list[dict[str, Any]] = []
    text_chunks: list[str] = []

    def flush_text() -> None:
        if not text_chunks:
            return
        text = strip_think("".join(text_chunks))
        text_chunks.clear()
        if not text:
            return
        output.append(
            {
                "id": f"msg_{len(output)}",
                "type": "message",
                "status": "completed",
                "role": "assistant",
                "content": [{"type": "output_text", "text": text, "annotations": []}],
            }
        )

    for block in payload.get("content", []):
        if not isinstance(block, dict):
            continue
        block_type = block.get("type")
        if block_type == "text":
            text_chunks.append(str(block.get("text") or ""))
            continue
        flush_text()
        if block_type == "thinking":
            thinking = str(block.get("thinking") or "")
            output.append(
                {
                    "id": f"rs_{len(output)}",
                    "type": "reasoning",
                    "status": "completed",
                    "summary": [{"type": "summary_text", "text": thinking}] if thinking else [],
                    "encrypted_content": _encode_thinking_blob(
                        {
                            "type": "thinking",
                            "thinking": thinking,
                            "signature": str(block.get("signature") or ""),
                        }
                    ),
                }
            )
        elif block_type == "redacted_thinking":
            output.append(
                {
                    "id": f"rs_{len(output)}",
                    "type": "reasoning",
                    "status": "completed",
                    "summary": [],
                    "encrypted_content": _encode_thinking_blob(
                        {"type": "redacted_thinking", "data": str(block.get("data") or "")}
                    ),
                }
            )
        elif block_type == "tool_use":
            call_id = block.get("id") or f"call_{len(output)}"
            output.append(
                tool_call_to_response_item(
                    {
                        "id": call_id,
                        "function": {
                            "name": block.get("name") or "",
                            "arguments": _jsonish(block.get("input", {})),
                        },
                    },
                    status="completed",
                )
            )
    flush_text()
    return {
        "id": payload.get("id", "resp_anthropic"),
        "object": "response",
        "created_at": payload.get("created_at", 0),
        "status": "completed",
        "model": requested_model,
        "output": output,
        "usage": payload.get("usage"),
    }


def strip_think(text: str) -> str:
    return THINK_RE.sub("", text or "")


def _minimax_reasoning(message: dict[str, Any]) -> str:
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


def _provider_thinking_behavior(provider: str, upstream_model: str, override: str | None = None) -> str:
    if override:
        return str(override).strip().lower().replace("-", "_").replace(" ", "_")
    return provider_thinking_behavior(provider, upstream_model)


def _enabled_thinking_options(provider: str, upstream_model: str, behavior: str | None = None) -> dict[str, Any]:
    if behavior == THINKING_KEEP_ALL:
        return {"type": "enabled", "keep": "all"}
    return provider_thinking_options(provider, upstream_model)


def _drop_reasoning_content(messages: list[dict[str, Any]]) -> list[dict[str, Any]]:
    cleaned: list[dict[str, Any]] = []
    for message in messages:
        if message.get("_reasoning_only"):
            continue
        item = dict(message)
        item.pop("reasoning_content", None)
        item.pop("reasoning", None)
        cleaned.append(item)
    return cleaned


NATIVE_OUTPUT_TYPE_BY_FALLBACK_NAME = {
    "web_search": "web_search_call",
    "local_shell": "local_shell_call",
    "tool_search": "tool_search_call",
    "image_generation": "image_generation_call",
}

HOSTED_CALL_FALLBACK_NAMES = {
    "local_shell_call": "local_shell",
    "web_search_call": "web_search",
    "image_generation_call": "image_generation",
    "tool_search_call": "tool_search",
}


def _hosted_tool_arguments(item: dict[str, Any]) -> str:
    raw = item.get("arguments") or item.get("input")
    if isinstance(raw, str):
        return raw
    if raw is not None:
        return _jsonish(raw)
    action = item.get("action")
    if action is not None:
        return action if isinstance(action, str) else _jsonish(action)
    extras = {key: item[key] for key in ("command", "query", "prompt") if item.get(key)}
    if extras:
        return _jsonish(extras)
    return "{}"


def _hosted_call_to_function_tool(item: dict[str, Any]) -> dict[str, Any] | None:
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
            "arguments": _hosted_tool_arguments(item),
        },
    }


def _compaction_summary_text(item: dict[str, Any]) -> str:
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


def _compaction_to_system_message(item: dict[str, Any]) -> dict[str, Any] | None:
    summary = _compaction_summary_text(item)
    if not summary:
        return None
    return {"role": "system", "content": f"[Compacted conversation context]\n{summary}"}


def _parse_json_object(raw: str) -> dict[str, Any] | None:
    if not raw:
        return None
    try:
        parsed = json.loads(raw)
    except json.JSONDecodeError:
        return None
    return parsed if isinstance(parsed, dict) else None


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
    parsed = _parse_json_object(arguments)
    item: dict[str, Any] = {
        "id": call_id,
        "type": native_type,
        "status": status,
        "call_id": call_id,
    }
    if native_type == "web_search_call":
        item["action"] = parsed if parsed else {"query": arguments}
    elif native_type == "local_shell_call":
        item["action"] = parsed if parsed else {"command": arguments}
    elif native_type == "tool_search_call":
        item["arguments"] = arguments or "{}"
    elif native_type == "image_generation_call":
        parsed_action = parsed if parsed else {}
        if not parsed_action and arguments:
            parsed_action = {"prompt": arguments}
        item["action"] = parsed_action
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
    return {
        "id": call_id,
        "type": "function_call",
        "status": status,
        "call_id": call_id,
        "name": name,
        "arguments": arguments,
    }


def _responses_input_to_messages(value: Any) -> list[dict[str, Any]]:
    if value is None:
        return []
    if isinstance(value, str):
        return [{"role": "user", "content": value}]
    if not isinstance(value, list):
        return [{"role": "user", "content": _responses_content_to_chat_content(value)}]
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
                messages.append({"role": "assistant", "content": None, "tool_calls": list(pending_tool_calls)})
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
            messages.append({"role": role, "content": _responses_content_to_chat_content(item.get("content", ""))})
        elif item_type in {"input_text", "text", "input_image", "input_audio"}:
            flush_pending_assistant_tool_calls()
            messages.append({"role": "user", "content": _responses_content_to_chat_content(item)})
        elif item_type == "computer_call_output":
            flush_pending_assistant_tool_calls()
            messages.append({"role": "user", "content": _computer_output_to_chat_content(item)})
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
            messages.append({"role": "tool", "tool_call_id": item.get("call_id"), "content": _content_to_text(output)})
            if _has_visual_content(output):
                messages.append({"role": "user", "content": _visual_feedback_chat_content(output, item.get("call_id"))})
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
            messages.append({"role": "tool", "tool_call_id": item.get("call_id"), "content": _content_to_text(output)})
            if _has_visual_content(output):
                messages.append({"role": "user", "content": _visual_feedback_chat_content(output, item.get("call_id"))})
        elif item_type == "tool_search_call":
            tool = _hosted_call_to_function_tool(item)
            if tool:
                pending_tool_calls.append(tool)
        elif item_type in {"local_shell_call", "web_search_call", "image_generation_call"}:
            tool = _hosted_call_to_function_tool(item)
            if tool:
                pending_tool_calls.append(tool)
        elif item_type in {"context_compaction", "compaction"}:
            flush_pending_assistant_tool_calls()
            msg = _compaction_to_system_message(item)
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
            decoded = _decode_thinking_blob(encrypted)
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
                    "content": None,
                }
            )
    flush_pending_assistant_tool_calls()
    return messages


def _responses_content_to_chat_content(content: Any) -> str | list[dict[str, Any]]:
    parts = _chat_parts_from_content(content)
    if not parts:
        return ""
    if any(part.get("type") != "text" for part in parts):
        return parts
    return "\n".join(str(part.get("text", "")) for part in parts if part.get("type") == "text")


def _computer_output_to_chat_content(item: dict[str, Any]) -> str | list[dict[str, Any]]:
    call_id = item.get("call_id") or item.get("id")
    prefix = f"Computer output for {call_id}." if call_id else "Computer output."
    parts = _chat_parts_from_content(item.get("output", ""))
    if any(part.get("type") == "image_url" for part in parts):
        return [{"type": "text", "text": prefix}, *parts]
    text = "\n".join(str(part.get("text", "")) for part in parts if part.get("type") == "text")
    return f"{prefix}\n{text}" if text else prefix


def _visual_feedback_chat_content(output: Any, call_id: Any) -> list[dict[str, Any]]:
    prefix = f"Visual tool output for {call_id}." if call_id else "Visual tool output."
    parts = [part for part in _chat_parts_from_content(output) if part.get("type") == "image_url"]
    return [{"type": "text", "text": prefix}, *parts]


def _chat_parts_from_content(content: Any) -> list[dict[str, Any]]:
    if content is None:
        return []
    if isinstance(content, str):
        return [{"type": "text", "text": content}] if content else []
    if isinstance(content, list):
        parts: list[dict[str, Any]] = []
        for part in content:
            parts.extend(_chat_parts_from_content(part))
        return parts
    if isinstance(content, dict):
        content_type = str(content.get("type") or "")
        if content_type in {"input_text", "output_text", "text"}:
            text = str(content.get("text", ""))
            return [{"type": "text", "text": text}] if text else []
        if content_type == "input_audio" or "input_audio" in content:
            audio = _chat_audio_part(content)
            return [audio] if audio else []
        if content_type in {"input_image", "image_url"} or "image_url" in content:
            image = _chat_image_part(content)
            return [image] if image else []
        if content_type == "computer_call_output":
            return _chat_parts_from_content(content.get("output"))
        if "output" in content and _has_visual_content(content.get("output")):
            return _chat_parts_from_content(content.get("output"))
        if "content" in content:
            return _chat_parts_from_content(content["content"])
        if "text" in content:
            text = str(content.get("text", ""))
            return [{"type": "text", "text": text}] if text else []
        if content_type:
            raise ResponsesInputError(f"Unsupported Responses content part type: {content_type}")
    return []


def _chat_image_part(part: dict[str, Any]) -> dict[str, Any] | None:
    url = _image_url_from_part(part)
    if not url:
        return None
    image_url: dict[str, Any] = {"url": url}
    detail = part.get("detail") or part.get("image_detail")
    if detail:
        image_url["detail"] = detail
    return {"type": "image_url", "image_url": image_url}


def _chat_audio_part(part: dict[str, Any]) -> dict[str, Any] | None:
    input_audio = part.get("input_audio")
    if isinstance(input_audio, dict):
        audio = dict(input_audio)
        _normalize_audio_part(audio)
        return {"type": "input_audio", "input_audio": audio}
    if isinstance(input_audio, str):
        audio: dict[str, Any] = {"data": input_audio}
        if part.get("format"):
            audio["format"] = part["format"]
        _normalize_audio_part(audio)
        return {"type": "input_audio", "input_audio": audio}
    data = part.get("data")
    if isinstance(data, str):
        audio = {"data": data}
        if part.get("format"):
            audio["format"] = part["format"]
        _normalize_audio_part(audio)
        return {"type": "input_audio", "input_audio": audio}
    return None


def _normalize_audio_part(audio: dict[str, Any]) -> None:
    data = audio.get("data")
    if not isinstance(data, str) or not data:
        raise ResponsesInputError("input_audio.data is required")
    explicit_format = str(audio.get("format") or "").lower()
    if explicit_format and explicit_format not in SUPPORTED_AUDIO_FORMATS:
        raise ResponsesInputError(f"Unsupported input_audio format: {explicit_format}")
    inferred_format = _infer_audio_format_from_data_url(data)
    if inferred_format:
        if explicit_format and explicit_format != inferred_format:
            raise ResponsesInputError(
                f"input_audio format {explicit_format} does not match data URL media type {inferred_format}"
            )
        audio["format"] = inferred_format
    elif not explicit_format:
        raise ResponsesInputError("input_audio.format is required when data is not an audio data URL")
    _validate_inline_media_size(data, "input_audio.data")


def _infer_audio_format_from_data_url(data: str) -> str:
    if not data.startswith("data:"):
        return ""
    match = re.match(r"data:([^;,]+);base64,(.*)", data, re.DOTALL)
    if not match:
        raise ResponsesInputError("input_audio.data must be a base64 data URL when it starts with data:")
    media_type = match.group(1).lower()
    inferred = SUPPORTED_AUDIO_MIME_FORMATS.get(media_type)
    if not inferred:
        raise ResponsesInputError(f"Unsupported input_audio media type: {media_type}")
    return inferred


def _validate_inline_media_size(data: str, field_name: str) -> None:
    if not data.startswith("data:"):
        return
    match = re.match(r"data:[^;,]+;base64,(.*)", data, re.DOTALL)
    if not match:
        return
    payload = "".join(match.group(1).split())
    padding = payload.count("=")
    decoded_size = max(0, (len(payload) * 3 // 4) - padding)
    if decoded_size > MAX_INLINE_MEDIA_BYTES:
        raise ResponsesInputError(f"{field_name} exceeds {MAX_INLINE_MEDIA_BYTES} bytes")


def _image_url_from_part(part: dict[str, Any]) -> str:
    image_url = part.get("image_url")
    if isinstance(image_url, str):
        _validate_inline_media_size(image_url, "image_url")
        return image_url
    if isinstance(image_url, dict) and isinstance(image_url.get("url"), str):
        url = image_url["url"]
        _validate_inline_media_size(url, "image_url")
        return url
    for key in ("url", "file_url"):
        value = part.get(key)
        if isinstance(value, str):
            _validate_inline_media_size(value, key)
            return value
    return ""


def _has_visual_content(content: Any) -> bool:
    return any(part.get("type") == "image_url" for part in _chat_parts_from_content(content))


def _chat_content_to_anthropic_content(content: Any) -> str | list[dict[str, Any]]:
    blocks = _chat_content_to_anthropic_blocks(content)
    if not any(block.get("type") == "image" for block in blocks):
        return "\n".join(block.get("text", "") for block in blocks if block.get("type") == "text")
    return blocks


def _chat_content_to_anthropic_blocks(content: Any) -> list[dict[str, Any]]:
    blocks: list[dict[str, Any]] = []
    for part in _chat_parts_from_content(content):
        if part.get("type") == "text":
            text = str(part.get("text", ""))
            if text:
                blocks.append({"type": "text", "text": text})
        elif part.get("type") == "image_url":
            block = _chat_image_part_to_anthropic(part)
            if block:
                blocks.append(block)
    return blocks or [{"type": "text", "text": ""}]


def _chat_image_part_to_anthropic(part: dict[str, Any]) -> dict[str, Any] | None:
    image_url = part.get("image_url")
    url = ""
    if isinstance(image_url, dict):
        url = str(image_url.get("url") or "")
    elif isinstance(image_url, str):
        url = image_url
    if not url:
        return None
    if url.startswith("data:"):
        match = re.match(r"data:([^;,]+);base64,(.*)", url, re.DOTALL)
        if not match:
            return None
        return {"type": "image", "source": {"type": "base64", "media_type": match.group(1), "data": match.group(2)}}
    return {"type": "image", "source": {"type": "url", "url": url}}


def _content_to_text(content: Any) -> str:
    if isinstance(content, str):
        return content
    if isinstance(content, list):
        parts = []
        for part in content:
            if isinstance(part, str):
                parts.append(part)
            elif isinstance(part, dict):
                if part.get("type") in {"input_text", "output_text", "text"}:
                    parts.append(str(part.get("text", "")))
                elif part.get("type") == "input_audio" or "input_audio" in part:
                    parts.append("[audio]")
                elif part.get("type") in {"input_image", "image_url"} or "image_url" in part:
                    parts.append("[image]")
                elif "content" in part:
                    parts.append(_content_to_text(part["content"]))
        return "\n".join(p for p in parts if p)
    if isinstance(content, dict):
        if content.get("type") == "input_audio" or "input_audio" in content:
            return "[audio]"
        if content.get("type") in {"input_image", "image_url"} or "image_url" in content:
            return "[image]"
        if "output" in content:
            return _content_to_text(content.get("output"))
        if "text" in content:
            return str(content.get("text", ""))
        return str(content)
    return str(content)


def _responses_tools_to_chat_tools(tools: Any) -> list[dict[str, Any]]:
    if not isinstance(tools, list):
        return []
    converted = []
    for tool in tools:
        function_tool = _responses_tool_to_chat_function(tool)
        if function_tool:
            converted.append(function_tool)
    return converted


def _responses_tool_to_chat_function(tool: Any) -> dict[str, Any] | None:
    if not isinstance(tool, dict):
        return None
    if tool.get("type") == "function" and "function" in tool:
        return tool
    name = _responses_tool_function_name(tool)
    if not name:
        return None
    return {
        "type": "function",
        "function": {
            "name": name,
            "description": tool.get("description") or _native_tool_description(tool),
            "parameters": tool.get("parameters") or _native_tool_parameters(tool),
        },
    }


def _responses_tool_function_name(tool: dict[str, Any]) -> str:
    fn = tool.get("function")
    if isinstance(fn, dict) and fn.get("name"):
        return _sanitize_tool_name(str(fn["name"]))
    if tool.get("name"):
        return _sanitize_tool_name(str(tool["name"]))
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
        return _sanitize_tool_name(tool_type)
    return ""


def _sanitize_tool_name(name: str) -> str:
    clean = re.sub(r"[^a-zA-Z0-9_-]+", "_", name.strip())[:64]
    return clean.strip("_") or "tool"


def _native_tool_description(tool: dict[str, Any]) -> str:
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


def _native_tool_parameters(tool: dict[str, Any]) -> dict[str, Any]:
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


def _responses_tool_choice_to_chat(tool_choice: Any, tools: Any) -> Any:
    if tool_choice is None:
        return None
    if isinstance(tool_choice, str):
        if tool_choice in {"auto", "none", "required"}:
            return tool_choice
        name = _tool_choice_name(tool_choice, tools)
        return {"type": "function", "function": {"name": name}} if name else tool_choice
    if isinstance(tool_choice, dict):
        if tool_choice.get("type") == "function" and "function" in tool_choice:
            return tool_choice
        name = _tool_choice_name(str(tool_choice.get("name") or tool_choice.get("type") or ""), tools)
        return {"type": "function", "function": {"name": name}} if name else tool_choice
    return tool_choice


def _tool_choice_name(choice: str, tools: Any) -> str:
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
                return _responses_tool_function_name(tool)
    return _sanitize_tool_name(choice)


def _responses_tools_to_anthropic_tools(tools: Any) -> list[dict[str, Any]]:
    chat_tools = _responses_tools_to_chat_tools(tools)
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


def _copy_if_present(src: dict[str, Any], dst: dict[str, Any], src_key: str, dst_key: str | None = None) -> None:
    if src_key in src and src[src_key] is not None:
        dst[dst_key or src_key] = src[src_key]


def _anthropic_stop(reason: Any) -> str:
    return "tool_calls" if reason == "tool_use" else "stop"


def _jsonish(value: Any) -> str:
    import json

    if isinstance(value, str):
        return value
    return json.dumps(value, separators=(",", ":"))


def _sanitize_string(value: str) -> str:
    value = value.replace("\x00", "")
    return "".join(char for char in value if char in "\n\r\t" or ord(char) >= 0x20)


def _sanitize_chat_content_parts(parts: list[Any]) -> list[dict[str, Any]]:
    cleaned = []
    for part in parts:
        if isinstance(part, str):
            cleaned.append({"type": "text", "text": _sanitize_string(part)})
            continue
        if not isinstance(part, dict):
            continue
        current = dict(part)
        if current.get("type") == "text":
            current["text"] = _sanitize_string(str(current.get("text", "")))
        elif current.get("type") == "image_url":
            image_url = current.get("image_url")
            if isinstance(image_url, dict):
                current["image_url"] = {k: _sanitize_string(str(v)) for k, v in image_url.items() if v is not None}
            elif isinstance(image_url, str):
                current["image_url"] = {"url": _sanitize_string(image_url)}
        cleaned.append(current)
    return cleaned


def _sanitize_chat_messages(messages: list[dict[str, Any]]) -> list[dict[str, Any]]:
    cleaned = []
    for message in messages:
        current = dict(message)
        current.pop("_reasoning_only", None)
        current.pop("encrypted_content", None)
        current.pop("summary", None)
        role = current.get("role", "user")
        content = current.get("content")
        if content is None:
            current["content"] = None if role == "assistant" else ""
        elif isinstance(content, list):
            current["content"] = _sanitize_chat_content_parts(content)
        elif isinstance(content, str):
            current["content"] = _sanitize_string(content)
        else:
            current["content"] = _sanitize_string(_content_to_text(content))

        if isinstance(current.get("reasoning_content"), str):
            current["reasoning_content"] = _sanitize_string(current["reasoning_content"])
        tool_calls = current.get("tool_calls")
        if tool_calls:
            copied_calls = []
            for call in tool_calls:
                if not isinstance(call, dict):
                    continue
                copied_call = dict(call)
                if isinstance(copied_call.get("id"), str):
                    copied_call["id"] = _sanitize_string(copied_call["id"])
                function = copied_call.get("function")
                if isinstance(function, dict):
                    function = dict(function)
                    arguments = function.get("arguments")
                    if isinstance(arguments, str):
                        function["arguments"] = _sanitize_string(arguments)
                    copied_call["function"] = function
                copied_calls.append(copied_call)
            current["tool_calls"] = copied_calls
        tool_call_id = current.get("tool_call_id")
        if isinstance(tool_call_id, str):
            current["tool_call_id"] = _sanitize_string(tool_call_id)
        cleaned.append(current)
    return cleaned


def _normalize_chat_roles(messages: list[dict[str, Any]]) -> list[dict[str, Any]]:
    normalized = []
    for message in messages:
        current = dict(message)
        if current.get("role") == "developer":
            current["role"] = "system"
        normalized.append(current)
    return normalized


def _merge_consecutive_messages(messages: list[dict[str, Any]]) -> list[dict[str, Any]]:
    merged: list[dict[str, Any]] = []
    for message in messages:
        current = dict(message)
        role = current.get("role")
        if merged and role == merged[-1].get("role") and role in {"system", "user", "assistant"}:
            previous = merged[-1]
            previous["content"] = _merge_chat_content(previous.get("content"), current.get("content"))
            if role == "assistant":
                if current.get("reasoning_content") and not previous.get("reasoning_content"):
                    previous["reasoning_content"] = current["reasoning_content"]
                tool_calls = list(previous.get("tool_calls") or []) + list(current.get("tool_calls") or [])
                if tool_calls:
                    previous["tool_calls"] = tool_calls
            continue
        merged.append(current)
    return merged


def _merge_chat_content(left: Any, right: Any) -> Any:
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
