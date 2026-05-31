
void FUN_100e5e2cc(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[0x44] != '\0') {
    if ((char)param_1[0x44] == '\x03') {
      FUN_100d594b0(param_1 + 0x28);
      *(undefined1 *)((long)param_1 + 0x223) = 0;
      *(undefined1 *)((long)param_1 + 0x221) = 0;
      if (param_1[0x17] != 0) {
        _free(param_1[0x18]);
      }
      if ((param_1[0x20] != -0x8000000000000000) && (param_1[0x20] != 0)) {
        _free(param_1[0x21]);
      }
      if (param_1[0x1a] != 0) {
        _free(param_1[0x1b]);
      }
      if (param_1[0x1d] != 0) {
        _free(param_1[0x1e]);
      }
      *(undefined1 *)((long)param_1 + 0x222) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[10]);
    return;
  }
  return;
}

