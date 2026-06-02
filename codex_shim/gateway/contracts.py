from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


@dataclass(frozen=True)
class GatewayRequestContext:
    path: str
    method: str
    model: str
    stream: bool = False
    idempotency_key: str | None = None
    metadata: dict[str, Any] = field(default_factory=dict)


@dataclass(frozen=True)
class GatewayResponseEnvelope:
    status_code: int
    payload: dict[str, Any]
    provider: str
    model_slug: str
