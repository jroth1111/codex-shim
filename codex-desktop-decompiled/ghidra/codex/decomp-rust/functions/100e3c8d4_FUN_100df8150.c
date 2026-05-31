
void FUN_100df8150(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[5] != 0) {
    (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
  }
  lVar1 = param_1[3];
  puVar3 = (undefined8 *)param_1[4];
  pcVar4 = (code *)*puVar3;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(lVar1);
  }
  if (puVar3[1] != 0) {
    _free(lVar1);
  }
  lVar1 = param_1[1];
  lVar5 = param_1[2];
  if (lVar5 != 0) {
    lVar6 = lVar1 + 0x28;
    do {
      uVar2 = *(undefined8 *)(lVar6 + -0x28);
      puVar3 = *(undefined8 **)(lVar6 + -0x20);
      pcVar4 = (code *)*puVar3;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar2);
      }
      if (puVar3[1] != 0) {
        _free(uVar2);
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

