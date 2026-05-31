
void FUN_100f2a5e0(undefined2 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  char *pcVar4;
  undefined2 unaff_w21;
  undefined2 unaff_w22;
  char cStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  short sStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined8 uStack_38;
  
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
LAB_100f2a660:
        FUN_100e077ec(&cStack_80);
        uVar3 = 0;
      }
      else if (cStack_80 == '\x11') {
        puVar1 = (undefined8 *)CONCAT71(uStack_77,uStack_78);
        uStack_58 = puVar1[1];
        uStack_60 = *puVar1;
        uStack_48 = puVar1[3];
        uStack_50 = puVar1[2];
        FUN_100bb8b08(&sStack_40,&uStack_60);
        if (sStack_40 == 1) {
          _free(puVar1);
LAB_100f2a6e8:
          *(undefined8 *)(param_1 + 4) = uStack_38;
          uVar2 = 1;
          goto LAB_100f2a6f0;
        }
        _free(puVar1);
        uVar3 = 1;
        unaff_w21 = uStack_3e;
        unaff_w22 = uStack_3c;
      }
      else {
        if (cStack_80 == '\x12') goto LAB_100f2a660;
        FUN_100bb8b08(&uStack_60,&cStack_80);
        uStack_38 = uStack_58;
        if ((short)uStack_60 == 1) goto LAB_100f2a6e8;
        uVar3 = 1;
        unaff_w21 = uStack_60._2_2_;
        unaff_w22 = uStack_60._4_2_;
      }
      uVar2 = 0;
      param_1[1] = uVar3;
      param_1[2] = unaff_w21;
      param_1[3] = unaff_w22;
      goto LAB_100f2a6f0;
    }
  }
  uVar2 = 0;
  param_1[1] = 2;
LAB_100f2a6f0:
  *param_1 = uVar2;
  return;
}

