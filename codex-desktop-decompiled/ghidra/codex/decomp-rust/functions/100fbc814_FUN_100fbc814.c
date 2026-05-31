
void FUN_100fbc814(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lStack_68;
  
  uVar1 = *param_2;
  lVar3 = param_2[1];
  lVar2 = param_2[2];
  lVar4 = param_2[3];
  uVar7 = (ulong)(lVar4 - lVar3) >> 5;
  lVar6 = uVar7 + 1;
  lVar5 = lVar3;
  while (lVar6 = lVar6 + -1, lVar6 != 0) {
    FUN_100e077ec(lVar5);
    lVar5 = lVar5 + 0x20;
  }
  if (lVar2 != 0) {
    _free(uVar1);
  }
  if (lVar4 == lVar3) {
    *param_1 = 2;
  }
  else {
    lStack_68 = param_2[4];
    FUN_1087e427c(param_1,lStack_68 + uVar7,&lStack_68,&UNK_10b23a1b0);
  }
  return;
}

