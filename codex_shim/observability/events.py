from __future__ import annotations

import json
import time
from dataclasses import asdict, dataclass
from pathlib import Path
from typing import Any


@dataclass(frozen=True)
class ObservabilityEvent:
    timestamp: int
    stage: str
    path: str
    provider: str
    model_slug: str
    attributes: dict[str, Any]


class ObservabilitySink:
    def __init__(self, log_path: Path):
        self._log_path = log_path
        self._log_path.parent.mkdir(parents=True, exist_ok=True)

    def emit(self, *, stage: str, path: str, provider: str, model_slug: str, attributes: dict[str, Any] | None = None) -> None:
        merged = dict(attributes or {})
        event = ObservabilityEvent(
            timestamp=int(time.time()),
            stage=stage,
            path=path,
            provider=provider,
            model_slug=model_slug,
            attributes=merged,
        )
        with self._log_path.open("a", encoding="utf-8") as f:
            f.write(json.dumps(asdict(event), sort_keys=True) + "\n")

    def emit_with_inference(
        self,
        *,
        stage: str,
        path: str,
        provider: str,
        model_slug: str,
        inference_attributes: dict[str, Any] | None = None,
        attributes: dict[str, Any] | None = None,
    ) -> None:
        merged = dict(attributes or {})
        if inference_attributes:
            merged.update(inference_attributes)
        self.emit(
            stage=stage,
            path=path,
            provider=provider,
            model_slug=model_slug,
            attributes=merged,
        )
