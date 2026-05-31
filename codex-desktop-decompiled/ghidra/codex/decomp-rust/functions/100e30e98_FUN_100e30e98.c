
void FUN_100e30e98(ulong *param_1)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = *param_1;
  lVar1 = uVar4 + 0x7fffffffffffffff;
  if (uVar4 < 0x8000000000000001) {
    lVar1 = 3;
  }
  if (lVar1 == 0) {
    plVar5 = (long *)param_1[0xd];
    if (plVar5 != (long *)0x0) {
      lVar1 = *plVar5;
      *plVar5 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
LAB_100e30f2c:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    puVar3 = param_1 + 4;
    if (*puVar3 == 0x8000000000000005) {
      return;
    }
  }
  else {
    if (lVar1 == 1) goto LAB_100e30f2c;
    if (lVar1 != 2) {
      if (uVar4 == 0x8000000000000000 || uVar4 == 0) {
        uVar4 = param_1[3];
      }
      else {
        _free(param_1[1]);
        uVar4 = param_1[3];
      }
      if (uVar4 != 0x8000000000000005) {
        FUN_100de6690();
      }
      plVar5 = (long *)param_1[0xd];
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar1 = *plVar5;
      *plVar5 = lVar1 + -1;
      LORelease();
      if (lVar1 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      plVar5 = (long *)param_1[0xd];
      if (plVar5 == (long *)0xffffffffffffffff) {
        return;
      }
      uVar4 = param_1[0xe];
      lVar1 = plVar5[1];
      plVar5[1] = lVar1 + -1;
      LORelease();
      if (lVar1 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      if (uVar4 + 0x17 < 8) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    plVar5 = (long *)param_1[10];
    puVar3 = param_1 + 1;
    if (plVar5 != (long *)0x0) {
      lVar1 = *plVar5;
      *plVar5 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 10);
      }
    }
  }
  uVar4 = *puVar3 ^ 0x8000000000000000;
  if (-1 < (long)*puVar3) {
    uVar4 = 5;
  }
  if (uVar4 < 3) {
    return;
  }
  if (uVar4 == 3) {
    if (puVar3[1] == 0) {
      return;
    }
    plVar5 = (long *)puVar3[2];
  }
  else if (uVar4 == 4) {
    plVar5 = (long *)puVar3[2];
    lVar1 = puVar3[3] + 1;
    plVar2 = plVar5;
    while (lVar1 = lVar1 + -1, lVar1 != 0) {
      FUN_100de6690(plVar2);
      plVar2 = plVar2 + 9;
    }
    if (puVar3[1] == 0) {
      return;
    }
  }
  else {
    uVar4 = puVar3[4];
    if ((uVar4 != 0) && (uVar4 * 9 != -0x11)) {
      _free(puVar3[3] + uVar4 * -8 + -8);
    }
    plVar5 = (long *)puVar3[1];
    lVar1 = puVar3[2] + 1;
    plVar2 = plVar5;
    while (lVar1 = lVar1 + -1, lVar1 != 0) {
      if (*plVar2 != 0) {
        _free(plVar2[1]);
      }
      FUN_100de6690(plVar2 + 3);
      plVar2 = plVar2 + 0xd;
    }
    if (*puVar3 == 0) {
      return;
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar5);
  return;
}

