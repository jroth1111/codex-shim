
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10149ec80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong *puVar2;
  char *pcVar3;
  long *plVar4;
  int iVar5;
  byte bVar6;
  code *pcVar7;
  ulong uVar8;
  char cVar9;
  char cVar10;
  byte *pbVar11;
  int *piVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long *plVar17;
  undefined1 uVar18;
  undefined2 uVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined1 uVar25;
  long lVar26;
  byte *pbVar27;
  undefined2 uVar28;
  ulong in_xzr;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 *puStack_648;
  byte *pbStack_550;
  byte *pbStack_548;
  byte *pbStack_540;
  byte *pbStack_538;
  byte *pbStack_530;
  byte *pbStack_528;
  byte *pbStack_520;
  byte *pbStack_518;
  undefined8 uStack_510;
  byte *pbStack_508;
  byte *pbStack_500;
  byte *pbStack_4f8;
  byte *pbStack_4f0;
  byte *pbStack_4e8;
  byte *pbStack_4e0;
  byte *pbStack_4d8;
  byte *pbStack_4d0;
  byte *pbStack_4c8;
  byte *pbStack_4c0;
  byte *pbStack_340;
  byte *pbStack_338;
  byte *pbStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  byte *pbStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  undefined2 uStack_2d8;
  undefined1 uStack_2d4;
  char cStack_2d3;
  char cStack_2d2;
  undefined1 uStack_2d1;
  undefined2 uStack_2b8;
  undefined1 uStack_2b4;
  char cStack_2b3;
  char cStack_2b2;
  undefined1 uStack_2b1;
  undefined8 uStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  undefined8 uStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  undefined8 uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  
  bVar6 = *(byte *)(param_2 + 0x10);
  if (bVar6 < 3) {
    if (bVar6 != 0) {
      if (bVar6 == 1) {
        func_0x000108a07af4(&UNK_10b24db20);
      }
      func_0x000108a07b10();
LAB_1014a0858:
      func_0x000108a07af4(&UNK_10b24db68);
      goto LAB_1014a0874;
    }
    param_2[10] = param_2[5];
    param_2[9] = param_2[4];
    param_2[8] = param_2[3];
    param_2[7] = param_2[2];
    *(undefined4 *)((long)param_2 + 0x81) = 0x10100;
    lVar26 = param_2[6];
    *(undefined1 *)((long)param_2 + 0x85) = 1;
    param_2[0xc] = param_2[1];
    param_2[0xb] = *param_2;
    lVar21 = *(long *)(lVar26 + 8) + *(long *)(lVar26 + 0x10) * 0x20;
    lVar20 = *(long *)(lVar26 + 0x10) * -0x20;
    plVar14 = (long *)(lVar21 + 8);
    do {
      plVar17 = plVar14;
      if (lVar20 == 0) {
        cVar9 = '\0';
        goto LAB_10149edd8;
      }
      plVar1 = (long *)(lVar21 + -0x10);
      plVar4 = (long *)(lVar21 + -8);
      lVar21 = lVar21 + -0x20;
      plVar14 = plVar17 + -4;
      lVar20 = lVar20 + 0x20;
    } while (*plVar4 != 0x55c73e5b4087d8fe || *plVar1 != 0x22a6c8a18bae4e93);
    auVar31 = (**(code **)(*plVar14 + 0x38))(plVar17[-5]);
    (**(code **)(auVar31._8_8_ + 0x18))(&uStack_510);
    cVar9 = '\0';
    if ((auVar31._0_8_ != (char *)0x0) &&
       (pbStack_508 == (byte *)0x55c73e5b4087d8fe && uStack_510 == (byte *)0x22a6c8a18bae4e93)) {
      cVar9 = *auVar31._0_8_;
    }
LAB_10149edd8:
    lVar21 = *(long *)(lVar26 + 8) + *(long *)(lVar26 + 0x10) * 0x20;
    lVar20 = *(long *)(lVar26 + 0x10) * -0x20;
    plVar14 = (long *)(lVar21 + 8);
    do {
      plVar17 = plVar14;
      if (lVar20 == 0) {
        uVar25 = 0;
        goto LAB_10149ee70;
      }
      plVar1 = (long *)(lVar21 + -0x10);
      plVar4 = (long *)(lVar21 + -8);
      lVar21 = lVar21 + -0x20;
      plVar14 = plVar17 + -4;
      lVar20 = lVar20 + 0x20;
    } while (*plVar4 != 0x638c0f9f14a817cc || *plVar1 != 0x5f77f32fa192360e);
    auVar31 = (**(code **)(*plVar14 + 0x38))(plVar17[-5]);
    (**(code **)(auVar31._8_8_ + 0x18))(&uStack_510);
    uVar25 = 0;
    if ((auVar31._0_8_ != (undefined1 *)0x0) &&
       (pbStack_508 == (byte *)0x638c0f9f14a817cc && uStack_510 == (byte *)0x5f77f32fa192360e)) {
      uVar25 = *auVar31._0_8_;
    }
LAB_10149ee70:
    *(undefined1 *)((long)param_2 + 0x85) = 0;
    param_2[0xe] = param_2[8];
    param_2[0xd] = param_2[7];
    param_2[0xf] = param_2[9];
    uVar28 = *(undefined2 *)(param_2 + 10);
    if (*(char *)(param_2 + 0xd) == '\x1a') {
      if ((*(byte *)((long)param_2 + 0x69) & 1) == 0) {
        if (cVar9 != '\x02') {
          uVar19 = 0;
          *(undefined4 *)((long)param_2 + 0x642) = *(undefined4 *)((long)param_2 + 0x6a);
          *(undefined2 *)((long)param_2 + 0x646) = uVar28;
          goto LAB_10149f8f4;
        }
        pbVar11 = (byte *)_malloc(0x10);
        if (pbVar11 == (byte *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
          goto LAB_1014a0874;
        }
        puVar16 = &UNK_108cd5fae;
      }
      else {
        if (cVar9 != '\x01') {
          param_2[0xc9] = *(undefined8 *)((long)param_2 + 0x3e);
          *(undefined4 *)(param_2 + 0xca) = *(undefined4 *)((long)param_2 + 0x46);
          *(undefined4 *)((long)param_2 + 0x644) = *(undefined4 *)((long)param_2 + 0x6a);
          *(undefined8 *)((long)param_2 + 0x654) = 0;
          *(undefined2 *)((long)param_2 + 0x65c) = uVar28;
          uVar19 = 1;
LAB_10149f8f4:
          *(undefined2 *)(param_2 + 200) = uVar19;
          param_2[0x14] = param_2[0xcb];
          param_2[0x13] = param_2[0xca];
          param_2[0x12] = param_2[0xc9];
          param_2[0x11] = param_2[200];
          param_2[0x15] = param_2 + 0xb;
          *(undefined1 *)(param_2 + 0x1a) = 0;
          goto LAB_10149f918;
        }
        pbVar11 = (byte *)_malloc(0x10);
        if (pbVar11 == (byte *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
          goto LAB_1014a0874;
        }
        puVar16 = &UNK_108cd5fc9;
      }
      *(undefined **)pbVar11 = puVar16;
      pbVar11[8] = 0x1b;
      pbVar11[9] = 0;
      pbVar11[10] = 0;
      pbVar11[0xb] = 0;
      pbVar11[0xc] = 0;
      pbVar11[0xd] = 0;
      pbVar11[0xe] = 0;
      pbVar11[0xf] = 0;
      pbVar22 = &UNK_10b209930;
      pbVar27 = (byte *)0x2;
      *(undefined1 *)((long)param_2 + 0x81) = 0;
      cVar9 = *(char *)(param_2 + 0xb);
      goto joined_r0x00010149f9a0;
    }
    *(undefined1 *)((long)param_2 + 0x81) = 1;
    puVar13 = param_2 + 0x11;
    param_2[0x12] = param_2[8];
    param_2[0x11] = param_2[7];
    param_2[0x13] = param_2[9];
    lVar21 = *(long *)(lVar26 + 8) + *(long *)(lVar26 + 0x10) * 0x20;
    lVar20 = *(long *)(lVar26 + 0x10) * -0x20;
    plVar14 = (long *)(lVar21 + 8);
    do {
      plVar17 = plVar14;
      if (lVar20 == 0) goto LAB_10149ef68;
      plVar1 = (long *)(lVar21 + -0x10);
      plVar4 = (long *)(lVar21 + -8);
      lVar21 = lVar21 + -0x20;
      plVar14 = plVar17 + -4;
      lVar20 = lVar20 + 0x20;
    } while (*plVar4 != -0x27f08f15ee169b8 || *plVar1 != -0x2b5401d52b4d2d7b);
    auVar31 = (**(code **)(*plVar14 + 0x38))(plVar17[-5]);
    piVar12 = auVar31._0_8_;
    (**(code **)(auVar31._8_8_ + 0x18))(&uStack_510);
    if ((pbStack_508 == (byte *)0xfd80f70ea11e9648 && uStack_510 == (byte *)0xd4abfe2ad4b2d285) &&
        piVar12 != (int *)0x0) {
      iVar5 = *piVar12;
      plVar14 = *(long **)(piVar12 + 2);
      lVar20 = *plVar14;
      *plVar14 = lVar20 + 1;
      if (iVar5 == 1) {
        if (lVar20 < 0) goto LAB_1014a0874;
        uVar15 = 1;
      }
      else {
        if (lVar20 < 0) goto LAB_1014a0874;
        uVar15 = 0;
      }
      param_2[0x37] = uVar15;
      param_2[0x38] = plVar14;
      *(undefined1 *)((long)param_2 + 0x84) = 1;
      if (*(char *)(param_2 + 0x11) == '\x19') {
        __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                  (&uStack_510,puVar13);
      }
      else {
        pbStack_508 = (byte *)param_2[0x12];
        uStack_510 = (byte *)*puVar13;
        pbStack_500 = (byte *)param_2[0x13];
      }
      pbVar11 = uStack_510;
      pbStack_338 = pbStack_508;
      pbStack_340 = uStack_510;
      pbStack_330 = pbStack_500;
      *(undefined2 *)((long)param_2 + 0x83) = 0;
      if (*(char *)(param_2 + 0xb) == '\x01') {
        plVar17 = (long *)param_2[0xc];
        uVar18 = 1;
        lVar20 = *plVar17;
        *plVar17 = lVar20 + 1;
        if (lVar20 < 0) goto LAB_1014a0874;
      }
      else {
        uVar18 = 0;
        uStack_510._0_7_ =
             CONCAT43(*(undefined4 *)((long)param_2 + 0x5c),
                      (int3)*(undefined4 *)((long)param_2 + 0x59));
        plVar17 = (long *)param_2[0xc];
      }
      pbStack_120 = pbStack_500;
      param_2[0x14] = uVar15;
      param_2[0x15] = plVar14;
      pbStack_128 = pbStack_508;
      uStack_130 = pbVar11;
      *(undefined1 *)(param_2 + 0x16) = uVar18;
      *(undefined4 *)((long)param_2 + 0xb1) = (undefined4)uStack_510;
      *(int *)((long)param_2 + 0xb4) = (int)((ulong)uStack_510 >> 0x18);
      param_2[0x17] = plVar17;
      param_2[0x19] = pbStack_508;
      param_2[0x18] = pbVar11;
      param_2[0x1a] = pbStack_500;
      param_2[0x1b] = lVar26;
      *(undefined2 *)(param_2 + 0x35) = uVar28;
      *(char *)((long)param_2 + 0x1ac) = cVar9;
      *(undefined1 *)((long)param_2 + 0x1ad) = uVar25;
      *(undefined1 *)((long)param_2 + 0x1ae) = 0;
LAB_10149fc04:
      *(undefined1 *)(param_2 + 0x36) = 0;
      param_2[0x1d] = param_2[0x19];
      param_2[0x1c] = param_2[0x18];
      *(undefined2 *)((long)param_2 + 0x1aa) = uVar28;
      *(undefined1 *)((long)param_2 + 0x1af) = uVar25;
      param_2[0x1e] = param_2[0x1a];
      param_2[0x1f] = uVar15;
      param_2[0x20] = plVar14;
      pcVar3 = (char *)(param_2 + 0x21);
      param_2[0x22] = param_2[0x17];
      *(undefined8 *)pcVar3 = param_2[0x16];
      auVar31 = func_0x000100fd2b90();
      *(undefined1 *)(param_2 + 0x36) = 1;
      *(undefined1 (*) [16])(param_2 + 0x23) = auVar31;
      puVar13 = (undefined8 *)_malloc(0x18);
      if (puVar13 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_1014a0874;
      }
      puVar13[1] = 1;
      *puVar13 = 1;
      *(undefined1 *)(puVar13 + 2) = 0;
      param_2[0x25] = puVar13;
      puVar13 = (undefined8 *)_malloc(0x38);
      if (puVar13 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
        goto LAB_1014a0874;
      }
      puVar13[1] = 1;
      *puVar13 = 1;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[2] = 0;
      *(undefined1 *)(puVar13 + 5) = 0;
      puVar13[6] = 6;
      param_2[0x26] = puVar13;
      lVar20 = *(long *)(lVar26 + 8) + *(long *)(lVar26 + 0x10) * 0x20;
      lVar26 = *(long *)(lVar26 + 0x10) * -0x20;
      plVar14 = (long *)(lVar20 + 8);
      do {
        plVar17 = plVar14;
        if (lVar26 == 0) goto LAB_10149fd1c;
        plVar1 = (long *)(lVar20 + -0x10);
        plVar4 = (long *)(lVar20 + -8);
        lVar20 = lVar20 + -0x20;
        plVar14 = plVar17 + -4;
        lVar26 = lVar26 + 0x20;
      } while (*plVar4 != 0x7b252f384e734e05 || *plVar1 != 0xcc3a8bdcd18b507);
      auVar31 = (**(code **)(*plVar14 + 0x38))(plVar17[-5]);
      plVar14 = auVar31._0_8_;
      (**(code **)(auVar31._8_8_ + 0x18))(&uStack_510);
      if ((pbStack_508 == (byte *)0x7b252f384e734e05 && uStack_510 == (byte *)0xcc3a8bdcd18b507) &&
          plVar14 != (long *)0x0) {
        if (*plVar14 == 4) {
          pbVar11 = (byte *)0x4;
        }
        else {
          __ZN75__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__clone__Clone_GT_5clone17h8894a6a19c694adeE
                    (&uStack_510,plVar14);
          pbStack_328 = pbStack_4f0;
          pbStack_330 = pbStack_4f8;
          pbStack_318 = pbStack_4e0;
          pbStack_320 = pbStack_4e8;
          pbStack_308 = pbStack_4d0;
          pbStack_310 = pbStack_4d8;
          pbStack_2f8 = pbStack_4c0;
          pbStack_300 = pbStack_4c8;
          pbStack_338 = pbStack_500;
          pbStack_340 = pbStack_508;
          pbVar11 = uStack_510;
          if (uStack_510 == (byte *)0x5) goto LAB_10149fd1c;
        }
        param_2[0x27] = pbVar11;
        param_2[0x2d] = pbStack_318;
        param_2[0x2c] = pbStack_320;
        param_2[0x2f] = pbStack_308;
        param_2[0x2e] = pbStack_310;
        param_2[0x31] = pbStack_2f8;
        param_2[0x30] = pbStack_300;
        param_2[0x29] = pbStack_338;
        param_2[0x28] = pbStack_340;
        param_2[0x2b] = pbStack_328;
        param_2[0x2a] = pbStack_330;
        cVar10 = *(char *)((long)param_2 + 0x1af);
        if (cVar10 != '\x02') goto LAB_10149fd38;
LAB_10149ff50:
        iVar5 = *(int *)(param_2 + 0x1f);
        pbVar11 = (byte *)param_2[0x20];
        lVar26 = *(long *)pbVar11;
        *(long *)pbVar11 = lVar26 + 1;
        if (iVar5 == 1) {
          if (lVar26 < 0) goto LAB_1014a0874;
          pbVar22 = (byte *)0x1;
          uStack_1a0 = 1;
          if (*pcVar3 == '\x01') goto LAB_10149ffc4;
LAB_10149ff84:
          uVar25 = 0;
          uStack_160._4_4_ =
               (undefined4)(CONCAT14(uStack_160._7_1_,*(undefined4 *)((long)param_2 + 0x10c)) >> 8);
          uStack_160 = (byte *)CONCAT44(uStack_160._4_4_,*(undefined4 *)((long)param_2 + 0x109));
          pbVar27 = (byte *)param_2[0x22];
        }
        else {
          if (lVar26 < 0) goto LAB_1014a0874;
          pbVar22 = (byte *)0x0;
          uStack_1a0 = 0;
          if (*pcVar3 != '\x01') goto LAB_10149ff84;
LAB_10149ffc4:
          pbVar27 = (byte *)param_2[0x22];
          uVar25 = 1;
          lVar26 = *(long *)pbVar27;
          *(long *)pbVar27 = lVar26 + 1;
          pbStack_198 = pbVar11;
          if (lVar26 < 0) goto LAB_1014a0874;
        }
        uStack_110._0_5_ = CONCAT41((undefined4)uStack_160,uVar25);
        uStack_110 = (byte *)CONCAT44(uStack_160._3_4_,(undefined4)uStack_110);
        pbStack_108 = pbVar27;
        if (*(char *)(param_2 + 0x1c) == '\x19') {
          pbStack_198 = pbVar11;
          __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                    (&uStack_160,param_2 + 0x1c);
        }
        else {
          pbStack_158 = (byte *)param_2[0x1d];
          uStack_160 = (byte *)param_2[0x1c];
          pbStack_150 = (byte *)param_2[0x1e];
          pbStack_198 = pbVar11;
        }
        pbStack_188 = pbStack_158;
        pbStack_190 = uStack_160;
        pbStack_180 = pbStack_150;
        uVar28 = *(undefined2 *)((long)param_2 + 0x1aa);
        pbVar27 = (byte *)param_2[0x23];
        *(long *)(pbVar27 + 0x1f0) = *(long *)(pbVar27 + 0x1f0) + 1;
        lVar26 = *(long *)pbVar27;
        *(long *)pbVar27 = lVar26 + 1;
        if (lVar26 < 0) goto LAB_1014a0874;
        pbVar23 = (byte *)param_2[0x25];
        lVar26 = *(long *)pbVar23;
        *(long *)pbVar23 = lVar26 + 1;
        if (lVar26 < 0) goto LAB_1014a0874;
        pbVar24 = (byte *)param_2[0x26];
        lVar26 = *(long *)pbVar24;
        *(long *)pbVar24 = lVar26 + 1;
        if (lVar26 < 0) goto LAB_1014a0874;
        uStack_2b4 = 1;
        pbStack_328 = pbStack_108;
        pbStack_330 = uStack_110;
        pbStack_318 = pbStack_158;
        pbStack_320 = uStack_160;
        pbStack_310 = pbStack_150;
        uStack_2b1 = 0;
        pbStack_340 = pbVar22;
        pbStack_338 = pbVar11;
        pbStack_308 = pbVar27;
        pbStack_300 = pbVar23;
        pbStack_2f8 = pbVar24;
        uStack_2b8 = uVar28;
        cStack_2b3 = cVar9;
        cStack_2b2 = cVar10;
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bRam000000010b6399a0 - 1 < 2 ||
             ((bRam000000010b6399a0 != 0 &&
              (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                                 ), cVar9 != '\0')))))) &&
           (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                              ), (uVar8 & 1) != 0)) {
          pbStack_148 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                        + 0x30;
          uStack_160 = (byte *)0x1;
          pbStack_158 = &UNK_10b24db48;
          pbStack_150 = (byte *)0x2;
          __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                    (&pbStack_190,
                     ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                     ,&uStack_160);
        }
        else {
          uStack_160 = (byte *)0x2;
          pbStack_140 = 
          ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
          ;
          if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
            pbStack_f8 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                         + 0x30;
            uStack_110 = (byte *)0x1;
            pbStack_108 = &UNK_10b24db48;
            pbStack_100 = (byte *)0x2;
            __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&uStack_160,&uStack_110);
          }
          pbStack_188 = pbStack_158;
          pbStack_190 = uStack_160;
          pbStack_178 = pbStack_148;
          pbStack_180 = pbStack_150;
          pbStack_170 = pbStack_140;
        }
        _memcpy(&pbStack_4e8,&pbStack_340,0x1a0);
        pbStack_508 = pbStack_188;
        uStack_510 = pbStack_190;
        pbStack_4f8 = pbStack_178;
        pbStack_500 = pbStack_180;
        pbStack_4f0 = pbStack_170;
        plVar14 = (long *)FUN_1016e9e94(param_2 + 0x27,&uStack_510);
        if (*plVar14 == 0xcc) {
          *plVar14 = 0x84;
        }
        else {
          (**(code **)(plVar14[2] + 0x20))();
        }
      }
      else {
LAB_10149fd1c:
        param_2[0x27] = 4;
        cVar10 = *(char *)((long)param_2 + 0x1af);
        if (cVar10 == '\x02') goto LAB_10149ff50;
LAB_10149fd38:
        iVar5 = *(int *)(param_2 + 0x1f);
        pbVar11 = (byte *)param_2[0x20];
        lVar26 = *(long *)pbVar11;
        *(long *)pbVar11 = lVar26 + 1;
        if (iVar5 == 1) {
          if (lVar26 < 0) goto LAB_1014a0874;
          pbVar22 = (byte *)0x1;
          uStack_1a0 = 1;
          if (*pcVar3 == '\x01') goto LAB_10149fdac;
LAB_10149fd6c:
          uVar25 = 0;
          uStack_160._4_4_ =
               (undefined4)(CONCAT14(uStack_160._7_1_,*(undefined4 *)((long)param_2 + 0x10c)) >> 8);
          uStack_160 = (byte *)CONCAT44(uStack_160._4_4_,*(undefined4 *)((long)param_2 + 0x109));
          pbVar27 = (byte *)param_2[0x22];
        }
        else {
          if (lVar26 < 0) goto LAB_1014a0874;
          pbVar22 = (byte *)0x0;
          uStack_1a0 = 0;
          if (*pcVar3 != '\x01') goto LAB_10149fd6c;
LAB_10149fdac:
          pbVar27 = (byte *)param_2[0x22];
          uVar25 = 1;
          lVar26 = *(long *)pbVar27;
          *(long *)pbVar27 = lVar26 + 1;
          pbStack_198 = pbVar11;
          if (lVar26 < 0) goto LAB_1014a0874;
        }
        uStack_110._0_5_ = CONCAT41((undefined4)uStack_160,uVar25);
        uStack_110 = (byte *)CONCAT44(uStack_160._3_4_,(undefined4)uStack_110);
        pbStack_108 = pbVar27;
        if (*(char *)(param_2 + 0x1c) == '\x19') {
          pbStack_198 = pbVar11;
          __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                    (&uStack_160,param_2 + 0x1c);
        }
        else {
          pbStack_158 = (byte *)param_2[0x1d];
          uStack_160 = (byte *)param_2[0x1c];
          pbStack_150 = (byte *)param_2[0x1e];
          pbStack_198 = pbVar11;
        }
        pbStack_188 = pbStack_158;
        pbStack_190 = uStack_160;
        pbStack_180 = pbStack_150;
        uVar28 = *(undefined2 *)((long)param_2 + 0x1aa);
        pbVar27 = (byte *)param_2[0x23];
        *(long *)(pbVar27 + 0x1f0) = *(long *)(pbVar27 + 0x1f0) + 1;
        lVar26 = *(long *)pbVar27;
        *(long *)pbVar27 = lVar26 + 1;
        if (lVar26 < 0) goto LAB_1014a0874;
        pbVar23 = (byte *)param_2[0x25];
        lVar26 = *(long *)pbVar23;
        *(long *)pbVar23 = lVar26 + 1;
        if (lVar26 < 0) goto LAB_1014a0874;
        pbVar24 = (byte *)param_2[0x26];
        lVar26 = *(long *)pbVar24;
        *(long *)pbVar24 = lVar26 + 1;
        if (lVar26 < 0) goto LAB_1014a0874;
        uStack_2b4 = 0;
        pbStack_328 = pbStack_108;
        pbStack_330 = uStack_110;
        pbStack_318 = pbStack_158;
        pbStack_320 = uStack_160;
        pbStack_310 = pbStack_150;
        uStack_2b1 = 0;
        pbStack_340 = pbVar22;
        pbStack_338 = pbVar11;
        pbStack_308 = pbVar27;
        pbStack_300 = pbVar23;
        pbStack_2f8 = pbVar24;
        uStack_2b8 = uVar28;
        cStack_2b3 = cVar9;
        cStack_2b2 = cVar10;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bRam000000010b639988 - 1 < 2 ||
             ((bRam000000010b639988 != 0 &&
              (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                                  ), cVar10 != '\0')))) &&
            (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                               ), (uVar8 & 1) != 0)))) {
          pbStack_148 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                        + 0x30;
          uStack_160 = (byte *)0x1;
          pbStack_158 = &UNK_10b24db48;
          pbStack_150 = (byte *)0x2;
          __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                    (&pbStack_190,
                     ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                     ,&uStack_160);
        }
        else {
          uStack_160 = (byte *)0x2;
          pbStack_140 = 
          ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
          ;
          if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
            pbStack_f8 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                         + 0x30;
            uStack_110 = (byte *)0x1;
            pbStack_108 = &UNK_10b24db48;
            pbStack_100 = (byte *)0x2;
            __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&uStack_160,&uStack_110);
          }
          pbStack_188 = pbStack_158;
          pbStack_190 = uStack_160;
          pbStack_178 = pbStack_148;
          pbStack_180 = pbStack_150;
          pbStack_170 = pbStack_140;
        }
        _memcpy(&pbStack_4e8,&pbStack_340,0x1a0);
        pbStack_508 = pbStack_188;
        uStack_510 = pbStack_190;
        pbStack_4f8 = pbStack_178;
        pbStack_500 = pbStack_180;
        pbStack_4f0 = pbStack_170;
        plVar14 = (long *)FUN_1016e9e94(param_2 + 0x27,&uStack_510);
        if (*plVar14 == 0xcc) {
          *plVar14 = 0x84;
        }
        else {
          (**(code **)(plVar14[2] + 0x20))();
        }
        cVar10 = *(char *)((long)param_2 + 0x1af);
        if (cVar10 != '\x01') goto LAB_10149ff50;
      }
      *(undefined1 *)(param_2 + 0x36) = 0;
      pbVar11 = (byte *)param_2[0x23];
      LOAcquire();
      lVar26 = *(long *)(pbVar11 + 0x1f0);
      *(long *)(pbVar11 + 0x1f0) = lVar26 + -1;
      LORelease();
      uStack_510 = pbVar11;
      if (lVar26 == 1) {
        LOAcquire();
        lVar26 = *(long *)(pbVar11 + 0x88);
        *(long *)(pbVar11 + 0x88) = lVar26 + 1;
        lVar26 = func_0x000100fcbaa8(pbVar11 + 0x80,lVar26);
        *(ulong *)(lVar26 + 0xb10) = *(ulong *)(lVar26 + 0xb10) | 0x200000000;
        LORelease();
        puVar2 = (ulong *)(pbVar11 + 0x110);
        LOAcquire();
        uVar8 = *puVar2;
        *puVar2 = uVar8 | 2;
        LORelease();
        if (uVar8 == 0) {
          lVar26 = *(long *)(pbVar11 + 0x100);
          pbVar11[0x100] = 0;
          pbVar11[0x101] = 0;
          pbVar11[0x102] = 0;
          pbVar11[0x103] = 0;
          pbVar11[0x104] = 0;
          pbVar11[0x105] = 0;
          pbVar11[0x106] = 0;
          pbVar11[0x107] = 0;
          *puVar2 = in_xzr;
          LORelease();
          if (lVar26 != 0) {
            (**(code **)(lVar26 + 8))(*(undefined8 *)(pbVar11 + 0x108));
          }
        }
      }
      lVar26 = *(long *)uStack_510;
      *(long *)uStack_510 = lVar26 + -1;
      LORelease();
      if (lVar26 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(&uStack_510);
      }
      param_2[0x32] = param_2 + 0x24;
      *(undefined1 *)(param_2 + 0x34) = 0;
      goto LAB_1014a01f8;
    }
LAB_10149ef68:
    param_2[0x37] = 2;
    *(undefined2 *)((long)param_2 + 0x81) = 0;
    uVar15 = param_2[0x13];
    uVar30 = param_2[0x12];
    uVar29 = *puVar13;
    *(undefined1 *)((long)param_2 + 0x83) = 0;
    param_2[0x12] = param_2[0xc];
    *puVar13 = param_2[0xb];
    param_2[0x14] = uVar30;
    param_2[0x13] = uVar29;
    param_2[0x15] = uVar15;
    param_2[0x16] = lVar26;
    *(undefined2 *)(param_2 + 0x2e) = uVar28;
    *(char *)((long)param_2 + 0x174) = cVar9;
    *(undefined1 *)((long)param_2 + 0x175) = uVar25;
    *(undefined1 *)((long)param_2 + 0x176) = 0;
LAB_10149eff0:
    *(undefined1 *)(param_2 + 0x2f) = 0;
    param_2[0x18] = param_2[0x14];
    param_2[0x17] = param_2[0x13];
    param_2[0x19] = param_2[0x15];
    *(undefined2 *)((long)param_2 + 0x172) = uVar28;
    *(undefined1 *)((long)param_2 + 0x177) = uVar25;
    param_2[0x1b] = param_2[0x12];
    param_2[0x1a] = param_2[0x11];
    auVar31 = func_0x000100fd2b90();
    param_2[0x1d] = auVar31._8_8_;
    *(undefined1 *)(param_2 + 0x2f) = 1;
    param_2[0x1c] = auVar31._0_8_;
    puVar13 = (undefined8 *)_malloc(0x18);
    if (puVar13 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_1014a0874;
    }
    puVar13[1] = 1;
    *puVar13 = 1;
    *(undefined1 *)(puVar13 + 2) = 0;
    param_2[0x1e] = puVar13;
    puVar13 = (undefined8 *)_malloc(0x38);
    if (puVar13 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
      goto LAB_1014a0874;
    }
    puVar13[1] = 1;
    *puVar13 = 1;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 5) = 0;
    puVar13[6] = 6;
    param_2[0x1f] = puVar13;
    lVar20 = *(long *)(lVar26 + 8) + *(long *)(lVar26 + 0x10) * 0x20;
    lVar26 = *(long *)(lVar26 + 0x10) * -0x20;
    plVar14 = (long *)(lVar20 + 8);
    do {
      plVar17 = plVar14;
      if (lVar26 == 0) goto LAB_10149f108;
      plVar1 = (long *)(lVar20 + -0x10);
      plVar4 = (long *)(lVar20 + -8);
      lVar20 = lVar20 + -0x20;
      plVar14 = plVar17 + -4;
      lVar26 = lVar26 + 0x20;
    } while (*plVar4 != 0x7b252f384e734e05 || *plVar1 != 0xcc3a8bdcd18b507);
    auVar31 = (**(code **)(*plVar14 + 0x38))(plVar17[-5]);
    plVar14 = auVar31._0_8_;
    (**(code **)(auVar31._8_8_ + 0x18))(&uStack_510);
    if ((pbStack_508 == (byte *)0x7b252f384e734e05 && uStack_510 == (byte *)0xcc3a8bdcd18b507) &&
        plVar14 != (long *)0x0) {
      if (*plVar14 == 4) {
        pbVar11 = (byte *)0x4;
      }
      else {
        __ZN75__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__clone__Clone_GT_5clone17h8894a6a19c694adeE
                  (&uStack_510,plVar14);
        pbStack_328 = pbStack_4f0;
        pbStack_330 = pbStack_4f8;
        pbStack_318 = pbStack_4e0;
        pbStack_320 = pbStack_4e8;
        pbStack_308 = pbStack_4d0;
        pbStack_310 = pbStack_4d8;
        pbStack_2f8 = pbStack_4c0;
        pbStack_300 = pbStack_4c8;
        pbStack_338 = pbStack_500;
        pbStack_340 = pbStack_508;
        pbVar11 = uStack_510;
        if (uStack_510 == (byte *)0x5) goto LAB_10149f108;
      }
      param_2[0x20] = pbVar11;
      param_2[0x26] = pbStack_318;
      param_2[0x25] = pbStack_320;
      param_2[0x28] = pbStack_308;
      param_2[0x27] = pbStack_310;
      param_2[0x2a] = pbStack_2f8;
      param_2[0x29] = pbStack_300;
      param_2[0x22] = pbStack_338;
      param_2[0x21] = pbStack_340;
      param_2[0x24] = pbStack_328;
      param_2[0x23] = pbStack_330;
      cVar10 = *(char *)((long)param_2 + 0x177);
      if (cVar10 != '\x02') goto LAB_10149f120;
LAB_10149f36c:
      if (*(char *)(param_2 + 0x1a) == '\x01') {
        pbVar11 = (byte *)param_2[0x1b];
        uVar25 = 1;
        lVar26 = *(long *)pbVar11;
        *(long *)pbVar11 = lVar26 + 1;
        if (lVar26 < 0) goto LAB_1014a0874;
      }
      else {
        uVar25 = 0;
        uStack_160._0_3_ = (undefined3)*(undefined4 *)((long)param_2 + 0xd1);
        uStack_160._0_7_ = CONCAT43(*(undefined4 *)((long)param_2 + 0xd4),(undefined3)uStack_160);
        pbVar11 = (byte *)param_2[0x1b];
      }
      uStack_130._0_5_ = CONCAT41((undefined4)uStack_160,uVar25);
      uStack_130 = (byte *)CONCAT44(uStack_160._3_4_,(undefined4)uStack_130);
      pbStack_128 = pbVar11;
      if (*(char *)(param_2 + 0x17) == '\x19') {
        __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                  (&uStack_160,param_2 + 0x17);
      }
      else {
        pbStack_158 = (byte *)param_2[0x18];
        uStack_160 = (byte *)param_2[0x17];
        pbStack_150 = (byte *)param_2[0x19];
      }
      pbStack_188 = pbStack_158;
      pbStack_190 = uStack_160;
      pbStack_180 = pbStack_150;
      uVar28 = *(undefined2 *)((long)param_2 + 0x172);
      pbVar11 = (byte *)param_2[0x1c];
      *(long *)(pbVar11 + 0x1f0) = *(long *)(pbVar11 + 0x1f0) + 1;
      lVar26 = *(long *)pbVar11;
      *(long *)pbVar11 = lVar26 + 1;
      if (lVar26 < 0) goto LAB_1014a0874;
      pbVar22 = (byte *)param_2[0x1e];
      lVar26 = *(long *)pbVar22;
      *(long *)pbVar22 = lVar26 + 1;
      if (lVar26 < 0) goto LAB_1014a0874;
      pbVar27 = (byte *)param_2[0x1f];
      lVar26 = *(long *)pbVar27;
      *(long *)pbVar27 = lVar26 + 1;
      if (lVar26 < 0) goto LAB_1014a0874;
      uStack_2d4 = 1;
      pbStack_338 = pbStack_128;
      pbStack_340 = uStack_130;
      pbStack_328 = pbStack_158;
      pbStack_330 = uStack_160;
      pbStack_320 = pbStack_150;
      uStack_2d1 = 0;
      pbStack_318 = pbVar11;
      pbStack_310 = pbVar22;
      pbStack_308 = pbVar27;
      uStack_2d8 = uVar28;
      cStack_2d3 = cVar9;
      cStack_2d2 = cVar10;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b6399a0 - 1 < 2 ||
           ((bRam000000010b6399a0 != 0 &&
            (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                               ), cVar9 != '\0')))) &&
          (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                             ), (uVar8 & 1) != 0)))) {
        pbStack_148 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                      + 0x30;
        uStack_160 = (byte *)0x1;
        pbStack_158 = &UNK_10b24db48;
        pbStack_150 = (byte *)0x2;
        __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                  (&pbStack_190,
                   ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                   ,&uStack_160);
      }
      else {
        uStack_160 = (byte *)0x2;
        pbStack_140 = 
        ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
        ;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
          pbStack_118 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                        + 0x30;
          uStack_130 = (byte *)0x1;
          pbStack_128 = &UNK_10b24db48;
          pbStack_120 = (byte *)0x2;
          __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&uStack_160,&uStack_130);
        }
        pbStack_188 = pbStack_158;
        pbStack_190 = uStack_160;
        pbStack_178 = pbStack_148;
        pbStack_180 = pbStack_150;
        pbStack_170 = pbStack_140;
      }
      _memcpy(&pbStack_4e8,&pbStack_340,0x180);
      pbStack_508 = pbStack_188;
      uStack_510 = pbStack_190;
      pbStack_4f8 = pbStack_178;
      pbStack_500 = pbStack_180;
      pbStack_4f0 = pbStack_170;
      plVar14 = (long *)func_0x0001016e92ac(param_2 + 0x20,&uStack_510);
      if (*plVar14 == 0xcc) {
        *plVar14 = 0x84;
      }
      else {
        (**(code **)(plVar14[2] + 0x20))();
      }
    }
    else {
LAB_10149f108:
      param_2[0x20] = 4;
      cVar10 = *(char *)((long)param_2 + 0x177);
      if (cVar10 == '\x02') goto LAB_10149f36c;
LAB_10149f120:
      if (*(char *)(param_2 + 0x1a) == '\x01') {
        pbVar11 = (byte *)param_2[0x1b];
        uVar25 = 1;
        lVar26 = *(long *)pbVar11;
        *(long *)pbVar11 = lVar26 + 1;
        if (lVar26 < 0) goto LAB_1014a0874;
      }
      else {
        uVar25 = 0;
        uStack_160._0_3_ = (undefined3)*(undefined4 *)((long)param_2 + 0xd1);
        uStack_160._0_7_ = CONCAT43(*(undefined4 *)((long)param_2 + 0xd4),(undefined3)uStack_160);
        pbVar11 = (byte *)param_2[0x1b];
      }
      uStack_130._0_5_ = CONCAT41((undefined4)uStack_160,uVar25);
      uStack_130 = (byte *)CONCAT44(uStack_160._3_4_,(undefined4)uStack_130);
      pbStack_128 = pbVar11;
      if (*(char *)(param_2 + 0x17) == '\x19') {
        __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                  (&uStack_160,param_2 + 0x17);
      }
      else {
        pbStack_158 = (byte *)param_2[0x18];
        uStack_160 = (byte *)param_2[0x17];
        pbStack_150 = (byte *)param_2[0x19];
      }
      pbStack_188 = pbStack_158;
      pbStack_190 = uStack_160;
      pbStack_180 = pbStack_150;
      uVar28 = *(undefined2 *)((long)param_2 + 0x172);
      pbVar11 = (byte *)param_2[0x1c];
      *(long *)(pbVar11 + 0x1f0) = *(long *)(pbVar11 + 0x1f0) + 1;
      lVar26 = *(long *)pbVar11;
      *(long *)pbVar11 = lVar26 + 1;
      if (lVar26 < 0) goto LAB_1014a0874;
      pbVar22 = (byte *)param_2[0x1e];
      lVar26 = *(long *)pbVar22;
      *(long *)pbVar22 = lVar26 + 1;
      if (lVar26 < 0) goto LAB_1014a0874;
      pbVar27 = (byte *)param_2[0x1f];
      lVar26 = *(long *)pbVar27;
      *(long *)pbVar27 = lVar26 + 1;
      if (lVar26 < 0) goto LAB_1014a0874;
      uStack_2d4 = 0;
      pbStack_338 = pbStack_128;
      pbStack_340 = uStack_130;
      pbStack_328 = pbStack_158;
      pbStack_330 = uStack_160;
      pbStack_320 = pbStack_150;
      uStack_2d1 = 0;
      pbStack_318 = pbVar11;
      pbStack_310 = pbVar22;
      pbStack_308 = pbVar27;
      uStack_2d8 = uVar28;
      cStack_2d3 = cVar9;
      cStack_2d2 = cVar10;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b639988 - 1 < 2 ||
           ((bRam000000010b639988 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                                ), cVar10 != '\0')))))) &&
         (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                            ), (uVar8 & 1) != 0)) {
        pbStack_148 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                      + 0x30;
        uStack_160 = (byte *)0x1;
        pbStack_158 = &UNK_10b24db48;
        pbStack_150 = (byte *)0x2;
        __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                  (&pbStack_190,
                   ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                   ,&uStack_160);
      }
      else {
        uStack_160 = (byte *)0x2;
        pbStack_140 = 
        ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
        ;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
          pbStack_118 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                        + 0x30;
          uStack_130 = (byte *)0x1;
          pbStack_128 = &UNK_10b24db48;
          pbStack_120 = (byte *)0x2;
          __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&uStack_160,&uStack_130);
        }
        pbStack_188 = pbStack_158;
        pbStack_190 = uStack_160;
        pbStack_178 = pbStack_148;
        pbStack_180 = pbStack_150;
        pbStack_170 = pbStack_140;
      }
      _memcpy(&pbStack_4e8,&pbStack_340,0x180);
      pbStack_508 = pbStack_188;
      uStack_510 = pbStack_190;
      pbStack_4f8 = pbStack_178;
      pbStack_500 = pbStack_180;
      pbStack_4f0 = pbStack_170;
      plVar14 = (long *)func_0x0001016e92ac(param_2 + 0x20,&uStack_510);
      if (*plVar14 == 0xcc) {
        *plVar14 = 0x84;
      }
      else {
        (**(code **)(plVar14[2] + 0x20))();
      }
      cVar10 = *(char *)((long)param_2 + 0x177);
      if (cVar10 != '\x01') goto LAB_10149f36c;
    }
    *(undefined1 *)(param_2 + 0x2f) = 0;
    pbVar11 = (byte *)param_2[0x1c];
    LOAcquire();
    lVar26 = *(long *)(pbVar11 + 0x1f0);
    *(long *)(pbVar11 + 0x1f0) = lVar26 + -1;
    LORelease();
    uStack_510 = pbVar11;
    if (lVar26 == 1) {
      LOAcquire();
      lVar26 = *(long *)(pbVar11 + 0x88);
      *(long *)(pbVar11 + 0x88) = lVar26 + 1;
      lVar26 = func_0x000100fcbaa8(pbVar11 + 0x80,lVar26);
      *(ulong *)(lVar26 + 0xb10) = *(ulong *)(lVar26 + 0xb10) | 0x200000000;
      LORelease();
      puVar2 = (ulong *)(pbVar11 + 0x110);
      LOAcquire();
      uVar8 = *puVar2;
      *puVar2 = uVar8 | 2;
      LORelease();
      if (uVar8 == 0) {
        lVar26 = *(long *)(pbVar11 + 0x100);
        pbVar11[0x100] = 0;
        pbVar11[0x101] = 0;
        pbVar11[0x102] = 0;
        pbVar11[0x103] = 0;
        pbVar11[0x104] = 0;
        pbVar11[0x105] = 0;
        pbVar11[0x106] = 0;
        pbVar11[0x107] = 0;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar26 != 0) {
          (**(code **)(lVar26 + 8))(*(undefined8 *)(pbVar11 + 0x108));
        }
      }
    }
    lVar26 = *(long *)uStack_510;
    *(long *)uStack_510 = lVar26 + -1;
    LORelease();
    if (lVar26 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(&uStack_510);
    }
    param_2[0x2b] = param_2 + 0x1d;
    *(undefined1 *)(param_2 + 0x2d) = 0;
LAB_10149f5c8:
    puStack_648 = (undefined1 *)((long)param_2 + 0x176);
    func_0x000100fd1174(&uStack_510,param_2 + 0x2b,*param_3);
    pbVar23 = pbStack_4f8;
    pbVar22 = pbStack_500;
    pbVar11 = pbStack_508;
    pbVar27 = uStack_510;
    if (uStack_510 == (byte *)0x3) {
      *puStack_648 = 3;
      *param_1 = 3;
      uVar25 = 5;
      goto LAB_1014a064c;
    }
    pbStack_e8 = pbStack_4f0;
    pbStack_f0 = pbStack_4f8;
    pbStack_d8 = pbStack_4e0;
    pbStack_e0 = pbStack_4e8;
    pbStack_108 = pbStack_4d0;
    uStack_110 = pbStack_4d8;
    pbStack_f8 = pbStack_4c0;
    pbStack_100 = pbStack_4c8;
    if (uStack_510 == (byte *)0x2) {
      pbStack_500 = (byte *)((long)param_2 + 0x172);
      pbStack_508 = &
                    __ZN72__LT_rama_net__address__domain__Domain_u20_as_u20_core__fmt__Display_GT_3fmt17hf58f7b8af32d5625E
      ;
      pbStack_4f8 = &
                    __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
      ;
      uStack_510 = (byte *)(param_2 + 0x17);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pbStack_340,s_1failed_to_connect_to_any_resolv_108ad8672,&uStack_510);
      pbVar24 = pbStack_330;
      pbVar23 = pbStack_338;
      pbVar22 = pbStack_340;
      pbVar11 = (byte *)_malloc(0x18);
      if (pbVar11 == (byte *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_1014a0874:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1014a0878);
        (*pcVar7)();
      }
      *(byte **)pbVar11 = pbVar22;
      *(byte **)(pbVar11 + 8) = pbVar23;
      *(byte **)(pbVar11 + 0x10) = pbVar24;
      if (param_2[0x20] != 4) {
        __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                  (param_2 + 0x20);
      }
      lVar26 = *(long *)param_2[0x1f];
      *(long *)param_2[0x1f] = lVar26 + -1;
      LORelease();
      if (lVar26 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
      }
      lVar26 = *(long *)param_2[0x1e];
      *(long *)param_2[0x1e] = lVar26 + -1;
      LORelease();
      if (lVar26 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001060e2224();
      }
      FUN_100d1e594(param_2 + 0x1d);
      *(undefined1 *)(param_2 + 0x2f) = 0;
      if (*(char *)(param_2 + 0x1a) != '\0') {
        lVar26 = *(long *)param_2[0x1b];
        *(long *)param_2[0x1b] = lVar26 + -1;
        LORelease();
        if (lVar26 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
        }
      }
      if (0x18 < *(byte *)(param_2 + 0x17)) {
        lVar26 = *(long *)param_2[0x18];
        *(long *)param_2[0x18] = lVar26 + -1;
        LORelease();
        if (lVar26 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      pbVar22 = &UNK_10b2192b8;
    }
    else {
      pbStack_508 = pbStack_4f0;
      uStack_510 = pbStack_4f8;
      pbStack_4f8 = pbStack_4e0;
      pbStack_500 = pbStack_4e8;
      pbStack_c8 = pbStack_4d0;
      pbStack_d0 = pbStack_4d8;
      pbStack_b8 = pbStack_4c0;
      pbStack_c0 = pbStack_4c8;
      plVar14 = param_2 + 0x1e;
      *(undefined1 *)(*plVar14 + 0x10) = 1;
      pbStack_a8 = pbStack_4f0;
      pbStack_b0 = pbVar23;
      pbStack_98 = pbStack_4e0;
      pbStack_a0 = pbStack_4e8;
      pbStack_88 = pbStack_4d0;
      pbStack_90 = pbStack_4d8;
      pbStack_78 = pbStack_4c0;
      pbStack_80 = pbStack_4c8;
      if (param_2[0x20] != 4) {
        __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                  (param_2 + 0x20);
      }
      lVar26 = *(long *)param_2[0x1f];
      *(long *)param_2[0x1f] = lVar26 + -1;
      LORelease();
      if (lVar26 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
      }
      lVar26 = *(long *)*plVar14;
      *(long *)*plVar14 = lVar26 + -1;
      LORelease();
      if (lVar26 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001060e2224(plVar14);
      }
      FUN_100d1e594(param_2 + 0x1d);
      *(undefined1 *)(param_2 + 0x2f) = 0;
      if (*(char *)(param_2 + 0x1a) != '\0') {
        lVar26 = *(long *)param_2[0x1b];
        *(long *)param_2[0x1b] = lVar26 + -1;
        LORelease();
        if (lVar26 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
        }
      }
      if (0x18 < *(byte *)(param_2 + 0x17)) {
        lVar26 = *(long *)param_2[0x18];
        *(long *)param_2[0x18] = lVar26 + -1;
        LORelease();
        if (lVar26 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
    }
    pbStack_518 = pbStack_78;
    pbStack_520 = pbStack_80;
    pbStack_528 = pbStack_88;
    pbStack_530 = pbStack_90;
    pbStack_538 = pbStack_98;
    pbStack_540 = pbStack_a0;
    pbStack_548 = pbStack_a8;
    pbStack_550 = pbStack_b0;
    *puStack_648 = 1;
    FUN_100d93a48(param_2 + 0x11);
    bVar6 = *(byte *)((long)param_2 + 0x81);
joined_r0x0001014a05bc:
    if (((bVar6 & 1) != 0) && (0x18 < *(byte *)(param_2 + 0x11))) {
      lVar26 = *(long *)param_2[0x12];
      *(long *)param_2[0x12] = lVar26 + -1;
      LORelease();
      if (lVar26 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
    *(undefined1 *)((long)param_2 + 0x81) = 0;
    if (((*(byte *)((long)param_2 + 0x82) & 1) != 0) && (*(char *)(param_2 + 0xb) != '\0')) {
      lVar26 = *(long *)param_2[0xc];
      *(long *)param_2[0xc] = lVar26 + -1;
      LORelease();
      if (lVar26 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
      }
    }
  }
  else {
    if (bVar6 != 3) {
      if (bVar6 != 4) {
        bVar6 = *(byte *)((long)param_2 + 0x176);
        if (bVar6 < 2) {
          if (bVar6 != 0) {
            func_0x000108a07af4(&UNK_10b24db68);
            goto LAB_1014a0874;
          }
          lVar26 = param_2[0x16];
          uVar28 = *(undefined2 *)(param_2 + 0x2e);
          uVar25 = *(undefined1 *)((long)param_2 + 0x175);
          cVar9 = *(char *)((long)param_2 + 0x174);
          goto LAB_10149eff0;
        }
        if (bVar6 != 3) {
          func_0x000108a07b10(&UNK_10b24db68);
          goto LAB_1014a0874;
        }
        goto LAB_10149f5c8;
      }
      bVar6 = *(byte *)((long)param_2 + 0x1ae);
      if (bVar6 < 2) {
        if (bVar6 == 0) {
          lVar26 = param_2[0x1b];
          uVar28 = *(undefined2 *)(param_2 + 0x35);
          uVar25 = *(undefined1 *)((long)param_2 + 0x1ad);
          uVar15 = param_2[0x14];
          plVar14 = (long *)param_2[0x15];
          cVar9 = *(char *)((long)param_2 + 0x1ac);
          goto LAB_10149fc04;
        }
        goto LAB_1014a0858;
      }
      if (bVar6 != 3) {
        func_0x000108a07b10(&UNK_10b24db68);
        goto LAB_1014a0874;
      }
LAB_1014a01f8:
      func_0x000100fd1174(&uStack_510,param_2 + 0x32,*param_3);
      pbVar23 = pbStack_4f8;
      pbVar22 = pbStack_500;
      pbVar11 = pbStack_508;
      pbVar27 = uStack_510;
      if (uStack_510 == (byte *)0x3) {
        *(undefined1 *)((long)param_2 + 0x1ae) = 3;
        *param_1 = 3;
        uVar25 = 4;
        goto LAB_1014a064c;
      }
      pbStack_c8 = pbStack_4f0;
      pbStack_d0 = pbStack_4f8;
      pbStack_b8 = pbStack_4e0;
      pbStack_c0 = pbStack_4e8;
      pbStack_e8 = pbStack_4d0;
      pbStack_f0 = pbStack_4d8;
      pbStack_d8 = pbStack_4c0;
      pbStack_e0 = pbStack_4c8;
      if (uStack_510 == (byte *)0x2) {
        pbStack_500 = (byte *)((long)param_2 + 0x1aa);
        pbStack_508 = &
                      __ZN72__LT_rama_net__address__domain__Domain_u20_as_u20_core__fmt__Display_GT_3fmt17hf58f7b8af32d5625E
        ;
        pbStack_4f8 = &
                      __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
        ;
        uStack_510 = (byte *)(param_2 + 0x1c);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&pbStack_340,s_1failed_to_connect_to_any_resolv_108ad8672,&uStack_510);
        pbVar24 = pbStack_330;
        pbVar23 = pbStack_338;
        pbVar22 = pbStack_340;
        pbVar11 = (byte *)_malloc(0x18);
        if (pbVar11 == (byte *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_1014a0874;
        }
        *(byte **)pbVar11 = pbVar22;
        *(byte **)(pbVar11 + 8) = pbVar23;
        *(byte **)(pbVar11 + 0x10) = pbVar24;
        if (param_2[0x27] != 4) {
          __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                    (param_2 + 0x27);
        }
        lVar26 = *(long *)param_2[0x26];
        *(long *)param_2[0x26] = lVar26 + -1;
        LORelease();
        if (lVar26 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(param_2 + 0x26);
        }
        lVar26 = *(long *)param_2[0x25];
        *(long *)param_2[0x25] = lVar26 + -1;
        LORelease();
        if (lVar26 == 1) {
          DataMemoryBarrier(2,1);
          func_0x0001060e2224(param_2 + 0x25);
        }
        FUN_100d1e594(param_2 + 0x24);
        *(undefined1 *)(param_2 + 0x36) = 0;
        if (*(char *)(param_2 + 0x21) != '\0') {
          lVar26 = *(long *)param_2[0x22];
          *(long *)param_2[0x22] = lVar26 + -1;
          LORelease();
          if (lVar26 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(param_2 + 0x22);
          }
        }
        if (param_2[0x1f] == 0) {
          lVar26 = *(long *)param_2[0x20];
          *(long *)param_2[0x20] = lVar26 + -1;
          LORelease();
          if (lVar26 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f68883db9c1e126E(param_2 + 0x20);
          }
        }
        else {
          lVar26 = *(long *)param_2[0x20];
          *(long *)param_2[0x20] = lVar26 + -1;
          LORelease();
          if (lVar26 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h576a4a0a079aa50eE(param_2 + 0x20);
          }
        }
        if (0x18 < *(byte *)(param_2 + 0x1c)) {
          lVar26 = *(long *)param_2[0x1d];
          *(long *)param_2[0x1d] = lVar26 + -1;
          LORelease();
          if (lVar26 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
          }
        }
        pbVar22 = &UNK_10b2192b8;
      }
      else {
        pbStack_508 = pbStack_4f0;
        uStack_510 = pbStack_4f8;
        pbStack_4f8 = pbStack_4e0;
        pbStack_500 = pbStack_4e8;
        *(undefined1 *)(param_2[0x25] + 0x10) = 1;
        pbStack_a8 = pbStack_4f0;
        pbStack_b0 = pbVar23;
        pbStack_98 = pbStack_4e0;
        pbStack_a0 = pbStack_4e8;
        pbStack_88 = pbStack_4d0;
        pbStack_90 = pbStack_4d8;
        pbStack_78 = pbStack_4c0;
        pbStack_80 = pbStack_4c8;
        if (param_2[0x27] != 4) {
          __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                    (param_2 + 0x27);
        }
        lVar26 = *(long *)param_2[0x26];
        *(long *)param_2[0x26] = lVar26 + -1;
        LORelease();
        if (lVar26 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(param_2 + 0x26);
        }
        lVar26 = *(long *)param_2[0x25];
        *(long *)param_2[0x25] = lVar26 + -1;
        LORelease();
        if (lVar26 == 1) {
          DataMemoryBarrier(2,1);
          func_0x0001060e2224(param_2 + 0x25);
        }
        FUN_100d1e594(param_2 + 0x24);
        *(undefined1 *)(param_2 + 0x36) = 0;
        if (*(char *)(param_2 + 0x21) != '\0') {
          lVar26 = *(long *)param_2[0x22];
          *(long *)param_2[0x22] = lVar26 + -1;
          LORelease();
          if (lVar26 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE(param_2 + 0x22);
          }
        }
        if (param_2[0x1f] == 0) {
          lVar26 = *(long *)param_2[0x20];
          *(long *)param_2[0x20] = lVar26 + -1;
          LORelease();
          if (lVar26 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f68883db9c1e126E(param_2 + 0x20);
          }
        }
        else {
          lVar26 = *(long *)param_2[0x20];
          *(long *)param_2[0x20] = lVar26 + -1;
          LORelease();
          if (lVar26 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h576a4a0a079aa50eE(param_2 + 0x20);
          }
        }
        if (0x18 < *(byte *)(param_2 + 0x1c)) {
          lVar26 = *(long *)param_2[0x1d];
          *(long *)param_2[0x1d] = lVar26 + -1;
          LORelease();
          if (lVar26 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
          }
        }
      }
      pbStack_518 = pbStack_78;
      pbStack_520 = pbStack_80;
      pbStack_528 = pbStack_88;
      pbStack_530 = pbStack_90;
      pbStack_538 = pbStack_98;
      pbStack_540 = pbStack_a0;
      pbStack_548 = pbStack_a8;
      pbStack_550 = pbStack_b0;
      *(undefined1 *)((long)param_2 + 0x1ae) = 1;
      FUN_100dabb94(param_2 + 0x14);
      *(undefined1 *)((long)param_2 + 0x84) = 0;
      bVar6 = *(byte *)((long)param_2 + 0x81);
      goto joined_r0x0001014a05bc;
    }
LAB_10149f918:
    FUN_100755cfc(&uStack_510,param_2 + 0x11,param_3);
    pbVar24 = pbStack_4f0;
    pbVar23 = pbStack_4f8;
    pbVar22 = pbStack_500;
    pbVar11 = pbStack_508;
    pbVar27 = uStack_510;
    if (uStack_510 == (byte *)0x3) {
      uVar25 = 3;
      *param_1 = 3;
      goto LAB_1014a064c;
    }
    FUN_100d89118(param_2 + 0x11);
    if (pbVar27 == (byte *)0x2) {
      uStack_510 = &UNK_108cd5fe4;
      pbStack_508 = (byte *)0x1f;
      pbStack_500 = pbVar11;
      pbStack_4f8 = pbVar22;
      pbVar11 = (byte *)_malloc(0x20);
      if (pbVar11 == (byte *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
        goto LAB_1014a0874;
      }
      *(byte **)(pbVar11 + 8) = pbStack_508;
      *(byte **)pbVar11 = uStack_510;
      *(byte **)(pbVar11 + 0x18) = pbStack_4f8;
      *(byte **)(pbVar11 + 0x10) = pbStack_500;
      pbVar22 = &UNK_10b21f338;
      pbVar27 = (byte *)0x2;
      *(undefined1 *)((long)param_2 + 0x81) = 0;
      cVar9 = *(char *)(param_2 + 0xb);
    }
    else {
      pbStack_528 = (byte *)param_2[0xc9];
      pbStack_530 = (byte *)param_2[200];
      pbStack_518 = (byte *)param_2[0xcb];
      pbStack_520 = (byte *)param_2[0xca];
      *(undefined1 *)((long)param_2 + 0x81) = 0;
      cVar9 = *(char *)(param_2 + 0xb);
      pbStack_538 = pbStack_4e0;
      pbStack_540 = pbStack_4e8;
      pbStack_548 = pbVar24;
      pbStack_550 = pbVar23;
    }
joined_r0x00010149f9a0:
    if (cVar9 != '\0') {
      lVar26 = *(long *)param_2[0xc];
      *(long *)param_2[0xc] = lVar26 + -1;
      LORelease();
      if (lVar26 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
      }
    }
  }
  *(undefined2 *)((long)param_2 + 0x82) = 0;
  *(undefined1 *)((long)param_2 + 0x85) = 0;
  *param_1 = pbVar27;
  param_1[1] = pbVar11;
  param_1[2] = pbVar22;
  param_1[4] = pbStack_548;
  param_1[3] = pbStack_550;
  param_1[6] = pbStack_538;
  param_1[5] = pbStack_540;
  param_1[8] = pbStack_528;
  param_1[7] = pbStack_530;
  uVar25 = 1;
  param_1[10] = pbStack_518;
  param_1[9] = pbStack_520;
LAB_1014a064c:
  *(undefined1 *)(param_2 + 0x10) = uVar25;
  return;
}

