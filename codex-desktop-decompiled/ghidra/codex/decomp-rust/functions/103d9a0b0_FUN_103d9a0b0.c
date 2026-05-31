
void FUN_103d9a0b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long alStack_48 [2];
  long lStack_38;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    lStack_50 = 0;
  }
  else {
    lStack_78 = param_1[1];
    lStack_50 = param_1[2];
    uStack_88 = 0;
    uStack_68 = 0;
    lStack_80 = lVar3;
    lStack_60 = lVar3;
    lStack_58 = lStack_78;
  }
  uStack_90 = (ulong)(lVar3 != 0);
  uStack_70 = uStack_90;
  func_0x000103e31048(alStack_48,&uStack_90);
  lVar3 = alStack_48[0];
  lVar1 = lStack_38;
  while (lVar3 != 0) {
    lVar2 = lVar3 + lVar1 * 0x18;
    alStack_48[0] = lVar3;
    lStack_38 = lVar1;
    if (*(long *)(lVar2 + 8) != 0) {
      _free(*(undefined8 *)(lVar2 + 0x10));
    }
    func_0x000103dc1800(lVar3 + lVar1 * 0x48 + 0x110);
    func_0x000103e31048(alStack_48,&uStack_90);
    lVar3 = alStack_48[0];
    lVar1 = lStack_38;
  }
  return;
}

