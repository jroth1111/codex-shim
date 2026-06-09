from __future__ import annotations

from codex_shim.translate.common import merge_extra_body_params


def test_merge_extra_body_params_deep_merges_nested_dicts():
    body = {"model": "x", "provider": {"order": ["a"]}}
    extra = {"provider": {"route": "fallback"}, "temperature": 0.2}
    merged = merge_extra_body_params(body, extra)
    assert merged["provider"] == {"order": ["a"], "route": "fallback"}
    assert merged["temperature"] == 0.2


def test_merge_extra_body_params_never_forwards_extra_body_params_key():
    body = {"model": "x"}
    extra = {"extra_body_params": {"nested": True}, "top": 1}
    merged = merge_extra_body_params(body, extra)
    assert "extra_body_params" not in merged
    assert merged["top"] == 1
