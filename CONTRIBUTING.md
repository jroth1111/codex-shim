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
python3 scripts/generate_desktop_contract.py --check
python3 scripts/check_desktop_patch_needles.py
```

CI runs the same commands on Python 3.11 and 3.12 via
`.github/workflows/ci.yml`. Match it locally before opening a PR.

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
  `tests/test_server.py` or `tests/test_translate.py` — tool-call shape
  bugs are easy to miss by eyeballing streams.
- Don't include API keys, ChatGPT access tokens, or `auth.json` contents
  in fixtures, logs, or test data. Use synthetic tokens (`"stub"`,
  `"secret"`) like the existing tests.

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
