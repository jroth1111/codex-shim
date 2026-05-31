
void FUN_100d5661c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)((long)param_1 + 0xa51) != '\0') {
    if (*(char *)((long)param_1 + 0xa51) == '\x03') {
      FUN_100ce0e38(param_1 + 0x5b);
      FUN_100e4119c(param_1 + 0x22);
      *(undefined2 *)((long)param_1 + 0xa52) = 0;
      *(undefined1 *)((long)param_1 + 0xa54) = 0;
    }
    return;
  }
  plVar2 = (long *)param_1[0x1e];
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E();
    }
  }
  plVar2 = (long *)param_1[0x20];
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *plVar2 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(param_1 + 0x20);
    }
  }
  if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
    if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) goto LAB_100e3eb2c;
LAB_100e3eb64:
    _free(param_1[4]);
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) goto LAB_100e3eb7c;
  }
  else {
    _free(param_1[1]);
    if (param_1[3] != -0x8000000000000000 && param_1[3] != 0) goto LAB_100e3eb64;
LAB_100e3eb2c:
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) {
LAB_100e3eb7c:
      _free(param_1[7]);
      lVar1 = param_1[9];
      goto joined_r0x000100e3eb8c;
    }
  }
  lVar1 = param_1[9];
joined_r0x000100e3eb8c:
  if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
    _free(param_1[10]);
  }
  if ((param_1[0xc] != -0x8000000000000000) && (param_1[0xc] != 0)) {
    _free(param_1[0xd]);
  }
  if ((param_1[0xf] != -0x8000000000000000) && (param_1[0xf] != 0)) {
    _free(param_1[0x10]);
  }
  if ((param_1[0x12] != -0x8000000000000000) && (param_1[0x12] != 0)) {
    _free(param_1[0x13]);
  }
  if ((param_1[0x15] != -0x8000000000000000) && (param_1[0x15] != 0)) {
    _free(param_1[0x16]);
  }
  if ((param_1[0x18] != -0x8000000000000000) && (param_1[0x18] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[0x19]);
    return;
  }
  return;
}

