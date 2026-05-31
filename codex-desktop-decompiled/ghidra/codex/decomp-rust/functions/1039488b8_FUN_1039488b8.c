
long FUN_1039488b8(long param_1,long param_2,long param_3,ulong param_4)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar3 = param_4 * 0x60;
    lVar4 = param_4 * 0xa8;
    param_1 = FUN_1039488b8(param_1,param_1 + lVar3,param_1 + lVar4,param_4);
    param_2 = FUN_1039488b8(param_2,param_2 + lVar3,param_2 + lVar4,param_4);
    param_3 = FUN_1039488b8(param_3,param_3 + lVar3,param_3 + lVar4,param_4);
  }
  cVar1 = FUN_1038d9fcc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  cVar2 = FUN_1038d9fcc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (((cVar1 == -1) == (cVar2 == -1)) &&
     (cVar2 = FUN_1038d9fcc(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                            *(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10)),
     param_1 = param_3, (cVar1 == -1) == (cVar2 == -1))) {
    param_1 = param_2;
  }
  return param_1;
}

