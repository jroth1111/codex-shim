
undefined1  [16] __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(undefined8 *param_1)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  ulong uVar9;
  ulong uVar10;
  long *extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long *plVar11;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar12;
  char *pcVar13;
  undefined *puVar14;
  uint uVar15;
  long lVar16;
  char *extraout_x8;
  char *pcVar17;
  ulong uVar18;
  char *extraout_x10;
  char *pcVar19;
  char *extraout_x10_00;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  char *pcStack_390;
  undefined *puStack_388;
  undefined1 uStack_380;
  undefined2 uStack_358;
  undefined1 uStack_356;
  undefined1 auStack_350 [16];
  char cStack_340;
  undefined8 uStack_33f;
  undefined8 uStack_337;
  undefined8 uStack_32f;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  undefined1 uStack_318;
  undefined1 uStack_317;
  char cStack_316;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined7 uStack_2f0;
  undefined1 uStack_2e9;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  char cStack_2a0;
  undefined7 uStack_29f;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char acStack_268 [8];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_1f0;
  long lStack_1e8;
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
  byte bStack_170;
  byte bStack_16f;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  byte bStack_138;
  byte bStack_137;
  long *plStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  char *pcStack_a0;
  ulong uStack_98;
  char cStack_90;
  ulong uStack_8f;
  undefined8 uStack_87;
  undefined8 uStack_7f;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  byte bStack_68;
  char cStack_67;
  byte bStack_66;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long *plVar8;
  
  pcStack_a0 = (char *)*param_1;
  uVar9 = param_1[1];
  cStack_90 = *(char *)(param_1 + 2);
  if (cStack_90 != '\x06') {
    uStack_58 = *(undefined8 *)((long)param_1 + 0x19);
    uStack_60 = *(ulong *)((long)param_1 + 0x11);
    uStack_50 = *(undefined8 *)((long)param_1 + 0x21);
    uStack_48 = (undefined7)*(undefined8 *)((long)param_1 + 0x29);
    uStack_41 = (undefined1)param_1[6];
    uStack_40 = (undefined7)((ulong)param_1[6] >> 8);
  }
  uStack_87 = uStack_58;
  uStack_8f = uStack_60;
  bStack_66 = *(byte *)((long)param_1 + 0x3a);
  bStack_68 = *(byte *)(param_1 + 7);
  cStack_67 = *(char *)((long)param_1 + 0x39);
  uStack_77 = uStack_48;
  uStack_7f = uStack_50;
  uStack_70 = uStack_41;
  uStack_6f = uStack_40;
  pcVar19 = pcStack_a0;
  uVar10 = uVar9;
  if (bStack_68 == 2) {
    if (uVar9 == 0) goto LAB_10603664c;
    do {
      uVar20 = 0;
      do {
        if (pcVar19[uVar20] == '/') {
          lVar21 = 1;
          lVar16 = 0;
          if (uVar20 == 0) goto LAB_106036510;
          goto LAB_1060364fc;
        }
        uVar20 = uVar20 + 1;
      } while (uVar10 != uVar20);
      lVar21 = 0;
      uVar20 = uVar10;
      if (uVar10 == 0) {
        lVar16 = 0;
      }
      else {
LAB_1060364fc:
        if ((uVar20 != 1) || (lVar16 = 1, *pcVar19 != '.')) goto LAB_106036530;
      }
LAB_106036510:
      uVar20 = lVar21 + lVar16;
      uVar1 = uVar10 - uVar20;
      uStack_98 = uVar9;
      if (uVar10 < uVar20) goto LAB_106036678;
      pcVar19 = pcVar19 + uVar20;
      uVar10 = uVar1;
    } while (uVar1 != 0);
    uVar10 = 0;
  }
LAB_106036530:
  uVar9 = uVar10;
  if (cStack_67 != '\x02') {
LAB_10603664c:
    auVar23._8_8_ = uVar9;
    auVar23._0_8_ = pcVar19;
    return auVar23;
  }
  pcStack_a0 = pcVar19;
  uVar10 = uVar9;
  if (bStack_68 < 2) {
    if ((bStack_66 & 1) == 0) {
      do {
        uStack_98 = uVar10;
        uVar9 = uStack_98;
        if (uStack_98 == 0) {
LAB_1060365e0:
          if (uStack_98 == 0) goto LAB_10603664c;
        }
        else {
          if (uStack_98 == 1) {
            if (*pcVar19 != '.') {
LAB_1060365cc:
              if (uStack_98 != 0) goto LAB_1060365e8;
              goto LAB_10603664c;
            }
          }
          else {
            if (*pcVar19 != '.') goto LAB_1060365e0;
            if (pcVar19[1] != '/') goto LAB_1060365cc;
          }
          if (uStack_98 < 2) goto LAB_10603664c;
        }
LAB_1060365e8:
        FUN_1060362d8(&uStack_60,&pcStack_a0);
        if ((char)uStack_58 != '\n') goto LAB_10603664c;
        uVar10 = uVar9 - uStack_60;
      } while (uStack_60 <= uVar9);
    }
    else {
      do {
        uVar9 = uVar10;
        if (uVar9 < 2) goto LAB_10603664c;
        uStack_98 = uVar9;
        FUN_1060362d8(&uStack_60,&pcStack_a0);
        if ((char)uStack_58 != '\n') goto LAB_10603664c;
        uVar10 = uVar9 - uStack_60;
      } while (uStack_60 <= uVar9);
    }
  }
  else {
    do {
      uVar9 = uVar10;
      if (uVar9 == 0) goto LAB_10603664c;
      uStack_98 = uVar9;
      FUN_1060362d8(&uStack_60,&pcStack_a0);
      if ((char)uStack_58 != '\n') goto LAB_10603664c;
      uVar10 = uVar9 - uStack_60;
    } while (uStack_60 <= uVar9);
  }
  uVar20 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                     (0,uVar10,uVar9,&UNK_10b4ae058);
  uVar10 = uVar9;
LAB_106036678:
  auVar23 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                      (uVar20,uVar10,uVar10,&UNK_10b4ae0a0);
  plVar11 = auVar23._8_8_;
  plVar8 = auVar23._0_8_;
  if (((char)plVar8[2] == '\x06' && (char)plVar11[2] == '\x06') &&
     ((char)plVar8[7] == (char)plVar11[7])) {
    lVar16 = *plVar8;
    pcVar13 = (char *)plVar8[1];
    lVar21 = *plVar11;
    pcStack_390 = (char *)plVar11[1];
    pcVar19 = pcStack_390;
    if (pcVar13 <= pcStack_390) {
      pcVar19 = pcVar13;
    }
    if (pcVar19 != (char *)0x0) {
      pcVar17 = (char *)0x0;
      do {
        if (pcVar17[lVar16] != pcVar17[lVar21]) {
          if (pcVar17 <= pcVar13) goto LAB_106036720;
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                    (0,pcVar17,pcVar13,&UNK_10b4ae0e8);
          pcVar19 = extraout_x10;
          goto LAB_106036964;
        }
        pcVar17 = pcVar17 + 1;
      } while (pcVar19 != pcVar17);
    }
    pcVar17 = pcVar19;
    if (pcVar13 == pcStack_390) {
      uVar9 = 0;
      goto LAB_106036930;
    }
LAB_106036720:
    do {
      pcVar19 = pcVar17;
      if (pcVar19 == (char *)0x0) goto LAB_10603677c;
      pcVar17 = pcVar19 + -1;
    } while (pcVar19[lVar16 + -1] != '/');
    if (pcVar13 < pcVar19) {
LAB_106036964:
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(pcVar19,pcVar13);
      pcStack_390 = extraout_x8;
      pcVar19 = extraout_x10_00;
LAB_106036978:
      puVar14 = &UNK_10b4ae0b8;
      auStack_350 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(pcVar19,pcStack_390)
      ;
      if (auStack_350._8_8_ == 0) {
        cVar6 = false;
      }
      else {
        cVar6 = *auStack_350._0_8_ == '/';
      }
      if (puVar14 == (undefined *)0x0) {
        uStack_356 = false;
      }
      else {
        uStack_356 = *pcStack_390 == '/';
      }
      cStack_340 = '\x06';
      uStack_380 = 6;
      uStack_358 = 0x201;
      uStack_318 = 1;
      uStack_317 = 2;
      puStack_388 = puVar14;
      do {
        uStack_337 = uStack_308;
        uStack_33f = uStack_310;
        uStack_327 = uStack_2f8;
        uStack_32f = uStack_300;
        uStack_320 = uStack_2f1;
        uStack_31f = uStack_2f0;
        cStack_316 = cVar6;
        __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                  (&cStack_2a0,auStack_350);
        __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                  (acStack_268,&pcStack_390);
        uStack_310 = CONCAT71(uStack_29f,cStack_2a0);
        uStack_308 = uStack_298;
        uStack_2f8 = (undefined7)uStack_288;
        uStack_2f1 = (undefined1)((ulong)uStack_288 >> 0x38);
        uStack_300 = uStack_290;
        uStack_2e8 = uStack_278;
        uStack_2f0 = (undefined7)uStack_280;
        uStack_2e9 = (undefined1)((ulong)uStack_280 >> 0x38);
        uStack_2e0 = uStack_270;
        uStack_2d0 = uStack_260;
        uStack_2c0 = uStack_250;
        uStack_2c8 = uStack_258;
        uStack_2b0 = uStack_240;
        uStack_2b8 = uStack_248;
        uStack_2a8 = uStack_238;
        uVar12 = extraout_x1_04;
        if (cStack_2a0 == '\n') {
          if (acStack_268[0] != '\n') {
            cVar6 = '\x02';
          }
LAB_106036b04:
          auVar25._1_7_ = 0;
          auVar25[0] = cVar6 != '\x02';
          auVar25._8_8_ = uVar12;
          return auVar25;
        }
        if (acStack_268[0] == '\n') goto LAB_106036b04;
        iVar7 = FUN_1060559dc(&uStack_310,auStack_2d8);
        if (iVar7 == 0) {
          cVar6 = '\x02';
          uVar12 = extraout_x1_05;
          goto LAB_106036b04;
        }
        cVar6 = cStack_316;
        if (cStack_340 != '\x06') {
          uStack_2f8 = uStack_327;
          uStack_2f1 = uStack_320;
          uStack_2f0 = uStack_31f;
          uStack_310 = uStack_33f;
          uStack_308 = uStack_337;
          uStack_300 = uStack_32f;
        }
      } while( true );
    }
    *plVar8 = (long)(pcVar17 + lVar16 + 1);
    plVar8[1] = (long)(pcVar13 + ~(ulong)pcVar17);
    *(undefined1 *)(plVar8 + 7) = 2;
    if (pcStack_390 < pcVar19) goto LAB_106036978;
    *plVar11 = (long)(pcVar17 + lVar21 + 1);
    plVar11[1] = (long)(pcStack_390 + ~(ulong)pcVar17);
    *(undefined1 *)(plVar11 + 7) = 2;
  }
LAB_10603677c:
  lStack_1e8 = plVar8[1];
  lStack_1f0 = *plVar8;
  lStack_1d8 = plVar8[3];
  lStack_1e0 = plVar8[2];
  lStack_1c8 = plVar8[5];
  lStack_1d0 = plVar8[4];
  lStack_1b8 = plVar8[7];
  lStack_1c0 = plVar8[6];
  lStack_1a8 = plVar11[1];
  lStack_1b0 = *plVar11;
  lStack_198 = plVar11[3];
  lStack_1a0 = plVar11[2];
  lStack_188 = plVar11[5];
  lStack_190 = plVar11[4];
  lStack_178 = plVar11[7];
  lStack_180 = plVar11[6];
  __ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2794890ed267533bE
            (&bStack_170,&lStack_1f0);
  bVar2 = bStack_170;
  bVar3 = bStack_16f;
  uVar12 = uStack_168;
  uVar10 = uStack_160;
  uVar4 = uStack_158;
  uVar20 = uStack_150;
  while (bVar2 != 10) {
    uVar22 = (ulong)bVar2;
    bStack_170 = bVar2;
    bStack_16f = bVar3;
    uStack_168 = uVar12;
    uStack_160 = uVar10;
    uStack_158 = uVar4;
    uStack_150 = uVar20;
    __ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2794890ed267533bE
              (&bStack_138,&lStack_1b0);
    uVar1 = uStack_118;
    uVar5 = uStack_120;
    uVar18 = (ulong)bStack_138;
    if (bStack_138 == 10) {
      uVar9 = 1;
      plVar11 = extraout_x1_00;
      goto LAB_106036930;
    }
    lVar16 = uVar22 - 5;
    if (bVar2 < 6) {
      lVar16 = 0;
    }
    lVar21 = 0;
    if (5 < bStack_138) {
      lVar21 = uVar18 - 5;
    }
    uVar15 = (uint)(lVar21 < lVar16);
    if (lVar16 < lVar21) {
      uVar15 = 0xffffffff;
    }
    uVar9 = (ulong)uVar15;
    plVar11 = extraout_x1_00;
    if (lVar16 != lVar21) goto LAB_1060367e4;
    if (lVar16 == 4) goto LAB_106036900;
    if ((lVar16 == 0) && (bStack_138 < 6)) {
      uVar15 = (uint)(uVar18 < uVar22);
      if (uVar22 < uVar18) {
        uVar15 = 0xffffffff;
      }
      uVar9 = (ulong)uVar15;
      plVar11 = plStack_130;
      if (bVar2 == bStack_138) {
        if (bVar2 < 3) {
          if (bVar2 == 0) {
LAB_106036900:
            lVar16 = uVar10 - uStack_128;
            if (uStack_128 <= uVar10) {
              uVar10 = uStack_128;
            }
            iVar7 = _memcmp(uVar12,plStack_130,uVar10);
            plVar11 = extraout_x1_03;
            if (iVar7 != 0) {
              lVar16 = (long)iVar7;
            }
          }
          else {
            if (bVar2 != 1) goto LAB_1060367d8;
LAB_1060368b0:
            lVar16 = uVar10 - uStack_128;
            if (uStack_128 <= uVar10) {
              uVar10 = uStack_128;
            }
            iVar7 = _memcmp(uVar12,plStack_130,uVar10);
            if (iVar7 != 0) {
              lVar16 = (long)iVar7;
            }
            uVar15 = (uint)(0 < lVar16);
            if (lVar16 < 0) {
              uVar15 = 0xffffffff;
            }
            uVar9 = (ulong)uVar15;
            plVar11 = extraout_x1_01;
            if (lVar16 != 0) goto LAB_1060367e4;
            uVar9 = uVar20;
            if (uVar1 <= uVar20) {
              uVar9 = uVar1;
            }
            iVar7 = _memcmp(uVar4,uVar5,uVar9);
            plVar11 = extraout_x1_02;
            lVar16 = uVar20 - uVar1;
            if (iVar7 != 0) {
              lVar16 = (long)iVar7;
            }
          }
          uVar15 = (uint)(0 < lVar16);
          if (lVar16 < 0) {
            uVar15 = 0xffffffff;
          }
          uVar9 = (ulong)uVar15;
        }
        else {
          if (bVar2 == 3) goto LAB_106036900;
          if (bVar2 == 4) goto LAB_1060368b0;
LAB_1060367d8:
          uVar15 = (uint)(bStack_137 < bVar3);
          if (bVar3 < bStack_137) {
            uVar15 = 0xffffffff;
          }
          uVar9 = (ulong)uVar15;
        }
      }
LAB_1060367e4:
      if ((uVar9 & 0xfd) != 0) goto LAB_106036930;
    }
    __ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2794890ed267533bE
              (&bStack_170,&lStack_1f0);
    bVar2 = bStack_170;
    bVar3 = bStack_16f;
    uVar12 = uStack_168;
    uVar10 = uStack_160;
    uVar4 = uStack_158;
    uVar20 = uStack_150;
  }
  __ZN80__LT_std__path__Components_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h2794890ed267533bE
            (&bStack_138,&lStack_1b0);
  uVar9 = (ulong)-(uint)(bStack_138 != 10);
  plVar11 = extraout_x1;
LAB_106036930:
  auVar24._8_8_ = plVar11;
  auVar24._0_8_ = uVar9;
  return auVar24;
}

