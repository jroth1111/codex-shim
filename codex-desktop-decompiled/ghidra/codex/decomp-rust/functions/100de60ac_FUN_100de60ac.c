
void FUN_100de60ac(long *param_1)

{
  long lVar1;
  
  if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
    if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) goto LAB_100de60e0;
LAB_100de6118:
    _free(param_1[4]);
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) goto LAB_100de6130;
  }
  else {
    _free(param_1[1]);
    if (param_1[3] != -0x8000000000000000 && param_1[3] != 0) goto LAB_100de6118;
LAB_100de60e0:
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) {
LAB_100de6130:
      _free(param_1[7]);
      lVar1 = param_1[9];
      goto joined_r0x000100de6140;
    }
  }
  lVar1 = param_1[9];
joined_r0x000100de6140:
  if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[10]);
    return;
  }
  return;
}

