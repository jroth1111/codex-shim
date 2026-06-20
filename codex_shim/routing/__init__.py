from . import auto_router
from .auto_router_service import AutoRouterService
from .discovery import (
    available_model_slugs,
    by_slug_or_model,
    chatgpt_passthrough_model,
    chatgpt_passthrough_slugs,
    desktop_models,
)
from .failover import (
    FailoverConfig,
    FailoverHop,
    FailoverPlan,
    build_failover_plan,
    failover_enabled,
    load_failover_config,
)
from .helper_models import apply_helper_model_policy, is_helper_model_slug
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
from .model_catalog import prefetch_model_catalog
from .service import RouteResolution, RoutingPolicy, resolve_model_route
from .subscription_catalog import (
    SubscriptionCatalogSnapshot,
    known_subscription_slugs,
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
    "FailoverConfig",
    "FailoverHop",
    "FailoverPlan",
    "SubscriptionCatalogSnapshot",
    "auto_router",
    "build_failover_plan",
    "failover_enabled",
    "load_failover_config",
    "known_subscription_slugs",
    "apply_helper_model_policy",
    "available_model_slugs",
    "by_slug_or_model",
    "chatgpt_passthrough_model",
    "chatgpt_passthrough_slugs",
    "desktop_models",
    "is_helper_model_slug",
    "needs_image_generation",
    "prefetch_model_catalog",
    "refresh_subscription_catalog",
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
