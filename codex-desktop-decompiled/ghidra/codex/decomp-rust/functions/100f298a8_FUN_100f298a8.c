
void FUN_100f298a8(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined8 unaff_x21;
  undefined2 unaff_w22;
  undefined8 uVar5;
  undefined4 uStack_98;
  undefined2 uStack_94;
  char cStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  char cStack_70;
  undefined4 uStack_6f;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  char cStack_48;
  undefined4 uStack_47;
  undefined2 uStack_43;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined1 uStack_38;
  
  pcVar4 = *(char **)(param_2 + 8);
  if (pcVar4 != *(char **)(param_2 + 0x18)) {
    cStack_90 = *pcVar4;
    *(char **)(param_2 + 8) = pcVar4 + 0x20;
    if (cStack_90 != '\x16') {
      uStack_87 = (undefined7)*(undefined8 *)(pcVar4 + 9);
      uStack_8f = (undefined7)*(undefined8 *)(pcVar4 + 1);
      uStack_88 = (undefined1)((ulong)*(undefined8 *)(pcVar4 + 1) >> 0x38);
      uStack_78 = *(undefined8 *)(pcVar4 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pcVar4 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pcVar4 + 0x10) >> 8);
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
      if (cStack_90 == '\x10') {
LAB_100f29928:
        FUN_100e077ec(&cStack_90);
        uVar3 = 0;
      }
      else if (cStack_90 == '\x11') {
        puVar1 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
        uVar5 = *puVar1;
        uStack_58 = puVar1[3];
        uStack_68 = (undefined7)puVar1[1];
        uStack_61 = (undefined1)((ulong)puVar1[1] >> 0x38);
        cStack_70 = (char)uVar5;
        uStack_6f = (undefined4)((ulong)uVar5 >> 8);
        uStack_6b = (undefined2)((ulong)uVar5 >> 0x28);
        uStack_69 = (undefined1)((ulong)uVar5 >> 0x38);
        uStack_60 = (undefined1)puVar1[2];
        uStack_5f = (undefined7)((ulong)puVar1[2] >> 8);
        FUN_1011ec168(&cStack_48,&cStack_70);
        if (cStack_48 == '\x01') {
          uVar5 = CONCAT17(uStack_39,uStack_40);
          _free(puVar1);
LAB_100f299c0:
          *(undefined8 *)(param_1 + 8) = uVar5;
          uVar2 = 1;
          goto LAB_100f299c8;
        }
        uStack_98 = uStack_47;
        uStack_94 = uStack_43;
        unaff_x21 = CONCAT71(uStack_40,uStack_41);
        unaff_w22 = CONCAT11(uStack_38,uStack_39);
        _free(puVar1);
        uVar3 = 1;
      }
      else {
        if (cStack_90 == '\x12') goto LAB_100f29928;
        FUN_1011ec168(&cStack_70,&cStack_90);
        if (cStack_70 == '\x01') {
          uVar5 = CONCAT17(uStack_61,uStack_68);
          goto LAB_100f299c0;
        }
        uStack_98 = uStack_6f;
        uStack_94 = uStack_6b;
        unaff_x21 = CONCAT71(uStack_68,uStack_69);
        unaff_w22 = CONCAT11(uStack_60,uStack_61);
        uVar3 = 1;
      }
      uVar2 = 0;
      param_1[1] = uVar3;
      *(undefined4 *)(param_1 + 2) = uStack_98;
      *(undefined2 *)(param_1 + 6) = uStack_94;
      *(undefined8 *)(param_1 + 8) = unaff_x21;
      *(undefined2 *)(param_1 + 0x10) = unaff_w22;
      goto LAB_100f299c8;
    }
  }
  uVar2 = 0;
  param_1[1] = 2;
LAB_100f299c8:
  *param_1 = uVar2;
  return;
}

