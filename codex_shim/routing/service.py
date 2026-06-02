from __future__ import annotations

from dataclasses import dataclass
from typing import Any

from aiohttp import web

from ..settings import ModelSettings, ShimModel


@dataclass(frozen=True)
class RoutingPolicy:
    max_retries: int = 1
    retryable_statuses: tuple[int, ...] = (408, 409, 429, 500, 502, 503, 504)
    fallback_enabled: bool = False


@dataclass(frozen=True)
class RouteResolution:
    requested_model: str
    selected_route: ShimModel
    fallback_route: ShimModel | None
    selected_by: str
    policy: RoutingPolicy


def resolve_model_route(settings: ModelSettings, body: dict[str, Any]) -> RouteResolution:
    requested = str(body.get("model") or "")
    route = settings.by_slug_or_model(requested)
    if route is None:
        raise web.HTTPNotFound(text=f"Unknown model slug/model: {requested}")
    all_models = settings.desktop_models()
    fallback_route: ShimModel | None = None
    for candidate in all_models:
        if candidate.slug == route.slug:
            continue
        if candidate.provider == route.provider:
            fallback_route = candidate
            break
    if fallback_route is None:
        for candidate in all_models:
            if candidate.slug != route.slug:
                fallback_route = candidate
                break
    selected_by = "slug" if requested == route.slug else "model"
    fallback_enabled = str(body.get("allow_fallback", "false")).lower() in {"1", "true", "yes", "on"}
    return RouteResolution(
        requested_model=requested,
        selected_route=route,
        fallback_route=fallback_route,
        selected_by=selected_by,
        policy=RoutingPolicy(fallback_enabled=fallback_enabled),
    )
