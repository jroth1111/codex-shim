
void FUN_100d8e670(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    uVar1 = uVar1 / 0x30;
    puVar2 = (undefined8 *)(param_1[1] + 0x20);
    do {
      if (puVar2[-4] != 0) {
        _free(puVar2[-3]);
      }
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 6;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*param_1);
    return;
  }
  return;
}

