# Cursor upstream parity runbook

Prove that **shim → cursor-agent** matches **direct cursor-agent** on what `api2.cursor.sh`
sees (`AgentService/Run` / `BidiAppend`), not Desktop SSE or CLI `stream-json`.

## Capture paths

| Mode | Command | Proves |
|------|---------|--------|
| **WS (default)** | `--via ws` or omit `--via` | Shim delegate upstream parity (deterministic lab path) |
| **Desktop** | `--via desktop --relaunch-desktop` | Full Desktop → shim → cursor-agent chain |
| **Two-turn** | `--two-turn` | Resume/session parity; **always WS** for shim turns (`--via desktop` is rejected) |

Use WS for regression and parity evidence. Use Desktop only when you need to validate
Codex Desktop routing, model picker, and AppleScript integration.

## Prerequisites

- `mitmproxy` + trusted CA at `~/.mitmproxy/mitmproxy-ca-cert.pem`
- `cursor-agent` on PATH
- Shim configured with `cursor-auto` in `~/.codex-shim/models.json`
- Desktop `stream_idle_timeout_ms >= 3600000` in `~/.codex/config.toml` for long turns

## Ports

| Port | Role |
|------|------|
| 8080 | mitm for **golden** direct CLI |
| 8081 | mitm for **shim** subprocess traffic |
| 8765 | codex-shim daemon |

## Single-turn capture (WS — recommended)

```bash
cd /path/to/codex_shim
export CODEX_SHIM_CURSOR_UPSTREAM_CAPTURE_PROXY=http://127.0.0.1:8081
# Do not export HTTP_PROXY/SSL_CERT_FILE for --via desktop (breaks Codex Desktop websockets).

PYTHONPATH=. python3 scripts/capture_cursor_upstream_parity.py \
  --workspace "/path/to/project" \
  --thread-id "parity-thread-001"
```

Artifacts:

- `codex-desktop-decompiled/captures/debug/cursor_agent_upstream_golden.json`
- `codex-desktop-decompiled/captures/debug/cursor_shim_upstream_candidate.json`
- `codex-desktop-decompiled/captures/debug/cursor_upstream_parity_report.json`

## Two-turn resume capture

Turn 1 seeds session; turn 2 uses `--resume` (golden) / session store (shim). Shim
turns always go through the WS client (`_shim_ws_turn`); `--via` is ignored and
`--via desktop` is rejected.

```bash
PYTHONPATH=. python3 scripts/capture_cursor_upstream_parity.py \
  --two-turn \
  --workspace "/path/to/project" \
  --thread-id "parity-resume-001"
```

### Shared-session mode (strictest byte comparison)

Injects golden turn-1 `session_id` into shim store so turn-2 compares the **same**
conversation anchor without `previous_response_id`:

```bash
PYTHONPATH=. python3 scripts/capture_cursor_upstream_parity.py \
  --two-turn \
  --shared-session \
  --workspace "/path/to/project" \
  --thread-id "parity-shared-001"
```

Report: `cursor_upstream_resume_parity_report.json` with `resume_proof` rows.

## Desktop capture (AppleScript)

Full-chain tier — not the default. Does not support `--two-turn`.

```bash
PYTHONPATH=. python3 scripts/capture_cursor_upstream_parity.py \
  --via desktop \
  --relaunch-desktop \
  --desktop-model "Cursor Agent Auto" \
  --workspace "/path/to/project"
```

- Pass `--relaunch-desktop` to restart Desktop after `codex-shim model use cursor-auto`
- Opens Desktop with `codex app -c model="cursor-auto"`, then picker fallback, then pastes the prompt
- Waits for shim `[req]`/`[access]` with `cursor-auto` (fails on `gpt-*` / `claude-*`)
- Picks mitm `AgentService/Run` by **prompt substring**, not last jsonl row
- Fresh `.jsonl` per run (no stale traffic)

If AppleScript routing is flaky on your machine, use manual submit:

```bash
PYTHONPATH=. python3 scripts/capture_cursor_upstream_parity.py \
  --via desktop --relaunch-desktop --desktop-manual \
  --workspace "/path/to/project" \
  --prompt "Reply with exactly: CURSOR_DESKTOP_UPSTREAM_OK"
```

Then paste/submit the prompt in Desktop with **Cursor Agent Auto** selected.

## Decode + diff manually

```bash
PYTHONPATH=. python3 scripts/decode_cursor_upstream_run.py \
  codex-desktop-decompiled/captures/debug/cursor_agent_upstream_turn2.json

PYTHONPATH=. python3 scripts/diff_cursor_upstream_capture.py \
  codex-desktop-decompiled/captures/debug/cursor_agent_upstream_turn2.json \
  codex-desktop-decompiled/captures/debug/cursor_shim_upstream_turn2.json \
  --decode-proto --resume-proof \
  --golden-session-id "<golden-session-uuid>" \
  --shim-session-id "<shim-mapped-uuid>"
```

## Reading results

| Result | Meaning |
|--------|---------|
| `body_bytes` match | Same envelope scale (good for resumed turns) |
| `body_hex` mismatch on turn 1 | Expected — new random `conversationId` |
| `body_hex` mismatch on turn 2 (independent seeds) | Expected — different session histories |
| `resume:goldenConversationIdMatchesSeed` | Golden `--resume` wired correctly |
| `resume:shimConversationIdMatchesStore` | Shim `thread_id → session_id` store works |
| `resume:crossPathConversationIdMatch` (`--shared-session`) | Same session anchor across paths |
| `resume:crossPathBodyHexMatch` (`--shared-session`) | Byte-identical upstream (north-star) |

## Session store

Mappings live in `.codex-shim/cursor_thread_sessions.sqlite` (override with
`CODEX_SHIM_CURSOR_SESSION_STORE`). Safe across shim restarts; capture scripts
clear the store only when seeding a fresh two-turn run.

**Stale `thread_id` caveat:** If Desktop reuses a `thread_id` after you start a
new conversation in the UI, the shim may resume the old Cursor session because
`build_cursor_cli_turn_options` resumes whenever the store has a mapping and the
body includes user text. For lab captures, use a fresh `--thread-id` per run.
For production, clear or rotate mappings when Desktop signals a new thread.

## Proxy without temp settings

Set once for capture (shim daemon + `cursor-agent` subprocess):

```bash
export CODEX_SHIM_CURSOR_UPSTREAM_CAPTURE_PROXY=http://127.0.0.1:8081
```

No need to edit `models.json` `env` for mitm capture.
