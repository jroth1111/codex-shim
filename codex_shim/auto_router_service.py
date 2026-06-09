from __future__ import annotations

from typing import TYPE_CHECKING, Any

from aiohttp import ClientSession, ClientTimeout

from . import router as router_module
from .settings import ModelSettings, ShimModel, available_model_slugs, byok_model_has_credentials

if TYPE_CHECKING:
    from .server import ShimServer


def active_router(settings: ModelSettings) -> router_module.RouterConfig | None:
    """Return RouterConfig only when enabled and at least one candidate is usable."""
    config = settings.load_router()
    if config and router_module.router_is_active(config, available_model_slugs(settings.load())):
        return config
    return None


class AutoRouterService:
    def __init__(self, server: ShimServer):
        self._server = server

    def active_router(self) -> router_module.RouterConfig | None:
        return active_router(self._server.settings)

    async def maybe_apply_auto_router(self, body: dict[str, Any]) -> dict[str, Any]:
        config = self._server.settings.load_router()
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
        models = self._server.settings.load()
        candidates = router_module.filter_available(config, available_model_slugs(models))
        if not candidates:
            return None
        classify = None
        if config.classifier:
            classifier_model = self._server.settings.by_slug_or_model(config.classifier)
            if (
                classifier_model is not None
                and byok_model_has_credentials(classifier_model)
                and (classifier_model.is_openai_chat or classifier_model.is_anthropic)
            ):
                classify = self.make_classifier(classifier_model, config)
        log = (lambda message: print(message, flush=True)) if router_module.router_log_enabled() else None
        resolved, _info = await router_module.resolve_auto(
            config, candidates, body, classify, log=log
        )
        return resolved or router_module.fallback_slug(
            config, candidates, has_image_task=router_module.has_images(body)
        )

    def make_classifier(self, model: ShimModel, config: router_module.RouterConfig):
        from .server import _anthropic_headers, _anthropic_text, _join_url, _openai_headers

        timeout = ClientTimeout(total=config.timeout + 5, sock_connect=config.timeout, sock_read=config.timeout)

        async def classify(system_prompt: str, user_content: str) -> str:
            async with ClientSession(timeout=timeout) as session:
                if model.is_anthropic:
                    url = _join_url(model.base_url, "/messages")
                    payload = {
                        "model": model.model,
                        "max_tokens": config.max_tokens,
                        "system": system_prompt,
                        "messages": [{"role": "user", "content": user_content}],
                    }
                    upstream = await session.post(url, json=payload, headers=_anthropic_headers(model))
                    upstream.raise_for_status()
                    data = await upstream.json(content_type=None)
                    return _anthropic_text(data)
                url = _join_url(model.base_url, "/chat/completions")
                payload = {
                    "model": model.model,
                    "stream": False,
                    "temperature": 0,
                    "max_tokens": config.max_tokens,
                    "messages": [
                        {"role": "system", "content": system_prompt},
                        {"role": "user", "content": user_content},
                    ],
                }
                upstream = await session.post(url, json=payload, headers=_openai_headers(model))
                upstream.raise_for_status()
                data = await upstream.json(content_type=None)
                message = (data.get("choices") or [{}])[0].get("message") or {}
                return str(message.get("content") or "")

        return classify
