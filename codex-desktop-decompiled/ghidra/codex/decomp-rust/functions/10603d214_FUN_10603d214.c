
void FUN_10603d214(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*param_1 == -0x8000000000000000) {
    uVar3 = param_1[1];
    if ((uVar3 & 3) != 1) {
      return;
    }
    puVar2 = (undefined8 *)(uVar3 - 1);
    uVar4 = *puVar2;
    puVar5 = *(undefined8 **)(uVar3 + 7);
    pcVar1 = (code *)*puVar5;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar4);
    }
    if (puVar5[1] != 0) {
      _free(uVar4);
    }
  }
  else {
    if (*param_1 == 0) {
      return;
    }
    puVar2 = (undefined8 *)param_1[1];
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar2);
  return;
}

