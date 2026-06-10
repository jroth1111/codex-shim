from __future__ import annotations

from codex_shim.clientconfig.patch_specs import _version_matches_known_major


def test_version_major_match_requires_dot_boundary():
    assert _version_matches_known_major("26.519.81530", "26.519.81530") is True
    assert _version_matches_known_major("260.1.0", "26.519.81530") is False
