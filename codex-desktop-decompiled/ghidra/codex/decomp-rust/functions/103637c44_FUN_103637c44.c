
void FUN_103637c44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x26;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar8 = param_2[9];
  lVar2 = param_2[10];
  if (lVar2 != 0) {
    lVar6 = _malloc(lVar2);
    if (lVar6 != 0) goto LAB_103637c8c;
    func_0x0001087c9084(1,lVar2);
LAB_103638164:
    func_0x0001087c9084(1,unaff_x26);
    goto LAB_10363819c;
  }
  lVar6 = 1;
LAB_103637c8c:
  _memcpy(lVar6,uVar8,lVar2);
  if (param_2[0xb] == -0x8000000000000000) {
    lVar9 = -0x8000000000000000;
    if (param_2[0xe] == -0x8000000000000000) goto LAB_103637cbc;
LAB_103637db4:
    unaff_x20 = param_2[0xf];
    lStack_1c0 = param_2[0x10];
    if (lStack_1c0 == 0) {
      lStack_1e8 = 1;
    }
    else {
      lStack_1e8 = _malloc(lStack_1c0);
      if (lStack_1e8 == 0) {
        func_0x0001087c9084(1,lStack_1c0);
        goto LAB_10363819c;
      }
    }
    _memcpy(lStack_1e8,unaff_x20,lStack_1c0);
    if (param_2[0x11] != -0x8000000000000000) goto LAB_103637e08;
LAB_103637cd0:
    lStack_1c8 = -0x8000000000000000;
    if (param_2[0x14] == -0x8000000000000000) goto LAB_103637ce4;
LAB_103637e58:
    unaff_x20 = param_2[0x15];
    lStack_1d0 = param_2[0x16];
    if (lStack_1d0 == 0) {
      lStack_1f8 = 1;
    }
    else {
      lStack_1f8 = _malloc(lStack_1d0);
      if (lStack_1f8 == 0) {
        func_0x0001087c9084(1,lStack_1d0);
        goto LAB_10363819c;
      }
    }
    _memcpy(lStack_1f8,unaff_x20,lStack_1d0);
    if (param_2[0x17] != -0x8000000000000000) goto LAB_103637eb0;
LAB_103637d00:
    lStack_1b8 = -0x8000000000000000;
    lStack_160 = param_2[0x22];
    lVar10 = lStack_1c0;
    if (lStack_160 != -0x8000000000000000) goto LAB_103637d1c;
LAB_103637f7c:
    if (param_2[0x25] == -0x8000000000000000) goto LAB_103637f88;
LAB_103637fc0:
    uVar8 = param_2[0x26];
    lStack_148 = param_2[0x27];
    if (lStack_148 == 0) {
      lStack_140 = 1;
    }
    else {
      lStack_140 = _malloc(lStack_148);
      if (lStack_140 == 0) {
        func_0x0001087c9084(1,lStack_148);
LAB_10363819c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1036381a0);
        (*pcVar5)();
      }
    }
    _memcpy(lStack_140,uVar8,lStack_148);
    lStack_158 = unaff_x20;
    lStack_150 = lStack_160;
    lStack_138 = lStack_148;
    if (param_2[0x28] == 0) goto LAB_103637d34;
LAB_10363800c:
    FUN_10363a0d0(&uStack_a0,param_2 + 0x28);
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    if (param_2[0x2e] != 0) goto LAB_103638030;
LAB_103637d40:
    uStack_100 = 0;
    if (param_2[0x34] == 0) {
      uVar8 = 0;
      goto LAB_103638078;
    }
  }
  else {
    unaff_x20 = param_2[0xc];
    lVar9 = param_2[0xd];
    if (lVar9 == 0) {
      lStack_1e0 = 1;
    }
    else {
      lStack_1e0 = _malloc(lVar9);
      if (lStack_1e0 == 0) {
        func_0x0001087c9084(1,lVar9);
        goto LAB_10363819c;
      }
    }
    _memcpy(lStack_1e0,unaff_x20,lVar9);
    if (param_2[0xe] != -0x8000000000000000) goto LAB_103637db4;
LAB_103637cbc:
    lStack_1c0 = -0x8000000000000000;
    if (param_2[0x11] == -0x8000000000000000) goto LAB_103637cd0;
LAB_103637e08:
    unaff_x20 = param_2[0x12];
    lStack_1c8 = param_2[0x13];
    if (lStack_1c8 == 0) {
      lStack_1f0 = 1;
    }
    else {
      lStack_1f0 = _malloc(lStack_1c8);
      if (lStack_1f0 == 0) {
        func_0x0001087c9084(1,lStack_1c8);
        goto LAB_10363819c;
      }
    }
    _memcpy(lStack_1f0,unaff_x20,lStack_1c8);
    if (param_2[0x14] != -0x8000000000000000) goto LAB_103637e58;
LAB_103637ce4:
    lStack_1d0 = -0x8000000000000000;
    if (param_2[0x17] == -0x8000000000000000) goto LAB_103637d00;
LAB_103637eb0:
    uVar8 = param_2[0x18];
    unaff_x26 = param_2[0x19];
    if (unaff_x26 == 0) {
      unaff_x20 = 1;
    }
    else {
      unaff_x20 = _malloc(unaff_x26);
      if (unaff_x20 == 0) goto LAB_103638164;
    }
    _memcpy(unaff_x20,uVar8,unaff_x26);
    func_0x0001035ad330(&uStack_a0,param_2[0x1b],param_2[0x1c]);
    uStack_170 = param_2[0x20];
    uStack_168 = param_2[0x21];
    lVar10 = param_2[0x1e];
    lStack_188 = param_2[0x1f];
    if (lStack_188 == 0) {
      lStack_180 = 1;
    }
    else {
      lStack_180 = _malloc(lStack_188);
      if (lStack_180 == 0) {
        func_0x0001087c9084(1,lStack_188);
        goto LAB_10363819c;
      }
    }
    _memcpy(lStack_180,lVar10,lStack_188);
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_190 = uStack_90;
    lStack_160 = param_2[0x22];
    lStack_1b8 = unaff_x26;
    lStack_1b0 = unaff_x20;
    lStack_1a8 = unaff_x26;
    lStack_178 = lStack_188;
    if (lStack_160 == -0x8000000000000000) goto LAB_103637f7c;
LAB_103637d1c:
    if (lStack_160 == -0x7fffffffffffffff) {
      lStack_160 = -0x7fffffffffffffff;
      lVar7 = param_2[0x28];
    }
    else {
      lVar10 = param_2[0x23];
      lStack_160 = param_2[0x24];
      if (lStack_160 == 0) {
        unaff_x20 = 1;
      }
      else {
        unaff_x20 = _malloc(lStack_160);
        if (unaff_x20 == 0) {
          func_0x0001087c9084(1,lStack_160);
          goto LAB_10363819c;
        }
      }
      _memcpy(unaff_x20,lVar10,lStack_160);
      if (param_2[0x25] != -0x8000000000000000) goto LAB_103637fc0;
LAB_103637f88:
      lStack_138 = -0x8000000000000000;
      lStack_148 = -0x8000000000000000;
      lVar7 = param_2[0x28];
      lStack_140 = lVar10;
      lStack_150 = lStack_160;
      lStack_158 = unaff_x20;
    }
    if (lVar7 != 0) goto LAB_10363800c;
LAB_103637d34:
    uStack_130 = 0;
    if (param_2[0x2e] == 0) goto LAB_103637d40;
LAB_103638030:
    FUN_10363a0d0(&uStack_a0,param_2 + 0x2e);
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_88;
    uStack_f0 = uStack_90;
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    uVar8 = 0;
    if (param_2[0x34] == 0) goto LAB_103638078;
  }
  FUN_10363a0d0(&uStack_a0,param_2 + 0x34);
  uStack_c8 = uStack_90;
  uStack_d0 = uStack_98;
  uStack_b8 = uStack_80;
  uStack_c0 = uStack_88;
  uStack_b0 = uStack_78;
  uVar8 = uStack_a0;
LAB_103638078:
  uVar12 = param_2[1];
  uVar11 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  uVar16 = param_2[5];
  uVar15 = param_2[4];
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = *(undefined2 *)(param_2 + 0x3a);
  param_1[8] = lVar2;
  param_1[9] = lVar6;
  param_1[10] = lVar2;
  param_1[0xb] = lVar9;
  param_1[0xc] = lStack_1e0;
  param_1[0xd] = lVar9;
  param_1[0xe] = lStack_1c0;
  param_1[0xf] = lStack_1e8;
  param_1[0x10] = lStack_1c0;
  param_1[0x11] = lStack_1c8;
  param_1[0x12] = lStack_1f0;
  param_1[0x13] = lStack_1c8;
  param_1[0x14] = lStack_1d0;
  param_1[0x15] = lStack_1f8;
  param_1[0x16] = lStack_1d0;
  param_1[0x21] = uStack_168;
  param_1[0x20] = uStack_170;
  param_1[0x1f] = lStack_178;
  param_1[0x1e] = lStack_180;
  param_1[0x1d] = lStack_188;
  param_1[0x1c] = uStack_190;
  param_1[0x1b] = uStack_198;
  param_1[0x1a] = uStack_1a0;
  param_1[0x19] = lStack_1a8;
  param_1[0x18] = lStack_1b0;
  param_1[0x17] = lStack_1b8;
  param_1[0x23] = lStack_158;
  param_1[0x22] = lStack_160;
  param_1[0x25] = lStack_148;
  param_1[0x24] = lStack_150;
  param_1[0x2b] = uStack_118;
  param_1[0x2a] = uStack_120;
  param_1[0x2d] = uStack_108;
  param_1[0x2c] = uStack_110;
  param_1[0x27] = lStack_138;
  param_1[0x26] = lStack_140;
  param_1[0x29] = uStack_128;
  param_1[0x28] = uStack_130;
  param_1[0x31] = uStack_e8;
  param_1[0x30] = uStack_f0;
  param_1[0x33] = uStack_d8;
  param_1[0x32] = uStack_e0;
  param_1[0x2f] = uStack_f8;
  param_1[0x2e] = uStack_100;
  param_1[0x34] = uVar8;
  param_1[0x39] = uStack_b0;
  param_1[0x36] = uStack_c8;
  param_1[0x35] = uStack_d0;
  param_1[0x38] = uStack_b8;
  param_1[0x37] = uStack_c0;
  param_1[1] = uVar12;
  *param_1 = uVar11;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  param_1[5] = uVar16;
  param_1[4] = uVar15;
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  *(undefined2 *)(param_1 + 0x3a) = uVar4;
  return;
}

