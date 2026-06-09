"""mitmproxy addon: capture outbound api2.cursor.sh Connect requests for parity diff."""
from __future__ import annotations

import json
import os
from pathlib import Path
from typing import Any

from mitmproxy import ctx, http

DEFAULT_OUT = (
    Path(__file__).resolve().parents[1]
    / "codex-desktop-decompiled"
    / "captures"
    / "debug"
    / "cursor_upstream_last.json"
)


def _truthy(value: str | None) -> bool:
    return str(value or "").strip().lower() in {"1", "true", "yes", "on"}


class CaptureCursorUpstream:
    def __init__(self) -> None:
        out = os.environ.get("CURSOR_UPSTREAM_CAPTURE_OUT", "").strip()
        self.out_path = Path(out) if out else DEFAULT_OUT
        self.jsonl_path = self.out_path.with_suffix(".jsonl")
        self.capture_all = _truthy(os.environ.get("CURSOR_UPSTREAM_CAPTURE_ALL"))
        self._index = 0

    def _should_capture(self, flow: http.HTTPFlow) -> bool:
        host = (flow.request.host or "").lower()
        return "cursor.sh" in host or "cursor.com" in host

    def _payload(self, flow: http.HTTPFlow) -> dict[str, Any]:
        headers = {k: v for k, v in flow.request.headers.items()}
        body = flow.request.raw_content or b""
        return {
            "index": self._index,
            "method": flow.request.method,
            "url": flow.request.pretty_url,
            "path": flow.request.path,
            "headers": headers,
            "body_bytes": len(body),
            "body_hex": body.hex(),
            "body_text_preview": body[:256].decode("utf-8", errors="replace"),
        }

    def request(self, flow: http.HTTPFlow) -> None:
        if not self._should_capture(flow):
            return
        self._index += 1
        payload = self._payload(flow)
        self.out_path.parent.mkdir(parents=True, exist_ok=True)
        if "AgentService" in payload["path"] or "BidiService" in payload["path"]:
            self.out_path.write_text(json.dumps(payload, indent=2), encoding="utf-8")
        with self.jsonl_path.open("a", encoding="utf-8") as handle:
            handle.write(json.dumps(payload) + "\n")
        ctx.log.info(f"cursor upstream capture #{self._index} {payload['method']} {payload['path']}")


addons = [CaptureCursorUpstream()]
