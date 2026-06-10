"""Sessions module: history persistence, previous-response expansion,
compaction, and turn identity. See docs/MODULAR_ARCHITECTURE.md."""
from .compact import (
    CompactQuality,
    append_postcompact_capture,
    as_compact_response,
    build_emulated_compact_instructions,
    compact_audit_record,
    compact_request_body,
    evaluate_compact_summary,
    finalize_compact_summary,
)
from .compact_frontier import CompactFrontier, extract_compact_frontier, git_status_short
from .history import filter_delegate_history_items
from .response_store import ResponseStore, default_store_path, store_scope
from .responses_request import (
    SHIM_INTERNAL_KEY_PREFIX,
    PreparedResponsesRequest,
    prepare_byok_responses_request,
    prepare_passthrough_store_request,
    responses_items_from_input,
    should_persist_instructions,
    strip_shim_internal_keys,
)
from .service import SessionService
from .turn_metadata import (
    header_value,
    parse_turn_metadata,
    resolve_thread_and_session_ids,
    truthy_id,
)

__all__ = [
    "CompactFrontier",
    "CompactQuality",
    "PreparedResponsesRequest",
    "ResponseStore",
    "SHIM_INTERNAL_KEY_PREFIX",
    "SessionService",
    "append_postcompact_capture",
    "as_compact_response",
    "build_emulated_compact_instructions",
    "compact_audit_record",
    "compact_request_body",
    "default_store_path",
    "evaluate_compact_summary",
    "extract_compact_frontier",
    "filter_delegate_history_items",
    "finalize_compact_summary",
    "git_status_short",
    "header_value",
    "parse_turn_metadata",
    "prepare_byok_responses_request",
    "prepare_passthrough_store_request",
    "resolve_thread_and_session_ids",
    "responses_items_from_input",
    "should_persist_instructions",
    "store_scope",
    "strip_shim_internal_keys",
    "truthy_id",
]
