from __future__ import annotations

import json
import time
from dataclasses import asdict, dataclass
from pathlib import Path
from typing import Any


@dataclass(frozen=True)
class GovernanceEvent:
    timestamp: int
    path: str
    provider: str
    model_slug: str
    outcome: str
    failure_category: str | None = None
    requested_tool_count: int = 0
    executed_tool_count: int | None = None
    selected_by: str | None = None
    retry_attempts: int = 0
    fallback_used: bool = False
    inference_mode: str | None = None
    metadata_mode: str | None = None
    surface: str | None = None
    model_prefetch_status: str | None = None
    force_run_everything: bool = False
    transport_selected: str | None = None
    fallback_reason: str | None = None


class GovernanceAuditSink:
    def __init__(self, log_path: Path):
        self._log_path = log_path
        self._log_path.parent.mkdir(parents=True, exist_ok=True)

    def emit(
        self,
        *,
        path: str,
        provider: str,
        model_slug: str,
        outcome: str,
        body: dict[str, Any],
        failure_category: str | None = None,
        selected_by: str | None = None,
        retry_attempts: int = 0,
        fallback_used: bool = False,
        tool_count_override: int | None = None,
        inference_mode: str | None = None,
        metadata_mode: str | None = None,
        surface: str | None = None,
        model_prefetch_status: str | None = None,
        force_run_everything: bool = False,
        transport_selected: str | None = None,
        fallback_reason: str | None = None,
    ) -> None:
        requested_tool_count = 0
        tools = body.get("tools")
        if isinstance(tools, list):
            requested_tool_count = len(tools)
        executed_tool_count: int | None = int(tool_count_override) if tool_count_override is not None else None
        event = GovernanceEvent(
            timestamp=int(time.time()),
            path=path,
            provider=provider,
            model_slug=model_slug,
            outcome=outcome,
            failure_category=failure_category,
            requested_tool_count=requested_tool_count,
            executed_tool_count=executed_tool_count,
            selected_by=selected_by,
            retry_attempts=retry_attempts,
            fallback_used=fallback_used,
            inference_mode=inference_mode,
            metadata_mode=metadata_mode,
            surface=surface,
            model_prefetch_status=model_prefetch_status,
            force_run_everything=force_run_everything,
            transport_selected=transport_selected,
            fallback_reason=fallback_reason,
        )
        with self._log_path.open("a", encoding="utf-8") as f:
            f.write(json.dumps(asdict(event), sort_keys=True) + "\n")
