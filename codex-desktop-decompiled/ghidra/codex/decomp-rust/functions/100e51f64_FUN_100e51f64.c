
void FUN_100e51f64(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (ulong *)(lVar2 + lVar6 * 0x20);
      uVar4 = *puVar1;
      uVar5 = uVar4 ^ 0x8000000000000000;
      if (-1 < (long)uVar4) {
        uVar5 = 3;
      }
      if (uVar5 == 3) {
        if (uVar4 != 0) {
          uVar5 = puVar1[1];
LAB_100e51fa0:
          _free(uVar5);
        }
      }
      else if (uVar5 == 1) {
        uVar5 = puVar1[2];
        uVar4 = puVar1[3];
        if (uVar4 != 0) {
          puVar7 = (undefined8 *)(uVar5 + 8);
          do {
            if (puVar7[-1] != 0) {
              _free(*puVar7);
            }
            puVar7 = puVar7 + 3;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (puVar1[1] != 0) goto LAB_100e51fa0;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar3);
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar2);
    return;
  }
  return;
}

