
void FUN_103620068(long *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x24;
  long unaff_x25;
  ulong uVar13;
  long lStack_210;
  long lStack_208;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  if (*param_2 == 1) {
    uVar1 = *(undefined8 *)(param_2 + 0x22);
    lVar10 = *(long *)(param_2 + 0x24);
    if (lVar10 == 0) {
      lVar9 = 1;
LAB_1036200dc:
      _memcpy(lVar9,uVar1,lVar10);
      lVar12 = -0x8000000000000000;
      if (*(long *)(param_2 + 0x1a) == -0x8000000000000000) {
        if (*(long *)(param_2 + 2) != 0) goto LAB_103620108;
LAB_103620208:
        lStack_a0 = 0;
        lStack_1a0 = 0;
        if (*(long *)(param_2 + 0xe) != 0) goto LAB_103620218;
      }
      else {
        uVar1 = *(undefined8 *)(param_2 + 0x1c);
        lVar12 = *(long *)(param_2 + 0x1e);
        if (lVar12 == 0) {
          unaff_x24 = 1;
        }
        else {
          unaff_x24 = _malloc(lVar12);
          if (unaff_x24 == 0) {
            func_0x0001087c9084(1,lVar12);
            goto LAB_10362067c;
          }
        }
        _memcpy(unaff_x24,uVar1,lVar12);
        if (*(long *)(param_2 + 2) == 0) goto LAB_103620208;
LAB_103620108:
        FUN_10363a0d0(&lStack_1d8);
        lStack_98 = lStack_1d0;
        lStack_a0 = lStack_1d8;
        lStack_88 = lStack_1c0;
        lStack_90 = lStack_1c8;
        lStack_78 = lStack_1b0;
        lStack_80 = lStack_1b8;
        if (*(long *)(param_2 + 0xe) == 0) {
          lStack_1a0 = 0;
        }
        else {
LAB_103620218:
          FUN_10363a0d0(&lStack_1d8);
          lStack_138 = lStack_1c8;
          lStack_140 = lStack_1d0;
          lStack_128 = lStack_1b8;
          lStack_130 = lStack_1c0;
          lStack_120 = lStack_1b0;
          lStack_1a0 = lStack_1d8;
        }
      }
      lStack_178 = lStack_120;
      lStack_180 = lStack_128;
      lStack_188 = lStack_130;
      lStack_190 = lStack_138;
      lStack_198 = lStack_140;
      lStack_1d8 = 1;
      lStack_170 = lVar12;
      lStack_168 = unaff_x24;
      lStack_160 = lVar12;
      lStack_158 = lVar10;
      lStack_150 = lVar9;
      lStack_148 = lVar10;
      if (*(long *)(param_2 + 0x26) != -0x8000000000000000) goto LAB_1036202f0;
LAB_103620280:
      lStack_1e0 = -0x8000000000000000;
      lStack_1d0 = lStack_a0;
      lStack_1c8 = lStack_98;
      lStack_1c0 = lStack_90;
      lStack_1b8 = lStack_88;
      lStack_1b0 = lStack_80;
      lStack_1a8 = lStack_78;
      goto LAB_10362032c;
    }
    lVar9 = _malloc(lVar10);
    if (lVar9 != 0) goto LAB_1036200dc;
LAB_103620654:
    func_0x0001087c9084(1,lVar10);
LAB_103620660:
    func_0x0001087c9084(1,unaff_x25);
LAB_10362067c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x103620680);
    (*pcVar8)();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x16);
  lVar10 = *(long *)(param_2 + 0x18);
  if (lVar10 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = _malloc(lVar10);
    if (lVar9 == 0) goto LAB_103620654;
  }
  _memcpy(lVar9,uVar1,lVar10);
  func_0x0001035ad330(&lStack_d0,*(undefined8 *)(param_2 + 0x1c),*(undefined8 *)(param_2 + 0x1e));
  if (*(long *)(param_2 + 2) == 0) {
    lStack_a0 = 0;
  }
  else {
    FUN_10363a0d0(&lStack_1d8);
    lStack_98 = lStack_1d0;
    lStack_a0 = lStack_1d8;
    lStack_88 = lStack_1c0;
    lStack_90 = lStack_1c8;
    lStack_78 = lStack_1b0;
    lStack_80 = lStack_1b8;
  }
  func_0x0001035ad86c(&lStack_140,*(undefined8 *)(param_2 + 0x22),*(undefined8 *)(param_2 + 0x24));
  lVar12 = -0x8000000000000000;
  if (*(long *)(param_2 + 0xe) != -0x8000000000000000) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x12);
    if (lVar12 == 0) {
      unaff_x24 = 1;
    }
    else {
      unaff_x24 = _malloc(lVar12);
      if (unaff_x24 == 0) {
        func_0x0001087c9084(1,lVar12);
        goto LAB_10362067c;
      }
    }
    _memcpy(unaff_x24,uVar1,lVar12);
  }
  lStack_168 = lStack_c8;
  lStack_170 = lStack_d0;
  lStack_160 = lStack_c0;
  lStack_150 = lStack_138;
  lStack_158 = lStack_140;
  lStack_148 = lStack_130;
  lStack_1d8 = 0;
  lStack_1a0 = lVar12;
  lStack_198 = unaff_x24;
  lStack_190 = lVar12;
  lStack_188 = lVar10;
  lStack_180 = lVar9;
  lStack_178 = lVar10;
  if (*(long *)(param_2 + 0x26) == -0x8000000000000000) goto LAB_103620280;
LAB_1036202f0:
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  lStack_1e0 = *(long *)(param_2 + 0x2a);
  lStack_1d0 = lStack_a0;
  lStack_1c8 = lStack_98;
  lStack_1c0 = lStack_90;
  lStack_1b8 = lStack_88;
  lStack_1b0 = lStack_80;
  lStack_1a8 = lStack_78;
  if (lStack_1e0 == 0) {
    lStack_208 = 1;
  }
  else {
    lStack_208 = _malloc(lStack_1e0);
    if (lStack_208 == 0) {
      func_0x0001087c9084(1,lStack_1e0);
      goto LAB_10362067c;
    }
  }
  _memcpy(lStack_208,uVar1,lStack_1e0);
LAB_10362032c:
  iVar7 = param_2[0x6a];
  uVar4 = *(undefined1 *)((long)param_2 + 0x1a9);
  bVar5 = *(byte *)((long)param_2 + 0x1aa);
  uVar13 = (ulong)bVar5;
  if (*(long *)(param_2 + 0x4a) == -0x7ffffffffffffff9) {
    lStack_140 = -0x7ffffffffffffff9;
  }
  else {
    lVar10 = -0x7ffffffffffffffa;
    if (*(long *)(param_2 + 0x4a) != -0x7ffffffffffffffa) {
      FUN_1037e1404(&lStack_a0,param_2 + 0x4a);
      lStack_c8 = lStack_90;
      lStack_d0 = lStack_98;
      lStack_b8 = lStack_80;
      lStack_c0 = lStack_88;
      lStack_b0 = lStack_78;
      lVar10 = lStack_a0;
    }
    lStack_130 = lStack_c8;
    lStack_138 = lStack_d0;
    lStack_120 = lStack_b8;
    lStack_128 = lStack_c0;
    lStack_118 = lStack_b0;
    lStack_140 = lVar10;
  }
  iVar2 = param_2[0x58];
  lVar9 = *(long *)(param_2 + 0x56);
  iVar3 = param_2[0x5c];
  lVar10 = *(long *)(param_2 + 0x5a);
  uVar6 = *(undefined1 *)((long)param_2 + 0x1ab);
  if (*(long *)(param_2 + 0x2c) == -0x8000000000000000) {
    lStack_110 = -0x8000000000000000;
    if (*(long *)(param_2 + 0x32) == -0x8000000000000000) goto LAB_1036203e0;
LAB_103620458:
    func_0x0001035ad330(&lStack_a0,*(undefined8 *)(param_2 + 0x34),*(undefined8 *)(param_2 + 0x36));
    lStack_e8 = lStack_98;
    lStack_f0 = lStack_a0;
    lStack_e0 = lStack_90;
    if (*(long *)(param_2 + 0x38) != -0x8000000000000000) goto LAB_103620488;
LAB_1036203f8:
    lStack_d0 = -0x8000000000000000;
    lVar12 = *(long *)(param_2 + 0x44);
    if (lVar12 < -0x7ffffffffffffffe) goto LAB_103620410;
LAB_1036204b8:
    uVar1 = *(undefined8 *)(param_2 + 0x46);
    lVar12 = *(long *)(param_2 + 0x48);
    if (lVar12 == 0) {
      lStack_210 = 1;
    }
    else {
      lStack_210 = _malloc(lVar12);
      if (lStack_210 == 0) {
        func_0x0001087c9084(1,lVar12);
        goto LAB_10362067c;
      }
    }
    _memcpy(lStack_210,uVar1,lVar12);
    lVar11 = *(long *)(param_2 + 0x3e);
  }
  else {
    func_0x0001035ad330(&lStack_a0,*(undefined8 *)(param_2 + 0x2e),*(undefined8 *)(param_2 + 0x30));
    lStack_108 = lStack_98;
    lStack_110 = lStack_a0;
    lStack_100 = lStack_90;
    if (*(long *)(param_2 + 0x32) != -0x8000000000000000) goto LAB_103620458;
LAB_1036203e0:
    lStack_f0 = -0x8000000000000000;
    if (*(long *)(param_2 + 0x38) == -0x8000000000000000) goto LAB_1036203f8;
LAB_103620488:
    func_0x0001035ad330(&lStack_a0,*(undefined8 *)(param_2 + 0x3a),*(undefined8 *)(param_2 + 0x3c));
    lStack_c8 = lStack_98;
    lStack_d0 = lStack_a0;
    lStack_c0 = lStack_90;
    lVar12 = *(long *)(param_2 + 0x44);
    if (-0x7fffffffffffffff < lVar12) goto LAB_1036204b8;
LAB_103620410:
    lVar11 = *(long *)(param_2 + 0x3e);
  }
  if (lVar11 == -0x8000000000000000) {
    unaff_x25 = -0x8000000000000000;
    goto LAB_103620548;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  unaff_x25 = *(long *)(param_2 + 0x42);
  if (unaff_x25 == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = _malloc(unaff_x25);
    if (uVar13 == 0) goto LAB_103620660;
  }
  _memcpy(uVar13,uVar1,unaff_x25);
LAB_103620548:
  func_0x00010363a684(&lStack_a0,param_2 + 0x5e);
  param_1[0x30] = lStack_98;
  param_1[0x2f] = lStack_a0;
  param_1[0x32] = lStack_88;
  param_1[0x31] = lStack_90;
  param_1[0x34] = lStack_78;
  param_1[0x33] = lStack_80;
  param_1[0xd] = lStack_170;
  param_1[0xc] = lStack_178;
  param_1[0xf] = lStack_160;
  param_1[0xe] = lStack_168;
  param_1[0x11] = lStack_150;
  param_1[0x10] = lStack_158;
  param_1[5] = lStack_1b0;
  param_1[4] = lStack_1b8;
  param_1[7] = lStack_1a0;
  param_1[6] = lStack_1a8;
  param_1[9] = lStack_190;
  param_1[8] = lStack_198;
  param_1[0xb] = lStack_180;
  param_1[10] = lStack_188;
  param_1[1] = lStack_1d0;
  *param_1 = lStack_1d8;
  param_1[3] = lStack_1c0;
  param_1[2] = lStack_1c8;
  param_1[0x26] = lStack_138;
  param_1[0x25] = lStack_140;
  param_1[0x28] = lStack_128;
  param_1[0x27] = lStack_130;
  param_1[0x2a] = lStack_118;
  param_1[0x29] = lStack_120;
  param_1[0x12] = lStack_148;
  param_1[0x13] = lStack_1e0;
  param_1[0x14] = lStack_208;
  param_1[0x15] = lStack_1e0;
  *(char *)(param_1 + 0x35) = (char)iVar7;
  *(undefined1 *)((long)param_1 + 0x1a9) = uVar4;
  *(byte *)((long)param_1 + 0x1aa) = bVar5;
  param_1[0x2b] = lVar9;
  *(int *)(param_1 + 0x2c) = iVar2;
  param_1[0x2d] = lVar10;
  *(int *)(param_1 + 0x2e) = iVar3;
  *(undefined1 *)((long)param_1 + 0x1ab) = uVar6;
  param_1[0x18] = lStack_100;
  param_1[0x17] = lStack_108;
  param_1[0x16] = lStack_110;
  param_1[0x1b] = lStack_e0;
  param_1[0x1a] = lStack_e8;
  param_1[0x19] = lStack_f0;
  param_1[0x1d] = lStack_c8;
  param_1[0x1c] = lStack_d0;
  param_1[0x22] = lVar12;
  param_1[0x23] = lStack_210;
  param_1[0x24] = lVar12;
  param_1[0x1e] = lStack_c0;
  param_1[0x1f] = unaff_x25;
  param_1[0x20] = uVar13;
  param_1[0x21] = unaff_x25;
  return;
}

