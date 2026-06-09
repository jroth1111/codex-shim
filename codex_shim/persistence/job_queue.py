from __future__ import annotations

import json
from pathlib import Path
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
        raw = self._path.read_text(encoding="utf-8")
        rows: list[dict[str, Any]] = []
        for line in raw.splitlines():
            line = line.strip()
            if not line:
                continue
            try:
                rows.append(json.loads(line))
            except json.JSONDecodeError:
                continue
        tmp = self._path.with_suffix(".tmp")
        tmp.write_text("", encoding="utf-8")
        tmp.replace(self._path)  # atomic on POSIX
        return rows
