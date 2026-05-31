
void FUN_100f2fea4(undefined4 *param_1,long param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 unaff_w21;
  char cStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  uint uStack_40;
  uint uStack_3c;
  ulong uStack_38;
  
  pcVar4 = *(char **)(param_2 + 8);
  if (pcVar4 != *(char **)(param_2 + 0x18)) {
    cStack_80 = *pcVar4;
    *(char **)(param_2 + 8) = pcVar4 + 0x20;
    if (cStack_80 != '\x16') {
      uStack_77 = (undefined7)*(undefined8 *)(pcVar4 + 9);
      uStack_7f = (undefined7)*(undefined8 *)(pcVar4 + 1);
      uStack_78 = (undefined1)((ulong)*(undefined8 *)(pcVar4 + 1) >> 0x38);
      uStack_68 = *(undefined8 *)(pcVar4 + 0x18);
      uStack_70 = (undefined1)*(undefined8 *)(pcVar4 + 0x10);
      uStack_6f = (undefined7)((ulong)*(undefined8 *)(pcVar4 + 0x10) >> 8);
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
      if (cStack_80 == '\x10') {
LAB_100f2ff24:
        FUN_100e077ec(&cStack_80);
        uVar3 = 0;
      }
      else {
        if (cStack_80 != '\x11') {
          if (cStack_80 != '\x12') {
            FUN_100615890(&uStack_60,&cStack_80);
            uStack_38 = uStack_58;
            if ((int)uStack_60 == 0) {
              uStack_38 = uStack_60 >> 0x20;
            }
            if ((uStack_60 & 1) == 0) goto LAB_100f2ff78;
LAB_100f2ffb0:
            *(ulong *)(param_1 + 2) = uStack_38;
            uVar2 = 1;
            goto LAB_100f2ffb8;
          }
          goto LAB_100f2ff24;
        }
        puVar1 = (ulong *)CONCAT71(uStack_77,uStack_78);
        uStack_58 = puVar1[1];
        uStack_60 = *puVar1;
        uStack_48 = puVar1[3];
        uStack_50 = puVar1[2];
        FUN_100615890(&uStack_40,&uStack_60);
        if (uStack_40 == 0) {
          uStack_38 = (ulong)uStack_3c;
        }
        _free(puVar1);
        if ((uStack_40 & 1) != 0) goto LAB_100f2ffb0;
LAB_100f2ff78:
        unaff_w21 = (undefined4)uStack_38;
        uVar3 = 1;
      }
      uVar2 = 0;
      param_1[1] = uVar3;
      param_1[2] = unaff_w21;
      goto LAB_100f2ffb8;
    }
  }
  uVar2 = 0;
  param_1[1] = 2;
LAB_100f2ffb8:
  *param_1 = uVar2;
  return;
}

