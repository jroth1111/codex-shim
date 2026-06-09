# Contributing to codex-shim

Thanks for hacking on the shim. Issues and PRs welcome.

## Dev loop

Requires **Python 3.11+** (`requires-python` in `pyproject.toml`; 3.9/3.10 fail on
`int | None` union syntax in `responses_ws.py`).

```bash
git clone https://github.com/0xSero/codex-shim
cd codex-shim
python3 -m pip install -e ".[dev]"

python3 -m pytest tests/ -q
python3 -m compileall codex_shim/ -q
python3 scripts/generate_desktop_contract.py --check           # skips if no local RE tree
python3 scripts/generate_desktop_app_server_contract.py --check
python3 scripts/check_desktop_patch_needles.py                 # exits 1 if RE tree exists but needles drift
```

For the 12-day Desktop inference RE plan, see [`docs/DESKTOP_INFERENCE_MAP.md`](docs/DESKTOP_INFERENCE_MAP.md) and
[`scripts/capture_runbook.md`](scripts/capture_runbook.md).

Optional: maintain a gitignored `codex-desktop-decompiled/` tree (see README). The
patch-needle **script** fails when the tree exists but needles are missing; the
**pytest** `test_decompiled_bundle_patch_needles_match_specs` skips when the tree is
incomplete. Set `CODEX_SHIM_REQUIRE_DESKTOP_DECOMPILED=1` to fail both when the tree
is absent.

CI runs the same commands on Python 3.11 and 3.12 via
`.github/workflows/ci.yml`. Match it locally before opening a PR.

## Translation package (`codex_shim/translate/`)

BYOK routing still imports the public surface from `codex_shim.translate`
(unchanged). Implementation lives in submodules; add regression tests under
`tests/translate/` beside the code you touch.

| Module | Responsibility |
|--------|----------------|
| `input.py` | Validate Responses input; `KNOWN_RESPONSE_INPUT_TYPES` |
| `messages.py` | Role normalization, thinking/reasoning policy, message merges |
| `content.py` | Text/image/audio parts, inline media limits, visual feedback |
| `tool_schema.py` | Responses tools → chat/Anthropic tool schemas and `tool_choice` |
| `tools.py` | Native tool fallbacks, streaming tool items, hosted-call normalization |
| `chat.py` | `responses_to_chat`, chat → Responses roundtrip helpers |
| `anthropic.py` | `responses_to_anthropic`, Anthropic → chat completion bridge |
| `output.py` | Upstream chat/Anthropic streams → Responses items |
| `usage.py` | Normalize upstream `usage` for `response.completed` |
| `common.py` | Shared helpers, `ResponsesInputError` |

Audit-oriented contract notes: `AUDIT_CONTRACTS.md`, `AUDIT_MANIFEST.md`.

## What kinds of changes are useful

- Translation fixes for tricky tool-call / reasoning streams, with a
  captured fixture under `tests/` proving the bug and the fix.
- New provider translations (e.g. a new chat-completions or
  Anthropic-shaped upstream). Add a test that exercises the new shape end
  to end through `ShimServer`, the way `test_server.py` does.
- Compatibility notes / safer detection for new Codex Desktop builds,
  especially around the generated Desktop contract and ASAR sidebar patch
  needle.
- Doc patches that name a specific build / version. "I tested on Codex
  Desktop 0.x.y on macOS arm64 and it did Z" is more useful than a
  generic warning.
- Unsupported **image generation** on BYOK routes returns **400**
  (`unsupported_capability`); unsupported **compact** returns **501**
  (`unsupported_route`) — keep docs and tests aligned with that split.

## Code style

- Match the surrounding file. No new dependencies without a reason.
- Keep `codex_shim/server.py` translation behavior covered by tests in
  `tests/test_server.py` or `tests/translate/` — tool-call shape
  bugs are easy to miss by eyeballing streams.
- Don't include API keys, ChatGPT access tokens, or `auth.json` contents
  in fixtures, logs, or test data. Use synthetic tokens (`"stub"`,
  `"secret"`) like the existing tests.

## Upstream capture fixtures

CI uses the small synthetic harness fixtures under
`tests/fixtures/upstream/harness_*_to_chatgpt.json` only.

The larger live captures (`native_to_chatgpt.json`, `shim_to_chatgpt.json`,
`cli_*_to_chatgpt.json`) are **gitignored** on purpose: they embed local
workspace paths, memory/skills context, and full Codex prompts. Refresh them
locally with the capture scripts when you need maintainer parity checks; run
`sanitize_upstream_capture.py` before attempting to commit any derivative.

Capture scripts default workspace to `$CODEX_SHIM_WORKSPACE` or the repo root,
and cursor binary to `$CURSOR_COMMAND` / `$CODEX_SHIM_CURSOR_COMMAND` or
`PATH`. Do not hardcode home-directory paths in committed tooling.

## Reporting bugs

Please include:

- Codex Desktop / CLI version (`codex --version` and the Desktop About
  panel).
- OS (macOS arm64 / x86_64 / Linux distro / WSL).
- Output of `codex-shim status` and the last ~80 lines of
  `.codex-shim/shim.log` with API keys redacted.
- Whether the model is a configured BYOK/upstream entry or the `gpt-5.5`
  ChatGPT passthrough.
- Minimal repro: the exact `codex-shim …` invocation and what you
  expected vs. what happened.

## Security

Don't open public issues for security problems. Email or DM the
maintainer with details and a repro and we'll coordinate a fix.
