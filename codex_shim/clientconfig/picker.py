from __future__ import annotations

import json
import os
import re
import subprocess
import sys
import threading
import time
from pathlib import Path

from ..settings import PROVIDER_NAME

PICKER_TOKEN_HEADER = "X-Codex-Shim-Picker-Token"
CODEX_CONFIG_PATH = Path.home() / ".codex" / "config.toml"
_MODEL_LINE_RE = re.compile(r'(?m)^(\s*model\s*=\s*")[^"]*(")')
_PROVIDER_NAME_RE = re.compile(
    r'(\[model_providers\.' + re.escape(PROVIDER_NAME) + r'\][^\[]*?\n\s*name\s*=\s*")[^"]*(")',
    re.DOTALL,
)


def current_managed_model() -> str | None:
    if not CODEX_CONFIG_PATH.exists():
        return None
    try:
        text = CODEX_CONFIG_PATH.read_text()
    except OSError:
        return None
    for line in text.splitlines():
        stripped = line.strip()
        if stripped.startswith("model = "):
            return stripped.split("=", 1)[1].strip().strip('"')
    return None


def set_active_model(slug: str, display_name: str | None = None) -> None:
    if not CODEX_CONFIG_PATH.exists():
        return
    try:
        text = CODEX_CONFIG_PATH.read_text()
    except OSError:
        return
    text = _MODEL_LINE_RE.sub(rf'\g<1>{slug}\g<2>', text, count=1)
    if display_name:
        text = _PROVIDER_NAME_RE.sub(rf'\g<1>{display_name}\g<2>', text, count=1)
    try:
        CODEX_CONFIG_PATH.write_text(text)
    except OSError as exc:
        print(f"[switch] failed to write {CODEX_CONFIG_PATH}: {exc}", flush=True)
        return
    print(f"[switch] set active model to {slug} ({display_name})", flush=True)


def restart_codex_app() -> None:
    def _do_restart() -> None:
        try:
            if os.name == "nt":
                subprocess.run(
                    ["taskkill", "/IM", "Codex.exe", "/F"],
                    check=False,
                    stdout=subprocess.DEVNULL,
                    stderr=subprocess.DEVNULL,
                )
                time.sleep(1.5)
                local_appdata = os.environ.get("LOCALAPPDATA", "")
                codex_exe = Path(local_appdata) / "Programs" / "Codex" / "Codex.exe"
                if codex_exe.exists():
                    subprocess.Popen([str(codex_exe)])
                else:
                    subprocess.Popen(["Codex.exe"], shell=True)
            elif sys.platform == "darwin":
                quit_script = 'tell application "Codex" to if it is running then quit'
                subprocess.run(
                    ["osascript", "-e", quit_script],
                    check=False,
                    stdout=subprocess.DEVNULL,
                    stderr=subprocess.DEVNULL,
                )
                time.sleep(1.5)
                subprocess.Popen(["open", "-a", "Codex"])
        except OSError:
            pass

    threading.Thread(target=_do_restart, daemon=True).start()


def picker_html(picker_token: str) -> str:
    token_json = json.dumps(picker_token).replace("</", "<\\/")
    html = '''<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>Codex Shim - Model Picker</title>
<style>
  * { box-sizing: border-box; margin: 0; padding: 0; }
  body {
    font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, sans-serif;
    background: #0d1117; color: #c9d1d9;
    display: flex; justify-content: center; align-items: center;
    min-height: 100vh; padding: 20px;
  }
  .container { max-width: 500px; width: 100%; }
  h1 { font-size: 24px; margin-bottom: 8px; color: #f0f6fc; }
  .subtitle { color: #8b949e; margin-bottom: 24px; font-size: 14px; }
  .model-card {
    background: #161b22; border: 1px solid #30363d; border-radius: 8px;
    padding: 16px; margin-bottom: 12px; cursor: pointer;
    transition: all 0.15s ease; display: flex; align-items: center;
    justify-content: space-between;
  }
  .model-card:hover { border-color: #58a6ff; background: #1c2333; }
  .model-card.active { border-color: #3fb950; background: #1a2e1a; }
  .model-info { flex: 1; }
  .model-name { font-size: 16px; font-weight: 600; color: #f0f6fc; }
  .model-provider { font-size: 12px; color: #8b949e; margin-top: 4px; }
  .model-badge {
    font-size: 11px; padding: 2px 8px; border-radius: 12px;
    font-weight: 600; text-transform: uppercase;
  }
  .badge-active { background: #1a4d2e; color: #3fb950; }
  .badge-switch { background: #1c2333; color: #58a6ff; }
  .status { text-align: center; margin-top: 16px; font-size: 14px; min-height: 20px; }
  .status.ok { color: #3fb950; }
  .status.err { color: #f85149; }
  .status.loading { color: #d29922; }
  .restart-note { color: #8b949e; font-size: 12px; text-align: center; margin-top: 8px; }
  .opt { display: flex; align-items: center; justify-content: center; gap: 8px; margin-top: 12px; }
  .opt label { font-size: 13px; color: #8b949e; cursor: pointer; }
  .opt input { cursor: pointer; }
</style>
</head>
<body>
<div class="container">
  <h1>Model Picker</h1>
  <p class="subtitle">Choose the active model for Codex Desktop</p>
  <div id="models"><div class="status loading">Loading models...</div></div>
  <div class="opt">
    <input type="checkbox" id="autoRestart" checked>
    <label for="autoRestart">Auto-restart Codex after switching</label>
  </div>
  <div id="status" class="status"></div>
  <p class="restart-note">Codex needs to restart to use the new model</p>
</div>
<script>
const PICKER_TOKEN = __PICKER_TOKEN__;
async function loadModels() {
  const res = await fetch('/api/models');
  const models = await res.json();
  const container = document.getElementById('models');
  container.innerHTML = '';
  models.forEach(m => {
    const card = document.createElement('div');
    card.className = 'model-card' + (m.active ? ' active' : '');
    const info = document.createElement('div');
    info.className = 'model-info';
    const name = document.createElement('div');
    name.className = 'model-name';
    name.textContent = m.display_name;
    const prov = document.createElement('div');
    prov.className = 'model-provider';
    prov.textContent = m.provider + ' \\u00b7 ' + m.slug;
    info.appendChild(name);
    info.appendChild(prov);
    const badge = document.createElement('span');
    badge.className = 'model-badge ' + (m.active ? 'badge-active' : 'badge-switch');
    badge.textContent = m.active ? 'Active' : 'Switch';
    card.appendChild(info);
    card.appendChild(badge);
    if (!m.active) {
      card.onclick = () => switchModel(m.slug);
    }
    container.appendChild(card);
  });
}
async function switchModel(slug) {
  const status = document.getElementById('status');
  const restart = document.getElementById('autoRestart').checked;
  status.className = 'status loading';
  status.textContent = 'Switching to ' + slug + '...';
  try {
    const res = await fetch('/api/switch', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json',
        'X-Codex-Shim-Picker-Token': PICKER_TOKEN
      },
      body: JSON.stringify({slug, restart_codex: restart})
    });
    const data = await res.json();
    if (data.ok) {
      status.className = 'status ok';
      status.textContent = 'Switched to ' + slug + (restart ? ' - Codex restarting...' : '');
      setTimeout(loadModels, 1000);
    } else {
      status.className = 'status err';
      status.textContent = data.error || 'Failed';
    }
  } catch(e) {
    status.className = 'status err';
    status.textContent = 'Error: ' + e.message;
  }
}
loadModels();
</script>
</body>
</html>'''
    return html.replace("__PICKER_TOKEN__", token_json)
