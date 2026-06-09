#!/usr/bin/env python3
"""Dump shim native Cursor Agent headers + envelope bytes for remote signature comparison."""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parents[1]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--prompt", default="parity check prompt")
    parser.add_argument("--model", default="auto")
    parser.add_argument("--workspace", type=Path, default=None)
    parser.add_argument("--mode", default="default", choices=["default", "plan", "ask", "debug"])
    parser.add_argument("--transport", default="http1", choices=["http1", "http2"])
    args = parser.parse_args()

    sys.path.insert(0, str(REPO))
    from codex_shim.providers.cursor_agent.envelope import build_run_request_skeleton
    from codex_shim.providers.cursor_agent.headers import (
        build_cursor_agent_headers,
        endpoint_urls,
        header_shape_for_parity,
        resolve_cursor_client_version,
    )
    from codex_shim.providers.cursor_agent.proto_wire import encode_client_envelope_bytes
    from codex_shim.routing import parse_inference_context

    body: dict = {
        "model": args.model,
        "input": [{"role": "user", "content": [{"type": "input_text", "text": args.prompt}]}],
    }
    if args.mode != "default":
        body["metadata"] = {"mode": args.mode}
    inference = parse_inference_context(body, resolved_model_id=args.model)
    skeleton = build_run_request_skeleton(body, inference=inference, workspace=args.workspace)
    headers = build_cursor_agent_headers(inference=inference, transport=args.transport)
    try:
        wire_hex = encode_client_envelope_bytes(skeleton).hex()
    except Exception as exc:
        wire_hex = f"<encode error: {exc}>"

    payload = {
        "resolved_client_version": resolve_cursor_client_version(),
        "header_shape": header_shape_for_parity(),
        "headers": headers,
        "endpoints": endpoint_urls(),
        "transport": args.transport,
        "envelope_skeleton": skeleton,
        "client_envelope_hex": wire_hex,
        "envelope_byte_length": len(wire_hex) // 2 if wire_hex.startswith("<") is False else 0,
    }
    print(json.dumps(payload, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
