# Codex Desktop inference map

Evidence-backed map for the **12-day Desktop RE plan** (Desktop **26.527.31326**, shim `http://127.0.0.1:8765/v1`). Tags: **CAPTURE**, **STRINGS**, **GHIDRA**, **INFERRED**.

## Plan progress

| Day | Focus | Status |
|-----|--------|--------|
| 1 | Baseline + scenario matrix | done (STRINGS) |
| 2 | Capture harness | done |
| 3–4 | Tier A + BYOK wire captures S1–S6 | done (CAPTURE shim-wire) |
| 5 | Tools + WS S7–S10 | done (S3/S8/S9/S10 CAPTURE; S7 blocked — no Anthropic slug in models.json) |
| 6 | App-server method index | done (STRINGS) |
| 7 | App-server → HTTP map | done (CAPTURE + `APP_SERVER_TO_HTTP.md`) |
| 8–9 | Native HTTP/proxy RE | done draft (GHIDRA `shim_hits.md`, `NATIVE_HTTP_NOTES.md`) |
| 10 | Tool execution matrix | done draft (`TOOL_EXECUTION_MATRIX.md`) |
| 11 | Contracts + fixtures | done (`captured/*.json`, `AUDIT_CONTRACTS.md` evidence table) |
| 12 | This doc finalized | done |

Artifacts: [`scripts/capture_runbook.md`](../scripts/capture_runbook.md), gitignored `codex-desktop-decompiled/RE_SCENARIO_MATRIX.md`, `captures/MANIFEST.json` (9 parsed runs).

---

## Architecture

```text
Codex Desktop (Electron)
  webview → app-server JSON-RPC (in-process codex)
    → model_provider { wire_api: "responses", base_url: "http://127.0.0.1:PORT/v1" }
      → POST/GET /v1/responses (+ compact, models)
        → codex-shim
          → Tier A: chatgpt.com/backend-api/codex/responses
          → Tier B/C: BYOK upstream (chat/anthropic/cursor/…)
```

**STRINGS** + **INFERRED** from [`CODEX_SHIM_ARCHITECTURE.md`](../codex-desktop-decompiled/CODEX_SHIM_ARCHITECTURE.md), [`AUDIT_CONTRACTS.md`](../AUDIT_CONTRACTS.md), generated contracts. **CAPTURE** confirms HTTP shapes in `tests/fixtures/desktop/captured/`.

---

## Tier routing

| Tier | When | Upstream | Evidence |
|------|------|----------|----------|
| A | `route.is_chatgpt` / gpt-5.5 + auth | ChatGPT backend | CAPTURE S1/S4; STRINGS; GHIDRA ChatGPT URL cluster |
| B/C | BYOK slugs in settings | Provider URL | CAPTURE S5/S6/S8; AUDIT |

---

## Tool boundary

See gitignored [`TOOL_EXECUTION_MATRIX.md`](../codex-desktop-decompiled/TOOL_EXECUTION_MATRIX.md).

| Item type | Cursor delegate | OpenAI/Anthropic BYOK | Evidence |
|-----------|-----------------|----------------------|----------|
| `web_search_call` | suppressed (Cursor executes) | mapped / partial local | CAPTURE S3; STRINGS; AUDIT |
| `local_shell_call` | suppressed (Cursor executes) | mapped / yes | CAPTURE S10; probe history; AUDIT |
| `function_call` / MCP | suppressed on Cursor output | mapped / often | AUDIT; golden fixtures |
| Assistant `message` | forwarded | forwarded | CAPTURE S5/S6 |

Cursor routes set `metadata.shim_route.execution_mode=delegate` and `tool_authority=cursor`. Workspace cwd is resolved from Desktop request metadata/headers (S11 capture) before falling back to `models.json` `cwd`.

**S11 workspace keys (shim resolver, in order):**

| Priority | Source | Evidence |
|----------|--------|----------|
| 1 | `metadata.cwd` / `working_directory` / `workspace`, `_shim_*` body keys | CAPTURE curl smoke |
| 2 | Headers `x-codex-cwd` / `x-codex-workspace` / `x-workspace` | CAPTURE curl smoke |
| 3 | `client_metadata.x-codex-turn-metadata` → `thread_id` → `~/.codex/sessions/**/rollout-*-{thread_id}.jsonl` → `session_meta.payload.cwd` | CAPTURE mitm WS (Desktop does **not** send cwd on wire) |
| 4 | Static `cwd` in `models.json` | operator config |

Desktop WebSocket turns carry `thread_id` + `workspace_kind: "project"` only; cwd lives in rollout files, not in the HTTP/WS body.

| Item type | On wire (non-Cursor)? | Local exec? | Evidence |
|-----------|----------------------|-------------|----------|
| `web_search_call` | yes | partial | CAPTURE S3; STRINGS; AUDIT |
| `local_shell_call` | yes | yes | CAPTURE S10; probe history; AUDIT |
| `image_generation_call` | yes | partial | CAPTURE S9; STRINGS |
| `function_call` / MCP | yes | often | AUDIT; golden fixtures |

---

## History & compaction

| Mechanism | Tier A | BYOK | Evidence |
|-----------|--------|------|----------|
| `previous_response_id` | Stripped upstream (default) | Sent turn 2+ | CAPTURE S6; AUDIT |
| Full `input` history | Desktop sends | Desktop sends | CAPTURE S2 |
| `/v1/responses/compact` | Native ChatGPT | Emulated | CAPTURE S4 |

---

## Maintenance (upgrade checklist)

After each Desktop upgrade:

1. Refresh `codex-desktop-decompiled/` per [`codex-desktop-decompiled/README.md`](../codex-desktop-decompiled/README.md).
2. `python3 scripts/extract_app_server_schemas.py`
3. `python3 scripts/generate_desktop_contract.py --write`
4. `python3 scripts/generate_desktop_app_server_contract.py --write`
5. Re-run capture matrix (minimum smoke: S1, S5, S8) via [`scripts/capture_runbook.md`](../scripts/capture_runbook.md); `python3 scripts/record_shim_wire_captures.py` → `export_captured_fixtures.py --write`
6. `python3 scripts/check_desktop_patch_needles.py`
7. `PYTHONPATH=. python3 -m pytest tests/ -m "not live" -q`

Optional Desktop HAR captures improve app-server RPC timing; shim-wire JSONL is the committed minimum.

See [`codex-desktop-decompiled/README.md`](../codex-desktop-decompiled/README.md) RE backlog table.
