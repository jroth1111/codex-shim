
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1004f2c30(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 **extraout_x1;
  undefined8 **extraout_x1_00;
  undefined8 **extraout_x1_01;
  undefined8 **ppuVar10;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar11;
  undefined1 uVar12;
  code *pcVar13;
  ulong uVar14;
  long unaff_x23;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 auStack_3a8 [23];
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 ***pppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  char *pcStack_260;
  undefined8 ***pppuStack_258;
  undefined8 *puStack_1f8;
  char ***pppcStack_1f0;
  undefined *puStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 **ppuStack_1c8;
  char ***pppcStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ***pppuStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 **ppuStack_170;
  code *pcStack_168;
  undefined8 ***pppuStack_160;
  undefined *puStack_158;
  undefined8 auStack_f8 [23];
  
  bVar4 = *(byte *)(param_1 + 3);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      auStack_f8[0] = 6;
      auVar16 = __ZN10codex_core5goals55__LT_impl_u20_codex_core__session__session__Session_GT_18goal_runtime_apply17h660a79174465fc8dE
                          (*param_1 + 0x210,auStack_f8);
      *(undefined1 (*) [16])(param_1 + 1) = auVar16;
LAB_1004f2c94:
      auVar16 = (**(code **)(auVar16._8_8_ + 0x18))(auVar16._0_8_,param_2);
      uVar14 = auVar16._0_8_;
      if ((uVar14 & 1) == 0) {
        lVar11 = param_1[1];
        puVar3 = (undefined8 *)param_1[2];
        pcVar13 = (code *)*puVar3;
        if (pcVar13 != (code *)0x0) {
          (*pcVar13)(lVar11);
        }
        if (puVar3[1] != 0) {
          _free(lVar11);
        }
        *(undefined1 *)(param_1 + 3) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 3;
        uVar14 = 1;
      }
      auVar16._0_8_ = uVar14;
      return auVar16;
    }
    FUN_107c05cc0(&UNK_10b2158e0);
  }
  else if (bVar4 == 3) {
    auVar16 = *(undefined1 (*) [16])(param_1 + 1);
    goto LAB_1004f2c94;
  }
  uVar7 = FUN_107c05cc4(&UNK_10b2158e0);
  if (*(long *)(unaff_x23 + 8) != 0) {
    _free();
    *(undefined1 *)(param_1 + 3) = 2;
    __Unwind_Resume(uVar7);
    *(undefined1 *)(param_1 + 3) = 2;
    uVar7 = __Unwind_Resume();
    FUN_100c9623c(param_1[1],param_1[2]);
  }
  *(undefined1 *)(param_1 + 3) = 2;
  __Unwind_Resume(uVar7);
  auVar16 = FUN_107c05ccc();
  plVar8 = auVar16._0_8_;
  bVar4 = *(byte *)(plVar8 + 3);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      uStack_2b0 = 9;
      auVar17 = __ZN10codex_core5goals55__LT_impl_u20_codex_core__session__session__Session_GT_18goal_runtime_apply17h660a79174465fc8dE
                          (*plVar8 + 0x210,&uStack_2b0);
      *(undefined1 (*) [16])(plVar8 + 1) = auVar17;
LAB_1004f2dd4:
      auVar16 = (**(code **)(auVar17._8_8_ + 0x18))(auVar17._0_8_,auVar16._8_8_);
      ppuVar9 = auVar16._8_8_;
      ppuVar10 = ppuVar9;
      if ((auVar16._0_8_ & 1) == 0) {
        lVar11 = plVar8[1];
        puVar3 = (undefined8 *)plVar8[2];
        pcVar13 = (code *)*puVar3;
        if (pcVar13 != (code *)0x0) {
          (*pcVar13)(lVar11);
          ppuVar10 = extraout_x1;
        }
        if (puVar3[1] != 0) {
          _free(lVar11);
          ppuVar10 = extraout_x1_00;
        }
        if (ppuVar9 != (undefined8 **)0x0) {
          puStack_1f8 = ppuVar9;
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
             (((bRam000000010b629a08 - 1 < 2 ||
               ((bRam000000010b629a08 != 0 &&
                (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
                                   ), cVar5 != '\0')))) &&
              (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
                                  ), (uVar14 & 1) != 0)))) {
            lStack_1b0 = ___ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
                         + 0x30;
            ppuStack_198 = &puStack_1f8;
            pppuStack_190 =
                 (undefined8 ***)
                 __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
            ;
            pppuStack_1a0 = &ppuStack_198;
            pppuStack_1a8 = (undefined8 ***)s__failed_to_prepare_external_goal_108abfd2f;
            pppcStack_1f0 = (char ***)&pppuStack_1a8;
            puStack_1e8 = &UNK_10b208fd0;
            pppcStack_1c0 = (char ***)&pppcStack_1f0;
            ppuStack_1c8 = (undefined8 **)0x1;
            uStack_1b8 = 1;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
                       ,&ppuStack_1c8);
            lVar11 = 
            ___ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              puStack_180 = *(undefined **)
                             (
                             ___ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
                             + 0x20);
              uStack_178 = *(undefined8 *)
                            (
                            ___ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
                            + 0x28);
              pppuStack_188 = (undefined8 ****)0x2;
              puVar1 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_10b3c24c8;
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&pppuStack_188);
              if (iVar6 != 0) {
                lStack_290 = *(long *)(lVar11 + 0x60);
                uStack_288 = *(undefined8 *)(lVar11 + 0x68);
                lStack_2a8 = *(long *)(lVar11 + 0x50);
                uStack_2a0 = *(undefined8 *)(lVar11 + 0x58);
                uStack_2b0 = 1;
                if (lStack_2a8 == 0) {
                  uStack_2b0 = 2;
                }
                uStack_268 = *(undefined4 *)(lVar11 + 8);
                uStack_264 = *(undefined4 *)(lVar11 + 0xc);
                ppuStack_170 = &ppuStack_1c8;
                pcStack_168 = (code *)CONCAT71(pcStack_168._1_7_,1);
                pppuStack_160 = &ppuStack_170;
                puStack_158 = &DAT_1061c2098;
                uStack_298 = 1;
                if (lStack_290 == 0) {
                  uStack_298 = 2;
                }
                puStack_278 = puStack_180;
                pppuStack_280 = pppuStack_188;
                uStack_270 = uStack_178;
                pppuStack_258 = &pppuStack_160;
                pcStack_260 = s__108b39f4f;
                (**(code **)(puVar1 + 0x20))(puVar2,&uStack_2b0);
              }
            }
          }
          else {
            lVar11 = 
            ___ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              puStack_1d8 = *(undefined **)
                             (
                             ___ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
                             + 0x20);
              uStack_1d0 = *(undefined8 *)
                            (
                            ___ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
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
              iVar6 = (**(code **)(puVar1 + 0x18))(puVar2,&pppuStack_1e0);
              if (iVar6 != 0) {
                lStack_1b0 = ___ZN10codex_core12codex_thread11CodexThread30prepare_external_goal_mutation28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hc57ee5dc756fd6eaE
                             + 0x30;
                ppuStack_170 = &puStack_1f8;
                pcStack_168 = 
                __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                ;
                pppuStack_190 = &ppuStack_170;
                ppuStack_198 = (undefined8 **)s__failed_to_prepare_external_goal_108abfd2f;
                pppuStack_1a8 = &ppuStack_198;
                pppuStack_1a0 = (undefined8 ***)&UNK_10b208fd0;
                pppcStack_1c0 = (char ***)&pppuStack_1a8;
                ppuStack_1c8 = (undefined8 **)0x1;
                uStack_1b8 = 1;
                lStack_290 = *(long *)(lVar11 + 0x60);
                uStack_288 = *(undefined8 *)(lVar11 + 0x68);
                lStack_2a8 = *(long *)(lVar11 + 0x50);
                uStack_2a0 = *(undefined8 *)(lVar11 + 0x58);
                uStack_2b0 = 1;
                if (lStack_2a8 == 0) {
                  uStack_2b0 = 2;
                }
                uStack_268 = *(undefined4 *)(lVar11 + 8);
                uStack_264 = *(undefined4 *)(lVar11 + 0xc);
                pppuStack_160 = &ppuStack_1c8;
                puStack_158 = (undefined *)CONCAT71(puStack_158._1_7_,1);
                pppuStack_188 = &pppuStack_160;
                puStack_180 = &DAT_1061c2098;
                uStack_298 = 1;
                if (lStack_290 == 0) {
                  uStack_298 = 2;
                }
                puStack_278 = puStack_1d8;
                pppuStack_280 = pppuStack_1e0;
                uStack_270 = uStack_1d0;
                pppuStack_258 = &pppuStack_188;
                pcStack_260 = s__108b39f4f;
                (**(code **)(puVar1 + 0x20))(puVar2,&uStack_2b0);
              }
            }
          }
          (**(code **)*puStack_1f8)();
          ppuVar10 = extraout_x1_01;
        }
        uVar12 = 1;
      }
      else {
        uVar12 = 3;
      }
      *(undefined1 *)(plVar8 + 3) = uVar12;
      auVar18._4_4_ = 0;
      auVar18._0_4_ = auVar16._0_4_ & 1;
      auVar18._8_8_ = ppuVar10;
      return auVar18;
    }
    FUN_107c05cc0(&UNK_10b215910);
  }
  else if (bVar4 == 3) {
    auVar17 = *(undefined1 (*) [16])(plVar8 + 1);
    goto LAB_1004f2dd4;
  }
  uVar7 = FUN_107c05cc4(&UNK_10b215910);
  (**(code **)*puStack_1f8)();
  *(undefined1 *)(plVar8 + 3) = 2;
  __Unwind_Resume(uVar7);
  auVar16 = FUN_107c05ccc();
  plVar8 = auVar16._0_8_;
  bVar4 = *(byte *)(plVar8 + 3);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      auStack_3a8[0] = 0xc;
      auVar17 = __ZN10codex_core5goals55__LT_impl_u20_codex_core__session__session__Session_GT_18goal_runtime_apply17h660a79174465fc8dE
                          (*plVar8 + 0x210,auStack_3a8);
      *(undefined1 (*) [16])(plVar8 + 1) = auVar17;
LAB_1004f3240:
      auVar16 = (**(code **)(auVar17._8_8_ + 0x18))(auVar17._0_8_,auVar16._8_8_);
      auVar17._8_8_ = auVar16._8_8_;
      uVar14 = auVar16._0_8_;
      if ((uVar14 & 1) == 0) {
        lVar11 = plVar8[1];
        puVar3 = (undefined8 *)plVar8[2];
        pcVar13 = (code *)*puVar3;
        if (pcVar13 != (code *)0x0) {
          (*pcVar13)(lVar11);
        }
        if (puVar3[1] != 0) {
          _free(lVar11);
        }
        *(undefined1 *)(plVar8 + 3) = 1;
      }
      else {
        *(undefined1 *)(plVar8 + 3) = 3;
        uVar14 = 1;
      }
      auVar17._0_8_ = uVar14;
      return auVar17;
    }
    FUN_107c05cc0(&UNK_10b215928);
  }
  else if (bVar4 == 3) {
    auVar17 = *(undefined1 (*) [16])(plVar8 + 1);
    goto LAB_1004f3240;
  }
  uVar7 = FUN_107c05cc4(&UNK_10b215928);
  if (*(long *)(unaff_x23 + 8) != 0) {
    _free();
    *(undefined1 *)(plVar8 + 3) = 2;
    __Unwind_Resume(uVar7);
    *(undefined1 *)(plVar8 + 3) = 2;
    uVar7 = __Unwind_Resume();
    FUN_100c9623c(plVar8[1],plVar8[2]);
  }
  *(undefined1 *)(plVar8 + 3) = 2;
  __Unwind_Resume(uVar7);
  plVar8 = (long *)FUN_107c05ccc();
  bVar4 = *(byte *)(plVar8 + 0x12);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      plVar8[1] = *(long *)(*plVar8 + 0x210) + 0x10;
      *(undefined1 *)(plVar8 + 0x11) = 0;
LAB_1004f3358:
      auVar16 = FUN_10059e730(plVar8 + 1);
      uVar7 = auVar16._8_8_;
      auVar19._0_8_ = auVar16._0_8_;
      if (auVar19._0_8_ == 0) {
        uVar12 = 3;
      }
      else {
        if (((((char)plVar8[0x11] == '\x03') && ((char)plVar8[0x10] == '\x03')) &&
            ((char)plVar8[0xf] == '\x03')) && ((char)plVar8[6] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar8 + 7);
          uVar7 = extraout_x1_02;
          if (plVar8[8] != 0) {
            (**(code **)(plVar8[8] + 0x18))(plVar8[9]);
            uVar7 = extraout_x1_03;
          }
        }
        uVar12 = 1;
      }
      *(undefined1 *)(plVar8 + 0x12) = uVar12;
      auVar19._8_8_ = uVar7;
      return auVar19;
    }
    FUN_107c05cc0(&UNK_10b215988);
  }
  else if (bVar4 == 3) goto LAB_1004f3358;
  FUN_107c05cc4(&UNK_10b215988);
  *(undefined1 *)(plVar8 + 0x12) = 2;
  uVar7 = __Unwind_Resume();
  if (plVar8[8] != 0) {
    (**(code **)(plVar8[8] + 0x18))(plVar8[9]);
  }
  *(undefined1 *)(plVar8 + 0x12) = 2;
  __Unwind_Resume(uVar7);
  auVar16 = FUN_107c05ccc();
  lVar11 = auVar16._8_8_;
  plVar8 = auVar16._0_8_;
  bVar4 = *(byte *)(lVar11 + 0xcd8);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      lVar15 = *(long *)(lVar11 + 0x1e8) + 0x1e8;
      _memcpy(lVar11 + 0x1f0,lVar11,0x1e8);
      *(long *)(lVar11 + 0x3d8) = lVar15;
      *(undefined1 *)(lVar11 + 0xcd0) = 0;
LAB_1004f34bc:
      *(undefined8 *)(lVar11 + 0x3e0) = 0x8000000000000001;
      _memcpy(lVar11 + 0x410,lVar11 + 0x1f0,0x1e8);
      *(long *)(lVar11 + 0x5f8) = lVar15;
      *(undefined1 *)(lVar11 + 0xcc8) = 0;
LAB_1004f34ec:
      auVar16 = FUN_1005c21f8(plVar8,lVar11 + 0x3e0);
      if (*plVar8 == -0x7fffffffffffffdf) {
        uVar12 = 3;
        *(undefined1 *)(lVar11 + 0xcd0) = 3;
        *plVar8 = -0x7fffffffffffffdf;
      }
      else {
        auVar16 = FUN_100e7ab5c(lVar11 + 0x3e0);
        uVar12 = 1;
        *(undefined1 *)(lVar11 + 0xcd0) = 1;
      }
      *(undefined1 *)(lVar11 + 0xcd8) = uVar12;
      return auVar16;
    }
    FUN_107c05cc0(&UNK_10b2159a0);
LAB_1004f3550:
    FUN_107c05cc4(&UNK_10b2159a0);
  }
  else {
    if (bVar4 != 3) goto LAB_1004f3550;
    bVar4 = *(byte *)(lVar11 + 0xcd0);
    if (1 < bVar4) {
      if (bVar4 == 3) goto LAB_1004f34ec;
      FUN_107c05cc4(&UNK_10b218a18);
      goto LAB_1004f3578;
    }
    if (bVar4 == 0) {
      lVar15 = *(long *)(lVar11 + 0x3d8);
      goto LAB_1004f34bc;
    }
  }
  FUN_107c05cc0(&UNK_10b218a18);
LAB_1004f3578:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1004f357c);
  (*pcVar13)();
}

