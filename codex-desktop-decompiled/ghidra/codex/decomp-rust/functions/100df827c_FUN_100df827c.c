
void FUN_100df827c(long *param_1)

{
  long lVar1;
  
  if (param_1[3] != -0x8000000000000000) {
    lVar1 = param_1[7];
    if (lVar1 != 0 && lVar1 * 9 != -0x11) {
      _free(param_1[6] + lVar1 * -8 + -8);
    }
    func_0x000100cd7284(param_1 + 3);
  }
  if (param_1[0xc] != -0x8000000000000000 && param_1[0xc] != 0) {
    _free(param_1[0xd]);
  }
  lVar1 = param_1[1];
  FUN_100cb0400(lVar1,param_1[2]);
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

