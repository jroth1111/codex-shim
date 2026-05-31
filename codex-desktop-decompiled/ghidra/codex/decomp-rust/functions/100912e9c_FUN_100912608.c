
/* WARNING: Possible PIC construction at 0x000100912ae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100912aec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100912608(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 uVar12;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined1 auVar13 [16];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  char *pcStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 uStack_1c8;
  undefined8 **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  long **pplStack_180;
  char ***pppcStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  char **ppcStack_160;
  undefined *puStack_158;
  char *pcStack_150;
  long **pplStack_148;
  long *plStack_140;
  undefined *puStack_138;
  long **pplStack_130;
  char ***pppcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char **ppcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long ***ppplStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  char **ppcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  undefined *puStack_68;
  char ***pppcStack_60;
  long **pplStack_58;
  
  bVar5 = *(byte *)(param_1 + 7);
  if (bVar5 < 3) {
    if (bVar5 != 0) {
      if (bVar5 == 1) {
        FUN_107c05cc0(&UNK_10b226360);
      }
      param_2 = FUN_107c05cc4();
      lVar11 = *(long *)param_1[8];
      *(long *)param_1[8] = lVar11 + -1;
      LORelease();
      if (lVar11 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
      }
      *(undefined1 *)(param_1 + 7) = 2;
      __Unwind_Resume(param_2);
      uVar8 = 0x100912e9c;
      puVar10 = (undefined8 *)FUN_107c05ccc();
      goto SUB_100912e9c;
    }
    param_1[3] = *param_1;
    param_1[5] = param_1[2];
    param_1[4] = param_1[1];
    param_1[8] = *(long *)(*param_1 + 0x188) + 0x10;
    param_1[9] = (long)(param_1 + 4);
    *(undefined1 *)(param_1 + 0x17) = 0;
LAB_100912678:
    plVar1 = param_1 + 8;
    auVar13 = FUN_10050ea44(plVar1,param_2);
    lVar11 = auVar13._8_8_;
    if ((auVar13._0_8_ & 1) != 0) {
      uVar8 = 1;
      uVar12 = 3;
      goto LAB_100912d30;
    }
    param_1[6] = lVar11;
    if ((char)param_1[0x17] == '\x03') {
      if (((char)param_1[0x16] == '\x03') && ((char)param_1[0x15] == '\x03')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xd);
        if (param_1[0xe] != 0) {
          (**(code **)(param_1[0xe] + 0x18))(param_1[0xf]);
        }
      }
      lVar11 = param_1[6];
    }
    if (lVar11 != 0) {
      *plVar1 = lVar11;
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
        if (((1 < bRam000000010b627af8 - 1) &&
            ((unaff_x22 = &
                          __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
             , bRam000000010b627af8 == 0 ||
             (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
                                ),
             unaff_x22 = &
                         __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
             , cVar6 == '\0')))) ||
           (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
                              ),
           unaff_x22 = &
                       __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
           , (uVar9 & 1) == 0)) goto LAB_100912878;
        puStack_168 = ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
                      + 0x30;
        plStack_140 = param_1 + 4;
        puStack_138 = &
                      __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
        ;
        pplStack_148 = &plStack_140;
        pcStack_150 = s_thread_was_active__shutting_down_108acb0bb;
        ppcStack_160 = &pcStack_150;
        puStack_158 = &UNK_10b208fd0;
        pppcStack_178 = &ppcStack_160;
        pplStack_180 = (long **)0x1;
        uStack_170 = 1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
                   ,&pplStack_180);
        puVar3 = 
        ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puStack_e0 = *(undefined **)
                        (
                        ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
                        + 0x20);
          uStack_d8 = *(undefined8 *)
                       (
                       ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
                       + 0x28);
          ppcStack_e8 = (char **)0x3;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          unaff_x22 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar4 + 0x18))(unaff_x22,&ppcStack_e8);
          if (iVar7 != 0) {
            lStack_b0 = *(long *)(puVar3 + 0x60);
            uStack_a8 = *(undefined8 *)(puVar3 + 0x68);
            ppplStack_c8 = *(long ****)(puVar3 + 0x50);
            uStack_c0 = *(undefined8 *)(puVar3 + 0x58);
            uStack_d0 = 1;
            if ((long ****)ppplStack_c8 == (long ****)0x0) {
              uStack_d0 = 2;
            }
            uStack_88 = *(undefined4 *)(puVar3 + 8);
            uStack_84 = *(undefined4 *)(puVar3 + 0xc);
            puStack_68 = (undefined *)CONCAT71(puStack_68._1_7_,1);
            pppcStack_60 = (char ***)&ppplStack_70;
            pplStack_58 = (long **)&DAT_1061c2098;
            puStack_b8 = (undefined *)0x1;
            if (lStack_b0 == 0) {
              puStack_b8 = (undefined *)0x2;
            }
            puStack_98 = puStack_e0;
            ppcStack_a0 = ppcStack_e8;
            uStack_90 = uStack_d8;
            ppplStack_78 = (long ***)&pppcStack_60;
            pcStack_80 = s__108b39f4f;
            ppplStack_70 = &pplStack_180;
            (**(code **)(puVar4 + 0x20))(unaff_x22,&uStack_d0);
          }
        }
      }
      else {
LAB_100912878:
        puVar3 = 
        ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppcStack_128 =
               *(char ****)
                (
                ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
                + 0x20);
          uStack_120 = *(undefined8 *)
                        (
                        ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
                        + 0x28);
          pplStack_130 = (long **)0x3;
          puVar4 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar4 + 0x18))(puVar2,&pplStack_130);
          unaff_x22 = puVar3;
          if (iVar7 != 0) {
            puStack_b8 = ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3f79bec57f6d977fE
                         + 0x30;
            ppcStack_e8 = (char **)(param_1 + 4);
            puStack_e0 = &
                         __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
            ;
            pplStack_58 = (long **)&ppcStack_e8;
            pppcStack_60 = (char ***)s_thread_was_active__shutting_down_108acb0bb;
            ppplStack_70 = (long ***)&pppcStack_60;
            puStack_68 = &UNK_10b208fd0;
            ppplStack_c8 = (long ***)&ppplStack_70;
            uStack_d0 = 1;
            uStack_c0 = 1;
            pppcStack_178 = pppcStack_128;
            pplStack_180 = pplStack_130;
            uStack_170 = uStack_120;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (puVar3,puVar2,puVar4,&pplStack_180,&uStack_d0);
          }
        }
      }
      param_1[9] = (long)plVar1;
      *(undefined1 *)(param_1 + 0x17b) = 0;
LAB_10091297c:
      cVar6 = FUN_1008e1a54(param_1 + 9,param_2);
      if (cVar6 == '\x03') {
        uVar8 = 1;
        uVar12 = 4;
        goto LAB_100912d30;
      }
      if ((char)param_1[0x17b] == '\x03') {
        if ((char)param_1[0x17a] == '\x03') {
          FUN_100e7aab8(param_1 + 0x19);
        }
        FUN_100de8a5c(param_1 + 10);
      }
      if (cVar6 == '\x02') {
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
          unaff_x21 = &
                      __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
          ;
          if (((bRam000000010b627b10 - 1 < 2) ||
              ((bRam000000010b627b10 != 0 &&
               (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                                  ), cVar6 != '\0')))) &&
             (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                                ), (uVar9 & 1) != 0)) {
            puStack_b8 = (undefined *)
                         (
                         ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                         + 0x30);
            pplStack_180 = (long **)(param_1 + 4);
            pppcStack_178 =
                 (char ***)
                 &
                 __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
            ;
            ppcStack_e8 = (char **)s_thread___shutdown_timed_out__pro_108acb121;
            pppcStack_60 = &ppcStack_e8;
            pplStack_58 = (long **)&UNK_10b208fd0;
            ppplStack_c8 = (long ***)&pppcStack_60;
            uStack_d0 = 1;
            uStack_c0 = 1;
            puVar10 = &uStack_d0;
            uVar8 = 0x100912aec;
            puStack_e0 = (undefined *)&pplStack_180;
SUB_100912e9c:
            puStack_1b0 = unaff_x22;
            puStack_1a8 = unaff_x21;
            uStack_1a0 = param_2;
            plStack_198 = param_1;
            puStack_190 = &stack0xfffffffffffffff0;
            uStack_188 = uVar8;
            uVar8 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                              (___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                               ,puVar10);
            lVar11 = 
            ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uStack_240 = *(undefined8 *)
                            (
                            ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                            + 0x20);
              uStack_238 = *(undefined8 *)
                            (
                            ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                            + 0x28);
              uStack_248 = 2;
              puVar3 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_10b3c24c8;
              }
              puVar4 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar4 = &UNK_109adfc03;
              }
              uVar8 = (**(code **)(puVar3 + 0x18))(puVar4,&uStack_248);
              if ((int)uVar8 != 0) {
                lStack_210 = *(long *)(lVar11 + 0x60);
                uStack_208 = *(undefined8 *)(lVar11 + 0x68);
                lStack_228 = *(long *)(lVar11 + 0x50);
                uStack_220 = *(undefined8 *)(lVar11 + 0x58);
                uStack_230 = 1;
                if (lStack_228 == 0) {
                  uStack_230 = 2;
                }
                uStack_1e8 = *(undefined4 *)(lVar11 + 8);
                uStack_1e4 = *(undefined4 *)(lVar11 + 0xc);
                uStack_1c8 = 1;
                ppuStack_1c0 = &puStack_1d0;
                puStack_1b8 = &DAT_1061c2098;
                uStack_218 = 1;
                if (lStack_210 == 0) {
                  uStack_218 = 2;
                }
                uStack_1f8 = uStack_240;
                uStack_200 = uStack_248;
                uStack_1f0 = uStack_238;
                pppuStack_1d8 = &ppuStack_1c0;
                pcStack_1e0 = s__108b39f4f;
                puStack_1d0 = puVar10;
                uVar8 = (**(code **)(puVar3 + 0x20))(puVar4,&uStack_230);
              }
            }
            return uVar8;
          }
        }
        lVar11 = 
        ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_f8 = *(undefined8 *)
                       (
                       ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                       + 0x20);
          uStack_f0 = *(undefined8 *)
                       (
                       ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                       + 0x28);
          uStack_100 = 2;
          puVar3 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar3 + 0x18))(puVar4,&uStack_100);
          if (iVar7 != 0) {
            puStack_b8 = (undefined *)
                         (
                         ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hfc6a628fa86bc1c1E
                         + 0x30);
            pplStack_180 = (long **)(param_1 + 4);
            pppcStack_178 =
                 (char ***)
                 &
                 __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
            ;
            ppcStack_e8 = (char **)s_thread___shutdown_timed_out__pro_108acb121;
            pppcStack_60 = &ppcStack_e8;
            pplStack_58 = (long **)&UNK_10b208fd0;
            ppplStack_c8 = (long ***)&pppcStack_60;
            uStack_d0 = 1;
            uStack_c0 = 1;
            puStack_e0 = (undefined *)&pplStack_180;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar11,puVar4,puVar3,&uStack_100,&uStack_d0);
          }
        }
      }
      else if (cVar6 == '\x01') {
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) &&
            ((bRam000000010b627ae0 - 1 < 2 ||
             ((bRam000000010b627ae0 != 0 &&
              (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                                 ), cVar6 != '\0')))))) &&
           (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                              ), (uVar9 & 1) != 0)) {
          puStack_b8 = (undefined *)
                       (
                       ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                       + 0x30);
          pplStack_180 = (long **)(param_1 + 4);
          pppcStack_178 =
               (char ***)
               &
               __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
          ;
          ppcStack_e8 = (char **)s__failed_to_submit_Shutdown_to_th_108acb0e0;
          pppcStack_60 = &ppcStack_e8;
          pplStack_58 = (long **)&UNK_10b208fd0;
          ppplStack_c8 = (long ***)&pppcStack_60;
          uStack_d0 = 1;
          uStack_c0 = 1;
          puStack_e0 = (undefined *)&pplStack_180;
          FUN_100912fd8(&uStack_d0);
        }
        else {
          lVar11 = 
          ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
            uStack_110 = *(undefined8 *)
                          (
                          ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                          + 0x20);
            uStack_108 = *(undefined8 *)
                          (
                          ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                          + 0x28);
            uStack_118 = 1;
            puVar3 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_10b3c24c8;
            }
            puVar4 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar3 + 0x18))(puVar4,&uStack_118);
            if (iVar7 != 0) {
              puStack_b8 = (undefined *)
                           (
                           ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor26prepare_thread_for_archive28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h20f82e2b414a200eE
                           + 0x30);
              pplStack_180 = (long **)(param_1 + 4);
              pppcStack_178 =
                   (char ***)
                   &
                   __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
              ;
              ppcStack_e8 = (char **)s__failed_to_submit_Shutdown_to_th_108acb0e0;
              pppcStack_60 = &ppcStack_e8;
              pplStack_58 = (long **)&UNK_10b208fd0;
              ppplStack_c8 = (long ***)&pppcStack_60;
              uStack_d0 = 1;
              uStack_c0 = 1;
              puStack_e0 = (undefined *)&pplStack_180;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar11,puVar4,puVar3,&uStack_118,&uStack_d0);
            }
          }
        }
      }
      lVar11 = *(long *)param_1[8];
      *(long *)param_1[8] = lVar11 + -1;
      LORelease();
      if (lVar11 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E();
      }
    }
    param_1[8] = param_1[3];
    param_1[10] = param_1[5];
    param_1[9] = param_1[4];
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    if (bVar5 == 3) goto LAB_100912678;
    if (bVar5 == 4) goto LAB_10091297c;
  }
  uVar9 = FUN_100912194(param_1 + 8,param_2);
  if ((uVar9 & 1) == 0) {
    func_0x000100d54f30(param_1 + 8);
    uVar8 = 0;
    uVar12 = 1;
  }
  else {
    uVar8 = 1;
    uVar12 = 5;
  }
LAB_100912d30:
  *(undefined1 *)(param_1 + 7) = uVar12;
  return uVar8;
}

