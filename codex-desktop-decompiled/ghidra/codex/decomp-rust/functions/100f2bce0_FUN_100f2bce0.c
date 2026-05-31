
void FUN_100f2bce0(long *param_1,long param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  char cStack_40;
  undefined8 uStack_3f;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  undefined8 uStack_28;
  
  pcVar1 = *(char **)(param_2 + 8);
  if (pcVar1 != *(char **)(param_2 + 0x18)) {
    cStack_40 = *pcVar1;
    *(char **)(param_2 + 8) = pcVar1 + 0x20;
    if (cStack_40 != '\x16') {
      uStack_3f = *(undefined8 *)(pcVar1 + 1);
      uStack_37 = (undefined7)*(undefined8 *)(pcVar1 + 9);
      uStack_28 = *(undefined8 *)(pcVar1 + 0x18);
      uStack_30 = (undefined1)*(undefined8 *)(pcVar1 + 0x10);
      uStack_2f = (undefined7)((ulong)*(undefined8 *)(pcVar1 + 0x10) >> 8);
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
      auVar2 = FUN_100614fd8(&cStack_40);
      param_1[1] = auVar2._8_8_;
      *param_1 = auVar2._0_8_ + 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}

