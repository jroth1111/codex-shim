#!/usr/bin/env python3
"""Capture native Desktop upstream golden + shim upstream, then diff for parity."""
from __future__ import annotations

import argparse
import json
import os
import shutil
import subprocess
import sys
import time
from pathlib import Path
from typing import Any, Callable

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from codex_desktop_control import activate_desktop, relaunch_desktop, run_desktop_turn  # noqa: E402

from codex_shim.clientconfig.codex_config import (  # noqa: E402
    remove_toml_section,
    repair_codex_config,
    repair_codex_config_text,
    validate_toml_text,
    write_codex_config,
)
from codex_shim.observability.upstream_capture import clear_capture_config, write_capture_config  # noqa: E402

DEBUG_DIR = ROOT / "codex-desktop-decompiled" / "captures" / "debug"
DEFAULT_NATIVE = DEBUG_DIR / "native_to_chatgpt.json"
DEFAULT_SHIM = DEBUG_DIR / "shim_to_chatgpt.json"
DEFAULT_REPORT = DEBUG_DIR / "upstream_parity_report.json"
CODEX_CONFIG = Path.home() / ".codex" / "config.toml"
DUMP_PROXY = ROOT / "scripts" / "upstream_dump_proxy.py"
PYTHON = shutil.which("python3.11") or sys.executable


def _run(cmd: list[str], *, env: dict[str, str] | None = None, timeout: int = 120) -> subprocess.CompletedProcess[str]:
    merged = os.environ.copy()
    if env:
        merged.update(env)
    return subprocess.run(
        cmd,
        cwd=str(ROOT),
        env=merged,
        text=True,
        capture_output=True,
        timeout=timeout,
        check=False,
    )


def _backup_config() -> Path:
    backup = DEBUG_DIR / "config.toml.parity-backup"
    backup.parent.mkdir(parents=True, exist_ok=True)
    if CODEX_CONFIG.exists():
        original = CODEX_CONFIG.read_text(encoding="utf-8")
        repaired, _removed = repair_codex_config_text(original)
        backup.write_text(repaired, encoding="utf-8")
    else:
        backup.write_text("", encoding="utf-8")
    return backup


def _restore_config(backup: Path) -> None:
    if backup.exists() and backup.read_text(encoding="utf-8"):
        write_codex_config(backup.read_text(encoding="utf-8"), CODEX_CONFIG)


def _remove_shim_managed(text: str) -> str:
    begin = "# >>> codex-shim managed >>>"
    end = "# <<< codex-shim managed <<<"
    while begin in text:
        before, rest = text.split(begin, 1)
        if end not in rest:
            return before
        _, after = rest.split(end, 1)
        text = before + after
    return text


def _remove_top_level_keys(text: str, keys: set[str]) -> str:
    lines = text.splitlines()
    output: list[str] = []
    in_top_level = True
    for line in lines:
        stripped = line.strip()
        if stripped.startswith("["):
            in_top_level = False
        key = stripped.split("=", 1)[0].strip() if "=" in stripped else ""
        if in_top_level and key in keys:
            continue
        output.append(line)
    return "\n".join(output) + ("\n" if text.endswith("\n") else "")


PARITY_MODEL = "gpt-5.5"
PARITY_PROMPT = "Reply with exactly: PARITY_OK"
SHIM_PORT = 8765
SHIM_LOG = ROOT / ".codex-shim" / "shim.log"
FIXTURE_DIR = ROOT / "tests" / "fixtures" / "upstream"
LIVE_MARKER = FIXTURE_DIR / ".live-refreshed"
SANITIZE = ROOT / "scripts" / "sanitize_upstream_capture.py"
STAGING_DIR = DEBUG_DIR / "staging"


def _set_codex_model(model: str) -> None:
    if not CODEX_CONFIG.exists():
        raise RuntimeError(f"missing codex config: {CODEX_CONFIG}")
    lines: list[str] = []
    for line in CODEX_CONFIG.read_text(encoding="utf-8").splitlines():
        if line.strip().startswith("model = "):
            lines.append(f'model = "{model}"')
        else:
            lines.append(line)
    write_codex_config("\n".join(lines) + "\n", CODEX_CONFIG)


def _install_dump_provider(port: int) -> None:
    original = CODEX_CONFIG.read_text(encoding="utf-8") if CODEX_CONFIG.exists() else ""
    cleaned = _remove_shim_managed(original)
    cleaned = remove_toml_section(cleaned, "model_providers.upstream_dump")
    cleaned = _remove_top_level_keys(cleaned, {"model", "model_provider", "model_catalog_json"})
    provider_block = f'''
[model_providers.upstream_dump]
name = "Upstream Dump Proxy"
base_url = "http://127.0.0.1:{port}/v1"
wire_api = "responses"
requires_openai_auth = true
supports_websockets = true

'''
    top = f'model = "{PARITY_MODEL}"\nmodel_provider = "upstream_dump"\n\n'
    write_codex_config(top + cleaned.lstrip() + provider_block, CODEX_CONFIG)
    validate_toml_text(CODEX_CONFIG.read_text(encoding="utf-8"), path=CODEX_CONFIG)


def _start_dump_proxy(port: int, dump_path: Path) -> subprocess.Popen[Any]:
    env = os.environ.copy()
    env["UPSTREAM_DUMP_PROXY_FULL"] = "1"
    return subprocess.Popen(
        [
            PYTHON,
            str(DUMP_PROXY),
            "--host",
            "127.0.0.1",
            "--port",
            str(port),
            "--dump-path",
            str(dump_path),
        ],
        cwd=str(ROOT),
        env=env,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
    )


def _build_capture_config(
    dump_path: Path,
    *,
    reference_capture: Path | None = None,
    tier: str = "a",
    parity_mode: bool = True,
) -> dict[str, Any]:
    config: dict[str, Any] = {
        "dump": True,
        "full": True,
        "once": True,
        "path": str(dump_path),
        "tier": tier,
        "parity_mode": parity_mode,
    }
    if reference_capture is not None:
        config["reference_capture"] = str(reference_capture)
    return config


def _assert_model_provider(expected: str) -> None:
    if not CODEX_CONFIG.exists():
        raise RuntimeError(f"missing codex config: {CODEX_CONFIG}")
    text = CODEX_CONFIG.read_text(encoding="utf-8")
    for line in text.splitlines():
        stripped = line.strip()
        if stripped.startswith("model_provider = "):
            if expected not in stripped:
                raise RuntimeError(f"expected model_provider {expected!r}, found {stripped!r}")
            return
    raise RuntimeError(f"model_provider not found in {CODEX_CONFIG}")


def _preflight_dump_proxy(port: int) -> None:
    health = _run(["curl", "-s", f"http://127.0.0.1:{port}/health"], timeout=10)
    if health.returncode != 0 or "ok" not in health.stdout:
        raise RuntimeError(f"dump proxy not healthy: {health.stdout} {health.stderr}")


def _preflight_shim(port: int = SHIM_PORT) -> None:
    health = _run(["curl", "-s", f"http://127.0.0.1:{port}/health"], timeout=10)
    if health.returncode != 0 or "ok" not in health.stdout:
        raise RuntimeError(f"shim not healthy: {health.stdout} {health.stderr}")


def _staging_path(dump_path: Path) -> Path:
    STAGING_DIR.mkdir(parents=True, exist_ok=True)
    return STAGING_DIR / f"{dump_path.stem}.{int(time.time())}{dump_path.suffix}"


def _wait_for_proxy_jsonl(jsonl_path: Path, *, timeout_s: float = 30.0) -> None:
    deadline = time.time() + timeout_s
    while time.time() < deadline:
        if jsonl_path.exists() and jsonl_path.stat().st_size > 0:
            return
        time.sleep(0.5)
    raise RuntimeError(f"no dump proxy traffic: {jsonl_path}")


def _wait_for_shim_traffic(*, timeout_s: float = 30.0, log_offset: int = 0) -> None:
    deadline = time.time() + timeout_s
    while time.time() < deadline:
        if SHIM_LOG.exists():
            text = SHIM_LOG.read_text(encoding="utf-8", errors="replace")
            if len(text) > log_offset and "[req]" in text[log_offset:]:
                return
        time.sleep(0.5)
    raise RuntimeError("no shim traffic observed in shim.log")


def _dump_timeout_diagnostics(dump_path: Path) -> str:
    jsonl_path = dump_path.with_suffix(".jsonl")
    details: list[str] = []
    if jsonl_path.exists():
        lines = [line for line in jsonl_path.read_text(encoding="utf-8").splitlines() if line.strip()]
        details.append(f"jsonl_lines={len(lines)}")
        if lines:
            try:
                payload = json.loads(lines[-1])
            except json.JSONDecodeError:
                details.append("last_jsonl=invalid")
            else:
                body = payload.get("body") if isinstance(payload.get("body"), dict) else {}
                raw_tm = (body.get("client_metadata") or {}).get("x-codex-turn-metadata")
                request_kind = None
                if isinstance(raw_tm, str):
                    try:
                        request_kind = json.loads(raw_tm).get("request_kind")
                    except json.JSONDecodeError:
                        request_kind = "invalid"
                input_items = body.get("input")
                details.append(f"last_request_kind={request_kind!r}")
                details.append(f"last_model={body.get('model')!r}")
                details.append(
                    f"last_input_len={len(input_items) if isinstance(input_items, list) else 0}"
                )
    if SHIM_LOG.exists():
        lines = SHIM_LOG.read_text(encoding="utf-8", errors="replace").splitlines()
        if lines:
            details.append(f"shim_log_tail={lines[-1][:200]!r}")
    return "; ".join(details) if details else "no diagnostics"


def _start_shim_with_dump(
    dump_path: Path,
    *,
    port: int = SHIM_PORT,
    reference_capture: Path | None = None,
    tier: str = "a",
) -> None:
    config = _build_capture_config(
        dump_path,
        reference_capture=reference_capture,
        tier=tier,
        parity_mode=(tier == "a"),
    )
    write_capture_config(config)
    cli = [PYTHON, "-m", "codex_shim.cli"]
    _force_stop_shim(port=port)
    proc = _run(
        [*cli, "enable"],
        env={
            "PYTHONPATH": str(ROOT),
            "CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP": "1",
            "CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_FULL": "1",
            "CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_ONCE": "1",
            "CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_PATH": str(dump_path),
            **({"CODEX_SHIM_PARITY_MODE": "1"} if tier == "a" else {}),
            "CODEX_SHIM_UPSTREAM_CAPTURE_TIER": tier,
            **(
                {"CODEX_SHIM_PASSTHROUGH_REFERENCE_CAPTURE": str(reference_capture)}
                if reference_capture is not None
                else {}
            ),
        },
        timeout=180,
    )
    if proc.returncode != 0:
        raise RuntimeError(proc.stdout + proc.stderr)
    _set_codex_model(PARITY_MODEL)
    for _ in range(30):
        status = _run([*cli, "status"], env={"PYTHONPATH": str(ROOT)})
        if status.returncode == 0 and "running" in status.stdout.lower():
            return
        time.sleep(0.2)
    raise RuntimeError(f"shim failed to start with upstream dump env: {status.stdout}{status.stderr}")


def _kill_port(port: int) -> None:
    proc = _run(["lsof", "-ti", f":{port}"], timeout=10)
    for pid in proc.stdout.split():
        if pid.strip().isdigit():
            _run(["kill", "-9", pid.strip()], timeout=5)


def _force_stop_shim(*, port: int = SHIM_PORT) -> None:
    cli = [PYTHON, "-m", "codex_shim.cli"]
    _run([*cli, "stop"], env={"PYTHONPATH": str(ROOT)})
    _kill_port(port)
    pid_path = ROOT / ".codex-shim" / "shim.pid"
    if pid_path.exists():
        try:
            os.kill(int(pid_path.read_text(encoding="utf-8").strip()), 9)
        except (OSError, ValueError):
            pass
        pid_path.unlink(missing_ok=True)
    time.sleep(1)


def _payload_matches_dump(
    payload: dict[str, Any],
    *,
    required_text: str | None,
) -> bool:
    body = payload.get("body") if isinstance(payload.get("body"), dict) else {}
    headers = payload.get("headers") if isinstance(payload.get("headers"), dict) else {}
    turn_metadata = body.get("client_metadata", {}) if isinstance(body.get("client_metadata"), dict) else {}
    raw_tm = turn_metadata.get("x-codex-turn-metadata") or headers.get("x-codex-turn-metadata")
    request_kind = None
    if isinstance(raw_tm, str):
        try:
            request_kind = json.loads(raw_tm).get("request_kind")
        except json.JSONDecodeError:
            request_kind = None
    input_items = body.get("input")
    if not (request_kind == "turn" or (isinstance(input_items, list) and input_items)):
        return False
    if required_text:
        markers = _prompt_markers(required_text)
        haystack = json.dumps(body, ensure_ascii=False)
        if not any(marker in haystack for marker in markers):
            return False
        if isinstance(input_items, list) and not _last_user_message_matches(input_items, markers):
            return False
        return True
    return True


def _user_message_text(item: dict[str, Any]) -> str:
    content = item.get("content")
    if not isinstance(content, list):
        return ""
    parts: list[str] = []
    for block in content:
        if isinstance(block, dict) and block.get("type") == "input_text":
            parts.append(str(block.get("text", "")))
    return "\n".join(parts).strip()


def _last_user_message_matches(input_items: list[Any], markers: list[str]) -> bool:
    user_messages = [
        item
        for item in input_items
        if isinstance(item, dict) and item.get("type") == "message" and item.get("role") == "user"
    ]
    if not user_messages:
        return False
    text = _user_message_text(user_messages[-1])
    return text in markers


def _promote_dump_payload(dump_path: Path, payload: dict[str, Any]) -> None:
    dump_path.parent.mkdir(parents=True, exist_ok=True)
    dump_path.write_text(json.dumps(payload, indent=2, default=str), encoding="utf-8")


def _submit_and_wait_for_parity_dump(
    dump_path: Path,
    prompt: str,
    *,
    timeout_s: float = 180.0,
    before_wait: Callable[[], None] | None = None,
) -> None:
    if before_wait is not None:
        before_wait()
    try:
        _wait_for_dump(dump_path, timeout_s=timeout_s, required_text=prompt)
        return
    except RuntimeError:
        run_desktop_turn(
            prompt,
            new_thread=False,
            wait_s=90.0,
            model_label=None,
            use_paste=True,
        )
        _wait_for_dump(dump_path, timeout_s=timeout_s, required_text=prompt)


def _wait_for_dump(dump_path: Path, *, timeout_s: float = 120.0, required_text: str | None = None) -> None:
    jsonl_path = dump_path.with_suffix(".jsonl")
    deadline = time.time() + timeout_s
    while time.time() < deadline:
        if dump_path.exists() and dump_path.stat().st_size > 100:
            try:
                payload = json.loads(dump_path.read_text(encoding="utf-8"))
            except (OSError, json.JSONDecodeError):
                payload = None
            if isinstance(payload, dict) and _payload_matches_dump(payload, required_text=required_text):
                return
            if required_text:
                dump_path.unlink(missing_ok=True)
        if jsonl_path.exists():
            for line in jsonl_path.read_text(encoding="utf-8").splitlines():
                if not line.strip():
                    continue
                try:
                    payload = json.loads(line)
                except json.JSONDecodeError:
                    continue
                if isinstance(payload, dict) and _payload_matches_dump(payload, required_text=required_text):
                    _promote_dump_payload(dump_path, payload)
                    return
        time.sleep(1)
    jsonl_lines = 0
    if jsonl_path.exists():
        jsonl_lines = len(jsonl_path.read_text(encoding="utf-8").splitlines())
    diagnostics = _dump_timeout_diagnostics(dump_path)
    raise RuntimeError(f"turn upstream dump missing: {dump_path} (jsonl_lines={jsonl_lines}; {diagnostics})")


def _prompt_marker(prompt: str) -> str:
    marker = prompt.strip()
    if marker.lower().startswith("reply with exactly:"):
        marker = marker.split(":", 1)[1].strip()
    return marker or prompt.strip()


def _prompt_markers(prompt: str) -> list[str]:
    markers: list[str] = []
    for candidate in (prompt.strip(), _prompt_marker(prompt)):
        if candidate and candidate not in markers:
            markers.append(candidate)
    return markers


def _dump_model(path: Path) -> str | None:
    try:
        payload = json.loads(path.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError):
        return None
    body = payload.get("body") if isinstance(payload.get("body"), dict) else {}
    model = body.get("model")
    return model if isinstance(model, str) else None


def capture_native_leg(
    *,
    dump_path: Path,
    port: int,
    prompt: str,
    new_thread: bool = True,
) -> None:
    _kill_port(port)
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
            relaunch_desktop()
            time.sleep(3)
            run_desktop_turn(
                prompt,
                new_thread=new_thread,
                wait_s=120.0,
                model_label=None,
                use_paste=True,
            )
            _wait_for_proxy_jsonl(jsonl_path)
            _submit_and_wait_for_parity_dump(
                staging_path,
                prompt,
                timeout_s=180.0,
            )
            model = _dump_model(staging_path)
            if model == PARITY_MODEL:
                shutil.copyfile(staging_path, dump_path)
                return
            if attempt == 1:
                shutil.copyfile(staging_path, dump_path)
                print(
                    f"Warning: native model {model!r} != {PARITY_MODEL!r}; continuing with captured parity turn",
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


def capture_shim_leg(
    *,
    dump_path: Path,
    prompt: str,
    new_thread: bool = False,
    relaunch: bool = False,
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
    _preflight_shim()
    _assert_model_provider("codex_shim")
    for attempt in range(2):
        staging_path.unlink(missing_ok=True)
        staging_path.with_suffix(".jsonl").unlink(missing_ok=True)
        log_offset = SHIM_LOG.stat().st_size if SHIM_LOG.exists() else 0
        if relaunch or attempt > 0:
            relaunch_desktop()
            time.sleep(3)
        else:
            activate_desktop()
            time.sleep(2)
        run_desktop_turn(
            prompt,
            new_thread=new_thread,
            wait_s=120.0,
            model_label=None,
            use_paste=True,
        )
        try:
            _submit_and_wait_for_parity_dump(
                staging_path,
                prompt,
                timeout_s=180.0,
                before_wait=lambda offset=log_offset: _wait_for_shim_traffic(log_offset=offset),
            )
            shutil.copyfile(staging_path, dump_path)
            return
        except RuntimeError:
            if attempt == 1:
                raise
            time.sleep(2)


def capture_paired_session(
    *,
    native_path: Path,
    shim_path: Path,
    port: int,
    prompt: str,
    tier: str = "a",
) -> None:
    """Native golden, then shim leg with the same prompt after provider switch relaunch."""
    capture_native_leg(dump_path=native_path, port=port, prompt=prompt, new_thread=True)
    reference_capture = native_path if tier == "a" else None
    capture_shim_leg(
        dump_path=shim_path,
        prompt=prompt,
        new_thread=True,
        relaunch=True,
        reference_capture=reference_capture,
        native_path=native_path,
        tier=tier,
    )


def _refresh_fixtures(*, native_path: Path, shim_path: Path, tier: str = "b") -> None:
    FIXTURE_DIR.mkdir(parents=True, exist_ok=True)
    for src, dest in (
        (native_path, FIXTURE_DIR / "native_to_chatgpt.json"),
        (shim_path, FIXTURE_DIR / "shim_to_chatgpt.json"),
    ):
        proc = _run([PYTHON, str(SANITIZE), str(src), str(dest)])
        if proc.returncode != 0:
            raise RuntimeError(proc.stdout + proc.stderr)
    if tier == "b":
        LIVE_MARKER.write_text(
            json.dumps({"refreshed_at": int(time.time()), "tier": tier}, indent=2) + "\n",
            encoding="utf-8",
        )


def capture_native(*, dump_path: Path, port: int, prompt: str, backup: Path) -> None:
    del backup  # config restore handled by main()
    capture_native_leg(dump_path=dump_path, port=port, prompt=prompt, new_thread=True)


def capture_shim(*, dump_path: Path, prompt: str, relaunch: bool = True) -> None:
    capture_shim_leg(dump_path=dump_path, prompt=prompt, new_thread=True, relaunch=relaunch)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--native-path", type=Path, default=DEFAULT_NATIVE)
    parser.add_argument("--shim-path", type=Path, default=DEFAULT_SHIM)
    parser.add_argument("--report-path", type=Path, default=DEFAULT_REPORT)
    parser.add_argument("--dump-proxy-port", type=int, default=60002)
    parser.add_argument("--prompt", default=PARITY_PROMPT, help="Exact Desktop user message for both legs")
    parser.add_argument("--native-prompt", default=None, help="Override native leg prompt")
    parser.add_argument("--shim-prompt", default=None, help="Override shim leg prompt")
    parser.add_argument("--split-session", action="store_true", help="Capture native and shim on separate relaunches")
    parser.add_argument("--shim-relaunch", action="store_true", help="Relaunch Desktop before shim leg")
    parser.add_argument("--refresh-fixtures", action="store_true", help="Sanitize debug captures into tests/fixtures/upstream")
    parser.add_argument("--native-only", action="store_true")
    parser.add_argument("--shim-only", action="store_true")
    parser.add_argument("--diff-only", action="store_true")
    tier_group = parser.add_mutually_exclusive_group()
    tier_group.add_argument("--tier-a", action="store_true", help="Harness parity with reference alignment")
    tier_group.add_argument("--tier-b", action="store_true", help="Production parity without reference alignment")
    args = parser.parse_args(argv)
    tier = "b" if args.tier_b else "a"
    native_prompt = args.native_prompt or args.prompt
    shim_prompt = args.shim_prompt or args.prompt
    paired = (
        not args.split_session
        and not args.native_only
        and not args.shim_only
        and not args.diff_only
    )

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
        elif paired and not args.native_only and not args.shim_only:
            print("Capturing paired native+shim upstream session...", flush=True)
            capture_paired_session(
                native_path=args.native_path,
                shim_path=args.shim_path,
                port=args.dump_proxy_port,
                prompt=native_prompt,
                tier=tier,
            )
            print(f"Wrote {args.native_path}", flush=True)
            print(f"Wrote {args.shim_path}", flush=True)
        else:
            if not args.shim_only:
                print("Capturing native Desktop upstream golden...", flush=True)
                capture_native(
                    dump_path=args.native_path,
                    port=args.dump_proxy_port,
                    prompt=native_prompt,
                    backup=backup,
                )
                print(f"Wrote {args.native_path}", flush=True)
            if not args.native_only:
                print("Capturing shim upstream...", flush=True)
                reference_capture = (
                    args.native_path
                    if tier == "a" and args.native_path.exists()
                    else None
                )
                capture_shim_leg(
                    dump_path=args.shim_path,
                    prompt=shim_prompt,
                    new_thread=True,
                    relaunch=args.shim_relaunch or args.split_session or not paired,
                    reference_capture=reference_capture,
                    native_path=args.native_path if args.native_path.exists() else None,
                    tier=tier,
                )
                print(f"Wrote {args.shim_path}", flush=True)

        should_diff = (
            args.diff_only
            or paired
            or (args.shim_only and args.native_path.exists())
        )
        if should_diff:
            if not args.native_path.exists():
                raise RuntimeError(f"missing native capture: {args.native_path}")
            if not args.shim_path.exists():
                raise RuntimeError(f"missing shim capture: {args.shim_path}")
            diff_cmd = [
                PYTHON,
                str(ROOT / "scripts" / "diff_upstream_capture.py"),
                str(args.native_path),
                str(args.shim_path),
                "--json",
            ]
            diff = _run(diff_cmd)
            report = json.loads(diff.stdout or "{}")
            args.report_path.write_text(json.dumps(report, indent=2), encoding="utf-8")
            print(json.dumps(report, indent=2))
            exit_code = 0 if report.get("ok") else 1
            if exit_code == 0 and args.refresh_fixtures:
                _refresh_fixtures(native_path=args.native_path, shim_path=args.shim_path, tier=tier)
                print(f"Refreshed fixtures under {FIXTURE_DIR}", flush=True)
    finally:
        clear_capture_config()
        if not args.diff_only:
            _restore_config(backup)
    return exit_code


if __name__ == "__main__":
    raise SystemExit(main())
