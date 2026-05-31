
void FUN_100e6a5ac(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*param_1 != 0) {
    _free(param_1[1]);
  }
  if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) {
    lVar3 = param_1[6];
  }
  else {
    _free(param_1[4]);
    lVar3 = param_1[6];
  }
  if (lVar3 != -0x8000000000000000) {
    lVar1 = param_1[7];
    lVar2 = param_1[8];
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 4;
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

