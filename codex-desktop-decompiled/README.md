# Codex Desktop decompilation artifacts

Local extraction from `/Applications/Codex.app` (not redistributable; OpenAI proprietary).

## Source app

| Field | Value |
|-------|--------|
| Bundle version | 26.519.81530 |
| Build number | 3178 |
| CLI (`Resources/codex`) | `codex-cli 0.133.0` |
| Electron app (`package.json`) | `openai-codex-electron` 26.519.81530, Electron 42.1.0 |

## What was extracted

### 1. `app-asar-extracted/` — Electron UI (recoverable JS)

Extracted with `@electron/asar` from `Contents/Resources/app.asar` (~152 MB archive → ~113 MB tree).

- **Main entry**: `.vite/build/bootstrap.js` (Vite production bundle)
- **UI**: `webview/assets/*.js` — minified chunks (model picker, app server signals, etc.)
- **Shim-relevant patch targets** (see repo `codex_shim/cli.py`):
  - `webview/assets/model-queries-DjNo3DyL.js` — contains `useHiddenModels` picker filter
  - Search `app-server-manager-signals` for `listRecentThreads` / `modelProviders`

This is the practical “decompilation” surface for Desktop behavior (picker allowlist, provider wiring, webview RPC).

### 2. `native-binaries/` — copied executables + strings

| File | Size | Technology |
|------|------|------------|
| `codex` | ~185 MB | **Rust** (tokio, hyper, rustls) — Codex CLI embedded in the app |
| `codex_chronicle` | ~4.3 MB | Native helper (not analyzed in depth) |
| `Codex-launcher` | ~52 KB | Thin Electron stub (`Contents/MacOS/Codex`) |
| `codex.strings.txt` | strings dump | Symbol paths, URLs, error text |

**Not a Bun standalone** — `recover_bun_standalone.py` fails with `Could not locate Mach-O section __BUN`. Full Rust recovery needs native RE (Ghidra/IDA), not the Bun graph parser.

### 3. `codex-cli-bun-attempt/`

Empty failed run documenting that the CLI is not Bun-packaged.

### 4. `CODEX_SHIM_ARCHITECTURE.md`

How **codex-shim** (this repo) intercepts Codex at `POST /v1/responses` and translates to BYOK upstreams.

## Layout map (Desktop)

```text
Codex.app/
├── Contents/MacOS/Codex          → Electron launcher
├── Contents/Resources/
│   ├── app.asar                  → extracted → app-asar-extracted/
│   ├── codex                     → Rust CLI (native-binaries/codex)
│   ├── codex_chronicle
│   ├── app.asar.unpacked/node_modules/  (not fully mirrored here)
│   ├── native/*.node
│   └── plugins/openai-bundled/…
└── Frameworks/Electron Framework.app/   (not copied)
```

## Regenerating

```bash
# ASAR only
npx --yes @electron/asar extract \
  "/Applications/Codex.app/Contents/Resources/app.asar" \
  "codex-desktop-decompiled/app-asar-extracted"

# Refresh native copies + strings
cp "/Applications/Codex.app/Contents/Resources/codex" \
   codex-desktop-decompiled/native-binaries/
strings "/Applications/Codex.app/Contents/Resources/codex" \
  > codex-desktop-decompiled/native-binaries/codex.strings.txt
```

## Shim contract sync (after Desktop updates)

When Codex Desktop changes wire shapes or patch needles:

1. Refresh `app-asar-extracted/` and `native-binaries/codex.strings.txt` (commands above).
2. Update bundle version in this README table.
3. Regenerate the Python contract consumed by the shim:

```bash
python3 scripts/generate_desktop_contract.py --write
python3 scripts/generate_desktop_contract.py --check
python3 scripts/check_desktop_patch_needles.py
python3 -m pytest tests/test_desktop_contract.py tests/test_fidelity_fixtures.py -q
```

4. If sidebar patch needles moved, update `codex_shim/patch_specs.py` for the new
   Desktop version and re-run `codex-shim doctor patch`.

CI runs the `--check` and patch-needle scripts on every push.

## 5. `ghidra/codex/` — headless native RE (Rust CLI)

The embedded CLI (`native-binaries/codex`, ~185 MB arm64 Mach-O) is **not** Bun-packaged. Recovery uses **Ghidra headless**, not `recover_bun_standalone.py`.

| Artifact | Purpose |
|----------|---------|
| `ghidra-projects/` | Persistent Ghidra project (`codex_cli_recon`) |
| `logs/import_noanalysis.log` | Fast import pass (`-noanalysis`) |
| `logs/analyze_and_facts.log` | Full analysis + fact export (long-running) |
| `facts/` | `program.json`, `functions.json`, `strings.json`, call graph, etc. |
| `decomp/` | First pass — mostly dyld import stubs (796/797 functions were stubs before full analysis) |
| `decomp-rust/` | Rust targets after `continue_decomp.sh` (non-stub filter) |
| `continue_decomp.sh` | Re-export facts + decompile Rust functions (run after analysis completes) |
| `AGENT_BRIEF.md` | Next-pass context from postprocess |

### Prerequisites

```bash
brew install openjdk@21 ghidra
export JAVA_HOME="$(/usr/libexec/java_home -v 21)"
export GHIDRA_HOME="/opt/homebrew/Cellar/ghidra/12.1/libexec"   # not .../bin
```

Ghidra 12.1 rejects project dirs whose path segments start with `.`; use `ghidra-projects/` not `.ghidra-projects/`.

### Regenerate (two-phase, large binary)

Phase 1 — import only (~1 min):

```bash
OUT="codex-desktop-decompiled/ghidra/codex"
BIN="codex-desktop-decompiled/native-binaries/codex"
"$GHIDRA_HOME/support/launch.sh" fg jdk Ghidra-Headless 8192M '...' \
  ghidra.app.util.headless.AnalyzeHeadless \
  "$OUT/ghidra-projects" codex_cli_recon \
  -import "$BIN" -noanalysis -overwrite -scriptPath ~/.agents/skills/ghidra/ghidra_scripts
```

Phase 2 — analyze + export facts (often **1–3+ hours**; default skill timeout is 20 min):

```bash
python3 ~/.agents/skills/ghidra/scripts/run_headless_recon.py "$BIN" \
  --out "$OUT" \
  --facts-only \
  --headless-timeout 14400 \
  --java-maxmem 8192M \
  --project-dir "$OUT/ghidra-projects" \
  --project-name codex_cli_recon \
  --process-existing \
  --program-name codex
```

Note: `--process-existing` in the stock skill adds `-noanalysis` and skips re-analysis; for phase 2 after import-only, invoke `analyzeHeadless -process codex` **without** `-noanalysis` (see `logs/analyze_and_facts.log` command) or extend the skill.

Phase 3 — decompile Rust code (after full analysis — monitor `logs/analyze_only.log`):

```bash
codex-desktop-decompiled/ghidra/codex/continue_decomp.sh 300

# After entry-point expansion plateaus, seed from shim string ADRP refs (~37k sites):
STRING_SEEDS=1 STRING_BATCH=500 codex-desktop-decompiled/ghidra/codex/continue_decomp.sh
```

Legacy skill path (use `--headless-timeout` on `run_headless_recon.py`, not `run_recon_phase.py`):

```bash
python3 ~/.agents/skills/ghidra/scripts/run_headless_recon.py "$BIN" \
  --out "$OUT" --decomp-only --program-name codex \
  --project-dir "$OUT/ghidra-projects" --project-name codex_cli_recon \
  --headless-timeout 14400 --max-functions 300
```

### Strings triage (no Ghidra)

326 unique `codex-rs/*.rs` paths are embedded in the binary (debug paths from CI). Top crates by path count: `core`, `app-server`, `tui`, `hooks`, `exec-server`. See `native-binaries/codex.strings.txt` and grep `chatgpt.com/backend-api`, `/v1/models`, `responses-api-proxy`.

## Legal

Codex Desktop is OpenAI proprietary software. These artifacts are for local interoperability research (e.g. codex-shim picker patches). Do not publish or redistribute extracted sources.
