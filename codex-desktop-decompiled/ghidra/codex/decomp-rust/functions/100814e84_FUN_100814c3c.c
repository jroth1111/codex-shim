
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100814c3c(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char **ppcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  char **extraout_x1;
  char **extraout_x1_00;
  char ***pppcVar15;
  char **ppcVar16;
  char **ppcVar17;
  char **extraout_x8;
  char **extraout_x8_00;
  code *pcVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long unaff_x19;
  undefined *puVar23;
  undefined *puVar24;
  char **unaff_x21;
  undefined *unaff_x22;
  long *plVar25;
  char **unaff_x23;
  undefined *unaff_x24;
  undefined8 *puVar26;
  ulong uVar27;
  long unaff_x29;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  char **ppcStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined2 uStack_2f8;
  undefined1 uStack_2f6;
  char **ppcStack_2f0;
  char ***pppcStack_2e8;
  long lStack_2e0;
  undefined1 uStack_2d8;
  undefined1 uStack_2d7;
  undefined1 uStack_2d6;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined1 uStack_260;
  undefined1 auStack_251 [17];
  long lStack_1d8;
  char **ppcStack_1d0;
  char **ppcStack_1c8;
  undefined8 uStack_1c0;
  char **ppcStack_1b8;
  char *****pppppcStack_1b0;
  undefined *puStack_1a8;
  char **ppcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  char **ppcStack_188;
  ulong *****pppppuStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  ulong ****ppppuStack_168;
  char ****ppppcStack_160;
  ulong ***pppuStack_158;
  char ***pppcStack_150;
  ulong **ppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  char **ppcStack_128;
  undefined *puStack_120;
  char **ppcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_e8;
  char **ppcStack_e0;
  char **ppcStack_d8;
  undefined8 uStack_d0;
  char **ppcStack_c8;
  char *****pppppcStack_c0;
  undefined *puStack_b8;
  char **ppcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char **ppcStack_98;
  ulong *****pppppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  ulong ****ppppuStack_78;
  char ****ppppcStack_70;
  ulong ***pppuStack_68;
  char ***pppcStack_60;
  ulong **ppuStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  *(char **)(unaff_x29 + -0x58) = s_received_bytes_108ac89ff;
  *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x48;
  *(long *)(unaff_x29 + -0x68) = unaff_x29 + -0x58;
  *(undefined **)(unaff_x29 + -0x60) = &UNK_10b208fd0;
  ppcStack0000000000000060 = (char **)(unaff_x29 + -0x68);
  uStack0000000000000068 = 1;
  pppcVar15 = (char ***)&stack0x00000040;
  uStack0000000000000070 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  ppcStack0000000000000060 = (char **)(*(long *)(unaff_x19 + 0x90) - *(long *)(unaff_x19 + 0x88));
  if (unaff_x23 <= ppcStack0000000000000060) {
    *(undefined **)(unaff_x19 + 0x88) = (undefined *)((long)unaff_x23 + *(long *)(unaff_x19 + 0x88))
    ;
    if ((*(byte *)(unaff_x19 + 0x60) & 1) != 0) {
      return 0;
    }
    ppcVar16 = *(char ***)(unaff_x19 + 0x68);
    if (unaff_x23 < ppcVar16) {
      ppcVar16 = (char **)((0xffffffffffffffffU >> ((ulong)((int)LZCOUNT(ppcVar16) + 2) & 0x3f)) + 1
                          );
      if (ppcVar16 <= unaff_x23) goto LAB_100814e18;
      if ((*(byte *)(unaff_x19 + 0x61) & 1) == 0) {
        *(undefined1 *)(unaff_x19 + 0x61) = 1;
        return 0;
      }
      if (ppcVar16 < (char **)0x2001) {
        ppcVar16 = (char **)0x2000;
      }
    }
    else {
      ppcVar17 = (char **)0xffffffffffffffff;
      if (((ulong)ppcVar16 & 0x8000000000000000) == 0) {
        ppcVar17 = (char **)((long)ppcVar16 << 1);
      }
      ppcVar16 = *(char ***)(unaff_x19 + 0x70);
      if (ppcVar17 <= *(char ***)(unaff_x19 + 0x70)) {
        ppcVar16 = ppcVar17;
      }
    }
    *(char ***)(unaff_x19 + 0x68) = ppcVar16;
LAB_100814e18:
    *(undefined1 *)(unaff_x19 + 0x61) = 0;
    return 0;
  }
  auVar30 = __ZN5bytes13panic_advance17h894eeb3b0f978370E(&stack0x00000058);
  puVar24 = auVar30._8_8_;
  lVar21 = auVar30._0_8_;
  *(undefined1 *)(lVar21 + 0xd1) = 0;
  lVar20 = *(long *)(lVar21 + 0xb8);
  lVar12 = *(long *)(lVar21 + 0xc0);
  if ((ulong)(lVar12 - lVar20) < *(ulong *)(lVar21 + 0xa0)) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
              (lVar21 + 0xb0,*(ulong *)(lVar21 + 0xa0),1);
    lVar20 = *(long *)(lVar21 + 0xb8);
    lVar12 = *(long *)(lVar21 + 0xc0);
  }
  if (lVar12 == lVar20) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(lVar21 + 0xb0,0x40,1);
    lVar20 = *(long *)(lVar21 + 0xb8);
    lVar12 = *(long *)(lVar21 + 0xc0);
  }
  lStack_e8 = *(long *)(lVar21 + 0xb0) + lVar20;
  ppcStack_e0 = (char **)(lVar12 - lVar20);
  ppcStack_d8 = (char **)0x0;
  uStack_d0 = 0;
  auVar30 = FUN_1060f8cbc(lVar21,puVar24,&lStack_e8);
  ppcVar16 = ppcStack_d8;
  if ((auVar30._0_8_ & 1) != 0) {
    *(undefined1 *)(lVar21 + 0xd1) = 1;
    return 2;
  }
  if (auVar30._8_8_ != 0) {
    return 1;
  }
  if (ppcStack_e0 < ppcStack_d8) {
    pppcVar15 = (char ***)&UNK_10b209248;
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0);
    ppcVar16 = extraout_x1;
    pppppuStack_90 = (ulong *****)extraout_x8;
  }
  else {
    ppcStack_c8 = ppcStack_d8;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
      bVar10 = bRam000000010b6372f0;
      if (((1 < bRam000000010b6372f0 - 1) &&
          ((puVar24 = &
                      __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
           , bRam000000010b6372f0 == 0 ||
           (bVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                               ),
           puVar24 = &
                     __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
           , unaff_x21 = ppcVar16, bVar10 == 0)))) ||
         (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                              ,bVar10),
         puVar24 = &
                   __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
         , unaff_x23 = ppcVar16, iVar11 == 0)) goto LAB_100814f4c;
      puStack_80 = ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                   + 0x30;
      pppuStack_68 = (ulong ***)&ppcStack_c8;
      pppcStack_60 = (char ***)
                     &
                     __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      ppppcStack_70 = (char ****)&pppuStack_68;
      ppppuStack_78 = (ulong ****)s_received_bytes_108ac89ff;
      pppppcStack_c0 = (char *****)&ppppuStack_78;
      puStack_b8 = &UNK_10b208fd0;
      pppppuStack_90 = (ulong *****)&pppppcStack_c0;
      ppcStack_98 = (char **)0x1;
      uStack_88 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                 ,&ppcStack_98);
      puVar23 = 
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_50 = *(undefined **)
                      (
                      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                      + 0x20);
        uStack_48 = *(undefined8 *)
                     (
                     ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                     + 0x28);
        ppuStack_58 = (ulong **)0x5;
        unaff_x21 = ppcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          unaff_x21 = (char **)&UNK_10b3c24c8;
        }
        unaff_x22 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          unaff_x22 = &UNK_109adfc03;
        }
        iVar11 = (*(code *)unaff_x21[3])(unaff_x22,&ppuStack_58);
        puVar24 = puVar23;
        if (iVar11 == 0) goto LAB_100815154;
        pppcVar15 = (char ***)&ppuStack_58;
        goto LAB_10081502c;
      }
    }
    else {
LAB_100814f4c:
      puVar23 = 
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        unaff_x24 = &
                    __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
        ;
        uStack_a8 = *(undefined8 *)
                     (
                     ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                     + 0x20);
        uStack_a0 = *(undefined8 *)
                     (
                     ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                     + 0x28);
        ppcStack_b0 = (char **)0x5;
        unaff_x21 = ppcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          unaff_x21 = (char **)&UNK_10b3c24c8;
        }
        unaff_x22 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          unaff_x22 = &UNK_109adfc03;
        }
        iVar11 = (*(code *)unaff_x21[3])(unaff_x22,&ppcStack_b0);
        puVar24 = puVar23;
        unaff_x23 = ppcVar16;
        if (iVar11 != 0) {
          puStack_80 = ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                       + 0x30;
          ppuStack_58 = (ulong **)&ppcStack_c8;
          puStack_50 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppcStack_60 = (char ***)&ppuStack_58;
          pppuStack_68 = (ulong ***)s_received_bytes_108ac89ff;
          ppppuStack_78 = &pppuStack_68;
          ppppcStack_70 = (char ****)&UNK_10b208fd0;
          pppppuStack_90 = &ppppuStack_78;
          ppcStack_98 = (char **)0x1;
          uStack_88 = 1;
          pppcVar15 = &ppcStack_b0;
LAB_10081502c:
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (puVar23,unaff_x22,unaff_x21,pppcVar15,&ppcStack_98);
          puVar24 = puVar23;
          unaff_x23 = ppcVar16;
        }
      }
    }
LAB_100815154:
    pppppuStack_90 = (ulong *****)(*(long *)(lVar21 + 0xc0) - *(long *)(lVar21 + 0xb8));
    if (ppcVar16 <= pppppuStack_90) {
      *(undefined **)(lVar21 + 0xb8) = (undefined *)((long)ppcVar16 + *(long *)(lVar21 + 0xb8));
      if ((*(byte *)(lVar21 + 0x98) & 1) != 0) {
        return 0;
      }
      ppcVar17 = *(char ***)(lVar21 + 0xa0);
      if (ppcVar16 < ppcVar17) {
        ppcVar17 = (char **)((0xffffffffffffffffU >> ((ulong)((int)LZCOUNT(ppcVar17) + 2) & 0x3f)) +
                            1);
        if (ppcVar17 <= ppcVar16) goto LAB_1008151d4;
        if ((*(byte *)(lVar21 + 0x99) & 1) == 0) {
          *(undefined1 *)(lVar21 + 0x99) = 1;
          return 0;
        }
        if (ppcVar17 < (char **)0x2001) {
          ppcVar17 = (char **)0x2000;
        }
      }
      else {
        ppcVar16 = (char **)0xffffffffffffffff;
        if (((ulong)ppcVar17 & 0x8000000000000000) == 0) {
          ppcVar16 = (char **)((long)ppcVar17 << 1);
        }
        ppcVar17 = *(char ***)(lVar21 + 0xa8);
        if (ppcVar16 <= *(char ***)(lVar21 + 0xa8)) {
          ppcVar17 = ppcVar16;
        }
      }
      *(char ***)(lVar21 + 0xa0) = ppcVar17;
LAB_1008151d4:
      *(undefined1 *)(lVar21 + 0x99) = 0;
      return 0;
    }
  }
  ppcStack_98 = ppcVar16;
  auVar30 = __ZN5bytes13panic_advance17h894eeb3b0f978370E(&ppcStack_98);
  lVar22 = auVar30._0_8_;
  pcStack_f8 = FUN_100815240;
  *(undefined1 *)(lVar22 + 0xc1) = 0;
  lVar20 = *(long *)(lVar22 + 0xa8);
  lVar12 = *(long *)(lVar22 + 0xb0);
  puStack_130 = unaff_x24;
  ppcStack_128 = unaff_x23;
  puStack_120 = unaff_x22;
  ppcStack_118 = unaff_x21;
  puStack_110 = puVar24;
  lStack_108 = lVar21;
  puStack_100 = &stack0xfffffffffffffff0;
  if ((ulong)(lVar12 - lVar20) < *(ulong *)(lVar22 + 0x68)) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E
              (lVar22 + 0xa0,*(ulong *)(lVar22 + 0x68),1);
    lVar20 = *(long *)(lVar22 + 0xa8);
    lVar12 = *(long *)(lVar22 + 0xb0);
  }
  if (lVar12 == lVar20) {
    __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(lVar22 + 0xa0,0x40,1);
    lVar20 = *(long *)(lVar22 + 0xa8);
    lVar12 = *(long *)(lVar22 + 0xb0);
  }
  lStack_1d8 = *(long *)(lVar22 + 0xa0) + lVar20;
  ppcStack_1d0 = (char **)(lVar12 - lVar20);
  ppcStack_1c8 = (char **)0x0;
  uStack_1c0 = 0;
  auVar30 = FUN_10150a63c(lVar22 + 0x78,auVar30._8_8_,&lStack_1d8);
  ppcVar16 = ppcStack_1c8;
  if ((auVar30._0_8_ & 1) != 0) {
    *(undefined1 *)(lVar22 + 0xc1) = 1;
    return 2;
  }
  if (auVar30._8_8_ != 0) {
    return 1;
  }
  ppcVar17 = ppcStack_1d0;
  if (ppcStack_1d0 < ppcStack_1c8) {
    pppcVar15 = (char ***)&UNK_10b209248;
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0);
    ppcVar16 = extraout_x1_00;
    pppppuStack_180 = (ulong *****)extraout_x8_00;
  }
  else {
    ppcStack_1b8 = ppcStack_1c8;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bVar10 = bRam000000010b6372f0, bRam000000010b6372f0 - 1 < 2 ||
         ((bRam000000010b6372f0 != 0 &&
          (bVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                              ), bVar10 != 0)))))) &&
       (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                            ,bVar10), iVar11 != 0)) {
      puStack_170 = ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                    + 0x30;
      pppuStack_158 = (ulong ***)&ppcStack_1b8;
      pppcStack_150 =
           (char ***)
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      ppppcStack_160 = (char ****)&pppuStack_158;
      ppppuStack_168 = (ulong ****)s_received_bytes_108ac89ff;
      pppppcStack_1b0 = (char *****)&ppppuStack_168;
      puStack_1a8 = &UNK_10b208fd0;
      pppppuStack_180 = (ulong *****)&pppppcStack_1b0;
      ppcStack_188 = (char **)0x1;
      uStack_178 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                 ,&ppcStack_188);
      puVar24 = 
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_140 = *(undefined **)
                       (
                       ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                       + 0x20);
        uStack_138 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                      + 0x28);
        ppuStack_148 = (ulong **)0x5;
        ppcVar3 = ppcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          ppcVar3 = (char **)&UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar11 = (*(code *)ppcVar3[3])(puVar23,&ppuStack_148);
        if (iVar11 != 0) {
          pppcVar15 = (char ***)&ppuStack_148;
          ppcVar17 = ppcVar3;
LAB_1008153e8:
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (puVar24,puVar23,ppcVar17,pppcVar15,&ppcStack_188);
        }
      }
    }
    else {
      puVar24 = 
      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_198 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                      + 0x20);
        uStack_190 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                      + 0x28);
        ppcStack_1a0 = (char **)0x5;
        ppcVar3 = ppcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          ppcVar3 = (char **)&UNK_10b3c24c8;
        }
        puVar23 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar23 = &UNK_109adfc03;
        }
        iVar11 = (*(code *)ppcVar3[3])(puVar23,&ppcStack_1a0);
        if (iVar11 != 0) {
          puStack_170 = ___ZN14rama_http_core5proto2h12io21Buffered_LT_T_C_B_GT_17poll_read_from_io10__CALLSITE17h297048b6f4bc450bE
                        + 0x30;
          ppuStack_148 = (ulong **)&ppcStack_1b8;
          puStack_140 = &
                        __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppcStack_150 = (char ***)&ppuStack_148;
          pppuStack_158 = (ulong ***)s_received_bytes_108ac89ff;
          ppppuStack_168 = &pppuStack_158;
          ppppcStack_160 = (char ****)&UNK_10b208fd0;
          pppppuStack_180 = &ppppuStack_168;
          ppcStack_188 = (char **)0x1;
          uStack_178 = 1;
          pppcVar15 = &ppcStack_1a0;
          ppcVar17 = ppcVar3;
          goto LAB_1008153e8;
        }
      }
    }
    pppppuStack_180 = (ulong *****)(*(long *)(lVar22 + 0xb0) - *(long *)(lVar22 + 0xa8));
    if (ppcVar16 <= pppppuStack_180) {
      *(undefined **)(lVar22 + 0xa8) = (undefined *)((long)ppcVar16 + *(long *)(lVar22 + 0xa8));
      if ((*(byte *)(lVar22 + 0x60) & 1) != 0) {
        return 0;
      }
      ppcVar17 = *(char ***)(lVar22 + 0x68);
      if (ppcVar16 < ppcVar17) {
        ppcVar17 = (char **)((0xffffffffffffffffU >> ((ulong)((int)LZCOUNT(ppcVar17) + 2) & 0x3f)) +
                            1);
        if (ppcVar17 <= ppcVar16) goto LAB_100815590;
        if ((*(byte *)(lVar22 + 0x61) & 1) == 0) {
          *(undefined1 *)(lVar22 + 0x61) = 1;
          return 0;
        }
        if (ppcVar17 < (char **)0x2001) {
          ppcVar17 = (char **)0x2000;
        }
      }
      else {
        ppcVar16 = (char **)0xffffffffffffffff;
        if (((ulong)ppcVar17 & 0x8000000000000000) == 0) {
          ppcVar16 = (char **)((long)ppcVar17 << 1);
        }
        ppcVar17 = *(char ***)(lVar22 + 0x70);
        if (ppcVar16 <= *(char ***)(lVar22 + 0x70)) {
          ppcVar17 = ppcVar16;
        }
      }
      *(char ***)(lVar22 + 0x68) = ppcVar17;
LAB_100815590:
      *(undefined1 *)(lVar22 + 0x61) = 0;
      return 0;
    }
  }
  ppcStack_188 = ppcVar16;
  auVar30 = __ZN5bytes13panic_advance17h894eeb3b0f978370E(&ppcStack_188);
  puVar26 = auVar30._8_8_;
  lVar20 = auVar30._0_8_;
  if (*(char *)(lVar20 + 0x1bf) == '\x02') {
    if (*(char *)(lVar20 + 0x1be) == '\x02') {
      uStack_298 = 0x14;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      puStack_280 = &UNK_10b209220;
      puStack_278 = &UNK_108caac8e;
      uStack_268 = 0;
      uStack_270 = 5;
      uStack_260 = 0;
      FUN_100ea1868(&puStack_360,puVar26,&uStack_2a0,&puStack_280);
      if ((char)uStack_340 == '\x03') {
LAB_100815b90:
        FUN_107c05cb4(&UNK_108caab02,0x17,auStack_251,&UNK_10b234e80,&UNK_10b223528);
        goto LAB_100815bb4;
      }
      puStack_2c8 = puStack_358;
      puStack_2d0 = puStack_360;
      uStack_2b8 = uStack_348;
      uStack_2c0 = uStack_350;
      uStack_2b0 = uStack_340;
      if (((uint)uStack_340 & 0xff) != 2) {
        (**(code **)(puStack_360 + 0x20))(&uStack_2b8,puStack_358,uStack_350);
      }
    }
  }
  else if (*(char *)(lVar20 + 0x1bf) == '\x01') {
    puStack_358 = (undefined *)0x14;
    puStack_360 = (undefined *)0x0;
    uStack_348 = 0;
    uStack_350 = 0;
    lVar12 = FUN_100ea2edc(puVar26,&puStack_360);
    if ((lVar12 == 0) ||
       (uVar13 = __ZN14rama_http_core7headers21connection_keep_alive17h785ae4f9267edc20E(),
       (uVar13 & 1) == 0)) {
      if (*(char *)((long)puVar26 + 0x7a) == '\x02') {
        if (*(char *)(lVar20 + 0x1be) != '\x02') {
          uStack_298 = 0x14;
          uStack_2a0 = 0;
          uStack_288 = 0;
          uStack_290 = 0;
          puStack_280 = &UNK_10b209220;
          puStack_278 = &UNK_108cb0cad;
          uStack_268 = 0;
          uStack_270 = 10;
          uStack_260 = 0;
          FUN_100ea1868(&puStack_360,puVar26,&uStack_2a0,&puStack_280);
          if ((char)uStack_340 == '\x03') goto LAB_100815b90;
          puStack_2c8 = puStack_358;
          puStack_2d0 = puStack_360;
          uStack_2b8 = uStack_348;
          uStack_2c0 = uStack_350;
          uStack_2b0 = uStack_340;
          if (((uint)uStack_340 & 0xff) != 2) {
            (**(code **)(puStack_360 + 0x20))(&uStack_2b8,puStack_358,uStack_350);
          }
        }
      }
      else if (*(char *)((long)puVar26 + 0x7a) == '\x01') {
        *(undefined1 *)(lVar20 + 0x1be) = 2;
      }
    }
    *(undefined1 *)((long)puVar26 + 0x7a) = 1;
  }
  uStack_2f6 = *(undefined1 *)((long)puVar26 + 0x7a);
  uStack_2f8 = *(undefined2 *)(puVar26 + 0xf);
  uStack_338 = puVar26[5];
  uStack_340 = puVar26[4];
  uStack_328 = puVar26[7];
  uStack_330 = puVar26[6];
  uStack_318 = puVar26[9];
  uStack_320 = puVar26[8];
  uStack_308 = puVar26[0xb];
  uStack_310 = puVar26[10];
  puStack_358 = (undefined *)puVar26[1];
  puStack_360 = (undefined *)*puVar26;
  uStack_348 = puVar26[3];
  uStack_350 = puVar26[2];
  puVar2 = puVar26 + 0xc;
  uStack_2d8 = *(char *)(lVar20 + 0x1be) != '\x02';
  lStack_2e0 = lVar20 + 0x178;
  uStack_2d7 = *(undefined1 *)(lVar20 + 0x1ba);
  uStack_2d6 = *(undefined1 *)(lVar20 + 0x1b9);
  puStack_300 = puVar2;
  ppcStack_2f0 = ppcVar17;
  pppcStack_2e8 = pppcVar15;
  lVar12 = FUN_10081ca84(&puStack_280,&puStack_360,lVar20 + 0x10);
  puVar24 = puStack_278;
  if (puStack_280 == (undefined *)0x8000000000000003) {
    plVar25 = *(long **)(lVar20 + 400);
    if (plVar25 != (long *)0x0) {
      lVar12 = *plVar25;
      if (lVar12 != 0) {
        puVar26 = (undefined8 *)plVar25[1];
        pcVar18 = (code *)*puVar26;
        if (pcVar18 != (code *)0x0) {
          (*pcVar18)(lVar12);
        }
        if (puVar26[1] != 0) {
          _free(lVar12);
        }
      }
      _free(plVar25);
    }
    *(undefined **)(lVar20 + 400) = puVar24;
    uVar13 = *(ulong *)(lVar20 + 0x148);
    if (uVar13 < 0x8000000000000003) {
      uVar27 = uVar13;
      if (uVar13 < 0x8000000000000001) {
        uVar27 = 0;
      }
      if (((uVar27 & 0x7fffffffffffffff) == 0) && (uVar13 != 0x8000000000000000)) {
        lVar21 = *(long *)(lVar20 + 0x150);
        lVar12 = *(long *)(lVar20 + 0x158) + 1;
        lVar22 = lVar21 + 0x18;
        while (lVar12 = lVar12 + -1, lVar12 != 0) {
          (**(code **)(*(long *)(lVar22 + -0x18) + 0x20))
                    (lVar22,*(undefined8 *)(lVar22 + -0x10),*(undefined8 *)(lVar22 + -8));
          lVar22 = lVar22 + 0x28;
        }
        if (uVar13 != 0) {
          _free(lVar21);
        }
      }
    }
    *(undefined8 *)(lVar20 + 0x148) = 0x8000000000000006;
    lVar12 = func_0x000100e3c8d4(puVar2);
  }
  else {
    puStack_358 = puStack_278;
    puStack_360 = puStack_280;
    uStack_348 = uStack_268;
    uStack_350 = uStack_270;
    lVar22 = puVar26[0xd] + puVar26[0xe] * 0x20;
    lVar21 = puVar26[0xe] * -0x20;
    uVar28 = 0;
    uVar29 = 0;
    plVar25 = (long *)(lVar22 + 8);
    do {
      plVar19 = plVar25;
      if (lVar21 == 0) goto LAB_10081598c;
      plVar1 = (long *)(lVar22 + -0x10);
      plVar7 = (long *)(lVar22 + -8);
      lVar22 = lVar22 + -0x20;
      plVar25 = plVar19 + -4;
      lVar21 = lVar21 + 0x20;
    } while (*plVar7 != 0x31f88567a83b579f || *plVar1 != 0x4ae2d8bd8b83c780);
    auVar30 = (**(code **)(*plVar25 + 0x38))(plVar19[-5]);
    puVar14 = auVar30._0_8_;
    lVar12 = (**(code **)(auVar30._8_8_ + 0x18))(&puStack_2d0);
    uVar28 = 0;
    uVar29 = 0;
    if ((puVar14 != (undefined8 *)0x0) &&
       (puStack_2c8 == (undefined *)0x31f88567a83b579f &&
        puStack_2d0 == (undefined *)0x4ae2d8bd8b83c780)) {
      lVar21 = *(long *)*puVar14;
      *(long *)*puVar14 = lVar21 + 1;
      if (lVar21 < 0) {
LAB_100815bb4:
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100815bb8);
        (*pcVar18)();
      }
      uVar29 = puVar14[1];
      uVar28 = *puVar14;
    }
LAB_10081598c:
    plVar25 = *(long **)(lVar20 + 0x1a0);
    if (plVar25 != (long *)0x0) {
      lVar21 = *plVar25;
      *plVar25 = lVar21 + -1;
      LORelease();
      if (lVar21 == 1) {
        DataMemoryBarrier(2,1);
        lVar12 = __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1eab458e7200fb96E(lVar20 + 0x1a0);
      }
    }
    *(undefined8 *)(lVar20 + 0x1a8) = uVar29;
    *(undefined8 *)(lVar20 + 0x1a0) = uVar28;
    puStack_2c8 = (undefined *)puVar26[0xd];
    puStack_2d0 = (undefined *)*puVar2;
    uStack_2c0 = puVar26[0xe];
    if (*(long *)(lVar20 + 0x130) != -0x8000000000000000) {
      lVar12 = func_0x000100e3c8d4(lVar20 + 0x130);
    }
    uVar13 = uStack_348;
    uVar28 = uStack_350;
    puVar23 = puStack_358;
    puVar24 = puStack_360;
    *(undefined **)(lVar20 + 0x138) = puStack_2c8;
    *(undefined **)(lVar20 + 0x130) = puStack_2d0;
    *(undefined8 *)(lVar20 + 0x140) = uStack_2c0;
    uVar8 = (undefined1)uStack_348;
    uVar9 = uStack_348._1_4_;
    if (puStack_360 != (undefined *)0x8000000000000003) {
      puVar4 = puStack_360;
      if (puStack_360 < (undefined *)0x8000000000000001) {
        puVar4 = (undefined *)0x0;
      }
      if ((((ulong)puVar4 & 0x7fffffffffffffff) == 1) && (puStack_358 == (undefined *)0x0)) {
        lVar21 = 1;
        if ((uStack_348 & 1) != 0) {
          lVar21 = 2;
        }
        uVar13 = *(ulong *)(lVar20 + 0x148);
        if (uVar13 < 0x8000000000000003) {
          uVar27 = uVar13;
          if (uVar13 < 0x8000000000000001) {
            uVar27 = 0;
          }
          if (((uVar27 & 0x7fffffffffffffff) == 0) && (uVar13 != 0x8000000000000000)) {
            lVar6 = *(long *)(lVar20 + 0x150);
            lVar22 = *(long *)(lVar20 + 0x158) + 1;
            lVar12 = lVar6 + 0x18;
            while (lVar22 = lVar22 + -1, lVar22 != 0) {
              (**(code **)(*(long *)(lVar12 + -0x18) + 0x20))
                        (lVar12,*(undefined8 *)(lVar12 + -0x10),*(undefined8 *)(lVar12 + -8));
              lVar12 = lVar12 + 0x28;
            }
            if (uVar13 != 0) {
              lVar12 = _free(lVar6);
            }
          }
        }
        *(long *)(lVar20 + 0x148) = lVar21 + -0x7ffffffffffffffc;
      }
      else {
        uVar27 = *(ulong *)(lVar20 + 0x148);
        if (uVar27 < 0x8000000000000003) {
          uVar5 = uVar27;
          if (uVar27 < 0x8000000000000001) {
            uVar5 = 0;
          }
          if (((uVar5 & 0x7fffffffffffffff) == 0) && (uVar27 != 0x8000000000000000)) {
            lVar22 = *(long *)(lVar20 + 0x150);
            lVar21 = *(long *)(lVar20 + 0x158) + 1;
            lVar12 = lVar22 + 0x18;
            while (lVar21 = lVar21 + -1, lVar21 != 0) {
              (**(code **)(*(long *)(lVar12 + -0x18) + 0x20))
                        (lVar12,*(undefined8 *)(lVar12 + -0x10),*(undefined8 *)(lVar12 + -8));
              lVar12 = lVar12 + 0x28;
            }
            if (uVar27 != 0) {
              lVar12 = _free(lVar22);
            }
          }
        }
        *(undefined **)(lVar20 + 0x148) = puVar24;
        *(undefined **)(lVar20 + 0x150) = puVar23;
        *(undefined8 *)(lVar20 + 0x158) = uVar28;
        *(undefined1 *)(lVar20 + 0x160) = uVar8;
        *(int *)(lVar20 + 0x164) = (int)(uVar13 >> 0x20);
        *(undefined4 *)(lVar20 + 0x161) = uVar9;
      }
    }
  }
  return lVar12;
}

