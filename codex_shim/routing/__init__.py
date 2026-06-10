from . import auto_router
from .auto_router import load_router_config, router_is_active
from .auto_router_service import AutoRouterService, active_router
from .image_gate import needs_image_generation
from .inference_context import (
    AGENT_MODE_AGENT,
    AGENT_MODE_ASK,
    AGENT_MODE_DEBUG,
    AGENT_MODE_PLAN,
    InferenceContext,
    agent_mode_for_cli_mode,
    metadata_mode_for_cli_mode,
    parse_inference_context,
)
from .model_catalog import ModelCatalogSnapshot, prefetch_model_catalog
from .service import RouteResolution, RoutingPolicy, resolve_model_route
from .subscription_catalog import (
    SubscriptionCatalogSnapshot,
    known_subscription_slugs,
    merge_desktop_models,
    refresh_subscription_catalog,
    subscription_passthrough_models,
)
from .workspace import (
    DESKTOP_WORKSPACE_REQUEST_KEYS,
    WORKSPACE_HEADER_KEYS,
    WORKSPACE_METADATA_KEYS,
    resolve_workspace,
)

__all__ = [
    "AutoRouterService",
    "ModelCatalogSnapshot",
    "SubscriptionCatalogSnapshot",
    "active_router",
    "auto_router",
    "known_subscription_slugs",
    "load_router_config",
    "merge_desktop_models",
    "needs_image_generation",
    "prefetch_model_catalog",
    "refresh_subscription_catalog",
    "router_is_active",
    "subscription_passthrough_models",
    "AGENT_MODE_AGENT",
    "AGENT_MODE_ASK",
    "AGENT_MODE_DEBUG",
    "AGENT_MODE_PLAN",
    "InferenceContext",
    "RouteResolution",
    "RoutingPolicy",
    "agent_mode_for_cli_mode",
    "metadata_mode_for_cli_mode",
    "parse_inference_context",
    "resolve_model_route",
    "DESKTOP_WORKSPACE_REQUEST_KEYS",
    "WORKSPACE_HEADER_KEYS",
    "WORKSPACE_METADATA_KEYS",
    "resolve_workspace",
]
