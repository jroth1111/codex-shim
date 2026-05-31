
void FUN_100e83f2c(long *param_1)

{
  long lVar1;
  
  if (*param_1 != -0x7fffffffffffffff) {
    lVar1 = *(long *)param_1[3];
    *(long *)param_1[3] = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
    }
    if (*param_1 != -0x8000000000000000 && *param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[1]);
      return;
    }
  }
  return;
}

