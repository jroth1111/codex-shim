"""Shared platform module: SSE/WebSocket byte-level plumbing.

May not import other codex_shim modules. Both the gateway (HTTP surface)
and provider transports write through these helpers, so they live below
every module boundary.
"""
from __future__ import annotations

import json
from collections.abc import AsyncIterator
from typing import Any

from aiohttp import web


class ClientDisconnected(Exception):
    """Raised when the downstream Codex client closes the SSE connection."""


class WsStreamResponse:
    """Minimal StreamResponse stand-in that forwards SSE payloads over WebSocket."""

    def __init__(self, ws: web.WebSocketResponse):
        self.ws = ws
        self._buffer = b""

    async def prepare(self, _request: web.Request) -> None:
        return None

    async def write(self, data: bytes) -> None:
        self._buffer += data
        await self._flush_events()

    async def write_eof(self) -> None:
        await self._flush_events()

    async def _flush_events(self) -> None:
        while b"\n\n" in self._buffer:
            block, self._buffer = self._buffer.split(b"\n\n", 1)
            for line in block.split(b"\n"):
                text = line.decode("utf-8", errors="replace").strip()
                if not text.startswith("data:"):
                    continue
                payload_text = text[5:].strip()
                if payload_text == "[DONE]":
                    return
                try:
                    payload = json.loads(payload_text)
                except json.JSONDecodeError:
                    continue
                await self.ws.send_json(payload)


async def open_stream_sink(
    request: web.Request,
    stream_response: WsStreamResponse | None,
) -> web.StreamResponse | WsStreamResponse:
    if stream_response is not None:
        await stream_response.prepare(request)
        return stream_response
    response = sse_response()
    await response.prepare(request)
    return response


def sse_response() -> web.StreamResponse:
    return web.StreamResponse(
        status=200,
        headers={
            "Content-Type": "text/event-stream",
            "Cache-Control": "no-cache",
            "Connection": "keep-alive",
        },
    )


async def safe_write(response: web.StreamResponse, data: bytes) -> None:
    try:
        await response.write(data)
    except (ConnectionResetError, ConnectionError) as exc:
        raise ClientDisconnected() from exc
    except Exception as exc:
        if exc.__class__.__name__ in {
            "ClientConnectionResetError",
            "ClientConnectionError",
            "ClientPayloadError",
        }:
            raise ClientDisconnected() from exc
        raise


async def write_sse(response: web.StreamResponse, payload: dict[str, Any]) -> None:
    try:
        await response.write(f"data: {json.dumps(payload, separators=(',', ':'))}\n\n".encode())
    except (ConnectionResetError, ConnectionError) as exc:
        raise ClientDisconnected() from exc
    except Exception as exc:
        if exc.__class__.__name__ in {
            "ClientConnectionResetError",
            "ClientConnectionError",
            "ClientPayloadError",
        }:
            raise ClientDisconnected() from exc
        raise


async def write_anthropic_sse(response: web.StreamResponse, event: str, payload: dict[str, Any]) -> None:
    data = json.dumps(payload, separators=(",", ":"))
    try:
        await response.write(f"event: {event}\ndata: {data}\n\n".encode())
    except (ConnectionResetError, ConnectionError) as exc:
        raise ClientDisconnected() from exc
    except Exception as exc:
        if exc.__class__.__name__ in {
            "ClientConnectionResetError",
            "ClientConnectionError",
            "ClientPayloadError",
        }:
            raise ClientDisconnected() from exc
        raise


_MAX_SSE_BUFFER = 10 * 1024 * 1024  # 10 MB


async def sse_lines(upstream) -> AsyncIterator[str]:
    buffer = b""
    async for chunk in upstream.content.iter_chunked(4096):
        buffer += chunk
        if len(buffer) > _MAX_SSE_BUFFER:
            buffer = b""
            break
        while b"\n" in buffer:
            raw, buffer = buffer.split(b"\n", 1)
            line = raw.decode("utf-8", errors="replace").strip()
            if line.startswith("data:"):
                yield line[5:].strip()
    tail = buffer.decode("utf-8", errors="replace").strip()
    if tail.startswith("data:"):
        yield tail[5:].strip()
