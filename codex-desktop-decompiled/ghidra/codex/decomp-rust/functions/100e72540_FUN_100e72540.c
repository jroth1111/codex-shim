
void FUN_100e72540(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = param_1[3] - param_1[1];
    if (uVar2 != 0) {
      uVar2 = uVar2 / 0x30;
      puVar3 = (undefined8 *)(param_1[1] + 0x20);
      do {
        if (puVar3[-4] != 0) {
          _free(puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 6;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (param_1[2] != 0) {
      _free(lVar1);
    }
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    uVar2 = param_1[7] - param_1[5];
    if (uVar2 != 0) {
      uVar2 = uVar2 / 0x30;
      puVar3 = (undefined8 *)(param_1[5] + 0x20);
      do {
        if (puVar3[-4] != 0) {
          _free(puVar3[-3]);
        }
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 6;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (param_1[6] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar1);
      return;
    }
  }
  return;
}

