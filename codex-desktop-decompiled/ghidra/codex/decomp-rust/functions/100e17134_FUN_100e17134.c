
void FUN_100e17134(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
    lVar1 = param_1[6];
  }
  else {
    _free(param_1[10]);
    lVar1 = param_1[6];
  }
  if (lVar1 != 0) {
    _free(param_1[7]);
  }
  if ((param_1[0xc] & 0x7fffffffffffffffU) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[0xd]);
  return;
}

