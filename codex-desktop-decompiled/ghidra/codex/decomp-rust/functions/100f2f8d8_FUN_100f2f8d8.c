
void FUN_100f2f8d8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  long unaff_x19;
  undefined1 auVar4 [16];
  char cStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar3 = *(char **)(param_2 + 8);
  if (pcVar3 == *(char **)(param_2 + 0x18)) {
LAB_100f2f910:
    *param_1 = 2;
    return;
  }
  cStack_70 = *pcVar3;
  *(char **)(param_2 + 8) = pcVar3 + 0x20;
  if (cStack_70 == '\x16') goto LAB_100f2f910;
  uStack_67 = (undefined7)*(undefined8 *)(pcVar3 + 9);
  uStack_6f = (undefined7)*(undefined8 *)(pcVar3 + 1);
  uStack_68 = (undefined1)((ulong)*(undefined8 *)(pcVar3 + 1) >> 0x38);
  uStack_58 = *(undefined8 *)(pcVar3 + 0x18);
  uStack_60 = (undefined1)*(undefined8 *)(pcVar3 + 0x10);
  uStack_5f = (undefined7)((ulong)*(undefined8 *)(pcVar3 + 0x10) >> 8);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  if (cStack_70 == '\x10') {
LAB_100f2f954:
    FUN_100e077ec(&cStack_70);
    lVar2 = 0;
  }
  else {
    if (cStack_70 == '\x11') {
      puVar1 = (undefined8 *)CONCAT71(uStack_67,uStack_68);
      uStack_48 = puVar1[1];
      uStack_50 = *puVar1;
      uStack_38 = puVar1[3];
      uStack_40 = puVar1[2];
      auVar4 = FUN_100614fd8(&uStack_50);
      _free(puVar1);
    }
    else {
      if (cStack_70 == '\x12') goto LAB_100f2f954;
      auVar4 = FUN_100614fd8(&cStack_70);
    }
    unaff_x19 = auVar4._8_8_;
    lVar2 = auVar4._0_8_ + 1;
    if (lVar2 == 2) {
      lVar2 = 3;
    }
  }
  *param_1 = lVar2;
  param_1[1] = unaff_x19;
  return;
}

