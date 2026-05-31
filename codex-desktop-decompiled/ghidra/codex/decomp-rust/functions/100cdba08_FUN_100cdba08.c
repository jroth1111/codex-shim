
void FUN_100cdba08(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      if (*param_1 == -0x7fffffffffffffff) {
        return;
      }
      if (*param_1 != -0x8000000000000000) {
        lVar2 = param_1[4];
        if ((lVar2 != 0) && (lVar2 * 9 != -0x11)) {
          _free(param_1[3] + lVar2 * -8 + -8);
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
    if (bVar1 != 3) {
      return;
    }
    FUN_100cdbc00(param_1 + 0x1f);
  }
  else if (bVar1 == 4) {
    func_0x000100dee68c(param_1 + 0x13);
  }
  else {
    if (bVar1 != 5) {
      return;
    }
    FUN_100cd25bc(param_1 + 0x22);
    FUN_100e10f30(param_1 + 0x13);
  }
  if ((*(byte *)((long)param_1 + 0x91) & 1) != 0) {
    lVar2 = param_1[0x13];
    if (lVar2 != -0x7fffffffffffffff) {
      if (lVar2 != -0x8000000000000000) {
        lVar2 = param_1[0x17];
        if ((lVar2 != 0) && (lVar2 * 9 != -0x11)) {
          _free(param_1[0x16] + lVar2 * -8 + -8);
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

