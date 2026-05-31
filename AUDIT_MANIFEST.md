# Codex Shim — GitHub Audit Scope

Third-party LLM review of codex-shim fidelity against Codex Desktop.

**Repository:** https://github.com/jroth1111/codex-shim

## In repo

| Path | Contents |
|------|----------|
| `codex_shim/` | Shim Python source |
| `tests/` | Tests + `fixtures/desktop/` golden turns |
| `codex-desktop-decompiled/` | Desktop source evidence (ASAR JS, Ghidra decomp, strings) |
| `AUDIT_CONTRACTS.md` | Tier A vs BYOK wire contracts |
| `AUDIT_PROMPT.md` | Full audit instructions |
| `README.md` | Behavior, fidelity tiers, env vars |

### Desktop decomp included (source only)

| Path | Description |
|------|-------------|
| `app-asar-extracted/` | Electron UI from Codex.app `app.asar` |
| `ghidra/codex/decomp-rust/` | Ghidra pseudo-C decompilation of Rust CLI |
| `ghidra/codex/recovered-src/` | Recovered source clusters |
| `ghidra/codex/decomp/` | Early decomp pass |
| `native-binaries/codex.strings.txt` | Strings dump from native CLI |
| `CODEX_SHIM_ARCHITECTURE.md` | Integration map |

### Excluded from repo (see `codex-desktop-decompiled/.gitignore`)

Mach-O binaries, Ghidra project databases, 97 MB `facts/strings.json`, analysis logs.

## Read first

1. **`AUDIT_CONTRACTS.md`**
2. **`AUDIT_PROMPT.md`**
3. `README.md`
4. `codex-desktop-decompiled/CODEX_SHIM_ARCHITECTURE.md`
5. `codex_shim/server.py` + `codex_shim/translate.py`

## Verify after review

```bash
PYTHONPATH=. pytest tests/ -q
codex-shim probe fidelity
```
