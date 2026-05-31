
long FUN_106040844(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar3 = param_4 * 0xa0;
    lVar4 = param_4 * 0x118;
    param_1 = FUN_106040844(param_1,param_1 + lVar3,param_1 + lVar4,param_4);
    param_2 = FUN_106040844(param_2,param_2 + lVar3,param_2 + lVar4,param_4);
    param_3 = FUN_106040844(param_3,param_3 + lVar3,param_3 + lVar4,param_4);
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_2 + 0x10);
  lVar3 = param_3;
  if (uVar1 < uVar2 == uVar2 < *(ulong *)(param_3 + 0x10)) {
    lVar3 = param_2;
  }
  if (uVar1 < uVar2 == uVar1 < *(ulong *)(param_3 + 0x10)) {
    param_1 = lVar3;
  }
  return param_1;
}

