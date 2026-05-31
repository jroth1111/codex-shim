
void FUN_10603e844(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = *param_1;
  if ((uVar2 & 3) != 1) {
    return;
  }
  uVar3 = *(undefined8 *)(uVar2 - 1);
  puVar4 = *(undefined8 **)(uVar2 + 7);
  pcVar1 = (code *)*puVar4;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar3);
  }
  if (puVar4[1] != 0) {
    _free(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)((undefined8 *)(uVar2 - 1));
  return;
}

