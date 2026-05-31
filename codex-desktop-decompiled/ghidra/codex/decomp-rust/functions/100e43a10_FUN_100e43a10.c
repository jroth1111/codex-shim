
void FUN_100e43a10(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  FUN_100cdf624(param_1 + 0xc);
  if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) {
    lVar1 = param_1[9];
  }
  else {
    _free(param_1[7]);
    lVar1 = param_1[9];
  }
  if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[10]);
    return;
  }
  return;
}

