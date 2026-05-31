
void FUN_100e4d1c8(long *param_1)

{
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) {
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) {
LAB_100e4d244:
      _free(param_1[7]);
      if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
        return;
      }
      goto LAB_100e4d260;
    }
  }
  else {
    _free(param_1[4]);
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) goto LAB_100e4d244;
  }
  if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
    return;
  }
LAB_100e4d260:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[10]);
  return;
}

