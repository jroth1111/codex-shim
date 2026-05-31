
void FUN_103d9c848(ulong *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar3 = *param_1;
  lVar1 = uVar3 + 0x7fffffffffffffff;
  if (uVar3 < 0x8000000000000001) {
    lVar1 = 1;
  }
  if (lVar1 == 0) {
    uVar3 = param_1[2];
    if (uVar3 != 0) {
      puVar4 = (undefined8 *)param_1[3];
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar3);
      }
      if (puVar4[1] != 0) goto LAB_103d9c8bc;
    }
  }
  else if ((lVar1 == 1) && (FUN_103d996fc(param_1 + 3), (uVar3 & 0x7fffffffffffffff) != 0)) {
    uVar3 = param_1[1];
LAB_103d9c8bc:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(uVar3);
    return;
  }
  return;
}

