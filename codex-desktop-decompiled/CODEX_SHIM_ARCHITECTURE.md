# codex-shim — architecture and behavior

Generated from repository analysis (May 2026). This documents what the shim does and how it relates to Codex Desktop.

## Purpose

**codex-shim** is a local **OpenAI Responses API** server on loopback (`127.0.0.1:8765` by default). Codex Desktop/CLI is configured to send `/v1/responses` (and related) traffic to the shim instead of OpenAI directly. The shim **translates** each request to the upstream API shape for the selected model (OpenAI chat completions, Anthropic Messages, Cursor Agent CLI/ACP, Z.AI, NVIDIA NIM, or ChatGPT Codex passthrough) and **translates streaming replies back** into Responses SSE/items Codex expects.

No Codex rebuild is required. API keys stay in `~/.codex-shim/models.json` (or `--settings`); the generated catalog does not embed secrets.

## Data flow

```text
Codex Desktop / CLI
    │  POST /v1/responses, GET /v1/responses (WebSocket), /v1/responses/compact, GET /v1/models
    ▼
codex-shim (aiohttp, Host-guarded loopback)
    │
    ├─ slug gpt-5.5 + ~/.codex/auth.json access_token
    │     → https://chatgpt.com/backend-api/codex/responses
    │
    ├─ provider openai / generic-chat-completion-api / zai / nim
    │     → chat completions URL (translated from Responses)
    │
    ├─ provider anthropic
    │     → /v1/messages
    │
    └─ provider cursor-agent | cursor-acp
          → subprocess: cursor agent … | cursor-agent acp …
```

## Core modules

| Module | Role |
|--------|------|
| `codex_shim/server.py` | HTTP server: routing and upstream proxying |
| `codex_shim/streaming.py` | Responses SSE state machine and streaming event translation |
| `codex_shim/compact.py` | BYOK compaction request/response helpers |
| `codex_shim/access_log.py` | Request and access log formatting |
| `codex_shim/debug_dump.py` | Opt-in redacted/full request debug dumps |
| `codex_shim/image_gate.py` | Explicit image-generation tool/history gating |
| `codex_shim/picker.py` | Local picker HTML and active-model config rewrite helpers |
| `codex_shim/thinking.py` | Shared `anthropic-thinking-v1:` reasoning codec |
| `codex_shim/desktop_contract.py` | Generated Desktop ResponseItem/action contract constants |
| `codex_shim/translate.py` | Responses ⇄ chat/Anthropic; tool/reasoning/image translation; validation |
| `codex_shim/settings.py` | Load `models.json`; provider presets; `ShimModel` normalization; visibility (keys, disabled rows) |
| `codex_shim/catalog.py` | Build `custom_model_catalog.json` entries Codex Desktop reads |
| `codex_shim/cli.py` | `generate`, `start`, `enable`, `app`, `patch-app`, `doctor`, `test`, config import/export |
| `codex_shim/cursor_cli.py` | Headless `cursor agent` subprocess + stream-json mapping |
| `codex_shim/cursor_acp.py` | `cursor-agent acp` JSON-RPC session |
| `codex_shim/hostguard.py` | Reject non-loopback `Host` (DNS rebinding) |
| `codex_shim/smoke.py` | Live route smoke tests for `codex-shim test` |
| `codex_shim/response_store.py` | SQLite persistence for BYOK `previous_response_id` history (session-scoped by default) |
| `codex_shim/probe.py` | Live daemon probes: compact shape, history expansion, offline fidelity |
| `codex_shim/responses_ws.py` | WebSocket transport mirroring Responses SSE events |

## Request lifecycle (`POST /v1/responses`)

1. **Route** by `model` slug → `ShimModel` (from settings + optional ChatGPT passthrough).
2. **Image-gen guard** — BYOK routes without `supports_image_generation` get **400** if Codex requests image tools.
3. **ChatGPT path** — forward body (model forced to `gpt-5.5`) with Bearer from `auth.json`.
4. **BYOK path** — expand `previous_response_id` from SQLite `ResponseStore` (session-scoped by default; `CODEX_SHIM_RESPONSE_STORE_SCOPE=global` is legacy); `validate_responses_input`.
5. **Translate** to upstream (`responses_to_chat`, `responses_to_anthropic`, or Cursor adapters).
6. **Stream or buffer** upstream; map deltas to Responses events (`function_call_arguments.delta`, reasoning items, etc.).
7. **Store** output items under response `id` for follow-up turns.

Compaction: ChatGPT uses native compact endpoint; BYOK uses emulated summarization via the same upstream transports.

## Configuration surfaces

- **User models**: `~/.codex-shim/models.json` (or `--settings`)
- **Generated runtime** (repo `.codex-shim/`): catalog JSON, optional `config.toml` snippet, pid, log
- **Codex wiring**: managed block in `~/.codex/config.toml` (`model_providers.codex_shim` → `http://127.0.0.1:8765/v1`)

## macOS Desktop ASAR patch

Codex Desktop hides catalog slugs via availability-based gates on newer builds; legacy `useHiddenModels` patching is informational only on Desktop 26.519+. The sidebar provider-filter patch remains the primary shim mutation target. Version-keyed needles live in `codex_shim/patch_specs.py`. See `codex-shim doctor patch`, and `python scripts/check_desktop_patch_needles.py`.

## Security

- Bind `127.0.0.1`; optional `CODEX_SHIM_ALLOWED_HOSTS`
- Keys never in catalog; logs are summary-level
- ChatGPT token read at request time from `~/.codex/auth.json`

## Tests

`tests/` cover translation round-trips, server routing, catalog generation, Cursor adapters, reasoning blobs, smoke classification.

## Relation to decompiled Codex Desktop

The shim **intercepts at the HTTP boundary** Codex already uses for models (`/v1/responses`). Desktop internals (Electron `app.asar`, Rust `codex` CLI binary) implement the client; this repo does not fork them—it adapts the wire protocol. Decompiled artifacts live alongside this file under `codex-desktop-decompiled/`.
