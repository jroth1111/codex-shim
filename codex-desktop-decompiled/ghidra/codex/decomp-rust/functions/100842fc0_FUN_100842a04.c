
/* WARNING: Removing unreachable block (ram,0x0001008417f8) */
/* WARNING: Removing unreachable block (ram,0x0001008442e4) */
/* WARNING: Removing unreachable block (ram,0x000100844098) */
/* WARNING: Removing unreachable block (ram,0x0001008442fc) */
/* WARNING: Removing unreachable block (ram,0x0001008443bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100842a04(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long unaff_x19;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long unaff_x25;
  long unaff_x26;
  short *psVar22;
  uint uVar23;
  undefined8 *unaff_x28;
  long lVar24;
  char in_wzr;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined *in_stack_00000090;
  undefined8 *in_stack_000000a0;
  undefined4 uStack00000000000000b0;
  undefined1 *puStack00000000000000c0;
  undefined8 in_stack_000000d0;
  undefined8 *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long *in_stack_00000140;
  undefined1 uStack0000000000000148;
  undefined1 uStack0000000000000149;
  undefined2 uStack000000000000014a;
  undefined4 uStack000000000000014c;
  long *in_stack_00000150;
  undefined1 *in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 *in_stack_00000168;
  long in_stack_000006a0;
  long in_stack_000006c8;
  long in_stack_000006d0;
  char *pcVar29;
  long *in_stack_00000738;
  undefined1 *in_stack_00000740;
  undefined2 in_stack_000018b2;
  undefined4 in_stack_000018b4;
  undefined1 in_stack_000018b8;
  undefined1 in_stack_000018b9;
  undefined2 in_stack_000018ba;
  undefined4 in_stack_000018bc;
  undefined2 in_stack_000018c0;
  undefined6 in_stack_000018c2;
  undefined2 in_stack_000018c8;
  undefined6 in_stack_000018ca;
  undefined2 in_stack_000018d0;
  undefined6 in_stack_000018d2;
  long in_stack_000018e8;
  undefined2 uVar30;
  uint uVar31;
  undefined6 uVar32;
  long in_stack_00002478;
  undefined *in_stack_00002560;
  long *in_stack_00002568;
  undefined1 *in_stack_00002570;
  undefined8 in_stack_00002578;
  long *in_stack_00002580;
  undefined8 *in_stack_00002588;
  ulong in_stack_00002590;
  ulong uVar33;
  undefined8 in_stack_00002598;
  undefined8 in_stack_000025a0;
  undefined8 in_stack_000025a8;
  undefined8 in_stack_000025b0;
  undefined8 in_stack_000025b8;
  undefined8 in_stack_000025c0;
  undefined8 in_stack_000025c8;
  undefined8 in_stack_000025d0;
  undefined8 in_stack_000025d8;
  undefined8 in_stack_000025e0;
  long in_stack_000025e8;
  undefined8 in_stack_000025f0;
  undefined8 in_stack_000025f8;
  undefined8 in_stack_00002600;
  undefined8 in_stack_00002608;
  undefined8 in_stack_00002610;
  undefined8 in_stack_00002618;
  undefined8 in_stack_00002620;
  undefined8 in_stack_00002628;
  undefined8 in_stack_00002630;
  undefined8 in_stack_00002638;
  undefined1 *in_stack_000027d0;
  short in_stack_00002a70;
  undefined1 *in_stack_00002c00;
  char *in_stack_00002c70;
  long *in_stack_00002c78;
  undefined1 *in_stack_00002c80;
  undefined6 in_stack_00002c88;
  undefined6 uVar34;
  undefined2 in_stack_00002c8e;
  uint6 in_stack_00002c90;
  undefined2 in_stack_00002c96;
  uint6 in_stack_00002c98;
  undefined2 in_stack_00002c9e;
  undefined8 in_stack_00002cc0;
  long *in_stack_00002cd8;
  byte in_stack_00002ce8;
  char *pcVar35;
  long *in_stack_00003140;
  undefined1 *in_stack_00003148;
  undefined8 in_stack_00003150;
  undefined1 *in_stack_00003220;
  byte bVar36;
  undefined1 *in_stack_00003320;
  undefined8 in_stack_00003328;
  undefined8 *in_stack_00003330;
  undefined *puVar37;
  undefined1 *puVar38;
  
  puVar11 = &stack0x00002a30;
  FUN_100812b48(&stack0x00001ef0);
  uVar19 = CONCAT26(in_stack_00002c8e,in_stack_00002c88);
  uVar23 = (uint)*(ushort *)(unaff_x25 + 0x40);
  *(ushort *)(unaff_x26 + 0x4d8) = *(ushort *)(unaff_x25 + 0x40);
  uVar31 = (uint)(CONCAT26(in_stack_00002c96,in_stack_00002c90) >> 0x20);
  if (((in_stack_00002c90 & 1) != 0) &&
     (in_stack_00003220 = (undefined1 *)(ulong)uVar31, in_stack_000027d0 = in_stack_00003220,
     0xffbfff < uVar31 - 0x4000)) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cb0600,0x5e,&UNK_10b223260);
    goto LAB_1008447d0;
  }
  in_stack_000000d0 = CONCAT44(in_stack_000000d0._4_4_,uVar23);
  puStack00000000000000c0 = in_stack_00003220;
  if (((in_stack_00002c98 & 1) != 0) &&
     (puStack00000000000000c0 =
           (undefined1 *)(CONCAT26(in_stack_00002c9e,in_stack_00002c98) >> 0x20),
     in_stack_000027d0 == (undefined1 *)0x0)) {
    FUN_107c05cb8(&UNK_10b3fb540);
    goto LAB_1008447d0;
  }
  in_stack_000000a0 = (undefined8 *)CONCAT44(in_stack_000000a0._4_4_,(int)in_stack_00002c90);
  puVar20 = (undefined8 *)((ulong)in_stack_00002c70 & 0xffffffff);
  in_stack_00000090 = (undefined *)CONCAT44(in_stack_00000090._4_4_,(uint)in_stack_00002ce8);
  pcVar29 = in_stack_00002c70;
  plVar9 = in_stack_00002c78;
  puVar38 = in_stack_00002c80;
  uVar34 = in_stack_00002c88;
  if (uVar23 != 2) {
    FUN_101144b20(&stack0x000018b0,&stack0x00002a70);
    pcVar29 = (char *)CONCAT17(in_stack_000018b9,
                               CONCAT16(in_stack_000018b8,
                                        CONCAT42(in_stack_000018b4,in_stack_000018b2)));
    plVar9 = (long *)CONCAT26(in_stack_000018c0,CONCAT42(in_stack_000018bc,in_stack_000018ba));
    puVar38 = (undefined1 *)CONCAT26(in_stack_000018c8,in_stack_000018c2);
    uVar34 = in_stack_000018ca;
    in_stack_00002c8e = in_stack_000018d0;
  }
  uVar32 = SUB86(plVar9,0);
  uVar33 = (ulong)pcVar29 >> 0x30;
  uVar19 = CONCAT44((int)((ulong)uVar19 >> 0x20),(int)in_stack_00002c88);
  puVar10 = (undefined8 *)CONCAT44(uVar31,(int)in_stack_00002c90);
  lVar16 = CONCAT44((int)puStack00000000000000c0,(int)in_stack_00002c98);
  plVar17 = (long *)0x4;
  puVar6 = (undefined1 *)FUN_1007efd48(&stack0x00002678,&stack0x00001ef0);
  if (((uint)puVar6 & 0xff) == 0xf) {
    _memcpy(&stack0x00001ef0,&stack0x00002640,0x3f0);
    uVar26 = *(undefined8 *)(unaff_x19 + 0x4d0);
    lVar24 = *(long *)(unaff_x19 + 0x4c8);
    uVar13 = *(ulong *)(unaff_x19 + 0x4e0);
    *(undefined1 *)(unaff_x19 + 0x5f2) = 0;
    pcVar35 = (char *)unaff_x28[0x3e];
    __ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_7try_new14streams_config17hd93fa91267f1dfbbE
              (&stack0x00003220,&stack0x00003030);
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      lVar18 = lVar16 << 5;
      lVar7 = _malloc(lVar18);
      if (lVar7 == 0) {
        func_0x0001087c9084(8,lVar18);
        goto LAB_1008447d0;
      }
      lVar15 = 0;
      puVar20 = puVar10;
      puVar21 = (undefined8 *)(lVar7 + 0x10);
      do {
        if (lVar18 == 0) break;
        auVar27 = (**(code **)(puVar20[1] + 0x30))(*puVar20);
        lVar15 = lVar15 + 1;
        *(undefined1 (*) [16])(puVar21 + -2) = auVar27;
        puVar2 = puVar20 + 3;
        uVar25 = puVar20[2];
        puVar20 = puVar20 + 4;
        puVar21[1] = *puVar2;
        *puVar21 = uVar25;
        lVar18 = lVar18 + -0x20;
        puVar21 = puVar21 + 4;
      } while (lVar16 != lVar15);
    }
    puVar20 = (undefined8 *)&stack0x00001ef0;
    __ZN14rama_http_core2h25proto7streams7streams5Inner7try_new17hea367c8fb18f10b4E
              (&stack0x00003310,0,&stack0x00003340,&stack0x000032d0);
    bVar36 = (byte)puVar11;
    if (bVar36 != 4) {
      _uStack00000000000000b0 = (long *)((ulong)puVar11 >> 0x20);
      if ((in_stack_00002a70 != 2) && ((long *)0x8 < in_stack_00002cd8)) {
        _free(in_stack_00002cc0);
      }
      if ((lVar24 != 0) && (5 < uVar13)) {
        _free(uVar26);
      }
      FUN_100e71724(&stack0x00003068);
      FUN_100dc2b64(&stack0x00001ef0);
      in_stack_00002cd8 = (long *)&UNK_10b208fd0;
      uVar23 = (uint)bVar36;
      puVar6 = (undefined1 *)((ulong)puVar11 >> 8 & 0xff);
      puStack00000000000000c0 = in_stack_00003320;
      if (uVar23 == 1 || bVar36 == 0) {
        in_stack_00002cd8 = (long *)&UNK_10b208fd0;
        in_stack_000000a0 = in_stack_00003330;
        in_stack_000000d0 = in_stack_00003328;
        if (uVar23 == 0) {
          in_stack_00002cd8 = (long *)0xb208fd0;
          in_stack_000000a0 = in_stack_00003330;
          in_stack_000000d0 = in_stack_00003328;
        }
      }
      else {
        in_stack_000000a0 = in_stack_00003330;
        in_stack_000000d0 = in_stack_00003328;
        if (uVar23 == 2) {
          in_stack_00002cd8 =
               (long *)__ZN3std2io5error5Error3new17h29bf53227769a2d6E(puVar6,&stack0x00001ef0);
                    /* WARNING: Read-only address (ram,0x00010b208fd0) is written */
                    /* WARNING: Read-only address (ram,0x00010b208fe0) is written */
                    /* WARNING: Read-only address (ram,0x00010b209268) is written */
          uVar23 = 4;
          in_stack_000000a0 = in_stack_00003330;
          in_stack_000000d0 = in_stack_00003328;
        }
      }
      goto LAB_100843498;
    }
    puVar37 = (undefined *)0x1;
    puVar38 = (undefined1 *)0x0;
    plVar8 = (long *)_malloc(0x40);
    if (plVar8 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
      goto LAB_1008447d0;
    }
    plVar8[1] = 1;
    *plVar8 = 1;
    plVar8[3] = 0;
    plVar8[2] = 0;
    plVar8[5] = 0;
    plVar8[4] = 8;
    plVar8[7] = 0;
    plVar8[6] = 0;
    in_stack_00000090 = &UNK_10b208fd0;
    __ZN7tracing4span4Span7current17h348f9350075e824bE(&stack0x000032d0);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
        ((bRam000000010b636840 - 1 < 2 ||
         ((bRam000000010b636840 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_7try_new10__CALLSITE17h06cb061659e8cbf2E
                             ), cVar4 != '\0')))))) &&
       (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN14rama_http_core2h25proto10connection27Connection_LT_T_C_P_C_B_GT_7try_new10__CALLSITE17h06cb061659e8cbf2E
                          ), iVar5 != 0)) {
      FUN_10075259c(&stack0x00003310,&stack0x00003220);
      puVar37 = &UNK_10b208fd0;
      puVar38 = in_stack_00003320;
    }
    else {
      puVar11 = (undefined1 *)0x2;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
        __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00003340,&stack0x00003220);
      }
    }
    if (puVar11 == (undefined1 *)0x2) {
      FUN_100dddd8c(&stack0x00003220);
    }
    else {
      FUN_1061c1edc(&stack0x00003340);
      if (lVar16 != 2) {
        (**(code **)(puVar38 + 0x48))(puVar37,&stack0x00003328,&stack0x00003340);
      }
    }
    uVar31 = (uint)((ulong)in_stack_00002c70 >> 0x20);
    _memcpy(&stack0x00002c70,&stack0x00001f20,0x3c0);
    puVar20 = (undefined8 *)&stack0x00003030;
    if ((lVar24 != 0) && (5 < uVar13)) {
      _free(uVar26);
    }
    FUN_100e71724(&stack0x00003068);
    _memcpy(&stack0x000018e0,&stack0x00002c70,0x3c0);
    in_stack_000018d0 = (undefined2)in_stack_00002c88;
    in_stack_000018d2 = (undefined6)((ulong)uVar19 >> 0x10);
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
              (&UNK_10b208fe0,extraout_x1,1000000000);
                    /* WARNING: Read-only address (ram,0x00010b208fe0) is written */
                    /* WARNING: Read-only address (ram,0x00010b208fd0) is written */
                    /* WARNING: Read-only address (ram,0x00010b208fe0) is written */
    _UNK_10b209268 = 0x71;
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(&UNK_10b208fe0,0);
                    /* WARNING: Read-only address (ram,0x00010b209268) is written */
                    /* WARNING: Read-only address (ram,0x00010b208fe0) is written */
                    /* WARNING: Read-only address (ram,0x00010b208fe0) is written */
                    /* WARNING: Read-only address (ram,0x00010b209268) is written */
                    /* WARNING: Read-only address (ram,0x00010b208fd0) is written */
    _UNK_10b208fd0 = 1;
    lVar16 = *plVar8;
    *plVar8 = lVar16 + 1;
    if (lVar16 < 0) goto LAB_1008447d0;
    puVar11 = (undefined1 *)0x0;
    plVar14 = (long *)&stack0x00001ef0;
    _memcpy(&stack0x00001ef0,&stack0x000018b0,0x5c0);
    in_stack_000000a0 = puVar10;
    puStack00000000000000c0 = in_stack_00002c80;
    in_stack_000000d0 = uVar19;
    plVar9 = plVar8;
    puVar38 = puVar11;
    if (*(int *)(unaff_x19 + 0x508) == 1) {
      iVar5 = *(int *)(unaff_x19 + 0x50c);
      if (iVar5 < 0) {
        uVar23 = 3;
      }
      else {
        pcVar29 = (char *)(in_stack_00002478 + 0x10);
        if (*pcVar29 == '\0') {
          *pcVar29 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar29,extraout_x1_00,1000000000);
        }
        auVar28 = __ZN14rama_http_core2h25proto7streams4recv4Recv28set_target_connection_window17h0b93032c248265a8E
                            (in_stack_00002478 + 0xb8,iVar5,in_stack_00002478 + 0x180);
        if (*pcVar29 == '\x01') {
          *pcVar29 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar29,0);
        }
        if ((auVar28._0_8_ & 1) == 0) goto LAB_100844408;
        uVar23 = 2;
        uVar31 = auVar28._8_4_;
      }
      _uStack00000000000000b0 = (long *)(ulong)uVar31;
      pcVar29 = "";
      FUN_100d615cc(&stack0x00001ef0);
      FUN_100d04b78(&stack0x00002c70);
      in_stack_00002cd8 = (long *)&stack0x00001ef0;
      puVar6 = (undefined1 *)0xd;
      in_stack_00002c00 = in_stack_00002c80;
      goto LAB_100843498;
    }
LAB_100844408:
    pcVar29 = "";
    in_stack_00000090 = &UNK_10b208fd0;
    in_stack_00003150 = CONCAT26(in_stack_00002c8e,uVar34);
    uVar23 = (uint)(byte)in_stack_00002c70;
    puVar6 = (undefined1 *)((ulong)in_stack_00002c70 >> 8 & 0xff);
    uVar30 = (undefined2)((ulong)in_stack_00002c70 >> 0x10);
    _uStack00000000000000b0 = (long *)(ulong)uVar31;
    _memcpy(&stack0x00000140,&stack0x00001f20,0x590);
    *(undefined1 *)(unaff_x19 + 0x5f5) = 0;
    *(undefined4 *)(unaff_x19 + 0x5f1) = 0;
    _memcpy(&stack0x00000730,&stack0x00000140,0x590);
    *(undefined1 *)(unaff_x19 + 0x5f0) = 1;
  }
  else {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b637200 - 1 < 2 ||
         ((bRam000000010b637200 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98bbe7a375e909ebE
                             ), cVar4 != '\0')))) &&
        (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98bbe7a375e909ebE
                            ), (uVar13 & 1) != 0)))) {
      pcVar29 = &stack0x00002ba7;
      plVar9 = (long *)&
                       __ZN82__LT_rama_http_core__h2__codec__error__UserError_u20_as_u20_core__fmt__Display_GT_3fmt17h6902e26fbc02cc12E
      ;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98bbe7a375e909ebE
                 ,&stack0x00001ef0);
      puVar10 = 
      ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98bbe7a375e909ebE
      ;
      pcVar35 = s_5h2_client__invalid_SETTINGS_fra_108ac87f6;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar37 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar37 = &UNK_10b3c24c8;
        }
        puVar1 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar37 + 0x18))(puVar1,&stack0x000018b0);
        puVar20 = puVar10;
        if (iVar5 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (puVar10,puVar1,puVar37,&stack0x000018b0,&stack0x00001ef0);
        }
      }
    }
    else {
      puVar10 = 
      ___ZN14rama_http_core2h26client23Connection_LT_T_C_B_GT_10handshake228__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98bbe7a375e909ebE
      ;
      pcVar35 = in_stack_00002c70;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar37 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar37 = &UNK_10b3c24c8;
        }
        puVar1 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar37 + 0x18))(puVar1,&stack0x00002ba8);
        puVar20 = puVar10;
        if (iVar5 != 0) {
          pcVar29 = &stack0x00002ba7;
          plVar9 = (long *)&
                           __ZN82__LT_rama_http_core__h2__codec__error__UserError_u20_as_u20_core__fmt__Display_GT_3fmt17h6902e26fbc02cc12E
          ;
          pcVar35 = s_5h2_client__invalid_SETTINGS_fra_108ac87f6;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (puVar10,puVar1,puVar37,&stack0x000018b0,&stack0x00001ef0);
        }
      }
    }
    FUN_100e71724(&stack0x00002ab0);
    if ((uVar23 != 2) && ((long *)0x8 < in_stack_00002cd8)) {
      _free(in_stack_00002cc0);
    }
    FUN_100dc2b64(&stack0x00002640);
    uVar23 = 3;
    _uStack00000000000000b0 = in_stack_00002cd8;
LAB_100843498:
    if (((((*(byte *)((long)unaff_x28 + 0x329) & 1) != 0) && (*(int *)(unaff_x19 + 0x510) != 2)) &&
        (*(char *)(unaff_x19 + 0x5f3) == '\x01')) &&
       ((*(short *)(unaff_x19 + 0x550) != 2 && (8 < *(ulong *)(unaff_x19 + 0x578))))) {
      _free(*(undefined8 *)(unaff_x19 + 0x560));
    }
    *(undefined1 *)(unaff_x19 + 0x5f1) = 0;
    if ((((*(byte *)(unaff_x19 + 0x5f2) & 1) != 0) && (*(long *)(unaff_x19 + 0x4c8) != 0)) &&
       (5 < *(ulong *)(unaff_x19 + 0x4e0))) {
      _free(*(undefined8 *)(unaff_x19 + 0x4d0));
    }
    plVar14 = (long *)((long)unaff_x28 + 0x329);
    lVar16 = *(long *)(unaff_x19 + 0x4f0);
    if ((lVar16 != -0x8000000000000000) && ((*(byte *)(unaff_x19 + 0x5f4) & 1) != 0)) {
      lVar7 = *(long *)(unaff_x19 + 0x4f8);
      lVar24 = *(long *)(unaff_x19 + 0x500);
      if (lVar24 != 0) {
        psVar22 = (short *)(lVar7 + 0x40);
        do {
          if (((*(uint *)(psVar22 + -0x20) < 2) && (*psVar22 != 2)) &&
             (8 < *(ulong *)(psVar22 + 0x14))) {
            _free(*(undefined8 *)(psVar22 + 8));
          }
          psVar22 = psVar22 + 0x40;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      puVar20 = unaff_x28;
      if (lVar16 != 0) {
        _free(lVar7);
      }
    }
    uVar30 = SUB82(puVar20,0);
    *(undefined4 *)plVar14 = 0;
    if ((*(byte *)(unaff_x19 + 0x5f5) & 1) != 0) {
      FUN_100deb62c(unaff_x19 + 0x480);
      func_0x000100e3c8d4(unaff_x19 + 0x4a0);
    }
    *(undefined1 *)(unaff_x19 + 0x5f5) = 0;
    _memcpy(&stack0x00000730,&stack0x00000140,0x590);
    *(undefined1 *)(unaff_x19 + 0x5f0) = 1;
    plVar17 = (long *)0x2;
    in_stack_00002c78 = in_stack_00002cd8;
    plVar8 = in_stack_00003140;
    puVar11 = in_stack_00003148;
    in_stack_00002c80 = in_stack_00002c00;
  }
  _memcpy(&stack0x00000ce0,&stack0x00000730,0x590);
  FUN_100d90f60(in_stack_000000f0);
  if (plVar17 == (long *)0x2) {
    if (uVar23 - 4 < 2) {
      in_stack_00000140 = in_stack_00002c78;
      plVar9 = (long *)_malloc(0x18);
      if (plVar9 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_1008447d0;
      }
      *plVar9 = 0;
      *(undefined1 *)(plVar9 + 2) = 6;
      puVar20 = (undefined8 *)_malloc(8);
      if (puVar20 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
        goto LAB_1008447d0;
      }
      *puVar20 = in_stack_00002c78;
      *plVar9 = (long)puVar20;
      plVar9[1] = (long)&UNK_10b212e38;
      lVar16 = *(long *)(unaff_x19 + 0x2e0);
      puStack00000000000000c0 = puVar6;
    }
    else {
      plVar14 = (long *)((ulong)_uStack00000000000000b0 & 0xffffffff);
      plVar9 = (long *)_malloc(0x18);
      if (plVar9 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_1008447d0;
      }
      *plVar9 = 0;
      *(undefined1 *)(plVar9 + 2) = 0xb;
      in_stack_00000140 = plVar9;
      puVar11 = (undefined1 *)_malloc(0x28);
      if (puVar11 == (undefined1 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
        goto LAB_1008447d0;
      }
      *puVar11 = (char)uVar23;
      puVar11[1] = (char)puVar6;
      *(undefined2 *)(puVar11 + 2) = uVar30;
      *(undefined4 *)(puVar11 + 4) = uStack00000000000000b0;
      *(long **)(puVar11 + 8) = in_stack_00002c78;
      *(undefined1 **)(puVar11 + 0x10) = puStack00000000000000c0;
      *(undefined8 *)(puVar11 + 0x18) = in_stack_000000d0;
      *(undefined8 **)(puVar11 + 0x20) = in_stack_000000a0;
      *plVar9 = (long)puVar11;
      plVar9[1] = (long)&UNK_10b238a78;
      lVar16 = *(long *)(unaff_x19 + 0x2e0);
    }
joined_r0x000100843a38:
    if (lVar16 != 4) {
      __ZN78__LT_tokio_graceful__guard__ShutdownGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h6900df02db0519f4E
                (unaff_x19 + 0x2e0);
    }
    FUN_100d89ef4(unaff_x19 + 0x2c8);
    uVar19 = 3;
    plVar8 = in_stack_00002568;
    puVar11 = in_stack_00002570;
    in_stack_00003150 = in_stack_00002578;
    plVar17 = in_stack_00002580;
    puVar10 = in_stack_00002588;
    uVar33 = in_stack_00002590;
  }
  else {
    uStack000000000000014c = uStack00000000000000b0;
    in_stack_00000158 = puStack00000000000000c0;
    in_stack_00000160 = in_stack_000000d0;
    in_stack_00000168 = in_stack_000000a0;
    uStack0000000000000148 = (char)uVar23;
    uStack0000000000000149 = (char)puVar6;
    uStack000000000000014a = uVar30;
    in_stack_00000150 = in_stack_00002c78;
    _memcpy(&stack0x00000170,&stack0x00000ce0,0x590);
    in_stack_00000140 = plVar17;
    puVar20 = (undefined8 *)_malloc(8);
    if (puVar20 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
LAB_1008447d0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008447d4);
      (*pcVar3)();
    }
    *puVar20 = 0;
    lVar16 = _calloc(0x10,1);
    if (lVar16 == 0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
      goto LAB_1008447d0;
    }
    plVar17 = (long *)_malloc(0x60);
    if (plVar17 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x60);
      goto LAB_1008447d0;
    }
    plVar17[5] = lVar16;
    plVar17[4] = lVar16;
    plVar17[7] = -0x8000000000000000;
    plVar17[6] = 1;
    plVar17[9] = 0;
    plVar17[8] = 1;
    plVar17[0xb] = 0;
    plVar17[10] = CONCAT62(uVar32,(short)uVar33);
    plVar17[1] = 1;
    *plVar17 = 1;
    plVar17[3] = (long)puVar20;
    plVar17[2] = (long)puVar20;
    lVar24 = *plVar17;
    *plVar17 = lVar24 + 1;
    if (lVar24 < 0) goto LAB_1008447d0;
    puStack00000000000000c0 = &stack0x00001ef0;
    puVar10 = (undefined8 *)_malloc(0x38);
    if (puVar10 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
      goto LAB_1008447d0;
    }
    puVar10[1] = 1;
    *puVar10 = 1;
    puVar10[3] = (ulong)puVar20 & 0xffffffffffffff00;
    puVar10[2] = 0;
    puVar10[5] = lVar16;
    puVar10[4] = 0;
    puVar10[6] = 0;
    uVar33 = (ulong)in_stack_00002c80 & 0xffffffffffffff00;
    plVar14 = (long *)_malloc(0x48);
    if (plVar14 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x48);
      goto LAB_1008447d0;
    }
    plVar14[5] = 0;
    plVar14[4] = 0;
    plVar14[7] = -0x8000000000000000;
    plVar14[6] = 0;
    plVar14[8] = 0;
    plVar14[1] = 1;
    *plVar14 = 1;
    plVar14[3] = (ulong)puVar20 & 0xffffffffffffff00;
    plVar14[2] = 0;
    lVar16 = *plVar14;
    *plVar14 = lVar16 + 1;
    if (lVar16 < 0) goto LAB_1008447d0;
    if ((*(char *)(*(long *)(unaff_x19 + 0x2d8) + 0xb8) == '\0') &&
       (*(int *)(*(long *)(unaff_x19 + 0x2d8) + 0x60) == 1000000000)) {
      _memcpy(&stack0x00001ef0,&stack0x00000140,0x5c0);
      puStack00000000000000c0 = (undefined1 *)0x0;
    }
    else {
      if (in_stack_000006a0 != 0) {
        plVar9 = (long *)_malloc(0x18);
        if (plVar9 == (long *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_1008447d0;
        }
        *plVar9 = 0;
        *(undefined2 *)(plVar9 + 2) = 0xc00;
        puVar20 = (undefined8 *)_malloc(0x10);
        if (puVar20 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
          goto LAB_1008447d0;
        }
        *puVar20 = &UNK_108cb131f;
        puVar20[1] = 0x5c;
        *plVar9 = (long)puVar20;
        plVar9[1] = (long)&UNK_10b209930;
        FUN_100e633f0(&stack0x00003310);
        FUN_100e5aa64(&stack0x000032d0);
        FUN_100e572d0(&stack0x00002ab0);
        FUN_100e50a70(&stack0x00002bf0);
        FUN_10081075c(in_stack_000006c8 + 0x10,in_stack_000006d0 + 0x10,1);
        plVar14 = (long *)&stack0x00000140;
        FUN_100dc2b64(&stack0x00000140);
        FUN_100d803d8(&stack0x00000530);
        FUN_100d04b78(&stack0x00003220);
        lVar16 = *(long *)(unaff_x19 + 0x2e0);
        goto joined_r0x000100843a38;
      }
      plVar12 = (long *)_malloc(0x48);
      if (plVar12 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x48);
        goto LAB_1008447d0;
      }
      plVar12[5] = 0;
      plVar12[4] = CONCAT62(in_stack_000018d2,in_stack_000018d0);
      plVar12[7] = in_stack_000018e8;
      plVar12[6] = 0;
      plVar12[8] = 0;
      plVar12[1] = 1;
      *plVar12 = 1;
      plVar12[3] = 0;
      plVar12[2] = 0;
      lVar16 = *plVar12;
      *plVar12 = lVar16 + 1;
      if (lVar16 < 0) goto LAB_1008447d0;
      __ZN14rama_http_core5proto2h24ping7channel17he8214c6d5ff94b35E
                (&stack0x000018b0,plVar12,&stack0x00002640);
      puStack00000000000000c0 = (undefined1 *)0x1;
      in_stack_00000740 = (undefined1 *)CONCAT62(in_stack_000018d2,in_stack_000018d0);
      in_stack_00000738 = (long *)0x0;
      _memcpy(&stack0x00001288,&stack0x00000148,0x5b8);
      _memcpy(&stack0x00001ef0,&stack0x00001288,0x5c0);
    }
    _memcpy(&stack0x000018b8,&stack0x00001ef0,0x5c0);
    __ZN7tracing4span4Span7current17h348f9350075e824bE(&stack0x00003030);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b637a28 - 1 < 2 ||
         ((bRam000000010b637a28 != 0 &&
          (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core5proto2h26client22handshake_with_builder28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb94939c6d9da9b9dE
                             ), cVar4 != '\0')))))) &&
       (uVar13 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core5proto2h26client22handshake_with_builder28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb94939c6d9da9b9dE
                           ), (uVar13 & 1) != 0)) {
      FUN_10075259c(&stack0x00002c70,&stack0x00003340);
      in_stack_00000738 = plVar9;
      in_stack_00000740 = puVar38;
    }
    else {
      pcVar29 = (char *)0x2;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
        __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&stack0x00000730,&stack0x00003340);
      }
    }
    if (pcVar29 == (char *)0x2) {
      FUN_100dddd8c(&stack0x00000730);
    }
    else {
      FUN_1061c1edc(&stack0x00001ef0);
      if (pcVar35 != (char *)0x2) {
        if (((ulong)pcVar29 & 1) != 0) {
          in_stack_00000738 =
               (long *)((long)in_stack_00000738 +
                       (*(long *)(in_stack_00000740 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        }
        (**(code **)(in_stack_00000740 + 0x48))(in_stack_00000738,&stack0x00002c88,&stack0x00001ef0)
        ;
      }
    }
    plVar9 = (long *)(unaff_x19 + 0x2e0);
    _memcpy(&stack0x00001f18,&stack0x000018b0,0x638);
    plVar12 = (long *)FUN_1016eb6ac(plVar9,&stack0x00001ef0);
    if (*plVar12 == 0xcc) {
      *plVar12 = 0x84;
    }
    else {
      (**(code **)(plVar12[2] + 0x20))();
    }
    in_stack_00002610 = *(undefined8 *)(unaff_x19 + 0x308);
    in_stack_00002608 = *(undefined8 *)(unaff_x19 + 0x300);
    in_stack_00002620 = *(undefined8 *)(unaff_x19 + 0x318);
    in_stack_00002618 = *(undefined8 *)(unaff_x19 + 0x310);
    in_stack_00002630 = *(undefined8 *)(unaff_x19 + 0x328);
    in_stack_00002628 = *(undefined8 *)(unaff_x19 + 800);
    in_stack_00002638 = *(undefined8 *)(unaff_x19 + 0x330);
    in_stack_000025f0 = *(undefined8 *)(unaff_x19 + 0x2e8);
    in_stack_000025e8 = *plVar9;
    in_stack_00002600 = *(undefined8 *)(unaff_x19 + 0x2f8);
    in_stack_000025f8 = *(undefined8 *)(unaff_x19 + 0x2f0);
    uVar19 = 2;
    in_stack_000000f8 = unaff_x28[1];
    in_stack_000000f0 = *unaff_x28;
    in_stack_00002560 = in_stack_00000090;
  }
  func_0x000100e00ca0(unaff_x19 + 0x1b8);
  in_stack_000000e8[0x13] = in_stack_00002620;
  in_stack_000000e8[0x12] = in_stack_00002618;
  in_stack_000000e8[0x15] = in_stack_00002630;
  in_stack_000000e8[0x14] = in_stack_00002628;
  in_stack_000000e8[0xb] = in_stack_000025e0;
  in_stack_000000e8[10] = in_stack_000025d8;
  in_stack_000000e8[0xd] = in_stack_000025f0;
  in_stack_000000e8[0xc] = in_stack_000025e8;
  in_stack_000000e8[0xf] = in_stack_00002600;
  in_stack_000000e8[0xe] = in_stack_000025f8;
  in_stack_000000e8[0x11] = in_stack_00002610;
  in_stack_000000e8[0x10] = in_stack_00002608;
  in_stack_000000e8[3] = in_stack_000025a0;
  in_stack_000000e8[2] = in_stack_00002598;
  in_stack_000000e8[5] = in_stack_000025b0;
  in_stack_000000e8[4] = in_stack_000025a8;
  in_stack_000000e8[7] = in_stack_000025c0;
  in_stack_000000e8[6] = in_stack_000025b8;
  in_stack_000000e8[9] = in_stack_000025d0;
  in_stack_000000e8[8] = in_stack_000025c8;
  in_stack_000000e8[0x18] = puVar10;
  in_stack_000000e8[0x17] = plVar17;
  in_stack_000000e8[0x1c] = plVar8;
  in_stack_000000e8[0x1b] = in_stack_00002560;
  *in_stack_000000e8 = uVar19;
  in_stack_000000e8[1] = plVar9;
  in_stack_000000e8[0x16] = in_stack_00002638;
  in_stack_000000e8[0x19] = uVar33;
  in_stack_000000e8[0x1a] = plVar14;
  in_stack_000000e8[0x1e] = in_stack_00003150;
  in_stack_000000e8[0x1d] = puVar11;
  in_stack_000000e8[0x20] = in_stack_000000f8;
  in_stack_000000e8[0x1f] = in_stack_000000f0;
  in_stack_000000e8[0x21] = puStack00000000000000c0;
  *(undefined1 *)(unaff_x19 + 0x5f8) = 1;
  return;
}

