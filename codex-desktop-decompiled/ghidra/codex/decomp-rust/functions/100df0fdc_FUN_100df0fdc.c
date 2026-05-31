
void FUN_100df0fdc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  lVar1 = param_1[4];
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (param_1[3] != 0) {
    _free(lVar1);
  }
  if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1[7]);
  return;
}

