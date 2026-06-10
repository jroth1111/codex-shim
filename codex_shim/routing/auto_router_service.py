from __future__ import annotations

from collections.abc import Awaitable, Callable
from typing import Any

from ..settings import ModelSettings, ShimModel, available_model_slugs, byok_model_has_credentials
from . import auto_router as router_module

# (system_prompt, user_content) -> classifier completion text
Classifier = Callable[[str, str], Awaitable[str]]
# Builds a classifier transport for the configured classifier model. Injected by
# the composition root so routing never depends on provider HTTP plumbing.
ClassifierFactory = Callable[[ShimModel, router_module.RouterConfig], Classifier]


def active_router(settings: ModelSettings) -> router_module.RouterConfig | None:
    """Return RouterConfig only when enabled and at least one candidate is usable."""
    config = settings.load_router()
    if config and router_module.router_is_active(config, available_model_slugs(settings.load())):
        return config
    return None


class AutoRouterService:
    def __init__(self, settings: ModelSettings, classify_factory: ClassifierFactory | None = None):
        self._settings = settings
        self._classify_factory = classify_factory

    def active_router(self) -> router_module.RouterConfig | None:
        return active_router(self._settings)

    async def maybe_apply_auto_router(self, body: dict[str, Any]) -> dict[str, Any]:
        config = self._settings.load_router()
        if not config or not config.effective_enabled:
            return body
        if str(body.get("model") or "") != config.slug:
            return body
        resolved = await self.resolve_auto_model(config, body)
        if resolved and resolved != config.slug:
            if router_module.router_log_enabled():
                print(f"[router] {config.slug} -> {resolved}", flush=True)
            new_body = dict(body)
            new_body["model"] = resolved
            return new_body
        return body

    async def resolve_auto_model(self, config: router_module.RouterConfig, body: dict[str, Any]) -> str | None:
        models = self._settings.load()
        candidates = router_module.filter_available(config, available_model_slugs(models))
        if not candidates:
            return None
        classify = None
        if config.classifier and self._classify_factory is not None:
            classifier_model = self._settings.by_slug_or_model(config.classifier)
            if (
                classifier_model is not None
                and byok_model_has_credentials(classifier_model)
                and (classifier_model.is_openai_chat or classifier_model.is_anthropic)
            ):
                classify = self._classify_factory(classifier_model, config)
        log = (lambda message: print(message, flush=True)) if router_module.router_log_enabled() else None
        resolved, _info = await router_module.resolve_auto(
            config, candidates, body, classify, log=log
        )
        return resolved or router_module.fallback_slug(
            config, candidates, has_image_task=router_module.has_images(body)
        )
