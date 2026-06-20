from __future__ import annotations

import asyncio

from aiohttp import ClientSession, ClientTimeout

from .auth import cursor_access_token_expired, load_cursor_access_token
from .connect_framing import parse_connect_frames
from .headers import endpoint_urls
from .proto_decode import decode_fields, get_field_string
from .types import CursorAgentTransportError


def decode_model_details(buf: bytes) -> str | None:
    """agent.v1.ModelDetails: field 1 = model_id string."""
    return get_field_string(decode_fields(buf), 1)


def decode_get_usable_models_response(buf: bytes) -> list[str]:
    """
    GetUsableModelsResponse: repeated ModelDetails at field 1.

    Matches reproduce-inference.mjs ``encodeGetUsableModelsResponse``.
    """
    model_ids: list[str] = []
    for field_no, wire, value in decode_fields(buf):
        if field_no != 1 or wire != 2 or not isinstance(value, (bytes, bytearray)):
            continue
        model_id = decode_model_details(bytes(value))
        if model_id:
            model_ids.append(model_id)
    return model_ids


async def fetch_usable_model_ids(
    *,
    endpoint: str | None = None,
    timeout_seconds: float = 2.0,
) -> list[str]:
    """Unary GetUsableModels when live catalog prefetch is enabled."""
    token = load_cursor_access_token()
    if not token:
        raise CursorAgentTransportError(
            "Live model catalog requires auth. Run `codex login` or set CODEX_SHIM_CURSOR_AUTH_TOKEN."
        )
    if cursor_access_token_expired(token):
        raise CursorAgentTransportError(
            "Cursor access token has expired; run `codex login` to refresh it before retrying."
        )

    urls = endpoint_urls(endpoint)
    url = urls.get("get_usable_models") or ""
    if not url:
        raise CursorAgentTransportError("missing GetUsableModels endpoint URL")

    headers = {
        "Authorization": f"Bearer {token}",
        "Content-Type": "application/connect+proto",
        "connect-protocol-version": "1",
    }
    timeout = ClientTimeout(total=timeout_seconds, sock_connect=min(timeout_seconds, 5.0))
    frame_buffer = bytearray()

    async with ClientSession(timeout=timeout) as session:
        async with session.post(url, data=b"", headers=headers) as resp:
            if resp.status >= 400:
                text = await resp.text()
                raise CursorAgentTransportError(
                    f"GetUsableModels failed: HTTP {resp.status} {text[:300]}"
                )
            body = await resp.read()

    # Unary Connect responses may be bare protobuf or framed.
    if body and body[0] & 0x03 == 0 and len(body) >= 5:
        payloads = parse_connect_frames(body, frame_buffer)
        if payloads:
            body = b"".join(p for p in payloads if p)
    return decode_get_usable_models_response(body)


def fetch_usable_model_ids_sync(
    *,
    endpoint: str | None = None,
    timeout_seconds: float = 2.0,
) -> list[str]:
    return asyncio.run(
        fetch_usable_model_ids(endpoint=endpoint, timeout_seconds=timeout_seconds)
    )
