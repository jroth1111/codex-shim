
void FUN_105aae060(byte *param_1)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  bVar1 = *param_1;
  if (1 < bVar1 - 2 && bVar1 != 0) {
    if (bVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000105aae0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 8) + 0x20))
                (param_1 + 0x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      return;
    }
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 3) == 1) {
      uVar4 = *(undefined8 *)(uVar3 - 1);
      puVar5 = *(undefined8 **)(uVar3 + 7);
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar4);
      }
      if (puVar5[1] != 0) {
        _free(uVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)((undefined8 *)(uVar3 - 1));
      return;
    }
  }
  return;
}

