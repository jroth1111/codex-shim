"""Read-only diagnostics: doctor setup and specialized reports.

Reads of patched constants/helpers and cross-command calls go through the
cli package namespace (cli_ns) at call time so test monkeypatches on
codex_shim.cli attributes keep working.
"""
from __future__ import annotations

import importlib.util
import json
import os
import plistlib
import shutil
import subprocess
import sys
from collections import Counter
from dataclasses import dataclass
from pathlib import Path

from codex_shim import cli as cli_ns

from ..clientconfig import (
    catalog_entry,
)
from ..providers import (
    cursor_passthrough_display_names,
)
from ..routing import auto_router as router_module
from ..settings import (
    DEFAULT_HOST,
    PROVIDER_NAME,
    ShimModel,
    usable_byok_models,
    websockets_enabled,
)


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
    workdir = cli_ns._extract_app_asar_workdir(app_path)
    if workdir is None:
        print("Could not inspect app.asar bundles.")
        return 1
    try:
        inspection = cli_ns._inspect_codex_desktop_bundles(workdir, version=version)
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
        cli_ns.PROJECT_ROOT / "scripts" / "generate_desktop_contract.py",
        cli_ns.PROJECT_ROOT / "scripts" / "generate_desktop_app_server_contract.py",
    )
    exit_code = 0
    for script in scripts:
        if not script.exists():
            print(f"Desktop contract generator not found: {script}", file=sys.stderr)
            exit_code = 1
            continue
        result = subprocess.run([sys.executable, str(script), "--check"], cwd=cli_ns.PROJECT_ROOT)
        if result.returncode != 0:
            exit_code = result.returncode
    return exit_code


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
    models = cli_ns._load_models(settings_path)
    visible = [model for model in models if model.visible]
    if not visible:
        print("No visible models to inspect.")
        return 1
    sample = catalog_entry(visible[0])
    missing = sorted(cli_ns.DESKTOP_CATALOG_KEYS - set(sample.keys()))
    extra = sorted(set(sample.keys()) - cli_ns.DESKTOP_CATALOG_KEYS)
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


def _routing_recommendation(model: ShimModel) -> str:
    if model.is_chatgpt:
        return "use_shim (Tier A passthrough)"
    if model.is_cursor_cli or model.is_cursor_acp or model.is_cursor_agent:
        return "use_shim (Cursor delegate/native)"
    if model.is_anthropic or model.is_openai_chat:
        return "use_shim (chat/Anthropic translation required)"
    return "use_shim"


def doctor_routing(settings_path: Path) -> int:
    models = cli_ns._desktop_models(settings_path)
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


def doctor_provider(settings_path: Path, slug: str) -> int:
    """Focused report for one configured model: config, capabilities, and the
    shim-vs-direct routing recommendation. (Live smoke is `codex-shim test <slug>`.)"""
    from ..capabilities import execution_mode

    models = cli_ns._load_models(settings_path)
    match = next((m for m in models if m.slug == slug or m.model == slug), None)
    if match is None:
        print(f"No configured model matching {slug!r}.")
        return 1
    mode = execution_mode(match)
    images_supported = (not match.no_image_support) and bool(getattr(match.capabilities, "supports_images", True))
    visibility = "visible" if match.visible else f"HIDDEN ({match.unavailable_reason or 'unavailable'})"
    print(f"Provider report: {match.slug}")
    print(f"  display_name  : {match.display_name}")
    print(f"  model         : {match.model}")
    print(f"  provider      : {match.provider} (transport: {match.transport}, execution: {mode})")
    print(f"  visibility    : {visibility}")
    print(f"  context_limit : {match.max_context_limit or '(provider default)'}")
    print(f"  images        : {'supported' if images_supported else 'unsupported'}")
    print(f"  routing       : {_routing_recommendation(match)}")
    print(f"  live smoke    : codex-shim test {match.slug}")
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
        models = cli_ns._load_models(path)
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
        active = cli_ns._active_router(models, path)
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
    if cli_ns.CATALOG_PATH.exists():
        checks.append(DoctorCheck("Runtime files", "OK", f"catalog: {cli_ns.CATALOG_PATH}"))
        try:
            data = json.loads(cli_ns.CATALOG_PATH.read_text())
            models = data.get("models", []) if isinstance(data, dict) else []
            count = len(models) if isinstance(models, list) else 0
            checks.append(DoctorCheck("Runtime files", "OK", f"catalog models: {count}"))
        except (OSError, json.JSONDecodeError) as exc:
            checks.append(
                DoctorCheck("Runtime files", "WARN", f"catalog JSON is not readable: {cli_ns.CATALOG_PATH}", str(exc))
            )
    else:
        checks.append(DoctorCheck("Runtime files", "INFO", f"catalog missing: {cli_ns.CATALOG_PATH}"))
    if cli_ns.CONFIG_PATH.exists():
        checks.append(DoctorCheck("Runtime files", "OK", f"config: {cli_ns.CONFIG_PATH}"))
    else:
        checks.append(DoctorCheck("Runtime files", "INFO", f"config missing: {cli_ns.CONFIG_PATH}"))
    if cli_ns.PID_PATH.exists():
        checks.append(DoctorCheck("Runtime files", "INFO", f"pid file: {cli_ns.PID_PATH}"))
    else:
        checks.append(DoctorCheck("Runtime files", "INFO", f"pid file missing: {cli_ns.PID_PATH}"))
    if cli_ns.LOG_PATH.exists():
        checks.append(DoctorCheck("Runtime files", "INFO", f"log file: {cli_ns.LOG_PATH}"))
    else:
        checks.append(DoctorCheck("Runtime files", "INFO", f"log file missing: {cli_ns.LOG_PATH}"))
    return checks


def _doctor_daemon(port: int) -> list[DoctorCheck]:
    checks = [DoctorCheck("Shim daemon", "INFO", f"health URL: http://{DEFAULT_HOST}:{port}/health")]
    pid = cli_ns._read_pid()
    if pid is None:
        checks.append(DoctorCheck("Shim daemon", "INFO", f"pid file missing or unreadable: {cli_ns.PID_PATH}"))
    elif cli_ns._pid_running(pid):
        checks.append(DoctorCheck("Shim daemon", "OK", f"pid {pid} is running"))
    else:
        checks.append(DoctorCheck("Shim daemon", "WARN", f"pid {pid} is not running"))

    health = cli_ns._health(port)
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
    auth_path = Path(cli_ns.DEFAULT_CODEX_AUTH).expanduser()
    if cli_ns.chatgpt_passthrough_available():
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
    if cli_ns.cursor_passthrough_available():
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
    path = Path(cli_ns.CODEX_CONFIG_PATH).expanduser()
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
    current = cli_ns._current_managed_model()
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

    models = cli_ns._load_models(settings_path)
    desktop_models = cli_ns._desktop_models(settings_path)
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
