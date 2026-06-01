from __future__ import annotations

import argparse
import os
from pathlib import Path
import ctypes
import re
import signal
import subprocess
import sys
import time
import hashlib
import json
import plistlib
import struct
import asyncio
from urllib.request import urlopen

from .catalog import _toml_escape, catalog_entry, codex_config_overrides, websockets_enabled, write_catalog, write_config, write_direct_responses_config
from .settings import (
    CHATGPT_MODEL_SLUG,
    DEFAULT_SETTINGS,
    DEFAULT_HOST,
    DEFAULT_PORT,
    PROVIDER_NAME,
    ModelSettings,
    ShimModel,
    chatgpt_passthrough_available,
    chatgpt_passthrough_model,
    default_model_slug,
    fetch_vibeproxy_model_rows,
)


PROJECT_ROOT = Path(__file__).resolve().parents[1]
RUNTIME_DIR = PROJECT_ROOT / ".codex-shim"
CATALOG_PATH = RUNTIME_DIR / "custom_model_catalog.json"
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
from .patch_specs import (
    MODEL_PICKER_NEEDLE,
    MODEL_PICKER_OPTIONAL,
    MODEL_PICKER_REPLACEMENT,
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
    sub.add_parser("restart")
    sub.add_parser("status")
    doctor_parser = sub.add_parser("doctor", help="Explain visibility, patch status, catalog schema, and contract drift.")
    doctor_sub = doctor_parser.add_subparsers(dest="doctor_command")
    doctor_sub.add_parser("models", help="List visible and hidden configured models (default).")
    doctor_sub.add_parser("patch", help="Report Codex Desktop ASAR patch status and app version.")
    doctor_sub.add_parser("catalog", help="Compare generated catalog keys against Desktop schema fixture.")
    doctor_sub.add_parser("contract", help="Check generated Desktop protocol contract drift.")
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
    probe_passthrough_parser = probe_sub.add_parser("passthrough", help="Live Tier A passthrough probe via shim daemon.")
    probe_passthrough_parser.add_argument("--live", action="store_true", help="Run probe (or set CODEX_SHIM_PROBE_PASSTHROUGH=1).")
    probe_passthrough_compact_parser = probe_sub.add_parser(
        "passthrough-compact", help="Live Tier A /v1/responses/compact probe."
    )
    probe_passthrough_compact_parser.add_argument(
        "--live", action="store_true", help="Run probe (or set CODEX_SHIM_PROBE_PASSTHROUGH=1)."
    )
    sub.add_parser("patch-app", help="Patch Codex Desktop sidebar handling for custom shim models.")
    sub.add_parser("restore-app", help="Restore Codex Desktop app.asar from the pre-patch backup.")
    sub.add_parser("patch-status", help="Inspect the macOS Codex Desktop ASAR patch and backups.")
    configure_parser = sub.add_parser("configure", help="Add or update common provider rows in the model settings file.")
    configure_sub = configure_parser.add_subparsers(dest="configure_provider", required=True)
    cursor_parser = configure_sub.add_parser("cursor", help="Configure Cursor Agent through ACP or the headless CLI.")
    cursor_parser.add_argument("--transport", choices=["acp", "cli"], default="acp")
    cursor_parser.add_argument("--command")
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

    args = parser.parse_args(argv)
    if args.command == "generate":
        generate(args.settings, args.port)
        return 0
    if args.command == "list":
        return list_models(args.settings)
    if args.command in {"start", "enable"}:
        generate(args.settings, args.port)
        code = start(args.settings, args.port)
        if code == 0 and args.command == "enable":
            install_codex_config(args.settings, args.port)
        return code
    if args.command in {"stop", "disable"}:
        if args.command == "disable":
            restore_codex_config()
        return stop()
    if args.command == "restart":
        stop()
        generate(args.settings, args.port)
        return start(args.settings, args.port)
    if args.command == "status":
        return status(args.port)
    if args.command == "doctor":
        cmd = getattr(args, "doctor_command", None) or "models"
        if cmd == "patch":
            return doctor_patch()
        if cmd == "catalog":
            return doctor_catalog(args.settings)
        if cmd == "contract":
            return doctor_contract()
        return doctor(args.settings)
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
        if args.probe_command == "all":
            return probe_all_route(args.settings, args.port, args.slug, live=args.live)
        if args.probe_command == "passthrough":
            return probe_passthrough_route(args.port, live=args.live)
        if args.probe_command == "passthrough-compact":
            return probe_passthrough_compact_route(args.port, live=args.live)
        if args.probe_command == "live-matrix":
            return probe_live_matrix_route(args.settings, args.port)
    if args.command == "configure":
        return configure(args.settings, args)
    if args.command == "patch-app":
        return patch_codex_app()
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
    models = _load_models(settings_path)
    desktop_models = []
    chatgpt_model = chatgpt_passthrough_model()
    if chatgpt_model is not None:
        desktop_models.append(chatgpt_model)
    desktop_models.extend(model for model in models if model.visible)
    return desktop_models


def generate(settings_path: Path, port: int) -> None:
    models = _load_models(settings_path)
    desktop_models = _desktop_models(settings_path)
    try:
        default_model_slug(desktop_models, include_chatgpt=False)
    except ValueError as exc:
        raise SystemExit(str(exc)) from exc
    write_catalog(desktop_models, CATALOG_PATH)
    write_config(desktop_models, CONFIG_PATH, CATALOG_PATH, port)
    hidden_count = len(models) - len([model for model in models if model.visible])
    print(f"Generated {len(desktop_models)} Desktop model entries:")
    print(f"  catalog: {CATALOG_PATH}")
    print(f"  config:  {CONFIG_PATH}")
    if hidden_count:
        print(f"Hidden {hidden_count} unconfigured or disabled model entries. Run `codex-shim doctor` for details.")
    print("No files under ~/.codex were modified.")


def install_codex_config(settings_path: Path, port: int, model_slug: str | None = None) -> None:
    models = _desktop_models(settings_path)
    default_slug = _resolve_model_slug(models, model_slug)
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
    cleaned = _remove_section(cleaned, f"model_providers.{PROVIDER_NAME}")
    top_block, provider_block = _managed_config_blocks(default_slug, port, previous_top_level)
    CODEX_CONFIG_PATH.write_text(top_block + "\n" + cleaned.lstrip() + "\n" + provider_block)
    print(f"Installed shim config into {CODEX_CONFIG_PATH}.")


def list_models(settings_path: Path) -> int:
    models = _desktop_models(settings_path)
    rows: list[tuple[str, str, str, str]] = []
    rows.extend((model.slug, model.display_name, model.model, model.provider) for model in models)
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
    if direct:
        direct_base_url = (provider_base_url or f"{base_url.rstrip('/')}/v1").rstrip("/")
        models = _vibeproxy_direct_models(rows, direct_base_url)
        catalog_path = Path(direct_catalog_path or CATALOG_PATH).expanduser()
        config_path = Path(direct_config_path or CONFIG_PATH).expanduser()
        write_catalog(models, catalog_path)
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
            "command": args.command or ("cursor-agent" if args.transport == "acp" else "cursor"),
            "enabled": True,
        }
        if args.transport == "acp":
            row["mode"] = args.mode
            row["cursor_model"] = cursor_model
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
    script = PROJECT_ROOT / "scripts" / "generate_desktop_contract.py"
    if not script.exists():
        print(f"Desktop contract generator not found: {script}", file=sys.stderr)
        return 1
    result = subprocess.run([sys.executable, str(script), "--check"], cwd=PROJECT_ROOT)
    return result.returncode


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
    from .probe import CompactProbeError, probe_fidelity

    try:
        return probe_fidelity()
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_history_route(settings_path: Path, port: int, slug: str | None) -> int:
    from .probe import CompactProbeError, probe_history

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
    from .probe import CompactProbeError, probe_streaming_history

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
    from .probe import CompactProbeError, probe_ws_streaming

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


def probe_all_route(settings_path: Path, port: int, slug: str | None, *, live: bool) -> int:
    from .probe import CompactProbeError, probe_all

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
    from .probe import CompactProbeError, probe_passthrough

    try:
        return probe_passthrough(port, live=live)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_passthrough_compact_route(port: int, *, live: bool) -> int:
    from .probe import CompactProbeError, probe_passthrough_compact

    try:
        return probe_passthrough_compact(port, live=live)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def probe_live_matrix_route(settings_path: Path, port: int) -> int:
    from .probe import CompactProbeError, probe_live_matrix

    try:
        return probe_live_matrix(Path(settings_path).expanduser(), port)
    except CompactProbeError as exc:
        print(str(exc), file=sys.stderr)
        return 1


def doctor(settings_path: Path) -> int:
    from .catalog import websockets_enabled
    from .response_store import default_store_path, store_scope

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
            print(f"  {model.slug:<{width}}  {model.display_name} -> {model.model} ({model.provider})")
    else:
        print("\nVisible configured models: none")
    if hidden:
        print("\nHidden model entries:")
        width = max(len(model.slug) for model in hidden)
        for model in hidden:
            print(f"  {model.slug:<{width}}  {model.display_name} ({model.provider}): {model.unavailable_reason}")
    return 0 if desktop_models else 1


def test_provider_route(settings_path: Path, target: str) -> int:
    from .probe import CompactProbeError, probe_fidelity
    from .smoke import resolve_smoke_target, run_provider_smoke

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
    from .probe import CompactProbeError, probe_compact

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
            rows[index] = row
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


SENSITIVE_CONFIG_KEYS = {
    "api_key",
    "apikey",
    "api-key",
    "bearertoken",
    "bearer_token",
    "authorization",
    "x-api-key",
    "secret",
    "token",
}
REDACTED_VALUE = "***REDACTED***"


def export_config(settings_path: Path, output_path: Path, *, redact: bool = True) -> int:
    source = Path(settings_path).expanduser()
    if not source.exists():
        raise SystemExit(f"Settings file not found: {source}")
    data = json.loads(source.read_text())
    if redact:
        data = _redact_config(data)
    output = Path(output_path).expanduser()
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(data, indent=2) + "\n")
    mode = "redacted" if redact else "unredacted"
    print(f"Exported {mode} config to {output}.")
    return 0


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


def _redact_config(value):
    if isinstance(value, list):
        return [_redact_config(item) for item in value]
    if isinstance(value, dict):
        redacted = {}
        for key, item in value.items():
            normalized = re.sub(r"[^a-z0-9]+", "", str(key).lower())
            if normalized in SENSITIVE_CONFIG_KEYS or any(marker in normalized for marker in ("apikey", "token", "secret")):
                redacted[key] = REDACTED_VALUE if item else item
            else:
                redacted[key] = _redact_config(item)
        return redacted
    return value


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
    env = os.environ.copy()
    env["PYTHONPATH"] = str(PROJECT_ROOT) + os.pathsep + env.get("PYTHONPATH", "")
    process = _popen_daemon(cmd, log, env)
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
    if not _pid_running(pid):
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


def restore_codex_config() -> None:
    if CODEX_CONFIG_PATH.exists():
        current = CODEX_CONFIG_PATH.read_text()
        previous_top_level = _managed_previous_top_level(current)
        if not previous_top_level and CODEX_CONFIG_BACKUP_PATH.exists():
            previous_top_level = _extract_top_level_key_lines(CODEX_CONFIG_BACKUP_PATH.read_text(), MANAGED_TOP_LEVEL_KEYS)
        restored = _remove_managed_config(current)
        restored = _remove_section(restored, f"model_providers.{PROVIDER_NAME}")
        restored = _restore_missing_top_level_keys(restored.lstrip(), previous_top_level)
        CODEX_CONFIG_PATH.write_text(restored)
        print(f"Removed shim config from {CODEX_CONFIG_PATH}.")
    if CODEX_CONFIG_BACKUP_PATH.exists():
        CODEX_CONFIG_BACKUP_PATH.unlink()
        print(f"Removed stale shim backup {CODEX_CONFIG_BACKUP_PATH}.")


def status(port: int) -> int:
    pid = _read_pid()
    if _pid_running(pid):
        health = _health(port)
        if health is not None:
            model_count = health.get("models", "unknown")
            print(f"Shim is running on http://{DEFAULT_HOST}:{port} with pid {pid} ({model_count} models).")
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
    args = ["codex", *overrides, *codex_args]
    env = _with_loopback_no_proxy(os.environ.copy())
    if os.name == "nt":
        raise SystemExit(subprocess.call(args, env=env))
    os.execvpe("codex", args, env)


def exec_codex_app(settings_path: Path, port: int, path: str) -> None:
    _quit_codex_app()
    args = ["codex", "app", path]
    subprocess.Popen(args, env=_with_loopback_no_proxy(os.environ.copy()))
    _foreground_codex_app()


def _with_loopback_no_proxy(env: dict[str, str]) -> dict[str, str]:
    loopback = ["127.0.0.1", "localhost", "::1"]
    for key in ("NO_PROXY", "no_proxy"):
        values = [part.strip() for part in env.get(key, "").split(",") if part.strip()]
        lower_values = {value.lower() for value in values}
        for host in loopback:
            if host.lower() not in lower_values:
                values.append(host)
        env[key] = ",".join(values)
    return env


def _quit_codex_app() -> None:
    script = 'tell application "Codex" to if it is running then quit'
    try:
        subprocess.run(["osascript", "-e", script], check=False, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
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

        shutil.rmtree(workdir)
    workdir.mkdir(parents=True)
    subprocess.run(["npx", "--yes", "asar", "extract", str(app_asar), str(workdir)], check=True)
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
        subprocess.run(["npx", "--yes", "asar", "pack", str(workdir), str(app_asar)], check=True)
        _update_app_asar_integrity(app_asar, info_plist)
        _resign_codex_app()
    return 0


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
            subprocess.run(["npx", "--yes", "asar", "extract", str(app_asar), str(workdir)], check=True)
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
        subprocess.run(["npx", "--yes", "asar", "extract", str(app_asar), str(workdir)], check=True)
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
        ["codesign", "--force", "--deep", "--sign", "-", "/Applications/Codex.app"],
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
        subprocess.run(["osascript", "-e", script], check=False, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
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


def _remove_section(text: str, section: str) -> str:
    lines = text.splitlines()
    output: list[str] = []
    skipping = False
    header = f"[{section}]"
    for line in lines:
        stripped = line.strip()
        if stripped.startswith("[") and stripped.endswith("]"):
            skipping = stripped == header
            if skipping:
                continue
        if not skipping:
            output.append(line)
    return "\n".join(output) + ("\n" if text.endswith("\n") else "")


def _popen_daemon(cmd: list[str], log, env: dict[str, str]) -> subprocess.Popen:
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


def _resolve_model_slug(models, requested: str | None) -> str:
    if requested is None:
        current = _current_managed_model()
        if current in _valid_model_slugs(models):
            return current
        try:
            return default_model_slug(models)
        except ValueError as exc:
            raise SystemExit(str(exc)) from exc
    if requested in {CHATGPT_MODEL_SLUG, "openai-gpt-5-5"}:
        if not chatgpt_passthrough_available():
            raise SystemExit(
                "gpt-5.5 passthrough requires a Codex login. "
                "Run `codex login` so ~/.codex/auth.json contains tokens.access_token."
            )
        return CHATGPT_MODEL_SLUG
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


def _valid_model_slugs(models) -> set[str]:
    return {model.slug for model in models}


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
