#!/usr/bin/env python3
"""Compare codex_shim Cursor envelope shape to reproduce-inference.mjs source mode."""
from __future__ import annotations

import argparse
import json
import os
import subprocess
import sys
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parents[1]
DEFAULT_CURSOR_ROOT = Path("/private/tmp/cursor")


def _load_source_doc(cursor_root: Path, prompt: str, mode: str) -> dict:
    script = cursor_root / "reproduce-inference.mjs"
    if not script.is_file():
        raise FileNotFoundError(f"missing {script}")
    proc = subprocess.run(
        ["node", str(script), "--source", "--json", "--mode", mode, prompt],
        cwd=str(cursor_root),
        capture_output=True,
        text=True,
        check=False,
    )
    if proc.returncode != 0:
        raise RuntimeError(proc.stderr or proc.stdout or f"node exited {proc.returncode}")
    return json.loads(proc.stdout)


def _load_shim_doc(prompt: str, mode: str, *, workspace: Path | None = None) -> dict:
    from codex_shim.providers.cursor_agent import build_run_request_skeleton
    from codex_shim.providers.cursor_agent.headers import build_cursor_agent_headers
    from codex_shim.routing import parse_inference_context

    body = {"input": prompt, "metadata": {"mode": mode} if mode != "default" else {}}
    inference = parse_inference_context(body, resolved_model_id="default")
    skeleton = build_run_request_skeleton(body, inference=inference, workspace=workspace)
    return {
        "headers": build_cursor_agent_headers(inference=inference, transport="http1"),
        "runRequestSkeleton": skeleton,
        "mode": {
            "cliArgument": inference.cli_mode,
            "userMessageModeProtoValue": inference.agent_mode_value,
            "sideChannelMetadataMode": inference.metadata_mode,
        },
    }


def _run_request_value(doc: dict) -> dict[str, Any]:
    """Normalize source (--source) vs shim (clientEnvelope wrapper) skeleton shapes."""
    skeleton = doc.get("runRequestSkeleton") or {}
    if isinstance(skeleton.get("clientEnvelope"), dict):
        skeleton = skeleton["clientEnvelope"]
    message = skeleton.get("message") if isinstance(skeleton.get("message"), dict) else {}
    value = message.get("value")
    return value if isinstance(value, dict) else {}


def _diff(source: dict, shim: dict) -> list[dict]:
    rows: list[dict] = []
    src_sk = _run_request_value(source)
    shim_sk = _run_request_value(shim)
    src_mode = source.get("mode", {}).get("userMessageModeProtoValue")
    shim_mode = shim.get("mode", {}).get("userMessageModeProtoValue")
    rows.append(
        {
            "key": "userMessage.modeProtoValue",
            "expected": src_mode,
            "got": shim_mode,
            "match": src_mode == shim_mode,
        }
    )
    src_model = (src_sk.get("requestedModel") or {}).get("modelId")
    shim_model = (shim_sk.get("requestedModel") or {}).get("modelId")
    rows.append(
        {
            "key": "requestedModel.modelId present",
            "expected": "string",
            "got": shim_model,
            "match": isinstance(shim_model, str) and len(shim_model) > 0,
        }
    )
    header_keys = {"authorization", "x-cursor-client-version", "x-cursor-client-type", "x-request-id"}
    shim_headers = {k.lower() for k in (shim.get("headers") or {}).keys()}
    rows.append(
        {
            "key": "header keys",
            "expected": sorted(header_keys),
            "got": sorted(shim_headers & header_keys),
            "match": header_keys.issubset(shim_headers),
        }
    )
    if src_mode != shim_mode:
        rows[-1]["match"] = rows[-1]["match"]  # keep prior rows
    return rows


def _self_check_rows(shim_doc: dict, mode: str, *, workspace: Path | None = None) -> list[dict]:
    from codex_shim.providers.cursor_agent.envelope import structural_self_check
    from codex_shim.routing import parse_inference_context

    body = {"metadata": {"mode": mode} if mode != "default" else {}}
    inference = parse_inference_context(body, resolved_model_id="default")
    checks = structural_self_check(shim_doc.get("runRequestSkeleton") or {}, inference, workspace=workspace)
    return [
        {
            "key": row.get("key", "structural_self_check"),
            "expected": row.get("expected"),
            "got": row.get("got"),
            "match": bool(row.get("match")),
        }
        for row in checks
    ]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--cursor-root",
        type=Path,
        default=Path(os.environ.get("CURSOR_SOURCE_ROOT", str(DEFAULT_CURSOR_ROOT))),
    )
    parser.add_argument("--prompt", default=None, help="Prompt text (or pass as final positional argument)")
    parser.add_argument("prompt_positional", nargs="?", default=None, help="Prompt text")
    parser.add_argument("--mode", default="default", choices=["default", "plan", "ask", "debug"])
    parser.add_argument("--workspace", type=Path, default=None, help="Optional workspace path for envelope self-check")
    parser.add_argument(
        "--self-check",
        action="store_true",
        help="Run shim envelope structural_self_check only (no Cursor source tree required)",
    )
    parser.add_argument(
        "--compare",
        action="store_true",
        help="Alias for default mode: diff shim envelope vs reproduce-inference.mjs --source",
    )
    parser.add_argument("--json", action="store_true")
    args = parser.parse_args()
    prompt = args.prompt_positional or args.prompt or "parity check prompt"
    cursor_root = args.cursor_root

    try:
        shim_doc = _load_shim_doc(prompt, args.mode, workspace=args.workspace)
        if args.self_check:
            rows = _self_check_rows(shim_doc, args.mode, workspace=args.workspace)
        else:
            source_doc = _load_source_doc(cursor_root, prompt, args.mode)
            rows = _diff(source_doc, shim_doc)
    except Exception as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 2

    mismatches = [r for r in rows if not r["match"]]
    payload = {"source_mode": args.mode, "rows": rows, "ok": not mismatches}
    if args.json:
        print(json.dumps(payload, indent=2))
    else:
        for row in rows:
            tag = "OK" if row["match"] else "DIFF"
            print(f"[{tag}] {row['key']}: expected={row['expected']!r} got={row['got']!r}")
        if mismatches:
            print(f"\n{len(mismatches)}/{len(rows)} checks failed")
        else:
            print(f"\nAll {len(rows)} structural checks passed")
    return 1 if mismatches else 0


if __name__ == "__main__":
    raise SystemExit(main())
