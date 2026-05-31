
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018762c8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  long *plVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  long *extraout_x1;
  long *extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined1 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  code *pcVar16;
  long *plVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *unaff_x19;
  long *plVar22;
  long unaff_x20;
  uint *puVar23;
  char *pcVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  bool bVar30;
  uint *puVar31;
  undefined8 *unaff_x27;
  long lVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined1 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined1 *in_stack_000000d0;
  undefined8 in_stack_000000d8;
  char *in_stack_000000e0;
  undefined1 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  undefined8 *in_stack_00000148;
  undefined1 *in_stack_00000150;
  undefined8 in_stack_00000158;
  char *in_stack_00000160;
  undefined1 *in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  undefined8 *in_stack_000001a8;
  undefined1 *in_stack_000001b0;
  long in_stack_000001b8;
  undefined8 *in_stack_000001c0;
  undefined1 *in_stack_000001c8;
  undefined1 *in_stack_000001d0;
  undefined *in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 *in_stack_000008d8;
  undefined1 *puVar42;
  long in_stack_000008f0;
  long in_stack_000008f8;
  undefined8 in_stack_00000900;
  long in_stack_00000908;
  undefined8 *in_stack_00000910;
  undefined1 *in_stack_00000918;
  undefined4 in_stack_00000920;
  undefined4 in_stack_00000924;
  char *in_stack_00000928;
  undefined1 *in_stack_00000930;
  undefined8 in_stack_00000938;
  undefined8 in_stack_00000940;
  undefined8 in_stack_00000948;
  undefined8 in_stack_00000950;
  undefined8 in_stack_00000958;
  undefined8 in_stack_00000960;
  undefined8 *puVar43;
  undefined8 *puVar44;
  undefined1 *puVar45;
  
code_r0x0001018762c8:
  puVar44 = (undefined8 *)&stack0x00000268;
  puVar43 = (undefined8 *)0x1;
  puVar45 = (undefined1 *)0x1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000f58);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar27 = *(long *)(unaff_x20 + 0x3b0);
    puVar42 = *(undefined1 **)(lVar27 + 0x28);
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000d30);
    if (iVar10 != 0) {
      in_stack_000008f8 = *(long *)(lVar27 + 0x60);
      in_stack_00000900 = *(undefined8 *)(lVar27 + 0x68);
      in_stack_000008d8 = (undefined8 *)0x1;
      if (*(long *)(lVar27 + 0x50) == 0) {
        in_stack_000008d8 = (undefined8 *)0x2;
      }
      in_stack_00000920 = *(undefined4 *)(lVar27 + 8);
      in_stack_00000924 = *(undefined4 *)(lVar27 + 0xc);
      in_stack_000008f0 = 1;
      if (in_stack_000008f8 == 0) {
        in_stack_000008f0 = 2;
      }
      in_stack_00000910 = (undefined8 *)unaff_x27[0x195];
      in_stack_00000908 = unaff_x27[0x194];
      in_stack_00000930 = &stack0x00000b08;
      in_stack_00000928 = s__108b39f4f;
      (**(code **)(puVar3 + 0x20))(puVar4,&stack0x000008d8);
      in_stack_00000918 = puVar42;
    }
  }
LAB_10187777c:
  if (((ulong)in_stack_000001d0 & 3) == 1) {
    puVar26 = (undefined8 *)(in_stack_000001d0 + -1);
    uVar28 = *puVar26;
    puVar29 = *(undefined8 **)(in_stack_000001d0 + 7);
    pcVar16 = (code *)*puVar29;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(uVar28);
    }
    if (puVar29[1] != 0) {
      _free(uVar28);
    }
    _free(puVar26);
  }
  *(undefined1 *)((long)unaff_x19 + 0x59) = 0;
  lVar27 = *(long *)unaff_x19[8];
  *(long *)unaff_x19[8] = lVar27 + -1;
  LORelease();
  if (lVar27 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
  }
LAB_101877984:
  *(undefined1 *)(unaff_x19 + 0xb) = 0;
  puVar26 = (undefined8 *)unaff_x19[1];
  if (puVar26 == (undefined8 *)unaff_x19[3]) {
LAB_1018775cc:
    if (unaff_x19[2] != 0) {
      _free(*unaff_x19);
    }
    uVar28 = 0;
    uVar12 = 1;
LAB_101877d44:
    *(undefined1 *)((long)unaff_x19 + 0x5a) = uVar12;
    return uVar28;
  }
LAB_101875eac:
  unaff_x19[1] = puVar26 + 2;
  uVar34 = puVar26[1];
  uVar28 = *puVar26;
  unaff_x19[5] = uVar34;
  unaff_x19[4] = uVar28;
  lVar27 = *(long *)unaff_x19[6];
  unaff_x19[0xc] = lVar27 + 0x10;
  unaff_x19[0xe] = uVar34;
  unaff_x19[0xd] = uVar28;
  puVar29 = unaff_x19 + 0x21;
  *(undefined1 *)puVar29 = 0;
  unaff_x19[0xf] = *(long *)(lVar27 + 0x28) + 0x10;
  unaff_x19[0x11] = unaff_x19[0xe];
  unaff_x19[0x10] = unaff_x19[0xd];
  puVar26 = unaff_x19 + 0x20;
  *(undefined1 *)puVar26 = 0;
  unaff_x19[0x13] = unaff_x19[0x11];
  unaff_x19[0x12] = unaff_x19[0x10];
  unaff_x19[0x14] = *(long *)(unaff_x19[0xf] + 0x98) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x1f) = 0;
  auVar41 = FUN_1019976a8(unaff_x19 + 0x14,in_stack_00000068);
  plVar22 = auVar41._8_8_;
  pcVar24 = auVar41._0_8_;
  if (pcVar24 == (char *)0x0) {
    *(undefined1 *)puVar26 = 3;
    *(undefined1 *)puVar29 = 3;
    uVar28 = 1;
    uVar12 = 4;
    goto LAB_101877d44;
  }
  plVar17 = plVar22;
  if ((*(char *)(unaff_x19 + 0x1f) == '\x03') && (*(char *)(unaff_x19 + 0x1e) == '\x03')) {
    __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
              (unaff_x19 + 0x16);
    plVar17 = extraout_x1;
    if (unaff_x19[0x17] != 0) {
      (**(code **)(unaff_x19[0x17] + 0x18))(unaff_x19[0x18]);
      plVar17 = extraout_x1_00;
    }
  }
  if (plVar22[3] == 0) {
    bVar30 = false;
    plVar22 = (long *)unaff_x19[0x12];
    puVar33 = (undefined8 *)0x8000000000000003;
LAB_101876044:
    if (*pcVar24 != '\0') goto LAB_1018773e0;
    *pcVar24 = '\x01';
  }
  else {
    auVar41 = FUN_10196f7a0(plVar22[4],plVar22[5],unaff_x19 + 0x12);
    plVar17 = auVar41._8_8_;
    lVar27 = 0;
    bVar8 = auVar41[7] >> 1;
    lVar32 = *plVar22;
    uVar18 = plVar22[1];
    plVar22 = (long *)unaff_x19[0x12];
    uVar20 = auVar41._0_8_ & uVar18;
    uVar28 = *(undefined8 *)(lVar32 + uVar20);
    uVar11 = CONCAT17(-((byte)((ulong)uVar28 >> 0x38) == bVar8),
                      CONCAT16(-((byte)((ulong)uVar28 >> 0x30) == bVar8),
                               CONCAT15(-((byte)((ulong)uVar28 >> 0x28) == bVar8),
                                        CONCAT14(-((byte)((ulong)uVar28 >> 0x20) == bVar8),
                                                 CONCAT13(-((byte)((ulong)uVar28 >> 0x18) == bVar8),
                                                          CONCAT12(-((byte)((ulong)uVar28 >> 0x10)
                                                                    == bVar8),
                                                                   CONCAT11(-((byte)((ulong)uVar28
                                                                                    >> 8) == bVar8),
                                                                            -((byte)uVar28 == bVar8)
                                                                           ))))))) &
             0x8080808080808080;
    while( true ) {
      for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
        uVar21 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar20 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3) & uVar18;
        plVar13 = (long *)(lVar32 + -0x18 + uVar21 * -0x18);
        if (unaff_x19[0x13] == plVar13[1] && plVar22 == (long *)*plVar13) {
          bVar30 = false;
          plVar13 = *(long **)(lVar32 + uVar21 * -0x18 + -8);
          puVar33 = (undefined8 *)0x8000000000000003;
          if (plVar13[0x33] == -0x7ffffffffffffff5) goto LAB_101876044;
          bVar30 = true;
          lVar27 = *plVar13;
          *plVar13 = lVar27 + 1;
          puVar33 = (undefined8 *)0x8000000000000020;
          plVar22 = plVar13;
          if (-1 < lVar27) goto LAB_101876044;
          goto LAB_101877ef8;
        }
      }
      bVar40 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar28 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar28 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar28 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar28 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar28 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar28 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar28 >> 8) == -1),
                                                           -((char)uVar28 == -1)))))))),1);
      if ((bVar40 & 1) != 0) break;
      lVar27 = lVar27 + 8;
      uVar20 = uVar20 + lVar27 & uVar18;
      uVar28 = *(undefined8 *)(lVar32 + uVar20);
      uVar11 = CONCAT17(-((byte)((ulong)uVar28 >> 0x38) == bVar8),
                        CONCAT16(-((byte)((ulong)uVar28 >> 0x30) == bVar8),
                                 CONCAT15(-((byte)((ulong)uVar28 >> 0x28) == bVar8),
                                          CONCAT14(-((byte)((ulong)uVar28 >> 0x20) == bVar8),
                                                   CONCAT13(-((byte)((ulong)uVar28 >> 0x18) == bVar8
                                                             ),CONCAT12(-((byte)((ulong)uVar28 >>
                                                                                0x10) == bVar8),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar28 >> 8) == bVar8),-((byte)uVar28 == bVar8))))
                                                  )))) & 0x8080808080808080;
    }
    bVar30 = false;
    puVar33 = (undefined8 *)0x8000000000000003;
    if (*pcVar24 == '\0') {
      *pcVar24 = '\x01';
    }
    else {
LAB_1018773e0:
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar24,plVar17,1000000000)
      ;
    }
  }
  FUN_1060fa678(pcVar24,1,pcVar24);
  *(undefined1 *)puVar26 = 1;
  *(undefined1 *)puVar29 = 1;
  if (!bVar30) goto LAB_1018771dc;
  *(undefined1 *)(unaff_x19 + 0xb) = 1;
  unaff_x19[8] = plVar22;
  lVar27 = *(long *)unaff_x19[6];
  unaff_x19[0xe] = plVar22 + 2;
  unaff_x19[0xc] = lVar27 + 0x10;
  unaff_x19[0xd] = unaff_x19[7];
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  unaff_x27 = &stack0x00000090;
  unaff_x19[0xf] = plVar22[0x44] + 0x10;
  *(undefined1 *)(unaff_x19 + 0x1f) = 0;
  lVar27 = unaff_x19[0xf] + 0x790;
  unaff_x19[0x10] = lVar27;
  puVar29 = unaff_x19 + 0x1e;
  *(undefined1 *)puVar29 = 0;
  unaff_x19[0x11] = lVar27;
  puVar14 = unaff_x19 + 0x1d;
  *(undefined1 *)puVar14 = 0;
  unaff_x19[0x12] = lVar27;
  puVar33 = unaff_x19 + 0x14;
  *(undefined1 *)puVar33 = 0;
  unaff_x19[0x13] = lVar27;
  puVar42 = (undefined1 *)0x0;
  unaff_x19[0x15] = lVar27;
  unaff_x19[0x16] = 0;
  unaff_x19[0x19] = 0;
  unaff_x19[0x18] = 0;
  unaff_x19[0x17] = in_stack_000008d8;
  unaff_x19[0x1b] = 1;
  unaff_x19[0x1a] = 1;
  *(undefined1 *)(unaff_x19 + 0x1c) = 0;
  bVar8 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                    (unaff_x19 + 0x15,in_stack_00000068);
  if (bVar8 == 2) {
    *(undefined1 *)puVar33 = 4;
    *(undefined1 *)puVar14 = 3;
    *(undefined1 *)puVar29 = 3;
    *(undefined1 *)(unaff_x19 + 0x1f) = 3;
    uVar28 = 1;
    uVar12 = 5;
    *(undefined1 *)puVar26 = 3;
    goto LAB_101877d44;
  }
  __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
            (unaff_x19 + 0x15);
  uVar28 = extraout_x1_01;
  if (unaff_x19[0x16] != 0) {
    (**(code **)(unaff_x19[0x16] + 0x18))(unaff_x19[0x17]);
    uVar28 = extraout_x1_02;
  }
  if ((bVar8 & 1) == 0) {
    *(undefined1 *)puVar33 = 1;
    pcVar24 = (char *)unaff_x19[0x11];
    *(undefined1 *)puVar14 = 1;
    *(undefined1 *)puVar29 = 1;
    plVar22 = *(long **)(pcVar24 + 0x4d8);
    lVar27 = *plVar22;
    *plVar22 = lVar27 + 1;
    if (lVar27 < 0) goto LAB_101877ef8;
    if (*pcVar24 == '\0') {
      *pcVar24 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar24,uVar28,1000000000);
    }
    FUN_1060fa678(pcVar24,1,pcVar24);
    *(undefined1 *)(unaff_x19 + 0x1f) = 1;
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
    unaff_x19[0xe] = plVar22;
    *(undefined1 *)(unaff_x19 + 0x11) = 0;
    plVar22 = unaff_x19 + 0xc;
    FUN_10186e92c(&stack0x000008d8,plVar22,in_stack_00000068);
    if (in_stack_000008d8 == (undefined8 *)0x8000000000000006) {
      uVar28 = 1;
      uVar12 = 6;
      goto LAB_101877d44;
    }
    in_stack_00000158 = CONCAT44(in_stack_00000924,in_stack_00000920);
    in_stack_00000120 = 0;
    in_stack_00000128 = in_stack_000008f0;
    in_stack_00000130 = in_stack_000008f8;
    in_stack_00000138 = in_stack_00000900;
    in_stack_00000140 = in_stack_00000908;
    in_stack_00000148 = in_stack_00000910;
    in_stack_00000150 = in_stack_00000918;
    in_stack_00000160 = in_stack_00000928;
    in_stack_00000168 = in_stack_00000930;
    in_stack_00000170 = in_stack_00000938;
    in_stack_00000178 = in_stack_00000940;
    in_stack_00000180 = in_stack_00000948;
    in_stack_00000188 = in_stack_00000950;
    in_stack_00000190 = in_stack_00000958;
    in_stack_00000198 = in_stack_00000960;
    FUN_10192f6bc(plVar22);
    if (in_stack_000008d8 == (undefined8 *)0x8000000000000005) {
      in_stack_000001d0 = (undefined1 *)0x0;
      puVar6 = puVar42;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         ((bRam000000010b6273c0 - 1 < 2 ||
          ((puVar6 = in_stack_000001d0, bRam000000010b6273c0 != 0 &&
           (in_stack_000001d0 = puVar42,
           cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1db514904927805fE
                             ), puVar42 = in_stack_000001d0, puVar6 = in_stack_000001d0,
           cVar9 != '\0')))))) {
        in_stack_000001d0 = puVar42;
        unaff_x20 = 0x10b627000;
        uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1db514904927805fE
                           );
        param_1 = 
        ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1db514904927805fE
        ;
        puVar6 = in_stack_000001d0;
        if ((uVar11 & 1) != 0) goto code_r0x0001018762c8;
      }
      in_stack_000001d0 = puVar6;
      lVar27 = 
      ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1db514904927805fE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000001a8 =
             *(undefined8 **)
              (
              ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1db514904927805fE
              + 0x20);
        in_stack_000001b0 =
             *(undefined1 **)
              (
              ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h1db514904927805fE
              + 0x28);
        in_stack_000001a0 = 2;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000001a0);
        puVar42 = in_stack_000001b0;
        puVar26 = in_stack_000001a8;
        lVar32 = in_stack_000001a0;
        if (iVar10 != 0) {
          puVar44 = (undefined8 *)&stack0x00000488;
          puVar43 = (undefined8 *)0x1;
          puVar45 = (undefined1 *)0x1;
          in_stack_000008f8 = *(long *)(lVar27 + 0x60);
          in_stack_00000900 = *(undefined8 *)(lVar27 + 0x68);
          in_stack_000008d8 = (undefined8 *)0x1;
          if (*(long *)(lVar27 + 0x50) == 0) {
            in_stack_000008d8 = (undefined8 *)0x2;
          }
          in_stack_00000920 = *(undefined4 *)(lVar27 + 8);
          in_stack_00000924 = *(undefined4 *)(lVar27 + 0xc);
          in_stack_000008f0 = 1;
          if (in_stack_000008f8 == 0) {
            in_stack_000008f0 = 2;
          }
          in_stack_00000930 = &stack0x00000d30;
          in_stack_00000928 = s__108b39f4f;
          (**(code **)(puVar3 + 0x20))(puVar4,&stack0x000008d8);
          in_stack_00000908 = lVar32;
          in_stack_00000910 = puVar26;
          in_stack_00000918 = puVar42;
        }
      }
      goto LAB_10187777c;
    }
    in_stack_000000e8 = in_stack_00000168;
    in_stack_000000e0 = in_stack_00000160;
    in_stack_000000f8 = in_stack_00000178;
    in_stack_000000f0 = in_stack_00000170;
    in_stack_00000108 = in_stack_00000188;
    in_stack_00000100 = in_stack_00000180;
    in_stack_00000118 = in_stack_00000198;
    in_stack_00000110 = in_stack_00000190;
    in_stack_000000a8 = in_stack_00000128;
    in_stack_000000a0 = in_stack_00000120;
    in_stack_000000b8 = in_stack_00000138;
    in_stack_000000b0 = in_stack_00000130;
    in_stack_000000c8 = in_stack_00000148;
    in_stack_000000c0 = in_stack_00000140;
    in_stack_000000d8 = in_stack_00000158;
    in_stack_000000d0 = in_stack_00000150;
    *(undefined2 *)(unaff_x19 + 0xb) = 0;
    lVar27 = unaff_x19[8];
    unaff_x19[0x1b] = in_stack_00000188;
    unaff_x19[0x1a] = in_stack_00000180;
    unaff_x19[0x1d] = in_stack_00000198;
    unaff_x19[0x1c] = in_stack_00000190;
    unaff_x19[0x11] = in_stack_00000138;
    unaff_x19[0x10] = in_stack_00000130;
    unaff_x19[0x13] = in_stack_00000148;
    unaff_x19[0x12] = in_stack_00000140;
    unaff_x19[0xd] = 0;
    *plVar22 = (long)in_stack_000008d8;
    unaff_x19[0xf] = in_stack_00000128;
    unaff_x19[0xe] = in_stack_00000120;
    unaff_x19[0x17] = in_stack_00000168;
    unaff_x19[0x16] = in_stack_00000160;
    unaff_x19[0x19] = in_stack_00000178;
    unaff_x19[0x18] = in_stack_00000170;
    unaff_x19[0x15] = in_stack_00000158;
    unaff_x19[0x14] = in_stack_00000150;
    unaff_x19[0x1e] = lVar27;
    unaff_x19[0x20] = unaff_x19[5];
    unaff_x19[0x1f] = unaff_x19[4];
    *(undefined1 *)(unaff_x19 + 0x1c0) = 0;
    plVar17 = (long *)*in_stack_00000068;
    unaff_x19[0x22] = unaff_x19[0x20];
    unaff_x19[0x21] = unaff_x19[0x1f];
    in_stack_000001d8 = (undefined *)unaff_x19[0xd];
    in_stack_000001d0 = (undefined1 *)*plVar22;
    in_stack_000001e8 = unaff_x19[0xf];
    in_stack_000001e0 = unaff_x19[0xe];
    unaff_x19[0x32] = unaff_x19[0x19];
    unaff_x19[0x31] = unaff_x19[0x18];
    unaff_x19[0x34] = unaff_x19[0x1b];
    unaff_x19[0x33] = unaff_x19[0x1a];
    unaff_x19[0x36] = unaff_x19[0x1d];
    unaff_x19[0x35] = unaff_x19[0x1c];
    unaff_x19[0x2a] = unaff_x19[0x11];
    unaff_x19[0x29] = unaff_x19[0x10];
    unaff_x19[0x2c] = unaff_x19[0x13];
    unaff_x19[0x2b] = unaff_x19[0x12];
    unaff_x19[0x2e] = unaff_x19[0x15];
    unaff_x19[0x2d] = unaff_x19[0x14];
    unaff_x19[0x30] = unaff_x19[0x17];
    unaff_x19[0x2f] = unaff_x19[0x16];
    *(undefined1 *)((long)unaff_x19 + 0xe01) = 0;
    unaff_x19[0x23] = lVar27;
    unaff_x19[0x24] = 0x8000000000000010;
    puVar26 = unaff_x19 + 0x24;
    unaff_x19[0x26] = unaff_x19[0xd];
    unaff_x19[0x25] = *plVar22;
    unaff_x19[0x28] = unaff_x19[0xf];
    unaff_x19[0x27] = unaff_x19[0xe];
    unaff_x19[0x61] = lVar27 + 0x10;
    *(undefined1 *)(unaff_x19 + 0x1bf) = 0;
    lVar27 = unaff_x19[0x61] + 0x1e8;
    in_stack_00000090 = in_stack_000008d8;
    in_stack_00000098 = puVar42;
    _memcpy(unaff_x19 + 0x62,puVar26,0x1e8);
    unaff_x19[0x9f] = lVar27;
    *(undefined1 *)(unaff_x19 + 0x1be) = 0;
    unaff_x19[0xa0] = 0x8000000000000001;
    _memcpy(unaff_x19 + 0xa6,unaff_x19 + 0x62,0x1e8);
    unaff_x19[0xe3] = lVar27;
    *(undefined1 *)(unaff_x19 + 0x1bd) = 0;
    *(undefined1 *)((long)unaff_x19 + 0xdea) = 1;
    _memcpy(&stack0x00000268,unaff_x19 + 0xa6,0x1e8);
    *(undefined1 *)((long)unaff_x19 + 0xde9) = 1;
    uVar36 = unaff_x19[0xa1];
    uVar34 = unaff_x19[0xa0];
    uVar39 = unaff_x19[0xa3];
    uVar38 = unaff_x19[0xa2];
    uVar37 = unaff_x19[0xa5];
    uVar35 = unaff_x19[0xa4];
    __ZN4uuid2v728__LT_impl_u20_uuid__Uuid_GT_6now_v717h022be0f860ee962eE(&stack0x00000f58);
    FUN_10624142c(&stack0x000008d8,&stack0x00000f58,0);
    FUN_1088bb36c(&stack0x00001180,0,0x24,1,1);
    uRam0000000000000009 = 0;
    uRam0000000000000011 = 0;
    uRam0000000000000021 = (undefined4)in_stack_000008f8;
    puRam0000000000000001 = in_stack_000008d8;
    lRam0000000000000019 = in_stack_000008f0;
    unaff_x19[0xe5] = 1;
    unaff_x19[0xe4] = 0;
    unaff_x19[0xe6] = 0x24;
    uVar28 = unaff_x19[0xe5];
    lVar25 = unaff_x19[0xe6];
    lVar32 = 1;
    if ((lVar25 == 0) || (lVar32 = _malloc(lVar25), lVar32 != 0)) {
      _memcpy(lVar32,uVar28,lVar25);
      *(undefined2 *)((long)unaff_x19 + 0xde9) = 0;
      unaff_x19[0xe7] = lVar25;
      unaff_x19[0xe8] = lVar32;
      unaff_x19[0xe9] = lVar25;
      unaff_x19[0xeb] = uVar36;
      unaff_x19[0xea] = uVar34;
      unaff_x19[0xed] = uVar39;
      unaff_x19[0xec] = uVar38;
      unaff_x19[0xef] = uVar37;
      unaff_x19[0xee] = uVar35;
      _memcpy(unaff_x19 + 0xf0,&stack0x00000268,0x1e8);
      unaff_x19[0x12d] = lVar27;
      *(undefined1 *)(unaff_x19 + 0x1bc) = 0;
      *(undefined2 *)((long)unaff_x19 + 0xde1) = 0x101;
      _memcpy(unaff_x19 + 0x12e,unaff_x19 + 0xe7,0x230);
      if (unaff_x19[0x131] == -0x7fffffffffffffff) {
        __ZN7tracing4span4Span7current17h348f9350075e824bE(&stack0x00001180);
        __ZN10codex_otel13trace_context22span_w3c_trace_context17h70538771b6392d16E
                  (&stack0x000008d8,&stack0x00001180);
        FUN_1048c3e1c(&stack0x00001180);
        lVar32 = unaff_x19[0x131];
        if (lVar32 != -0x7fffffffffffffff) {
          if ((lVar32 != -0x8000000000000000) && (lVar32 != 0)) {
            _free(unaff_x19[0x132]);
          }
          if ((unaff_x19[0x134] != -0x8000000000000000) && (unaff_x19[0x134] != 0)) {
            _free(unaff_x19[0x135]);
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0xde2) = 1;
        unaff_x19[0x132] = 0;
        unaff_x19[0x131] = in_stack_000008d8;
        unaff_x19[0x134] = in_stack_000008f0;
        unaff_x19[0x133] = 0;
        unaff_x19[0x136] = in_stack_00000900;
        unaff_x19[0x135] = in_stack_000008f8;
      }
      *(undefined2 *)((long)unaff_x19 + 0xde1) = 0;
      _memcpy(unaff_x19 + 0x174,unaff_x19 + 0x12e,0x230);
      unaff_x19[0x1ba] = lVar27;
      unaff_x19[0x1bb] = 0;
      puVar29 = unaff_x19 + 0x175;
      in_stack_000008d8 = (undefined8 *)unaff_x19[0x174];
      _memcpy(&stack0x00001180,puVar29,0x228);
      unaff_x19[0x174] = 0x8000000000000000;
      if (in_stack_000008d8 != (undefined8 *)0x8000000000000000) {
        do {
          _memcpy(&stack0x000008e0,&stack0x00001180,0x228);
          lVar27 = *(long *)unaff_x19[0x1ba];
          if (*(long *)(lVar27 + 0x80) == 2) {
            uVar11 = *(ulong *)(lVar27 + 0x180);
            plVar15 = *(long **)(lVar27 + 0x188);
            plVar13 = (long *)0x0;
joined_r0x000101876994:
            plVar7 = plVar15;
            if ((uVar11 & 1) == 0) {
              do {
                uVar18 = uVar11 >> 1 & 0x1f;
                if (uVar18 == 0x1f) {
                  _sched_yield();
                  uVar11 = *(ulong *)(lVar27 + 0x180);
                  plVar7 = *(long **)(lVar27 + 0x188);
                }
                else {
                  if (((uVar18 == 0x1e) && (plVar13 == (long *)0x0)) &&
                     (plVar13 = (long *)_calloc(0x44d0,1), plVar13 == (long *)0x0)) {
                    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x44d0);
                    goto LAB_101877ef8;
                  }
                  if (plVar7 == (long *)0x0) {
                    plVar7 = (long *)_calloc(0x44d0,1);
                    if (plVar7 == (long *)0x0) {
                      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x44d0);
                      goto LAB_101877ef8;
                    }
                    if (*(long *)(lVar27 + 0x188) != 0) goto LAB_101876a60;
                    *(long *)(lVar27 + 0x188) = (long)plVar7;
                    *(long **)(lVar27 + 0x108) = plVar7;
                    uVar20 = *(ulong *)(lVar27 + 0x180);
                    if (uVar20 == uVar11) {
                      *(ulong *)(lVar27 + 0x180) = uVar11 + 2;
                      goto LAB_101876f48;
                    }
                  }
                  else {
                    uVar20 = *(ulong *)(lVar27 + 0x180);
                    if (uVar20 == uVar11) {
                      *(ulong *)(lVar27 + 0x180) = uVar11 + 2;
LAB_101876f48:
                      if (uVar18 != 0x1e) {
                        _memmove(plVar7 + uVar18 * 0x47 + 1,&stack0x000008d8,0x230);
                        plVar7[uVar18 * 0x47 + 0x47] = plVar7[uVar18 * 0x47 + 0x47] | 1;
                        LORelease();
                        uVar11 = 2;
                        goto joined_r0x000101876f78;
                      }
                      if (plVar13 != (long *)0x0) {
                        *(long **)(lVar27 + 0x188) = plVar13;
                        *(long *)(lVar27 + 0x180) = *(long *)(lVar27 + 0x180) + 2;
                        LORelease();
                        *plVar7 = (long)plVar13;
                        _memcpy(plVar7 + 0x853,&stack0x000008d8,0x230);
                        plVar7[0x899] = plVar7[0x899] | 1;
                        LORelease();
                        goto LAB_101877a6c;
                      }
                      func_0x000108a07a20(&UNK_10b268098);
                      goto LAB_101877ef8;
                    }
                  }
                  plVar7 = *(long **)(lVar27 + 0x188);
                  uVar11 = uVar20;
                }
                if ((uVar11 & 1) != 0) break;
              } while( true );
            }
            _memcpy(&stack0x00000d30,&stack0x000008e0,0x228);
            uVar11 = 1;
            puVar26 = in_stack_000008d8;
joined_r0x000101876f78:
            if (plVar13 != (long *)0x0) {
              _free(plVar13);
            }
            goto LAB_101876ae8;
          }
          if (*(long *)(lVar27 + 0x80) == 1) {
            uVar20 = *(ulong *)(lVar27 + 0x208);
            uVar11 = uVar20 & *(ulong *)(lVar27 + 0x180);
            uVar18 = *(ulong *)(lVar27 + 0x180);
            while (uVar11 == 0) {
              while( true ) {
                uVar11 = uVar20 - 1 & uVar18;
                uVar20 = *(ulong *)(lVar27 + 0x218);
                if (uVar11 + 1 < uVar20) {
                  uVar21 = uVar18 + 1;
                }
                else {
                  uVar21 = (uVar18 & -*(long *)(lVar27 + 0x200)) + *(long *)(lVar27 + 0x200);
                }
                if (uVar20 <= uVar11) {
                  func_0x000108a07bdc(uVar11,uVar20,&UNK_10b268080);
                  goto LAB_101877ef8;
                }
                lVar32 = *(long *)(lVar27 + 0x210) + uVar11 * 0x238;
                if (uVar18 == *(ulong *)(lVar32 + 0x230)) break;
                if (*(long *)(lVar27 + 0x200) + *(ulong *)(lVar32 + 0x230) == uVar18 + 1) {
                  DataMemoryBarrier(2,3);
                  _memcpy(&stack0x00001180,&stack0x000008e0,0x228);
                  lVar32 = *(long *)(lVar27 + 0x100);
                  lVar25 = *(long *)(lVar27 + 0x200);
                  _memcpy(&stack0x00000f58,&stack0x00001180,0x228);
                  if (lVar25 + lVar32 == uVar18) {
                    _memcpy(&stack0x00000d30,&stack0x00000f58,0x228);
                    uVar11 = 0;
                    puVar26 = in_stack_000008d8;
                    goto LAB_101876ae8;
                  }
                  _memcpy(&stack0x000008e0,&stack0x00000f58,0x228);
                  uVar18 = *(ulong *)(lVar27 + 0x180);
                  uVar20 = *(ulong *)(lVar27 + 0x208);
                  uVar11 = uVar20 & uVar18;
                }
                else {
                  _sched_yield();
                  uVar18 = *(ulong *)(lVar27 + 0x180);
                  uVar20 = *(ulong *)(lVar27 + 0x208);
                  uVar11 = uVar20 & uVar18;
                }
                if (uVar11 != 0) goto LAB_101876964;
              }
              uVar2 = *(ulong *)(lVar27 + 0x180);
              if (uVar2 == uVar18) {
                *(ulong *)(lVar27 + 0x180) = uVar21;
                _memcpy(lVar32,&stack0x000008d8,0x230);
                *(ulong *)(lVar32 + 0x230) = uVar18 + 1;
                uVar11 = 2;
                goto LAB_101876ae8;
              }
              uVar20 = *(ulong *)(lVar27 + 0x208);
              uVar18 = uVar2;
              uVar11 = uVar20 & uVar2;
            }
LAB_101876964:
            _memcpy(&stack0x00000d30,&stack0x000008e0,0x228);
            uVar11 = 1;
            puVar26 = in_stack_000008d8;
LAB_101876ae8:
            if (uVar11 == 2) goto LAB_101877a6c;
            if ((uVar11 & 1) != 0) goto LAB_1018779cc;
          }
          else {
            puVar1 = (ulong *)(lVar27 + 0x2b8);
            uVar11 = *puVar1;
            if (uVar11 == 0) {
              *puVar1 = 3;
              _memcpy(lVar27 + 0x88,&stack0x000008d8,0x230);
              *puVar1 = *puVar1 & 0xfffffffffffffffe;
              LORelease();
LAB_101877a6c:
              FUN_10889af2c(lVar27 + 0x308,1);
              FUN_10889ae48(lVar27 + 0x310);
              puVar26 = (undefined8 *)0x8000000000000000;
              goto LAB_101877a84;
            }
            _memcpy(&stack0x00000d30,&stack0x000008e0,0x228);
            puVar26 = in_stack_000008d8;
            if (((uint)uVar11 >> 2 & 1) != 0) goto LAB_1018779cc;
          }
          _memcpy(&stack0x00000b08,&stack0x00000d30,0x228);
          if (unaff_x19[0x174] != -0x8000000000000000) {
            if (unaff_x19[0x174] != 0) {
              _free(*puVar29);
            }
            FUN_10194f584(unaff_x19 + 0x17d);
            lVar27 = unaff_x19[0x177];
            if (lVar27 != -0x7fffffffffffffff) {
              if ((lVar27 != -0x8000000000000000) && (lVar27 != 0)) {
                _free(unaff_x19[0x178]);
              }
              if ((unaff_x19[0x17a] != -0x8000000000000000) && (unaff_x19[0x17a] != 0)) {
                _free(unaff_x19[0x17b]);
              }
            }
          }
          unaff_x19[0x174] = puVar26;
          _memcpy(puVar29,&stack0x00000b08,0x228);
          puVar23 = (uint *)unaff_x19[0x1bb];
          if (puVar23 == (uint *)0x0) {
            uVar28 = FUN_10889ab90(*(long *)unaff_x19[0x1ba] + 0x300);
            FUN_101962af0(unaff_x19[0x1bb]);
          }
          else {
            lVar27 = *(long *)(puVar23 + 0xc);
            puVar44 = (undefined8 *)(lVar27 + 0x18);
            if (*(long *)(lVar27 + 0x18) == 0) {
              FUN_1088ba9ec(puVar44);
            }
            iVar10 = _pthread_mutex_lock();
            if (iVar10 != 0) {
              FUN_108a81ad4();
              goto LAB_101877ef8;
            }
            if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                0x7fffffffffffffff) == 0) {
              bVar8 = 0;
            }
            else {
              bVar8 = func_0x000108a82c0c();
              bVar8 = bVar8 ^ 1;
            }
            puVar43 = (undefined8 *)(lVar27 + 0x10);
            puVar45 = (undefined1 *)CONCAT71((int7)((ulong)puVar45 >> 8),bVar8);
            if (*puVar23 == 1) {
              puVar31 = puVar23 + 2;
              uVar5 = *puVar31;
              *(undefined1 *)puVar31 = 3;
              if ((char)uVar5 == '\x01') {
                lVar32 = *(long *)(puVar23 + 8);
                lVar25 = *(long *)(puVar23 + 10);
                if (lVar32 == 0) {
                  *(long *)(lVar27 + 0x28) = lVar25;
                  if (lVar25 == 0) goto LAB_101876da4;
LAB_101876c58:
                  *(long *)(lVar25 + 0x18) = lVar32;
                  puVar19 = *(uint **)(lVar27 + 0x38);
                }
                else {
                  *(long *)(lVar32 + 0x20) = lVar25;
                  if (lVar25 != 0) goto LAB_101876c58;
LAB_101876da4:
                  *(long *)(lVar27 + 0x30) = lVar32;
                  puVar19 = *(uint **)(lVar27 + 0x38);
                }
                if (puVar19 == puVar31) {
                  *(long *)(lVar27 + 0x38) = lVar25;
                }
                puVar23[0] = 0;
                puVar23[1] = 0;
                if ((*puVar23 & 1) == 0) {
                  func_0x000108a07a20(&UNK_10b261958);
                  goto LAB_101877ef8;
                }
                if ((byte)((byte)*puVar31 | 2) == 3) {
                  *(long *)(lVar27 + 0x48) = *(long *)(lVar27 + 0x48) + -1;
                }
                *(long *)(lVar27 + 0x40) = *(long *)(lVar27 + 0x40) + -1;
                plVar13 = *(long **)(puVar23 + 6);
                if (((char)*(undefined8 *)puVar31 != '\x04') &&
                   ((char)*(undefined8 *)puVar31 == '\x02')) {
                  if (*(long *)(puVar23 + 4) == 0) {
                    lVar32 = *plVar13;
                    *plVar13 = lVar32 + -1;
                    LORelease();
                    if (lVar32 == 1) {
                      DataMemoryBarrier(2,1);
                      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h3b560e639c71f2f7E
                                (&stack0x00001190);
                    }
                  }
                  else {
                    (**(code **)(*(long *)(puVar23 + 4) + 0x18))(plVar13);
                  }
                }
                iVar10 = 0;
              }
              else {
                if ((char)uVar5 == '\x02') {
                  plVar13 = *(long **)(puVar23 + 6);
                  puVar33 = *(undefined8 **)(puVar23 + 4);
                  if (puVar33 == (undefined8 *)0x0) {
                    puVar14 = (undefined8 *)*plVar17;
                    plVar15 = (long *)plVar17[1];
LAB_101876d48:
                    auVar41 = (*(code *)*puVar14)(plVar15);
                    bVar30 = true;
                  }
                  else {
                    puVar14 = (undefined8 *)*plVar17;
                    plVar15 = (long *)plVar17[1];
                    if ((plVar15 != plVar13) || (puVar14 != puVar33)) goto LAB_101876d48;
                    bVar30 = false;
                    auVar41 = *(undefined1 (*) [16])(puVar23 + 4);
                  }
                  lVar32 = *(long *)(puVar23 + 4);
                  uVar28 = *(undefined8 *)puVar31;
                  plVar15 = *(long **)(puVar23 + 6);
                  *(undefined1 *)(puVar23 + 2) = 2;
                  *(undefined1 (*) [16])(puVar23 + 4) = auVar41;
                  if ((char)uVar28 == '\x02') {
                    if (lVar32 == 0) {
                      lVar32 = *plVar15;
                      *plVar15 = lVar32 + -1;
                      LORelease();
                      if (lVar32 == 1) {
                        DataMemoryBarrier(2,1);
                        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h3b560e639c71f2f7E
                                  (&stack0x00001190);
                      }
                    }
                    else {
                      (**(code **)(lVar32 + 0x18))(plVar15);
                    }
                  }
                  if (bVar30) {
                    if (puVar33 == (undefined8 *)0x0) {
                      lVar32 = *plVar13;
                      *plVar13 = lVar32 + -1;
                      LORelease();
                      if (lVar32 == 1) {
                        DataMemoryBarrier(2,1);
                        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h3b560e639c71f2f7E
                                  (&stack0x00000d38);
                      }
                    }
                    else {
                      (*(code *)puVar33[3])(plVar13);
                    }
                  }
                }
                else {
                  auVar41 = (**(code **)*plVar17)(plVar17[1]);
                  lVar32 = *(long *)(puVar23 + 4);
                  uVar28 = *(undefined8 *)puVar31;
                  plVar13 = *(long **)(puVar23 + 6);
                  *(undefined1 *)(puVar23 + 2) = 2;
                  *(undefined1 (*) [16])(puVar23 + 4) = auVar41;
                  if ((char)uVar28 == '\x02') {
                    if (lVar32 == 0) {
                      lVar32 = *plVar13;
                      *plVar13 = lVar32 + -1;
                      LORelease();
                      if (lVar32 == 1) {
                        DataMemoryBarrier(2,1);
                        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h3b560e639c71f2f7E
                                  (&stack0x00001190);
                      }
                    }
                    else {
                      (**(code **)(lVar32 + 0x18))(plVar13);
                    }
                  }
                }
                iVar10 = 1;
              }
              uVar11 = *(ulong *)(lVar27 + 0x48);
              if (*(ulong *)(lVar27 + 0x40) <= uVar11) {
                uVar11 = 0xffffffffffffffff;
              }
              *(ulong *)(lVar27 + 0x10) = uVar11;
            }
            else {
              iVar10 = 2;
              uVar11 = *(ulong *)(lVar27 + 0x48);
              if (*(ulong *)(lVar27 + 0x40) <= uVar11) {
                uVar11 = 0xffffffffffffffff;
              }
              *(ulong *)(lVar27 + 0x10) = uVar11;
            }
            if ((((bVar8 & 1) == 0) &&
                ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
                 0x7fffffffffffffff) != 0)) && (uVar11 = func_0x000108a82c0c(), (uVar11 & 1) == 0))
            {
              *(undefined1 *)(lVar27 + 0x20) = 1;
            }
            _pthread_mutex_unlock(*puVar44);
            if (iVar10 != 0) {
              if (iVar10 == 1) goto LAB_101876fd4;
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s__108add0bf,&stack0x00001180,&UNK_10b261940);
              goto LAB_101877ef8;
            }
            lVar27 = unaff_x19[0x1bb];
            uVar28 = 0;
            if (lVar27 != 0) {
              FUN_10193c2d0(lVar27);
              _free(lVar27);
              uVar28 = 0;
            }
          }
          unaff_x19[0x1bb] = uVar28;
          in_stack_000008d8 = (undefined8 *)unaff_x19[0x174];
          _memcpy(&stack0x00001180,puVar29,0x228);
          unaff_x19[0x174] = 0x8000000000000000;
          if (in_stack_000008d8 == (undefined8 *)0x8000000000000000) break;
        } while( true );
      }
      func_0x000108a07a20(&UNK_10b26a470);
    }
    else {
      func_0x0001087c9084(1,lVar25);
    }
  }
  else {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ce9e0f,0x28,&UNK_10b269400);
  }
  goto LAB_101877ef8;
LAB_1018771dc:
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
     (((bRam000000010b6273a8 - 1 < 2 ||
       ((bRam000000010b6273a8 != 0 &&
        (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0956f36076bff966E
                           ), cVar9 != '\0')))) &&
      (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0956f36076bff966E
                          ), (uVar11 & 1) != 0)))) {
    puVar43 = unaff_x19 + 4;
    puVar44 = (undefined8 *)
              &
              __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
    ;
    puVar45 = &stack0x000008d8;
    in_stack_000001d0 = &stack0x00000268;
    in_stack_000001d8 = &UNK_10b25d1e8;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0956f36076bff966E
               ,&stack0x00000d30);
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar3 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_10b3c24c8;
      }
      puVar4 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar4 = &UNK_109adfc03;
      }
      iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000b08);
      if (iVar10 != 0) {
        (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00001180);
      }
    }
  }
  else if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
          (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    in_stack_00000080 =
         *(undefined8 *)
          (
          ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0956f36076bff966E
          + 0x20);
    in_stack_00000088 =
         *(undefined8 *)
          (
          ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h0956f36076bff966E
          + 0x28);
    in_stack_00000078 = 2;
    puVar3 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_10b3c24c8;
    }
    puVar4 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar4 = &UNK_109adfc03;
    }
    iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000078);
    if (iVar10 != 0) {
      puVar43 = unaff_x19 + 4;
      puVar44 = (undefined8 *)
                &
                __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      puVar45 = &stack0x000008d8;
      (**(code **)(puVar3 + 0x20))(puVar4,&stack0x00001180);
    }
  }
  FUN_10195079c(&stack0x000008d8);
  in_stack_000008d8 = puVar33;
  goto LAB_101877984;
LAB_101876a60:
  if (plVar13 != (long *)0x0) {
    _free(plVar13);
  }
  uVar11 = *(ulong *)(lVar27 + 0x180);
  plVar15 = *(long **)(lVar27 + 0x188);
  plVar13 = plVar7;
  goto joined_r0x000101876994;
LAB_1018779cc:
  _memcpy(&stack0x00000b08,&stack0x00000d30,0x228);
  _memcpy(&stack0x00000488,&stack0x00000b08,0x228);
  if (puVar26 == (undefined8 *)0x8000000000000001) {
LAB_101876fd4:
    *(undefined1 *)(unaff_x19 + 0x1bc) = 3;
    *(undefined1 *)(unaff_x19 + 0x1bd) = 3;
    *(undefined1 *)(unaff_x19 + 0x1be) = 3;
    *(undefined1 *)(unaff_x19 + 0x1bf) = 3;
    *(undefined1 *)(unaff_x19 + 0x1c0) = 3;
    uVar28 = 1;
    uVar12 = 7;
    goto LAB_101877d44;
  }
LAB_101877a84:
  _memcpy(&stack0x000006b0,&stack0x00000488,0x228);
  if (unaff_x19[0x174] != -0x8000000000000000) {
    if (unaff_x19[0x174] != 0) {
      _free(*puVar29);
    }
    FUN_10194f584(unaff_x19 + 0x17d);
    lVar27 = unaff_x19[0x177];
    if (lVar27 != -0x7fffffffffffffff) {
      if ((lVar27 != -0x8000000000000000) && (lVar27 != 0)) {
        _free(unaff_x19[0x178]);
      }
      if ((unaff_x19[0x17a] != -0x8000000000000000) && (unaff_x19[0x17a] != 0)) {
        _free(unaff_x19[0x17b]);
      }
    }
  }
  lVar27 = unaff_x19[0x1bb];
  if (lVar27 != 0) {
    FUN_10193c2d0(lVar27);
    _free(lVar27);
  }
  puVar29 = (undefined8 *)0x8000000000000020;
  if (puVar26 != (undefined8 *)0x8000000000000000) {
    _memcpy(&stack0x000008e0,&stack0x000006b0,0x228);
    if (puVar26 != (undefined8 *)0x0) {
      _free(0);
    }
    FUN_10194f584(&stack0x00000920);
    if (in_stack_000008f0 != -0x7fffffffffffffff) {
      if ((in_stack_000008f0 != -0x8000000000000000) && (in_stack_000008f0 != 0)) {
        _free(in_stack_000008f8);
      }
      if ((in_stack_00000908 != -0x8000000000000000) && (in_stack_00000908 != 0)) {
        _free(in_stack_00000910);
      }
    }
    puVar29 = (undefined8 *)0x8000000000000016;
    in_stack_000008d8 = puVar26;
  }
  *(undefined1 *)((long)unaff_x19 + 0xde2) = 0;
  *(undefined2 *)(unaff_x19 + 0x1bc) = 1;
  FUN_101969f6c(unaff_x19 + 0xe7);
  if (puVar26 == (undefined8 *)0x8000000000000000) {
    in_stack_00000008 = unaff_x19[0xe4];
    in_stack_00000010 = unaff_x19[0xe5];
    in_stack_00000000 = unaff_x19[0xe6];
  }
  else if (unaff_x19[0xe4] != 0) {
    _free(unaff_x19[0xe5]);
  }
  *(undefined2 *)((long)unaff_x19 + 0xde9) = 0;
  *(undefined1 *)(unaff_x19 + 0x1bd) = 1;
  FUN_10196bf2c(unaff_x19 + 0xa0);
  *(undefined1 *)(unaff_x19 + 0x1be) = 1;
  *(undefined1 *)(unaff_x19 + 0x1bf) = 1;
  if (puVar26 != (undefined8 *)0x8000000000000000) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000f58,s__failed_to_queue_MCP_refresh_for_108ac9ad6,&stack0x00001180);
    plVar17 = (long *)_malloc(0x18);
    if (plVar17 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
    else {
      *plVar17 = (long)puVar43;
      plVar17[1] = (long)puVar44;
      plVar17[2] = (long)puVar45;
      puVar26 = (undefined8 *)_malloc(0x18);
      if (puVar26 != (undefined8 *)0x0) {
        *puVar26 = plVar17;
        puVar26[1] = &UNK_10b25d268;
        *(undefined1 *)(puVar26 + 2) = 0x28;
        FUN_10195079c(&stack0x000008d8);
        puVar42 = (undefined1 *)((long)puVar26 + 1);
        *(undefined1 *)((long)unaff_x19 + 0xe01) = 0;
        lVar27 = *(long *)unaff_x19[0x23];
        *(long *)unaff_x19[0x23] = lVar27 + -1;
        LORelease();
        in_stack_000008d8 = puVar29;
        in_stack_000008f0 = in_stack_00000000;
        goto joined_r0x000101877d18;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    }
LAB_101877ef8:
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x101877efc);
    (*pcVar16)();
  }
  if (in_stack_00000008 != 0) {
    _free(in_stack_00000010);
  }
  puVar42 = (undefined1 *)0x0;
  *(undefined1 *)((long)unaff_x19 + 0xe01) = 0;
  lVar27 = *(long *)unaff_x19[0x23];
  *(long *)unaff_x19[0x23] = lVar27 + -1;
  LORelease();
joined_r0x000101877d18:
  if (lVar27 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x23);
  }
  *(undefined1 *)(unaff_x19 + 0x1c0) = 1;
  FUN_10196ae78(plVar22);
  if (puVar42 != (undefined1 *)0x0) {
    in_stack_000001d0 = puVar42;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
        ((bRam000000010b6273d8 - 1 < 2 ||
         ((bRam000000010b6273d8 != 0 &&
          (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8887867706e048d9E
                             ), cVar9 != '\0')))))) &&
       (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8887867706e048d9E
                           ), (uVar11 & 1) != 0)) {
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8887867706e048d9E
                 ,&stack0x00001180);
      lVar27 = 
      ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8887867706e048d9E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar44 = *(undefined8 **)
                   (
                   ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8887867706e048d9E
                   + 0x20);
        puVar45 = *(undefined1 **)
                   (
                   ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8887867706e048d9E
                   + 0x28);
        puVar43 = (undefined8 *)0x2;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x00000f58);
        if (iVar10 != 0) {
          in_stack_000008f8 = *(long *)(lVar27 + 0x60);
          in_stack_00000900 = *(undefined8 *)(lVar27 + 0x68);
          in_stack_000008d8 = (undefined8 *)0x1;
          if (*(long *)(lVar27 + 0x50) == 0) {
            in_stack_000008d8 = (undefined8 *)0x2;
          }
          in_stack_00000920 = *(undefined4 *)(lVar27 + 8);
          in_stack_00000924 = *(undefined4 *)(lVar27 + 0xc);
          in_stack_000008f0 = 1;
          if (in_stack_000008f8 == 0) {
            in_stack_000008f0 = 2;
          }
          in_stack_00000930 = &stack0x00000d30;
          in_stack_00000928 = s__108b39f4f;
          (**(code **)(puVar3 + 0x20))(puVar4,&stack0x000008d8);
          in_stack_00000908 = 2;
          in_stack_00000910 = puVar44;
          in_stack_00000918 = puVar45;
        }
      }
    }
    else {
      lVar27 = 
      ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8887867706e048d9E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_000001c0 =
             *(undefined8 **)
              (
              ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8887867706e048d9E
              + 0x20);
        in_stack_000001c8 =
             *(undefined1 **)
              (
              ___ZN16codex_app_server11mcp_refresh25queue_best_effort_refresh28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8887867706e048d9E
              + 0x28);
        in_stack_000001b8 = 2;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar3 + 0x18))(puVar4,&stack0x000001b8);
        puVar42 = in_stack_000001c8;
        puVar26 = in_stack_000001c0;
        lVar32 = in_stack_000001b8;
        if (iVar10 != 0) {
          in_stack_000008f8 = *(long *)(lVar27 + 0x60);
          in_stack_00000900 = *(undefined8 *)(lVar27 + 0x68);
          in_stack_000008d8 = (undefined8 *)0x1;
          if (*(long *)(lVar27 + 0x50) == 0) {
            in_stack_000008d8 = (undefined8 *)0x2;
          }
          in_stack_00000920 = *(undefined4 *)(lVar27 + 8);
          in_stack_00000924 = *(undefined4 *)(lVar27 + 0xc);
          puVar43 = (undefined8 *)&stack0x00000d30;
          puVar44 = (undefined8 *)&DAT_1061c2098;
          in_stack_000008f0 = 1;
          if (in_stack_000008f8 == 0) {
            in_stack_000008f0 = 2;
          }
          in_stack_00000930 = &stack0x00000f58;
          in_stack_00000928 = s__108b39f4f;
          (**(code **)(puVar3 + 0x20))(puVar4,&stack0x000008d8);
          in_stack_00000908 = lVar32;
          in_stack_00000910 = puVar26;
          in_stack_00000918 = puVar42;
        }
      }
    }
    if (((ulong)in_stack_000001d0 & 3) == 1) {
      puVar26 = (undefined8 *)(in_stack_000001d0 + -1);
      uVar28 = *puVar26;
      puVar29 = *(undefined8 **)(in_stack_000001d0 + 7);
      pcVar16 = (code *)*puVar29;
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(uVar28);
      }
      if (puVar29[1] != 0) {
        _free(uVar28);
      }
      _free(puVar26);
    }
  }
  *(undefined2 *)(unaff_x19 + 0xb) = 0;
  puVar26 = (undefined8 *)unaff_x19[1];
  if (puVar26 == (undefined8 *)unaff_x19[3]) goto LAB_1018775cc;
  goto LAB_101875eac;
}

