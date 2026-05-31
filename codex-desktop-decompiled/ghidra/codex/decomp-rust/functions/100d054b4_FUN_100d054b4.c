
void FUN_100d054b4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  if (lVar3 != -0x8000000000000000) {
    lVar2 = param_1[1];
    FUN_100ca97fc(lVar2,param_1[2]);
    if (lVar3 != 0) {
      _free(lVar2);
    }
  }
  if (param_1[0xc] != -0x7ffffffffffffffb) {
    FUN_100de6690();
  }
  if (param_1[3] == -0x8000000000000000) {
    return;
  }
  lVar3 = param_1[7];
  if ((lVar3 != 0) && (lVar3 * 9 != -0x11)) {
    _free(param_1[6] + lVar3 * -8 + -8);
  }
  plVar1 = (long *)param_1[4];
  lVar3 = param_1[5] + 1;
  plVar4 = plVar1;
  while (lVar3 = lVar3 + -1, lVar3 != 0) {
    if (*plVar4 != 0) {
      _free(plVar4[1]);
    }
    FUN_100de6690(plVar4 + 3);
    plVar4 = plVar4 + 0xd;
  }
  if (param_1[3] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar1);
    return;
  }
  return;
}

