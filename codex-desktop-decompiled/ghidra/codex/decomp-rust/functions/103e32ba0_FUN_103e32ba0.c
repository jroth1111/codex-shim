
undefined8 FUN_103e32ba0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_58;
  
  uVar5 = *param_1;
  lVar2 = param_1[1];
  lVar1 = param_1[2];
  lVar3 = param_1[3];
  uVar7 = (ulong)(lVar3 - lVar2) >> 5;
  lVar6 = uVar7 + 1;
  lVar4 = lVar2;
  while (lVar6 = lVar6 + -1, lVar6 != 0) {
    func_0x000103db23f4(lVar4);
    lVar4 = lVar4 + 0x20;
  }
  if (lVar1 != 0) {
    _free(uVar5);
  }
  if (lVar3 == lVar2) {
    uVar5 = 0;
  }
  else {
    lStack_58 = param_1[4];
    uVar5 = FUN_108978e3c(lStack_58 + uVar7,&lStack_58,&UNK_10b2fb960);
  }
  return uVar5;
}

