
void FUN_100e80dd4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong in_xzr;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0 && lVar4 * 9 != -0x11) {
    _free(*(long *)(param_1 + 0x18) + lVar4 * -8 + -8);
  }
  func_0x000100cd7284(param_1);
  func_0x000100dccb50(*(undefined8 *)(param_1 + 0x78));
  plVar3 = (long *)(param_1 + 0x48);
  lVar5 = *plVar3;
  LOAcquire();
  lVar4 = *(long *)(lVar5 + 0x1f0);
  *(long *)(lVar5 + 0x1f0) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    LOAcquire();
    lVar4 = *(long *)(lVar5 + 0x88);
    *(long *)(lVar5 + 0x88) = lVar4 + 1;
    lVar4 = func_0x000100fcb4b8(lVar5 + 0x80,lVar4);
    *(ulong *)(lVar4 + 0x6a10) = *(ulong *)(lVar4 + 0x6a10) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar5 + 0x110);
    LOAcquire();
    uVar2 = *puVar1;
    *puVar1 = uVar2 | 2;
    LORelease();
    if (uVar2 == 0) {
      lVar4 = *(long *)(lVar5 + 0x100);
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar5 + 0x108));
      }
    }
  }
  lVar4 = *(long *)*plVar3;
  *(long *)*plVar3 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h267372771bf64744E(plVar3);
  }
  lVar4 = **(long **)(param_1 + 0x50);
  **(long **)(param_1 + 0x50) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E();
  }
  lVar4 = **(long **)(param_1 + 0x60);
  **(long **)(param_1 + 0x60) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E();
  }
  plVar3 = *(long **)(param_1 + 0x70);
  lVar4 = *plVar3;
  *plVar3 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    lVar4 = *(long *)(param_1 + 0x70);
    if (*(char *)(lVar4 + 0x338) == '\x01') {
      FUN_103dae604(lVar4 + 0x10);
    }
    if (lVar4 != -1) {
      lVar5 = *(long *)(lVar4 + 8);
      *(long *)(lVar4 + 8) = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lVar4);
        return;
      }
    }
    return;
  }
  return;
}

