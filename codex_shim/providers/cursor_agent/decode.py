from __future__ import annotations

from typing import TYPE_CHECKING, Any

from ...wire import write_sse

if TYPE_CHECKING:
    from ...translate import ResponsesStreamState


def cursor_agent_event_to_responses_delta(event: dict[str, Any]) -> dict[str, Any] | None:
    """Map native transport events into chat-completion-shaped deltas for ResponsesStreamState."""
    if not isinstance(event, dict):
        return None
    event_type = str(event.get("type") or "")
    if event_type in {"text", "message", "content"}:
        text = event.get("text") or event.get("content")
        if text:
            return {"choices": [{"delta": {"content": str(text)}}]}
    if event_type == "tool_call":
        return {
            "choices": [{"delta": {"tool_calls": [event.get("tool_call") or event]}}],
        }
    if event_type == "shim_diagnostic":
        return None
    return None


async def write_cursor_agent_event(
    state: ResponsesStreamState,
    response: Any,
    event: dict[str, Any],
) -> bool:
    """
    Prefer ResponsesStreamState.write_cursor_cli_event when the event is CLI-shaped.
    Returns True if the event was handled.
    """
    event_type = str(event.get("type") or "")
    if event_type == "tool_call":
        if getattr(state, "delegate_mode", False):
            state.anomalies["delegated_tool_events_suppressed"] = int(
                state.anomalies.get("delegated_tool_events_suppressed") or 0
            ) + 1
            return True
        subtype = str(event.get("subtype") or "")
        if subtype == "partial":
            call_id = str(event.get("call_id") or "")
            args_delta = str(event.get("args_text_delta") or "")
            if call_id and event.get("tool_call"):
                key = ("cursor_cli", call_id)
                if key not in state.tool_calls:
                    await state.write_cursor_cli_event(
                        response,
                        {
                            "type": "tool_call",
                            "subtype": "started",
                            "call_id": call_id,
                            "tool_call": event.get("tool_call"),
                            "model_call_id": event.get("model_call_id") or "",
                        },
                    )
            if call_id and args_delta:
                key = ("cursor_cli", call_id)
                tool_state = state.tool_calls.get(key)
                if tool_state is not None and not tool_state.get("closed"):
                    tool_state["arguments"] = str(tool_state.get("arguments") or "") + args_delta
                    await write_sse(
                        response,
                        {
                            "type": "response.function_call_arguments.delta",
                            "item_id": tool_state["id"],
                            "output_index": tool_state["output_index"],
                            "delta": args_delta,
                        },
                    )
                    return True
            if event.get("tool_call"):
                await state.write_cursor_cli_event(
                    response,
                    {
                        "type": "tool_call",
                        "subtype": "started",
                        "call_id": call_id,
                        "tool_call": event.get("tool_call"),
                        "model_call_id": event.get("model_call_id") or "",
                    },
                )
                return True
        await state.write_cursor_cli_event(response, event)
        return True
    if event_type in {"tool_output_delta", "shim_diagnostic"}:
        if event_type == "tool_output_delta" and getattr(state, "delegate_mode", False):
            state.anomalies["delegated_tool_events_suppressed"] = int(
                state.anomalies.get("delegated_tool_events_suppressed") or 0
            ) + 1
            return True
        return True
    if event_type in {"stream_end", "turn_ended"}:
        return False
    if event_type == "thinking":
        await state.write_cursor_cli_event(response, event)
        return True
    if event_type == "usage_delta":
        tokens = int(event.get("tokens") or 0)
        prev = getattr(state, "usage", None) if hasattr(state, "usage") else None
        prev_out = int((prev or {}).get("output_tokens") or 0)
        merge_usage_into_stream_state(
            state,
            {
                "input_tokens": int((prev or {}).get("input_tokens") or 0),
                "output_tokens": prev_out + tokens,
                "total_tokens": int((prev or {}).get("total_tokens") or 0) + tokens,
            },
        )
        return True
    delta = cursor_agent_event_to_responses_delta(event)
    if delta is None:
        return False
    await state.write_chat_delta(response, delta)
    return True


def merge_usage_into_stream_state(state: Any, usage: dict[str, Any] | None) -> None:
    if usage is not None and hasattr(state, "usage"):
        state.usage = usage
