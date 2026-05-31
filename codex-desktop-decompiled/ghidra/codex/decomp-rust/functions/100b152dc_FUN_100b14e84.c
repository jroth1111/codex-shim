
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100b14e84(long *param_1,undefined8 param_2)

{
  char ****ppppcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  char **ppcVar6;
  char ***pppcVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  char ****unaff_x21;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_488 [344];
  char ***pppcStack_330;
  undefined *puStack_328;
  long lStack_320;
  long lStack_318;
  char **ppcStack_310;
  char ***pppcStack_308;
  ulong uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  char ***pppcStack_2e0;
  undefined *puStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  char *pcStack_2c0;
  char ***pppcStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  char ***pppcStack_280;
  undefined *puStack_278;
  long lStack_270;
  long lStack_268;
  char **ppcStack_260;
  char ***pppcStack_258;
  ulong uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  char ***pppcStack_230;
  undefined *puStack_228;
  long lStack_220;
  long lStack_218;
  char *pcStack_210;
  char ***pppcStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  char ***pppcStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  char *pcStack_f0;
  undefined8 uStack_e8;
  char ***pppcStack_d8;
  undefined *puStack_d0;
  char ***pppcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long **pplStack_b0;
  long **pplStack_a8;
  char **ppcStack_a0;
  char ***pppcStack_98;
  char **ppcStack_90;
  undefined *puStack_88;
  char ***pppcStack_80;
  undefined *puStack_78;
  
  bVar5 = *(byte *)((long)param_1 + 1099);
  if (bVar5 < 3) {
    if (bVar5 != 0) {
      if (bVar5 == 1) {
        func_0x000108a07af4(&UNK_10b22dd30);
      }
      uVar11 = func_0x000108a07b10();
      if ((char **)pcStack_f0 != (char **)0x0) {
        _free(uStack_e8);
      }
      if ((*(byte *)(param_1 + 0x89) & 1) != 0) {
        FUN_100cc9e8c(&pppcStack_330);
      }
      *(undefined1 *)(param_1 + 0x89) = 0;
      FUN_100e2ac5c(param_1 + 0x8a);
      if (((((*(byte *)((long)param_1 + 0x449) & 1) != 0) &&
           (FUN_100e2ac5c(param_1 + 0x5b), (*(byte *)((long)param_1 + 0x449) & 1) != 0)) &&
          (FUN_100e33c4c(param_1 + 0x6d), (*(byte *)((long)param_1 + 0x449) & 1) != 0)) &&
         ((FUN_100e33c4c(param_1 + 0x71), (*(byte *)((long)param_1 + 0x449) & 1) != 0 &&
          (plVar16 = (long *)param_1[0x83], plVar16 != (long *)0x0)))) {
        lVar13 = *plVar16;
        *plVar16 = lVar13 + -1;
        LORelease();
        if (lVar13 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h667a22f7c3498957E(param_1 + 0x83);
        }
      }
      if (((*(byte *)((long)param_1 + 0x449) & 1) != 0) &&
         (FUN_100d5aca8(param_1 + 0x84), (*(byte *)((long)param_1 + 0x449) & 1) != 0)) {
        FUN_100e31184(param_1 + 0x79);
      }
      if ((*(byte *)((long)param_1 + 0x44a) & 1) != 0) {
        FUN_100cc9e8c(param_1 + 0x75);
      }
      *(undefined2 *)((long)param_1 + 0x449) = 0;
      do {
        *(undefined1 *)((long)param_1 + 1099) = 2;
        __Unwind_Resume(uVar11);
        *(undefined1 *)((long)param_1 + 1099) = 2;
        uVar11 = __Unwind_Resume();
        FUN_100c9623c(param_1[0x8a],param_1[0x8b]);
      } while( true );
    }
    *(undefined2 *)(param_1 + 0x89) = 0;
    *(undefined1 *)((long)param_1 + 0x44a) = 0;
    lVar13 = param_1[0x88];
    *param_1 = lVar13;
    auVar24 = (**(code **)(*(long *)(lVar13 + 0xe8) + 0x20))
                        (*(long *)(lVar13 + 0xe0) +
                         (*(long *)(*(long *)(lVar13 + 0xe8) + 0x10) - 1U & 0xfffffffffffffff0) +
                         0x10);
    *(undefined1 (*) [16])(param_1 + 0x8a) = auVar24;
LAB_100b14f18:
    (**(code **)(auVar24._8_8_ + 0x18))(&ppcStack_260,auVar24._0_8_,param_2);
    if ((char ***)ppcStack_260 == (char ***)0x4) {
      uVar12 = 3;
      pppcStack_258 = (char ***)unaff_x21;
      goto LAB_100b1543c;
    }
    _memcpy(auStack_488,&uStack_250,0x158);
    lVar13 = param_1[0x8a];
    puVar19 = (undefined8 *)param_1[0x8b];
    pcVar14 = (code *)*puVar19;
    if (pcVar14 != (code *)0x0) {
      (*pcVar14)(lVar13);
    }
    if (puVar19[1] != 0) {
      _free(lVar13);
    }
    if ((char ***)ppcStack_260 == (char ***)0x3) {
      param_1[0x2e] = 3;
      param_1[0x2f] = (long)pppcStack_258;
    }
    else {
      param_1[0x2e] = (long)ppcStack_260;
      param_1[0x2f] = (long)pppcStack_258;
      _memcpy(param_1 + 0x30,auStack_488,0x158);
      _memcpy(param_1 + 1,param_1 + 0x2e,0x168);
      if (param_1[1] != 2) {
        *(undefined2 *)((long)param_1 + 0x449) = 0x101;
        _memcpy(param_1 + 0x5b,param_1 + 0x2e,0x168);
        param_1[0x8a] = *(long *)(*param_1 + 0xd8) + 0x10;
        *(undefined1 *)(param_1 + 0x95) = 0;
        goto LAB_100b14ff8;
      }
      pppcStack_258 = (char ***)0x0;
    }
  }
  else {
    if (bVar5 != 5) {
      if (bVar5 != 4) {
        auVar24 = *(undefined1 (*) [16])(param_1 + 0x8a);
        goto LAB_100b14f18;
      }
LAB_100b14ff8:
      ppppcVar1 = (char ****)(param_1 + 0x8a);
      auVar24 = FUN_100fd4eb8(ppppcVar1,param_2);
      lVar13 = auVar24._8_8_;
      pcVar10 = auVar24._0_8_;
      if (pcVar10 == (char *)0x0) {
        uVar12 = 4;
        pppcStack_258 = (char ***)ppppcVar1;
        goto LAB_100b1543c;
      }
      if (((char)param_1[0x95] == '\x03') && ((char)param_1[0x94] == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x8c);
        if (param_1[0x8d] != 0) {
          (**(code **)(param_1[0x8d] + 0x18))(param_1[0x8e]);
        }
      }
      FUN_1013fb310(&ppcStack_310,lVar13);
      FUN_1014aa240(&pppcStack_280,lVar13 + 0xd0);
      lVar13 = *(long *)(lVar13 + 0x160);
      lStack_1f8 = lStack_2a8;
      lStack_200 = lStack_2b0;
      lStack_1e8 = lStack_298;
      lStack_1f0 = lStack_2a0;
      lStack_238 = lStack_2e8;
      lStack_240 = lStack_2f0;
      puStack_228 = puStack_2d8;
      pppcStack_230 = pppcStack_2e0;
      lStack_218 = lStack_2c8;
      lStack_220 = lStack_2d0;
      pppcStack_208 = pppcStack_2b8;
      pcStack_210 = pcStack_2c0;
      pppcStack_258 = pppcStack_308;
      ppcStack_260 = ppcStack_310;
      lStack_248 = lStack_2f8;
      uStack_250 = uStack_300;
      lStack_1d8 = lStack_288;
      lStack_1e0 = lStack_290;
      puStack_1c8 = puStack_278;
      pppcStack_1d0 = pppcStack_280;
      lStack_1b8 = lStack_268;
      lStack_1c0 = lStack_270;
      if (*pcVar10 == '\0') {
        *pcVar10 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar10,extraout_x1,1000000000);
      }
      FUN_1060fa678(pcVar10,1,pcVar10);
      param_1[0x97] = lStack_1f8;
      param_1[0x96] = lStack_200;
      param_1[0x99] = lStack_1e8;
      param_1[0x98] = lStack_1f0;
      param_1[0x9b] = lStack_1d8;
      param_1[0x9a] = lStack_1e0;
      param_1[0x8f] = lStack_238;
      param_1[0x8e] = lStack_240;
      param_1[0x91] = (long)puStack_228;
      param_1[0x90] = (long)pppcStack_230;
      param_1[0x93] = lStack_218;
      param_1[0x92] = lStack_220;
      param_1[0x95] = (long)pppcStack_208;
      param_1[0x94] = (long)pcStack_210;
      param_1[0x8b] = (long)pppcStack_258;
      *ppppcVar1 = (char ***)ppcStack_260;
      param_1[0x8d] = lStack_248;
      param_1[0x8c] = uStack_250;
      *(undefined1 *)(param_1 + 0x89) = 1;
      puStack_328 = puStack_1c8;
      pppcStack_330 = pppcStack_1d0;
      lStack_318 = lStack_1b8;
      lStack_320 = lStack_1c0;
      __ZN19codex_network_proxy7runtime18log_policy_changes17haca5f38b437b314eE
                (ppppcVar1,param_1 + 0x5b);
      *(undefined1 *)(param_1 + 0x89) = 0;
      uVar22 = param_1[0x78];
      uVar20 = param_1[0x75];
      if (uVar22 != 0) {
        uVar23 = 0;
        if (uVar20 <= (ulong)param_1[0x77]) {
          uVar23 = uVar20;
        }
        lVar15 = param_1[0x77] - uVar23;
        uVar23 = uVar20 - lVar15;
        lVar21 = 0;
        if (uVar23 <= uVar22) {
          lVar21 = uVar22 - uVar23;
        }
        uVar2 = uVar20;
        if (uVar22 <= uVar23) {
          uVar2 = lVar15 + uVar22;
        }
        lVar17 = param_1[0x76];
        lVar18 = uVar2 - lVar15;
        if (lVar18 != 0) {
          lVar15 = lVar17 + lVar15 * 0xb8;
          do {
            func_0x000100e1ce88(lVar15);
            lVar15 = lVar15 + 0xb8;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        if (uVar23 < uVar22) {
          do {
            func_0x000100e1ce88(lVar17);
            lVar17 = lVar17 + 0xb8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
      }
      if (uVar20 != 0) {
        _free(param_1[0x76]);
      }
      *(undefined1 *)((long)param_1 + 0x44a) = 1;
      param_1[0x76] = (long)puStack_328;
      param_1[0x75] = (long)pppcStack_330;
      param_1[0x78] = lStack_318;
      param_1[0x77] = lStack_320;
      param_1[0x87] = lVar13;
      param_1[0x9c] = *(long *)(*param_1 + 0xd8) + 0x10;
      *(undefined1 *)(param_1 + 0xa7) = 0;
    }
    FUN_100fd5070(&ppcStack_260,param_1 + 0x9c,param_2);
    pppcVar7 = pppcStack_258;
    ppcVar6 = ppcStack_260;
    if ((char ***)ppcStack_260 == (char ***)0x0) {
      uVar12 = 5;
      pppcStack_258 = (char ***)(char ****)0x0;
LAB_100b1543c:
      *(undefined1 *)((long)param_1 + 1099) = uVar12;
      uVar11 = 1;
      goto LAB_100b155e4;
    }
    iVar9 = (int)uStack_250;
    uVar20 = uStack_250 & 0xffffffff;
    if (((char)param_1[0xa7] == '\x03') && ((char)param_1[0xa6] == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x9e);
      if (param_1[0x9f] != 0) {
        (**(code **)(param_1[0x9f] + 0x18))(param_1[0xa0]);
      }
    }
    *(undefined2 *)((long)param_1 + 0x449) = 0;
    _memcpy(&ppcStack_260,param_1 + 0x5b,0x168);
    FUN_100e1376c(pppcVar7);
    _memcpy(pppcVar7,&ppcStack_260,0x168);
    if (iVar9 != 0) {
      if (*(char *)ppcVar6 == '\0') {
        *(char *)ppcVar6 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (ppcVar6,extraout_x1_00,1000000000);
      }
      FUN_1060fa678(ppcVar6,uVar20,ppcVar6);
    }
    lVar13 = *(long *)(*param_1 + 0xe8);
    (**(code **)(lVar13 + 0x18))
              (&pcStack_f0,
               *(long *)(*param_1 + 0xe0) + (*(long *)(lVar13 + 0x10) - 1U & 0xfffffffffffffff0) +
               0x10);
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
       (((bRam000000010b62ecf0 - 1 < 2 ||
         ((bRam000000010b62ecf0 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
                             ), cVar8 != '\0')))) &&
        (uVar20 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
                            ), (uVar20 & 1) != 0)))) {
      lStack_2f8 = ___ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
                   + 0x30;
      ppcStack_a0 = &pcStack_f0;
      pppcStack_98 = (char ***)&DAT_10112965c;
      pplStack_a8 = (long **)&ppcStack_a0;
      pplStack_b0 = (long **)s_reloaded_config_from_108ad0a30;
      pppcStack_d8 = (char ***)&pplStack_b0;
      puStack_d0 = &UNK_10b208fd0;
      pppcStack_308 = (char ***)&pppcStack_d8;
      ppcStack_310 = (char **)0x1;
      uStack_300 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
                 ,&ppcStack_310);
      lVar13 = 
      ___ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_278 = *(undefined **)
                       (
                       ___ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
                       + 0x20);
        lStack_270 = *(long *)(
                              ___ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
                              + 0x28);
        pppcStack_280 = (char ***)0x3;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&pppcStack_280);
        if (iVar9 != 0) {
          lStack_240 = *(long *)(lVar13 + 0x60);
          lStack_238 = *(long *)(lVar13 + 0x68);
          pppcStack_258 = *(char ****)(lVar13 + 0x50);
          uStack_250 = *(ulong *)(lVar13 + 0x58);
          ppcStack_260 = (char **)0x1;
          if ((char ****)pppcStack_258 == (char ****)0x0) {
            ppcStack_260 = (char **)0x2;
          }
          lStack_218 = *(long *)(lVar13 + 8);
          ppcStack_90 = (char **)&ppcStack_310;
          puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
          pppcStack_80 = &ppcStack_90;
          puStack_78 = &DAT_1061c2098;
          lStack_248 = 1;
          if (lStack_240 == 0) {
            lStack_248 = 2;
          }
          puStack_228 = puStack_278;
          pppcStack_230 = pppcStack_280;
          lStack_220 = lStack_270;
          pppcStack_208 = (char ***)&pppcStack_80;
          pcStack_210 = s__108b39f4f;
          (**(code **)(puVar3 + 0x20))(puVar4,&ppcStack_260);
        }
      }
    }
    else {
      lVar13 = 
      ___ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_c0 = *(undefined **)
                      (
                      ___ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
                      + 0x20);
        lStack_b8 = *(long *)(
                             ___ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
                             + 0x28);
        pppcStack_c8 = (char ***)0x3;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        iVar9 = (**(code **)(puVar3 + 0x18))(puVar4,&pppcStack_c8);
        if (iVar9 != 0) {
          lStack_2f8 = ___ZN19codex_network_proxy7runtime17NetworkProxyState16reload_if_needed28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf65f17b759acf217E
                       + 0x30;
          ppcStack_90 = &pcStack_f0;
          puStack_88 = &DAT_10112965c;
          pppcStack_98 = &ppcStack_90;
          ppcStack_a0 = (char **)s_reloaded_config_from_108ad0a30;
          pplStack_b0 = (long **)&ppcStack_a0;
          pplStack_a8 = (long **)&UNK_10b208fd0;
          pppcStack_308 = (char ***)&pplStack_b0;
          ppcStack_310 = (char **)0x1;
          uStack_300 = 1;
          puStack_228 = puStack_c0;
          pppcStack_230 = pppcStack_c8;
          lStack_220 = lStack_b8;
          lStack_240 = *(long *)(lVar13 + 0x60);
          lStack_238 = *(long *)(lVar13 + 0x68);
          pppcStack_258 = *(char ****)(lVar13 + 0x50);
          uStack_250 = *(ulong *)(lVar13 + 0x58);
          ppcStack_260 = (char **)0x1;
          if ((char ****)pppcStack_258 == (char ****)0x0) {
            ppcStack_260 = (char **)0x2;
          }
          lStack_218 = *(long *)(lVar13 + 8);
          pppcStack_80 = &ppcStack_310;
          puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
          pppcStack_280 = (char ***)&pppcStack_80;
          puStack_278 = &DAT_1061c2098;
          lStack_248 = 1;
          if (lStack_240 == 0) {
            lStack_248 = 2;
          }
          pppcStack_208 = (char ***)&pppcStack_280;
          pcStack_210 = s__108b39f4f;
          (**(code **)(puVar3 + 0x20))(puVar4,&ppcStack_260);
        }
      }
    }
    if ((char **)pcStack_f0 != (char **)0x0) {
      _free(uStack_e8);
    }
    *(undefined1 *)(param_1 + 0x89) = 0;
    FUN_100e2ac5c(param_1 + 0x8a);
    pppcStack_258 = (char ***)0x0;
    *(undefined2 *)((long)param_1 + 0x449) = 0;
  }
  uVar11 = 0;
  *(undefined1 *)((long)param_1 + 1099) = 1;
LAB_100b155e4:
  auVar24._8_8_ = pppcStack_258;
  auVar24._0_8_ = uVar11;
  return auVar24;
}

