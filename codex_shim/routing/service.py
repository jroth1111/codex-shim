from __future__ import annotations

from dataclasses import dataclass
from typing import TYPE_CHECKING, Any

from aiohttp import web

from ..settings import ModelSettings, ShimModel
from .discovery import desktop_models
from .failover import failover_enabled, load_failover_config, stream_failover_enabled
from .image_gate import needs_image_generation
from .inference_context import InferenceContext, parse_inference_context
from .model_catalog import ModelCatalogSnapshot
from .model_resolution import resolve_model_with_prefetch

if TYPE_CHECKING:
    from ..persistence import OperationalStore

DEFAULT_RETRYABLE_STATUSES = (408, 409, 429, 500, 502, 503, 504)
PROVIDER_MAX_RETRIES: dict[str, int] = {
    "generic-chat-completion-api": 1,
    "anthropic": 1,
    "cursor-agent": 0,
    "cursor-agent-cli": 0,
    "cursor-cli": 0,
    "cursor-acp": 0,
    "cursor-agent-acp": 0,
    "cursor-agent-grpc": 0,
    "chatgpt": 0,
}


@dataclass(frozen=True)
class RoutingPolicy:
    max_retries: int = 1
    retryable_statuses: tuple[int, ...] = DEFAULT_RETRYABLE_STATUSES
    fallback_enabled: bool = False
    retry_on_stream: bool = False
    fallback_only_statuses: tuple[int, ...] = DEFAULT_RETRYABLE_STATUSES
    # Backoff between retryable attempts (exponential, capped, jittered). The
    # dispatcher floors the delay on a parsed upstream Retry-After when
    # respect_retry_after is set, so 429/503 responses do not get re-hit within
    # milliseconds and burn the rate budget for nothing.
    backoff_base_ms: int = 500
    backoff_cap_ms: int = 30_000
    respect_retry_after: bool = True
    # When True, a streaming turn that fails BEFORE any byte is flushed to the
    # client raises PreFirstByteFailure so the gateway can fall back to another
    # provider instead of failing the whole stream. Default off (byte-identical
    # to legacy behavior) because it changes the streaming handler contract.
    pre_first_byte_stream_failover: bool = False


@dataclass(frozen=True)
class RouteResolution:
    requested_model: str
    selected_route: ShimModel
    fallback_route: ShimModel | None
    selected_by: str
    policy: RoutingPolicy
    inference: InferenceContext
    resolved_model_id: str
    prefetch_status: str
    catalog: ModelCatalogSnapshot | None = None


def _max_retries_for_provider(provider: str) -> int:
    key = (provider or "").strip().lower()
    return PROVIDER_MAX_RETRIES.get(key, 1)


def _candidate_supports_images(candidate: ShimModel) -> bool:
    if candidate.no_image_support:
        return False
    capabilities = getattr(candidate, "capabilities", None)
    if capabilities is not None and not capabilities.supports_images:
        return False
    raw = candidate.raw or {}
    entry = raw.get("subscription_catalog_entry")
    if isinstance(entry, dict):
        modalities = entry.get("input_modalities")
        if isinstance(modalities, list) and "image" not in modalities:
            return False
    return True


def _fallback_route(
    settings: ModelSettings,
    route: ShimModel,
    body: dict[str, Any] | None = None,
) -> ShimModel | None:
    all_models = desktop_models(settings)
    image_needed = needs_image_generation(body) if body else False
    fallback_route: ShimModel | None = None
    for candidate in all_models:
        if candidate.slug == route.slug:
            continue
        if image_needed and not _candidate_supports_images(candidate):
            continue
        if candidate.provider == route.provider:
            fallback_route = candidate
            break
    if fallback_route is None:
        for candidate in all_models:
            if candidate.slug == route.slug:
                continue
            if image_needed and not _candidate_supports_images(candidate):
                continue
            fallback_route = candidate
            break
    return fallback_route


def resolve_model_route(
    settings: ModelSettings,
    body: dict[str, Any],
    *,
    request: web.Request | None = None,
    store: OperationalStore | None = None,
) -> RouteResolution:
    requested = str(body.get("model") or "")
    route, selected_by, prefetch_status, resolved_model_id, catalog = resolve_model_with_prefetch(
        settings, requested, store
    )
    if route is None:
        raise web.HTTPNotFound(text=f"Unknown model slug/model: {requested}")

    fallback_route = _fallback_route(settings, route, body)
    failover_config = load_failover_config(settings.path)
    fallback_enabled = failover_enabled(body, config=failover_config)
    policy = RoutingPolicy(
        max_retries=_max_retries_for_provider(route.provider),
        fallback_enabled=fallback_enabled,
        # Without this, streaming turns (the Codex Desktop default) can never
        # fail over — the gateway requires it for stream:true. Default it on
        # whenever failover is enabled so failover is real on the path Desktop
        # actually uses, not just the rare non-streaming request.
        pre_first_byte_stream_failover=fallback_enabled and stream_failover_enabled(failover_config),
    )
    inference = parse_inference_context(
        body,
        request=request,
        route_transport=route.transport,
        selected_by=selected_by,
        resolved_model_id=resolved_model_id,
        prefetch_status=prefetch_status,  # type: ignore[arg-type]
    )
    return RouteResolution(
        requested_model=requested or resolved_model_id,
        selected_route=route,
        fallback_route=fallback_route,
        selected_by=selected_by,
        policy=policy,
        inference=inference,
        resolved_model_id=resolved_model_id,
        prefetch_status=prefetch_status,
        catalog=catalog,
    )
