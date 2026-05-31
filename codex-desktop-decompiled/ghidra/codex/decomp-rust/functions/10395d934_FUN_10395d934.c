
void FUN_10395d934(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong extraout_x1;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  ulong uStack_1c0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = param_1;
  uVar10 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar10 = 6;
  }
  if (2 < (long)uVar10) {
    if ((long)uVar10 < 5) {
LAB_10395d988:
      uVar10 = param_2[4];
      uVar18 = param_2[7];
      uVar14 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar10;
      param_1[7] = uVar18;
      param_1[6] = uVar14;
      uVar10 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar10;
      uVar18 = *param_2;
      uVar14 = param_2[3];
      uVar10 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar18;
      param_1[3] = uVar14;
      param_1[2] = uVar10;
      return;
    }
    if (uVar10 == 5) {
      uVar10 = param_2[3];
      lVar17 = uVar10 * 0x50;
      if (uVar10 < 0x19999999999999a) {
        if (lVar17 == 0) {
          uStack_c0 = 0;
          puStack_b8 = (undefined8 *)0x8;
LAB_10395dba8:
          param_1[2] = (ulong)puStack_b8;
          param_1[1] = uStack_c0;
          param_1[3] = uVar10;
          *param_1 = 0x8000000000000005;
          return;
        }
        uVar14 = param_2[2];
        puVar8 = (undefined8 *)_malloc(lVar17);
        if (puVar8 != (undefined8 *)0x0) {
          uStack_c0 = uVar10;
          puStack_b8 = puVar8;
          if (uVar10 != 0) {
            uVar18 = 0;
            do {
              if (lVar17 == 0) break;
              FUN_10395d934(&uStack_198,uVar14);
              uVar18 = uVar18 + 1;
              uVar14 = uVar14 + 0x50;
              puVar8[5] = uStack_170;
              puVar8[4] = uStack_178;
              puVar8[7] = uStack_160;
              puVar8[6] = uStack_168;
              puVar8[9] = uStack_150;
              puVar8[8] = uStack_158;
              puVar8[1] = uStack_190;
              *puVar8 = uStack_198;
              puVar8[3] = uStack_180;
              puVar8[2] = uStack_188;
              lVar17 = lVar17 + -0x50;
              puVar8 = puVar8 + 10;
            } while (uVar10 != uVar18);
          }
          goto LAB_10395dba8;
        }
        func_0x0001087c9084(8,lVar17);
        goto LAB_10395dec0;
      }
      auVar20 = func_0x0001087c9084(0,lVar17);
      goto LAB_10395d9dc;
    }
    uStack_128 = 0;
    puStack_130 = &UNK_108d961a0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_140 = 8;
    uStack_138 = 0;
    func_0x0001039475ec(&puStack_130,param_2 + 3);
    uVar14 = uStack_138;
    uVar10 = uStack_148;
    uVar18 = param_2[2];
    puVar8 = (undefined8 *)uStack_140;
    if (uVar18 <= uStack_148) {
      uVar19 = param_2[1];
      goto joined_r0x00010395dbe0;
    }
    uVar11 = uVar18 - uStack_138;
    uVar19 = uStack_120 + uStack_118;
    uStack_1c0 = uVar19;
    if (0x124924924924923 < uVar19) {
      uStack_1c0 = 0x124924924924924;
    }
    if (uStack_1c0 - uStack_138 <= uVar11) {
      uVar13 = uStack_148 - uStack_138;
      goto LAB_10395db78;
    }
    uVar13 = uStack_148 - uStack_138;
    if (uStack_1c0 - uStack_138 <= uVar13) {
      uVar19 = param_2[1];
      goto joined_r0x00010395dbe0;
    }
    if (uVar19 < uStack_138) {
LAB_10395db78:
      if (uVar13 < uVar11) {
        if (uVar14 <= uVar18) {
          func_0x000108950c84(&uStack_c0,uVar10,uStack_140,uVar18,8,0x70);
          if ((int)uStack_c0 == 1) goto LAB_10395dec0;
          uVar19 = param_2[1];
          uVar10 = uVar18;
          uStack_148 = uVar18;
          puVar8 = puStack_b8;
          goto joined_r0x00010395dbe0;
        }
        goto LAB_10395debc;
      }
      uStack_1c0 = uVar10;
    }
    else {
      func_0x000108950c84(&uStack_c0,uStack_148,uStack_140,uStack_1c0,8,0x70);
      if ((int)uStack_c0 == 1) goto LAB_10395db78;
      uStack_140 = (ulong)puStack_b8;
      uStack_148 = uStack_1c0;
    }
    uVar19 = param_2[1];
    uVar10 = uStack_1c0;
    puVar8 = (undefined8 *)uStack_140;
joined_r0x00010395dbe0:
    uStack_140 = (ulong)puVar8;
    if (uVar18 <= uVar14) {
      lVar17 = (uVar14 - uVar18) + 1;
      plVar12 = (long *)((long)puVar8 + uVar18 * 0x70);
      uStack_138 = uVar18;
      while (lVar17 = lVar17 + -1, uVar14 = uVar18, lVar17 != 0) {
        if (*plVar12 != 0) {
          _free(plVar12[1]);
        }
        FUN_103938604(plVar12 + 3);
        plVar12 = plVar12 + 0xe;
      }
    }
    if (uVar14 != 0) {
      lVar17 = 0;
      uVar11 = uVar14;
      do {
        uVar15 = 0;
        puVar1 = (ulong *)((long)puVar8 + lVar17);
        lVar7 = uVar19 + lVar17;
        puVar1[0xd] = *(ulong *)(lVar7 + 0x68);
        uVar3 = *(undefined8 *)(lVar7 + 8);
        uVar13 = *(ulong *)(lVar7 + 0x10);
        puVar1[2] = 0;
        if (*puVar1 < uVar13) {
          FUN_1087c9198(puVar1,0,uVar13);
          uVar15 = puVar1[2];
        }
        _memcpy(puVar1[1] + uVar15,uVar3,uVar13);
        puVar1[2] = uVar15 + uVar13;
        FUN_10395d934(&uStack_c0,lVar7 + 0x18);
        FUN_103938604(puVar1 + 3);
        puVar1[6] = uStack_a8;
        puVar1[5] = uStack_b0;
        puVar1[8] = uStack_98;
        puVar1[7] = uStack_a0;
        puVar1[10] = uStack_88;
        puVar1[9] = uStack_90;
        puVar1[0xc] = uStack_78;
        puVar1[0xb] = uStack_80;
        puVar1[4] = (ulong)puStack_b8;
        puVar1[3] = uStack_c0;
        lVar17 = lVar17 + 0x70;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uVar13 = uVar18 - uVar14;
    uVar11 = uStack_138;
    if (uVar10 - uVar14 < uVar13) {
      FUN_108950dcc(&uStack_148,uVar14,uVar13,8,0x70);
      puVar8 = (undefined8 *)uStack_140;
      uVar11 = uStack_138;
    }
    if (uVar18 != uVar14) {
      lVar17 = 0;
      lVar7 = uVar11 * 0x70;
      uStack_138 = uVar11;
      do {
        lVar2 = uVar19 + uVar14 * 0x70 + lVar17;
        lVar16 = *(long *)(lVar2 + 0x68);
        uVar3 = *(undefined8 *)(lVar2 + 8);
        lVar4 = *(long *)(lVar2 + 0x10);
        if (lVar4 == 0) {
          lVar9 = 1;
        }
        else {
          lVar9 = _malloc(lVar4);
          if (lVar9 == 0) {
            func_0x0001087c9084(1,lVar4);
            goto LAB_10395dec4;
          }
        }
        _memcpy(lVar9,uVar3,lVar4);
        FUN_10395d934(&uStack_c0,lVar2 + 0x18);
        plVar12 = (long *)((long)puVar8 + lVar7 + lVar17);
        *plVar12 = lVar4;
        plVar12[1] = lVar9;
        plVar12[2] = lVar4;
        plVar12[6] = uStack_a8;
        plVar12[5] = uStack_b0;
        plVar12[8] = uStack_98;
        plVar12[7] = uStack_a0;
        plVar12[10] = uStack_88;
        plVar12[9] = uStack_90;
        plVar12[0xc] = uStack_78;
        plVar12[0xb] = uStack_80;
        plVar12[4] = (long)puStack_b8;
        plVar12[3] = uStack_c0;
        uVar11 = uVar11 + 1;
        lVar17 = lVar17 + 0x70;
        plVar12[0xd] = lVar16;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uStack_138 = uVar11;
    param_1[1] = uStack_140;
    *param_1 = uStack_148;
    param_1[3] = (ulong)puStack_130;
    param_1[2] = uStack_138;
    param_1[5] = uStack_120;
    param_1[4] = uStack_128;
    param_1[6] = uStack_118;
    uVar10 = param_2[9];
    uVar5 = *(undefined1 *)((long)param_2 + 0x4a);
    uVar14 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar14;
    *(short *)(param_1 + 9) = (short)uVar10;
    *(undefined1 *)((long)param_1 + 0x4a) = uVar5;
    return;
  }
  if (uVar10 != 0) goto LAB_10395d988;
LAB_10395d9dc:
  puVar8 = auVar20._0_8_;
  uVar3 = *(undefined8 *)(auVar20._8_8_ + 0x10);
  lVar17 = *(long *)(auVar20._8_8_ + 0x18);
  if (lVar17 == 0) {
    lVar7 = 1;
LAB_10395db50:
    _memcpy(lVar7,uVar3,lVar17);
    puVar8[2] = lVar7;
    puVar8[3] = lVar17;
    *puVar8 = 0x8000000000000000;
    puVar8[1] = lVar17;
    return;
  }
  lVar7 = _malloc(lVar17);
  if (lVar7 != 0) goto LAB_10395db50;
  func_0x0001087c9084(1,lVar17);
  uVar10 = extraout_x1;
LAB_10395debc:
  puStack_b8 = (undefined8 *)0x0;
  uStack_b0 = uVar10;
LAB_10395dec0:
  func_0x0001087c9084(puStack_b8,uStack_b0);
LAB_10395dec4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10395dec8);
  (*pcVar6)();
}

