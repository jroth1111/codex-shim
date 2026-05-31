
void FUN_100f2be4c(long *param_1,long param_2)

{
  char *pcVar1;
  long lStack_60;
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
      func_0x0001012af378(&lStack_60,&cStack_40);
      if (lStack_60 == 7) {
        *param_1 = 8;
        param_1[1] = lStack_58;
      }
      else {
        param_1[1] = lStack_58;
        *param_1 = lStack_60;
        param_1[3] = lStack_48;
        param_1[2] = lStack_50;
      }
      return;
    }
  }
  *param_1 = 7;
  return;
}

