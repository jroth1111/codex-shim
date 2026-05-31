
undefined8 *
FUN_1060409e4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

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
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (undefined8 *)
              FUN_1060409e4(param_1,param_1 + param_4 * 0xc,param_1 + param_4 * 0x15,param_4);
    param_2 = (undefined8 *)
              FUN_1060409e4(param_2,param_2 + param_4 * 0xc,param_2 + param_4 * 0x15,param_4);
    param_3 = (undefined8 *)
              FUN_1060409e4(param_3,param_3 + param_4 * 0xc,param_3 + param_4 * 0x15,param_4);
  }
  uVar3 = *param_1;
  uVar6 = param_1[1];
  uVar4 = *param_2;
  uVar7 = param_2[1];
  uVar1 = uVar6;
  if (uVar7 <= uVar6) {
    uVar1 = uVar7;
  }
  iVar9 = _memcmp(uVar3,uVar4,uVar1);
  uVar1 = uVar6 - uVar7;
  if (iVar9 != 0) {
    uVar1 = (long)iVar9;
  }
  uVar5 = *param_3;
  uVar8 = param_3[1];
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

