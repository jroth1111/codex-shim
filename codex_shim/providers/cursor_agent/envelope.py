from __future__ import annotations

import uuid
from pathlib import Path
from typing import Any

from ...routing import InferenceContext
from ...responses_request import responses_items_from_input


def _prompt_text(body: dict[str, Any]) -> str:
    items = responses_items_from_input(body.get("input"))
    parts: list[str] = []
    for item in items:
        if not isinstance(item, dict):
            continue
        content = item.get("content")
        if isinstance(content, str):
            parts.append(content)
        elif isinstance(content, list):
            for block in content:
                if isinstance(block, dict):
                    text = block.get("text") or block.get("content")
                    if text:
                        parts.append(str(text))
    if parts:
        return "\n".join(parts)
    instructions = body.get("instructions")
    if isinstance(instructions, str) and instructions.strip():
        return instructions.strip()
    return ""


def _mcp_tools_from_body(body: dict[str, Any]) -> dict[str, Any]:
    tools = body.get("tools")
    if not isinstance(tools, list):
        return {"mcp_tools": []}
    descriptors: list[dict[str, Any]] = []
    for tool in tools:
        if not isinstance(tool, dict):
            continue
        name = str(tool.get("name") or tool.get("type") or "tool")
        descriptors.append(
            {
                "name": name,
                "provider_identifier": str(tool.get("provider") or "codex-shim"),
                "tool_name": name,
                "description": str(tool.get("description") or ""),
                "input_schema": tool.get("parameters") or tool.get("input_schema") or {},
            }
        )
    return {"mcp_tools": descriptors}


def build_run_request_skeleton(
    body: dict[str, Any],
    *,
    inference: InferenceContext,
    conversation_id: str | None = None,
    conversation_group_id: str | None = None,
    message_id: str | None = None,
    chained_from_previous: bool = False,
    workspace: Path | None = None,
    prompt_text: str | None = None,
) -> dict[str, Any]:
    """
    Build a JSON-serializable AgentRunRequest skeleton aligned with reproduce-inference.mjs.
    """
    conv_id = conversation_id or str(uuid.uuid4())
    group_id = conversation_group_id or str(uuid.uuid4())
    msg_id = message_id or str(uuid.uuid4())
    model_id = inference.resolved_model_id or str(body.get("model") or "default")
    resolved_prompt = prompt_text if prompt_text is not None else _prompt_text(body)
    workspace_note = str(workspace) if workspace is not None else "unknown"
    selected_context: dict[str, Any] = {
        "selectedImages": [],
        "cursorRules": f"<rules resolved from workspace/config at {workspace_note}>",
        "cursorCommands": f"<command references resolved from prompt/workspace at {workspace_note}>",
    }
    if workspace is not None:
        selected_context["workspaceRoot"] = str(workspace)

    user_message = {
        "text": resolved_prompt,
        "messageId": msg_id,
        "selectedContext": selected_context,
        "mode": f"AgentMode.{inference.agent_mode_name} ({inference.agent_mode_value})",
        "modeProtoValue": inference.agent_mode_value,
    }

    chained = chained_from_previous or bool(body.get("previous_response_id"))
    run_request: dict[str, Any] = {
        "conversationState": {
            "note": "Expanded by shim when previous_response_id is set.",
            "chained": chained,
        },
        "action": {
            "action": {
                "case": "userMessageAction",
                "value": {"userMessage": user_message},
            },
        },
        "requestedModel": {
            "modelId": model_id,
            "maxMode": False,
            "parameters": [],
        },
        "mcpTools": _mcp_tools_from_body(body),
        "conversationId": conv_id,
        "conversationGroupId": group_id,
        "excludeWorkspaceContext": False,
    }

    if inference.cli_mode != "default":
        run_request["_sideChannelMetadata"] = {
            "mode": inference.metadata_mode,
            "note": "Mirrors cursor run-agent setMetadata('mode', ...).",
        }

    return {
        "clientEnvelope": {
            "message": {"case": "runRequest", "value": run_request},
        },
    }


def structural_self_check(skeleton: dict[str, Any], inference: InferenceContext, *, workspace: Path | None = None) -> list[dict[str, Any]]:
    """Rows compatible with reproduce-inference.mjs self-check."""
    value = skeleton.get("clientEnvelope", {}).get("message", {}).get("value", {})
    um = (
        value.get("action", {})
        .get("action", {})
        .get("value", {})
        .get("userMessage", {})
    )
    rows: list[dict[str, Any]] = []
    rows.append(
        {
            "key": "userMessage.modeProtoValue",
            "expected": inference.agent_mode_value,
            "got": um.get("modeProtoValue"),
            "match": um.get("modeProtoValue") == inference.agent_mode_value,
        }
    )
    rows.append(
        {
            "key": "requestedModel.modelId",
            "expected": "non-empty string",
            "got": value.get("requestedModel", {}).get("modelId"),
            "match": bool(value.get("requestedModel", {}).get("modelId")),
        }
    )
    if workspace is not None:
        rows.append(
            {
                "key": "userMessage.selectedContext.workspaceRoot",
                "expected": str(workspace),
                "got": um.get("selectedContext", {}).get("workspaceRoot"),
                "match": um.get("selectedContext", {}).get("workspaceRoot") == str(workspace),
            }
        )
    return rows
