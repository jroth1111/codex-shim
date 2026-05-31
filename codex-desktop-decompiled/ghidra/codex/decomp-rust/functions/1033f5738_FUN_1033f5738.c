
/* WARNING: Type propagation algorithm not settling */

void FUN_1033f5738(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 == -0x8000000000000000) {
    return;
  }
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) {
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) {
LAB_1033f57b0:
      _free(param_1[7]);
      lVar1 = param_1[0xb];
      lVar2 = param_1[0xc];
      lVar3 = lVar1;
      goto joined_r0x0001033f57bc;
    }
  }
  else {
    _free(param_1[4]);
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) goto LAB_1033f57b0;
  }
  lVar1 = param_1[0xb];
  lVar2 = param_1[0xc];
  lVar3 = lVar1;
joined_r0x0001033f57bc:
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    FUN_1033c1b54(lVar1);
    lVar1 = lVar1 + 0x270;
  }
  if (param_1[10] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar3);
  return;
}

