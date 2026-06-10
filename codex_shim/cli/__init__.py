from __future__ import annotations

# Kept as cli attributes even though unused here: tests patch
# cli.importlib.util / cli.shutil / cli.subprocess / cli.sys.
import importlib.util  # noqa: F401, E402
import os
import shutil  # noqa: F401, E402
import subprocess  # noqa: F401, E402
import sys  # noqa: E402
from pathlib import Path

from ..clientconfig import (  # noqa: F401
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
from ..observability import (  # noqa: F401
    clear_capture_config,
    read_capture_config,
    write_capture_config,
)
from ..persistence import apply_postgres_migrations  # noqa: F401
from ..providers import (  # noqa: F401
    cursor_passthrough_available,
    cursor_passthrough_display_names,
    is_cursor_passthrough_slug,
)
from ..routing import auto_router as router_module  # noqa: F401
from ..routing import (  # noqa: F401
    available_model_slugs,
    chatgpt_passthrough_slugs,
)
from ..settings import (  # noqa: F401
    CHATGPT_MODEL_SLUG,
    DEFAULT_CODEX_AUTH,
    DEFAULT_HOST,
    DEFAULT_PORT,
    DEFAULT_SETTINGS,
    PROVIDER_NAME,
    ModelSettings,
    ShimModel,
    chatgpt_passthrough_available,
    default_model_slug,
    fetch_vibeproxy_model_rows,
    usable_byok_models,
    websockets_enabled,
)
from ..settings import PROJECT_ROOT as _PROJECT_ROOT  # noqa: F401
from ..workers import main as worker_main  # noqa: F401

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
# Command implementations live in submodules; every name is re-exported here
# because tests and sibling modules address them via codex_shim.cli.
from .app import (  # noqa: E402, F401 - command surface re-exports
    main,
)
from .config_cmds import (  # noqa: E402, F401 - command surface re-exports
    _active_router,
    _add_auth_fields,
    _desktop_models,
    _display_name_from_model,
    _extract_top_level_key_lines,
    _int_or_none,
    _load_models,
    _managed_config_blocks,
    _managed_previous_top_level,
    _remove_managed_config,
    _remove_top_level_keys,
    _restore_missing_top_level_keys,
    _slug_for_configured_row,
    _upstream_supports_responses_api,
    _vibeproxy_direct_models,
    _write_configured_row,
    chatgpt_passthrough_display_names,
    configure,
    export_config,
    generate,
    import_config,
    import_vibeproxy_models,
    install_codex_config,
    list_models,
    refresh_opencode_go,
)
from .desktop_patch import (  # noqa: E402, F401 - command surface re-exports
    _app_asar_hash,
    _app_asar_header_hash,
    _codex_desktop_version,
    _desktop_inspection_specs,
    _desktop_patch_specs,
    _extract_app_asar_workdir,
    _find_js_bundle,
    _foreground_codex_app,
    _has_command,
    _inspect_codex_desktop_bundles,
    _inspection_has_applied_patch,
    _inspection_has_missing_patch,
    _patch_codex_desktop_bundles,
    _print_patch_inspection,
    _read_text_lossy,
    _replace_once,
    _resign_codex_app,
    _resolve_executable,
    _update_app_asar_integrity,
    _versioned_app_backups,
    install_dock_shortcut,
    patch_codex_app,
    patch_codex_app_auto,
    patch_status,
    restore_codex_app_bundle,
)
from .doctor import (  # noqa: E402, F401 - command surface re-exports
    DoctorCheck,
    _bool_text,
    _doctor_chatgpt,
    _doctor_codex_cli,
    _doctor_codex_config,
    _doctor_cursor,
    _doctor_daemon,
    _doctor_dependencies,
    _doctor_proxy_env,
    _doctor_python,
    _doctor_runtime_files,
    _doctor_settings,
    _env_flag,
    _health_model_count,
    _print_doctor_report,
    _routing_recommendation,
    doctor_catalog,
    doctor_contract,
    doctor_models,
    doctor_patch,
    doctor_routing,
    doctor_setup,
    doctor_subscription,
)
from .lifecycle import (  # noqa: E402, F401 - command surface re-exports
    _codex_desktop_running,
    _health,
    _healthy,
    _override_args,
    _persist_capture_config_from_env,
    _pid_running,
    _popen_daemon,
    _quit_codex_app,
    _read_pid,
    _set_loopback_no_proxy_env,
    _terminate_pid,
    _wait_for_codex_exit,
    _wait_for_codex_launch,
    _with_loopback_no_proxy,
    ensure_started,
    exec_codex,
    exec_codex_app,
    one_shot,
    repair_codex_config,
    restore_codex_config,
    start,
    status,
    stop,
)
from .model_cmds import (  # noqa: E402, F401 - command surface re-exports
    _current_managed_model,
    _resolve_model_slug,
    _valid_model_slugs,
)
from .probe_cmds import (  # noqa: E402, F401 - command surface re-exports
    probe_all_route,
    probe_compact_route,
    probe_delegate_route,
    probe_fidelity_route,
    probe_history_route,
    probe_live_matrix_route,
    probe_matrix_route,
    probe_passthrough_compact_route,
    probe_passthrough_route,
    probe_streaming_history_route,
    probe_tools_route,
    probe_ws_streaming_route,
    test_provider_route,
)


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
