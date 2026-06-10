"""Shared helpers for provider transports plus the injected runtime contract."""
from __future__ import annotations

import asyncio
from contextlib import suppress
from dataclasses import dataclass
from pathlib import Path
from typing import TYPE_CHECKING, Any, Callable

from aiohttp import ClientTimeout

from ..capabilities import execution_mode, is_delegate_route, route_capabilities
from ..sessions import PreparedResponsesRequest
from ..settings import ModelSettings, ShimModel
from ..translate import ResponsesStreamState

if TYPE_CHECKING:
    from .cursor import CursorThreadSessionStore
    from .cursor_agent.transport import CursorAgentTransport


@dataclass
class ProviderRuntime:
    """Capabilities provider transports need from the composition root.

    Injected by ShimServer so transports never import the server. The
    request-attribute channel (_codex_shim_* attributes set on aiohttp
    request/response objects) also crosses this boundary; setters and
    readers must move together.
    """

    timeout: ClientTimeout
    settings: ModelSettings
    operational_store: Any
    cursor_thread_sessions: "CursorThreadSessionStore"
    cursor_agent_transport: "CursorAgentTransport"
    store_history: Callable[..., None]
    emit_governance_error: Callable[..., None]


async def await_cursor_inference(coro):
    """Run cursor CLI/ACP inference; cancel the child process if the request task is cancelled."""
    task = asyncio.create_task(coro)
    try:
        return await task
    except asyncio.CancelledError:
        if not task.done():
            task.cancel()
        with suppress(asyncio.CancelledError):
            await task
        raise

def executed_tool_count_from_response_payload(response_payload: dict[str, Any] | None) -> int:
    """
    Best-effort extraction of how many tools were executed in this completed turn.

    For non-stream `/v1/responses`, provider translators build `output` items that
    include tool-call-like types (e.g. `web_search_call`, `local_shell_call`,
    `function_call`). We count those here.
    """
    if not isinstance(response_payload, dict):
        return 0
    output = response_payload.get("output")
    if not isinstance(output, list):
        return 0
    tool_types = {
        "function_call",
        "local_shell_call",
        "web_search_call",
        "image_generation_call",
        "tool_search_call",
        "mcp_tool_call",
        "custom_tool_call",
        "function_call_output",
        "tool_result",
    }
    count = 0
    for item in output:
        if not isinstance(item, dict):
            continue
        t = str(item.get("type") or "")
        if t in tool_types or t.endswith("_call") or t.endswith("_result"):
            count += 1
    return count

def responses_stream_state(route: ShimModel, tools: Any) -> ResponsesStreamState:
    return ResponsesStreamState(route.slug, tools=tools, delegate_mode=is_delegate_route(route))

def shim_response_metadata(
    route: ShimModel,
    prepared: PreparedResponsesRequest | None,
    *,
    native_envelope: dict[str, Any] | None = None,
    workspace: Path | None = None,
) -> dict[str, Any]:
    caps = route_capabilities(route)
    mode = execution_mode(route)
    metadata: dict[str, Any] = {
        "shim_route": {
            "provider": route.provider,
            "transport": route.transport,
            "execution_mode": mode,
            "tool_authority": "cursor" if mode == "delegate" else "codex",
            "capabilities": {
                "local_shell": caps.local_shell,
                "web_search": caps.web_search,
                "tool_search": caps.tool_search,
                "image_generation": caps.image_generation,
                "mcp_tools": caps.mcp_tools,
                "reasoning": caps.reasoning,
            },
        }
    }
    if workspace is not None:
        metadata["shim_route"]["workspace"] = str(workspace)
    if prepared is not None and prepared.chained_from_previous:
        metadata["shim_history"] = {"expanded_previous_response_id": True}
    if native_envelope is not None:
        metadata["shim_native_envelope"] = native_envelope
    return metadata

def workspace_log_value(workspace: Path | None) -> str | None:
    return str(workspace) if workspace is not None else None

def attach_response_metadata(
    response_payload: dict[str, Any],
    route: ShimModel,
    prepared: PreparedResponsesRequest | None,
    *,
    native_envelope: dict[str, Any] | None = None,
    workspace: Path | None = None,
) -> dict[str, Any]:
    payload = dict(response_payload)
    existing = payload.get("metadata")
    merged = dict(existing) if isinstance(existing, dict) else {}
    merged.update(shim_response_metadata(route, prepared, native_envelope=native_envelope, workspace=workspace))
    payload["metadata"] = merged
    return payload


def governance_inference_kwargs(inference) -> dict[str, Any]:
    if inference is None:
        return {}
    return {
        "inference_mode": inference.cli_mode,
        "metadata_mode": inference.metadata_mode,
        "surface": inference.surface,
        "model_prefetch_status": inference.prefetch_status,
        "force_run_everything": inference.force_run_everything,
        "transport_selected": inference.transport_selected,
    }
