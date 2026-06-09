# Catalog compatibility

Codex-shim is a **translation + Desktop catalog + fidelity probe** layer. It is not a LiteLLM, CCX, or Bifrost replacement.

## When to use the shim

| Upstream | Native Codex support | Shim role |
|----------|---------------------|-----------|
| OpenAI Chat Completions (`/v1/chat/completions`) | No (Responses-only client) | Translate Responses ↔ chat |
| Anthropic Messages | No | Translate Responses ↔ Messages |
| Cursor CLI / ACP / Agent | Partial | Delegate or native subprocess routes |
| OpenAI Responses (Tier A passthrough) | Yes via ChatGPT auth | Optional passthrough only |
| Ollama / LM Studio / Bedrock with `wire_api = "responses"` | Often yes | **No shim required** — point Codex at upstream directly |

Run `codex-shim doctor routing` to see per-slug recommendations.

## Chaining with official proxies

If an upstream speaks OpenAI **chat** but not **Responses**, you can chain:

1. **codex-shim** — Codex Desktop ↔ Responses translation, catalog, probes
2. **[codex-responses-api-proxy](https://github.com/openai/codex)** — Responses ↔ chat at the edge (when you want OpenAI-shaped egress)

Use the shim when you need Desktop catalog honesty, BYOK model rows, Cursor delegation, or the compatibility probe matrix—not when a single native Responses endpoint already works.

## LiteLLM / CCX as compatibility targets

Other catalogs solve overlapping problems (model routing, provider adapters, gateway aggregation). Codex-shim **learns** from their edge cases (MCP tool flattening, reasoning replay hygiene, tool schema preflight, `extra_body_params` merge safety) but does **not** depend on them.

## Shim-owned vs Codex-owned config

| Field | Owner | Notes |
|-------|-------|-------|
| `model`, `model_provider`, `model_catalog_json` | Shim generates | `write-config` / picker |
| `base_url`, `wire_api`, `requires_openai_auth` | Shim generates | Always `responses`; auth not required for BYOK |
| `supports_websockets`, retry/timeouts | Shim generates | Match Desktop expectations |
| `query_params`, `http_headers` | Optional shim overrides | `~/.codex-shim/provider_overrides.toml` |
| Per-model `apiKey`, `baseUrl`, `extraBodyParams` | User settings (`settings.json`) | Merged safely at POST time |
| Per-model `auth_command` / `auth_args` | User settings | Subprocess token minting (300s cache) |
| Helper / auto-review slugs | Shim policy | `CODEX_SHIM_HELPER_MODEL_POLICY`, `CODEX_SHIM_HELPER_FALLBACK_SLUG` |

## Verification

- `codex-shim probe fidelity` — offline translation fixtures
- `codex-shim probe matrix` — full compatibility matrix (offline steps always; live steps when daemon is up)
- `codex-shim probe matrix --live` — optional Tier A passthrough smoke

## Known limitations

- **Heartbeat**: Codex Desktop may expect periodic heartbeat traffic on long-lived connections; the shim does not implement a localhost heartbeat stub. Document-only limitation.
- **Helper model fallback**: Auto-review slugs may route to a billable fallback unless `helper_model_policy=reject`.
- **MCP namespace tools**: Composite names use `namespace__name` (max 64 chars); collisions are deduped in tool preflight.
