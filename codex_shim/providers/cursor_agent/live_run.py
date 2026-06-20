from __future__ import annotations

from typing import Any, AsyncIterator

from aiohttp import ClientSession, ClientTimeout

from .auth import cursor_access_token_expired, load_cursor_access_token
from .connect_framing import encode_connect_frame, parse_connect_frames
from .live_common import collect_live_turn, resolve_active_timeout
from .proto_decode import proto_payload_to_events
from .proto_wire import encode_client_envelope_bytes
from .types import CursorAgentPreparedRequest, CursorAgentTransportError


class _ConnectRequestBody:
    """Chunked Connect request body: one client message frame, then end-of-stream."""

    def __init__(self, client_message: bytes) -> None:
        self._frames = [
            encode_connect_frame(client_message),
            encode_connect_frame(b"", end=True),
        ]
        self._index = 0

    def __aiter__(self) -> _ConnectRequestBody:
        return self

    async def __anext__(self) -> bytes:
        if self._index >= len(self._frames):
            raise StopAsyncIteration
        frame = self._frames[self._index]
        self._index += 1
        return frame


async def stream_run_live_events(
    prepared: CursorAgentPreparedRequest,
    *,
    timeout: ClientTimeout | None = None,
) -> AsyncIterator[dict[str, Any]]:
    """
    Connect bidi ``AgentService/Run`` (Cursor "http2" transport).

    Sends a single ``AgentClientMessage`` run-request frame, then reads
    ``InteractionUpdate`` payloads from the response stream.
    """
    token = load_cursor_access_token()
    if not token:
        raise CursorAgentTransportError(
            "Live Cursor Agent transport requires auth. Run `codex login` or set CODEX_SHIM_CURSOR_AUTH_TOKEN."
        )
    if cursor_access_token_expired(token):
        raise CursorAgentTransportError(
            "Cursor access token has expired; run `codex login` to refresh it before retrying."
        )

    run_url = prepared.endpoints.get("run") or ""
    if not run_url:
        raise CursorAgentTransportError("missing AgentService/Run endpoint URL")

    headers = dict(prepared.headers)
    headers["Authorization"] = f"Bearer {token}"
    connect_headers = {
        **headers,
        "Content-Type": "application/connect+proto",
        "connect-protocol-version": "1",
    }

    try:
        client_message = encode_client_envelope_bytes(prepared.envelope)
    except (ValueError, KeyError) as exc:
        raise CursorAgentTransportError(f"failed to encode client envelope: {exc}") from exc

    active_timeout = resolve_active_timeout(timeout, prepared)
    frame_buffer = bytearray()

    async with ClientSession(timeout=active_timeout) as session:
        async with session.post(
            run_url,
            data=_ConnectRequestBody(client_message),
            headers=connect_headers,
        ) as resp:
            if resp.status >= 400:
                text = await resp.text()
                raise CursorAgentTransportError(f"Run failed: HTTP {resp.status} {text[:300]}")
            async for chunk in resp.content.iter_chunked(4096):
                for payload in parse_connect_frames(chunk, frame_buffer):
                    if not payload:
                        yield {"type": "stream_end"}
                        return
                    for event in proto_payload_to_events(payload):
                        yield event


async def collect_run_live_turn(prepared: CursorAgentPreparedRequest) -> dict[str, Any]:
    return await collect_live_turn(stream_run_live_events, prepared)
