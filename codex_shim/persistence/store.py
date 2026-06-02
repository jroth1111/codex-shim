from __future__ import annotations

from abc import ABC, abstractmethod
from pathlib import Path
import json
from typing import Any


class OperationalStore(ABC):
    @abstractmethod
    def put(self, namespace: str, key: str, value: dict[str, Any]) -> None:
        raise NotImplementedError

    @abstractmethod
    def get(self, namespace: str, key: str) -> dict[str, Any] | None:
        raise NotImplementedError


class JsonOperationalStore(OperationalStore):
    def __init__(self, root: Path):
        self._root = root
        self._root.mkdir(parents=True, exist_ok=True)

    def _path(self, namespace: str, key: str) -> Path:
        return self._root / namespace / f"{key}.json"

    def put(self, namespace: str, key: str, value: dict[str, Any]) -> None:
        path = self._path(namespace, key)
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(json.dumps(value, sort_keys=True), encoding="utf-8")

    def get(self, namespace: str, key: str) -> dict[str, Any] | None:
        path = self._path(namespace, key)
        if not path.exists():
            return None
        return json.loads(path.read_text(encoding="utf-8"))


class PostgresOperationalStore(OperationalStore):
    """
    PostgreSQL scaffold for future production persistence.

    Methods intentionally raise until a DB driver is wired.
    """

    def __init__(self, dsn: str):
        self._dsn = dsn

    def put(self, namespace: str, key: str, value: dict[str, Any]) -> None:
        raise NotImplementedError("PostgresOperationalStore.put requires driver wiring")

    def get(self, namespace: str, key: str) -> dict[str, Any] | None:
        raise NotImplementedError("PostgresOperationalStore.get requires driver wiring")
