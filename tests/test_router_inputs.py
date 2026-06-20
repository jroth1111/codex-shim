from __future__ import annotations

import json

from codex_shim.routing.auto_router import (
    RouterCandidate,
    RouterConfig,
    fallback_slug,
    load_router_config,
    pick_candidate,
    task_signal,
)
from codex_shim.translate.tokens import estimate_input_tokens


def _config(candidates) -> RouterConfig:
    return RouterConfig(
        enabled=True,
        slug="codex-auto",
        display_name="Auto",
        classifier=None,
        threshold=0.7,
        default=None,
        cache=True,
        candidates=tuple(candidates),
        timeout=12.0,
        max_tokens=600,
    )


def test_estimate_input_tokens_counts_text_and_images():
    # A bare string in the input list is the only text -> exact 4000/4.
    text_only = estimate_input_tokens({"input": ["x" * 4000]})
    assert text_only == 1000
    # An image part adds at least the flat per-image cost on top of the text.
    with_image = estimate_input_tokens({"input": ["x" * 4000, {"type": "input_image"}]}, per_image_tokens=100)
    assert with_image >= text_only + 100
    assert estimate_input_tokens({}) == 0
    assert estimate_input_tokens("not a dict") == 0


def test_task_signal_reports_tokens_and_tools():
    # The walker counts every string value, including the "user" role (4 chars),
    # so 800 content chars + 4 = 804 -> 201 tokens.
    signal = task_signal({"input": [{"role": "user", "content": "x" * 800}], "tools": [{"type": "function"}]})
    assert signal["est_input_tokens"] == (800 + 4) // 4
    assert signal["has_tools"] is True
    assert signal["has_images"] is False


def test_pick_candidate_hard_zeros_context_overflow():
    small = RouterCandidate(slug="small", cost=0.1, max_context_limit=128_000)
    big = RouterCandidate(slug="big", cost=1.0, max_context_limit=400_000)
    unlimited = RouterCandidate(slug="unlimited", cost=0.5)  # no ceiling declared
    scores = {"small": 0.9, "big": 0.9, "unlimited": 0.9}

    # 150k tokens overflow small (90% of 128k = 115.2k); it is hard-zeroed even
    # though the classifier scored it 0.9, so the cheapest viable (unlimited) wins.
    pick, _, _ = pick_candidate(scores, [small, big, unlimited], 0.7, False, est_input_tokens=150_000)
    assert pick == "unlimited"

    # A task that fits everywhere lets the cheapest (small) win.
    pick, _, _ = pick_candidate(scores, [small, big, unlimited], 0.7, False, est_input_tokens=1_000)
    assert pick == "small"


def test_fallback_slug_drops_context_overflow():
    small = RouterCandidate(slug="small", cost=0.1, max_context_limit=128_000)
    big = RouterCandidate(slug="big", cost=1.0, max_context_limit=400_000)
    config = _config([small, big])

    # 300k overflow small -> big is the only fit.
    assert fallback_slug(config, [small, big], est_input_tokens=300_000) == "big"
    # Small task -> cheapest (small) wins.
    assert fallback_slug(config, [small, big], est_input_tokens=1_000) == "small"
    # Nothing fits -> None (caller surfaces the failure rather than 400-ing upstream).
    tiny = RouterCandidate(slug="tiny", cost=0.1, max_context_limit=8_000)
    assert fallback_slug(_config([tiny]), [tiny], est_input_tokens=100_000) is None


def test_load_router_config_parses_context_latency_delegate(tmp_path):
    settings = tmp_path / "models.json"
    settings.write_text(
        json.dumps(
            {
                "router": {
                    "enabled": True,
                    "candidates": [
                        {"slug": "a", "max_context_limit": 200000, "latency_class": "fast"},
                        {"slug": "b", "context_window": 128000, "delegate": True},
                    ],
                }
            }
        )
    )
    config = load_router_config(settings)
    assert config is not None
    by_slug = {c.slug: c for c in config.candidates}
    assert by_slug["a"].max_context_limit == 200_000
    assert by_slug["a"].latency_class == "fast"
    assert by_slug["b"].max_context_limit == 128_000
    assert by_slug["b"].is_delegate is True
