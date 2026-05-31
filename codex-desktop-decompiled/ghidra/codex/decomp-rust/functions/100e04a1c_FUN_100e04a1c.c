
void FUN_100e04a1c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long alStack_48 [2];
  long lStack_38;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    uStack_50 = 0;
  }
  else {
    uStack_78 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    uStack_88 = 0;
    uStack_68 = 0;
    lStack_80 = lVar3;
    lStack_60 = lVar3;
    uStack_58 = uStack_78;
  }
  uStack_90 = (ulong)(lVar3 != 0);
  uStack_70 = uStack_90;
  FUN_100f3b678(alStack_48,&uStack_90);
  lVar3 = alStack_48[0];
  lVar1 = lStack_38;
  while (lVar3 != 0) {
    lVar2 = lVar3 + lVar1 * 0x18;
    alStack_48[0] = lVar3;
    lStack_38 = lVar1;
    if (*(long *)(lVar2 + 8) != 0) {
      _free(*(undefined8 *)(lVar2 + 0x10));
    }
    FUN_100e0e974(lVar3 + lVar1 * 0x48 + 0x110);
    FUN_100f3b678(alStack_48,&uStack_90);
    lVar3 = alStack_48[0];
    lVar1 = lStack_38;
  }
  return;
}

