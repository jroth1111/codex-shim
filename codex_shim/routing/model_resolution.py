from __future__ import annotations

from dataclasses import dataclass
from typing import TYPE_CHECKING

from .discovery import by_slug_or_model, desktop_models
from .inference_context import PrefetchStatus
from .model_catalog import ModelCatalogSnapshot, prefetch_model_catalog

if TYPE_CHECKING:
    from ..persistence import OperationalStore
    from ..settings import ModelSettings, ShimModel

AUTO_MODEL_ALIASES = frozenset({"auto", "default", ""})


@dataclass(frozen=True)
class ModelResolutionResult:
    route: ShimModel
    selected_by: str
    resolved_model_id: str
    prefetch_status: PrefetchStatus
    requested_model: str
    catalog: ModelCatalogSnapshot | None = None


def _is_auto_request(requested: str) -> bool:
    return requested.strip().lower() in AUTO_MODEL_ALIASES


def resolve_auto_model(
    settings: ModelSettings,
    requested: str,
    *,
    catalog: ModelCatalogSnapshot | None = None,
) -> ModelResolutionResult | None:
    if not _is_auto_request(requested):
        return None

    models = desktop_models(settings)
    if not models:
        return None

    prefetch_status: PrefetchStatus = catalog.status if catalog is not None else "loaded"
    resolved_id = catalog.default_model_id if catalog and catalog.default_model_id else None
    route: ShimModel | None = None

    if catalog and catalog.selected_route_slug:
        route = by_slug_or_model(settings, catalog.selected_route_slug)

    if route is None:
        cursor_routes = [m for m in models if getattr(m, "is_cursor_cli", False) or getattr(m, "is_cursor_acp", False)]
        candidates = cursor_routes or models
        route = candidates[0]

    if resolved_id is None:
        resolved_id = route.model or route.slug

    return ModelResolutionResult(
        route=route,
        selected_by="auto",
        resolved_model_id=resolved_id,
        prefetch_status=prefetch_status,
        requested_model=requested or "auto",
        catalog=catalog,
    )


def _matches_requested(model: ShimModel, requested: str) -> bool:
    return model.slug == requested or model.model == requested


def _unavailable_exact_match(settings: ModelSettings, requested: str) -> ShimModel | None:
    """If the client asked for a configured but hidden model, surface it as unroutable."""
    for model in settings.load():
        if _matches_requested(model, requested) and not model.visible:
            return model
    return None


def resolve_model_with_prefetch(
    settings: ModelSettings,
    requested: str,
    store: OperationalStore | None = None,
) -> tuple[ShimModel | None, str, PrefetchStatus, str, ModelCatalogSnapshot | None]:
    """
    Returns (route, selected_by, prefetch_status, resolved_model_id, catalog).
    """
    requested = (requested or "").strip()
    catalog = prefetch_model_catalog(settings, store)
    hidden = _unavailable_exact_match(settings, requested)
    if hidden is not None:
        return None, "unavailable", "error", requested, catalog
    auto = resolve_auto_model(settings, requested, catalog=catalog)
    if auto is not None:
        return auto.route, auto.selected_by, auto.prefetch_status, auto.resolved_model_id, catalog

    route = by_slug_or_model(settings, requested)
    if route is None:
        return None, "unknown", "error", requested, catalog

    selected_by = "slug" if requested == route.slug else "model"
    return route, selected_by, catalog.status, route.model, catalog
