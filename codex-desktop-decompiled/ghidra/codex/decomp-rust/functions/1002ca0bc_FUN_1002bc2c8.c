
void FUN_1002bc2c8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  FUN_1002b6fe0(param_1 + 0xd8);
  if (*(int *)(param_1 + 0x128) != 1000000000) {
    lVar1 = **(long **)(param_1 + 0x110);
    **(long **)(param_1 + 0x110) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0b820b89976f4dd0E(param_1 + 0x110);
    }
  }
  lVar1 = **(long **)(param_1 + 0x130);
  **(long **)(param_1 + 0x130) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001002ca260(param_1 + 0x130);
  }
  lVar1 = **(long **)(param_1 + 0xb8);
  **(long **)(param_1 + 0xb8) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001002ca260();
  }
  plVar3 = *(long **)(param_1 + 200);
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7894b98b68b4ed45E();
    }
  }
  plVar3 = *(long **)(param_1 + 0x140);
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      lVar1 = *(long *)(param_1 + 0x140);
      FUN_1002bb1c0(lVar1 + 0x10);
      if (lVar1 != -1) {
        lVar2 = *(long *)(lVar1 + 8);
        *(long *)(lVar1 + 8) = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(lVar1);
          return;
        }
      }
      return;
    }
  }
  return;
}

