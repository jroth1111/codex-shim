from __future__ import annotations


def test_translate_package_preserves_top_level_constants():
    import codex_shim.translate as translate

    assert translate.THINK_RE.pattern
    assert "mp3" in translate.SUPPORTED_AUDIO_FORMATS
    assert "audio/mpeg" in translate.SUPPORTED_AUDIO_MIME_FORMATS
    assert "search" in translate.WEB_SEARCH_ACTION_TYPES
    assert translate.HOSTED_CALL_FALLBACK_NAMES["web_search_call"] == "web_search"
