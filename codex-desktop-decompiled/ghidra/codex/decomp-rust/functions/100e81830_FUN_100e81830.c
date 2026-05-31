
void FUN_100e81830(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    do {
      if (puVar3[-4] != 0) {
        _free(puVar3[-3]);
      }
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      if (puVar3[2] != 0) {
        _free(puVar3[3]);
      }
      puVar3 = puVar3 + 9;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

