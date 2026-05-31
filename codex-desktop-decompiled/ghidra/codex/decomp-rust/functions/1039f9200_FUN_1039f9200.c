
void FUN_1039f9200(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar1 = param_1[1];
    lVar3 = param_1[2] + 1;
    lVar2 = lVar1;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      func_0x0001039fa198(lVar2);
      lVar2 = lVar2 + 0x48;
    }
    if (*param_1 != 0) {
      _free(lVar1);
    }
    if (param_1[3] != -0x7ffffffffffffffb) {
      func_0x0001039fa198();
    }
    if (param_1[0xc] != -0x7ffffffffffffffb) {
      func_0x0001039fa198();
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(param_1);
    return;
  }
  return;
}

