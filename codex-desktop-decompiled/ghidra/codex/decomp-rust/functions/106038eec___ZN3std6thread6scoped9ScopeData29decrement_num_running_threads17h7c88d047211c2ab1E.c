
void __ZN3std6thread6scoped9ScopeData29decrement_num_running_threads17h7c88d047211c2ab1E
               (long *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  lVar3 = param_1[1];
  param_1[1] = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    lVar3 = *param_1;
    pcVar1 = (char *)(lVar3 + 0x30);
    cVar2 = *pcVar1;
    *pcVar1 = '\x01';
    LORelease();
    if (cVar2 == -1) {
                    /* WARNING: Could not recover jumptable at 0x000108aa95c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__dispatch_semaphore_signal_10b61af50)(*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  return;
}

