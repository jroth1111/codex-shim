#!/usr/bin/env python3
"""Shim-wire S11 workspace capture: POST cursor turn with synthetic workspace metadata."""
from __future__ import annotations

import argparse
import json
import os
import sys
from pathlib import Path

import aiohttp


async def _post(base: str, slug: str, cwd: str | None) -> dict:
    url = f"{base.rstrip('/')}/v1/responses"
    body: dict = {
        "model": slug,
        "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: S11_OK"}]}],
        "stream": False,
    }
    headers: dict[str, str] = {"session_id": "s11-workspace-capture"}
    if cwd:
        body["metadata"] = {"cwd": cwd}
        headers["x-codex-cwd"] = cwd
    async with aiohttp.ClientSession() as session:
        async with session.post(url, json=body, headers=headers) as resp:
            payload = await resp.json()
            if resp.status >= 400:
                raise RuntimeError(f"HTTP {resp.status}: {json.dumps(payload)[:500]}")
            return payload


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("CODEX_SHIM_HOST", "127.0.0.1:8765"))
    parser.add_argument("--slug", default="cursor-auto")
    parser.add_argument("--cwd", default=str(Path.cwd()))
    parser.add_argument("--out", type=Path, help="Optional JSON output path")
    args = parser.parse_args()

    base = args.host if "://" in args.host else f"http://{args.host}"

    import asyncio

    payload = asyncio.run(_post(base, args.slug, args.cwd))
    shim_route = (payload.get("metadata") or {}).get("shim_route") or {}
    record = {
        "scenario": "S11",
        "source": "shim-wire",
        "slug": args.slug,
        "cwd": args.cwd,
        "execution_mode": shim_route.get("execution_mode"),
        "workspace": shim_route.get("workspace"),
        "status": payload.get("status"),
    }
    text = json.dumps(record, indent=2)
    print(text)
    if args.out:
        args.out.write_text(text + "\n", encoding="utf-8")
    if shim_route.get("execution_mode") != "delegate":
        print("warning: expected execution_mode=delegate", file=sys.stderr)
        return 1
    if shim_route.get("workspace") != str(Path(args.cwd).resolve()):
        print("warning: workspace metadata did not match --cwd", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
