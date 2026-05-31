
void FUN_102c48f00(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar6 = *(ulong *)(param_1 + 0x298);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar11 = uVar6;
  if (uVar3 <= uVar6) {
    uVar11 = uVar3;
  }
  iVar5 = _memcmp(*(undefined8 *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x20),uVar11);
  uVar11 = uVar6 - uVar3;
  if (iVar5 != 0) {
    uVar11 = (long)iVar5;
  }
  if (uVar11 == 0) {
    uVar6 = *(ulong *)(param_1 + 0x280);
    uVar3 = *(ulong *)(param_1 + 0x10);
    uVar11 = uVar6;
    if (uVar3 <= uVar6) {
      uVar11 = uVar3;
    }
    iVar5 = _memcmp(*(undefined8 *)(param_1 + 0x278),*(undefined8 *)(param_1 + 8),uVar11);
    uVar11 = uVar6 - uVar3;
    if (iVar5 != 0) {
      uVar11 = (long)iVar5;
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x778);
  uVar9 = *(ulong *)(param_1 + 0x508);
  uVar3 = uVar6;
  if (uVar9 <= uVar6) {
    uVar3 = uVar9;
  }
  iVar5 = _memcmp(*(undefined8 *)(param_1 + 0x770),*(undefined8 *)(param_1 + 0x500),uVar3);
  lVar7 = uVar6 - uVar9;
  if (iVar5 != 0) {
    lVar7 = (long)iVar5;
  }
  if (lVar7 == 0) {
    uVar6 = *(ulong *)(param_1 + 0x760);
    uVar9 = *(ulong *)(param_1 + 0x4f0);
    uVar3 = uVar6;
    if (uVar9 <= uVar6) {
      uVar3 = uVar9;
    }
    iVar5 = _memcmp(*(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x4e8),uVar3);
    lVar7 = uVar6 - uVar9;
    if (iVar5 != 0) {
      lVar7 = (long)iVar5;
    }
  }
  lVar10 = param_1 + ((long)uVar11 >> 0x3f) * -0x270;
  lVar12 = param_1 + ((long)~uVar11 >> 0x3f) * -0x270;
  lVar1 = 0x750;
  if (-1 < lVar7) {
    lVar1 = 0x4e0;
  }
  lVar1 = param_1 + lVar1;
  lVar13 = 0x4e0;
  if (-1 < lVar7) {
    lVar13 = 0x750;
  }
  param_1 = param_1 + lVar13;
  uVar3 = *(ulong *)(lVar1 + 0x28);
  uVar6 = *(ulong *)(lVar10 + 0x28);
  uVar11 = uVar3;
  if (uVar6 <= uVar3) {
    uVar11 = uVar6;
  }
  iVar5 = _memcmp(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar10 + 0x20),uVar11);
  lVar7 = uVar3 - uVar6;
  if (iVar5 != 0) {
    lVar7 = (long)iVar5;
  }
  if (lVar7 == 0) {
    uVar3 = *(ulong *)(lVar1 + 0x10);
    uVar6 = *(ulong *)(lVar10 + 0x10);
    uVar11 = uVar3;
    if (uVar6 <= uVar3) {
      uVar11 = uVar6;
    }
    iVar5 = _memcmp(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar10 + 8),uVar11);
    lVar7 = uVar3 - uVar6;
    if (iVar5 != 0) {
      lVar7 = (long)iVar5;
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar6 = *(ulong *)(lVar12 + 0x28);
  uVar11 = uVar3;
  if (uVar6 <= uVar3) {
    uVar11 = uVar6;
  }
  iVar5 = _memcmp(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(lVar12 + 0x20),uVar11);
  lVar13 = uVar3 - uVar6;
  if (iVar5 != 0) {
    lVar13 = (long)iVar5;
  }
  if (lVar13 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    uVar6 = *(ulong *)(lVar12 + 0x10);
    uVar11 = uVar3;
    if (uVar6 <= uVar3) {
      uVar11 = uVar6;
    }
    iVar5 = _memcmp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar12 + 8),uVar11);
    lVar13 = uVar3 - uVar6;
    if (iVar5 != 0) {
      lVar13 = (long)iVar5;
    }
  }
  lVar2 = lVar1;
  if (-1 < lVar13) {
    lVar2 = lVar12;
  }
  lVar8 = lVar12;
  lVar4 = lVar10;
  if (-1 < lVar7) {
    lVar8 = lVar1;
    lVar4 = lVar2;
  }
  lVar2 = param_1;
  if (-1 < lVar13) {
    lVar2 = lVar8;
  }
  uVar3 = *(ulong *)(lVar2 + 0x28);
  uVar6 = *(ulong *)(lVar4 + 0x28);
  uVar11 = uVar3;
  if (uVar6 <= uVar3) {
    uVar11 = uVar6;
  }
  iVar5 = _memcmp(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar4 + 0x20),uVar11);
  lVar8 = uVar3 - uVar6;
  if (iVar5 != 0) {
    lVar8 = (long)iVar5;
  }
  if (lVar8 == 0) {
    uVar3 = *(ulong *)(lVar2 + 0x10);
    uVar6 = *(ulong *)(lVar4 + 0x10);
    uVar11 = uVar3;
    if (uVar6 <= uVar3) {
      uVar11 = uVar6;
    }
    iVar5 = _memcmp(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar4 + 8),uVar11);
    lVar8 = uVar3 - uVar6;
    if (iVar5 != 0) {
      lVar8 = (long)iVar5;
    }
  }
  if (-1 < lVar13) {
    lVar12 = param_1;
  }
  if (-1 < lVar7) {
    lVar1 = lVar10;
  }
  lVar7 = lVar4;
  if (-1 < lVar8) {
    lVar7 = lVar2;
    lVar2 = lVar4;
  }
  _memcpy(param_2,lVar1,0x270);
  _memcpy(param_2 + 0x270,lVar2,0x270);
  _memcpy(param_2 + 0x4e0,lVar7,0x270);
                    /* WARNING: Could not recover jumptable at 0x000108aa9c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_10b61b3a8)(param_2 + 0x750,lVar12,0x270);
  return;
}

