
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10149cf60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  code *pcVar6;
  ulong uVar7;
  char cVar8;
  char cVar9;
  byte *pbVar10;
  int *piVar11;
  undefined8 *puVar12;
  long *plVar13;
  byte *pbVar14;
  long *plVar15;
  undefined *puVar16;
  undefined2 uVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined1 uVar25;
  undefined2 uVar26;
  long lVar27;
  ulong in_xzr;
  undefined1 auVar28 [16];
  byte *pbStack_520;
  byte *pbStack_518;
  byte *pbStack_510;
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
  byte *pbStack_4b8;
  byte *pbStack_4b0;
  byte *pbStack_4a8;
  byte *pbStack_4a0;
  byte *pbStack_498;
  byte *pbStack_490;
  byte *pbStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  byte *pbStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2f0;
  byte *pbStack_2e8;
  undefined1 uStack_2de;
  char cStack_2dd;
  char cStack_2dc;
  undefined1 uStack_2db;
  undefined2 uStack_2c8;
  undefined1 uStack_2c4;
  char cStack_2c3;
  char cStack_2c2;
  undefined1 uStack_2c1;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
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
  
  bVar5 = *(byte *)((long)param_2 + 0x65);
  if (bVar5 < 3) {
    if (bVar5 != 0) {
      if (bVar5 == 1) {
        func_0x000108a07af4(&UNK_10b24db20);
      }
      func_0x000108a07b10();
LAB_10149e79c:
      func_0x000108a07af4(&UNK_10b24db68);
      goto LAB_10149e7c8;
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    lVar27 = param_2[0xb];
    *(undefined1 *)((long)param_2 + 100) = 1;
    param_2[1] = param_2[5];
    *param_2 = param_2[4];
    param_2[3] = param_2[7];
    param_2[2] = param_2[6];
    *(undefined2 *)((long)param_2 + 0x61) = 0x101;
    lVar19 = *(long *)(lVar27 + 8) + *(long *)(lVar27 + 0x10) * 0x20;
    lVar18 = *(long *)(lVar27 + 0x10) * -0x20;
    plVar13 = (long *)(lVar19 + 8);
    do {
      plVar15 = plVar13;
      if (lVar18 == 0) {
        cVar8 = '\0';
        goto LAB_10149d0a0;
      }
      plVar1 = (long *)(lVar19 + -0x10);
      plVar3 = (long *)(lVar19 + -8);
      lVar19 = lVar19 + -0x20;
      plVar13 = plVar15 + -4;
      lVar18 = lVar18 + 0x20;
    } while (*plVar3 != 0x55c73e5b4087d8fe || *plVar1 != 0x22a6c8a18bae4e93);
    auVar28 = (**(code **)(*plVar13 + 0x38))(plVar15[-5]);
    (**(code **)(auVar28._8_8_ + 0x18))(&pbStack_4e0);
    cVar8 = '\0';
    if ((auVar28._0_8_ != (char *)0x0) &&
       (pbStack_4d8 == (byte *)0x55c73e5b4087d8fe && pbStack_4e0 == (byte *)0x22a6c8a18bae4e93)) {
      cVar8 = *auVar28._0_8_;
    }
LAB_10149d0a0:
    lVar19 = *(long *)(lVar27 + 8) + *(long *)(lVar27 + 0x10) * 0x20;
    lVar18 = *(long *)(lVar27 + 0x10) * -0x20;
    plVar13 = (long *)(lVar19 + 8);
    do {
      plVar15 = plVar13;
      if (lVar18 == 0) {
        uVar25 = 0;
        goto LAB_10149d138;
      }
      plVar1 = (long *)(lVar19 + -0x10);
      plVar3 = (long *)(lVar19 + -8);
      lVar19 = lVar19 + -0x20;
      plVar13 = plVar15 + -4;
      lVar18 = lVar18 + 0x20;
    } while (*plVar3 != 0x638c0f9f14a817cc || *plVar1 != 0x5f77f32fa192360e);
    auVar28 = (**(code **)(*plVar13 + 0x38))(plVar15[-5]);
    (**(code **)(auVar28._8_8_ + 0x18))(&pbStack_4e0);
    uVar25 = 0;
    if ((auVar28._0_8_ != (undefined1 *)0x0) &&
       (pbStack_4d8 == (byte *)0x638c0f9f14a817cc && pbStack_4e0 == (byte *)0x5f77f32fa192360e)) {
      uVar25 = *auVar28._0_8_;
    }
LAB_10149d138:
    *(undefined1 *)((long)param_2 + 100) = 0;
    param_2[9] = param_2[1];
    param_2[8] = *param_2;
    param_2[10] = param_2[2];
    uVar26 = *(undefined2 *)(param_2 + 3);
    if (*(char *)(param_2 + 8) == '\x1a') {
      if ((*(byte *)((long)param_2 + 0x41) & 1) == 0) {
        if (cVar8 != '\x02') {
          uVar17 = 0;
          *(undefined4 *)((long)param_2 + 0x142) = *(undefined4 *)((long)param_2 + 0x42);
          *(undefined2 *)((long)param_2 + 0x146) = uVar26;
          goto LAB_10149da44;
        }
        pbVar10 = (byte *)_malloc(0x10);
        if (pbVar10 == (byte *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
          goto LAB_10149e7c8;
        }
        puVar16 = &UNK_108cd5fae;
      }
      else {
        if (cVar8 != '\x01') {
          param_2[0x29] = *(undefined8 *)((long)param_2 + 6);
          *(undefined4 *)(param_2 + 0x2a) = *(undefined4 *)((long)param_2 + 0xe);
          *(undefined4 *)((long)param_2 + 0x144) = *(undefined4 *)((long)param_2 + 0x42);
          *(undefined8 *)((long)param_2 + 0x154) = 0;
          *(undefined2 *)((long)param_2 + 0x15c) = uVar26;
          uVar17 = 1;
LAB_10149da44:
          *(undefined2 *)(param_2 + 0x28) = uVar17;
          param_2[0x10] = param_2[0x2b];
          param_2[0xf] = param_2[0x2a];
          param_2[0xe] = param_2[0x29];
          param_2[0xd] = param_2[0x28];
          param_2[0x11] = param_2 + 0xc;
          *(undefined1 *)(param_2 + 0x27) = 0;
          goto LAB_10149da60;
        }
        pbVar10 = (byte *)_malloc(0x10);
        if (pbVar10 == (byte *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
          goto LAB_10149e7c8;
        }
        puVar16 = &UNK_108cd5fc9;
      }
      *(undefined **)pbVar10 = puVar16;
      pbVar10[8] = 0x1b;
      pbVar10[9] = 0;
      pbVar10[10] = 0;
      pbVar10[0xb] = 0;
      pbVar10[0xc] = 0;
      pbVar10[0xd] = 0;
      pbVar10[0xe] = 0;
      pbVar10[0xf] = 0;
      pbVar14 = &UNK_10b209930;
      pbVar21 = (byte *)0x2;
      goto LAB_10149e558;
    }
    *(undefined1 *)(param_2 + 0xc) = 1;
    puVar12 = param_2 + 0xd;
    param_2[0xe] = param_2[1];
    param_2[0xd] = *param_2;
    param_2[0xf] = param_2[2];
    lVar19 = *(long *)(lVar27 + 8) + *(long *)(lVar27 + 0x10) * 0x20;
    lVar18 = *(long *)(lVar27 + 0x10) * -0x20;
    plVar13 = (long *)(lVar19 + 8);
    do {
      plVar15 = plVar13;
      if (lVar18 == 0) goto LAB_10149d230;
      plVar1 = (long *)(lVar19 + -0x10);
      plVar3 = (long *)(lVar19 + -8);
      lVar19 = lVar19 + -0x20;
      plVar13 = plVar15 + -4;
      lVar18 = lVar18 + 0x20;
    } while (*plVar3 != -0x27f08f15ee169b8 || *plVar1 != -0x2b5401d52b4d2d7b);
    auVar28 = (**(code **)(*plVar13 + 0x38))(plVar15[-5]);
    piVar11 = auVar28._0_8_;
    (**(code **)(auVar28._8_8_ + 0x18))(&pbStack_4e0);
    if ((pbStack_4d8 == (byte *)0xfd80f70ea11e9648 && pbStack_4e0 == (byte *)0xd4abfe2ad4b2d285) &&
        piVar11 != (int *)0x0) {
      iVar4 = *piVar11;
      plVar13 = *(long **)(piVar11 + 2);
      lVar18 = *plVar13;
      *plVar13 = lVar18 + 1;
      if (iVar4 == 1) {
        if (lVar18 < 0) goto LAB_10149e7c8;
        uVar24 = 1;
      }
      else {
        if (lVar18 < 0) goto LAB_10149e7c8;
        uVar24 = 0;
      }
      param_2[0x2f] = uVar24;
      param_2[0x30] = plVar13;
      *(undefined1 *)((long)param_2 + 99) = 1;
      if (*(char *)(param_2 + 0xd) == '\x19') {
        __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                  (&pbStack_4e0,puVar12);
      }
      else {
        pbStack_4d8 = (byte *)param_2[0xe];
        pbStack_4e0 = (byte *)*puVar12;
        pbStack_4d0 = (byte *)param_2[0xf];
      }
      pbStack_148 = pbStack_4d8;
      pbStack_150 = pbStack_4e0;
      param_2[0x10] = uVar24;
      pbStack_140 = pbStack_4d0;
      *(undefined2 *)((long)param_2 + 0x62) = 0;
      param_2[0x11] = plVar13;
      param_2[0x13] = pbStack_4d8;
      param_2[0x12] = pbStack_4e0;
      param_2[0x14] = pbStack_4d0;
      param_2[0x15] = lVar27;
      *(undefined2 *)(param_2 + 0x2d) = uVar26;
      *(char *)((long)param_2 + 0x16c) = cVar8;
      *(undefined1 *)((long)param_2 + 0x16d) = uVar25;
      *(undefined1 *)((long)param_2 + 0x16e) = 0;
LAB_10149dcc8:
      *(undefined1 *)(param_2 + 0x2e) = 0;
      param_2[0x17] = param_2[0x13];
      param_2[0x16] = param_2[0x12];
      *(undefined2 *)((long)param_2 + 0x16a) = uVar26;
      *(undefined1 *)((long)param_2 + 0x16f) = uVar25;
      param_2[0x18] = param_2[0x14];
      param_2[0x19] = uVar24;
      param_2[0x1a] = plVar13;
      auVar28 = func_0x000100fd2b90();
      param_2[0x1c] = auVar28._8_8_;
      *(undefined1 *)(param_2 + 0x2e) = 1;
      param_2[0x1b] = auVar28._0_8_;
      puVar12 = (undefined8 *)_malloc(0x18);
      if (puVar12 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_10149e7c8;
      }
      puVar12[1] = 1;
      *puVar12 = 1;
      *(undefined1 *)(puVar12 + 2) = 0;
      param_2[0x1d] = puVar12;
      puVar12 = (undefined8 *)_malloc(0x38);
      if (puVar12 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
        goto LAB_10149e7c8;
      }
      puVar12[1] = 1;
      *puVar12 = 1;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 5) = 0;
      puVar12[6] = 6;
      param_2[0x1e] = puVar12;
      lVar18 = *(long *)(lVar27 + 8) + *(long *)(lVar27 + 0x10) * 0x20;
      lVar27 = *(long *)(lVar27 + 0x10) * -0x20;
      plVar13 = (long *)(lVar18 + 8);
      do {
        plVar15 = plVar13;
        if (lVar27 == 0) goto LAB_10149ddd8;
        plVar1 = (long *)(lVar18 + -0x10);
        plVar3 = (long *)(lVar18 + -8);
        lVar18 = lVar18 + -0x20;
        plVar13 = plVar15 + -4;
        lVar27 = lVar27 + 0x20;
      } while (*plVar3 != 0x7b252f384e734e05 || *plVar1 != 0xcc3a8bdcd18b507);
      auVar28 = (**(code **)(*plVar13 + 0x38))(plVar15[-5]);
      plVar13 = auVar28._0_8_;
      (**(code **)(auVar28._8_8_ + 0x18))(&pbStack_4e0);
      if ((pbStack_4d8 == (byte *)0x7b252f384e734e05 && pbStack_4e0 == (byte *)0xcc3a8bdcd18b507) &&
          plVar13 != (long *)0x0) {
        if (*plVar13 == 4) {
          pbVar10 = (byte *)0x4;
        }
        else {
          __ZN75__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__clone__Clone_GT_5clone17h8894a6a19c694adeE
                    (&pbStack_4e0,plVar13);
          pbStack_318 = pbStack_4c0;
          pbStack_320 = pbStack_4c8;
          pbStack_308 = pbStack_4b0;
          pbStack_310 = pbStack_4b8;
          pbStack_2f8 = pbStack_4a0;
          pbStack_300 = pbStack_4a8;
          pbStack_2e8 = pbStack_490;
          pbStack_2f0 = pbStack_498;
          pbStack_328 = pbStack_4d0;
          pbStack_330 = pbStack_4d8;
          pbVar10 = pbStack_4e0;
          if (pbStack_4e0 == (byte *)0x5) goto LAB_10149ddd8;
        }
        param_2[0x1f] = pbVar10;
        param_2[0x25] = pbStack_308;
        param_2[0x24] = pbStack_310;
        param_2[0x27] = pbStack_2f8;
        param_2[0x26] = pbStack_300;
        param_2[0x29] = pbStack_2e8;
        param_2[0x28] = pbStack_2f0;
        param_2[0x21] = pbStack_328;
        param_2[0x20] = pbStack_330;
        param_2[0x23] = pbStack_318;
        param_2[0x22] = pbStack_320;
        cVar9 = *(char *)((long)param_2 + 0x16f);
        if (cVar9 != '\x02') goto LAB_10149ddf4;
LAB_10149df94:
        iVar4 = *(int *)(param_2 + 0x19);
        pbVar10 = (byte *)param_2[0x1a];
        lVar27 = *(long *)pbVar10;
        *(long *)pbVar10 = lVar27 + 1;
        if (iVar4 == 1) {
          if (lVar27 < 0) goto LAB_10149e7c8;
          pbVar14 = (byte *)0x1;
        }
        else {
          if (lVar27 < 0) goto LAB_10149e7c8;
          pbVar14 = (byte *)0x0;
        }
        pbStack_130 = pbVar14;
        pbStack_128 = pbVar10;
        if (*(char *)(param_2 + 0x16) == '\x19') {
          __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                    (&pbStack_180,param_2 + 0x16);
        }
        else {
          pbStack_178 = (byte *)param_2[0x17];
          pbStack_180 = (byte *)param_2[0x16];
          pbStack_170 = (byte *)param_2[0x18];
        }
        pbStack_1a8 = pbStack_178;
        pbStack_1b0 = pbStack_180;
        pbStack_1a0 = pbStack_170;
        uVar26 = *(undefined2 *)((long)param_2 + 0x16a);
        pbVar21 = (byte *)param_2[0x1b];
        *(long *)(pbVar21 + 0x1f0) = *(long *)(pbVar21 + 0x1f0) + 1;
        lVar27 = *(long *)pbVar21;
        *(long *)pbVar21 = lVar27 + 1;
        if (lVar27 < 0) goto LAB_10149e7c8;
        pbVar20 = (byte *)param_2[0x1d];
        lVar27 = *(long *)pbVar20;
        *(long *)pbVar20 = lVar27 + 1;
        if (lVar27 < 0) goto LAB_10149e7c8;
        pbVar22 = (byte *)param_2[0x1e];
        lVar27 = *(long *)pbVar22;
        *(long *)pbVar22 = lVar27 + 1;
        if (lVar27 < 0) goto LAB_10149e7c8;
        uStack_2c4 = 1;
        pbStack_318 = pbStack_178;
        pbStack_320 = pbStack_180;
        pbStack_310 = pbStack_170;
        uStack_2c1 = 0;
        pbStack_330 = pbVar14;
        pbStack_328 = pbVar10;
        pbStack_308 = pbVar21;
        pbStack_300 = pbVar20;
        pbStack_2f8 = pbVar22;
        uStack_2c8 = uVar26;
        cStack_2c3 = cVar8;
        cStack_2c2 = cVar9;
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bRam000000010b6399a0 - 1 < 2 ||
             ((bRam000000010b6399a0 != 0 &&
              (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                                 ), cVar8 != '\0')))))) &&
           (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                              ), (uVar7 & 1) != 0)) {
          pbStack_168 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                        + 0x30;
          pbStack_180 = (byte *)0x1;
          pbStack_178 = &UNK_10b24db48;
          pbStack_170 = (byte *)0x2;
          __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                    (&pbStack_1b0,
                     ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                     ,&pbStack_180);
        }
        else {
          pbStack_180 = (byte *)0x2;
          pbStack_160 = 
          ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
          ;
          if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
            pbStack_118 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                          + 0x30;
            pbStack_130 = (byte *)0x1;
            pbStack_128 = &UNK_10b24db48;
            pbStack_120 = (byte *)0x2;
            __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&pbStack_180,&pbStack_130);
          }
          pbStack_1a8 = pbStack_178;
          pbStack_1b0 = pbStack_180;
          pbStack_198 = pbStack_168;
          pbStack_1a0 = pbStack_170;
          pbStack_190 = pbStack_160;
        }
        _memcpy(&pbStack_4b8,&pbStack_330,0x180);
        pbStack_4d8 = pbStack_1a8;
        pbStack_4e0 = pbStack_1b0;
        pbStack_4c8 = pbStack_198;
        pbStack_4d0 = pbStack_1a0;
        pbStack_4c0 = pbStack_190;
        plVar13 = (long *)FUN_1016ed08c(param_2 + 0x1f,&pbStack_4e0);
        if (*plVar13 == 0xcc) {
          *plVar13 = 0x84;
        }
        else {
          (**(code **)(plVar13[2] + 0x20))();
        }
      }
      else {
LAB_10149ddd8:
        param_2[0x1f] = 4;
        cVar9 = *(char *)((long)param_2 + 0x16f);
        if (cVar9 == '\x02') goto LAB_10149df94;
LAB_10149ddf4:
        iVar4 = *(int *)(param_2 + 0x19);
        pbVar10 = (byte *)param_2[0x1a];
        lVar27 = *(long *)pbVar10;
        *(long *)pbVar10 = lVar27 + 1;
        if (iVar4 == 1) {
          if (lVar27 < 0) goto LAB_10149e7c8;
          pbVar14 = (byte *)0x1;
        }
        else {
          if (lVar27 < 0) goto LAB_10149e7c8;
          pbVar14 = (byte *)0x0;
        }
        pbStack_130 = pbVar14;
        pbStack_128 = pbVar10;
        if (*(char *)(param_2 + 0x16) == '\x19') {
          __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                    (&pbStack_180,param_2 + 0x16);
        }
        else {
          pbStack_178 = (byte *)param_2[0x17];
          pbStack_180 = (byte *)param_2[0x16];
          pbStack_170 = (byte *)param_2[0x18];
        }
        pbStack_1a8 = pbStack_178;
        pbStack_1b0 = pbStack_180;
        pbStack_1a0 = pbStack_170;
        uVar26 = *(undefined2 *)((long)param_2 + 0x16a);
        pbVar21 = (byte *)param_2[0x1b];
        *(long *)(pbVar21 + 0x1f0) = *(long *)(pbVar21 + 0x1f0) + 1;
        lVar27 = *(long *)pbVar21;
        *(long *)pbVar21 = lVar27 + 1;
        if (lVar27 < 0) goto LAB_10149e7c8;
        pbVar20 = (byte *)param_2[0x1d];
        lVar27 = *(long *)pbVar20;
        *(long *)pbVar20 = lVar27 + 1;
        if (lVar27 < 0) goto LAB_10149e7c8;
        pbVar22 = (byte *)param_2[0x1e];
        lVar27 = *(long *)pbVar22;
        *(long *)pbVar22 = lVar27 + 1;
        if (lVar27 < 0) goto LAB_10149e7c8;
        uStack_2c4 = 0;
        pbStack_318 = pbStack_178;
        pbStack_320 = pbStack_180;
        pbStack_310 = pbStack_170;
        uStack_2c1 = 0;
        pbStack_330 = pbVar14;
        pbStack_328 = pbVar10;
        pbStack_308 = pbVar21;
        pbStack_300 = pbVar20;
        pbStack_2f8 = pbVar22;
        uStack_2c8 = uVar26;
        cStack_2c3 = cVar8;
        cStack_2c2 = cVar9;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bRam000000010b639988 - 1 < 2 ||
             ((bRam000000010b639988 != 0 &&
              (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                                 ), cVar9 != '\0')))) &&
            (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                               ), (uVar7 & 1) != 0)))) {
          pbStack_168 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                        + 0x30;
          pbStack_180 = (byte *)0x1;
          pbStack_178 = &UNK_10b24db48;
          pbStack_170 = (byte *)0x2;
          __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                    (&pbStack_1b0,
                     ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                     ,&pbStack_180);
        }
        else {
          pbStack_180 = (byte *)0x2;
          pbStack_160 = 
          ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
          ;
          if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
            pbStack_118 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                          + 0x30;
            pbStack_130 = (byte *)0x1;
            pbStack_128 = &UNK_10b24db48;
            pbStack_120 = (byte *)0x2;
            __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&pbStack_180,&pbStack_130);
          }
          pbStack_1a8 = pbStack_178;
          pbStack_1b0 = pbStack_180;
          pbStack_198 = pbStack_168;
          pbStack_1a0 = pbStack_170;
          pbStack_190 = pbStack_160;
        }
        _memcpy(&pbStack_4b8,&pbStack_330,0x180);
        pbStack_4d8 = pbStack_1a8;
        pbStack_4e0 = pbStack_1b0;
        pbStack_4c8 = pbStack_198;
        pbStack_4d0 = pbStack_1a0;
        pbStack_4c0 = pbStack_190;
        plVar13 = (long *)FUN_1016ed08c(param_2 + 0x1f,&pbStack_4e0);
        if (*plVar13 == 0xcc) {
          *plVar13 = 0x84;
        }
        else {
          (**(code **)(plVar13[2] + 0x20))();
        }
        cVar9 = *(char *)((long)param_2 + 0x16f);
        if (cVar9 != '\x01') goto LAB_10149df94;
      }
      *(undefined1 *)(param_2 + 0x2e) = 0;
      pbVar10 = (byte *)param_2[0x1b];
      LOAcquire();
      lVar27 = *(long *)(pbVar10 + 0x1f0);
      *(long *)(pbVar10 + 0x1f0) = lVar27 + -1;
      LORelease();
      pbStack_4e0 = pbVar10;
      if (lVar27 == 1) {
        LOAcquire();
        lVar27 = *(long *)(pbVar10 + 0x88);
        *(long *)(pbVar10 + 0x88) = lVar27 + 1;
        lVar27 = func_0x000100fcbaa8(pbVar10 + 0x80,lVar27);
        *(ulong *)(lVar27 + 0xb10) = *(ulong *)(lVar27 + 0xb10) | 0x200000000;
        LORelease();
        puVar2 = (ulong *)(pbVar10 + 0x110);
        LOAcquire();
        uVar7 = *puVar2;
        *puVar2 = uVar7 | 2;
        LORelease();
        if (uVar7 == 0) {
          lVar27 = *(long *)(pbVar10 + 0x100);
          pbVar10[0x100] = 0;
          pbVar10[0x101] = 0;
          pbVar10[0x102] = 0;
          pbVar10[0x103] = 0;
          pbVar10[0x104] = 0;
          pbVar10[0x105] = 0;
          pbVar10[0x106] = 0;
          pbVar10[0x107] = 0;
          *puVar2 = in_xzr;
          LORelease();
          if (lVar27 != 0) {
            (**(code **)(lVar27 + 8))(*(undefined8 *)(pbVar10 + 0x108));
          }
        }
      }
      lVar27 = *(long *)pbStack_4e0;
      *(long *)pbStack_4e0 = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(&pbStack_4e0);
      }
      param_2[0x2a] = param_2 + 0x1c;
      *(undefined1 *)(param_2 + 0x2c) = 0;
      goto LAB_10149e1c0;
    }
LAB_10149d230:
    param_2[0x2f] = 2;
    *(undefined2 *)(param_2 + 0xc) = 0;
    *(undefined1 *)((long)param_2 + 0x62) = 0;
    param_2[0x22] = lVar27;
    param_2[0x24] = param_2[0xe];
    param_2[0x23] = *puVar12;
    param_2[0x25] = param_2[0xf];
    *(undefined2 *)(param_2 + 0x26) = uVar26;
    *(undefined1 *)((long)param_2 + 0x136) = uVar25;
    *(undefined1 *)((long)param_2 + 0x137) = 0;
    *(char *)(param_2 + 0x27) = cVar8;
LAB_10149d2a0:
    pcVar23 = (char *)(param_2 + 0xd);
    *(undefined1 *)((long)param_2 + 0x135) = 0;
    param_2[0xf] = param_2[0x25];
    param_2[0xe] = param_2[0x24];
    *(undefined8 *)pcVar23 = param_2[0x23];
    *(undefined2 *)((long)param_2 + 0x132) = uVar26;
    *(undefined1 *)((long)param_2 + 0x134) = uVar25;
    auVar28 = func_0x000100fd2b90();
    param_2[0x11] = auVar28._8_8_;
    *(undefined1 *)((long)param_2 + 0x135) = 1;
    param_2[0x10] = auVar28._0_8_;
    puVar12 = (undefined8 *)_malloc(0x18);
    if (puVar12 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
      goto LAB_10149e7c8;
    }
    puVar12[1] = 1;
    *puVar12 = 1;
    *(undefined1 *)(puVar12 + 2) = 0;
    param_2[0x12] = puVar12;
    puVar12 = (undefined8 *)_malloc(0x38);
    if (puVar12 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
      goto LAB_10149e7c8;
    }
    puVar12[1] = 1;
    *puVar12 = 1;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 5) = 0;
    puVar12[6] = 6;
    param_2[0x13] = puVar12;
    lVar18 = *(long *)(lVar27 + 8) + *(long *)(lVar27 + 0x10) * 0x20;
    lVar27 = *(long *)(lVar27 + 0x10) * -0x20;
    plVar13 = (long *)(lVar18 + 8);
    do {
      plVar15 = plVar13;
      if (lVar27 == 0) goto LAB_10149d3b4;
      plVar1 = (long *)(lVar18 + -0x10);
      plVar3 = (long *)(lVar18 + -8);
      lVar18 = lVar18 + -0x20;
      plVar13 = plVar15 + -4;
      lVar27 = lVar27 + 0x20;
    } while (*plVar3 != 0x7b252f384e734e05 || *plVar1 != 0xcc3a8bdcd18b507);
    auVar28 = (**(code **)(*plVar13 + 0x38))(plVar15[-5]);
    plVar13 = auVar28._0_8_;
    (**(code **)(auVar28._8_8_ + 0x18))(&pbStack_4e0);
    if ((pbStack_4d8 == (byte *)0x7b252f384e734e05 && pbStack_4e0 == (byte *)0xcc3a8bdcd18b507) &&
        plVar13 != (long *)0x0) {
      if (*plVar13 == 4) {
        pbVar10 = (byte *)0x4;
      }
      else {
        __ZN75__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__clone__Clone_GT_5clone17h8894a6a19c694adeE
                  (&pbStack_4e0,plVar13);
        pbStack_318 = pbStack_4c0;
        pbStack_320 = pbStack_4c8;
        pbStack_308 = pbStack_4b0;
        pbStack_310 = pbStack_4b8;
        pbStack_2f8 = pbStack_4a0;
        pbStack_300 = pbStack_4a8;
        pbStack_2e8 = pbStack_490;
        pbStack_2f0 = pbStack_498;
        pbStack_328 = pbStack_4d0;
        pbStack_330 = pbStack_4d8;
        pbVar10 = pbStack_4e0;
        if (pbStack_4e0 == (byte *)0x5) goto LAB_10149d3b4;
      }
      param_2[0x14] = pbVar10;
      param_2[0x18] = pbStack_318;
      param_2[0x17] = pbStack_320;
      param_2[0x1a] = pbStack_308;
      param_2[0x19] = pbStack_310;
      param_2[0x1c] = pbStack_2f8;
      param_2[0x1b] = pbStack_300;
      param_2[0x1e] = pbStack_2e8;
      param_2[0x1d] = pbStack_2f0;
      param_2[0x16] = pbStack_328;
      param_2[0x15] = pbStack_330;
      cVar9 = *(char *)((long)param_2 + 0x134);
      if (cVar9 != '\x02') goto LAB_10149d3cc;
LAB_10149d538:
      if (*pcVar23 == '\x19') {
        __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                  (&pbStack_180,pcVar23);
      }
      else {
        pbStack_178 = (byte *)param_2[0xe];
        pbStack_180 = *(byte **)pcVar23;
        pbStack_170 = (byte *)param_2[0xf];
      }
      pbStack_1a8 = pbStack_178;
      pbStack_1b0 = pbStack_180;
      pbStack_1a0 = pbStack_170;
      uVar26 = *(undefined2 *)((long)param_2 + 0x132);
      pbVar10 = (byte *)param_2[0x10];
      *(long *)(pbVar10 + 0x1f0) = *(long *)(pbVar10 + 0x1f0) + 1;
      lVar27 = *(long *)pbVar10;
      *(long *)pbVar10 = lVar27 + 1;
      if (lVar27 < 0) goto LAB_10149e7c8;
      pbVar14 = (byte *)param_2[0x12];
      lVar27 = *(long *)pbVar14;
      *(long *)pbVar14 = lVar27 + 1;
      if (lVar27 < 0) goto LAB_10149e7c8;
      pbVar21 = (byte *)param_2[0x13];
      lVar27 = *(long *)pbVar21;
      *(long *)pbVar21 = lVar27 + 1;
      if (lVar27 < 0) goto LAB_10149e7c8;
      uStack_2db = 1;
      pbStack_2f8 = pbStack_178;
      pbStack_300 = pbStack_180;
      pbStack_2f0 = pbStack_170;
      pbStack_2e8 = (byte *)CONCAT62(pbStack_2e8._2_6_,uVar26);
      uStack_2de = 0;
      pbStack_318 = pbVar10;
      pbStack_310 = pbVar14;
      pbStack_308 = pbVar21;
      cStack_2dd = cVar9;
      cStack_2dc = cVar8;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b6399a0 - 1 < 2 ||
           ((bRam000000010b6399a0 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                               ), cVar8 != '\0')))) &&
          (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                             ), (uVar7 & 1) != 0)))) {
        pbStack_168 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                      + 0x30;
        pbStack_180 = (byte *)0x1;
        pbStack_178 = &UNK_10b24db48;
        pbStack_170 = (byte *)0x2;
        __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                  (&pbStack_1b0,
                   ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                   ,&pbStack_180);
      }
      else {
        pbStack_180 = (byte *)0x2;
        pbStack_160 = 
        ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
        ;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
          pbStack_138 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfa67b827c57afe42E
                        + 0x30;
          pbStack_150 = (byte *)0x1;
          pbStack_148 = &UNK_10b24db48;
          pbStack_140 = (byte *)0x2;
          __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&pbStack_180,&pbStack_150);
        }
        pbStack_1a8 = pbStack_178;
        pbStack_1b0 = pbStack_180;
        pbStack_198 = pbStack_168;
        pbStack_1a0 = pbStack_170;
        pbStack_190 = pbStack_160;
      }
      _memcpy(&pbStack_4b8,&pbStack_330,0x160);
      pbStack_4d8 = pbStack_1a8;
      pbStack_4e0 = pbStack_1b0;
      pbStack_4c8 = pbStack_198;
      pbStack_4d0 = pbStack_1a0;
      pbStack_4c0 = pbStack_190;
      plVar13 = (long *)FUN_1016eaac4(param_2 + 0x14,&pbStack_4e0);
      if (*plVar13 == 0xcc) {
        *plVar13 = 0x84;
      }
      else {
        (**(code **)(plVar13[2] + 0x20))();
      }
    }
    else {
LAB_10149d3b4:
      param_2[0x14] = 4;
      cVar9 = *(char *)((long)param_2 + 0x134);
      if (cVar9 == '\x02') goto LAB_10149d538;
LAB_10149d3cc:
      if (*pcVar23 == '\x19') {
        __ZN56__LT_smol_str__SmolStr_u20_as_u20_core__clone__Clone_GT_5clone10cold_clone17hc6e71e48e1322b8bE
                  (&pbStack_180,pcVar23);
      }
      else {
        pbStack_178 = (byte *)param_2[0xe];
        pbStack_180 = *(byte **)pcVar23;
        pbStack_170 = (byte *)param_2[0xf];
      }
      pbStack_1a8 = pbStack_178;
      pbStack_1b0 = pbStack_180;
      pbStack_1a0 = pbStack_170;
      uVar26 = *(undefined2 *)((long)param_2 + 0x132);
      pbVar10 = (byte *)param_2[0x10];
      *(long *)(pbVar10 + 0x1f0) = *(long *)(pbVar10 + 0x1f0) + 1;
      lVar27 = *(long *)pbVar10;
      *(long *)pbVar10 = lVar27 + 1;
      if (lVar27 < 0) goto LAB_10149e7c8;
      pbVar14 = (byte *)param_2[0x12];
      lVar27 = *(long *)pbVar14;
      *(long *)pbVar14 = lVar27 + 1;
      if (lVar27 < 0) goto LAB_10149e7c8;
      pbVar21 = (byte *)param_2[0x13];
      lVar27 = *(long *)pbVar21;
      *(long *)pbVar21 = lVar27 + 1;
      if (lVar27 < 0) goto LAB_10149e7c8;
      uStack_2db = 0;
      pbStack_2f8 = pbStack_178;
      pbStack_300 = pbStack_180;
      pbStack_2f0 = pbStack_170;
      pbStack_2e8 = (byte *)CONCAT62(pbStack_2e8._2_6_,uVar26);
      uStack_2de = 0;
      pbStack_318 = pbVar10;
      pbStack_310 = pbVar14;
      pbStack_308 = pbVar21;
      cStack_2dd = cVar9;
      cStack_2dc = cVar8;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b639988 - 1 < 2 ||
           ((bRam000000010b639988 != 0 &&
            (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                               ), cVar9 != '\0')))))) &&
         (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                            ), (uVar7 & 1) != 0)) {
        pbStack_168 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                      + 0x30;
        pbStack_180 = (byte *)0x1;
        pbStack_178 = &UNK_10b24db48;
        pbStack_170 = (byte *)0x2;
        __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                  (&pbStack_1b0,
                   ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                   ,&pbStack_180);
      }
      else {
        pbStack_180 = (byte *)0x2;
        pbStack_160 = 
        ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
        ;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
          pbStack_138 = ___ZN8rama_tcp6client7connect17tcp_connect_inner28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf2824fabdc1bb5dE
                        + 0x30;
          pbStack_150 = (byte *)0x1;
          pbStack_148 = &UNK_10b24db48;
          pbStack_140 = (byte *)0x2;
          __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&pbStack_180,&pbStack_150);
        }
        pbStack_1a8 = pbStack_178;
        pbStack_1b0 = pbStack_180;
        pbStack_198 = pbStack_168;
        pbStack_1a0 = pbStack_170;
        pbStack_190 = pbStack_160;
      }
      _memcpy(&pbStack_4b8,&pbStack_330,0x160);
      pbStack_4d8 = pbStack_1a8;
      pbStack_4e0 = pbStack_1b0;
      pbStack_4c8 = pbStack_198;
      pbStack_4d0 = pbStack_1a0;
      pbStack_4c0 = pbStack_190;
      plVar13 = (long *)FUN_1016eaac4(param_2 + 0x14,&pbStack_4e0);
      if (*plVar13 == 0xcc) {
        *plVar13 = 0x84;
      }
      else {
        (**(code **)(plVar13[2] + 0x20))();
      }
      cVar9 = *(char *)((long)param_2 + 0x134);
      if (cVar9 != '\x01') goto LAB_10149d538;
    }
    *(undefined1 *)((long)param_2 + 0x135) = 0;
    pbVar10 = (byte *)param_2[0x10];
    LOAcquire();
    lVar27 = *(long *)(pbVar10 + 0x1f0);
    *(long *)(pbVar10 + 0x1f0) = lVar27 + -1;
    LORelease();
    pbStack_4e0 = pbVar10;
    if (lVar27 == 1) {
      LOAcquire();
      lVar27 = *(long *)(pbVar10 + 0x88);
      *(long *)(pbVar10 + 0x88) = lVar27 + 1;
      lVar27 = func_0x000100fcbaa8(pbVar10 + 0x80,lVar27);
      *(ulong *)(lVar27 + 0xb10) = *(ulong *)(lVar27 + 0xb10) | 0x200000000;
      LORelease();
      puVar2 = (ulong *)(pbVar10 + 0x110);
      LOAcquire();
      uVar7 = *puVar2;
      *puVar2 = uVar7 | 2;
      LORelease();
      if (uVar7 == 0) {
        lVar27 = *(long *)(pbVar10 + 0x100);
        pbVar10[0x100] = 0;
        pbVar10[0x101] = 0;
        pbVar10[0x102] = 0;
        pbVar10[0x103] = 0;
        pbVar10[0x104] = 0;
        pbVar10[0x105] = 0;
        pbVar10[0x106] = 0;
        pbVar10[0x107] = 0;
        *puVar2 = in_xzr;
        LORelease();
        if (lVar27 != 0) {
          (**(code **)(lVar27 + 8))(*(undefined8 *)(pbVar10 + 0x108));
        }
      }
    }
    lVar27 = *(long *)pbStack_4e0;
    *(long *)pbStack_4e0 = lVar27 + -1;
    LORelease();
    if (lVar27 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(&pbStack_4e0);
    }
    param_2[0x1f] = param_2 + 0x11;
    *(undefined1 *)(param_2 + 0x21) = 0;
LAB_10149d788:
    func_0x000100fd1174(&pbStack_4e0,param_2 + 0x1f,*param_3);
    pbVar14 = pbStack_4d0;
    pbVar10 = pbStack_4d8;
    pbVar21 = pbStack_4e0;
    if (pbStack_4e0 == (byte *)0x3) {
      *(undefined1 *)((long)param_2 + 0x137) = 3;
      *param_1 = 3;
      uVar25 = 5;
      goto LAB_10149e588;
    }
    pbStack_108 = pbStack_4c0;
    pbStack_110 = pbStack_4c8;
    pbStack_f8 = pbStack_4b0;
    pbStack_100 = pbStack_4b8;
    pbStack_128 = pbStack_4a0;
    pbStack_130 = pbStack_4a8;
    pbStack_118 = pbStack_490;
    pbStack_120 = pbStack_498;
    if (pbStack_4e0 == (byte *)0x2) {
      pbStack_4d0 = (byte *)((long)param_2 + 0x132);
      pbStack_4d8 = &
                    __ZN72__LT_rama_net__address__domain__Domain_u20_as_u20_core__fmt__Display_GT_3fmt17hf58f7b8af32d5625E
      ;
      pbStack_4c8 = &
                    __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
      ;
      pbStack_4e0 = (byte *)(param_2 + 0xd);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pbStack_330,s_1failed_to_connect_to_any_resolv_108ad8672,&pbStack_4e0);
      pbVar22 = pbStack_320;
      pbVar20 = pbStack_328;
      pbVar14 = pbStack_330;
      pbVar10 = (byte *)_malloc(0x18);
      if (pbVar10 == (byte *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_10149e7c8:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10149e7cc);
        (*pcVar6)();
      }
      *(byte **)pbVar10 = pbVar14;
      *(byte **)(pbVar10 + 8) = pbVar20;
      *(byte **)(pbVar10 + 0x10) = pbVar22;
      if (param_2[0x14] != 4) {
        __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                  ();
      }
      lVar27 = *(long *)param_2[0x13];
      *(long *)param_2[0x13] = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
      }
      lVar27 = *(long *)param_2[0x12];
      *(long *)param_2[0x12] = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001060e2224();
      }
      FUN_100d1e594(param_2 + 0x11);
      *(undefined1 *)((long)param_2 + 0x135) = 0;
      if (0x18 < *(byte *)(param_2 + 0xd)) {
        lVar27 = *(long *)param_2[0xe];
        *(long *)param_2[0xe] = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      pbVar14 = &UNK_10b2192b8;
    }
    else {
      pbStack_e8 = pbStack_4c0;
      pbStack_f0 = pbStack_4c8;
      pbStack_d8 = pbStack_4b0;
      pbStack_e0 = pbStack_4b8;
      pbStack_c8 = pbStack_4a0;
      pbStack_d0 = pbStack_4a8;
      pbStack_b8 = pbStack_490;
      pbStack_c0 = pbStack_498;
      plVar13 = param_2 + 0x12;
      *(undefined1 *)(*plVar13 + 0x10) = 1;
      pbStack_a8 = pbStack_4c0;
      pbStack_b0 = pbStack_4c8;
      pbStack_98 = pbStack_4b0;
      pbStack_a0 = pbStack_4b8;
      pbStack_88 = pbStack_4a0;
      pbStack_90 = pbStack_4a8;
      pbStack_78 = pbStack_490;
      pbStack_80 = pbStack_498;
      if (param_2[0x14] != 4) {
        __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                  ();
      }
      lVar27 = *(long *)param_2[0x13];
      *(long *)param_2[0x13] = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
      }
      lVar27 = *(long *)*plVar13;
      *(long *)*plVar13 = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001060e2224(plVar13);
      }
      FUN_100d1e594(param_2 + 0x11);
      *(undefined1 *)((long)param_2 + 0x135) = 0;
      if (0x18 < *(byte *)(param_2 + 0xd)) {
        lVar27 = *(long *)param_2[0xe];
        *(long *)param_2[0xe] = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
    }
    pbStack_518 = pbStack_a8;
    pbStack_520 = pbStack_b0;
    pbStack_508 = pbStack_98;
    pbStack_510 = pbStack_a0;
    pbStack_4f8 = pbStack_88;
    pbStack_500 = pbStack_90;
    pbStack_4e8 = pbStack_78;
    pbStack_4f0 = pbStack_80;
    *(undefined1 *)((long)param_2 + 0x137) = 1;
    FUN_100d43070(param_2 + 0xd);
    if ((*(byte *)(param_2 + 0xc) & 1) != 0) goto LAB_10149e52c;
  }
  else if (bVar5 == 3) {
LAB_10149da60:
    FUN_1011a2e70(&pbStack_4e0,param_2 + 0xd,param_3);
    pbVar20 = pbStack_4c0;
    pbVar21 = pbStack_4c8;
    pbVar14 = pbStack_4d0;
    pbVar10 = pbStack_4d8;
    if (pbStack_4e0 == (byte *)0x3) {
      uVar25 = 3;
      *param_1 = 3;
      goto LAB_10149e588;
    }
    if (*(char *)(param_2 + 0x27) == '\x03') {
      func_0x000100d19160(param_2 + 0x12);
    }
    if (pbStack_4e0 == (byte *)0x2) {
      pbStack_4e0 = pbVar10;
      pbVar14 = (byte *)_malloc(8);
      if (pbVar14 == (byte *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
        goto LAB_10149e7c8;
      }
      *(byte **)pbVar14 = pbVar10;
      pbStack_4e0 = &UNK_108cd5fe4;
      pbStack_4d8 = (byte *)0x1f;
      pbStack_4c8 = &UNK_10b212e38;
      pbStack_4d0 = pbVar14;
      pbVar10 = (byte *)_malloc(0x20);
      if (pbVar10 == (byte *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
        goto LAB_10149e7c8;
      }
      *(byte **)(pbVar10 + 8) = pbStack_4d8;
      *(byte **)pbVar10 = pbStack_4e0;
      *(byte **)(pbVar10 + 0x18) = pbStack_4c8;
      *(byte **)(pbVar10 + 0x10) = pbStack_4d0;
      pbVar14 = &UNK_10b21f338;
      pbVar21 = (byte *)0x2;
    }
    else {
      pbStack_518 = pbVar20;
      pbStack_520 = pbVar21;
      pbStack_508 = pbStack_4b0;
      pbStack_510 = pbStack_4b8;
      pbStack_4f8 = (byte *)param_2[0x29];
      pbStack_500 = (byte *)param_2[0x28];
      pbStack_4e8 = (byte *)param_2[0x2b];
      pbStack_4f0 = (byte *)param_2[0x2a];
      pbVar21 = pbStack_4e0;
    }
  }
  else {
    if (bVar5 != 4) {
      bVar5 = *(byte *)((long)param_2 + 0x137);
      if (bVar5 < 2) {
        if (bVar5 != 0) {
          func_0x000108a07af4(&UNK_10b24db68);
          goto LAB_10149e7c8;
        }
        lVar27 = param_2[0x22];
        uVar26 = *(undefined2 *)(param_2 + 0x26);
        uVar25 = *(undefined1 *)((long)param_2 + 0x136);
        cVar8 = *(char *)(param_2 + 0x27);
        goto LAB_10149d2a0;
      }
      if (bVar5 != 3) {
        func_0x000108a07b10(&UNK_10b24db68);
        goto LAB_10149e7c8;
      }
      goto LAB_10149d788;
    }
    bVar5 = *(byte *)((long)param_2 + 0x16e);
    if (bVar5 < 2) {
      if (bVar5 == 0) {
        lVar27 = param_2[0x15];
        uVar26 = *(undefined2 *)(param_2 + 0x2d);
        uVar25 = *(undefined1 *)((long)param_2 + 0x16d);
        uVar24 = param_2[0x10];
        plVar13 = (long *)param_2[0x11];
        cVar8 = *(char *)((long)param_2 + 0x16c);
        goto LAB_10149dcc8;
      }
      goto LAB_10149e79c;
    }
    if (bVar5 != 3) {
      func_0x000108a07b10(&UNK_10b24db68);
      goto LAB_10149e7c8;
    }
LAB_10149e1c0:
    func_0x000100fd1174(&pbStack_4e0,param_2 + 0x2a,*param_3);
    pbVar20 = pbStack_4c8;
    pbVar14 = pbStack_4d0;
    pbVar10 = pbStack_4d8;
    pbVar21 = pbStack_4e0;
    if (pbStack_4e0 == (byte *)0x3) {
      *(undefined1 *)((long)param_2 + 0x16e) = 3;
      *param_1 = 3;
      uVar25 = 4;
      goto LAB_10149e588;
    }
    pbStack_e8 = pbStack_4c0;
    pbStack_f0 = pbStack_4c8;
    pbStack_d8 = pbStack_4b0;
    pbStack_e0 = pbStack_4b8;
    pbStack_108 = pbStack_4a0;
    pbStack_110 = pbStack_4a8;
    pbStack_f8 = pbStack_490;
    pbStack_100 = pbStack_498;
    if (pbStack_4e0 == (byte *)0x2) {
      pbStack_4d0 = (byte *)((long)param_2 + 0x16a);
      pbStack_4d8 = &
                    __ZN72__LT_rama_net__address__domain__Domain_u20_as_u20_core__fmt__Display_GT_3fmt17hf58f7b8af32d5625E
      ;
      pbStack_4c8 = &
                    __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
      ;
      pbStack_4e0 = (byte *)(param_2 + 0x16);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pbStack_330,s_1failed_to_connect_to_any_resolv_108ad8672,&pbStack_4e0);
      pbVar22 = pbStack_320;
      pbVar20 = pbStack_328;
      pbVar14 = pbStack_330;
      pbVar10 = (byte *)_malloc(0x18);
      if (pbVar10 == (byte *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_10149e7c8;
      }
      *(byte **)pbVar10 = pbVar14;
      *(byte **)(pbVar10 + 8) = pbVar20;
      *(byte **)(pbVar10 + 0x10) = pbVar22;
      if (param_2[0x1f] != 4) {
        __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                  ();
      }
      lVar27 = *(long *)param_2[0x1e];
      *(long *)param_2[0x1e] = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
      }
      lVar27 = *(long *)param_2[0x1d];
      *(long *)param_2[0x1d] = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001060e2224();
      }
      FUN_100d1e594(param_2 + 0x1c);
      *(undefined1 *)(param_2 + 0x2e) = 0;
      if (param_2[0x19] == 0) {
        lVar27 = *(long *)param_2[0x1a];
        *(long *)param_2[0x1a] = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f68883db9c1e126E(param_2 + 0x1a);
        }
      }
      else {
        lVar27 = *(long *)param_2[0x1a];
        *(long *)param_2[0x1a] = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h576a4a0a079aa50eE(param_2 + 0x1a);
        }
      }
      if (0x18 < *(byte *)(param_2 + 0x16)) {
        lVar27 = *(long *)param_2[0x17];
        *(long *)param_2[0x17] = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      pbVar14 = &UNK_10b2192b8;
    }
    else {
      pbStack_4d8 = pbStack_4c0;
      pbStack_4e0 = pbStack_4c8;
      pbStack_4c8 = pbStack_4b0;
      pbStack_4d0 = pbStack_4b8;
      pbStack_c8 = pbStack_4a0;
      pbStack_d0 = pbStack_4a8;
      pbStack_b8 = pbStack_490;
      pbStack_c0 = pbStack_498;
      plVar13 = param_2 + 0x1d;
      *(undefined1 *)(*plVar13 + 0x10) = 1;
      pbStack_a8 = pbStack_4c0;
      pbStack_b0 = pbVar20;
      pbStack_98 = pbStack_4b0;
      pbStack_a0 = pbStack_4b8;
      pbStack_88 = pbStack_4a0;
      pbStack_90 = pbStack_4a8;
      pbStack_78 = pbStack_490;
      pbStack_80 = pbStack_498;
      if (param_2[0x1f] != 4) {
        __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                  ();
      }
      lVar27 = *(long *)param_2[0x1e];
      *(long *)param_2[0x1e] = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
      }
      lVar27 = *(long *)*plVar13;
      *(long *)*plVar13 = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001060e2224(plVar13);
      }
      FUN_100d1e594(param_2 + 0x1c);
      *(undefined1 *)(param_2 + 0x2e) = 0;
      if (param_2[0x19] == 0) {
        lVar27 = *(long *)param_2[0x1a];
        *(long *)param_2[0x1a] = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f68883db9c1e126E(param_2 + 0x1a);
        }
      }
      else {
        lVar27 = *(long *)param_2[0x1a];
        *(long *)param_2[0x1a] = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h576a4a0a079aa50eE(param_2 + 0x1a);
        }
      }
      if (0x18 < *(byte *)(param_2 + 0x16)) {
        lVar27 = *(long *)param_2[0x17];
        *(long *)param_2[0x17] = lVar27 + -1;
        LORelease();
        if (lVar27 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
    }
    pbStack_518 = pbStack_a8;
    pbStack_520 = pbStack_b0;
    pbStack_508 = pbStack_98;
    pbStack_510 = pbStack_a0;
    pbStack_4f8 = pbStack_88;
    pbStack_500 = pbStack_90;
    pbStack_4e8 = pbStack_78;
    pbStack_4f0 = pbStack_80;
    *(undefined1 *)((long)param_2 + 0x16e) = 1;
    FUN_100d8b8b8(param_2 + 0x10);
    *(undefined1 *)((long)param_2 + 99) = 0;
    if ((*(byte *)(param_2 + 0xc) & 1) == 0) goto LAB_10149e558;
LAB_10149e52c:
    if (0x18 < *(byte *)(param_2 + 0xd)) {
      lVar27 = *(long *)param_2[0xe];
      *(long *)param_2[0xe] = lVar27 + -1;
      LORelease();
      if (lVar27 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
  }
LAB_10149e558:
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined2 *)((long)param_2 + 0x61) = 0;
  *(undefined1 *)((long)param_2 + 100) = 0;
  *param_1 = pbVar21;
  param_1[1] = pbVar10;
  param_1[2] = pbVar14;
  param_1[4] = pbStack_518;
  param_1[3] = pbStack_520;
  param_1[6] = pbStack_508;
  param_1[5] = pbStack_510;
  param_1[8] = pbStack_4f8;
  param_1[7] = pbStack_500;
  uVar25 = 1;
  param_1[10] = pbStack_4e8;
  param_1[9] = pbStack_4f0;
LAB_10149e588:
  *(undefined1 *)((long)param_2 + 0x65) = uVar25;
  return;
}

