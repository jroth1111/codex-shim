
void FUN_100e48b38(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[0x5e] != '\0') {
    if ((char)param_1[0x5e] == '\x03') {
      func_0x000100d47d78(param_1 + 0x42);
      *(undefined1 *)((long)param_1 + 0x2f1) = 0;
      if (param_1[0x24] != 0) {
        _free(param_1[0x25]);
      }
      if ((param_1[0x2d] != -0x8000000000000000) && (param_1[0x2d] != 0)) {
        _free(param_1[0x2e]);
      }
      if (param_1[0x27] != 0) {
        _free(param_1[0x28]);
      }
      if (param_1[0x2a] != 0) {
        _free(param_1[0x2b]);
      }
      if ((param_1[0x30] != -0x8000000000000000) && (param_1[0x30] != 0)) {
        _free(param_1[0x31]);
      }
      *(undefined4 *)((long)param_1 + 0x2f2) = 0;
    }
    return;
  }
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[0xc] == -0x8000000000000000 || param_1[0xc] == 0) {
    lVar1 = param_1[6];
  }
  else {
    _free(param_1[0xd]);
    lVar1 = param_1[6];
  }
  if (lVar1 != 0) {
    _free(param_1[7]);
  }
  if (param_1[9] != 0) {
    _free(param_1[10]);
  }
  if ((param_1[0xf] != -0x8000000000000000) && (param_1[0xf] != 0)) {
    _free(param_1[0x10]);
  }
  if (param_1[0x12] != -0x8000000000000000) {
    if (param_1[0x12] != 0) {
      _free(param_1[0x13]);
    }
    if (param_1[0x15] != 0) {
      _free(param_1[0x16]);
    }
    if ((param_1[0x18] != -0x8000000000000000) && (param_1[0x18] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[0x19]);
      return;
    }
  }
  return;
}

