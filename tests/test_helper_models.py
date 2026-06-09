from __future__ import annotations

import json

import pytest
from aiohttp import web

from codex_shim.routing.helper_models import (
    apply_helper_model_policy,
    helper_model_policy,
    is_helper_model_slug,
)
from codex_shim.settings import ModelSettings


def test_is_helper_model_slug_detects_auto_review():
    assert is_helper_model_slug("codex-auto-review")
    assert is_helper_model_slug("custom-auto-review")
    assert not is_helper_model_slug("gpt-5.5")


def test_apply_helper_model_policy_rewrites_to_fallback(tmp_path, monkeypatch):
    settings_path = tmp_path / "models.json"
    settings_path.write_text(
        json.dumps(
            {
                "models": [
                    {
                        "model": "claude",
                        "provider": "anthropic",
                        "baseUrl": "https://api.anthropic.com/v1",
                        "apiKey": "k",
                    }
                ]
            }
        )
    )
    monkeypatch.setenv("CODEX_SHIM_HELPER_MODEL_POLICY", "fallback")
    monkeypatch.delenv("CODEX_SHIM_HELPER_FALLBACK_SLUG", raising=False)
    settings = ModelSettings(settings_path)
    body = {"model": "codex-auto-review", "input": "review this"}
    new_body, route, category = apply_helper_model_policy(settings, body, requested="codex-auto-review")
    assert category == "helper_model_rerouted"
    assert route is not None
    assert new_body["model"] == route.slug
    assert new_body["model"] != "codex-auto-review"


def test_apply_helper_model_policy_reject(monkeypatch, tmp_path):
    settings_path = tmp_path / "models.json"
    settings_path.write_text(json.dumps({"models": []}))
    monkeypatch.setenv("CODEX_SHIM_HELPER_MODEL_POLICY", "reject")
    settings = ModelSettings(settings_path)
    with pytest.raises(web.HTTPNotImplemented):
        apply_helper_model_policy(settings, {"model": "codex-auto-review"}, requested="codex-auto-review")
