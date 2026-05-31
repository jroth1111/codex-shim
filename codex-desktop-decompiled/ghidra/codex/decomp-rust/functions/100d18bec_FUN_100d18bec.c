
void FUN_100d18bec(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  bVar1 = *(byte *)(param_1 + 0x8e);
  if (3 < bVar1) {
    if (bVar1 == 4) {
      func_0x000100d04c14(param_1 + 0x8f);
      if (param_1[0x185] == 0x11) {
        FUN_100ded628(param_1 + 0x186);
      }
      else {
        FUN_100de8594(param_1 + 0x185);
      }
    }
    else {
      if (bVar1 != 5) {
        return;
      }
      func_0x000100d2f3dc(param_1 + 0x8f);
    }
    goto LAB_100d18d24;
  }
  if (bVar1 == 0) {
    func_0x000100d2f3dc(param_1 + 0x11);
    if (*param_1 != -0x8000000000000000) {
      lVar4 = param_1[4];
      if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
        _free(param_1[3] + lVar4 * -8 + -8);
      }
      func_0x000100cd7284(param_1);
    }
    func_0x000100e4bffc(param_1 + 0xb);
    plVar2 = (long *)param_1[0x12];
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      *plVar2 = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    plVar2 = (long *)param_1[0x14];
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar4 = *plVar2;
    *plVar2 = lVar4 + -1;
    LORelease();
    if (lVar4 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    lVar4 = param_1[0x14];
    if (lVar4 != -1) {
      lVar3 = param_1[0x15];
      plVar2 = (long *)(lVar4 + 8);
      lVar4 = *plVar2;
      *plVar2 = lVar4 + -1;
      LORelease();
      if ((lVar4 == 1) && (DataMemoryBarrier(2,1), 7 < lVar3 + 0x17U)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)();
        return;
      }
    }
    return;
  }
  if (bVar1 != 3) {
    return;
  }
  if ((char)param_1[0x9f] == '\x03') {
    plVar2 = param_1 + 0x9e;
LAB_100d18d18:
    func_0x000100d2f3dc(plVar2);
  }
  else if ((char)param_1[0x9f] == '\0') {
    plVar2 = param_1 + 0x9d;
    goto LAB_100d18d18;
  }
  FUN_100de8a5c(param_1 + 0x8f);
LAB_100d18d24:
  if (param_1[0x16] != -0x8000000000000000) {
    lVar4 = param_1[0x1a];
    if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
      _free(param_1[0x19] + lVar4 * -8 + -8);
    }
    func_0x000100cd7284(param_1 + 0x16);
  }
  func_0x000100e4bffc(param_1 + 0x21);
  if (((*(byte *)((long)param_1 + 0x471) & 1) != 0) &&
     (plVar2 = (long *)param_1[0x28], plVar2 != (long *)0x0)) {
    lVar4 = *plVar2;
    *plVar2 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x28);
    }
  }
  plVar2 = (long *)param_1[0x2a];
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    *plVar2 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0x2a);
    }
  }
  *(undefined1 *)((long)param_1 + 0x471) = 0;
  return;
}

