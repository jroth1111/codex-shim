
void FUN_100e00f0c(long *param_1)

{
  long lVar1;
  
  if (*param_1 != -0x8000000000000000) {
    lVar1 = param_1[4];
    if (lVar1 != 0 && lVar1 * 9 != -0x11) {
      _free(param_1[3] + lVar1 * -8 + -8);
    }
    func_0x000100cd7284(param_1);
  }
  if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[10]);
  return;
}

