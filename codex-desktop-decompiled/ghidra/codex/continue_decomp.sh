#!/usr/bin/env bash
# Re-export facts + decompile Rust code (skip import stubs at 0x108aa8xxx).
set -euo pipefail
export JAVA_HOME="${JAVA_HOME:-$(/usr/libexec/java_home -v 21)}"
export GHIDRA_HOME="${GHIDRA_HOME:-/opt/homebrew/Cellar/ghidra/12.1/libexec}"
OUT="$(cd "$(dirname "$0")" && pwd)"
BIN="$OUT/../../native-binaries/codex"
SCRIPTS="${GHIDRA_SCRIPTS:-$HOME/.agents/skills/ghidra/ghidra_scripts}"
LAUNCH="$GHIDRA_HOME/support/launch.sh"
FACTS="$OUT/facts"
DECOMP="$OUT/decomp-rust"
MAX="${1:-300}"
STUB_CUTOFF=$((16#108aa8000))

mkdir -p "$FACTS" "$DECOMP" "$OUT/plans" "$OUT/logs"
LOCAL_SCRIPTS="$OUT/ghidra_scripts"
SCRIPT_PATH="$LOCAL_SCRIPTS;$SCRIPTS"

if [[ "${STRING_SEEDS:-0}" == "1" ]]; then
  echo "== Scan __text for ADRP refs to shim strings =="
  python3 "$OUT/scripts/scan_adrp_refs.py"
  BATCH="$OUT/plans/decomp_string_seeds_dedup.txt"
  if [[ -f "$BATCH" ]]; then
    head -n "${STRING_BATCH:-500}" "$BATCH" > "$OUT/plans/decomp_string_batch.txt"
    echo "== Expand from string-ref seeds =="
    "$LAUNCH" fg jdk Ghidra-Headless 8192M '-XX:ParallelGCThreads=4 -Djava.awt.headless=true ' \
      ghidra.app.util.headless.AnalyzeHeadless \
      "$OUT/ghidra-projects" codex_cli_recon \
      -process codex -noanalysis \
      -scriptPath "$SCRIPT_PATH" \
      -postScript ExpandFromSeedList.java "$OUT/plans/decomp_string_batch.txt" 3000 \
      2>&1 | tee "$OUT/logs/expand_string_seeds.log" | tail -5
    echo "== Decompile string batch =="
    "$LAUNCH" fg jdk Ghidra-Headless 8192M '-XX:ParallelGCThreads=4 -Djava.awt.headless=true ' \
      ghidra.app.util.headless.AnalyzeHeadless \
      "$OUT/ghidra-projects" codex_cli_recon \
      -process codex -noanalysis \
      -scriptPath "$SCRIPT_PATH" \
      -postScript DecompileByAddress.java "$DECOMP" 90 "$OUT/plans/decomp_string_batch.txt" \
      2>&1 | tee "$OUT/logs/decomp_string_batch.log" | tail -5
  fi
fi

echo "== Expand call graph from Rust entry =="
"$LAUNCH" fg jdk Ghidra-Headless 8192M '-XX:ParallelGCThreads=4 -Djava.awt.headless=true ' \
  ghidra.app.util.headless.AnalyzeHeadless \
  "$OUT/ghidra-projects" codex_cli_recon \
  -process codex -noanalysis \
  -scriptPath "$SCRIPT_PATH" \
  -postScript ExpandFromEntry.java 2500 10602b154 1016fa824 \
  2>&1 | tee "$OUT/logs/expand_from_entry.log" | tail -5

echo "== Export facts (no re-analysis) =="
"$LAUNCH" fg jdk Ghidra-Headless 8192M '-XX:ParallelGCThreads=4 -Djava.awt.headless=true ' \
  ghidra.app.util.headless.AnalyzeHeadless \
  "$OUT/ghidra-projects" codex_cli_recon \
  -process codex -noanalysis \
  -scriptPath "$SCRIPT_PATH" \
  -postScript ExportProgramFactsJava.java "$FACTS" \
  -postScript ExportCallGraphJava.java "$FACTS" \
  -postScript ExportStringsAndRefsJava.java "$FACTS" 4 \
  -postScript ExportFunctionEvidenceJava.java "$FACTS" 4 \
  -postScript ExportTypeAndClassHintsJava.java "$FACTS" \
  2>&1 | tee "$OUT/logs/export_facts.log"

echo "== Select non-stub targets =="
python3 - "$FACTS" "$OUT/plans/decomp_targets_rust.txt" "$MAX" "$STUB_CUTOFF" <<'PY'
import json, sys
from pathlib import Path

facts, out, max_n, stub = Path(sys.argv[1]), Path(sys.argv[2]), int(sys.argv[3]), int(sys.argv[4])
funcs = json.loads((facts / 'functions.json').read_text())
evidence = {e['entry']: e for e in json.loads((facts / 'function_evidence.json').read_text()) if e.get('entry')}
SHIM_KW = (
    'backend-api', 'chatgpt', 'responses-api', 'codex-rs', 'app-server',
    'auth', 'proxy', 'hyper', 'rustls', '/v1/', 'model', 'provider',
)

def score_fn(fn):
    entry = int(fn.get('entry', '0'), 16)
    if entry >= stub:
        return None
    name = fn.get('name', '') or ''
    if name.startswith('_') and not name.startswith('_ZN'):
        return None
    ev = evidence.get(fn.get('entry'), {})
    score = 0
    if name in {'entry', 'main', '_start'}:
        score += 200
    score += min(30, len(ev.get('import_refs', [])) * 2)
    for s in ev.get('string_refs', []):
        text = (s.get('text') or '').lower()
        score += 2
        if any(k in text for k in SHIM_KW):
            score += 25
    score += min(20, int(fn.get('basic_block_count') or 0) // 10)
    score += min(15, int(fn.get('body_size') or 0) // 64)
    if name.startswith('FUN_'):
        score += 3
    if name.startswith('_ZN'):
        score += 5
    return score

selected = []
for fn in funcs:
    sc = score_fn(fn)
    if sc is None:
        continue
    selected.append((sc, fn['entry']))
selected.sort(reverse=True)
lines = [e for _, e in selected[:max_n]]
out.write_text('\n'.join(lines) + ('\n' if lines else ''))
print(f'selected {len(lines)} targets (from {len(funcs)} functions, {sum(1 for f in funcs if int(f.get("entry","0"),16) < stub)} below stub cutoff)')
if lines[:10]:
    names = {f['entry']: f.get('name') for f in funcs}
    print('top entries:', ', '.join(f"{e}({names.get(e,'?')})" for e in lines[:10]))
PY

echo "== Decompile =="
"$LAUNCH" fg jdk Ghidra-Headless 8192M '-XX:ParallelGCThreads=4 -Djava.awt.headless=true ' \
  ghidra.app.util.headless.AnalyzeHeadless \
  "$OUT/ghidra-projects" codex_cli_recon \
  -process codex -noanalysis \
  -scriptPath "$SCRIPT_PATH" \
  -postScript ExportDecompilerJava.java "$DECOMP" 120 "$MAX" "$OUT/plans/decomp_targets_rust.txt" \
  2>&1 | tee "$OUT/logs/decomp_rust.log"

echo "Done. See $DECOMP/index.json"
