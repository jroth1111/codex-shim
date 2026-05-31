
long FUN_1039483d0(long param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar3 = param_4 * 0xc0;
    lVar4 = param_4 * 0x150;
    param_1 = FUN_1039483d0(param_1,param_1 + lVar3,param_1 + lVar4,param_4);
    param_2 = FUN_1039483d0(param_2,param_2 + lVar3,param_2 + lVar4,param_4);
    param_3 = FUN_1039483d0(param_3,param_3 + lVar3,param_3 + lVar4,param_4);
  }
  iVar1 = FUN_103947af8(param_1,param_2);
  iVar2 = FUN_103947af8(param_1,param_3);
  if ((iVar1 == iVar2) &&
     (iVar2 = FUN_103947af8(param_2,param_3), param_1 = param_3, iVar1 == iVar2)) {
    param_1 = param_2;
  }
  return param_1;
}

