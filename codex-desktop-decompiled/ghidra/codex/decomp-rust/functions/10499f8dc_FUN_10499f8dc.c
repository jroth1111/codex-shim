
void FUN_10499f8dc(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  
  lVar3 = param_1[8];
  if (lVar3 != 0) {
    lVar4 = param_1[9];
    if (param_1[0xb] - lVar4 != 0) {
      uVar6 = (ulong)(param_1[0xb] - lVar4) / 0x38;
      do {
        FUN_1049a2ce4(lVar4);
        lVar4 = lVar4 + 0x38;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_1[10] != 0) {
      _free(lVar3);
    }
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    puVar5 = (ulong *)param_1[1];
    if (param_1[3] - (long)puVar5 != 0) {
      uVar6 = (ulong)(param_1[3] - (long)puVar5) >> 5;
      do {
        uVar1 = *puVar5;
        uVar2 = uVar1 ^ 0x8000000000000000;
        if (-1 < (long)uVar1) {
          uVar2 = 1;
        }
        if ((uVar2 == 0) || (uVar2 != 1)) {
          if (puVar5[1] != 0) {
            lVar4 = 0x10;
            goto LAB_10499f964;
          }
        }
        else if (uVar1 != 0) {
          lVar4 = 8;
LAB_10499f964:
          _free(*(undefined8 *)((long)puVar5 + lVar4));
        }
        puVar5 = puVar5 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_1[2] != 0) {
      _free(lVar3);
    }
  }
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    puVar5 = (ulong *)param_1[5];
    if (param_1[7] - (long)puVar5 != 0) {
      uVar6 = (ulong)(param_1[7] - (long)puVar5) >> 5;
      do {
        uVar1 = *puVar5;
        uVar2 = uVar1 ^ 0x8000000000000000;
        if (-1 < (long)uVar1) {
          uVar2 = 1;
        }
        if ((uVar2 == 0) || (uVar2 != 1)) {
          if (puVar5[1] != 0) {
            lVar4 = 0x10;
            goto LAB_10499f9e0;
          }
        }
        else if (uVar1 != 0) {
          lVar4 = 8;
LAB_10499f9e0:
          _free(*(undefined8 *)((long)puVar5 + lVar4));
        }
        puVar5 = puVar5 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_1[6] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar3);
      return;
    }
  }
  return;
}

