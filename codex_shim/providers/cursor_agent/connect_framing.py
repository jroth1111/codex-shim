from __future__ import annotations

CONNECT_FLAGS_END = 0x02


def encode_connect_frame(payload: bytes, *, end: bool = False) -> bytes:
    flag = CONNECT_FLAGS_END if end else 0
    return bytes([flag]) + len(payload).to_bytes(4, "big") + payload


def parse_connect_frames(chunk: bytes, buffer: bytearray) -> list[bytes]:
    """Parse one or more Connect payloads from accumulated bytes."""
    buffer.extend(chunk)
    payloads: list[bytes] = []
    while len(buffer) >= 5:
        flag = buffer[0]
        length = int.from_bytes(buffer[1:5], "big")
        if len(buffer) < 5 + length:
            break
        payload = bytes(buffer[5 : 5 + length])
        del buffer[: 5 + length]
        if flag == CONNECT_FLAGS_END:
            payloads.append(b"")
            continue
        payloads.append(payload)
    return payloads
