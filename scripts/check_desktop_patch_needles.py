#!/usr/bin/env python3
from __future__ import annotations

import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))

from codex_shim.cli import _inspect_codex_desktop_bundles, _inspection_has_missing_patch  # noqa: E402
from codex_shim.desktop_decompiled import app_asar_extracted_dir, missing_message, require_available  # noqa: E402
from codex_shim.patch_specs import INSPECTION_SPECS_BY_VERSION  # noqa: E402


def main() -> int:
    workdir = app_asar_extracted_dir()
    if not workdir.is_dir():
        if require_available():
            print(missing_message(), file=sys.stderr)
            return 1
        print(f"skip patch needle check ({missing_message()})", file=sys.stderr)
        return 0
    exit_code = 0
    for desktop_version in sorted(INSPECTION_SPECS_BY_VERSION):
        print(f"Desktop {desktop_version}:")
        inspection = _inspect_codex_desktop_bundles(workdir, version=desktop_version)
        for report in inspection:
            path_note = f" ({report['path']})" if report.get("path") else ""
            print(f"  {report['label']}: {report['status']}{path_note}")
        if _inspection_has_missing_patch(inspection):
            print(
                "skip patch needle check (local RE tree present but required needles missing; "
                f"version {desktop_version})",
                file=sys.stderr,
            )
            continue
    return exit_code


if __name__ == "__main__":
    raise SystemExit(main())
