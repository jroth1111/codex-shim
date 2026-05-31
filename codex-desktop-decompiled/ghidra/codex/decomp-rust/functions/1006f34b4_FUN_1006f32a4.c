
/* WARNING: Possible PIC construction at 0x0001006f3d14: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_1006f32a4(byte *param_1,long *param_2)

{
  ulong ***pppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  ulong extraout_x1;
  long lVar13;
  ulong **ppuVar14;
  undefined1 uVar15;
  byte *extraout_x8;
  ulong uVar16;
  ulong uVar17;
  byte *pbVar18;
  ushort *puVar19;
  byte *pbVar20;
  byte *extraout_x11;
  byte *extraout_x11_00;
  byte bVar21;
  byte *unaff_x21;
  byte *unaff_x22;
  undefined8 *puVar22;
  byte *unaff_x23;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  char *pcStack_210;
  undefined8 ****ppppuStack_208;
  undefined8 **ppuStack_200;
  undefined1 uStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined *puStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong **ppuStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  ulong ****ppppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  ulong ****ppppuStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong ***pppuStack_100;
  ulong ***pppuStack_f8;
  ulong **ppuStack_f0;
  ulong ***pppuStack_e8;
  ulong **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  
  pbStack_50 = (byte *)param_2[1];
  if (pbStack_50 == (byte *)0x0) goto LAB_1006f3468;
  bVar21 = param_1[0x23];
  if (param_1[0x22] == 0) {
    bVar21 = 5;
  }
  pbVar18 = (byte *)*param_2;
  *pbVar18 = bVar21;
  *param_2 = (long)(pbVar18 + 1);
  param_2[1] = (long)(pbStack_50 + -1);
  if (pbStack_50 + -1 == (byte *)0x0) {
LAB_1006f346c:
    pbStack_48 = (byte *)0x0;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pbStack_50);
LAB_1006f3478:
    pbStack_50 = (byte *)0x2;
    pbStack_48 = unaff_x23;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pbStack_50);
    pbStack_48 = extraout_x8;
LAB_1006f3488:
    pbStack_50 = unaff_x21;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pbStack_50);
    pbStack_48 = extraout_x11;
LAB_1006f3494:
    pbStack_50 = (byte *)0x10;
    __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pbStack_50);
    pbStack_48 = extraout_x11_00;
  }
  else {
    bVar21 = param_1[0x20];
    if (8 < param_1[0x20]) {
      bVar21 = param_1[0x21];
    }
    pbVar18[1] = bVar21;
    *param_2 = (long)(pbVar18 + 2);
    param_2[1] = (long)(pbStack_50 + -2);
    if (pbStack_50 + -2 == (byte *)0x0) goto LAB_1006f3468;
    pbVar18[2] = 0;
    pbVar20 = pbStack_50 + -3;
    *param_2 = (long)(pbVar18 + 3);
    param_2[1] = (long)pbVar20;
    bVar21 = *param_1;
    unaff_x21 = (byte *)(ulong)bVar21;
    if (bVar21 != 0x1a) {
      if (pbVar20 == (byte *)0x0) {
LAB_1006f3468:
        pbStack_50 = (byte *)0x1;
        goto LAB_1006f346c;
      }
      pbVar18[3] = 3;
      *param_2 = (long)(pbVar18 + 4);
      param_2[1] = (long)(pbStack_50 + -4);
      pbVar20 = unaff_x21 + -0x17;
      if (bVar21 < 0x18) {
        pbVar20 = (byte *)0x0;
      }
      if (pbVar20 != (byte *)0x0) {
        bVar21 = (byte)*(undefined8 *)(param_1 + 0x10);
      }
      if (pbStack_50 + -4 == (byte *)0x0) goto LAB_1006f3468;
      pbVar18[4] = bVar21;
      unaff_x22 = pbVar18 + 5;
      pbStack_48 = pbStack_50 + -5;
      *param_2 = (long)unaff_x22;
      param_2[1] = (long)pbStack_48;
      if (pbVar20 == (byte *)0x2) {
        unaff_x21 = *(byte **)(param_1 + 0x10);
        pbVar18 = (byte *)(*(long *)(param_1 + 8) + 0x10);
      }
      else if (pbVar20 == (byte *)0x1) {
        pbVar18 = *(byte **)(param_1 + 8);
        unaff_x21 = *(byte **)(param_1 + 0x10);
      }
      else {
        pbVar18 = param_1 + 1;
      }
      unaff_x23 = pbStack_48 + -(long)unaff_x21;
      if (unaff_x21 <= pbStack_48) {
        pbVar8 = (byte *)_memcpy(unaff_x22,pbVar18,unaff_x21);
        puVar19 = (ushort *)(unaff_x22 + (long)unaff_x21);
        goto LAB_1006f3430;
      }
      goto LAB_1006f3488;
    }
    pbVar8 = param_1;
    if ((param_1[1] & 1) != 0) {
      if (pbVar20 == (byte *)0x0) goto LAB_1006f3468;
      pbVar18[3] = 4;
      pbStack_48 = pbStack_50 + -4;
      *param_2 = (long)(pbVar18 + 4);
      param_2[1] = (long)pbStack_48;
      if ((byte *)0x10 < pbVar20) {
        uVar11 = *(undefined8 *)(param_1 + 2);
        *(undefined8 *)(pbVar18 + 0xc) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)(pbVar18 + 4) = uVar11;
        puVar19 = (ushort *)(pbVar18 + 0x14);
        unaff_x23 = pbStack_50 + -0x14;
        goto LAB_1006f3430;
      }
      goto LAB_1006f3494;
    }
    if (pbVar20 == (byte *)0x0) goto LAB_1006f3468;
    pbVar18[3] = 1;
    pbStack_48 = pbStack_50 + -4;
    *param_2 = (long)(pbVar18 + 4);
    param_2[1] = (long)pbStack_48;
    if ((byte *)0x4 < pbVar20) {
      *(undefined4 *)(pbVar18 + 4) = *(undefined4 *)(param_1 + 2);
      puVar19 = (ushort *)(pbVar18 + 8);
      unaff_x23 = pbStack_50 + -8;
LAB_1006f3430:
      *param_2 = (long)puVar19;
      param_2[1] = (long)unaff_x23;
      if ((byte *)0x1 < unaff_x23) {
        *puVar19 = *(ushort *)(param_1 + 0x18) >> 8 | *(ushort *)(param_1 + 0x18) << 8;
        *param_2 = (long)(puVar19 + 1);
        param_2[1] = (long)(unaff_x23 + -2);
        return pbVar8;
      }
      goto LAB_1006f3478;
    }
  }
  pbStack_50 = (byte *)0x4;
  auVar25 = __ZN5bytes13panic_advance17h894eeb3b0f978370E(&pbStack_50);
  uVar11 = auVar25._8_8_;
  puVar9 = auVar25._0_8_;
  uStack_58 = 0x1006f34b4;
  bVar21 = *(byte *)(puVar9 + 3);
  puStack_60 = &stack0xfffffffffffffff0;
  if (bVar21 < 5) {
    if (bVar21 < 3) {
      if (bVar21 != 0) {
        if (bVar21 == 1) {
          FUN_107c05cc0(&UNK_10b21ebb8);
        }
        FUN_107c05cc4();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        uVar11 = __Unwind_Resume();
        __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                  (puVar9 + 7);
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume(uVar11);
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        __Unwind_Resume();
        *(undefined1 *)(puVar9 + 3) = 2;
        uVar24 = 0x1006f453c;
        ppuVar12 = (undefined8 **)__Unwind_Resume();
SUB_1006f453c:
        pbStack_1e0 = unaff_x22;
        pbStack_1d8 = unaff_x21;
        uStack_1d0 = uVar11;
        puStack_1c8 = puVar9;
        ppuStack_1c0 = &puStack_60;
        uStack_1b8 = uVar24;
        pbVar18 = (byte *)__ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                    (___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
                                     ,ppuVar12);
        lVar13 = 
        ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_270 = *(undefined8 *)
                        (
                        ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
                        + 0x20);
          uStack_268 = *(undefined8 *)
                        (
                        ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
                        + 0x28);
          uStack_278 = 5;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          pbVar18 = (byte *)(**(code **)(puVar2 + 0x18))(puVar3,&uStack_278);
          if ((int)pbVar18 != 0) {
            lStack_240 = *(long *)(lVar13 + 0x60);
            uStack_238 = *(undefined8 *)(lVar13 + 0x68);
            lStack_258 = *(long *)(lVar13 + 0x50);
            uStack_250 = *(undefined8 *)(lVar13 + 0x58);
            uStack_260 = 1;
            if (lStack_258 == 0) {
              uStack_260 = 2;
            }
            uStack_218 = *(undefined4 *)(lVar13 + 8);
            uStack_214 = *(undefined4 *)(lVar13 + 0xc);
            uStack_1f8 = 1;
            pppuStack_1f0 = &ppuStack_200;
            puStack_1e8 = &DAT_1061c2098;
            uStack_248 = 1;
            if (lStack_240 == 0) {
              uStack_248 = 2;
            }
            uStack_228 = uStack_270;
            uStack_230 = uStack_278;
            uStack_220 = uStack_268;
            ppppuStack_208 = &pppuStack_1f0;
            pcStack_210 = s__108b39f4f;
            ppuStack_200 = ppuVar12;
            pbVar18 = (byte *)(**(code **)(puVar2 + 0x20))(puVar3,&uStack_260);
          }
        }
        return pbVar18;
      }
      unaff_x21 = (byte *)*puVar9;
      pppuVar1 = (ulong ***)(puVar9 + 2);
      bVar21 = *unaff_x21;
      uVar16 = (ulong)bVar21;
      if (bVar21 == 0x1a) {
        lVar13 = 0x12;
        if (unaff_x21[1] == 0) {
          lVar13 = 6;
        }
        uVar24 = puVar9[1];
        ppuVar14 = (ulong **)(lVar13 + 4);
        *pppuVar1 = ppuVar14;
        bVar21 = *unaff_x21;
      }
      else {
        if (0x17 < bVar21) {
          uVar16 = *(ulong *)(unaff_x21 + 0x10);
        }
        uVar24 = puVar9[1];
        ppuVar14 = (ulong **)(uVar16 + 7);
        *pppuVar1 = ppuVar14;
        bVar21 = *unaff_x21;
      }
      if (bVar21 != 0x1a) {
        if (ppuVar14 < (ulong **)0x28) {
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
            unaff_x22 = &
                        __ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
            ;
            if (((bRam000000010b6394c0 - 1 < 2) ||
                ((bRam000000010b6394c0 != 0 &&
                 (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
                                    ), cVar6 != '\0')))) &&
               (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
                                   ), (uVar16 & 1) != 0)) {
              lStack_108 = ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
                           + 0x30;
              puStack_d8 = &
                           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              pppuStack_e8 = &ppuStack_e0;
              ppuStack_f0 = (ulong **)s_>write_socks5_server_reply_w___s_108ac4429;
              pppuStack_100 = &ppuStack_f0;
              pppuStack_f8 = (ulong ***)&UNK_10b208fd0;
              ppppuStack_118 = &pppuStack_100;
              puStack_120 = (undefined8 *)0x1;
              uStack_110 = 1;
              ppuVar12 = &puStack_120;
              uVar24 = 0x1006f3d18;
              ppuStack_e0 = (ulong **)pppuVar1;
              goto SUB_1006f453c;
            }
          }
          lVar13 = 
          ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_188 = *(undefined8 *)
                          (
                          ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
                          + 0x20);
            uStack_180 = *(undefined8 *)
                          (
                          ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
                          + 0x28);
            uStack_190 = 5;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_190);
            if (iVar7 != 0) {
              lStack_108 = ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha46f5787a8767329E
                           + 0x30;
              puStack_d8 = &
                           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              pppuStack_e8 = &ppuStack_e0;
              ppuStack_f0 = (ulong **)s_>write_socks5_server_reply_w___s_108ac4429;
              pppuStack_100 = &ppuStack_f0;
              pppuStack_f8 = (ulong ***)&UNK_10b208fd0;
              ppppuStack_118 = &pppuStack_100;
              puStack_120 = (undefined8 *)0x1;
              uStack_110 = 1;
              ppuStack_e0 = (ulong **)pppuVar1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar13,puVar3,puVar2,&uStack_190,&puStack_120);
            }
          }
          puVar22 = puVar9 + 4;
          puVar9[5] = 0;
          *puVar22 = 0;
          *(undefined8 *)((long)puVar9 + 0x3f) = 0;
          puVar9[7] = 0;
          puVar9[6] = 0;
          ppppuStack_118 = (ulong ****)0x27;
          puStack_120 = puVar22;
          FUN_1006f32a4(unaff_x21,&puStack_120);
          ppuVar14 = *pppuVar1;
          if ((ulong **)0x27 < ppuVar14) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                      (0,ppuVar14,0x27,&UNK_10b21eba0);
            goto LAB_1006f431c;
          }
          puVar9[9] = uVar24;
          puVar9[10] = puVar22;
          puVar9[0xb] = ppuVar14;
          goto LAB_1006f3754;
        }
        if (ppuVar14 < (ulong **)0x48) {
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
              ((bRam000000010b639478 - 1 < 2 ||
               ((bRam000000010b639478 != 0 &&
                (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3947a0dbc25d9a62E
                                   ), cVar6 != '\0')))))) &&
             (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3947a0dbc25d9a62E
                                 ), (uVar16 & 1) != 0)) {
            lStack_108 = ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3947a0dbc25d9a62E
                         + 0x30;
            puStack_d8 = &
                         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppuStack_e8 = &ppuStack_e0;
            ppuStack_f0 = (ulong **)s__write_socks5_server_reply_w___m_108ac43e5;
            pppuStack_100 = &ppuStack_f0;
            pppuStack_f8 = (ulong ***)&UNK_10b208fd0;
            ppppuStack_118 = &pppuStack_100;
            puStack_120 = (undefined8 *)0x1;
            uStack_110 = 1;
            ppuStack_e0 = (ulong **)pppuVar1;
            FUN_1006f47b4(&puStack_120);
          }
          else {
            lVar13 = 
            ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3947a0dbc25d9a62E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uStack_170 = *(undefined8 *)
                            (
                            ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3947a0dbc25d9a62E
                            + 0x20);
              uStack_168 = *(undefined8 *)
                            (
                            ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3947a0dbc25d9a62E
                            + 0x28);
              uStack_178 = 5;
              puVar2 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_10b3c24c8;
              }
              puVar3 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_109adfc03;
              }
              iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_178);
              if (iVar7 != 0) {
                lStack_108 = ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3947a0dbc25d9a62E
                             + 0x30;
                puStack_d8 = &
                             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                ;
                pppuStack_e8 = &ppuStack_e0;
                ppuStack_f0 = (ulong **)s__write_socks5_server_reply_w___m_108ac43e5;
                pppuStack_100 = &ppuStack_f0;
                pppuStack_f8 = (ulong ***)&UNK_10b208fd0;
                ppppuStack_118 = &pppuStack_100;
                puStack_120 = (undefined8 *)0x1;
                uStack_110 = 1;
                ppuStack_e0 = (ulong **)pppuVar1;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar13,puVar3,puVar2,&uStack_178,&puStack_120);
              }
            }
          }
          puVar22 = puVar9 + 4;
          puVar9[5] = 0;
          *puVar22 = 0;
          *(undefined8 *)((long)puVar9 + 0x5f) = 0;
          puVar9[9] = 0;
          puVar9[8] = 0;
          puVar9[0xb] = 0;
          puVar9[10] = 0;
          puVar9[7] = 0;
          puVar9[6] = 0;
          ppppuStack_118 = (ulong ****)0x47;
          puStack_120 = puVar22;
          FUN_1006f32a4(unaff_x21,&puStack_120);
          ppuVar14 = *pppuVar1;
          if ((ulong **)0x47 < ppuVar14) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                      (0,ppuVar14,0x47,&UNK_10b21eb88);
            goto LAB_1006f431c;
          }
          puVar9[0xd] = uVar24;
          puVar9[0xe] = puVar22;
          puVar9[0xf] = ppuVar14;
          goto LAB_1006f3710;
        }
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bRam000000010b639490 - 1 < 2 ||
             ((bRam000000010b639490 != 0 &&
              (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5b8e34e4c3a32a68E
                                 ), cVar6 != '\0')))))) &&
           (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5b8e34e4c3a32a68E
                               ), (uVar16 & 1) != 0)) {
          lStack_108 = ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5b8e34e4c3a32a68E
                       + 0x30;
          puStack_d8 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppuStack_e8 = &ppuStack_e0;
          ppuStack_f0 = (ulong **)s__write_socks5_server_reply_w___l_108ac43a3;
          pppuStack_100 = &ppuStack_f0;
          pppuStack_f8 = (ulong ***)&UNK_10b208fd0;
          ppppuStack_118 = &pppuStack_100;
          puStack_120 = (undefined8 *)0x1;
          uStack_110 = 1;
          ppuStack_e0 = (ulong **)pppuVar1;
          FUN_1006f48f0(&puStack_120);
        }
        else {
          lVar13 = 
          ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5b8e34e4c3a32a68E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_158 = *(undefined **)
                           (
                           ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5b8e34e4c3a32a68E
                           + 0x20);
            uStack_150 = *(undefined8 *)
                          (
                          ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5b8e34e4c3a32a68E
                          + 0x28);
            ppuStack_160 = (ulong **)0x5;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&ppuStack_160);
            if (iVar7 != 0) {
              lStack_108 = ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5b8e34e4c3a32a68E
                           + 0x30;
              pppuStack_e8 = (ulong ***)
                             &
                             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              pppuStack_f8 = &ppuStack_f0;
              pppuStack_100 = (ulong ***)s__write_socks5_server_reply_w___l_108ac43a3;
              ppppuStack_148 = &pppuStack_100;
              puStack_140 = &UNK_10b208fd0;
              ppppuStack_118 = (ulong ****)&ppppuStack_148;
              puStack_120 = (undefined8 *)0x1;
              uStack_110 = 1;
              puStack_d8 = puStack_158;
              ppuStack_e0 = ppuStack_160;
              uStack_d0 = uStack_150;
              ppuStack_f0 = (ulong **)pppuVar1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar13,puVar3,puVar2,&ppuStack_e0,&puStack_120);
            }
          }
        }
        uVar16 = puVar9[2];
        if ((long)uVar16 < 0) {
          uVar23 = 0;
LAB_1006f3fc8:
          FUN_107c03c64(uVar23,uVar16);
LAB_1006f431c:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006f4320);
          (*pcVar5)();
        }
        if (uVar16 == 0) {
          lVar13 = 1;
        }
        else {
          uVar23 = 1;
          lVar13 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar16,1);
          if (lVar13 == 0) goto LAB_1006f3fc8;
        }
        uVar17 = 0x40 - LZCOUNT(uVar16 >> 10);
        if (6 < uVar17) {
          uVar17 = 7;
        }
        puVar9[7] = lVar13;
        puVar9[8] = 0;
        puVar9[9] = uVar16;
        puVar9[10] = uVar17 << 2 | 1;
        bVar21 = unaff_x21[0x23];
        if (unaff_x21[0x22] == 0) {
          bVar21 = 5;
        }
        puStack_120._0_1_ = bVar21;
        __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                  (puVar9 + 7,&puStack_120,1);
        puStack_120._0_1_ = unaff_x21[0x20];
        if (8 < (byte)puStack_120) {
          puStack_120._0_1_ = unaff_x21[0x21];
        }
        __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                  (puVar9 + 7,&puStack_120,1);
        puStack_120._0_1_ = 0;
        __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                  (puVar9 + 7,&puStack_120,1);
        bVar21 = *unaff_x21;
        uVar16 = (ulong)bVar21;
        if (bVar21 == 0x1a) {
          if ((unaff_x21[1] & 1) == 0) {
            puStack_120 = (undefined8 *)CONCAT71(puStack_120._1_7_,1);
            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                      (puVar9 + 7,&puStack_120,1);
            puStack_120 = (undefined8 *)CONCAT44(puStack_120._4_4_,*(undefined4 *)(unaff_x21 + 2));
            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                      (puVar9 + 7,&puStack_120,4);
          }
          else {
            puStack_120 = (undefined8 *)CONCAT71(puStack_120._1_7_,4);
            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                      (puVar9 + 7,&puStack_120,1);
            ppppuStack_118 = *(ulong *****)(unaff_x21 + 10);
            puStack_120 = *(undefined8 **)(unaff_x21 + 2);
            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                      (puVar9 + 7,&puStack_120,0x10);
          }
        }
        else {
          puStack_120._0_1_ = 3;
          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                    (puVar9 + 7,&puStack_120,1);
          lVar13 = uVar16 - 0x17;
          if (bVar21 < 0x18) {
            lVar13 = 0;
          }
          if (lVar13 == 0) {
            puStack_120 = (undefined8 *)CONCAT71(puStack_120._1_7_,bVar21);
            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                      (puVar9 + 7,&puStack_120,1);
            pbVar18 = unaff_x21 + 1;
          }
          else if (lVar13 == 1) {
            uVar16 = *(ulong *)(unaff_x21 + 0x10);
            puStack_120 = (undefined8 *)CONCAT71(puStack_120._1_7_,(char)uVar16);
            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                      (puVar9 + 7,&puStack_120,1);
            pbVar18 = *(byte **)(unaff_x21 + 8);
          }
          else {
            uVar16 = *(ulong *)(unaff_x21 + 0x10);
            puStack_120 = (undefined8 *)CONCAT71(puStack_120._1_7_,(char)uVar16);
            __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                      (puVar9 + 7,&puStack_120,1);
            pbVar18 = (byte *)(*(long *)(unaff_x21 + 8) + 0x10);
          }
          __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                    (puVar9 + 7,pbVar18,uVar16);
        }
        puStack_120 = (undefined8 *)
                      CONCAT62(puStack_120._2_6_,
                               *(ushort *)(unaff_x21 + 0x18) >> 8 |
                               *(ushort *)(unaff_x21 + 0x18) << 8);
        __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                  (puVar9 + 7,&puStack_120,2);
        lVar13 = puVar9[8];
        puVar9[4] = uVar24;
        puVar9[5] = puVar9[7];
        puVar9[6] = lVar13;
        goto LAB_1006f3554;
      }
      if ((unaff_x21[1] & 1) != 0) {
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bRam000000010b6394a8 - 1 < 2 ||
             ((bRam000000010b6394a8 != 0 &&
              (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h627c96fb505833baE
                                 ), cVar6 != '\0')))) &&
            (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h627c96fb505833baE
                                ), (uVar16 & 1) != 0)))) {
          lStack_108 = ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h627c96fb505833baE
                       + 0x30;
          puStack_d8 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppuStack_e8 = &ppuStack_e0;
          ppuStack_f0 = (ulong **)s_4write_socks5_server_reply_w__Ip_108ac44a5;
          pppuStack_100 = &ppuStack_f0;
          pppuStack_f8 = (ulong ***)&UNK_10b208fd0;
          ppppuStack_118 = &pppuStack_100;
          puStack_120 = (undefined8 *)0x1;
          uStack_110 = 1;
          ppuStack_e0 = (ulong **)pppuVar1;
          FUN_1006f4678(&puStack_120);
        }
        else {
          lVar13 = 
          ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h627c96fb505833baE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_130 = *(undefined8 *)
                          (
                          ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h627c96fb505833baE
                          + 0x20);
            uStack_128 = *(undefined8 *)
                          (
                          ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h627c96fb505833baE
                          + 0x28);
            uStack_138 = 5;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_138);
            if (iVar7 != 0) {
              lStack_108 = ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h627c96fb505833baE
                           + 0x30;
              puStack_d8 = &
                           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              pppuStack_e8 = &ppuStack_e0;
              ppuStack_f0 = (ulong **)s_4write_socks5_server_reply_w__Ip_108ac44a5;
              pppuStack_100 = &ppuStack_f0;
              pppuStack_f8 = (ulong ***)&UNK_10b208fd0;
              ppppuStack_118 = &pppuStack_100;
              puStack_120 = (undefined8 *)0x1;
              uStack_110 = 1;
              ppuStack_e0 = (ulong **)pppuVar1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar13,puVar3,puVar2,&uStack_138,&puStack_120);
            }
          }
        }
        puVar22 = puVar9 + 4;
        *puVar22 = 0;
        puVar9[5] = 0;
        *(undefined8 *)((long)puVar9 + 0x2e) = 0;
        ppppuStack_118 = (ulong ****)0x16;
        puStack_120 = puVar22;
        FUN_1006f32a4(unaff_x21,&puStack_120);
        puVar9[7] = uVar24;
        puVar9[8] = puVar22;
        lVar13 = 0x16;
        puVar9[9] = 0x16;
        goto LAB_1006f3798;
      }
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b6394d8 - 1 < 2 ||
           ((bRam000000010b6394d8 != 0 &&
            (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd7d433bece21be4fE
                               ), cVar6 != '\0')))))) &&
         (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd7d433bece21be4fE
                             ), (uVar16 & 1) != 0)) {
        lStack_108 = ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd7d433bece21be4fE
                     + 0x30;
        puStack_d8 = &
                     __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        pppuStack_e8 = &ppuStack_e0;
        ppuStack_f0 = (ulong **)s_4write_socks5_server_reply_w__Ip_108ac446c;
        pppuStack_100 = &ppuStack_f0;
        pppuStack_f8 = (ulong ***)&UNK_10b208fd0;
        ppppuStack_118 = &pppuStack_100;
        puStack_120 = (undefined8 *)0x1;
        uStack_110 = 1;
        ppuStack_e0 = (ulong **)pppuVar1;
        FUN_1006f4a2c(&puStack_120);
      }
      else {
        lVar13 = 
        ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd7d433bece21be4fE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_1a0 = *(undefined8 *)
                        (
                        ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd7d433bece21be4fE
                        + 0x20);
          uStack_198 = *(undefined8 *)
                        (
                        ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd7d433bece21be4fE
                        + 0x28);
          uStack_1a8 = 5;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_1a8);
          if (iVar7 != 0) {
            lStack_108 = ___ZN11rama_socks55proto6server5Reply8write_to28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd7d433bece21be4fE
                         + 0x30;
            puStack_d8 = &
                         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppuStack_e8 = &ppuStack_e0;
            ppuStack_f0 = (ulong **)s_4write_socks5_server_reply_w__Ip_108ac446c;
            pppuStack_100 = &ppuStack_f0;
            pppuStack_f8 = (ulong ***)&UNK_10b208fd0;
            ppppuStack_118 = &pppuStack_100;
            puStack_120 = (undefined8 *)0x1;
            uStack_110 = 1;
            ppuStack_e0 = (ulong **)pppuVar1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar13,puVar3,puVar2,&uStack_1a8,&puStack_120);
          }
        }
      }
      puVar22 = puVar9 + 4;
      *puVar22 = 0;
      *(undefined2 *)(puVar9 + 5) = 0;
      ppppuStack_118 = (ulong ****)0xa;
      puStack_120 = puVar22;
      FUN_1006f32a4(unaff_x21,&puStack_120);
      puVar9[6] = uVar24;
      puVar9[7] = puVar22;
      lVar13 = 10;
      puVar9[8] = 10;
    }
    else {
      if (bVar21 != 3) {
        ppuVar14 = (ulong **)puVar9[0xb];
LAB_1006f3754:
        do {
          if (ppuVar14 == (ulong **)0x0) break;
          auVar25 = func_0x0001060f8f1c(puVar9[9],uVar11,puVar9[10]);
          uVar16 = auVar25._8_8_;
          if (auVar25._0_8_ == 2) {
            uVar15 = 4;
            goto LAB_1006f3990;
          }
          if ((auVar25._0_8_ & 1) != 0) break;
          lVar13 = puVar9[10];
          uVar17 = puVar9[0xb];
          puVar9[10] = 1;
          puVar9[0xb] = 0;
          ppuVar14 = (ulong **)(uVar17 - uVar16);
          if (uVar17 < uVar16) {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
            goto LAB_1006f431c;
          }
          puVar9[10] = lVar13 + uVar16;
          puVar9[0xb] = ppuVar14;
        } while (uVar16 != 0);
        goto LAB_1006f397c;
      }
      lVar13 = puVar9[8];
    }
    do {
      if (lVar13 == 0) break;
      auVar25 = func_0x0001060f8f1c(puVar9[6],uVar11,puVar9[7]);
      uVar16 = auVar25._8_8_;
      if (auVar25._0_8_ == 2) {
        uVar15 = 3;
LAB_1006f3990:
        *(undefined1 *)(puVar9 + 3) = uVar15;
        return (byte *)0x1;
      }
      if ((auVar25._0_8_ & 1) != 0) break;
      lVar4 = puVar9[7];
      uVar17 = puVar9[8];
      puVar9[7] = 1;
      puVar9[8] = 0;
      lVar13 = uVar17 - uVar16;
      if (uVar17 < uVar16) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
        goto LAB_1006f431c;
      }
      puVar9[7] = lVar4 + uVar16;
      puVar9[8] = lVar13;
    } while (uVar16 != 0);
  }
  else {
    if (bVar21 == 5) {
      ppuVar14 = (ulong **)puVar9[0xf];
LAB_1006f3710:
      do {
        if (ppuVar14 == (ulong **)0x0) break;
        auVar25 = func_0x0001060f8f1c(puVar9[0xd],uVar11,puVar9[0xe]);
        uVar16 = auVar25._8_8_;
        if (auVar25._0_8_ == 2) {
          uVar15 = 5;
          goto LAB_1006f3990;
        }
        if ((auVar25._0_8_ & 1) != 0) break;
        lVar13 = puVar9[0xe];
        uVar17 = puVar9[0xf];
        puVar9[0xe] = 1;
        puVar9[0xf] = 0;
        ppuVar14 = (ulong **)(uVar17 - uVar16);
        if (uVar17 < uVar16) {
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
          goto LAB_1006f431c;
        }
        puVar9[0xe] = lVar13 + uVar16;
        puVar9[0xf] = ppuVar14;
      } while (uVar16 != 0);
      goto LAB_1006f397c;
    }
    if (bVar21 != 6) {
      lVar13 = puVar9[9];
LAB_1006f3798:
      do {
        if (lVar13 == 0) break;
        auVar25 = func_0x0001060f8f1c(puVar9[7],uVar11,puVar9[8]);
        uVar16 = auVar25._8_8_;
        if (auVar25._0_8_ == 2) {
          uVar15 = 7;
          goto LAB_1006f3990;
        }
        if ((auVar25._0_8_ & 1) != 0) break;
        lVar4 = puVar9[8];
        uVar17 = puVar9[9];
        puVar9[8] = 1;
        puVar9[9] = 0;
        lVar13 = uVar17 - uVar16;
        if (uVar17 < uVar16) {
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
          goto LAB_1006f431c;
        }
        puVar9[8] = lVar4 + uVar16;
        puVar9[9] = lVar13;
      } while (uVar16 != 0);
      goto LAB_1006f397c;
    }
    lVar13 = puVar9[6];
LAB_1006f3554:
    do {
      if (lVar13 == 0) {
        uVar16 = 0;
        plVar10 = (long *)puVar9[10];
        goto joined_r0x0001006f3938;
      }
      auVar25 = func_0x0001060f8f1c(puVar9[4],uVar11,puVar9[5]);
      uVar16 = auVar25._8_8_;
      if (auVar25._0_8_ == 2) {
        uVar15 = 6;
        goto LAB_1006f3990;
      }
      if ((auVar25._0_8_ & 1) != 0) goto LAB_1006f3594;
      lVar4 = puVar9[5];
      uVar17 = puVar9[6];
      puVar9[5] = 1;
      puVar9[6] = 0;
      lVar13 = uVar17 - uVar16;
      if (uVar17 < uVar16) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
        goto LAB_1006f431c;
      }
      puVar9[5] = lVar4 + uVar16;
      puVar9[6] = lVar13;
    } while (uVar16 != 0);
    uVar16 = 0x1700000003;
LAB_1006f3594:
    plVar10 = (long *)puVar9[10];
joined_r0x0001006f3938:
    if (((ulong)plVar10 & 1) == 0) {
      lVar13 = plVar10[4];
      plVar10[4] = lVar13 + -1;
      LORelease();
      if (lVar13 != 1) goto LAB_1006f397c;
      if (*plVar10 != 0) {
        _free(plVar10[1],uVar16);
        uVar16 = extraout_x1;
      }
    }
    else {
      if (puVar9[9] + ((ulong)plVar10 >> 5) == 0) goto LAB_1006f397c;
      plVar10 = (long *)(puVar9[7] - ((ulong)plVar10 >> 5));
    }
    _free(plVar10,uVar16);
  }
LAB_1006f397c:
  *(undefined1 *)(puVar9 + 3) = 1;
  return (byte *)0x0;
}

