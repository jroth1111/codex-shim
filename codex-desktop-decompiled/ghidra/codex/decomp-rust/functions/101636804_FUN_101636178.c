
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101636178(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 ***pppuVar10;
  undefined1 uVar11;
  uint uVar12;
  uint extraout_w8;
  long *plVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
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
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  long lStack_1d0;
  undefined8 **ppuStack_1c8;
  char ***pppcStack_1c0;
  undefined *puStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 **ppuStack_190;
  char ***pppcStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 ***pppuStack_160;
  undefined8 ***pppuStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 ***pppuStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  char *pcStack_100;
  undefined8 ***pppuStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 ***pppuStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 ***pppuStack_90;
  code *pcStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  
  bVar3 = *(byte *)(param_1 + 0x7c);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      plVar17 = (long *)*param_1;
      lVar15 = param_1[1];
      plVar13 = (long *)param_1[3];
      lVar21 = *plVar17;
      plVar18 = plVar13;
      plVar5 = plVar13;
      if (lVar15 != 0) {
        plVar18 = plVar17 + lVar15 * -0xb + -0xb;
        plVar5 = (long *)(lVar15 * 0x59 + 0x61);
      }
      lVar22 = 0;
      if (lVar15 != 0) {
        lVar22 = 8;
      }
      param_1[6] = lVar22;
      param_1[7] = (long)plVar5;
      param_1[8] = (long)plVar18;
      param_1[9] = (long)plVar17;
      param_1[10] = CONCAT17(-(-1 < lVar21),
                             CONCAT16(-(-1 < (char)((ulong)lVar21 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar21 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar21 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar21 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-1 < (char)((ulong)
                                                  lVar21 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar21 >> 8)),
                                                           -(-1 < (char)lVar21)))))))) &
                    0x8080808080808080;
      param_1[0xb] = (long)(plVar17 + 1);
      param_1[0xc] = (long)plVar17 + lVar15 + 1;
      param_1[0xd] = (long)plVar13;
      while (plVar13 != (long *)0x0) {
        lVar15 = param_1[9];
        uVar16 = param_1[10];
        if (uVar16 == 0) {
          plVar18 = (long *)param_1[0xb];
          do {
            plVar17 = plVar18 + 1;
            lVar21 = *plVar18;
            lVar15 = lVar15 + -0x2c0;
            uVar16 = CONCAT17(-(-1 < lVar21),
                              CONCAT16(-(-1 < (char)((ulong)lVar21 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar21 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar21 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar21 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar21 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar21 >> 8)),
                                                           -(-1 < (char)lVar21)))))))) &
                     0x8080808080808080;
            plVar18 = plVar17;
          } while (uVar16 == 0);
          param_1[0xb] = (long)plVar17;
          param_1[9] = lVar15;
        }
        uVar4 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        param_1[10] = uVar16 - 1 & uVar16;
        lVar15 = lVar15 + (long)-(int)((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) * 0x58;
        param_1[0xd] = (long)plVar13 + -1;
        if (*(long *)(lVar15 + -0x58) == -0x8000000000000000) break;
        lStack_2d8 = *(long *)(lVar15 + -0x40);
        lStack_2e0 = *(long *)(lVar15 + -0x48);
        lStack_2c8 = *(long *)(lVar15 + -0x30);
        lStack_2d0 = *(long *)(lVar15 + -0x38);
        lStack_2b8 = *(long *)(lVar15 + -0x20);
        lStack_2c0 = *(long *)(lVar15 + -0x28);
        lStack_2a8 = *(long *)(lVar15 + -0x10);
        lStack_2b0 = *(long *)(lVar15 + -0x18);
        lStack_2a0 = *(long *)(lVar15 + -8);
        plVar18 = (long *)((ulong)&lStack_2e0 | 8);
        if (*(long *)(lVar15 + -0x58) != 0) {
          _free(*(undefined8 *)(lVar15 + -0x50));
        }
        lVar15 = *plVar18;
        lVar22 = plVar18[3];
        lVar21 = plVar18[2];
        param_1[0xf] = plVar18[1];
        param_1[0xe] = lVar15;
        param_1[0x11] = lVar22;
        param_1[0x10] = lVar21;
        lVar15 = plVar18[4];
        lVar22 = plVar18[7];
        lVar21 = plVar18[6];
        param_1[0x13] = plVar18[5];
        param_1[0x12] = lVar15;
        param_1[0x15] = lVar22;
        param_1[0x14] = lVar21;
        if (param_1[0xe] == -0x7fffffffffffffff) goto LAB_101636b6c;
        plVar18 = param_1 + 0x16;
        param_1[0x17] = param_1[0xf];
        param_1[0x16] = param_1[0xe];
        param_1[0x19] = param_1[0x11];
        param_1[0x18] = param_1[0x10];
        param_1[0x1b] = param_1[0x13];
        param_1[0x1a] = param_1[0x12];
        param_1[0x1d] = param_1[0x15];
        param_1[0x1c] = param_1[0x14];
        param_1[0x3e] = (long)plVar18;
        *(undefined1 *)((long)param_1 + 0x1f9) = 0;
LAB_1016363d0:
        *(undefined1 *)(param_1 + 0x3f) = 0;
        __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE
                  (plVar18 + 5);
        param_1[0x40] = (long)plVar18;
        *(undefined1 *)(param_1 + 0x43) = 0;
LAB_1016363e4:
        plVar18 = param_1 + 0x1e;
        FUN_101634938(&lStack_2e0,param_1 + 0x40,*param_2);
        if (lStack_2e0 == -0x7fffffffffffffff) {
          uVar11 = 3;
LAB_101636d08:
          *(undefined1 *)((long)param_1 + 0x1f9) = uVar11;
          uVar9 = 1;
          uVar11 = 3;
          goto LAB_101636d14;
        }
        *(undefined1 *)(param_1 + 0x3f) = 1;
        param_1[0x23] = lStack_2b8;
        param_1[0x22] = lStack_2c0;
        param_1[0x25] = lStack_2a8;
        param_1[0x24] = lStack_2b0;
        param_1[0x1f] = lStack_2d8;
        *plVar18 = lStack_2e0;
        param_1[0x21] = lStack_2c8;
        param_1[0x20] = lStack_2d0;
        param_1[0x2b] = lStack_278;
        param_1[0x2a] = lStack_280;
        param_1[0x2d] = lStack_268;
        param_1[0x2c] = lStack_270;
        param_1[0x27] = lStack_298;
        param_1[0x26] = lStack_2a0;
        param_1[0x29] = lStack_288;
        param_1[0x28] = lStack_290;
        param_1[0x33] = lStack_238;
        param_1[0x32] = lStack_240;
        param_1[0x35] = lStack_228;
        param_1[0x34] = lStack_230;
        param_1[0x2f] = lStack_258;
        param_1[0x2e] = lStack_260;
        param_1[0x31] = lStack_248;
        param_1[0x30] = lStack_250;
        param_1[0x3b] = lStack_1f8;
        param_1[0x3a] = lStack_200;
        param_1[0x3d] = lStack_1e8;
        param_1[0x3c] = lStack_1f0;
        param_1[0x37] = lStack_218;
        param_1[0x36] = lStack_220;
        param_1[0x39] = lStack_208;
        param_1[0x38] = lStack_210;
        if ((char)param_1[0x43] == '\x03') {
          FUN_100dca0dc(param_1 + 0x41);
        }
        if (*plVar18 == -0x8000000000000000) {
          if (param_1[0x1f] != -0x8000000000000000) {
            *(undefined1 *)(param_1 + 0x3f) = 0;
            puStack_1a8 = (undefined *)param_1[0x20];
            pppuStack_1b0 = (undefined8 ***)param_1[0x1f];
            lStack_1a0 = param_1[0x21];
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                ((bRam000000010b62d898 - 1 < 2 ||
                 ((bRam000000010b62d898 != 0 &&
                  (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
                                     ), cVar6 != '\0')))))) &&
               (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
                                   ), (uVar16 & 1) != 0)) {
              lStack_178 = ___ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
                           + 0x30;
              pppuStack_160 = &pppuStack_1b0;
              pppuStack_158 =
                   (undefined8 ***)
                   &
                   __ZN82__LT_codex_mcp__rmcp_client__StartupOutcomeError_u20_as_u20_core__fmt__Display_GT_3fmt17h45f2e037baede565E
              ;
              pppuStack_168 = &pppuStack_160;
              pppuStack_170 = (undefined8 ***)&UNK_108cd7581;
              pppcStack_1c0 = (char ***)&pppuStack_170;
              puStack_1b8 = &UNK_10b208fd0;
              pppcStack_188 = (char ***)&pppcStack_1c0;
              ppuStack_190 = (undefined8 ***)0x1;
              uStack_180 = 1;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
                         ,&ppuStack_190);
              lVar15 = 
              ___ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puStack_a0 = *(undefined **)
                              (
                              ___ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
                              + 0x20);
                lStack_98 = *(long *)(
                                     ___ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
                                     + 0x28);
                pppuStack_a8 = (undefined8 ****)0x2;
                puVar1 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&pppuStack_a8);
                if (iVar7 != 0) {
                  lStack_130 = *(long *)(lVar15 + 0x60);
                  lStack_128 = *(long *)(lVar15 + 0x68);
                  lStack_148 = *(long *)(lVar15 + 0x50);
                  lStack_140 = *(long *)(lVar15 + 0x58);
                  lStack_150 = 1;
                  if (lStack_148 == 0) {
                    lStack_150 = 2;
                  }
                  lStack_108 = *(long *)(lVar15 + 8);
                  pppuStack_90 = &ppuStack_190;
                  pcStack_88 = (code *)CONCAT71(pcStack_88._1_7_,1);
                  pppuStack_80 = &pppuStack_90;
                  puStack_78 = &DAT_1061c2098;
                  lStack_138 = 1;
                  if (lStack_130 == 0) {
                    lStack_138 = 2;
                  }
                  puStack_118 = puStack_a0;
                  pppuStack_120 = pppuStack_a8;
                  lStack_110 = lStack_98;
                  pppuStack_f8 = &pppuStack_80;
                  pcStack_100 = s__108b39f4f;
                  (**(code **)(puVar1 + 0x20))(puVar2,&lStack_150);
                }
              }
            }
            else {
              lVar15 = 
              ___ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puStack_1d8 = *(undefined **)
                               (
                               ___ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
                               + 0x20);
                lStack_1d0 = *(long *)(
                                      ___ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
                                      + 0x28);
                pppuStack_1e0 = (undefined8 ****)0x2;
                puVar1 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_10b3c24c8;
                }
                puVar2 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_109adfc03;
                }
                iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&pppuStack_1e0);
                if (iVar7 != 0) {
                  lStack_178 = ___ZN9codex_mcp11rmcp_client18AsyncManagedClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17he64d69f48aa5d63cE
                               + 0x30;
                  pppuStack_90 = &pppuStack_1b0;
                  pcStack_88 = (code *)&
                                       __ZN82__LT_codex_mcp__rmcp_client__StartupOutcomeError_u20_as_u20_core__fmt__Display_GT_3fmt17h45f2e037baede565E
                  ;
                  pppuStack_158 = &pppuStack_90;
                  pppuStack_160 = (undefined8 ***)&UNK_108cd7581;
                  pppuStack_170 = &pppuStack_160;
                  pppuStack_168 = (undefined8 ***)&UNK_10b208fd0;
                  pppcStack_188 = (char ***)&pppuStack_170;
                  ppuStack_190 = (undefined8 ***)0x1;
                  uStack_180 = 1;
                  lStack_130 = *(long *)(lVar15 + 0x60);
                  lStack_128 = *(long *)(lVar15 + 0x68);
                  lStack_148 = *(long *)(lVar15 + 0x50);
                  lStack_140 = *(long *)(lVar15 + 0x58);
                  lStack_150 = 1;
                  if (lStack_148 == 0) {
                    lStack_150 = 2;
                  }
                  lStack_108 = *(long *)(lVar15 + 8);
                  pppuStack_80 = &ppuStack_190;
                  puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
                  pppuStack_a8 = &pppuStack_80;
                  puStack_a0 = &DAT_1061c2098;
                  lStack_138 = 1;
                  if (lStack_130 == 0) {
                    lStack_138 = 2;
                  }
                  puStack_118 = puStack_1d8;
                  pppuStack_120 = pppuStack_1e0;
                  lStack_110 = lStack_1d0;
                  pppuStack_f8 = &pppuStack_a8;
                  pcStack_100 = s__108b39f4f;
                  (**(code **)(puVar1 + 0x20))(puVar2,&lStack_150);
                }
              }
            }
            if (((undefined8 ****)pppuStack_1b0 != (undefined8 ****)0x8000000000000000) &&
               ((undefined8 ****)pppuStack_1b0 != (undefined8 ****)0x0)) {
              _free(puStack_1a8);
            }
          }
        }
        else {
          param_1[0x61] = param_1[0x23];
          param_1[0x60] = param_1[0x22];
          param_1[99] = param_1[0x25];
          param_1[0x62] = param_1[0x24];
          param_1[0x5d] = param_1[0x1f];
          param_1[0x5c] = *plVar18;
          param_1[0x5f] = param_1[0x21];
          param_1[0x5e] = param_1[0x20];
          param_1[0x69] = param_1[0x2b];
          param_1[0x68] = param_1[0x2a];
          param_1[0x6b] = param_1[0x2d];
          param_1[0x6a] = param_1[0x2c];
          param_1[0x65] = param_1[0x27];
          param_1[100] = param_1[0x26];
          param_1[0x67] = param_1[0x29];
          param_1[0x66] = param_1[0x28];
          param_1[0x71] = param_1[0x33];
          param_1[0x70] = param_1[0x32];
          param_1[0x73] = param_1[0x35];
          param_1[0x72] = param_1[0x34];
          param_1[0x6d] = param_1[0x2f];
          param_1[0x6c] = param_1[0x2e];
          param_1[0x6f] = param_1[0x31];
          param_1[0x6e] = param_1[0x30];
          param_1[0x79] = param_1[0x3b];
          param_1[0x78] = param_1[0x3a];
          param_1[0x7b] = param_1[0x3d];
          param_1[0x7a] = param_1[0x3c];
          param_1[0x75] = param_1[0x37];
          param_1[0x74] = param_1[0x36];
          param_1[0x77] = param_1[0x39];
          param_1[0x76] = param_1[0x38];
          lVar15 = param_1[0x6e] + 0x10;
          param_1[0x41] = lVar15;
          *(undefined1 *)((long)param_1 + 0x211) = 0;
LAB_101636678:
          *(undefined1 *)(param_1 + 0x42) = 0;
          param_1[0x40] = lVar15;
          param_1[0x43] = lVar15 + 0xe0;
          *(undefined1 *)(param_1 + 0x51) = 0;
LAB_10163668c:
          auVar27 = FUN_100fd3e50(param_1 + 0x43,param_2);
          uVar9 = auVar27._8_8_;
          pcVar8 = auVar27._0_8_;
          if (pcVar8 == (char *)0x0) {
            uVar11 = 3;
LAB_101636d00:
            *(undefined1 *)((long)param_1 + 0x211) = uVar11;
            uVar11 = 4;
            goto LAB_101636d08;
          }
          if ((((char)param_1[0x51] == '\x03') && ((char)param_1[0x50] == '\x03')) &&
             ((char)param_1[0x47] == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0x48);
            uVar9 = extraout_x1;
            if (param_1[0x49] != 0) {
              (**(code **)(param_1[0x49] + 0x18))(param_1[0x4a]);
              uVar9 = extraout_x1_00;
            }
          }
          lVar15 = *(long *)(pcVar8 + 0x28);
          lVar22 = *(long *)(pcVar8 + 0x40);
          lVar21 = *(long *)(pcVar8 + 0x38);
          param_1[0x49] = *(long *)(pcVar8 + 0x30);
          param_1[0x48] = lVar15;
          param_1[0x4b] = lVar22;
          param_1[0x4a] = lVar21;
          lVar21 = *(long *)(pcVar8 + 0x50);
          lVar15 = *(long *)(pcVar8 + 0x48);
          lVar23 = *(long *)(pcVar8 + 0x60);
          lVar22 = *(long *)(pcVar8 + 0x58);
          lVar24 = *(long *)(pcVar8 + 0x68);
          lVar26 = *(long *)(pcVar8 + 0x80);
          lVar25 = *(long *)(pcVar8 + 0x78);
          param_1[0x51] = *(long *)(pcVar8 + 0x70);
          param_1[0x50] = lVar24;
          param_1[0x53] = lVar26;
          param_1[0x52] = lVar25;
          param_1[0x4d] = lVar21;
          param_1[0x4c] = lVar15;
          param_1[0x4f] = lVar23;
          param_1[0x4e] = lVar22;
          lVar21 = *(long *)(pcVar8 + 0x90);
          lVar15 = *(long *)(pcVar8 + 0x88);
          lVar23 = *(long *)(pcVar8 + 0xa0);
          lVar22 = *(long *)(pcVar8 + 0x98);
          lVar24 = *(long *)(pcVar8 + 0xa8);
          lVar26 = *(long *)(pcVar8 + 0xc0);
          lVar25 = *(long *)(pcVar8 + 0xb8);
          param_1[0x59] = *(long *)(pcVar8 + 0xb0);
          param_1[0x58] = lVar24;
          param_1[0x5b] = lVar26;
          param_1[0x5a] = lVar25;
          param_1[0x55] = lVar21;
          param_1[0x54] = lVar15;
          param_1[0x57] = lVar23;
          param_1[0x56] = lVar22;
          pcVar8[0x28] = '\a';
          pcVar8[0x29] = '\0';
          pcVar8[0x2a] = '\0';
          pcVar8[0x2b] = '\0';
          pcVar8[0x2c] = '\0';
          pcVar8[0x2d] = '\0';
          pcVar8[0x2e] = '\0';
          pcVar8[0x2f] = -0x80;
          *(undefined1 *)(param_1 + 0x42) = 1;
          if (*pcVar8 == '\0') {
            *pcVar8 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar8,uVar9,1000000000);
          }
          FUN_1060fa678(pcVar8,1,pcVar8);
          if (*(long *)(param_1[0x40] + 0x1a8) != 0) {
            param_1[0x43] = param_1[0x40] + 0x1a8;
            *(undefined1 *)(param_1 + 0x47) = 0;
LAB_101636764:
            auVar27 = FUN_100a42430(param_1 + 0x43,param_2);
            pppuVar10 = auVar27._8_8_;
            if ((auVar27._0_8_ & 1) != 0) {
              uVar11 = 4;
              goto LAB_101636d00;
            }
            if ((char)param_1[0x47] == '\x03') {
              lVar15 = param_1[0x45];
              puVar19 = (undefined8 *)param_1[0x46];
              pcVar14 = (code *)*puVar19;
              if (pcVar14 != (code *)0x0) {
                (*pcVar14)(lVar15);
              }
              if (puVar19[1] != 0) {
                _free(lVar15);
              }
            }
            if (pppuVar10 != (undefined8 ***)0x0) {
              ppuStack_1c8 = pppuVar10;
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                  ((bRam000000010b62f780 - 1 < 2 ||
                   ((bRam000000010b62f780 != 0 &&
                    (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                       (&
                                        __ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                                       ), cVar6 != '\0')))))) &&
                 (uVar16 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                                     ), (uVar16 & 1) != 0)) {
                lStack_178 = ___ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                             + 0x30;
                pppuStack_160 = &ppuStack_1c8;
                pppuStack_158 =
                     (undefined8 ***)
                     __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                ;
                pppuStack_168 = &pppuStack_160;
                pppuStack_170 = (undefined8 ***)s__failed_to_terminate_MCP_stdio_s_108ace868;
                pppcStack_1c0 = (char ***)&pppuStack_170;
                puStack_1b8 = &UNK_10b208fd0;
                pppcStack_188 = (char ***)&pppcStack_1c0;
                ppuStack_190 = (undefined8 ***)0x1;
                uStack_180 = 1;
                __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                          (___ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                           ,&ppuStack_190);
                lVar15 = 
                ___ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  puStack_a0 = *(undefined **)
                                (
                                ___ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                                + 0x20);
                  lStack_98 = *(long *)(
                                       ___ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                                       + 0x28);
                  pppuStack_a8 = (undefined8 ****)0x2;
                  puVar1 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar1 = &UNK_10b3c24c8;
                  }
                  puVar2 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_109adfc03;
                  }
                  iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&pppuStack_a8);
                  if (iVar7 != 0) {
                    lStack_130 = *(long *)(lVar15 + 0x60);
                    lStack_128 = *(long *)(lVar15 + 0x68);
                    lStack_148 = *(long *)(lVar15 + 0x50);
                    lStack_140 = *(long *)(lVar15 + 0x58);
                    lStack_150 = 1;
                    if (lStack_148 == 0) {
                      lStack_150 = 2;
                    }
                    lStack_108 = *(long *)(lVar15 + 8);
                    pppuStack_90 = &ppuStack_190;
                    pcStack_88 = (code *)CONCAT71(pcStack_88._1_7_,1);
                    pppuStack_80 = &pppuStack_90;
                    puStack_78 = &DAT_1061c2098;
                    lStack_138 = 1;
                    if (lStack_130 == 0) {
                      lStack_138 = 2;
                    }
                    puStack_118 = puStack_a0;
                    pppuStack_120 = pppuStack_a8;
                    lStack_110 = lStack_98;
                    pppuStack_f8 = &pppuStack_80;
                    pcStack_100 = s__108b39f4f;
                    (**(code **)(puVar1 + 0x20))(puVar2,&lStack_150);
                  }
                }
              }
              else {
                lVar15 = 
                ___ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                ;
                if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                   (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                  puStack_1a8 = *(undefined **)
                                 (
                                 ___ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                                 + 0x20);
                  lStack_1a0 = *(long *)(
                                        ___ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                                        + 0x28);
                  pppuStack_1b0 = (undefined8 ****)0x2;
                  puVar1 = puRam000000010b634c20;
                  if (lRam000000010b66fd20 != 2) {
                    puVar1 = &UNK_10b3c24c8;
                  }
                  puVar2 = puRam000000010b634c18;
                  if (lRam000000010b66fd20 != 2) {
                    puVar2 = &UNK_109adfc03;
                  }
                  iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&pppuStack_1b0);
                  if (iVar7 != 0) {
                    lStack_178 = ___ZN17codex_rmcp_client11rmcp_client10RmcpClient8shutdown28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hedaf3cce5db18fd7E
                                 + 0x30;
                    pppuStack_90 = &ppuStack_1c8;
                    pcStack_88 = 
                    __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                    ;
                    pppuStack_158 = &pppuStack_90;
                    pppuStack_160 = (undefined8 ***)s__failed_to_terminate_MCP_stdio_s_108ace868;
                    pppuStack_170 = &pppuStack_160;
                    pppuStack_168 = (undefined8 ***)&UNK_10b208fd0;
                    pppcStack_188 = (char ***)&pppuStack_170;
                    ppuStack_190 = (undefined8 ***)0x1;
                    uStack_180 = 1;
                    lStack_130 = *(long *)(lVar15 + 0x60);
                    lStack_128 = *(long *)(lVar15 + 0x68);
                    lStack_148 = *(long *)(lVar15 + 0x50);
                    lStack_140 = *(long *)(lVar15 + 0x58);
                    lStack_150 = 1;
                    if (lStack_148 == 0) {
                      lStack_150 = 2;
                    }
                    lStack_108 = *(long *)(lVar15 + 8);
                    pppuStack_80 = &ppuStack_190;
                    puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
                    pppuStack_a8 = &pppuStack_80;
                    puStack_a0 = &DAT_1061c2098;
                    lStack_138 = 1;
                    if (lStack_130 == 0) {
                      lStack_138 = 2;
                    }
                    puStack_118 = puStack_1a8;
                    pppuStack_120 = pppuStack_1b0;
                    lStack_110 = lStack_1a0;
                    pppuStack_f8 = &pppuStack_a8;
                    pcStack_100 = s__108b39f4f;
                    (**(code **)(puVar1 + 0x20))(puVar2,&lStack_150);
                  }
                }
              }
              if (((ulong)ppuStack_1c8 & 3) == 1) {
                puVar19 = (undefined8 *)((long)ppuStack_1c8 - 1);
                uVar9 = *puVar19;
                puVar20 = *(undefined8 **)((long)ppuStack_1c8 + 7);
                pcVar14 = (code *)*puVar20;
                if (pcVar14 != (code *)0x0) {
                  (*pcVar14)(uVar9);
                }
                if (puVar20[1] != 0) {
                  _free(uVar9);
                }
                _free(puVar19);
              }
            }
          }
          *(undefined1 *)(param_1 + 0x42) = 0;
          lStack_e8 = param_1[0x55];
          lStack_f0 = param_1[0x54];
          lStack_d8 = param_1[0x57];
          lStack_e0 = param_1[0x56];
          lStack_c8 = param_1[0x59];
          lStack_d0 = param_1[0x58];
          lStack_b8 = param_1[0x5b];
          lStack_c0 = param_1[0x5a];
          lStack_128 = param_1[0x4d];
          lStack_130 = param_1[0x4c];
          puStack_118 = (undefined *)param_1[0x4f];
          pppuStack_120 = (undefined8 ***)param_1[0x4e];
          lStack_108 = param_1[0x51];
          lStack_110 = param_1[0x50];
          pppuStack_f8 = (undefined8 ***)param_1[0x53];
          pcStack_100 = (char *)param_1[0x52];
          lStack_148 = param_1[0x49];
          lStack_150 = param_1[0x48];
          lStack_138 = param_1[0x4b];
          lStack_140 = param_1[0x4a];
          FUN_100e19d88(&lStack_150);
          *(undefined2 *)(param_1 + 0x42) = 0x100;
          FUN_100ca357c(param_1 + 0x40);
          FUN_100e061d8(param_1 + 0x5c);
        }
        if ((((param_1[0x1e] == -0x8000000000000000) && ((char)param_1[0x3f] == '\x01')) &&
            (param_1[0x1f] != -0x8000000000000000)) && (param_1[0x1f] != 0)) {
          _free(param_1[0x20]);
        }
        *(undefined2 *)(param_1 + 0x3f) = 0x100;
        FUN_100e16ec0(param_1 + 0x16);
        plVar13 = (long *)param_1[0xd];
      }
      param_1[0xe] = -0x7fffffffffffffff;
LAB_101636b6c:
      func_0x000100d130ec(param_1 + 6);
      uVar9 = 0;
      uVar11 = 1;
LAB_101636d14:
      *(undefined1 *)(param_1 + 0x7c) = uVar11;
      return uVar9;
    }
    func_0x000108a07af4(&UNK_10b250048);
LAB_101636288:
    func_0x000108a07b10(&UNK_10b250048);
    uVar12 = extraout_w8;
  }
  else {
    if (bVar3 != 3) goto LAB_101636288;
    bVar3 = *(byte *)((long)param_1 + 0x1f9);
    uVar12 = (uint)bVar3;
    if (2 < bVar3) {
      if (bVar3 == 3) goto LAB_1016363e4;
      bVar3 = *(byte *)((long)param_1 + 0x211);
      if (2 < bVar3) {
        if (bVar3 == 3) goto LAB_10163668c;
        goto LAB_101636764;
      }
      if (bVar3 == 0) {
        lVar15 = param_1[0x41];
        goto LAB_101636678;
      }
      if (bVar3 == 1) {
        func_0x000108a07af4(&UNK_10b22ad58);
      }
      else {
        func_0x000108a07b10(&UNK_10b22ad58);
      }
      goto LAB_1016362e0;
    }
    if (bVar3 == 0) {
      plVar18 = (long *)param_1[0x3e];
      goto LAB_1016363d0;
    }
  }
  if (uVar12 == 1) {
    func_0x000108a07af4(&UNK_10b24ffe8);
  }
  else {
    func_0x000108a07b10(&UNK_10b24ffe8);
  }
LAB_1016362e0:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1016362e4);
  (*pcVar14)();
}

