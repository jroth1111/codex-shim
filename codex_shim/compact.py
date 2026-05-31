from __future__ import annotations

import json
import time
from typing import Any

from aiohttp import web


def compact_request_body(body: dict[str, Any], upstream_model: str) -> dict[str, Any]:
    instructions = body.get("instructions") or default_compact_instructions()
    return {
        "model": upstream_model,
        "instructions": instructions,
        "input": body.get("input") or [],
        "max_output_tokens": body.get("max_output_tokens") or body.get("max_tokens") or 4096,
        "stream": False,
    }


def default_compact_instructions() -> str:
    return (
        "Compact the conversation into a concise state handoff for the next Codex turn. "
        "Preserve the active task, user requirements, important file paths, commands already run, "
        "tool results, decisions, blockers, and the latest state. Omit filler and repeated text."
    )


async def as_compact_response(
    response: web.StreamResponse,
    model: str,
    request_body: dict[str, Any] | None = None,
) -> web.Response:
    if not isinstance(response, web.Response) or response.status >= 400:
        return response
    try:
        payload = json.loads(response.text or "{}")
    except json.JSONDecodeError:
        return response
    output = payload.get("output") if isinstance(payload, dict) else None
    summary = compact_summary_from_output(output)
    compacted = compact_response_payload(
        model,
        summary,
        payload.get("usage") if isinstance(payload, dict) else None,
        include_trigger=input_has_compaction_trigger((request_body or {}).get("input")),
    )
    return web.json_response(compacted)


def input_has_compaction_trigger(value: Any) -> bool:
    if not isinstance(value, list):
        return False
    return any(isinstance(item, dict) and item.get("type") == "compaction_trigger" for item in value)


def compact_summary_from_output(output: Any) -> str:
    parts: list[str] = []
    if isinstance(output, list):
        for item in output:
            if not isinstance(item, dict):
                continue
            item_type = item.get("type")
            if item_type in {"context_compaction", "compaction"}:
                summary = item.get("summary") or []
                if isinstance(summary, list):
                    for part in summary:
                        if isinstance(part, dict) and part.get("text"):
                            parts.append(str(part["text"]))
                continue
            if item.get("type") == "message":
                content = item.get("content") or []
                if isinstance(content, list):
                    for part in content:
                        if isinstance(part, dict) and part.get("text"):
                            parts.append(str(part["text"]))
            elif item.get("type") == "output_text" and item.get("text"):
                parts.append(str(item["text"]))
    return "\n".join(part for part in parts if part).strip()


def compact_response_payload(
    model: str,
    summary: str,
    usage: Any = None,
    *,
    include_trigger: bool = False,
) -> dict[str, Any]:
    now = int(time.time())
    response_id = f"resp_compact_{now}"
    text = summary or "No prior conversation state was available to compact."
    output: list[dict[str, Any]] = []
    if include_trigger:
        output.append({"id": f"trg_{now}", "type": "compaction_trigger"})
    output.append(
        {
            "id": f"cmp_{now}",
            "type": "context_compaction",
            "status": "completed",
            "summary": [{"type": "summary_text", "text": text}],
            "encrypted_content": None,
        }
    )
    payload = {
        "id": response_id,
        "object": "response",
        "created_at": now,
        "status": "completed",
        "model": model,
        "output": output,
    }
    if usage is not None:
        payload["usage"] = usage
    return payload
