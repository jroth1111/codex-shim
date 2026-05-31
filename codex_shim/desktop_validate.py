from __future__ import annotations

from .desktop_contract import (
    DESKTOP_IMAGE_GENERATION_ACTION_FIELDS,
    DESKTOP_LOCAL_SHELL_ACTION_FIELDS,
    DESKTOP_WEB_SEARCH_ACTION_FIELDS,
    DESKTOP_WEB_SEARCH_ACTION_TYPES,
)


class DesktopContractError(ValueError):
    pass


def assert_web_search_action(action: dict) -> None:
    if not isinstance(action, dict):
        raise DesktopContractError(f"web_search action must be a dict, got {type(action)!r}")
    action_type = action.get("type")
    if action_type not in DESKTOP_WEB_SEARCH_ACTION_TYPES:
        raise DesktopContractError(f"web_search action.type must be one of {sorted(DESKTOP_WEB_SEARCH_ACTION_TYPES)}, got {action_type!r}")
    allowed = DESKTOP_WEB_SEARCH_ACTION_FIELDS.get(str(action_type), frozenset())
    extra = set(action.keys()) - {"type"} - allowed
    if extra:
        raise DesktopContractError(f"web_search action has unexpected fields: {sorted(extra)}")


def assert_local_shell_action(action: dict) -> None:
    if not isinstance(action, dict):
        raise DesktopContractError(f"local_shell action must be a dict, got {type(action)!r}")
    extra = set(action.keys()) - DESKTOP_LOCAL_SHELL_ACTION_FIELDS
    if extra:
        raise DesktopContractError(f"local_shell action has unexpected fields: {sorted(extra)}")


def assert_image_generation_action(action: dict) -> None:
    if not isinstance(action, dict):
        raise DesktopContractError(f"image_generation action must be a dict, got {type(action)!r}")
    extra = set(action.keys()) - DESKTOP_IMAGE_GENERATION_ACTION_FIELDS
    if extra:
        raise DesktopContractError(f"image_generation action has unexpected fields: {sorted(extra)}")
