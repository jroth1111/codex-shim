
/* WARNING: Possible PIC construction at 0x0001017ab1c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017ab1cc) */
/* WARNING: Removing unreachable block (ram,0x0001017ab1fc) */

void FUN_1017aac24(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  code *pcVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  ulong uVar12;
  ulong *puVar14;
  undefined *puVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  uint *puVar22;
  int *piVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  undefined1 uVar31;
  long lVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined *puStack_318;
  undefined *puStack_310;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a0;
  undefined *puStack_298;
  ulong uStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  long lStack_218;
  undefined *puStack_210;
  ulong uStack_208;
  undefined1 **ppuStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1e8;
  uint uStack_1dc;
  undefined *puStack_1d8;
  long lStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  ulong *puStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  long *plStack_120;
  ulong uStack_118;
  long *plStack_110;
  ulong uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long *plVar13;
  
  uVar12 = FUN_1017ab888(param_2);
  if ((uVar12 & 1) == 0) {
    lStack_e0 = *param_2;
    plStack_d8 = param_1;
    puStack_c8 = param_3;
    if (lStack_e0 == 2) {
      uStack_98 = param_2[2];
      uStack_a0 = param_2[1];
      uStack_c0 = uStack_a0 ^ 0x736f6d6570736575;
      uStack_b8 = uStack_a0 ^ 0x6c7967656e657261;
      uStack_b0 = uStack_98 ^ 0x646f72616e646f6d;
      uStack_a8 = uStack_98 ^ 0x7465646279746573;
      uStack_88 = 0;
      uStack_80 = 0;
      lStack_90 = 0;
      puVar35 = (undefined8 *)*param_3;
      bVar9 = puVar35 == (undefined8 *)0x0;
      uStack_78 = (ulong)!bVar9;
      FUN_1017b6ba0(&uStack_c0,&uStack_78,8);
      puStack_e8 = puVar35;
      if (puVar35 == (undefined8 *)0x0) {
        uVar12 = (ulong)*(byte *)(param_3 + 1);
        uStack_78 = uVar12;
        FUN_1017b6ba0(&uStack_c0,&uStack_78,8);
      }
      else {
        uVar36 = param_3[1];
        FUN_1017b6ba0(&uStack_c0,uVar36,param_3[2]);
        uVar12 = (ulong)((uint)uVar36 & 0xff);
      }
      uVar30 = uStack_88 | lStack_90 << 0x38;
      uVar28 = uVar30 ^ uStack_a8;
      uVar19 = uStack_b0 + uStack_c0;
      uVar24 = uVar19 ^ (uStack_b0 >> 0x33 | uStack_b0 << 0xd);
      uVar18 = uVar28 + uStack_b8 + uVar24;
      uVar28 = uVar28 + uStack_b8 ^ (uVar28 >> 0x30 | uVar28 << 0x10);
      uVar25 = uVar18 ^ (uVar24 >> 0x2f | uVar24 << 0x11);
      uVar19 = uVar28 + (uVar19 >> 0x20 | uVar19 << 0x20);
      uVar24 = uVar19 ^ (uVar28 >> 0x2b | uVar28 << 0x15);
      uVar19 = (uVar19 ^ uVar30) + uVar25;
      uVar25 = uVar19 ^ (uVar25 >> 0x33 | uVar25 << 0xd);
      uVar18 = uVar24 + ((uVar18 >> 0x20 | uVar18 << 0x20) ^ 0xff);
      uVar28 = uVar25 + uVar18;
      uVar18 = uVar18 ^ (uVar24 >> 0x30 | uVar24 << 0x10);
      uVar25 = uVar28 ^ (uVar25 >> 0x2f | uVar25 << 0x11);
      uVar19 = uVar18 + (uVar19 >> 0x20 | uVar19 << 0x20);
      uVar24 = uVar25 + uVar19;
      uVar19 = uVar19 ^ (uVar18 >> 0x2b | uVar18 << 0x15);
      uVar25 = uVar24 ^ (uVar25 >> 0x33 | uVar25 << 0xd);
      uVar18 = uVar19 + (uVar28 >> 0x20 | uVar28 << 0x20);
      uVar28 = uVar25 + uVar18;
      uVar18 = uVar18 ^ (uVar19 >> 0x30 | uVar19 << 0x10);
      uVar25 = uVar28 ^ (uVar25 >> 0x2f | uVar25 << 0x11);
      uVar19 = uVar18 + (uVar24 >> 0x20 | uVar24 << 0x20);
      uVar18 = uVar19 ^ (uVar18 >> 0x2b | uVar18 << 0x15);
      uVar19 = uVar25 + uVar19 ^ (uVar25 >> 0x33 | uVar25 << 0xd);
      lVar21 = uVar18 + (uVar28 >> 0x20 | uVar28 << 0x20);
      lVar32 = uVar19 + lVar21;
      uVar17 = ((uint)((ulong)lVar21 >> 0x20) ^ (uint)(uVar18 >> 0x10)) >> 0xb ^
               (uint)(uVar19 >> 0x2f) ^ (uint)((ulong)lVar32 >> 0x20) ^ (uint)lVar32;
    }
    else {
      puStack_e8 = (undefined8 *)*param_3;
      uVar17 = (puStack_e8 != (undefined8 *)0x0 ^ 0x2325) * 0x4a21;
      if (puStack_e8 == (undefined8 *)0x0) {
        puStack_e8 = (undefined8 *)0x0;
        uVar12 = (ulong)*(byte *)(param_3 + 1);
        uVar17 = (*(byte *)(param_3 + 1) ^ 0xa2d39c5) * 0x4a21;
        bVar9 = true;
      }
      else {
        uVar12 = (ulong)((uint)(byte *)param_3[1] & 0xff);
        pbVar7 = (byte *)param_3[1];
        for (lVar21 = param_3[2]; lVar21 != 0; lVar21 = lVar21 + -1) {
          uVar17 = (uVar17 ^ *pbVar7) * 0x1b3;
          pbVar7 = pbVar7 + 1;
        }
        bVar9 = false;
      }
    }
    uVar19 = 0;
    uVar17 = uVar17 & 0x7fff;
    uVar4 = *(ushort *)(param_2 + 0xb);
    uVar18 = (ulong)(uVar17 & uVar4);
    lVar21 = param_2[9];
    uVar28 = param_2[10];
    lVar32 = param_2[4];
    uVar24 = param_2[5];
    plStack_d0 = param_2;
    do {
      if ((uVar28 <= uVar18) && (uVar18 = 0, uVar28 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar21 + uVar18 * 4);
      uVar25 = (ulong)*puVar1;
      if ((uVar25 == 0xffff) ||
         (uVar10 = puVar1[1],
         ((ulong)((int)uVar18 - (uint)(uVar10 & uVar4)) & (ulong)uVar4) < uVar19)) {
        uVar31 = (lStack_e0 != 2 && 0x1fe < uVar19) && (lStack_e0 == 2 || uVar19 != 0x1ff);
        if (puStack_e8 == (undefined8 *)0x0) {
          uVar19 = 0;
          uStack_c0 = 0;
        }
        else {
          (*(code *)*puStack_e8)(&uStack_c0,puStack_c8 + 3,puStack_c8[1],puStack_c8[2]);
          uVar12 = uStack_b8 & 0xff;
          uStack_68 = uStack_a8;
          uStack_70 = uStack_b0;
          uVar19 = (uStack_b8 >> 8 & 0xffffffff) << 8 | uStack_b8 & 0xffffff0000000000;
        }
        *plStack_d8 = (long)plStack_d0;
        plStack_d8[1] = uStack_c0;
        plStack_d8[2] = uVar19 | uVar12;
        plStack_d8[4] = uStack_68;
        plStack_d8[3] = uStack_70;
        plStack_d8[5] = uVar18;
        *(short *)(plStack_d8 + 6) = (short)uVar17;
        param_1 = plStack_d8;
        goto LAB_1017aafc8;
      }
      if (uVar10 == uVar17) {
        if (uVar24 <= uVar25) {
          puVar14 = (ulong *)&UNK_10b259f90;
          auVar47 = func_0x000108a07bdc(uVar25);
          plVar13 = auVar47._8_8_;
          uStack_f8 = 0x1017ab010;
          lStack_150 = lVar32;
          lStack_148 = lVar21;
          uStack_140 = uVar19;
          uStack_138 = uVar18;
          uStack_130 = uVar12;
          uStack_128 = uVar25;
          plStack_120 = (long *)(ulong)uVar17;
          uStack_118 = uVar28;
          plStack_110 = param_1;
          uStack_108 = (ulong)uVar4;
          puStack_100 = &stack0xfffffffffffffff0;
          iVar11 = FUN_1017ab888(plVar13);
          if (iVar11 != 0) {
            *(undefined1 *)(auVar47._0_8_ + 0x20) = 3;
            (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
            if (*puVar14 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0001017ab098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*puVar14 + 0x20))(puVar14 + 3,puVar14[1],puVar14[2]);
            return;
          }
          lStack_1d0 = auVar47._0_8_;
          plStack_1c0 = param_4;
          uVar10 = FUN_1017aa7f0(plVar13,puVar14);
          uVar12 = 0;
          uVar4 = *(ushort *)(plVar13 + 0xb);
          uVar30 = (ulong)uVar4;
          uVar24 = (ulong)(uint)uVar10;
          uVar19 = (ulong)(uVar4 & uVar10);
          lVar21 = plVar13[9];
          uVar18 = plVar13[10];
          lVar32 = plVar13[4];
          puVar33 = (undefined *)plVar13[5];
          puVar37 = (undefined *)*puVar14;
          uVar28 = puVar14[1];
          uVar17 = (uint)(byte)puVar14[1];
          uVar25 = puVar14[2];
          plStack_1c8 = plVar13;
          puStack_1b8 = puVar14;
          goto LAB_1017ab0fc;
        }
        lVar20 = lVar32 + uVar25 * 0x68;
        if (bVar9 != (*(long *)(lVar20 + 0x40) != 0)) {
          if (*(long *)(lVar20 + 0x40) == 0) {
            if ((uint)*(byte *)(lVar20 + 0x48) == (uint)uVar12) goto LAB_1017aafec;
          }
          else if (*(long *)(lVar20 + 0x50) == puStack_c8[2]) {
            uVar36 = puStack_c8[1];
            uStack_f0 = uVar24;
            iVar11 = _memcmp(*(undefined8 *)(lVar20 + 0x48),uVar36);
            if (iVar11 == 0) goto LAB_1017aafec;
            uVar12 = (ulong)((uint)uVar36 & 0xff);
            uVar24 = uStack_f0;
            param_1 = (long *)(ulong)uVar17;
          }
        }
      }
      uVar19 = uVar19 + 1;
      uVar18 = uVar18 + 1;
    } while( true );
  }
  uVar31 = 3;
LAB_1017aafc8:
  *(undefined1 *)((long)param_1 + 0x32) = uVar31;
  return;
LAB_1017ab0fc:
  plVar13 = plStack_1c8;
  if ((uVar18 <= uVar19) && (uVar19 = 0, uVar18 == 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1 = (ushort *)(lVar21 + uVar19 * 4);
  puVar38 = (undefined *)(ulong)*puVar1;
  if (puVar38 == (undefined *)0xffff) {
    uStack_1a8 = puStack_1b8[1];
    uStack_1b0 = *puStack_1b8;
    uStack_198 = puStack_1b8[3];
    uStack_1a0 = puStack_1b8[2];
    lStack_178 = plStack_1c0[1];
    lStack_180 = *plStack_1c0;
    lStack_168 = plStack_1c0[3];
    lStack_170 = plStack_1c0[2];
    lStack_160 = plStack_1c0[4];
    plVar16 = &lStack_180;
    iVar11 = FUN_1017abbfc(plStack_1c8,uVar24,&uStack_1b0);
    if (iVar11 != 0) {
LAB_1017ab2c4:
      uVar31 = 3;
      goto LAB_1017ab2cc;
    }
    if (uVar19 < (ulong)plVar13[10]) {
      puVar2 = (undefined2 *)(plVar13[9] + uVar19 * 4);
      *puVar2 = (short)puVar33;
      puVar2[1] = uVar10;
      goto LAB_1017ab26c;
    }
    puVar15 = &UNK_10b259fc0;
    uVar12 = func_0x000108a07bdc(uVar19);
    if (*puStack_1b8 != 0) {
      puVar15 = (undefined *)puStack_1b8[2];
      (**(code **)(*puStack_1b8 + 0x20))(puStack_1b8 + 3,puStack_1b8[1]);
    }
    __Unwind_Resume(uVar12);
    uVar36 = 0x1017ab3fc;
    auVar47 = func_0x000108a07bc4();
    goto SUB_1017ab3fc;
  }
  uVar5 = puVar1[1];
  if (((int)uVar19 - (uint)(uVar5 & uVar4) & uVar30) < uVar12) {
    lVar21 = *plStack_1c8;
    uStack_1a8 = puStack_1b8[1];
    uStack_1b0 = *puStack_1b8;
    uStack_198 = puStack_1b8[3];
    uStack_1a0 = puStack_1b8[2];
    lStack_178 = plStack_1c0[1];
    lStack_180 = *plStack_1c0;
    lStack_168 = plStack_1c0[3];
    lStack_170 = plStack_1c0[2];
    lStack_160 = plStack_1c0[4];
    uVar18 = FUN_1017abbfc(plStack_1c8,uVar24,&uStack_1b0,&lStack_180);
    if ((uVar18 & 1) != 0) goto LAB_1017ab2c4;
    uVar18 = 0;
    lVar32 = plVar13[9];
    uVar28 = plVar13[10];
    uVar17 = (uint)puVar33 & 0xffff;
    while( true ) {
      uVar4 = (ushort)uVar24;
      uVar10 = (ushort)uVar17;
      if ((uVar28 <= uVar19) && (uVar19 = 0, uVar28 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar32 + uVar19 * 4);
      uVar17 = (uint)*puVar1;
      if (uVar17 == 0xffff) break;
      uVar18 = uVar18 + 1;
      uVar24 = (ulong)puVar1[1];
      *puVar1 = uVar10;
      puVar1[1] = uVar4;
      uVar19 = uVar19 + 1;
    }
    *puVar1 = uVar10;
    puVar1[1] = uVar4;
    if ((0x7f < uVar18 || 0x1ff < uVar12 && lVar21 != 2) && (*plVar13 == 0)) {
      *plVar13 = 1;
    }
LAB_1017ab26c:
    uVar31 = 2;
LAB_1017ab2cc:
    *(undefined1 *)(lStack_1d0 + 0x20) = uVar31;
    return;
  }
  if ((uint)uVar5 == (uint)uVar10) {
    if (puVar33 <= puVar38) {
      func_0x000108a07bdc(puVar38,puVar33,&UNK_10b259fa8);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1017ab394);
      (*pcVar8)();
    }
    lVar20 = lVar32 + (long)puVar38 * 0x68;
    if ((puVar37 == (undefined *)0x0) != (*(long *)(lVar20 + 0x40) != 0)) {
      if (*(long *)(lVar20 + 0x40) == 0) {
        if (*(byte *)(lVar20 + 0x48) == uVar17) goto LAB_1017ab1a8;
      }
      else if ((*(ulong *)(lVar20 + 0x50) == uVar25) &&
              (uStack_1e8 = uVar28, uStack_1dc = uVar17, puStack_1d8 = puVar33,
              iVar11 = _memcmp(*(undefined8 *)(lVar20 + 0x48),uVar28,uVar25), puVar33 = puStack_1d8,
              uVar28 = uStack_1e8, uVar17 = uStack_1dc, iVar11 == 0)) goto LAB_1017ab1a8;
    }
  }
  uVar12 = uVar12 + 1;
  uVar19 = uVar19 + 1;
  goto LAB_1017ab0fc;
LAB_1017aafec:
  *plStack_d8 = (long)plStack_d0;
  plStack_d8[1] = uVar18;
  uVar31 = 2;
  plStack_d8[2] = uVar25;
  param_1 = plStack_d8;
  goto LAB_1017aafc8;
LAB_1017ab1a8:
  lStack_178 = plStack_1c0[1];
  lStack_180 = *plStack_1c0;
  lStack_168 = plStack_1c0[3];
  lStack_170 = plStack_1c0[2];
  lStack_160 = plStack_1c0[4];
  auVar47._8_8_ = plStack_1c8;
  auVar47._0_8_ = &uStack_1b0;
  plVar16 = &lStack_180;
  uVar36 = 0x1017ab1cc;
  puVar15 = puVar38;
  puVar33 = puVar37;
SUB_1017ab3fc:
  lVar20 = auVar47._8_8_;
  puVar35 = auVar47._0_8_;
  puVar37 = *(undefined **)(lVar20 + 0x28);
  puStack_250 = puVar38;
  uStack_248 = uVar30;
  uStack_240 = uVar18;
  uStack_238 = uVar19;
  lStack_230 = lVar21;
  uStack_228 = uVar25;
  uStack_220 = uVar24;
  lStack_218 = lVar32;
  puStack_210 = puVar33;
  uStack_208 = uVar12;
  ppuStack_200 = &puStack_100;
  uStack_1f8 = uVar36;
  if (puVar15 < puVar37) {
    lVar21 = *(long *)(lVar20 + 0x20);
    puVar22 = (uint *)(lVar21 + (long)puVar15 * 0x68);
    if ((*puVar22 & 1) == 0) {
LAB_1017ab69c:
      lVar21 = lVar21 + (long)puVar15 * 0x68;
      uVar36 = *(undefined8 *)(lVar21 + 0x18);
      uVar40 = *(undefined8 *)(lVar21 + 0x30);
      uVar39 = *(undefined8 *)(lVar21 + 0x28);
      puVar35[1] = *(undefined8 *)(lVar21 + 0x20);
      *puVar35 = uVar36;
      puVar35[3] = uVar40;
      puVar35[2] = uVar39;
      puVar35[4] = *(undefined8 *)(lVar21 + 0x38);
      lVar32 = plVar16[4];
      lVar41 = *plVar16;
      lVar29 = plVar16[3];
      lVar20 = plVar16[2];
      *(long *)(lVar21 + 0x20) = plVar16[1];
      *(long *)(lVar21 + 0x18) = lVar41;
      *(long *)(lVar21 + 0x30) = lVar29;
      *(long *)(lVar21 + 0x28) = lVar20;
      *(long *)(lVar21 + 0x38) = lVar32;
      return;
    }
    puVar33 = *(undefined **)(puVar22 + 2);
    puVar38 = *(undefined **)(lVar20 + 0x40);
    if (puVar33 < puVar38) {
      lVar32 = *(long *)(lVar20 + 0x38);
      puStack_318 = &UNK_10b25a128;
      puStack_310 = &UNK_10b25a068;
      puVar34 = puVar33;
      puVar6 = (undefined8 *)(lVar32 + (long)puVar38 * 0x48);
      do {
        puVar22 = (uint *)(lVar32 + (long)puVar34 * 0x48);
        puVar33 = *(undefined **)(puVar22 + 2);
        puVar26 = *(undefined **)(puVar22 + 6);
        if ((*puVar22 & 1) == 0) {
          if (puVar22[4] == 0) {
            if (puVar37 <= puVar33) {
              puStack_310 = &UNK_10b25a050;
              goto LAB_1017ab804;
            }
            *(undefined8 *)(lVar21 + (long)puVar33 * 0x68) = 0;
          }
          else {
            if (puVar37 <= puVar33) goto LAB_1017ab804;
            piVar23 = (int *)(lVar21 + (long)puVar33 * 0x68);
            if (*piVar23 != 1) {
              puVar37 = &UNK_10b25a080;
LAB_1017ab700:
              func_0x000108a07a20(puVar37);
              goto LAB_1017ab830;
            }
            *(undefined **)(piVar23 + 2) = puVar26;
            if (puVar38 <= puVar26) {
              puStack_310 = &UNK_10b25a098;
              puVar37 = puVar38;
              puVar33 = puVar26;
              goto LAB_1017ab804;
            }
            puVar27 = (undefined8 *)(lVar32 + (long)puVar26 * 0x48);
            *puVar27 = 0;
            puVar27[1] = puVar33;
          }
        }
        else if ((puVar22[4] & 1) == 0) {
          if (puVar37 <= puVar26) {
            puStack_310 = &UNK_10b25a0b0;
            puVar33 = puVar26;
            goto LAB_1017ab804;
          }
          piVar23 = (int *)(lVar21 + (long)puVar26 * 0x68);
          if (*piVar23 != 1) {
            puVar37 = &UNK_10b25a0c8;
            goto LAB_1017ab700;
          }
          *(undefined **)(piVar23 + 4) = puVar33;
          if (puVar38 <= puVar33) {
            puStack_310 = &UNK_10b25a0e0;
            puVar37 = puVar38;
            goto LAB_1017ab804;
          }
          lVar29 = lVar32 + (long)puVar33 * 0x48;
          *(undefined8 *)(lVar29 + 0x10) = 0;
          *(undefined **)(lVar29 + 0x18) = puVar26;
        }
        else {
          if (puVar38 <= puVar33) {
            puStack_310 = &UNK_10b25a0f8;
            puVar37 = puVar38;
            goto LAB_1017ab804;
          }
          lVar29 = lVar32 + (long)puVar33 * 0x48;
          *(undefined8 *)(lVar29 + 0x10) = 1;
          *(undefined **)(lVar29 + 0x18) = puVar26;
          if (puVar38 <= puVar26) {
            puStack_310 = &UNK_10b25a110;
            puVar37 = puVar38;
            puVar33 = puVar26;
            goto LAB_1017ab804;
          }
          puVar27 = (undefined8 *)(lVar32 + (long)puVar26 * 0x48);
          *puVar27 = 1;
          puVar27[1] = puVar33;
        }
        puStack_298 = *(undefined **)(puVar22 + 2);
        lStack_2a0 = *(long *)puVar22;
        puStack_288 = *(undefined **)(puVar22 + 6);
        uStack_290 = *(ulong *)(puVar22 + 4);
        uStack_278 = *(undefined8 *)(puVar22 + 10);
        lStack_280 = *(long *)(puVar22 + 8);
        uStack_268 = *(undefined8 *)(puVar22 + 0xe);
        uStack_270 = *(undefined8 *)(puVar22 + 0xc);
        uStack_260 = *(undefined8 *)(puVar22 + 0x10);
        puVar38 = puVar38 + -1;
        uVar39 = puVar6[-8];
        uVar36 = puVar6[-9];
        uVar42 = puVar6[-6];
        uVar40 = puVar6[-7];
        uVar44 = puVar6[-4];
        uVar43 = puVar6[-5];
        uVar46 = puVar6[-2];
        uVar45 = puVar6[-3];
        *(undefined8 *)(puVar22 + 0x10) = puVar6[-1];
        *(undefined8 *)(puVar22 + 10) = uVar44;
        *(undefined8 *)(puVar22 + 8) = uVar43;
        *(undefined8 *)(puVar22 + 0xe) = uVar46;
        *(undefined8 *)(puVar22 + 0xc) = uVar45;
        *(undefined8 *)(puVar22 + 2) = uVar39;
        *(undefined8 *)puVar22 = uVar36;
        *(undefined8 *)(puVar22 + 6) = uVar42;
        *(undefined8 *)(puVar22 + 4) = uVar40;
        *(undefined **)(lVar20 + 0x40) = puVar38;
        if ((lStack_2a0 != 0) && (puVar38 == puStack_298)) {
          lStack_2a0 = 1;
          puStack_298 = puVar34;
        }
        if ((uStack_290 != 0) && (puVar38 == puStack_288)) {
          uStack_290 = 1;
          puStack_288 = puVar34;
        }
        puVar33 = puStack_288;
        if (puVar38 == puVar34) goto LAB_1017ab62c;
        puVar26 = puVar34;
        if (puVar38 <= puVar34) {
LAB_1017ab7dc:
          func_0x000108a07bdc(puVar26,puVar38,puStack_318);
          goto LAB_1017ab830;
        }
        uVar12 = *(ulong *)(puVar22 + 4);
        puVar3 = *(undefined **)(puVar22 + 6);
        puVar26 = *(undefined **)(puVar22 + 2);
        if ((*puVar22 & 1) == 0) {
          if (puVar37 <= puVar26) {
            puStack_318 = &UNK_10b25a140;
            puVar38 = puVar37;
            goto LAB_1017ab7dc;
          }
          piVar23 = (int *)(lVar21 + (long)puVar26 * 0x68);
          if (*piVar23 == 1) goto LAB_1017ab5f4;
          puVar37 = &UNK_10b25a158;
LAB_1017ab720:
          func_0x000108a07a20(puVar37);
          goto LAB_1017ab830;
        }
        if (puVar38 <= puVar26) {
          puStack_318 = &UNK_10b25a170;
          goto LAB_1017ab7dc;
        }
        piVar23 = (int *)(lVar32 + (long)puVar26 * 0x48 + 0x10);
        piVar23[0] = 1;
        piVar23[1] = 0;
LAB_1017ab5f4:
        *(undefined **)(piVar23 + 2) = puVar34;
        puVar26 = puVar3;
        if ((uVar12 & 1) == 0) {
          if (puVar37 <= puVar3) {
            puStack_318 = &UNK_10b25a188;
            puVar38 = puVar37;
            goto LAB_1017ab7dc;
          }
          piVar23 = (int *)(lVar21 + (long)puVar3 * 0x68);
          if (*piVar23 != 1) {
            puVar37 = &UNK_10b25a1a0;
            goto LAB_1017ab720;
          }
          *(undefined **)(piVar23 + 4) = puVar34;
        }
        else {
          if (puVar38 <= puVar3) {
            puStack_318 = &UNK_10b25a1b8;
            goto LAB_1017ab7dc;
          }
          puVar27 = (undefined8 *)(lVar32 + (long)puVar3 * 0x48);
          *puVar27 = 1;
          puVar27[1] = puVar34;
        }
LAB_1017ab62c:
        uStack_2b8 = uStack_268;
        uStack_2b0 = uStack_260;
        if ((uStack_290 & 1) == 0) {
          (**(code **)(lStack_280 + 0x20))(&uStack_2b8,uStack_278,uStack_270);
          goto LAB_1017ab69c;
        }
        (**(code **)(lStack_280 + 0x20))(&uStack_2b8,uStack_278,uStack_270);
        puVar34 = puVar33;
        puVar6 = puVar6 + -9;
      } while (puVar33 < puVar38);
    }
    puStack_310 = &UNK_10b25a038;
    puVar37 = puVar38;
LAB_1017ab804:
    func_0x000108a07bdc(puVar33,puVar37,puStack_310);
  }
  else {
    func_0x000108a07bdc(puVar15,puVar37,&UNK_10b259fd8);
  }
LAB_1017ab830:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1017ab834);
  (*pcVar8)();
}

