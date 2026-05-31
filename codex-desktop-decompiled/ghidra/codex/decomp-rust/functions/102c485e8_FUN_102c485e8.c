
long FUN_102c485e8(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar10 = param_4 * 0x9c0;
    lVar11 = param_4 * 0x1110;
    param_1 = FUN_102c485e8(param_1,param_1 + lVar10,param_1 + lVar11,param_4);
    param_2 = FUN_102c485e8(param_2,param_2 + lVar10,param_2 + lVar11,param_4);
    param_3 = FUN_102c485e8(param_3,param_3 + lVar10,param_3 + lVar11,param_4);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(ulong *)(param_2 + 0x28);
  uVar12 = uVar9;
  if (uVar4 <= uVar9) {
    uVar12 = uVar4;
  }
  iVar8 = _memcmp(uVar1,uVar2,uVar12);
  uVar12 = uVar9 - uVar4;
  if (iVar8 != 0) {
    uVar12 = (long)iVar8;
  }
  if (uVar12 == 0) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    uVar6 = *(ulong *)(param_2 + 0x10);
    uVar12 = uVar5;
    if (uVar6 <= uVar5) {
      uVar12 = uVar6;
    }
    iVar8 = _memcmp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8),uVar12);
    uVar12 = uVar5 - uVar6;
    if (iVar8 != 0) {
      uVar12 = (long)iVar8;
    }
  }
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  uVar6 = *(ulong *)(param_3 + 0x28);
  uVar5 = uVar9;
  if (uVar6 <= uVar9) {
    uVar5 = uVar6;
  }
  iVar8 = _memcmp(uVar1,uVar3,uVar5);
  uVar9 = uVar9 - uVar6;
  if (iVar8 != 0) {
    uVar9 = (long)iVar8;
  }
  if (uVar9 == 0) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    uVar7 = *(ulong *)(param_3 + 0x10);
    uVar9 = uVar5;
    if (uVar7 <= uVar5) {
      uVar9 = uVar7;
    }
    iVar8 = _memcmp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_3 + 8),uVar9);
    uVar9 = uVar5 - uVar7;
    if (iVar8 != 0) {
      uVar9 = (long)iVar8;
    }
  }
  if (-1 < (long)(uVar9 ^ uVar12)) {
    uVar9 = uVar4;
    if (uVar6 <= uVar4) {
      uVar9 = uVar6;
    }
    iVar8 = _memcmp(uVar2,uVar3,uVar9);
    uVar9 = uVar4 - uVar6;
    if (iVar8 != 0) {
      uVar9 = (long)iVar8;
    }
    if (uVar9 == 0) {
      uVar4 = *(ulong *)(param_2 + 0x10);
      uVar5 = *(ulong *)(param_3 + 0x10);
      uVar9 = uVar4;
      if (uVar5 <= uVar4) {
        uVar9 = uVar5;
      }
      iVar8 = _memcmp(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_3 + 8),uVar9);
      uVar9 = uVar4 - uVar5;
      if (iVar8 != 0) {
        uVar9 = (long)iVar8;
      }
    }
    param_1 = param_3;
    if (-1 < (long)(uVar9 ^ uVar12)) {
      param_1 = param_2;
    }
  }
  return param_1;
}

