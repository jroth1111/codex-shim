
long FUN_102c483a8(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar10 = param_4 * 0x9c0;
    lVar11 = param_4 * 0x1110;
    param_1 = FUN_102c483a8(param_1,param_1 + lVar10,param_1 + lVar11,param_4);
    param_2 = FUN_102c483a8(param_2,param_2 + lVar10,param_2 + lVar11,param_4);
    param_3 = FUN_102c483a8(param_3,param_3 + lVar10,param_3 + lVar11,param_4);
  }
  bVar4 = *(byte *)(param_2 + 0x268);
  bVar5 = *(byte *)(param_1 + 0x268);
  uVar9 = (uint)bVar4 - (uint)bVar5;
  if (uVar9 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar3 = *(ulong *)(param_2 + 0x28);
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      uVar1 = uVar3;
    }
    iVar7 = _memcmp(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20),uVar1);
    lVar10 = uVar2 - uVar3;
    if (iVar7 != 0) {
      lVar10 = (long)iVar7;
    }
    if (lVar10 == 0) {
      uVar2 = *(ulong *)(param_1 + 0x10);
      uVar3 = *(ulong *)(param_2 + 0x10);
      uVar1 = uVar2;
      if (uVar3 <= uVar2) {
        uVar1 = uVar3;
      }
      iVar7 = _memcmp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8),uVar1);
      uVar9 = (uint)(uVar2 - uVar3 >> 0x20);
      if (iVar7 != 0) {
        uVar9 = iVar7 >> 0x1f;
      }
      uVar9 = uVar9 >> 0x1f;
      bVar6 = *(byte *)(param_3 + 0x268);
      uVar8 = (uint)bVar6 - (uint)bVar5;
    }
    else {
      uVar9 = (uint)((ulong)lVar10 >> 0x3f);
      bVar6 = *(byte *)(param_3 + 0x268);
      uVar8 = (uint)bVar6 - (uint)bVar5;
    }
  }
  else {
    uVar9 = (uint)((uVar9 & 0xff) != 1);
    bVar6 = *(byte *)(param_3 + 0x268);
    uVar8 = (uint)bVar6 - (uint)bVar5;
  }
  if (uVar8 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar3 = *(ulong *)(param_3 + 0x28);
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      uVar1 = uVar3;
    }
    iVar7 = _memcmp(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_3 + 0x20),uVar1);
    lVar10 = uVar2 - uVar3;
    if (iVar7 != 0) {
      lVar10 = (long)iVar7;
    }
    if (lVar10 == 0) {
      uVar2 = *(ulong *)(param_1 + 0x10);
      uVar3 = *(ulong *)(param_3 + 0x10);
      uVar1 = uVar2;
      if (uVar3 <= uVar2) {
        uVar1 = uVar3;
      }
      iVar7 = _memcmp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_3 + 8),uVar1);
      lVar10 = uVar2 - uVar3;
      if (iVar7 != 0) {
        lVar10 = (long)iVar7;
      }
    }
    if (uVar9 != lVar10 < 0) {
      return param_1;
    }
  }
  else if ((uVar8 & 0xff) == 1) {
    if (uVar9 != 0) {
      return param_1;
    }
  }
  else if (uVar9 == 0) {
    return param_1;
  }
  uVar8 = (uint)bVar6 - (uint)bVar4;
  if (uVar8 == 0xffffffff) {
    uVar8 = 1;
  }
  else if ((uVar8 & 0xff) == 1) {
    uVar8 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x28);
    uVar3 = *(ulong *)(param_3 + 0x28);
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      uVar1 = uVar3;
    }
    iVar7 = _memcmp(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_3 + 0x20),uVar1);
    lVar10 = uVar2 - uVar3;
    if (iVar7 != 0) {
      lVar10 = (long)iVar7;
    }
    if (lVar10 == 0) {
      uVar2 = *(ulong *)(param_2 + 0x10);
      uVar3 = *(ulong *)(param_3 + 0x10);
      uVar1 = uVar2;
      if (uVar3 <= uVar2) {
        uVar1 = uVar3;
      }
      iVar7 = _memcmp(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_3 + 8),uVar1);
      uVar8 = (uint)(uVar2 - uVar3 >> 0x20);
      if (iVar7 != 0) {
        uVar8 = iVar7 >> 0x1f;
      }
      uVar8 = uVar8 >> 0x1f;
    }
    else {
      uVar8 = (uint)((ulong)lVar10 >> 0x3f);
    }
  }
  if (uVar9 == uVar8) {
    param_3 = param_2;
  }
  return param_3;
}

