from __future__ import annotations

from pathlib import Path
import json
from typing import Any


class JsonlJobQueue:
    def __init__(self, path: Path):
        self._path = path
        self._path.parent.mkdir(parents=True, exist_ok=True)

    def enqueue(self, job_type: str, payload: dict[str, Any]) -> None:
        row = {"type": job_type, "payload": payload}
        with self._path.open("a", encoding="utf-8") as f:
            f.write(json.dumps(row, sort_keys=True) + "\n")

    def pop_all(self) -> list[dict[str, Any]]:
        if not self._path.exists():
            return []
        rows: list[dict[str, Any]] = []
        for line in self._path.read_text(encoding="utf-8").splitlines():
            if not line.strip():
                continue
            rows.append(json.loads(line))
        self._path.write_text("", encoding="utf-8")
        return rows
