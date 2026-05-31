
void FUN_10393dac0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[9] < -0x7ffffffffffffffe || param_1[9] == 0) {
    lVar1 = param_1[7];
    lVar2 = param_1[8];
    lVar3 = lVar1;
  }
  else {
    _free(param_1[10]);
    lVar1 = param_1[7];
    lVar2 = param_1[8];
    lVar3 = lVar1;
  }
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    func_0x00010393f224(lVar1);
    lVar1 = lVar1 + 0x218;
  }
  if (param_1[6] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar3);
    return;
  }
  return;
}

