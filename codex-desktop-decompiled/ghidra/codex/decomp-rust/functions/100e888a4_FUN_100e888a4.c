
void FUN_100e888a4(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  if ((char)param_1[0xb] == '\0') {
    lVar5 = *param_1;
    LOAcquire();
    lVar3 = *(long *)(lVar5 + 0x150);
    *(long *)(lVar5 + 0x150) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      *(ulong *)(lVar5 + 0x140) = *(ulong *)(lVar5 + 0x140) | 1;
      LORelease();
      __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar5 + 0x10);
    }
  }
  else {
    if ((char)param_1[0xb] != '\x03') {
      return;
    }
    if ((char)param_1[10] == '\x03') {
      lVar3 = param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      pcVar4 = (code *)*puVar2;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(lVar3);
      }
      if (puVar2[1] != 0) {
        _free(lVar3);
      }
    }
    lVar5 = *param_1;
    LOAcquire();
    lVar3 = *(long *)(lVar5 + 0x150);
    *(long *)(lVar5 + 0x150) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      *(ulong *)(lVar5 + 0x140) = *(ulong *)(lVar5 + 0x140) | 1;
      LORelease();
      __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar5 + 0x10);
    }
  }
  lVar3 = *(long *)*param_1;
  *(long *)*param_1 = lVar3 + -1;
  LORelease();
  if (lVar3 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  if (*param_1 != -1) {
    plVar1 = (long *)(*param_1 + 8);
    lVar3 = *plVar1;
    *plVar1 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)();
      return;
    }
  }
  return;
}

