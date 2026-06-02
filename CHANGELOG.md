# Changelog

All notable changes to this project will be documented in this file.

The format is loosely based on [Keep a Changelog](https://keepachangelog.com/),
and this project does not yet follow semantic versioning (pre-1.0).

## Unreleased

### Notes

- Verified parity with four downstream `origin` feature branches (`feat/compact-native-tools`, `feat/model-picker-web-ui`, `fix/streaming-usage-compaction-main`, `fix/visual-feedback-passthrough`); see [`docs/DOWNSTREAM_PARITY.md`](docs/DOWNSTREAM_PARITY.md). No additional code ports required beyond the modular fork refactor.

### Added

- `POST /v1/responses/compact` support. ChatGPT passthrough forwards to the
  native ChatGPT compact endpoint; BYOK OpenAI/chat and Anthropic routes run a
  non-streaming compact summarization request and return a Responses-shaped
  compacted window for the next Codex turn.
- BYOK fallback schemas for native Responses-only tools: `computer_use`,
  `web_search`, `apply_patch`, and `local_shell` now translate into ordinary
  function tools for chat-completions / Anthropic providers instead of being
  dropped. Codex MCP function tools continue to pass through unchanged.
- Streaming `response.completed` events now include upstream `usage` when chat
  or Anthropic streams provide it, so Codex can track token counts and trigger
  auto-compaction.
- BYOK visual feedback passthrough for computer-use loops: Responses
  `input_image`, `computer_call_output` screenshots, and visual
  `function_call_output` payloads now reach OpenAI chat providers as
  `image_url` parts and Anthropic providers as image blocks.
- GitHub Actions CI (`.github/workflows/ci.yml`) running pytest and
  `compileall` on Python 3.11 and 3.12.
- `[project.optional-dependencies] dev` in `pyproject.toml` so
  `pip install -e ".[dev]"` pulls `pytest` and `pytest-asyncio` in one step.
- `CONTRIBUTING.md` documenting the dev loop, what kinds of PRs are useful,
  and what to include in bug reports.
- `.github/ISSUE_TEMPLATE/` with structured bug and feature request templates.
- `CHANGELOG.md` (this file).
- Web-based model picker at `GET /picker` (with `GET /api/models` and
  `POST /api/switch`) so the active shim model can be swapped from a browser
  without the CLI. Switching rewrites `model = "..."` and the
  `[model_providers.codex_shim]` `name = "..."` in `~/.codex/config.toml` so
  the Codex Desktop UI shows the selected model name (e.g. "Kimi K2.6")
  instead of the generic "Codex Shim" label. Optional auto-restart of Codex
  Desktop is cross-platform (`taskkill` + `Codex.exe` on Windows,
  `osascript` + `open -a Codex` on macOS). All picker routes are behind the
  existing `Host`-header allowlist, so a visited web page still cannot drive
  them via DNS rebinding.
- Best-effort dump of the last forwarded chat-completions request body to
  `.codex-shim/last_request.json` is now opt-in via
  `CODEX_SHIM_DEBUG_DUMP=1` and redacted unless
  `CODEX_SHIM_DEBUG_DUMP_FULL=1` is set. Upstream error bodies are logged
  with the model slug before being returned as normalized Responses errors.
- Generated Desktop protocol contract constants (from local
  `codex-desktop-decompiled/native-binaries/codex.strings.txt` when regenerating), with
  `codex-shim doctor contract` and CI drift checks against committed `desktop_contract.py`.
- Live integration suite for the Cursor Agent CLI route
  (`tests/live/test_cursor_agent.py`): sync/SSE/WebSocket responses, compact,
  chat completions, desktop input fixtures, and `previous_response_id` history.
  Auto-configures `cursor-auto` when `cursor` is on `PATH`.

### Changed

- Cursor Agent CLI streaming now reads stdout in chunks instead of line-at-a-time,
  so large `stream-json` events are not truncated by asyncio read limits.
- Split the monolithic `codex_shim/translate.py` module into a
  `codex_shim/translate/` package (`input`, `chat`, `anthropic`, `output`,
  `tools`, `tool_schema`, `content`, `messages`, `usage`, `common`). Public
  imports remain
  `from codex_shim.translate import …`.
- Moved translate unit tests from `tests/test_translate.py` into
  `tests/translate/` (`test_input`, `test_chat`, `test_anthropic`, `test_output`,
  `test_content`, `test_tools`, `test_messages`, `test_tool_schema`).
- Reframed the project around a generic all-model Codex shim instead of any
  single upstream app or model store.
- Made `~/.codex-shim/models.json` the canonical default settings file.
- Renamed the generated Codex provider to `codex_shim` / "Codex Shim".
- Settings now prefer a generic top-level `models` array with snake_case keys,
  while still accepting `customModels` and camelCase aliases for existing
  exports.
- `CODEX_SHIM_RESPONSE_STORE_SCOPE` now defaults to session isolation with
  per-session LRU pruning; set it to `global` for legacy shared-store behavior.
- The image-generation guard now keys only on explicit image tools,
  `tool_choice`, or existing `image_generation_call` history, not English
  prompt text.

### Fixed

- `codex-shim patch-app` patches only the Codex Desktop sidebar's recent
  thread loader so native `openai` chats remain visible while Desktop is routed
  through the `codex_shim` provider. The legacy picker `useHiddenModels`
  needle is inspection-only. Tested on Codex Desktop 26.519.81530 /
  `codex-cli 0.133.0` on macOS arm64.
- `patch-app` now updates `ElectronAsarIntegrity` in `Info.plist` after
  repacking `app.asar`, and `restore-app` restores or recomputes that metadata
  before re-signing the app bundle.

## 2026-05-25 — Auth-gated ChatGPT passthrough + docs hardening

### Added

- `settings.chatgpt_passthrough_available()` checks `~/.codex/auth.json` for a
  usable `tokens.access_token`. The synthetic `gpt-5.5` slug is now only
  advertised in `/health`, `/v1/models`, `codex-shim list`, and the generated
  `custom_model_catalog.json` while that token is present.
- `_load_models()` in the CLI wraps model settings loading with actionable
  errors for missing files and invalid JSON.
- `_entrypoint()` in the CLI catches `BrokenPipeError` at the boundary so
  piping `codex-shim list` into `head`/`grep` exits cleanly instead of dumping
  a traceback.
- Regression tests covering auth-gating, CLI error UX, settings aliases, and
  catalog generation.

### Changed

- `/health` payload now includes `chatgpt_passthrough: bool` and reports the
  real model count instead of always-plus-one.
- `cli._resolve_model_slug("gpt-5.5", ...)` raises `SystemExit` telling the
  user to run `codex login` when auth.json is missing, instead of returning a
  slug that would 401 on first request.
- `default_model_slug` picks the first configured BYOK model when passthrough
  is not usable, instead of unconditionally returning `gpt-5.5`.
- README install section recommends `pip install -e .` as the primary path.
- README benchmarking section: replaced an unsupported "7x fewer input tokens
  / 5–10x faster" claim with honest anecdata and a note that no reproducible
  benchmark script ships with the repo yet.

### Fixed

- Codex Desktop picker / `/v1/models` no longer offers `gpt-5.5` when there's
  no Codex login, removing the misleading "select it to get a 401" footgun.

## 2026-05-25 — Initial public hardening

### Added

- Public-grade README rewrite covering install, ChatGPT passthrough, tool
  calls, computer use, prompt catching/proxy patterns, benchmarking, security,
  limitations, troubleshooting, and contributing.
- `pyproject.toml` build-system, `readme`, `license`, `authors`, `keywords`,
  classifiers, and project URLs.
