#!/usr/bin/env python3
"""Local /v1/responses proxy that dumps outbound shape then forwards to ChatGPT Codex upstream."""
from __future__ import annotations

import argparse
import json
import os
from pathlib import Path
from typing import Any

from aiohttp import ClientSession, ClientTimeout, WSMsgType, web

DEFAULT_UPSTREAM = "https://chatgpt.com/backend-api/codex/responses"
DEFAULT_DUMP = (
    Path(__file__).resolve().parents[1]
    / "codex-desktop-decompiled"
    / "captures"
    / "debug"
    / "native_to_chatgpt.json"
)
REDACT_HEADERS = frozenset({"authorization", "cookie"})
SKIP_FORWARD_HEADERS = frozenset(
    {
        "host",
        "content-length",
        "connection",
        "accept-encoding",
        "upgrade",
        "sec-websocket-key",
        "sec-websocket-version",
        "sec-websocket-extensions",
    }
)


def _truthy(value: str | None) -> bool:
    return str(value or "").strip().lower() in {"1", "true", "yes", "on", "full"}


def _load_account_id() -> str | None:
    auth_path = Path(os.environ.get("CODEX_HOME", Path.home() / ".codex")).expanduser() / "auth.json"
    if not auth_path.exists():
        return None
    try:
        auth = json.loads(auth_path.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError):
        return None
    tokens = auth.get("tokens") or {}
    account_id = str(tokens.get("account_id") or "").strip()
    return account_id or None


def _header_dict(request: web.Request) -> dict[str, str]:
    return {str(key): str(value) for key, value in request.headers.items()}


def _parse_turn_metadata(body: dict[str, Any], headers: dict[str, str]) -> dict[str, Any] | None:
    raw = headers.get("x-codex-turn-metadata")
    if not raw:
        client_metadata = body.get("client_metadata")
        if isinstance(client_metadata, dict):
            raw = client_metadata.get("x-codex-turn-metadata")
    if not isinstance(raw, str) or not raw.strip():
        return None
    try:
        parsed = json.loads(raw)
    except json.JSONDecodeError:
        return None
    return parsed if isinstance(parsed, dict) else None


def _is_turn_capture(body: dict[str, Any], headers: dict[str, str]) -> bool:
    turn_metadata = _parse_turn_metadata(body, headers)
    if isinstance(turn_metadata, dict) and turn_metadata.get("request_kind") == "turn":
        return True
    input_items = body.get("input")
    return isinstance(input_items, list) and len(input_items) > 0


def _dump_payload(
    *,
    upstream_url: str,
    headers: dict[str, str],
    body: dict[str, Any],
    dump_path: Path,
    jsonl_path: Path | None,
    redact_auth: bool,
    transport: str,
    primary: bool,
    upstream_response: dict[str, Any] | None = None,
) -> None:
    dumped_headers: dict[str, str] = {}
    for key, value in headers.items():
        if redact_auth and key.lower() in REDACT_HEADERS:
            dumped_headers[key] = "[REDACTED]"
        else:
            dumped_headers[key] = value
    payload: dict[str, Any] = {
        "transport": transport,
        "url": upstream_url,
        "headers": dumped_headers,
        "body": body,
    }
    if upstream_response is not None:
        payload["upstream_response"] = upstream_response
    dump_path.parent.mkdir(parents=True, exist_ok=True)
    if primary:
        dump_path.write_text(json.dumps(payload, indent=2, default=str), encoding="utf-8")
    if jsonl_path is not None:
        with jsonl_path.open("a", encoding="utf-8") as handle:
            handle.write(json.dumps(payload, default=str) + "\n")


def _forward_headers(request: web.Request, upstream_url: str, account_id: str | None) -> dict[str, str]:
    from urllib.parse import urlparse

    host = urlparse(upstream_url).netloc
    headers: dict[str, str] = {}
    for key, value in request.headers.items():
        if key.lower() in SKIP_FORWARD_HEADERS:
            continue
        headers[key] = value
    if account_id and not any(k.lower() == "chatgpt-account-id" for k in headers):
        headers["chatgpt-account-id"] = account_id
    headers["Host"] = host
    headers.setdefault("Content-Type", "application/json")
    headers.setdefault("Accept", headers.get("Accept") or "text/event-stream")
    return headers


class _WsStreamRelay:
    def __init__(self, ws: web.WebSocketResponse):
        self.ws = ws
        self._buffer = b""

    async def write(self, data: bytes) -> None:
        self._buffer += data
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


async def _forward_upstream(
    request: web.Request,
    *,
    body: dict[str, Any],
    raw: bytes,
    upstream_url: str,
    account_id: str | None,
    ws: web.WebSocketResponse | None = None,
    dump_kwargs: dict[str, Any] | None = None,
) -> web.StreamResponse | web.WebSocketResponse:
    timeout = ClientTimeout(total=None, sock_connect=30, sock_read=None)
    forward_headers = _forward_headers(request, upstream_url, account_id)
    async with ClientSession(timeout=timeout) as session:
        async with session.post(
            upstream_url,
            data=raw,
            headers=forward_headers,
        ) as upstream:
            if dump_kwargs and dump_kwargs.get("primary"):
                _dump_payload(
                    upstream_url=upstream_url,
                    headers=forward_headers,
                    body=body,
                    dump_path=Path(str(dump_kwargs["dump_path"])),
                    jsonl_path=(
                        Path(str(dump_kwargs["jsonl_path"]))
                        if dump_kwargs.get("jsonl_path")
                        else None
                    ),
                    redact_auth=bool(dump_kwargs.get("redact_auth")),
                    transport=str(dump_kwargs.get("transport") or "http_upstream"),
                    primary=True,
                    upstream_response={
                        "status": upstream.status,
                        "headers": dict(upstream.headers),
                    },
                )
            if ws is not None:
                if upstream.status >= 400:
                    detail = await upstream.text()
                    await ws.send_json(
                        {
                            "type": "error",
                            "error": {"message": f"upstream {upstream.status}: {detail[:500]}"},
                        }
                    )
                    return ws
                relay = _WsStreamRelay(ws)
                async for chunk in upstream.content.iter_chunked(8192):
                    await relay.write(chunk)
                return ws

            response = web.StreamResponse(status=upstream.status)
            for key, value in upstream.headers.items():
                if key.lower() in {"content-length", "transfer-encoding", "connection"}:
                    continue
                response.headers[key] = value
            await response.prepare(request)
            async for chunk in upstream.content.iter_chunked(8192):
                await response.write(chunk)
            await response.write_eof()
            return response


async def _record_and_forward(
    request: web.Request,
    *,
    body: dict[str, Any],
    raw: bytes,
    transport: str,
    ws: web.WebSocketResponse | None = None,
) -> web.StreamResponse | web.WebSocketResponse:
    cfg: dict[str, Any] = request.app["cfg"]
    upstream_url = str(cfg["upstream_url"])
    dump_path = Path(str(cfg["dump_path"]))
    jsonl_path = Path(str(cfg["jsonl_path"])) if cfg.get("jsonl_path") else None
    redact_auth = not _truthy(os.environ.get("UPSTREAM_DUMP_PROXY_FULL"))
    incoming_headers = _header_dict(request)
    forward_headers = _forward_headers(request, upstream_url, cfg.get("account_id"))
    is_turn = _is_turn_capture(body, incoming_headers)
    dump_kwargs = {
        "dump_path": dump_path,
        "jsonl_path": jsonl_path,
        "redact_auth": redact_auth,
        "transport": "http_upstream" if is_turn else transport,
        "primary": is_turn,
    }
    if not is_turn and jsonl_path is not None:
        _dump_payload(
            upstream_url=upstream_url,
            headers=forward_headers,
            body=body,
            dump_path=dump_path,
            jsonl_path=jsonl_path,
            redact_auth=redact_auth,
            transport=transport,
            primary=False,
        )
    return await _forward_upstream(
        request,
        body=body,
        raw=raw,
        upstream_url=upstream_url,
        account_id=cfg.get("account_id"),
        ws=ws,
        dump_kwargs=dump_kwargs if is_turn else None,
    )


async def _handle_responses_post(request: web.Request) -> web.StreamResponse:
    raw = await request.read()
    try:
        body = json.loads(raw.decode("utf-8"))
    except (UnicodeDecodeError, json.JSONDecodeError) as exc:
        return web.Response(status=400, text=f"invalid json body: {exc}")
    if not isinstance(body, dict):
        return web.Response(status=400, text="json body must be an object")
    result = await _record_and_forward(request, body=body, raw=raw, transport="http")
    return result  # type: ignore[return-value]


async def _handle_responses_ws(request: web.Request) -> web.WebSocketResponse:
    ws = web.WebSocketResponse()
    await ws.prepare(request)
    try:
        async for msg in ws:
            if msg.type == WSMsgType.ERROR:
                break
            if msg.type != WSMsgType.TEXT:
                continue
            try:
                body = json.loads(msg.data)
            except json.JSONDecodeError:
                await ws.send_json({"type": "error", "error": {"message": "Invalid JSON request"}})
                continue
            if not isinstance(body, dict):
                await ws.send_json({"type": "error", "error": {"message": "Request body must be a JSON object"}})
                continue
            raw = msg.data.encode("utf-8") if isinstance(msg.data, str) else msg.data
            await _record_and_forward(request, body=body, raw=raw, transport="websocket", ws=ws)
    except Exception as exc:
        if not ws.closed:
            await ws.send_json({"type": "error", "error": {"message": str(exc)}})
    if not ws.closed:
        await ws.close()
    return ws


async def _handle_health(_request: web.Request) -> web.Response:
    return web.json_response({"ok": True, "service": "upstream_dump_proxy"})


def build_app(*, upstream_url: str, dump_path: Path, jsonl_path: Path | None) -> web.Application:
    app = web.Application()
    app["cfg"] = {
        "upstream_url": upstream_url,
        "dump_path": str(dump_path),
        "jsonl_path": str(jsonl_path) if jsonl_path else None,
        "account_id": _load_account_id(),
    }
    app.router.add_get("/health", _handle_health)
    app.router.add_get("/v1/responses", _handle_responses_ws)
    app.router.add_post("/v1/responses", _handle_responses_post)
    return app


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=60002)
    parser.add_argument("--upstream-url", default=DEFAULT_UPSTREAM)
    parser.add_argument("--dump-path", type=Path, default=DEFAULT_DUMP)
    parser.add_argument("--jsonl-path", type=Path, default=None)
    args = parser.parse_args(argv)

    jsonl_path = args.jsonl_path
    if jsonl_path is None:
        jsonl_path = args.dump_path.with_suffix(".jsonl")

    app = build_app(
        upstream_url=args.upstream_url,
        dump_path=args.dump_path,
        jsonl_path=jsonl_path,
    )
    print(f"upstream dump proxy on http://{args.host}:{args.port}/v1/responses", flush=True)
    print(f"dump path: {args.dump_path}", flush=True)
    web.run_app(app, host=args.host, port=args.port, print=None)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
