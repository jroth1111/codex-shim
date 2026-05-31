
void FUN_1033ca110(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] != 0) {
    _free(param_1[4]);
  }
  if (param_1[6] != 0) {
    _free(param_1[7]);
  }
  lVar3 = param_1[9];
  if (lVar3 != -0x8000000000000000) {
    lVar1 = param_1[10];
    lVar2 = param_1[0xb];
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar4[-4] != 0) {
          _free(puVar4[-3]);
        }
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 6;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

