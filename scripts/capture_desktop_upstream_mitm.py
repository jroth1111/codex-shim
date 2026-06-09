"""mitmproxy addon: capture Codex Desktop -> ChatGPT native inference (Tier A upstream)."""
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
    / "desktop_to_chatgpt.json"
)
RESPONSES_OUT = DEFAULT_OUT.with_name("desktop_to_chatgpt_responses.json")
JSONL_OUT = DEFAULT_OUT.with_name("desktop_to_chatgpt.jsonl")

REDACT_HEADERS = frozenset({"authorization", "cookie"})


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


def _is_upstream_codex(flow: http.HTTPFlow) -> bool:
    host = (flow.request.host or "").lower()
    path = flow.request.path or ""
    return host.endswith("chatgpt.com") and "/backend-api/codex/" in path


def _is_responses_upstream(flow: http.HTTPFlow) -> bool:
    path = flow.request.path or ""
    return "/backend-api/codex/responses" in path and not path.endswith("/compact")


class CaptureDesktopUpstream:
    def __init__(self) -> None:
        out = os.environ.get("DESKTOP_UPSTREAM_CAPTURE_PATH")
        self.out_path = Path(out).expanduser() if out else DEFAULT_OUT
        self.responses_path = Path(
            os.environ.get("DESKTOP_UPSTREAM_RESPONSES_CAPTURE_PATH") or RESPONSES_OUT
        ).expanduser()
        self.jsonl_path = self.out_path.with_suffix(".jsonl")
        if out:
            base = self.out_path.with_suffix("")
            self.responses_path = Path(f"{base}_responses.json")
            self.jsonl_path = Path(f"{base}.jsonl")
        self.full = _truthy(os.environ.get("DESKTOP_UPSTREAM_CAPTURE_FULL"))

    def load(self, loader: Any) -> None:
        ctx.log.info(f"Desktop upstream capture -> {self.out_path} (full={self.full})")
        ctx.log.info(f"Responses capture -> {self.responses_path}")

    def _write(self, payload: dict[str, Any], *, responses_only: bool = False) -> None:
        path = self.responses_path if responses_only else self.out_path
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(json.dumps(payload, indent=2, default=str) + "\n", encoding="utf-8")
        with self.jsonl_path.open("a", encoding="utf-8") as handle:
            handle.write(json.dumps(payload, default=str) + "\n")
        ctx.log.info(
            f"Desktop upstream capture wrote {path} {payload.get('method')} {payload.get('path')}"
        )

    def _payload_from_request(
        self,
        flow: http.HTTPFlow,
        body: Any,
        *,
        transport: str = "http",
    ) -> dict[str, Any]:
        headers = []
        for key, value in flow.request.headers.items():
            lowered = key.lower()
            if lowered in REDACT_HEADERS:
                headers.append({"name": key, "value": "[REDACTED]"})
            else:
                headers.append({"name": key, "value": value})
        return {
            "transport": transport,
            "method": flow.request.method,
            "url": flow.request.pretty_url,
            "host": flow.request.host,
            "path": flow.request.path,
            "headers": headers,
            "body": body if self.full else (_redacted(body) if isinstance(body, dict) else body),
        }

    def request(self, flow: http.HTTPFlow) -> None:
        if flow.request.method not in {"POST", "GET"}:
            return
        if not _is_upstream_codex(flow):
            return
        raw = flow.request.get_text(strict=False)
        body: Any = None
        if raw:
            try:
                body = json.loads(raw)
            except json.JSONDecodeError:
                body = {"_raw": raw[:2000]}
        payload = self._payload_from_request(flow, body)
        self._write(payload, responses_only=_is_responses_upstream(flow))

    def websocket_message(self, flow: http.HTTPFlow) -> None:
        if not _is_upstream_codex(flow):
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
            body = {"_raw": raw[:2000]}
        if not isinstance(body, dict):
            return
        payload = self._payload_from_request(flow, body, transport="websocket")
        self._write(payload, responses_only=_is_responses_upstream(flow))


addons = [CaptureDesktopUpstream()]
