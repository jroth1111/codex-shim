
void FUN_1039ce2a4(long *param_1)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if ((param_1[6] & 0x7fffffffffffffffU) == 0) {
    uVar1 = param_1[9];
  }
  else {
    _free(param_1[7]);
    uVar1 = param_1[9];
  }
  if ((uVar1 & 0x7fffffffffffffff) == 0) {
    uVar1 = param_1[0xc];
  }
  else {
    _free(param_1[10]);
    uVar1 = param_1[0xc];
  }
  if ((uVar1 & 0x7fffffffffffffff) == 0) {
    uVar1 = param_1[0xf];
  }
  else {
    _free(param_1[0xd]);
    uVar1 = param_1[0xf];
  }
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[0x10]);
    return;
  }
  return;
}

