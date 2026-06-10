#!/usr/bin/env python3
"""Compare Desktop→shim→cursor-agent flow vs direct cursor-agent for the same user prompt."""
from __future__ import annotations

import argparse
import asyncio
import json
import os
import shlex
import shutil
import subprocess
import time
from pathlib import Path
from typing import Any

import aiohttp

ROOT = Path(__file__).resolve().parents[1]
PROMPT_DEFAULT = "read docs and tell me what project is about"
THREAD_DEFAULT = "019ea0f5-171f-7de3-9162-70f9b1e9b614"


def _default_workspace() -> str:
    raw = os.environ.get("CODEX_SHIM_WORKSPACE", "").strip()
    if raw:
        return str(Path(raw).expanduser())
    return str(ROOT)


def _default_cursor_command() -> str:
    for key in ("CURSOR_COMMAND", "CODEX_SHIM_CURSOR_COMMAND"):
        raw = os.environ.get(key, "").strip()
        if raw:
            return raw
    for name in ("cursor-agent", "cursor"):
        found = shutil.which(name)
        if found:
            return found
    return "cursor-agent"


def _parse_assistant_events(lines: list[str]) -> dict[str, Any]:
    events: list[dict[str, Any]] = []
    assistant_texts: list[str] = []
    for line in lines:
        line = line.strip()
        if not line:
            continue
        try:
            event = json.loads(line)
        except json.JSONDecodeError:
            continue
        if not isinstance(event, dict):
            continue
        events.append(event)
        if event.get("type") != "assistant":
            continue
        message = event.get("message") or {}
        content = message.get("content") or []
        parts = [
            str(item.get("text") or "")
            for item in content
            if isinstance(item, dict) and item.get("type") == "text"
        ]
        text = "".join(parts)
        if text:
            assistant_texts.append(text)
    duplicates = sum(
        1 for idx in range(1, len(assistant_texts)) if assistant_texts[idx] == assistant_texts[idx - 1]
    )
    return {
        "event_count": len(events),
        "assistant_event_count": len(assistant_texts),
        "consecutive_duplicate_assistant_events": duplicates,
        "assistant_texts_head": assistant_texts[:6],
        "final_assistant_snapshot": assistant_texts[-1] if assistant_texts else "",
    }


async def _shim_ws_turn(
    *,
    host: str,
    prompt: str,
    cwd: str,
    thread_id: str,
    timeout: float,
) -> dict[str, Any]:
    url = f"http://{host}/v1/responses".replace("http://", "ws://")
    body = {
        "model": "cursor-auto",
        "stream": True,
        "input": [{"role": "user", "content": [{"type": "input_text", "text": prompt}]}],
        "client_metadata": {
            "x-codex-turn-metadata": json.dumps(
                {
                    "session_id": thread_id,
                    "thread_id": thread_id,
                    "thread_source": "user",
                    "workspace_kind": "project",
                    "request_kind": "turn",
                }
            ),
        },
    }
    sse_events: list[dict[str, Any]] = []
    text_deltas: list[str] = []
    final_text = ""
    workspace = None
    execution_mode = None
    started = time.monotonic()
    async with aiohttp.ClientSession() as session:
        async with session.ws_connect(url, timeout=aiohttp.ClientTimeout(total=timeout)) as ws:
            await ws.send_json(body)
            async for msg in ws:
                if msg.type != aiohttp.WSMsgType.TEXT:
                    continue
                payload = json.loads(msg.data)
                sse_events.append(payload)
                if payload.get("type") == "response.output_text.delta":
                    text_deltas.append(str(payload.get("delta") or ""))
                if payload.get("type") == "response.completed":
                    response = payload.get("response") or {}
                    shim_route = (response.get("metadata") or {}).get("shim_route") or {}
                    workspace = shim_route.get("workspace")
                    execution_mode = shim_route.get("execution_mode")
                    for item in response.get("output") or []:
                        if item.get("type") == "message" and item.get("role") == "assistant":
                            for part in item.get("content") or []:
                                if part.get("type") == "output_text":
                                    final_text = str(part.get("text") or "")
                    break
                if payload.get("type") == "error":
                    raise RuntimeError(json.dumps(payload)[:500])
    return {
        "latency_ms": int((time.monotonic() - started) * 1000),
        "workspace": workspace,
        "execution_mode": execution_mode,
        "text_delta_count": len(text_deltas),
        "text_deltas_head": text_deltas[:8],
        "final_text_chars": len(final_text),
        "final_text_head": final_text[:400],
        "has_consecutive_duplicate_deltas": any(
            text_deltas[i] == text_deltas[i - 1] for i in range(1, len(text_deltas))
        ),
        "sse_event_count": len(sse_events),
        "sse_events": sse_events,
        "final_text": final_text,
    }


def _delegate_prompt(prompt: str, cwd: str, settings_path: Path) -> str:
    from codex_shim.providers.cursor.acp import cursor_prompt_for_body
    from codex_shim.providers.cursor.parity import legacy_delegate_prompt_enabled
    from codex_shim.settings import ModelSettings

    catalog = ModelSettings(settings_path)
    from codex_shim.routing import by_slug_or_model

    route = by_slug_or_model(catalog, "cursor-auto")
    if route is None:
        raise SystemExit("cursor-auto not found in settings")
    body = {"input": [{"role": "user", "content": [{"type": "input_text", "text": prompt}]}]}
    workspace = Path(cwd)
    if legacy_delegate_prompt_enabled(route):
        return cursor_prompt_for_body(
            body,
            route,
            workspace=workspace,
            upstream_parity=False,
        )
    return cursor_prompt_for_body(
        body,
        route,
        workspace=workspace,
        upstream_parity=True,
    )


def _run_direct_cursor(
    *,
    command: str,
    cwd: str,
    prompt: str,
    out_jsonl: Path,
    timeout: float,
) -> dict[str, Any]:
    argv = [
        command,
        "agent",
        "--print",
        "--trust",
        "--yolo",
        "--model",
        "auto",
        "--output-format",
        "stream-json",
        "--stream-partial-output",
        prompt,
    ]
    started = time.monotonic()
    proc = subprocess.run(
        argv,
        cwd=cwd,
        capture_output=True,
        text=True,
        timeout=timeout,
        env={**os.environ, "HOME": os.environ.get("HOME", str(Path.home()))},
    )
    lines = [line for line in proc.stdout.splitlines() if line.strip()]
    out_jsonl.write_text("\n".join(lines) + ("\n" if lines else ""), encoding="utf-8")
    parsed = _parse_assistant_events(lines)
    parsed.update(
        {
            "latency_ms": int((time.monotonic() - started) * 1000),
            "exit_code": proc.returncode,
            "stderr_head": (proc.stderr or "")[:500],
            "command": " ".join(shlex.quote(part) for part in argv[:-1]) + " <prompt>",
        }
    )
    return parsed


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default=os.environ.get("CODEX_SHIM_HOST", "127.0.0.1:8766"))
    parser.add_argument("--settings", type=Path, default=Path("~/.codex-shim/models.json").expanduser())
    parser.add_argument(
        "--cwd",
        default=None,
        help="Workspace cwd for shim metadata (default: $CODEX_SHIM_WORKSPACE or repo root).",
    )
    parser.add_argument("--thread-id", default=THREAD_DEFAULT)
    parser.add_argument("--prompt", default=PROMPT_DEFAULT)
    parser.add_argument(
        "--cursor-command",
        default=None,
        help="cursor-agent binary (default: $CURSOR_COMMAND or PATH lookup).",
    )
    parser.add_argument("--timeout", type=float, default=180.0)
    parser.add_argument("--out-dir", type=Path, help="Output directory for artifacts")
    args = parser.parse_args()
    if args.cwd is None:
        args.cwd = _default_workspace()
    if args.cursor_command is None:
        args.cursor_command = _default_cursor_command()

    out_dir = args.out_dir or (
        ROOT / "codex-desktop-decompiled" / "captures" / "debug" / f"flow_compare_{int(time.time())}"
    )
    out_dir.mkdir(parents=True, exist_ok=True)

    delegate_prompt = _delegate_prompt(args.prompt, args.cwd, args.settings)
    (out_dir / "shim_delegate_prompt.txt").write_text(delegate_prompt + "\n", encoding="utf-8")
    (out_dir / "user_prompt.txt").write_text(args.prompt + "\n", encoding="utf-8")

    print("Running shim WS turn via", args.host, flush=True)
    shim_result = asyncio.run(
        _shim_ws_turn(
            host=args.host,
            prompt=args.prompt,
            cwd=args.cwd,
            thread_id=args.thread_id,
            timeout=args.timeout,
        )
    )
    (out_dir / "shim_sse_events.json").write_text(
        json.dumps(shim_result.pop("sse_events"), indent=2) + "\n",
        encoding="utf-8",
    )
    final_text = shim_result.pop("final_text", "")
    (out_dir / "shim_final_text.txt").write_text(final_text + "\n", encoding="utf-8")

    print("Running direct cursor-agent (simple prompt)", flush=True)
    direct_simple = _run_direct_cursor(
        command=args.cursor_command,
        cwd=args.cwd,
        prompt=args.prompt,
        out_jsonl=out_dir / "direct_simple_stream.jsonl",
        timeout=args.timeout,
    )

    print("Running direct cursor-agent (shim delegate prompt)", flush=True)
    direct_delegate = _run_direct_cursor(
        command=args.cursor_command,
        cwd=args.cwd,
        prompt=delegate_prompt,
        out_jsonl=out_dir / "direct_delegate_stream.jsonl",
        timeout=args.timeout,
    )

    mitm_capture = ROOT / "codex-desktop-decompiled/captures/debug/s11_cursor_auto_request.json"
    if mitm_capture.is_file():
        (out_dir / "mitm_shim_request.json").write_text(mitm_capture.read_text(encoding="utf-8"), encoding="utf-8")

    report = {
        "prompt": args.prompt,
        "cwd": args.cwd,
        "thread_id": args.thread_id,
        "shim_host": args.host,
        "shim_path": shim_result,
        "direct_cursor_simple_prompt": direct_simple,
        "direct_cursor_delegate_prompt": direct_delegate,
        "comparison": {
            "shim_vs_direct_simple_duplicate_events": {
                "shim_has_duplicate_deltas": shim_result.get("has_consecutive_duplicate_deltas"),
                "direct_simple_duplicate_assistant_events": direct_simple.get(
                    "consecutive_duplicate_assistant_events"
                ),
                "direct_delegate_duplicate_assistant_events": direct_delegate.get(
                    "consecutive_duplicate_assistant_events"
                ),
            },
            "final_text_lengths": {
                "shim": shim_result.get("final_text_chars"),
                "direct_simple": len(direct_simple.get("final_assistant_snapshot") or ""),
                "direct_delegate": len(direct_delegate.get("final_assistant_snapshot") or ""),
            },
        },
    }
    (out_dir / "report.json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")

    print(json.dumps(report, indent=2))
    print(f"\nArtifacts: {out_dir}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
