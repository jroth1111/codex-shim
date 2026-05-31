
void FUN_100d85e10(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar2 = param_1[3] - param_1[1];
  if (uVar2 != 0) {
    uVar2 = uVar2 / 0x88;
    puVar3 = (undefined8 *)(param_1[1] + 0x30);
    do {
      if (puVar3[-4] == -0x8000000000000000 || puVar3[-4] == 0) {
        if (puVar3[-1] == -0x8000000000000000 || puVar3[-1] == 0) goto LAB_100d85e7c;
LAB_100d85eb4:
        _free(*puVar3);
        if (puVar3[2] != -0x8000000000000000 && puVar3[2] != 0) goto LAB_100d85ecc;
LAB_100d85e8c:
        lVar1 = puVar3[5];
      }
      else {
        _free(puVar3[-3]);
        if (puVar3[-1] != -0x8000000000000000 && puVar3[-1] != 0) goto LAB_100d85eb4;
LAB_100d85e7c:
        if (puVar3[2] == -0x8000000000000000 || puVar3[2] == 0) goto LAB_100d85e8c;
LAB_100d85ecc:
        _free(puVar3[3]);
        lVar1 = puVar3[5];
      }
      if ((lVar1 != -0x8000000000000000) && (lVar1 != 0)) {
        _free(puVar3[6]);
      }
      puVar3 = puVar3 + 0x11;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*param_1);
    return;
  }
  return;
}

