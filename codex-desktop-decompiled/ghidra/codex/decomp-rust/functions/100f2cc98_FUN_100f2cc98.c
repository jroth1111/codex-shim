
void FUN_100f2cc98(long *param_1,long param_2)

{
  char *pcVar1;
  long lStack_58;
  long lStack_50;
  long lStack_48;
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
      FUN_101315b18(&lStack_58,&cStack_40);
      if (lStack_58 == -0x8000000000000000) {
        *param_1 = -0x7fffffffffffffff;
        param_1[1] = lStack_50;
      }
      else {
        param_1[1] = lStack_50;
        *param_1 = lStack_58;
        param_1[2] = lStack_48;
      }
      return;
    }
  }
  *param_1 = -0x8000000000000000;
  return;
}

