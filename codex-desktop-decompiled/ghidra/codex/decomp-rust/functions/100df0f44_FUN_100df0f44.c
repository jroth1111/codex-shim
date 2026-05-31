
void FUN_100df0f44(long *param_1)

{
  if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
    if (param_1[3] != -0x8000000000000000 && param_1[3] != 0) {
LAB_100df0fb0:
      _free(param_1[4]);
      if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) {
        return;
      }
      goto LAB_100df0fcc;
    }
  }
  else {
    _free(param_1[1]);
    if (param_1[3] != -0x8000000000000000 && param_1[3] != 0) goto LAB_100df0fb0;
  }
  if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) {
    return;
  }
LAB_100df0fcc:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[7]);
  return;
}

