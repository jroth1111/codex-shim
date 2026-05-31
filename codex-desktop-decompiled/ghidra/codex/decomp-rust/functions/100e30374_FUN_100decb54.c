
void FUN_100decb54(long param_1)

{
  ulong uVar1;
  long unaff_x21;
  long lVar2;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (uVar1 == 0) {
    uStack_50 = 0;
  }
  else {
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(ulong *)(param_1 + 0x58);
    uStack_88 = 0;
    lStack_68 = 0;
    uStack_80 = uVar1;
    uStack_60 = uVar1;
    uStack_58 = uStack_78;
  }
  uStack_90 = (ulong)(uVar1 != 0);
  uStack_70 = uStack_90;
  while (FUN_100f3a3c8(&lStack_48,&uStack_90), lStack_48 != 0) {
    lVar2 = lStack_48 + lStack_38 * 0x18;
    if (*(long *)(lVar2 + 8) != 0) {
      _free(*(undefined8 *)(lVar2 + 0x10));
    }
    if (*(long *)(lVar2 + 0x110) != 0) {
      _free(*(undefined8 *)(lVar2 + 0x118));
    }
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uStack_40 = 0;
  }
  else {
    lStack_68 = *(long *)(param_1 + 0x18);
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    uStack_78 = 0;
    uStack_58 = 0;
    uStack_70 = uVar1;
    uStack_50 = uVar1;
    lStack_48 = lStack_68;
  }
  uStack_80 = (ulong)(uVar1 != 0);
  uStack_60 = uStack_80;
  while (FUN_100f3a554(&lStack_38,&uStack_80), lStack_38 != 0) {
    lVar2 = lStack_38 + unaff_x21 * 0x18;
    if (*(long *)(lVar2 + 8) != 0) {
      _free(*(undefined8 *)(lVar2 + 0x10));
    }
  }
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (uVar1 == 0) {
    uStack_40 = 0;
  }
  else {
    lStack_68 = *(long *)(param_1 + 0x30);
    uStack_40 = *(undefined8 *)(param_1 + 0x38);
    uStack_78 = 0;
    uStack_58 = 0;
    uStack_70 = uVar1;
    uStack_50 = uVar1;
    lStack_48 = lStack_68;
  }
  uStack_80 = (ulong)(uVar1 != 0);
  uStack_60 = uStack_80;
  FUN_100f3c2e4(&lStack_38,&uStack_80);
  while (lStack_38 != 0) {
    lVar2 = lStack_38 + unaff_x21 * 0x18;
    if (*(long *)(lVar2 + 8) != 0) {
      _free(*(undefined8 *)(lVar2 + 0x10));
    }
    FUN_100f3c2e4(&lStack_38,&uStack_80);
  }
  return;
}

