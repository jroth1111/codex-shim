"""Configured, ranked, capability-aware failover chain.

Replaces the old body-only, off-by-default, single-hop, non-stream fallback
(``allow_fallback``) with a settings/env-configurable ordered chain. Each hop is
filtered by what the task actually needs (image support, context-window fit) and
by the per-provider circuit breaker (open providers are skipped). The Auto
Router's ranking can feed the chain when available; otherwise a deterministic
discovery walk (same-provider-preferred) is used.
"""
from __future__ import annotations

import json
import os
from dataclasses import dataclass, field
from pathlib import Path
from typing import TYPE_CHECKING, Any

from ..settings import ModelSettings, ShimModel
from ..translate import estimate_input_tokens
from .discovery import by_slug_or_model, desktop_models
from .image_gate import needs_image_generation

if TYPE_CHECKING:
    from ..observability import ProviderHealthStore

# Statuses that should trigger a failover hop (rate-limit + server errors).
DEFAULT_FAILOVER_STATUSES = (429, 500, 502, 503, 504)
DEFAULT_MAX_HOPS = 3
_ENV_TRUTHY = {"1", "true", "yes", "on"}


@dataclass(frozen=True)
class FailoverConfig:
    enabled: bool = False
    chains: dict[str, list[str]] = field(default_factory=dict)
    only_statuses: tuple[int, ...] = DEFAULT_FAILOVER_STATUSES
    max_hops: int = DEFAULT_MAX_HOPS
    # Pre-first-byte failover for streaming turns (the Codex Desktop default
    # shape). On by default whenever failover is enabled, because it only
    # re-routes BEFORE any byte reaches the client — disable with
    # ``failover.stream: false`` or ``CODEX_SHIM_FAILOVER_STREAM=0``.
    stream: bool = True


@dataclass(frozen=True)
class FailoverHop:
    route: ShimModel
    reason: str


@dataclass(frozen=True)
class FailoverPlan:
    enabled: bool
    hops: tuple[FailoverHop, ...]
    only_statuses: tuple[int, ...]
    max_hops: int

    @property
    def routes(self) -> tuple[ShimModel, ...]:
        return tuple(hop.route for hop in self.hops)


def load_failover_config(settings_path: Path | str) -> FailoverConfig | None:
    """Read the optional top-level ``failover`` block from settings JSON."""
    path = Path(settings_path).expanduser()
    if not path.exists():
        return None
    try:
        data = json.loads(path.read_text())
    except (OSError, json.JSONDecodeError):
        return None
    if not isinstance(data, dict):
        return None
    raw = data.get("failover")
    if not isinstance(raw, dict):
        return None
    chains: dict[str, list[str]] = {}
    raw_chains = raw.get("chains") or {}
    if isinstance(raw_chains, dict):
        for slug, targets in raw_chains.items():
            if isinstance(targets, list):
                chains[str(slug)] = [str(t) for t in targets if t]
    statuses = raw.get("only_statuses")
    only_statuses = (
        tuple(int(s) for s in statuses if isinstance(s, (int, str)))
        if isinstance(statuses, list) and statuses
        else DEFAULT_FAILOVER_STATUSES
    )
    try:
        max_hops = int(raw.get("max_hops", DEFAULT_MAX_HOPS))
    except (TypeError, ValueError):
        max_hops = DEFAULT_MAX_HOPS
    return FailoverConfig(
        enabled=bool(raw.get("enabled", False)),
        chains=chains,
        only_statuses=only_statuses,
        max_hops=max_hops,
        stream=bool(raw.get("stream", True)),
    )


def failover_enabled(body: dict[str, Any], settings_path: Path | str | None = None, *, config: FailoverConfig | None = None) -> bool:
    """True when failover is on via env, settings, or the legacy body flag."""
    if os.environ.get("CODEX_SHIM_FAILOVER_ENABLED", "").strip().lower() in _ENV_TRUTHY:
        return True
    if config is None and settings_path is not None:
        config = load_failover_config(settings_path)
    if config is not None and config.enabled:
        return True
    return str(body.get("allow_fallback", "false")).strip().lower() in _ENV_TRUTHY


def stream_failover_enabled(config: FailoverConfig | None) -> bool:
    """Whether pre-first-byte failover applies to streaming turns. Defaults on
    (it only re-routes before any byte is flushed); ``CODEX_SHIM_FAILOVER_STREAM``
    or ``failover.stream`` can force it on/off explicitly."""
    env = os.environ.get("CODEX_SHIM_FAILOVER_STREAM", "").strip().lower()
    if env in _ENV_TRUTHY:
        return True
    if env in {"0", "false", "no", "off"}:
        return False
    return config.stream if config is not None else True


def _supports_images(candidate: ShimModel) -> bool:
    if candidate.no_image_support:
        return False
    caps = getattr(candidate, "capabilities", None)
    if caps is not None and not caps.supports_images:
        return False
    return True


def is_delegate_route(route: ShimModel) -> bool:
    """A delegate (Cursor) route owns its own agent loop; a mapped route does not.
    Failover must not mix the two -- delegating a turn to a mapped provider (or
    vice versa) changes the execution contract mid-task."""
    return bool(
        getattr(route, "is_cursor_cli", False)
        or getattr(route, "is_cursor_acp", False)
        or getattr(route, "is_cursor_agent", False)
    )


def _fits_context(candidate: ShimModel, est_tokens: int) -> bool:
    limit = candidate.max_context_limit
    if not limit or est_tokens <= 0:
        return True
    return est_tokens <= int(limit * 0.9)


def _ordered_candidates(
    settings: ModelSettings,
    route: ShimModel,
    config: FailoverConfig | None,
    router_ranked: list[ShimModel] | None,
) -> tuple[list[ShimModel], str]:
    """Ordered candidate routes (excluding the primary). Returns (routes, reason)."""
    explicit = config.chains.get(route.slug) if config else None
    if explicit:
        resolved = [c for c in (by_slug_or_model(settings, slug) for slug in explicit) if c is not None]
        if resolved:
            return resolved, "configured_chain"
    if router_ranked:
        return list(router_ranked), "router_ranked"
    # Discovery walk: same-provider-preferred, then the rest.
    models = desktop_models(settings)
    same = [m for m in models if m.provider == route.provider and m.slug != route.slug]
    other = [m for m in models if m.provider != route.provider]
    return same + other, "discovery"


def build_failover_plan(
    settings: ModelSettings,
    route: ShimModel,
    body: dict[str, Any],
    *,
    config: FailoverConfig | None = None,
    health: "ProviderHealthStore | None" = None,
    router_ranked: list[ShimModel] | None = None,
) -> FailoverPlan:
    """Build the ordered, filtered failover chain for this route + task."""
    if config is None:
        config = load_failover_config(settings.path) or FailoverConfig()
    enabled = failover_enabled(body, config=config)
    image_needed = needs_image_generation(body)
    est_tokens = estimate_input_tokens(body)

    candidates, reason = _ordered_candidates(settings, route, config, router_ranked)
    primary_delegate = is_delegate_route(route)
    hops: list[FailoverHop] = []
    seen = {route.slug}
    for candidate in candidates:
        if candidate.slug in seen:
            continue
        # Never mix delegate and mapped execution contracts in one chain.
        if is_delegate_route(candidate) != primary_delegate:
            continue
        if image_needed and not _supports_images(candidate):
            continue
        if not _fits_context(candidate, est_tokens):
            continue
        if health is not None and health.should_skip(candidate.provider):
            continue
        hops.append(FailoverHop(candidate, reason=reason))
        seen.add(candidate.slug)
        if len(hops) >= max(1, config.max_hops):
            break
    return FailoverPlan(
        enabled=enabled,
        hops=tuple(hops),
        only_statuses=config.only_statuses,
        max_hops=config.max_hops,
    )
