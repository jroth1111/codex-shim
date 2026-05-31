
void FUN_100ce192c(long param_1)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  cVar1 = *(char *)(param_1 + 0x4a8);
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      uVar7 = *(undefined8 *)(param_1 + 0x530);
      puVar6 = *(undefined8 **)(param_1 + 0x538);
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar7);
      }
      if (puVar6[1] != 0) {
        _free(uVar7);
      }
      FUN_100de8a5c(param_1 + 0x4c0);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x4b0);
      puVar6 = *(undefined8 **)(param_1 + 0x4b8);
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar7);
      }
      if (puVar6[1] != 0) {
        _free(uVar7);
      }
    }
    plVar4 = *(long **)(param_1 + 0x4a0);
    if (plVar4 != (long *)0x0) {
      lVar2 = *plVar4;
      *plVar4 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000103e32944(param_1 + 0x4a0);
      }
    }
    *(undefined1 *)(param_1 + 0x4a9) = 0;
    return;
  }
  func_0x000100e271a0(param_1 + 0x350);
  func_0x000100e03ee4();
  lVar2 = **(long **)(param_1 + 0x330);
  **(long **)(param_1 + 0x330) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000104b0c1d4(param_1 + 0x330);
  }
  lVar2 = **(long **)(param_1 + 0x338);
  **(long **)(param_1 + 0x338) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000104b0c1d4(param_1 + 0x338);
  }
  plVar4 = *(long **)(param_1 + 0x340);
  lVar2 = *plVar4;
  *plVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbdd7f7838fe94bb7E((undefined8 *)(param_1 + 0x340))
    ;
  }
  plVar4 = (long *)(param_1 + 0x348);
  lVar5 = *plVar4;
  LOAcquire();
  lVar2 = *(long *)(lVar5 + 0x150);
  *(long *)(lVar5 + 0x150) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    *(ulong *)(lVar5 + 0x140) = *(ulong *)(lVar5 + 0x140) | 1;
    LORelease();
    __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar5 + 0x10);
  }
  lVar2 = *(long *)*plVar4;
  *(long *)*plVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 != 1) {
    return;
  }
  DataMemoryBarrier(2,1);
  if (*plVar4 != -1) {
    plVar4 = (long *)(*plVar4 + 8);
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)();
      return;
    }
  }
  return;
}

