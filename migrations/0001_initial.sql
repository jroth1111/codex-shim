CREATE TABLE IF NOT EXISTS idempotency_keys (
    key TEXT PRIMARY KEY,
    created_at TIMESTAMPTZ NOT NULL DEFAULT NOW(),
    request_hash TEXT NOT NULL
);

CREATE TABLE IF NOT EXISTS governance_events (
    id BIGSERIAL PRIMARY KEY,
    created_at TIMESTAMPTZ NOT NULL DEFAULT NOW(),
    path TEXT NOT NULL,
    provider TEXT NOT NULL,
    model_slug TEXT NOT NULL,
    outcome TEXT NOT NULL,
    failure_category TEXT,
    tool_count INTEGER NOT NULL DEFAULT 0
);

CREATE TABLE IF NOT EXISTS session_items (
    id BIGSERIAL PRIMARY KEY,
    created_at TIMESTAMPTZ NOT NULL DEFAULT NOW(),
    response_id TEXT NOT NULL,
    session_id TEXT,
    model_slug TEXT,
    payload JSONB NOT NULL
);
