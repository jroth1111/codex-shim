
void FUN_10196e78c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = **(long **)(param_1 + 0x180);
  **(long **)(param_1 + 0x180) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE(param_1 + 0x180);
  }
  lVar1 = **(long **)(param_1 + 0x188);
  **(long **)(param_1 + 0x188) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hfd28b7a9072c377dE(param_1 + 0x188);
  }
  lVar1 = **(long **)(param_1 + 400);
  **(long **)(param_1 + 400) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafcd01cf189cce36E(param_1 + 400);
  }
  if ((*(long *)(param_1 + 0x138) != -0x8000000000000000) && (*(long *)(param_1 + 0x138) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x140));
  }
  if ((*(long *)(param_1 + 0x150) != -0x8000000000000000) && (*(long *)(param_1 + 0x150) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x158));
  }
  if ((*(long *)(param_1 + 0x168) != -0x8000000000000000) && (*(long *)(param_1 + 0x168) != 0)) {
    _free(*(undefined8 *)(param_1 + 0x170));
  }
  lVar1 = **(long **)(param_1 + 0x198);
  **(long **)(param_1 + 0x198) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(param_1 + 0x198);
  }
  func_0x00010195c6e8(param_1);
  lVar1 = **(long **)(param_1 + 0x1a0);
  **(long **)(param_1 + 0x1a0) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h987b3be6d4c62721E(param_1 + 0x1a0);
  }
  lVar1 = **(long **)(param_1 + 0x1b0);
  **(long **)(param_1 + 0x1b0) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha0eafd060f29ef9bE(param_1 + 0x1b0);
  }
  lVar1 = **(long **)(param_1 + 0x1b8);
  **(long **)(param_1 + 0x1b8) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he70a45a7d8297075E(param_1 + 0x1b8);
  }
  FUN_10195f1a8(param_1 + 0x1c0);
  lVar1 = **(long **)(param_1 + 0x1d8);
  **(long **)(param_1 + 0x1d8) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(param_1 + 0x1d8);
  }
  FUN_101934644(param_1 + 0x1e0);
  plVar3 = *(long **)(param_1 + 0x218);
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(param_1 + 0x218);
    }
  }
  lVar1 = **(long **)(param_1 + 0x208);
  **(long **)(param_1 + 0x208) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h047a96813a8cb614E(param_1 + 0x208);
  }
  lVar1 = **(long **)(param_1 + 0x210);
  **(long **)(param_1 + 0x210) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    lVar1 = *(long *)(param_1 + 0x210);
    FUN_10195c880(lVar1 + 0x10);
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
  return;
}

