"""Codex Desktop ASAR patching, inspection, and restore.

Reads of patched constants/helpers and cross-command calls go through the
cli package namespace (cli_ns) at call time so test monkeypatches on
codex_shim.cli attributes keep working.
"""
from __future__ import annotations

import hashlib
import plistlib
import shlex
import shutil
import struct
import subprocess
import sys
from pathlib import Path

from codex_shim import cli as cli_ns

from ..clientconfig import (
    inspection_specs_for_version,
    patch_specs_for_version,
)


def install_dock_shortcut() -> int:
    if sys.platform != "darwin":
        print("install-dock-shortcut is macOS-only.", file=sys.stderr)
        return 1
    launcher_dir = Path.home() / ".codex-shim"
    launcher_dir.mkdir(parents=True, exist_ok=True)
    launcher_script = launcher_dir / "dock-launch.sh"
    repo_root = cli_ns.PROJECT_ROOT
    launcher_script.write_text(
        "#!/usr/bin/env bash\n"
        "set -euo pipefail\n"
        f"cd {shlex.quote(str(repo_root))}\n"
        "python3 -m codex_shim.cli one-shot .\n"
    )
    launcher_script.chmod(0o755)

    app_dir = Path.home() / "Applications"
    app_dir.mkdir(parents=True, exist_ok=True)
    app_path = app_dir / "Codex Shim Launcher.app"
    applescript = (
        'tell application "Terminal"\n'
        f'  do script "{launcher_script}"\n'
        "  activate\n"
        "end tell\n"
    )
    subprocess.run(
        [
            _resolve_executable("osacompile"),
            "-o",
            str(app_path),
            "-e",
            applescript,
        ],
        check=True,
    )
    print(f"Created Dock launcher app: {app_path}")
    print("Drag this app into your Dock for one-click startup/shutdown workflow.")
    return 0


def patch_codex_app() -> int:
    if sys.platform != "darwin":
        print("patch-app is macOS-only; Windows MSIX Codex Desktop cannot be patched with this ASAR helper.", file=sys.stderr)
        return 1
    app_asar = cli_ns.CODEX_APP_ASAR_PATH
    info_plist = app_asar.parent.parent / "Info.plist"
    backup = cli_ns.RUNTIME_DIR / cli_ns.APP_ASAR_BACKUP_NAME
    info_backup = cli_ns.RUNTIME_DIR / cli_ns.INFO_PLIST_BACKUP_NAME
    workdir = cli_ns.RUNTIME_DIR / "app-asar-work"

    if not app_asar.exists():
        print(f"Codex app bundle not found at {app_asar}.", file=sys.stderr)
        return 1
    if not info_plist.exists():
        print(f"Codex Info.plist not found at {info_plist}.", file=sys.stderr)
        return 1
    if not _has_command("npx"):
        print("npx is required to patch the Electron asar bundle.", file=sys.stderr)
        return 1
    if not _has_command("codesign"):
        print("codesign is required to re-sign the patched Codex app bundle.", file=sys.stderr)
        return 1

    cli_ns.RUNTIME_DIR.mkdir(parents=True, exist_ok=True)
    cli_ns._quit_codex_app()
    if workdir.exists():
        import shutil

        shutil.rmtree(workdir, ignore_errors=True)
        if workdir.exists():
            print(
                f"Cannot clear existing workdir {workdir}. "
                "It may contain root-owned files from a prior sudo run.",
                file=sys.stderr,
            )
            print("Try: sudo rm -rf " + str(workdir), file=sys.stderr)
            return 1
    workdir.mkdir(parents=True)
    subprocess.run([_resolve_executable("npx"), "--yes", "asar", "extract", str(app_asar), str(workdir)], check=True)
    desktop_version = _codex_desktop_version(info_plist)
    inspection = _inspect_codex_desktop_bundles(workdir, version=desktop_version)
    if _inspection_has_missing_patch(inspection):
        _print_patch_inspection(inspection, file=sys.stderr)
        print("Could not find every expected Codex Desktop patch needle.", file=sys.stderr)
        return 1
    if not backup.exists() and _inspection_has_applied_patch(inspection):
        _print_patch_inspection(inspection, file=sys.stderr)
        print(
            f"Refusing to create {backup} from an already-patched app.asar. "
            "Restore from a clean Codex.app or provide the original backup first.",
            file=sys.stderr,
        )
        return 1
    if not backup.exists():
        backup.write_bytes(app_asar.read_bytes())
        print(f"Backed up original app.asar to {backup}.")
    versioned_backup = cli_ns.RUNTIME_DIR / f"app.asar.before-codex-shim-model-picker-patch.{_app_asar_hash(app_asar)[:12]}"
    if not versioned_backup.exists():
        versioned_backup.write_bytes(app_asar.read_bytes())
        print(f"Backed up current app.asar to {versioned_backup}.")
    if not info_backup.exists():
        info_backup.write_bytes(info_plist.read_bytes())
        print(f"Backed up original Info.plist to {info_backup}.")

    changed = _patch_codex_desktop_bundles(workdir, version=_codex_desktop_version(info_plist))
    if changed is None:
        return 1
    if changed:
        try:
            subprocess.run([_resolve_executable("npx"), "--yes", "asar", "pack", str(workdir), str(app_asar)], check=True)
            _update_app_asar_integrity(app_asar, info_plist)
            _resign_codex_app()
        except PermissionError:
            print(
                "Permission denied while writing Codex.app bundle. Re-run with elevated privileges:\n"
                "  sudo python3 -m codex_shim.cli patch-app",
                file=sys.stderr,
            )
            return 1
    return 0


def patch_codex_app_auto() -> int:
    if sys.platform != "darwin":
        print("patch-auto is macOS-only.", file=sys.stderr)
        return 1
    app_path = Path("/Applications/Codex.app")
    info_plist = app_path / "Contents/Info.plist"
    version = _codex_desktop_version(info_plist)
    workdir = _extract_app_asar_workdir(app_path)
    if workdir is None:
        print("Could not inspect app.asar bundles.", file=sys.stderr)
        return 1
    try:
        inspection = _inspect_codex_desktop_bundles(workdir, version=version)
        if not inspection:
            print("Desktop inspection returned no patch specs; run `codex-shim doctor patch` for details.", file=sys.stderr)
            return 1
        required = [row for row in inspection if row.get("optional", "false") != "true"]
        if not required:
            print("Desktop inspection found no required patch specs.", file=sys.stderr)
            return 1
        statuses = {str(row.get("status") or "") for row in required}
        if statuses == {"patched"}:
            print(f"Codex Desktop {version} already patched; no action needed.")
            return 0
        if any(str(row.get("status") or "") == "missing" for row in required):
            print(
                f"Codex Desktop {version} has unknown required bundle shape. "
                "Update patch specs for this version before patching.",
                file=sys.stderr,
            )
            return 1
    finally:
        import shutil

        shutil.rmtree(workdir, ignore_errors=True)
    print(f"Codex Desktop {version} is unpatched; applying patch...")
    return patch_codex_app()


def restore_codex_app_bundle() -> int:
    if sys.platform != "darwin":
        print("restore-app is macOS-only; Windows MSIX Codex Desktop cannot be restored with this ASAR helper.", file=sys.stderr)
        return 1
    app_asar = cli_ns.CODEX_APP_ASAR_PATH
    info_plist = app_asar.parent.parent / "Info.plist"
    backup = cli_ns.RUNTIME_DIR / cli_ns.APP_ASAR_BACKUP_NAME
    info_backup = cli_ns.RUNTIME_DIR / cli_ns.INFO_PLIST_BACKUP_NAME
    if not app_asar.exists():
        print(f"Codex app bundle not found at {app_asar}.", file=sys.stderr)
        return 1
    if not backup.exists():
        print(f"No original app.asar backup found at {backup}.", file=sys.stderr)
        versioned = _versioned_app_backups()
        if versioned:
            print("Versioned app.asar backups exist, but restore-app needs the original backup:", file=sys.stderr)
            for candidate in versioned:
                print(f"  {candidate}", file=sys.stderr)
        return 1
    if not _has_command("codesign"):
        print("codesign is required to re-sign the restored Codex app bundle.", file=sys.stderr)
        return 1
    cli_ns._quit_codex_app()
    app_asar.write_bytes(backup.read_bytes())
    if info_backup.exists():
        info_plist.write_bytes(info_backup.read_bytes())
        print(f"Restored {info_plist} from {info_backup}.")
    elif info_plist.exists():
        _update_app_asar_integrity(app_asar, info_plist)
    _resign_codex_app()
    print(f"Restored {app_asar} from {backup}.")
    return 0


def patch_status() -> int:
    if sys.platform != "darwin":
        print("patch-status is macOS-only; Windows/MSIX and Linux bundles are unsupported.")
        return 1
    app_asar = cli_ns.CODEX_APP_ASAR_PATH
    info_plist = app_asar.parent.parent / "Info.plist"
    backup = cli_ns.RUNTIME_DIR / cli_ns.APP_ASAR_BACKUP_NAME
    info_backup = cli_ns.RUNTIME_DIR / cli_ns.INFO_PLIST_BACKUP_NAME
    ok = True
    print(f"Codex app.asar: {app_asar}")
    if not app_asar.exists():
        print("  missing")
        ok = False
    else:
        print(f"  present sha256={_app_asar_hash(app_asar)[:12]}")
    print(f"Info.plist: {info_plist} ({'present' if info_plist.exists() else 'missing'})")
    print(f"npx: {'present' if _has_command('npx') else 'missing'}")
    print(f"codesign: {'present' if _has_command('codesign') else 'missing'}")
    if not _has_command("npx") or not _has_command("codesign"):
        ok = False
    print(f"original app.asar backup: {backup} ({'present' if backup.exists() else 'missing'})")
    print(f"original Info.plist backup: {info_backup} ({'present' if info_backup.exists() else 'missing'})")
    versioned = _versioned_app_backups()
    print(f"versioned app.asar backups: {len(versioned)}")
    for candidate in versioned:
        print(f"  {candidate.name}")
    if app_asar.exists() and backup.exists() and _app_asar_hash(app_asar) == _app_asar_hash(backup):
        print("warning: original backup hash matches current app.asar; restore may be stale/no-op.")
    if app_asar.exists() and _has_command("npx"):
        workdir = cli_ns.RUNTIME_DIR / "app-asar-status"
        if workdir.exists():
            import shutil

            shutil.rmtree(workdir)
        workdir.mkdir(parents=True, exist_ok=True)
        try:
            subprocess.run([_resolve_executable("npx"), "--yes", "asar", "extract", str(app_asar), str(workdir)], check=True)
            inspection = _inspect_codex_desktop_bundles(workdir, version=_codex_desktop_version(info_plist))
            _print_patch_inspection(inspection)
            if _inspection_has_missing_patch(inspection):
                ok = False
            if not backup.exists() and _inspection_has_applied_patch(inspection):
                print("warning: app appears patched but the original backup is missing.")
                ok = False
        finally:
            import shutil

            shutil.rmtree(workdir, ignore_errors=True)
    return 0 if ok else 1


def _resolve_executable(command: str) -> str:
    from shutil import which

    resolved = which(command)
    if resolved:
        return resolved
    raise SystemExit(f"Required command not found on PATH: {command}")


def _has_command(command: str) -> bool:
    from shutil import which

    return which(command) is not None


def _app_asar_hash(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def _app_asar_header_hash(path: Path) -> str:
    with path.open("rb") as f:
        _, _, _, json_size = struct.unpack("<4I", f.read(16))
        header_json = f.read(json_size)
    return hashlib.sha256(header_json).hexdigest()


def _update_app_asar_integrity(app_asar: Path, info_plist: Path) -> None:
    header_hash = _app_asar_header_hash(app_asar)
    data = plistlib.loads(info_plist.read_bytes())
    try:
        data["ElectronAsarIntegrity"]["Resources/app.asar"]["hash"] = header_hash
    except KeyError as exc:
        raise RuntimeError(f"Could not update ElectronAsarIntegrity in {info_plist}") from exc
    info_plist.write_bytes(plistlib.dumps(data))
    print("Updated ElectronAsarIntegrity for app.asar.")


def _codex_desktop_version(info_plist: Path | None = None) -> str:
    path = info_plist or (cli_ns.CODEX_APP_ASAR_PATH.parent.parent / "Info.plist")
    if not path.exists():
        return "unknown"
    data = plistlib.loads(path.read_bytes())
    return str(data.get("CFBundleShortVersionString") or data.get("CFBundleVersion") or "unknown")


def _patch_codex_desktop_bundles(workdir: Path, *, version: str = "unknown") -> bool | None:
    changed = False
    hard_failure = False
    for label, globs, needle, replacement, optional in _desktop_patch_specs(version):
        bundle_file = _find_js_bundle(workdir, globs, needle, replacement)
        if bundle_file is None:
            if optional:
                print(f"Skipping Codex Desktop {label} (needle not present in this Desktop version).")
                continue
            print(f"Could not find the expected {label} in Codex Desktop.", file=sys.stderr)
            hard_failure = True
            continue
        result = _replace_once(bundle_file, needle, replacement)
        if result is None:
            print(f"Could not patch the expected {label} in Codex Desktop.", file=sys.stderr)
            hard_failure = True
            continue
        if result:
            changed = True
            print(f"Patched Codex Desktop {label}.")
        else:
            print(f"Codex Desktop {label} patch is already applied.")
    if hard_failure:
        return None
    return changed


def _desktop_patch_specs(version: str = "unknown") -> list[tuple[str, list[str], str, str, bool]]:
    return patch_specs_for_version(version)


def _desktop_inspection_specs(version: str = "unknown") -> list[tuple[str, list[str], str, str, bool]]:
    return inspection_specs_for_version(version)


def _inspect_codex_desktop_bundles(workdir: Path, *, version: str = "unknown") -> list[dict[str, str]]:
    reports: list[dict[str, str]] = []
    for label, globs, needle, replacement, optional in _desktop_inspection_specs(version):
        bundle_file = _find_js_bundle(workdir, globs, needle, replacement)
        if bundle_file is None:
            status = "skipped" if optional else "missing"
            reports.append({"label": label, "status": status, "path": "", "optional": str(optional).lower()})
            continue
        text = _read_text_lossy(bundle_file)
        needle_count = text.count(needle)
        replacement_count = text.count(replacement)
        if replacement_count and not needle_count:
            status = "patched"
        elif needle_count == 1 and not replacement_count:
            status = "unpatched"
        elif needle_count or replacement_count:
            status = "mixed"
        else:
            status = "skipped" if optional else "missing"
        reports.append(
            {
                "label": label,
                "status": status,
                "path": str(bundle_file),
                "optional": str(optional).lower(),
            }
        )
    return reports


def _inspection_has_missing_patch(inspection: list[dict[str, str]]) -> bool:
    return any(
        report["status"] in {"missing", "mixed"} and report.get("optional", "false") != "true"
        for report in inspection
    )


def _inspection_has_applied_patch(inspection: list[dict[str, str]]) -> bool:
    return any(report["status"] in {"patched", "mixed"} for report in inspection)


def _print_patch_inspection(inspection: list[dict[str, str]], *, file=None) -> None:
    stream = file or sys.stdout
    print("Desktop patch inspection:", file=stream)
    for report in inspection:
        suffix = f" ({report['path']})" if report.get("path") else ""
        print(f"  {report['label']}: {report['status']}{suffix}", file=stream)


def _versioned_app_backups() -> list[Path]:
    return sorted(cli_ns.RUNTIME_DIR.glob(cli_ns.APP_ASAR_BACKUP_NAME + ".*"))


def _extract_app_asar_workdir(app_path: Path) -> Path | None:
    app_asar = app_path / "Contents/Resources/app.asar"
    if not app_asar.exists() or not _has_command("npx"):
        return None

    workdir = cli_ns.RUNTIME_DIR / "app-asar-doctor"
    if workdir.exists():
        shutil.rmtree(workdir)
    workdir.mkdir(parents=True, exist_ok=True)
    try:
        subprocess.run([_resolve_executable("npx"), "--yes", "asar", "extract", str(app_asar), str(workdir)], check=True)
    except subprocess.CalledProcessError:
        shutil.rmtree(workdir, ignore_errors=True)
        return None
    return workdir


def _find_js_bundle(workdir: Path, globs: list[str], needle: str, replacement: str) -> Path | None:
    assets_dir = workdir / "webview" / "assets"
    if not assets_dir.exists():
        return None
    candidates: list[Path] = []
    for pattern in globs:
        candidates.extend(p for p in sorted(assets_dir.glob(pattern)) if p not in candidates)
    for path in candidates:
        text = _read_text_lossy(path)
        if needle in text or replacement in text:
            return path
    return None


def _replace_once(path: Path, needle: str, replacement: str) -> bool | None:
    text = _read_text_lossy(path)
    if replacement in text:
        return False
    count = text.count(needle)
    if count != 1:
        return None
    path.write_text(text.replace(needle, replacement, 1))
    return True


def _read_text_lossy(path: Path) -> str:
    try:
        return path.read_text()
    except UnicodeDecodeError:
        return path.read_text(errors="ignore")


def _resign_codex_app() -> None:
    # Electron validates app.asar through the bundle signature metadata at
    # startup. Re-sign after patching so the modified archive does not trip the
    # asar integrity check.
    subprocess.run(
        [_resolve_executable("codesign"), "--force", "--deep", "--sign", "-", "/Applications/Codex.app"],
        check=True,
    )
    print("Re-signed Codex.app after patch.")


def _foreground_codex_app() -> None:
    script = '''
tell application "Codex" to activate
delay 0.5
tell application "System Events"
  if exists process "Codex" then
    tell process "Codex"
      set frontmost to true
      if (count of windows) is 0 then
        keystroke "n" using command down
        delay 0.3
      end if
      if (count of windows) > 0 then
        set position of window 1 to {80, 60}
        set size of window 1 to {1400, 980}
      end if
    end tell
  end if
end tell
'''
    try:
        subprocess.run(
            [_resolve_executable("osascript"), "-e", script],
            check=False,
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
        )
    except OSError:
        pass
