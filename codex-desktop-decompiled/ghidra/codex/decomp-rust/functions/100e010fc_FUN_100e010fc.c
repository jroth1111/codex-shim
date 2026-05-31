
void FUN_100e010fc(long *param_1)

{
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) {
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) {
LAB_100e01164:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_1[7]);
      return;
    }
  }
  else {
    _free(param_1[4]);
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) goto LAB_100e01164;
  }
  return;
}

