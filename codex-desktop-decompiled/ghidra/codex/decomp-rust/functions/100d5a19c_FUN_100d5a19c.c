
void FUN_100d5a19c(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (*param_1 == 0) {
    if ((int)param_1[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa949c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__close_10b61ae88)(*(undefined4 *)((long)param_1 + 0xc));
      return;
    }
    uVar3 = param_1[2];
    if ((uVar3 & 3) == 1) {
      puVar2 = (undefined8 *)(uVar3 - 1);
      uVar5 = *puVar2;
      puVar4 = *(undefined8 **)(uVar3 + 7);
      pcVar1 = (code *)*puVar4;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar5);
      }
      if (puVar4[1] != 0) {
        _free(uVar5);
      }
LAB_100d5a1d8:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(puVar2);
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[2];
      pcVar1 = (code *)*puVar4;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(puVar2);
      }
      if (puVar4[1] != 0) goto LAB_100d5a1d8;
    }
  }
  return;
}

