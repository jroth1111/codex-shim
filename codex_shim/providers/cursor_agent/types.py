from __future__ import annotations

from dataclasses import dataclass
from typing import Any


class CursorAgentTransportError(RuntimeError):
    pass


@dataclass(frozen=True)
class CursorAgentPreparedRequest:
    headers: dict[str, str]
    endpoints: dict[str, str]
    envelope: dict[str, Any]
    transport_mode: str
    timeout_seconds: float = 3600.0
