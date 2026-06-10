from __future__ import annotations

import os
from typing import Any

from aiohttp import web

from ..settings import CHATGPT_MODEL_SLUG, ModelSettings, ShimModel, chatgpt_passthrough_available

HELPER_SLUG_DEFAULTS = frozenset(
    {
        "codex-auto-review",
        "codex-auto_review",
    }
)


def helper_model_policy() -> str:
    raw = os.environ.get("CODEX_SHIM_HELPER_MODEL_POLICY", "fallback").strip().lower()
    return raw if raw in {"fallback", "reject"} else "fallback"


def helper_slug_prefixes() -> tuple[str, ...]:
    raw = os.environ.get("CODEX_SHIM_HELPER_SLUG_PREFIXES", "").strip()
    if raw:
        return tuple(part.strip().lower() for part in raw.split(",") if part.strip())
    return ("codex-auto-",)


def helper_fallback_slug(settings: ModelSettings) -> str | None:
    configured = os.environ.get("CODEX_SHIM_HELPER_FALLBACK_SLUG", "").strip()
    if configured:
        route = settings.by_slug_or_model(configured)
        if route is not None and route.visible:
            return route.slug
    if chatgpt_passthrough_available():
        return CHATGPT_MODEL_SLUG
    for model in settings.desktop_models():
        if not model.is_chatgpt:
            return model.slug
    return None


def is_helper_model_slug(requested: str) -> bool:
    slug = (requested or "").strip().lower()
    if not slug:
        return False
    if slug in HELPER_SLUG_DEFAULTS:
        return True
    if slug.endswith("-auto-review") or slug.endswith("_auto_review"):
        return True
    return any(slug.startswith(prefix) for prefix in helper_slug_prefixes())


def apply_helper_model_policy(
    settings: ModelSettings,
    body: dict[str, Any],
    *,
    requested: str,
) -> tuple[dict[str, Any], ShimModel | None, str | None]:
    """
    Rewrite helper/auto-review model slugs or reject the request.

    Returns (body, fallback_route, failure_category).
    """
    if not is_helper_model_slug(requested):
        return body, None, None
    policy = helper_model_policy()
    if policy == "reject":
        raise web.HTTPNotImplemented(
            text=f"Helper model {requested!r} is not supported on BYOK routes (CODEX_SHIM_HELPER_MODEL_POLICY=reject)."
        )
    fallback_slug = helper_fallback_slug(settings)
    if fallback_slug is None:
        raise web.HTTPNotImplemented(text=f"No fallback route available for helper model {requested!r}.")
    route = settings.by_slug_or_model(fallback_slug)
    if route is None:
        raise web.HTTPNotImplemented(text=f"Configured helper fallback slug not found: {fallback_slug!r}.")
    rewritten = dict(body)
    rewritten["model"] = fallback_slug
    return rewritten, route, "helper_model_rerouted"
