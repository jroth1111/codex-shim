/*
 * entry: 108aaa034
 * name: _pthread_cond_signal
 * namespace: Global
 * cluster: subsystems/threading
 * confidence: medium
 * status: ok
 * inferred tags: threading, fileio, process
 * import evidence: <none>
 * string evidence: <none>
 * callers: 0
 * callees: 0
 * original file boundary: unknown
 */

void _pthread_cond_signal(void)

{
                    /* WARNING: Could not recover jumptable at 0x000108aaa03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_cond_signal_10b61b648)();
  return;
}

