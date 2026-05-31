
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100a2bf54(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  long *extraout_x8;
  long *plVar12;
  undefined1 auVar13 [16];
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
  long lStack_ab0;
  long lStack_aa8;
  long lStack_aa0;
  long lStack_a98;
  long lStack_a90;
  long lStack_a88;
  long lStack_800;
  long lStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  long lStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  long lStack_798;
  undefined1 auStack_790 [656];
  undefined1 auStack_500 [656];
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
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_148;
  undefined8 **ppuStack_140;
  char ***pppcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  char **ppcStack_120;
  undefined *puStack_118;
  char *pcStack_110;
  undefined8 ***pppuStack_108;
  undefined8 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char ***pppcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 **ppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  char ***pppcStack_68;
  undefined8 ***pppuStack_60;
  undefined1 uStack_58;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  bVar3 = *(byte *)(param_1 + 2);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        func_0x000108a07af4(&UNK_10b22abe0);
      }
      uVar8 = func_0x000108a07b10();
      (**(code **)*puStack_148)();
      lVar5 = *(long *)param_1[3];
      *(long *)param_1[3] = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000103e32944();
      }
      *(undefined1 *)(param_1 + 2) = 2;
      __Unwind_Resume(uVar8);
      auVar13 = func_0x000108a07bc4();
      puVar10 = auVar13._0_8_;
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
          uVar8 = func_0x000100eea0cc(&lStack_800,puVar10 + 0x1a);
          if (lStack_800 == 0x12) {
            *(undefined1 *)(puVar10 + 0x27e) = 3;
          }
          else {
            lStack_248 = lStack_7c8;
            lStack_250 = lStack_7d0;
            lStack_238 = lStack_7b8;
            lStack_240 = lStack_7c0;
            lStack_228 = lStack_7a8;
            lStack_230 = lStack_7b0;
            lStack_218 = lStack_798;
            lStack_220 = lStack_7a0;
            lStack_268 = lStack_7e8;
            lStack_270 = lStack_7f0;
            lStack_258 = lStack_7d8;
            lStack_260 = lStack_7e0;
            uVar8 = _memcpy(auStack_500,auStack_790,0x290);
            cVar6 = *(char *)(puVar10 + 0x82);
            if (cVar6 == '\x04') {
              uVar8 = func_0x000100d18bec(puVar10 + 0x83);
            }
            else if (cVar6 == '\x03') {
              uVar8 = func_0x000100d1c894(puVar10 + 0x83);
            }
            else if (cVar6 == '\0') {
              uVar8 = func_0x000100deab40(puVar10 + 0x1a);
            }
            if (lStack_800 == 0x11) {
              lStack_1e8 = lStack_248;
              lStack_1f0 = lStack_250;
              lStack_1d8 = lStack_238;
              lStack_1e0 = lStack_240;
              lStack_1c8 = lStack_228;
              lStack_1d0 = lStack_230;
              lStack_1b8 = lStack_218;
              lStack_1c0 = lStack_220;
              lStack_208 = lStack_268;
              lStack_210 = lStack_270;
              lStack_1f8 = lStack_258;
              lStack_200 = lStack_260;
              lVar5 = -0x8000000000000000;
            }
            else {
              uVar8 = _memcpy(&lStack_a90,auStack_500,0x290);
              lStack_ac8 = lStack_248;
              lStack_ad0 = lStack_250;
              lStack_ab8 = lStack_238;
              lStack_ac0 = lStack_240;
              lStack_aa8 = lStack_228;
              lStack_ab0 = lStack_230;
              lStack_a98 = lStack_218;
              lStack_aa0 = lStack_220;
              lStack_ae8 = lStack_268;
              lStack_af0 = lStack_270;
              lStack_ad8 = lStack_258;
              lStack_ae0 = lStack_260;
              lStack_b00 = lStack_800;
              lStack_af8 = lStack_7f8;
              if (lStack_800 == 6) {
                lStack_1c8 = lStack_220;
                lStack_1d0 = lStack_228;
                lStack_1b8 = lStack_a90;
                lStack_1c0 = lStack_218;
                lStack_1b0 = lStack_a88;
                lStack_208 = lStack_260;
                lStack_210 = lStack_268;
                lStack_1f8 = lStack_250;
                lStack_200 = lStack_258;
                lStack_1e8 = lStack_240;
                lStack_1f0 = lStack_248;
                lStack_1d8 = lStack_230;
                lStack_1e0 = lStack_238;
                lVar5 = lStack_7f8;
                lStack_7f8 = lStack_270;
              }
              else {
                uVar8 = FUN_100de8594(&lStack_b00);
                lStack_7f8 = -0x7ffffffffffffffd;
                lVar5 = -0x8000000000000000;
              }
            }
            *(undefined1 *)((long)puVar10 + 0x13f1) = 0;
            *extraout_x8 = lVar5;
            extraout_x8[1] = lStack_7f8;
            extraout_x8[0xb] = lStack_1c8;
            extraout_x8[10] = lStack_1d0;
            extraout_x8[0xd] = lStack_1b8;
            extraout_x8[0xc] = lStack_1c0;
            extraout_x8[0xe] = lStack_1b0;
            extraout_x8[3] = lStack_208;
            extraout_x8[2] = lStack_210;
            extraout_x8[5] = lStack_1f8;
            extraout_x8[4] = lStack_200;
            *(undefined1 *)(puVar10 + 0x27e) = 1;
            extraout_x8[7] = lStack_1e8;
            extraout_x8[6] = lStack_1f0;
            extraout_x8[9] = lStack_1d8;
            extraout_x8[8] = lStack_1e0;
            if (lVar5 != -0x7fffffffffffffff) {
              plVar12 = (long *)puVar10[0xc];
              lVar5 = *plVar12;
              *plVar12 = lVar5 + -1;
              LORelease();
              if (lVar5 == 1) {
                DataMemoryBarrier(2,1);
                uVar8 = __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h11322f4fd33ab6c2E
                                  (puVar10 + 0xc);
              }
              uVar11 = 1;
              goto LAB_100a2c6d8;
            }
          }
          *extraout_x8 = -0x7fffffffffffffff;
          uVar11 = 3;
LAB_100a2c6d8:
          *(undefined1 *)(puVar10 + 0x27f) = uVar11;
          return uVar8;
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
            func_0x000108a07b10(&UNK_10b236dc0,auVar13._8_8_,auVar13._8_8_);
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
    param_1[3] = *param_1;
    *(undefined1 *)(param_1 + 0x13) = 0;
LAB_100a2bf9c:
    auVar13 = func_0x000100a2bdc4(param_1 + 3,param_2);
    lVar5 = auVar13._8_8_;
    if ((auVar13._0_8_ & 1) != 0) {
      uVar8 = 1;
      uVar11 = 3;
      goto LAB_100a2c304;
    }
    param_1[1] = lVar5;
    if (*(char *)(param_1 + 0x13) == '\x03') {
      if (((*(char *)(param_1 + 0x12) == '\x03') && (*(char *)(param_1 + 0x11) == '\x03')) &&
         (*(char *)(param_1 + 8) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 9);
        if (param_1[10] != 0) {
          (**(code **)(param_1[10] + 0x18))(param_1[0xb]);
        }
      }
      lVar5 = param_1[1];
    }
    if (lVar5 != 0) {
      param_1[3] = lVar5;
      param_1[0x18] = param_1 + 3;
      *(undefined1 *)((long)param_1 + 0xca) = 0;
      goto LAB_100a2c020;
    }
  }
  else {
    if (bVar3 == 3) goto LAB_100a2bf9c;
LAB_100a2c020:
    auVar13 = FUN_100a426c4(param_1 + 4,param_2);
    puVar10 = auVar13._8_8_;
    if ((auVar13._0_8_ & 1) != 0) {
      uVar8 = 1;
      uVar11 = 4;
      goto LAB_100a2c304;
    }
    func_0x000100cc1ec8(param_1 + 4);
    if (puVar10 != (undefined8 *)0x0) {
      puStack_148 = puVar10;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62f708 - 1 < 2 ||
           ((bRam000000010b62f708 != 0 &&
            (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                               ), cVar6 != '\0')))) &&
          (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                             ), (uVar9 & 1) != 0)))) {
        lStack_128 = ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                     + 0x30;
        ppuStack_100 = &puStack_148;
        pcStack_f8 = 
        __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
        ;
        pppuStack_108 = &ppuStack_100;
        pcStack_110 = s_failed_to_persist_OAuth_tokens__108ace6f7;
        ppcStack_120 = &pcStack_110;
        puStack_118 = &UNK_10b208fd0;
        pppcStack_138 = &ppcStack_120;
        ppuStack_140 = (undefined8 **)0x1;
        uStack_130 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                   ,&ppuStack_140);
        lVar5 = 
        ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppuStack_d0 = *(undefined8 ****)
                          (
                          ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                          + 0x20);
          uStack_c8 = *(undefined8 *)
                       (
                       ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                       + 0x28);
          ppuStack_d8 = (undefined8 ***)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppuStack_d8);
          if (iVar7 != 0) {
            lStack_a0 = *(long *)(lVar5 + 0x60);
            uStack_98 = *(undefined8 *)(lVar5 + 0x68);
            pppcStack_b8 = *(char ****)(lVar5 + 0x50);
            uStack_b0 = *(undefined8 *)(lVar5 + 0x58);
            uStack_c0 = 1;
            if ((undefined8 ****)pppcStack_b8 == (undefined8 ****)0x0) {
              uStack_c0 = 2;
            }
            uStack_78 = *(undefined4 *)(lVar5 + 8);
            uStack_74 = *(undefined4 *)(lVar5 + 0xc);
            pppuStack_60 = &ppuStack_140;
            uStack_58 = 1;
            pppuStack_50 = &pppuStack_60;
            puStack_48 = &DAT_1061c2098;
            lStack_a8 = 1;
            if (lStack_a0 == 0) {
              lStack_a8 = 2;
            }
            pppuStack_88 = pppuStack_d0;
            ppuStack_90 = ppuStack_d8;
            uStack_80 = uStack_c8;
            pppcStack_68 = (char ***)&pppuStack_50;
            pcStack_70 = s__108b39f4f;
            (**(code **)(puVar1 + 0x20))(puVar2,&uStack_c0);
          }
        }
      }
      else {
        lVar5 = 
        ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_e8 = *(undefined8 *)
                       (
                       ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                       + 0x20);
          uStack_e0 = *(undefined8 *)
                       (
                       ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                       + 0x28);
          uStack_f0 = 2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_f0);
          if (iVar7 != 0) {
            lStack_a8 = ___ZN17codex_rmcp_client11rmcp_client10RmcpClient20persist_oauth_tokens28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he2dd6b579bb9bc4dE
                        + 0x30;
            ppuStack_140 = &puStack_148;
            pppcStack_138 =
                 (char ***)
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            pppuStack_d0 = &ppuStack_140;
            ppuStack_d8 = (undefined8 **)s_failed_to_persist_OAuth_tokens__108ace6f7;
            pppuStack_50 = &ppuStack_d8;
            puStack_48 = &UNK_10b208fd0;
            pppcStack_b8 = (char ***)&pppuStack_50;
            uStack_c0 = 1;
            uStack_b0 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar5,puVar2,puVar1,&uStack_f0,&uStack_c0);
          }
        }
      }
      (**(code **)*puStack_148)();
    }
    lVar5 = *(long *)param_1[3];
    *(long *)param_1[3] = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000103e32944();
    }
  }
  uVar8 = 0;
  uVar11 = 1;
LAB_100a2c304:
  *(undefined1 *)(param_1 + 2) = uVar11;
  return uVar8;
}

