
void FUN_100e263d4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)*param_1;
  *(long *)*param_1 = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(param_1);
  }
  lVar1 = *(long *)param_1[1];
  *(long *)param_1[1] = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
  }
  lVar1 = *(long *)param_1[2];
  *(long *)param_1[2] = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E();
  }
  FUN_100e1c748(param_1 + 3);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (param_1 + 8);
  lVar1 = *(long *)param_1[8];
  *(long *)param_1[8] = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    lVar1 = param_1[8];
    FUN_10611d000(lVar1 + 0x30);
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

