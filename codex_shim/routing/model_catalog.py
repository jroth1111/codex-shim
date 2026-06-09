from __future__ import annotations

import os
import time
from dataclasses import dataclass
from typing import TYPE_CHECKING, Any, Literal

from .inference_context import PrefetchStatus

if TYPE_CHECKING:
    from ..persistence import OperationalStore
    from ..settings import ModelSettings

CATALOG_NAMESPACE = "model_catalog"
CATALOG_CACHE_KEY = "desktop"
CATALOG_TTL_SECONDS = 120
PREFETCH_TIMEOUT_SECONDS = 2.0


@dataclass(frozen=True)
class ModelCatalogSnapshot:
    usable_model_ids: tuple[str, ...]
    default_model_id: str | None
    parameterized_model_ids: tuple[str, ...]
    status: PrefetchStatus
    selected_route_slug: str | None = None


def _snapshot_from_settings(settings: ModelSettings) -> ModelCatalogSnapshot:
    models = settings.desktop_models()
    usable: list[str] = []
    parameterized: list[str] = []
    default_id: str | None = None
    cursor_slugs: list[str] = []

    for model in models:
        if model.is_chatgpt:
            continue
        model_id = model.model or model.slug
        usable.append(model_id)
        raw = model.raw if isinstance(model.raw, dict) else {}
        if raw.get("parameters") or raw.get("parameterDefinitions"):
            parameterized.append(model_id)
        if getattr(model, "is_cursor_cli", False) or getattr(model, "is_cursor_acp", False):
            cursor_slugs.append(model.slug)

    if cursor_slugs:
        default_id = next((m.model or m.slug for m in models if m.slug == cursor_slugs[0]), usable[0] if usable else None)
    elif usable:
        default_id = usable[0]

    selected_slug = cursor_slugs[0] if cursor_slugs else (models[0].slug if models else None)
    return ModelCatalogSnapshot(
        usable_model_ids=tuple(usable),
        default_model_id=default_id,
        parameterized_model_ids=tuple(parameterized),
        status="loaded",
        selected_route_slug=selected_slug,
    )


def _read_cache(store: OperationalStore | None) -> dict[str, Any] | None:
    if store is None:
        return None
    return store.get(CATALOG_NAMESPACE, CATALOG_CACHE_KEY)


def _write_cache(store: OperationalStore | None, snapshot: ModelCatalogSnapshot) -> None:
    if store is None:
        return
    store.put(
        CATALOG_NAMESPACE,
        CATALOG_CACHE_KEY,
        {
            "timestamp": int(time.time()),
            "usable_model_ids": list(snapshot.usable_model_ids),
            "default_model_id": snapshot.default_model_id,
            "parameterized_model_ids": list(snapshot.parameterized_model_ids),
            "status": snapshot.status,
            "selected_route_slug": snapshot.selected_route_slug,
        },
    )


def _snapshot_from_cache(payload: dict[str, Any]) -> ModelCatalogSnapshot:
    return ModelCatalogSnapshot(
        usable_model_ids=tuple(payload.get("usable_model_ids") or []),
        default_model_id=payload.get("default_model_id"),
        parameterized_model_ids=tuple(payload.get("parameterized_model_ids") or []),
        status=payload.get("status") or "loaded",  # type: ignore[arg-type]
        selected_route_slug=payload.get("selected_route_slug"),
    )


def _live_catalog_enabled() -> bool:
    return os.environ.get("CODEX_SHIM_CURSOR_CATALOG_LIVE", "").strip().lower() in {
        "1",
        "true",
        "yes",
        "on",
    }


def _snapshot_from_live_rpc() -> ModelCatalogSnapshot | None:
    if not _live_catalog_enabled():
        return None
    try:
        from ..providers.cursor_agent.catalog_rpc import fetch_usable_model_ids_sync

        model_ids = fetch_usable_model_ids_sync(timeout_seconds=PREFETCH_TIMEOUT_SECONDS)
    except Exception:
        return None
    if not model_ids:
        return None
    default_id = model_ids[0]
    return ModelCatalogSnapshot(
        usable_model_ids=tuple(model_ids),
        default_model_id=default_id,
        parameterized_model_ids=(),
        status="loaded",
        selected_route_slug=None,
    )


def prefetch_model_catalog(
    settings: ModelSettings,
    store: OperationalStore | None = None,
    *,
    force_refresh: bool = False,
) -> ModelCatalogSnapshot:
    """
    Mirror Cursor model-service parallel prefetch (usable + default + parameterized).

    Uses a short TTL cache in persistence. Rebuilds from settings.json by default;
    set ``CODEX_SHIM_CURSOR_CATALOG_LIVE=1`` to call GetUsableModels when authed.
    """
    if not force_refresh:
        cached = _read_cache(store)
        if cached is not None:
            age = int(time.time()) - int(cached.get("timestamp") or 0)
            if age <= CATALOG_TTL_SECONDS:
                return _snapshot_from_cache(cached)

    started = time.monotonic()
    try:
        snapshot = _snapshot_from_live_rpc() or _snapshot_from_settings(settings)
    except Exception:
        cached = _read_cache(store)
        if cached is not None:
            stale = _snapshot_from_cache(cached)
            return ModelCatalogSnapshot(
                usable_model_ids=stale.usable_model_ids,
                default_model_id=stale.default_model_id,
                parameterized_model_ids=stale.parameterized_model_ids,
                status="error",
                selected_route_slug=stale.selected_route_slug,
            )
        return ModelCatalogSnapshot((), None, (), "error")

    elapsed = time.monotonic() - started
    if elapsed > PREFETCH_TIMEOUT_SECONDS:
        snapshot = ModelCatalogSnapshot(
            usable_model_ids=snapshot.usable_model_ids,
            default_model_id=snapshot.default_model_id,
            parameterized_model_ids=snapshot.parameterized_model_ids,
            status="timed_out",
            selected_route_slug=snapshot.selected_route_slug,
        )
    _write_cache(store, snapshot)
    return snapshot
