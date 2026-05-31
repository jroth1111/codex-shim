
void FUN_100e301f0(long *param_1)

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
  lVar1 = param_1[7];
  lVar2 = param_1[8];
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
  if (param_1[6] != 0) {
    _free(lVar1);
  }
  FUN_100d1d094(param_1 + 0x15);
  FUN_100d1d094(param_1 + 0x18);
  if (param_1[0xc] != -0x7ffffffffffffffb) {
    FUN_100de6690();
  }
  lVar1 = param_1[10];
  lVar2 = param_1[0xb];
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
  if (param_1[9] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

