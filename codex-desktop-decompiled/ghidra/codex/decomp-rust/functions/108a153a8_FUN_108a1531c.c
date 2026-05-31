
void FUN_108a1531c(ulong *param_1,ulong param_2,long *param_3,ulong param_4,ulong param_5,
                  ulong param_6,undefined8 param_7)

{
  ulong uVar1;
  ushort *puVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  uint *puVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  ulong *puVar19;
  long lVar20;
  ulong uVar21;
  byte bVar22;
  byte bVar23;
  ulong uVar24;
  long lVar25;
  int *piVar26;
  long lVar27;
  undefined4 *puVar28;
  char *pcVar29;
  long lVar30;
  ulong *puVar31;
  ulong extraout_x11;
  undefined4 *puVar32;
  undefined4 *puVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  byte *pbVar39;
  long *plVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  long *plStack_468;
  ulong uStack_460;
  long *plStack_458;
  long *plStack_448;
  long *plStack_420;
  long *plStack_418;
  ulong uStack_400;
  uint uStack_3f4;
  uint uStack_3d0;
  uint uStack_3cc;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [8];
  long lStack_3a0;
  undefined8 uStack_370;
  undefined1 uStack_368;
  ulong uStack_360;
  long *plStack_358;
  ulong uStack_350;
  undefined1 uStack_348;
  undefined4 uStack_347;
  undefined3 uStack_343;
  ulong uStack_338;
  long *plStack_330;
  ulong uStack_328;
  ulong uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  ulong uStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  byte *pbStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  long lStack_2a0;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  byte *pbStack_268;
  ulong uStack_260;
  ulong uStack_258;
  long lStack_250;
  long lStack_240;
  byte *pbStack_238;
  ulong uStack_230;
  ulong uStack_228;
  long lStack_220;
  byte *pbStack_218;
  ulong uStack_210;
  ulong uStack_208;
  long lStack_200;
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long *plStack_1b8;
  uint *puStack_1b0;
  ulong uStack_1a8;
  undefined1 **ppuStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  uint *puStack_180;
  uint *puStack_178;
  uint *puStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  long lStack_140;
  ulong uStack_138;
  long lStack_130;
  uint uStack_124;
  undefined8 uStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  uint uStack_fc;
  ulong uStack_f8;
  ulong *puStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar45 = (long)param_3 + param_2;
  if (CARRY8((ulong)param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    param_3 = (long *)param_1[1];
    if (uVar45 <= *param_1 * 2) {
      uVar45 = *param_1 * 2;
    }
    uVar21 = 8;
    if (param_5 != 1) {
      uVar21 = 4;
    }
    if (uVar45 <= uVar21) {
      uVar45 = uVar21;
    }
    uVar21 = uVar45;
    uVar42 = param_4;
    param_6 = param_5;
    FUN_108a151d4(aiStack_38);
    param_4 = uVar21;
    param_5 = uVar42;
    if (aiStack_38[0] != 1) {
      *param_1 = uVar45;
      param_1[1] = uStack_30;
      return;
    }
  }
  auVar46 = func_0x0001087c9084(uStack_30,uStack_28);
  lVar20 = auVar46._0_8_;
  uStack_48 = 0x108a153a8;
  uStack_124 = (uint)param_4;
  uVar45 = *(ulong *)(lVar20 + 0x28);
  if (uVar45 == 0) {
    return;
  }
  lStack_e0 = *(long *)(lVar20 + 0x20);
  lStack_158 = lStack_e0 + uVar45 * 0x68;
  uVar5 = *(ushort *)(lVar20 + 0x58);
  uVar42 = (ulong)uVar5;
  lVar30 = *(long *)(lVar20 + 0x48);
  uVar21 = *(ulong *)(lVar20 + 0x50);
  lStack_140 = *(long *)(lVar20 + 0x38);
  uStack_138 = *(ulong *)(lVar20 + 0x40);
  lVar20 = lStack_e0;
  uStack_110 = uVar45;
  puStack_50 = &stack0xfffffffffffffff0;
LAB_108a15420:
  uStack_120 = auVar46._8_8_;
  uStack_150 = auVar46._0_8_;
  uVar18 = uStack_150;
  lStack_118 = lVar20 + 0x68;
  __ZN5hyper3ext13HeaderCaseMap16get_all_internal17hf5be39b7641c51acE
            (&uStack_d8,uStack_120,lVar20 + 0x40);
  uVar13 = FUN_1057a7770(uVar18,lVar20 + 0x40);
  uVar38 = 0;
  puVar41 = (uint *)(ulong)(uVar13 & 0xffff);
  uVar24 = (ulong)puVar41 & uVar42;
  pbStack_e8 = (byte *)(lVar20 + 0x48);
  puStack_f0 = (ulong *)(lVar20 + 0x50);
  do {
    uStack_3f4 = (uint)param_4;
    uStack_3d0 = (uint)param_6;
    if ((uVar21 <= uVar24) && (uVar24 = 0, uVar21 == 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    puVar2 = (ushort *)(lVar30 + uVar24 * 4);
    uVar43 = (ulong)*puVar2;
    if ((uVar43 == 0xffff) ||
       (uVar6 = puVar2[1], ((int)uVar24 - (uint)(uVar6 & uVar5) & uVar42) < uVar38))
    goto LAB_108a15410;
    if ((uint)uVar6 == (uVar13 & 0xffff)) {
      if (uVar45 <= uVar43) goto LAB_108a15acc;
      lVar25 = lStack_e0 + uVar43 * 0x68;
      if ((*(long *)(lVar25 + 0x40) != 0) != (*(long *)(lVar20 + 0x40) == 0)) {
        if (*(long *)(lVar25 + 0x40) == 0) {
          if (*(byte *)(lVar25 + 0x48) == *pbStack_e8) break;
        }
        else if ((*(ulong *)(lVar25 + 0x50) == *puStack_f0) &&
                (iVar14 = _memcmp(*(undefined8 *)(lVar25 + 0x48),*(undefined8 *)pbStack_e8),
                iVar14 == 0)) break;
      }
    }
    uVar38 = uVar38 + 1;
    uVar24 = uVar24 + 1;
  } while( true );
  puStack_180 = (uint *)(lStack_e0 + uVar43 * 0x68);
  bVar11 = (*puStack_180 & 1) != 0;
  if (bVar11) {
    uStack_148 = *(ulong *)(puStack_180 + 4);
  }
  uStack_108 = (ulong)bVar11;
  bVar11 = false;
  puStack_170 = puStack_180 + 6;
  lStack_168 = lStack_b8;
  uStack_190 = uStack_b0;
  uStack_188 = uStack_c0;
  lStack_130 = lStack_c8;
  uStack_160 = uStack_d0;
  uVar38 = uStack_d8;
  while( true ) {
    uStack_3f4 = (uint)param_4;
    uStack_3d0 = (uint)param_6;
    if (!bVar11) break;
    uVar37 = uStack_f8;
    if (uStack_138 <= uStack_f8) goto LAB_108a15ae0;
    lVar25 = lStack_140 + uStack_f8 * 0x48;
    if ((uStack_108 == 1) && (uStack_f8 == uStack_148)) {
      puVar9 = (uint *)(lVar25 + 0x20);
      uStack_f8 = uStack_148;
joined_r0x000108a155d8:
      puVar41 = puVar9;
      uStack_fc = 1;
      uStack_108 = 2;
      if (uVar38 != 2) goto LAB_108a15618;
LAB_108a1570c:
      if ((uStack_124 & 1) != 0) {
        pbVar39 = pbStack_e8;
        puVar31 = puStack_f0;
        if (*(long *)(lVar20 + 0x40) == 0) {
          pbVar39 = &UNK_10b3b56a8 + (ulong)*pbStack_e8 * 8;
          puVar31 = (ulong *)(&UNK_109aa2088 + (ulong)*pbStack_e8 * 8);
        }
        uVar45 = *puVar31;
        pbVar39 = *(byte **)pbVar39;
        lVar25 = param_3[2];
        puStack_178 = puVar41;
        if ((ulong)(*param_3 - lVar25) < uVar45) {
          param_4 = 1;
          param_5 = 1;
          FUN_108a1531c(param_3,lVar25,uVar45);
          lVar25 = param_3[2];
LAB_108a1576c:
          bVar22 = 0x2d;
          do {
            bVar4 = *pbVar39;
            uVar24 = (ulong)bVar4;
            bVar23 = 0x20;
            if (0x19 < (byte)(bVar4 + 0x9f) || bVar22 != 0x2d) {
              bVar23 = 0;
            }
            if (lVar25 == *param_3) {
              func_0x0001087c90b8(param_3);
            }
            bVar22 = bVar23 ^ bVar4;
            *(byte *)(param_3[1] + lVar25) = bVar22;
            lVar25 = lVar25 + 1;
            param_3[2] = lVar25;
            uVar45 = uVar45 - 1;
            pbVar39 = pbVar39 + 1;
          } while (uVar45 != 0);
        }
        else if (uVar45 != 0) goto LAB_108a1576c;
        uVar43 = 0;
        uVar38 = 2;
        lVar27 = *(long *)(puStack_178 + 4);
        puVar41 = puStack_178;
        goto joined_r0x000108a1584c;
      }
      pbVar39 = pbStack_e8;
      puVar31 = puStack_f0;
      if (*(long *)(lVar20 + 0x40) == 0) {
        pbVar39 = &UNK_10b3b56a8 + (ulong)*pbStack_e8 * 8;
        puVar31 = (ulong *)(&UNK_109aa2088 + (ulong)*pbStack_e8 * 8);
      }
      uVar43 = *puVar31;
      uVar18 = *(undefined8 *)pbVar39;
      uVar24 = param_3[2];
      if (*param_3 - uVar24 < uVar43) {
        param_4 = 1;
        param_5 = 1;
        FUN_108a1531c(param_3,uVar24,uVar43);
        uVar24 = param_3[2];
      }
      _memcpy(param_3[1] + uVar24,uVar18,uVar43);
      lVar25 = uVar24 + uVar43;
      uVar38 = 2;
      param_3[2] = lVar25;
      if (*(long *)(puVar41 + 4) == 0) goto LAB_108a15850;
LAB_108a158f0:
      if ((ulong)(*param_3 - lVar25) < 2) {
        param_4 = 1;
        param_5 = 1;
        FUN_108a1531c(param_3,lVar25,2);
        lVar25 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + lVar25) = 0x203a;
      lVar25 = lVar25 + 2;
      param_3[2] = lVar25;
      uVar24 = *(ulong *)(puVar41 + 2);
      uVar43 = *(ulong *)(puVar41 + 4);
      if ((ulong)(*param_3 - lVar25) < uVar43) {
        param_4 = 1;
        param_5 = 1;
        FUN_108a1531c(param_3,lVar25,uVar43);
        lVar25 = param_3[2];
      }
      _memcpy(param_3[1] + lVar25,uVar24,uVar43);
      lVar25 = lVar25 + uVar43;
      param_3[2] = lVar25;
      if ((ulong)(*param_3 - lVar25) < 2) {
        param_4 = 1;
        param_5 = 1;
        FUN_108a1531c(param_3,lVar25,2);
        lVar25 = param_3[2];
      }
      *(undefined2 *)(param_3[1] + lVar25) = 0xa0d;
      param_3[2] = lVar25 + 2;
      uVar45 = uStack_110;
    }
    else {
      if (*(int *)(lVar25 + 0x10) == 1) {
        uStack_f8 = *(ulong *)(lVar25 + 0x18);
        uStack_fc = 0;
        puVar41 = (uint *)(lVar25 + 0x20);
      }
      else {
        puVar41 = (uint *)(lVar25 + 0x20);
        uStack_fc = 1;
      }
joined_r0x000108a15684:
      if (uVar38 == 2) goto LAB_108a1570c;
LAB_108a15618:
      if ((uVar38 & 1) == 0) {
        auVar47._8_8_ = *(ulong *)(lStack_168 + 0x28);
        auVar47._0_8_ = uStack_190;
        if (*(ulong *)(lStack_168 + 0x28) <= uStack_190) goto LAB_108a15af4;
        piVar26 = (int *)(*(long *)(lStack_168 + 0x20) + uStack_190 * 0x60);
        if (lStack_130 == 0) {
          lStack_130 = 2;
          uVar38 = 2;
        }
        else {
          if (*piVar26 != 1) goto LAB_108a15ab4;
          uStack_160 = *(ulong *)(piVar26 + 2);
          uVar38 = 1;
        }
        uVar18 = *(undefined8 *)(piVar26 + 8);
        uVar43 = *(ulong *)(piVar26 + 10);
        uVar24 = param_3[2];
        if (*param_3 - uVar24 < uVar43) goto LAB_108a159a4;
      }
      else {
        if (*(ulong *)(lStack_168 + 0x40) <= uStack_160) goto LAB_108a15b00;
        lVar25 = *(long *)(lStack_168 + 0x38) + uStack_160 * 0x40;
        if ((lStack_130 == 1) && (uStack_160 == uStack_188)) {
          uStack_160 = uStack_188;
          lStack_130 = 2;
LAB_108a158b0:
          uVar38 = 2;
        }
        else {
          if (*(int *)(lVar25 + 0x10) != 1) goto LAB_108a158b0;
          uStack_160 = *(ulong *)(lVar25 + 0x18);
          uVar38 = 1;
        }
        uVar18 = *(undefined8 *)(lVar25 + 0x28);
        uVar43 = *(ulong *)(lVar25 + 0x30);
        uVar24 = param_3[2];
        if (*param_3 - uVar24 < uVar43) {
LAB_108a159a4:
          param_4 = 1;
          param_5 = 1;
          FUN_108a1531c(param_3,uVar24,uVar43);
          uVar24 = param_3[2];
        }
      }
      _memcpy(param_3[1] + uVar24,uVar18,uVar43);
      lVar25 = uVar24 + uVar43;
      param_3[2] = lVar25;
      lVar27 = *(long *)(puVar41 + 4);
joined_r0x000108a1584c:
      if (lVar27 != 0) goto LAB_108a158f0;
LAB_108a15850:
      if ((ulong)(*param_3 - lVar25) < 3) {
        param_4 = 1;
        param_5 = 1;
        FUN_108a1531c(param_3,lVar25,3);
        lVar25 = param_3[2];
      }
      lVar27 = param_3[1];
      *(undefined2 *)(lVar27 + lVar25) = 0xd3a;
      *(undefined1 *)((undefined2 *)(lVar27 + lVar25) + 1) = 10;
      param_3[2] = lVar25 + 3;
      uVar45 = uStack_110;
    }
    bVar11 = true;
    uStack_110 = uVar45;
    if ((uStack_fc & 1) != 0) goto LAB_108a15410;
  }
  puVar9 = puStack_170;
  if (uStack_108 == 0) goto joined_r0x000108a155d8;
  if (*puStack_180 == 1) {
    uStack_f8 = *(ulong *)(puStack_180 + 2);
    uStack_fc = 0;
    puVar41 = puStack_170;
    goto joined_r0x000108a15684;
  }
LAB_108a15ab4:
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109aa029a,0x28,&UNK_10b3b54b8);
LAB_108a15acc:
  func_0x000108a07bdc(uVar43,uVar45,&UNK_10b3b45d8);
  uVar37 = extraout_x11;
LAB_108a15ae0:
  auVar47 = func_0x000108a07bdc(uVar37,uStack_138,&UNK_10b3b54d0);
LAB_108a15af4:
  func_0x000108a07bdc(auVar47._0_8_,auVar47._8_8_,&UNK_10b3b54a0);
LAB_108a15b00:
  plVar16 = (long *)&UNK_10b3b54d0;
  auVar46 = func_0x000108a07bdc();
  puVar19 = auVar46._8_8_;
  puVar31 = auVar46._0_8_;
  uStack_198 = 0x108a15b0c;
  uStack_368 = *(undefined1 *)((long)puVar19 + 0x21);
  lStack_3a0 = 3;
  plStack_358 = (long *)0x0;
  uStack_360 = 0x8000000000000001;
  uStack_348 = 0;
  uStack_338 = 0x8000000000000000;
  uStack_320 = 0;
  uVar37 = puVar19[2];
  lVar25 = *(long *)(uVar37 + 0x50);
  if (lVar25 != 0) {
    puVar28 = *(undefined4 **)(uVar37 + 0x48);
    uVar34 = lVar25 * 4 - 4;
    puVar32 = puVar28;
    if (0xb < uVar34) {
      uVar1 = (uVar34 >> 2) + 1;
      if (uVar34 < 0x7c) {
        uVar35 = 0;
      }
      else {
        uVar35 = uVar1 & 0x7fffffffffffffe0;
        puVar15 = (undefined8 *)(puVar28 + 0x10);
        uVar34 = uVar35;
        do {
          puVar15[-7] = 0xffff0000ffff;
          puVar15[-8] = 0xffff0000ffff;
          puVar15[-5] = 0xffff0000ffff;
          puVar15[-6] = 0xffff0000ffff;
          puVar15[-3] = 0xffff0000ffff;
          puVar15[-4] = 0xffff0000ffff;
          puVar15[-1] = 0xffff0000ffff;
          puVar15[-2] = 0xffff0000ffff;
          puVar15[1] = 0xffff0000ffff;
          *puVar15 = 0xffff0000ffff;
          puVar15[3] = 0xffff0000ffff;
          puVar15[2] = 0xffff0000ffff;
          puVar15[5] = 0xffff0000ffff;
          puVar15[4] = 0xffff0000ffff;
          puVar15[7] = 0xffff0000ffff;
          puVar15[6] = 0xffff0000ffff;
          puVar15 = puVar15 + 0x10;
          uVar34 = uVar34 - 0x20;
        } while (uVar34 != 0);
        if (uVar1 == uVar35) goto LAB_108a15c30;
        if ((uVar1 & 0x1c) == 0) {
          puVar32 = puVar28 + uVar35;
          goto LAB_108a15c1c;
        }
      }
      uVar34 = uVar1 & 0x7ffffffffffffffc;
      puVar32 = puVar28 + uVar34;
      lVar27 = uVar35 - uVar34;
      puVar15 = (undefined8 *)(puVar28 + uVar35);
      do {
        puVar15[1] = 0xffff0000ffff;
        *puVar15 = 0xffff0000ffff;
        lVar27 = lVar27 + 4;
        puVar15 = puVar15 + 2;
      } while (lVar27 != 0);
      if (uVar1 == uVar34) goto LAB_108a15c30;
    }
LAB_108a15c1c:
    do {
      puVar33 = puVar32 + 1;
      *puVar32 = 0xffff;
      puVar32 = puVar33;
    } while (puVar33 != puVar28 + lVar25);
  }
LAB_108a15c30:
  plStack_420 = (long *)0x0;
  plStack_418 = (long *)0x0;
  uVar35 = 0;
  uVar44 = 0;
  bVar12 = false;
  uStack_3cc = 0;
  bVar11 = false;
  bVar8 = false;
  lVar25 = *(long *)(uVar37 + 0x20);
  uVar1 = *(ulong *)(uVar37 + 0x28);
  *(undefined8 *)(uVar37 + 0x28) = 0;
  pcVar29 = (char *)puVar19[3];
  uVar34 = *puVar19;
  plVar17 = (long *)puVar19[1];
  plStack_448 = (long *)0x0;
  uStack_400 = 0x8000000000000001;
  uStack_370 = param_7;
  uStack_2e0 = uVar1;
  lStack_2d8 = lVar25;
  uStack_2d0 = uVar1;
  lStack_2c8 = uVar37 + 0x30;
  uStack_1f0 = uVar45;
  lStack_1e8 = lVar20;
  uStack_1e0 = uVar21;
  uStack_1d8 = uVar43;
  uStack_1d0 = uVar24;
  lStack_1c8 = lVar30;
  uStack_1c0 = uVar42;
  plStack_1b8 = param_3;
  puStack_1b0 = puVar41;
  uStack_1a8 = uVar38;
  ppuStack_1a0 = &puStack_50;
LAB_108a15c84:
  do {
    if ((uVar44 & 1) == 0) {
      if (uVar35 != uVar1) {
        if (uVar1 <= uVar35) {
          uStack_2f8 = 0;
          uStack_2f0 = uVar24;
          uStack_2e8 = uVar35 + 1;
          func_0x000108a07bdc(uVar35,uVar1,&UNK_10b3b5488);
          goto LAB_108a17248;
        }
        puVar41 = (uint *)(lVar25 + uVar35 * 0x68);
        bVar3 = (*puVar41 & 1) != 0;
        if (bVar3) {
          uVar24 = *(ulong *)(puVar41 + 2);
        }
        uStack_288 = *(undefined8 *)(puVar41 + 0x12);
        lStack_290 = *(long *)(puVar41 + 0x10);
        uStack_278 = *(undefined8 *)(puVar41 + 0x16);
        uStack_280 = *(undefined8 *)(puVar41 + 0x14);
        pbStack_2b8 = *(byte **)(puVar41 + 8);
        lStack_2c0 = *(long *)(puVar41 + 6);
        uStack_2a8 = *(ulong *)(puVar41 + 0xc);
        uStack_2b0 = *(ulong *)(puVar41 + 10);
        lStack_2a0 = *(long *)(puVar41 + 0xe);
        lStack_270 = lStack_2c0;
        pbStack_268 = pbStack_2b8;
        uStack_260 = uStack_2b0;
        uStack_258 = uStack_2a8;
        lStack_250 = lStack_2a0;
        if ((uStack_320 != 0) && (lStack_318 != 0)) {
          (**(code **)(lStack_318 + 0x20))(&uStack_300,uStack_310,uStack_308);
        }
        uStack_320 = 1;
        uStack_310 = uStack_288;
        lStack_318 = lStack_290;
        uStack_300 = uStack_278;
        uStack_308 = uStack_280;
        if (bVar11) {
          if ((uStack_3cc & 1) == 0) {
            lVar20 = plVar16[2];
            if ((ulong)(*plVar16 - lVar20) < 2) {
              FUN_108a1531c(plVar16,lVar20,2,1,1);
              lVar20 = plVar16[2];
            }
            *(undefined2 *)(plVar16[1] + lVar20) = 0xa0d;
            lVar20 = lVar20 + 2;
          }
          else {
            lVar20 = plVar16[2];
            if ((ulong)(*plVar16 - lVar20) < 0xb) {
              FUN_108a1531c(plVar16,lVar20,0xb,1,1);
              lVar20 = plVar16[2];
            }
            lVar30 = plVar16[1];
            *(undefined4 *)(lVar30 + lVar20 + 7) = 0xa0d6465;
            *(undefined8 *)(lVar30 + lVar20) = 0x656b6e756863202c;
            lVar20 = lVar20 + 0xb;
          }
          plVar16[2] = lVar20;
        }
        bVar11 = false;
        uVar35 = uVar35 + 1;
        uVar45 = uVar24;
        uVar44 = (ulong)bVar3;
        goto joined_r0x000108a15df4;
      }
      uStack_2f8 = 0;
      uStack_2f0 = uVar24;
      uStack_2e8 = uVar1;
      FUN_1057a6154(&uStack_2f8);
      if (bVar11) {
        if ((uStack_3cc & 1) == 0) {
          lVar20 = plVar16[2];
          if ((ulong)(*plVar16 - lVar20) < 2) {
            FUN_108a1531c(plVar16,lVar20,2,1,1);
            lVar20 = plVar16[2];
          }
          *(undefined2 *)(plVar16[1] + lVar20) = 0xa0d;
          lVar20 = lVar20 + 2;
        }
        else {
          lVar20 = plVar16[2];
          if ((ulong)(*plVar16 - lVar20) < 0xb) {
            FUN_108a1531c(plVar16,lVar20,0xb,1,1);
            lVar20 = plVar16[2];
          }
          lVar30 = plVar16[1];
          *(undefined4 *)(lVar30 + lVar20 + 7) = 0xa0d6465;
          *(undefined8 *)(lVar30 + lVar20) = 0x656b6e756863202c;
          lVar20 = lVar20 + 0xb;
        }
        plVar16[2] = lVar20;
      }
      if ((uStack_3d0 & 1) == 0) {
        if (uVar34 == 2) {
LAB_108a169a4:
          uVar5 = *(ushort *)(uVar37 + 0x68);
          if ((uVar5 - 100 < 100) || ((uVar5 - 200 < 100 && (*pcVar29 == '\a')))) {
LAB_108a16c24:
            uStack_400 = 0x8000000000000001;
            plStack_420 = (long *)0x0;
          }
          else {
            uStack_400 = 0x8000000000000001;
            plStack_420 = (long *)0x0;
            if ((uVar5 != 0xcc) && (uVar5 != 0x130)) {
              if (*pcVar29 != '\x05') {
                pbStack_238 = (byte *)0x18;
                lStack_240 = 0;
                uStack_228 = 0;
                uStack_230 = 0;
                func_0x0001057a1b28(&lStack_3c0,plVar16,&lStack_240);
                lVar20 = plVar16[2];
                if ((ulong)(*plVar16 - lVar20) < 5) {
                  FUN_108a1531c(plVar16,lVar20,5,1,1);
                  lVar20 = plVar16[2];
                }
                lVar30 = plVar16[1];
                *(undefined4 *)(lVar30 + lVar20) = 0xd30203a;
                *(undefined1 *)((undefined4 *)(lVar30 + lVar20) + 1) = 10;
                plVar16[2] = lVar20 + 5;
                if (lStack_240 != 0) {
                  (**(code **)(lStack_240 + 0x20))(&uStack_228,pbStack_238,uStack_230);
                }
              }
              plStack_420 = (long *)0x0;
            }
          }
        }
        else {
          if ((uVar34 & 1) == 0) {
            if (plVar17 == (long *)0x0) goto LAB_108a169a4;
            uVar5 = *(ushort *)(uVar37 + 0x68);
            if ((99 < uVar5 - 100) && ((99 < uVar5 - 200 || (*pcVar29 != '\a')))) {
              uStack_400 = 0x8000000000000001;
              plStack_420 = (long *)0x0;
              if ((uVar5 != 0xcc) && (uVar5 != 0x130)) {
                pbStack_238 = (byte *)0x18;
                lStack_240 = 0;
                uStack_228 = 0;
                uStack_230 = 0;
                func_0x0001057a1b28(&lStack_3c0,plVar16,&lStack_240);
                lVar20 = plVar16[2];
                if ((ulong)(*plVar16 - lVar20) < 2) {
                  FUN_108a1531c(plVar16,lVar20,2,1,1);
                  lVar20 = plVar16[2];
                }
                *(undefined2 *)(plVar16[1] + lVar20) = 0x203a;
                plVar16[2] = lVar20 + 2;
                if (lStack_240 != 0) {
                  (**(code **)(lStack_240 + 0x20))(&uStack_228,pbStack_238,uStack_230);
                }
                lVar30 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                                   (plVar17,&lStack_240);
                uVar45 = 0x14 - lVar30;
                lVar20 = plVar16[2];
                if ((ulong)(*plVar16 - lVar20) < uVar45) {
                  FUN_108a1531c(plVar16,lVar20,uVar45,1,1);
                  lVar20 = plVar16[2];
                }
                _memcpy(plVar16[1] + lVar20,(long)&lStack_240 + lVar30,uVar45);
                lVar20 = lVar20 + uVar45;
                plVar16[2] = lVar20;
                if ((ulong)(*plVar16 - lVar20) < 2) {
                  FUN_108a1531c(plVar16,lVar20,2,1,1);
                  lVar20 = plVar16[2];
                }
                *(undefined2 *)(plVar16[1] + lVar20) = 0xa0d;
                plVar16[2] = lVar20 + 2;
                uStack_400 = 0x8000000000000001;
                plStack_420 = plVar17;
              }
              goto LAB_108a16c2c;
            }
            goto LAB_108a16c24;
          }
          uStack_400 = 0x8000000000000002;
          plStack_420 = plStack_418;
          if ((*(char *)(uVar37 + 0x6a) != '\x01') && (*pcVar29 != '\x05')) {
            uVar13 = (uint)*(ushort *)(uVar37 + 0x68);
            if (*pcVar29 == '\a') {
              if (199 < uVar13 - 100) {
LAB_108a16fcc:
                plStack_420 = plStack_418;
                if ((uVar13 != 0xcc) && (plStack_420 = plStack_418, uVar13 != 0x130)) {
                  pbStack_238 = (byte *)0x45;
                  lStack_240 = 0;
                  uStack_228 = 0;
                  uStack_230 = 0;
                  func_0x0001057a1b28(&lStack_3c0,plVar16,&lStack_240);
                  lVar20 = plVar16[2];
                  if ((ulong)(*plVar16 - lVar20) < 0xb) {
                    FUN_108a1531c(plVar16,lVar20,0xb,1,1);
                    lVar20 = plVar16[2];
                  }
                  lVar30 = plVar16[1];
                  *(undefined8 *)(lVar30 + lVar20) = 0x656b6e756863203a;
                  *(undefined4 *)(lVar30 + lVar20 + 7) = 0xa0d6465;
                  plVar16[2] = lVar20 + 0xb;
                  if (lStack_240 != 0) {
                    (**(code **)(lStack_240 + 0x20))(&uStack_228,pbStack_238,uStack_230);
                  }
                  uStack_400 = 0x8000000000000000;
                  plStack_420 = plStack_418;
                }
              }
            }
            else if (99 < uVar13 - 100) goto LAB_108a16fcc;
          }
        }
LAB_108a16c2c:
        plVar17 = plStack_358;
        uVar21 = uStack_360;
        uVar45 = uStack_360;
        if (uStack_360 < 0x8000000000000001) {
          uVar45 = 0;
        }
        if ((uStack_360 != 0x8000000000000000) && ((uVar45 & 0x7fffffffffffffff) == 0)) {
          lVar20 = uStack_350 + 1;
          plVar40 = plStack_358 + 3;
          while (lVar20 = lVar20 + -1, lVar20 != 0) {
            (**(code **)(plVar40[-3] + 0x20))(plVar40,plVar40[-2],plVar40[-1]);
            plVar40 = plVar40 + 5;
          }
          if (uVar21 != 0) {
            _free(plVar17);
          }
        }
        uStack_348 = 0;
        plStack_418 = plStack_420;
        uStack_360 = uStack_400;
        plStack_358 = plStack_420;
      }
      if (*pcVar29 == '\x05') {
LAB_108a16ce0:
        bVar11 = uStack_400 != 0x8000000000000000;
        if (uStack_400 < 0x8000000000000001) {
          uStack_400 = 0;
        }
        if ((bVar11) && ((uStack_400 & 0x7fffffffffffffff) == 0)) {
          lVar20 = uStack_350 + 1;
          plVar17 = plStack_420 + 3;
          while (lVar20 = lVar20 + -1, lVar20 != 0) {
            (**(code **)(plVar17[-3] + 0x20))(plVar17,plVar17[-2],plVar17[-1]);
            plVar17 = plVar17 + 5;
          }
          if (uStack_360 != 0) {
            _free(plStack_420);
          }
        }
        plStack_418 = (long *)0x0;
        plStack_358 = (long *)0x0;
        uStack_360 = 0x8000000000000001;
        uStack_348 = 0;
        uStack_400 = 0x8000000000000001;
      }
      else {
        uVar13 = (uint)*(ushort *)(uVar37 + 0x68);
        if (*pcVar29 != '\a') {
          if (99 < uVar13 - 100) goto LAB_108a16cd0;
          goto LAB_108a16ce0;
        }
        if (uVar13 - 100 < 200) goto LAB_108a16ce0;
LAB_108a16cd0:
        if ((uVar13 == 0x130) || (uVar13 == 0xcc)) goto LAB_108a16ce0;
      }
      if ((bVar8) || ((*(byte *)((long)puVar19 + 0x22) & 1) == 0)) {
        lVar20 = plVar16[2];
        if ((ulong)(*plVar16 - lVar20) < 2) {
          FUN_108a1531c(plVar16,lVar20,2,1,1);
          lVar20 = plVar16[2];
        }
        *(undefined2 *)(plVar16[1] + lVar20) = 0xa0d;
        lVar20 = lVar20 + 2;
      }
      else {
        if ((ulong)(*plVar16 - plVar16[2]) < 0x25) {
          FUN_108a1531c(plVar16,plVar16[2],0x25,1,1);
        }
        pbStack_238 = (byte *)0x20;
        lStack_240 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        func_0x0001057a1b28(&lStack_3c0,plVar16,&lStack_240);
        lVar20 = plVar16[2];
        if ((ulong)(*plVar16 - lVar20) < 2) {
          FUN_108a1531c(plVar16,lVar20,2,1,1);
          lVar20 = plVar16[2];
        }
        *(undefined2 *)(plVar16[1] + lVar20) = 0x203a;
        plVar16[2] = lVar20 + 2;
        if (lStack_240 != 0) {
          (**(code **)(lStack_240 + 0x20))(&uStack_228,pbStack_238,uStack_230);
        }
        func_0x0001057b0174(plVar16);
        lVar20 = plVar16[2];
        if ((ulong)(*plVar16 - lVar20) < 4) {
          FUN_108a1531c(plVar16,lVar20,4,1,1);
          lVar20 = plVar16[2];
        }
        *(undefined4 *)(plVar16[1] + lVar20) = 0xa0d0a0d;
        lVar20 = lVar20 + 4;
      }
      uVar21 = uStack_338;
      plVar16[2] = lVar20;
      uVar45 = uStack_400;
      if (uStack_400 < 0x8000000000000001) {
        uVar45 = 0;
      }
      bVar11 = (uVar45 & 0x7fffffffffffffff) == 0;
      bVar12 = uStack_338 != 0x8000000000000000;
      if (bVar11 && bVar12) {
        if (uStack_400 != 0x8000000000000000) {
          lVar20 = uStack_350 + 1;
          plVar16 = plStack_418 + 3;
          while (lVar20 = lVar20 + -1, lVar20 != 0) {
            (**(code **)(plVar16[-3] + 0x20))(plVar16,plVar16[-2],plVar16[-1]);
            plVar16 = plVar16 + 5;
          }
          if (uStack_400 != 0) {
            _free(plStack_418);
          }
        }
        plStack_358 = plStack_330;
        uStack_360 = uStack_338;
        uStack_350 = uStack_328;
        uStack_348 = 0;
      }
      puVar31[1] = (ulong)plStack_358;
      *puVar31 = uStack_360;
      puVar31[2] = uStack_350;
      *(undefined4 *)((long)puVar31 + 0x19) = uStack_347;
      *(uint *)((long)puVar31 + 0x1c) = CONCAT31(uStack_343,uStack_347._3_1_);
      *(byte *)(puVar31 + 3) = (byte)uStack_3f4 & 1;
      if ((uStack_320 != 0) && (lStack_318 != 0)) {
        (**(code **)(lStack_318 + 0x20))(&uStack_300,uStack_310,uStack_308);
      }
      plVar16 = plStack_330;
      if (uVar21 == 0x8000000000000000 || bVar11 && bVar12) goto LAB_108a16f54;
      lVar20 = uStack_328 + 1;
      plVar17 = plStack_330 + 3;
      while (lVar20 = lVar20 + -1, lVar20 != 0) {
        (**(code **)(plVar17[-3] + 0x20))(plVar17,plVar17[-2],plVar17[-1]);
        plVar17 = plVar17 + 5;
      }
joined_r0x000108a16f48:
      if (uVar21 != 0) {
        _free(plVar16);
      }
LAB_108a16f54:
      if (lStack_3a0 != 3 && lStack_3c0 != 0) {
        (**(code **)(lStack_3c0 + 0x20))(auStack_3a8,uStack_3b8,uStack_3b0);
      }
      return;
    }
    FUN_1057aa610(&lStack_240,lVar25,uVar1,uVar37 + 0x30,uVar24);
    uVar45 = uStack_228;
    uVar44 = uStack_230;
    lStack_2c0 = lStack_220;
    pbStack_2b8 = pbStack_218;
    uStack_2b0 = uStack_210;
    uStack_2a8 = uStack_208;
    lStack_2a0 = lStack_200;
    lStack_270 = lStack_220;
    pbStack_268 = pbStack_218;
    uStack_260 = uStack_210;
    uStack_258 = uStack_208;
    lStack_250 = lStack_200;
    if ((int)uStack_230 == 0) {
      uVar45 = uVar24;
    }
joined_r0x000108a15df4:
    uVar24 = uVar45;
    if ((uStack_320 & 1) == 0) {
      uStack_2f8 = uVar44;
      uStack_2f0 = uVar24;
      uStack_2e8 = uVar35;
      func_0x000108a079f0(&UNK_109aa0f60,0x13,&UNK_10b3b4d98);
      goto LAB_108a17248;
    }
    if (lStack_318 == 0) {
      uVar45 = uVar44;
      uVar21 = uVar24;
      uVar42 = uVar35;
      if ((byte)uStack_310 < 0x20) {
        if ((byte)uStack_310 != 0x18) {
          if ((byte)uStack_310 != 0x14) goto LAB_108a15e00;
          if ((uStack_3f4 & 1) == 0) {
            uStack_2f8 = uVar44;
            uStack_2f0 = uVar24;
            uStack_2e8 = uVar35;
            uStack_3f4 = FUN_1057b03c4(pbStack_268,uStack_260);
          }
          else {
            uStack_3f4 = 1;
            uStack_2f8 = uVar44;
            uStack_2f0 = uVar24;
            uStack_2e8 = uVar35;
          }
          if (bVar11) {
            lVar20 = plVar16[2];
            if ((ulong)(*plVar16 - lVar20) < 2) {
              FUN_108a1531c(plVar16,lVar20,2,1,1);
              lVar20 = plVar16[2];
            }
            uVar45 = uStack_260;
            pbVar39 = pbStack_268;
            *(undefined2 *)(plVar16[1] + lVar20) = 0x202c;
            lVar20 = lVar20 + 2;
            plVar16[2] = lVar20;
            if ((ulong)(*plVar16 - lVar20) < uStack_260) {
              FUN_108a1531c(plVar16,lVar20,uStack_260,1,1);
LAB_108a167b0:
              lVar20 = plVar16[2];
            }
          }
          else {
            pbStack_238 = (byte *)0x14;
            lStack_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            func_0x0001057a1b28(&lStack_3c0,plVar16,&lStack_240);
            lVar20 = plVar16[2];
            if ((ulong)(*plVar16 - lVar20) < 2) {
              FUN_108a1531c(plVar16,lVar20,2,1,1);
              lVar20 = plVar16[2];
            }
            *(undefined2 *)(plVar16[1] + lVar20) = 0x203a;
            lVar20 = lVar20 + 2;
            plVar16[2] = lVar20;
            if (lStack_240 != 0) {
              (**(code **)(lStack_240 + 0x20))(&uStack_228,pbStack_238,uStack_230);
              lVar20 = plVar16[2];
            }
            uVar45 = uStack_260;
            pbVar39 = pbStack_268;
            if ((ulong)(*plVar16 - lVar20) < uStack_260) {
              FUN_108a1531c(plVar16,lVar20,uStack_260,1,1);
              goto LAB_108a167b0;
            }
          }
          _memcpy(plVar16[1] + lVar20,pbVar39,uVar45);
          plVar16[2] = lVar20 + uVar45;
          bVar11 = true;
          uVar45 = uStack_2f8;
          uVar21 = uStack_2f0;
          uVar42 = uStack_2e8;
          goto LAB_108a164ec;
        }
        if (!bVar11 && ((uStack_3d0 ^ 0xffffffff) & 1) == 0) goto LAB_108a16ac4;
        if (uVar34 == 2) {
          if (*pcVar29 == '\x05') {
            uStack_3d0 = 1;
            goto LAB_108a15e00;
          }
        }
        else {
          if ((uVar34 & 1) != 0) {
            if (uStack_260 == 0) {
LAB_108a16ac4:
              if (param_5 <= (ulong)plVar16[2]) {
                plVar16[2] = param_5;
              }
              uVar18 = 0x18;
              uStack_2f8 = uVar44;
              uStack_2f0 = uVar24;
              uStack_2e8 = uVar35;
              puVar15 = (undefined8 *)_malloc(0x18);
              if (puVar15 == (undefined8 *)0x0) goto LAB_108a171e4;
              *puVar15 = 0;
              *(undefined2 *)(puVar15 + 2) = 0x401;
            }
            else {
              plVar40 = (long *)0x0;
              uVar38 = uStack_260;
              pbVar39 = pbStack_268;
              while (uVar38 != 0) {
                if (9 < *pbVar39 - 0x30) goto LAB_108a16ac4;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = plVar40;
                uVar36 = (long)plVar40 * 10;
                uVar43 = (ulong)(byte)(*pbVar39 - 0x30);
                plVar40 = (long *)(uVar36 + uVar43);
                if ((SUB168(auVar7 * ZEXT816(10),8) != 0) ||
                   (uVar38 = uVar38 - 1, pbVar39 = pbVar39 + 1, CARRY8(uVar36,uVar43)))
                goto LAB_108a16ac4;
              }
              if (!bVar12) {
                bVar11 = uStack_400 != 0x8000000000000000;
                if (uStack_400 < 0x8000000000000001) {
                  uStack_400 = 0;
                }
                uStack_2f8 = uVar44;
                uStack_2f0 = uVar24;
                uStack_2e8 = uVar35;
                if ((bVar11) && ((uStack_400 & 0x7fffffffffffffff) == 0)) {
                  FUN_1057a5e5c(&uStack_360);
                }
                uStack_360 = 0x8000000000000001;
                uStack_348 = 0;
                pbStack_238 = (byte *)0x18;
                lStack_240 = 0;
                uStack_228 = 0;
                uStack_230 = 0;
                plStack_358 = plVar40;
                func_0x0001057a1b28(&lStack_3c0,plVar16,&lStack_240);
                lVar20 = plVar16[2];
                if ((ulong)(*plVar16 - lVar20) < 2) {
                  FUN_108a1531c(plVar16,lVar20,2,1,1);
                  lVar20 = plVar16[2];
                }
                *(undefined2 *)(plVar16[1] + lVar20) = 0x203a;
                lVar20 = lVar20 + 2;
                plVar16[2] = lVar20;
                if (lStack_240 != 0) {
                  (**(code **)(lStack_240 + 0x20))(&uStack_228,pbStack_238,uStack_230);
                  lVar20 = plVar16[2];
                }
                uVar45 = uStack_260;
                pbVar39 = pbStack_268;
                if ((ulong)(*plVar16 - lVar20) < uStack_260) {
                  FUN_108a1531c(plVar16,lVar20,uStack_260,1,1);
                  lVar20 = plVar16[2];
                }
                _memcpy(plVar16[1] + lVar20,pbVar39,uVar45);
                plVar16[2] = lVar20 + uVar45;
                bVar12 = true;
                uStack_400 = 0x8000000000000001;
                plStack_468 = plVar40;
                plStack_448 = plVar40;
                plStack_420 = plVar40;
                plStack_418 = plVar40;
                goto LAB_108a164e4;
              }
              if (plStack_468 == plVar40) {
                bVar12 = true;
                goto LAB_108a164ec;
              }
              if (param_5 <= (ulong)plVar16[2]) {
                plVar16[2] = param_5;
              }
              uStack_2f8 = uVar44;
              uStack_2f0 = uVar24;
              uStack_2e8 = uVar35;
              puVar15 = (undefined8 *)func_0x0001057ac3cc();
            }
            *puVar31 = 0x8000000000000003;
            puVar31[1] = (ulong)puVar15;
            (**(code **)(lStack_270 + 0x20))(&uStack_258,pbStack_268,uStack_260);
            FUN_1057a6154(&uStack_2f8);
            if ((uStack_320 != 0) && (lStack_318 != 0)) {
              (**(code **)(lStack_318 + 0x20))(&uStack_300,uStack_310,uStack_308);
            }
            uVar45 = uStack_338;
            if (uStack_338 != 0x8000000000000000) {
              lVar20 = uStack_460 + 1;
              plVar16 = plStack_458 + 3;
              while (lVar20 = lVar20 + -1, lVar20 != 0) {
                (**(code **)(plVar16[-3] + 0x20))(plVar16,plVar16[-2],plVar16[-1]);
                plVar16 = plVar16 + 5;
              }
              if (uVar45 != 0) {
                _free(plStack_458);
              }
            }
            plVar16 = plStack_358;
            bVar11 = uStack_400 == 0x8000000000000000;
            if (uStack_400 < 0x8000000000000001) {
              uStack_400 = 0;
            }
            if ((bVar11) || ((uStack_400 & 0x7fffffffffffffff) != 0)) goto LAB_108a16f54;
            lVar20 = uStack_350 + 1;
            plVar17 = plStack_358 + 3;
            while (lVar20 = lVar20 + -1, uVar21 = uStack_360, lVar20 != 0) {
              (**(code **)(plVar17[-3] + 0x20))(plVar17,plVar17[-2],plVar17[-1]);
              plVar17 = plVar17 + 5;
            }
            goto joined_r0x000108a16f48;
          }
          if (bVar11) {
            bVar11 = true;
          }
          else {
            bVar11 = uStack_400 != 0x8000000000000000;
            if (uStack_400 < 0x8000000000000001) {
              uStack_400 = 0;
            }
            uStack_2f8 = uVar44;
            uStack_2f0 = uVar24;
            uStack_2e8 = uVar35;
            if ((bVar11) && ((uStack_400 & 0x7fffffffffffffff) == 0)) {
              lVar20 = uStack_350 + 1;
              plVar40 = plStack_448 + 3;
              while (lVar20 = lVar20 + -1, lVar20 != 0) {
                (**(code **)(plVar40[-3] + 0x20))(plVar40,plVar40[-2],plVar40[-1]);
                plVar40 = plVar40 + 5;
              }
              if (uStack_360 != 0) {
                _free(plStack_448);
              }
            }
            uStack_360 = 0x8000000000000001;
            uStack_348 = 0;
            pbStack_238 = (byte *)0x18;
            lStack_240 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            plStack_358 = plVar17;
            func_0x0001057a1b28(&lStack_3c0,plVar16,&lStack_240);
            lVar20 = plVar16[2];
            if ((ulong)(*plVar16 - lVar20) < 2) {
              FUN_108a1531c(plVar16,lVar20,2,1,1);
              lVar20 = plVar16[2];
            }
            *(undefined2 *)(plVar16[1] + lVar20) = 0x203a;
            lVar20 = lVar20 + 2;
            plVar16[2] = lVar20;
            if (lStack_240 != 0) {
              (**(code **)(lStack_240 + 0x20))(&uStack_228,pbStack_238,uStack_230);
              lVar20 = plVar16[2];
            }
            uVar45 = uStack_260;
            pbVar39 = pbStack_268;
            if ((ulong)(*plVar16 - lVar20) < uStack_260) {
              FUN_108a1531c(plVar16,lVar20,uStack_260,1,1);
              lVar20 = plVar16[2];
            }
            _memcpy(plVar16[1] + lVar20,pbVar39,uVar45);
            plVar16[2] = lVar20 + uVar45;
            uStack_400 = 0x8000000000000001;
            plStack_448 = plVar17;
            plStack_420 = plVar17;
            plStack_418 = plVar17;
LAB_108a164e4:
            bVar11 = true;
            uStack_3d0 = 1;
            uVar45 = uStack_2f8;
            uVar21 = uStack_2f0;
            uVar42 = uStack_2e8;
          }
        }
      }
      else {
        if ((byte)uStack_310 == 0x20) {
          bVar8 = true;
          goto LAB_108a15e00;
        }
        if ((byte)uStack_310 == 0x44) {
          if ((*(char *)(uVar37 + 0x6a) != '\x01') && (*pcVar29 != '\x05')) {
            uVar13 = (uint)*(ushort *)(uVar37 + 0x68);
            if (*pcVar29 == '\a') {
              if (199 < uVar13 - 100) {
LAB_108a161d8:
                if ((uVar13 != 0xcc) && (uVar13 != 0x130)) {
                  if (bVar11) {
                    lVar20 = plVar16[2];
                    uStack_2f8 = uVar44;
                    uStack_2f0 = uVar24;
                    uStack_2e8 = uVar35;
                    if ((ulong)(*plVar16 - lVar20) < 2) {
                      FUN_108a1531c(plVar16,lVar20,2,1,1);
                      lVar20 = plVar16[2];
                    }
                    uVar45 = uStack_260;
                    pbVar39 = pbStack_268;
                    *(undefined2 *)(plVar16[1] + lVar20) = 0x202c;
                    lVar20 = lVar20 + 2;
                    plVar16[2] = lVar20;
                    if ((ulong)(*plVar16 - lVar20) < uStack_260) {
                      FUN_108a1531c(plVar16,lVar20,uStack_260,1,1);
LAB_108a16880:
                      lVar20 = plVar16[2];
                    }
                  }
                  else {
                    pbStack_238 = (byte *)0x44;
                    lStack_240 = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    uStack_2f8 = uVar44;
                    uStack_2f0 = uVar24;
                    uStack_2e8 = uVar35;
                    func_0x0001057a1b28(&lStack_3c0,plVar16,&lStack_240);
                    lVar20 = plVar16[2];
                    if ((ulong)(*plVar16 - lVar20) < 2) {
                      FUN_108a1531c(plVar16,lVar20,2,1,1);
                      lVar20 = plVar16[2];
                    }
                    *(undefined2 *)(plVar16[1] + lVar20) = 0x203a;
                    lVar20 = lVar20 + 2;
                    plVar16[2] = lVar20;
                    if (lStack_240 != 0) {
                      (**(code **)(lStack_240 + 0x20))(&uStack_228,pbStack_238,uStack_230);
                      lVar20 = plVar16[2];
                    }
                    uVar45 = uStack_260;
                    pbVar39 = pbStack_268;
                    if ((ulong)(*plVar16 - lVar20) < uStack_260) {
                      FUN_108a1531c(plVar16,lVar20,uStack_260,1,1);
                      goto LAB_108a16880;
                    }
                  }
                  _memcpy(plVar16[1] + lVar20,pbVar39,uVar45);
                  plVar16[2] = lVar20 + uVar45;
                  if (uStack_338 == 0x8000000000000000) {
                    plStack_458 = (long *)_malloc(0x28);
                    uVar18 = 0x28;
                    if (plStack_458 != (long *)0x0) {
                      plStack_458[1] = (long)pbStack_268;
                      *plStack_458 = lStack_270;
                      plStack_458[3] = uStack_258;
                      plStack_458[2] = uStack_260;
                      plStack_458[4] = lStack_250;
                      uStack_338 = 1;
                      uStack_460 = 1;
                      plStack_330 = plStack_458;
                      goto LAB_108a1663c;
                    }
LAB_108a171e4:
                    func_0x0001087c906c(8,uVar18);
LAB_108a17248:
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x108a1724c);
                    (*pcVar10)();
                  }
                  pbStack_238 = pbStack_268;
                  lStack_240 = lStack_270;
                  uStack_228 = uStack_258;
                  uStack_230 = uStack_260;
                  lStack_220 = lStack_250;
                  if (uStack_460 == uStack_338) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h9a0c3a2b99236cf0E
                              (&uStack_338);
                    plStack_458 = plStack_330;
                  }
                  plVar40 = plStack_458 + uStack_460 * 5;
                  plVar40[4] = lStack_220;
                  plVar40[1] = (long)pbStack_238;
                  *plVar40 = lStack_240;
                  plVar40[3] = uStack_228;
                  plVar40[2] = uStack_230;
                  uStack_460 = uStack_460 + 1;
LAB_108a1663c:
                  bVar11 = true;
                  uStack_328 = uStack_460;
                  goto LAB_108a15c84;
                }
              }
            }
            else if (99 < uVar13 - 100) goto LAB_108a161d8;
          }
        }
        else {
          if ((byte)uStack_310 != 0x45) goto LAB_108a15e00;
          if (!bVar11 && ((uStack_3d0 ^ 0xffffffff) & 1) == 0) goto LAB_108a16ac4;
          if ((*(char *)(uVar37 + 0x6a) != '\x01') && (*pcVar29 != '\x05')) {
            uVar13 = (uint)*(ushort *)(uVar37 + 0x68);
            if (*pcVar29 == '\a') {
              if (199 < uVar13 - 100) {
LAB_108a16250:
                if ((uVar13 != 0xcc) && (uVar13 != 0x130)) {
                  uStack_2f8 = uVar44;
                  uStack_2f0 = uVar24;
                  uStack_2e8 = uVar35;
                  uStack_3cc = FUN_1057b0260(pbStack_268,uStack_260);
                  uStack_3cc = uStack_3cc ^ 1;
                  if (bVar11) {
                    lVar20 = plVar16[2];
                    if ((ulong)(*plVar16 - lVar20) < 2) {
                      FUN_108a1531c(plVar16,lVar20,2,1,1);
                      lVar20 = plVar16[2];
                    }
                    uVar45 = uStack_260;
                    pbVar39 = pbStack_268;
                    *(undefined2 *)(plVar16[1] + lVar20) = 0x202c;
                    lVar20 = lVar20 + 2;
                    plVar16[2] = lVar20;
                    if ((ulong)(*plVar16 - lVar20) < uStack_260) {
                      FUN_108a1531c(plVar16,lVar20,uStack_260,1,1);
                      lVar20 = plVar16[2];
                    }
                    _memcpy(plVar16[1] + lVar20,pbVar39,uVar45);
                    plVar16[2] = lVar20 + uVar45;
                  }
                  else {
                    bVar11 = uStack_400 != 0x8000000000000000;
                    if (uStack_400 < 0x8000000000000001) {
                      uStack_400 = 0;
                    }
                    if ((bVar11) && ((uStack_400 & 0x7fffffffffffffff) == 0)) {
                      FUN_1057a5e5c(&uStack_360);
                    }
                    uStack_360 = 0x8000000000000000;
                    uStack_348 = 0;
                    pbStack_238 = (byte *)0x45;
                    lStack_240 = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    func_0x0001057a1b28(&lStack_3c0,plVar16,&lStack_240);
                    lVar20 = plVar16[2];
                    if ((ulong)(*plVar16 - lVar20) < 2) {
                      FUN_108a1531c(plVar16,lVar20,2,1,1);
                      lVar20 = plVar16[2];
                    }
                    *(undefined2 *)(plVar16[1] + lVar20) = 0x203a;
                    lVar20 = lVar20 + 2;
                    plVar16[2] = lVar20;
                    if (lStack_240 != 0) {
                      (**(code **)(lStack_240 + 0x20))(&uStack_228,pbStack_238,uStack_230);
                      lVar20 = plVar16[2];
                    }
                    uVar45 = uStack_260;
                    pbVar39 = pbStack_268;
                    if ((ulong)(*plVar16 - lVar20) < uStack_260) {
                      FUN_108a1531c(plVar16,lVar20,uStack_260,1,1);
                      lVar20 = plVar16[2];
                    }
                    _memcpy(plVar16[1] + lVar20,pbVar39,uVar45);
                    plVar16[2] = lVar20 + uVar45;
                    uStack_400 = 0x8000000000000000;
                  }
                  goto LAB_108a164e4;
                }
              }
            }
            else if (99 < uVar13 - 100) goto LAB_108a16250;
          }
        }
      }
LAB_108a164ec:
      uStack_2e8 = uVar42;
      uStack_2f0 = uVar21;
      uStack_2f8 = uVar45;
      (**(code **)(lStack_270 + 0x20))(&uStack_258,pbStack_268,uStack_260);
      goto LAB_108a15c84;
    }
LAB_108a15e00:
    func_0x0001057a1b28(&lStack_3c0,plVar16,&lStack_318);
    lVar20 = plVar16[2];
    if ((ulong)(*plVar16 - lVar20) < 2) {
      FUN_108a1531c(plVar16,lVar20,2,1,1);
      lVar20 = plVar16[2];
    }
    uVar45 = uStack_260;
    pbVar39 = pbStack_268;
    *(undefined2 *)(plVar16[1] + lVar20) = 0x203a;
    lVar20 = lVar20 + 2;
    plVar16[2] = lVar20;
    if ((ulong)(*plVar16 - lVar20) < uStack_260) {
      FUN_108a1531c(plVar16,lVar20,uStack_260,1,1);
      lVar20 = plVar16[2];
    }
    _memcpy(plVar16[1] + lVar20,pbVar39,uVar45);
    lVar20 = lVar20 + uVar45;
    plVar16[2] = lVar20;
    if ((ulong)(*plVar16 - lVar20) < 2) {
      FUN_108a1531c(plVar16,lVar20,2,1,1);
      lVar20 = plVar16[2];
    }
    *(undefined2 *)(plVar16[1] + lVar20) = 0xa0d;
    plVar16[2] = lVar20 + 2;
    (**(code **)(lStack_270 + 0x20))(&uStack_258,pbStack_268,uStack_260);
  } while( true );
LAB_108a15410:
  auVar46._8_8_ = uStack_120;
  auVar46._0_8_ = uStack_150;
  lVar20 = lStack_118;
  if (lStack_118 == lStack_158) {
    return;
  }
  goto LAB_108a15420;
}

