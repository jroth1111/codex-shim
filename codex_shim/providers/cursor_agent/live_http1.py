from __future__ import annotations

import asyncio
import uuid
from contextlib import suppress
from typing import Any, AsyncIterator

from aiohttp import ClientSession, ClientTimeout

from .auth import cursor_access_token_expired, load_cursor_access_token
from .connect_framing import parse_connect_frames
from .live_common import collect_live_turn, resolve_active_timeout
from .proto_decode import proto_payload_to_events
from .proto_wire import (
    encode_bidi_append_request,
    encode_bidi_request_id,
    encode_client_envelope_bytes,
    field_varint,
)
from .types import CursorAgentPreparedRequest, CursorAgentTransportError

# GetServerConfigResponse.http2_config = FORCE_BIDI_DISABLED (3)
_SERVER_CONFIG_HTTP1_BODY = field_varint(7, 3)


async def prefetch_server_config(
    session: ClientSession,
    *,
    endpoints: dict[str, str],
    headers: dict[str, str],
) -> None:
    """Best-effort; mirrors Cursor client forcing HTTP/1 RunSSE+BidiAppend."""
    url = endpoints.get("get_server_config") or ""
    if not url:
        return
    connect_headers = {
        **headers,
        "Content-Type": "application/connect+proto",
        "connect-protocol-version": "1",
    }
    try:
        async with session.post(url, data=_SERVER_CONFIG_HTTP1_BODY, headers=connect_headers) as resp:
            await resp.read()
    except Exception as exc:
        print(f"[err] prefetch_server_config failed: {exc}", flush=True)
        return


async def stream_http1_live_events(
    prepared: CursorAgentPreparedRequest,
    *,
    timeout: ClientTimeout | None = None,
) -> AsyncIterator[dict[str, Any]]:
    """
    HTTP/1 RunSSE + BidiAppend flow (Connect protobuf framing on the SSE leg).

    Requires a valid Cursor auth token in ~/.codex/auth.json or CODEX_SHIM_CURSOR_AUTH_TOKEN.
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

    request_id = str(uuid.uuid4())
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

    append_body = encode_bidi_append_request(
        request_id=request_id,
        append_seqno=0,
        data=client_message,
    )
    run_sse_body = encode_bidi_request_id(request_id)

    run_sse_url = prepared.endpoints.get("run_sse") or ""
    bidi_url = prepared.endpoints.get("bidi_append") or ""
    if not run_sse_url or not bidi_url:
        raise CursorAgentTransportError("missing RunSSE or BidiAppend endpoint URLs")

    active_timeout = resolve_active_timeout(timeout, prepared)
    frame_buffer = bytearray()
    append_sent = asyncio.Event()
    event_queue: asyncio.Queue[dict[str, Any] | None] = asyncio.Queue()

    async def _pump_run_sse(session: ClientSession) -> None:
        try:
            async with session.post(run_sse_url, data=run_sse_body, headers=connect_headers) as resp:
                if resp.status >= 400:
                    text = await resp.text()
                    raise CursorAgentTransportError(f"RunSSE failed: HTTP {resp.status} {text[:300]}")
                await append_sent.wait()
                async for chunk in resp.content.iter_chunked(4096):
                    for payload in parse_connect_frames(chunk, frame_buffer):
                        if not payload:
                            await event_queue.put({"type": "stream_end"})
                            return
                        for event in proto_payload_to_events(payload):
                            await event_queue.put(event)
        except Exception as exc:
            await event_queue.put({"type": "transport_error", "message": str(exc)})
        finally:
            await event_queue.put(None)

    async with ClientSession(timeout=active_timeout) as session:
        await prefetch_server_config(session, endpoints=prepared.endpoints, headers=headers)
        run_sse_task = asyncio.create_task(_pump_run_sse(session))
        try:
            async with session.post(bidi_url, data=append_body, headers=connect_headers) as resp:
                if resp.status >= 400:
                    text = await resp.text()
                    raise CursorAgentTransportError(
                        f"BidiAppend failed: HTTP {resp.status} {text[:300]}"
                    )
                await resp.read()
            append_sent.set()
            while True:
                item = await event_queue.get()
                if item is None:
                    break
                if item.get("type") == "transport_error":
                    raise CursorAgentTransportError(str(item.get("message") or "RunSSE error"))
                yield item
        finally:
            append_sent.set()
            run_sse_task.cancel()
            with suppress(asyncio.CancelledError):
                await run_sse_task


async def collect_http1_live_turn(prepared: CursorAgentPreparedRequest) -> dict[str, Any]:
    return await collect_live_turn(stream_http1_live_events, prepared)
