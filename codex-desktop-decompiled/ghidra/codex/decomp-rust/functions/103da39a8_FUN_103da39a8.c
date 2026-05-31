
void FUN_103da39a8(long *param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = (char)param_1[0xf];
  if (cVar1 == '\0') {
    lVar2 = *(long *)param_1[7];
    *(long *)param_1[7] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    lVar2 = *(long *)param_1[9];
    *(long *)param_1[9] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
    if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
      lVar2 = param_1[3];
    }
    else {
      _free(param_1[1]);
      lVar2 = param_1[3];
    }
    if ((lVar2 != -0x8000000000000000) && (lVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[4]);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      func_0x000103d9a37c(param_1 + 0x17);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      func_0x000103d9c628(param_1 + 0x10);
    }
    if ((((*(byte *)((long)param_1 + 0x79) & 1) != 0) && (param_1[0xc] != -0x8000000000000000)) &&
       (param_1[0xc] != 0)) {
      _free(param_1[0xd]);
    }
    *(undefined1 *)((long)param_1 + 0x79) = 0;
    if ((((*(byte *)((long)param_1 + 0x7a) & 1) != 0) && (param_1[0x10] != -0x8000000000000000)) &&
       (param_1[0x10] != 0)) {
      _free(param_1[0x11]);
    }
    *(undefined1 *)((long)param_1 + 0x7a) = 0;
    if ((*(byte *)((long)param_1 + 0x7b) & 1) != 0) {
      lVar2 = *(long *)param_1[0x15];
      *(long *)param_1[0x15] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    *(undefined1 *)((long)param_1 + 0x7b) = 0;
    if ((*(byte *)((long)param_1 + 0x7c) & 1) != 0) {
      lVar2 = *(long *)param_1[0x13];
      *(long *)param_1[0x13] = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    *(undefined1 *)((long)param_1 + 0x7c) = 0;
  }
  return;
}

