from __future__ import annotations

PatchSpec = tuple[str, list[str], str, str, bool]

MODEL_PICKER_NEEDLE = "let u=c.useHiddenModels&&o!==`amazonBedrock`,d;"
MODEL_PICKER_REPLACEMENT = "let u=!1,d;"
MODEL_PICKER_OPTIONAL = True

SIDEBAR_RECENT_THREADS_NEEDLE = (
    "listRecentThreads({cursor:e,limit:t}){return this.params.requestClient.sendRequest(`thread/list`,"
    "{limit:t,cursor:e,sortKey:this.recentConversationSortKey,modelProviders:null,archived:!1,sourceKinds:ke})}"
)
SIDEBAR_RECENT_THREADS_REPLACEMENT = (
    "listRecentThreads({cursor:e,limit:t}){return this.params.requestClient.sendRequest(`thread/list`,"
    "{limit:t,cursor:e,sortKey:this.recentConversationSortKey,modelProviders:[],archived:!1,sourceKinds:ke})}"
)
SIDEBAR_RECENT_THREADS_NEEDLE_26_527 = (
    "listRecentThreads({cursor:e,limit:t}){return this.params.requestClient.sendRequest(`thread/list`,"
    "{limit:t,cursor:e,sortKey:this.recentConversationSortKey,modelProviders:null,archived:!1,sourceKinds:ye})}"
)
SIDEBAR_RECENT_THREADS_REPLACEMENT_26_527 = (
    "listRecentThreads({cursor:e,limit:t}){return this.params.requestClient.sendRequest(`thread/list`,"
    "{limit:t,cursor:e,sortKey:this.recentConversationSortKey,modelProviders:[],archived:!1,sourceKinds:ye})}"
)

_SIDEBAR_SPEC: PatchSpec = (
    "shim-mode sidebar provider filter",
    ["app-server-manager-signals-*.js", "*.js"],
    SIDEBAR_RECENT_THREADS_NEEDLE,
    SIDEBAR_RECENT_THREADS_REPLACEMENT,
    False,
)
_SIDEBAR_SPEC_26_527: PatchSpec = (
    "shim-mode sidebar provider filter",
    ["app-server-manager-signals-*.js", "*.js"],
    SIDEBAR_RECENT_THREADS_NEEDLE_26_527,
    SIDEBAR_RECENT_THREADS_REPLACEMENT_26_527,
    False,
)

_LEGACY_PICKER_SPEC: PatchSpec = (
    "model picker allowlist filter (legacy, informational)",
    ["model-queries-*.js", "*.js"],
    MODEL_PICKER_NEEDLE,
    MODEL_PICKER_REPLACEMENT,
    MODEL_PICKER_OPTIONAL,
)
_MODEL_PICKER_SPEC_26_527: PatchSpec = (
    "model picker allowlist filter",
    ["model-queries-*.js", "*.js"],
    "let u=c.useHiddenModels&&a!==`amazonBedrock`,f;",
    "let u=!1,f;",
    False,
)

PATCH_SPECS_BY_VERSION: dict[str, list[PatchSpec]] = {
    "26.519.81530": [_SIDEBAR_SPEC],
    "26.527.60818": [_MODEL_PICKER_SPEC_26_527, _SIDEBAR_SPEC_26_527],
}

INSPECTION_SPECS_BY_VERSION: dict[str, list[PatchSpec]] = {
    "26.519.81530": [_LEGACY_PICKER_SPEC, _SIDEBAR_SPEC],
    "26.527.60818": [_LEGACY_PICKER_SPEC, _MODEL_PICKER_SPEC_26_527, _SIDEBAR_SPEC_26_527],
}

KNOWN_DESKTOP_VERSIONS = tuple(sorted(PATCH_SPECS_BY_VERSION.keys(), reverse=True))
DEFAULT_PATCH_SPEC_VERSION = "26.519.81530"


def _version_matches_known_major(version: str, known: str) -> bool:
    prefix = known.split(".", 1)[0]
    if not version.startswith(prefix):
        return False
    if len(version) == len(prefix):
        return True
    return version[len(prefix)] == "."


def patch_specs_for_version(version: str) -> list[PatchSpec]:
    if version in PATCH_SPECS_BY_VERSION:
        return list(PATCH_SPECS_BY_VERSION[version])
    for known in KNOWN_DESKTOP_VERSIONS:
        if _version_matches_known_major(version, known):
            return list(PATCH_SPECS_BY_VERSION[known])
    if DEFAULT_PATCH_SPEC_VERSION in PATCH_SPECS_BY_VERSION:
        return list(PATCH_SPECS_BY_VERSION[DEFAULT_PATCH_SPEC_VERSION])
    if KNOWN_DESKTOP_VERSIONS:
        return list(PATCH_SPECS_BY_VERSION[KNOWN_DESKTOP_VERSIONS[-1]])
    return [_SIDEBAR_SPEC]


def inspection_specs_for_version(version: str) -> list[PatchSpec]:
    if version in INSPECTION_SPECS_BY_VERSION:
        return list(INSPECTION_SPECS_BY_VERSION[version])
    for known in KNOWN_DESKTOP_VERSIONS:
        if _version_matches_known_major(version, known):
            return list(INSPECTION_SPECS_BY_VERSION.get(known, patch_specs_for_version(version)))
    if DEFAULT_PATCH_SPEC_VERSION in INSPECTION_SPECS_BY_VERSION:
        return list(INSPECTION_SPECS_BY_VERSION[DEFAULT_PATCH_SPEC_VERSION])
    if KNOWN_DESKTOP_VERSIONS:
        fallback = KNOWN_DESKTOP_VERSIONS[-1]
        return list(INSPECTION_SPECS_BY_VERSION.get(fallback, patch_specs_for_version(version)))
    return [_LEGACY_PICKER_SPEC, _SIDEBAR_SPEC]
