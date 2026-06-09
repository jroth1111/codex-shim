from __future__ import annotations

import json
import os
import tempfile
from abc import ABC, abstractmethod
from pathlib import Path
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
        fd, tmp = tempfile.mkstemp(dir=path.parent, prefix=".store-", suffix=".tmp")
        try:
            with os.fdopen(fd, "w", encoding="utf-8") as f:
                json.dump(value, f, sort_keys=True)
            os.replace(tmp, path)
        except BaseException:
            try:
                os.unlink(tmp)
            except OSError:
                pass
            raise

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
