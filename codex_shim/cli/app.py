"""Argparse command tree and dispatch.

Reads of patched constants/helpers and cross-command calls go through the
cli package namespace (cli_ns) at call time so test monkeypatches on
codex_shim.cli attributes keep working.
"""
from __future__ import annotations

import argparse
from pathlib import Path

from codex_shim import cli as cli_ns

from ..clientconfig import (
    OPENCODE_GO_API_KEY_ENV,
    OPENCODE_GO_BASE_URL,
)
from ..migrate import apply_postgres_migrations
from ..observability import clear_capture_config
from ..settings import (
    DEFAULT_PORT,
    DEFAULT_SETTINGS,
)
from ..workers import main as worker_main


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
        default=cli_ns.CODEX_CONFIG_PATH,
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
        cli_ns.generate(args.settings, args.port)
        return 0
    if args.command == "opencode-go":
        if args.opencode_go_command == "refresh":
            return cli_ns.refresh_opencode_go(
                args.settings,
                args.api_key_env,
                args.base_url,
                args.prefer,
                args.timeout,
            )
    if args.command == "list":
        return cli_ns.list_models(args.settings)
    if args.command in {"start", "enable"}:
        cli_ns.generate(args.settings, args.port)
        code = cli_ns.start(args.settings, args.port)
        if code == 0 and args.command == "enable":
            cli_ns.install_codex_config(args.settings, args.port)
            cli_ns._persist_capture_config_from_env()
        return code
    if args.command in {"stop", "disable"}:
        if args.command == "disable":
            cli_ns.restore_codex_config()
            clear_capture_config()
        return cli_ns.stop()
    if args.command == "repair-config":
        return cli_ns.repair_codex_config(args.path)
    if args.command == "restart":
        cli_ns.stop()
        cli_ns.generate(args.settings, args.port)
        return cli_ns.start(args.settings, args.port)
    if args.command == "status":
        return cli_ns.status(args.port)
    if args.command == "migrate":
        return apply_postgres_migrations(cli_ns.PROJECT_ROOT / "migrations")
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
            return cli_ns.doctor_setup(args.settings, args.port)
        if cmd == "models":
            return cli_ns.doctor_models(args.settings)
        if cmd == "patch":
            return cli_ns.doctor_patch()
        if cmd == "catalog":
            return cli_ns.doctor_catalog(args.settings)
        if cmd == "subscription":
            return cli_ns.doctor_subscription()
        if cmd == "contract":
            return cli_ns.doctor_contract()
        if cmd == "routing":
            return cli_ns.doctor_routing(args.settings)
        return cli_ns.doctor_setup(args.settings, args.port)
    if args.command == "test":
        return cli_ns.test_provider_route(args.settings, args.target)
    if args.command == "probe":
        if args.probe_command == "compact":
            return cli_ns.probe_compact_route(args.settings, args.port, args.slug)
        if args.probe_command == "history":
            return cli_ns.probe_history_route(args.settings, args.port, args.slug)
        if args.probe_command == "fidelity":
            return cli_ns.probe_fidelity_route()
        if args.probe_command == "streaming-history":
            return cli_ns.probe_streaming_history_route(args.settings, args.port, args.slug)
        if args.probe_command == "ws-streaming":
            return cli_ns.probe_ws_streaming_route(args.settings, args.port, args.slug)
        if args.probe_command == "tools":
            return cli_ns.probe_tools_route(args.settings, args.port, args.slug)
        if args.probe_command == "delegate":
            return cli_ns.probe_delegate_route(args.settings, args.port, args.slug)
        if args.probe_command == "all":
            return cli_ns.probe_all_route(args.settings, args.port, args.slug, live=args.live)
        if args.probe_command == "passthrough":
            return cli_ns.probe_passthrough_route(args.port, live=args.live)
        if args.probe_command == "passthrough-compact":
            return cli_ns.probe_passthrough_compact_route(args.port, live=args.live)
        if args.probe_command == "live-matrix":
            return cli_ns.probe_live_matrix_route(args.settings, args.port)
        if args.probe_command == "matrix":
            return cli_ns.probe_matrix_route(args.settings, args.port, args.slug, live=args.live, as_json=args.json)
    if args.command == "configure":
        return cli_ns.configure(args.settings, args)
    if args.command == "patch-app":
        return cli_ns.patch_codex_app()
    if args.command == "patch-auto":
        return cli_ns.patch_codex_app_auto()
    if args.command == "install-dock-shortcut":
        return cli_ns.install_dock_shortcut()
    if args.command == "restore-app":
        return cli_ns.restore_codex_app_bundle()
    if args.command == "patch-status":
        return cli_ns.patch_status()
    if args.command == "import-vibeproxy":
        return cli_ns.import_vibeproxy_models(
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
            return cli_ns.export_config(args.settings, args.output, redact=not args.include_secrets)
        if args.config_command == "import":
            return cli_ns.import_config(args.settings, args.source)
    if args.command == "model":
        if args.model_command == "list":
            return cli_ns.list_models(args.settings)
        if args.model_command == "use":
            cli_ns.generate(args.settings, args.port)
            cli_ns.ensure_started(args.settings, args.port)
            cli_ns.install_codex_config(args.settings, args.port, args.model_slug)
            print(f"Active Codex shim model: {args.model_slug}")
            return 0
    if args.command == "codex":
        cli_ns.generate(args.settings, args.port)
        cli_ns.ensure_started(args.settings, args.port)
        cli_ns.exec_codex(args.settings, args.port, args.args)
        return 0
    if args.command == "app":
        cli_ns.generate(args.settings, args.port)
        cli_ns.ensure_started(args.settings, args.port)
        cli_ns.install_codex_config(args.settings, args.port, args.model_slug)
        cli_ns.exec_codex_app(args.settings, args.port, args.path)
        return 0
    if args.command == "one-shot":
        return cli_ns.one_shot(
            args.settings,
            args.port,
            args.path,
            args.model_slug,
            skip_patch=bool(args.skip_patch),
            require_patch=bool(args.require_patch),
            keep_shim_running=bool(args.keep_shim_running),
        )
    return 2
