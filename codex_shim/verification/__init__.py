"""Shipped verification surface: live/offline probes, harness, smoke tests.

Backs `codex-shim probe ...` / `codex-shim test` and the CI probe matrix.
"""
from . import harness
from .probe import (
    CompactProbeError,
    probe_all,
    probe_compact,
    probe_delegate,
    probe_fidelity,
    probe_history,
    probe_live_matrix,
    probe_matrix,
    probe_one_turn,
    probe_passthrough,
    probe_passthrough_compact,
    probe_streaming_history,
    probe_tools,
    probe_ws_streaming,
    validate_compact_response,
)
from .smoke import resolve_smoke_target, run_provider_smoke

__all__ = [
    "CompactProbeError",
    "harness",
    "probe_all",
    "probe_compact",
    "probe_delegate",
    "probe_fidelity",
    "probe_history",
    "probe_live_matrix",
    "probe_matrix",
    "probe_one_turn",
    "probe_passthrough",
    "probe_passthrough_compact",
    "probe_streaming_history",
    "probe_tools",
    "probe_ws_streaming",
    "resolve_smoke_target",
    "run_provider_smoke",
    "validate_compact_response",
]
