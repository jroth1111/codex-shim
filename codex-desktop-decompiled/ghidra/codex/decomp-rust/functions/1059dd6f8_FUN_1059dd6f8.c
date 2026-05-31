
void FUN_1059dd6f8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  pcVar3 = (code *)*puVar2;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(uVar1);
  }
  if (puVar2[1] != 0) {
    _free(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(param_1);
  return;
}

