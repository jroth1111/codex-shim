"""mitmproxy addon: capture Desktop -> shim POST /v1/responses for S11 workspace RE."""
from __future__ import annotations

import json
import os
from pathlib import Path
from typing import Any

from mitmproxy import ctx, http

SENSITIVE_KEYS = frozenset(
    {
        "content",
        "text",
        "input",
        "output",
        "messages",
        "prompt",
        "instructions",
        "developer",
        "system",
        "user",
    }
)

DEFAULT_OUT = (
    Path(__file__).resolve().parents[1]
    / "codex-desktop-decompiled"
    / "captures"
    / "debug"
    / "s11_last_request.json"
)


def _truthy(value: str | None) -> bool:
    return str(value or "").strip().lower() in {"1", "true", "yes", "on", "full"}


def _redaction_summary(value: Any) -> dict[str, Any]:
    summary: dict[str, Any] = {"_redacted": True}
    if isinstance(value, str):
        summary["type"] = "str"
        summary["chars"] = len(value)
    elif isinstance(value, list):
        summary["type"] = "list"
        summary["items"] = len(value)
    elif isinstance(value, dict):
        summary["type"] = "dict"
        summary["keys"] = sorted(str(key) for key in value.keys())
    elif value is None:
        summary["type"] = "none"
    else:
        summary["type"] = type(value).__name__
    return summary


def _redacted(value: Any) -> Any:
    if isinstance(value, dict):
        result: dict[str, Any] = {}
        for key, item in value.items():
            if str(key).lower() in SENSITIVE_KEYS:
                result[key] = _redaction_summary(item)
            else:
                result[key] = _redacted(item)
        return result
    if isinstance(value, list):
        return [_redacted(item) for item in value]
    return value


class CaptureS11:
    def __init__(self) -> None:
        out = os.environ.get("S11_CAPTURE_PATH")
        self.out_path = Path(out).expanduser() if out else DEFAULT_OUT
        self.cursor_path = self.out_path.with_name("s11_cursor_auto_request.json")
        self.full = _truthy(os.environ.get("S11_CAPTURE_FULL"))

    def load(self, loader: Any) -> None:
        ctx.log.info(f"S11 capture -> {self.out_path} (full={self.full})")
        ctx.log.info(f"S11 cursor capture -> {self.cursor_path}")

    def _write(self, payload: dict[str, Any], *, cursor_only: bool = False) -> None:
        body = payload.get("body")
        model = body.get("model") if isinstance(body, dict) else None
        if cursor_only and model != "cursor-auto":
            return
        path = self.cursor_path if cursor_only else self.out_path
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(json.dumps(payload, indent=2, default=str) + "\n", encoding="utf-8")
        ctx.log.info(f"S11 capture wrote {path} model={model!r}")

    def request(self, flow: http.HTTPFlow) -> None:
        if flow.request.method != "POST":
            return
        path = flow.request.path or ""
        if "/v1/responses" not in path or path.endswith("/compact"):
            return
        raw = flow.request.get_text(strict=False)
        if not raw:
            return
        try:
            body = json.loads(raw)
        except json.JSONDecodeError:
            ctx.log.warn("S11 capture: request body is not JSON")
            return
        if not isinstance(body, dict):
            return
        payload = self._payload(flow, body)
        self._write(payload)
        self._write(payload, cursor_only=True)

    def websocket_message(self, flow: http.HTTPFlow) -> None:
        if flow.request.path != "/v1/responses":
            return
        assert flow.websocket is not None
        message = flow.websocket.messages[-1]
        if not message.from_client:
            return
        if not isinstance(message.content, (str, bytes)):
            return
        raw = message.content.decode("utf-8", errors="replace") if isinstance(message.content, bytes) else message.content
        try:
            body = json.loads(raw)
        except json.JSONDecodeError:
            return
        if not isinstance(body, dict):
            return
        payload = self._payload(flow, body, transport="websocket")
        self._write(payload)
        self._write(payload, cursor_only=True)

    def _payload(self, flow: http.HTTPFlow, body: dict[str, Any], *, transport: str = "http") -> dict[str, Any]:
        headers = {
            key: value
            for key, value in flow.request.headers.items()
            if key.lower()
            in {
                "content-type",
                "session_id",
                "x-codex-cwd",
                "x-codex-workspace",
                "x-workspace",
                "x-project-path",
                "cwd",
                "workspace",
                "authorization",
                "idempotency-key",
            }
        }
        if "authorization" in headers:
            headers["authorization"] = "<redacted>"

        return {
            "transport": transport,
            "method": flow.request.method,
            "url": flow.request.pretty_url,
            "path": flow.request.path,
            "headers": headers,
            "body": body if self.full else _redacted(body),
        }


addons = [CaptureS11()]
