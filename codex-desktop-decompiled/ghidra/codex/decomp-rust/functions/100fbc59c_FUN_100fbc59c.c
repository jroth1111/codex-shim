
void FUN_100fbc59c(undefined8 *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar2 = *(long *)(param_2 + 0x28);
  lVar3 = *(long *)(param_2 + 0x38);
  FUN_100d34830(param_2 + 0x20);
  if (lVar3 == lVar2) {
    *param_1 = 2;
    cVar1 = *param_2;
  }
  else {
    lStack_38 = *(long *)(param_2 + 0x40);
    FUN_1087e427c(&uStack_90,lStack_38 + ((ulong)(lVar3 - lVar2) >> 6),&lStack_38,&UNK_10b23a190);
    param_1[5] = uStack_68;
    param_1[4] = uStack_70;
    param_1[7] = uStack_58;
    param_1[6] = uStack_60;
    param_1[9] = uStack_48;
    param_1[8] = uStack_50;
    param_1[10] = uStack_40;
    param_1[1] = uStack_88;
    *param_1 = uStack_90;
    param_1[3] = uStack_78;
    param_1[2] = uStack_80;
    cVar1 = *param_2;
  }
  if (cVar1 != '\x16') {
    FUN_100e077ec(param_2);
  }
  return;
}

