
void FUN_100f2bb0c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  char cStack_48;
  undefined8 uStack_47;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  undefined1 uStack_21;
  
  pcVar4 = *(char **)(param_2 + 8);
  if (pcVar4 != *(char **)(param_2 + 0x18)) {
    cStack_48 = *pcVar4;
    *(char **)(param_2 + 8) = pcVar4 + 0x20;
    if (cStack_48 != '\x16') {
      uStack_47 = *(undefined8 *)(pcVar4 + 1);
      uStack_3f = (undefined7)*(undefined8 *)(pcVar4 + 9);
      uStack_30 = *(undefined8 *)(pcVar4 + 0x18);
      uStack_38 = (undefined1)*(undefined8 *)(pcVar4 + 0x10);
      uStack_37 = (undefined7)((ulong)*(undefined8 *)(pcVar4 + 0x10) >> 8);
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
      if (cStack_48 == '\0') {
        uVar1 = (undefined1)uStack_47;
        FUN_100e077ec(&cStack_48);
        uVar3 = 0;
        param_1[1] = uVar1;
      }
      else {
        uVar2 = FUN_108855b04(&cStack_48,&uStack_21,&UNK_10b20a560);
        *(undefined8 *)(param_1 + 8) = uVar2;
        uVar3 = 1;
      }
      goto LAB_100f2bb90;
    }
  }
  uVar3 = 0;
  param_1[1] = 2;
LAB_100f2bb90:
  *param_1 = uVar3;
  return;
}

