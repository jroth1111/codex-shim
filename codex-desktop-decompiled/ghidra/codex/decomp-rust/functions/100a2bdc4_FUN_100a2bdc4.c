
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100a2bdc4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar12;
  undefined8 *extraout_x1_01;
  undefined8 *extraout_x1_02;
  undefined8 *extraout_x1_03;
  undefined8 *puVar13;
  undefined1 uVar14;
  long *extraout_x8;
  long *plVar15;
  long *unaff_x21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long lStack_b30;
  long lStack_b28;
  long lStack_b20;
  long lStack_b18;
  long lStack_b10;
  long lStack_b08;
  long lStack_b00;
  long lStack_af8;
  long lStack_af0;
  long lStack_ae8;
  long lStack_ae0;
  long lStack_ad8;
  long lStack_ad0;
  long lStack_ac8;
  long lStack_ac0;
  long lStack_ab8;
  long lStack_830;
  long lStack_828;
  long lStack_820;
  long lStack_818;
  long lStack_810;
  long lStack_808;
  long lStack_800;
  long lStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  long lStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  undefined1 auStack_7c0 [656];
  undefined1 auStack_530 [656];
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_178;
  undefined8 **ppuStack_170;
  char ***pppcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  char **ppcStack_150;
  undefined *puStack_148;
  char *pcStack_140;
  undefined8 ***pppuStack_138;
  undefined8 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 **ppuStack_108;
  undefined8 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char ***pppcStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  char ***pppcStack_98;
  undefined8 ***pppuStack_90;
  undefined1 uStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  
  bVar3 = *(byte *)(param_1 + 0x10);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      param_1[1] = *param_1 + 0xe0;
      *(undefined1 *)(param_1 + 0xf) = 0;
LAB_100a2be04:
      auVar16 = FUN_100fd3e50(param_1 + 1);
      uVar9 = auVar16._8_8_;
      pcVar8 = auVar16._0_8_;
      if (pcVar8 == (char *)0x0) {
        *(undefined1 *)(param_1 + 0x10) = 3;
        uVar9 = 1;
      }
      else {
        if ((((char)param_1[0xf] == '\x03') && ((char)param_1[0xe] == '\x03')) &&
           ((char)param_1[5] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 6);
          uVar9 = extraout_x1;
          if (param_1[7] != 0) {
            (**(code **)(param_1[7] + 0x18))(param_1[8]);
            uVar9 = extraout_x1_00;
          }
        }
        if (*(long *)(pcVar8 + 0x28) == -0x7ffffffffffffffa) {
          unaff_x21 = *(long **)(pcVar8 + 0x38);
          if ((unaff_x21 != (long *)0x0) && (lVar5 = *unaff_x21, *unaff_x21 = lVar5 + 1, lVar5 < 0))
          {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100a2be80);
            (*pcVar4)();
          }
        }
        else {
          unaff_x21 = (long *)0x0;
        }
        if (*pcVar8 == '\0') {
          *pcVar8 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar8,uVar9,1000000000);
        }
        FUN_1060fa678(pcVar8,1,pcVar8);
        uVar9 = 0;
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      auVar16._8_8_ = unaff_x21;
      auVar16._0_8_ = uVar9;
      return auVar16;
    }
    func_0x000108a07af4(&UNK_10b22abc8);
  }
  else if (bVar3 == 3) goto LAB_100a2be04;
  func_0x000108a07b10(&UNK_10b22abc8);
  *(undefined1 *)(param_1 + 0x10) = 2;
  uVar9 = __Unwind_Resume();
  FUN_100ca4214(param_1 + 1);
  *(undefined1 *)(param_1 + 0x10) = 2;
  __Unwind_Resume(uVar9);
  auVar16 = func_0x000108a07bc4();
  puVar10 = auVar16._0_8_;
  bVar3 = *(byte *)(puVar10 + 2);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        func_0x000108a07af4(&UNK_10b22abe0);
      }
      uVar9 = func_0x000108a07b10();
      (**(code **)*puStack_178)();
      lVar5 = *(long *)puVar10[3];
      *(long *)puVar10[3] = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000103e32944();
      }
      *(undefined1 *)(puVar10 + 2) = 2;
      __Unwind_Resume(uVar9);
      auVar16 = func_0x000108a07bc4();
      puVar10 = auVar16._0_8_;
      bVar3 = *(byte *)(puVar10 + 0x27f);
      if (bVar3 < 2) {
        if (bVar3 == 0) {
          puVar10[0x12] = puVar10[5];
          puVar10[0x11] = puVar10[4];
          puVar10[0x14] = puVar10[7];
          puVar10[0x13] = puVar10[6];
          puVar10[0x16] = puVar10[9];
          puVar10[0x15] = puVar10[8];
          puVar10[0x18] = puVar10[0xb];
          puVar10[0x17] = puVar10[10];
          puVar10[0xe] = puVar10[1];
          puVar10[0xd] = *puVar10;
          lVar5 = puVar10[0xc] + 0x18;
          *(undefined1 *)((long)puVar10 + 0x13f9) = 0;
          puVar10[0x10] = puVar10[3];
          puVar10[0xf] = puVar10[2];
          puVar10[0x19] = lVar5;
          *(undefined1 *)(puVar10 + 0x27e) = 0;
LAB_100a2c4a8:
          puVar10[0x20] = puVar10[0x12];
          puVar10[0x1f] = puVar10[0x11];
          puVar10[0x22] = puVar10[0x14];
          puVar10[0x21] = puVar10[0x13];
          puVar10[0x24] = puVar10[0x16];
          puVar10[0x23] = puVar10[0x15];
          puVar10[0x26] = puVar10[0x18];
          puVar10[0x25] = puVar10[0x17];
          puVar10[0x1c] = puVar10[0xe];
          puVar10[0x1b] = puVar10[0xd];
          *(undefined1 *)((long)puVar10 + 0x13f1) = 0;
          puVar10[0x1a] = 9;
          puVar10[0x1e] = puVar10[0x10];
          puVar10[0x1d] = puVar10[0xf];
          puVar10[0x27] = 0;
          puVar10[0x81] = lVar5;
          *(undefined1 *)(puVar10 + 0x82) = 0;
LAB_100a2c50c:
          auVar16 = FUN_100eea0cc(&lStack_830,puVar10 + 0x1a);
          if (lStack_830 == 0x12) {
            *(undefined1 *)(puVar10 + 0x27e) = 3;
          }
          else {
            lStack_278 = lStack_7f8;
            lStack_280 = lStack_800;
            lStack_268 = lStack_7e8;
            lStack_270 = lStack_7f0;
            lStack_258 = lStack_7d8;
            lStack_260 = lStack_7e0;
            lStack_248 = lStack_7c8;
            lStack_250 = lStack_7d0;
            lStack_298 = lStack_818;
            lStack_2a0 = lStack_820;
            lStack_288 = lStack_808;
            lStack_290 = lStack_810;
            auVar16 = _memcpy(auStack_530,auStack_7c0,0x290);
            cVar6 = *(char *)(puVar10 + 0x82);
            if (cVar6 == '\x04') {
              auVar16 = FUN_100d18bec(puVar10 + 0x83);
            }
            else if (cVar6 == '\x03') {
              auVar16 = FUN_100d1c894(puVar10 + 0x83);
            }
            else if (cVar6 == '\0') {
              auVar16 = func_0x000100deab40(puVar10 + 0x1a);
            }
            if (lStack_830 == 0x11) {
              lStack_218 = lStack_278;
              lStack_220 = lStack_280;
              lStack_208 = lStack_268;
              lStack_210 = lStack_270;
              lStack_1f8 = lStack_258;
              lStack_200 = lStack_260;
              lStack_1e8 = lStack_248;
              lStack_1f0 = lStack_250;
              lStack_238 = lStack_298;
              lStack_240 = lStack_2a0;
              lStack_228 = lStack_288;
              lStack_230 = lStack_290;
              lVar5 = -0x8000000000000000;
            }
            else {
              auVar16 = _memcpy(&lStack_ac0,auStack_530,0x290);
              lStack_af8 = lStack_278;
              lStack_b00 = lStack_280;
              lStack_ae8 = lStack_268;
              lStack_af0 = lStack_270;
              lStack_ad8 = lStack_258;
              lStack_ae0 = lStack_260;
              lStack_ac8 = lStack_248;
              lStack_ad0 = lStack_250;
              lStack_b18 = lStack_298;
              lStack_b20 = lStack_2a0;
              lStack_b08 = lStack_288;
              lStack_b10 = lStack_290;
              lStack_b30 = lStack_830;
              lStack_b28 = lStack_828;
              if (lStack_830 == 6) {
                lStack_1f8 = lStack_250;
                lStack_200 = lStack_258;
                lStack_1e8 = lStack_ac0;
                lStack_1f0 = lStack_248;
                lStack_1e0 = lStack_ab8;
                lStack_238 = lStack_290;
                lStack_240 = lStack_298;
                lStack_228 = lStack_280;
                lStack_230 = lStack_288;
                lStack_218 = lStack_270;
                lStack_220 = lStack_278;
                lStack_208 = lStack_260;
                lStack_210 = lStack_268;
                lVar5 = lStack_828;
                lStack_828 = lStack_2a0;
              }
              else {
                auVar16 = FUN_100de8594(&lStack_b30);
                lStack_828 = -0x7ffffffffffffffd;
                lVar5 = -0x8000000000000000;
              }
            }
            *(undefined1 *)((long)puVar10 + 0x13f1) = 0;
            *extraout_x8 = lVar5;
            extraout_x8[1] = lStack_828;
            extraout_x8[0xb] = lStack_1f8;
            extraout_x8[10] = lStack_200;
            extraout_x8[0xd] = lStack_1e8;
            extraout_x8[0xc] = lStack_1f0;
            extraout_x8[0xe] = lStack_1e0;
            extraout_x8[3] = lStack_238;
            extraout_x8[2] = lStack_240;
            extraout_x8[5] = lStack_228;
            extraout_x8[4] = lStack_230;
            *(undefined1 *)(puVar10 + 0x27e) = 1;
            extraout_x8[7] = lStack_218;
            extraout_x8[6] = lStack_220;
            extraout_x8[9] = lStack_208;
            extraout_x8[8] = lStack_210;
            if (lVar5 != -0x7fffffffffffffff) {
              plVar15 = (long *)puVar10[0xc];
              lVar5 = *plVar15;
              *plVar15 = lVar5 + -1;
              LORelease();
              if (lVar5 == 1) {
                DataMemoryBarrier(2,1);
                auVar16 = __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h11322f4fd33ab6c2E
                                    (puVar10 + 0xc);
              }
              uVar14 = 1;
              goto LAB_100a2c6d8;
            }
          }
          *extraout_x8 = -0x7fffffffffffffff;
          uVar14 = 3;
LAB_100a2c6d8:
          *(undefined1 *)(puVar10 + 0x27f) = uVar14;
          return auVar16;
        }
        func_0x000108a07af4(&UNK_10b22ac48);
LAB_100a2c704:
        func_0x000108a07b10(&UNK_10b22ac48);
      }
      else {
        if (bVar3 != 3) goto LAB_100a2c704;
        bVar3 = *(byte *)(puVar10 + 0x27e);
        if (1 < bVar3) {
          if (bVar3 != 3) {
            func_0x000108a07b10(&UNK_10b236dc0,auVar16._8_8_,auVar16._8_8_);
            goto LAB_100a2c72c;
          }
          goto LAB_100a2c50c;
        }
        if (bVar3 == 0) {
          lVar5 = puVar10[0x19];
          goto LAB_100a2c4a8;
        }
      }
      func_0x000108a07af4(&UNK_10b236dc0);
LAB_100a2c72c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a2c730);
      (*pcVar4)();
    }
    puVar10[3] = *puVar10;
    *(undefined1 *)(puVar10 + 0x13) = 0;
LAB_100a2bf9c:
    auVar17 = FUN_100a2bdc4(puVar10 + 3,auVar16._8_8_);
    puVar12 = auVar17._8_8_;
    if ((auVar17._0_8_ & 1) != 0) {
      uVar9 = 1;
      uVar14 = 3;
      goto LAB_100a2c304;
    }
    puVar10[1] = puVar12;
    if (*(char *)(puVar10 + 0x13) == '\x03') {
      if (((*(char *)(puVar10 + 0x12) == '\x03') && (*(char *)(puVar10 + 0x11) == '\x03')) &&
         (*(char *)(puVar10 + 8) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (puVar10 + 9);
        if (puVar10[10] != 0) {
          (**(code **)(puVar10[10] + 0x18))(puVar10[0xb]);
        }
      }
      puVar12 = (undefined8 *)puVar10[1];
    }
    puVar13 = (undefined8 *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      puVar10[3] = puVar12;
      puVar10[0x18] = puVar10 + 3;
      *(undefined1 *)((long)puVar10 + 0xca) = 0;
      goto LAB_100a2c020;
    }
  }
  else {
    if (bVar3 == 3) goto LAB_100a2bf9c;
LAB_100a2c020:
    auVar16 = FUN_100a426c4(puVar10 + 4,auVar16._8_8_);
    puVar12 = auVar16._8_8_;
    if ((auVar16._0_8_ & 1) != 0) {
      uVar9 = 1;
      uVar14 = 4;
      goto LAB_100a2c304;
    }
    func_0x000100cc1ec8(puVar10 + 4);
    puVar13 = extraout_x1_01;
    if (puVar12 != (undefined8 *)0x0) {
      puStack_178 = puVar12;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62f708 - 1 < 2 ||
           ((bRam000000010b62f708 != 0 &&
            (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                               ), cVar6 != '\0')))) &&
          (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                              ), (uVar11 & 1) != 0)))) {
        lStack_158 = ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                     + 0x30;
        ppuStack_130 = &puStack_178;
        pcStack_128 = 
        __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
        ;
        pppuStack_138 = &ppuStack_130;
        pcStack_140 = s_failed_to_persist_OAuth_tokens__108ace6f7;
        ppcStack_150 = &pcStack_140;
        puStack_148 = &UNK_10b208fd0;
        pppcStack_168 = &ppcStack_150;
        ppuStack_170 = (undefined8 **)0x1;
        uStack_160 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                   ,&ppuStack_170);
        lVar5 = 
        ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppuStack_100 =
               *(undefined8 ****)
                (
                ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                + 0x20);
          uStack_f8 = *(undefined8 *)
                       (
                       ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                       + 0x28);
          ppuStack_108 = (undefined8 ***)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppuStack_108);
          if (iVar7 != 0) {
            lStack_d0 = *(long *)(lVar5 + 0x60);
            uStack_c8 = *(undefined8 *)(lVar5 + 0x68);
            pppcStack_e8 = *(char ****)(lVar5 + 0x50);
            uStack_e0 = *(undefined8 *)(lVar5 + 0x58);
            uStack_f0 = 1;
            if ((undefined8 ****)pppcStack_e8 == (undefined8 ****)0x0) {
              uStack_f0 = 2;
            }
            uStack_a8 = *(undefined4 *)(lVar5 + 8);
            uStack_a4 = *(undefined4 *)(lVar5 + 0xc);
            pppuStack_90 = &ppuStack_170;
            uStack_88 = 1;
            pppuStack_80 = &pppuStack_90;
            puStack_78 = &DAT_1061c2098;
            lStack_d8 = 1;
            if (lStack_d0 == 0) {
              lStack_d8 = 2;
            }
            pppuStack_b8 = pppuStack_100;
            ppuStack_c0 = ppuStack_108;
            uStack_b0 = uStack_f8;
            pppcStack_98 = (char ***)&pppuStack_80;
            pcStack_a0 = s__108b39f4f;
            (**(code **)(puVar1 + 0x20))(puVar2,&uStack_f0);
          }
        }
      }
      else {
        lVar5 = 
        ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_118 = *(undefined8 *)
                        (
                        ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                        + 0x20);
          uStack_110 = *(undefined8 *)
                        (
                        ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                        + 0x28);
          uStack_120 = 2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_120);
          if (iVar7 != 0) {
            lStack_d8 = ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                        + 0x30;
            ppuStack_170 = &puStack_178;
            pppcStack_168 =
                 (char ***)
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            pppuStack_100 = &ppuStack_170;
            ppuStack_108 = (undefined8 **)s_failed_to_persist_OAuth_tokens__108ace6f7;
            pppuStack_80 = &ppuStack_108;
            puStack_78 = &UNK_10b208fd0;
            pppcStack_e8 = (char ***)&pppuStack_80;
            uStack_f0 = 1;
            uStack_e0 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar5,puVar2,puVar1,&uStack_120,&uStack_f0);
          }
        }
      }
      (**(code **)*puStack_178)();
      puVar13 = extraout_x1_02;
    }
    lVar5 = *(long *)puVar10[3];
    *(long *)puVar10[3] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000103e32944();
      puVar13 = extraout_x1_03;
    }
  }
  uVar9 = 0;
  uVar14 = 1;
  puVar12 = puVar13;
LAB_100a2c304:
  *(undefined1 *)(puVar10 + 2) = uVar14;
  auVar17._8_8_ = puVar12;
  auVar17._0_8_ = uVar9;
  return auVar17;
}

