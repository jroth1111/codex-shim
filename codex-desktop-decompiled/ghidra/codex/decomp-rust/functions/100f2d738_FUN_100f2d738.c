
void FUN_100f2d738(undefined2 *param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  byte bStack_50;
  undefined1 uStack_4f;
  undefined8 uStack_48;
  char cStack_40;
  undefined8 uStack_3f;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  undefined8 uStack_28;
  
  pcVar2 = *(char **)(param_2 + 8);
  if (pcVar2 != *(char **)(param_2 + 0x18)) {
    cStack_40 = *pcVar2;
    *(char **)(param_2 + 8) = pcVar2 + 0x20;
    if (cStack_40 != '\x16') {
      uStack_3f = *(undefined8 *)(pcVar2 + 1);
      uStack_37 = (undefined7)*(undefined8 *)(pcVar2 + 9);
      uStack_28 = *(undefined8 *)(pcVar2 + 0x18);
      uStack_30 = (undefined1)*(undefined8 *)(pcVar2 + 0x10);
      uStack_2f = (undefined7)((ulong)*(undefined8 *)(pcVar2 + 0x10) >> 8);
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
      FUN_1007a6fc8(&bStack_50,&cStack_40);
      bVar1 = (bStack_50 & 1) == 0;
      if (bVar1) {
        *(undefined1 *)((long)param_1 + 1) = uStack_4f;
      }
      else {
        *(undefined8 *)(param_1 + 4) = uStack_48;
      }
      *(bool *)param_1 = !bVar1;
      return;
    }
  }
  *param_1 = 0x300;
  return;
}

