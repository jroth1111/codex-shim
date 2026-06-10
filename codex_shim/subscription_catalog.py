from __future__ import annotations

import json
import os
import re
import shutil
import subprocess
import time
from dataclasses import dataclass
from pathlib import Path
from typing import Any, Literal
from urllib.error import HTTPError, URLError
from urllib.parse import urlencode
from urllib.request import Request, urlopen

from . import settings as settings_module
from .settings import (
    CHATGPT_MODEL_SLUG,
    TRANSPORT_CHATGPT,
    NormalizedModel,
    chatgpt_passthrough_available,
    provider_preset,
)


def _auth_path(auth_path: Path | None) -> Path:
    return (auth_path or settings_module.DEFAULT_CODEX_AUTH).expanduser()

SUBSCRIPTION_MODELS_URL = "https://chatgpt.com/backend-api/codex/models"
CACHE_PATH = Path.home() / ".codex-shim" / "subscription_models_cache.json"
CACHE_TTL_SECONDS = 300
_FALLBACK_CLIENT_VERSION = "0.124.0"
_cached_client_version: str | None = None

CatalogStatus = Literal["loaded", "cached", "error", "unavailable"]


@dataclass(frozen=True)
class SubscriptionCatalogSnapshot:
    models: tuple[dict[str, Any], ...]
    status: CatalogStatus
    etag: str | None = None
    error: str | None = None
    fetched_at: int | None = None

    @property
    def age_s(self) -> int | None:
        if self.fetched_at is None:
            return None
        return max(0, int(time.time()) - self.fetched_at)

    @property
    def slugs(self) -> tuple[str, ...]:
        return tuple(
            str(model.get("slug") or "").strip()
            for model in self.models
            if str(model.get("slug") or "").strip()
        )


def resolve_codex_client_version() -> str:
    override = os.environ.get("CODEX_SHIM_CODEX_CLIENT_VERSION", "").strip()
    if override:
        return _normalize_client_version(override)
    global _cached_client_version
    if _cached_client_version is not None:
        return _cached_client_version
    codex = shutil.which("codex")
    if codex:
        try:
            proc = subprocess.run(
                [codex, "--version"],
                capture_output=True,
                text=True,
                timeout=2,
                check=False,
            )
        except (OSError, subprocess.TimeoutExpired):
            proc = None
        if proc is not None and proc.returncode == 0:
            version = _normalize_client_version((proc.stdout or proc.stderr or "").strip())
            if version:
                _cached_client_version = version
                return version
    _cached_client_version = _FALLBACK_CLIENT_VERSION
    return _FALLBACK_CLIENT_VERSION


def _normalize_client_version(raw: str) -> str:
    text = raw.strip()
    if not text:
        return _FALLBACK_CLIENT_VERSION
    match = re.search(r"(\d+)\.(\d+)\.(\d+)", text)
    if match:
        return f"{match.group(1)}.{match.group(2)}.{match.group(3)}"
    return text


def _load_auth(auth_path: Path) -> tuple[str, str] | None:
    expanded = auth_path.expanduser()
    if not expanded.exists():
        return None
    try:
        data = json.loads(expanded.read_text())
    except (OSError, json.JSONDecodeError):
        return None
    tokens = data.get("tokens") if isinstance(data, dict) else None
    if not isinstance(tokens, dict):
        return None
    access_token = str(tokens.get("access_token") or "").strip()
    if not access_token:
        return None
    account_id = str(tokens.get("account_id") or "").strip()
    return access_token, account_id


def _filter_picker_models(models: list[dict[str, Any]]) -> list[dict[str, Any]]:
    filtered: list[dict[str, Any]] = []
    for model in models:
        if not isinstance(model, dict):
            continue
        slug = str(model.get("slug") or "").strip()
        if not slug:
            continue
        if model.get("supported_in_api") is False:
            continue
        visibility = str(model.get("visibility") or "list").strip().lower()
        if visibility and visibility != "list":
            continue
        filtered.append(dict(model))
    filtered.sort(key=lambda entry: int(entry.get("priority") or 0), reverse=True)
    return filtered


def fetch_subscription_models(
    auth_path: Path | None = None,
    *,
    client_version: str | None = None,
    timeout: float = 5.0,
) -> tuple[list[dict[str, Any]], str | None]:
    auth = _load_auth(_auth_path(auth_path))
    if auth is None:
        raise ValueError("missing or invalid auth.json tokens")
    access_token, account_id = auth
    version = client_version or resolve_codex_client_version()
    query = urlencode({"client_version": version})
    url = f"{SUBSCRIPTION_MODELS_URL}?{query}"
    headers = {
        "Authorization": f"Bearer {access_token}",
        "chatgpt-account-id": account_id,
        "Content-Type": "application/json",
        "Accept": "application/json",
        "version": version,
    }
    req = Request(url, headers=headers, method="GET")
    try:
        with urlopen(req, timeout=timeout) as response:
            body = response.read()
            etag = response.headers.get("ETag") or response.headers.get("etag")
    except HTTPError as exc:
        raise ValueError(f"subscription models HTTP {exc.code}") from exc
    except URLError as exc:
        raise ValueError(f"subscription models fetch failed: {exc.reason}") from exc
    payload = json.loads(body.decode("utf-8"))
    if not isinstance(payload, dict):
        raise ValueError("subscription models response is not an object")
    models = payload.get("models")
    if not isinstance(models, list):
        raise ValueError("subscription models response missing models list")
    return _filter_picker_models(models), (str(etag).strip() if etag else None)


def _read_cache() -> dict[str, Any] | None:
    if not CACHE_PATH.exists():
        return None
    try:
        payload = json.loads(CACHE_PATH.read_text())
    except (OSError, json.JSONDecodeError):
        return None
    return payload if isinstance(payload, dict) else None


def _write_cache(
    models: list[dict[str, Any]],
    *,
    etag: str | None,
    client_version: str,
) -> None:
    CACHE_PATH.parent.mkdir(parents=True, exist_ok=True)
    payload = {
        "models": models,
        "etag": etag,
        "client_version": client_version,
        "fetched_at": int(time.time()),
    }
    tmp = CACHE_PATH.with_suffix(".json.tmp")
    tmp.write_text(json.dumps(payload, indent=2, sort_keys=False) + "\n")
    tmp.replace(CACHE_PATH)


def _snapshot_from_cache(payload: dict[str, Any], *, status: CatalogStatus = "cached") -> SubscriptionCatalogSnapshot:
    models = payload.get("models")
    entries = tuple(dict(model) for model in models if isinstance(model, dict)) if isinstance(models, list) else ()
    fetched_at = payload.get("fetched_at")
    return SubscriptionCatalogSnapshot(
        models=entries,
        status=status,
        etag=str(payload.get("etag") or "").strip() or None,
        fetched_at=int(fetched_at) if isinstance(fetched_at, int) else None,
    )


def refresh_subscription_catalog(
    auth_path: Path | None = None,
    *,
    force: bool = False,
    timeout: float = 5.0,
) -> SubscriptionCatalogSnapshot:
    resolved_auth = _auth_path(auth_path)
    if not chatgpt_passthrough_available(resolved_auth):
        return SubscriptionCatalogSnapshot((), "unavailable")

    cached = _read_cache()
    if cached is not None and not force:
        fetched_at = cached.get("fetched_at")
        if isinstance(fetched_at, int) and int(time.time()) - fetched_at <= CACHE_TTL_SECONDS:
            return _snapshot_from_cache(cached, status="cached")

    client_version = resolve_codex_client_version()
    try:
        models, etag = fetch_subscription_models(resolved_auth, client_version=client_version, timeout=timeout)
    except ValueError as exc:
        if cached is not None:
            snapshot = _snapshot_from_cache(cached, status="cached")
            return SubscriptionCatalogSnapshot(
                snapshot.models,
                "error",
                etag=snapshot.etag,
                error=str(exc),
                fetched_at=snapshot.fetched_at,
            )
        return SubscriptionCatalogSnapshot((), "error", error=str(exc))

    if models:
        _write_cache(models, etag=etag, client_version=client_version)
        return SubscriptionCatalogSnapshot(
            tuple(dict(model) for model in models),
            "loaded",
            etag=etag,
            fetched_at=int(time.time()),
        )

    if cached is not None:
        return _snapshot_from_cache(cached, status="cached")

    return SubscriptionCatalogSnapshot((), "error", error="subscription models response was empty")


def known_subscription_slugs(auth_path: Path | None = None) -> frozenset[str]:
    snapshot = refresh_subscription_catalog(auth_path)
    slugs = {slug for slug in snapshot.slugs if slug}
    if not slugs:
        slugs.add(CHATGPT_MODEL_SLUG)
    return frozenset(slugs)


def subscription_catalog_entries(
    auth_path: Path | None = None,
    *,
    snapshot: SubscriptionCatalogSnapshot | None = None,
) -> list[dict[str, Any]]:
    if snapshot is None:
        snapshot = refresh_subscription_catalog(auth_path)
    if snapshot.models:
        return [dict(model) for model in snapshot.models]
    if chatgpt_passthrough_available(auth_path):
        from .catalog import chatgpt_passthrough_entry

        return [chatgpt_passthrough_entry()]
    return []


def subscription_passthrough_models(
    auth_path: Path | None = None,
    *,
    snapshot: SubscriptionCatalogSnapshot | None = None,
) -> list[NormalizedModel]:
    entries = subscription_catalog_entries(auth_path, snapshot=snapshot)
    if not entries:
        return []
    preset = provider_preset("chatgpt")
    models: list[NormalizedModel] = []
    for index, entry in enumerate(entries):
        slug = str(entry.get("slug") or "").strip()
        if not slug:
            continue
        display_name = str(entry.get("display_name") or slug).strip()
        context = entry.get("max_context_window") or entry.get("context_window")
        max_context = int(context) if isinstance(context, (int, float)) and context > 0 else 400_000
        models.append(
            NormalizedModel(
                slug=slug,
                model=slug,
                display_name=display_name,
                provider="chatgpt",
                base_url="",
                index=-10_000 + index,
                max_context_limit=max_context,
                transport=TRANSPORT_CHATGPT,
                endpoint_url="https://chatgpt.com/backend-api/codex/responses",
                capabilities=preset.capabilities,
                raw={"subscription_catalog_entry": dict(entry)},
            )
        )
    return models


def merge_desktop_models(
    byok_models: list[NormalizedModel],
    auth_path: Path | None = None,
    *,
    snapshot: SubscriptionCatalogSnapshot | None = None,
) -> list[NormalizedModel]:
    subscription = subscription_passthrough_models(auth_path, snapshot=snapshot)
    byok_slugs = {model.slug for model in byok_models if getattr(model, "visible", True)}
    merged: list[NormalizedModel] = []
    for model in subscription:
        if model.slug not in byok_slugs:
            merged.append(model)
    merged.extend(byok_models)
    return merged
