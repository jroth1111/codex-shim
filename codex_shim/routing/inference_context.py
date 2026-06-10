from __future__ import annotations

from dataclasses import dataclass
from typing import Any, Literal

from aiohttp import web

from ..responses_request import SHIM_INTERNAL_KEY_PREFIX

CliMode = Literal["default", "plan", "ask", "debug"]
MetadataMode = Literal["default", "plan", "search", "debug"]
Surface = Literal["cli", "acp"]
PrefetchStatus = Literal["loaded", "error", "timed_out", "skipped"]

# Mirrors agent.v1.AgentMode from reproduce-inference.mjs / agent_pb.js
AGENT_MODE_UNSPECIFIED = 0
AGENT_MODE_AGENT = 1
AGENT_MODE_ASK = 2
AGENT_MODE_PLAN = 3
AGENT_MODE_DEBUG = 4


@dataclass(frozen=True)
class AgentModeMapping:
    name: str
    value: int


def agent_mode_for_cli_mode(cli_mode: CliMode) -> AgentModeMapping:
    if cli_mode == "plan":
        return AgentModeMapping("PLAN", AGENT_MODE_PLAN)
    if cli_mode == "ask":
        return AgentModeMapping("ASK", AGENT_MODE_ASK)
    if cli_mode == "debug":
        return AgentModeMapping("DEBUG", AGENT_MODE_DEBUG)
    return AgentModeMapping("AGENT", AGENT_MODE_AGENT)


def metadata_mode_for_cli_mode(cli_mode: CliMode) -> MetadataMode:
    if cli_mode == "plan":
        return "plan"
    if cli_mode == "ask":
        return "search"
    if cli_mode == "debug":
        return "debug"
    return "default"


def _truthy(value: Any) -> bool:
    if isinstance(value, bool):
        return value
    if value is None:
        return False
    return str(value).strip().lower() in {"1", "true", "yes", "on"}


def _merge_shim_internal_metadata(body: dict[str, Any], metadata: dict[str, Any]) -> dict[str, Any]:
    merged = dict(metadata)
    for key, value in body.items():
        if not str(key).startswith(SHIM_INTERNAL_KEY_PREFIX):
            continue
        suffix = str(key)[len(SHIM_INTERNAL_KEY_PREFIX) :]
        if suffix and suffix not in merged:
            merged[suffix] = value
    return merged


def _parse_cli_mode(body: dict[str, Any], metadata: dict[str, Any]) -> CliMode:
    raw = metadata.get("mode") or body.get("mode") or metadata.get("shim_mode") or body.get("_shim_mode")
    if raw is None:
        return "default"
    mode = str(raw).strip().lower()
    if mode in {"search"}:
        return "ask"
    if mode in {"plan", "ask", "debug", "default"}:
        return mode  # type: ignore[return-value]
    return "default"


def _parse_surface(request: web.Request | None, route_transport: str | None, metadata: dict[str, Any]) -> Surface:
    if request is not None:
        header = (request.headers.get("x-cursor-client-type") or "").strip().lower()
        if header == "acp":
            return "acp"
        if header == "cli":
            return "cli"
    meta_surface = str(metadata.get("surface") or metadata.get("client_surface") or "").strip().lower()
    if meta_surface == "acp":
        return "acp"
    if route_transport in {"cursor_acp", "cursor-agent-grpc"}:
        return "acp"
    return "cli"


def parse_inference_context(
    body: dict[str, Any],
    *,
    request: web.Request | None = None,
    route_transport: str | None = None,
    selected_by: str | None = None,
    resolved_model_id: str | None = None,
    prefetch_status: PrefetchStatus = "skipped",
) -> InferenceContext:
    raw_metadata = body.get("metadata")
    base_metadata = raw_metadata if isinstance(raw_metadata, dict) else {}
    metadata = _merge_shim_internal_metadata(body, base_metadata)
    cli_mode = _parse_cli_mode(body, metadata)
    agent_mode = agent_mode_for_cli_mode(cli_mode)
    force = (
        _truthy(metadata.get("force"))
        or _truthy(metadata.get("yolo"))
        or _truthy(metadata.get("is_run_everything"))
        or _truthy(metadata.get("isRunEverything"))
        or _truthy(body.get("force"))
        or _truthy(body.get("yolo"))
    )
    surface = _parse_surface(request, route_transport, metadata)
    if route_transport == "cursor-agent-grpc":
        transport_selected = "cursor-agent-grpc"
    else:
        transport_selected = str(metadata.get("transport_selected") or route_transport or "in_process")
    return InferenceContext(
        cli_mode=cli_mode,
        agent_mode_name=agent_mode.name,
        agent_mode_value=agent_mode.value,
        metadata_mode=metadata_mode_for_cli_mode(cli_mode),
        force_run_everything=force,
        surface=surface,
        selected_by=selected_by,
        resolved_model_id=resolved_model_id,
        prefetch_status=prefetch_status,
        transport_selected=transport_selected,
    )


@dataclass(frozen=True)
class InferenceContext:
    cli_mode: CliMode
    agent_mode_name: str
    agent_mode_value: int
    metadata_mode: MetadataMode
    force_run_everything: bool
    surface: Surface
    selected_by: str | None = None
    resolved_model_id: str | None = None
    prefetch_status: PrefetchStatus = "skipped"
    transport_selected: str = "in_process"

    def observability_attributes(self) -> dict[str, Any]:
        return {
            "inference_mode": self.cli_mode,
            "metadata_mode": self.metadata_mode,
            "agent_mode": self.agent_mode_name,
            "agent_mode_value": self.agent_mode_value,
            "surface": self.surface,
            "model_prefetch_status": self.prefetch_status,
            "force_run_everything": self.force_run_everything,
            "transport_selected": self.transport_selected,
            "resolved_model_id": self.resolved_model_id,
            "selected_by": self.selected_by,
        }
