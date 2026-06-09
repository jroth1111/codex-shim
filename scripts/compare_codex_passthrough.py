#!/usr/bin/env python3
"""Compare codex_shim ChatGPT passthrough with native Codex subscription inference.

Runs three live paths for the same user prompt:
1. shim — POST /v1/responses on the local codex-shim daemon
2. direct — same prepared body/headers the shim sends upstream to ChatGPT
3. codex — `codex exec` with native OpenAI provider (subscription auth)

Also compares shim-prepared upstream body shape to codex `debug prompt-input` output.
"""
from __future__ import annotations

import argparse
import json
import subprocess
import sys
from pathlib import Path
from typing import Any

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from codex_shim.integration_harness import (  # noqa: E402
    PROBE_OUTPUT_TEXT_KEY,
    default_port,
    post_json_streaming,
    responses_url,
    tier_a_passthrough_body,
)
from codex_shim.passthrough import _prepare_upstream_request  # noqa: E402
from codex_shim.settings import CHATGPT_MODEL_SLUG, DEFAULT_CODEX_AUTH  # noqa: E402

CODEX_REPO = Path("/tmp/codex")
UPSTREAM_RESPONSES = "https://chatgpt.com/backend-api/codex/responses"


def _load_auth() -> tuple[str, str]:
    auth_path = DEFAULT_CODEX_AUTH.expanduser()
    auth = json.loads(auth_path.read_text(encoding="utf-8"))
    tokens = auth.get("tokens") or {}
    access_token = str(tokens.get("access_token") or "")
    account_id = str(tokens.get("account_id") or "")
    if not access_token:
        raise RuntimeError(f"{auth_path} missing tokens.access_token")
    return access_token, account_id


def _desktop_body(prompt: str) -> dict[str, Any]:
    body = tier_a_passthrough_body(user_text=prompt)
    body["stream"] = True
    body["metadata"] = {"trace_id": "compare-trace", "request_id": "compare-req"}
    thread_id = "compare-thread-id"
    body["client_metadata"] = {
        "x-codex-turn-metadata": json.dumps(
            {
                "session_id": thread_id,
                "thread_id": thread_id,
                "thread_source": "user",
                "workspace_kind": "project",
                "request_kind": "turn",
            }
        )
    }
    return body


def _compare_request(desktop_body: dict[str, Any]):
    class _Req:
        headers = {
            "session-id": "compare-thread-id",
            "thread-id": "compare-thread-id",
            "x-client-request-id": "compare-client-req",
        }

    return _Req()  # type: ignore[return-value]


def _shim_prepared_body(desktop_body: dict[str, Any]) -> dict[str, Any]:
    forwarded, _headers = _prepare_upstream_request(_compare_request(desktop_body), desktop_body, compact=False)
    return forwarded


def _passthrough_headers(access_token: str, account_id: str, desktop_body: dict[str, Any]) -> dict[str, str]:
    _forwarded, headers = _prepare_upstream_request(_compare_request(desktop_body), desktop_body, compact=False)
    return headers


def _output_text(payload: dict[str, Any]) -> str:
    if PROBE_OUTPUT_TEXT_KEY in payload:
        return str(payload[PROBE_OUTPUT_TEXT_KEY] or "").strip()
    chunks: list[str] = []
    for item in payload.get("output") or []:
        if not isinstance(item, dict):
            continue
        if item.get("type") == "message":
            for part in item.get("content") or []:
                if isinstance(part, dict) and part.get("type") == "output_text":
                    chunks.append(str(part.get("text") or ""))
    return "".join(chunks).strip()


def _response_summary(payload: dict[str, Any]) -> dict[str, Any]:
    return {
        "id": payload.get("id"),
        "status": payload.get("status"),
        "model": payload.get("model"),
        "output_text": _output_text(payload),
        "output_types": [
            item.get("type")
            for item in (payload.get("output") or [])
            if isinstance(item, dict)
        ],
    }


def _run_shim(port: int, desktop_body: dict[str, Any]) -> dict[str, Any]:
    completed = post_json_streaming(
        responses_url(port),
        desktop_body,
        headers={"session_id": "compare-session", "x-client-request-id": "compare-client-req"},
        label="shim passthrough",
        collect_output_text=True,
    )
    return _response_summary(completed)


def _run_direct(prepared: dict[str, Any], headers: dict[str, str]) -> dict[str, Any]:
    completed = post_json_streaming(
        UPSTREAM_RESPONSES,
        prepared,
        headers=headers,
        label="direct ChatGPT upstream",
        collect_output_text=True,
    )
    return _response_summary(completed)


def _codex_common_config() -> list[str]:
    return [
        "-c",
        'model_provider="openai"',
        "-c",
        f'model="{CHATGPT_MODEL_SLUG}"',
        "-c",
        'approval_policy="never"',
        "-c",
        'sandbox_mode="read-only"',
        "-c",
        "include_skill_instructions=false",
        "-c",
        "include_project_instructions=false",
    ]


def _run_codex_exec(prompt: str, *, codex_root: Path) -> str:
    cmd = ["codex", "exec", *_codex_common_config(), prompt]
    proc = subprocess.run(
        cmd,
        cwd=str(codex_root),
        capture_output=True,
        text=True,
        timeout=600,
        check=False,
        stdin=subprocess.DEVNULL,
    )
    stdout = (proc.stdout or "").strip()
    stderr = (proc.stderr or "").strip()
    if proc.returncode != 0:
        raise RuntimeError(
            f"codex exec failed ({proc.returncode})\nstdout:\n{stdout}\nstderr:\n{stderr}"
        )
    return stdout


def _run_codex_prompt_input(prompt: str) -> list[dict[str, Any]]:
    cmd = ["codex", "debug", "prompt-input", *_codex_common_config(), prompt]
    proc = subprocess.run(
        cmd,
        capture_output=True,
        text=True,
        timeout=120,
        check=False,
        stdin=subprocess.DEVNULL,
    )
    if proc.returncode != 0:
        raise RuntimeError((proc.stderr or proc.stdout or f"exit {proc.returncode}").strip())
    payload = json.loads(proc.stdout)
    if not isinstance(payload, list):
        raise RuntimeError(f"unexpected prompt-input payload: {type(payload)!r}")
    return payload


def _input_shape(items: list[dict[str, Any]] | None) -> dict[str, Any]:
    if not items:
        return {}
    roles: list[str] = []
    types: list[str] = []
    text_lens: list[int] = []
    for item in items:
        if not isinstance(item, dict):
            continue
        if item.get("role"):
            roles.append(str(item["role"]))
        if item.get("type"):
            types.append(str(item["type"]))
        content = item.get("content")
        if isinstance(content, list):
            for part in content:
                if isinstance(part, dict) and part.get("text"):
                    text_lens.append(len(str(part["text"])))
    return {
        "input_count": len(items),
        "input_roles": roles,
        "input_types": types,
        "content_text_lens": text_lens[:8],
        "total_content_chars": sum(text_lens),
    }


def _body_shape(body: dict[str, Any] | None) -> dict[str, Any]:
    if not body:
        return {}
    input_items = body.get("input") or []
    return {
        "top_level_keys": sorted(body.keys()),
        "model": body.get("model"),
        "stream": body.get("stream"),
        "store": body.get("store"),
        "instructions_len": len(str(body.get("instructions") or "")),
        "input_count": len(input_items) if isinstance(input_items, list) else None,
        **_input_shape(input_items if isinstance(input_items, list) else None),
        "tool_count": len(body.get("tools") or []) if isinstance(body.get("tools"), list) else 0,
    }


def _diff_rows(shim_body: dict[str, Any], codex_input: list[dict[str, Any]]) -> list[dict[str, Any]]:
    shim_shape = _body_shape(shim_body)
    codex_shape = {
        "top_level_keys": ["input", "instructions", "model", "store", "stream", "tools"],
        "model": CHATGPT_MODEL_SLUG,
        "stream": True,
        "store": False,
        "instructions_len": shim_shape.get("instructions_len"),
        **_input_shape(codex_input),
        "tool_count": "unknown (full request not exposed by prompt-input)",
    }
    rows: list[dict[str, Any]] = []
    for key in sorted(set(shim_shape) | set(codex_shape)):
        left = shim_shape.get(key)
        right = codex_shape.get(key)
        rows.append({"field": key, "shim_prepared": left, "codex_native": right, "match": left == right})
    return rows


def _extract_codex_answer(stdout: str) -> str:
    lines = [line.strip() for line in stdout.splitlines() if line.strip()]
    for idx, line in enumerate(lines):
        if line == "codex" and idx + 1 < len(lines):
            return lines[idx + 1]
    return lines[-1] if lines else ""


def _print_section(title: str) -> None:
    print()
    print("=" * len(title))
    print(title)
    print("=" * len(title))


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--port", type=int, default=default_port())
    parser.add_argument("--prompt", default="Reply with exactly: OK")
    parser.add_argument("--codex-root", type=Path, default=CODEX_REPO)
    parser.add_argument("--skip-codex-exec", action="store_true", help="Skip native codex exec (faster).")
    args = parser.parse_args()

    access_token, account_id = _load_auth()
    desktop_body = _desktop_body(args.prompt)
    prepared = _shim_prepared_body(desktop_body)
    headers = _passthrough_headers(access_token, account_id, desktop_body)

    _print_section("Request shape (shim prepared upstream body)")
    print(json.dumps(_body_shape(prepared), indent=2))

    _print_section("Live: shim passthrough")
    shim_result = _run_shim(args.port, desktop_body)
    print(json.dumps(shim_result, indent=2))

    _print_section("Live: direct ChatGPT upstream (shim-prepared body)")
    direct_result = _run_direct(prepared, headers)
    print(json.dumps(direct_result, indent=2))

    shim_vs_direct = {
        "output_text_match": shim_result.get("output_text") == direct_result.get("output_text"),
        "model_match": shim_result.get("model") == direct_result.get("model"),
        "both_completed": shim_result.get("status") == direct_result.get("status") == "completed",
    }
    _print_section("Shim vs direct upstream")
    print(json.dumps(shim_vs_direct, indent=2))

    codex_input = _run_codex_prompt_input(args.prompt)
    _print_section("Codex native prompt-input shape")
    print(json.dumps(_input_shape(codex_input), indent=2))

    _print_section("Request body diff: shim prepared vs codex prompt-input")
    for row in _diff_rows(prepared, codex_input):
        mark = "OK" if row["match"] else "DIFF"
        print(f"[{mark}] {row['field']}: shim={row['shim_prepared']!r} codex={row['codex_native']!r}")

    codex_answer = ""
    if not args.skip_codex_exec:
        _print_section("Live: native codex exec")
        codex_stdout = _run_codex_exec(args.prompt, codex_root=args.codex_root)
        codex_answer = _extract_codex_answer(codex_stdout)
        print(codex_stdout[-1200:])

    _print_section("Summary")
    print(f"prompt: {args.prompt!r}")
    print(f"shim output: {shim_result.get('output_text')!r}")
    print(f"direct output: {direct_result.get('output_text')!r}")
    if codex_answer:
        print(f"codex exec answer line: {codex_answer!r}")
    print(f"shim == direct upstream text: {shim_vs_direct['output_text_match']}")
    print(
        "structural note: shim passthrough sends a minimal Desktop Responses body "
        "(instructions + single user turn). Codex CLI injects developer/system context, "
        "AGENTS.md, environment, skills/plugins blocks, and tool definitions before the user prompt."
    )

    if not shim_vs_direct["output_text_match"]:
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
