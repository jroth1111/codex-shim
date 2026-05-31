
void FUN_100f2a86c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
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
  
  pcVar2 = *(char **)(param_2 + 8);
  if (pcVar2 == *(char **)(param_2 + 0x18)) {
LAB_100f2a8a0:
    *param_1 = -0x7fffffffffffffff;
    return;
  }
  cStack_60 = *pcVar2;
  *(char **)(param_2 + 8) = pcVar2 + 0x20;
  if (cStack_60 == '\x16') goto LAB_100f2a8a0;
  uStack_57 = (undefined7)*(undefined8 *)(pcVar2 + 9);
  uStack_5f = (undefined7)*(undefined8 *)(pcVar2 + 1);
  uStack_58 = (undefined1)((ulong)*(undefined8 *)(pcVar2 + 1) >> 0x38);
  uStack_48 = *(undefined8 *)(pcVar2 + 0x18);
  uStack_50 = (undefined1)*(undefined8 *)(pcVar2 + 0x10);
  uStack_4f = (undefined7)((ulong)*(undefined8 *)(pcVar2 + 0x10) >> 8);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  if (cStack_60 == '\x10') {
LAB_100f2a8e4:
    lStack_80 = -0x8000000000000000;
    FUN_100e077ec(&cStack_60);
  }
  else {
    if (cStack_60 == '\x11') {
      puVar1 = (undefined8 *)CONCAT71(uStack_57,uStack_58);
      uStack_38 = puVar1[1];
      uStack_40 = *puVar1;
      uStack_28 = puVar1[3];
      uStack_30 = puVar1[2];
      func_0x0001014268c4(&lStack_80,&uStack_40);
      _free(puVar1);
    }
    else {
      if (cStack_60 == '\x12') goto LAB_100f2a8e4;
      func_0x0001014268c4(&lStack_80,&cStack_60);
    }
    if (lStack_80 == -0x7fffffffffffffff) {
      *param_1 = -0x7ffffffffffffffe;
      param_1[1] = lStack_78;
      return;
    }
  }
  param_1[1] = lStack_78;
  *param_1 = lStack_80;
  param_1[3] = lStack_68;
  param_1[2] = lStack_70;
  return;
}

