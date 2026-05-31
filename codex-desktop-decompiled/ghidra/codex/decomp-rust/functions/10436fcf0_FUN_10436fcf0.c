
void FUN_10436fcf0(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_1 & 3) != 1) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 - 1);
  puVar3 = *(undefined8 **)(param_1 + 7);
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    _free(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)((undefined8 *)(param_1 - 1));
  return;
}

