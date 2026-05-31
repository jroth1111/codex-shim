
void FUN_100d0def8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long alStack_58 [2];
  long lStack_48;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lStack_60 = 0;
  }
  else {
    lStack_88 = param_1[1];
    lStack_60 = param_1[2];
    uStack_98 = 0;
    uStack_78 = 0;
    lStack_90 = lVar3;
    lStack_70 = lVar3;
    lStack_68 = lStack_88;
  }
  uStack_a0 = (ulong)(lVar3 != 0);
  uStack_80 = uStack_a0;
  FUN_100f3b35c(alStack_58,&uStack_a0);
  lVar3 = alStack_58[0];
  lVar1 = lStack_48;
  while (lVar3 != 0) {
    lVar2 = lVar3 + lVar1 * 0x18;
    alStack_58[0] = lVar3;
    lStack_48 = lVar1;
    if (*(long *)(lVar2 + 0x1298) != 0) {
      _free(*(undefined8 *)(lVar2 + 0x12a0));
    }
    FUN_100e0ea40(lVar3 + lVar1 * 0x1b0);
    FUN_100f3b35c(alStack_58,&uStack_a0);
    lVar3 = alStack_58[0];
    lVar1 = lStack_48;
  }
  return;
}

