
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1008253dc(ulong *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  char *******pppppppcVar8;
  code *pcVar9;
  char cVar10;
  int iVar11;
  long *plVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  char ******ppppppcVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  char *******pppppppcVar20;
  char *******pppppppcVar21;
  long lVar22;
  char *******pppppppcVar23;
  char *******pppppppcVar24;
  char *******pppppppcVar25;
  char *******pppppppcStack_200;
  char *******pppppppcStack_1f8;
  char *******pppppppcStack_1f0;
  char *******pppppppcStack_1e8;
  char *******pppppppcStack_1e0;
  char *******pppppppcStack_1d8;
  char *******pppppppcStack_1d0;
  long lStack_1c8;
  char *******apppppppcStack_1c0 [2];
  byte bStack_1ae;
  byte bStack_1ad;
  char *******pppppppcStack_1b0;
  char *******pppppppcStack_1a8;
  char *******pppppppcStack_1a0;
  char *******pppppppcStack_198;
  char *******pppppppcStack_190;
  char *******pppppppcStack_188;
  char *******pppppppcStack_180;
  char *******pppppppcStack_178;
  char *******pppppppcStack_170;
  long lStack_168;
  char *******pppppppcStack_160;
  char *******pppppppcStack_158;
  char *******pppppppcStack_150;
  char *******pppppppcStack_148;
  char *******pppppppcStack_140;
  undefined *puStack_138;
  char *******pppppppcStack_130;
  char *******pppppppcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  char *******pppppppcStack_110;
  char *******pppppppcStack_108;
  char *******pppppppcStack_100;
  char *******pppppppcStack_f8;
  char ******ppppppcStack_f0;
  char *******pppppppcStack_e8;
  char *******pppppppcStack_e0;
  undefined8 uStack_d8;
  char *******pppppppcStack_d0;
  char *******pppppppcStack_c8;
  char *******pppppppcStack_c0;
  char *******pppppppcStack_b8;
  char *******pppppppcStack_b0;
  char *******pppppppcStack_a8;
  char *******pppppppcStack_a0;
  char *******pppppppcStack_98;
  char *******pppppppcStack_90;
  char *******pppppppcStack_88;
  char *pcStack_80;
  char *******pppppppcStack_78;
  
  pppppppcStack_200 = (char *******)param_2[2];
  uVar14 = *param_1;
  if (uVar14 < 0x8000000000000001) {
    uVar14 = 0;
  }
  if ((uVar14 & 0x7fffffffffffffff) == 0) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b637818 - 1 < 2 ||
         ((bRam000000010b637818 != 0 &&
          (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE
                              ), cVar10 != '\0')))))) &&
       (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE
                           ), iVar11 != 0)) {
      pppppppcStack_b8 =
           (char *******)
           (
           ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE
           + 0x30);
      pppppppcStack_128 =
           (char *******)
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppppppcStack_e0 = (char *******)&pppppppcStack_130;
      pppppppcStack_e8 = (char *******)s_encoding_chunked_B_108ac8d02;
      pppppppcStack_100 = (char *******)&pppppppcStack_e8;
      pppppppcStack_f8 = (char *******)&UNK_10b208fd0;
      pppppppcStack_c8 = (char *******)&pppppppcStack_100;
      pppppppcStack_d0 = (char *******)0x1;
      pppppppcStack_c0 = (char *******)0x1;
      pppppppcStack_130 = (char *******)&pppppppcStack_200;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE
                 ,&pppppppcStack_d0);
      lVar22 = 
      ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppcStack_178 =
             *(char ********)
              (
              ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE
              + 0x20);
        pppppppcStack_170 =
             *(char ********)
              (
              ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE
              + 0x28);
        pppppppcStack_180 = (char *******)0x5;
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_180);
        if (iVar11 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar22,puVar5,puVar4,&pppppppcStack_180,&pppppppcStack_d0);
        }
      }
    }
    else {
      lVar22 = 
      ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppcStack_1f0 =
             *(char ********)
              (
              ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE
              + 0x20);
        pppppppcStack_1e8 =
             *(char ********)
              (
              ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE
              + 0x28);
        pppppppcStack_1f8 = (char *******)0x5;
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_1f8);
        if (iVar11 != 0) {
          lStack_168 = ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h34bc3c5c04bc5f1eE
                       + 0x30;
          pppppppcStack_f8 =
               (char *******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppppppcStack_108 = (char *******)&pppppppcStack_100;
          pppppppcStack_110 = (char *******)s_encoding_chunked_B_108ac8d02;
          pppppppcStack_140 = (char *******)&pppppppcStack_110;
          puStack_138 = &UNK_10b208fd0;
          pppppppcStack_178 = (char *******)&pppppppcStack_140;
          pppppppcStack_180 = (char *******)0x1;
          pppppppcStack_170 = (char *******)0x1;
          pppppppcStack_98 = pppppppcStack_1f0;
          pppppppcStack_a0 = pppppppcStack_1f8;
          pppppppcStack_90 = pppppppcStack_1e8;
          pppppppcStack_b0 = *(char ********)(lVar22 + 0x60);
          pppppppcStack_a8 = *(char ********)(lVar22 + 0x68);
          pppppppcStack_c8 = *(char ********)(lVar22 + 0x50);
          pppppppcStack_c0 = *(char ********)(lVar22 + 0x58);
          pppppppcStack_d0 = (char *******)0x1;
          if (pppppppcStack_c8 == (char *******)0x0) {
            pppppppcStack_d0 = (char *******)0x2;
          }
          pppppppcStack_88 = *(char ********)(lVar22 + 8);
          pppppppcStack_e8 = (char *******)&pppppppcStack_180;
          pppppppcStack_e0 = (char *******)CONCAT71(pppppppcStack_e0._1_7_,1);
          pppppppcStack_130 = (char *******)&pppppppcStack_e8;
          pppppppcStack_128 = (char *******)&DAT_1061c2098;
          pppppppcStack_b8 = (char *******)0x1;
          if (pppppppcStack_b0 == (char *******)0x0) {
            pppppppcStack_b8 = (char *******)0x2;
          }
          pppppppcStack_78 = (char *******)&pppppppcStack_130;
          pcStack_80 = s__108b39f4f;
          pppppppcStack_100 = (char *******)&pppppppcStack_200;
          (**(code **)(puVar4 + 0x20))(puVar5,&pppppppcStack_d0);
        }
      }
    }
    pppppppcStack_130 = pppppppcStack_200;
    pppppppcStack_180 = (char *******)0x0;
    pppppppcStack_178 = (char *******)0x0;
    pppppppcStack_170 = (char *******)((ulong)pppppppcStack_170 & 0xffffffff00000000);
    pppppppcStack_d0 = (char *******)&pppppppcStack_130;
    pppppppcStack_c8 =
         (char *******)
         &
         __ZN4core3fmt3num55__LT_impl_u20_core__fmt__UpperHex_u20_for_u20_usize_GT_3fmt17hfd7302eeb515121eE
    ;
    __ZN4core3fmt5write17h64810b21425781ecE
              (&pppppppcStack_180,&UNK_10b404580,s__108b23e1d,&pppppppcStack_d0);
    pppppppcStack_a0 = (char *******)CONCAT44(pppppppcStack_a0._4_4_,pppppppcStack_170._0_4_);
    pppppppcStack_a8 = pppppppcStack_178;
    pppppppcStack_b0 = pppppppcStack_180;
    pppppppcStack_1d8 = (char *******)param_2[1];
    pppppppcStack_1e0 = (char *******)*param_2;
    lStack_1c8 = param_2[3];
    pppppppcStack_1d0 = (char *******)param_2[2];
    apppppppcStack_1c0[1] = pppppppcStack_178;
    apppppppcStack_1c0[0] = pppppppcStack_180;
    pppppppcStack_1b0 = pppppppcStack_a0;
    pppppppcVar24 = pppppppcStack_1b0;
    pppppppcStack_1a8 = (char *******)&UNK_108cb11c5;
    pppppppcStack_1a0 = (char *******)0x7;
    if ((*(byte *)(param_3 + 9) & 1) == 0) {
      bStack_1ae = (byte)((ulong)pppppppcStack_170 >> 0x10);
      bStack_1ad = (byte)((ulong)pppppppcStack_170 >> 0x18);
      puVar1 = (undefined1 *)((long)pppppppcStack_1d0 + (ulong)(byte)(bStack_1ad - bStack_1ae));
      if (CARRY8((ulong)pppppppcStack_1d0,(ulong)(byte)(bStack_1ad - bStack_1ae))) {
        puVar1 = (undefined1 *)0xffffffffffffffff;
      }
      pppppppcVar25 = (char *******)(puVar1 + 7);
      if ((undefined1 *)0xfffffffffffffff8 < puVar1) {
        pppppppcVar25 = (char *******)0xffffffffffffffff;
      }
      uVar14 = param_3[3];
      pppppppcStack_1b0 = pppppppcVar24;
      if ((uVar14 != 0) && (uVar15 = param_3[2], (char *******)(*param_3 - uVar15) < pppppppcVar25))
      {
        lVar22 = uVar15 - uVar14;
        if (uVar15 < uVar14) {
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                    (0,uVar14,uVar15,&UNK_10b406aa8);
LAB_100826bc4:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100826bc8);
          (*pcVar9)();
        }
        param_3[2] = 0;
        if (lVar22 != 0) {
          _memmove(param_3[1],param_3[1] + uVar14,lVar22);
          param_3[2] = lVar22;
        }
        param_3[3] = 0;
      }
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b6372a8 - 1 < 2 ||
           ((bRam000000010b6372a8 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                                ), cVar10 != '\0')))))) &&
         (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                             ), iVar11 != 0)) {
        pppppppcStack_140 = (char *******)(param_3[2] - param_3[3]);
        lStack_168 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                     + 0x30;
        pppppppcStack_d0 = (char *******)&pppppppcStack_140;
        pppppppcStack_c8 =
             (char *******)
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        pppppppcStack_c0 = (char *******)&pppppppcStack_110;
        pppppppcStack_b8 =
             (char *******)
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        pppppppcStack_e0 = (char *******)&pppppppcStack_d0;
        pppppppcStack_e8 = (char *******)s__buffer_flatten__head_remaining___108ac88b4;
        pppppppcStack_100 = (char *******)&pppppppcStack_e8;
        pppppppcStack_f8 = (char *******)&UNK_10b208fd0;
        pppppppcStack_178 = (char *******)&pppppppcStack_100;
        pppppppcStack_180 = (char *******)0x1;
        pppppppcStack_170 = (char *******)0x1;
        pppppppcStack_110 = pppppppcVar25;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                   ,&pppppppcStack_180);
        lVar22 = 
        ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_128 =
               *(char ********)
                (
                ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                + 0x20);
          uStack_120 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                        + 0x28);
          pppppppcStack_130 = (char *******)0x5;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_130);
          if (iVar11 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar22,puVar5,puVar4,&pppppppcStack_130,&pppppppcStack_180);
          }
        }
      }
      else {
        lVar22 = 
        ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_128 =
               *(char ********)
                (
                ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                + 0x20);
          uStack_120 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                        + 0x28);
          pppppppcStack_130 = (char *******)0x5;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_130);
          if (iVar11 != 0) {
            pppppppcStack_140 = (char *******)(param_3[2] - param_3[3]);
            lStack_168 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                         + 0x30;
            pppppppcStack_d0 = (char *******)&pppppppcStack_140;
            pppppppcStack_c8 =
                 (char *******)
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppppppcStack_c0 = (char *******)&pppppppcStack_110;
            pppppppcStack_b8 =
                 (char *******)
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppppppcStack_e0 = (char *******)&pppppppcStack_d0;
            pppppppcStack_e8 = (char *******)s__buffer_flatten__head_remaining___108ac88b4;
            pppppppcStack_100 = (char *******)&pppppppcStack_e8;
            pppppppcStack_f8 = (char *******)&UNK_10b208fd0;
            pppppppcStack_178 = (char *******)&pppppppcStack_100;
            pppppppcStack_180 = (char *******)0x1;
            pppppppcStack_170 = (char *******)0x1;
            pppppppcStack_110 = pppppppcVar25;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar22,puVar5,puVar4,&pppppppcStack_130,&pppppppcStack_180);
          }
        }
      }
      while( true ) {
        uVar14 = (ulong)bStack_1ae;
        pppppppcVar24 = pppppppcStack_1a8;
        pppppppcVar25 = pppppppcStack_1a0;
        if ((pppppppcStack_1d0 != (char *******)0x0 || bStack_1ad != bStack_1ae) &&
           (pppppppcVar24 = pppppppcStack_1d8, pppppppcVar25 = pppppppcStack_1d0,
           bStack_1ad != bStack_1ae)) {
          if (bStack_1ad < bStack_1ae || 0x12 < bStack_1ad) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                      (uVar14,(ulong)bStack_1ad,0x12,&UNK_10b24de90);
            goto LAB_100826bc4;
          }
          pppppppcVar24 = (char *******)((long)apppppppcStack_1c0 + uVar14);
          pppppppcVar25 = (char *******)(bStack_1ad - uVar14);
        }
        if (pppppppcVar25 == (char *******)0x0) break;
        lVar22 = param_3[2];
        if ((char *******)(*param_3 - lVar22) < pppppppcVar25) {
          thunk_FUN_108855060(param_3,lVar22,pppppppcVar25,1,1);
          lVar22 = param_3[2];
        }
        _memcpy(param_3[1] + lVar22,pppppppcVar24,pppppppcVar25);
        param_3[2] = (long)(lVar22 + (long)pppppppcVar25);
        FUN_1011eaad0(&pppppppcStack_1e0,pppppppcVar25);
      }
      ppppppcVar16 = pppppppcStack_1e0[4];
      plVar12 = &lStack_1c8;
      pppppppcVar24 = pppppppcStack_1d8;
      pppppppcVar25 = pppppppcStack_1d0;
LAB_100826614:
      (*(code *)ppppppcVar16)(plVar12,pppppppcVar24,pppppppcVar25);
    }
    else {
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
         (((bRam000000010b637290 - 1 < 2 ||
           ((bRam000000010b637290 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                                ), cVar10 != '\0')))) &&
          (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                              ),
          lVar22 = 
          ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
          , iVar11 != 0)))) {
        lVar2 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                + 0x30;
        lVar6 = param_3[2];
        lVar7 = param_3[3];
        uVar14 = param_3[7];
        if (uVar14 == 0) {
          lVar18 = 0;
          uVar15 = 0;
          lVar19 = 0;
        }
        else {
          uVar15 = param_3[4];
          uVar3 = 0;
          if (uVar15 <= (ulong)param_3[6]) {
            uVar3 = uVar15;
          }
          lVar18 = param_3[6] - uVar3;
          lVar19 = uVar14 - (uVar15 - lVar18);
          if (uVar14 < uVar15 - lVar18 || lVar19 == 0) {
            lVar19 = 0;
            uVar15 = lVar18 + uVar14;
          }
        }
        pppppppcStack_c0 = (char *******)param_3[5];
        pppppppcStack_d0 = (char *******)((long)pppppppcStack_c0 + lVar18 * 0x50);
        pppppppcStack_c8 = (char *******)((long)pppppppcStack_c0 + uVar15 * 0x50);
        pppppppcStack_b8 = (char *******)((long)pppppppcStack_c0 + lVar19 * 0x50);
        lVar19 = FUN_1004d8568(&pppppppcStack_d0);
        pppppppcStack_140 = (char *******)((lVar6 - lVar7) + lVar19);
        puVar1 = (undefined1 *)((long)pppppppcStack_1d0 + (ulong)(byte)(bStack_1ad - bStack_1ae));
        if (CARRY8((ulong)pppppppcStack_1d0,(ulong)(byte)(bStack_1ad - bStack_1ae))) {
          puVar1 = (undefined1 *)0xffffffffffffffff;
        }
        pppppppcStack_110 = (char *******)(puVar1 + 7);
        if ((undefined1 *)0xfffffffffffffff8 < puVar1) {
          pppppppcStack_110 = (char *******)0xffffffffffffffff;
        }
        pppppppcStack_d0 = (char *******)&pppppppcStack_140;
        pppppppcStack_c8 =
             (char *******)
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        pppppppcStack_c0 = (char *******)&pppppppcStack_110;
        pppppppcStack_b8 =
             (char *******)
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        pppppppcStack_e8 = (char *******)s_buffer_queue__head_remaining_____108ac88eb;
        pppppppcStack_100 = (char *******)&pppppppcStack_e8;
        pppppppcStack_f8 = (char *******)&UNK_10b208fd0;
        pppppppcStack_178 = (char *******)&pppppppcStack_100;
        pppppppcStack_180 = (char *******)0x1;
        pppppppcStack_170 = (char *******)0x1;
        lStack_168 = lVar2;
        pppppppcStack_e0 = (char *******)&pppppppcStack_d0;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar22,&pppppppcStack_180);
        lVar22 = 
        ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_128 =
               *(char ********)
                (
                ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                + 0x20);
          uStack_120 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                        + 0x28);
          pppppppcStack_130 = (char *******)0x5;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_130);
          if (iVar11 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar22,puVar5,puVar4,&pppppppcStack_130,&pppppppcStack_180);
          }
        }
      }
      else {
        lVar22 = 
        ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_128 =
               *(char ********)
                (
                ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                + 0x20);
          uStack_120 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                        + 0x28);
          pppppppcStack_130 = (char *******)0x5;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_130);
          if (iVar11 != 0) {
            lVar2 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                    + 0x30;
            lVar6 = param_3[2];
            lVar7 = param_3[3];
            uVar14 = param_3[7];
            if (uVar14 == 0) {
              lVar18 = 0;
              uVar15 = 0;
              lVar19 = 0;
            }
            else {
              uVar15 = param_3[4];
              uVar3 = 0;
              if (uVar15 <= (ulong)param_3[6]) {
                uVar3 = uVar15;
              }
              lVar18 = param_3[6] - uVar3;
              lVar19 = uVar14 - (uVar15 - lVar18);
              if (uVar14 < uVar15 - lVar18 || lVar19 == 0) {
                lVar19 = 0;
                uVar15 = lVar18 + uVar14;
              }
            }
            pppppppcStack_c0 = (char *******)param_3[5];
            pppppppcStack_d0 = (char *******)((long)pppppppcStack_c0 + lVar18 * 0x50);
            pppppppcStack_c8 = (char *******)((long)pppppppcStack_c0 + uVar15 * 0x50);
            pppppppcStack_b8 = (char *******)((long)pppppppcStack_c0 + lVar19 * 0x50);
            lVar19 = FUN_1004d8568(&pppppppcStack_d0);
            pppppppcStack_140 = (char *******)((lVar6 - lVar7) + lVar19);
            puVar1 = (undefined1 *)
                     ((long)pppppppcStack_1d0 + (ulong)(byte)(bStack_1ad - bStack_1ae));
            if (CARRY8((ulong)pppppppcStack_1d0,(ulong)(byte)(bStack_1ad - bStack_1ae))) {
              puVar1 = (undefined1 *)0xffffffffffffffff;
            }
            pppppppcStack_110 = (char *******)(puVar1 + 7);
            if ((undefined1 *)0xfffffffffffffff8 < puVar1) {
              pppppppcStack_110 = (char *******)0xffffffffffffffff;
            }
            pppppppcStack_d0 = (char *******)&pppppppcStack_140;
            pppppppcStack_c8 =
                 (char *******)
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppppppcStack_c0 = (char *******)&pppppppcStack_110;
            pppppppcStack_b8 =
                 (char *******)
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppppppcStack_e8 = (char *******)s_buffer_queue__head_remaining_____108ac88eb;
            pppppppcStack_100 = (char *******)&pppppppcStack_e8;
            pppppppcStack_f8 = (char *******)&UNK_10b208fd0;
            pppppppcStack_178 = (char *******)&pppppppcStack_100;
            pppppppcStack_180 = (char *******)0x1;
            pppppppcStack_170 = (char *******)0x1;
            lStack_168 = lVar2;
            pppppppcStack_e0 = (char *******)&pppppppcStack_d0;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar22,puVar5,puVar4,&pppppppcStack_130,&pppppppcStack_180);
          }
        }
      }
      pppppppcStack_a0 = apppppppcStack_1c0[1];
      pppppppcStack_a8 = apppppppcStack_1c0[0];
      pppppppcStack_90 = pppppppcStack_1a8;
      pppppppcStack_98 = pppppppcStack_1b0;
      pppppppcStack_c0 = pppppppcStack_1d8;
      pppppppcStack_c8 = pppppppcStack_1e0;
      pppppppcStack_b0 = (char *******)lStack_1c8;
      pppppppcStack_b8 = pppppppcStack_1d0;
      pppppppcStack_88 = pppppppcStack_1a0;
      pppppppcStack_d0 = (char *******)0x2;
      uVar14 = param_3[4];
      uVar15 = param_3[7];
      if (uVar15 == uVar14) {
        __ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h96aff5fc3d6310dcE();
LAB_100826ab8:
        uVar15 = param_3[7];
        uVar14 = param_3[4];
      }
LAB_100826ac0:
      param_3[7] = uVar15 + 1;
      uVar3 = 0;
      if (uVar14 <= param_3[6] + uVar15) {
        uVar3 = uVar14;
      }
      puVar17 = (undefined8 *)(param_3[5] + ((param_3[6] + uVar15) - uVar3) * 0x50);
      puVar17[7] = pppppppcStack_98;
      puVar17[6] = pppppppcStack_a0;
      puVar17[9] = pppppppcStack_88;
      puVar17[8] = pppppppcStack_90;
      puVar17[3] = pppppppcStack_b8;
      puVar17[2] = pppppppcStack_c0;
      puVar17[5] = pppppppcStack_a8;
      puVar17[4] = pppppppcStack_b0;
      puVar17[1] = pppppppcStack_c8;
      *puVar17 = pppppppcStack_d0;
    }
LAB_100826afc:
    bVar13 = (byte)param_1[3] ^ 1;
  }
  else {
    if ((uVar14 & 0x7fffffffffffffff) == 1) {
      pppppppcVar24 = (char *******)param_1[1];
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b637800 - 1 < 2 ||
           ((bRam000000010b637800 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
                                ), cVar10 != '\0')))))) &&
         (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
                             ), iVar11 != 0)) {
        pppppppcStack_b8 =
             (char *******)
             (
             ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
             + 0x30);
        pppppppcStack_128 =
             (char *******)
             &
             __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        pppppppcStack_e0 = (char *******)&pppppppcStack_130;
        pppppppcStack_e8 = (char *******)s_sized_write__len___108ac8d18;
        pppppppcStack_100 = (char *******)&pppppppcStack_e8;
        pppppppcStack_f8 = (char *******)&UNK_10b208fd0;
        pppppppcStack_c8 = (char *******)&pppppppcStack_100;
        pppppppcStack_d0 = (char *******)0x1;
        pppppppcStack_c0 = (char *******)0x1;
        pppppppcStack_130 = (char *******)&pppppppcStack_200;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
                   ,&pppppppcStack_d0);
        lVar22 = 
        ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_178 =
               *(char ********)
                (
                ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
                + 0x20);
          pppppppcStack_170 =
               *(char ********)
                (
                ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
                + 0x28);
          pppppppcStack_180 = (char *******)0x5;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_180);
          if (iVar11 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar22,puVar5,puVar4,&pppppppcStack_180,&pppppppcStack_d0);
          }
        }
      }
      else {
        lVar22 = 
        ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_190 =
               *(char ********)
                (
                ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
                + 0x20);
          pppppppcStack_188 =
               *(char ********)
                (
                ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
                + 0x28);
          pppppppcStack_198 = (char *******)0x5;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_198);
          if (iVar11 != 0) {
            lStack_168 = ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h0d1d7c444e85c5a3E
                         + 0x30;
            pppppppcStack_f8 =
                 (char *******)
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppppppcStack_108 = (char *******)&pppppppcStack_100;
            pppppppcStack_110 = (char *******)s_sized_write__len___108ac8d18;
            pppppppcStack_140 = (char *******)&pppppppcStack_110;
            puStack_138 = &UNK_10b208fd0;
            pppppppcStack_178 = (char *******)&pppppppcStack_140;
            pppppppcStack_180 = (char *******)0x1;
            pppppppcStack_170 = (char *******)0x1;
            pppppppcStack_98 = pppppppcStack_190;
            pppppppcStack_a0 = pppppppcStack_198;
            pppppppcStack_90 = pppppppcStack_188;
            pppppppcStack_b0 = *(char ********)(lVar22 + 0x60);
            pppppppcStack_a8 = *(char ********)(lVar22 + 0x68);
            pppppppcStack_c8 = *(char ********)(lVar22 + 0x50);
            pppppppcStack_c0 = *(char ********)(lVar22 + 0x58);
            pppppppcStack_d0 = (char *******)0x1;
            if (pppppppcStack_c8 == (char *******)0x0) {
              pppppppcStack_d0 = (char *******)0x2;
            }
            pppppppcStack_88 = *(char ********)(lVar22 + 8);
            pppppppcStack_e8 = (char *******)&pppppppcStack_180;
            pppppppcStack_e0 = (char *******)CONCAT71(pppppppcStack_e0._1_7_,1);
            pppppppcStack_130 = (char *******)&pppppppcStack_e8;
            pppppppcStack_128 = (char *******)&DAT_1061c2098;
            pppppppcStack_b8 = (char *******)0x1;
            if (pppppppcStack_b0 == (char *******)0x0) {
              pppppppcStack_b8 = (char *******)0x2;
            }
            pppppppcStack_78 = (char *******)&pppppppcStack_130;
            pcStack_80 = s__108b39f4f;
            pppppppcStack_100 = (char *******)&pppppppcStack_200;
            (**(code **)(puVar4 + 0x20))(puVar5,&pppppppcStack_d0);
          }
        }
      }
      cVar10 = pppppppcVar24 < pppppppcStack_200;
      if (pppppppcStack_200 < pppppppcVar24) {
        cVar10 = -1;
      }
      if (cVar10 == '\0') {
        pppppppcStack_c8 = (char *******)param_2[1];
        pppppppcStack_d0 = (char *******)*param_2;
        pppppppcStack_b8 = (char *******)param_2[3];
        pppppppcStack_c0 = (char *******)param_2[2];
        FUN_100813518(param_3,&pppppppcStack_d0);
        goto LAB_100826afc;
      }
      if (cVar10 == '\x01') {
        pppppppcStack_178 = (char *******)param_2[1];
        pppppppcStack_180 = (char *******)*param_2;
        lStack_168 = param_2[3];
        pppppppcVar25 = (char *******)param_2[2];
        pppppppcStack_170 = pppppppcVar25;
        pppppppcStack_160 = pppppppcVar24;
        if ((*(byte *)(param_3 + 9) & 1) == 0) {
          if (pppppppcVar25 <= pppppppcVar24) {
            pppppppcVar24 = pppppppcVar25;
          }
          uVar14 = param_3[3];
          if ((uVar14 != 0) &&
             (uVar15 = param_3[2], (char *******)(*param_3 - uVar15) < pppppppcVar24)) {
            lVar22 = uVar15 - uVar14;
            if (uVar15 < uVar14) {
              __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (0,uVar14,uVar15,&UNK_10b406aa8);
              goto LAB_100826bc4;
            }
            param_3[2] = 0;
            if (lVar22 != 0) {
              _memmove(param_3[1],param_3[1] + uVar14,lVar22);
              param_3[2] = lVar22;
            }
            param_3[3] = 0;
          }
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
              ((bRam000000010b6372a8 - 1 < 2 ||
               ((bRam000000010b6372a8 != 0 &&
                (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                                    ), cVar10 != '\0')))))) &&
             (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                                 ), iVar11 != 0)) {
            ppppppcStack_f0 = (char ******)(param_3[2] - param_3[3]);
            lStack_118 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                         + 0x30;
            pppppppcStack_d0 = &ppppppcStack_f0;
            pppppppcStack_c8 =
                 (char *******)
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppppppcStack_c0 = (char *******)&pppppppcStack_140;
            pppppppcStack_b8 =
                 (char *******)
                 &
                 __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
            ;
            pppppppcStack_f8 = (char *******)&pppppppcStack_d0;
            pppppppcStack_100 = (char *******)s__buffer_flatten__head_remaining___108ac88b4;
            pppppppcStack_110 = (char *******)&pppppppcStack_100;
            pppppppcStack_108 = (char *******)&UNK_10b208fd0;
            pppppppcStack_128 = (char *******)&pppppppcStack_110;
            pppppppcStack_130 = (char *******)0x1;
            uStack_120 = 1;
            pppppppcStack_140 = pppppppcVar24;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                       ,&pppppppcStack_130);
            lVar22 = 
            ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pppppppcStack_e0 =
                   *(char ********)
                    (
                    ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                    + 0x20);
              uStack_d8 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                           + 0x28);
              pppppppcStack_e8 = (char *******)0x5;
              puVar4 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_10b3c24c8;
              }
              puVar5 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar5 = &UNK_109adfc03;
              }
              iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_e8);
              if (iVar11 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar22,puVar5,puVar4,&pppppppcStack_e8,&pppppppcStack_130);
              }
            }
          }
          else {
            lVar22 = 
            ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pppppppcStack_e0 =
                   *(char ********)
                    (
                    ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                    + 0x20);
              uStack_d8 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                           + 0x28);
              pppppppcStack_e8 = (char *******)0x5;
              puVar4 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_10b3c24c8;
              }
              puVar5 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar5 = &UNK_109adfc03;
              }
              iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_e8);
              if (iVar11 != 0) {
                ppppppcStack_f0 = (char ******)(param_3[2] - param_3[3]);
                lStack_118 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h970a9e5c5ae7c6aaE
                             + 0x30;
                pppppppcStack_d0 = &ppppppcStack_f0;
                pppppppcStack_c8 =
                     (char *******)
                     &
                     __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                ;
                pppppppcStack_c0 = (char *******)&pppppppcStack_140;
                pppppppcStack_b8 =
                     (char *******)
                     &
                     __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                ;
                pppppppcStack_f8 = (char *******)&pppppppcStack_d0;
                pppppppcStack_100 = (char *******)s__buffer_flatten__head_remaining___108ac88b4;
                pppppppcStack_110 = (char *******)&pppppppcStack_100;
                pppppppcStack_108 = (char *******)&UNK_10b208fd0;
                pppppppcStack_128 = (char *******)&pppppppcStack_110;
                pppppppcStack_130 = (char *******)0x1;
                uStack_120 = 1;
                pppppppcStack_140 = pppppppcVar24;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar22,puVar5,puVar4,&pppppppcStack_e8,&pppppppcStack_130);
              }
            }
          }
          pppppppcVar20 = pppppppcStack_178;
          pppppppcVar21 = pppppppcStack_170;
          pppppppcVar8 = pppppppcStack_160;
          if (pppppppcVar24 != (char *******)0x0) {
            lVar22 = param_3[2];
            pppppppcVar23 = pppppppcStack_160;
            do {
              if ((char *******)(*param_3 - lVar22) < pppppppcVar24) {
                thunk_FUN_108855060(param_3,lVar22,pppppppcVar24,1,1);
                lVar22 = param_3[2];
              }
              _memcpy(lVar22 + param_3[1],pppppppcVar20,pppppppcVar24);
              lVar22 = lVar22 + (long)pppppppcVar24;
              param_3[2] = lVar22;
              pppppppcVar8 = (char *******)((long)pppppppcVar23 - (long)pppppppcVar24);
              if (pppppppcVar23 < pppppppcVar24) {
                pppppppcStack_178 = pppppppcVar20;
                pppppppcStack_170 = pppppppcVar21;
                pppppppcStack_160 = pppppppcVar23;
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cd2e85,0x23,&UNK_10b24a6b8);
                goto LAB_100826bc4;
              }
              pppppppcVar25 = (char *******)((long)pppppppcVar21 - (long)pppppppcVar24);
              pppppppcStack_100 = pppppppcVar24;
              if (pppppppcVar21 < pppppppcVar24) {
                pppppppcStack_d0 = (char *******)&pppppppcStack_100;
                pppppppcStack_c8 = (char *******)&DAT_100c929e0;
                pppppppcStack_c0 = (char *******)&pppppppcStack_130;
                pppppppcStack_b8 = (char *******)&DAT_100c929e0;
                pppppppcStack_178 = pppppppcVar20;
                pppppppcStack_170 = pppppppcVar21;
                pppppppcStack_160 = pppppppcVar23;
                pppppppcStack_130 = pppppppcVar21;
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (s__cannot_advance_past__remaining__108aba12e,&pppppppcStack_d0,
                           &UNK_10b243fb8);
                goto LAB_100826bc4;
              }
              pppppppcVar20 = (char *******)((long)pppppppcVar20 + (long)pppppppcVar24);
              pppppppcVar24 = pppppppcVar8;
              if (pppppppcVar25 <= pppppppcVar8) {
                pppppppcVar24 = pppppppcVar25;
              }
              pppppppcVar21 = pppppppcVar25;
              pppppppcVar23 = pppppppcVar8;
            } while (pppppppcVar24 != (char *******)0x0);
          }
          pppppppcStack_160 = pppppppcVar8;
          pppppppcStack_170 = pppppppcVar21;
          pppppppcStack_178 = pppppppcVar20;
          ppppppcVar16 = pppppppcStack_180[4];
          plVar12 = &lStack_168;
          pppppppcVar24 = pppppppcStack_178;
          goto LAB_100826614;
        }
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bRam000000010b637290 - 1 < 2 ||
             ((bRam000000010b637290 != 0 &&
              (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                                  ), cVar10 != '\0')))) &&
            (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                                ),
            lVar22 = 
            ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
            , iVar11 != 0)))) {
          lVar2 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                  + 0x30;
          lVar6 = param_3[2];
          lVar7 = param_3[3];
          uVar14 = param_3[7];
          if (uVar14 == 0) {
            lVar18 = 0;
            uVar15 = 0;
            lVar19 = 0;
          }
          else {
            uVar15 = param_3[4];
            uVar3 = 0;
            if (uVar15 <= (ulong)param_3[6]) {
              uVar3 = uVar15;
            }
            lVar18 = param_3[6] - uVar3;
            lVar19 = uVar14 - (uVar15 - lVar18);
            if (uVar14 < uVar15 - lVar18 || lVar19 == 0) {
              lVar19 = 0;
              uVar15 = lVar18 + uVar14;
            }
          }
          pppppppcStack_c0 = (char *******)param_3[5];
          pppppppcStack_d0 = (char *******)((long)pppppppcStack_c0 + lVar18 * 0x50);
          pppppppcStack_c8 = (char *******)((long)pppppppcStack_c0 + uVar15 * 0x50);
          pppppppcStack_b8 = (char *******)((long)pppppppcStack_c0 + lVar19 * 0x50);
          lVar19 = FUN_1004d8568(&pppppppcStack_d0);
          ppppppcStack_f0 = (char ******)((lVar6 - lVar7) + lVar19);
          pppppppcStack_140 = pppppppcVar24;
          if (pppppppcStack_170 <= pppppppcVar24) {
            pppppppcStack_140 = pppppppcStack_170;
          }
          pppppppcStack_d0 = &ppppppcStack_f0;
          pppppppcStack_c8 =
               (char *******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppppppcStack_c0 = (char *******)&pppppppcStack_140;
          pppppppcStack_b8 =
               (char *******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppppppcStack_100 = (char *******)s_buffer_queue__head_remaining_____108ac88eb;
          pppppppcStack_110 = (char *******)&pppppppcStack_100;
          pppppppcStack_108 = (char *******)&UNK_10b208fd0;
          pppppppcStack_128 = (char *******)&pppppppcStack_110;
          pppppppcStack_130 = (char *******)0x1;
          uStack_120 = 1;
          lStack_118 = lVar2;
          pppppppcStack_f8 = (char *******)&pppppppcStack_d0;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar22,&pppppppcStack_130);
          lVar22 = 
          ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            pppppppcStack_e0 =
                 *(char ********)
                  (
                  ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                  + 0x20);
            uStack_d8 = *(undefined8 *)
                         (
                         ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                         + 0x28);
            pppppppcStack_e8 = (char *******)0x5;
            puVar4 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_10b3c24c8;
            }
            puVar5 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar5 = &UNK_109adfc03;
            }
            iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_e8);
            if (iVar11 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar22,puVar5,puVar4,&pppppppcStack_e8,&pppppppcStack_130);
            }
          }
        }
        else {
          lVar22 = 
          ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            pppppppcStack_e0 =
                 *(char ********)
                  (
                  ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                  + 0x20);
            uStack_d8 = *(undefined8 *)
                         (
                         ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                         + 0x28);
            pppppppcStack_e8 = (char *******)0x5;
            puVar4 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_10b3c24c8;
            }
            puVar5 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar5 = &UNK_109adfc03;
            }
            iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_e8);
            if (iVar11 != 0) {
              lVar2 = ___ZN14rama_http_core5proto2h12io17WriteBuf_LT_B_GT_6buffer10__CALLSITE17h849807ec4744c9b3E
                      + 0x30;
              lVar6 = param_3[2];
              lVar7 = param_3[3];
              uVar14 = param_3[7];
              if (uVar14 == 0) {
                lVar18 = 0;
                uVar15 = 0;
                lVar19 = 0;
              }
              else {
                uVar15 = param_3[4];
                uVar3 = 0;
                if (uVar15 <= (ulong)param_3[6]) {
                  uVar3 = uVar15;
                }
                lVar18 = param_3[6] - uVar3;
                lVar19 = uVar14 - (uVar15 - lVar18);
                if (uVar14 < uVar15 - lVar18 || lVar19 == 0) {
                  lVar19 = 0;
                  uVar15 = lVar18 + uVar14;
                }
              }
              pppppppcStack_c0 = (char *******)param_3[5];
              pppppppcStack_d0 = (char *******)((long)pppppppcStack_c0 + lVar18 * 0x50);
              pppppppcStack_c8 = (char *******)((long)pppppppcStack_c0 + uVar15 * 0x50);
              pppppppcStack_b8 = (char *******)((long)pppppppcStack_c0 + lVar19 * 0x50);
              lVar19 = FUN_1004d8568(&pppppppcStack_d0);
              ppppppcStack_f0 = (char ******)((lVar6 - lVar7) + lVar19);
              pppppppcStack_140 = pppppppcVar24;
              if (pppppppcStack_170 <= pppppppcVar24) {
                pppppppcStack_140 = pppppppcStack_170;
              }
              pppppppcStack_d0 = &ppppppcStack_f0;
              pppppppcStack_c8 =
                   (char *******)
                   &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              pppppppcStack_c0 = (char *******)&pppppppcStack_140;
              pppppppcStack_b8 =
                   (char *******)
                   &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
              ;
              pppppppcStack_100 = (char *******)s_buffer_queue__head_remaining_____108ac88eb;
              pppppppcStack_110 = (char *******)&pppppppcStack_100;
              pppppppcStack_108 = (char *******)&UNK_10b208fd0;
              pppppppcStack_128 = (char *******)&pppppppcStack_110;
              pppppppcStack_130 = (char *******)0x1;
              uStack_120 = 1;
              lStack_118 = lVar2;
              pppppppcStack_f8 = (char *******)&pppppppcStack_d0;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar22,puVar5,puVar4,&pppppppcStack_e8,&pppppppcStack_130);
            }
          }
        }
        pppppppcStack_c0 = pppppppcStack_178;
        pppppppcStack_c8 = pppppppcStack_180;
        pppppppcStack_b0 = (char *******)lStack_168;
        pppppppcStack_b8 = pppppppcStack_170;
        pppppppcStack_a8 = pppppppcStack_160;
        pppppppcStack_d0 = (char *******)0x1;
        uVar14 = param_3[4];
        uVar15 = param_3[7];
        if (uVar15 == uVar14) {
          __ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4grow17h96aff5fc3d6310dcE();
          goto LAB_100826ab8;
        }
        goto LAB_100826ac0;
      }
    }
    else if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            (((bRam000000010b637830 - 1 < 2 ||
              ((bRam000000010b637830 != 0 &&
               (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE
                                   ), cVar10 != '\0')))) &&
             (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE
                                 ), iVar11 != 0)))) {
      pppppppcStack_b8 =
           (char *******)
           (
           ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE
           + 0x30);
      pppppppcStack_128 =
           (char *******)
           &
           __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      pppppppcStack_e0 = (char *******)&pppppppcStack_130;
      pppppppcStack_e8 = (char *******)s_close_delimited_write_B_108ac8d2e;
      pppppppcStack_100 = (char *******)&pppppppcStack_e8;
      pppppppcStack_f8 = (char *******)&UNK_10b208fd0;
      pppppppcStack_c8 = (char *******)&pppppppcStack_100;
      pppppppcStack_d0 = (char *******)0x1;
      pppppppcStack_c0 = (char *******)0x1;
      pppppppcStack_130 = (char *******)&pppppppcStack_200;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE
                 ,&pppppppcStack_d0);
      lVar22 = 
      ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppcStack_178 =
             *(char ********)
              (
              ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE
              + 0x20);
        pppppppcStack_170 =
             *(char ********)
              (
              ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE
              + 0x28);
        pppppppcStack_180 = (char *******)0x5;
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_180);
        if (iVar11 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar22,puVar5,puVar4,&pppppppcStack_180,&pppppppcStack_d0);
        }
      }
    }
    else {
      lVar22 = 
      ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppcStack_150 =
             *(char ********)
              (
              ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE
              + 0x20);
        pppppppcStack_148 =
             *(char ********)
              (
              ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE
              + 0x28);
        pppppppcStack_158 = (char *******)0x5;
        puVar4 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_10b3c24c8;
        }
        puVar5 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(puVar4 + 0x18))(puVar5,&pppppppcStack_158);
        if (iVar11 != 0) {
          lStack_168 = ___ZN14rama_http_core5proto2h16encode7Encoder14encode_and_end10__CALLSITE17h4be3c804336a526bE
                       + 0x30;
          pppppppcStack_f8 =
               (char *******)
               &
               __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          pppppppcStack_108 = (char *******)&pppppppcStack_100;
          pppppppcStack_110 = (char *******)s_close_delimited_write_B_108ac8d2e;
          pppppppcStack_140 = (char *******)&pppppppcStack_110;
          puStack_138 = &UNK_10b208fd0;
          pppppppcStack_178 = (char *******)&pppppppcStack_140;
          pppppppcStack_180 = (char *******)0x1;
          pppppppcStack_170 = (char *******)0x1;
          pppppppcStack_b0 = *(char ********)(lVar22 + 0x60);
          pppppppcStack_a8 = *(char ********)(lVar22 + 0x68);
          pppppppcStack_c8 = *(char ********)(lVar22 + 0x50);
          pppppppcStack_c0 = *(char ********)(lVar22 + 0x58);
          pppppppcStack_d0 = (char *******)0x1;
          if (pppppppcStack_c8 == (char *******)0x0) {
            pppppppcStack_d0 = (char *******)0x2;
          }
          pppppppcStack_88 = *(char ********)(lVar22 + 8);
          pppppppcStack_e8 = (char *******)&pppppppcStack_180;
          pppppppcStack_e0 = (char *******)CONCAT71(pppppppcStack_e0._1_7_,1);
          pppppppcStack_130 = (char *******)&pppppppcStack_e8;
          pppppppcStack_128 = (char *******)&DAT_1061c2098;
          pppppppcStack_b8 = (char *******)0x1;
          if (pppppppcStack_b0 == (char *******)0x0) {
            pppppppcStack_b8 = (char *******)0x2;
          }
          pppppppcStack_98 = pppppppcStack_150;
          pppppppcStack_a0 = pppppppcStack_158;
          pppppppcStack_90 = pppppppcStack_148;
          pppppppcStack_78 = (char *******)&pppppppcStack_130;
          pcStack_80 = s__108b39f4f;
          pppppppcStack_100 = (char *******)&pppppppcStack_200;
          (**(code **)(puVar4 + 0x20))(puVar5,&pppppppcStack_d0);
        }
      }
    }
    pppppppcStack_c8 = (char *******)param_2[1];
    pppppppcStack_d0 = (char *******)*param_2;
    pppppppcStack_b8 = (char *******)param_2[3];
    pppppppcStack_c0 = (char *******)param_2[2];
    FUN_100813518(param_3,&pppppppcStack_d0);
    bVar13 = 0;
  }
  return bVar13 & 1;
}

