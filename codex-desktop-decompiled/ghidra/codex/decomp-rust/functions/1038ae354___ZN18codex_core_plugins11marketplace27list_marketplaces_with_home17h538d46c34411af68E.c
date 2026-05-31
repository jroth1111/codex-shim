
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN18codex_core_plugins11marketplace27list_marketplaces_with_home17h538d46c34411af68E
               (undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long **pplVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  char ***pppcVar9;
  char ***pppcVar10;
  code *pcVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 ***pppuVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long lVar22;
  char *pcVar23;
  undefined8 *puVar24;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  char *pcStack_278;
  undefined8 **ppuStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long *plStack_258;
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
  char **ppcStack_200;
  undefined8 uStack_1f8;
  long **pplStack_1f0;
  undefined8 ***pppuStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  char ***pppcStack_1b0;
  char *pcStack_1a8;
  char ***pppcStack_1a0;
  undefined *puStack_198;
  char ***pppcStack_190;
  undefined *puStack_188;
  undefined8 **ppuStack_180;
  undefined8 uStack_178;
  long **pplStack_170;
  long alStack_168 [3];
  long *plStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined2 uStack_118;
  bool bStack_116;
  undefined8 ***pppuStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  char *pcStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  undefined8 ***pppuStack_88;
  long **pplStack_80;
  undefined *puStack_78;
  
  lStack_2c8 = 0;
  lStack_2c0 = 8;
  lStack_2b8 = 0;
  lStack_2b0 = 0;
  lStack_2a8 = 8;
  lStack_2a0 = 0;
  puStack_298 = (undefined8 *)0x0;
  puStack_290 = (undefined8 *)0x8;
  puStack_288 = (undefined8 *)0x0;
  if ((param_4 != 0) &&
     (__ZN18codex_core_plugins11marketplace30find_marketplace_manifest_path17h1e06eee85b85bf8eE
                (&pcStack_e0,param_4,param_5), uVar20 = uStack_d0, ppuVar8 = ppuStack_d8,
     pcVar23 = pcStack_e0, puVar21 = puStack_288, pcStack_e0 != (char *)0x8000000000000000)) {
    if (puStack_288 == puStack_298) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E(&puStack_298);
    }
    puVar17 = puStack_290 + (long)puVar21 * 3;
    *puVar17 = pcVar23;
    puVar17[1] = ppuVar8;
    puVar17[2] = uVar20;
    puStack_288 = (undefined8 *)((long)puVar21 + 1);
  }
  if (param_3 != 0) {
    lVar16 = param_2 + param_3 * 0x18;
    do {
      uVar20 = *(undefined8 *)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      __ZN18codex_core_plugins11marketplace30find_marketplace_manifest_path17h1e06eee85b85bf8eE
                (&pppcStack_1b0,uVar20,uVar4);
      pppcVar10 = pppcStack_1a0;
      pcVar23 = pcStack_1a8;
      pppcVar9 = pppcStack_1b0;
      if (pppcStack_1b0 != (char ***)0x8000000000000000) {
        lVar22 = (long)puStack_288 * 0x18;
        puVar21 = puStack_290;
        do {
          puVar17 = puStack_288;
          if (lVar22 == 0) {
            if (puStack_288 == puStack_298) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E(&puStack_298);
            }
            puVar21 = puStack_290 + (long)puVar17 * 3;
            *puVar21 = pppcVar9;
            puVar21[1] = pcVar23;
            puVar21[2] = pppcVar10;
            puStack_288 = (undefined8 *)((long)puVar17 + 1);
            goto LAB_1038ae428;
          }
          plStack_150 = (long *)puVar21[1];
          lStack_148 = puVar21[2];
          if (lStack_148 == 0) {
            bStack_116 = false;
            if (pppcVar10 != (char ***)0x0) goto LAB_1038ae494;
LAB_1038ae4bc:
            bVar12 = false;
          }
          else {
            bStack_116 = *(char *)plStack_150 == '/';
            if (pppcVar10 == (char ***)0x0) goto LAB_1038ae4bc;
LAB_1038ae494:
            bVar12 = *pcVar23 == '/';
          }
          uStack_118 = 0x201;
          lStack_140 = CONCAT71(lStack_140._1_7_,6);
          pcStack_e0 = pcVar23;
          ppuStack_d8 = pppcVar10;
          uStack_d0 = CONCAT71(uStack_d0._1_7_,6);
          puStack_a8 = (undefined *)CONCAT62(CONCAT51(puStack_a8._3_5_,bVar12),0x201);
          uVar15 = FUN_103972e34(&plStack_150,&pcStack_e0);
          puVar21 = puVar21 + 3;
          lVar22 = lVar22 + -0x18;
        } while ((uVar15 & 1) == 0);
        if (pppcVar9 != (char ***)0x0) {
          _free(pcVar23);
        }
      }
      __ZN15codex_git_utils4info17get_git_repo_root17h189a919652668850E(alStack_168,uVar20,uVar4);
      if (alStack_168[0] != -0x8000000000000000) {
        FUN_105561214(&plStack_1d0,alStack_168);
        pppuVar19 = pppuStack_1c8;
        plVar18 = plStack_1d0;
        if ((char **)plStack_1d0 == (char **)0x8000000000000000) {
          if (((ulong)pppuStack_1c8 & 3) == 1) {
            pppuVar19 = (undefined8 ***)((long)pppuStack_1c8 + -1);
            uVar20 = *pppuVar19;
            puVar21 = *(undefined8 **)((long)pppuStack_1c8 + 7);
            pcVar11 = (code *)*puVar21;
            if (pcVar11 != (code *)0x0) {
              (*pcVar11)(uVar20);
            }
            if (puVar21[1] != 0) {
              _free(uVar20);
            }
            goto LAB_1038ae698;
          }
        }
        else {
          __ZN18codex_core_plugins11marketplace30find_marketplace_manifest_path17h1e06eee85b85bf8eE
                    (&pppcStack_1b0,pppuStack_1c8,uStack_1c0);
          pppcVar10 = pppcStack_1a0;
          pcVar23 = pcStack_1a8;
          pppcVar9 = pppcStack_1b0;
          if (pppcStack_1b0 != (char ***)0x8000000000000000) {
            lVar22 = (long)puStack_288 * 0x18;
            puVar21 = puStack_290;
            do {
              puVar17 = puStack_288;
              if (lVar22 == 0) {
                if (puStack_288 == puStack_298) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E(&puStack_298)
                  ;
                }
                puVar21 = puStack_290 + (long)puVar17 * 3;
                *puVar21 = pppcVar9;
                puVar21[1] = pcVar23;
                puVar21[2] = pppcVar10;
                puStack_288 = (undefined8 *)((long)puVar17 + 1);
                if ((char **)plVar18 != (char **)0x0) {
                  _free(pppuVar19);
                }
                goto LAB_1038ae428;
              }
              plStack_150 = (long *)puVar21[1];
              lStack_148 = puVar21[2];
              if (lStack_148 == 0) {
                bStack_116 = false;
                if (pppcVar10 != (char ***)0x0) goto LAB_1038ae584;
LAB_1038ae5ac:
                bVar12 = false;
              }
              else {
                bStack_116 = *(char *)plStack_150 == '/';
                if (pppcVar10 == (char ***)0x0) goto LAB_1038ae5ac;
LAB_1038ae584:
                bVar12 = *pcVar23 == '/';
              }
              uStack_118 = 0x201;
              lStack_140 = CONCAT71(lStack_140._1_7_,6);
              pcStack_e0 = pcVar23;
              ppuStack_d8 = pppcVar10;
              uStack_d0 = CONCAT71(uStack_d0._1_7_,6);
              puStack_a8 = (undefined *)CONCAT62(CONCAT51(puStack_a8._3_5_,bVar12),0x201);
              uVar15 = FUN_103972e34(&plStack_150,&pcStack_e0);
              puVar21 = puVar21 + 3;
              lVar22 = lVar22 + -0x18;
            } while ((uVar15 & 1) == 0);
            if (pppcVar9 != (char ***)0x0) {
              _free(pcVar23);
            }
          }
          if ((char **)plVar18 != (char **)0x0) {
LAB_1038ae698:
            _free(pppuVar19);
          }
        }
      }
LAB_1038ae428:
      param_2 = param_2 + 0x18;
    } while (param_2 != lVar16);
  }
  puVar7 = puStack_288;
  puVar6 = puStack_290;
  puVar5 = puStack_298;
  puVar24 = puStack_290 + (long)puStack_288 * 3;
  puStack_298 = puStack_290;
  puStack_288 = puVar5;
  puVar21 = puStack_290;
  puVar17 = puStack_290;
  puStack_280 = puVar24;
  if (puVar7 == (undefined8 *)0x0) {
LAB_1038aebbc:
    puStack_290 = puVar21;
    if ((long)puVar24 - (long)puVar21 != 0) {
      uVar15 = (ulong)((long)puVar24 - (long)puVar21) / 0x18;
      puVar21 = puVar21 + 1;
      do {
        if (puVar21[-1] != 0) {
          _free(*puVar21);
        }
        puVar21 = puVar21 + 3;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  else {
    do {
      puVar21 = puVar17 + 3;
      pcVar23 = (char *)*puVar17;
      if (pcVar23 == (char *)0x8000000000000000) goto LAB_1038aebbc;
      uStack_268 = puVar17[2];
      ppuStack_270 = (undefined8 **)puVar17[1];
      pcStack_278 = pcVar23;
      func_0x0001038aa0e0(&lStack_260,&pcStack_278);
      lVar16 = lStack_2b8;
      if (lStack_260 == -0x8000000000000000) {
        lStack_148 = lStack_250;
        plStack_150 = plStack_258;
        lStack_138 = lStack_240;
        lStack_140 = lStack_248;
        lStack_128 = lStack_230;
        lStack_130 = lStack_238;
        lStack_120 = lStack_228;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
           (((bRam000000010b62b6b8 - 1 < 2 ||
             ((bRam000000010b62b6b8 != 0 &&
              (cVar13 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (0x10b62b6a8), cVar13 != '\0')))) &&
            (iVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (lRam000000010b62b6a8), iVar14 != 0)))) {
          lStack_1b8 = lRam000000010b62b6a8 + 0x30;
          ppcStack_200 = (char **)&UNK_108d967dd;
          uStack_1f8 = 0x51;
          ppuStack_180 = ppuStack_270;
          uStack_178 = uStack_268;
          pplStack_1f0 = (long **)&ppuStack_180;
          pplStack_170 = &plStack_150;
          pppcStack_1b0 = &ppcStack_200;
          pppcStack_1a0 = (char ***)&pplStack_1f0;
          pcStack_1a8 = "";
          pppcStack_190 = (char ***)&pplStack_170;
          puStack_198 = &UNK_10b2d6c20;
          puStack_188 = &UNK_10b2d6d38;
          plStack_1d0 = (long *)0x1;
          pppuStack_1c8 = &pppcStack_1b0;
          uStack_1c0 = 3;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (lRam000000010b62b6a8,&plStack_1d0);
          lVar16 = lRam000000010b62b6a8;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_100 = *(undefined **)(lRam000000010b62b6a8 + 0x20);
            uStack_f8 = *(undefined8 *)(lRam000000010b62b6a8 + 0x28);
            pppuStack_108 = (long ***)0x2;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar14 = (**(code **)(puVar1 + 0x18))(puVar2,&pppuStack_108);
            if (iVar14 != 0) {
              puStack_c0 = *(undefined8 **)(lVar16 + 0x60);
              uStack_b8 = *(undefined8 *)(lVar16 + 0x68);
              ppuStack_d8 = *(undefined8 ***)(lVar16 + 0x50);
              uStack_d0 = *(undefined8 *)(lVar16 + 0x58);
              pcStack_e0 = (char *)0x1;
              if (ppuStack_d8 == (long **)0x0) {
                pcStack_e0 = (char *)0x2;
              }
              uStack_98 = *(undefined4 *)(lVar16 + 8);
              uStack_94 = *(undefined4 *)(lVar16 + 0xc);
              ppuStack_f0 = &plStack_1d0;
              uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
              pplStack_80 = (long **)&ppuStack_f0;
              puStack_78 = &DAT_1061c2098;
              plStack_c8 = (long *)0x1;
              if (puStack_c0 == (undefined8 *)0x0) {
                plStack_c8 = (long *)0x2;
              }
              puStack_a8 = puStack_100;
              pppuStack_b0 = pppuStack_108;
              uStack_a0 = uStack_f8;
              pppuStack_88 = &pplStack_80;
              pcStack_90 = s__108b39f4f;
              (**(code **)(puVar1 + 0x20))(puVar2,&pcStack_e0);
            }
          }
        }
        else {
          lVar16 = lRam000000010b62b6a8;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_1e0 = *(undefined **)(lRam000000010b62b6a8 + 0x20);
            uStack_1d8 = *(undefined8 *)(lRam000000010b62b6a8 + 0x28);
            pppuStack_1e8 = (long ***)0x2;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar14 = (**(code **)(puVar1 + 0x18))(puVar2,&pppuStack_1e8);
            if (iVar14 != 0) {
              lStack_1b8 = lRam000000010b62b6a8 + 0x30;
              ppuStack_180 = (undefined8 **)&UNK_108d967dd;
              uStack_178 = 0x51;
              ppuStack_f0 = ppuStack_270;
              uStack_e8 = uStack_268;
              pplStack_170 = (long **)&ppuStack_f0;
              ppcStack_200 = (char **)&plStack_150;
              pppcStack_1b0 = (char ***)&ppuStack_180;
              pppcStack_1a0 = (char ***)&pplStack_170;
              pcStack_1a8 = "";
              pppcStack_190 = &ppcStack_200;
              puStack_198 = &UNK_10b2d6c20;
              puStack_188 = &UNK_10b2d6d38;
              pppuStack_1c8 = &pppcStack_1b0;
              plStack_1d0 = (long *)0x1;
              uStack_1c0 = 3;
              puStack_a8 = puStack_1e0;
              pppuStack_b0 = pppuStack_1e8;
              uStack_a0 = uStack_1d8;
              puStack_c0 = *(undefined8 **)(lVar16 + 0x60);
              uStack_b8 = *(undefined8 *)(lVar16 + 0x68);
              ppuStack_d8 = *(undefined8 ***)(lVar16 + 0x50);
              uStack_d0 = *(undefined8 *)(lVar16 + 0x58);
              pcStack_e0 = (char *)0x1;
              if (ppuStack_d8 == (long **)0x0) {
                pcStack_e0 = (char *)0x2;
              }
              uStack_98 = *(undefined4 *)(lVar16 + 8);
              uStack_94 = *(undefined4 *)(lVar16 + 0xc);
              pplStack_80 = &plStack_1d0;
              puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
              pppuStack_108 = &pplStack_80;
              puStack_100 = &DAT_1061c2098;
              plStack_c8 = (long *)0x1;
              if (puStack_c0 == (undefined8 *)0x0) {
                plStack_c8 = (long *)0x2;
              }
              pppuStack_88 = &pppuStack_108;
              pcStack_90 = s__108b39f4f;
              (**(code **)(puVar1 + 0x20))(puVar2,&pcStack_e0);
            }
          }
        }
        uVar20 = uStack_268;
        ppuVar8 = ppuStack_270;
        pplVar3 = ppuStack_270;
        plStack_1d0 = (long *)0x0;
        pppuStack_1c8 = (undefined8 ***)0x1;
        uStack_1c0 = 0;
        pppcStack_1a0 = (char ***)0x60000020;
        pppcStack_1b0 = (char ***)&plStack_1d0;
        pcStack_1a8 = &UNK_10b2da510;
        iVar14 = func_0x0001039a17c4(&plStack_150,&pppcStack_1b0);
        lVar16 = lStack_2a0;
        if (iVar14 != 0) {
          puStack_290 = puVar21;
          func_0x000108a07a3c(&UNK_108d9b024,0x37,&pppuStack_108,&UNK_10b2da650,&UNK_10b2da540);
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1038aec80);
          (*pcVar11)();
        }
        puStack_c0 = pppuStack_1c8;
        plStack_c8 = plStack_1d0;
        uStack_b8 = uStack_1c0;
        ppuStack_d8 = ppuVar8;
        uStack_d0 = uVar20;
        pcStack_e0 = pcVar23;
        if (lStack_2a0 == lStack_2b0) {
          func_0x0001089508dc(&lStack_2b0);
        }
        puVar17 = (undefined8 *)(lStack_2a8 + lVar16 * 0x30);
        puVar17[1] = ppuStack_d8;
        *puVar17 = pcStack_e0;
        puVar17[3] = plStack_c8;
        puVar17[2] = uStack_d0;
        puVar17[5] = uStack_b8;
        puVar17[4] = puStack_c0;
        lStack_2a0 = lVar16 + 1;
        func_0x00010393ed5c(&plStack_150);
      }
      else {
        if (lStack_2b8 == lStack_2c8) {
          func_0x00010895066c(&lStack_2c8);
        }
        plVar18 = (long *)(lStack_2c0 + lVar16 * 0x60);
        plVar18[5] = lStack_238;
        plVar18[4] = lStack_240;
        plVar18[7] = lStack_228;
        plVar18[6] = lStack_230;
        plVar18[9] = lStack_218;
        plVar18[8] = lStack_220;
        plVar18[0xb] = lStack_208;
        plVar18[10] = lStack_210;
        plVar18[1] = (long)plStack_258;
        *plVar18 = lStack_260;
        plVar18[3] = lStack_248;
        plVar18[2] = lStack_250;
        lStack_2b8 = lVar16 + 1;
        if (pcVar23 != (char *)0x0) {
          _free(ppuStack_270);
        }
      }
      puVar17 = puVar21;
    } while (puVar21 != puVar24);
  }
  if (puVar5 != (undefined8 *)0x0) {
    _free(puVar6);
  }
  param_1[2] = lStack_2c0;
  param_1[1] = lStack_2c8;
  param_1[4] = lStack_2b0;
  param_1[3] = lStack_2b8;
  param_1[6] = lStack_2a0;
  param_1[5] = lStack_2a8;
  *param_1 = 7;
  return;
}

