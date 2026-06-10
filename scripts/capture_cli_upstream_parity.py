#!/usr/bin/env python3
"""Capture native Codex CLI upstream golden + shim upstream, then diff for parity."""
from __future__ import annotations

import argparse
import json
import os
import shutil
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from capture_upstream_parity import (  # noqa: E402
    DEBUG_DIR,
    FIXTURE_DIR,
    PARITY_MODEL,
    PYTHON,
    SANITIZE,
    SHIM_LOG,
    _assert_model_provider,
    _backup_config,
    _dump_model,
    _force_stop_shim,
    _install_dump_provider,
    _kill_port,
    _preflight_dump_proxy,
    _preflight_shim,
    _restore_config,
    _run,
    _staging_path,
    _start_dump_proxy,
    _start_shim_with_dump,
    _wait_for_dump,
    _wait_for_proxy_jsonl,
    _wait_for_shim_traffic,
)

from codex_shim.codex_config import repair_codex_config  # noqa: E402
from codex_shim.observability.upstream_capture import clear_capture_config  # noqa: E402

DEFAULT_NATIVE = DEBUG_DIR / "cli_native_to_chatgpt.json"
DEFAULT_SHIM = DEBUG_DIR / "cli_shim_to_chatgpt.json"
DEFAULT_REPORT = DEBUG_DIR / "cli_upstream_parity_report.json"
CODEX_CONFIG = Path.home() / ".codex" / "config.toml"
PARITY_PROMPT = "Reply with exactly: PARITY_CLI_OK"
LIVE_MARKER = FIXTURE_DIR / ".live-cli-refreshed"
SHIM_PORT = 8765


def _codex_exec_cmd(prompt: str) -> list[str]:
    cmd = [
        "codex",
        "exec",
        "-c",
        'approval_policy="never"',
        "-c",
        'sandbox_mode="read-only"',
        "-c",
        "include_skill_instructions=false",
        "-c",
        "include_project_instructions=false",
    ]
    raw = os.environ.get("CODEX_PARITY_SCENARIO_CONFIG", "").strip()
    if raw:
        try:
            overrides = json.loads(raw)
        except json.JSONDecodeError:
            overrides = {}
        if isinstance(overrides, dict):
            for key, value in overrides.items():
                if isinstance(value, bool):
                    rendered = "true" if value else "false"
                elif isinstance(value, (int, float)):
                    rendered = str(value)
                else:
                    rendered = json.dumps(str(value))
                cmd.extend(["-c", f"{key}={rendered}"])
    cmd.append(prompt)
    return cmd


def _start_codex_exec(prompt: str, *, cwd: Path | None = None) -> subprocess.Popen[str]:
    return subprocess.Popen(
        _codex_exec_cmd(prompt),
        cwd=str(cwd or ROOT),
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
        stdin=subprocess.DEVNULL,
    )


def _stop_codex_exec(proc: subprocess.Popen[str] | None) -> None:
    if proc is None:
        return
    if proc.poll() is None:
        proc.terminate()
        try:
            proc.wait(timeout=15)
        except subprocess.TimeoutExpired:
            proc.kill()
            proc.wait(timeout=5)


def capture_native_cli_leg(*, dump_path: Path, port: int, prompt: str) -> None:
    _kill_port(port)
    _force_stop_shim(port=SHIM_PORT)
    _run([PYTHON, "-m", "codex_shim.cli", "disable"], env={"PYTHONPATH": str(ROOT)})
    _install_dump_provider(port)
    staging_path = _staging_path(dump_path)
    jsonl_path = staging_path.with_suffix(".jsonl")
    proxy = _start_dump_proxy(port, staging_path)
    try:
        time.sleep(2)
        _preflight_dump_proxy(port)
        _assert_model_provider("upstream_dump")
        for attempt in range(2):
            staging_path.unlink(missing_ok=True)
            jsonl_path.unlink(missing_ok=True)
            proc = _start_codex_exec(prompt)
            try:
                _wait_for_proxy_jsonl(jsonl_path, timeout_s=120.0)
                _wait_for_dump(staging_path, timeout_s=180.0, required_text=prompt)
            finally:
                _stop_codex_exec(proc)
            model = _dump_model(staging_path)
            if model == PARITY_MODEL:
                shutil.copyfile(staging_path, dump_path)
                return
            if attempt == 1:
                shutil.copyfile(staging_path, dump_path)
                print(
                    f"Warning: native CLI model {model!r} != {PARITY_MODEL!r}; continuing with captured parity turn",
                    flush=True,
                )
                return
            time.sleep(2)
    finally:
        proxy.terminate()
        try:
            proxy.wait(timeout=2)
        except subprocess.TimeoutExpired:
            proxy.kill()


def capture_shim_cli_leg(
    *,
    dump_path: Path,
    prompt: str,
    reference_capture: Path | None = None,
    native_path: Path | None = None,
    tier: str = "a",
) -> None:
    if native_path is not None and native_path.exists():
        native_model = _dump_model(native_path)
        if not native_model:
            raise RuntimeError(f"refusing shim leg: native capture missing model in {native_path}")
    staging_path = _staging_path(dump_path)
    _start_shim_with_dump(staging_path, reference_capture=reference_capture, tier=tier)
    _preflight_shim(SHIM_PORT)
    _assert_model_provider("codex_shim")
    for attempt in range(2):
        staging_path.unlink(missing_ok=True)
        staging_path.with_suffix(".jsonl").unlink(missing_ok=True)
        log_offset = SHIM_LOG.stat().st_size if SHIM_LOG.exists() else 0
        proc = _start_codex_exec(prompt)
        try:
            _wait_for_shim_traffic(log_offset=log_offset)
            _wait_for_dump(staging_path, timeout_s=180.0, required_text=prompt)
            shutil.copyfile(staging_path, dump_path)
            return
        except RuntimeError:
            if attempt == 1:
                raise
            time.sleep(2)
        finally:
            _stop_codex_exec(proc)


def capture_paired_cli_session(
    *,
    native_path: Path,
    shim_path: Path,
    port: int,
    prompt: str,
    tier: str = "a",
) -> None:
    capture_native_cli_leg(dump_path=native_path, port=port, prompt=prompt)
    reference_capture = native_path if tier == "a" else None
    capture_shim_cli_leg(
        dump_path=shim_path,
        prompt=prompt,
        reference_capture=reference_capture,
        native_path=native_path,
        tier=tier,
    )


def _refresh_cli_fixtures(*, native_path: Path, shim_path: Path, tier: str = "b") -> None:
    FIXTURE_DIR.mkdir(parents=True, exist_ok=True)
    for src, dest in (
        (native_path, FIXTURE_DIR / "cli_native_to_chatgpt.json"),
        (shim_path, FIXTURE_DIR / "cli_shim_to_chatgpt.json"),
    ):
        proc = _run([PYTHON, str(SANITIZE), str(src), str(dest)])
        if proc.returncode != 0:
            raise RuntimeError(proc.stdout + proc.stderr)
    if tier == "b":
        LIVE_MARKER.write_text(
            json.dumps({"refreshed_at": int(time.time()), "tier": tier, "profile": "cli"}, indent=2) + "\n",
            encoding="utf-8",
        )


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--native-path", type=Path, default=DEFAULT_NATIVE)
    parser.add_argument("--shim-path", type=Path, default=DEFAULT_SHIM)
    parser.add_argument("--report-path", type=Path, default=DEFAULT_REPORT)
    parser.add_argument("--dump-proxy-port", type=int, default=60013)
    parser.add_argument("--prompt", default=PARITY_PROMPT, help="Exact codex exec user message for both legs")
    parser.add_argument("--refresh-fixtures", action="store_true", help="Sanitize debug captures into tests/fixtures/upstream")
    parser.add_argument("--native-only", action="store_true")
    parser.add_argument("--shim-only", action="store_true")
    parser.add_argument("--diff-only", action="store_true")
    tier_group = parser.add_mutually_exclusive_group()
    tier_group.add_argument("--tier-a", action="store_true", help="Harness parity with reference alignment")
    tier_group.add_argument("--tier-b", action="store_true", help="Production parity without reference alignment")
    args = parser.parse_args(argv)
    tier = "b" if args.tier_b else "a"
    paired = not args.native_only and not args.shim_only and not args.diff_only

    DEBUG_DIR.mkdir(parents=True, exist_ok=True)
    if CODEX_CONFIG.exists():
        removed = repair_codex_config(CODEX_CONFIG)
        if removed:
            labels = ", ".join(sorted(set(removed)))
            print(f"Repaired {CODEX_CONFIG} before capture: removed duplicate sections [{labels}].", flush=True)
    backup = _backup_config()
    exit_code = 0
    try:
        if args.diff_only:
            pass
        elif paired:
            print("Capturing paired native CLI + shim upstream session...", flush=True)
            capture_paired_cli_session(
                native_path=args.native_path,
                shim_path=args.shim_path,
                port=args.dump_proxy_port,
                prompt=args.prompt,
                tier=tier,
            )
            print(f"Wrote {args.native_path}", flush=True)
            print(f"Wrote {args.shim_path}", flush=True)
        else:
            if not args.shim_only:
                print("Capturing native CLI upstream golden...", flush=True)
                capture_native_cli_leg(
                    dump_path=args.native_path,
                    port=args.dump_proxy_port,
                    prompt=args.prompt,
                )
                print(f"Wrote {args.native_path}", flush=True)
            if not args.native_only:
                print("Capturing shim CLI upstream...", flush=True)
                reference_capture = (
                    args.native_path
                    if tier == "a" and args.native_path.exists()
                    else None
                )
                capture_shim_cli_leg(
                    dump_path=args.shim_path,
                    prompt=args.prompt,
                    reference_capture=reference_capture,
                    native_path=args.native_path if args.native_path.exists() else None,
                    tier=tier,
                )
                print(f"Wrote {args.shim_path}", flush=True)

        should_diff = args.diff_only or paired or (args.shim_only and args.native_path.exists())
        if should_diff:
            if not args.native_path.exists():
                raise RuntimeError(f"missing native capture: {args.native_path}")
            if not args.shim_path.exists():
                raise RuntimeError(f"missing shim capture: {args.shim_path}")
            diff = _run(
                [
                    PYTHON,
                    str(ROOT / "scripts" / "diff_upstream_capture.py"),
                    str(args.native_path),
                    str(args.shim_path),
                    "--json",
                ]
            )
            report = json.loads(diff.stdout or "{}")
            args.report_path.write_text(json.dumps(report, indent=2), encoding="utf-8")
            print(json.dumps(report, indent=2))
            exit_code = 0 if report.get("ok") else 1
            if exit_code == 0 and args.refresh_fixtures:
                _refresh_cli_fixtures(native_path=args.native_path, shim_path=args.shim_path, tier=tier)
                print(f"Refreshed CLI fixtures under {FIXTURE_DIR}", flush=True)
    finally:
        clear_capture_config()
        if not args.diff_only:
            _restore_config(backup)
    return exit_code


if __name__ == "__main__":
    raise SystemExit(main())
