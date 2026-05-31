
ulong * FUN_106040728(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_106040728(param_1,param_1 + param_4 * 0x10,param_1 + param_4 * 0x1c,
                                     param_4);
    param_2 = (ulong *)FUN_106040728(param_2,param_2 + param_4 * 0x10,param_2 + param_4 * 0x1c,
                                     param_4);
    param_3 = (ulong *)FUN_106040728(param_3,param_3 + param_4 * 0x10,param_3 + param_4 * 0x1c,
                                     param_4);
  }
  uVar6 = *param_1;
  uVar7 = param_1[2];
  uVar2 = *param_2;
  uVar1 = param_2[2];
  if (uVar7 < uVar1) {
    uVar3 = *param_3;
    uVar4 = param_3[2];
    if ((uVar4 <= uVar7) && (uVar4 < uVar7 || uVar3 <= uVar6)) {
      return param_1;
    }
  }
  else {
    bVar5 = uVar7 == uVar1 && uVar6 < uVar2;
    uVar3 = *param_3;
    uVar4 = param_3[2];
    if (uVar4 <= uVar7) {
      if (bVar5 != (uVar7 == uVar4 && uVar6 < uVar3)) {
        return param_1;
      }
      goto LAB_1060407f8;
    }
    if (uVar7 != uVar1 || uVar6 >= uVar2) {
      return param_1;
    }
  }
  bVar5 = true;
LAB_1060407f8:
  if (bVar5 == (uVar1 < uVar4 || uVar1 <= uVar4 && uVar2 < uVar3)) {
    param_3 = param_2;
  }
  return param_3;
}

