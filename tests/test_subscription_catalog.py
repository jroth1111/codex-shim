from __future__ import annotations

import json
import time
from pathlib import Path
from unittest.mock import patch

import pytest

from codex_shim.clientconfig.catalog import build_merged_catalog, write_catalog
from codex_shim.providers.chatgpt.handlers import rewrite_response_model
from codex_shim.routing import desktop_models
from codex_shim.routing.subscription_catalog import (
    SubscriptionCatalogSnapshot,
    fetch_subscription_models,
    refresh_subscription_catalog,
    subscription_passthrough_models,
)
from codex_shim.settings import TRANSPORT_OPENAI_CHAT, ModelSettings

FIXTURE_PATH = Path(__file__).parent / "fixtures" / "subscription_models.json"


def _fixture_models() -> list[dict]:
    payload = json.loads(FIXTURE_PATH.read_text())
    return payload["models"]


def _mock_fetch(auth_path, *, client_version=None, timeout=5.0):
    models = [dict(model) for model in _fixture_models()]
    return models[:3], '"fixture-etag"'


def _mock_fetch_403(auth_path, *, client_version=None, timeout=5.0):
    raise ValueError("subscription models HTTP 403")


@pytest.fixture
def auth_present(monkeypatch, tmp_path):
    auth = tmp_path / "auth.json"
    auth.write_text(json.dumps({"tokens": {"access_token": "stub", "account_id": "acct"}}))
    monkeypatch.setattr("codex_shim.settings.DEFAULT_CODEX_AUTH", auth)
    monkeypatch.setattr("codex_shim.routing.subscription_catalog.settings_module.DEFAULT_CODEX_AUTH", auth)
    return auth


@pytest.fixture
def auth_missing(monkeypatch, tmp_path):
    missing = tmp_path / "missing-auth.json"
    monkeypatch.setattr("codex_shim.settings.DEFAULT_CODEX_AUTH", missing)
    monkeypatch.setattr("codex_shim.routing.subscription_catalog.settings_module.DEFAULT_CODEX_AUTH", missing)


def test_fetch_filters_hidden_models(auth_present):
    with patch("codex_shim.routing.subscription_catalog.urlopen") as urlopen:
        class _Response:
            headers = {"ETag": "etag-1"}

            def read(self):
                return FIXTURE_PATH.read_bytes()

            def __enter__(self):
                return self

            def __exit__(self, *args):
                return False

        urlopen.return_value = _Response()
        models, etag = fetch_subscription_models(auth_present)
    assert [model["slug"] for model in models] == ["gpt-5.5", "gpt-5.4", "gpt-5.3-codex"]
    assert etag == "etag-1"


def test_refresh_unavailable_without_auth(auth_missing, tmp_path, monkeypatch):
    monkeypatch.setattr("codex_shim.routing.subscription_catalog.CACHE_PATH", tmp_path / "cache.json")
    snapshot = refresh_subscription_catalog(auth_missing, force=True)
    assert snapshot.status == "unavailable"
    assert snapshot.models == ()


def test_refresh_uses_cache_within_ttl(auth_present, tmp_path, monkeypatch):
    cache_path = tmp_path / "cache.json"
    monkeypatch.setattr("codex_shim.routing.subscription_catalog.CACHE_PATH", cache_path)
    cache_path.write_text(
        json.dumps(
            {
                "models": [{"slug": "gpt-5.4", "visibility": "list", "supported_in_api": True, "priority": 1}],
                "etag": "cached",
                "client_version": "0.124.0",
                "fetched_at": int(time.time()),
            }
        )
    )
    with patch("codex_shim.routing.subscription_catalog.fetch_subscription_models") as fetch:
        snapshot = refresh_subscription_catalog(auth_present)
    fetch.assert_not_called()
    assert snapshot.status == "cached"
    assert snapshot.slugs == ("gpt-5.4",)


def test_refresh_fetches_when_cache_stale(auth_present, tmp_path, monkeypatch):
    cache_path = tmp_path / "cache.json"
    monkeypatch.setattr("codex_shim.routing.subscription_catalog.CACHE_PATH", cache_path)
    cache_path.write_text(
        json.dumps(
            {
                "models": [{"slug": "gpt-5.4", "visibility": "list", "supported_in_api": True, "priority": 1}],
                "etag": "cached",
                "client_version": "0.124.0",
                "fetched_at": int(time.time()) - 400,
            }
        )
    )
    with patch("codex_shim.routing.subscription_catalog.fetch_subscription_models", side_effect=_mock_fetch):
        snapshot = refresh_subscription_catalog(auth_present, force=False)
    assert snapshot.status == "loaded"
    assert snapshot.slugs == ("gpt-5.5", "gpt-5.4", "gpt-5.3-codex")


def test_refresh_uses_stale_cache_on_fetch_error(auth_present, tmp_path, monkeypatch):
    cache_path = tmp_path / "cache.json"
    monkeypatch.setattr("codex_shim.routing.subscription_catalog.CACHE_PATH", cache_path)
    cache_path.write_text(
        json.dumps(
            {
                "models": [{"slug": "gpt-5.4", "visibility": "list", "supported_in_api": True, "priority": 1}],
                "etag": "cached",
                "client_version": "0.124.0",
                "fetched_at": int(time.time()) - 400,
            }
        )
    )
    with patch("codex_shim.routing.subscription_catalog.fetch_subscription_models", side_effect=_mock_fetch_403):
        snapshot = refresh_subscription_catalog(auth_present, force=False)
    assert snapshot.status == "error"
    assert snapshot.slugs == ("gpt-5.4",)


def test_subscription_passthrough_models_from_snapshot(auth_present):
    snapshot = SubscriptionCatalogSnapshot(
        tuple(dict(model) for model in _fixture_models()[:3]),
        "loaded",
    )
    models = subscription_passthrough_models(auth_present, snapshot=snapshot)
    assert [model.slug for model in models] == ["gpt-5.5", "gpt-5.4", "gpt-5.3-codex"]
    assert all(model.is_chatgpt for model in models)
    assert models[0].raw["subscription_catalog_entry"]["slug"] == "gpt-5.5"


def test_desktop_models_merge_subscription_and_byok(auth_present, tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "gpt-4o",
                        "display_name": "GPT-4o",
                        "provider": "openai",
                        "base_url": "http://127.0.0.1:9999/v1",
                    }
                ]
            }
        )
    )
    snapshot = SubscriptionCatalogSnapshot(
        tuple(dict(model) for model in _fixture_models()[:3]),
        "loaded",
    )
    with patch("codex_shim.routing.subscription_catalog.refresh_subscription_catalog", return_value=snapshot):
        desktop = desktop_models(ModelSettings(settings))
    assert [model.slug for model in desktop] == ["gpt-5.5", "gpt-5.4", "gpt-5.3-codex", "gpt-4o"]
    assert desktop[-1].transport == TRANSPORT_OPENAI_CHAT


def test_build_merged_catalog_byok_slug_wins(auth_present, tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "slug": "gpt-5.4",
                        "model": "gpt-5.4",
                        "display_name": "BYOK 5.4",
                        "provider": "openai",
                        "base_url": "http://127.0.0.1:9999/v1",
                    }
                ]
            }
        )
    )
    byok = ModelSettings(settings).load()
    byok_slug = byok[0].slug
    payload = build_merged_catalog(
        byok,
        [{"slug": byok_slug, "display_name": "Sub 5.4", "priority": 10000, "visibility": "list", "supported_in_api": True}],
    )
    slugs = [entry["slug"] for entry in payload["models"]]
    assert slugs == [byok_slug]
    assert payload["models"][0]["display_name"] == "BYOK 5.4"


def test_write_catalog_includes_subscription_before_byok(auth_present, tmp_path, monkeypatch):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "gpt-4o",
                        "display_name": "GPT-4o",
                        "provider": "openai",
                        "base_url": "http://127.0.0.1:9999/v1",
                    }
                ]
            }
        )
    )
    snapshot = SubscriptionCatalogSnapshot(
        tuple(dict(model) for model in _fixture_models()[:3]),
        "loaded",
    )
    catalog_path = tmp_path / "catalog.json"
    write_catalog(ModelSettings(settings).load(), catalog_path, snapshot=snapshot)
    slugs = [entry["slug"] for entry in json.loads(catalog_path.read_text())["models"]]
    assert slugs[:3] == ["gpt-5.5", "gpt-5.4", "gpt-5.3-codex"]
    assert slugs[-1] == "gpt-4o"


def test_rewrite_response_model_rewrites_any_subscription_slug():
    payload = {
        "model": "gpt-5.4",
        "nested": [{"model": "gpt-5.3-codex"}, {"model": "other"}],
    }
    rewrite_response_model(payload, "my-alias", subscription_slugs=frozenset({"gpt-5.4", "gpt-5.3-codex", "gpt-5.5"}))
    assert payload == {
        "model": "my-alias",
        "nested": [{"model": "my-alias"}, {"model": "other"}],
    }
