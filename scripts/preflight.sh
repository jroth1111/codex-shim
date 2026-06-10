#!/usr/bin/env bash
# Local pre-commit gate. Mirrors .github/workflows/ci.yml (minus the CI-only
# probe matrix and the optional CURSOR_SOURCE_ROOT parity run). Every commit
# on main must pass this clean.
set -euo pipefail
cd "$(dirname "$0")/.."
export PYTHONPATH="${PWD}${PYTHONPATH:+:$PYTHONPATH}"

run() { echo "==> $*"; "$@"; }

run python3 -m compileall codex_shim/ -q
run ruff check .
run pyright
run python3 scripts/generate_desktop_contract.py --check
run python3 scripts/generate_desktop_app_server_contract.py --check
run python3 scripts/check_desktop_patch_needles.py
run python3 scripts/check_module_boundaries.py
run python3 scripts/cursor_inference_parity.py --self-check --mode plan "preflight"
run python3 -m pytest tests/ -m "not live" -q

echo "preflight: all gates passed"
