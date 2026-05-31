
undefined8 FUN_100fbc67c(char *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x38);
  FUN_100d34830(param_1 + 0x20);
  if (lVar4 == lVar2) {
    uVar3 = 0;
    cVar1 = *param_1;
  }
  else {
    lStack_38 = *(long *)(param_1 + 0x40);
    uVar3 = FUN_1087e422c(lStack_38 + ((ulong)(lVar4 - lVar2) >> 6),&lStack_38,&UNK_10b23a190);
    cVar1 = *param_1;
  }
  if (cVar1 != '\x16') {
    FUN_100e077ec(param_1);
  }
  return uVar3;
}

