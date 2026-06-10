from __future__ import annotations

import hashlib
import json
import time
from dataclasses import dataclass
from typing import Any

from aiohttp import web

from ..settings import PROJECT_ROOT as _PROJECT_ROOT
from ..wire import StreamSink
from .compact_frontier import (
    CompactFrontier,
    extract_compact_frontier,
    mentions_modified_files,
    preserves_last_user_intent,
)

PROJECT_ROOT = _PROJECT_ROOT
POSTCOMPACT_CAPTURE_PATH = PROJECT_ROOT / ".codex-shim" / "postcompact-captures.jsonl"
SUMMARY_EXCERPT_LIMIT = 1200


@dataclass(frozen=True)
class CompactQuality:
    summary_status: str
    preserves_last_user_intent: bool
    mentions_modified_files: bool
    augmented: bool = False


def compact_request_body(
    body: dict[str, Any],
    upstream_model: str,
    *,
    frontier: CompactFrontier | None = None,
    git_status: str | None = None,
) -> dict[str, Any]:
    if body.get("instructions"):
        instructions = body.get("instructions")
    elif frontier is not None and (
        frontier.input_item_count > 0
        or frontier.last_user_intent
        or frontier.modified_files
        or frontier.recent_commands
    ):
        instructions = build_emulated_compact_instructions(frontier, git_status=git_status)
    else:
        instructions = default_compact_instructions()
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


def build_emulated_compact_instructions(frontier: CompactFrontier, *, git_status: str | None = None) -> str:
    sections = [
        "You are producing an emulated compaction summary for Codex.",
        "The summary is a projection for the next turn, not authoritative history.",
        "When extracted frontier facts conflict with prior compaction text, prefer the frontier facts.",
        "",
        "Return plain text with these exact section headers:",
        "LAST_USER_INTENT:",
        "MODIFIED_FILES:",
        "RECENT_COMMANDS:",
        "OPEN_ITEMS:",
        "DECISIONS_AND_BLOCKERS:",
        "NEXT_ACTION:",
        "",
        "Extracted frontier (authoritative for this compaction request):",
        f"LAST_USER_INTENT: {frontier.last_user_intent or '(none)'}",
        f"MODIFIED_FILES: {', '.join(frontier.modified_files) if frontier.modified_files else '(none)'}",
        f"RECENT_COMMANDS: {', '.join(frontier.recent_commands) if frontier.recent_commands else '(none)'}",
        f"OPEN_ITEMS: {', '.join(frontier.open_items) if frontier.open_items else '(none)'}",
    ]
    if frontier.prior_compaction_excerpt:
        sections.extend(
            [
                f"PRIOR_COMPACTION_EXCERPT: {frontier.prior_compaction_excerpt}",
            ]
        )
    if git_status:
        sections.extend(
            [
                f"GIT_STATUS: {git_status}",
            ]
        )
    sections.extend(
        [
            "",
            "Fill each section from the conversation input and frontier facts above.",
            "Omit filler. Keep the handoff concise but complete enough to resume work safely.",
        ]
    )
    return "\n".join(sections)


def evaluate_compact_summary(summary: str, frontier: CompactFrontier | None) -> CompactQuality:
    if frontier is None:
        return CompactQuality(
            summary_status="projection_unverified",
            preserves_last_user_intent=True,
            mentions_modified_files=True,
        )
    intent_ok = preserves_last_user_intent(summary, frontier)
    files_ok = mentions_modified_files(summary, frontier)
    verified = intent_ok and files_ok
    return CompactQuality(
        summary_status="projection_verified" if verified else "projection_unverified",
        preserves_last_user_intent=intent_ok,
        mentions_modified_files=files_ok,
    )


def augment_compact_summary(
    summary: str,
    frontier: CompactFrontier | None,
    *,
    git_status: str | None = None,
) -> str:
    frontier = frontier or CompactFrontier()
    lines = [
        "[shim-compact-warning: projection_unverified]",
        f"LAST_USER_INTENT: {frontier.last_user_intent or '(none)'}",
        f"MODIFIED_FILES: {', '.join(frontier.modified_files) if frontier.modified_files else '(none)'}",
    ]
    if git_status:
        lines.append(f"GIT_STATUS: {git_status}")
    lines.extend(["--- original summary ---", summary])
    return "\n".join(lines)


def finalize_compact_summary(
    summary: str,
    frontier: CompactFrontier | None,
    *,
    git_status: str | None = None,
) -> tuple[str, CompactQuality]:
    quality = evaluate_compact_summary(summary, frontier)
    if quality.summary_status == "projection_verified":
        return summary, quality
    augmented = augment_compact_summary(summary, frontier, git_status=git_status)
    return augmented, CompactQuality(
        summary_status=quality.summary_status,
        preserves_last_user_intent=quality.preserves_last_user_intent,
        mentions_modified_files=quality.mentions_modified_files,
        augmented=True,
    )


def compact_audit_record(
    *,
    model: str,
    summary: str,
    quality: CompactQuality,
    frontier: CompactFrontier | None,
    workspace: str | None = None,
    git_status: str | None = None,
) -> dict[str, Any]:
    frontier = frontier or CompactFrontier()
    excerpt = summary[:SUMMARY_EXCERPT_LIMIT]
    return {
        "ts": time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime()),
        "model": model,
        "summary_status": quality.summary_status,
        "summary_hash": hashlib.sha256(summary.encode("utf-8", errors="replace")).hexdigest(),
        "summary_excerpt": excerpt,
        "last_user_intent": frontier.last_user_intent,
        "modified_files_count": len(frontier.modified_files),
        "input_item_count": frontier.input_item_count,
        "git_status_present": bool(git_status),
        "workspace": workspace,
        "augmented": quality.augmented,
        "preserves_last_user_intent": quality.preserves_last_user_intent,
        "mentions_modified_files": quality.mentions_modified_files,
    }


def append_postcompact_capture(record: dict[str, Any]) -> None:
    try:
        POSTCOMPACT_CAPTURE_PATH.parent.mkdir(parents=True, exist_ok=True)
        with POSTCOMPACT_CAPTURE_PATH.open("a", encoding="utf-8") as handle:
            handle.write(json.dumps(record, sort_keys=True) + "\n")
    except OSError:
        return


async def as_compact_response(
    response: StreamSink,
    model: str,
    request_body: dict[str, Any] | None = None,
    *,
    frontier: CompactFrontier | None = None,
    git_status: str | None = None,
    workspace: str | None = None,
    audit_callback: Any | None = None,
) -> StreamSink:
    if not isinstance(response, web.Response) or response.status >= 400:
        return response
    try:
        payload = json.loads(response.text or "{}")
    except json.JSONDecodeError:
        return response
    output = payload.get("output") if isinstance(payload, dict) else None
    summary = compact_summary_from_output(output)
    if frontier is None and request_body is not None:
        frontier = extract_compact_frontier(request_body.get("input"))
    final_summary, quality = finalize_compact_summary(summary, frontier, git_status=git_status)
    compacted = compact_response_payload(
        model,
        final_summary,
        payload.get("usage") if isinstance(payload, dict) else None,
        include_trigger=input_has_compaction_trigger((request_body or {}).get("input")),
    )
    audit = compact_audit_record(
        model=model,
        summary=final_summary,
        quality=quality,
        frontier=frontier,
        workspace=workspace,
        git_status=git_status,
    )
    append_postcompact_capture(audit)
    if audit_callback is not None:
        audit_callback(audit)
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
