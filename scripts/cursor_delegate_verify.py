#!/usr/bin/env python3
"""Verify Cursor delegate mode on a running codex-shim daemon."""
from __future__ import annotations

import argparse
import json
import os
import sys
from pathlib import Path


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--settings", type=Path, default=Path("~/.codex-shim/models.json").expanduser())
    parser.add_argument("--port", type=int, default=int(os.environ.get("CODEX_SHIM_PORT", "8765")))
    parser.add_argument("--slug", help="Cursor model slug (default: first visible cursor route)")
    parser.add_argument("--cwd", help="Optional workspace path to send in metadata/headers")
    args = parser.parse_args()

    from codex_shim import integration_harness as harness
    from codex_shim.probe import CompactProbeError, probe_delegate

    route = harness.resolve_byok_slug(args.settings, args.slug)
    if not (route.is_cursor_cli or route.is_cursor_agent or route.is_cursor_acp):
        print(f"{route.slug} is not a Cursor route", file=sys.stderr)
        return 1

    timeout = harness.cursor_probe_timeout(route)
    if args.cwd:
        cwd = str(Path(args.cwd).expanduser().resolve())
        payload = harness.post_json(
            harness.responses_url(args.port),
            {
                "model": route.slug,
                "metadata": {"cwd": cwd},
                "input": [{"role": "user", "content": [{"type": "input_text", "text": "Reply with exactly: VERIFY_OK"}]}],
                "stream": False,
            },
            headers={"session_id": f"verify-delegate-{route.slug}", "x-codex-cwd": cwd},
            label="Delegate verify",
            timeout=timeout,
        )
        harness.validate_completed_response(payload)
        shim_route = (payload.get("metadata") or {}).get("shim_route") or {}
        if shim_route.get("execution_mode") != "delegate":
            print(f"expected execution_mode=delegate, got {shim_route.get('execution_mode')!r}", file=sys.stderr)
            return 1
        if shim_route.get("workspace") != cwd:
            print(f"expected workspace={cwd!r}, got {shim_route.get('workspace')!r}", file=sys.stderr)
            return 1
        tool_items = [
            item for item in payload.get("output") or [] if str(item.get("type") or "").endswith("_call")
        ]
        if tool_items:
            print(f"expected zero tool output items, got {len(tool_items)}", file=sys.stderr)
            return 1
        print(json.dumps({"ok": True, "slug": route.slug, "shim_route": shim_route}, indent=2))
        return 0

    try:
        return probe_delegate(args.settings, args.port, args.slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
