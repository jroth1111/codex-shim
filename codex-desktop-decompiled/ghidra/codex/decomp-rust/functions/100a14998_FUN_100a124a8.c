
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a124a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  long ******pppppplVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  byte bVar17;
  uint uVar18;
  uint extraout_w8;
  long lVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 uVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  char *pcVar31;
  long *plVar32;
  long *****ppppplVar33;
  long lVar34;
  byte bVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long *****ppppplVar38;
  long lVar39;
  long lVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  long *****ppppplStack_690;
  long *****ppppplStack_688;
  long *****ppppplStack_680;
  long *****ppppplStack_678;
  undefined1 auStack_670 [16];
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long *****ppppplStack_5c0;
  long *****ppppplStack_5b8;
  long *****ppppplStack_5b0;
  long *****ppppplStack_5a8;
  long *****ppppplStack_5a0;
  long *****ppppplStack_598;
  long *****ppppplStack_590;
  long *****ppppplStack_588;
  long *****ppppplStack_580;
  long *****ppppplStack_578;
  long *****ppppplStack_570;
  long *****ppppplStack_568;
  undefined1 auStack_560 [24];
  long *****ppppplStack_548;
  long *****ppppplStack_540;
  long *****ppppplStack_538;
  long *****ppppplStack_530;
  long *****ppppplStack_528;
  undefined *puStack_520;
  undefined1 auStack_518 [24];
  long *****ppppplStack_500;
  long *****ppppplStack_4f8;
  undefined8 uStack_4f0;
  long *****ppppplStack_4e8;
  undefined1 auStack_4e0 [16];
  long *****ppppplStack_4d0;
  long *****ppppplStack_4c8;
  long *****ppppplStack_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  char *pcStack_4b0;
  long *****ppppplStack_4a8;
  long *****ppppplStack_3b0;
  long *****ppppplStack_3a8;
  long *****ppppplStack_3a0;
  long *****ppppplStack_398;
  undefined1 auStack_390 [16];
  long *****ppppplStack_290;
  long *****ppppplStack_288;
  long *****ppppplStack_280;
  long *****ppppplStack_278;
  long *****ppppplStack_270;
  long *****ppppplStack_260;
  long *****ppppplStack_258;
  long *****ppppplStack_250;
  long *****ppppplStack_248;
  undefined1 auStack_240 [16];
  long lStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  long *****ppppplStack_118;
  long *****ppppplStack_110;
  long *****ppppplStack_108;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  long *****ppppplStack_f0;
  long *****ppppplStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long *****ppppplStack_d0;
  long *****ppppplStack_c8;
  long *****ppppplStack_c0;
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long *****ppppplStack_90;
  undefined *puStack_88;
  
  plVar26 = param_2 + 0x21;
  bVar4 = *(byte *)(param_2 + 0xb7);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      *(undefined8 *)((long)param_2 + 0x5b9) = 0;
      *(undefined1 *)((long)param_2 + 0x5c1) = 1;
      puVar16 = (undefined8 *)param_2[1];
      uVar36 = *param_2;
      lVar19 = param_2[2];
      ppppplStack_690 = (long *****)0x0;
      ppppplStack_688 = (long *****)0x8;
      ppppplStack_680 = (long *****)0x0;
      ppppplStack_3b0 = (long *****)0x0;
      ppppplStack_3a8 = (long *****)0x8;
      ppppplStack_3a0 = (long *****)0x0;
      pauVar9 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar9[1][0] == '\x01') {
        auStack_240 = *pauVar9;
      }
      else {
        auStack_240 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar9 + 8) = auStack_240._8_8_;
        pauVar9[1][0] = 1;
      }
      ppppplVar33 = auStack_240._8_8_;
      lVar28 = auStack_240._0_8_;
      *(long ******)*pauVar9 = (long *****)(lVar28 + 1);
      ppppplStack_258 = (long *****)0x0;
      ppppplStack_260 = (long *****)&UNK_108c56c70;
      ppppplStack_248 = (long *****)0x0;
      ppppplStack_250 = (long *****)0x0;
      ppppplStack_500 = (long *****)0x0;
      ppppplStack_4f8 = (long *****)0x8;
      uStack_4f0 = (long ******)0x0;
      pppppplVar10 = (long ******)_malloc(0x40);
      if (pppppplVar10 == (long ******)0x0) {
        func_0x0001087c906c(8,0x40);
        goto LAB_100a14160;
      }
      *(long ******)*pauVar9 = (long *****)(lVar28 + 2);
      pppppplVar10[1] = (long *****)0x1;
      *pppppplVar10 = (long *****)0x1;
      pppppplVar10[3] = (long *****)0x0;
      pppppplVar10[2] = (long *****)&UNK_108c56c70;
      pppppplVar10[5] = (long *****)0x0;
      pppppplVar10[4] = (long *****)0x0;
      pppppplVar10[6] = (long *****)(lVar28 + 1);
      pppppplVar10[7] = ppppplVar33;
      ppppplStack_c0 = (long *****)pppppplVar10;
      pppppplVar11 = (long ******)_malloc(0x40);
      if (pppppplVar11 == (long ******)0x0) {
        func_0x0001087c906c(8,0x40);
        goto LAB_100a14160;
      }
      *(long ******)*pauVar9 = (long *****)(lVar28 + 3);
      pppppplVar11[1] = (long *****)0x1;
      *pppppplVar11 = (long *****)0x1;
      pppppplVar11[3] = (long *****)0x0;
      pppppplVar11[2] = (long *****)&UNK_108c56c70;
      pppppplVar11[5] = (long *****)0x0;
      pppppplVar11[4] = (long *****)0x0;
      pppppplVar11[6] = (long *****)(lVar28 + 2);
      pppppplVar11[7] = ppppplVar33;
      ppppplStack_f0 = (long *****)pppppplVar11;
      pppppplVar12 = (long ******)_malloc(0x40);
      if (pppppplVar12 == (long ******)0x0) {
        func_0x0001087c906c(8,0x40);
        goto LAB_100a14160;
      }
      *(long *)*pauVar9 = lVar28 + 4;
      pppppplVar12[1] = (long *****)0x1;
      *pppppplVar12 = (long *****)0x1;
      pppppplVar12[3] = (long *****)0x0;
      pppppplVar12[2] = (long *****)&UNK_108c56c70;
      pppppplVar12[5] = (long *****)0x0;
      pppppplVar12[4] = (long *****)0x0;
      pppppplVar12[6] = (long *****)(lVar28 + 3);
      pppppplVar12[7] = ppppplVar33;
      ppppplStack_290 = (long *****)pppppplVar12;
      puVar13 = (undefined8 *)_malloc(0x40);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0001087c906c(8,0x40);
        goto LAB_100a14160;
      }
      puVar13[1] = 1;
      *puVar13 = 1;
      puVar13[3] = 0;
      puVar13[2] = &UNK_108c56c70;
      puVar13[5] = 0;
      puVar13[4] = 0;
      puVar13[6] = lVar28 + 4;
      puVar13[7] = ppppplVar33;
      param_2[4] = ppppplStack_688;
      param_2[3] = ppppplStack_690;
      param_2[5] = ppppplStack_680;
      param_2[7] = ppppplStack_3a8;
      param_2[6] = ppppplStack_3b0;
      param_2[8] = ppppplStack_3a0;
      param_2[0xf] = ppppplStack_248;
      param_2[0xe] = ppppplStack_250;
      *(undefined1 (*) [16])(param_2 + 0x10) = auStack_240;
      param_2[0xd] = ppppplStack_258;
      param_2[0xc] = ppppplStack_260;
      param_2[10] = ppppplStack_4f8;
      param_2[9] = ppppplStack_500;
      param_2[0xb] = uStack_4f0;
      param_2[0x12] = pppppplVar10;
      param_2[0x13] = pppppplVar11;
      param_2[0x14] = pppppplVar12;
      param_2[0x15] = puVar13;
      *(undefined4 *)((long)param_2 + 0x5bd) = 0x1010101;
      param_2[0x16] = 0;
      param_2[0x17] = 8;
      param_2[0x18] = 0;
      param_2[0x1a] = 0;
      param_2[0x19] = &UNK_108c56c70;
      param_2[0x1c] = 0;
      param_2[0x1b] = 0;
      param_2[0x1d] = lVar28 + 5;
      param_2[0x1e] = ppppplVar33;
      *(undefined2 *)((long)param_2 + 0x5bb) = 0x101;
      *(long *)*pauVar9 = lVar28 + 7;
      param_2[0x20] = 0;
      param_2[0x1f] = &UNK_108c56c70;
      param_2[0x22] = 0;
      param_2[0x21] = 0;
      param_2[0x23] = lVar28 + 6;
      param_2[0x24] = ppppplVar33;
      *(undefined1 *)((long)param_2 + 0x5ba) = 1;
      *(undefined1 *)((long)param_2 + 0x5c1) = 0;
      param_2[0x25] = puVar16;
      param_2[0x26] = puVar16;
      param_2[0x27] = uVar36;
      param_2[0x28] = puVar16 + lVar19 * 9;
      if (puVar16 != puVar16 + lVar19 * 9) {
        do {
          param_2[0x26] = puVar16 + 9;
          uVar36 = *puVar16;
          param_2[0x2a] = puVar16[1];
          param_2[0x29] = uVar36;
          uVar42 = puVar16[5];
          uVar41 = puVar16[4];
          uVar37 = puVar16[7];
          uVar36 = puVar16[6];
          uVar44 = puVar16[3];
          uVar43 = puVar16[2];
          param_2[0x31] = puVar16[8];
          param_2[0x2e] = uVar42;
          param_2[0x2d] = uVar41;
          param_2[0x30] = uVar37;
          param_2[0x2f] = uVar36;
          param_2[0x2c] = uVar44;
          param_2[0x2b] = uVar43;
          if (param_2[0x29] == -0x8000000000000000) goto LAB_100a12914;
          *(undefined1 *)((long)param_2 + 0x5b9) = 1;
          param_2[0x37] = param_2[0x2e];
          param_2[0x36] = param_2[0x2d];
          param_2[0x39] = param_2[0x30];
          param_2[0x38] = param_2[0x2f];
          param_2[0x3a] = param_2[0x31];
          puVar16 = param_2 + 0x3b;
          param_2[0x33] = param_2[0x2a];
          param_2[0x32] = param_2[0x29];
          param_2[0x35] = param_2[0x2c];
          param_2[0x34] = param_2[0x2b];
          __ZN17codex_core_skills6loader31canonicalize_for_skill_identity17hc8c81d98613fcb82E
                    (puVar16,param_2 + 0x32);
          *(undefined1 *)((long)param_2 + 0x5b9) = 0;
          lVar28 = param_2[0x39];
          uVar37 = param_2[0x37];
          param_2[0x3e] = param_2[0x38];
          param_2[0x3f] = lVar28;
          puVar13 = param_2 + 3;
          param_2[0x40] = param_2[5];
          lVar19 = param_2[0x38] + (*(long *)(lVar28 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          uVar24 = *(undefined1 *)(param_2 + 0x3a);
          uVar36 = 0;
          if (param_2[0x35] != -0x8000000000000000) {
            uVar36 = param_2[0x36];
          }
          param_2[0x51] = uVar36;
          param_2[0x52] = uVar37;
          param_2[0x5d] = lVar19;
          param_2[0x5e] = lVar28;
          param_2[0x6d] = puVar16;
          param_2[0x6e] = puVar13;
          *(undefined1 *)((long)param_2 + 0x37c) = 0;
          *(undefined1 *)((long)param_2 + 0x37d) = uVar24;
LAB_100a140d4:
          *(undefined1 *)((long)param_2 + 0x37b) = 0;
          param_2[0x53] = lVar19;
          param_2[0x54] = lVar28;
          *(undefined1 *)(param_2 + 0x6f) = uVar24;
          param_2[0x55] = uVar36;
          param_2[0x56] = uVar37;
          param_2[0x5f] = puVar13;
          __ZN17codex_core_skills6loader31canonicalize_for_skill_identity17hc8c81d98613fcb82E
                    (param_2 + 0x60,puVar16);
          auVar45 = (**(code **)(param_2[0x54] + 0x38))(param_2[0x53],param_2 + 0x60,0);
          *(undefined1 (*) [16])(param_2 + 0x70) = auVar45;
LAB_100a135ec:
          (**(code **)(auVar45._8_8_ + 0x18))(&ppppplStack_500,auVar45._0_8_,param_3);
          pppppplVar10 = uStack_4f0;
          ppppplVar33 = ppppplStack_500;
          cVar7 = uStack_4f0._2_1_;
          if (uStack_4f0._2_1_ == '\x03') {
            uVar24 = 3;
LAB_100a15bf4:
            *(undefined1 *)((long)param_2 + 0x37c) = uVar24;
            *param_1 = 0x8000000000000000;
            uVar24 = 3;
            goto LAB_100a15c08;
          }
          uVar36 = param_2[0x70];
          puVar16 = (undefined8 *)param_2[0x71];
          pcVar5 = (code *)*puVar16;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar36);
          }
          if (puVar16[1] != 0) {
            _free(uVar36);
          }
          if (cVar7 == '\x02') {
            cVar7 = FUN_100c355d4(ppppplVar33);
            if (cVar7 == '\0') {
              if (((ulong)ppppplVar33 & 3) != 1) goto LAB_100a14b70;
              pcVar31 = (char *)((long)ppppplVar33 + -1);
              uVar36 = *(undefined8 *)pcVar31;
              puVar16 = *(undefined8 **)((long)ppppplVar33 + 7);
              if ((code *)*puVar16 != (code *)0x0) {
                (*(code *)*puVar16)(uVar36);
              }
            }
            else {
              ppppplStack_528 = ppppplVar33;
              if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
                if (1 < bRam000000010b62bec8 - 1) {
                  if (bRam000000010b62bec8 != 0) {
                    cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                                      );
                    if (cVar7 != '\0') goto LAB_100a13680;
                  }
                  goto LAB_100a13940;
                }
LAB_100a13680:
                uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                                   );
                if ((uVar14 & 1) == 0) goto LAB_100a13940;
                lStack_d8 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                            + 0x30;
                ppppplStack_a0 = (long *****)param_2[0x61];
                ppppplStack_98 = (long *****)param_2[0x62];
                ppppplStack_690 = (long *****)&ppppplStack_a0;
                ppppplStack_688 =
                     (long *****)
                     &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                ;
                ppppplStack_680 = (long *****)&ppppplStack_528;
                ppppplStack_678 =
                     (long *****)
                     __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                ;
                ppppplStack_c8 = (long *****)&ppppplStack_690;
                ppppplStack_d0 = (long *****)&UNK_108cb5347;
                ppppplStack_118 = (long *****)&ppppplStack_d0;
                ppppplStack_110 = (long *****)&UNK_10b208fd0;
                ppppplStack_e8 = (long *****)&ppppplStack_118;
                ppppplStack_f0 = (long *****)0x1;
                uStack_e0 = 1;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                           ,&ppppplStack_f0);
                lVar19 = 
                ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                  ppppplStack_b8 =
                       *(long ******)
                        (
                        ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                        + 0x20);
                  ppppplStack_b0 =
                       *(long ******)
                        (
                        ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                        + 0x28);
                  ppppplStack_c0 = (long *****)0x1;
                  puVar2 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_10b3c24c8;
                  }
                  puVar3 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_109adfc03;
                  }
                  iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppplStack_c0);
                  if (iVar8 != 0) {
                    auStack_4e0._0_8_ = *(undefined8 *)(lVar19 + 0x60);
                    auStack_4e0._8_8_ = *(undefined8 *)(lVar19 + 0x68);
                    ppppplStack_4f8 = *(long ******)(lVar19 + 0x50);
                    uStack_4f0 = *(long *******)(lVar19 + 0x58);
                    ppppplStack_500 = (long *****)0x1;
                    if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                      ppppplStack_500 = (long *****)0x2;
                    }
                    uStack_4b8 = *(undefined4 *)(lVar19 + 8);
                    uStack_4b4 = *(undefined4 *)(lVar19 + 0xc);
                    ppppplStack_90 = (long *****)&ppppplStack_f0;
                    puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
                    ppppplStack_5a8 = (long *****)&ppppplStack_90;
                    ppppplStack_5a0 = (long *****)&DAT_1061c2098;
                    ppppplStack_4e8 = (long *****)0x1;
                    if ((long ******)auStack_4e0._0_8_ == (long ******)0x0) {
                      ppppplStack_4e8 = (long *****)0x2;
                    }
                    ppppplStack_4c8 = ppppplStack_b8;
                    ppppplStack_4d0 = ppppplStack_c0;
                    ppppplStack_4c0 = ppppplStack_b0;
                    ppppplStack_4a8 = (long *****)&ppppplStack_5a8;
                    pcStack_4b0 = s__108b39f4f;
                    (**(code **)(puVar2 + 0x20))(puVar3,&ppppplStack_500);
                  }
                }
              }
              else {
LAB_100a13940:
                lVar19 = 
                ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                  ppppplStack_5b8 =
                       *(long ******)
                        (
                        ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                        + 0x20);
                  ppppplStack_5b0 =
                       *(long ******)
                        (
                        ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                        + 0x28);
                  ppppplStack_5c0 = (long *****)0x1;
                  puVar2 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_10b3c24c8;
                  }
                  puVar3 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar3 = &UNK_109adfc03;
                  }
                  iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppplStack_5c0);
                  if (iVar8 != 0) {
                    lStack_d8 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d39707a8036140aE
                                + 0x30;
                    ppppplStack_90 = (long *****)param_2[0x61];
                    puStack_88 = (undefined *)param_2[0x62];
                    ppppplStack_690 = (long *****)&ppppplStack_90;
                    ppppplStack_688 =
                         (long *****)
                         &
                         __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                    ;
                    ppppplStack_680 = (long *****)&ppppplStack_528;
                    ppppplStack_678 =
                         (long *****)
                         __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                    ;
                    ppppplStack_98 = (long *****)&ppppplStack_690;
                    ppppplStack_a0 = (long *****)&UNK_108cb5347;
                    ppppplStack_d0 = (long *****)&ppppplStack_a0;
                    ppppplStack_c8 = (long *****)&UNK_10b208fd0;
                    ppppplStack_e8 = (long *****)&ppppplStack_d0;
                    ppppplStack_f0 = (long *****)0x1;
                    uStack_e0 = 1;
                    auStack_4e0._0_8_ = *(undefined8 *)(lVar19 + 0x60);
                    auStack_4e0._8_8_ = *(undefined8 *)(lVar19 + 0x68);
                    ppppplStack_4f8 = *(long ******)(lVar19 + 0x50);
                    uStack_4f0 = *(long *******)(lVar19 + 0x58);
                    ppppplStack_500 = (long *****)0x1;
                    if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                      ppppplStack_500 = (long *****)0x2;
                    }
                    uStack_4b8 = *(undefined4 *)(lVar19 + 8);
                    uStack_4b4 = *(undefined4 *)(lVar19 + 0xc);
                    ppppplStack_5a8 = (long *****)&ppppplStack_f0;
                    ppppplStack_5a0 = (long *****)CONCAT71(ppppplStack_5a0._1_7_,1);
                    ppppplStack_c0 = (long *****)&ppppplStack_5a8;
                    ppppplStack_b8 = (long *****)&DAT_1061c2098;
                    ppppplStack_4e8 = (long *****)0x1;
                    if ((long ******)auStack_4e0._0_8_ == (long ******)0x0) {
                      ppppplStack_4e8 = (long *****)0x2;
                    }
                    ppppplStack_4c8 = ppppplStack_5b8;
                    ppppplStack_4d0 = ppppplStack_5c0;
                    ppppplStack_4c0 = ppppplStack_5b0;
                    ppppplStack_4a8 = (long *****)&ppppplStack_c0;
                    pcStack_4b0 = s__108b39f4f;
                    (**(code **)(puVar2 + 0x20))(puVar3,&ppppplStack_500);
                  }
                }
              }
              if (((ulong)ppppplStack_528 & 3) != 1) goto LAB_100a14b70;
              pcVar31 = (char *)((long)ppppplStack_528 + -1);
              uVar36 = *(undefined8 *)pcVar31;
              puVar16 = *(undefined8 **)((long)ppppplStack_528 + 7);
              if ((code *)*puVar16 != (code *)0x0) {
                (*(code *)*puVar16)(uVar36);
              }
            }
            if (puVar16[1] != 0) {
              _free(uVar36);
            }
LAB_100a14b6c:
            _free(pcVar31);
          }
          else if (((ulong)pppppplVar10 & 1) != 0) {
            *(bool *)((long)param_2 + 0x379) = *(char *)(param_2 + 0x6f) != '\x02';
            pauVar9 = (undefined1 (*) [16])
                      (*
                      ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                      )();
            if ((pauVar9[1][0] & 1) == 0) {
              auVar45 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar9 + 8) = auVar45._8_8_;
              pauVar9[1][0] = 1;
            }
            else {
              auVar45 = *pauVar9;
            }
            *(long *)*pauVar9 = auVar45._0_8_ + 1;
            param_2[0x58] = 0;
            param_2[0x57] = &UNK_108c56c70;
            param_2[0x5a] = 0;
            param_2[0x59] = 0;
            *(undefined1 (*) [16])(param_2 + 0x5b) = auVar45;
            uVar36 = param_2[0x61];
            pppppplVar11 = (long ******)param_2[0x62];
            pppppplVar10 = (long ******)0x1;
            if (pppppplVar11 != (long ******)0x0) {
              pppppplVar10 = (long ******)_malloc(pppppplVar11);
              if (pppppplVar10 == (long ******)0x0) {
                func_0x0001087c9084(1,pppppplVar11);
                goto LAB_100a14160;
              }
            }
            _memcpy(pppppplVar10,uVar36,pppppplVar11);
            ppppplStack_500 = (long *****)pppppplVar11;
            ppppplStack_4f8 = (long *****)pppppplVar10;
            uStack_4f0 = pppppplVar11;
            FUN_1016e6f28(param_2 + 0x57,&ppppplStack_500);
            uVar36 = param_2[0x61];
            lVar28 = param_2[0x62];
            lVar19 = 1;
            if (lVar28 != 0) {
              lVar19 = _malloc(lVar28);
              if (lVar19 == 0) {
                func_0x0001087c9084(1,lVar28);
                goto LAB_100a14160;
              }
            }
            _memcpy(lVar19,uVar36,lVar28);
            plVar21 = (long *)_malloc(0x20);
            if (plVar21 == (long *)0x0) {
              func_0x0001087c9084(8,0x20);
              goto LAB_100a14160;
            }
            param_2[0x41] = 1;
            param_2[0x42] = plVar21;
            *plVar21 = lVar28;
            plVar21[1] = lVar19;
            plVar21[2] = lVar28;
            plVar21[3] = 0;
            param_2[0x43] = 0;
            param_2[0x44] = 1;
            *(undefined1 *)((long)param_2 + 0x37a) = 0;
            while( true ) {
              if (param_2[0x44] == 0) break;
              lVar19 = param_2[0x43];
              uVar14 = lVar19 + 1;
              uVar30 = 0;
              if ((ulong)param_2[0x41] <= uVar14) {
                uVar30 = param_2[0x41];
              }
              param_2[0x43] = uVar14 - uVar30;
              param_2[0x44] = param_2[0x44] + -1;
              puVar16 = (undefined8 *)(param_2[0x42] + lVar19 * 0x20);
              uVar41 = *puVar16;
              uVar37 = puVar16[3];
              uVar36 = puVar16[2];
              param_2[0x46] = puVar16[1];
              param_2[0x45] = uVar41;
              param_2[0x48] = uVar37;
              param_2[0x47] = uVar36;
              if (param_2[0x45] == -0x8000000000000000) goto LAB_100a14540;
              uVar37 = puVar16[1];
              uVar36 = *puVar16;
              param_2[0x65] = puVar16[2];
              param_2[100] = uVar37;
              param_2[99] = uVar36;
              param_2[0x66] = param_2[0x48];
              auVar45 = (**(code **)(param_2[0x54] + 0x40))(param_2[0x53],param_2 + 99,0);
              *(undefined1 (*) [16])(param_2 + 0x70) = auVar45;
LAB_100a142f8:
              (**(code **)(auVar45._8_8_ + 0x18))(&ppppplStack_500,auVar45._0_8_,param_3);
              pppppplVar10 = uStack_4f0;
              ppppplVar38 = ppppplStack_4f8;
              ppppplVar33 = ppppplStack_500;
              if ((long ******)ppppplStack_500 == (long ******)0x8000000000000001) {
                uVar24 = 4;
                goto LAB_100a15bf4;
              }
              uVar36 = param_2[0x70];
              puVar16 = (undefined8 *)param_2[0x71];
              pcVar5 = (code *)*puVar16;
              if (pcVar5 != (code *)0x0) {
                (*pcVar5)(uVar36);
              }
              if (puVar16[1] != 0) {
                _free(uVar36);
              }
              if ((long ******)ppppplVar33 == (long ******)0x8000000000000000) {
                ppppplStack_548 = ppppplVar38;
                if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
                  if (1 < bRam000000010b62bf10 - 1) {
                    if (bRam000000010b62bf10 != 0) {
                      cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                                        );
                      if (cVar7 != '\0') goto LAB_100a14384;
                    }
                    goto LAB_100a14710;
                  }
LAB_100a14384:
                  uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                                     );
                  if ((uVar14 & 1) == 0) goto LAB_100a14710;
                  lStack_d8 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                              + 0x30;
                  ppppplStack_d0 = (long *****)param_2[100];
                  ppppplStack_c8 = (long *****)param_2[0x65];
                  ppppplStack_690 = (long *****)&ppppplStack_d0;
                  ppppplStack_688 =
                       (long *****)
                       &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  ppppplStack_680 = (long *****)&ppppplStack_548;
                  ppppplStack_678 =
                       (long *****)
                       __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                  ;
                  ppppplStack_110 = (long *****)&ppppplStack_690;
                  ppppplStack_118 = (long *****)&UNK_108cb536d;
                  ppppplStack_528 = (long *****)&ppppplStack_118;
                  puStack_520 = &UNK_10b208fd0;
                  ppppplStack_e8 = (long *****)&ppppplStack_528;
                  ppppplStack_f0 = (long *****)0x1;
                  uStack_e0 = 1;
                  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                            (___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                             ,&ppppplStack_f0);
                  lVar19 = 
                  ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                    ppppplStack_b8 =
                         *(long ******)
                          (
                          ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                          + 0x20);
                    ppppplStack_b0 =
                         *(long ******)
                          (
                          ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                          + 0x28);
                    ppppplStack_c0 = (long *****)0x1;
                    puVar2 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar2 = &UNK_10b3c24c8;
                    }
                    puVar3 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar3 = &UNK_109adfc03;
                    }
                    iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppplStack_c0);
                    if (iVar8 != 0) {
                      auStack_4e0._0_8_ = *(undefined8 *)(lVar19 + 0x60);
                      auStack_4e0._8_8_ = *(undefined8 *)(lVar19 + 0x68);
                      ppppplStack_4f8 = *(long ******)(lVar19 + 0x50);
                      uStack_4f0 = *(long *******)(lVar19 + 0x58);
                      ppppplStack_500 = (long *****)0x1;
                      if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                        ppppplStack_500 = (long *****)0x2;
                      }
                      uStack_4b8 = *(undefined4 *)(lVar19 + 8);
                      uStack_4b4 = *(undefined4 *)(lVar19 + 0xc);
                      ppppplStack_a0 = (long *****)&ppppplStack_f0;
                      ppppplStack_98 = (long *****)CONCAT71(ppppplStack_98._1_7_,1);
                      ppppplStack_90 = (long *****)&ppppplStack_a0;
                      puStack_88 = &DAT_1061c2098;
                      ppppplStack_4e8 = (long *****)0x1;
                      if ((long ******)auStack_4e0._0_8_ == (long ******)0x0) {
                        ppppplStack_4e8 = (long *****)0x2;
                      }
                      ppppplStack_4c8 = ppppplStack_b8;
                      ppppplStack_4d0 = ppppplStack_c0;
                      ppppplStack_4c0 = ppppplStack_b0;
                      ppppplStack_4a8 = (long *****)&ppppplStack_90;
                      pcStack_4b0 = s__108b39f4f;
                      (**(code **)(puVar2 + 0x20))(puVar3,&ppppplStack_500);
                    }
                  }
                }
                else {
LAB_100a14710:
                  lVar19 = 
                  ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                    ppppplStack_588 =
                         *(long ******)
                          (
                          ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                          + 0x20);
                    ppppplStack_580 =
                         *(long ******)
                          (
                          ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                          + 0x28);
                    ppppplStack_590 = (long *****)0x1;
                    puVar2 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      puVar2 = &UNK_10b3c24c8;
                    }
                    puVar3 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar3 = &UNK_109adfc03;
                    }
                    iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppplStack_590);
                    if (iVar8 != 0) {
                      lStack_d8 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8832e883cc80f4c2E
                                  + 0x30;
                      ppppplStack_a0 = (long *****)param_2[100];
                      ppppplStack_98 = (long *****)param_2[0x65];
                      ppppplStack_690 = (long *****)&ppppplStack_a0;
                      ppppplStack_688 =
                           (long *****)
                           &
                           __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                      ;
                      ppppplStack_680 = (long *****)&ppppplStack_548;
                      ppppplStack_678 =
                           (long *****)
                           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                      ;
                      ppppplStack_c8 = (long *****)&ppppplStack_690;
                      ppppplStack_d0 = (long *****)&UNK_108cb536d;
                      ppppplStack_118 = (long *****)&ppppplStack_d0;
                      ppppplStack_110 = (long *****)&UNK_10b208fd0;
                      ppppplStack_e8 = (long *****)&ppppplStack_118;
                      ppppplStack_f0 = (long *****)0x1;
                      uStack_e0 = 1;
                      ppppplStack_4c8 = ppppplStack_588;
                      ppppplStack_4d0 = ppppplStack_590;
                      ppppplStack_4c0 = ppppplStack_580;
                      auStack_4e0._0_8_ = *(undefined8 *)(lVar19 + 0x60);
                      auStack_4e0._8_8_ = *(undefined8 *)(lVar19 + 0x68);
                      ppppplStack_4f8 = *(long ******)(lVar19 + 0x50);
                      uStack_4f0 = *(long *******)(lVar19 + 0x58);
                      ppppplStack_500 = (long *****)0x1;
                      if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                        ppppplStack_500 = (long *****)0x2;
                      }
                      uStack_4b8 = *(undefined4 *)(lVar19 + 8);
                      uStack_4b4 = *(undefined4 *)(lVar19 + 0xc);
                      ppppplStack_90 = (long *****)&ppppplStack_f0;
                      puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
                      ppppplStack_c0 = (long *****)&ppppplStack_90;
                      ppppplStack_b8 = (long *****)&DAT_1061c2098;
                      ppppplStack_4e8 = (long *****)0x1;
                      if ((long ******)auStack_4e0._0_8_ == (long ******)0x0) {
                        ppppplStack_4e8 = (long *****)0x2;
                      }
                      ppppplStack_4a8 = (long *****)&ppppplStack_c0;
                      pcStack_4b0 = s__108b39f4f;
                      (**(code **)(puVar2 + 0x20))(puVar3,&ppppplStack_500);
                    }
                  }
                }
                if (((ulong)ppppplStack_548 & 3) == 1) {
                  pcVar31 = (char *)((long)ppppplStack_548 + -1);
                  uVar36 = *(undefined8 *)pcVar31;
                  puVar16 = *(undefined8 **)((long)ppppplStack_548 + 7);
                  pcVar5 = (code *)*puVar16;
                  if (pcVar5 != (code *)0x0) {
                    (*pcVar5)(uVar36);
                  }
                  if (puVar16[1] != 0) {
                    _free(uVar36);
                  }
LAB_100a15fac:
                  _free(pcVar31);
                }
              }
              else {
                ppppplStack_5a8 = ppppplVar33;
                ppppplStack_5a0 = ppppplVar38;
                ppppplStack_598 = (long *****)pppppplVar10;
                *(undefined1 *)((long)param_2 + 0x37b) = 0;
                param_2[0x49] = ppppplVar38;
                param_2[0x4a] = ppppplVar38;
                param_2[0x4b] = ppppplVar33;
                param_2[0x4c] = ppppplVar38 + (long)pppppplVar10 * 4;
                while( true ) {
                  puVar16 = (undefined8 *)param_2[0x4a];
                  if (puVar16 == (undefined8 *)param_2[0x4c]) break;
                  param_2[0x4a] = puVar16 + 4;
                  uVar41 = *puVar16;
                  uVar37 = puVar16[3];
                  uVar36 = puVar16[2];
                  param_2[0x4e] = puVar16[1];
                  param_2[0x4d] = uVar41;
                  param_2[0x50] = uVar37;
                  param_2[0x4f] = uVar36;
                  puVar13 = puVar16 + 4;
                  if (param_2[0x4d] == -0x8000000000000000) goto LAB_100a15f6c;
                  lVar19 = puVar16[2];
                  uVar36 = *puVar16;
                  param_2[0x68] = puVar16[1];
                  param_2[0x67] = uVar36;
                  param_2[0x69] = lVar19;
                  if ((lVar19 == 0) || (*(char *)param_2[0x68] != '.')) {
                    uVar36 = param_2[100];
                    uVar37 = param_2[0x65];
                    __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                              (&ppppplStack_690);
                    ppppplVar33 = ppppplStack_688;
                    __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                              (&ppppplStack_500,ppppplStack_688,ppppplStack_680,uVar36,uVar37);
                    param_2[0x6b] = ppppplStack_4f8;
                    param_2[0x6a] = ppppplStack_500;
                    param_2[0x6c] = uStack_4f0;
                    if ((long ******)ppppplStack_690 != (long ******)0x0) {
                      _free(ppppplVar33);
                    }
                    auVar45 = (**(code **)(param_2[0x54] + 0x38))(param_2[0x53],param_2 + 0x6a,0);
                    *(undefined1 (*) [16])(param_2 + 0x70) = auVar45;
LAB_100a15d18:
                    (**(code **)(auVar45._8_8_ + 0x18))(&ppppplStack_500,auVar45._0_8_,param_3);
                    pppppplVar10 = uStack_4f0;
                    ppppplVar33 = ppppplStack_500;
                    cVar7 = uStack_4f0._2_1_;
                    if (uStack_4f0._2_1_ == '\x03') {
                      uVar24 = 5;
                      goto LAB_100a15bf4;
                    }
                    uVar36 = param_2[0x70];
                    puVar16 = (undefined8 *)param_2[0x71];
                    pcVar5 = (code *)*puVar16;
                    if (pcVar5 != (code *)0x0) {
                      (*pcVar5)(uVar36);
                    }
                    if (puVar16[1] != 0) {
                      _free(uVar36);
                    }
                    if (cVar7 == '\x02') {
                      ppppplStack_548 = ppppplVar33;
                      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
                        if (1 < bRam000000010b62bf28 - 1) {
                          if (bRam000000010b62bf28 != 0) {
                            cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                              (&
                                               __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                              );
                            if (cVar7 != '\0') goto LAB_100a15da0;
                          }
                          goto LAB_100a16060;
                        }
LAB_100a15da0:
                        uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                           (
                                           ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                           );
                        if ((uVar14 & 1) == 0) goto LAB_100a16060;
                        lStack_d8 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                    + 0x30;
                        ppppplStack_d0 = (long *****)param_2[0x6b];
                        ppppplStack_c8 = (long *****)param_2[0x6c];
                        ppppplStack_690 = (long *****)&ppppplStack_d0;
                        ppppplStack_688 =
                             (long *****)
                             &
                             __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                        ;
                        ppppplStack_680 = (long *****)&ppppplStack_548;
                        ppppplStack_678 =
                             (long *****)
                             __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                        ;
                        ppppplStack_110 = (long *****)&ppppplStack_690;
                        ppppplStack_118 = (long *****)&UNK_108cb53bf;
                        ppppplStack_528 = (long *****)&ppppplStack_118;
                        puStack_520 = &UNK_10b208fd0;
                        ppppplStack_e8 = (long *****)&ppppplStack_528;
                        ppppplStack_f0 = (long *****)0x1;
                        uStack_e0 = 1;
                        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                  (___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                   ,&ppppplStack_f0);
                        lVar19 = 
                        ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                        ;
                        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                          ppppplStack_b8 =
                               *(long ******)
                                (
                                ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                + 0x20);
                          ppppplStack_b0 =
                               *(long ******)
                                (
                                ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                + 0x28);
                          ppppplStack_c0 = (long *****)0x1;
                          puVar2 = puRam000000010b634c20;
                          if (lRam000000010b66fd20 != 2) {
                            puVar2 = &UNK_10b3c24c8;
                          }
                          puVar3 = puRam000000010b634c18;
                          if (lRam000000010b66fd20 != 2) {
                            puVar3 = &UNK_109adfc03;
                          }
                          iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppplStack_c0);
                          if (iVar8 != 0) {
                            auStack_4e0._0_8_ = *(undefined8 *)(lVar19 + 0x60);
                            auStack_4e0._8_8_ = *(undefined8 *)(lVar19 + 0x68);
                            ppppplStack_4f8 = *(long ******)(lVar19 + 0x50);
                            uStack_4f0 = *(long *******)(lVar19 + 0x58);
                            ppppplStack_500 = (long *****)0x1;
                            if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                              ppppplStack_500 = (long *****)0x2;
                            }
                            uStack_4b8 = *(undefined4 *)(lVar19 + 8);
                            uStack_4b4 = *(undefined4 *)(lVar19 + 0xc);
                            ppppplStack_a0 = (long *****)&ppppplStack_f0;
                            ppppplStack_98 = (long *****)CONCAT71(ppppplStack_98._1_7_,1);
                            ppppplStack_90 = (long *****)&ppppplStack_a0;
                            puStack_88 = &DAT_1061c2098;
                            ppppplStack_4e8 = (long *****)0x1;
                            if ((long ******)auStack_4e0._0_8_ == (long ******)0x0) {
                              ppppplStack_4e8 = (long *****)0x2;
                            }
                            ppppplStack_4c8 = ppppplStack_b8;
                            ppppplStack_4d0 = ppppplStack_c0;
                            ppppplStack_4c0 = ppppplStack_b0;
                            ppppplStack_4a8 = (long *****)&ppppplStack_90;
                            pcStack_4b0 = s__108b39f4f;
                            (**(code **)(puVar2 + 0x20))(puVar3,&ppppplStack_500);
                          }
                        }
                      }
                      else {
LAB_100a16060:
                        lVar19 = 
                        ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                        ;
                        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                           (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                          ppppplStack_570 =
                               *(long ******)
                                (
                                ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                + 0x20);
                          ppppplStack_568 =
                               *(long ******)
                                (
                                ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                + 0x28);
                          ppppplStack_578 = (long *****)0x1;
                          puVar2 = puRam000000010b634c20;
                          if (lRam000000010b66fd20 != 2) {
                            puVar2 = &UNK_10b3c24c8;
                          }
                          puVar3 = puRam000000010b634c18;
                          if (lRam000000010b66fd20 != 2) {
                            puVar3 = &UNK_109adfc03;
                          }
                          iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppplStack_578);
                          if (iVar8 != 0) {
                            lStack_d8 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hca045ed9f18e3e14E
                                        + 0x30;
                            ppppplStack_a0 = (long *****)param_2[0x6b];
                            ppppplStack_98 = (long *****)param_2[0x6c];
                            ppppplStack_690 = (long *****)&ppppplStack_a0;
                            ppppplStack_688 =
                                 (long *****)
                                 &
                                 __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                            ;
                            ppppplStack_680 = (long *****)&ppppplStack_548;
                            ppppplStack_678 =
                                 (long *****)
                                 __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                            ;
                            ppppplStack_c8 = (long *****)&ppppplStack_690;
                            ppppplStack_d0 = (long *****)&UNK_108cb53bf;
                            ppppplStack_118 = (long *****)&ppppplStack_d0;
                            ppppplStack_110 = (long *****)&UNK_10b208fd0;
                            ppppplStack_e8 = (long *****)&ppppplStack_118;
                            ppppplStack_f0 = (long *****)0x1;
                            uStack_e0 = 1;
                            ppppplStack_4c8 = ppppplStack_570;
                            ppppplStack_4d0 = ppppplStack_578;
                            ppppplStack_4c0 = ppppplStack_568;
                            auStack_4e0._0_8_ = *(undefined8 *)(lVar19 + 0x60);
                            auStack_4e0._8_8_ = *(undefined8 *)(lVar19 + 0x68);
                            ppppplStack_4f8 = *(long ******)(lVar19 + 0x50);
                            uStack_4f0 = *(long *******)(lVar19 + 0x58);
                            ppppplStack_500 = (long *****)0x1;
                            if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                              ppppplStack_500 = (long *****)0x2;
                            }
                            uStack_4b8 = *(undefined4 *)(lVar19 + 8);
                            uStack_4b4 = *(undefined4 *)(lVar19 + 0xc);
                            ppppplStack_90 = (long *****)&ppppplStack_f0;
                            puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
                            ppppplStack_c0 = (long *****)&ppppplStack_90;
                            ppppplStack_b8 = (long *****)&DAT_1061c2098;
                            ppppplStack_4e8 = (long *****)0x1;
                            if ((long ******)auStack_4e0._0_8_ == (long ******)0x0) {
                              ppppplStack_4e8 = (long *****)0x2;
                            }
                            ppppplStack_4a8 = (long *****)&ppppplStack_c0;
                            pcStack_4b0 = s__108b39f4f;
                            (**(code **)(puVar2 + 0x20))(puVar3,&ppppplStack_500);
                          }
                        }
                      }
                      if (((ulong)ppppplStack_548 & 3) == 1) {
                        pppppplVar10 = (long ******)((long)ppppplStack_548 + -1);
                        ppppplVar33 = *pppppplVar10;
                        puVar16 = *(undefined8 **)((long)ppppplStack_548 + 7);
                        if ((code *)*puVar16 != (code *)0x0) {
                          (*(code *)*puVar16)(ppppplVar33);
                        }
LAB_100a16098:
                        if (puVar16[1] != 0) {
                          _free(ppppplVar33);
                        }
LAB_100a160a8:
                        _free(pppppplVar10);
                      }
                    }
                    else if (((ulong)pppppplVar10 & 0x10000) == 0) {
                      if (((ulong)pppppplVar10 & 1) == 0) {
                        if (((((ulong)pppppplVar10 & 0x100) != 0) && (param_2[0x69] == 8)) &&
                           (*(long *)param_2[0x68] == 0x646d2e4c4c494b53)) {
                          param_2[0x70] = param_2[0x55];
                          param_2[0x71] = param_2[0x56];
                          param_2[0x77] = param_2[0x54];
                          param_2[0x76] = param_2[0x53];
                          param_2[0x8e] = param_2 + 0x6a;
                          *(undefined1 *)((long)param_2 + 0x47c) = 0;
                          *(undefined1 *)((long)param_2 + 0x47d) = *(undefined1 *)(param_2 + 0x6f);
LAB_100a15924:
                          FUN_100a0ed7c(&ppppplStack_500,param_2 + 0x70,param_3);
                          ppppplVar33 = ppppplStack_500;
                          if ((long ******)ppppplStack_500 == (long ******)0x8000000000000001) {
                            uVar24 = 7;
                            goto LAB_100a15bf4;
                          }
                          ppppplStack_288 = (long *****)uStack_4f0;
                          ppppplStack_290 = ppppplStack_4f8;
                          ppppplStack_278 = (long *****)auStack_4e0._0_8_;
                          ppppplStack_280 = ppppplStack_4e8;
                          ppppplStack_270 = (long *****)auStack_4e0._8_8_;
                          _memcpy(&ppppplStack_3b0,&ppppplStack_4d0,0x118);
                          FUN_100e74e44(param_2 + 0x70);
                          if ((long ******)ppppplVar33 == (long ******)0x8000000000000000) {
                            ppppplStack_688 = ppppplStack_288;
                            ppppplStack_690 = ppppplStack_290;
                            ppppplStack_678 = ppppplStack_278;
                            ppppplStack_680 = ppppplStack_280;
                            auStack_670._0_8_ = ppppplStack_270;
                            if (*(char *)(param_2 + 0x6f) != '\x02') {
                              lVar19 = param_2[0x5f];
                              uVar36 = param_2[0x6b];
                              pppppplVar10 = (long ******)0x1;
                              pppppplVar11 = (long ******)param_2[0x6c];
                              if (pppppplVar11 != (long ******)0x0) {
                                pppppplVar10 = (long ******)_malloc(pppppplVar11);
                                if (pppppplVar10 == (long ******)0x0) {
                                  func_0x0001087c9084(1,pppppplVar11);
                                  goto LAB_100a14160;
                                }
                              }
                              _memcpy(pppppplVar10,uVar36,pppppplVar11);
                              ppppplStack_c0 = (long *****)0x0;
                              ppppplStack_b8 = (long *****)0x1;
                              ppppplStack_b0 = (long *****)0x0;
                              uStack_e0 = 0x60000020;
                              ppppplStack_f0 = (long *****)&ppppplStack_c0;
                              ppppplStack_e8 = (long *****)&UNK_10b209290;
                              iVar8 = __ZN81__LT_codex_core_skills__loader__SkillParseError_u20_as_u20_core__fmt__Display_GT_3fmt17hafef5d32872f1dceE
                                                (&ppppplStack_690,&ppppplStack_f0);
                              if (iVar8 != 0) {
                                func_0x000108a07a3c(&UNK_108cc3daa,0x37,&ppppplStack_90,
                                                    &UNK_10b235000,&UNK_10b2346c0);
                                goto LAB_100a14160;
                              }
                              auStack_4e0._0_8_ = ppppplStack_b8;
                              ppppplStack_4e8 = ppppplStack_c0;
                              auStack_4e0._8_8_ = ppppplStack_b0;
                              lVar28 = *(long *)(lVar19 + 0x28);
                              ppppplStack_500 = (long *****)pppppplVar11;
                              ppppplStack_4f8 = (long *****)pppppplVar10;
                              uStack_4f0 = pppppplVar11;
                              if (lVar28 == *(long *)(lVar19 + 0x18)) {
                                func_0x0001089508dc(lVar19 + 0x18);
                              }
                              puVar16 = (undefined8 *)(*(long *)(lVar19 + 0x20) + lVar28 * 0x30);
                              puVar16[1] = ppppplStack_4f8;
                              *puVar16 = ppppplStack_500;
                              puVar16[3] = ppppplStack_4e8;
                              puVar16[2] = uStack_4f0;
                              puVar16[5] = auStack_4e0._8_8_;
                              puVar16[4] = auStack_4e0._0_8_;
                              *(long *)(lVar19 + 0x28) = lVar28 + 1;
                            }
                            FUN_100e166b4(ppppplStack_690,ppppplStack_688);
                          }
                          else {
                            ppppplStack_250 = ppppplStack_288;
                            ppppplStack_258 = ppppplStack_290;
                            auStack_240._0_8_ = ppppplStack_278;
                            ppppplStack_248 = ppppplStack_280;
                            ppppplStack_260 = ppppplVar33;
                            auStack_240._8_8_ = ppppplStack_270;
                            _memcpy(&lStack_230,&ppppplStack_3b0,0x118);
                            plVar21 = (long *)param_2[0x5f];
                            lVar19 = plVar21[2];
                            if (lVar19 == *plVar21) {
                              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h5b404ffd06373565E
                                        (plVar21);
                            }
                            _memcpy(plVar21[1] + lVar19 * 0x148,&ppppplStack_260,0x148);
                            plVar21[2] = lVar19 + 1;
                          }
                        }
                      }
                      else {
                        __ZN17codex_core_skills6loader31canonicalize_for_skill_identity17hc8c81d98613fcb82E
                                  (auStack_518,param_2 + 0x6a);
                        __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_11enqueue_dir17h86578808062bd9aaE
                                  (param_2 + 0x41,param_2 + 0x57,(long)param_2 + 0x37a,auStack_518,
                                   param_2[0x66] + 1);
                      }
                    }
                    else if ((*(byte *)((long)param_2 + 0x379) & 1) != 0) {
                      auVar45 = (**(code **)(param_2[0x54] + 0x40))(param_2[0x53],param_2 + 0x6a,0);
                      *(undefined1 (*) [16])(param_2 + 0x70) = auVar45;
LAB_100a13c28:
                      (**(code **)(auVar45._8_8_ + 0x18))(&ppppplStack_500,auVar45._0_8_,param_3);
                      if ((long ******)ppppplStack_500 != (long ******)0x8000000000000001) {
                        ppppplStack_b8 = ppppplStack_4f8;
                        ppppplStack_c0 = ppppplStack_500;
                        ppppplStack_b0 = (long *****)uStack_4f0;
                        uVar36 = param_2[0x70];
                        puVar16 = (undefined8 *)param_2[0x71];
                        pcVar5 = (code *)*puVar16;
                        if (pcVar5 != (code *)0x0) {
                          (*pcVar5)(uVar36);
                        }
                        if (puVar16[1] != 0) {
                          _free(uVar36);
                        }
                        ppppplVar38 = ppppplStack_b8;
                        ppppplVar33 = ppppplStack_c0;
                        if ((long ******)ppppplStack_c0 == (long ******)0x8000000000000000) {
                          cVar7 = FUN_100c355d4(ppppplStack_b8);
                          if ((cVar7 == '\0') || (cVar7 == '\x0e')) {
                            if (((ulong)ppppplVar38 & 3) != 1) goto LAB_100a15c30;
                            pppppplVar10 = (long ******)((long)ppppplVar38 + -1);
                            ppppplVar33 = *pppppplVar10;
                            puVar16 = *(undefined8 **)((long)ppppplVar38 + 7);
                            if ((code *)*puVar16 != (code *)0x0) {
                              (*(code *)*puVar16)(ppppplVar33);
                            }
                          }
                          else {
                            ppppplStack_548 = ppppplVar38;
                            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
                              if (1 < bRam000000010b62bee0 - 1) {
                                if (bRam000000010b62bee0 != 0) {
                                  cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                                    (&
                                                  __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                                  );
                                  if (cVar7 != '\0') goto LAB_100a13d64;
                                }
                                goto LAB_100a13e8c;
                              }
LAB_100a13d64:
                              uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                                 (
                                                 ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                                 );
                              if ((uVar14 & 1) == 0) goto LAB_100a13e8c;
                              ppppplStack_678 =
                                   (long *****)
                                   (
                                   ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                   + 0x30);
                              ppppplStack_90 = (long *****)param_2[0x6b];
                              puStack_88 = (undefined *)param_2[0x6c];
                              ppppplStack_500 = (long *****)&ppppplStack_90;
                              ppppplStack_4f8 =
                                   (long *****)
                                   &
                                   __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                              ;
                              uStack_4f0 = &ppppplStack_548;
                              ppppplStack_4e8 =
                                   (long *****)
                                   __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                              ;
                              ppppplStack_98 = (long *****)&ppppplStack_500;
                              ppppplStack_a0 = (long *****)&UNK_108cb5392;
                              ppppplStack_d0 = (long *****)&ppppplStack_a0;
                              ppppplStack_c8 = (long *****)&UNK_10b208fd0;
                              ppppplStack_688 = (long *****)&ppppplStack_d0;
                              ppppplStack_690 = (long *****)0x1;
                              ppppplStack_680 = (long *****)0x1;
                              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                        (___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                         ,&ppppplStack_690);
                              lVar19 = 
                              ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                              ;
                              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0'
                                  ) && (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                                ppppplStack_e8 =
                                     *(long ******)
                                      (
                                      ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                      + 0x20);
                                uStack_e0 = *(undefined8 *)
                                             (
                                             ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                             + 0x28);
                                ppppplStack_f0 = (long *****)0x1;
                                puVar2 = puRam000000010b634c20;
                                if (lRam000000010b66fd20 != 2) {
                                  puVar2 = &UNK_10b3c24c8;
                                }
                                puVar3 = puRam000000010b634c18;
                                if (lRam000000010b66fd20 != 2) {
                                  puVar3 = &UNK_109adfc03;
                                }
                                iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppplStack_f0);
                                if (iVar8 != 0) {
                                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                            (lVar19,puVar3,puVar2,&ppppplStack_f0,&ppppplStack_690);
                                }
                              }
                            }
                            else {
LAB_100a13e8c:
                              lVar19 = 
                              ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                              ;
                              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0'
                                  ) && (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
                                ppppplStack_538 =
                                     *(long ******)
                                      (
                                      ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                      + 0x20);
                                ppppplStack_530 =
                                     *(long ******)
                                      (
                                      ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                      + 0x28);
                                ppppplStack_540 = (long *****)0x1;
                                puVar2 = puRam000000010b634c20;
                                if (lRam000000010b66fd20 != 2) {
                                  puVar2 = &UNK_10b3c24c8;
                                }
                                puVar3 = puRam000000010b634c18;
                                if (lRam000000010b66fd20 != 2) {
                                  puVar3 = &UNK_109adfc03;
                                }
                                iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppplStack_540);
                                if (iVar8 != 0) {
                                  lStack_d8 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h39e030eb514dc50fE
                                              + 0x30;
                                  ppppplStack_d0 = (long *****)param_2[0x6b];
                                  ppppplStack_c8 = (long *****)param_2[0x6c];
                                  ppppplStack_690 = (long *****)&ppppplStack_d0;
                                  ppppplStack_688 =
                                       (long *****)
                                       &
                                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                                  ;
                                  ppppplStack_680 = (long *****)&ppppplStack_548;
                                  ppppplStack_678 =
                                       (long *****)
                                       __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                                  ;
                                  ppppplStack_110 = (long *****)&ppppplStack_690;
                                  ppppplStack_118 = (long *****)&UNK_108cb5392;
                                  ppppplStack_528 = (long *****)&ppppplStack_118;
                                  puStack_520 = &UNK_10b208fd0;
                                  ppppplStack_e8 = (long *****)&ppppplStack_528;
                                  ppppplStack_f0 = (long *****)0x1;
                                  uStack_e0 = 1;
                                  ppppplStack_4c8 = ppppplStack_538;
                                  ppppplStack_4d0 = ppppplStack_540;
                                  ppppplStack_4c0 = ppppplStack_530;
                                  auStack_4e0._0_8_ = *(undefined8 *)(lVar19 + 0x60);
                                  auStack_4e0._8_8_ = *(undefined8 *)(lVar19 + 0x68);
                                  ppppplStack_4f8 = *(long ******)(lVar19 + 0x50);
                                  uStack_4f0 = *(long *******)(lVar19 + 0x58);
                                  ppppplStack_500 = (long *****)0x1;
                                  if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                                    ppppplStack_500 = (long *****)0x2;
                                  }
                                  uStack_4b8 = *(undefined4 *)(lVar19 + 8);
                                  uStack_4b4 = *(undefined4 *)(lVar19 + 0xc);
                                  ppppplStack_a0 = (long *****)&ppppplStack_f0;
                                  ppppplStack_98 = (long *****)CONCAT71(ppppplStack_98._1_7_,1);
                                  ppppplStack_90 = (long *****)&ppppplStack_a0;
                                  puStack_88 = &DAT_1061c2098;
                                  ppppplStack_4e8 = (long *****)0x1;
                                  if ((long ******)auStack_4e0._0_8_ == (long ******)0x0) {
                                    ppppplStack_4e8 = (long *****)0x2;
                                  }
                                  ppppplStack_4a8 = (long *****)&ppppplStack_90;
                                  pcStack_4b0 = s__108b39f4f;
                                  (**(code **)(puVar2 + 0x20))(puVar3,&ppppplStack_500);
                                }
                              }
                            }
                            if (((ulong)ppppplStack_548 & 3) != 1) goto LAB_100a15c30;
                            pppppplVar10 = (long ******)((long)ppppplStack_548 + -1);
                            ppppplVar33 = *pppppplVar10;
                            puVar16 = *(undefined8 **)((long)ppppplStack_548 + 7);
                            if ((code *)*puVar16 != (code *)0x0) {
                              (*(code *)*puVar16)(ppppplVar33);
                            }
                          }
                          goto LAB_100a16098;
                        }
                        __ZN17codex_core_skills6loader31canonicalize_for_skill_identity17hc8c81d98613fcb82E
                                  (auStack_560,param_2 + 0x6a);
                        __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_11enqueue_dir17h86578808062bd9aaE
                                  (param_2 + 0x41,param_2 + 0x57,(long)param_2 + 0x37a,auStack_560,
                                   param_2[0x66] + 1);
                        pppppplVar10 = (long ******)ppppplStack_b8;
                        if ((long ******)ppppplStack_b0 != (long ******)0x0) {
                          pppppplVar11 = (long ******)(ppppplStack_b8 + 1);
                          pppppplVar12 = (long ******)ppppplStack_b0;
                          do {
                            if (pppppplVar11[-1] != (long *****)0x0) {
                              _free(*pppppplVar11);
                            }
                            pppppplVar11 = pppppplVar11 + 4;
                            pppppplVar12 = (long ******)((long)pppppplVar12 + -1);
                          } while (pppppplVar12 != (long ******)0x0);
                        }
                        if ((long ******)ppppplVar33 == (long ******)0x0) goto LAB_100a15c30;
                        goto LAB_100a160a8;
                      }
                      uVar24 = 6;
                      goto LAB_100a15bf4;
                    }
LAB_100a15c30:
                    if (param_2[0x6a] != 0) {
                      _free(param_2[0x6b]);
                    }
                  }
                  if (param_2[0x67] != 0) {
                    _free(param_2[0x68]);
                  }
                }
                param_2[0x4d] = 0x8000000000000000;
                puVar13 = puVar16;
LAB_100a15f6c:
                uVar14 = (long)param_2[0x4c] - (long)puVar13;
                if (uVar14 != 0) {
                  uVar14 = uVar14 >> 5;
                  puVar13 = puVar13 + 1;
                  do {
                    if (puVar13[-1] != 0) {
                      _free(*puVar13);
                    }
                    puVar13 = puVar13 + 4;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
                if (param_2[0x4b] != 0) {
                  pcVar31 = (char *)param_2[0x49];
                  goto LAB_100a15fac;
                }
              }
              *(undefined1 *)((long)param_2 + 0x37b) = 0;
              if (param_2[99] != 0) {
                _free(param_2[100]);
              }
            }
            param_2[0x45] = 0x8000000000000000;
LAB_100a14540:
            if ((*(byte *)((long)param_2 + 0x37a) & 1) != 0) {
              if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
                if (bRam000000010b62bef8 - 1 < 2) {
LAB_100a14574:
                  uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                                     );
                  if ((uVar14 & 1) != 0) {
                    ppppplStack_a0 = (long *****)param_2[0x61];
                    ppppplStack_98 = (long *****)param_2[0x62];
                    lStack_d8 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                                + 0x30;
                    ppppplStack_690 = (long *****)&UNK_108c983c8;
                    ppppplStack_688 =
                         (long *****)
                         &
                         __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                    ;
                    ppppplStack_680 = (long *****)&ppppplStack_a0;
                    ppppplStack_678 =
                         (long *****)
                         &
                         __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                    ;
                    ppppplStack_c8 = (long *****)&ppppplStack_690;
                    ppppplStack_d0 = (long *****)s_skills_scan_truncated_after_dire_108acddbc;
                    ppppplStack_118 = (long *****)&ppppplStack_d0;
                    ppppplStack_110 = (long *****)&UNK_10b208fd0;
                    ppppplStack_e8 = (long *****)&ppppplStack_118;
                    ppppplStack_f0 = (long *****)0x1;
                    uStack_e0 = 1;
                    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                              (___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                               ,&ppppplStack_f0);
                    lVar19 = 
                    ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      ppppplStack_b8 =
                           *(long ******)
                            (
                            ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                            + 0x20);
                      ppppplStack_b0 =
                           *(long ******)
                            (
                            ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                            + 0x28);
                      ppppplStack_c0 = (long *****)0x2;
                      puVar2 = puRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        puVar2 = &UNK_10b3c24c8;
                      }
                      puVar3 = puRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        puVar3 = &UNK_109adfc03;
                      }
                      iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppplStack_c0);
                      if (iVar8 != 0) {
                        auStack_4e0._0_8_ = *(undefined8 *)(lVar19 + 0x60);
                        auStack_4e0._8_8_ = *(undefined8 *)(lVar19 + 0x68);
                        ppppplStack_4f8 = *(long ******)(lVar19 + 0x50);
                        uStack_4f0 = *(long *******)(lVar19 + 0x58);
                        ppppplStack_500 = (long *****)0x1;
                        if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                          ppppplStack_500 = (long *****)0x2;
                        }
                        uStack_4b8 = *(undefined4 *)(lVar19 + 8);
                        uStack_4b4 = *(undefined4 *)(lVar19 + 0xc);
                        ppppplStack_90 = (long *****)&ppppplStack_f0;
                        puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
                        ppppplStack_5a8 = (long *****)&ppppplStack_90;
                        ppppplStack_5a0 = (long *****)&DAT_1061c2098;
                        ppppplStack_4e8 = (long *****)0x1;
                        if ((long ******)auStack_4e0._0_8_ == (long ******)0x0) {
                          ppppplStack_4e8 = (long *****)0x2;
                        }
                        ppppplStack_4c8 = ppppplStack_b8;
                        ppppplStack_4d0 = ppppplStack_c0;
                        ppppplStack_4c0 = ppppplStack_b0;
                        ppppplStack_4a8 = (long *****)&ppppplStack_5a8;
                        pcStack_4b0 = s__108b39f4f;
                        (**(code **)(puVar2 + 0x20))(puVar3,&ppppplStack_500);
                      }
                    }
                    goto LAB_100a14a54;
                  }
                }
                else if (bRam000000010b62bef8 != 0) {
                  cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                                    );
                  if (cVar7 != '\0') goto LAB_100a14574;
                }
              }
              lVar19 = 
              ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                ppppplStack_100 =
                     *(long ******)
                      (
                      ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                      + 0x20);
                ppppplStack_f8 =
                     *(long ******)
                      (
                      ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                      + 0x28);
                ppppplStack_108 = (long *****)0x2;
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                puVar3 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_109adfc03;
                }
                iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppplStack_108);
                if (iVar8 != 0) {
                  lStack_d8 = ___ZN17codex_core_skills6loader26discover_skills_under_root28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5c33767564fe7940E
                              + 0x30;
                  ppppplStack_90 = (long *****)param_2[0x61];
                  puStack_88 = (undefined *)param_2[0x62];
                  ppppplStack_690 = (long *****)&UNK_108c983c8;
                  ppppplStack_688 =
                       (long *****)
                       &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
                  ;
                  ppppplStack_680 = (long *****)&ppppplStack_90;
                  ppppplStack_678 =
                       (long *****)
                       &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  ppppplStack_98 = (long *****)&ppppplStack_690;
                  ppppplStack_a0 = (long *****)s_skills_scan_truncated_after_dire_108acddbc;
                  ppppplStack_d0 = (long *****)&ppppplStack_a0;
                  ppppplStack_c8 = (long *****)&UNK_10b208fd0;
                  ppppplStack_e8 = (long *****)&ppppplStack_d0;
                  ppppplStack_f0 = (long *****)0x1;
                  uStack_e0 = 1;
                  auStack_4e0._0_8_ = *(undefined8 *)(lVar19 + 0x60);
                  auStack_4e0._8_8_ = *(undefined8 *)(lVar19 + 0x68);
                  ppppplStack_4f8 = *(long ******)(lVar19 + 0x50);
                  uStack_4f0 = *(long *******)(lVar19 + 0x58);
                  ppppplStack_500 = (long *****)0x1;
                  if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                    ppppplStack_500 = (long *****)0x2;
                  }
                  uStack_4b8 = *(undefined4 *)(lVar19 + 8);
                  uStack_4b4 = *(undefined4 *)(lVar19 + 0xc);
                  ppppplStack_5a8 = (long *****)&ppppplStack_f0;
                  ppppplStack_5a0 = (long *****)CONCAT71(ppppplStack_5a0._1_7_,1);
                  ppppplStack_c0 = (long *****)&ppppplStack_5a8;
                  ppppplStack_b8 = (long *****)&DAT_1061c2098;
                  ppppplStack_4e8 = (long *****)0x1;
                  if ((long ******)auStack_4e0._0_8_ == (long ******)0x0) {
                    ppppplStack_4e8 = (long *****)0x2;
                  }
                  ppppplStack_4c8 = ppppplStack_100;
                  ppppplStack_4d0 = ppppplStack_108;
                  ppppplStack_4c0 = ppppplStack_f8;
                  ppppplStack_4a8 = (long *****)&ppppplStack_c0;
                  pcStack_4b0 = s__108b39f4f;
                  (**(code **)(puVar2 + 0x20))(puVar3,&ppppplStack_500);
                }
              }
            }
LAB_100a14a54:
            uVar30 = param_2[0x44];
            uVar14 = param_2[0x41];
            if (uVar30 != 0) {
              lVar19 = param_2[0x42];
              uVar23 = param_2[0x43];
              uVar15 = 0;
              if (uVar14 <= uVar23) {
                uVar15 = uVar14;
              }
              lVar27 = uVar23 - uVar15;
              uVar22 = uVar14 - lVar27;
              lVar28 = 0;
              if (uVar22 <= uVar30) {
                lVar28 = uVar30 - uVar22;
              }
              uVar25 = uVar14;
              if (uVar30 <= uVar22) {
                uVar25 = lVar27 + uVar30;
              }
              lVar27 = uVar25 - lVar27;
              if (lVar27 != 0) {
                puVar16 = (undefined8 *)(lVar19 + uVar15 * -0x20 + uVar23 * 0x20 + 8);
                do {
                  if (puVar16[-1] != 0) {
                    _free(*puVar16);
                  }
                  puVar16 = puVar16 + 4;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
              }
              if (uVar22 < uVar30) {
                puVar16 = (undefined8 *)(lVar19 + 8);
                do {
                  if (puVar16[-1] != 0) {
                    _free(*puVar16);
                  }
                  puVar16 = puVar16 + 4;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
              }
            }
            if (uVar14 != 0) {
              _free(param_2[0x42]);
            }
            lVar19 = param_2[0x58];
            if (lVar19 != 0) {
              lVar28 = param_2[0x5a];
              if (lVar28 != 0) {
                plVar21 = (long *)param_2[0x57];
                plVar32 = plVar21 + 1;
                lVar27 = *plVar21;
                uVar14 = CONCAT17(-(-1 < lVar27),
                                  CONCAT16(-(-1 < (char)((ulong)lVar27 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar27 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar27 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar27 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar27 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar27 >> 8)),
                                                           -(-1 < (char)lVar27)))))))) &
                         0x8080808080808080;
                do {
                  while (uVar14 == 0) {
                    lVar27 = *plVar32;
                    plVar21 = plVar21 + -0x18;
                    plVar32 = plVar32 + 1;
                    uVar14 = CONCAT17(-(-1 < lVar27),
                                      CONCAT16(-(-1 < (char)((ulong)lVar27 >> 0x30)),
                                               CONCAT15(-(-1 < (char)((ulong)lVar27 >> 0x28)),
                                                        CONCAT14(-(-1 < (char)((ulong)lVar27 >> 0x20
                                                                              )),
                                                                 CONCAT13(-(-1 < (char)((ulong)
                                                  lVar27 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar27 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar27 >> 8
                                                                                 )),
                                                                    -(-1 < (char)lVar27)))))))) &
                             0x8080808080808080;
                  }
                  uVar30 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                           (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
                  uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10
                  ;
                  iVar8 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
                  if (plVar21[(long)-iVar8 * 3 + -3] != 0) {
                    _free(plVar21[(long)-iVar8 * 3 + -2]);
                  }
                  uVar14 = uVar14 - 1 & uVar14;
                  lVar28 = lVar28 + -1;
                } while (lVar28 != 0);
              }
              if (lVar19 * 0x19 != -0x21) {
                pcVar31 = (char *)(param_2[0x57] + lVar19 * -0x18 + -0x18);
                goto LAB_100a14b6c;
              }
            }
          }
LAB_100a14b70:
          if (param_2[0x60] != 0) {
            _free(param_2[0x61]);
          }
          *(undefined1 *)((long)param_2 + 0x37c) = 1;
          FUN_100ca6d54(param_2 + 0x41);
          uVar14 = param_2[0x40];
          uVar30 = param_2[5];
          if (uVar30 < uVar14) {
            __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                      (uVar14,uVar30,uVar30,&UNK_10b22a5c8);
            goto LAB_100a14160;
          }
          if (uVar14 != uVar30) {
            lVar28 = param_2[4];
            lVar19 = lVar28 + uVar14 * 0x148;
LAB_100a14df0:
            lVar27 = lVar19 + 0x148;
            lVar34 = param_2[0x17];
            pppppplVar10 = (long ******)param_2[0x3c];
            pppppplVar11 = (long ******)param_2[0x3d];
            lVar29 = param_2[0x18] * 0x18;
            do {
              if (lVar29 == 0) {
                uVar36 = param_2[0x3c];
                lVar34 = param_2[0x3d];
                if (lVar34 == 0) {
                  lVar29 = 1;
                }
                else {
                  lVar29 = _malloc(lVar34);
                  if (lVar29 == 0) {
                    func_0x0001087c9084(1,lVar34);
                    goto LAB_100a14160;
                  }
                }
                _memcpy(lVar29,uVar36,lVar34);
                lVar39 = param_2[0x18];
                if (lVar39 == param_2[0x16]) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E
                            (param_2 + 0x16);
                }
                plVar21 = (long *)(param_2[0x17] + lVar39 * 0x18);
                *plVar21 = lVar34;
                plVar21[1] = lVar29;
                plVar21[2] = lVar34;
                param_2[0x18] = lVar39 + 1;
                uVar36 = *(undefined8 *)(lVar19 + 0x38);
                pppppplVar10 = *(long *******)(lVar19 + 0x40);
                goto joined_r0x000100a14f1c;
              }
              ppppplStack_500 = *(long ******)(lVar34 + 8);
              ppppplStack_4f8 = *(long ******)(lVar34 + 0x10);
              if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                ppppplStack_4c8 = (long *****)((ulong)ppppplStack_4c8._3_5_ << 0x18);
                ppppplStack_4c8 = (long *****)CONCAT62(ppppplStack_4c8._2_6_,0x201);
                if (pppppplVar11 == (long ******)0x0) goto LAB_100a14e60;
LAB_100a14e34:
                bVar6 = *(char *)pppppplVar10 == '/';
              }
              else {
                ppppplStack_4c8 =
                     (long *****)
                     CONCAT62(CONCAT51(ppppplStack_4c8._3_5_,*(char *)ppppplStack_500 == '/'),0x201)
                ;
                if (pppppplVar11 != (long ******)0x0) goto LAB_100a14e34;
LAB_100a14e60:
                bVar6 = false;
              }
              uStack_4f0 = (long ******)CONCAT71(uStack_4f0._1_7_,6);
              ppppplStack_250 = (long *****)CONCAT71(ppppplStack_250._1_7_,6);
              uStack_228 = CONCAT62(CONCAT51(uStack_228._3_5_,bVar6),0x201);
              ppppplStack_260 = (long *****)pppppplVar10;
              ppppplStack_258 = (long *****)pppppplVar11;
              uVar14 = FUN_10112a6c0(&ppppplStack_500,&ppppplStack_260);
              lVar34 = lVar34 + 0x18;
              lVar29 = lVar29 + -0x18;
            } while ((uVar14 & 1) == 0);
            uVar36 = *(undefined8 *)(lVar19 + 0x38);
            pppppplVar10 = *(long *******)(lVar19 + 0x40);
joined_r0x000100a14f1c:
            if (pppppplVar10 == (long ******)0x0) {
              pppppplVar11 = (long ******)0x1;
            }
            else {
              pppppplVar11 = (long ******)_malloc(pppppplVar10);
              if (pppppplVar11 == (long ******)0x0) {
                func_0x0001087c9084(1,pppppplVar10);
                goto LAB_100a14160;
              }
            }
            _memcpy(pppppplVar11,uVar36,pppppplVar10);
            auStack_240._8_8_ = param_2[0x1e];
            auStack_240._0_8_ = param_2[0x1d];
            ppppplStack_260 = (long *****)(auStack_240._0_8_ ^ 0x736f6d6570736575);
            ppppplStack_258 = (long *****)(auStack_240._0_8_ ^ 0x6c7967656e657261);
            ppppplStack_250 = (long *****)(auStack_240._8_8_ ^ 0x646f72616e646f6d);
            ppppplStack_248 = (long *****)(auStack_240._8_8_ ^ 0x7465646279746573);
            uStack_228 = 0;
            uStack_220 = 0;
            lStack_230 = 0;
            FUN_100f189f4(pppppplVar11,pppppplVar10,&ppppplStack_260);
            lVar34 = 0;
            uVar25 = uStack_228 | lStack_230 << 0x38;
            uVar15 = uVar25 ^ (ulong)ppppplStack_248;
            pcVar31 = (char *)((long)ppppplStack_250 + (long)ppppplStack_260);
            uVar14 = (ulong)pcVar31 ^
                     ((ulong)ppppplStack_250 >> 0x33 | (long)ppppplStack_250 << 0xd);
            pcVar1 = (char *)(uVar15 + (long)ppppplStack_258) + uVar14;
            uVar15 = uVar15 + (long)ppppplStack_258 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
            uVar23 = (ulong)pcVar1 ^ (uVar14 >> 0x2f | uVar14 << 0x11);
            uVar14 = uVar15 + ((ulong)pcVar31 >> 0x20 | (long)pcVar31 << 0x20);
            uVar22 = uVar14 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
            uVar14 = (uVar14 ^ uVar25) + uVar23;
            uVar25 = uVar14 ^ (uVar23 >> 0x33 | uVar23 << 0xd);
            uVar15 = uVar22 + (((ulong)pcVar1 >> 0x20 | (long)pcVar1 << 0x20) ^ 0xff);
            uVar23 = uVar25 + uVar15;
            uVar15 = uVar15 ^ (uVar22 >> 0x30 | uVar22 << 0x10);
            uVar25 = uVar23 ^ (uVar25 >> 0x2f | uVar25 << 0x11);
            uVar14 = uVar15 + (uVar14 >> 0x20 | uVar14 << 0x20);
            uVar22 = uVar25 + uVar14;
            uVar14 = uVar14 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
            uVar25 = uVar22 ^ (uVar25 >> 0x33 | uVar25 << 0xd);
            uVar15 = uVar14 + (uVar23 >> 0x20 | uVar23 << 0x20);
            uVar23 = uVar25 + uVar15;
            uVar15 = uVar15 ^ (uVar14 >> 0x30 | uVar14 << 0x10);
            uVar25 = uVar23 ^ (uVar25 >> 0x2f | uVar25 << 0x11);
            uVar14 = uVar15 + (uVar22 >> 0x20 | uVar22 << 0x20);
            uVar22 = uVar14 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
            uVar25 = uVar25 + uVar14 ^ (uVar25 >> 0x33 | uVar25 << 0xd);
            uVar14 = uVar22 + (uVar23 >> 0x20 | uVar23 << 0x20);
            uVar15 = uVar25 + uVar14;
            uVar14 = uVar14 ^ (uVar22 >> 0x30 | uVar22 << 0x10);
            uVar15 = (uVar14 >> 0x2b | uVar14 << 0x15) ^ (uVar25 >> 0x2f | uVar25 << 0x11) ^
                     (uVar15 >> 0x20 | uVar15 << 0x20) ^ uVar15;
            lVar29 = param_2[0x19];
            uVar23 = param_2[0x1a];
            bVar4 = (byte)(uVar15 >> 0x38);
            bVar17 = bVar4 >> 1;
            uVar22 = uVar15 & uVar23;
            uVar36 = *(undefined8 *)(lVar29 + uVar22);
            uVar14 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar17),
                              CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar17),
                                       CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar17),
                                                CONCAT14(-((byte)((ulong)uVar36 >> 0x20) == bVar17),
                                                         CONCAT13(-((byte)((ulong)uVar36 >> 0x18) ==
                                                                   bVar17),CONCAT12(-((byte)((ulong)
                                                  uVar36 >> 0x10) == bVar17),
                                                  CONCAT11(-((byte)((ulong)uVar36 >> 8) == bVar17),
                                                           -((byte)uVar36 == bVar17))))))));
            while( true ) {
              uVar14 = uVar14 & 0x8080808080808080;
              if (uVar14 != 0) {
                if (pppppplVar10 == (long ******)0x0) {
                  do {
                    uVar25 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                             (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
                    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar25 & 0xffff0000ffff) << 0x10;
                    lVar39 = lVar29 + (uVar22 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >>
                                                3) & uVar23) * -0x30;
                    ppppplStack_500 = *(long ******)(lVar39 + -0x28);
                    ppppplStack_4f8 = *(long ******)(lVar39 + -0x20);
                    if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = *(char *)ppppplStack_500 == '/';
                    }
                    uStack_4f0 = (long ******)CONCAT71(uStack_4f0._1_7_,6);
                    ppppplStack_4c8 =
                         (long *****)CONCAT62(CONCAT51(ppppplStack_4c8._3_5_,bVar6),0x201);
                    ppppplStack_258 = (long *****)0x0;
                    ppppplStack_250 = (long *****)CONCAT71(ppppplStack_250._1_7_,6);
                    uStack_228._2_6_ = (uint6)(uStack_228 >> 0x10) & 0xffffffffff00;
                    uStack_228 = CONCAT62(uStack_228._2_6_,0x201);
                    ppppplStack_260 = (long *****)pppppplVar11;
                    uVar25 = FUN_10112a6c0(&ppppplStack_500,&ppppplStack_260);
                    if ((uVar25 & 1) != 0) goto LAB_100a151b4;
                    uVar14 = uVar14 - 1 & uVar14;
                  } while (uVar14 != 0);
                }
                else {
                  do {
                    uVar25 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                             (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
                    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar25 & 0xffff0000ffff) << 0x10;
                    lVar39 = lVar29 + (uVar22 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >>
                                                3) & uVar23) * -0x30;
                    ppppplStack_500 = *(long ******)(lVar39 + -0x28);
                    ppppplStack_4f8 = *(long ******)(lVar39 + -0x20);
                    if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = *(char *)ppppplStack_500 == '/';
                    }
                    uStack_4f0 = (long ******)CONCAT71(uStack_4f0._1_7_,6);
                    ppppplStack_4c8 =
                         (long *****)CONCAT62(CONCAT51(ppppplStack_4c8._3_5_,bVar6),0x201);
                    ppppplStack_250 = (long *****)CONCAT71(ppppplStack_250._1_7_,6);
                    uStack_228 = CONCAT62(CONCAT51(uStack_228._3_5_,*(char *)pppppplVar11 == '/'),
                                          0x201);
                    ppppplStack_260 = (long *****)pppppplVar11;
                    ppppplStack_258 = (long *****)pppppplVar10;
                    uVar25 = FUN_10112a6c0(&ppppplStack_500,&ppppplStack_260);
                    if ((uVar25 & 1) != 0) goto LAB_100a151b4;
                    uVar14 = uVar14 - 1 & uVar14;
                  } while (uVar14 != 0);
                }
              }
              bVar35 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar36 >> 0x38) == -1),
                                           CONCAT16(-((char)((ulong)uVar36 >> 0x30) == -1),
                                                    CONCAT15(-((char)((ulong)uVar36 >> 0x28) == -1),
                                                             CONCAT14(-((char)((ulong)uVar36 >> 0x20
                                                                              ) == -1),
                                                                      CONCAT13(-((char)((ulong)
                                                  uVar36 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar36 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar36 >> 8) ==
                                                                     -1),-((char)uVar36 == -1)))))))
                                          ),1);
              if ((bVar35 & 1) != 0) break;
              lVar34 = lVar34 + 8;
              uVar22 = uVar22 + lVar34 & uVar23;
              uVar36 = *(undefined8 *)(lVar29 + uVar22);
              uVar14 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar17),
                                CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar17),
                                         CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar17),
                                                  CONCAT14(-((byte)((ulong)uVar36 >> 0x20) == bVar17
                                                            ),CONCAT13(-((byte)((ulong)uVar36 >>
                                                                               0x18) == bVar17),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar36 >> 0x10) == bVar17),
                                                  CONCAT11(-((byte)((ulong)uVar36 >> 8) == bVar17),
                                                           -((byte)uVar36 == bVar17))))))));
            }
            if (param_2[0x1b] == 0) {
              __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h6bb4035813102636E
                        (param_2 + 0x19,1,param_2 + 0x1d,1);
            }
            if (pppppplVar10 != (long ******)0x8000000000000000) {
              uVar36 = param_2[0x3c];
              lVar34 = param_2[0x3d];
              if (lVar34 == 0) {
                lVar29 = 1;
              }
              else {
                lVar29 = _malloc(lVar34);
                if (lVar29 == 0) {
                  func_0x0001087c9084(1,lVar34);
                  goto LAB_100a14160;
                }
              }
              _memcpy(lVar29,uVar36,lVar34);
              plVar21 = (long *)param_2[0x19];
              uVar14 = param_2[0x1a];
              uVar15 = uVar14 & uVar15;
              lVar39 = *(long *)((long)plVar21 + uVar15);
              uVar23 = CONCAT17(-(lVar39 < 0),
                                CONCAT16(-((char)((ulong)lVar39 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar39 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar39 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar39 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar39 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar39 >> 8) < '\0'),
                                                           -((char)lVar39 < '\0'))))))));
              if (uVar23 == 0) {
                lVar39 = 8;
                do {
                  uVar15 = uVar15 + lVar39 & uVar14;
                  lVar40 = *(long *)((long)plVar21 + uVar15);
                  uVar23 = CONCAT17(-(lVar40 < 0),
                                    CONCAT16(-((char)((ulong)lVar40 >> 0x30) < '\0'),
                                             CONCAT15(-((char)((ulong)lVar40 >> 0x28) < '\0'),
                                                      CONCAT14(-((char)((ulong)lVar40 >> 0x20) <
                                                                '\0'),CONCAT13(-((char)((ulong)
                                                  lVar40 >> 0x18) < '\0'),
                                                  CONCAT12(-((char)((ulong)lVar40 >> 0x10) < '\0'),
                                                           CONCAT11(-((char)((ulong)lVar40 >> 8) <
                                                                     '\0'),-((char)lVar40 < '\0'))))
                                                  ))));
                  lVar39 = lVar39 + 8;
                } while (uVar23 == 0);
              }
              uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
              uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
              uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
              uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
              uVar23 = uVar15 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & uVar14;
              uVar15 = (ulong)*(char *)((long)plVar21 + uVar23);
              if (-1 < *(char *)((long)plVar21 + uVar23)) {
                lVar39 = *plVar21;
                uVar15 = CONCAT17(-(lVar39 < 0),
                                  CONCAT16(-((char)((ulong)lVar39 >> 0x30) < '\0'),
                                           CONCAT15(-((char)((ulong)lVar39 >> 0x28) < '\0'),
                                                    CONCAT14(-((char)((ulong)lVar39 >> 0x20) < '\0')
                                                             ,CONCAT13(-((char)((ulong)lVar39 >>
                                                                               0x18) < '\0'),
                                                                       CONCAT12(-((char)((ulong)
                                                  lVar39 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar39 >> 8) < '\0'),
                                                           -((char)lVar39 < '\0'))))))));
                uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
                uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar23 = (ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3;
                uVar15 = (ulong)*(byte *)((long)plVar21 + uVar23);
              }
              bVar4 = bVar4 >> 1;
              *(byte *)((long)plVar21 + uVar23) = bVar4;
              *(byte *)((long)plVar21 + (uVar23 - 8 & uVar14) + 8) = bVar4;
              plVar21[uVar23 * -6 + -6] = (long)pppppplVar10;
              plVar21[uVar23 * -6 + -5] = (long)pppppplVar11;
              plVar21[uVar23 * -6 + -4] = (long)pppppplVar10;
              plVar21[uVar23 * -6 + -3] = lVar34;
              plVar21[uVar23 * -6 + -2] = lVar29;
              plVar21[uVar23 * -6 + -1] = lVar34;
              param_2[0x1c] = param_2[0x1c] + 1;
              param_2[0x1b] = param_2[0x1b] - (uVar15 & 1);
            }
            goto LAB_100a15294;
          }
LAB_100a14ba8:
          lVar19 = *(long *)param_2[0x3e];
          *(long *)param_2[0x3e] = lVar19 + -1;
          LORelease();
          if (lVar19 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hca790a00580b4cf5E(param_2 + 0x3e);
          }
          if (param_2[0x3b] != 0) {
            _free(param_2[0x3c]);
          }
          if (param_2[0x32] != 0) {
            _free(param_2[0x33]);
          }
          if ((param_2[0x35] != -0x8000000000000000) && (param_2[0x35] != 0)) {
            _free(param_2[0x36]);
          }
          *(undefined1 *)((long)param_2 + 0x5b9) = 0;
          puVar16 = (undefined8 *)param_2[0x26];
        } while (puVar16 != (undefined8 *)param_2[0x28]);
      }
      param_2[0x29] = 0x8000000000000000;
LAB_100a12914:
      FUN_100e7c454(param_2 + 0x25);
      pauVar9 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar9[1][0] == '\x01') {
        auStack_670 = *pauVar9;
      }
      else {
        auStack_670 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar9 + 8) = auStack_670._8_8_;
        pauVar9[1][0] = 1;
      }
      lVar19 = auStack_670._0_8_ + 1;
      auVar45._8_8_ = auStack_670._8_8_;
      auVar45._0_8_ = lVar19;
      *(long *)*pauVar9 = lVar19;
      ppppplStack_688 = (long *****)0x0;
      ppppplStack_690 = (long *****)&UNK_108c56c70;
      ppppplStack_678 = (long *****)0x0;
      ppppplStack_680 = (long *****)0x0;
      lVar19 = param_2[5];
      if (lVar19 == 0) {
        lVar19 = 0;
        lVar28 = param_2[4];
        goto LAB_100a12adc;
      }
      lVar27 = 0;
      param_2[5] = 0;
      lVar34 = param_2[4];
      lVar28 = 1 - lVar19;
      do {
        lVar29 = lVar34 + lVar27;
        uVar36 = *(undefined8 *)(lVar29 + 0x38);
        pppppplVar10 = *(long *******)(lVar29 + 0x40);
        if (pppppplVar10 == (long ******)0x0) {
          pppppplVar11 = (long ******)0x1;
        }
        else {
          pppppplVar11 = (long ******)_malloc(pppppplVar10);
          if (pppppplVar11 == (long ******)0x0) {
            func_0x0001087c9084(1,pppppplVar10);
            goto LAB_100a14160;
          }
        }
        _memcpy(pppppplVar11,uVar36,pppppplVar10);
        ppppplStack_260 = (long *****)pppppplVar10;
        ppppplStack_258 = (long *****)pppppplVar11;
        ppppplStack_250 = (long *****)pppppplVar10;
        uVar14 = FUN_1016e6f28(&ppppplStack_690,&ppppplStack_260);
        if ((uVar14 & 1) != 0) {
          lVar34 = lVar34 + lVar27;
          FUN_100e0c08c(lVar34);
          if (lVar28 != 0) {
            lVar28 = -lVar28;
            lVar27 = 1;
            goto LAB_100a12a48;
          }
          lVar27 = 1;
          goto LAB_100a12ab8;
        }
        lVar28 = lVar28 + 1;
        lVar27 = lVar27 + 0x148;
      } while (lVar28 != 1);
      lVar27 = 0;
      goto LAB_100a12ab8;
    }
    func_0x000108a07af4(&UNK_10b22a5b0);
LAB_100a12820:
    func_0x000108a07b10(&UNK_10b22a5b0);
    uVar18 = extraout_w8;
  }
  else {
    if (bVar4 != 3) goto LAB_100a12820;
    bVar4 = *(byte *)((long)param_2 + 0x37c);
    uVar18 = (uint)bVar4;
    if (4 < bVar4) {
      if (bVar4 != 5) {
        if (bVar4 != 6) goto LAB_100a15924;
        auVar45 = *(undefined1 (*) [16])(param_2 + 0x70);
        goto LAB_100a13c28;
      }
      auVar45 = *(undefined1 (*) [16])(param_2 + 0x70);
      goto LAB_100a15d18;
    }
    if (2 < bVar4) {
      if (bVar4 == 3) {
        auVar45 = *(undefined1 (*) [16])(param_2 + 0x70);
        goto LAB_100a135ec;
      }
      auVar45 = *(undefined1 (*) [16])(param_2 + 0x70);
      goto LAB_100a142f8;
    }
    if (bVar4 == 0) {
      lVar19 = param_2[0x5d];
      lVar28 = param_2[0x5e];
      puVar16 = (undefined8 *)param_2[0x6d];
      uVar24 = *(undefined1 *)((long)param_2 + 0x37d);
      uVar36 = param_2[0x51];
      uVar37 = param_2[0x52];
      puVar13 = (undefined8 *)param_2[0x6e];
      goto LAB_100a140d4;
    }
  }
  if (uVar18 == 1) {
    func_0x000108a07af4(&UNK_10b22a610);
  }
  else {
    func_0x000108a07b10(&UNK_10b22a610);
  }
  goto LAB_100a14160;
LAB_100a151b4:
  if (pppppplVar10 != (long ******)0x0) {
    _free(pppppplVar11);
  }
LAB_100a15294:
  uVar36 = *(undefined8 *)(lVar19 + 0x38);
  pppppplVar10 = *(long *******)(lVar19 + 0x40);
  if (pppppplVar10 == (long ******)0x0) {
    pppppplVar11 = (long ******)0x1;
  }
  else {
    pppppplVar11 = (long ******)_malloc(pppppplVar10);
    if (pppppplVar11 == (long ******)0x0) {
      func_0x0001087c9084(1,pppppplVar10);
      goto LAB_100a14160;
    }
  }
  _memcpy(pppppplVar11,uVar36,pppppplVar10);
  auStack_240._8_8_ = param_2[0x24];
  auStack_240._0_8_ = param_2[0x23];
  ppppplStack_260 = (long *****)(auStack_240._0_8_ ^ 0x736f6d6570736575);
  ppppplStack_258 = (long *****)(auStack_240._0_8_ ^ 0x6c7967656e657261);
  ppppplStack_250 = (long *****)(auStack_240._8_8_ ^ 0x646f72616e646f6d);
  ppppplStack_248 = (long *****)(auStack_240._8_8_ ^ 0x7465646279746573);
  uStack_228 = 0;
  uStack_220 = 0;
  lStack_230 = 0;
  FUN_100f189f4(pppppplVar11,pppppplVar10,&ppppplStack_260);
  lVar19 = 0;
  uVar25 = uStack_228 | lStack_230 << 0x38;
  uVar15 = uVar25 ^ (ulong)ppppplStack_248;
  pcVar31 = (char *)((long)ppppplStack_250 + (long)ppppplStack_260);
  uVar14 = (ulong)pcVar31 ^ ((ulong)ppppplStack_250 >> 0x33 | (long)ppppplStack_250 << 0xd);
  pcVar1 = (char *)(uVar15 + (long)ppppplStack_258) + uVar14;
  uVar15 = uVar15 + (long)ppppplStack_258 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
  uVar23 = (ulong)pcVar1 ^ (uVar14 >> 0x2f | uVar14 << 0x11);
  uVar14 = uVar15 + ((ulong)pcVar31 >> 0x20 | (long)pcVar31 << 0x20);
  uVar22 = uVar14 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
  uVar14 = (uVar14 ^ uVar25) + uVar23;
  uVar25 = uVar14 ^ (uVar23 >> 0x33 | uVar23 << 0xd);
  uVar15 = uVar22 + (((ulong)pcVar1 >> 0x20 | (long)pcVar1 << 0x20) ^ 0xff);
  uVar23 = uVar25 + uVar15;
  uVar15 = uVar15 ^ (uVar22 >> 0x30 | uVar22 << 0x10);
  uVar25 = uVar23 ^ (uVar25 >> 0x2f | uVar25 << 0x11);
  uVar14 = uVar15 + (uVar14 >> 0x20 | uVar14 << 0x20);
  uVar22 = uVar25 + uVar14;
  uVar14 = uVar14 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
  uVar25 = uVar22 ^ (uVar25 >> 0x33 | uVar25 << 0xd);
  uVar15 = uVar14 + (uVar23 >> 0x20 | uVar23 << 0x20);
  uVar23 = uVar25 + uVar15;
  uVar15 = uVar15 ^ (uVar14 >> 0x30 | uVar14 << 0x10);
  uVar25 = uVar23 ^ (uVar25 >> 0x2f | uVar25 << 0x11);
  uVar14 = uVar15 + (uVar22 >> 0x20 | uVar22 << 0x20);
  uVar22 = uVar14 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
  uVar25 = uVar25 + uVar14 ^ (uVar25 >> 0x33 | uVar25 << 0xd);
  uVar14 = uVar22 + (uVar23 >> 0x20 | uVar23 << 0x20);
  uVar15 = uVar25 + uVar14;
  uVar14 = uVar14 ^ (uVar22 >> 0x30 | uVar22 << 0x10);
  uVar15 = (uVar14 >> 0x2b | uVar14 << 0x15) ^ (uVar25 >> 0x2f | uVar25 << 0x11) ^
           (uVar15 >> 0x20 | uVar15 << 0x20) ^ uVar15;
  lVar34 = param_2[0x1f];
  uVar23 = param_2[0x20];
  bVar4 = (byte)(uVar15 >> 0x38);
  bVar17 = bVar4 >> 1;
  uVar22 = uVar15 & uVar23;
  uVar36 = *(undefined8 *)(lVar34 + uVar22);
  uVar14 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar17),
                    CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar17),
                             CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar17),
                                      CONCAT14(-((byte)((ulong)uVar36 >> 0x20) == bVar17),
                                               CONCAT13(-((byte)((ulong)uVar36 >> 0x18) == bVar17),
                                                        CONCAT12(-((byte)((ulong)uVar36 >> 0x10) ==
                                                                  bVar17),CONCAT11(-((byte)((ulong)
                                                  uVar36 >> 8) == bVar17),-((byte)uVar36 == bVar17))
                                                  ))))));
  while( true ) {
    uVar14 = uVar14 & 0x8080808080808080;
    if (uVar14 != 0) {
      if (pppppplVar10 == (long ******)0x0) {
        do {
          uVar25 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          lVar29 = lVar34 + (uVar22 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) &
                            uVar23) * -0x28;
          ppppplStack_500 = *(long ******)(lVar29 + -0x20);
          ppppplStack_4f8 = *(long ******)(lVar29 + -0x18);
          if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
            bVar6 = false;
          }
          else {
            bVar6 = *(char *)ppppplStack_500 == '/';
          }
          uStack_4f0 = (long ******)CONCAT71(uStack_4f0._1_7_,6);
          ppppplStack_4c8 = (long *****)CONCAT62(CONCAT51(ppppplStack_4c8._3_5_,bVar6),0x201);
          ppppplStack_258 = (long *****)0x0;
          ppppplStack_250 = (long *****)CONCAT71(ppppplStack_250._1_7_,6);
          uStack_228._2_6_ = (uint6)(uStack_228 >> 0x10) & 0xffffffffff00;
          uStack_228 = CONCAT62(uStack_228._2_6_,0x201);
          ppppplStack_260 = (long *****)pppppplVar11;
          uVar25 = FUN_10112a6c0(&ppppplStack_500,&ppppplStack_260);
          if ((uVar25 & 1) != 0) goto LAB_100a15544;
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
      }
      else {
        do {
          uVar25 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          lVar29 = lVar34 + (uVar22 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3) &
                            uVar23) * -0x28;
          ppppplStack_500 = *(long ******)(lVar29 + -0x20);
          ppppplStack_4f8 = *(long ******)(lVar29 + -0x18);
          if ((long ******)ppppplStack_4f8 == (long ******)0x0) {
            bVar6 = false;
          }
          else {
            bVar6 = *(char *)ppppplStack_500 == '/';
          }
          uStack_4f0 = (long ******)CONCAT71(uStack_4f0._1_7_,6);
          ppppplStack_4c8 = (long *****)CONCAT62(CONCAT51(ppppplStack_4c8._3_5_,bVar6),0x201);
          ppppplStack_250 = (long *****)CONCAT71(ppppplStack_250._1_7_,6);
          uStack_228 = CONCAT62(CONCAT51(uStack_228._3_5_,*(char *)pppppplVar11 == '/'),0x201);
          ppppplStack_260 = (long *****)pppppplVar11;
          ppppplStack_258 = (long *****)pppppplVar10;
          uVar25 = FUN_10112a6c0(&ppppplStack_500,&ppppplStack_260);
          if ((uVar25 & 1) != 0) goto LAB_100a15544;
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
      }
    }
    bVar35 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar36 >> 0x38) == -1),
                                 CONCAT16(-((char)((ulong)uVar36 >> 0x30) == -1),
                                          CONCAT15(-((char)((ulong)uVar36 >> 0x28) == -1),
                                                   CONCAT14(-((char)((ulong)uVar36 >> 0x20) == -1),
                                                            CONCAT13(-((char)((ulong)uVar36 >> 0x18)
                                                                      == -1),CONCAT12(-((char)((
                                                  ulong)uVar36 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar36 >> 8) == -1),
                                                           -((char)uVar36 == -1)))))))),1);
    if ((bVar35 & 1) != 0) break;
    lVar19 = lVar19 + 8;
    uVar22 = uVar22 + lVar19 & uVar23;
    uVar36 = *(undefined8 *)(lVar34 + uVar22);
    uVar14 = CONCAT17(-((byte)((ulong)uVar36 >> 0x38) == bVar17),
                      CONCAT16(-((byte)((ulong)uVar36 >> 0x30) == bVar17),
                               CONCAT15(-((byte)((ulong)uVar36 >> 0x28) == bVar17),
                                        CONCAT14(-((byte)((ulong)uVar36 >> 0x20) == bVar17),
                                                 CONCAT13(-((byte)((ulong)uVar36 >> 0x18) == bVar17)
                                                          ,CONCAT12(-((byte)((ulong)uVar36 >> 0x10)
                                                                     == bVar17),
                                                                    CONCAT11(-((byte)((ulong)uVar36
                                                                                     >> 8) == bVar17
                                                                              ),-((byte)uVar36 ==
                                                                                 bVar17))))))));
  }
  if (*plVar26 == 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hdc1bae1ac9828523E
              (param_2 + 0x1f,1,param_2 + 0x23,1);
  }
  if (pppppplVar10 != (long ******)0x8000000000000000) {
    lVar34 = param_2[0x3f];
    plVar21 = (long *)param_2[0x3e];
    lVar19 = *plVar21;
    *plVar21 = lVar19 + 1;
    if (lVar19 < 0) goto LAB_100a14160;
    plVar32 = (long *)param_2[0x1f];
    uVar14 = param_2[0x20];
    uVar15 = uVar14 & uVar15;
    lVar19 = *(long *)((long)plVar32 + uVar15);
    uVar23 = CONCAT17(-(lVar19 < 0),
                      CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                               CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                        CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                 CONCAT13(-((char)((ulong)lVar19 >> 0x18) < '\0'),
                                                          CONCAT12(-((char)((ulong)lVar19 >> 0x10) <
                                                                    '\0'),CONCAT11(-((char)((ulong)
                                                  lVar19 >> 8) < '\0'),-((char)lVar19 < '\0'))))))))
    ;
    if (uVar23 == 0) {
      lVar19 = 8;
      do {
        uVar15 = uVar15 + lVar19 & uVar14;
        lVar29 = *(long *)((long)plVar32 + uVar15);
        uVar23 = CONCAT17(-(lVar29 < 0),
                          CONCAT16(-((char)((ulong)lVar29 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar29 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar29 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar29 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar29 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar29 >> 8) < '\0'),-((char)lVar29 < '\0'))))))))
        ;
        lVar19 = lVar19 + 8;
      } while (uVar23 == 0);
    }
    uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
    uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
    uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
    uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
    uVar23 = uVar15 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & uVar14;
    uVar15 = (ulong)*(char *)((long)plVar32 + uVar23);
    if (-1 < *(char *)((long)plVar32 + uVar23)) {
      lVar19 = *plVar32;
      uVar15 = CONCAT17(-(lVar19 < 0),
                        CONCAT16(-((char)((ulong)lVar19 >> 0x30) < '\0'),
                                 CONCAT15(-((char)((ulong)lVar19 >> 0x28) < '\0'),
                                          CONCAT14(-((char)((ulong)lVar19 >> 0x20) < '\0'),
                                                   CONCAT13(-((char)((ulong)lVar19 >> 0x18) < '\0'),
                                                            CONCAT12(-((char)((ulong)lVar19 >> 0x10)
                                                                      < '\0'),CONCAT11(-((char)((
                                                  ulong)lVar19 >> 8) < '\0'),-((char)lVar19 < '\0'))
                                                  ))))));
      uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar23 = (ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3;
      uVar15 = (ulong)*(byte *)((long)plVar32 + uVar23);
    }
    *(byte *)((long)plVar32 + uVar23) = bVar4 >> 1;
    *(byte *)((long)plVar32 + (uVar23 - 8 & uVar14) + 8) = bVar4 >> 1;
    plVar32[uVar23 * -5 + -5] = (long)pppppplVar10;
    plVar32[uVar23 * -5 + -4] = (long)pppppplVar11;
    plVar32[uVar23 * -5 + -3] = (long)pppppplVar10;
    plVar32[uVar23 * -5 + -1] = lVar34;
    plVar32[uVar23 * -5 + -2] = (long)plVar21;
    param_2[0x22] = param_2[0x22] + 1;
    *plVar26 = *plVar26 - (uVar15 & 1);
  }
LAB_100a14de4:
  lVar19 = lVar27;
  if (lVar27 == lVar28 + uVar30 * 0x148) goto LAB_100a14ba8;
  goto LAB_100a14df0;
LAB_100a15544:
  if (pppppplVar10 != (long ******)0x0) {
    _free(pppppplVar11);
  }
  goto LAB_100a14de4;
  while( true ) {
    _memcpy(pppppplVar11,uVar36,pppppplVar10);
    ppppplStack_260 = (long *****)pppppplVar10;
    ppppplStack_258 = (long *****)pppppplVar11;
    ppppplStack_250 = (long *****)pppppplVar10;
    iVar8 = FUN_1016e6f28(&ppppplStack_690,&ppppplStack_260);
    if (iVar8 == 0) {
      _memcpy(lVar29 + lVar27 * -0x148,lVar29,0x148);
    }
    else {
      lVar27 = lVar27 + 1;
      FUN_100e0c08c(lVar29);
    }
    lVar28 = lVar28 + -1;
    lVar34 = lVar29;
    if (lVar28 == 0) break;
LAB_100a12a48:
    lVar29 = lVar34 + 0x148;
    uVar36 = *(undefined8 *)(lVar34 + 0x180);
    pppppplVar10 = *(long *******)(lVar34 + 0x188);
    if (pppppplVar10 == (long ******)0x0) {
      pppppplVar11 = (long ******)0x1;
    }
    else {
      pppppplVar11 = (long ******)_malloc(pppppplVar10);
      if (pppppplVar11 == (long ******)0x0) {
        func_0x0001087c9084(1,pppppplVar10);
        goto LAB_100a14160;
      }
    }
  }
LAB_100a12ab8:
  lVar19 = lVar19 - lVar27;
  param_2[5] = lVar19;
  lVar28 = param_2[4];
  if (pauVar9[1][0] == '\x01') {
    auVar45 = *pauVar9;
  }
  else {
    auVar45 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar9 + 8) = auVar45._8_8_;
    pauVar9[1][0] = 1;
  }
LAB_100a12adc:
  *(long *)*pauVar9 = auVar45._0_8_ + 1;
  ppppplStack_258 = (long *****)0x0;
  ppppplStack_260 = (long *****)&UNK_108c56c70;
  ppppplStack_248 = (long *****)0x0;
  ppppplStack_250 = (long *****)0x0;
  auStack_240 = auVar45;
  if (lVar19 != 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hcc3b8f914eb258a7E
              (&ppppplStack_260,lVar19,auStack_240,1);
    puVar16 = (undefined8 *)(lVar28 + 0x40);
    do {
      uVar36 = puVar16[-1];
      pppppplVar10 = (long ******)*puVar16;
      if (pppppplVar10 == (long ******)0x0) {
        pppppplVar11 = (long ******)0x1;
      }
      else {
        pppppplVar11 = (long ******)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(pppppplVar10,1);
        if (pppppplVar11 == (long ******)0x0) {
          func_0x0001087c9084(1,pppppplVar10);
          goto LAB_100a14160;
        }
      }
      _memcpy(pppppplVar11,uVar36,pppppplVar10);
      ppppplStack_500 = (long *****)pppppplVar10;
      ppppplStack_4f8 = (long *****)pppppplVar11;
      uStack_4f0 = pppppplVar10;
      FUN_1016e6f28(&ppppplStack_260,&ppppplStack_500);
      puVar16 = puVar16 + 0x29;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  ppppplStack_3a8 = ppppplStack_258;
  ppppplStack_3b0 = ppppplStack_260;
  ppppplStack_398 = ppppplStack_248;
  ppppplStack_3a0 = ppppplStack_250;
  plVar26 = (long *)param_2[0x19];
  lVar28 = param_2[0x1c];
  lVar19 = 0;
  auStack_390 = auStack_240;
  if (lVar28 != 0) {
    uVar30 = param_2[0x1a];
    plVar32 = plVar26 + 1;
    lVar19 = *plVar26;
    uVar14 = CONCAT17(-(-1 < lVar19),
                      CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar19 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar19 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar19 >> 8)),-(-1 < (char)lVar19)))))))) &
             0x8080808080808080;
    lVar19 = param_2[0x1b];
    plVar21 = plVar26;
    lVar27 = lVar28;
    do {
      while (uVar14 == 0) {
        lVar34 = *plVar32;
        plVar21 = plVar21 + -0x30;
        plVar32 = plVar32 + 1;
        uVar14 = CONCAT17(-(-1 < lVar34),
                          CONCAT16(-(-1 < (char)((ulong)lVar34 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar34 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar34 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar34 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar34
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar34 >> 8)),-(-1 < (char)lVar34)))))))) &
                 0x8080808080808080;
      }
      uVar15 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      plVar20 = plVar21 + (long)-(int)((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) * 6;
      uVar15 = FUN_1016e434c(&ppppplStack_3b0,plVar20[-5],plVar20[-4]);
      if ((uVar15 & 1) == 0) {
        lVar34 = ((long)plVar26 - (long)plVar20 >> 4) * -0x5555555555555555;
        puVar16 = (undefined8 *)((long)plVar26 + (lVar34 - 8U & uVar30));
        uVar36 = *puVar16;
        uVar37 = *(undefined8 *)((long)plVar26 + lVar34);
        uVar15 = CONCAT17(-((char)((ulong)uVar37 >> 0x38) == -1),
                          CONCAT16(-((char)((ulong)uVar37 >> 0x30) == -1),
                                   CONCAT15(-((char)((ulong)uVar37 >> 0x28) == -1),
                                            CONCAT14(-((char)((ulong)uVar37 >> 0x20) == -1),
                                                     CONCAT13(-((char)((ulong)uVar37 >> 0x18) == -1)
                                                              ,CONCAT12(-((char)((ulong)uVar37 >>
                                                                                0x10) == -1),
                                                                        CONCAT11(-((char)((ulong)
                                                  uVar37 >> 8) == -1),-((char)uVar37 == -1))))))));
        uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3) +
            ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar36 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar36 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar36 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar36 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar36
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar36 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar36 >> 8) == -1),
                                                           -((char)uVar36 == -1))))))))) >> 3) < 8)
        {
          lVar19 = lVar19 + 1;
          param_2[0x1b] = lVar19;
          *(undefined1 *)((long)plVar26 + lVar34) = 0xff;
          *(undefined1 *)(puVar16 + 1) = 0xff;
          param_2[0x1c] = lVar27 + -1;
          lVar34 = plVar20[-6];
        }
        else {
          *(undefined1 *)((long)plVar26 + lVar34) = 0x80;
          *(undefined1 *)(puVar16 + 1) = 0x80;
          param_2[0x1c] = lVar27 + -1;
          lVar34 = plVar20[-6];
        }
        if (lVar34 != 0) {
          _free(plVar20[-5]);
        }
        lVar27 = lVar27 + -1;
        if (plVar20[-3] != 0) {
          _free(plVar20[-2]);
        }
      }
      uVar14 = uVar14 - 1 & uVar14;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    plVar26 = (long *)param_2[0x19];
    lVar19 = param_2[0x1c];
  }
  plVar21 = plVar26 + 1;
  lVar28 = *plVar26;
  if (pauVar9[1][0] == '\x01') {
    auVar45 = *pauVar9;
  }
  else {
    auVar45 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar9 + 8) = auVar45._8_8_;
    pauVar9[1][0] = 1;
  }
  *(long *)*pauVar9 = auVar45._0_8_ + 1;
  ppppplStack_258 = (long *****)0x0;
  ppppplStack_260 = (long *****)&UNK_108c56c70;
  ppppplStack_248 = (long *****)0x0;
  ppppplStack_250 = (long *****)0x0;
  auStack_240 = auVar45;
  if (lVar19 != 0) {
    __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17hcc3b8f914eb258a7E
              (&ppppplStack_260,lVar19,auStack_240,1);
  }
  uVar14 = CONCAT17(-(-1 < lVar28),
                    CONCAT16(-(-1 < (char)((ulong)lVar28 >> 0x30)),
                             CONCAT15(-(-1 < (char)((ulong)lVar28 >> 0x28)),
                                      CONCAT14(-(-1 < (char)((ulong)lVar28 >> 0x20)),
                                               CONCAT13(-(-1 < (char)((ulong)lVar28 >> 0x18)),
                                                        CONCAT12(-(-1 < (char)((ulong)lVar28 >> 0x10
                                                                              )),
                                                                 CONCAT11(-(-1 < (char)((ulong)
                                                  lVar28 >> 8)),-(-1 < (char)lVar28)))))))) &
           0x8080808080808080;
  do {
    if (uVar14 == 0) {
      plVar32 = plVar21;
      if (lVar19 == 0) {
        lVar19 = param_2[0x18];
        ppppplStack_500 = ppppplStack_260;
        ppppplStack_4f8 = ppppplStack_258;
        uStack_4f0 = (long ******)ppppplStack_250;
        ppppplStack_4e8 = ppppplStack_248;
        auStack_4e0 = auStack_240;
        if (lVar19 == 0) goto LAB_100a12e38;
        lVar27 = 0;
        param_2[0x18] = 0;
        lVar34 = param_2[0x17];
        lVar28 = 1 - lVar19;
        goto LAB_100a12d84;
      }
      do {
        plVar21 = plVar32 + 1;
        lVar28 = *plVar32;
        plVar26 = plVar26 + -0x30;
        uVar14 = CONCAT17(-(-1 < lVar28),
                          CONCAT16(-(-1 < (char)((ulong)lVar28 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar28 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar28 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar28 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar28
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar28 >> 8)),-(-1 < (char)lVar28)))))))) &
                 0x8080808080808080;
        plVar32 = plVar21;
      } while (uVar14 == 0);
    }
    uVar30 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
    iVar8 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
    lVar28 = plVar26[(long)-iVar8 * 6 + -2];
    pppppplVar10 = (long ******)plVar26[(long)-iVar8 * 6 + -1];
    if (pppppplVar10 == (long ******)0x0) {
      pppppplVar11 = (long ******)0x1;
    }
    else {
      pppppplVar11 = (long ******)_malloc(pppppplVar10);
      if (pppppplVar11 == (long ******)0x0) break;
    }
    _memcpy(pppppplVar11,lVar28,pppppplVar10);
    ppppplStack_290 = (long *****)pppppplVar10;
    ppppplStack_288 = (long *****)pppppplVar11;
    ppppplStack_280 = (long *****)pppppplVar10;
    FUN_1016e6f28(&ppppplStack_260,&ppppplStack_290);
    uVar14 = uVar14 - 1 & uVar14;
    lVar19 = lVar19 + -1;
  } while( true );
  func_0x0001087c9084(1,pppppplVar10);
  goto LAB_100a14160;
  while( true ) {
    lVar28 = lVar28 + 1;
    lVar27 = lVar27 + 0x18;
    if (lVar28 == 1) break;
LAB_100a12d84:
    lVar29 = lVar34 + lVar27;
    uVar14 = FUN_1016e434c(&ppppplStack_500,*(undefined8 *)(lVar29 + 8),
                           *(undefined8 *)(lVar29 + 0x10));
    if ((uVar14 & 1) == 0) {
      plVar26 = (long *)(lVar34 + lVar27);
      if (*plVar26 != 0) {
        _free(plVar26[1]);
      }
      if (lVar28 == 0) {
        lVar27 = 1;
      }
      else {
        lVar28 = -lVar28;
        lVar27 = 1;
        do {
          plVar21 = plVar26 + 3;
          uVar14 = FUN_1016e434c(&ppppplStack_500,plVar26[4],plVar26[5]);
          if ((uVar14 & 1) == 0) {
            lVar27 = lVar27 + 1;
            if (*plVar21 != 0) {
              _free(plVar26[4]);
            }
          }
          else {
            lVar29 = plVar26[4];
            lVar34 = *plVar21;
            plVar32 = plVar21 + lVar27 * -3;
            plVar32[2] = plVar26[5];
            plVar32[1] = lVar29;
            *plVar32 = lVar34;
          }
          lVar28 = lVar28 + -1;
          plVar26 = plVar21;
        } while (lVar28 != 0);
      }
      goto LAB_100a12e30;
    }
  }
  lVar27 = 0;
LAB_100a12e30:
  param_2[0x18] = lVar19 - lVar27;
LAB_100a12e38:
  lVar19 = param_2[0x22];
  if (lVar19 != 0) {
    plVar26 = (long *)param_2[0x1f];
    plVar21 = plVar26 + 1;
    lVar28 = *plVar26;
    uVar14 = CONCAT17(-(-1 < lVar28),
                      CONCAT16(-(-1 < (char)((ulong)lVar28 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar28 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar28 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar28 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar28 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar28 >> 8)),-(-1 < (char)lVar28)))))))) &
             0x8080808080808080;
    do {
      while (uVar14 == 0) {
        lVar28 = *plVar21;
        plVar26 = plVar26 + -0x28;
        plVar21 = plVar21 + 1;
        uVar14 = CONCAT17(-(-1 < lVar28),
                          CONCAT16(-(-1 < (char)((ulong)lVar28 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar28 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar28 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar28 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar28
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar28 >> 8)),-(-1 < (char)lVar28)))))))) &
                 0x8080808080808080;
      }
      uVar30 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      plVar32 = plVar26 + (long)-(int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3) * 5;
      uVar30 = FUN_1016e434c(&ppppplStack_3b0,plVar32[-4],plVar32[-3]);
      if ((uVar30 & 1) == 0) {
        lVar28 = param_2[0x1f];
        lVar27 = (lVar28 - (long)plVar32 >> 3) * -0x3333333333333333;
        puVar16 = (undefined8 *)(lVar28 + (lVar27 - 8U & param_2[0x20]));
        uVar36 = *puVar16;
        uVar37 = *(undefined8 *)(lVar28 + lVar27);
        uVar30 = CONCAT17(-((char)((ulong)uVar37 >> 0x38) == -1),
                          CONCAT16(-((char)((ulong)uVar37 >> 0x30) == -1),
                                   CONCAT15(-((char)((ulong)uVar37 >> 0x28) == -1),
                                            CONCAT14(-((char)((ulong)uVar37 >> 0x20) == -1),
                                                     CONCAT13(-((char)((ulong)uVar37 >> 0x18) == -1)
                                                              ,CONCAT12(-((char)((ulong)uVar37 >>
                                                                                0x10) == -1),
                                                                        CONCAT11(-((char)((ulong)
                                                  uVar37 >> 8) == -1),-((char)uVar37 == -1))))))));
        uVar30 = (uVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar30 & 0x5555555555555555) << 1;
        uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
        uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
        uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
        if (((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3) +
            ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar36 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar36 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar36 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar36 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar36
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar36 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar36 >> 8) == -1),
                                                           -((char)uVar36 == -1))))))))) >> 3) < 8)
        {
          param_2[0x21] = param_2[0x21] + 1;
          uVar24 = 0xff;
        }
        else {
          uVar24 = 0x80;
        }
        *(undefined1 *)(lVar28 + lVar27) = uVar24;
        *(undefined1 *)(puVar16 + 1) = uVar24;
        param_2[0x22] = param_2[0x22] + -1;
        if (plVar32[-5] != 0) {
          _free(plVar32[-4]);
        }
        plVar20 = (long *)plVar32[-2];
        lVar28 = *plVar20;
        *plVar20 = lVar28 + -1;
        LORelease();
        if (lVar28 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hca790a00580b4cf5E(plVar32 + -2);
        }
      }
      uVar14 = uVar14 - 1 & uVar14;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  *(undefined1 *)((long)param_2 + 0x5bc) = 0;
  ppppplStack_258 = (long *****)param_2[0x17];
  ppppplStack_260 = (long *****)param_2[0x16];
  ppppplStack_250 = (long *****)param_2[0x18];
  lVar19 = param_2[10];
  lVar28 = param_2[0xb];
  if (lVar28 != 0) {
    puVar16 = (undefined8 *)(lVar19 + 8);
    do {
      if (puVar16[-1] != 0) {
        _free(*puVar16);
      }
      puVar16 = puVar16 + 3;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  if (param_2[9] != 0) {
    _free(lVar19);
  }
  *(undefined1 *)(param_2 + 0xb8) = 1;
  param_2[10] = ppppplStack_258;
  param_2[9] = ppppplStack_260;
  param_2[0xb] = ppppplStack_250;
  *(undefined1 *)((long)param_2 + 0x5bb) = 0;
  ppppplStack_248 = (long *****)param_2[0x1a];
  ppppplStack_250 = (long *****)param_2[0x19];
  auStack_240._8_8_ = param_2[0x1c];
  auStack_240._0_8_ = param_2[0x1b];
  uStack_228 = param_2[0x1e];
  lStack_230 = param_2[0x1d];
  ppppplStack_258 = (long *****)0x1;
  ppppplStack_260 = (long *****)0x1;
  puVar16 = (undefined8 *)_malloc(0x40);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0001087c906c(8,0x40);
  }
  else {
    puVar16[1] = ppppplStack_258;
    *puVar16 = ppppplStack_260;
    puVar16[3] = ppppplStack_248;
    puVar16[2] = ppppplStack_250;
    puVar16[5] = auStack_240._8_8_;
    puVar16[4] = auStack_240._0_8_;
    puVar16[7] = uStack_228;
    puVar16[6] = lStack_230;
    lVar19 = *(long *)param_2[0x12];
    *(long *)param_2[0x12] = lVar19 + -1;
    LORelease();
    if (lVar19 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h516dbdaead00933fE();
    }
    *(undefined1 *)((long)param_2 + 0x5bf) = 1;
    param_2[0x12] = puVar16;
    *(undefined1 *)((long)param_2 + 0x5ba) = 0;
    ppppplStack_248 = (long *****)param_2[0x20];
    ppppplStack_250 = (long *****)param_2[0x1f];
    auStack_240._8_8_ = param_2[0x22];
    auStack_240._0_8_ = param_2[0x21];
    uStack_228 = param_2[0x24];
    lStack_230 = param_2[0x23];
    ppppplStack_258 = (long *****)0x1;
    ppppplStack_260 = (long *****)0x1;
    puVar16 = (undefined8 *)_malloc(0x40);
    if (puVar16 != (undefined8 *)0x0) {
      puVar16[1] = ppppplStack_258;
      *puVar16 = ppppplStack_260;
      puVar16[3] = ppppplStack_248;
      puVar16[2] = ppppplStack_250;
      puVar16[5] = auStack_240._8_8_;
      puVar16[4] = auStack_240._0_8_;
      puVar16[7] = uStack_228;
      puVar16[6] = lStack_230;
      lVar19 = *(long *)param_2[0x13];
      *(long *)param_2[0x13] = lVar19 + -1;
      LORelease();
      if (lVar19 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbcd0bfd41f3bc2f3E();
      }
      *(undefined1 *)((long)param_2 + 0x5be) = 1;
      param_2[0x13] = puVar16;
      uVar14 = param_2[5];
      ppppplStack_260 = (long *****)&ppppplStack_90;
      if (1 < uVar14) {
        if (uVar14 < 0x15) {
          FUN_100e96ac8();
        }
        else {
          func_0x00010394e858(param_2[4],uVar14,&ppppplStack_260);
        }
      }
      ppppplVar33 = ppppplStack_4f8;
      *(undefined4 *)((long)param_2 + 0x5bd) = 0;
      uStack_5f8 = param_2[0x10];
      uStack_600 = param_2[0xf];
      uStack_5e8 = param_2[0x12];
      uStack_5f0 = param_2[0x11];
      uStack_5d8 = param_2[0x14];
      uStack_5e0 = param_2[0x13];
      uStack_5d0 = param_2[0x15];
      uStack_638 = param_2[8];
      uStack_640 = param_2[7];
      uStack_628 = param_2[10];
      uStack_630 = param_2[9];
      uStack_618 = param_2[0xc];
      uStack_620 = param_2[0xb];
      uStack_608 = param_2[0xe];
      uStack_610 = param_2[0xd];
      uStack_658 = param_2[4];
      uStack_660 = param_2[3];
      uStack_648 = param_2[6];
      uStack_650 = param_2[5];
      if ((long ******)ppppplStack_4f8 != (long ******)0x0) {
        if ((long ******)ppppplStack_4e8 != (long ******)0x0) {
          pppppplVar11 = (long ******)(ppppplStack_500 + 1);
          ppppplVar38 = (long *****)*ppppplStack_500;
          uVar14 = CONCAT17(-(-1 < (long)ppppplVar38),
                            CONCAT16(-(-1 < (char)((ulong)ppppplVar38 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)ppppplVar38 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)ppppplVar38 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)ppppplVar38 >>
                                                                             0x18)),
                                                                CONCAT12(-(-1 < (char)((ulong)
                                                  ppppplVar38 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)ppppplVar38 >> 8)),
                                                           -(-1 < (char)ppppplVar38)))))))) &
                   0x8080808080808080;
          pppppplVar10 = (long ******)ppppplStack_500;
          pppppplVar12 = (long ******)ppppplStack_4e8;
          do {
            while (uVar14 == 0) {
              ppppplVar38 = *pppppplVar11;
              pppppplVar10 = pppppplVar10 + -0x18;
              pppppplVar11 = pppppplVar11 + 1;
              uVar14 = CONCAT17(-(-1 < (long)ppppplVar38),
                                CONCAT16(-(-1 < (char)((ulong)ppppplVar38 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)ppppplVar38 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)ppppplVar38 >> 0x20)
                                                            ),CONCAT13(-(-1 < (char)((ulong)
                                                  ppppplVar38 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)ppppplVar38 >> 0x10)
                                                            ),CONCAT11(-(-1 < (char)((ulong)
                                                  ppppplVar38 >> 8)),-(-1 < (char)ppppplVar38)))))))
                               ) & 0x8080808080808080;
            }
            uVar30 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            iVar8 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
            if (pppppplVar10[(long)-iVar8 * 3 + -3] != (long *****)0x0) {
              _free(pppppplVar10[(long)-iVar8 * 3 + -2]);
            }
            uVar14 = uVar14 - 1 & uVar14;
            pppppplVar12 = (long ******)((long)pppppplVar12 + -1);
          } while (pppppplVar12 != (long ******)0x0);
        }
        if ((long)ppppplVar33 * 0x19 != -0x21) {
          _free(ppppplStack_500 + (long)ppppplVar33 * -3 + -3);
        }
      }
      ppppplVar33 = ppppplStack_3a8;
      if ((long ******)ppppplStack_3a8 != (long ******)0x0) {
        if ((long ******)ppppplStack_398 != (long ******)0x0) {
          pppppplVar11 = (long ******)(ppppplStack_3b0 + 1);
          ppppplVar38 = (long *****)*ppppplStack_3b0;
          uVar14 = CONCAT17(-(-1 < (long)ppppplVar38),
                            CONCAT16(-(-1 < (char)((ulong)ppppplVar38 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)ppppplVar38 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)ppppplVar38 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)ppppplVar38 >>
                                                                             0x18)),
                                                                CONCAT12(-(-1 < (char)((ulong)
                                                  ppppplVar38 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)ppppplVar38 >> 8)),
                                                           -(-1 < (char)ppppplVar38)))))))) &
                   0x8080808080808080;
          pppppplVar10 = (long ******)ppppplStack_3b0;
          pppppplVar12 = (long ******)ppppplStack_398;
          do {
            while (uVar14 == 0) {
              ppppplVar38 = *pppppplVar11;
              pppppplVar10 = pppppplVar10 + -0x18;
              pppppplVar11 = pppppplVar11 + 1;
              uVar14 = CONCAT17(-(-1 < (long)ppppplVar38),
                                CONCAT16(-(-1 < (char)((ulong)ppppplVar38 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)ppppplVar38 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)ppppplVar38 >> 0x20)
                                                            ),CONCAT13(-(-1 < (char)((ulong)
                                                  ppppplVar38 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)ppppplVar38 >> 0x10)
                                                            ),CONCAT11(-(-1 < (char)((ulong)
                                                  ppppplVar38 >> 8)),-(-1 < (char)ppppplVar38)))))))
                               ) & 0x8080808080808080;
            }
            uVar30 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            iVar8 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
            if (pppppplVar10[(long)-iVar8 * 3 + -3] != (long *****)0x0) {
              _free(pppppplVar10[(long)-iVar8 * 3 + -2]);
            }
            uVar14 = uVar14 - 1 & uVar14;
            pppppplVar12 = (long ******)((long)pppppplVar12 + -1);
          } while (pppppplVar12 != (long ******)0x0);
        }
        if ((long)ppppplVar33 * 0x19 != -0x21) {
          _free(ppppplStack_3b0 + (long)ppppplVar33 * -3 + -3);
        }
      }
      ppppplVar33 = ppppplStack_688;
      if ((long ******)ppppplStack_688 != (long ******)0x0) {
        if ((long ******)ppppplStack_678 != (long ******)0x0) {
          pppppplVar11 = (long ******)(ppppplStack_690 + 1);
          ppppplVar38 = (long *****)*ppppplStack_690;
          uVar14 = CONCAT17(-(-1 < (long)ppppplVar38),
                            CONCAT16(-(-1 < (char)((ulong)ppppplVar38 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)ppppplVar38 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)ppppplVar38 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)ppppplVar38 >>
                                                                             0x18)),
                                                                CONCAT12(-(-1 < (char)((ulong)
                                                  ppppplVar38 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)ppppplVar38 >> 8)),
                                                           -(-1 < (char)ppppplVar38)))))))) &
                   0x8080808080808080;
          pppppplVar10 = (long ******)ppppplStack_690;
          pppppplVar12 = (long ******)ppppplStack_678;
          do {
            while (uVar14 == 0) {
              ppppplVar38 = *pppppplVar11;
              pppppplVar10 = pppppplVar10 + -0x18;
              pppppplVar11 = pppppplVar11 + 1;
              uVar14 = CONCAT17(-(-1 < (long)ppppplVar38),
                                CONCAT16(-(-1 < (char)((ulong)ppppplVar38 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)ppppplVar38 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)ppppplVar38 >> 0x20)
                                                            ),CONCAT13(-(-1 < (char)((ulong)
                                                  ppppplVar38 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)ppppplVar38 >> 0x10)
                                                            ),CONCAT11(-(-1 < (char)((ulong)
                                                  ppppplVar38 >> 8)),-(-1 < (char)ppppplVar38)))))))
                               ) & 0x8080808080808080;
            }
            uVar30 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
            iVar8 = (int)((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3);
            if (pppppplVar10[(long)-iVar8 * 3 + -3] != (long *****)0x0) {
              _free(pppppplVar10[(long)-iVar8 * 3 + -2]);
            }
            uVar14 = uVar14 - 1 & uVar14;
            pppppplVar12 = (long ******)((long)pppppplVar12 + -1);
          } while (pppppplVar12 != (long ******)0x0);
        }
        if ((long)ppppplVar33 * 0x19 != -0x21) {
          _free(ppppplStack_690 + (long)ppppplVar33 * -3 + -3);
        }
      }
      *(undefined8 *)((long)param_2 + 0x5ba) = 0;
      param_1[0xd] = uStack_5f8;
      param_1[0xc] = uStack_600;
      param_1[0xf] = uStack_5e8;
      param_1[0xe] = uStack_5f0;
      param_1[0x11] = uStack_5d8;
      param_1[0x10] = uStack_5e0;
      param_1[0x12] = uStack_5d0;
      param_1[5] = uStack_638;
      param_1[4] = uStack_640;
      param_1[7] = uStack_628;
      param_1[6] = uStack_630;
      param_1[9] = uStack_618;
      param_1[8] = uStack_620;
      param_1[0xb] = uStack_608;
      param_1[10] = uStack_610;
      uVar24 = 1;
      param_1[1] = uStack_658;
      *param_1 = uStack_660;
      param_1[3] = uStack_648;
      param_1[2] = uStack_650;
LAB_100a15c08:
      *(undefined1 *)(param_2 + 0xb7) = uVar24;
      return;
    }
    func_0x0001087c906c(8,0x40);
  }
LAB_100a14160:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100a14164);
  (*pcVar5)();
}

