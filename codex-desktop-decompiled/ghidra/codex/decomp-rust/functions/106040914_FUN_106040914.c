
ulong * FUN_106040914(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulong *)FUN_106040914(param_1,param_1 + param_4 * 0xc,param_1 + param_4 * 0x15,
                                     param_4);
    param_2 = (ulong *)FUN_106040914(param_2,param_2 + param_4 * 0xc,param_2 + param_4 * 0x15,
                                     param_4);
    param_3 = (ulong *)FUN_106040914(param_3,param_3 + param_4 * 0xc,param_3 + param_4 * 0x15,
                                     param_4);
  }
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = param_3;
  if (uVar2 < uVar3 == uVar3 < *param_3) {
    puVar1 = param_2;
  }
  if (uVar2 < uVar3 == uVar2 < *param_3) {
    param_1 = puVar1;
  }
  return param_1;
}

