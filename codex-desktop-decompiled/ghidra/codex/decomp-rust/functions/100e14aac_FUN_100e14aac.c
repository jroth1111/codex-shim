
void FUN_100e14aac(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1 + 1;
  lVar2 = *param_1;
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (*plVar1 == 0) {
        return;
      }
      lVar2 = param_1[2];
    }
    else {
      if (*plVar1 != 0) {
        _free(param_1[2]);
      }
      if (param_1[4] != 0) {
        _free(param_1[5]);
      }
      if (param_1[7] != -0x8000000000000000) {
        lVar2 = param_1[0xb];
        if ((lVar2 != 0) && (lVar2 * 9 != -0x11)) {
          _free(param_1[10] + lVar2 * -8 + -8);
        }
        func_0x000100cd7284(param_1 + 7);
      }
      if (param_1[0x10] < -0x7ffffffffffffffe) {
        return;
      }
      if (param_1[0x10] == 0) {
        return;
      }
      lVar2 = param_1[0x11];
    }
  }
  else if (lVar2 == 2) {
    if (param_1[0x14] != -0x8000000000000000) {
      lVar2 = param_1[0x18];
      if (lVar2 != 0 && lVar2 * 9 != -0x11) {
        _free(param_1[0x17] + lVar2 * -8 + -8);
      }
      func_0x000100cd7284(param_1 + 0x14);
    }
    func_0x000100e0dab4(plVar1);
    if (param_1[0x1d] < -0x7ffffffffffffffe || param_1[0x1d] == 0) {
      return;
    }
    lVar2 = param_1[0x1e];
  }
  else {
    func_0x000100dfdd9c();
    if (param_1[0x1d] < -0x7ffffffffffffffe || param_1[0x1d] == 0) {
      return;
    }
    lVar2 = param_1[0x1e];
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar2);
  return;
}

