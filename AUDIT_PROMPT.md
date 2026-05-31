# LLM Audit Prompt — Codex Desktop ↔ codex-shim Fidelity Review

You are a senior systems auditor reviewing **codex-shim**, a local OpenAI Responses API proxy that sits between **Codex Desktop** and various upstream model providers. Your job is to **ground every claim in the attached source bundle**, trace behavior from Desktop client expectations through the shim to upstream APIs, and produce a prioritized findings report.

---

## Attached bundle

You have been given **`codex-shim-audit-source.zip`**. Unzip it and treat it as the **only authoritative corpus** for this review. Do not rely on memory of OpenAI/Codex APIs unless you cross-check against files in the bundle.

### Top-level layout

```
codex-shim-audit-source/
├── AUDIT_MANIFEST.md
├── AUDIT_CONTRACTS.md            # Tier A vs BYOK wire contracts (shim-grounded)
├── AUDIT_PROMPT.md               # This audit instruction set
├── codex_shim_repo/              # The shim (Python) — implementation under audit
├── codex-desktop-decompiled/     # Desktop client evidence — ground truth for expectations
└── reverse-cursor-agent/         # Supplemental spawn-helper decomp (minor)
```

### Desktop source (expectations / ground truth)

| Path | What it is | Use for |
|------|------------|---------|
| `codex-desktop-decompiled/app-asar-extracted/` | Electron UI extracted from Codex.app `app.asar` (Vite bundles, webview JS) | Model picker, provider wiring, webview RPC, client-side Responses usage |
| `codex-desktop-decompiled/ghidra/codex/decomp-rust/` | Ghidra pseudo-C decompilation of embedded Rust `codex` CLI (~11k functions) | Native client: HTTP paths, headers, Response item types, streaming, compaction |
| `codex-desktop-decompiled/ghidra/codex/recovered-src/` | Clustered recovered source snippets | Higher-signal Rust modules |
| `codex-desktop-decompiled/ghidra/codex/decomp/` | Early decomp pass (mostly stubs) | Cross-check only if rust decomp is inconclusive |
| `codex-desktop-decompiled/native-binaries/codex.strings.txt` | Strings dump from native CLI | Search for URL paths, header names, error strings, enum/type names |
| `codex-desktop-decompiled/CODEX_SHIM_ARCHITECTURE.md` | Repo-authored integration map | Orientation, not primary evidence |
| `codex-desktop-decompiled/README.md` | Extraction provenance (Codex 26.519.81530, codex-cli 0.133.0) | Version context |

### Shim source (implementation under audit)

| Path | Role |
|------|------|
| `codex_shim_repo/codex_shim/server.py` | HTTP/WS server, routing, passthrough, BYOK dispatch, compaction, header forward |
| `codex_shim_repo/codex_shim/translate.py` | Responses ↔ chat/Anthropic; input validation; tool/reasoning mapping |
| `codex_shim_repo/codex_shim/settings.py` | Model catalog, provider presets, ChatGPT passthrough slug |
| `codex_shim_repo/codex_shim/catalog.py` | Generated Codex Desktop catalog (`wire_api = "responses"`) |
| `codex_shim_repo/codex_shim/response_store.py` | SQLite `previous_response_id` expansion (BYOK only) |
| `codex_shim_repo/codex_shim/responses_ws.py` | WebSocket transport |
| `codex_shim_repo/codex_shim/probe.py` | Offline/live fidelity probes |
| `codex_shim_repo/codex_shim/cursor_cli.py`, `cursor_acp.py` | Cursor subprocess adapters |
| `codex_shim_repo/tests/` | Unit/integration tests + `fixtures/desktop/*.json` golden turns |
| `codex_shim_repo/README.md` | Documented behavior, fidelity tiers, env vars |

---

## Audit methodology (mandatory)

### 1. Evidence-first

For **every** finding, cite:

- **Desktop evidence:** file path + quoted snippet or identifiable string/symbol (minified JS line context is OK)
- **Shim evidence:** file path + function name + quoted snippet
- **Severity rationale:** user-visible breakage vs. cosmetic vs. documented limitation

If you cannot find Desktop evidence for an expected behavior, label the finding **"shim assumption — Desktop evidence not found in bundle"** rather than inventing requirements.

### 2. Trace format

For each capability, produce a **trace row**:

```
[Capability] → Desktop client behavior → Shim entrypoint → Shim transform → Upstream API → Shim response shape → Desktop consumption
```

Example capabilities to trace (non-exhaustive — discover more from Desktop source):

- `POST /v1/responses` (stream + non-stream)
- `GET /v1/responses` WebSocket upgrade
- `POST /v1/responses/compact`
- `GET /v1/models` / model catalog consumption
- `previous_response_id` threading
- Tool loop: `function_call`, `function_call_output`, `local_shell_call`, `web_search_call`, `tool_search_call`, `image_generation_call`, `mcp_tool_call`, `custom_tool_call`
- Reasoning: `reasoning`, `encrypted_content`, `reasoning_summary`
- Compaction: `context_compaction`, `compaction_trigger`
- Headers: `session_id`, `x-codex-*`, tracing headers
- Model slug aliases (`gpt-5.5`, `openai-gpt-5-5*`)
- Image generation gating
- Error/status code handling

### 3. Search strategy for large/minified trees

**Electron JS (`app-asar-extracted/`):**

- Ripgrep/search for: `responses`, `previous_response_id`, `local_shell`, `web_search`, `compact`, `wire_api`, `modelProviders`, `useHiddenModels`, `session_id`, `encrypted_content`, `context_compaction`, `function_call`, WebSocket/SSE event type strings.
- Key files called out in Desktop README: `webview/assets/model-queries-*.js`, bundles mentioning `app-server-manager-signals`.

**Native Rust decomp (`decomp-rust/`, `codex.strings.txt`):**

- Search strings for: `/v1/responses`, `backend-api/codex`, header names, `ResponseItem`, item type strings, `OpenAI-Beta`, `originator`, compaction paths.
- Prefer `recovered-src/` and string hits that map to named Rust symbols over raw `FUN_*` stubs.

**Shim:**

- Start from `server.py` dispatch: `_dispatch_responses`, `_post_chatgpt_responses`, `_merge_codex_forward_headers`, `_sanitize_chatgpt_passthrough_body`, `_compact_response_payload`.
- Cross-check `translate.py`: `KNOWN_RESPONSE_INPUT_TYPES`, `responses_to_chat`, `responses_to_anthropic`, stream emitters.

### 4. Two routing tiers (do not conflate)

| Tier | Route | Contract summary |
|------|-------|------------------|
| **A — ChatGPT passthrough** | `gpt-5.5` / `openai-gpt-5-5*` + `~/.codex/auth.json` | Native pass-through to `chatgpt.com/backend-api/codex/responses`; minimal sanitize; ChatGPT owns `previous_response_id`; raw SSE relay on HTTP |
| **B/C — BYOK** | models from `models.json` | Full translation; shim-owned response IDs; SQLite history expansion; emulated compaction; shim-encoded reasoning |

Audit **each tier separately**. A gap in BYOK is not automatically a passthrough bug and vice versa.

### 5. Known intentional limitations (do not report as bugs unless Desktop proves otherwise)

Documented out-of-scope / best-effort areas:

- Shim does **not** proxy upstream ChatGPT WebSocket; client WS terminates at shim
- Passthrough streaming turns are **not** stored in shim SQLite (ChatGPT owns IDs)
- BYOK does **not** synthesize OpenAI-native `encrypted_content` cryptographic blobs
- BYOK compaction is **emulated** (`context_compaction`), not native ChatGPT compaction v2
- `apply_patch` / `computer_use` stay as generic `function_call` on BYOK (no separate native item types in Desktop decomp)
- Shim does **not** execute tools — Desktop/core executes; shim only translates wire shapes

Flag these only if Desktop source shows Desktop **requires** something different than documented.

---

## Specific audit questions

Answer each with evidence. Mark **PASS**, **GAP**, **BUG**, or **UNKNOWN**.

### A. Wire protocol & routing

1. Does Desktop actually use `wire_api = "responses"` and the endpoints the shim exposes (`/v1/responses`, WS, `/compact`, `/models`)?
2. Are all Response **input item types** Desktop sends handled by shim validation/translators? Any type in Desktop absent from `KNOWN_RESPONSE_INPUT_TYPES`?
3. Are all **output item types** Desktop parses emitted correctly on BYOK streams (including hosted-tool native shapes)?
4. Is passthrough body sanitization (`anthropic-thinking-v1:` stripping) safe — does it ever remove data Desktop/ChatGPT require on Tier A?

### B. Headers & session metadata

5. Compare Desktop's outbound header set vs `_merge_codex_forward_headers` allowlist. Missing headers? Spurious forwards?
6. Is `session_id` threading consistent for store scoping and passthrough?
7. Is client `Authorization` correctly **never** forwarded to ChatGPT while BYOK keys come from settings?

### C. History & IDs

8. When does Desktop send `previous_response_id`? Does passthrough pass-through match native behavior?
9. Does BYOK store expansion match Desktop's expectation for multi-turn tool loops (input ordering, developer instructions, compaction items in history)?
10. Session-scoped store (`CODEX_SHIM_RESPONSE_STORE_SCOPE=session`) — any Desktop scenario that breaks?

### D. Streaming & WebSocket

11. Compare Desktop SSE event types consumed vs shim `ResponsesStreamState` emissions.
12. Passthrough: when is raw SSE relay used vs parsed/re-emitted? Does Desktop care (alias slug, WS path)?
13. WebSocket JSON framing in `responses_ws.py` — match Desktop client?

### E. Tools & agent loop

14. For each tool: Desktop invocation shape → shim inbound mapping → upstream tool schema → shim outbound mapping → Desktop execution trigger.
15. Are MCP tool call shapes faithful?
16. Image generation: is gating (`supports_image_generation`) aligned with Desktop requests?

### F. Reasoning & compaction

17. Tier A: native reasoning/compaction blobs preserved end-to-end?
18. Tier B/C: is shim-encoded reasoning round-trip sufficient for Desktop's parser on the next turn?
19. Compact endpoint: passthrough native vs BYOK emulated — does Desktop accept emulated `context_compaction` shape?

### G. Model catalog & picker

20. Does generated catalog JSON match fields Desktop reads (from `app-asar-extracted`)?
21. `patch-app` needles — still valid against bundled `app-asar-extracted` JS?

### H. Tests & probes vs reality

22. Do `tests/fixtures/desktop/*.json` cover the main Desktop turns found in decomp?
23. What high-risk paths have **no** test or fixture?
24. Would `probe fidelity` / `probe all` miss any gap you found?

### I. Security & ops

25. Host guard / loopback binding sufficient?
26. Logging leaks secrets?
27. Error translation — upstream failures become Desktop-actionable errors?

---

## Required output format

Produce a structured report with these sections:

### 1. Executive summary (≤ 15 bullets)

Highest-impact findings first. Separate Tier A vs BYOK.

### 2. Architecture trace diagram (text or mermaid)

Desktop → shim → upstream for both tiers.

### 3. Trace matrix (table)

| # | Capability | Desktop evidence | Shim handler | Upstream | Status | Notes |
|---|------------|------------------|--------------|----------|--------|-------|

### 4. Findings (prioritized)

For each finding:

```
ID: F-001
Severity: critical | high | medium | low | info
Tier: A | B/C | both
Title: ...
Desktop evidence: [path + snippet]
Shim evidence: [path + snippet]
Impact: what breaks for the user
Recommendation: concrete fix or test to add
```

### 5. Improvement backlog

Non-bug enhancements: better probes, fixtures, docs, decomp search targets.

### 6. Coverage gaps

Desktop behaviors found in decomp with **no** shim handling and **no** documented limitation.

### 7. Decomp search index (optional but valuable)

List the most useful Desktop source locations you discovered (file + search term + why), so maintainers can re-verify after changes.

---

## Quality bar

- **No hand-waving.** If you didn't read the file, say so.
- **Prefer primary Desktop evidence** over shim README claims.
- **Distinguish** "Desktop requires X" from "shim README claims X".
- **Quantify** test gaps (e.g., "streaming `tool_search_call` round-trip untested").
- **Do not** suggest rewriting Codex Desktop or executing tools inside the shim unless Desktop source proves it's necessary.

Begin by reading `AUDIT_MANIFEST.md`, then **`AUDIT_CONTRACTS.md`** (implementation-grounded Tier A vs BYOK contracts with shim source index), then `codex-desktop-decompiled/CODEX_SHIM_ARCHITECTURE.md`. Search Desktop source for `/v1/responses` and Response item type strings to **verify or falsify each contract row**, then read `codex_shim_repo/codex_shim/server.py` and `translate.py`. Only then write findings.

Your trace matrix must reference `AUDIT_CONTRACTS.md` rows and mark each as **VERIFIED**, **GAP**, or **DESKTOP-EVIDENCE-MISSING**.
