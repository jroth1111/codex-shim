#!/usr/bin/env python3
"""Decode Connect/protobuf frames captured from Cursor Agent live transport.

Reads hex (or raw bytes) from a file or stdin and prints JSON events from
``proto_payload_to_events`` (schema-aware InteractionUpdate decode).

Examples:
  # One frame per line (hex)
  python3 scripts/cursor_connect_decode.py frames.hexl

  # Connect-framed binary capture
  python3 scripts/cursor_connect_decode.py --binary capture.bin

  # Single hex blob (no framing)
  python3 scripts/cursor_connect_decode.py --raw-decode deadbeef...
"""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from codex_shim.providers.cursor_agent.connect_framing import parse_connect_frames
from codex_shim.providers.cursor_agent.proto_decode import proto_payload_to_events


def _read_hex_blob(text: str) -> bytes:
    cleaned = "".join(text.split())
    return bytes.fromhex(cleaned)


def _iter_framed_payloads(data: bytes) -> list[bytes]:
    buffer = bytearray()
    payloads: list[bytes] = []
    for chunk in (data[i : i + 4096] for i in range(0, len(data), 4096)):
        for payload in parse_connect_frames(chunk, buffer):
            payloads.append(payload)
    if buffer:
        # Trailing partial frame — try as raw protobuf.
        payloads.append(bytes(buffer))
    return payloads


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("input", nargs="?", help="File path; omit to read stdin")
    parser.add_argument(
        "--binary",
        action="store_true",
        help="Input is Connect-framed binary (not line-oriented hex)",
    )
    parser.add_argument(
        "--raw-decode",
        action="store_true",
        help="Treat entire input as one protobuf payload (skip Connect framing)",
    )
    parser.add_argument(
        "--line-hex",
        action="store_true",
        help="Each line is a hex payload (default when not --binary)",
    )
    args = parser.parse_args()

    if args.input:
        raw = Path(args.input).read_bytes() if args.binary else Path(args.input).read_text()
    else:
        raw = sys.stdin.buffer.read() if args.binary else sys.stdin.read()

    payloads: list[bytes]
    if args.raw_decode:
        text = raw.decode() if isinstance(raw, (bytes, bytearray)) else raw
        payloads = [_read_hex_blob(text) if not args.binary else bytes(raw)]
    elif args.binary:
        payloads = _iter_framed_payloads(bytes(raw))
    else:
        text = raw.decode() if isinstance(raw, (bytes, bytearray)) else raw
        lines = [ln.strip() for ln in text.splitlines() if ln.strip() and not ln.startswith("#")]
        payloads = [_read_hex_blob(ln) for ln in lines]

    any_events = False
    for index, payload in enumerate(payloads):
        if not payload:
            print(json.dumps({"frame": index, "end": True}))
            any_events = True
            continue
        events = proto_payload_to_events(payload)
        if not events:
            print(json.dumps({"frame": index, "note": "no decodable events", "bytes": len(payload)}))
            continue
        any_events = True
        for event in events:
            print(json.dumps({"frame": index, **event}, ensure_ascii=False))

    return 0 if any_events or not payloads else 1


if __name__ == "__main__":
    raise SystemExit(main())
