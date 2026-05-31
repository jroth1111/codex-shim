
void FUN_100e24de4(long *param_1)

{
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[6] != 0) {
    _free(param_1[7]);
  }
  if (param_1[9] != -0x7ffffffffffffffb) {
    FUN_100de6690();
  }
  if ((param_1[0x12] != -0x8000000000000000) && (param_1[0x12] != 0)) {
    _free(param_1[0x13]);
  }
  if ((param_1[0x15] != -0x8000000000000000) && (param_1[0x15] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[0x16]);
    return;
  }
  return;
}

