
void FUN_100f2a74c(undefined2 *param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  char *pcVar3;
  undefined2 uStack_70;
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
LAB_100f2a780:
    *param_1 = 0x300;
    return;
  }
  cStack_60 = *pcVar3;
  *(char **)(param_2 + 8) = pcVar3 + 0x20;
  if (cStack_60 == '\x16') goto LAB_100f2a780;
  uStack_57 = (undefined7)*(undefined8 *)(pcVar3 + 9);
  uStack_5f = (undefined7)*(undefined8 *)(pcVar3 + 1);
  uStack_58 = (undefined1)((ulong)*(undefined8 *)(pcVar3 + 1) >> 0x38);
  uStack_48 = *(undefined8 *)(pcVar3 + 0x18);
  uStack_50 = (undefined1)*(undefined8 *)(pcVar3 + 0x10);
  uStack_4f = (undefined7)((ulong)*(undefined8 *)(pcVar3 + 0x10) >> 8);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  if (cStack_60 != '\x10') {
    if (cStack_60 == '\x11') {
      puVar1 = (undefined8 *)CONCAT71(uStack_57,uStack_58);
      uStack_38 = puVar1[1];
      uStack_40 = *puVar1;
      uStack_28 = puVar1[3];
      uStack_30 = puVar1[2];
      func_0x000101461020(&uStack_70,&uStack_40);
      _free(puVar1);
      goto joined_r0x000100f2a7dc;
    }
    if (cStack_60 != '\x12') {
      func_0x000101461020(&uStack_70,&cStack_60);
      goto joined_r0x000100f2a7dc;
    }
  }
  uStack_70 = 0x200;
  FUN_100e077ec(&cStack_60);
joined_r0x000100f2a7dc:
  bVar2 = (uStack_70 & 1) == 0;
  if (bVar2) {
    uStack_70._1_1_ = (undefined1)(uStack_70 >> 8);
    *(undefined1 *)((long)param_1 + 1) = uStack_70._1_1_;
  }
  else {
    *(undefined8 *)(param_1 + 4) = uStack_68;
  }
  *(bool *)param_1 = !bVar2;
  return;
}

