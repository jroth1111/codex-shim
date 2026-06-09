from __future__ import annotations

import os
from pathlib import Path
from typing import Any, AsyncIterator

from aiohttp import ClientSession

from ...cursor_acp import DEFAULT_CURSOR_TIMEOUT
from ...routing import InferenceContext
from .auth import load_cursor_access_token
from .envelope import build_run_request_skeleton
from .headers import build_cursor_agent_headers, endpoint_urls
from .live_http1 import stream_http1_live_events
from .live_run import stream_run_live_events
from .types import CursorAgentPreparedRequest, CursorAgentTransportError

__all__ = ["CursorAgentTransport", "CursorAgentTransportError", "CursorAgentPreparedRequest"]


def resolve_cursor_agent_transport_mode(explicit: str | None = None) -> str:
    """``http1`` = RunSSE+BidiAppend; ``http2`` = Connect bidi AgentService/Run."""
    if explicit:
        mode = explicit.strip().lower()
        if mode in {"http2", "run", "bidi"}:
            return "http2"
        return "http1"
    raw = os.environ.get("CODEX_SHIM_CURSOR_AGENT_TRANSPORT", "http1").strip().lower()
    if raw in {"http2", "run", "bidi"}:
        return "http2"
    return "http1"


def transport_mode_from_model_row(raw: dict[str, Any] | None) -> str | None:
    if not isinstance(raw, dict):
        return None
    value = raw.get("nativeTransportMode") or raw.get("native_transport_mode")
    if value is None:
        return None
    return resolve_cursor_agent_transport_mode(str(value))


class CursorAgentTransport:
    """
    Prepares Cursor Agent native transport requests.

    Live protobuf streaming to api2.cursor.sh is opt-in via CODEX_SHIM_CURSOR_AGENT_LIVE=1.
    Mock validation uses CODEX_SHIM_CURSOR_AGENT_MOCK_URL (localhost recorder).
    Default execution delegates to cursor_cli for response fidelity.
    """

    def __init__(
        self,
        *,
        endpoint: str | None = None,
        transport_mode: str | None = None,
    ) -> None:
        self._endpoints = endpoint_urls(endpoint)
        self._transport_mode = resolve_cursor_agent_transport_mode(transport_mode)

    def prepare(
        self,
        body: dict[str, Any],
        *,
        inference: InferenceContext,
        auth_token: str | None = None,
        chained_from_previous: bool = False,
        transport_mode: str | None = None,
        model_row: dict[str, Any] | None = None,
        workspace: Path | None = None,
        prompt_text: str | None = None,
    ) -> CursorAgentPreparedRequest:
        row_mode = transport_mode_from_model_row(model_row)
        mode = resolve_cursor_agent_transport_mode(row_mode or transport_mode or self._transport_mode)
        token = auth_token or load_cursor_access_token()
        headers = build_cursor_agent_headers(
            inference=inference,
            auth_token=token,
            transport=mode,
        )
        envelope = build_run_request_skeleton(
            body,
            inference=inference,
            chained_from_previous=chained_from_previous,
            workspace=workspace,
            prompt_text=prompt_text,
        )
        return CursorAgentPreparedRequest(
            headers=headers,
            endpoints=self._endpoints,
            envelope=envelope,
            transport_mode=mode,
            timeout_seconds=DEFAULT_CURSOR_TIMEOUT,
        )

    @property
    def live_enabled(self) -> bool:
        return os.environ.get("CODEX_SHIM_CURSOR_AGENT_LIVE", "").strip().lower() in {
            "1",
            "true",
            "yes",
            "on",
        }

    @property
    def mock_url(self) -> str | None:
        raw = os.environ.get("CODEX_SHIM_CURSOR_AGENT_MOCK_URL", "").strip()
        return raw or None

    async def validate_with_mock(self, prepared: CursorAgentPreparedRequest) -> None:
        """POST envelope skeleton to a local recorder for structural validation."""
        mock = self.mock_url
        if not mock:
            return
        url = mock.rstrip("/") + "/aiserver.v1.BidiService/BidiAppend"
        payload = {
            "envelope": prepared.envelope,
            "transport_mode": prepared.transport_mode,
        }
        async with ClientSession() as session:
            async with session.post(url, json=payload, headers={"Content-Type": "application/json"}) as resp:
                if resp.status >= 500:
                    text = await resp.text()
                    raise CursorAgentTransportError(f"mock recorder rejected envelope: {resp.status} {text[:200]}")

    async def stream_events(self, prepared: CursorAgentPreparedRequest) -> AsyncIterator[dict[str, Any]]:
        if self.mock_url and not self.live_enabled:
            yield {
                "type": "shim_diagnostic",
                "subtype": "mock_validated",
                "mock_url": self.mock_url,
            }
            return
        if not self.live_enabled:
            raise CursorAgentTransportError(
                "Native Cursor Agent live transport is disabled. "
                "Set CODEX_SHIM_CURSOR_AGENT_LIVE=1 or CODEX_SHIM_CURSOR_AGENT_MOCK_URL for validation."
            )
        if prepared.transport_mode == "http2":
            async for event in stream_run_live_events(prepared):
                yield event
            return
        async for event in stream_http1_live_events(prepared):
            yield event
