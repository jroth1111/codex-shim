
long FUN_1060404c4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar4 = param_4 * 0x80;
    lVar1 = param_4 * 0xe0;
    param_1 = FUN_1060404c4(param_1,param_1 + lVar4,param_1 + lVar1,param_4);
    param_2 = FUN_1060404c4(param_2,param_2 + lVar4,param_2 + lVar1,param_4);
    param_3 = FUN_1060404c4(param_3,param_3 + lVar4,param_3 + lVar1,param_4);
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_2 + 0x10);
  lVar1 = param_3;
  if (uVar2 < uVar3 == uVar3 < *(ulong *)(param_3 + 0x10)) {
    lVar1 = param_2;
  }
  if (uVar2 < uVar3 == uVar2 < *(ulong *)(param_3 + 0x10)) {
    param_1 = lVar1;
  }
  return param_1;
}

