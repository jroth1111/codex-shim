
void FUN_100cf32a0(long *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  
  bVar2 = *(byte *)(param_1 + 0x12);
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      if (*param_1 == -0x7fffffffffffffff) {
        return;
      }
      if (*param_1 != -0x8000000000000000) {
        lVar4 = param_1[4];
        if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
          _free(param_1[3] + lVar4 * -8 + -8);
        }
        func_0x000100cd7284(param_1);
      }
      if (param_1[9] == -0x8000000000000000) {
        return;
      }
      if (param_1[9] == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[10]);
      return;
    }
    if (bVar2 != 3) {
      return;
    }
    FUN_100cdbc00(param_1 + 0x1f);
    bVar2 = *(byte *)((long)param_1 + 0x91);
  }
  else {
    if (bVar2 == 4) {
      func_0x000100dee68c(param_1 + 0x13);
    }
    else {
      if (bVar2 != 5) {
        return;
      }
      FUN_100cd25bc(param_1 + 0x25);
      lVar1 = param_1[0x23];
      lVar4 = param_1[0x24] + 1;
      lVar3 = lVar1;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        func_0x000100e319f0(lVar3);
        lVar3 = lVar3 + 0x128;
      }
      if (param_1[0x22] != 0) {
        _free(lVar1);
      }
      if (param_1[0x16] != -0x8000000000000000) {
        lVar4 = param_1[0x1a];
        if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
          _free(param_1[0x19] + lVar4 * -8 + -8);
        }
        func_0x000100cd7284(param_1 + 0x16);
      }
      if (param_1[0x1f] != -0x8000000000000000 && param_1[0x1f] != 0) {
        _free(param_1[0x20]);
        *(undefined1 *)((long)param_1 + 0x92) = 0;
        bVar2 = *(byte *)((long)param_1 + 0x91);
        goto joined_r0x000100cf348c;
      }
    }
    *(undefined1 *)((long)param_1 + 0x92) = 0;
    bVar2 = *(byte *)((long)param_1 + 0x91);
  }
joined_r0x000100cf348c:
  if ((bVar2 & 1) != 0) {
    lVar4 = param_1[0x13];
    if (lVar4 != -0x7fffffffffffffff) {
      if (lVar4 != -0x8000000000000000) {
        lVar4 = param_1[0x17];
        if ((lVar4 != 0) && (lVar4 * 9 != -0x11)) {
          _free(param_1[0x16] + lVar4 * -8 + -8);
        }
        func_0x000100cd7284(param_1 + 0x13);
      }
      if ((param_1[0x1c] != -0x8000000000000000) && (param_1[0x1c] != 0)) {
        _free(param_1[0x1d]);
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x91) = 0;
  return;
}

