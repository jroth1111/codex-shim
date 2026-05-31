
void FUN_100d4ae54(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[0x388] == '\0') {
    lVar1 = *(long *)param_1[5];
    *(long *)param_1[5] = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd5db4639570db948E();
    }
  }
  else {
    if ((char)param_1[0x388] != '\x03') {
      return;
    }
    func_0x000100cbdd60(param_1 + 0xc);
    *(undefined1 *)((long)param_1 + 0x1c42) = 0;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    lVar1 = param_1[7];
    FUN_100cb0400(lVar1,param_1[8]);
    if (param_1[6] != 0) {
      _free(lVar1);
    }
    *(undefined1 *)((long)param_1 + 0x1c41) = 0;
    lVar1 = *(long *)param_1[5];
    *(long *)param_1[5] = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd5db4639570db948E();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[1]);
  return;
}

