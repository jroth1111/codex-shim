from __future__ import annotations

from collections.abc import Awaitable, Callable
from typing import Any

from ..settings import ModelSettings, ShimModel, byok_model_has_credentials
from . import auto_router as router_module
from .discovery import available_model_slugs, by_slug_or_model

# (system_prompt, user_content) -> classifier completion text
Classifier = Callable[[str, str], Awaitable[str]]
# Builds a classifier transport for the configured classifier model. Injected by
# the composition root so routing never depends on provider HTTP plumbing.
ClassifierFactory = Callable[[ShimModel, router_module.RouterConfig], Classifier]


def active_router(settings: ModelSettings) -> router_module.RouterConfig | None:
    """Return RouterConfig only when enabled and at least one candidate is usable."""
    config = router_module.load_router_config(settings.path)
    if config and router_module.router_is_active(config, available_model_slugs(settings.load())):
        return config
    return None


class AutoRouterService:
    def __init__(self, settings: ModelSettings, classify_factory: ClassifierFactory | None = None):
        self._settings = settings
        self._classify_factory = classify_factory

    def active_router(self) -> router_module.RouterConfig | None:
        return active_router(self._settings)

    async def maybe_apply_auto_router(
        self, body: dict[str, Any], *, request: Any | None = None
    ) -> dict[str, Any]:
        config = router_module.load_router_config(self._settings.path)
        if not config or not config.effective_enabled:
            return body
        if str(body.get("model") or "") != config.slug:
            return body
        resolved, info = await self.resolve_auto_model_with_info(config, body)
        if resolved and resolved != config.slug:
            if router_module.router_log_enabled():
                print(f"[router] {config.slug} -> {resolved}", flush=True)
            if request is not None:
                # Stash the classifier's ranking (other candidates, best score
                # first) so failover can reuse it instead of an arbitrary walk.
                self._stash_ranking(request, resolved, info)
            new_body = dict(body)
            new_body["model"] = resolved
            return new_body
        return body

    @staticmethod
    def _stash_ranking(request: Any, resolved: str, info: dict[str, Any]) -> None:
        scores = info.get("scores") if isinstance(info, dict) else None
        if not isinstance(scores, dict) or not scores:
            return
        ranked = [
            slug
            for slug, _score in sorted(scores.items(), key=lambda kv: kv[1], reverse=True)
            if slug != resolved
        ]
        if ranked:
            try:
                setattr(request, "_codex_shim_router_ranked", ranked)
            except (AttributeError, TypeError):
                pass

    async def resolve_auto_model(self, config: router_module.RouterConfig, body: dict[str, Any]) -> str | None:
        resolved, _info = await self.resolve_auto_model_with_info(config, body)
        return resolved

    async def resolve_auto_model_with_info(
        self, config: router_module.RouterConfig, body: dict[str, Any]
    ) -> tuple[str | None, dict[str, Any]]:
        """Resolve the concrete slug AND return the classifier info (incl. raw
        ``scores``) so callers can reuse the ranking for failover."""
        models = self._settings.load()
        candidates = router_module.filter_available(config, available_model_slugs(models))
        if not candidates:
            return None, {}
        classify = None
        if config.classifier and self._classify_factory is not None:
            classifier_model = by_slug_or_model(self._settings, config.classifier)
            if (
                classifier_model is not None
                and byok_model_has_credentials(classifier_model)
                and (classifier_model.is_openai_chat or classifier_model.is_anthropic)
            ):
                classify = self._classify_factory(classifier_model, config)
        log = (lambda message: print(message, flush=True)) if router_module.router_log_enabled() else None
        resolved, info = await router_module.resolve_auto(
            config, candidates, body, classify, log=log
        )
        if not resolved:
            resolved = router_module.fallback_slug(
                config, candidates, has_image_task=router_module.has_images(body)
            )
        return resolved, info if isinstance(info, dict) else {}
