"""aiohttp application assembly: middleware + the public route table."""
from __future__ import annotations

from typing import TYPE_CHECKING

from aiohttp import web

from .admin import AdminHandlers
from .hostguard import build_allowed_hosts, host_guard_middleware

if TYPE_CHECKING:
    from ..server import ShimServer


def build_app(server: "ShimServer") -> web.Application:
    admin = AdminHandlers(server)
    allowed_hosts = build_allowed_hosts(server.host)
    app = web.Application(
        client_max_size=64 * 1024 * 1024,
        middlewares=[host_guard_middleware(allowed_hosts)],
    )
    app.router.add_get("/health", admin.health)
    app.router.add_get("/v1/models", admin.models)
    app.router.add_post("/v1/chat/completions", server.gateway_handlers.chat_completions)
    app.router.add_post("/v1/messages", server.gateway_handlers.anthropic_messages)
    app.router.add_post("/v1/responses", server.gateway_handlers.responses)
    app.router.add_get("/v1/responses", server.gateway_handlers.responses_websocket)
    app.router.add_post("/v1/responses/compact", server.gateway_handlers.responses_compact)
    app.router.add_get("/picker", admin.picker_page)
    app.router.add_get("/api/models", admin.api_models)
    app.router.add_post("/api/switch", admin.switch_model)
    return app
