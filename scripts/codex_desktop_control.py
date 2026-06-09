#!/usr/bin/env python3
"""Drive Codex Desktop through AppleScript (System Events)."""
from __future__ import annotations

import json
import subprocess
import time


def _applescript_string(value: str) -> str:
    return value.replace("\\", "\\\\").replace('"', '\\"')


def quit_desktop(*, wait_s: float = 3.0) -> None:
    subprocess.run(["osascript", "-e", 'tell application "Codex" to quit'], check=False)
    subprocess.run(["killall", "Codex"], check=False)
    time.sleep(wait_s)


def launch_desktop(*, wait_s: float = 14.0) -> None:
    subprocess.run(["open", "-a", "Codex"], check=False)
    time.sleep(wait_s)


def activate_desktop(*, settle_s: float = 2.0) -> None:
    subprocess.run(["osascript", "-e", 'tell application "Codex" to activate'], check=False)
    time.sleep(settle_s)


def relaunch_desktop(*, wait_s: float = 18.0) -> None:
    quit_desktop()
    launch_desktop(wait_s=wait_s)


def _focus_composer_block() -> str:
    return """
    if (count of windows) > 0 then
      set win to window 1
      set winPos to position of win
      set winSize to size of win
      set clickX to (item 1 of winPos) + (item 1 of winSize) / 2
      repeat with offsetY in {80, 100, 120, 140, 160}
        set clickY to (item 2 of winPos) + (item 2 of winSize) - offsetY
        click at {clickX, clickY}
        delay 0.2
      end repeat
    end if
"""


def _model_picker_block(model_label: str) -> str:
    model_label_escaped = _applescript_string(model_label)
    return f"""
      if (count of windows) > 0 then
        set win to window 1
        set winPos to position of win
        set winSize to size of win
        set clickX to (item 1 of winPos) + (item 1 of winSize) - 180
        set clickY to (item 2 of winPos) + 36
        click at {{clickX, clickY}}
        delay 0.8
      end if
      keystroke "a" using command down
      delay 0.2
      keystroke "{model_label_escaped}"
      delay 1.0
      key code 36
      delay 1.2
"""


def select_desktop_model(model_label: str, *, new_thread: bool = False, settle_s: float = 3.0) -> None:
    """Open model picker and select a Desktop model label (no prompt submit)."""
    new_thread_block = ""
    if new_thread:
        new_thread_block = """
      keystroke "n" using command down
      delay 4
"""
    script = f"""
tell application "Codex" to activate
delay {settle_s}
tell application "System Events"
  if not (exists process "Codex") then
    error "Codex process not found"
  end if
  tell process "Codex"
    set frontmost to true
    delay 1.0
    if (count of windows) is 0 then
      keystroke "n" using command down
      delay 1.5
    end if
{new_thread_block}
{_model_picker_block(model_label)}
  end tell
end tell
"""
    proc = subprocess.run(
        ["osascript", "-e", script],
        capture_output=True,
        text=True,
        check=False,
    )
    if proc.returncode != 0:
        detail = (proc.stderr or proc.stdout or "").strip()
        raise RuntimeError(f"AppleScript model select failed: {detail}")


def submit_prompt(
    prompt: str,
    *,
    new_thread: bool = False,
    settle_s: float = 3.0,
    model_label: str | None = None,
    use_paste: bool = False,
) -> None:
    escaped = _applescript_string(prompt)
    if use_paste:
        subprocess.run(["pbcopy"], input=prompt, text=True, check=True)
        prompt_block = """
      keystroke "v" using command down
      delay 0.6
"""
    else:
        prompt_block = f"""
      keystroke "{escaped}"
      delay 0.5
"""
    new_thread_block = ""
    if new_thread:
        new_thread_block = """
      keystroke "n" using command down
      delay 4
"""
    model_block = _model_picker_block(model_label) if model_label else ""
    script = f"""
tell application "Codex" to activate
delay {settle_s}
tell application "System Events"
  if not (exists process "Codex") then
    error "Codex process not found"
  end if
  tell process "Codex"
    set frontmost to true
    delay 0.8
    if (count of windows) is 0 then
      keystroke "n" using command down
      delay 1.5
    end if
{new_thread_block}
{model_block}
{_focus_composer_block()}
    keystroke "a" using command down
    delay 0.2
{prompt_block}
    key code 36
    delay 0.4
    keystroke return using command down
  end tell
end tell
"""
    proc = subprocess.run(
        ["osascript", "-e", script],
        capture_output=True,
        text=True,
        check=False,
    )
    if proc.returncode != 0:
        detail = (proc.stderr or proc.stdout or "").strip()
        raise RuntimeError(f"AppleScript submit failed: {detail}")


def run_desktop_turn(
    prompt: str,
    *,
    new_thread: bool = False,
    wait_s: float = 45.0,
    model_label: str | None = "GPT-5.5",
    use_paste: bool = False,
) -> None:
    submit_prompt(
        prompt,
        new_thread=new_thread,
        model_label=model_label,
        use_paste=use_paste,
    )
    time.sleep(wait_s)


def main() -> int:
    import argparse

    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("prompt", help="User message to send in Codex Desktop")
    parser.add_argument("--new-thread", action="store_true")
    parser.add_argument("--wait", type=float, default=45.0)
    parser.add_argument("--relaunch", action="store_true")
    parser.add_argument("--model", default="GPT-5.5", help="Desktop UI model label to select before submit")
    args = parser.parse_args()
    if args.relaunch:
        relaunch_desktop()
    run_desktop_turn(
        args.prompt,
        new_thread=args.new_thread,
        wait_s=args.wait,
        model_label=args.model or None,
    )
    print(json.dumps({"ok": True, "prompt": args.prompt}))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
