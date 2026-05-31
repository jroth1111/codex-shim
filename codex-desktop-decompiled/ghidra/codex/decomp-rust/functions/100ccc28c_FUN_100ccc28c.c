
void FUN_100ccc28c(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar6 = *param_1;
  if (lVar6 != -0x8000000000000000) {
    lVar2 = param_1[1];
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      lVar7 = 0;
      do {
        puVar1 = (ulong *)(lVar2 + lVar7 * 0x20);
        uVar4 = *puVar1;
        uVar5 = uVar4 ^ 0x8000000000000000;
        if (-1 < (long)uVar4) {
          uVar5 = 3;
        }
        if (uVar5 == 3) {
          if (uVar4 != 0) {
            uVar5 = puVar1[1];
LAB_100ccc2d4:
            _free(uVar5);
          }
        }
        else if (uVar5 == 1) {
          uVar5 = puVar1[2];
          uVar4 = puVar1[3];
          if (uVar4 != 0) {
            puVar8 = (undefined8 *)(uVar5 + 8);
            do {
              if (puVar8[-1] != 0) {
                _free(*puVar8);
              }
              puVar8 = puVar8 + 3;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          if (puVar1[1] != 0) goto LAB_100ccc2d4;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != lVar3);
    }
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar2);
      return;
    }
  }
  return;
}

