"""Model settings / catalog / Codex config commands.

Reads of patched constants/helpers and cross-command calls go through the
cli package namespace (cli_ns) at call time so test monkeypatches on
codex_shim.cli attributes keep working.
"""
from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path
from urllib.request import urlopen

from codex_shim import cli as cli_ns

from ..clientconfig import (
    _toml_escape,
    export_config_file,
    refresh_opencode_go_settings,
    remove_toml_section,
    write_catalog,
    write_codex_config,
    write_config,
    write_direct_responses_config,
)
from ..providers import (
    cursor_passthrough_display_names,
)
from ..routing import auto_router as router_module
from ..routing import chatgpt_passthrough_slugs
from ..settings import (
    PROVIDER_NAME,
    ModelSettings,
    ShimModel,
    default_model_slug,
    usable_byok_models,
    websockets_enabled,
)


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
    from ..routing import desktop_models

    return desktop_models(ModelSettings(settings_path))


def _active_router(models, settings_path: Path):
    config = router_module.load_router_config(Path(settings_path).expanduser())
    if config and router_module.router_is_active(config, cli_ns.available_model_slugs(models)):
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
    write_catalog(models, cli_ns.CATALOG_PATH, snapshot=snapshot, router_config=router_config)
    write_config(desktop_models, cli_ns.CONFIG_PATH, cli_ns.CATALOG_PATH, port)
    hidden_count = len(models) - len([model for model in models if model.visible])
    subscription_count = len([model for model in desktop_models if model.is_chatgpt])
    byok_count = len([model for model in desktop_models if not model.is_chatgpt])
    print(f"Generated {len(desktop_models)} Desktop model entries ({subscription_count} subscription + {byok_count} BYOK):")
    active_config = _active_router(models, settings_path)
    if active_config is not None:
        print(f"  auto router: {active_config.slug} ({active_config.display_name})")
    print(f"  catalog: {cli_ns.CATALOG_PATH}")
    print(f"  config:  {cli_ns.CONFIG_PATH}")
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
    default_slug = cli_ns._resolve_model_slug(models, model_slug, router_config)
    cli_ns.CODEX_CONFIG_PATH.parent.mkdir(parents=True, exist_ok=True)
    cli_ns.RUNTIME_DIR.mkdir(parents=True, exist_ok=True)
    original = cli_ns.CODEX_CONFIG_PATH.read_text() if cli_ns.CODEX_CONFIG_PATH.exists() else ""
    cleaned = _remove_managed_config(original)
    current_top_level = _extract_top_level_key_lines(cleaned, cli_ns.MANAGED_TOP_LEVEL_KEYS)
    if current_top_level:
        previous_top_level = current_top_level
    else:
        previous_top_level = _managed_previous_top_level(original)
    if not previous_top_level and cli_ns.CODEX_CONFIG_BACKUP_PATH.exists():
        previous_top_level = _extract_top_level_key_lines(cli_ns.CODEX_CONFIG_BACKUP_PATH.read_text(), cli_ns.MANAGED_TOP_LEVEL_KEYS)
    cleaned = _remove_top_level_keys(cleaned, cli_ns.MANAGED_TOP_LEVEL_KEYS)
    cleaned = remove_toml_section(cleaned, f"model_providers.{PROVIDER_NAME}")
    top_block, provider_block = _managed_config_blocks(default_slug, port, previous_top_level)
    write_codex_config(top_block + "\n" + cleaned.lstrip() + "\n" + provider_block, cli_ns.CODEX_CONFIG_PATH)
    print(f"Installed shim config into {cli_ns.CODEX_CONFIG_PATH}.")


def install_profile(settings_path: Path, port: int, name: str) -> int:
    """Write a self-contained Codex profile at ``~/.codex/<name>.config.toml``.

    The profile bundles the model, provider, and generated catalog pointer so
    ``codex --profile <name>`` flips the whole stack without mutating the user's
    base ``~/.codex/config.toml``. Mirrors Codex's profile layering (0.134.0+):
    base config -> profile -> project -> CLI.
    """
    if not re.fullmatch(r"[A-Za-z0-9][A-Za-z0-9_-]*", name or ""):
        raise SystemExit("Profile name must contain only letters, numbers, hyphens, and underscores.")
    cli_ns.generate(settings_path, port)
    cli_ns.ensure_started(settings_path, port)
    models = _load_models(settings_path)
    profile_path = Path.home() / ".codex" / f"{name}.config.toml"
    profile_path.parent.mkdir(parents=True, exist_ok=True)
    if profile_path.exists():
        profile_path.with_name(profile_path.name + ".before-profile").write_text(profile_path.read_text())
    write_config(models, profile_path, cli_ns.CATALOG_PATH, port)
    print(f"Wrote profile: {profile_path}")
    print(f"Use it with: codex --profile {name}")
    return 0


def list_models(settings_path: Path) -> int:
    models = _load_models(settings_path)
    rows: list[tuple[str, str, str, str]] = []
    router_config = _active_router(models, settings_path)
    if router_config is not None:
        rows.append((router_config.slug, router_config.display_name, "per-task pick", "auto"))
    if cli_ns.chatgpt_passthrough_available():
        for slug, display_name in chatgpt_passthrough_display_names().items():
            rows.append((slug, display_name, slug, "chatgpt"))
    if cli_ns.cursor_passthrough_available():
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
    from urllib.request import Request

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
    rows = cli_ns.fetch_vibeproxy_model_rows(base_url, provider_base_url=provider_base_url, provider=provider)
    direct_base_url = (provider_base_url or f"{base_url.rstrip('/')}/v1").rstrip("/")
    if not direct and _upstream_supports_responses_api(direct_base_url):
        print(f"Detected Responses-compatible endpoint at {direct_base_url}; use --direct for upstream-native routing.")
    if direct:
        models = _vibeproxy_direct_models(rows, direct_base_url)
        catalog_path = Path(direct_catalog_path or cli_ns.CATALOG_PATH).expanduser()
        config_path = Path(direct_config_path or cli_ns.CONFIG_PATH).expanduser()
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
        display_name = args.display_name or ("Z.AI GLM-5.2 Coding Plan" if args.coding_plan else "Z.AI GLM-5.2")
        row = {
            "id": "zai-glm-5-2-coding-plan" if args.coding_plan else "zai-glm-5-2",
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
    if args.configure_provider in _CHAT_PROVIDER_DEFAULTS:
        return _configure_chat_provider(settings_path, args)
    raise SystemExit(f"Unsupported configure provider: {args.configure_provider}")


# (provider_preset, default_base_url, default_api_key). A None base_url means
# --base-url is required; a default api_key fills in local servers' well-known
# placeholder tokens.
_CHAT_PROVIDER_DEFAULTS: dict[str, tuple[str, str | None, str]] = {
    "openai-compatible": ("generic-chat-completion-api", None, ""),
    "anthropic": ("anthropic", None, ""),
    "ollama": ("generic-chat-completion-api", "http://127.0.0.1:11434/v1", "ollama"),
    "lmstudio": ("generic-chat-completion-api", "http://127.0.0.1:1234/v1", "lm-studio"),
}


def _configure_chat_provider(settings_path: Path, args: argparse.Namespace) -> int:
    provider, default_base_url, default_api_key = _CHAT_PROVIDER_DEFAULTS[args.configure_provider]
    base_url = (args.base_url or default_base_url or "").strip().rstrip("/")
    if not base_url:
        raise SystemExit(f"--base-url is required for `configure {args.configure_provider}`")
    row = {
        "id": _slug_for_configured_row(args.configure_provider, args.model),
        "model": args.model,
        "display_name": args.display_name or args.model,
        "provider": provider,
        "base_url": base_url,
        "enabled": True,
    }
    _add_auth_fields(row, args)
    # Local servers (Ollama/LM Studio) use a well-known placeholder key when the
    # user provides none; real keys still win via _add_auth_fields above.
    if not (row.get("api_key") or row.get("api_key_env") or row.get("api_key_file")) and default_api_key:
        row["api_key"] = default_api_key
    if args.chat_completions_url:
        row["chat_completions_url"] = args.chat_completions_url
    return _write_configured_row(settings_path, row)


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


def _managed_config_blocks(default_slug: str, port: int, previous_top_level: dict[str, str] | None = None) -> tuple[str, str]:
    metadata = ""
    if previous_top_level:
        metadata = cli_ns.PREVIOUS_TOP_LEVEL_PREFIX + json.dumps(previous_top_level, sort_keys=True) + "\n"
    top_block = f'''{cli_ns.MANAGED_BEGIN}
{metadata}model = "{_toml_escape(default_slug)}"
model_provider = "{PROVIDER_NAME}"
model_catalog_json = "{_toml_escape(str(cli_ns.CATALOG_PATH))}"
{cli_ns.MANAGED_END}
'''

    provider_block = f'''{cli_ns.MANAGED_BEGIN}
[model_providers.{PROVIDER_NAME}]
name = "Codex Shim"
base_url = "http://127.0.0.1:{port}/v1"
wire_api = "responses"
experimental_bearer_token = "dummy"
request_max_retries = 0
stream_max_retries = 1
stream_idle_timeout_ms = 600000
supports_websockets = {str(websockets_enabled()).lower()}
{cli_ns.MANAGED_END}
'''
    return top_block, provider_block


def _remove_managed_config(text: str) -> str:
    while cli_ns.MANAGED_BEGIN in text:
        before, rest = text.split(cli_ns.MANAGED_BEGIN, 1)
        if cli_ns.MANAGED_END not in rest:
            return before
        _, after = rest.split(cli_ns.MANAGED_END, 1)
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
        if stripped == cli_ns.MANAGED_BEGIN:
            in_managed = True
            continue
        if stripped == cli_ns.MANAGED_END:
            in_managed = False
            continue
        if in_managed and stripped.startswith(cli_ns.PREVIOUS_TOP_LEVEL_PREFIX):
            encoded = stripped[len(cli_ns.PREVIOUS_TOP_LEVEL_PREFIX) :]
            try:
                payload = json.loads(encoded)
            except json.JSONDecodeError:
                return {}
            if isinstance(payload, dict):
                return {str(k): str(v) for k, v in payload.items() if k in cli_ns.MANAGED_TOP_LEVEL_KEYS}
    return {}


def _restore_missing_top_level_keys(text: str, previous_top_level: dict[str, str]) -> str:
    if not previous_top_level:
        return text
    current = _extract_top_level_key_lines(text, cli_ns.MANAGED_TOP_LEVEL_KEYS)
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


def chatgpt_passthrough_display_names() -> dict[str, str]:
    return {slug: slug for slug in sorted(chatgpt_passthrough_slugs())}
