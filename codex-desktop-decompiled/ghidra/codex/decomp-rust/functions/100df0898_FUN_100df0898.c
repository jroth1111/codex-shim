
/* WARNING: Possible PIC construction at 0x000100df08f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100df08fc) */

void FUN_100df0898(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  cVar3 = *(char *)(param_1 + 0x60);
  if (cVar3 == '\0') {
    lVar4 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h11322f4fd33ab6c2E();
    }
    puVar5 = (undefined8 *)(param_1 + 0x28);
  }
  else {
    if (cVar3 == '\x03') {
      func_0x000100ddf394(param_1 + 0x78);
    }
    else {
      if (cVar3 != '\x04') {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      unaff_x20 = *(undefined8 **)(param_1 + 0x70);
      if ((code *)*unaff_x20 != (code *)0x0) {
        (*(code *)*unaff_x20)(uVar2);
      }
      if (unaff_x20[1] != 0) {
        _free(uVar2);
      }
    }
    puVar5 = (undefined8 *)(param_1 + 0x50);
    unaff_x30 = 0x100df08fc;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar4 = *(long *)*puVar5;
  *(long *)*puVar5 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbdd7f7838fe94bb7E(puVar5);
  }
  plVar7 = puVar5 + 1;
  lVar6 = *plVar7;
  LOAcquire();
  lVar4 = *(long *)(lVar6 + 0x150);
  *(long *)(lVar6 + 0x150) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    *(ulong *)(lVar6 + 0x140) = *(ulong *)(lVar6 + 0x140) | 1;
    LORelease();
    __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar6 + 0x10);
  }
  lVar4 = *(long *)*plVar7;
  *(long *)*plVar7 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    if (*plVar7 != -1) {
      plVar7 = (long *)(*plVar7 + 8);
      lVar4 = *plVar7;
      *plVar7 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)();
        return;
      }
    }
    return;
  }
  return;
}

