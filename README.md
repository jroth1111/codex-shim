# codex-shim

Run **Codex Desktop** against any BYOK model you can describe in
`~/.codex-shim/models.json`, plus an optional passthrough to your **ChatGPT
subscription's Codex model** — without rebuilding Codex.

The shim is a local Python/aiohttp server that exposes an OpenAI
Responses-compatible endpoint on loopback. Codex points at the shim; the shim
routes each request to the matching upstream (OpenAI chat completions,
Anthropic Messages, a generic OpenAI-shaped chat endpoint, Cursor Agent CLI/ACP,
or ChatGPT Codex passthrough), then translates streaming responses back into
the shape Codex expects.

> Tested on Codex Desktop **26.519.81530** / `codex-cli 0.133.0` for macOS arm64. The shim server
> and routing layer are plain Python/aiohttp and work on Windows, macOS, Linux,
> WSL, and Git Bash. The only macOS-specific piece is the optional Desktop ASAR
> patch for sidebar compatibility on supported macOS Desktop builds.

---

## What this gives you

Codex Desktop only shows models allowed by its server-side config. If you have
OpenAI / Anthropic / Z.ai / DeepSeek / Gemini / OpenRouter / local proxy models
you want as first-class picker entries, this wires them in locally.

The practical win is that Codex keeps its native UX while model routing moves
local:

- **BYOK models in the normal Codex picker.** No Codex rebuild, no request
  replay workflow.
- **Native Codex agent loops stay intact.** Function calls, tool outputs,
  reasoning blocks, image-capable models, shell-command metadata, and streaming
  SSE are translated instead of flattened into plain text.
- **ChatGPT/Codex passthrough.** If `~/.codex/auth.json` has a valid Codex
  access token, the shim can route Codex's native `/v1/responses` traffic to
  ChatGPT's Codex backend under the `gpt-5.5` slug used by current Codex builds.
- **Prompt-catching/proxy-friendly architecture.** Put a local proxy in front
  of the shim to dedupe boilerplate, inject stable instructions, repair
  pseudo-tool text, or route prompts by policy before they hit an upstream.
- **Maintainer-side wins on real coding-agent runs.** In the maintainer's
  internal Codex tasks, ChatGPT passthrough plus a prompt-catching proxy in
  front of the shim has produced multi-x reductions in billed input tokens
  and noticeably faster wall time vs. the baseline route. No reproducible
  benchmark script ships with the repo yet, so treat that as anecdata — the
  benchmark section below explains how to measure your own setup against
  an explicit oracle before quoting numbers.

---

## Requirements

- Python 3.11+ (3.9 and 3.10 cannot import the WebSocket/Responses type surface).
- Codex CLI/Desktop installed and authenticated.
- One of:
  - `~/.codex-shim/models.json` with configured BYOK/upstream models;
  - a compatible JSON file passed with `--settings`;
  - `~/.codex/auth.json` containing `tokens.access_token` for ChatGPT/Codex
    passthrough-only use.
- Windows: PowerShell/cmd works when installed via the Python package entry
  point; WSL or Git Bash is needed only for the optional `bin/` shell wrappers.
- macOS only: `npx` and `codesign` if you need the optional Desktop ASAR
  patch.

---

## Install

Recommended on macOS/Linux/WSL/Git Bash (installs the `codex-shim` entry
point from `pyproject.toml`):

```bash
git clone https://github.com/0xSero/codex-shim ~/codex-shim
cd ~/codex-shim
python3 -m pip install --user -e .
```

Recommended on native Windows PowerShell/cmd:

```powershell
git clone https://github.com/0xSero/codex-shim $HOME\codex-shim
cd $HOME\codex-shim
py -3.11 -m pip install --user -e .
```

That pulls in `aiohttp` and installs the portable Python console command
`codex-shim`. On POSIX-like shells, the optional `codex-app` and `codex-model`
shortcuts live in `bin/`; symlink them if you want them on `PATH` too:

```bash
mkdir -p ~/.local/bin
ln -sf "$PWD/bin/codex-app" ~/.local/bin/codex-app
ln -sf "$PWD/bin/codex-model" ~/.local/bin/codex-model
```

If you move the checkout, recreate those symlinks; `codex-shim app` launches
`codex app` through the installed Python entry point and does not need them.

Alternative on macOS/Linux/WSL/Git Bash (no install, run straight from the
checkout):

```bash
git clone https://github.com/0xSero/codex-shim ~/codex-shim
cd ~/codex-shim
python3 -m pip install --user aiohttp
mkdir -p ~/.local/bin
ln -sf "$PWD/bin/codex-shim" ~/.local/bin/codex-shim
ln -sf "$PWD/bin/codex-app" ~/.local/bin/codex-app
ln -sf "$PWD/bin/codex-model" ~/.local/bin/codex-model
```

For running the test suite:

```bash
python3 -m pip install --user pytest pytest-asyncio
```

If your POSIX shell cannot find the commands, make sure `~/.local/bin` is on
`PATH`:

```bash
export PATH="$HOME/.local/bin:$PATH"
```

If PowerShell cannot find `codex-shim`, add your Python user Scripts directory
to `Path`. For Python 3.11 installed from python.org, the usual path is:

```powershell
$env:APPDATA\Python\Python311\Scripts
```

You can also skip `PATH` entirely and run through Python:

```powershell
py -3.11 -m codex_shim.cli status
```

---

## Windows support

Yes, the shim works on Windows. The core shim is Python/aiohttp, binds to
`127.0.0.1`, and writes the same Codex provider config that macOS/Linux use.
Use one of these setups:

| Setup | Status | Notes |
|---|---|---|
| Native Windows PowerShell/cmd | Supported | Install with `py -3.11 -m pip install --user -e .` and run `codex-shim ...`. |
| WSL | Supported | Works like Linux. Best when Codex CLI/Desktop is also being driven from WSL. |
| Git Bash | Supported | Works with the POSIX `bin/` wrappers if Python/Codex are on `PATH`. |
| `bin/codex-app`, `bin/codex-model` in PowerShell/cmd | Not native | These are shell scripts. Use `codex-shim app ...` and `codex-shim model ...` instead. |
| `patch-app` / `restore-app` | macOS only | They target `/Applications/Codex.app` and Electron ASAR signing on macOS. |

Native Windows quick check:

```powershell
py -3.11 -m pip install --user -e .
codex-shim generate
codex-shim start
codex-shim status
codex-shim list
```

If `codex-shim` is not on `Path`, use the module form:

```powershell
py -3.11 -m codex_shim.cli generate
py -3.11 -m codex_shim.cli start
py -3.11 -m codex_shim.cli status
```

Path behavior is intentionally ordinary:

- In native Windows, `~/.codex-shim/models.json` means
  `%USERPROFILE%\.codex-shim\models.json` and Codex config lives under
  `%USERPROFILE%\.codex\config.toml`.
- In WSL, `~/.codex-shim/models.json` and `~/.codex/config.toml` are inside the
  Linux home directory unless you explicitly point `--settings` at a Windows
  path under `/mnt/c/...`.
- Do not mix a WSL-generated `~/.codex/config.toml` with native Windows Codex
  and expect both to share files automatically. If Codex is native Windows, run
  the native Windows install path or manually keep the Windows config in sync.
- The local provider URL is still `http://127.0.0.1:8765/v1`.

The optional macOS picker patch is not required for the shim server to work. On
Windows, if Codex can read the generated catalog/provider config, requests route
through the same local endpoint as every other platform.

Windows Store/MSIX Codex Desktop builds are stricter than the CLI. They may treat
custom local/BYOK slugs as unavailable, rewrite `model = "<custom-slug>"` back to
`gpt-5.5`, and add `[tui.model_availability_nux]` entries on launch. That is a
Desktop allowlist behavior, not a shim routing behavior: `codex exec`, the TUI,
and the shim endpoint still use the configured model slug. The macOS `patch-app`
helper does not apply to MSIX packages under `C:\\Program Files\\WindowsApps`.

If Windows has a system proxy such as Clash/V2Ray, make sure loopback bypasses it:

```powershell
setx NO_PROXY "127.0.0.1,localhost,::1"
setx no_proxy "127.0.0.1,localhost,::1"
```

`codex-shim codex -- ...` and `codex-shim app ...` add those loopback entries to
the launched process environment automatically; set them globally too if you run
`codex.exe` directly.

---

## Quick start

### 1. Generate the catalog and start the shim

```bash
codex-shim generate          # reads ~/.codex-shim/models.json if present
codex-shim start             # background daemon on 127.0.0.1:8765
codex-shim list              # show generated slugs and upstream routes
codex-shim status            # health probe + model count
```

Generated runtime files live under the repo-local `.codex-shim/` directory:

```text
.codex-shim/custom_model_catalog.json   # model picker catalog for Codex
.codex-shim/config.toml                  # opt-in Codex provider config
.codex-shim/shim.pid                     # daemon pid
.codex-shim/shim.log                     # stdout/stderr + request summaries
```

The server binds `127.0.0.1` by default. It is meant to be a local loopback
adapter, not an Internet-facing proxy.

### 2. Point Codex Desktop at it

```bash
codex-shim app .             # launch Codex Desktop with the shim wired in
```

`app` generates the catalog, starts the local daemon if needed, and writes a
small managed block into `~/.codex/config.toml` so Codex Desktop uses the local
provider. The previous config is backed up under `.codex-shim/` and the managed
block can be removed with:

```bash
codex-shim disable
```

After this, Codex Desktop sees every configured/usable entry from
`~/.codex-shim/models.json`, plus the `GPT-5.5` ChatGPT passthrough slug if
(and only if) `~/.codex/auth.json` holds a valid `tokens.access_token`.
Disabled rows, rows missing required credentials, and Cursor rows whose command
cannot be found are omitted from the generated catalog and rejected by the shim
router. Run `codex-shim doctor models` to see why a row is hidden.

If your Codex Desktop's model picker only shows `default` and refuses to render
the catalog entries, apply the macOS picker patch below.

### 3. Switch the active Desktop model

```bash
codex-model list
codex-model gpt-5.5          # or any other slug from `list`
codex-app                   # relaunch Codex with new default
```

`codex-model <slug>` is a shortcut for `codex-shim model use <slug>`. It writes
only the shim-managed block in `~/.codex/config.toml`.

### 4. Use the Codex CLI without writing config

For one-off CLI runs, use inline `-c` overrides instead of changing
`~/.codex/config.toml`:

```bash
codex-shim codex -- "inspect this repo and summarize the architecture"
```

---

## Custom config file

The shim defaults to `~/.codex-shim/models.json`. If that file is missing, the
shim still generates a catalog — and adds the `gpt-5.5` ChatGPT passthrough
entry only when `~/.codex/auth.json` contains a valid `tokens.access_token`.
You can point it at any compatible file:

```bash
codex-shim --settings /path/to/my-models.json generate
codex-shim --settings /path/to/my-models.json start
```

Recommended schema:

```json
{
  "models": [
    {
      "model": "gpt-5.5",
      "provider": "openai",
      "base_url": "https://api.openai.com/v1",
      "api_key": "<openai-api-key>",
      "display_name": "OpenAI GPT-5.5",
      "max_context_limit": 400000
    },
    {
      "model": "claude-opus-4-7-20251109",
      "provider": "anthropic",
      "base_url": "https://api.anthropic.com/v1",
      "api_key": "<anthropic-api-key>",
      "display_name": "Claude Opus 4.7"
    },
    {
      "model": "deepseek-v4-pro",
      "provider": "anthropic",
      "base_url": "https://api.deepseek.com/anthropic",
      "api_key": "…",
      "display_name": "DeepSeek V4 Pro",
      "no_image_support": true
    },
    {
      "model": "auto",
      "provider": "cursor-agent",
      "display_name": "Cursor Agent Auto",
      "command": "cursor",
      "args": ["agent", "--print", "--trust", "--yolo", "--model", "auto"]
    },
    {
      "id": "zai-glm-5-1",
      "model": "glm-5.1",
      "provider": "zai",
      "display_name": "Z.AI GLM-5.1",
      "api_key_env": "ZAI_API_KEY"
    },
    {
      "id": "nim-glm-5-1",
      "model": "z-ai/glm-5.1",
      "provider": "nvidia-nim",
      "display_name": "GLM-5.1 (NVIDIA NIM)",
      "base_url": "https://integrate.api.nvidia.com/v1",
      "api_key_env": "NVIDIA_API_KEY"
    }
  ]
}
```

The loader also accepts camelCase aliases (`baseUrl`, `apiKey`, `displayName`,
`apiKeyEnv`, `apiKeyFile`, `chatCompletionsUrl`, `maxContextLimit`,
`maxOutputTokens`, `noImageSupport`, `extraHeaders`) and a legacy top-level
`customModels` array, so existing model config exports can be used directly.
Rows are parsed permissively, normalized into one internal routing shape, and
then filtered before Codex Desktop sees them.

The shim **never copies your API keys** into the generated catalog. Keys stay
in your settings file and are read fresh on every request.

Config helpers:

```bash
codex-shim configure cursor
codex-shim configure zai
codex-shim configure zai --coding-plan
codex-shim configure nim --model z-ai/glm-5.1
codex-shim doctor
codex-shim doctor models
codex-shim test cursor-agent
codex-shim config export ./models.redacted.json
codex-shim config export --include-secrets ./models.full.json
codex-shim config import ./models.json
codex-shim import-vibeproxy http://127.0.0.1:8318 --provider-base-url http://127.0.0.1:8318/v1
codex-shim import-vibeproxy http://127.0.0.1:8318 --provider-base-url http://127.0.0.1:8318/v1 --direct
```

`codex-shim configure cursor` now defaults to the headless CLI route
(`provider: "cursor-agent"`). Use `--transport acp` only when you explicitly
want the ACP experiment.

`configure` adds or updates common provider rows without writing secrets into
the generated Codex catalog. By default it references `ZAI_API_KEY` for Z.AI and
`NVIDIA_API_KEY` for NVIDIA NIM; use `--api-key-file` or `--api-key` when you
need a different source. `doctor models` reports the visible set and hidden rows
with their exact reason, such as a missing key, disabled row, invalid endpoint,
or missing Cursor command. `doctor` (no subcommand) prints a read-only setup
diagnostics report (Python, deps, daemon health, passthrough readiness).

`test <target>` resolves a slug, provider, upstream model id, or display name,
prints whether the row is visible or hidden, then sends a real non-streaming
smoke request through that route. It supports Cursor CLI/ACP, OpenAI-compatible
chat providers, Anthropic, Z.AI, NVIDIA NIM, and ChatGPT passthrough. Failures
are classified as hidden/misconfigured, ambiguous target, missing command, auth
failure, bad URL/connection, timeout, unsupported route, or upstream error.

`config export` redacts API keys, bearer tokens, authorization headers, and
other token/secret-looking fields by default. `config import` validates the
input as shim model settings and writes a `.before-import` backup next to the
destination settings file. `import-vibeproxy` reads a VibeProxy-compatible
`/v1/models` endpoint, filters non-chat models, title-cases display names, and
writes regular shim `models` rows. Add `--direct` only when VibeProxy itself
already speaks the Responses API; this writes a direct catalog/config pair that
points Codex at VibeProxy and does not require the shim server. Direct mode is
not for Cursor, Z.AI, NIM, or chat-completions-only upstreams.

Supported `provider` values:

| provider | upstream API |
|---|---|
| `openai` | OpenAI `/v1/chat/completions` |
| `generic-chat-completion-api` | OpenAI-shaped chat completions |
| `anthropic` | Anthropic `/v1/messages` |
| `cursor-agent` / `cursor-agent-cli` / `cursor-cli` | Headless Cursor Agent CLI, defaulting to `cursor agent --print --trust --yolo --model auto` and using `stream-json` partial output for streamed requests |
| `cursor-acp` / `cursor-agent-acp` | Local ACP subprocess, defaulting to `cursor-agent acp` |
| `zai` | Z.AI Open Platform chat completions at `/api/paas/v4/chat/completions` |
| `zai-coding-plan` | Z.AI Coding Plan chat completions at `/api/coding/paas/v4/chat/completions` |
| `nvidia-nim` / `nim` | NVIDIA NIM OpenAI-compatible `/v1/chat/completions` |

Useful model fields:

| field | behavior |
|---|---|
| `display_name` | Human-readable picker label. |
| `max_context_limit` | Catalog context window and compaction limits. |
| `max_output_tokens` | Default max output when translating to Anthropic. |
| `no_image_support` | When true, catalog advertises text-only input. |
| `extra_headers` | Optional upstream headers merged into requests. |
| `enabled` | Set `false` to keep a row in config while hiding it from Codex Desktop and routing. |
| `api_key_env` / `apiKeyEnv` | Environment variable containing the provider API key. |
| `api_key_file` / `apiKeyFile` | File containing the provider API key. |
| `chat_completions_url` / `chatCompletionsUrl` | Exact chat-completions URL. Use this for providers that are OpenAI-shaped but do not live under `/v1`. |
| `base_url_append_v1` / `baseUrlAppendV1` | For generic OpenAI-shaped providers, set `false` to derive `<base_url>/chat/completions` instead of `<base_url>/v1/chat/completions`. |
| `thinking_behavior` / `thinkingBehavior` | Provider policy for chat-completions thinking fields: `pass`, `drop`, `force_enabled`, `force_disabled`, or `keep_all`. DeepSeek defaults to `pass`; set `force_disabled` for DeepSeek safe mode. Z.AI passes thinking fields; Moonshot drops them except Kimi models, which use `keep_all`. |
| `supports_compact` / `supportsCompact` | Set `false` to make `/v1/responses/compact` return a clear 501 for that model instead of sending an emulated compaction prompt upstream. |
| `command` / `args` | Cursor command and argv before the prompt. For `cursor-agent`, defaults to `cursor` + `["agent", "--print", "--trust", "--yolo", "--model", "auto"]`; the shim adds `--output-format json` for non-streaming calls and `--output-format stream-json --stream-partial-output` for streaming calls when no output format is already configured. For `cursor-acp`, defaults to `cursor-agent` + `["acp"]`. |
| `mode` | Cursor ACP mode for `cursor-acp` routes. Defaults to `agent`. |
| `cursor_model` / `cursorModel` | Cursor CLI model (`auto` by default) or Cursor ACP model config value (`default[]` by default). |
| `cwd` | Working directory for the Cursor subprocess when Desktop does not send workspace metadata. Prefer dynamic resolution from request `metadata.cwd` / headers (see S11 in [`scripts/capture_runbook.md`](scripts/capture_runbook.md)). |
| `timeoutSeconds` | Prompt timeout for Cursor subprocess requests. Defaults to **3600** seconds (`CODEX_SHIM_CURSOR_TIMEOUT` env override). |
| `use_native_transport` / `useNativeTransport` | When `true` on a Cursor provider row, route through the shim's Cursor Agent envelope builder (`cursor-agent-grpc` transport). Default execution still delegates to the Cursor CLI unless `CODEX_SHIM_CURSOR_AGENT_LIVE=1` is set (HTTP/1 RunSSE+BidiAppend by default; optional `CODEX_SHIM_CURSOR_AGENT_TRANSPORT=http2` for Connect bidi `AgentService/Run`; requires `codex login` or `CODEX_SHIM_CURSOR_AUTH_TOKEN`). |
| `CODEX_SHIM_CURSOR_CATALOG_LIVE` | When `1`, model catalog prefetch calls live `GetUsableModels` (same auth as native transport) instead of only mirroring `settings.json`. |
| `nativeTransportMode` / `native_transport_mode` | Per-model live wire mode: `http1` (default) or `http2` (`AgentService/Run`). Overrides env when set on the model row. |

Decode captured Connect frames offline:

```bash
PYTHONPATH=. python3 scripts/cursor_connect_decode.py path/to/frames.hexl
```
| `allow_fallback` | On `/v1/responses`, retry an alternate visible model slug when the primary upstream returns a retryable status (non-stream only). |

### Cursor Agent CLI

Use `provider: "cursor-agent"` when you want Codex Desktop's `/v1/responses`
traffic translated through Cursor Agent's tested headless CLI path. This route
does not need `base_url` or an API key in `models.json`; authentication remains
whatever `cursor agent` already uses.

```json
{
  "models": [
    {
      "model": "auto",
      "display_name": "Cursor Agent Auto",
      "provider": "cursor-agent"
    }
  ]
}
```

For non-streaming Codex requests, the shim starts:

```bash
cursor agent --print --trust --yolo --model auto --output-format json "<translated Codex prompt>"
```

To compare envelope shape against recovered Cursor Agent sources (when
`/private/tmp/cursor` or `CURSOR_SOURCE_ROOT` is available):

```bash
python3 scripts/cursor_inference_parity.py --mode plan "parity check"

Live native smoke (requires auth + `useNativeTransport` model slug):

```bash
CODEX_SHIM_CURSOR_AGENT_LIVE=1 PYTHONPATH=. python3 scripts/cursor_agent_live_smoke.py --slug YOUR_NATIVE_SLUG "hello"
```
```

For streaming Codex requests, the shim starts:

```bash
cursor agent --print --trust --yolo --model auto --output-format stream-json --stream-partial-output "<translated Codex prompt>"
```

and maps Cursor's JSONL `assistant` text deltas back to Responses SSE output.
This mirrors the Fork & Flag batch-worker pattern for launch and uses Cursor
Agent's native headless streaming output for `stream: true`.

If you explicitly want the ACP experiment instead, use `provider: "cursor-acp"`:

```json
{
  "models": [
    {
      "model": "default[]",
      "display_name": "Cursor ACP Auto",
      "provider": "cursor-acp",
      "cursor_model": "default[]",
      "mode": "agent"
    }
  ]
}
```

The ACP route starts `cursor-agent acp`, performs `initialize`, `session/new`,
and `session/prompt`, then maps `agent_message_chunk` updates back to Responses
SSE deltas. On this machine, the ACP prompt path reached Cursor but returned
`Upgrade your plan to continue`; the direct CLI path returned the expected
smoke-test text.

For Codex Desktop compatibility, prefer the `cursor-agent` CLI route. ACP is
kept as an explicit experiment and can be subscription-gated.

### Ollama / local OpenAI-compatible chat endpoints

Codex sends the Responses API. Ollama and many local servers expose
OpenAI-shaped `/v1/chat/completions` instead. Keep Codex pointed at the shim with
`wire_api = "responses"`; configure Ollama as `generic-chat-completion-api` so
the shim translates Responses ⇄ chat completions:

```json
{
  "models": [
    {
      "model": "llama3.2",
      "display_name": "Ollama Llama 3.2",
      "provider": "generic-chat-completion-api",
      "base_url": "http://127.0.0.1:11434/v1",
      "api_key": "ollama"
    }
  ]
}
```

`codex-shim --settings /path/to/ollama-launch-models.json generate` also accepts
launch-model style files with a top-level `launchModels` / `launch_models` array,
including bare strings. `provider: "ollama"` is normalized to
`generic-chat-completion-api` with `http://127.0.0.1:11434/v1` when no base URL
is supplied.

Repeated `codex-shim enable`, `codex-shim app`, and `codex-shim model use ...`
runs are idempotent: the shim-managed top-level keys and
`[model_providers.codex_shim]` block are removed before the new managed block is
written, so duplicate profile/provider keys should not accumulate.

Codex may make small background calls to OpenAI model slugs such as
`gpt-5.4-mini` for its own product behavior. Those calls are not Ollama routing
failures; use the shim request log to confirm the actual selected model for the
agent turn.

---

## Desktop ASAR patch for Codex Desktop on macOS

Newer Codex Desktop builds hide unavailable catalog slugs through
`availability_nux` state rather than the older `useHiddenModels` picker branch.
`codex-shim patch-app` no longer mutates the legacy picker needle. It only
patches the local recent-thread loader from `modelProviders: null` to
`modelProviders: []`, so the sidebar continues to show existing native `openai`
chats while Desktop is routed through the `codex_shim` provider.

The current patch needles target Codex Desktop **26.519.81530** /
`codex-cli 0.133.0` on macOS arm64. Use `codex-shim doctor patch` or
`python scripts/check_desktop_patch_needles.py` to verify drift before patching (skips
when the local RE tree is absent unless `CODEX_SHIM_REQUIRE_DESKTOP_DECOMPILED=1`).

Needle checks intentionally differ by entry point: the script exits **1** when
`app-asar-extracted/` exists but required needles are missing (useful in CI when the
tree is present), while `tests/test_settings_catalog.py` skips the equivalent pytest
when the RE tree is incomplete. Set `CODEX_SHIM_REQUIRE_DESKTOP_DECOMPILED=1` to
fail both paths when the tree is absent.

> Back up `app.asar` and `Info.plist` before patching.

```bash
APP=/Applications/Codex.app
sudo cp -R "$APP" "$APP.unpatched-$(date +%Y%m%d-%H%M%S)"

# 1. Extract the ASAR
cd /tmp && rm -rf codex-asar-patch && mkdir codex-asar-patch && cd codex-asar-patch
npx --yes @electron/asar extract "$APP/Contents/Resources/app.asar" extracted

# 2. Patch the sidebar recent-thread provider filter (single occurrence)
SIDEBAR_FILE=$(grep -RIl 'listRecentThreads' extracted/webview/assets/app-server-manager-signals-*.js | head -n1)
python3 - "$SIDEBAR_FILE" <<'PY'
from pathlib import Path
import sys

path = Path(sys.argv[1])
text = path.read_text()
old = "listRecentThreads({cursor:e,limit:t}){return this.params.requestClient.sendRequest(`thread/list`,{limit:t,cursor:e,sortKey:this.recentConversationSortKey,modelProviders:null,archived:!1,sourceKinds:ke})}"
new = "listRecentThreads({cursor:e,limit:t}){return this.params.requestClient.sendRequest(`thread/list`,{limit:t,cursor:e,sortKey:this.recentConversationSortKey,modelProviders:[],archived:!1,sourceKinds:ke})}"
if text.count(old) != 1:
    raise SystemExit("expected one sidebar provider filter occurrence")
path.write_text(text.replace(old, new, 1))
PY

# 3. Repack
npx --yes @electron/asar pack extracted app.asar.new
sudo cp app.asar.new "$APP/Contents/Resources/app.asar"
```

That alone can crash Codex on next launch with `EXC_BREAKPOINT`. Electron's
`ElectronAsarIntegrity` field in `Info.plist` is a SHA-256 of the **JSON
header** of the ASAR archive (not the whole file). Recompute it and re-sign:

```bash
# 4. Compute new header hash
HEADER_HASH=$(python3 - "$APP/Contents/Resources/app.asar" <<'PY'
import struct, hashlib, sys
with open(sys.argv[1], 'rb') as f:
    data_size, header_size, _, json_size = struct.unpack('<4I', f.read(16))
    header_json = f.read(json_size)
print(hashlib.sha256(header_json).hexdigest())
PY
)
echo "new header hash: $HEADER_HASH"

# 5. Patch Info.plist (replaces the hash for Resources/app.asar)
sudo /usr/libexec/PlistBuddy -c \
  "Set :ElectronAsarIntegrity:Resources/app.asar:hash $HEADER_HASH" \
  "$APP/Contents/Info.plist"

# 6. Ad-hoc re-sign
sudo codesign --force --deep --sign - "$APP"

# 7. Launch
open "$APP"
```

To roll back: `sudo rm -rf "$APP" && sudo mv "$APP.unpatched-…" "$APP"`.

The CLI also has helper commands for patching/restoring `app.asar` and the
matching ASAR integrity metadata:

```bash
codex-shim patch-app
codex-shim patch-status
codex-shim restore-app
```

If Codex still crashes after `patch-app`, restore with `codex-shim restore-app`
and re-check the manual patch needles against the installed Desktop build.
`patch-status` reports whether the installed ASAR appears patched, unpatched,
or incompatible with the known bundle needles; it also reports missing `npx` or
`codesign`, backup state, versioned backup hashes, and stale/no-op restore
conditions. `patch-app` refuses to create the original restore backup from an
already-patched bundle when that backup is missing.

---

## ChatGPT/Codex passthrough

If `~/.codex/auth.json` exists and contains `tokens.access_token`, the shim
fetches your ChatGPT subscription model catalog from
`https://chatgpt.com/backend-api/codex/models` (cached for 300s in
`~/.codex-shim/subscription_models_cache.json`) and merges those native
`ModelInfo` entries into `custom_model_catalog.json` ahead of BYOK models. BYOK
slugs win on exact slug collisions. Refresh happens on `codex-shim generate`,
shim server startup, and `codex-shim doctor subscription`. Restart Codex after
catalog changes if the picker does not update immediately.

When the live fetch is unavailable, the shim falls back to a synthetic `gpt-5.5`
catalog entry that proxies straight to:

```text
https://chatgpt.com/backend-api/codex/responses
```

The entry is **only** advertised in `/health`, `/v1/models`, `codex-shim list`,
and the generated `custom_model_catalog.json` while that token is present. Once
you `codex logout` or the file is missing, the slug stops appearing — so the
picker never shows an option that would 401 on first use. Run `codex login` to
mint a new token and the entry comes back automatically on the next
`codex-shim generate`. Internally this passthrough is treated as the same kind
of normalized Desktop model as configured BYOK rows, so catalog generation,
picker state, health, and routing all see one filtered Desktop model set.

The passthrough adapts Desktop Responses input for ChatGPT: hosted tool and MCP
items are converted to ChatGPT-accepted `function_call` / `function_call_output`
pairs, compact items are normalized, and shim-only or provider-hostile top-level
fields (`metadata`, `trace_id`, `request_id`, `max_output_tokens`, and by
default `previous_response_id`) are stripped. It changes the model to `gpt-5.5`
and sends your Codex access token as `Authorization: Bearer <access_token>` with
the ChatGPT account id from `auth.json` when present. It bypasses configured
BYOK routes entirely and uses your ChatGPT subscription quota. Image-generation
requests only use this path when the selected Desktop model is `gpt-5.5`; the
shim does not silently reroute image-generation prompts away from the BYOK model
selected in Desktop.

It is already in `.codex-shim/custom_model_catalog.json` after `codex-shim
generate`. Select `GPT-5.5` in the picker, or run:

```bash
codex-model gpt-5.5
```

Older local configs or notes may refer to `openai-gpt-5-5`; the server accepts
that prefix as an alias and routes it to the same passthrough.

---

## How routing works

```text
Codex Desktop ── /v1/responses ──▶ codex-shim (127.0.0.1:8765)
                                     │
                                     ├── slug "gpt-5.5"
                                     │       └─▶ chatgpt.com/backend-api/codex/responses
                                     │           (Authorization: Bearer <auth.json access_token>)
                                     │
                                     ├── provider "openai" / "generic-…"
                                     │       └─▶ baseUrl/chat/completions
                                     │           (Authorization: Bearer apiKey)
                                     │
                                     ├── provider "anthropic"
                                     │       └─▶ baseUrl/messages
                                     │           (x-api-key: apiKey, anthropic-version: …)
                                     │
                                     └── provider "cursor-agent"
                                             └─▶ cursor agent --print --trust --yolo --model auto
                                                 (headless Cursor Agent CLI)
```

The shim translates Codex's Responses-API request into the upstream's shape
(chat completions, Anthropic Messages, Cursor CLI prompts, or ACP prompt
messages) and translates the streamed reply back. Extended-thinking blocks from
Anthropic-shaped upstreams (Claude, DeepSeek, GLM, etc.) round-trip through
`reasoning.encrypted_content` items.

---

## Fidelity tiers

Codex Desktop speaks the Responses API; upstream fidelity depends on the route.

| Tier | Route | What you get |
|---|---|---|
| **Tier A — Native** | ChatGPT passthrough (`gpt-5.5`) | Full parity: hosted tools, native compaction v2, encrypted reasoning, native Response item types |
| **Tier B — Agent loop** | OpenAI chat / Anthropic BYOK | Tool loops via function-tool fallbacks; inbound/outbound native hosted-tool item shapes where possible; emulated compaction (`context_compaction` items); shim-encoded reasoning for round-trip |
| **Tier B-delegate** | Cursor CLI / Cursor Agent native | Cursor owns the full agent loop; shim streams assistant text/thinking only (`execution_mode=delegate`, `tool_authority=cursor`); Codex does not re-execute Cursor tool events |
| **Tier C — Degraded** | Same BYOK routes | No true OpenAI encrypted reasoning blobs; image generation gated unless model declares support; opaque native compaction v2 blobs not synthesized on BYOK |
### Tool capability matrix (per route family)

| Route family | local_shell | web_search | tool_search | image_generation | MCP tools | Reasoning | execution_mode |
|---|---|---|---|---|---|---|---|
| ChatGPT passthrough (`gpt-5.5`) | native | native | native | native | native | native | mapped |
| OpenAI chat-compatible BYOK | mapped | mapped | mapped | mapped | mapped | mapped | mapped |
| Anthropic Messages BYOK | mapped | mapped | mapped | unsupported | mapped | mapped | mapped |
| Cursor CLI (`cursor-agent`) | delegated | delegated | delegated | unsupported | delegated | mapped | **delegate** |
| Cursor Agent native (`cursor-agent-grpc`) | delegated | delegated | delegated | unsupported | delegated | mapped | **delegate** |

“Mapped” means Codex tools remain authoritative (Desktop runs shell/web/apply_patch/MCP), and the shim translates tool schemas and outputs so upstream models can stay in the loop. **Delegated** (Cursor routes) means Cursor executes tools autonomously; the shim suppresses Cursor `tool_call` stream events so Codex never receives executable tool items from Cursor output. “Unsupported” means the shim will not silently synthesize that tool for the route; `codex-shim doctor models` reports it clearly.


**Reasoning on BYOK (Tier B/C):** The shim never fabricates OpenAI-native `encrypted_content` blobs. When Desktop sends reasoning with Anthropic-style `anthropic-thinking-v1:` payloads (or summaries only), the translator replays them as `reasoning_content` / Anthropic `thinking` blocks on the next turn. That preserves agent-loop continuity for supported providers; it is not cryptographic parity with ChatGPT Tier A.

**Native tool wire shapes:** `local_shell_call`, `web_search_call`, `tool_search_call`, and `image_generation_call` can be emitted on BYOK streams when the upstream used the matching function-tool fallback. During streaming, argument chunks still use `response.function_call_arguments.delta` for all tool types; only the final completed items carry native shapes. `apply_patch` and `computer_use` remain `function_call` items (Desktop executes from tool calls; decompiled `ResponseItem` has no separate `apply_patch_call` type).

Cursor CLI and native Cursor Agent routes run in **delegate mode**: assistant text and reasoning stream through the Responses SSE bridge, but Cursor tool events are not forwarded to Codex. Use `codex-shim probe delegate --slug <cursor-slug>` to verify `execution_mode=delegate` and message-only output.

**Provider transport:** Generated shim provider config sets `supports_websockets = true` by default (disable with `CODEX_SHIM_ENABLE_WEBSOCKETS=0`). The shim exposes HTTP/SSE on `POST /v1/responses` and a WebSocket upgrade on `GET /v1/responses`. After upgrading codex-shim, rerun `codex-shim enable` or `codex-shim app` to refresh managed `~/.codex/config.toml`.

**Conversation store:** `previous_response_id` history is persisted in `.codex-shim/response_store.sqlite` (override with `CODEX_SHIM_RESPONSE_STORE`). LRU cap defaults to 256 per active scope (`CODEX_SHIM_RESPONSE_STORE_MAX`). History is scoped by Desktop `session_id` by default; set `CODEX_SHIM_RESPONSE_STORE_SCOPE=global` only for single-session legacy behavior.
This store expansion applies to BYOK routes. Tier A ChatGPT passthrough strips
`previous_response_id` by default and does not expand shim store history.

**Offline vs live tests:** Default CI runs `pytest -m "not live"` (mocked unit tests). Live integration hits a real daemon and real upstreams (no mocks).

```bash
codex-shim start
export CODEX_SHIM_LIVE=1
pytest tests/live -m live -v          # pytest live suite
codex-shim probe live-matrix        # CLI: Tier A + BYOK family matrix
codex-shim probe all --live         # offline fidelity + BYOK probes + full live matrix
```

Optional env overrides for BYOK families: `CODEX_SHIM_LIVE_SLUG_OPENAI`, `CODEX_SHIM_LIVE_SLUG_ANTHROPIC`, `CODEX_SHIM_LIVE_SLUG_CURSOR`. Set `ZAI_API_KEY` to auto-configure Z.AI GLM-5.1 Coding Plan for Tier B openai_chat live tests (then `codex-shim restart`). When `cursor` is on `PATH`, live tests auto-configure `cursor-auto` (`cursor-agent` CLI) and run the dedicated suite in `tests/live/test_cursor_agent.py`.

Tier A prepare env: `CODEX_SHIM_PASSTHROUGH_KEEP_PREVIOUS_RESPONSE_ID=1` forwards `previous_response_id` (default strips it).

**Compaction / history probes** (daemon must be running):

```bash
codex-shim probe fidelity     # offline translation fixtures only
codex-shim probe compact
codex-shim probe compact --slug your-byok-slug
codex-shim probe history      # hosted tools + previous_response_id + compact w/ trigger
codex-shim probe streaming-history
codex-shim probe ws-streaming          # BYOK WebSocket stream:true deltas
codex-shim probe tools                # BYOK mapped tool-loop + metadata parity (non-Cursor)
codex-shim probe delegate --slug cursor-auto   # Cursor delegate: message-only, execution_mode=delegate
codex-shim probe passthrough --live        # Tier A streaming OK
codex-shim probe passthrough-compact --live
```

**Tier A passthrough headers:** ChatGPT passthrough forwards Desktop metadata headers (`x-codex-*`, `session_id`, `x-client-request-id`, `x-oai-attestation`, `traceparent`, `x-request-id`, `x-trace-id`, `cf-ray`) plus body `metadata.trace_id` / `metadata.request_id`. Client `Authorization` is never forwarded.

Recommended dev loop: `codex-shim enable` → `codex-shim start` → `CODEX_SHIM_LIVE=1 pytest tests/live -m live` → `codex-shim test <slug>`.

### Optional local Desktop RE tree (not in git)

Reverse-engineered Codex Desktop artifacts live in `codex-desktop-decompiled/` at the repo
root. That directory is **gitignored** and never published to GitHub. Clone or extract it
locally when you need ASAR needles, Ghidra decomp, or strings evidence.

| Env | Purpose |
|-----|---------|
| `CODEX_DESKTOP_DECOMPILED_DIR` | Override the RE tree root (default: `./codex-desktop-decompiled`) |
| `CODEX_SHIM_REQUIRE_DESKTOP_DECOMPILED=1` | Fail CI-style checks instead of skipping when the tree is absent |

With the tree present, see `codex-desktop-decompiled/CODEX_SHIM_ARCHITECTURE.md` for
integration notes. Regenerate committed contracts after refreshing the tree:

```bash
python scripts/extract_app_server_schemas.py
python scripts/generate_desktop_contract.py --write
python scripts/generate_desktop_app_server_contract.py --write
python scripts/mine_desktop_electron.py
python scripts/inventory_desktop_bundle.py
```

Committed constants: `codex_shim/desktop_contract.py` (Responses wire shapes) and
`codex_shim/desktop_app_server_contract.py` (app-server RPC and provider fields).
Mining output lands in gitignored `codex-desktop-decompiled/DESKTOP_RE_FINDINGS.md`.

**12-day inference RE plan:** [`docs/DESKTOP_INFERENCE_MAP.md`](docs/DESKTOP_INFERENCE_MAP.md) (living doc) and
[`scripts/capture_runbook.md`](scripts/capture_runbook.md) for HAR capture scenarios S1–S11.

---

## Tool calls and agent loops

Codex expects Responses-API output items. Most BYOK upstreams speak either
OpenAI chat completions or Anthropic Messages. The shim bridges the gap:

| Codex/Responses item | OpenAI-shaped upstream | Anthropic upstream |
|---|---|---|
| `tools: [{type: "function", ...}]` | `tools: [{type: "function", function: ...}]` | `tools: [{name, description, input_schema}]` |
| `function_call` output item | Chat `tool_calls[]` | `tool_use` content block |
| `function_call_output` input item | Chat `role: "tool"` message | `tool_result` user content block |
| streamed argument deltas | `response.function_call_arguments.delta` | `response.function_call_arguments.delta` |
| parallel calls | Preserved via `parallel_tool_calls` where supported | Multiple `tool_use` blocks |

This is the piece that makes the shim useful for real Codex runs instead of only
text chat. A model can ask Codex to run tools, Codex sends the tool output back
through the shim, and the upstream model continues the same loop.

Native Responses-only tools now have BYOK fallbacks:

| Responses tool | Chat/Anthropic fallback |
|---|---|
| `computer_use` / `computer_use_preview` | `computer_use` function with `{action, x, y, text, ...}` |
| `web_search` / `web_search_preview` | `web_search` function with `{query, ...}` |
| `apply_patch` | `apply_patch` function with `{patch, ...}` |
| `local_shell` / `shell` | `local_shell` function with `{command, ...}` |
| Codex MCP functions | Passed through as normal function tools |

That keeps BYOK models inside the Codex agent loop even when the upstream API is
chat-completions or Anthropic Messages instead of native Responses. ChatGPT
passthrough remains the highest-fidelity path for first-party hosted tool item
shapes, but BYOK routes no longer drop those tools. Visual feedback is preserved
for vision-capable BYOK providers: Responses `input_image`, `computer_call_output`
screenshots, and visual `function_call_output` payloads become OpenAI chat
`image_url` parts or Anthropic image blocks instead of being flattened to text.

Known edge cases:

- BYOK native-tool fallbacks depend on the Codex client/harness recognizing and
  executing the fallback function call. The shim translates tool schemas and
  round-trips tool outputs; it does not execute computer, shell, patch, or MCP
  actions itself.
- Some OpenAI-compatible providers advertise tool calls but stream malformed
  JSON arguments. The shim preserves deltas; the provider still has to emit
  valid JSON by the end of the call.
- If a provider ignores `parallel_tool_calls`, Codex may still request one tool
  at a time. That is an upstream behavior, not a catalog issue.

---

## Conversation state and validation

For BYOK routes, successful `/v1/responses` turns are kept in a process-local
response store. A later request with `previous_response_id` is expanded into the
stored input/output window before translation, so chat-completions, Anthropic,
Cursor CLI, and Cursor ACP providers receive the prior context even though they
do not implement OpenAI's Responses store.

The store persists in SQLite (`.codex-shim/response_store.sqlite` by default).
Restarting the shim keeps prior windows unless the store file is removed. An
unknown or cross-session `previous_response_id` returns a 404 instead of
silently dropping or borrowing prior context.

The translator rejects Responses content it cannot faithfully send upstream:
unknown content part types, unsupported audio formats/media types, mismatched
audio data URL formats, and inline media payloads larger than 50 MiB return a
400 before any upstream request is made.

Every provider call also emits a structured `[access]` JSON log line with
`trace_id`, `model_route`, route/model, provider model, status, stream flag,
`provider_ms`, `total_ms`, and token counts when the upstream reports usage.
Trace ids are resolved in this order: `metadata.trace_id`, `trace_id`,
`metadata.request_id`, `request_id`, `x-request-id`, then a generated id. Token
stats include input, output, total, cached, and reasoning counts when observed.
Completed BYOK `/v1/responses` payloads also include lightweight `metadata`
keys (`shim_route`, optional `shim_history`, optional `shim_anomalies`) so you
can see route capabilities and stream-normalization warnings without digging
into logs.

---

## Compaction

Codex can compact long sessions through `POST /v1/responses/compact`.

| route | behavior |
|---|---|
| ChatGPT passthrough (`gpt-5.5` / `openai-gpt-5-5*`) | Forwards to ChatGPT's native `/backend-api/codex/responses/compact` endpoint and rewrites returned model metadata back to the requested shim slug. |
| BYOK OpenAI/chat-completions providers | Sends a non-streaming summarization request through `/chat/completions`, then returns a Responses-shaped compacted window whose `output` contains one `context_compaction` item. |
| BYOK Anthropic providers | Sends a non-streaming compact request through `/messages`, then returns the same Responses-shaped compacted window. |
| Cursor Agent CLI providers | Sends a non-streaming compact prompt through `cursor agent --print --trust --yolo --model auto`, then returns the same Responses-shaped compacted window. |
| Cursor Agent ACP providers | Sends a non-streaming compact prompt through `cursor-agent acp`, then returns the same Responses-shaped compacted window. |

The BYOK path intentionally strips provider-hostile fields such as `stream` and
`service_tier` before forwarding. It preserves the practical Codex behavior — a
smaller next context window — without pretending third-party chat APIs can emit
OpenAI's opaque encrypted compaction items.

### Emulated compaction hardening (BYOK only)

For non-passthrough routes, the shim treats compaction summaries as
`projection_unverified` until basic quality checks pass:

- last user intent appears in the summary
- modified file basenames appear when tool history includes writes/edits

Before forwarding, the shim extracts a **compact frontier** from the compact
request input (last user message, prior compaction excerpt, modified files,
recent shell commands, unresolved tool calls) and embeds it in schema-shaped
instructions (`LAST_USER_INTENT`, `MODIFIED_FILES`, `RECENT_COMMANDS`, etc.).
When workspace metadata resolves, a best-effort `git status --short` snapshot is
included.

If quality checks fail, the shim **augments** the upstream summary with a
corrective prefix rather than returning the lossy text alone:

```text
[shim-compact-warning: projection_unverified]
LAST_USER_INTENT: ...
MODIFIED_FILES: ...
--- original summary ---
```

Audit records are appended to `.codex-shim/postcompact-captures.jsonl` and
emitted on the observability sink as `stage=emulated_compact`. Access logs for
emulated compact include `compact_summary_status`.

Native ChatGPT passthrough compaction is unchanged. No Codex hooks are required.

---

## Computer use, shell commands, images, and MCP

The generated catalog advertises the Codex-facing capabilities Codex needs to
run as an agent:

| catalog field | value |
|---|---|
| `shell_type` | `shell_command` |
| `apply_patch_tool_type` | `freeform` |
| `web_search_tool_type` | `text_and_image` |
| `supports_parallel_tool_calls` | `true` |
| `input_modalities` | `text,image` unless `noImageSupport: true` |
| `supports_image_detail_original` | disabled when `noImageSupport: true` |

What that means in practice:

- **Shell/file operations** are still executed by Codex Desktop/CLI. The shim
  only translates the model request and response stream.
- **Images/screenshots** can pass to providers that accept images. Responses
  `input_image` items, `computer_call_output` screenshots, and visual tool
  outputs are preserved as OpenAI chat `image_url` parts or Anthropic image
  blocks. Set `noImageSupport: true` for text-only upstreams so Codex does not
  send image content they cannot parse.
- **Computer-use/native hosted tools** use native Responses item types on the
  ChatGPT passthrough path. BYOK chat/Anthropic routes receive deterministic
  function-tool fallbacks (`computer_use`, `web_search`, `apply_patch`,
  `local_shell`) so they can stay in the same Codex tool loop.

Codex Desktop forwards three generic MCP tools to every model:

- `list_mcp_resources`
- `list_mcp_resource_templates`
- `read_mcp_resource`

It does **not** flatten individual MCP server tools into the function list.
That is a Codex client behavior, not a shim limitation. Shim-routed models
receive the same MCP tools as built-in OpenAI models. The model is expected to
call `list_mcp_resources` to discover what is available.

---

## Prompt catching and request interception

There are two useful interception layers:

### 1. Built-in request summaries

Every `/v1/responses` request is summarized into `.codex-shim/shim.log`. Use it
while debugging model routing, tool schemas, and prompt size:

```bash
tail -f .codex-shim/shim.log
```

The log is intentionally summary-level so it does not dump API keys or full
prompt bodies by default.

### 2. Local prompt-catching proxy in front of this shim

For deeper control, put a small local proxy in front of `codex-shim` and point
Codex at that proxy. That layer can inspect the full Responses request before
it reaches this shim, then forward to `http://127.0.0.1:8765/v1/responses`.

Common uses:

- inject a stable system/developer preamble;
- strip repeated boilerplate before it burns tokens;
- repair pseudo-tool text such as XML-ish `<invoke ...>` drafts into structured
  tool calls before Codex sees them;
- route some prompts to ChatGPT passthrough and others to BYOK models;
- redact or hash large file blobs in logs.

Minimal aiohttp forwarder shape:

```python
from aiohttp import ClientSession, web

UPSTREAM = "http://127.0.0.1:8765"

async def responses(request):
    body = await request.json()
    body = catch_prompt(body)          # mutate or record the Responses payload
    async with ClientSession() as s:
        async with s.post(f"{UPSTREAM}/v1/responses", json=body, headers=request.headers) as r:
            return web.Response(body=await r.read(), status=r.status, headers=r.headers)

def catch_prompt(body):
    # Keep this deterministic. Codex retries are much easier to debug when the
    # same input produces the same transformed payload.
    return body

app = web.Application()
app.router.add_post("/v1/responses", responses)
web.run_app(app, host="127.0.0.1", port=8766)
```

Then launch Codex with the shim provider URL set to `http://127.0.0.1:8766/v1`
instead of `8765`. Keep prompt catching outside `codex_shim/translate/` unless
you want every BYOK route to share the same mutation policy.

---

## Benchmarking cost and speed

The right benchmark is an actual Codex task, not a synthetic hello-world
completion. Measure the same repository, prompt, model, and tool budget across
routes.

Suggested quick protocol:

1. Pick one real task that uses tools, e.g. "find the bug, edit the file, run
   the focused test".
2. Run it once through your baseline Codex route and once through `gpt-5.5`
   passthrough or your BYOK model.
3. Record wall time, request count, prompt tokens, output tokens, tool-call
   count, and final test result.
4. Compare only successful end-to-end runs.

Useful shell timing wrapper:

```bash
/usr/bin/time -f 'wall=%E cpu=%P max_rss_kb=%M' codex-shim codex -- "your task here"
```

The `--` separator is accepted and stripped by the wrapper. It is optional, but
it keeps task prompts that start with `-` from being parsed as wrapper flags.

A good report looks like:

```text
Oracle: same repo commit, same prompt, same focused test command
Baseline: 12 requests, 210k input tokens, 19k output tokens, 18m42s, test passed
Shim:      8 requests,  31k input tokens, 11k output tokens,  2m35s, test passed
Result:   6.8x fewer billed input tokens, 7.2x faster wall time
```

The exact multiplier depends on model, prompt catcher policy, repo size,
network path, and how often the agent calls tools.

---

## Commands

```text
codex-shim generate          regenerate catalog/config without starting daemon
codex-shim start             regenerate catalog and start local shim daemon
codex-shim enable            start daemon and write managed ~/.codex/config.toml block
codex-shim status            health check + model count
codex-shim doctor            read-only local setup diagnostics (OK/WARN/FAIL)
codex-shim doctor models     explain visible and hidden configured models
codex-shim doctor contract   check generated Desktop protocol contract drift
codex-shim test <target>     smoke-test a visible route by slug/provider/model/name
codex-shim probe compact     validate BYOK /v1/responses/compact output against running shim
codex-shim stop              stop daemon
codex-shim disable           remove managed config block and stop daemon
codex-shim restart           stop, regenerate, and start daemon
codex-shim list              list generated slugs and upstream routes
codex-shim model list        list slugs currently usable in the picker
codex-shim model use <slug>  set the Desktop default model in managed config
codex-shim codex -- <args>   exec `codex` CLI through inline shim overrides
codex-shim app [path]        launch Codex Desktop through managed shim config
codex-shim one-shot [path]   patch-if-needed, start shim, launch Desktop, stop shim on Desktop exit
codex-shim patch-app         patch macOS Codex Desktop sidebar ASAR behavior
codex-shim patch-auto        patch macOS Codex Desktop only if needed
codex-shim install-dock-shortcut  create a Dock launcher app for one-click one-shot
codex-shim patch-status      inspect macOS patch/backups/tooling
codex-shim restore-app       restore macOS app.asar from patch backup
codex-shim configure cursor  add/update Cursor Agent model settings
codex-shim configure zai     add/update Z.AI model settings
codex-shim configure nim     add/update NVIDIA NIM model settings
codex-shim import-vibeproxy  import VibeProxy /v1/models into models.json
codex-shim config export     export model settings, redacted by default
codex-shim config import     import model settings with a before-import backup

codex-app [path]             shortcut for `codex-shim app`
codex-model [list|<slug>]    shortcut for `codex-shim model …`
```

Global flags:

- `--settings <path>`: used by catalog/model/start/app/codex flows.
- `--port <port>`: used by daemon/provider flows.

`patch-app` and `restore-app` always target `/Applications/Codex.app`, do not
use `--settings`, and exit with a clear error on Windows/Linux.

---

## Model picker (web UI)

The shim exposes a small browser UI for switching the active model without
restarting the CLI:

- `GET /picker` — self-contained HTML page (dark theme) listing every model
  the shim currently knows about, with the active one highlighted.
- `GET /api/models` — JSON list backing the picker.
- `POST /api/switch` — `{"slug": "...", "restart_codex": true|false}`. The
  shim rewrites `model = "..."` and the `[model_providers.codex_shim]`
  `name = "..."` in `~/.codex/config.toml` so the Codex Desktop UI shows
  the selected model's display name (e.g. "Kimi K2.6") instead of the
  generic "Codex Shim" label, and optionally relaunches Codex Desktop
  (`open -a Codex` on macOS, `taskkill` + `Codex.exe` on Windows). This
  state-changing endpoint requires the per-process `X-Codex-Shim-Picker-Token`
  header embedded in `/picker`.

All picker routes are behind the same `Host`-header allowlist as the rest of
the shim, so a visited web page cannot drive them via DNS rebinding. The
state-changing `/api/switch` endpoint also requires a per-process picker token,
so third-party pages cannot trigger model switches just because the loopback
server is reachable.

See [`docs/subscription-integration.md`](docs/subscription-integration.md) for
ChatGPT and Cursor subscription passthrough setup and troubleshooting.

---

## Security and privacy

- The shim binds to `127.0.0.1` by default.
- The shim validates the `Host` header on every request and rejects anything
  that is not a loopback name (`127.0.0.1`, `localhost`, `::1`), the configured
  bind host, or an entry in `CODEX_SHIM_ALLOWED_HOSTS`. This blocks DNS-rebinding
  attacks where a web page you visit resolves its own domain to `127.0.0.1` and
  drives the shim with your credentials. If you deliberately bind to a
  non-loopback host, add the host(s) you reach it by to
  `CODEX_SHIM_ALLOWED_HOSTS` (comma-separated).
- The model picker protects its state-changing `/api/switch` endpoint with a
  per-process picker token, so cross-site pages cannot switch the active model
  or request a Desktop restart without loading the picker page.
- API keys stay in your settings file; the generated catalog does not contain
  them.
- Request logs are summary-level by default and avoid full prompt/API-key dumps.
- Full request debug dumps are disabled by default. Set
  `CODEX_SHIM_DEBUG_DUMP=1` to write a redacted `.codex-shim/last_request.json`;
  add `CODEX_SHIM_DEBUG_DUMP_FULL=1` only for trusted local debugging.
- ChatGPT passthrough reads `~/.codex/auth.json` at request time and forwards
  the access token only to ChatGPT's Codex endpoint.
- If you put a prompt-catching proxy in front of the shim, that proxy controls
  what it logs. Redact or hash large/private prompt bodies there.

---

## Limitations

- Codex internals and model-picker bundles change. The ASAR patch is version
  sensitive by nature.
- The ChatGPT passthrough endpoint is the endpoint current Codex builds use; it
  may move or change shape in a future Codex release.
- BYOK providers vary wildly in tool-call quality. The shim translates shapes;
  it cannot make an upstream model reliably emit valid tool-call JSON.
- Hosted Responses-only tools are highest fidelity on the ChatGPT passthrough
  path. BYOK routes get function-tool translation (`web_search`, `computer_use`,
  `apply_patch`, `local_shell`, `tool_search`, `custom_tool_call`).
- The `bin/codex-app` and `bin/codex-model` shortcuts are POSIX shell scripts.
  In native Windows shells, use the installed `codex-shim` command instead.

---

## Troubleshooting

### Shim will not start

```bash
codex-shim status
tail -n 80 .codex-shim/shim.log
```

Common causes:

- Python is older than 3.11.
- `aiohttp` is not installed in the Python used by the wrapper.
- Port `8765` is already in use. Start on another port:

```bash
codex-shim --port 8766 restart
codex-shim --port 8766 app .
```

### `~/.codex-shim/models.json` is missing

That is fine for ChatGPT passthrough-only use, **provided** `~/.codex/auth.json`
has a valid `tokens.access_token`. In that case `codex-shim generate` writes a
catalog containing just `gpt-5.5`. If neither file is present, the catalog will
be empty and `codex-shim list` will exit non-zero with a hint to run
`codex login` or pass a compatible settings file:

```bash
codex-shim --settings /path/to/my-models.json generate
```

### `codex-shim list` exits 1 with "No models available"

You have neither configured models in `~/.codex-shim/models.json` nor a valid
Codex login. Pick one:

```bash
codex login                       # populate ~/.codex/auth.json
# or
codex-shim --settings /path/to/my-models.json list
```

### Codex shows only `default`

Run:

```bash
codex-shim generate
codex-shim model list
```

If the catalog contains your models but Desktop still hides them, apply the
macOS picker patch. On Windows Store/MSIX Desktop, the same allowlist can rewrite
the active model back to `gpt-5.5`; use `codex-shim codex -- ...` / Codex CLI for
BYOK routes, or a non-MSIX/Desktop build that can read the custom catalog without
rewriting the config.

### Windows proxy sends loopback traffic away from the shim

If `codex.exe` returns proxy/502 errors while the shim is healthy, a system proxy
may be intercepting `http://127.0.0.1:8765`. Set both uppercase and lowercase
bypass variables before launching Codex:

```powershell
$env:NO_PROXY = "127.0.0.1,localhost,::1"
$env:no_proxy = "127.0.0.1,localhost,::1"
```

`codex-shim app ...` and `codex-shim codex -- ...` set those entries for the
child process automatically.

### Model appears but requests 404

The selected slug is not in the current generated catalog. Regenerate after
editing `~/.codex-shim/models.json` or the file passed with `--settings`:

```bash
codex-shim generate
codex-model list
codex-model <slug>
```

### Upstream returns 401/403

The API key in your model settings file is wrong, expired, or missing a
provider-specific header. For ChatGPT passthrough, refresh Codex login so
`~/.codex/auth.json` contains a valid `tokens.access_token`.

### Tool calls turn into text

Use the ChatGPT passthrough path first to confirm Codex itself is sending tools.
If passthrough works but a BYOK route does not, the upstream probably lacks
native tool-call support or emits malformed streamed arguments. Check
`.codex-shim/shim.log` for the requested model and tool count.

### Images fail on a text-only model

Set `"noImageSupport": true` for that model in the settings file and regenerate
the catalog.

### Streaming hangs

Check whether the upstream streams correctly outside Codex. Then restart the
local daemon:

```bash
codex-shim restart
tail -f .codex-shim/shim.log
```

The server uses a long read timeout because real coding-agent turns can stream
for a while; a silent hang is usually upstream/network/provider behavior.

### Cursor route shows text but tool cards are missing

Cursor routes use **delegate mode** by default. Run:

```bash
codex-shim probe delegate --slug <cursor-slug>
```

Inspect `metadata.shim_route.execution_mode` (expect `delegate`) and `metadata.shim_route.tool_authority` (expect `cursor`). Missing Codex tool cards is expected: Cursor executes tools internally and the shim does not emit `function_call` / `local_shell_call` items to Desktop.

For OpenAI/Anthropic BYOK routes, use `codex-shim probe tools --slug <slug>` instead.

### Codex Desktop reconnect loop on Cursor routes

If Desktop shows “Prior session's tools failed” or “Reconnecting 1/3” with a Cursor slug:

1. Confirm delegate mode: response `metadata.shim_route.execution_mode` must be `delegate`.
2. Bump Cursor timeout in `~/.codex-shim/models.json` (`prompt_timeout`: 3600) and Desktop `stream_idle_timeout_ms` in `~/.codex/config.toml` (≥ `prompt_timeout * 1000`).
3. Clear poisoned history if prior turns stored tool items: stop shim, remove `.codex-shim/response_store.sqlite`, restart.
4. Ensure workspace resolves to your project path (S11 capture in [`scripts/capture_runbook.md`](scripts/capture_runbook.md)); check `metadata.shim_route.workspace` on responses.

### Post-deploy migration (Cursor delegate)

After upgrading codex-shim:

1. Set `prompt_timeout: 3600` on your Cursor row in `~/.codex-shim/models.json`.
2. Set `stream_idle_timeout_ms = 3600000` in `~/.codex/config.toml`.
3. Clear poisoned multi-turn history: stop shim, delete `.codex-shim/response_store.sqlite`, restart.
4. Verify delegate mode:
   ```bash
   codex-shim probe delegate --slug cursor-auto
   PYTHONPATH=. python3 scripts/cursor_delegate_verify.py --slug cursor-auto --cwd /path/to/your/project
   ```

Access logs include `"workspace"` on cursor turns when cwd resolves successfully.

### `metadata.shim_anomalies` appears in a completed response

These are non-fatal normalization signals, not hard failures. Examples:

- `malformed_cursor_events`: Cursor emitted non-JSON lines that were ignored.
- `unknown_cursor_event_types`: Cursor emitted an event type the shim does not
  map yet.
- `delegated_tool_events_suppressed`: Cursor emitted tool events that were intentionally dropped in delegate mode.
- `duplicate_reasoning_completed` / `late_tool_completions`: duplicate or late
  completion events were ignored after the item was already closed.

### macOS app crashes after patching

You repacked `app.asar` but did not update `ElectronAsarIntegrity` and re-sign,
or the patch hit the wrong JavaScript bundle. Restore and retry:

```bash
codex-shim restore-app
codex-shim patch-app
```

### Avoid manual re-patching after app updates

Desktop updates replace `app.asar`, which removes the sidebar patch. Use:

```bash
codex-shim patch-auto
```

It inspects the current Desktop bundle and only runs `patch-app` when the
sidebar filter is unpatched. If macOS permissions block writes under
`/Applications/Codex.app`, rerun with sudo:

```bash
sudo python3 -m codex_shim.cli patch-app
```

For a single-command daily workflow, run:

```bash
codex-shim one-shot .
```

`one-shot` will:

1. regenerate catalog/config
2. run `patch-auto` on macOS (unless `--skip-patch`)
3. start shim if needed
4. launch Codex Desktop
5. wait until Codex Desktop exits
6. restore your prior `~/.codex/config.toml` model/provider keys
7. stop the shim daemon

This keeps shim usage transactional for Desktop sessions: Codex is pointed to
shim while Desktop is running, and automatically restored when the session
ends.

If you explicitly want to keep shim/config active after launch, use:

```bash
codex-shim one-shot . --keep-shim-running
```

### Reset generated shim state

```bash
codex-shim stop
# Remove .codex-shim manually if you want a completely fresh generated state.
codex-shim generate
codex-shim start
```

---

## File layout

```text
codex_shim/             python source (server + cli)
codex_shim/translate/   Responses ↔ chat/Anthropic translation package
bin/codex-shim          main entrypoint
bin/codex-app           shortcut wrapping `codex-shim app`
bin/codex-model         shortcut wrapping `codex-shim model …`
.codex-shim/            generated catalog, config, logs, pid (gitignored)
tests/                  pytest suite
```

Config behavior:

- `codex-shim generate`, `start`, `stop`, `restart`, `list`, `status`, and
  `codex-shim codex -- ...` do not persistently modify `~/.codex/config.toml`.
- `codex-shim enable`, `codex-shim app`, and `codex-shim model use <slug>` write
  managed blocks to `~/.codex/config.toml`. If existing top-level Codex model
  keys are displaced, the managed block records them so disable can restore
  those keys without reverting unrelated config edits.
- `codex-shim disable` removes the managed blocks, restores displaced top-level
  model keys when present, and stops the daemon.

---

## Development checks

```bash
python3 -m pytest tests/
python3 -m compileall codex_shim/ -q
```

The tests cover settings/catalog generation, request translation, server
routing, and CLI settings-file UX. Add regression tests when changing
translation behavior; tool-call shape bugs are easy to miss by eyeballing
streams.

---

## Contributing

Good contributions include:

- new provider translation tests;
- captured stream fixtures for tricky tool-call/reasoning cases;
- compatibility notes for new Codex Desktop builds;
- safer picker patch detection for changed ASAR bundles;
- docs for known-good provider configs.

Before opening a PR, run the development checks above and include the Codex
Desktop/CLI version you tested.

---

## License

MIT — see `LICENSE`.

Codex Desktop is a trademark of OpenAI. This project is unaffiliated.
