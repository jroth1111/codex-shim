
/* WARNING: Possible PIC construction at 0x000100819bfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100819c00) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008197b4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  long *plVar10;
  undefined *puVar11;
  long *******ppppppplVar12;
  long extraout_x1;
  long *****ppppplVar13;
  ulong uVar14;
  long *******extraout_x9;
  long *******extraout_x9_00;
  uint uVar15;
  ulong in_x15;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong extraout_x15_02;
  ulong extraout_x15_03;
  ulong extraout_x15_04;
  ulong extraout_x15_05;
  ulong extraout_x15_06;
  undefined8 uVar16;
  undefined8 unaff_x20;
  undefined *unaff_x22;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long ******pppppplVar21;
  undefined8 uVar22;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  char *pcStack_310;
  long *******ppppppplStack_308;
  long *******ppppppplStack_300;
  undefined1 uStack_2f8;
  long *******ppppppplStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  uint uStack_294;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  long ******pppppplStack_280;
  long *******ppppppplStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  char *pcStack_230;
  long *******ppppppplStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long ******pppppplStack_1c8;
  undefined *puStack_1c0;
  long *****ppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  char *pcStack_140;
  long *******ppppppplStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined3 uStack_10c;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  undefined8 uStack_f8;
  long ******pppppplStack_f0;
  long *******ppppppplStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  undefined *puStack_88;
  long *******ppppppplStack_80;
  undefined *puStack_78;
  
  pppppplVar21 = (long ******)(param_2 + 0xe8);
  ppppplVar13 = *pppppplVar21;
  if ((long)ppppplVar13 < 2) {
    if (ppppplVar13 != (long *****)0x1) goto LAB_10081a428;
    if (*(long *)(param_2 + 0x168) == -0x7ffffffffffffffd) {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bVar7 = bRam000000010b637458, bRam000000010b637458 - 1 < 2 ||
           ((bRam000000010b637458 != 0 &&
            (bVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                               ), in_x15 = extraout_x15_05, bVar7 != 0)))))) &&
         (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                             ,bVar7), in_x15 = extraout_x15_01, iVar9 != 0)) {
        puStack_d8 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                     + 0x30;
        ppppppplStack_1e8 = (long *******)&UNK_108cb0cb7;
        ppppppplStack_1e0 = (long *******)0x45;
        ppppppplStack_108 = (long *******)&ppppppplStack_1e8;
        ppppppplStack_100 = (long *******)&UNK_10b208fd0;
        ppppppplStack_e8 = (long *******)&ppppppplStack_108;
        pppppplStack_f0 = (long ******)0x1;
        uStack_e0 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                   ,&pppppplStack_f0);
        puVar11 = 
        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
        ;
        in_x15 = extraout_x15_02;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          ppppppplStack_278 =
               *(long ********)
                (
                ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                + 0x20);
          uStack_270 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                        + 0x28);
          pppppplStack_280 = (long ******)0x5;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar3 + 0x18))(puVar2,&pppppplStack_280);
          in_x15 = extraout_x15_03;
          unaff_x22 = puVar11;
          if (iVar9 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (puVar11,puVar2,puVar3,&pppppplStack_280,&pppppplStack_f0);
            in_x15 = extraout_x15_04;
          }
        }
      }
      else {
        puVar11 = 
        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_120 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                        + 0x20);
          uStack_118 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                        + 0x28);
          uStack_128 = 5;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          unaff_x22 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar3 + 0x18))(unaff_x22,&uStack_128);
          in_x15 = extraout_x15;
          if (iVar9 != 0) {
            puStack_268 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h476d256546eea57cE
                          + 0x30;
            ppppppplStack_80 = (long *******)&UNK_108cb0cb7;
            puStack_78 = (undefined *)0x45;
            ppppppplStack_90 = (long *******)&ppppppplStack_80;
            puStack_88 = &UNK_10b208fd0;
            ppppppplStack_278 = (long *******)&ppppppplStack_90;
            pppppplStack_280 = (long ******)0x1;
            uStack_270 = 1;
            lStack_d0 = *(long *)(puVar11 + 0x60);
            uStack_c8 = *(undefined8 *)(puVar11 + 0x68);
            ppppppplStack_e8 = *(long ********)(puVar11 + 0x50);
            uStack_e0 = *(undefined8 *)(puVar11 + 0x58);
            pppppplStack_f0 = (long ******)0x1;
            if (ppppppplStack_e8 == (long *******)0x0) {
              pppppplStack_f0 = (long ******)0x2;
            }
            uStack_a8 = *(undefined8 *)(puVar11 + 8);
            ppppppplStack_108 = &pppppplStack_280;
            ppppppplStack_100 = (long *******)CONCAT71(ppppppplStack_100._1_7_,1);
            ppppppplStack_1e8 = (long *******)&ppppppplStack_108;
            ppppppplStack_1e0 = (long *******)&DAT_1061c2098;
            puStack_d8 = (undefined *)0x1;
            if (lStack_d0 == 0) {
              puStack_d8 = (undefined *)0x2;
            }
            ppppppplStack_b8 = (long *******)uStack_120;
            ppppppplStack_c0 = (long *******)uStack_128;
            uStack_b0 = uStack_118;
            ppppppplStack_98 = (long *******)&ppppppplStack_1e8;
            pcStack_a0 = s__108b39f4f;
            (**(code **)(puVar3 + 0x20))(unaff_x22,&pppppplStack_f0);
            in_x15 = extraout_x15_00;
          }
        }
      }
      lVar6 = *(long *)(param_2 + 0x20);
      if ((ulong)(*(long *)(param_2 + 0x10) - lVar6) < 0x19) goto LAB_10081a44c;
      goto LAB_100819d20;
    }
  }
  else {
    if (ppppplVar13 == (long *****)0x2) {
      FUN_10081f944(&pppppplStack_280,param_2 + 0xf0,param_3,param_2);
      if (pppppplStack_280 == (long ******)0x5) {
        *param_1 = 6;
        return;
      }
      if (pppppplStack_280 == (long ******)0x4) {
        ppppppplStack_1f0 = ppppppplStack_278;
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
            ((bRam000000010b6374a0 - 1 < 2 ||
             ((bRam000000010b6374a0 != 0 &&
              (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                                 ), cVar8 != '\0')))))) &&
           (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                              ), iVar9 != 0)) {
          lStack_1d0 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                       + 0x30;
          ppppppplStack_1a8 = (long *******)&ppppppplStack_1f0;
          pcStack_1a0 = 
          __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          ppppppplStack_1b0 = (long *******)&ppppppplStack_1a8;
          ppppplStack_1b8 = (long *****)s_incoming_body_decode_error__108ac8b6f;
          pppppplStack_1c8 = &ppppplStack_1b8;
          puStack_1c0 = &UNK_10b208fd0;
          ppppppplStack_1e0 = &pppppplStack_1c8;
          ppppppplStack_1e8 = (long *******)0x1;
          uStack_1d8 = 1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                     ,&ppppppplStack_1e8);
          lVar6 = 
          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_100 =
                 *(long ********)
                  (
                  ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                  + 0x20);
            uStack_f8 = *(undefined8 *)
                         (
                         ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                         + 0x28);
            ppppppplStack_108 = (long *******)0x4;
            puVar11 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar11 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar11 + 0x18))(puVar3,&ppppppplStack_108);
            if (iVar9 != 0) {
              lStack_d0 = *(long *)(lVar6 + 0x60);
              uStack_c8 = *(undefined8 *)(lVar6 + 0x68);
              ppppppplStack_e8 = *(long ********)(lVar6 + 0x50);
              uStack_e0 = *(undefined8 *)(lVar6 + 0x58);
              pppppplStack_f0 = (long ******)0x1;
              if (ppppppplStack_e8 == (long *******)0x0) {
                pppppplStack_f0 = (long ******)0x2;
              }
              uStack_a8 = *(undefined8 *)(lVar6 + 8);
              ppppppplStack_90 = (long *******)&ppppppplStack_1e8;
              puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
              ppppppplStack_80 = (long *******)&ppppppplStack_90;
              puStack_78 = &DAT_1061c2098;
              puStack_d8 = (undefined *)0x1;
              if (lStack_d0 == 0) {
                puStack_d8 = (undefined *)0x2;
              }
              ppppppplStack_b8 = ppppppplStack_100;
              ppppppplStack_c0 = ppppppplStack_108;
              uStack_b0 = uStack_f8;
              ppppppplStack_98 = (long *******)&ppppppplStack_80;
              pcStack_a0 = s__108b39f4f;
              (**(code **)(puVar11 + 0x20))(puVar3,&pppppplStack_f0);
            }
          }
        }
        else {
          lVar6 = 
          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_190 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                          + 0x20);
            uStack_188 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                          + 0x28);
            uStack_198 = 4;
            puVar11 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar11 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar11 + 0x18))(puVar3,&uStack_198);
            if (iVar9 != 0) {
              puStack_d8 = (undefined *)
                           (
                           ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hef14ebe7153b4668E
                           + 0x30);
              ppppppplStack_1e8 = (long *******)&ppppppplStack_1f0;
              ppppppplStack_1e0 =
                   (long *******)
                   __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
              ;
              ppppppplStack_100 = (long *******)&ppppppplStack_1e8;
              ppppppplStack_108 = (long *******)s_incoming_body_decode_error__108ac8b6f;
              ppppppplStack_80 = (long *******)&ppppppplStack_108;
              puStack_78 = &UNK_10b208fd0;
              ppppppplStack_e8 = (long *******)&ppppppplStack_80;
              pppppplStack_f0 = (long ******)0x1;
              uStack_e0 = 1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar6,puVar3,puVar11,&uStack_198,&pppppplStack_f0);
            }
          }
        }
        pppppplStack_f0 = (long ******)0x4;
        ppppppplStack_e8 = ppppppplStack_1f0;
LAB_10081a064:
        ppppplVar13 = (long *****)0x4;
      }
      else {
        pppppplStack_f0 = pppppplStack_280;
        ppppppplStack_e8 = ppppppplStack_278;
        ppppppplStack_b8 = (long *******)uStack_248;
        ppppppplStack_c0 = (long *******)uStack_250;
        uStack_a8 = uStack_238;
        uStack_b0 = uStack_240;
        ppppppplStack_98 = ppppppplStack_228;
        pcStack_a0 = pcStack_230;
        puStack_d8 = puStack_268;
        uStack_e0 = uStack_270;
        uStack_c8 = uStack_258;
        lStack_d0 = lStack_260;
        if (pppppplStack_280 != (long ******)0x3) {
          uStack_158 = uStack_248;
          uStack_160 = uStack_250;
          uStack_148 = uStack_238;
          uStack_150 = uStack_240;
          ppppppplStack_138 = ppppppplStack_228;
          pcStack_140 = pcStack_230;
          puStack_178 = puStack_268;
          uStack_180 = uStack_270;
          uStack_168 = uStack_258;
          lStack_170 = lStack_260;
          goto LAB_10081a064;
        }
        lVar6 = *(ulong *)(param_2 + 0xf0) - 2;
        if (*(ulong *)(param_2 + 0xf0) < 2) {
          lVar6 = 1;
        }
        if (lVar6 == 2) {
          if ((*(byte *)(param_2 + 0xf8) & 1) != 0) goto LAB_100819b88;
LAB_10081a170:
          if (puStack_268 != (undefined *)0x0) goto LAB_10081a124;
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
              ((bRam000000010b637470 - 1 < 2 ||
               ((bRam000000010b637470 != 0 &&
                (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                                   ), cVar8 != '\0')))))) &&
             (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                                ), iVar9 != 0)) {
            lStack_1d0 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                         + 0x30;
            ppppppplStack_108 = (long *******)&UNK_108cb0cf2;
            ppppppplStack_100 = (long *******)0x41;
            ppppppplStack_80 = (long *******)&ppppppplStack_108;
            puStack_78 = &UNK_10b208fd0;
            ppppppplStack_1e0 = (long *******)&ppppppplStack_80;
            ppppppplStack_1e8 = (long *******)0x1;
            uStack_1d8 = 1;
            FUN_10081a634(&ppppppplStack_1e8);
          }
          else {
            lVar6 = 
            ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
              uStack_200 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                            + 0x20);
              uStack_1f8 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                            + 0x28);
              uStack_208 = 1;
              puVar11 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar11 = &UNK_10b3c24c8;
              }
              puVar3 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_109adfc03;
              }
              iVar9 = (**(code **)(puVar11 + 0x18))(puVar3,&uStack_208);
              if (iVar9 != 0) {
                lStack_1d0 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17h7186caed309e9af4E
                             + 0x30;
                ppppppplStack_108 = (long *******)&UNK_108cb0cf2;
                ppppppplStack_100 = (long *******)0x41;
                ppppppplStack_80 = (long *******)&ppppppplStack_108;
                puStack_78 = &UNK_10b208fd0;
                ppppppplStack_1e0 = (long *******)&ppppppplStack_80;
                ppppppplStack_1e8 = (long *******)0x1;
                uStack_1d8 = 1;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar6,puVar3,puVar11,&uStack_208,&ppppppplStack_1e8);
              }
            }
          }
          ppppplVar13 = (long *****)0x4;
LAB_10081a324:
          if (pppppplStack_f0 == (long ******)0x3) {
            (*(code *)ppppppplStack_e8[4])(&lStack_d0,uStack_e0,puStack_d8);
            ppppppplStack_e8 = extraout_x9;
          }
          else {
            FUN_100def764(&pppppplStack_f0);
            ppppppplStack_e8 = extraout_x9_00;
          }
          pppppplStack_f0 = (long ******)0x5;
        }
        else {
          if (lVar6 != 1) {
            if (*(long *)(param_2 + 0xf8) == 0) goto LAB_100819b88;
            goto LAB_10081a170;
          }
          if (*(char *)(param_2 + 0x148) != '\f') goto LAB_10081a170;
LAB_100819b88:
          if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
            puVar11 = &
                      __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
            ;
            if (((bRam000000010b637488 - 1 < 2) ||
                ((bRam000000010b637488 != 0 &&
                 (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                                    ), cVar8 != '\0')))) &&
               (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                                  ), iVar9 != 0)) {
              lStack_1d0 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                           + 0x30;
              ppppppplStack_108 = (long *******)&UNK_108cb0d12;
              ppppppplStack_100 = (long *******)0x2f;
              ppppppplStack_80 = (long *******)&ppppppplStack_108;
              puStack_78 = &UNK_10b208fd0;
              ppppppplStack_1e0 = (long *******)&ppppppplStack_80;
              ppppppplStack_1e8 = (long *******)0x1;
              uStack_1d8 = 1;
              ppppppplVar12 = (long *******)&ppppppplStack_1e8;
              uVar22 = 0x100819c00;
              goto SUB_10081a4f8;
            }
          }
          lVar6 = 
          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_218 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                          + 0x20);
            uStack_210 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                          + 0x28);
            uStack_220 = 4;
            puVar11 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar11 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar11 + 0x18))(puVar3,&uStack_220);
            if (iVar9 != 0) {
              lStack_1d0 = ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                           + 0x30;
              ppppppplStack_108 = (long *******)&UNK_108cb0d12;
              ppppppplStack_100 = (long *******)0x2f;
              ppppppplStack_80 = (long *******)&ppppppplStack_108;
              puStack_78 = &UNK_10b208fd0;
              ppppppplStack_1e0 = (long *******)&ppppppplStack_80;
              ppppppplStack_1e8 = (long *******)0x1;
              uStack_1d8 = 1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar6,puVar3,puVar11,&uStack_220,&ppppppplStack_1e8);
            }
          }
          if (puStack_d8 == (undefined *)0x0) {
            ppppplVar13 = (long *****)0x3;
            goto LAB_10081a324;
          }
          uStack_158 = ppppppplStack_b8;
          uStack_160 = ppppppplStack_c0;
          uStack_148 = uStack_a8;
          uStack_150 = uStack_b0;
          ppppppplStack_138 = ppppppplStack_98;
          pcStack_140 = pcStack_a0;
          puStack_178 = puStack_d8;
          uStack_180 = uStack_e0;
          uStack_168 = uStack_c8;
          lStack_170 = lStack_d0;
          ppppplVar13 = (long *****)0x3;
        }
      }
      ppppppplStack_b8 = (long *******)uStack_158;
      ppppppplStack_c0 = (long *******)uStack_160;
      uStack_a8 = uStack_148;
      uStack_b0 = uStack_150;
      ppppppplStack_98 = ppppppplStack_138;
      pcStack_a0 = pcStack_140;
      puStack_d8 = puStack_178;
      uStack_e0 = uStack_180;
      uStack_c8 = uStack_168;
      lStack_d0 = lStack_170;
      if ((((*pppppplVar21 == (long *****)0x1) || (*pppppplVar21 == (long *****)0x2)) &&
          (*(ulong *)(param_2 + 0xf0) < 2)) && (*(long *)(param_2 + 0x120) != 0)) {
        plVar17 = *(long **)(param_2 + 0x138);
        if (((ulong)plVar17 & 1) == 0) {
          lVar6 = plVar17[4];
          plVar17[4] = lVar6 + -1;
          LORelease();
          if (lVar6 == 1) {
            if (*plVar17 != 0) {
              _free(plVar17[1]);
            }
            goto LAB_10081a104;
          }
        }
        else if (*(long *)(param_2 + 0x130) + ((ulong)plVar17 >> 5) != 0) {
          plVar17 = (long *)(*(long *)(param_2 + 0x120) - ((ulong)plVar17 >> 5));
LAB_10081a104:
          _free(plVar17);
        }
      }
      *pppppplVar21 = ppppplVar13;
      FUN_10081c074(param_2 + 200);
      FUN_100816a98(param_2,param_3);
LAB_10081a124:
      param_1[5] = uStack_c8;
      param_1[4] = lStack_d0;
      param_1[7] = ppppppplStack_b8;
      param_1[6] = ppppppplStack_c0;
      param_1[9] = uStack_a8;
      param_1[8] = uStack_b0;
      param_1[0xb] = ppppppplStack_98;
      param_1[10] = pcStack_a0;
      param_1[1] = ppppppplStack_e8;
      *param_1 = pppppplStack_f0;
      param_1[3] = puStack_d8;
      param_1[2] = uStack_e0;
      return;
    }
LAB_10081a428:
    ppppppplStack_e8 = (long *******)&DAT_1011c6264;
    pppppplStack_f0 = pppppplVar21;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s_Hinternal_error__entered_unreach_108ac8b8e,&pppppplStack_f0,&UNK_10b223540);
    lVar6 = extraout_x1;
LAB_10081a44c:
    thunk_FUN_108855060(param_2 + 0x10,lVar6,0x19,1,1);
    lVar6 = *(long *)(param_2 + 0x20);
    in_x15 = extraout_x15_06;
LAB_100819d20:
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x18) + lVar6);
    puVar1[1] = 0x6e6f432030303120;
    *puVar1 = 0x312e312f50545448;
    *(undefined8 *)((long)puVar1 + 0x11) = 0xa0d0a0d65756e69;
    *(undefined8 *)((long)puVar1 + 9) = 0x746e6f4320303031;
    *(long *)(param_2 + 0x20) = lVar6 + 0x19;
  }
  uVar20 = *(ulong *)(param_2 + 0xf0);
  lVar6 = uVar20 - 2;
  if (uVar20 < 2) {
    lVar6 = 1;
  }
  uStack_290 = param_3;
  puStack_288 = param_1;
  if ((lVar6 == 0) || (lVar6 != 1)) {
    uVar4 = *(undefined8 *)(param_2 + 0xf8);
    uVar5 = *(undefined8 *)(param_2 + 0x100);
    uVar16 = *(undefined8 *)(param_2 + 0x108);
    uVar22 = *(undefined8 *)(param_2 + 0x110);
    unaff_x20 = *(undefined8 *)(param_2 + 0x118);
    lVar6 = *(long *)(param_2 + 0x120);
    unaff_x22 = *(undefined **)(param_2 + 0x128);
    in_x15 = *(ulong *)(param_2 + 0x138);
    uVar19 = *(undefined8 *)(param_2 + 0x140);
    uVar15 = (uint)*(byte *)(param_2 + 0x148);
    uStack_10c = (undefined3)((uint)*(undefined4 *)(param_2 + 0x14c) >> 8);
    uStack_110 = *(undefined4 *)(param_2 + 0x149);
    ppppplVar13 = *pppppplVar21;
    puVar11 = *(undefined **)(param_2 + 0x130);
    plVar17 = plStack_2b0;
  }
  else {
    uVar15 = (uint)*(byte *)(param_2 + 0x148);
    uVar22 = *(undefined8 *)(param_2 + 0x110);
    unaff_x20 = *(undefined8 *)(param_2 + 0x118);
    lVar18 = *(long *)(param_2 + 0x120);
    if (lVar18 == 0) {
      lVar6 = 0;
    }
    else {
      uStack_294 = (uint)*(byte *)(param_2 + 0x148);
      unaff_x22 = *(undefined **)(param_2 + 0x128);
      if (unaff_x22 == (undefined *)0x0) {
        lVar6 = 1;
      }
      else {
        lVar6 = _malloc(unaff_x22);
        if (lVar6 == 0) {
          puVar11 = (undefined *)func_0x0001087c9084(1,unaff_x22);
          FUN_100e2f01c(&pppppplStack_f0);
          __Unwind_Resume(puVar11);
          uVar22 = 0x10081a4f8;
          ppppppplVar12 = (long *******)FUN_107c05ccc();
SUB_10081a4f8:
          puStack_2e0 = unaff_x22;
          lStack_2d8 = param_2;
          uStack_2d0 = unaff_x20;
          puStack_2c8 = puVar11;
          puStack_2c0 = &stack0xfffffffffffffff0;
          uStack_2b8 = uVar22;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                     ,ppppppplVar12);
          lVar6 = 
          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uStack_370 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                          + 0x20);
            uStack_368 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core5proto2h14conn21Conn_LT_I_C_B_C_T_GT_14poll_read_body10__CALLSITE17hd23702855f830a5bE
                          + 0x28);
            uStack_378 = 4;
            puVar11 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar11 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar9 = (**(code **)(puVar11 + 0x18))(puVar3,&uStack_378);
            if (iVar9 != 0) {
              lStack_340 = *(long *)(lVar6 + 0x60);
              uStack_338 = *(undefined8 *)(lVar6 + 0x68);
              lStack_358 = *(long *)(lVar6 + 0x50);
              uStack_350 = *(undefined8 *)(lVar6 + 0x58);
              uStack_360 = 1;
              if (lStack_358 == 0) {
                uStack_360 = 2;
              }
              uStack_318 = *(undefined4 *)(lVar6 + 8);
              uStack_314 = *(undefined4 *)(lVar6 + 0xc);
              uStack_2f8 = 1;
              ppppppplStack_2f0 = (long *******)&ppppppplStack_300;
              puStack_2e8 = &DAT_1061c2098;
              uStack_348 = 1;
              if (lStack_340 == 0) {
                uStack_348 = 2;
              }
              uStack_328 = uStack_370;
              uStack_330 = uStack_378;
              uStack_320 = uStack_368;
              ppppppplStack_308 = (long *******)&ppppppplStack_2f0;
              pcStack_310 = s__108b39f4f;
              ppppppplStack_300 = ppppppplVar12;
              (**(code **)(puVar11 + 0x20))(puVar3,&uStack_360);
            }
          }
          return;
        }
      }
      _memcpy(lVar6,lVar18,unaff_x22);
      uVar14 = 0x40 - LZCOUNT((ulong)unaff_x22 >> 10);
      if (6 < uVar14) {
        uVar14 = 7;
      }
      in_x15 = uVar14 << 2 | 1;
      uVar15 = uStack_294;
    }
    uVar19 = *(undefined8 *)(param_2 + 0x140);
    uVar20 = uVar20 & 1;
    uVar4 = *(undefined8 *)(param_2 + 0xf8);
    uVar5 = *(undefined8 *)(param_2 + 0x100);
    uVar16 = *(undefined8 *)(param_2 + 0x108);
    ppppplVar13 = *pppppplVar21;
    puVar11 = unaff_x22;
    plVar17 = plStack_2b0;
  }
  if ((((ppppplVar13 == (long *****)0x1) || (ppppplVar13 == (long *****)0x2)) &&
      (*(ulong *)(param_2 + 0xf0) < 2)) && (*(long *)(param_2 + 0x120) != 0)) {
    plStack_2b0 = *(long **)(param_2 + 0x138);
    if (((ulong)plStack_2b0 & 1) == 0) {
      lVar18 = plStack_2b0[4];
      plStack_2b0[4] = lVar18 + -1;
      LORelease();
      if (lVar18 != 1) goto LAB_100819f08;
      plVar10 = plStack_2b0;
      uStack_2a8 = in_x15;
      uStack_2a0 = unaff_x20;
      uStack_294 = uVar15;
      if (*plStack_2b0 != 0) {
        _free(plStack_2b0[1]);
        plVar10 = plStack_2b0;
        plVar17 = plStack_2b0;
      }
    }
    else {
      if (*(long *)(param_2 + 0x130) + ((ulong)plStack_2b0 >> 5) == 0) goto LAB_100819f08;
      plVar10 = (long *)(*(long *)(param_2 + 0x120) - ((ulong)plStack_2b0 >> 5));
      uStack_2a8 = in_x15;
      uStack_2a0 = unaff_x20;
      uStack_294 = uVar15;
    }
    plStack_2b0 = plVar17;
    _free(plVar10);
    unaff_x20 = uStack_2a0;
    in_x15 = uStack_2a8;
    uVar15 = uStack_294;
    plVar17 = plStack_2b0;
  }
LAB_100819f08:
  plStack_2b0 = plVar17;
  *(undefined8 *)(param_2 + 0xe8) = 2;
  *(ulong *)(param_2 + 0xf0) = uVar20;
  *(undefined8 *)(param_2 + 0xf8) = uVar4;
  *(undefined8 *)(param_2 + 0x100) = uVar5;
  *(undefined8 *)(param_2 + 0x108) = uVar16;
  *(undefined8 *)(param_2 + 0x110) = uVar22;
  *(undefined8 *)(param_2 + 0x118) = unaff_x20;
  *(long *)(param_2 + 0x120) = lVar6;
  *(undefined **)(param_2 + 0x128) = unaff_x22;
  *(undefined **)(param_2 + 0x130) = puVar11;
  *(ulong *)(param_2 + 0x138) = in_x15;
  *(undefined8 *)(param_2 + 0x140) = uVar19;
  *(char *)(param_2 + 0x148) = (char)uVar15;
  *(uint *)(param_2 + 0x14c) = CONCAT31(uStack_10c,uStack_110._3_1_);
  *(undefined4 *)(param_2 + 0x149) = uStack_110;
  FUN_1008197b4(puStack_288,param_2,uStack_290);
  return;
}

