
void FUN_100d61dd0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((char)param_1[0x388] == '\0') {
    lVar3 = *(long *)param_1[5];
    *(long *)param_1[5] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd5db4639570db948E();
    }
  }
  else {
    if ((char)param_1[0x388] != '\x03') {
      return;
    }
    FUN_100cdba08(param_1 + 0xc);
    *(undefined1 *)((long)param_1 + 0x1c42) = 0;
    if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
      lVar3 = param_1[7];
      lVar1 = param_1[8];
      lVar2 = lVar3;
    }
    else {
      _free(param_1[10]);
      lVar3 = param_1[7];
      lVar1 = param_1[8];
      lVar2 = lVar3;
    }
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      FUN_100e17918(lVar3);
      if (-0x7fffffffffffffff < *(long *)(lVar3 + 0x90) && *(long *)(lVar3 + 0x90) != 0) {
        _free(*(undefined8 *)(lVar3 + 0x98));
      }
      lVar3 = lVar3 + 0xc0;
    }
    if (param_1[6] != 0) {
      _free(lVar2);
    }
    *(undefined1 *)((long)param_1 + 0x1c41) = 0;
    lVar3 = *(long *)param_1[5];
    *(long *)param_1[5] = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
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

