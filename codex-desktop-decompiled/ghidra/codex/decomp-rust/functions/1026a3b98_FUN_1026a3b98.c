
void FUN_1026a3b98(ulong *param_1)

{
  ulong uVar1;
  
  if (*param_1 == 0x8000000000000001) {
    return;
  }
  if ((*param_1 & 0x7fffffffffffffff) == 0) {
    uVar1 = param_1[3];
  }
  else {
    _free(param_1[1]);
    uVar1 = param_1[3];
  }
  if ((uVar1 & 0x7fffffffffffffff) == 0) {
    uVar1 = param_1[6];
  }
  else {
    _free(param_1[4]);
    uVar1 = param_1[6];
  }
  if ((uVar1 & 0x7fffffffffffffff) == 0) {
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
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[0xd]);
  return;
}

