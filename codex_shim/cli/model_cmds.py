"""Active-model resolution against Codex config.

Reads of patched constants/helpers and cross-command calls go through the
cli package namespace (cli_ns) at call time so test monkeypatches on
codex_shim.cli attributes keep working.
"""
from __future__ import annotations

from codex_shim import cli as cli_ns

from ..providers import (
    cursor_passthrough_display_names,
    is_cursor_passthrough_slug,
)
from ..settings import (
    CHATGPT_MODEL_SLUG,
    chatgpt_passthrough_slugs,
    default_model_slug,
    usable_byok_models,
)


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
        if not cli_ns.chatgpt_passthrough_available():
            raise SystemExit(
                "gpt-5.5 passthrough requires a Codex login. "
                "Run `codex login` so ~/.codex/auth.json contains tokens.access_token."
            )
        return requested if requested in chatgpt_passthrough_slugs() else CHATGPT_MODEL_SLUG
    if is_cursor_passthrough_slug(requested):
        if not cli_ns.cursor_passthrough_available():
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
    if not cli_ns.CODEX_CONFIG_PATH.exists():
        return None
    in_managed = False
    for line in cli_ns.CODEX_CONFIG_PATH.read_text().splitlines():
        stripped = line.strip()
        if stripped == cli_ns.MANAGED_BEGIN:
            in_managed = True
            continue
        if stripped == cli_ns.MANAGED_END:
            in_managed = False
            continue
        if in_managed and stripped.startswith("model = "):
            return stripped.split("=", 1)[1].strip().strip('"')
    return None


def _valid_model_slugs(models, router_config=None) -> set[str]:
    slugs = {model.slug for model in usable_byok_models(models)}
    if router_config is not None:
        slugs.add(router_config.slug)
    if cli_ns.chatgpt_passthrough_available():
        slugs.update(chatgpt_passthrough_slugs())
    if cli_ns.cursor_passthrough_available():
        slugs.update(cursor_passthrough_display_names())
    return slugs
