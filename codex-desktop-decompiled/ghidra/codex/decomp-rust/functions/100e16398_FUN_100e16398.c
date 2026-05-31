
void FUN_100e16398(long *param_1)

{
  long lVar1;
  
  if (*param_1 == -0x8000000000000000 || *param_1 == 0) {
    if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) goto LAB_100e163cc;
LAB_100e16404:
    _free(param_1[4]);
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) goto LAB_100e1641c;
  }
  else {
    _free(param_1[1]);
    if (param_1[3] != -0x8000000000000000 && param_1[3] != 0) goto LAB_100e16404;
LAB_100e163cc:
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) {
LAB_100e1641c:
      _free(param_1[7]);
      lVar1 = param_1[9];
      goto joined_r0x000100e1642c;
    }
  }
  lVar1 = param_1[9];
joined_r0x000100e1642c:
  if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1[10]);
    return;
  }
  return;
}

