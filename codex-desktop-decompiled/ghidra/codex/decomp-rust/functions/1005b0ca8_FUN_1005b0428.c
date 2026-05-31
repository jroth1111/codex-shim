
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1005b0428(char ***param_1,undefined8 *****param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long ****pppplVar4;
  code *pcVar5;
  undefined8 ****ppppuVar6;
  long ***ppplVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  char *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined1 uVar17;
  undefined8 ****ppppuVar18;
  long lVar19;
  long ***ppplVar20;
  uint uVar21;
  char **ppcVar22;
  undefined8 *****pppppuVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined8 ***pppuStack_2f8;
  char *****pppppcStack_2f0;
  undefined *puStack_2e8;
  undefined8 *****pppppuStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  ulong ****ppppuStack_2c8;
  char ****ppppcStack_2c0;
  ulong ***pppuStack_2b8;
  ulong ****ppppuStack_2b0;
  ulong ***pppuStack_2a8;
  ulong *****pppppuStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 *****pppppuStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  ulong ***pppuStack_270;
  ulong *****pppppuStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 *****pppppuStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  char *pcStack_220;
  ulong *****pppppuStack_218;
  undefined8 ****ppppuStack_210;
  code *pcStack_208;
  ulong ****ppppuStack_200;
  undefined *puStack_1f8;
  undefined8 ****ppppuStack_150;
  char *****pppppcStack_148;
  undefined8 ****ppppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  char *****pppppcStack_120;
  undefined *puStack_118;
  undefined8 *****pppppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  char ****ppppcStack_f8;
  char ****ppppcStack_f0;
  char ***pppcStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  long *****ppppplStack_68;
  long ***ppplStack_60;
  undefined *puStack_58;
  long ****pppplStack_50;
  undefined *puStack_48;
  
  bVar3 = *(byte *)((long)param_1 + 0x91);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        FUN_107c05cc0(&UNK_10b218540);
      }
      uVar13 = FUN_107c05cc4();
      if (((ulong)param_1[0x12] & 1) != 0) {
        func_0x000100d30908(param_1 + 2);
      }
      *(undefined2 *)(param_1 + 0x12) = 0x200;
      __Unwind_Resume(uVar13);
      puVar14 = (undefined8 *)FUN_107c05ccc();
      bVar3 = *(byte *)(puVar14 + 0x18);
      if (bVar3 < 2) {
        if (bVar3 == 0) {
          *(undefined1 *)((long)puVar14 + 0xc1) = 1;
          puVar14[6] = puVar14[1];
          puVar14[5] = *puVar14;
          puVar14[8] = puVar14[3];
          puVar14[7] = puVar14[2];
          puVar14[9] = puVar14[4] + 0x790;
          *(undefined1 *)(puVar14 + 0x17) = 0;
LAB_1005b0d00:
          auVar29 = FUN_100fd3e50(puVar14 + 9);
          uVar13 = auVar29._8_8_;
          pcVar11 = auVar29._0_8_;
          if (pcVar11 == (char *)0x0) {
            uVar17 = 3;
          }
          else {
            if (((*(char *)(puVar14 + 0x17) == '\x03') && (*(char *)(puVar14 + 0x16) == '\x03')) &&
               (*(char *)(puVar14 + 0xd) == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (puVar14 + 0xe);
              uVar13 = extraout_x1_02;
              if (puVar14[0xf] != 0) {
                (**(code **)(puVar14[0xf] + 0x18))(puVar14[0x10]);
                uVar13 = extraout_x1_03;
              }
            }
            *(undefined1 *)((long)puVar14 + 0xc1) = 0;
            uVar26 = puVar14[6];
            uVar25 = puVar14[5];
            uVar28 = puVar14[8];
            uVar27 = puVar14[7];
            if ((*(ulong *)(pcVar11 + 0x7c0) & 0x7fffffffffffffff) != 0) {
              _free(*(undefined8 *)(pcVar11 + 0x7c8));
              uVar13 = extraout_x1_04;
            }
            *(undefined8 *)(pcVar11 + 0x7c8) = uVar26;
            *(undefined8 *)(pcVar11 + 0x7c0) = uVar25;
            *(undefined8 *)(pcVar11 + 0x7d8) = uVar28;
            *(undefined8 *)(pcVar11 + 2000) = uVar27;
            if (*pcVar11 == '\0') {
              *pcVar11 = '\x01';
            }
            else {
              __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                        (pcVar11,uVar13,1000000000);
            }
            FUN_1060fa678(pcVar11,1,pcVar11);
            *(undefined1 *)((long)puVar14 + 0xc1) = 0;
            uVar17 = 1;
          }
          *(undefined1 *)(puVar14 + 0x18) = uVar17;
          return pcVar11 == (char *)0x0;
        }
        FUN_107c05cc0(&UNK_10b218558);
      }
      else if (bVar3 == 3) goto LAB_1005b0d00;
      uVar13 = FUN_107c05cc4(&UNK_10b218558);
      if (((*(byte *)((long)puVar14 + 0xc1) & 1) != 0) && ((puVar14[5] & 0x7fffffffffffffff) != 0))
      {
        _free(puVar14[6]);
      }
      *(undefined2 *)(puVar14 + 0x18) = 2;
      __Unwind_Resume(uVar13);
      auVar29 = FUN_107c05ccc();
      plVar15 = auVar29._0_8_;
      bVar3 = *(byte *)(plVar15 + 0xfc);
      if (bVar3 < 2) {
        if (bVar3 == 0) {
          lVar19 = *plVar15;
          plVar15[1] = lVar19;
          *(undefined1 *)(plVar15 + 0xfb) = 0;
          cVar8 = *(char *)(lVar19 + 0x358);
joined_r0x0001005b0ee4:
          if (cVar8 != '\x02') {
            plVar15[2] = lVar19 + 0x330;
            *(undefined1 *)(plVar15 + 4) = 0;
LAB_1005b0f00:
            func_0x000100a84f68(&pppuStack_2a8,plVar15 + 2);
            if ((char)pppuStack_2a8 == '\x06') {
              uVar17 = 3;
              *(undefined1 *)(plVar15 + 0xfb) = 3;
              bVar9 = true;
              goto LAB_1005b0f58;
            }
            pppppuStack_268 = pppppuStack_2a0;
            pppuStack_270 = pppuStack_2a8;
            lStack_258 = lStack_290;
            uStack_260 = uStack_298;
            FUN_100c97ff8(plVar15 + 2);
            if ((char)pppuStack_270 != '\x05') {
              puVar14 = (undefined8 *)_malloc(0x20);
              if (puVar14 == (undefined8 *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
              }
              else {
                puVar14[1] = pppppuStack_268;
                *puVar14 = pppuStack_270;
                puVar14[3] = lStack_258;
                puVar14[2] = uStack_260;
                plVar16 = (long *)_malloc(0x18);
                if (plVar16 != (long *)0x0) {
                  *plVar16 = (long)puVar14;
                  plVar16[1] = (long)&UNK_10b238910;
                  *(undefined1 *)(plVar16 + 2) = 0x28;
                  uVar17 = 1;
                  *(undefined1 *)(plVar15 + 0xfb) = 1;
                  pppuStack_2f8 = (undefined8 ***)((long)plVar16 + 1);
                  if (pppuStack_2f8 == (undefined8 ***)0x0) {
                    bVar9 = false;
                  }
                  else {
                    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                       (((bRam000000010b62acf0 - 1 < 2 ||
                         ((bRam000000010b62acf0 != 0 &&
                          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                             (&
                                              __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                                             ), cVar8 != '\0')))) &&
                        (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                            (
                                            ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                                            ), (uVar12 & 1) != 0)))) {
                      lStack_290 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                                   + 0x30;
                      pppuStack_2b8 = (ulong ***)&pppuStack_2f8;
                      ppppuStack_2b0 =
                           (ulong ****)
                           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                      ;
                      ppppcStack_2c0 = (char ****)&pppuStack_2b8;
                      ppppuStack_2c8 = (ulong ****)s__failed_to_materialize_thread_pe_108ac19b3;
                      pppppcStack_2f0 = (char *****)&ppppuStack_2c8;
                      puStack_2e8 = &UNK_10b208fd0;
                      pppppuStack_2a0 = (ulong *****)&pppppcStack_2f0;
                      pppuStack_2a8 = (ulong ***)0x1;
                      uStack_298 = 1;
                      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                                (___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                                 ,&pppuStack_2a8);
                      lVar19 = 
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                      ;
                      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                        puStack_280 = *(undefined **)
                                       (
                                       ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                                       + 0x20);
                        uStack_278 = *(undefined8 *)
                                      (
                                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                                      + 0x28);
                        pppppuStack_288 = (undefined8 *****)0x2;
                        puVar1 = puRam000000010b634c20;
                        if (lRam000000010b66fd20 != 2) {
                          puVar1 = &UNK_10b3c24c8;
                        }
                        puVar2 = puRam000000010b634c18;
                        if (lRam000000010b66fd20 != 2) {
                          puVar2 = &UNK_109adfc03;
                        }
                        iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,&pppppuStack_288);
                        if (iVar10 != 0) {
                          lStack_250 = *(long *)(lVar19 + 0x60);
                          uStack_248 = *(undefined8 *)(lVar19 + 0x68);
                          pppppuStack_268 = *(ulong ******)(lVar19 + 0x50);
                          uStack_260 = *(undefined8 *)(lVar19 + 0x58);
                          pppuStack_270 = (ulong ***)0x1;
                          if (pppppuStack_268 == (ulong *****)0x0) {
                            pppuStack_270 = (ulong ***)0x2;
                          }
                          uStack_228 = *(undefined4 *)(lVar19 + 8);
                          uStack_224 = *(undefined4 *)(lVar19 + 0xc);
                          ppppuStack_210 = &pppuStack_2a8;
                          pcStack_208 = (code *)CONCAT71(pcStack_208._1_7_,1);
                          ppppuStack_200 = (ulong ****)&ppppuStack_210;
                          puStack_1f8 = &DAT_1061c2098;
                          lStack_258 = 1;
                          if (lStack_250 == 0) {
                            lStack_258 = 2;
                          }
                          puStack_238 = puStack_280;
                          pppppuStack_240 = pppppuStack_288;
                          uStack_230 = uStack_278;
                          pppppuStack_218 = &ppppuStack_200;
                          pcStack_220 = s__108b39f4f;
                          (**(code **)(puVar1 + 0x20))(puVar2,&pppuStack_270);
                        }
                      }
                    }
                    else {
                      lVar19 = 
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                      ;
                      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                        puStack_2d8 = *(undefined **)
                                       (
                                       ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                                       + 0x20);
                        uStack_2d0 = *(undefined8 *)
                                      (
                                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                                      + 0x28);
                        pppppuStack_2e0 = (undefined8 *****)0x2;
                        puVar1 = puRam000000010b634c20;
                        if (lRam000000010b66fd20 != 2) {
                          puVar1 = &UNK_10b3c24c8;
                        }
                        puVar2 = puRam000000010b634c18;
                        if (lRam000000010b66fd20 != 2) {
                          puVar2 = &UNK_109adfc03;
                        }
                        iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,&pppppuStack_2e0);
                        if (iVar10 != 0) {
                          lStack_290 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_27ensure_rollout_materialized28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hda040a3847a721dfE
                                       + 0x30;
                          ppppuStack_210 = &pppuStack_2f8;
                          pcStack_208 = 
                          __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                          ;
                          ppppuStack_2b0 = (ulong ****)&ppppuStack_210;
                          pppuStack_2b8 = (ulong ***)s__failed_to_materialize_thread_pe_108ac19b3;
                          ppppuStack_2c8 = &pppuStack_2b8;
                          ppppcStack_2c0 = (char ****)&UNK_10b208fd0;
                          pppppuStack_2a0 = &ppppuStack_2c8;
                          pppuStack_2a8 = (ulong ***)0x1;
                          uStack_298 = 1;
                          lStack_250 = *(long *)(lVar19 + 0x60);
                          uStack_248 = *(undefined8 *)(lVar19 + 0x68);
                          pppppuStack_268 = *(ulong ******)(lVar19 + 0x50);
                          uStack_260 = *(undefined8 *)(lVar19 + 0x58);
                          pppuStack_270 = (ulong ***)0x1;
                          if (pppppuStack_268 == (ulong *****)0x0) {
                            pppuStack_270 = (ulong ***)0x2;
                          }
                          uStack_228 = *(undefined4 *)(lVar19 + 8);
                          uStack_224 = *(undefined4 *)(lVar19 + 0xc);
                          ppppuStack_200 = &pppuStack_2a8;
                          puStack_1f8 = (undefined *)CONCAT71(puStack_1f8._1_7_,1);
                          pppppuStack_288 = &ppppuStack_200;
                          puStack_280 = &DAT_1061c2098;
                          lStack_258 = 1;
                          if (lStack_250 == 0) {
                            lStack_258 = 2;
                          }
                          puStack_238 = puStack_2d8;
                          pppppuStack_240 = pppppuStack_2e0;
                          uStack_230 = uStack_2d0;
                          pppppuStack_218 = (ulong *****)&pppppuStack_288;
                          pcStack_220 = s__108b39f4f;
                          (**(code **)(puVar1 + 0x20))(puVar2,&pppuStack_270);
                        }
                      }
                    }
                    if (((ulong)pppuStack_2f8 & 3) == 1) {
                      puVar14 = (undefined8 *)((long)pppuStack_2f8 - 1);
                      uVar13 = *puVar14;
                      puVar24 = *(undefined8 **)((long)pppuStack_2f8 + 7);
                      pcVar5 = (code *)*puVar24;
                      if (pcVar5 != (code *)0x0) {
                        (*pcVar5)(uVar13);
                      }
                      if (puVar24[1] != 0) {
                        _free(uVar13);
                      }
                      _free(puVar14);
                    }
                    bVar9 = false;
                    uVar17 = 1;
                  }
                  goto LAB_1005b0f58;
                }
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
              }
              goto LAB_1005b1360;
            }
          }
          bVar9 = false;
          uVar17 = 1;
          *(undefined1 *)(plVar15 + 0xfb) = 1;
LAB_1005b0f58:
          *(undefined1 *)(plVar15 + 0xfc) = uVar17;
          return bVar9;
        }
        FUN_107c05cc0(&UNK_10b218588);
LAB_1005b1338:
        FUN_107c05cc4(&UNK_10b218588);
      }
      else {
        if (bVar3 != 3) goto LAB_1005b1338;
        bVar3 = *(byte *)(plVar15 + 0xfb);
        if (1 < bVar3) {
          if (bVar3 != 3) {
            FUN_107c05cc4(&UNK_10b218708,auVar29._8_8_,auVar29._8_8_);
            goto LAB_1005b1360;
          }
          goto LAB_1005b0f00;
        }
        if (bVar3 == 0) {
          lVar19 = plVar15[1];
          cVar8 = *(char *)(lVar19 + 0x358);
          goto joined_r0x0001005b0ee4;
        }
      }
      FUN_107c05cc0(&UNK_10b218708);
LAB_1005b1360:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1005b1364);
      (*pcVar5)();
    }
    *param_1 = param_1[0xe];
    param_1[1] = param_1[0xf];
    *(char *)(param_1 + 0x12) = '\x01';
    param_1[3] = param_1[9];
    param_1[2] = param_1[8];
    param_1[5] = param_1[0xb];
    param_1[4] = param_1[10];
    param_1[7] = param_1[0xd];
    param_1[6] = param_1[0xc];
    param_1[0x13] = param_1[0x11] + 0x221;
    *(char *)(param_1 + 0x21) = '\0';
LAB_1005b0498:
    auVar29 = FUN_100fd3e50(param_1 + 0x13,param_2);
    uVar13 = auVar29._8_8_;
    if (auVar29._0_8_ == (char **)0x0) {
      bVar9 = true;
      cVar8 = '\x03';
      goto LAB_1005b0aa4;
    }
    param_1[0x10] = auVar29._0_8_;
    if (((*(char *)(param_1 + 0x21) == '\x03') && (*(char *)(param_1 + 0x20) == '\x03')) &&
       (*(char *)(param_1 + 0x17) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x18);
      uVar13 = extraout_x1;
      if (param_1[0x19] != (char **)0x0) {
        (*(code *)param_1[0x19][3])(param_1[0x1a]);
        uVar13 = extraout_x1_00;
      }
    }
    ppcVar22 = param_1[0x10];
    if (ppcVar22[5] != (char *)0x8000000000000000) {
      param_1[0x13] = (char **)(ppcVar22[0xe] + 0x10);
      *(char *)(param_1 + 0x21) = '\0';
      goto LAB_1005b0524;
    }
    uVar12 = 0;
  }
  else {
    if (bVar3 == 3) goto LAB_1005b0498;
LAB_1005b0524:
    pcVar11 = (char *)FUN_100fd3e50(param_1 + 0x13,param_2);
    if (pcVar11 == (char *)0x0) {
      bVar9 = true;
      cVar8 = '\x04';
      goto LAB_1005b0aa4;
    }
    if (((*(char *)(param_1 + 0x21) == '\x03') && (*(char *)(param_1 + 0x20) == '\x03')) &&
       (*(char *)(param_1 + 0x17) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x18);
      if (param_1[0x19] != (char **)0x0) {
        (*(code *)param_1[0x19][3])(param_1[0x1a]);
      }
    }
    auVar29 = __ZN10codex_core5state4turn9TurnState25remove_pending_user_input17hc388674d73cb7962E
                        (pcVar11 + 0x28,*param_1,param_1[1]);
    param_2 = auVar29._8_8_;
    uVar12 = auVar29._0_8_;
    if (*pcVar11 == '\0') {
      *pcVar11 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar11,param_2,1000000000)
      ;
    }
    FUN_1060fa678(pcVar11,1,pcVar11);
    ppcVar22 = param_1[0x10];
    uVar13 = extraout_x1_01;
  }
  if (*(char *)ppcVar22 == '\0') {
    *(char *)ppcVar22 = '\x01';
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(ppcVar22,uVar13,1000000000);
  }
  FUN_1060fa678(ppcVar22,1,ppcVar22);
  if ((uVar12 & 1) == 0) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
        ((bRam000000010b62acd8 - 1 < 2 ||
         ((bRam000000010b62acd8 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
                             ), cVar8 != '\0')))))) &&
       (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
                           ), (uVar12 & 1) != 0)) {
      ppppuStack_138 =
           (undefined8 ****)
           (
           ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
           + 0x30);
      ppppuStack_e0 = (undefined8 ****)&DAT_100c7b3a0;
      ppppcStack_f0 = &pppcStack_e8;
      ppppcStack_f8 = (char ****)s__No_pending_user_input_found_for_108ac1988;
      pppppcStack_120 = &ppppcStack_f8;
      puStack_118 = &UNK_10b208fd0;
      pppppcStack_148 = (char *****)&pppppcStack_120;
      ppppuStack_150 = (undefined8 ****)0x1;
      ppppuStack_140 = (undefined8 ****)0x1;
      pppcStack_e8 = param_1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
                 ,&ppppuStack_150);
      lVar19 = 
      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_d0 = *(undefined **)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
                      + 0x20);
        uStack_c8 = *(undefined8 *)
                     (
                     ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
                     + 0x28);
        pppppuStack_d8 = (undefined8 *****)0x2;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,&pppppuStack_d8);
        if (iVar10 != 0) {
          ppppuStack_a0 = *(undefined8 *****)(lVar19 + 0x60);
          ppppuStack_98 = *(undefined8 *****)(lVar19 + 0x68);
          ppppuStack_b8 = *(undefined8 *****)(lVar19 + 0x50);
          ppppuStack_b0 = *(undefined8 *****)(lVar19 + 0x58);
          ppppuStack_c0 = (undefined8 ****)0x1;
          if (ppppuStack_b8 == (undefined8 ****)0x0) {
            ppppuStack_c0 = (undefined8 ****)0x2;
          }
          uStack_78 = *(undefined4 *)(lVar19 + 8);
          uStack_74 = *(undefined4 *)(lVar19 + 0xc);
          puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,1);
          pppplStack_50 = &ppplStack_60;
          puStack_48 = &DAT_1061c2098;
          ppppuStack_a8 = (undefined8 ****)0x1;
          if (ppppuStack_a0 == (undefined8 ****)0x0) {
            ppppuStack_a8 = (undefined8 ****)0x2;
          }
          puStack_88 = puStack_d0;
          pppppuStack_90 = pppppuStack_d8;
          uStack_80 = uStack_c8;
          ppppplStack_68 = &pppplStack_50;
          pcStack_70 = s__108b39f4f;
          ppplStack_60 = (long ***)&ppppuStack_150;
          (**(code **)(puVar1 + 0x20))(puVar2,&ppppuStack_c0);
        }
      }
    }
    else {
      lVar19 = 
      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_108 = *(undefined **)
                       (
                       ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
                       + 0x20);
        uStack_100 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
                      + 0x28);
        pppppuStack_110 = (undefined8 *****)0x2;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,&pppppuStack_110);
        if (iVar10 != 0) {
          ppppuStack_138 =
               (undefined8 ****)
               (
               ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_26notify_user_input_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hdb4b667551db6876E
               + 0x30);
          puStack_58 = &DAT_100c7b3a0;
          ppppuStack_e0 = &ppplStack_60;
          pppcStack_e8 = (char ***)s__No_pending_user_input_found_for_108ac1988;
          ppppcStack_f8 = &pppcStack_e8;
          ppppcStack_f0 = (char ****)&UNK_10b208fd0;
          pppppcStack_148 = &ppppcStack_f8;
          ppppuStack_150 = (undefined8 ****)0x1;
          ppppuStack_140 = (undefined8 ****)0x1;
          ppppuStack_a0 = *(undefined8 *****)(lVar19 + 0x60);
          ppppuStack_98 = *(undefined8 *****)(lVar19 + 0x68);
          ppppuStack_b8 = *(undefined8 *****)(lVar19 + 0x50);
          ppppuStack_b0 = *(undefined8 *****)(lVar19 + 0x58);
          ppppuStack_c0 = (undefined8 ****)0x1;
          if (ppppuStack_b8 == (undefined8 ****)0x0) {
            ppppuStack_c0 = (undefined8 ****)0x2;
          }
          uStack_78 = *(undefined4 *)(lVar19 + 8);
          uStack_74 = *(undefined4 *)(lVar19 + 0xc);
          puStack_48 = (undefined *)CONCAT71(puStack_48._1_7_,1);
          pppppuStack_d8 = &pppplStack_50;
          puStack_d0 = &DAT_1061c2098;
          ppppuStack_a8 = (undefined8 ****)0x1;
          if (ppppuStack_a0 == (undefined8 ****)0x0) {
            ppppuStack_a8 = (undefined8 ****)0x2;
          }
          puStack_88 = puStack_108;
          pppppuStack_90 = pppppuStack_110;
          uStack_80 = uStack_100;
          ppppplStack_68 = (long *****)&pppppuStack_d8;
          pcStack_70 = s__108b39f4f;
          ppplStack_60 = (long ***)param_1;
          pppplStack_50 = (long ****)&ppppuStack_150;
          (**(code **)(puVar1 + 0x20))(puVar2,&ppppuStack_c0);
        }
      }
    }
  }
  else {
    *(char *)(param_1 + 0x12) = '\0';
    ppppuStack_b8 = (undefined8 ****)param_1[3];
    ppppuStack_c0 = (undefined8 ****)param_1[2];
    ppppuStack_a8 = (undefined8 ****)param_1[5];
    ppppuStack_b0 = (undefined8 ****)param_1[4];
    ppppuStack_98 = (undefined8 ****)param_1[7];
    ppppuStack_a0 = (undefined8 ****)param_1[6];
    pppplStack_50 = (long ****)0x0;
    if (param_2 == (undefined8 *****)0x0) {
      FUN_107c05cb0(&UNK_10b23a928);
LAB_1005b0b04:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1005b0b08);
      (*pcVar5)();
    }
    pppppuVar23 = param_2 + 2;
    pppppuStack_d8 = param_2;
    if (*pppppuVar23 != (undefined8 ****)0x0) {
      func_0x000100d30908(pppppuVar23);
    }
    param_2[3] = ppppuStack_b8;
    *pppppuVar23 = ppppuStack_c0;
    param_2[5] = ppppuStack_a8;
    param_2[4] = ppppuStack_b0;
    param_2[7] = ppppuStack_98;
    param_2[6] = ppppuStack_a0;
    ppppuVar6 = param_2[0xc];
    do {
      ppppuVar18 = ppppuVar6;
      uVar21 = (uint)ppppuVar18;
      if ((uVar21 >> 2 & 1) != 0) goto LAB_1005b064c;
      ppppuVar6 = param_2[0xc];
    } while (ppppuVar6 != ppppuVar18);
    param_2[0xc] = (undefined8 ****)((ulong)ppppuVar18 | 2);
LAB_1005b064c:
    if (((ulong)ppppuVar18 & 5) == 1) {
      (*(code *)param_2[10][2])(param_2[0xb]);
    }
    if ((uVar21 >> 2 & 1) == 0) {
      ppppuStack_150 = (undefined8 ****)0x0;
      ppppuVar6 = *pppppuStack_d8;
      *pppppuStack_d8 = (undefined8 ****)((long)ppppuVar6 + -1);
      LORelease();
      if (ppppuVar6 == (undefined8 ****)0x1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4c4abda393d83b1E(&pppppuStack_d8);
      }
      pppplVar4 = pppplStack_50;
      if (pppplStack_50 != (long ****)0x0) {
        ppplVar7 = pppplStack_50[0xc];
        do {
          ppplVar20 = ppplVar7;
          if (((uint)ppplVar20 >> 2 & 1) != 0) goto LAB_1005b06bc;
          ppplVar7 = pppplStack_50[0xc];
        } while (ppplVar7 != ppplVar20);
        pppplStack_50[0xc] = (long ***)((ulong)ppplVar20 | 2);
LAB_1005b06bc:
        if (((ulong)ppplVar20 & 5) == 1) {
          (*(code *)pppplStack_50[10][2])(pppplStack_50[0xb]);
        }
        ppplVar7 = *pppplVar4;
        *pppplVar4 = (long ***)((long)ppplVar7 + -1);
        LORelease();
        if (ppplVar7 == (long ***)0x1) {
LAB_1005b0920:
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4c4abda393d83b1E(&pppplStack_50);
          if ((uVar21 >> 2 & 1) != 0) goto LAB_1005b0930;
        }
      }
    }
    else {
      ppppuStack_150 = pppppuStack_d8[2];
      pppppuStack_d8[2] = (undefined8 ****)0x0;
      if (ppppuStack_150 == (undefined8 ****)0x0) {
        FUN_107c05cb0(&UNK_10b23a940);
        goto LAB_1005b0b04;
      }
      ppppuStack_140 = pppppuStack_d8[4];
      pppppcStack_148 = (char *****)pppppuStack_d8[3];
      ppppuStack_130 = pppppuStack_d8[6];
      ppppuStack_138 = pppppuStack_d8[5];
      ppppuStack_128 = pppppuStack_d8[7];
      ppppuVar6 = *pppppuStack_d8;
      *pppppuStack_d8 = (undefined8 ****)((long)ppppuVar6 + -1);
      LORelease();
      if (ppppuVar6 == (undefined8 ****)0x1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4c4abda393d83b1E(&pppppuStack_d8);
      }
      pppplVar4 = pppplStack_50;
      if (pppplStack_50 != (long ****)0x0) {
        ppplVar7 = pppplStack_50[0xc];
        do {
          ppplVar20 = ppplVar7;
          if (((uint)ppplVar20 >> 2 & 1) != 0) goto LAB_1005b08f4;
          ppplVar7 = pppplStack_50[0xc];
        } while (ppplVar7 != ppplVar20);
        pppplStack_50[0xc] = (long ***)((ulong)ppplVar20 | 2);
LAB_1005b08f4:
        if (((ulong)ppplVar20 & 5) == 1) {
          (*(code *)pppplStack_50[10][2])(pppplStack_50[0xb]);
        }
        ppplVar7 = *pppplVar4;
        *pppplVar4 = (long ***)((long)ppplVar7 + -1);
        LORelease();
        if (ppplVar7 == (long ***)0x1) goto LAB_1005b0920;
      }
LAB_1005b0930:
      func_0x000100d30908(&ppppuStack_150);
    }
  }
  if (((ulong)param_1[0x12] & 1) != 0) {
    func_0x000100d30908(param_1 + 2);
  }
  bVar9 = false;
  *(char *)(param_1 + 0x12) = '\0';
  cVar8 = '\x01';
LAB_1005b0aa4:
  *(char *)((long)param_1 + 0x91) = cVar8;
  return bVar9;
}

