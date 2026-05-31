
void FUN_100e16d10(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) {
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) {
LAB_100e16d6c:
      _free(param_1[7]);
      lVar1 = param_1[1];
      lVar2 = param_1[2];
      goto joined_r0x000100e16d4c;
    }
  }
  else {
    _free(param_1[4]);
    if (param_1[6] != -0x8000000000000000 && param_1[6] != 0) goto LAB_100e16d6c;
  }
  lVar1 = param_1[1];
  lVar2 = param_1[2];
joined_r0x000100e16d4c:
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x20);
    do {
      if (puVar3[-4] != 0) {
        _free(puVar3[-3]);
      }
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 6;
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

