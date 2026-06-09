#!/usr/bin/env python3
"""Smoke-test live Cursor native transport (HTTP/1 RunSSE+BidiAppend).

Requires:
  - CODEX_SHIM_CURSOR_AGENT_LIVE=1
  - codex login (or CODEX_SHIM_CURSOR_AUTH_TOKEN)
  - A settings model with useNativeTransport: true

Optional:
  - CODEX_SHIM_CURSOR_AGENT_TRANSPORT=http2  (Connect bidi AgentService/Run; default http1)

Example:
  PYTHONPATH=. CODEX_SHIM_CURSOR_AGENT_LIVE=1 python3 scripts/cursor_agent_live_smoke.py --slug native-cursor "hello"
"""
from __future__ import annotations

import argparse
import json
import os
import sys
from pathlib import Path

import aiohttp


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("CODEX_SHIM_HOST", "127.0.0.1:8080"))
    parser.add_argument("--slug", required=True, help="Model slug with useNativeTransport")
    parser.add_argument("--stream", action="store_true")
    parser.add_argument("prompt", nargs="?", default="Reply with exactly: LIVE_OK")
    args = parser.parse_args()

    if os.environ.get("CODEX_SHIM_CURSOR_AGENT_LIVE", "").strip().lower() not in {
        "1",
        "true",
        "yes",
        "on",
    }:
        print("Set CODEX_SHIM_CURSOR_AGENT_LIVE=1", file=sys.stderr)
        return 2

    base = args.host if "://" in args.host else f"http://{args.host}"
    url = f"{base.rstrip('/')}/v1/responses"
    body = {
        "model": args.slug,
        "input": [{"role": "user", "content": args.prompt}],
        "stream": bool(args.stream),
    }

    async def _run() -> int:
        async with aiohttp.ClientSession() as session:
            async with session.post(url, json=body) as resp:
                if args.stream:
                    print(f"status={resp.status} content-type={resp.headers.get('Content-Type')}")
                    text = await resp.text()
                    print(text[:2000])
                    return 0 if resp.status == 200 else 1
                payload = await resp.json()
                metadata = payload.get("metadata") or {}
                shim_route = metadata.get("shim_route") or {}
                print(json.dumps(payload, indent=2)[:4000])
                print(f"shim_route.execution_mode={shim_route.get('execution_mode')!r}")
                if shim_route.get("execution_mode") != "delegate":
                    print("warning: expected execution_mode=delegate for Cursor native smoke", file=sys.stderr)
                return 0 if resp.status == 200 else 1

    import asyncio

    return asyncio.run(_run())


if __name__ == "__main__":
    raise SystemExit(main())
