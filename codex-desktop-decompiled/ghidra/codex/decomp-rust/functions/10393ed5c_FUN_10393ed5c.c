
void FUN_10393ed5c(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar1 = *param_1;
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      uVar4 = param_1[3];
      if ((uVar4 & 3) != 1) {
        return;
      }
      puVar3 = (undefined8 *)(uVar4 - 1);
      uVar5 = *puVar3;
      puVar6 = *(undefined8 **)(uVar4 + 7);
      pcVar2 = (code *)*puVar6;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar5);
      }
      if (puVar6[1] != 0) {
        _free(uVar5);
      }
      goto LAB_10393ede0;
    }
    if ((lVar1 != 1) && (lVar1 == 2)) goto LAB_10393edb8;
  }
  else {
    if ((lVar1 == 3) || (lVar1 == 4)) {
LAB_10393edb8:
      if (param_1[1] != 0) {
        _free(param_1[2]);
      }
      if (param_1[4] == 0) {
        return;
      }
      puVar3 = (undefined8 *)param_1[5];
      goto LAB_10393ede0;
    }
    if (lVar1 == 5) {
      return;
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[2];
LAB_10393ede0:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar3);
  return;
}

