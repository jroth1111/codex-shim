from __future__ import annotations

import argparse
import asyncio
import ctypes
import hashlib
import importlib.util
import json
import os
import plistlib
import re
import shlex
import shutil
import signal
import struct
import subprocess
import sys
import time
from collections import Counter
from collections.abc import MutableMapping
from dataclasses import dataclass
from pathlib import Path
from urllib.request import urlopen

from ..clientconfig import (
    CATALOG_PATH,
    OPENCODE_GO_API_KEY_ENV,
    OPENCODE_GO_BASE_URL,
    _toml_escape,
    catalog_entry,
    codex_config_overrides,
    export_config_file,
    refresh_opencode_go_settings,
    remove_toml_section,
    write_catalog,
    write_codex_config,
    write_config,
    write_direct_responses_config,
)
from ..migrate import apply_postgres_migrations
from ..observability import clear_capture_config, read_capture_config, write_capture_config
from ..providers import (
    cursor_passthrough_available,
    cursor_passthrough_display_names,
    is_cursor_passthrough_slug,
)
from ..routing import auto_router as router_module
from ..settings import (
    CHATGPT_MODEL_SLUG,
    DEFAULT_CODEX_AUTH,
    DEFAULT_HOST,
    DEFAULT_PORT,
    DEFAULT_SETTINGS,
    PROVIDER_NAME,
    ModelSettings,
    ShimModel,
    available_model_slugs,
    chatgpt_passthrough_available,
    chatgpt_passthrough_slugs,
    default_model_slug,
    fetch_vibeproxy_model_rows,
    usable_byok_models,
    websockets_enabled,
)
from ..settings import PROJECT_ROOT as _PROJECT_ROOT
from ..workers import main as worker_main

PROJECT_ROOT = _PROJECT_ROOT
RUNTIME_DIR = PROJECT_ROOT / ".codex-shim"
CONFIG_PATH = RUNTIME_DIR / "config.toml"
PID_PATH = RUNTIME_DIR / "shim.pid"
LOG_PATH = RUNTIME_DIR / "shim.log"
CODEX_CONFIG_PATH = Path.home() / ".codex" / "config.toml"
CODEX_CONFIG_BACKUP_PATH = RUNTIME_DIR / "config.toml.before-codex-shim"
MANAGED_BEGIN = "# >>> codex-shim managed >>>"
MANAGED_END = "# <<< codex-shim managed <<<"
WINDOWS_PROCESS_TERMINATE = 0x0001
WINDOWS_PROCESS_QUERY_LIMITED_INFORMATION = 0x1000
WINDOWS_STILL_ACTIVE = 259
PREVIOUS_TOP_LEVEL_PREFIX = "# codex-shim previous-top-level = "
MANAGED_TOP_LEVEL_KEYS = {"model", "model_provider", "model_catalog_json"}
CODEX_APP_ASAR_PATH = Path("/Applications/Codex.app/Contents/Resources/app.asar")
APP_ASAR_BACKUP_NAME = "app.asar.before-codex-shim-model-picker-patch"
INFO_PLIST_BACKUP_NAME = "Info.plist.before-codex-shim-model-picker-patch"
# Compatibility re-exports: tests read these via codex_shim.cli attributes.
# Delete once test imports are repointed at the source modules (migration phase 9).
from ..clientconfig import (  # noqa: F401, E402
    MODEL_PICKER_NEEDLE,
    MODEL_PICKER_REPLACEMENT,
    REDACTED_VALUE,  # noqa: F401, E402
    SIDEBAR_RECENT_THREADS_NEEDLE,
    SIDEBAR_RECENT_THREADS_REPLACEMENT,
    inspection_specs_for_version,
    patch_specs_for_version,
)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(prog="codex-shim")
    parser.add_argument("--settings", type=Path, default=DEFAULT_SETTINGS)
    parser.add_argument("--port", type=int, default=DEFAULT_PORT)
    sub = parser.add_subparsers(dest="command", required=True)
    sub.add_parser("generate")
    sub.add_parser("list")
    sub.add_parser("start")
    sub.add_parser("enable")
    sub.add_parser("stop")
    sub.add_parser("disable")
    repair_config_parser = sub.add_parser(
        "repair-config",
        help="Deduplicate repeated ~/.codex/config.toml sections and validate TOML.",
    )
    repair_config_parser.add_argument(
        "--path",
        type=Path,
        default=CODEX_CONFIG_PATH,
        help="Codex config path to repair (default: ~/.codex/config.toml).",
    )
    sub.add_parser("restart")
    sub.add_parser("status")
    opencode_parser = sub.add_parser("opencode-go", help="Discover and configure OpenCode Go models.")
    opencode_sub = opencode_parser.add_subparsers(dest="opencode_go_command", required=True)
    refresh_parser = opencode_sub.add_parser("refresh", help="Refresh OpenCode Go models into the settings file.")
    refresh_parser.add_argument("--api-key-env", default=OPENCODE_GO_API_KEY_ENV)
    refresh_parser.add_argument("--base-url", default=OPENCODE_GO_BASE_URL)
    refresh_parser.add_argument("--prefer", choices=["chat", "messages"], default="chat")
    refresh_parser.add_argument("--timeout", type=float, default=30.0)
    sub.add_parser("migrate", help="Apply SQL migrations from the migrations/ directory.")
    worker_parser = sub.add_parser("worker", help="Run background worker tasks.")
    worker_sub = worker_parser.add_subparsers(dest="worker_command", required=True)
    worker_run_parser = worker_sub.add_parser("run", help="Run queued worker jobs.")
    worker_run_parser.add_argument("--once", action="store_true", help="Run one worker cycle and exit.")
    worker_enqueue_parser = worker_sub.add_parser("enqueue", help="Queue a worker job.")
    worker_enqueue_parser.add_argument("job_type")
    worker_enqueue_parser.add_argument("--payload", default="{}", help="JSON payload for the queued job.")
    doctor_parser = sub.add_parser("doctor", help="Read-only local setup diagnostics and specialized reports.")
    doctor_sub = doctor_parser.add_subparsers(dest="doctor_command")
    doctor_sub.add_parser("setup", help="Read-only local setup diagnostics (OK/WARN/FAIL). Default when no subcommand.")
    doctor_sub.add_parser("models", help="List visible and hidden configured models.")
    doctor_sub.add_parser("patch", help="Report Codex Desktop ASAR patch status and app version.")
    doctor_sub.add_parser("catalog", help="Compare generated catalog keys against Desktop schema fixture.")
    doctor_sub.add_parser("subscription", help="Report ChatGPT subscription model catalog cache and slugs.")
    doctor_sub.add_parser("contract", help="Check generated Desktop protocol contract drift.")
    doctor_sub.add_parser("routing", help="Recommend shim vs upstream direct provider per configured slug.")
    test_parser = sub.add_parser("test", help="Run a non-streaming smoke test through the selected model route.")
    test_parser.add_argument("target", help="Model slug, provider, upstream model, or display name.")
    probe_parser = sub.add_parser("probe", help="Validate shim behavior against running daemon.")
    probe_sub = probe_parser.add_subparsers(dest="probe_command", required=True)
    probe_compact_parser = probe_sub.add_parser("compact", help="Probe BYOK /v1/responses/compact output shape.")
    probe_compact_parser.add_argument("--slug", help="BYOK model slug (default: first visible BYOK model).")
    probe_history_parser = probe_sub.add_parser("history", help="Probe previous_response_id expansion after hosted tools.")
    probe_history_parser.add_argument("--slug", help="BYOK model slug (default: first visible BYOK model).")
    probe_stream_parser = probe_sub.add_parser("streaming-history", help="Probe streaming turn + previous_response_id.")
    probe_stream_parser.add_argument("--slug", help="BYOK model slug (default: first visible BYOK model).")
    probe_ws_parser = probe_sub.add_parser("ws-streaming", help="Probe BYOK WebSocket streaming deltas.")
    probe_ws_parser.add_argument("--slug", help="BYOK model slug (default: first visible BYOK model).")
    probe_tools_parser = probe_sub.add_parser("tools", help="Probe mapped tool-loop output items and route metadata.")
    probe_tools_parser.add_argument("--slug", help="BYOK model slug (default: first visible BYOK model).")
    probe_delegate_parser = probe_sub.add_parser(
        "delegate",
        help="Probe Cursor delegate routes emit message-only output with execution_mode=delegate.",
    )
    probe_delegate_parser.add_argument("--slug", help="Cursor model slug (default: first visible cursor route).")
    probe_sub.add_parser("fidelity", help="Offline hosted-tool and compaction translation checks.")
    probe_all_parser = probe_sub.add_parser("all", help="Run offline fidelity plus live probes when daemon/auth allow.")
    probe_all_parser.add_argument("--slug", help="BYOK model slug for live BYOK probes.")
    probe_all_parser.add_argument(
        "--live",
        action="store_true",
        help="Run full live matrix (Tier A + BYOK families) instead of offline-only passthrough skips.",
    )
    probe_sub.add_parser(
        "live-matrix",
        help="Run full live fidelity matrix (Tier A + one BYOK slug per provider family).",
    )
    probe_matrix_parser = probe_sub.add_parser(
        "matrix",
        help="Run staged compatibility matrix (offline gates + live daemon steps when available).",
    )
    probe_matrix_parser.add_argument("--slug", help="BYOK model slug for live daemon steps.")
    probe_matrix_parser.add_argument("--live", action="store_true", help="Include Tier A passthrough live probe.")
    probe_matrix_parser.add_argument("--json", action="store_true", help="Emit JSON report.")
    probe_passthrough_parser = probe_sub.add_parser("passthrough", help="Live Tier A passthrough probe via shim daemon.")
    probe_passthrough_parser.add_argument("--live", action="store_true", help="Run probe (or set CODEX_SHIM_PROBE_PASSTHROUGH=1).")
    probe_passthrough_compact_parser = probe_sub.add_parser(
        "passthrough-compact", help="Live Tier A /v1/responses/compact probe."
    )
    probe_passthrough_compact_parser.add_argument(
        "--live", action="store_true", help="Run probe (or set CODEX_SHIM_PROBE_PASSTHROUGH=1)."
    )
    sub.add_parser("patch-app", help="Patch Codex Desktop sidebar handling for custom shim models.")
    sub.add_parser("patch-auto", help="Patch Codex Desktop only when current bundle is unpatched.")
    sub.add_parser("install-dock-shortcut", help="Create a macOS Dock launcher for one-click shim lifecycle.")
    sub.add_parser("restore-app", help="Restore Codex Desktop app.asar from the pre-patch backup.")
    sub.add_parser("patch-status", help="Inspect the macOS Codex Desktop ASAR patch and backups.")
    configure_parser = sub.add_parser("configure", help="Add or update common provider rows in the model settings file.")
    configure_sub = configure_parser.add_subparsers(dest="configure_provider", required=True)
    cursor_parser = configure_sub.add_parser(
        "cursor",
        help="Configure Cursor Agent (defaults to headless CLI; ACP is experimental opt-in).",
    )
    cursor_parser.add_argument("--transport", choices=["acp", "cli"], default="cli")
    cursor_parser.add_argument("--command", dest="cursor_command")
    cursor_parser.add_argument("--model", default="default[]")
    cursor_parser.add_argument("--mode", default="agent")
    cursor_parser.add_argument("--display-name", default="Cursor Agent Auto")
    zai_parser = configure_sub.add_parser("zai", help="Configure Z.AI GLM-5.1.")
    zai_parser.add_argument("--coding-plan", action="store_true")
    zai_parser.add_argument("--model", default="glm-5.1")
    zai_parser.add_argument("--display-name")
    zai_parser.add_argument("--base-url")
    zai_parser.add_argument("--chat-completions-url")
    zai_parser.add_argument("--api-key")
    zai_parser.add_argument("--api-key-env", default="ZAI_API_KEY")
    zai_parser.add_argument("--api-key-file")
    nim_parser = configure_sub.add_parser("nim", help="Configure NVIDIA NIM through its OpenAI-compatible chat endpoint.")
    nim_parser.add_argument("--model", default="qwen/qwen3-coder-480b-a35b-instruct")
    nim_parser.add_argument("--display-name")
    nim_parser.add_argument("--base-url", default="https://integrate.api.nvidia.com/v1")
    nim_parser.add_argument("--chat-completions-url")
    nim_parser.add_argument("--api-key")
    nim_parser.add_argument("--api-key-env", default="NVIDIA_API_KEY")
    nim_parser.add_argument("--api-key-file")
    vibeproxy_parser = sub.add_parser("import-vibeproxy", help="Import model rows from a VibeProxy /v1/models endpoint.")
    vibeproxy_parser.add_argument("base_url", nargs="?", default="http://127.0.0.1:8318")
    vibeproxy_parser.add_argument("--provider-base-url")
    vibeproxy_parser.add_argument("--provider", default="generic-chat-completion-api")
    vibeproxy_parser.add_argument("--output", type=Path)
    vibeproxy_parser.add_argument("--direct", action="store_true", help="Generate a direct VibeProxy catalog/config instead of shim settings.")
    vibeproxy_parser.add_argument("--direct-catalog", type=Path)
    vibeproxy_parser.add_argument("--direct-config", type=Path)

    config_parser = sub.add_parser("config", help="Import or export codex-shim model settings.")
    config_sub = config_parser.add_subparsers(dest="config_command", required=True)
    export_parser = config_sub.add_parser("export")
    export_parser.add_argument("output", type=Path)
    export_parser.add_argument("--include-secrets", action="store_true")
    import_parser = config_sub.add_parser("import")
    import_parser.add_argument("source", type=Path)

    model_parser = sub.add_parser("model", help="List or set the active shim model in Codex config.")
    model_sub = model_parser.add_subparsers(dest="model_command", required=True)
    model_sub.add_parser("list")
    use_parser = model_sub.add_parser("use")
    use_parser.add_argument("model_slug")

    codex_parser = sub.add_parser("codex", help="Run Codex CLI with opt-in shim config overrides.")
    codex_parser.add_argument("args", nargs=argparse.REMAINDER)

    app_parser = sub.add_parser("app", help="Launch Codex Desktop with opt-in shim config overrides.")
    app_parser.add_argument("-m", "--model", dest="model_slug")
    app_parser.add_argument("path", nargs="?", default=".")
    one_shot_parser = sub.add_parser(
        "one-shot",
        help="Transactional Desktop run: patch/check, start shim, launch Codex, then restore config and stop shim.",
    )
    one_shot_parser.add_argument("-m", "--model", dest="model_slug")
    one_shot_parser.add_argument("path", nargs="?", default=".")
    one_shot_parser.add_argument(
        "--skip-patch",
        action="store_true",
        help="Skip patch-auto preflight on macOS.",
    )
    one_shot_parser.add_argument(
        "--require-patch",
        action="store_true",
        help="Fail if patch-auto cannot patch the Desktop bundle.",
    )
    one_shot_parser.add_argument(
        "--keep-shim-running",
        action="store_true",
        help="Opt out of transactional default and leave shim/config active after Desktop exits.",
    )

    args = parser.parse_args(argv)
    if args.command == "generate":
        generate(args.settings, args.port)
        return 0
    if args.command == "opencode-go":
        if args.opencode_go_command == "refresh":
            return refresh_opencode_go(
                args.settings,
                args.api_key_env,
                args.base_url,
                args.prefer,
                args.timeout,
            )
    if args.command == "list":
        return list_models(args.settings)
    if args.command in {"start", "enable"}:
        generate(args.settings, args.port)
        code = start(args.settings, args.port)
        if code == 0 and args.command == "enable":
            install_codex_config(args.settings, args.port)
            _persist_capture_config_from_env()
        return code
    if args.command in {"stop", "disable"}:
        if args.command == "disable":
            restore_codex_config()
            clear_capture_config()
        return stop()
    if args.command == "repair-config":
        return repair_codex_config(args.path)
    if args.command == "restart":
        stop()
        generate(args.settings, args.port)
        return start(args.settings, args.port)
    if args.command == "status":
        return status(args.port)
    if args.command == "migrate":
        return apply_postgres_migrations(PROJECT_ROOT / "migrations")
    if args.command == "worker":
        worker_args: list[str] = [args.worker_command]
        if args.worker_command == "run" and args.once:
            worker_args.append("--once")
        if args.worker_command == "enqueue":
            worker_args.extend([args.job_type, "--payload", args.payload])
        return worker_main(worker_args)
    if args.command == "doctor":
        cmd = getattr(args, "doctor_command", None) or "setup"
        if cmd == "setup":
            return doctor_setup(args.settings, args.port)
        if cmd == "models":
            return doctor_models(args.settings)
        if cmd == "patch":
            return doctor_patch()
        if cmd == "catalog":
            return doctor_catalog(args.settings)
        if cmd == "subscription":
            return doctor_subscription()
        if cmd == "contract":
            return doctor_contract()
        if cmd == "routing":
            return doctor_routing(args.settings)
        return doctor_setup(args.settings, args.port)
    if args.command == "test":
        return test_provider_route(args.settings, args.target)
    if args.command == "probe":
        if args.probe_command == "compact":
            return probe_compact_route(args.settings, args.port, args.slug)
        if args.probe_command == "history":
            return probe_history_route(args.settings, args.port, args.slug)
        if args.probe_command == "fidelity":
            return probe_fidelity_route()
        if args.probe_command == "streaming-history":
            return probe_streaming_history_route(args.settings, args.port, args.slug)
        if args.probe_command == "ws-streaming":
            return probe_ws_streaming_route(args.settings, args.port, args.slug)
        if args.probe_command == "tools":
            return probe_tools_route(args.settings, args.port, args.slug)
        if args.probe_command == "delegate":
            return probe_delegate_route(args.settings, args.port, args.slug)
        if args.probe_command == "all":
            return probe_all_route(args.settings, args.port, args.slug, live=args.live)
        if args.probe_command == "passthrough":
            return probe_passthrough_route(args.port, live=args.live)
        if args.probe_command == "passthrough-compact":
            return probe_passthrough_compact_route(args.port, live=args.live)
        if args.probe_command == "live-matrix":
            return probe_live_matrix_route(args.settings, args.port)
        if args.probe_command == "matrix":
            return probe_matrix_route(args.settings, args.port, args.slug, live=args.live, as_json=args.json)
    if args.command == "configure":
        return configure(args.settings, args)
    if args.command == "patch-app":
        return patch_codex_app()
    if args.command == "patch-auto":
        return patch_codex_app_auto()
    if args.command == "install-dock-shortcut":
        return install_dock_shortcut()
    if args.command == "restore-app":
        return restore_codex_app_bundle()
    if args.command == "patch-status":
        return patch_status()
    if args.command == "import-vibeproxy":
        return import_vibeproxy_models(
            args.settings,
            args.base_url,
            provider_base_url=args.provider_base_url,
            provider=args.provider,
            output_path=args.output,
            direct=args.direct,
            direct_catalog_path=args.direct_catalog,
            direct_config_path=args.direct_config,
        )
    if args.command == "config":
        if args.config_command == "export":
            return export_config(args.settings, args.output, redact=not args.include_secrets)
        if args.config_command == "import":
            return import_config(args.settings, args.source)
    if args.command == "model":
        if args.model_command == "list":
            return list_models(args.settings)
        if args.model_command == "use":
            generate(args.settings, args.port)
            ensure_started(args.settings, args.port)
            install_codex_config(args.settings, args.port, args.model_slug)
            print(f"Active Codex shim model: {args.model_slug}")
            return 0
    if args.command == "codex":
        generate(args.settings, args.port)
        ensure_started(args.settings, args.port)
        exec_codex(args.settings, args.port, args.args)
        return 0
    if args.command == "app":
        generate(args.settings, args.port)
        ensure_started(args.settings, args.port)
        install_codex_config(args.settings, args.port, args.model_slug)
        exec_codex_app(args.settings, args.port, args.path)
        return 0
    if args.command == "one-shot":
        return one_shot(
            args.settings,
            args.port,
            args.path,
            args.model_slug,
            skip_patch=bool(args.skip_patch),
            require_patch=bool(args.require_patch),
            keep_shim_running=bool(args.keep_shim_running),
        )
    return 2


def _load_models(settings_path: Path):
    expanded = Path(settings_path).expanduser()
    try:
        return ModelSettings(expanded).load()
    except FileNotFoundError as exc:
        raise SystemExit(
            f"Settings file not found: {expanded}\n"
            "Create ~/.codex-shim/models.json, or pass --settings /path/to/models.json."
        ) from exc
    except json.JSONDecodeError as exc:
        raise SystemExit(f"Settings file is not valid JSON: {expanded}: {exc}") from exc


def _desktop_models(settings_path: Path):
    return ModelSettings(settings_path).desktop_models()


def _active_router(models, settings_path: Path):
    config = router_module.load_router_config(Path(settings_path).expanduser())
    if config and router_module.router_is_active(config, available_model_slugs(models)):
        return config
    return None


def generate(settings_path: Path, port: int) -> None:
    from ..routing import refresh_subscription_catalog

    models = _load_models(settings_path)
    snapshot = refresh_subscription_catalog()
    desktop_models = _desktop_models(settings_path)
    try:
        default_model_slug(desktop_models, include_chatgpt=False)
    except ValueError as exc:
        raise SystemExit(str(exc)) from exc
    router_config = router_module.load_router_config(Path(settings_path).expanduser())
    write_catalog(models, CATALOG_PATH, snapshot=snapshot, router_config=router_config)
    write_config(desktop_models, CONFIG_PATH, CATALOG_PATH, port)
    hidden_count = len(models) - len([model for model in models if model.visible])
    subscription_count = len([model for model in desktop_models if model.is_chatgpt])
    byok_count = len([model for model in desktop_models if not model.is_chatgpt])
    print(f"Generated {len(desktop_models)} Desktop model entries ({subscription_count} subscription + {byok_count} BYOK):")
    active_config = _active_router(models, settings_path)
    if active_config is not None:
        print(f"  auto router: {active_config.slug} ({active_config.display_name})")
    print(f"  catalog: {CATALOG_PATH}")
    print(f"  config:  {CONFIG_PATH}")
    if snapshot.status == "error" and snapshot.error:
        print(f"  subscription catalog: fallback ({snapshot.error})", file=sys.stderr)
    if hidden_count:
        print(f"Hidden {hidden_count} unconfigured or disabled model entries. Run `codex-shim doctor models` for details.")
    print("No files under ~/.codex were modified.")


def refresh_opencode_go(settings_path: Path, api_key_env: str, base_url: str, prefer: str, timeout: float) -> int:
    print(f"Refreshing OpenCode Go models from {base_url}...")
    try:
        result = refresh_opencode_go_settings(
            settings_path,
            api_key_env=api_key_env,
            base_url=base_url,
            prefer=prefer,
            timeout=timeout,
        )
    except RuntimeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    print(f"Refreshed {len(result.models)} OpenCode Go models into {result.settings_path}.")
    if result.skipped:
        print(f"Skipped {len(result.skipped)} models with no working probed endpoint:")
        for model_id, chat_status, messages_status in result.skipped:
            print(f"  {model_id}: chat={chat_status}, messages={messages_status}")
    for row in result.models:
        print(f"  {row['slug']}  ->  {row['model']} ({row['provider']}, {row['opencode_go_endpoint']})")
    return 0


def install_codex_config(settings_path: Path, port: int, model_slug: str | None = None) -> None:
    models = _load_models(settings_path)
    router_config = _active_router(models, settings_path)
    default_slug = _resolve_model_slug(models, model_slug, router_config)
    CODEX_CONFIG_PATH.parent.mkdir(parents=True, exist_ok=True)
    RUNTIME_DIR.mkdir(parents=True, exist_ok=True)
    original = CODEX_CONFIG_PATH.read_text() if CODEX_CONFIG_PATH.exists() else ""
    cleaned = _remove_managed_config(original)
    current_top_level = _extract_top_level_key_lines(cleaned, MANAGED_TOP_LEVEL_KEYS)
    if current_top_level:
        previous_top_level = current_top_level
    else:
        previous_top_level = _managed_previous_top_level(original)
    if not previous_top_level and CODEX_CONFIG_BACKUP_PATH.exists():
        previous_top_level = _extract_top_level_key_lines(CODEX_CONFIG_BACKUP_PATH.read_text(), MANAGED_TOP_LEVEL_KEYS)
    cleaned = _remove_top_level_keys(cleaned, MANAGED_TOP_LEVEL_KEYS)
    cleaned = remove_toml_section(cleaned, f"model_providers.{PROVIDER_NAME}")
    top_block, provider_block = _managed_config_blocks(default_slug, port, previous_top_level)
    write_codex_config(top_block + "\n" + cleaned.lstrip() + "\n" + provider_block, CODEX_CONFIG_PATH)
    print(f"Installed shim config into {CODEX_CONFIG_PATH}.")


def list_models(settings_path: Path) -> int:
    models = _load_models(settings_path)
    rows: list[tuple[str, str, str, str]] = []
    router_config = _active_router(models, settings_path)
    if router_config is not None:
        rows.append((router_config.slug, router_config.display_name, "per-task pick", "auto"))
    if chatgpt_passthrough_available():
        for slug, display_name in chatgpt_passthrough_display_names().items():
            rows.append((slug, display_name, slug, "chatgpt"))
    if cursor_passthrough_available():
        for slug, display_name in cursor_passthrough_display_names().items():
            rows.append((slug, display_name, slug, "cursor"))
    rows.extend((model.slug, model.display_name, model.model, model.provider) for model in usable_byok_models(models))
    if not rows:
        print(
            "No models available. Create ~/.codex-shim/models.json, pass --settings /path/to/models.json, "
            "or run `codex login` so ~/.codex/auth.json grants the gpt-5.5 passthrough.",
            file=sys.stderr,
        )
        return 1
    width = max(len(row[0]) for row in rows)
    for slug, display_name, model, provider in rows:
        print(f"{slug:<{width}}  {display_name}  ->  {model} ({provider})", flush=True)
    return 0


def _upstream_supports_responses_api(base_url: str) -> bool:
    from urllib.error import HTTPError, URLError
    from urllib.request import Request, urlopen

    root = base_url.rstrip("/")
    candidates = [f"{root}/responses", f"{root}/v1/responses"]
    for url in candidates:
        try:
            req = Request(url, method="OPTIONS")
            with urlopen(req, timeout=5) as resp:
                if resp.status < 500:
                    return True
        except HTTPError as exc:
            if exc.code in {200, 204, 401, 403, 405}:
                return True
        except URLError:
            continue
    return False


def import_vibeproxy_models(
    settings_path: Path,
    base_url: str,
    *,
    provider_base_url: str | None = None,
    provider: str = "generic-chat-completion-api",
    output_path: Path | None = None,
    direct: bool = False,
    direct_catalog_path: Path | None = None,
    direct_config_path: Path | None = None,
) -> int:
    rows = fetch_vibeproxy_model_rows(base_url, provider_base_url=provider_base_url, provider=provider)
    direct_base_url = (provider_base_url or f"{base_url.rstrip('/')}/v1").rstrip("/")
    if not direct and _upstream_supports_responses_api(direct_base_url):
        print(f"Detected Responses-compatible endpoint at {direct_base_url}; use --direct for upstream-native routing.")
    if direct:
        models = _vibeproxy_direct_models(rows, direct_base_url)
        catalog_path = Path(direct_catalog_path or CATALOG_PATH).expanduser()
        config_path = Path(direct_config_path or CONFIG_PATH).expanduser()
        from ..routing import SubscriptionCatalogSnapshot

        write_catalog(
            models,
            catalog_path,
            snapshot=SubscriptionCatalogSnapshot((), "unavailable"),
        )
        write_direct_responses_config(models, config_path, catalog_path, direct_base_url)
        print(f"Generated {len(models)} direct VibeProxy model entries:")
        print(f"  catalog: {catalog_path}")
        print(f"  config:  {config_path}")
        print("No shim server is required for this mode.")
        return 0
    output = Path(output_path or settings_path).expanduser()
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps({"models": rows}, indent=2) + "\n")
    print(f"Imported {len(rows)} VibeProxy model entries into {output}.")
    return 0


def _vibeproxy_direct_models(rows: list[dict], base_url: str) -> list[ShimModel]:
    models: list[ShimModel] = []
    used: set[str] = set()
    for index, row in enumerate(rows):
        model_id = str(row.get("model") or "").strip()
        if not model_id:
            continue
        slug = model_id
        if slug in used:
            slug = f"{model_id}-{index}"
        used.add(slug)
        models.append(
            ShimModel(
                slug=slug,
                model=model_id,
                display_name=str(row.get("display_name") or row.get("displayName") or model_id),
                provider="vibeproxy-direct",
                base_url=base_url,
                index=int(row.get("index", index)),
                max_context_limit=_int_or_none(row.get("max_context_limit") or row.get("maxContextLimit")),
            )
        )
    return models


def _int_or_none(value) -> int | None:
    if value in (None, ""):
        return None
    try:
        return int(value)
    except (TypeError, ValueError):
        return None


def configure(settings_path: Path, args: argparse.Namespace) -> int:
    if args.configure_provider == "cursor":
        provider = "cursor-acp" if args.transport == "acp" else "cursor-agent"
        cursor_model = "auto" if args.transport == "cli" and args.model == "default[]" else args.model
        row = {
            "id": "cursor-auto",
            "model": cursor_model,
            "display_name": args.display_name,
            "provider": provider,
            "command": args.cursor_command or ("cursor-agent" if args.transport == "acp" else "cursor"),
            "enabled": True,
        }
        if args.transport == "acp":
            row["mode"] = args.mode
            row["cursor_model"] = cursor_model
            print("warning: ACP transport is experimental and may be subscription-gated; prefer --transport cli for default use.")
        else:
            row["args"] = ["agent", "--print", "--trust", "--yolo", "--model", cursor_model]
        return _write_configured_row(settings_path, row)
    if args.configure_provider == "zai":
        provider = "zai-coding-plan" if args.coding_plan else "zai"
        display_name = args.display_name or ("Z.AI GLM-5.1 Coding Plan" if args.coding_plan else "Z.AI GLM-5.1")
        row = {
            "id": "zai-glm-5-1-coding-plan" if args.coding_plan else "zai-glm-5-1",
            "model": args.model,
            "display_name": display_name,
            "provider": provider,
            "enabled": True,
        }
        _add_auth_fields(row, args)
        if args.base_url:
            row["base_url"] = args.base_url
        if args.chat_completions_url:
            row["chat_completions_url"] = args.chat_completions_url
        return _write_configured_row(settings_path, row)
    if args.configure_provider == "nim":
        row = {
            "id": _slug_for_configured_row("nim", args.model),
            "model": args.model,
            "display_name": args.display_name or _display_name_from_model(args.model, suffix="NVIDIA NIM"),
            "provider": "nvidia-nim",
            "base_url": args.base_url,
            "enabled": True,
        }
        _add_auth_fields(row, args)
        if args.chat_completions_url:
            row["chat_completions_url"] = args.chat_completions_url
        return _write_configured_row(settings_path, row)
    raise SystemExit(f"Unsupported configure provider: {args.configure_provider}")


def doctor_patch() -> int:
    app_path = Path("/Applications/Codex.app")
    version = "unknown"
    info_plist = app_path / "Contents/Info.plist"
    if info_plist.exists():
        data = plistlib.loads(info_plist.read_bytes())
        version = str(data.get("CFBundleShortVersionString") or data.get("CFBundleVersion") or "unknown")
    print(f"Codex Desktop: {app_path} (version {version})")
    if sys.platform != "darwin":
        print("patch-app is macOS-only.")
        return 1
    if not app_path.exists():
        print("Codex.app not found.")
        return 1
    workdir = _extract_app_asar_workdir(app_path)
    if workdir is None:
        print("Could not inspect app.asar bundles.")
        return 1
    try:
        inspection = _inspect_codex_desktop_bundles(workdir, version=version)
        ok = True
        for report in inspection:
            path_note = f" ({report['path']})" if report.get("path") else ""
            print(f"  {report['label']}: {report['status']}{path_note}")
            if report["status"] in {"missing", "mixed"} and report.get("optional", "false") != "true":
                ok = False
        return 0 if ok else 1
    finally:
        import shutil

        shutil.rmtree(workdir, ignore_errors=True)


def doctor_contract() -> int:
    scripts = (
        PROJECT_ROOT / "scripts" / "generate_desktop_contract.py",
        PROJECT_ROOT / "scripts" / "generate_desktop_app_server_contract.py",
    )
    exit_code = 0
    for script in scripts:
        if not script.exists():
            print(f"Desktop contract generator not found: {script}", file=sys.stderr)
            exit_code = 1
            continue
        result = subprocess.run([sys.executable, str(script), "--check"], cwd=PROJECT_ROOT)
        if result.returncode != 0:
            exit_code = result.returncode
    return exit_code


DESKTOP_CATALOG_KEYS = {
    "slug",
    "display_name",
    "description",
    "context_window",
    "max_context_window",
    "auto_compact_token_limit",
    "truncation_policy",
    "default_reasoning_level",
    "supported_reasoning_levels",
    "default_reasoning_summary",
    "reasoning_summary_format",
    "supports_reasoning_summaries",
    "default_verbosity",
    "support_verbosity",
    "apply_patch_tool_type",
    "web_search_tool_type",
    "supports_search_tool",
    "supports_parallel_tool_calls",
    "experimental_supported_tools",
    "input_modalities",
    "supports_image_detail_original",
    "shell_type",
    "visibility",
    "minimal_client_version",
    "supported_in_api",
    "availability_nux",
    "upgrade",
    "priority",
    "prefer_websockets",
    "available_in_plans",
    "service_tiers",
    "additional_speed_tiers",
    "default_service_tier",
    "effective_context_window_percent",
    "base_instructions",
    "model_messages",
}


def doctor_subscription() -> int:
    from ..routing import refresh_subscription_catalog
    from ..routing import subscription_catalog as _subscription_module

    snapshot = refresh_subscription_catalog()
    print(f"status: {snapshot.status}")
    if snapshot.error:
        print(f"error: {snapshot.error}")
    if snapshot.fetched_at is not None:
        print(f"cache_age_s: {snapshot.age_s}")
    print(f"cache_path: {_subscription_module.CACHE_PATH}")
    print(f"model_count: {len(snapshot.models)}")
    for slug in snapshot.slugs:
        print(f"  - {slug}")
    return 0 if snapshot.status in {"loaded", "cached"} or snapshot.models else 1


def doctor_catalog(settings_path: Path) -> int:
    models = _load_models(settings_path)
    visible = [model for model in models if model.visible]
    if not visible:
        print("No visible models to inspect.")
        return 1
    sample = catalog_entry(visible[0])
    missing = sorted(DESKTOP_CATALOG_KEYS - set(sample.keys()))
    extra = sorted(set(sample.keys()) - DESKTOP_CATALOG_KEYS)
    if missing:
        print("Missing Desktop catalog keys:")
        for key in missing:
            print(f"  - {key}")
    else:
        print("Catalog entry includes all Desktop schema keys.")
    if extra:
        print("Extra shim-only catalog keys:")
        for key in extra:
            print(f"  + {key}")
    return 0 if not missing else 1


def probe_fidelity_route() -> int:
    from ..verification import CompactProbeError, probe_fidelity

    try:
        return probe_fidelity()
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_history_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_history

    try:
        return probe_history(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def probe_streaming_history_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_streaming_history

    try:
        return probe_streaming_history(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def probe_ws_streaming_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_ws_streaming

    try:
        return probe_ws_streaming(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def probe_tools_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_tools

    try:
        return probe_tools(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_delegate_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_delegate

    try:
        return probe_delegate(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def probe_all_route(settings_path: Path, port: int, slug: str | None, *, live: bool) -> int:
    from ..verification import CompactProbeError, probe_all

    try:
        return probe_all(Path(settings_path).expanduser(), port, slug, live=live)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def probe_passthrough_route(port: int, *, live: bool) -> int:
    from ..verification import CompactProbeError, probe_passthrough

    try:
        return probe_passthrough(port, live=live)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_passthrough_compact_route(port: int, *, live: bool) -> int:
    from ..verification import CompactProbeError, probe_passthrough_compact

    try:
        return probe_passthrough_compact(port, live=live)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_live_matrix_route(settings_path: Path, port: int) -> int:
    from ..verification import CompactProbeError, probe_live_matrix

    try:
        return probe_live_matrix(Path(settings_path).expanduser(), port)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_matrix_route(
    settings_path: Path,
    port: int,
    slug: str | None,
    *,
    live: bool,
    as_json: bool,
) -> int:
    from ..verification import CompactProbeError, probe_matrix

    try:
        return probe_matrix(Path(settings_path).expanduser(), port, slug, live=live, as_json=as_json)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def _routing_recommendation(model: ShimModel) -> str:
    if model.is_chatgpt:
        return "use_shim (Tier A passthrough)"
    if model.is_cursor_cli or model.is_cursor_acp or model.is_cursor_agent:
        return "use_shim (Cursor delegate/native)"
    if model.is_anthropic or model.is_openai_chat:
        return "use_shim (chat/Anthropic translation required)"
    return "use_shim"


def doctor_routing(settings_path: Path) -> int:
    models = _desktop_models(settings_path)
    if not models:
        print("No visible models configured.")
        return 1
    print("Routing recommendations:")
    width = max(len(model.slug) for model in models)
    for model in models:
        print(f"  {model.slug:<{width}}  {_routing_recommendation(model)}")
    print("\nUpstream built-in providers (Ollama, LM Studio, Bedrock) do not need this shim when they speak Responses natively.")
    print("Use shim when the backend is chat-completions, Anthropic Messages, or Cursor subprocess.")
    return 0


@dataclass(frozen=True)
class DoctorCheck:
    section: str
    status: str  # OK | WARN | FAIL | INFO
    message: str
    detail: str = ""


def doctor_setup(settings_path: Path, port: int) -> int:
    """Print a read-only diagnostics report for the local codex-shim setup."""
    expanded = Path(settings_path).expanduser()
    checks: list[DoctorCheck] = []
    checks.extend(_doctor_python())
    checks.extend(_doctor_dependencies())
    checks.extend(_doctor_codex_cli())
    checks.extend(_doctor_settings(expanded))
    checks.extend(_doctor_runtime_files())
    checks.extend(_doctor_daemon(port))
    checks.extend(_doctor_chatgpt())
    checks.extend(_doctor_cursor())
    checks.extend(_doctor_proxy_env())
    checks.extend(_doctor_codex_config())
    _print_doctor_report(checks)
    return 1 if any(check.status == "FAIL" for check in checks) else 0


def _doctor_python() -> list[DoctorCheck]:
    version = f"{sys.version_info.major}.{sys.version_info.minor}.{sys.version_info.micro}"
    status = "OK" if sys.version_info >= (3, 11) else "FAIL"
    detail = "" if status == "OK" else "codex-shim requires Python 3.11+"
    return [
        DoctorCheck("Python", status, f"version: {version}", detail),
        DoctorCheck("Python", "OK", f"executable: {sys.executable}"),
    ]


def _doctor_dependencies() -> list[DoctorCheck]:
    if importlib.util.find_spec("aiohttp") is None:
        return [
            DoctorCheck(
                "Dependencies",
                "FAIL",
                "aiohttp is not importable",
                "Try: python3 -m pip install -e .",
            )
        ]
    return [DoctorCheck("Dependencies", "OK", "aiohttp importable")]


def _doctor_codex_cli() -> list[DoctorCheck]:
    found = shutil.which("codex")
    if not found:
        return [
            DoctorCheck(
                "Codex CLI",
                "WARN",
                "codex not found on PATH",
                "Install and authenticate Codex before using codex-shim app/codex flows.",
            )
        ]
    checks = [DoctorCheck("Codex CLI", "OK", f"found: {found}")]
    try:
        result = subprocess.run([found, "--version"], capture_output=True, text=True, timeout=5)
    except (OSError, subprocess.TimeoutExpired) as exc:
        checks.append(DoctorCheck("Codex CLI", "WARN", "could not run codex --version", str(exc)))
        return checks
    output = (result.stdout or result.stderr).strip().splitlines()
    version = output[0].strip() if output else "<no output>"
    if len(version) > 200:
        version = version[:197] + "..."
    if result.returncode == 0:
        checks.append(DoctorCheck("Codex CLI", "OK", f"version: {version}"))
    else:
        checks.append(DoctorCheck("Codex CLI", "WARN", "codex --version failed", version))
    return checks


def _doctor_settings(settings_path: Path) -> list[DoctorCheck]:
    section = "Settings"
    path = settings_path.expanduser()
    if not path.exists():
        detail = "Create ~/.codex-shim/models.json or run codex login for ChatGPT passthrough-only use."
        return [DoctorCheck(section, "WARN", f"settings file not found: {path}", detail)]
    checks = [DoctorCheck(section, "OK", f"path: {path}")]
    try:
        models = _load_models(path)
    except SystemExit as exc:
        message = str(exc)
        if "not valid JSON" in message or "invalid JSON" in message:
            return [DoctorCheck(section, "FAIL", f"invalid JSON: {path}", message)]
        return [DoctorCheck(section, "FAIL", f"could not load settings: {path}", message)]
    except Exception as exc:
        return [DoctorCheck(section, "FAIL", f"could not load settings: {path}", str(exc))]

    usable = usable_byok_models(models)
    missing_count = len(models) - len(usable)
    checks.append(DoctorCheck(section, "OK", f"configured models: {len(models)}"))
    checks.append(DoctorCheck(section, "OK", f"usable BYOK models: {len(usable)}"))
    if missing_count:
        checks.append(DoctorCheck(section, "WARN", f"models missing API keys: {missing_count}"))
    else:
        checks.append(DoctorCheck(section, "OK", "models missing API keys: 0"))
    providers = Counter(model.provider for model in models)
    provider_text = ", ".join(f"{provider}={count}" for provider, count in sorted(providers.items())) or "none"
    checks.append(DoctorCheck(section, "INFO", f"providers: {provider_text}"))

    router_config = router_module.load_router_config(path)
    if router_config is None:
        checks.append(DoctorCheck(section, "INFO", "auto router configured: false"))
    else:
        active = _active_router(models, path)
        if active is not None:
            checks.append(DoctorCheck(section, "OK", f"auto router active: {active.slug}"))
        elif router_config.effective_enabled:
            checks.append(
                DoctorCheck(
                    section,
                    "WARN",
                    f"auto router configured but inactive: {router_config.slug}",
                    "Ensure at least one router candidate matches a usable model slug.",
                )
            )
        else:
            checks.append(DoctorCheck(section, "INFO", f"auto router configured but disabled: {router_config.slug}"))
    return checks


def _doctor_runtime_files() -> list[DoctorCheck]:
    checks: list[DoctorCheck] = []
    if CATALOG_PATH.exists():
        checks.append(DoctorCheck("Runtime files", "OK", f"catalog: {CATALOG_PATH}"))
        try:
            data = json.loads(CATALOG_PATH.read_text())
            models = data.get("models", []) if isinstance(data, dict) else []
            count = len(models) if isinstance(models, list) else 0
            checks.append(DoctorCheck("Runtime files", "OK", f"catalog models: {count}"))
        except (OSError, json.JSONDecodeError) as exc:
            checks.append(
                DoctorCheck("Runtime files", "WARN", f"catalog JSON is not readable: {CATALOG_PATH}", str(exc))
            )
    else:
        checks.append(DoctorCheck("Runtime files", "INFO", f"catalog missing: {CATALOG_PATH}"))
    if CONFIG_PATH.exists():
        checks.append(DoctorCheck("Runtime files", "OK", f"config: {CONFIG_PATH}"))
    else:
        checks.append(DoctorCheck("Runtime files", "INFO", f"config missing: {CONFIG_PATH}"))
    if PID_PATH.exists():
        checks.append(DoctorCheck("Runtime files", "INFO", f"pid file: {PID_PATH}"))
    else:
        checks.append(DoctorCheck("Runtime files", "INFO", f"pid file missing: {PID_PATH}"))
    if LOG_PATH.exists():
        checks.append(DoctorCheck("Runtime files", "INFO", f"log file: {LOG_PATH}"))
    else:
        checks.append(DoctorCheck("Runtime files", "INFO", f"log file missing: {LOG_PATH}"))
    return checks


def _doctor_daemon(port: int) -> list[DoctorCheck]:
    checks = [DoctorCheck("Shim daemon", "INFO", f"health URL: http://{DEFAULT_HOST}:{port}/health")]
    pid = _read_pid()
    if pid is None:
        checks.append(DoctorCheck("Shim daemon", "INFO", f"pid file missing or unreadable: {PID_PATH}"))
    elif _pid_running(pid):
        checks.append(DoctorCheck("Shim daemon", "OK", f"pid {pid} is running"))
    else:
        checks.append(DoctorCheck("Shim daemon", "WARN", f"pid {pid} is not running"))

    health = _health(port)
    if health is None:
        checks.append(DoctorCheck("Shim daemon", "WARN", "health endpoint unavailable"))
        return checks
    model_count = _health_model_count(health.get("models"))
    if health.get("ok") is True:
        checks.append(DoctorCheck("Shim daemon", "OK", f"health ok: {model_count} models"))
    else:
        checks.append(DoctorCheck("Shim daemon", "WARN", f"health not ok: {model_count} models"))
    for key in (
        "chatgpt_passthrough",
        "cursor_passthrough",
        "auto_router",
        "subscription_catalog_status",
        "subscription_model_count",
    ):
        if key in health:
            value = health.get(key)
            if key in {"subscription_model_count", "subscription_catalog_status"}:
                checks.append(DoctorCheck("Shim daemon", "INFO", f"{key}: {value}"))
            else:
                checks.append(DoctorCheck("Shim daemon", "INFO", f"{key}: {_bool_text(value)}"))
    return checks


def _health_model_count(value) -> int:
    if isinstance(value, int):
        return value
    if isinstance(value, list):
        return len(value)
    return 0


def _doctor_chatgpt() -> list[DoctorCheck]:
    if _env_flag("CODEX_SHIM_DISABLE_CHATGPT"):
        return [DoctorCheck("ChatGPT passthrough", "INFO", "disabled via CODEX_SHIM_DISABLE_CHATGPT")]
    auth_path = Path(DEFAULT_CODEX_AUTH).expanduser()
    if chatgpt_passthrough_available():
        return [DoctorCheck("ChatGPT passthrough", "OK", f"available via {auth_path}")]
    if auth_path.exists():
        detail = "Run `codex login` again if you want ChatGPT/Codex passthrough."
    else:
        detail = "Run `codex login` if you want ChatGPT/Codex passthrough."
    return [DoctorCheck("ChatGPT passthrough", "WARN", "unavailable", detail)]


def _doctor_cursor() -> list[DoctorCheck]:
    if _env_flag("CODEX_SHIM_DISABLE_CURSOR"):
        return [DoctorCheck("Cursor passthrough", "INFO", "disabled via CODEX_SHIM_DISABLE_CURSOR")]
    bin_override = os.environ.get("CURSOR_AGENT_BIN", "").strip()
    agent_bin = bin_override or shutil.which("cursor-agent")
    checks: list[DoctorCheck] = []
    if agent_bin:
        checks.append(DoctorCheck("Cursor passthrough", "INFO", f"cursor-agent: {agent_bin}"))
    else:
        checks.append(DoctorCheck("Cursor passthrough", "WARN", "cursor-agent not found on PATH"))
    if cursor_passthrough_available():
        checks.append(DoctorCheck("Cursor passthrough", "OK", "cursor-agent logged in"))
        for slug in sorted(cursor_passthrough_display_names()):
            checks.append(DoctorCheck("Cursor passthrough", "INFO", f"exposed model: {slug}"))
    else:
        checks.append(
            DoctorCheck(
                "Cursor passthrough",
                "WARN",
                "unavailable",
                "Run `cursor-agent login` if you want Cursor passthrough.",
            )
        )
    return checks


def _doctor_proxy_env() -> list[DoctorCheck]:
    required = {"127.0.0.1", "localhost", "::1"}
    values: set[str] = set()
    for key in ("NO_PROXY", "no_proxy"):
        raw = os.environ.get(key, "")
        for part in raw.split(","):
            value = part.strip().lower()
            if value:
                values.add(value)
    if "*" in values or required <= values:
        return [DoctorCheck("Proxy", "OK", "loopback hosts covered by NO_PROXY/no_proxy")]
    return [
        DoctorCheck(
            "Proxy",
            "WARN",
            "NO_PROXY/no_proxy does not include all loopback hosts",
            "Recommended: 127.0.0.1,localhost,::1",
        )
    ]


def _doctor_codex_config() -> list[DoctorCheck]:
    path = Path(CODEX_CONFIG_PATH).expanduser()
    if not path.exists():
        return [
            DoctorCheck(
                "Codex config",
                "INFO",
                "shim provider is not currently installed",
                "Run `codex-shim app .` or `codex-shim enable` to wire Codex to the shim.",
            )
        ]
    checks = [DoctorCheck("Codex config", "OK", f"config exists: {path}")]
    try:
        text = path.read_text()
    except OSError as exc:
        return [DoctorCheck("Codex config", "WARN", f"could not read config: {path}", str(exc))]
    provider_configured = (
        f'model_provider = "{PROVIDER_NAME}"' in text or f"[model_providers.{PROVIDER_NAME}]" in text
    )
    if provider_configured:
        checks.append(DoctorCheck("Codex config", "OK", "shim provider configured"))
    else:
        checks.append(
            DoctorCheck(
                "Codex config",
                "INFO",
                "shim provider is not currently installed",
                "Run `codex-shim app .` or `codex-shim enable` to wire Codex to the shim.",
            )
        )
    current = _current_managed_model()
    if current:
        checks.append(DoctorCheck("Codex config", "OK", f"active shim model: {current}"))
    else:
        checks.append(DoctorCheck("Codex config", "INFO", "active shim model: none"))
    return checks


def _print_doctor_report(checks: list[DoctorCheck]) -> None:
    current_section = None
    for check in checks:
        if check.section != current_section:
            if current_section is not None:
                print()
            print(check.section)
            current_section = check.section
        print(f"  {check.status:<5} {check.message}")
        if check.detail:
            for line in check.detail.splitlines():
                print(f"        {line}")
    counts = Counter(check.status for check in checks)
    summary_status = "FAIL" if counts["FAIL"] else "OK"
    print()
    print("Summary")
    print(
        f"  {summary_status:<5} "
        f"{counts['OK']} ok, {counts['WARN']} warn, {counts['FAIL']} fail, {counts['INFO']} info"
    )


def _env_flag(name: str) -> bool:
    return os.environ.get(name, "").strip().lower() in {"1", "true", "yes", "on"}


def _bool_text(value) -> str:
    return "true" if bool(value) else "false"


def doctor_models(settings_path: Path) -> int:
    from ..capabilities import execution_mode, route_capabilities
    from ..sessions import default_store_path, store_scope

    models = _load_models(settings_path)
    desktop_models = _desktop_models(settings_path)
    hidden = [model for model in models if not model.visible]
    print(f"WebSockets (client): {'enabled' if websockets_enabled() else 'disabled'} (CODEX_SHIM_ENABLE_WEBSOCKETS=0 to disable)")
    print(f"Response store: {default_store_path()} (scope={store_scope()})")
    if any(model.is_chatgpt for model in desktop_models):
        print("ChatGPT passthrough: visible (gpt-5.5)")
    else:
        print("ChatGPT passthrough: hidden (missing usable ~/.codex/auth.json tokens.access_token)")
    if desktop_models:
        print("\nVisible configured models:")
        width = max(len(model.slug) for model in desktop_models)
        for model in desktop_models:
            caps = route_capabilities(model)
            mode = execution_mode(model)
            tool_summary = ", ".join(
                f"{name}={getattr(caps, name)}"
                for name in ("local_shell", "web_search", "tool_search", "image_generation", "mcp_tools")
            )
            extra_note = ""
            if model.extra_body_params:
                extra_note = f"; extra_body_params: {len(model.extra_body_params)} key(s)"
            unsupported = [
                name
                for name, level in (
                    ("image_generation", caps.image_generation),
                    ("web_search", caps.web_search),
                    ("tool_search", caps.tool_search),
                    ("mcp_tools", caps.mcp_tools),
                )
                if level == "unsupported"
            ]
            unsupported_note = f"; Desktop-unsupported: {', '.join(unsupported)}" if unsupported else ""
            print(
                f"  {model.slug:<{width}}  {model.display_name} -> {model.model} "
                f"({model.provider}, {model.transport}, {mode}); tools: {tool_summary}{extra_note}{unsupported_note}"
            )
    else:
        print("\nVisible configured models: none")
    if hidden:
        print("\nHidden model entries:")
        width = max(len(model.slug) for model in hidden)
        for model in hidden:
            print(f"  {model.slug:<{width}}  {model.display_name} ({model.provider}): {model.unavailable_reason}")
    return 0 if desktop_models else 1


def test_provider_route(settings_path: Path, target: str) -> int:
    from ..verification import CompactProbeError, probe_fidelity, resolve_smoke_target, run_provider_smoke

    try:
        probe_fidelity()
    except CompactProbeError as exc:
        print(f"Fidelity check failed: {exc}", file=sys.stderr)
        return 1

    try:
        resolution = resolve_smoke_target(Path(settings_path).expanduser(), target)
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1
    if resolution.error:
        print(resolution.error, file=sys.stderr)
        if resolution.matches:
            for model in resolution.matches:
                state = "visible" if model.visible else f"hidden ({model.unavailable_reason})"
                print(f"  {model.slug}: {state} -> {model.model} ({model.provider})", file=sys.stderr)
        return 1
    route = resolution.route
    if route is None:
        print(f"unknown target: {target}", file=sys.stderr)
        return 1
    state = "visible" if route.visible else f"hidden ({route.unavailable_reason})"
    print(f"{route.slug}: {state} -> {route.model} ({route.provider}, {route.transport})")
    result = asyncio.run(run_provider_smoke(route))
    stream_note = "non-streaming"
    if result.ok:
        print(f"Smoke test passed ({stream_note}): {result.message}")
        return 0
    print(f"Smoke test failed ({result.status}, {stream_note}): {result.message}", file=sys.stderr)
    return 1


def probe_compact_route(settings_path: Path, port: int, slug: str | None) -> int:
    from ..verification import CompactProbeError, probe_compact

    try:
        return probe_compact(Path(settings_path).expanduser(), port, slug)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1
    except FileNotFoundError as exc:
        print(f"Settings file not found: {exc.filename or exc}", file=sys.stderr)
        return 1
    except json.JSONDecodeError as exc:
        print(f"Settings file is not valid JSON: {exc}", file=sys.stderr)
        return 1


def _add_auth_fields(row: dict, args: argparse.Namespace) -> None:
    if args.api_key:
        row["api_key"] = args.api_key
    elif args.api_key_file:
        row["api_key_file"] = args.api_key_file
    elif args.api_key_env:
        row["api_key_env"] = args.api_key_env


def _write_configured_row(settings_path: Path, row: dict) -> int:
    output = Path(settings_path).expanduser()
    data: dict
    if output.exists():
        data = json.loads(output.read_text())
        if not isinstance(data, dict):
            data = {"models": []}
    else:
        data = {"models": []}
    rows = data.setdefault("models", [])
    if not isinstance(rows, list):
        rows = []
        data["models"] = rows
    key = str(row.get("id") or row.get("slug") or "")
    replaced = False
    for index, existing in enumerate(rows):
        if not isinstance(existing, dict):
            continue
        existing_key = str(existing.get("id") or existing.get("slug") or "")
        same_identity = existing.get("provider") == row.get("provider") and existing.get("model") == row.get("model")
        if (key and existing_key == key) or same_identity:
            merged = dict(existing)
            merged.update(row)
            rows[index] = merged
            replaced = True
            break
    if not replaced:
        rows.append(row)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(data, indent=2) + "\n")
    action = "Updated" if replaced else "Added"
    print(f"{action} {row['display_name']} in {output}.")
    return 0


def _slug_for_configured_row(prefix: str, model: str) -> str:
    slug = re.sub(r"[^a-zA-Z0-9]+", "-", f"{prefix}-{model}".strip().lower()).strip("-")
    return slug or prefix


def _display_name_from_model(model: str, *, suffix: str) -> str:
    words = re.split(r"[/._:-]+", model)
    title = " ".join(word.upper() if len(word) <= 3 else word.capitalize() for word in words if word)
    return f"{title} ({suffix})"


def export_config(settings_path: Path, output_path: Path, *, redact: bool = True) -> int:
    return export_config_file(settings_path, output_path, redact=redact)


def import_config(settings_path: Path, source_path: Path) -> int:
    source = Path(source_path).expanduser()
    if not source.exists():
        raise SystemExit(f"Import file not found: {source}")
    data = json.loads(source.read_text())
    output = Path(settings_path).expanduser()
    output.parent.mkdir(parents=True, exist_ok=True)
    temp = output.with_name(output.name + ".validate")
    temp.write_text(json.dumps(data))
    try:
        ModelSettings(temp).load()
    finally:
        temp.unlink(missing_ok=True)
    if output.exists():
        backup = output.with_name(output.name + ".before-import")
        backup.write_text(output.read_text())
    output.write_text(json.dumps(data, indent=2) + "\n")
    print(f"Imported config from {source} into {output}.")
    return 0


def start(settings_path: Path, port: int) -> int:
    if _pid_running(_read_pid()):
        print(f"Shim already running with pid {_read_pid()}.")
        return 0
    RUNTIME_DIR.mkdir(parents=True, exist_ok=True)
    log = LOG_PATH.open("ab")
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
    PID_PATH.write_text(str(process.pid))
    for _ in range(50):
        if _healthy(port):
            print(f"Shim started on http://{DEFAULT_HOST}:{port} with pid {process.pid}.")
            print(f"Log: {LOG_PATH}")
            return 0
        if process.poll() is not None:
            print(f"Shim exited during startup. See {LOG_PATH}.", file=sys.stderr)
            return 1
        time.sleep(0.1)
    print(f"Shim process started but health check timed out. See {LOG_PATH}.", file=sys.stderr)
    return 1


def stop() -> int:
    pid = _read_pid()
    if pid is None or not _pid_running(pid):
        print("Shim is not running.")
        PID_PATH.unlink(missing_ok=True)
        return 0
    _terminate_pid(pid)
    for _ in range(50):
        if not _pid_running(pid):
            PID_PATH.unlink(missing_ok=True)
            print("Shim stopped.")
            return 0
        time.sleep(0.1)
    print(f"Shim pid {pid} did not exit after SIGTERM.", file=sys.stderr)
    return 1


def repair_codex_config(path: Path = CODEX_CONFIG_PATH) -> int:
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
    if CODEX_CONFIG_PATH.exists():
        current = CODEX_CONFIG_PATH.read_text()
        previous_top_level = _managed_previous_top_level(current)
        if not previous_top_level and CODEX_CONFIG_BACKUP_PATH.exists():
            previous_top_level = _extract_top_level_key_lines(CODEX_CONFIG_BACKUP_PATH.read_text(), MANAGED_TOP_LEVEL_KEYS)
        restored = _remove_managed_config(current)
        restored = remove_toml_section(restored, f"model_providers.{PROVIDER_NAME}")
        restored = _restore_missing_top_level_keys(restored.lstrip(), previous_top_level)
        write_codex_config(restored, CODEX_CONFIG_PATH)
        print(f"Removed shim config from {CODEX_CONFIG_PATH}.")
    if CODEX_CONFIG_BACKUP_PATH.exists():
        CODEX_CONFIG_BACKUP_PATH.unlink()
        print(f"Removed stale shim backup {CODEX_CONFIG_BACKUP_PATH}.")


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
    codex_exe = _resolve_executable("codex")
    args = [codex_exe, *overrides, *codex_args]
    _set_loopback_no_proxy_env()
    if os.name == "nt":
        raise SystemExit(subprocess.call(args))
    os.execv(args[0], args)


def exec_codex_app(settings_path: Path, port: int, path: str) -> None:
    _quit_codex_app()
    codex_exe = _resolve_executable("codex")
    args = [codex_exe, "app", path]
    _set_loopback_no_proxy_env()
    subprocess.Popen(args)
    _foreground_codex_app()


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
    generate(settings_path, port)
    if sys.platform == "darwin" and not skip_patch:
        code = patch_codex_app_auto()
        if code != 0:
            if require_patch:
                return code
            print(
                "patch-auto could not complete; continuing without patch. "
                "Desktop model picker may still show only Custom until patched.",
                file=sys.stderr,
            )
    ensure_started(settings_path, port)
    install_codex_config(settings_path, port, model_slug)
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


def install_dock_shortcut() -> int:
    if sys.platform != "darwin":
        print("install-dock-shortcut is macOS-only.", file=sys.stderr)
        return 1
    launcher_dir = Path.home() / ".codex-shim"
    launcher_dir.mkdir(parents=True, exist_ok=True)
    launcher_script = launcher_dir / "dock-launch.sh"
    repo_root = PROJECT_ROOT
    launcher_script.write_text(
        "#!/usr/bin/env bash\n"
        "set -euo pipefail\n"
        f"cd {shlex.quote(str(repo_root))}\n"
        "python3 -m codex_shim.cli one-shot .\n"
    )
    launcher_script.chmod(0o755)

    app_dir = Path.home() / "Applications"
    app_dir.mkdir(parents=True, exist_ok=True)
    app_path = app_dir / "Codex Shim Launcher.app"
    applescript = (
        'tell application "Terminal"\n'
        f'  do script "{launcher_script}"\n'
        "  activate\n"
        "end tell\n"
    )
    subprocess.run(
        [
            _resolve_executable("osacompile"),
            "-o",
            str(app_path),
            "-e",
            applescript,
        ],
        check=True,
    )
    print(f"Created Dock launcher app: {app_path}")
    print("Drag this app into your Dock for one-click startup/shutdown workflow.")
    return 0


def _quit_codex_app() -> None:
    script = 'tell application "Codex" to if it is running then quit'
    try:
        subprocess.run(
            [_resolve_executable("osascript"), "-e", script],
            check=False,
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
        )
        time.sleep(1.0)
    except OSError:
        pass


def patch_codex_app() -> int:
    if sys.platform != "darwin":
        print("patch-app is macOS-only; Windows MSIX Codex Desktop cannot be patched with this ASAR helper.", file=sys.stderr)
        return 1
    app_asar = CODEX_APP_ASAR_PATH
    info_plist = app_asar.parent.parent / "Info.plist"
    backup = RUNTIME_DIR / APP_ASAR_BACKUP_NAME
    info_backup = RUNTIME_DIR / INFO_PLIST_BACKUP_NAME
    workdir = RUNTIME_DIR / "app-asar-work"

    if not app_asar.exists():
        print(f"Codex app bundle not found at {app_asar}.", file=sys.stderr)
        return 1
    if not info_plist.exists():
        print(f"Codex Info.plist not found at {info_plist}.", file=sys.stderr)
        return 1
    if not _has_command("npx"):
        print("npx is required to patch the Electron asar bundle.", file=sys.stderr)
        return 1
    if not _has_command("codesign"):
        print("codesign is required to re-sign the patched Codex app bundle.", file=sys.stderr)
        return 1

    RUNTIME_DIR.mkdir(parents=True, exist_ok=True)
    _quit_codex_app()
    if workdir.exists():
        import shutil

        shutil.rmtree(workdir, ignore_errors=True)
        if workdir.exists():
            print(
                f"Cannot clear existing workdir {workdir}. "
                "It may contain root-owned files from a prior sudo run.",
                file=sys.stderr,
            )
            print("Try: sudo rm -rf " + str(workdir), file=sys.stderr)
            return 1
    workdir.mkdir(parents=True)
    subprocess.run([_resolve_executable("npx"), "--yes", "asar", "extract", str(app_asar), str(workdir)], check=True)
    desktop_version = _codex_desktop_version(info_plist)
    inspection = _inspect_codex_desktop_bundles(workdir, version=desktop_version)
    if _inspection_has_missing_patch(inspection):
        _print_patch_inspection(inspection, file=sys.stderr)
        print("Could not find every expected Codex Desktop patch needle.", file=sys.stderr)
        return 1
    if not backup.exists() and _inspection_has_applied_patch(inspection):
        _print_patch_inspection(inspection, file=sys.stderr)
        print(
            f"Refusing to create {backup} from an already-patched app.asar. "
            "Restore from a clean Codex.app or provide the original backup first.",
            file=sys.stderr,
        )
        return 1
    if not backup.exists():
        backup.write_bytes(app_asar.read_bytes())
        print(f"Backed up original app.asar to {backup}.")
    versioned_backup = RUNTIME_DIR / f"app.asar.before-codex-shim-model-picker-patch.{_app_asar_hash(app_asar)[:12]}"
    if not versioned_backup.exists():
        versioned_backup.write_bytes(app_asar.read_bytes())
        print(f"Backed up current app.asar to {versioned_backup}.")
    if not info_backup.exists():
        info_backup.write_bytes(info_plist.read_bytes())
        print(f"Backed up original Info.plist to {info_backup}.")

    changed = _patch_codex_desktop_bundles(workdir, version=_codex_desktop_version(info_plist))
    if changed is None:
        return 1
    if changed:
        try:
            subprocess.run([_resolve_executable("npx"), "--yes", "asar", "pack", str(workdir), str(app_asar)], check=True)
            _update_app_asar_integrity(app_asar, info_plist)
            _resign_codex_app()
        except PermissionError:
            print(
                "Permission denied while writing Codex.app bundle. Re-run with elevated privileges:\n"
                "  sudo python3 -m codex_shim.cli patch-app",
                file=sys.stderr,
            )
            return 1
    return 0


def patch_codex_app_auto() -> int:
    if sys.platform != "darwin":
        print("patch-auto is macOS-only.", file=sys.stderr)
        return 1
    app_path = Path("/Applications/Codex.app")
    info_plist = app_path / "Contents/Info.plist"
    version = _codex_desktop_version(info_plist)
    workdir = _extract_app_asar_workdir(app_path)
    if workdir is None:
        print("Could not inspect app.asar bundles.", file=sys.stderr)
        return 1
    try:
        inspection = _inspect_codex_desktop_bundles(workdir, version=version)
        if not inspection:
            print("Desktop inspection returned no patch specs; run `codex-shim doctor patch` for details.", file=sys.stderr)
            return 1
        required = [row for row in inspection if row.get("optional", "false") != "true"]
        if not required:
            print("Desktop inspection found no required patch specs.", file=sys.stderr)
            return 1
        statuses = {str(row.get("status") or "") for row in required}
        if statuses == {"patched"}:
            print(f"Codex Desktop {version} already patched; no action needed.")
            return 0
        if any(str(row.get("status") or "") == "missing" for row in required):
            print(
                f"Codex Desktop {version} has unknown required bundle shape. "
                "Update patch specs for this version before patching.",
                file=sys.stderr,
            )
            return 1
    finally:
        import shutil

        shutil.rmtree(workdir, ignore_errors=True)
    print(f"Codex Desktop {version} is unpatched; applying patch...")
    return patch_codex_app()


def restore_codex_app_bundle() -> int:
    if sys.platform != "darwin":
        print("restore-app is macOS-only; Windows MSIX Codex Desktop cannot be restored with this ASAR helper.", file=sys.stderr)
        return 1
    app_asar = CODEX_APP_ASAR_PATH
    info_plist = app_asar.parent.parent / "Info.plist"
    backup = RUNTIME_DIR / APP_ASAR_BACKUP_NAME
    info_backup = RUNTIME_DIR / INFO_PLIST_BACKUP_NAME
    if not app_asar.exists():
        print(f"Codex app bundle not found at {app_asar}.", file=sys.stderr)
        return 1
    if not backup.exists():
        print(f"No original app.asar backup found at {backup}.", file=sys.stderr)
        versioned = _versioned_app_backups()
        if versioned:
            print("Versioned app.asar backups exist, but restore-app needs the original backup:", file=sys.stderr)
            for candidate in versioned:
                print(f"  {candidate}", file=sys.stderr)
        return 1
    if not _has_command("codesign"):
        print("codesign is required to re-sign the restored Codex app bundle.", file=sys.stderr)
        return 1
    _quit_codex_app()
    app_asar.write_bytes(backup.read_bytes())
    if info_backup.exists():
        info_plist.write_bytes(info_backup.read_bytes())
        print(f"Restored {info_plist} from {info_backup}.")
    elif info_plist.exists():
        _update_app_asar_integrity(app_asar, info_plist)
    _resign_codex_app()
    print(f"Restored {app_asar} from {backup}.")
    return 0


def patch_status() -> int:
    if sys.platform != "darwin":
        print("patch-status is macOS-only; Windows/MSIX and Linux bundles are unsupported.")
        return 1
    app_asar = CODEX_APP_ASAR_PATH
    info_plist = app_asar.parent.parent / "Info.plist"
    backup = RUNTIME_DIR / APP_ASAR_BACKUP_NAME
    info_backup = RUNTIME_DIR / INFO_PLIST_BACKUP_NAME
    ok = True
    print(f"Codex app.asar: {app_asar}")
    if not app_asar.exists():
        print("  missing")
        ok = False
    else:
        print(f"  present sha256={_app_asar_hash(app_asar)[:12]}")
    print(f"Info.plist: {info_plist} ({'present' if info_plist.exists() else 'missing'})")
    print(f"npx: {'present' if _has_command('npx') else 'missing'}")
    print(f"codesign: {'present' if _has_command('codesign') else 'missing'}")
    if not _has_command("npx") or not _has_command("codesign"):
        ok = False
    print(f"original app.asar backup: {backup} ({'present' if backup.exists() else 'missing'})")
    print(f"original Info.plist backup: {info_backup} ({'present' if info_backup.exists() else 'missing'})")
    versioned = _versioned_app_backups()
    print(f"versioned app.asar backups: {len(versioned)}")
    for candidate in versioned:
        print(f"  {candidate.name}")
    if app_asar.exists() and backup.exists() and _app_asar_hash(app_asar) == _app_asar_hash(backup):
        print("warning: original backup hash matches current app.asar; restore may be stale/no-op.")
    if app_asar.exists() and _has_command("npx"):
        workdir = RUNTIME_DIR / "app-asar-status"
        if workdir.exists():
            import shutil

            shutil.rmtree(workdir)
        workdir.mkdir(parents=True, exist_ok=True)
        try:
            subprocess.run([_resolve_executable("npx"), "--yes", "asar", "extract", str(app_asar), str(workdir)], check=True)
            inspection = _inspect_codex_desktop_bundles(workdir, version=_codex_desktop_version(info_plist))
            _print_patch_inspection(inspection)
            if _inspection_has_missing_patch(inspection):
                ok = False
            if not backup.exists() and _inspection_has_applied_patch(inspection):
                print("warning: app appears patched but the original backup is missing.")
                ok = False
        finally:
            import shutil

            shutil.rmtree(workdir, ignore_errors=True)
    return 0 if ok else 1


def _resolve_executable(command: str) -> str:
    from shutil import which

    resolved = which(command)
    if resolved:
        return resolved
    raise SystemExit(f"Required command not found on PATH: {command}")


def _has_command(command: str) -> bool:
    from shutil import which

    return which(command) is not None


def _app_asar_hash(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def _app_asar_header_hash(path: Path) -> str:
    with path.open("rb") as f:
        _, _, _, json_size = struct.unpack("<4I", f.read(16))
        header_json = f.read(json_size)
    return hashlib.sha256(header_json).hexdigest()


def _update_app_asar_integrity(app_asar: Path, info_plist: Path) -> None:
    header_hash = _app_asar_header_hash(app_asar)
    data = plistlib.loads(info_plist.read_bytes())
    try:
        data["ElectronAsarIntegrity"]["Resources/app.asar"]["hash"] = header_hash
    except KeyError as exc:
        raise RuntimeError(f"Could not update ElectronAsarIntegrity in {info_plist}") from exc
    info_plist.write_bytes(plistlib.dumps(data))
    print("Updated ElectronAsarIntegrity for app.asar.")


def _codex_desktop_version(info_plist: Path | None = None) -> str:
    path = info_plist or (CODEX_APP_ASAR_PATH.parent.parent / "Info.plist")
    if not path.exists():
        return "unknown"
    data = plistlib.loads(path.read_bytes())
    return str(data.get("CFBundleShortVersionString") or data.get("CFBundleVersion") or "unknown")


def _patch_codex_desktop_bundles(workdir: Path, *, version: str = "unknown") -> bool | None:
    changed = False
    hard_failure = False
    for label, globs, needle, replacement, optional in _desktop_patch_specs(version):
        bundle_file = _find_js_bundle(workdir, globs, needle, replacement)
        if bundle_file is None:
            if optional:
                print(f"Skipping Codex Desktop {label} (needle not present in this Desktop version).")
                continue
            print(f"Could not find the expected {label} in Codex Desktop.", file=sys.stderr)
            hard_failure = True
            continue
        result = _replace_once(bundle_file, needle, replacement)
        if result is None:
            print(f"Could not patch the expected {label} in Codex Desktop.", file=sys.stderr)
            hard_failure = True
            continue
        if result:
            changed = True
            print(f"Patched Codex Desktop {label}.")
        else:
            print(f"Codex Desktop {label} patch is already applied.")
    if hard_failure:
        return None
    return changed


def _desktop_patch_specs(version: str = "unknown") -> list[tuple[str, list[str], str, str, bool]]:
    return patch_specs_for_version(version)


def _desktop_inspection_specs(version: str = "unknown") -> list[tuple[str, list[str], str, str, bool]]:
    return inspection_specs_for_version(version)


def _inspect_codex_desktop_bundles(workdir: Path, *, version: str = "unknown") -> list[dict[str, str]]:
    reports: list[dict[str, str]] = []
    for label, globs, needle, replacement, optional in _desktop_inspection_specs(version):
        bundle_file = _find_js_bundle(workdir, globs, needle, replacement)
        if bundle_file is None:
            status = "skipped" if optional else "missing"
            reports.append({"label": label, "status": status, "path": "", "optional": str(optional).lower()})
            continue
        text = _read_text_lossy(bundle_file)
        needle_count = text.count(needle)
        replacement_count = text.count(replacement)
        if replacement_count and not needle_count:
            status = "patched"
        elif needle_count == 1 and not replacement_count:
            status = "unpatched"
        elif needle_count or replacement_count:
            status = "mixed"
        else:
            status = "skipped" if optional else "missing"
        reports.append(
            {
                "label": label,
                "status": status,
                "path": str(bundle_file),
                "optional": str(optional).lower(),
            }
        )
    return reports


def _inspection_has_missing_patch(inspection: list[dict[str, str]]) -> bool:
    return any(
        report["status"] in {"missing", "mixed"} and report.get("optional", "false") != "true"
        for report in inspection
    )


def _inspection_has_applied_patch(inspection: list[dict[str, str]]) -> bool:
    return any(report["status"] in {"patched", "mixed"} for report in inspection)


def _print_patch_inspection(inspection: list[dict[str, str]], *, file=None) -> None:
    stream = file or sys.stdout
    print("Desktop patch inspection:", file=stream)
    for report in inspection:
        suffix = f" ({report['path']})" if report.get("path") else ""
        print(f"  {report['label']}: {report['status']}{suffix}", file=stream)


def _versioned_app_backups() -> list[Path]:
    return sorted(RUNTIME_DIR.glob(APP_ASAR_BACKUP_NAME + ".*"))


def _extract_app_asar_workdir(app_path: Path) -> Path | None:
    app_asar = app_path / "Contents/Resources/app.asar"
    if not app_asar.exists() or not _has_command("npx"):
        return None
    import shutil

    workdir = RUNTIME_DIR / "app-asar-doctor"
    if workdir.exists():
        shutil.rmtree(workdir)
    workdir.mkdir(parents=True, exist_ok=True)
    try:
        subprocess.run([_resolve_executable("npx"), "--yes", "asar", "extract", str(app_asar), str(workdir)], check=True)
    except subprocess.CalledProcessError:
        shutil.rmtree(workdir, ignore_errors=True)
        return None
    return workdir


def _find_js_bundle(workdir: Path, globs: list[str], needle: str, replacement: str) -> Path | None:
    assets_dir = workdir / "webview" / "assets"
    if not assets_dir.exists():
        return None
    candidates: list[Path] = []
    for pattern in globs:
        candidates.extend(p for p in sorted(assets_dir.glob(pattern)) if p not in candidates)
    for path in candidates:
        text = _read_text_lossy(path)
        if needle in text or replacement in text:
            return path
    return None


def _replace_once(path: Path, needle: str, replacement: str) -> bool | None:
    text = _read_text_lossy(path)
    if replacement in text:
        return False
    count = text.count(needle)
    if count != 1:
        return None
    path.write_text(text.replace(needle, replacement, 1))
    return True


def _read_text_lossy(path: Path) -> str:
    try:
        return path.read_text()
    except UnicodeDecodeError:
        return path.read_text(errors="ignore")


def _resign_codex_app() -> None:
    # Electron validates app.asar through the bundle signature metadata at
    # startup. Re-sign after patching so the modified archive does not trip the
    # asar integrity check.
    subprocess.run(
        [_resolve_executable("codesign"), "--force", "--deep", "--sign", "-", "/Applications/Codex.app"],
        check=True,
    )
    print("Re-signed Codex.app after patch.")


def _foreground_codex_app() -> None:
    script = '''
tell application "Codex" to activate
delay 0.5
tell application "System Events"
  if exists process "Codex" then
    tell process "Codex"
      set frontmost to true
      if (count of windows) is 0 then
        keystroke "n" using command down
        delay 0.3
      end if
      if (count of windows) > 0 then
        set position of window 1 to {80, 60}
        set size of window 1 to {1400, 980}
      end if
    end tell
  end if
end tell
'''
    try:
        subprocess.run(
            [_resolve_executable("osascript"), "-e", script],
            check=False,
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
        )
    except OSError:
        pass


def _managed_config_blocks(default_slug: str, port: int, previous_top_level: dict[str, str] | None = None) -> tuple[str, str]:
    metadata = ""
    if previous_top_level:
        metadata = PREVIOUS_TOP_LEVEL_PREFIX + json.dumps(previous_top_level, sort_keys=True) + "\n"
    top_block = f'''{MANAGED_BEGIN}
{metadata}model = "{_toml_escape(default_slug)}"
model_provider = "{PROVIDER_NAME}"
model_catalog_json = "{_toml_escape(str(CATALOG_PATH))}"
{MANAGED_END}
'''

    provider_block = f'''{MANAGED_BEGIN}
[model_providers.{PROVIDER_NAME}]
name = "Codex Shim"
base_url = "http://127.0.0.1:{port}/v1"
wire_api = "responses"
experimental_bearer_token = "dummy"
request_max_retries = 3
stream_max_retries = 3
stream_idle_timeout_ms = 600000
supports_websockets = {str(websockets_enabled()).lower()}
{MANAGED_END}
'''
    return top_block, provider_block


def _remove_managed_config(text: str) -> str:
    while MANAGED_BEGIN in text:
        before, rest = text.split(MANAGED_BEGIN, 1)
        if MANAGED_END not in rest:
            return before
        _, after = rest.split(MANAGED_END, 1)
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


def _extract_top_level_key_lines(text: str, keys: set[str]) -> dict[str, str]:
    found: dict[str, str] = {}
    in_top_level = True
    for line in text.splitlines():
        stripped = line.strip()
        if stripped.startswith("["):
            in_top_level = False
        if not in_top_level or not stripped or stripped.startswith("#") or "=" not in stripped:
            continue
        key = stripped.split("=", 1)[0].strip()
        if key in keys:
            found[key] = line
    return found


def _managed_previous_top_level(text: str) -> dict[str, str]:
    in_managed = False
    for line in text.splitlines():
        stripped = line.strip()
        if stripped == MANAGED_BEGIN:
            in_managed = True
            continue
        if stripped == MANAGED_END:
            in_managed = False
            continue
        if in_managed and stripped.startswith(PREVIOUS_TOP_LEVEL_PREFIX):
            encoded = stripped[len(PREVIOUS_TOP_LEVEL_PREFIX) :]
            try:
                payload = json.loads(encoded)
            except json.JSONDecodeError:
                return {}
            if isinstance(payload, dict):
                return {str(k): str(v) for k, v in payload.items() if k in MANAGED_TOP_LEVEL_KEYS}
    return {}


def _restore_missing_top_level_keys(text: str, previous_top_level: dict[str, str]) -> str:
    if not previous_top_level:
        return text
    current = _extract_top_level_key_lines(text, MANAGED_TOP_LEVEL_KEYS)
    lines = [
        previous_top_level[key]
        for key in ("model", "model_provider", "model_catalog_json")
        if key in previous_top_level and key not in current
    ]
    if not lines:
        return text
    prefix = "\n".join(lines) + "\n"
    if text and not text.startswith("\n"):
        return prefix + text
    return prefix + text.lstrip()


def _popen_daemon(cmd: list[str], log) -> subprocess.Popen:
    env = os.environ.copy()
    env["PYTHONPATH"] = str(PROJECT_ROOT)
    kwargs = {"cwd": str(PROJECT_ROOT), "env": env, "stdout": log, "stderr": log}
    if os.name == "nt":
        creationflags = getattr(subprocess, "CREATE_NEW_PROCESS_GROUP", 0) | getattr(subprocess, "DETACHED_PROCESS", 0)
        return subprocess.Popen(cmd, creationflags=creationflags, **kwargs)
    return subprocess.Popen(cmd, start_new_session=True, **kwargs)


def _terminate_pid(pid: int) -> None:
    if os.name == "nt":
        handle = ctypes.windll.kernel32.OpenProcess(WINDOWS_PROCESS_TERMINATE, False, pid)
        if handle:
            try:
                ctypes.windll.kernel32.TerminateProcess(handle, 0)
            finally:
                ctypes.windll.kernel32.CloseHandle(handle)
        return
    os.kill(pid, signal.SIGTERM)


def _override_args(settings_path: Path, port: int) -> list[str]:
    models = _desktop_models(settings_path)
    try:
        default_slug = default_model_slug(models, include_chatgpt=False)
    except ValueError as exc:
        raise SystemExit(str(exc)) from exc
    pairs = codex_config_overrides(CATALOG_PATH, default_slug, port)
    args: list[str] = []
    for pair in pairs:
        args.extend(["-c", pair])
    return args


def chatgpt_passthrough_display_names() -> dict[str, str]:
    return {slug: slug for slug in sorted(chatgpt_passthrough_slugs())}


def _resolve_model_slug(models, requested: str | None, router_config=None) -> str:
    if requested is None:
        current = _current_managed_model()
        if current in _valid_model_slugs(models, router_config):
            return current
        try:
            return default_model_slug(models)
        except ValueError as exc:
            raise SystemExit(str(exc)) from exc
    if router_config is not None and requested == router_config.slug:
        return requested
    if requested in chatgpt_passthrough_slugs() or requested in {CHATGPT_MODEL_SLUG, "openai-gpt-5-5"}:
        if not chatgpt_passthrough_available():
            raise SystemExit(
                "gpt-5.5 passthrough requires a Codex login. "
                "Run `codex login` so ~/.codex/auth.json contains tokens.access_token."
            )
        return requested if requested in chatgpt_passthrough_slugs() else CHATGPT_MODEL_SLUG
    if is_cursor_passthrough_slug(requested):
        if not cursor_passthrough_available():
            raise SystemExit(
                "Composer passthrough requires Cursor CLI login. "
                "Run `cursor-agent login`, then `cursor-agent status`."
            )
        return requested if requested in cursor_passthrough_display_names() else "composer-2-5"
    by_slug = {model.slug: model.slug for model in models}
    by_model = {}
    for model in models:
        by_model.setdefault(model.model, []).append(model.slug)
    if requested in by_slug:
        return requested
    if requested in by_model and len(by_model[requested]) == 1:
        return by_model[requested][0]
    matches = [model.slug for model in models if requested.lower() in model.display_name.lower()]
    if len(matches) == 1:
        return matches[0]
    if matches:
        raise SystemExit(f"Ambiguous model {requested!r}. Matches: {', '.join(matches)}")
    raise SystemExit(f"Unknown shim model {requested!r}. Run: codex-shim model list")


def _current_managed_model() -> str | None:
    if not CODEX_CONFIG_PATH.exists():
        return None
    in_managed = False
    for line in CODEX_CONFIG_PATH.read_text().splitlines():
        stripped = line.strip()
        if stripped == MANAGED_BEGIN:
            in_managed = True
            continue
        if stripped == MANAGED_END:
            in_managed = False
            continue
        if in_managed and stripped.startswith("model = "):
            return stripped.split("=", 1)[1].strip().strip('"')
    return None


def _valid_model_slugs(models, router_config=None) -> set[str]:
    slugs = {model.slug for model in usable_byok_models(models)}
    if router_config is not None:
        slugs.add(router_config.slug)
    if chatgpt_passthrough_available():
        slugs.update(chatgpt_passthrough_slugs())
    if cursor_passthrough_available():
        slugs.update(cursor_passthrough_display_names())
    return slugs


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
        return int(PID_PATH.read_text().strip())
    except Exception:
        return None


def _pid_running(pid: int | None) -> bool:
    if not pid:
        return False
    if os.name == "nt":
        handle = ctypes.windll.kernel32.OpenProcess(WINDOWS_PROCESS_QUERY_LIMITED_INFORMATION, False, pid)
        if not handle:
            return False
        try:
            exit_code = ctypes.c_ulong()
            if not ctypes.windll.kernel32.GetExitCodeProcess(handle, ctypes.byref(exit_code)):
                return False
            return exit_code.value == WINDOWS_STILL_ACTIVE
        finally:
            ctypes.windll.kernel32.CloseHandle(handle)
    try:
        os.kill(pid, 0)
        return True
    except OSError:
        return False


def _entrypoint() -> int:
    try:
        return main()
    except BrokenPipeError:
        # Downstream pipe (e.g. `codex-shim list | head`) closed early. Mute the
        # interpreter's atexit flush so we exit cleanly instead of dumping a
        # traceback to stderr.
        try:
            sys.stdout.flush()
        except BrokenPipeError:
            pass
        os.dup2(os.open(os.devnull, os.O_WRONLY), sys.stdout.fileno())
        return 0


if __name__ == "__main__":
    raise SystemExit(_entrypoint())
