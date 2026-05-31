
void FUN_100e32ed4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*param_1 == -0x8000000000000000) {
    return;
  }
  lVar2 = param_1[4];
  if (lVar2 != 0 && lVar2 * 9 != -0x11) {
    _free(param_1[3] + lVar2 * -8 + -8);
  }
  plVar1 = (long *)param_1[1];
  lVar2 = param_1[2] + 1;
  plVar3 = plVar1;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    if (*plVar3 != 0) {
      _free(plVar3[1]);
    }
    FUN_100de6690(plVar3 + 3);
    plVar3 = plVar3 + 0xd;
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar1);
    return;
  }
  return;
}

