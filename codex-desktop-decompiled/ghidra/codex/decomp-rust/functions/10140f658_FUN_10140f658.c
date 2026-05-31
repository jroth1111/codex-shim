
void FUN_10140f658(undefined8 *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  char acStack_128 [32];
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  if (*param_2 == '\x15') {
    uStack_f8 = *(undefined8 *)(param_2 + 8);
    lStack_108 = *(long *)(param_2 + 0x10);
    lStack_f0 = lStack_108 + *(long *)(param_2 + 0x18) * 0x40;
    acStack_128[0] = '\x16';
    uStack_e8 = 0;
    lStack_e0 = 0;
    uStack_d0 = 0;
    lStack_100 = lStack_108;
LAB_10140f6c0:
    FUN_100f1cacc(&uStack_c8,acStack_128);
    lVar4 = lStack_c0;
    uVar3 = uStack_d0;
    lVar2 = lStack_e0;
    lVar1 = lStack_f0;
    lVar5 = lStack_100;
    if (uStack_c8 != 0x8000000000000000) {
      if (uStack_c8 != 0x8000000000000001) goto code_r0x00010140f6e0;
      if (lStack_e0 == 0) {
        uStack_88 = 0;
      }
      else {
        lStack_c0 = 0;
        lStack_b8 = lStack_e0;
        uStack_b0 = uStack_d8;
        uStack_a0 = 0;
        lStack_98 = lStack_e0;
        uStack_90 = uStack_d8;
        uStack_88 = uStack_d0;
      }
      uStack_c8 = (ulong)(lStack_e0 != 0);
      uStack_a8 = uStack_c8;
      while (FUN_100f3a3c8(&lStack_148,&uStack_c8), lStack_148 != 0) {
        lVar5 = lStack_148 + lStack_138 * 0x18;
        if (*(long *)(lVar5 + 8) != 0) {
          _free(*(undefined8 *)(lVar5 + 0x10));
        }
        if (*(long *)(lVar5 + 0x110) != 0) {
          _free(*(undefined8 *)(lVar5 + 0x118));
        }
      }
      FUN_100d34830(&lStack_108);
      if (acStack_128[0] != '\x16') {
        FUN_100e077ec(acStack_128);
      }
      goto LAB_10140f8c4;
    }
    lStack_138 = uStack_d8;
    lStack_140 = lStack_e0;
    uStack_130 = uStack_d0;
    lStack_148 = 0;
    FUN_100d34830(&lStack_108);
    if (lVar1 == lVar5) {
      lVar4 = 0;
    }
    else {
      uStack_c8 = uStack_e8;
      lVar4 = FUN_1087e422c(uStack_e8 + ((ulong)(lVar1 - lVar5) >> 6),&uStack_c8,&UNK_10b23a190);
    }
    if (acStack_128[0] != '\x16') {
      FUN_100e077ec(acStack_128);
    }
    if (lVar4 == 0) {
      param_1[2] = lStack_138;
      param_1[1] = lStack_140;
      param_1[3] = uStack_130;
      uVar3 = 1;
      goto LAB_10140f8cc;
    }
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      lStack_c0 = 0;
      lStack_b8 = lVar2;
      uStack_b0 = uStack_d8;
      uStack_a0 = 0;
      lStack_98 = lVar2;
      uStack_90 = uStack_d8;
    }
    uStack_c8 = (ulong)(lVar2 != 0);
    uStack_a8 = uStack_c8;
    uStack_88 = uVar3;
    FUN_100f3a3c8(&uStack_80,&uStack_c8);
    while (uStack_80 != 0) {
      lVar5 = uStack_80 + lStack_70 * 0x18;
      if (*(long *)(lVar5 + 8) != 0) {
        _free(*(undefined8 *)(lVar5 + 0x10));
      }
      if (*(long *)(lVar5 + 0x110) != 0) {
        _free(*(undefined8 *)(lVar5 + 0x118));
      }
      FUN_100f3a3c8(&uStack_80,&uStack_c8);
    }
  }
  else {
    lVar4 = FUN_108855b04(param_2,&uStack_61,&UNK_10b209cc0);
  }
LAB_10140f8c4:
  param_1[1] = lVar4;
  uVar3 = 2;
LAB_10140f8cc:
  *param_1 = uVar3;
  return;
code_r0x00010140f6e0:
  uStack_80 = uStack_c8;
  lStack_70 = lStack_b8;
  lStack_78 = lStack_c0;
  FUN_100f38238(&lStack_148,&lStack_e0,&uStack_80,&uStack_b0);
  if ((lStack_148 != -0x8000000000000000) && (lStack_148 != 0)) {
    _free(lStack_140);
  }
  goto LAB_10140f6c0;
}

