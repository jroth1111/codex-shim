
void FUN_100e3c670(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (*(long *)(lVar1 + lVar5 + 0x18) != 0) {
        _free(*(undefined8 *)(lVar1 + lVar5 + 0x20));
      }
      if (*(long *)(lVar1 + lVar5) != 0) {
        if (*(long *)(lVar1 + lVar5) == 1) {
          uVar2 = *(undefined8 *)(lVar1 + lVar5 + 8);
          puVar3 = *(undefined8 **)(lVar1 + lVar5 + 0x10);
          if ((code *)*puVar3 != (code *)0x0) {
            (*(code *)*puVar3)(uVar2);
          }
        }
        else {
          uVar2 = *(undefined8 *)(lVar1 + lVar5 + 8);
          puVar3 = *(undefined8 **)(lVar1 + lVar5 + 0x10);
          if ((code *)*puVar3 != (code *)0x0) {
            (*(code *)*puVar3)(uVar2);
          }
        }
        if (puVar3[1] != 0) {
          _free(uVar2);
        }
      }
      lVar5 = lVar5 + 0x30;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar1);
    return;
  }
  return;
}

