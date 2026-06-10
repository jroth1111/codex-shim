"""Admin surface: health, model listing, and the picker UI endpoints."""
from __future__ import annotations

import json
import secrets
import time
from typing import TYPE_CHECKING, Any

from aiohttp import web

from ..clientconfig import picker
from ..routing import auto_router as router_module
from ..routing import chatgpt_passthrough_slugs, desktop_models, refresh_subscription_catalog
from ..settings import chatgpt_passthrough_available

if TYPE_CHECKING:
    from ..server import ShimServer

PICKER_TOKEN_HEADER = picker.PICKER_TOKEN_HEADER


def _cursor_passthrough_available() -> bool:
    # Call-time lookup so test patches on the providers surface apply.
    from ..providers import cursor_passthrough_available

    return cursor_passthrough_available()


def _cursor_passthrough_display_names() -> dict[str, str]:
    from ..providers import cursor_passthrough_display_names

    return cursor_passthrough_display_names()


class AdminHandlers:
    """Health/models/picker endpoints; wraps the composition root."""

    def __init__(self, server: "ShimServer") -> None:
        self._server = server

    async def picker_page(self, _request: web.Request) -> web.Response:
        return web.Response(text=picker.picker_html(self._server.picker_token), content_type="text/html")

    async def api_models(self, request: web.Request) -> web.Response:
        current = picker.current_managed_model()
        data: list[dict[str, Any]] = []
        include_unavailable = str(request.query.get("include_unavailable") or "").lower() in {"1", "true", "yes", "on"}
        models = (
            [*desktop_models(self._server.settings), *self._server.settings.unavailable_models()]
            if include_unavailable
            else desktop_models(self._server.settings)
        )
        router_config = self._server.auto_router.active_router()
        if router_config is not None:
            data.append(
                {
                    "slug": router_config.slug,
                    "display_name": router_config.display_name,
                    "provider": "auto",
                    "active": current == router_config.slug,
                }
            )
        if _cursor_passthrough_available():
            for slug, display_name in _cursor_passthrough_display_names().items():
                data.append(
                    {
                        "slug": slug,
                        "display_name": display_name,
                        "provider": "cursor",
                        "active": current == slug,
                    }
                )
        for m in models:
            row = {
                "slug": m.slug,
                "display_name": m.display_name,
                "provider": m.provider,
                "active": current == m.slug,
            }
            if include_unavailable:
                row["visible"] = m.visible
                row["unavailable_reason"] = m.unavailable_reason
            data.append(row)
        return web.json_response(data)

    def _valid_picker_token(self, request: web.Request) -> bool:
        token = request.headers.get(PICKER_TOKEN_HEADER, "")
        return secrets.compare_digest(token, self._server.picker_token)

    async def switch_model(self, request: web.Request) -> web.Response:
        if not self._valid_picker_token(request):
            return web.json_response({"error": "forbidden"}, status=403)
        try:
            body = await request.json()
        except json.JSONDecodeError:
            return web.json_response({"error": "invalid JSON body"}, status=400)
        slug = str(body.get("slug") or "").strip()
        if not slug:
            return web.json_response({"error": "slug is required"}, status=400)
        models = desktop_models(self._server.settings)
        router_config = self._server.auto_router.active_router()
        valid = {m.slug for m in models}
        display_for: dict[str, str] = {m.slug: m.display_name for m in models}
        if router_config is not None:
            valid.add(router_config.slug)
            display_for[router_config.slug] = router_config.display_name
        if _cursor_passthrough_available():
            valid.update(_cursor_passthrough_display_names())
            display_for.update(_cursor_passthrough_display_names())
        if slug not in valid:
            return web.json_response({"error": f"unknown model: {slug}"}, status=404)
        picker.set_active_model(slug, display_for.get(slug, slug))
        restart = bool(body.get("restart_codex"))
        if restart:
            picker.restart_codex_app()
        return web.json_response({"ok": True, "model": slug, "restarted": restart})

    async def health(self, _request: web.Request) -> web.Response:
        from ..settings import usable_byok_models

        models = usable_byok_models(self._server.settings.load())
        chatgpt_ok = chatgpt_passthrough_available()
        cursor_ok = _cursor_passthrough_available()
        passthrough_count = len(chatgpt_passthrough_slugs()) if chatgpt_ok else 0
        if cursor_ok:
            passthrough_count += len(_cursor_passthrough_display_names())
        count = len(models) + passthrough_count
        snapshot = getattr(self._server, "subscription_catalog", None) or refresh_subscription_catalog()
        return web.json_response(
            {
                "ok": True,
                "models": count,
                "chatgpt_passthrough": chatgpt_ok,
                "cursor_passthrough": cursor_ok,
                "auto_router": self._server.auto_router.active_router() is not None,
                "subscription_catalog_status": snapshot.status,
                "subscription_model_count": len(snapshot.models),
                "subscription_cache_age_s": snapshot.age_s,
            }
        )

    async def models(self, _request: web.Request) -> web.Response:
        now = int(time.time())
        data: list[dict[str, Any]] = []
        router_config = self._server.auto_router.active_router()
        if router_config is not None:
            data.append(router_module.router_models_entry(router_config, now))
        if _cursor_passthrough_available():
            for slug in sorted(_cursor_passthrough_display_names()):
                data.append(
                    {
                        "id": slug,
                        "object": "model",
                        "created": now,
                        "owned_by": "cursor",
                    }
                )
        data.extend(
            {
                "id": model.slug,
                "object": "model",
                "created": now,
                "owned_by": "chatgpt" if model.is_chatgpt else "codex-shim",
            }
            for model in desktop_models(self._server.settings)
        )
        return web.json_response({"object": "list", "data": data})

