
long FUN_103948cf4(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar10 = param_4 * 0x140;
    lVar11 = param_4 * 0x230;
    param_1 = FUN_103948cf4(param_1,param_1 + lVar10,param_1 + lVar11,param_4);
    param_2 = FUN_103948cf4(param_2,param_2 + lVar10,param_2 + lVar11,param_4);
    param_3 = FUN_103948cf4(param_3,param_3 + lVar10,param_3 + lVar11,param_4);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(ulong *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar7 = *(ulong *)(param_2 + 0x10);
  uVar1 = uVar6;
  if (uVar7 <= uVar6) {
    uVar1 = uVar7;
  }
  iVar9 = _memcmp(uVar3,uVar4,uVar1);
  uVar1 = uVar6 - uVar7;
  if (iVar9 != 0) {
    uVar1 = (long)iVar9;
  }
  uVar5 = *(undefined8 *)(param_3 + 8);
  uVar8 = *(ulong *)(param_3 + 0x10);
  uVar2 = uVar6;
  if (uVar8 <= uVar6) {
    uVar2 = uVar8;
  }
  iVar9 = _memcmp(uVar3,uVar5,uVar2);
  uVar6 = uVar6 - uVar8;
  if (iVar9 != 0) {
    uVar6 = (long)iVar9;
  }
  if (-1 < (long)(uVar6 ^ uVar1)) {
    uVar6 = uVar7;
    if (uVar8 <= uVar7) {
      uVar6 = uVar8;
    }
    iVar9 = _memcmp(uVar4,uVar5,uVar6);
    uVar6 = uVar7 - uVar8;
    if (iVar9 != 0) {
      uVar6 = (long)iVar9;
    }
    param_1 = param_3;
    if (-1 < (long)(uVar6 ^ uVar1)) {
      param_1 = param_2;
    }
  }
  return param_1;
}

