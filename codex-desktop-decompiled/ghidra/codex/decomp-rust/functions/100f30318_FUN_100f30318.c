
void FUN_100f30318(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcVar3 = *(char **)(param_2 + 8);
  if (pcVar3 == *(char **)(param_2 + 0x18)) {
LAB_100f3034c:
    *param_1 = 0;
    return;
  }
  cStack_60 = *pcVar3;
  *(char **)(param_2 + 8) = pcVar3 + 0x20;
  if (cStack_60 == '\x16') goto LAB_100f3034c;
  uStack_57 = (undefined7)*(undefined8 *)(pcVar3 + 9);
  uStack_5f = (undefined7)*(undefined8 *)(pcVar3 + 1);
  uStack_58 = (undefined1)((ulong)*(undefined8 *)(pcVar3 + 1) >> 0x38);
  uStack_48 = *(undefined8 *)(pcVar3 + 0x18);
  uStack_50 = (undefined1)*(undefined8 *)(pcVar3 + 0x10);
  uStack_4f = (undefined7)((ulong)*(undefined8 *)(pcVar3 + 0x10) >> 8);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  if (cStack_60 == '\x10') {
LAB_100f3038c:
    uStack_98 = 0;
    uStack_90 = 0;
    FUN_100e077ec(&cStack_60);
    if ((uStack_98 & 1) == 0) goto LAB_100f303d4;
  }
  else {
    if (cStack_60 == '\x11') {
      puVar1 = (undefined8 *)CONCAT71(uStack_57,uStack_58);
      uStack_38 = puVar1[1];
      uStack_40 = *puVar1;
      uStack_28 = puVar1[3];
      uStack_30 = puVar1[2];
      FUN_101442804(&uStack_98,&uStack_40);
      _free(puVar1);
    }
    else {
      if (cStack_60 == '\x12') goto LAB_100f3038c;
      FUN_101442804(&uStack_98,&cStack_60);
    }
    if (((uint)uStack_98 & 1) == 0) {
LAB_100f303d4:
      param_1[2] = uStack_88;
      param_1[1] = uStack_90;
      param_1[4] = uStack_78;
      param_1[3] = uStack_80;
      param_1[6] = uStack_68;
      param_1[5] = uStack_70;
      uVar2 = 1;
      goto LAB_100f3041c;
    }
  }
  param_1[1] = uStack_90;
  uVar2 = 2;
LAB_100f3041c:
  *param_1 = uVar2;
  return;
}

