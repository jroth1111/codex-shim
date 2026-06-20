from __future__ import annotations

import json

from codex_shim.clientconfig.catalog import catalog_entry
from codex_shim.settings import ModelSettings
from codex_shim.translate.chat import responses_to_chat


def _settings(tmp_path, models):
    path = tmp_path / "models.json"
    path.write_text(json.dumps({"models": models}))
    return path


def test_model_verbosity_parsed_and_emitted_in_catalog(tmp_path):
    path = _settings(
        tmp_path,
        [{"id": "m", "model": "m", "provider": "openai", "base_url": "http://x/v1", "api_key": "k", "model_verbosity": "high"}],
    )
    [model] = ModelSettings(path).load()
    assert model.model_verbosity == "high"
    entry = catalog_entry(model)
    assert entry["support_verbosity"] is True
    assert entry["default_verbosity"] == "high"


def test_model_verbosity_defaults_when_unset(tmp_path):
    path = _settings(tmp_path, [{"id": "m", "model": "m", "provider": "openai", "base_url": "http://x/v1", "api_key": "k"}])
    [model] = ModelSettings(path).load()
    assert model.model_verbosity is None
    entry = catalog_entry(model)
    assert entry["support_verbosity"] is False
    assert entry["default_verbosity"] == "low"


def test_model_verbosity_injects_preamble_into_chat_system_message():
    body = {"model": "m", "model_verbosity": "low", "input": [{"role": "user", "content": "hi"}]}
    chat = responses_to_chat(body, "m")
    system = next(m for m in chat["messages"] if m["role"] == "system")
    assert "concise" in system["content"].lower()


def test_no_system_message_when_no_verbosity_and_no_instructions():
    body = {"model": "m", "input": [{"role": "user", "content": "hi"}]}
    chat = responses_to_chat(body, "m")
    assert not any(m["role"] == "system" for m in chat["messages"])
