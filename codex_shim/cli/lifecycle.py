"""Daemon lifecycle: start/stop/status, codex/app launchers, one-shot.

Reads of patched constants/helpers and cross-command calls go through the
cli package namespace (cli_ns) at call time so test monkeypatches on
codex_shim.cli attributes keep working.
"""
from __future__ import annotations

import ctypes
import json
import os
import signal
import subprocess
import sys
import time
from collections.abc import MutableMapping
from pathlib import Path
from urllib.request import urlopen

from codex_shim import cli as cli_ns

from ..clientconfig import (
    codex_config_overrides,
    remove_toml_section,
    write_codex_config,
)
from ..observability import read_capture_config, write_capture_config
from ..settings import (
    DEFAULT_HOST,
    PROVIDER_NAME,
    default_model_slug,
)


def start(settings_path: Path, port: int) -> int:
    if _pid_running(_read_pid()):
        print(f"Shim already running with pid {_read_pid()}.")
        return 0
    cli_ns.RUNTIME_DIR.mkdir(parents=True, exist_ok=True)
    log = cli_ns.LOG_PATH.open("ab")
    cmd = [
        sys.executable,
        "-m",
        "codex_shim.server",
        "--settings",
        str(settings_path),
        "--host",
        DEFAULT_HOST,
        "--port",
        str(port),
    ]
    process = _popen_daemon(cmd, log)
    cli_ns.PID_PATH.write_text(str(process.pid))
    for _ in range(50):
        if _healthy(port):
            print(f"Shim started on http://{DEFAULT_HOST}:{port} with pid {process.pid}.")
            print(f"Log: {cli_ns.LOG_PATH}")
            return 0
        if process.poll() is not None:
            print(f"Shim exited during startup. See {cli_ns.LOG_PATH}.", file=sys.stderr)
            return 1
        time.sleep(0.1)
    print(f"Shim process started but health check timed out. See {cli_ns.LOG_PATH}.", file=sys.stderr)
    return 1


def stop() -> int:
    pid = _read_pid()
    if pid is None or not _pid_running(pid):
        print("Shim is not running.")
        cli_ns.PID_PATH.unlink(missing_ok=True)
        return 0
    _terminate_pid(pid)
    for _ in range(50):
        if not _pid_running(pid):
            cli_ns.PID_PATH.unlink(missing_ok=True)
            print("Shim stopped.")
            return 0
        time.sleep(0.1)
    print(f"Shim pid {pid} did not exit after SIGTERM.", file=sys.stderr)
    return 1


def repair_codex_config(path: Path = cli_ns.CODEX_CONFIG_PATH) -> int:
    from ..clientconfig import repair_codex_config as _repair_codex_config

    if not path.exists():
        print(f"No config to repair at {path}.", file=sys.stderr)
        return 1
    removed = _repair_codex_config(path)
    if removed:
        labels = ", ".join(sorted(set(removed)))
        print(f"Repaired {path}: removed duplicate sections [{labels}].")
    else:
        print(f"{path} is already valid; no duplicate sections found.")
    return 0


def restore_codex_config() -> None:
    if cli_ns.CODEX_CONFIG_PATH.exists():
        current = cli_ns.CODEX_CONFIG_PATH.read_text()
        previous_top_level = cli_ns._managed_previous_top_level(current)
        if not previous_top_level and cli_ns.CODEX_CONFIG_BACKUP_PATH.exists():
            previous_top_level = cli_ns._extract_top_level_key_lines(cli_ns.CODEX_CONFIG_BACKUP_PATH.read_text(), cli_ns.MANAGED_TOP_LEVEL_KEYS)
        restored = cli_ns._remove_managed_config(current)
        restored = remove_toml_section(restored, f"model_providers.{PROVIDER_NAME}")
        restored = cli_ns._restore_missing_top_level_keys(restored.lstrip(), previous_top_level)
        write_codex_config(restored, cli_ns.CODEX_CONFIG_PATH)
        print(f"Removed shim config from {cli_ns.CODEX_CONFIG_PATH}.")
    if cli_ns.CODEX_CONFIG_BACKUP_PATH.exists():
        cli_ns.CODEX_CONFIG_BACKUP_PATH.unlink()
        print(f"Removed stale shim backup {cli_ns.CODEX_CONFIG_BACKUP_PATH}.")


def _persist_capture_config_from_env() -> None:
    config: dict[str, object] = dict(read_capture_config())
    if os.environ.get("CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP", "").strip():
        config["dump"] = True
    if os.environ.get("CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_FULL", "").strip():
        config["full"] = True
    if os.environ.get("CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_ONCE", "").strip():
        config["once"] = True
    for env_name, key in (
        ("CODEX_SHIM_PASSTHROUGH_UPSTREAM_DUMP_PATH", "path"),
        ("CODEX_SHIM_PASSTHROUGH_REFERENCE_CAPTURE", "reference_capture"),
        ("CODEX_SHIM_PARITY_MODE", "parity_mode"),
    ):
        value = os.environ.get(env_name, "").strip()
        if value:
            config[key] = value
    tier = os.environ.get("CODEX_SHIM_UPSTREAM_CAPTURE_TIER", "").strip().lower()
    if tier in {"a", "b"}:
        config["tier"] = tier
    if config:
        write_capture_config(config)


def status(port: int) -> int:
    pid = _read_pid()
    if _pid_running(pid):
        health = _health(port)
        if health is not None:
            model_count = health.get("models", "unknown")
            print(f"Shim is running on http://{DEFAULT_HOST}:{port} with pid {pid} ({model_count} models).")
            capture_config = read_capture_config()
            if capture_config:
                print(f"Upstream capture config: {json.dumps(capture_config, sort_keys=True)}")
            return 0
    if _pid_running(pid):
        print(f"Shim process {pid} exists but health check failed.")
        return 1
    print("Shim is stopped.")
    return 1


def ensure_started(settings_path: Path, port: int) -> None:
    if not (_pid_running(_read_pid()) and _healthy(port)):
        code = start(settings_path, port)
        if code:
            raise SystemExit(code)


def exec_codex(settings_path: Path, port: int, codex_args: list[str]) -> None:
    overrides = _override_args(settings_path, port)
    codex_args = list(codex_args or [])
    if codex_args[:1] == ["--"]:
        codex_args = codex_args[1:]
    codex_exe = cli_ns._resolve_executable("codex")
    args = [codex_exe, *overrides, *codex_args]
    _set_loopback_no_proxy_env()
    if os.name == "nt":
        raise SystemExit(subprocess.call(args))
    os.execv(args[0], args)


def exec_codex_app(settings_path: Path, port: int, path: str) -> None:
    _quit_codex_app()
    codex_exe = cli_ns._resolve_executable("codex")
    args = [codex_exe, "app", path]
    _set_loopback_no_proxy_env()
    subprocess.Popen(args)
    cli_ns._foreground_codex_app()


def one_shot(
    settings_path: Path,
    port: int,
    path: str,
    model_slug: str | None,
    *,
    skip_patch: bool = False,
    require_patch: bool = False,
    keep_shim_running: bool = False,
) -> int:
    cli_ns.generate(settings_path, port)
    if sys.platform == "darwin" and not skip_patch:
        code = cli_ns.patch_codex_app_auto()
        if code != 0:
            if require_patch:
                return code
            print(
                "patch-auto could not complete; continuing without patch. "
                "Desktop model picker may still show only Custom until patched.",
                file=sys.stderr,
            )
    ensure_started(settings_path, port)
    cli_ns.install_codex_config(settings_path, port, model_slug)
    exec_codex_app(settings_path, port, path)
    if keep_shim_running:
        print("Codex Desktop launched; shim left running (opt-out mode).")
        print("Use `codex-shim stop` when you are done.")
        return 0
    print("Waiting for Codex Desktop to exit...")
    if not _wait_for_codex_launch(timeout_seconds=30):
        print("Codex Desktop process was not detected after launch; shim remains running.", file=sys.stderr)
        return 1
    try:
        _wait_for_codex_exit()
    except KeyboardInterrupt:
        print("\nInterrupted; restoring config, stopping shim, and exiting.")
    # one-shot is intentionally transactional: restore user Codex config and stop shim.
    restore_codex_config()
    return stop()


def _set_loopback_no_proxy_env() -> None:
    _with_loopback_no_proxy(os.environ)


def _with_loopback_no_proxy(env: MutableMapping[str, str]) -> MutableMapping[str, str]:
    loopback = ["127.0.0.1", "localhost", "::1"]
    for key in ("NO_PROXY", "no_proxy"):
        values = [part.strip() for part in env.get(key, "").split(",") if part.strip()]
        lower_values = {value.lower() for value in values}
        for host in loopback:
            if host.lower() not in lower_values:
                values.append(host)
        env[key] = ",".join(values)
    return env


def _codex_desktop_running() -> bool:
    if sys.platform == "darwin":
        result = subprocess.run(["pgrep", "-x", "Codex"], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, check=False)
        return result.returncode == 0
    if os.name == "nt":
        result = subprocess.run(
            ["tasklist", "/FI", "IMAGENAME eq Codex.exe"],
            stdout=subprocess.PIPE,
            stderr=subprocess.DEVNULL,
            text=True,
            check=False,
        )
        return "Codex.exe" in (result.stdout or "")
    result = subprocess.run(["pgrep", "-f", "codex app"], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, check=False)
    return result.returncode == 0


def _wait_for_codex_launch(*, timeout_seconds: int = 30) -> bool:
    deadline = time.time() + timeout_seconds
    while time.time() < deadline:
        if _codex_desktop_running():
            return True
        time.sleep(0.5)
    return _codex_desktop_running()


def _wait_for_codex_exit() -> None:
    while _codex_desktop_running():
        time.sleep(1.0)


def _quit_codex_app() -> None:
    script = 'tell application "Codex" to if it is running then quit'
    try:
        subprocess.run(
            [cli_ns._resolve_executable("osascript"), "-e", script],
            check=False,
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
        )
        time.sleep(1.0)
    except OSError:
        pass


def _popen_daemon(cmd: list[str], log) -> subprocess.Popen:
    env = os.environ.copy()
    env["PYTHONPATH"] = str(cli_ns.PROJECT_ROOT)
    kwargs = {"cwd": str(cli_ns.PROJECT_ROOT), "env": env, "stdout": log, "stderr": log}
    if os.name == "nt":
        creationflags = getattr(subprocess, "CREATE_NEW_PROCESS_GROUP", 0) | getattr(subprocess, "DETACHED_PROCESS", 0)
        return subprocess.Popen(cmd, creationflags=creationflags, **kwargs)
    return subprocess.Popen(cmd, start_new_session=True, **kwargs)


def _terminate_pid(pid: int) -> None:
    if os.name == "nt":
        handle = ctypes.windll.kernel32.OpenProcess(cli_ns.WINDOWS_PROCESS_TERMINATE, False, pid)
        if handle:
            try:
                ctypes.windll.kernel32.TerminateProcess(handle, 0)
            finally:
                ctypes.windll.kernel32.CloseHandle(handle)
        return
    os.kill(pid, signal.SIGTERM)


def _override_args(settings_path: Path, port: int) -> list[str]:
    models = cli_ns._desktop_models(settings_path)
    try:
        default_slug = default_model_slug(models, include_chatgpt=False)
    except ValueError as exc:
        raise SystemExit(str(exc)) from exc
    pairs = codex_config_overrides(cli_ns.CATALOG_PATH, default_slug, port)
    args: list[str] = []
    for pair in pairs:
        args.extend(["-c", pair])
    return args


def _healthy(port: int) -> bool:
    return _health(port) is not None


def _health(port: int) -> dict | None:
    try:
        with urlopen(f"http://{DEFAULT_HOST}:{port}/health", timeout=0.5) as response:
            if response.status != 200:
                return None
            return json.loads(response.read().decode("utf-8"))
    except Exception:
        return None


def _read_pid() -> int | None:
    try:
        return int(cli_ns.PID_PATH.read_text().strip())
    except Exception:
        return None


def _pid_running(pid: int | None) -> bool:
    if not pid:
        return False
    if os.name == "nt":
        handle = ctypes.windll.kernel32.OpenProcess(cli_ns.WINDOWS_PROCESS_QUERY_LIMITED_INFORMATION, False, pid)
        if not handle:
            return False
        try:
            exit_code = ctypes.c_ulong()
            if not ctypes.windll.kernel32.GetExitCodeProcess(handle, ctypes.byref(exit_code)):
                return False
            return exit_code.value == cli_ns.WINDOWS_STILL_ACTIVE
        finally:
            ctypes.windll.kernel32.CloseHandle(handle)
    try:
        os.kill(pid, 0)
        return True
    except OSError:
        return False
