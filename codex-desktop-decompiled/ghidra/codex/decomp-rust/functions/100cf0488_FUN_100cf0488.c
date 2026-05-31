
void FUN_100cf0488(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  if (*param_1 == 2) {
    puVar6 = (ulong *)param_1[1];
    if (*puVar6 == 1) {
      uVar8 = puVar6[1];
      if ((uVar8 & 3) != 1) goto LAB_100cf0570;
      puVar7 = (undefined8 *)(uVar8 - 1);
      uVar9 = *puVar7;
      puVar10 = *(undefined8 **)(uVar8 + 7);
      pcVar5 = (code *)*puVar10;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar9);
      }
      if (puVar10[1] != 0) {
        _free(uVar9);
      }
    }
    else {
      if ((*puVar6 != 0) || (puVar6[2] == 0)) goto LAB_100cf0570;
      puVar7 = (undefined8 *)puVar6[1];
    }
    _free(puVar7);
  }
  else if (*param_1 == 0) {
    if (param_1[1] == 0) {
      return;
    }
    puVar6 = (ulong *)param_1[2];
  }
  else {
    puVar6 = (ulong *)param_1[2];
    puVar1 = puVar6;
    for (lVar2 = param_1[3]; lVar2 != 0; lVar2 = lVar2 + -1) {
      uVar3 = *puVar1;
      uVar8 = uVar3 ^ 0x8000000000000000;
      if (-1 < (long)uVar3) {
        uVar8 = 1;
      }
      if ((uVar8 == 0) || (uVar8 != 1)) {
        if (puVar1[1] != 0) {
          lVar4 = 0x10;
          goto LAB_100cf04e8;
        }
      }
      else if (uVar3 != 0) {
        lVar4 = 8;
LAB_100cf04e8:
        _free(*(undefined8 *)((long)puVar1 + lVar4));
      }
      puVar1 = puVar1 + 4;
    }
    if (param_1[1] == 0) {
      return;
    }
  }
LAB_100cf0570:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar6);
  return;
}

