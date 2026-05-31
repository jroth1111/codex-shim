
void FUN_100e08e20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_218 [488];
  
  _memcpy(auStack_218,param_1,0x1e8);
  *param_1 = 0;
  param_1[2] = 0x8000000000000000;
  param_1[0x2f] = 0x8000000000000001;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  FUN_102e405c0(param_1 + 0x3d,auStack_218);
  lVar1 = *(long *)param_1[0x3d];
  *(long *)param_1[0x3d] = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hafd5bc2c3ba3510bE(param_1 + 0x3d);
  }
  FUN_100e01de8(param_1);
  lVar1 = *(long *)param_1[0x3e];
  *(long *)param_1[0x3e] = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    lVar1 = param_1[0x3e];
    if ((*(long *)(lVar1 + 0x10) == 0) && (*(long *)(lVar1 + 0x18) != 0)) {
      _free(*(undefined8 *)(lVar1 + 0x20));
    }
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

