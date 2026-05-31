from __future__ import annotations

from typing import Any

from ..thinking import encode_thinking_payload, reasoning_encrypted_content
from .common import jsonish, strip_think
from .tools import tool_call_to_response_item

from .messages import minimax_reasoning
from .usage import normalize_responses_usage

def chat_completion_to_response(payload: dict[str, Any], requested_model: str) -> dict[str, Any]:
    choice = (payload.get("choices") or [{}])[0]
    message = choice.get("message") or {}
    output: list[dict[str, Any]] = []
    reasoning = message.get("reasoning_content") or message.get("reasoning") or minimax_reasoning(message)
    if reasoning:
        reasoning_text = str(reasoning)
        output.append(
            {
                "id": "rs_0",
                "type": "reasoning",
                "status": "completed",
                "summary": [{"type": "summary_text", "text": reasoning_text}],
                "encrypted_content": None,
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
        "usage": normalize_responses_usage(payload.get("usage")),
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
            thinking_block = {
                "type": "thinking",
                "thinking": thinking,
                "signature": str(block.get("signature") or ""),
            }
            output.append(
                {
                    "id": f"rs_{len(output)}",
                    "type": "reasoning",
                    "status": "completed",
                    "summary": [{"type": "summary_text", "text": thinking}] if thinking else [],
                    "encrypted_content": reasoning_encrypted_content(thinking_block),
                }
            )
        elif block_type == "redacted_thinking":
            output.append(
                {
                    "id": f"rs_{len(output)}",
                    "type": "reasoning",
                    "status": "completed",
                    "summary": [],
                    "encrypted_content": encode_thinking_payload(
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
                            "arguments": jsonish(block.get("input", {})),
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
        "usage": normalize_responses_usage(payload.get("usage")),
    }
