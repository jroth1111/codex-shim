/*
 * entry: 108aaa334
 * name: _semaphore_signal
 * namespace: Global
 * cluster: subsystems/process
 * confidence: medium
 * status: ok
 * inferred tags: process, threading
 * import evidence: <none>
 * string evidence: <none>
 * callers: 0
 * callees: 0
 * original file boundary: unknown
 */

void _semaphore_signal(void)

{
                    /* WARNING: Could not recover jumptable at 0x000108aaa33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__semaphore_signal_10b61b848)();
  return;
}

