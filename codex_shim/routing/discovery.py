"""Model discovery: compose BYOK settings rows with subscription and cursor
passthrough availability into the routable model set.

This is the routing-side complement to the platform settings schema: settings
parses and normalizes rows; discovery decides what is actually offered.
"""
from __future__ import annotations

from pathlib import Path

from ..settings import (
    CHATGPT_MODEL_SLUG,
    ModelSettings,
    NormalizedModel,
    chatgpt_passthrough_available,
    normalize_chatgpt_model_request,
    usable_byok_models,
)
from . import subscription_catalog


def desktop_models(settings: ModelSettings) -> list[NormalizedModel]:
    """Visible BYOK rows merged with the subscription catalog entries."""
    # Call through the module so test patches on the source apply.
    return subscription_catalog.merge_desktop_models(settings.visible_models())


def by_slug_or_model(
    settings: ModelSettings,
    requested: str,
    *,
    include_unavailable: bool = False,
) -> NormalizedModel | None:
    models = settings.load() if include_unavailable else desktop_models(settings)
    requested = normalize_chatgpt_model_request(requested, models)
    by_slug = {m.slug: m for m in models}
    if requested in by_slug:
        return by_slug[requested]
    matches = [m for m in models if m.model == requested]
    if len(matches) == 1:
        return matches[0]
    return None


def chatgpt_passthrough_model(auth_path: Path | None = None) -> NormalizedModel | None:
    models = subscription_catalog.subscription_passthrough_models(auth_path)
    if not models:
        return None
    for model in models:
        if model.slug == CHATGPT_MODEL_SLUG:
            return model
    return models[0]


def subscription_passthrough_slugs_models() -> list[NormalizedModel]:
    return subscription_catalog.subscription_passthrough_models()


def chatgpt_passthrough_slugs() -> set[str]:
    return {model.slug for model in subscription_passthrough_slugs_models()}


def available_model_slugs(models: list[NormalizedModel]) -> set[str]:
    """Every routable slug: usable BYOK models plus available passthrough slugs."""
    # Lazy: a module-level providers import would cycle (providers eagerly
    # imports routing for the dispatcher contract). Call-time resolution also
    # keeps the conftest availability patches effective.
    from ..providers import cursor_passthrough_available, cursor_passthrough_display_names

    slugs = {model.slug for model in usable_byok_models(models)}
    if chatgpt_passthrough_available():
        slugs |= chatgpt_passthrough_slugs()
    if cursor_passthrough_available():
        slugs |= set(cursor_passthrough_display_names())
    return slugs
