
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10168efc0(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  char ***pppcVar9;
  code *pcVar10;
  undefined8 *puVar11;
  char cVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  char *pcVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 extraout_x1;
  undefined1 uVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  byte bVar25;
  ulong *unaff_x21;
  long lVar26;
  long **unaff_x23;
  char cVar27;
  long **unaff_x26;
  long **pplVar28;
  ulong in_xzr;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auStack_2780 [64];
  long lStack_2740;
  long lStack_2738;
  long lStack_2730;
  undefined8 uStack_2728;
  undefined8 uStack_2720;
  undefined8 uStack_2718;
  undefined8 uStack_2710;
  undefined8 uStack_2708;
  undefined8 uStack_2700;
  undefined8 uStack_26f8;
  undefined8 uStack_26f0;
  undefined8 uStack_26e8;
  undefined8 uStack_26e0;
  undefined8 uStack_26d8;
  undefined8 uStack_26d0;
  undefined8 uStack_26c8;
  undefined8 uStack_26c0;
  undefined8 uStack_26b8;
  undefined8 uStack_26b0;
  undefined8 uStack_26a8;
  undefined8 uStack_26a0;
  undefined8 uStack_2698;
  undefined8 uStack_2690;
  undefined8 uStack_2688;
  undefined8 uStack_2680;
  undefined8 uStack_2678;
  undefined8 uStack_2670;
  undefined8 uStack_2668;
  undefined8 uStack_2660;
  undefined8 uStack_2658;
  undefined8 uStack_2650;
  undefined8 uStack_2648;
  undefined8 uStack_2640;
  undefined8 uStack_2638;
  ulong auStack_2630 [2];
  undefined1 auStack_2620 [504];
  long *plStack_2428;
  undefined *puStack_2420;
  undefined8 uStack_2418;
  undefined8 uStack_2410;
  undefined8 uStack_2408;
  undefined8 uStack_2400;
  undefined8 uStack_23f8;
  undefined8 uStack_23f0;
  undefined8 uStack_23e8;
  undefined8 uStack_23e0;
  undefined8 uStack_23d8;
  undefined8 uStack_23d0;
  undefined8 uStack_23c8;
  undefined8 uStack_23c0;
  undefined8 uStack_23b8;
  undefined8 uStack_23b0;
  undefined8 uStack_23a8;
  undefined8 uStack_23a0;
  undefined8 uStack_2398;
  undefined8 uStack_2390;
  undefined8 uStack_2388;
  undefined8 uStack_2380;
  undefined8 uStack_2378;
  undefined8 uStack_2370;
  undefined8 uStack_2368;
  undefined8 uStack_2360;
  undefined8 uStack_2358;
  undefined8 uStack_2350;
  undefined8 uStack_2348;
  undefined8 uStack_2340;
  undefined8 uStack_2338;
  undefined8 uStack_2330;
  undefined8 uStack_2328;
  undefined8 uStack_2320;
  undefined8 uStack_2318;
  char *pcStack_2308;
  char **ppcStack_2300;
  char **ppcStack_22f8;
  undefined1 auStack_22f0 [504];
  undefined8 uStack_20f8;
  undefined8 uStack_20f0;
  undefined8 uStack_20e8;
  undefined1 uStack_1c60;
  char *pcStack_1c58;
  long **pplStack_1c50;
  undefined1 auStack_1c48 [1688];
  long *plStack_15b0;
  undefined *puStack_15a8;
  undefined8 uStack_15a0;
  undefined8 auStack_1080 [48];
  long **pplStack_f00;
  char ***pppcStack_ef8;
  undefined *puStack_ef0;
  long lStack_ee8;
  long *plStack_ee0;
  long **pplStack_ed8;
  undefined4 uStack_ed0;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  long lStack_810;
  long lStack_808;
  undefined8 uStack_7b0;
  undefined *puStack_7a8;
  long *plStack_110;
  char *apcStack_101 [16];
  
  bVar25 = *(byte *)(param_1 + 2);
  if (bVar25 < 3) {
    if (bVar25 != 0) {
      if (bVar25 == 1) {
        func_0x000108a07af4(&UNK_10b2517a0);
      }
      func_0x000108a07b10();
      *(undefined1 *)(param_1 + 2) = 2;
      uVar15 = __Unwind_Resume();
      FUN_100d1e090(param_1 + 3);
      *(undefined1 *)(param_1 + 2) = 2;
      __Unwind_Resume(uVar15);
      auVar30 = func_0x000108a07bc4();
      uVar15 = auVar30._8_8_;
      lVar22 = auVar30._0_8_;
      puVar11 = auStack_1080;
      puVar16 = auStack_1080;
      while ((long)auStack_2780 < (long)puVar11) {
        *puVar16 = 0;
        puVar11 = puVar16 + -0x200;
        puVar16 = puVar16 + -0x200;
      }
      bVar25 = *(byte *)(lVar22 + 0x480);
      if (bVar25 < 3) {
        if (bVar25 != 0) {
          if (bVar25 == 1) {
            func_0x000108a07af4(&UNK_10b2517b8);
          }
          func_0x000108a07b10();
LAB_10168fef4:
          FUN_100d79108(unaff_x23 + 2);
          uVar21 = 0;
          *unaff_x21 = *unaff_x21 - 1;
LAB_10168f870:
          *(undefined1 *)(unaff_x26 + 0x1cf) = uVar21;
          pplStack_f00 = &plStack_15b0;
          pppcStack_ef8 =
               (char ***)
               &
               __ZN78__LT_tokio__runtime__handle__TryCurrentError_u20_as_u20_core__fmt__Display_GT_3fmt17he04e046082d0b96dE
          ;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__108b1bd74,&pplStack_f00,&UNK_10b2517d0);
          goto LAB_10168ffb0;
        }
        *(undefined2 *)(lVar22 + 0x481) = 0;
        lVar26 = *(long *)(lVar22 + 0x1a0);
        *(long *)(lVar22 + 0x1b8) = lVar26;
        *(undefined8 *)(lVar22 + 0x1c8) = *(undefined8 *)(lVar22 + 0x1b0);
        *(undefined8 *)(lVar22 + 0x1c0) = *(undefined8 *)(lVar22 + 0x1a8);
        *(undefined1 *)(lVar22 + 0x483) = 1;
        _memcpy(lVar22 + 0x1d0,lVar22,0x1a0);
        if ((*(char *)(lVar26 + 0x8e1d) != '\x01') ||
           (*(long *)(lVar26 + 0x8e26) != *(long *)(lVar22 + 0x1c8) ||
            *(long *)(lVar26 + 0x8e1e) != *(long *)(lVar22 + 0x1c0))) {
          *(undefined8 *)(lVar22 + 0x490) = *(undefined8 *)(lVar22 + 0x1b0);
          *(undefined8 *)(lVar22 + 0x488) = *(undefined8 *)(lVar22 + 0x1a8);
          *(long *)(lVar22 + 0x510) = lVar26;
          *(long *)(lVar22 + 0x518) = lVar22 + 0x1d0;
          *(undefined1 *)(lVar22 + 0x521) = 0;
          goto LAB_10168f290;
        }
        *(undefined1 *)(lVar22 + 0x482) = 1;
        *(undefined8 *)(lVar22 + 0x370) = 0x8000000000000006;
LAB_10168f31c:
        pppcStack_ef8 = *(char ****)(lVar22 + 0x1c8);
        pplStack_f00 = *(long ***)(lVar22 + 0x1c0);
        puVar16 = (undefined8 *)func_0x0001054d2578(lVar26,&pplStack_f00);
        plVar23 = (long *)*puVar16;
        plVar23[0x3e] = plVar23[0x3e] + 1;
        lVar26 = *plVar23;
        *plVar23 = lVar26 + 1;
        if (lVar26 < 0) {
LAB_10168ffb0:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10168ffb4);
          (*pcVar10)();
        }
        plVar24 = (long *)puVar16[1];
        lVar26 = *plVar24;
        *plVar24 = lVar26 + 1;
        if (lVar26 < 0) goto LAB_10168ffb0;
        *(undefined1 *)(lVar22 + 0x481) = 1;
        *(long **)(lVar22 + 0x470) = plVar23;
        *(long **)(lVar22 + 0x478) = plVar24;
        *(long **)(lVar22 + 0x488) = plVar24 + 2;
        *(undefined1 *)(lVar22 + 0x4f8) = 0;
LAB_10168f374:
        pcVar17 = (char *)FUN_100fd3e50(lVar22 + 0x488,uVar15);
        if (pcVar17 == (char *)0x0) {
          uVar21 = 4;
          uVar20 = 1;
          goto LAB_10168fe70;
        }
        if (((*(char *)(lVar22 + 0x4f8) == '\x03') && (*(char *)(lVar22 + 0x4f0) == '\x03')) &&
           (*(char *)(lVar22 + 0x4a8) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (lVar22 + 0x4b0);
          if (*(long *)(lVar22 + 0x4b8) != 0) {
            (**(code **)(*(long *)(lVar22 + 0x4b8) + 0x18))(*(undefined8 *)(lVar22 + 0x4c0));
          }
        }
        FUN_10151ce6c(&pplStack_f00,lVar22 + 0x1d0);
        __ZN9codex_tui3app13thread_events16ThreadEventStore12push_request17he8bacb8d9c246dbaE
                  (pcVar17 + 0x28,&pplStack_f00);
        if (*(long *)(pcVar17 + 0x598) == 0) {
          cVar27 = '\x06';
          if ((*(long *)(pcVar17 + 0x448) != 0 || *(long *)(pcVar17 + 0x4a8) != 0) ||
              (*(long *)(pcVar17 + 0x508) != 0 || *(long *)(pcVar17 + 0x538) != 0)) {
            cVar27 = '\x01';
          }
          bVar25 = pcVar17[0x618];
          if (*pcVar17 != '\0') goto LAB_10168f9d4;
          *pcVar17 = '\x01';
        }
        else {
          cVar27 = '\0';
          bVar25 = pcVar17[0x618];
          if (*pcVar17 == '\0') {
            *pcVar17 = '\x01';
          }
          else {
LAB_10168f9d4:
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar17,extraout_x1,1000000000);
          }
        }
        FUN_1060fa678(pcVar17,1,pcVar17);
        cVar6 = (&UNK_108cdb768)
                [*(long *)(lVar22 + 0x1d0) + 0x8000000000000001U & *(long *)(lVar22 + 0x1d0) >> 0x3f
                ];
        if ((bVar25 & 1) != 0) {
          unaff_x26 = &plStack_2428;
          *(undefined1 *)(lVar22 + 0x483) = 0;
          _memcpy(&plStack_15b0,lVar22 + 0x1d0,0x1a0);
          lVar26 = *(long *)(lVar22 + 0x470);
          uVar14 = *(ulong *)(lVar26 + 0x1e0);
LAB_10168f4b8:
          if ((uVar14 & 1) == 0) {
            uVar8 = uVar14 - 2;
            if (1 < uVar14) goto code_r0x00010168f4c4;
            _memcpy(auStack_2620,&plStack_15b0,0x1a0);
            auStack_2630[1] = 0x8000000000000041;
            auStack_2630[0] = 0;
            *(undefined1 *)(lVar22 + 0x481) = 0;
            uStack_20f8 = *(undefined8 *)(lVar22 + 0x470);
            pcVar17 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
            do {
              ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = pcVar17;
              pcVar17 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
            } while (___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == (char *)0x0)
            ;
            pcStack_2308 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
            ppcStack_2300 = &pcStack_2308;
            ppcStack_22f8 = apcStack_101;
            ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE =
                 ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
            _memcpy(auStack_22f0,(ulong)auStack_2630 | 8,0x1f8);
            uStack_20e8 = *(undefined8 *)(lVar22 + 0x1c8);
            uStack_20f0 = *(undefined8 *)(lVar22 + 0x1c0);
            uStack_1c60 = 0;
            unaff_x21 = (ulong *)(*
                                 ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                                 )();
            if ((char)unaff_x21[9] != '\x01') {
              if ((char)unaff_x21[9] != '\x02') {
                __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                          (unaff_x21,&DAT_100c35d48);
                *(undefined1 *)(unaff_x21 + 9) = 1;
                goto LAB_10168fa00;
              }
              FUN_100d79108(auStack_22f0);
              uVar21 = 1;
              goto LAB_10168f870;
            }
LAB_10168fa00:
            _memcpy(&pcStack_1c58,&ppcStack_2300,0x6a8);
            if (0x7ffffffffffffffe < *unaff_x21) {
              func_0x000108a07858(&UNK_10b2435a0);
              goto LAB_10168ffb0;
            }
            *unaff_x21 = *unaff_x21 + 1;
            uVar14 = unaff_x21[1];
            unaff_x23 = &plStack_15b0;
            _memcpy(&plStack_15b0,&ppcStack_2300,0x6a8);
            if (uVar14 == 2) goto LAB_10168fef4;
            pplVar28 = (long **)*plStack_15b0;
            if ((uVar14 & 1) == 0) {
              plVar23 = (long *)unaff_x21[2];
              lVar26 = *plVar23;
              *plVar23 = lVar26 + 1;
              if (lVar26 < 0) goto LAB_10168ffb0;
              plVar24 = (long *)plVar23[0x5e];
              if (plVar24 == (long *)0x0) {
                lStack_2740 = 0;
                lStack_2738 = 0;
              }
              else {
                lVar26 = *plVar24;
                *plVar24 = lVar26 + 1;
                if (lVar26 < 0) goto LAB_10168ffb0;
                lStack_2738 = plVar23[0x5f];
                lStack_2740 = plVar23[0x5e];
              }
              _memcpy((long)&uStack_7b0 + 4,auStack_1c48,0x698);
              pplStack_f00 = (long **)0xcc;
              pppcStack_ef8 = (char ***)0x0;
              puStack_ef0 = &UNK_10b240a50;
              lStack_ee8 = 0;
              uStack_ed0 = 0;
              plStack_ee0 = plVar23;
              pplStack_ed8 = pplVar28;
              _memcpy((ulong)&pplStack_f00 | 0x34,&uStack_7b0,0x69c);
              uStack_830 = 0;
              uStack_820 = 0;
              uStack_828 = 0;
              lStack_808 = lStack_2738;
              lStack_810 = lStack_2740;
              plStack_110 = (long *)0x0;
              iVar13 = _posix_memalign(&plStack_110,0x80,0x700);
              plVar24 = plStack_110;
              if ((iVar13 != 0) || (plStack_110 == (long *)0x0)) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x700);
                goto LAB_10168ffb0;
              }
              _memcpy(plStack_110,&pplStack_f00,0x700);
              lVar26 = FUN_1010e2658(plVar23 + 0x2d,plVar24,plVar24);
              pplStack_f00 = pplVar28;
              if (plVar23[0x5c] != 0) {
                (**(code **)(plVar23[0x5d] + 0x28))
                          (plVar23[0x5c] +
                           (*(long *)(plVar23[0x5d] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                           &pplStack_f00);
              }
              if (lVar26 != 0) {
                __ZN5tokio7runtime9scheduler14current_thread134__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__current_thread__Handle_GT__GT_8schedule17h0b24df3c31891eb5E
                          (unaff_x21 + 2,lVar26);
              }
            }
            else {
              plVar23 = (long *)unaff_x21[2];
              lVar26 = *plVar23;
              *plVar23 = lVar26 + 1;
              if (lVar26 < 0) goto LAB_10168ffb0;
              plVar24 = (long *)plVar23[0x4a];
              if (plVar24 == (long *)0x0) {
                lStack_2740 = 0;
                lStack_2738 = 0;
              }
              else {
                lVar26 = *plVar24;
                *plVar24 = lVar26 + 1;
                if (lVar26 < 0) goto LAB_10168ffb0;
                lStack_2738 = plVar23[0x4b];
                lStack_2740 = plVar23[0x4a];
              }
              _memcpy((long)&uStack_7b0 + 4,auStack_1c48,0x698);
              pplStack_f00 = (long **)0xcc;
              pppcStack_ef8 = (char ***)0x0;
              puStack_ef0 = &UNK_10b23d6c0;
              lStack_ee8 = 0;
              uStack_ed0 = 0;
              plStack_ee0 = plVar23;
              pplStack_ed8 = pplVar28;
              _memcpy((ulong)&pplStack_f00 | 0x34,&uStack_7b0,0x69c);
              uStack_830 = 0;
              uStack_820 = 0;
              uStack_828 = 0;
              lStack_808 = lStack_2738;
              lStack_810 = lStack_2740;
              plStack_110 = (long *)0x0;
              iVar13 = _posix_memalign(&plStack_110,0x80,0x700);
              plVar24 = plStack_110;
              if ((iVar13 != 0) || (plStack_110 == (long *)0x0)) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x700);
                goto LAB_10168ffb0;
              }
              _memcpy(plStack_110,&pplStack_f00,0x700);
              lVar26 = FUN_1010e2658(plVar23 + 0x11,plVar24,plVar24);
              pplStack_f00 = pplVar28;
              if (plVar23[0x48] != 0) {
                (**(code **)(plVar23[0x49] + 0x28))
                          (plVar23[0x48] +
                           (*(long *)(plVar23[0x49] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                           &pplStack_f00);
              }
              if (lVar26 != 0) {
                FUN_10610fa38(plVar23 + 2,lVar26,0);
              }
            }
            *unaff_x21 = *unaff_x21 - 1;
            if (*plVar24 == 0xcc) {
              *plVar24 = 0x84;
            }
            else {
              (**(code **)(plVar24[2] + 0x20))(plVar24);
            }
          }
          else {
            _memcpy(auStack_2620,&plStack_15b0,0x1a0);
            auStack_2630[1] = 0x8000000000000041;
            auStack_2630[0] = 1;
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                ((bRam000000010b630cc8 - 1 < 2 ||
                 ((bRam000000010b630cc8 != 0 &&
                  (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN9codex_tui3app14thread_routing37__LT_impl_u20_codex_tui__app__App_GT_22enqueue_thread_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c3dac5663f24744E
                                      ), cVar12 != '\0')))))) &&
               (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN9codex_tui3app14thread_routing37__LT_impl_u20_codex_tui__app__App_GT_22enqueue_thread_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c3dac5663f24744E
                                   ), (uVar14 & 1) != 0)) {
              lStack_ee8 = ___ZN9codex_tui3app14thread_routing37__LT_impl_u20_codex_tui__app__App_GT_22enqueue_thread_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c3dac5663f24744E
                           + 0x30;
              plStack_15b0 = (long *)(lVar22 + 0x1c0);
              puStack_15a8 = &
                             __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
              ;
              pplStack_1c50 = &plStack_15b0;
              pcStack_1c58 = s_thread_event_channel_closed_108adadad;
              ppcStack_2300 = &pcStack_1c58;
              ppcStack_22f8 = (char **)&UNK_10b208fd0;
              pppcStack_ef8 = &ppcStack_2300;
              pplStack_f00 = (long **)0x1;
              puStack_ef0 = (undefined *)0x1;
              FUN_1016907cc(&pplStack_f00);
            }
            else {
              lVar26 = 
              ___ZN9codex_tui3app14thread_routing37__LT_impl_u20_codex_tui__app__App_GT_22enqueue_thread_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c3dac5663f24744E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puStack_2420 = *(undefined **)
                                (
                                ___ZN9codex_tui3app14thread_routing37__LT_impl_u20_codex_tui__app__App_GT_22enqueue_thread_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c3dac5663f24744E
                                + 0x20);
                uStack_2418 = *(undefined8 *)
                               (
                               ___ZN9codex_tui3app14thread_routing37__LT_impl_u20_codex_tui__app__App_GT_22enqueue_thread_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c3dac5663f24744E
                               + 0x28);
                plStack_2428 = (long *)0x2;
                puVar3 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar3 = &UNK_10b3c24c8;
                }
                puVar4 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_109adfc03;
                }
                iVar13 = (**(code **)(puVar3 + 0x18))(puVar4,&plStack_2428);
                if (iVar13 != 0) {
                  lStack_ee8 = ___ZN9codex_tui3app14thread_routing37__LT_impl_u20_codex_tui__app__App_GT_22enqueue_thread_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4c3dac5663f24744E
                               + 0x30;
                  pcStack_1c58 = (char *)(lVar22 + 0x1c0);
                  pplStack_1c50 =
                       (long **)&
                                __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
                  ;
                  ppcStack_22f8 = &pcStack_1c58;
                  ppcStack_2300 = (char **)s_thread_event_channel_closed_108adadad;
                  uStack_7b0 = &ppcStack_2300;
                  puStack_7a8 = &UNK_10b208fd0;
                  pppcStack_ef8 = (char ***)&uStack_7b0;
                  pplStack_f00 = (long **)0x1;
                  puStack_ef0 = (undefined *)0x1;
                  puStack_15a8 = puStack_2420;
                  plStack_15b0 = plStack_2428;
                  uStack_15a0 = uStack_2418;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar26,puVar4,puVar3,&plStack_15b0,&pplStack_f00);
                }
              }
            }
          }
          goto LAB_10168fd0c;
        }
        lVar26 = *(long *)(lVar22 + 0x1b8);
        pppcStack_ef8 = *(char ****)(lVar26 + 0x544a);
        pplStack_f00 = *(long ***)(lVar26 + 0x5442);
        if ((*(byte *)(lVar26 + 0x8e1d) & 1) == 0) {
          if ((*(byte *)(lVar26 + 0x5441) & 1) != 0) goto LAB_10168f5c4;
        }
        else {
          pppcStack_ef8 = *(char ****)(lVar26 + 0x8e26);
          pplStack_f00 = *(long ***)(lVar26 + 0x8e1e);
LAB_10168f5c4:
          pppcVar9 = pppcStack_ef8;
          pplVar28 = pplStack_f00;
          if (*(long *)(lVar26 + 0x8c80) != 0) {
            uVar19 = FUN_1051bc3f8(*(undefined8 *)(lVar26 + 0x8c88),*(undefined8 *)(lVar26 + 0x8c90)
                                   ,&pplStack_f00);
            lVar18 = 0;
            lVar5 = *(long *)(lVar26 + 0x8c68);
            uVar8 = *(ulong *)(lVar26 + 0x8c70);
            bVar25 = (byte)(uVar19 >> 0x39);
            uVar19 = uVar19 & uVar8;
            uVar20 = *(undefined8 *)(lVar5 + uVar19);
            uVar14 = CONCAT17(-((byte)((ulong)uVar20 >> 0x38) == bVar25),
                              CONCAT16(-((byte)((ulong)uVar20 >> 0x30) == bVar25),
                                       CONCAT15(-((byte)((ulong)uVar20 >> 0x28) == bVar25),
                                                CONCAT14(-((byte)((ulong)uVar20 >> 0x20) == bVar25),
                                                         CONCAT13(-((byte)((ulong)uVar20 >> 0x18) ==
                                                                   bVar25),CONCAT12(-((byte)((ulong)
                                                  uVar20 >> 0x10) == bVar25),
                                                  CONCAT11(-((byte)((ulong)uVar20 >> 8) == bVar25),
                                                           -((byte)uVar20 == bVar25)))))))) &
                     0x8080808080808080;
            while( true ) {
              for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
                uVar7 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                        (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
                plVar23 = (long *)(lVar5 + -0x21 +
                                  (uVar19 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) &
                                  uVar8) * -0x21);
                if (pppcVar9 == (char ***)plVar23[1] && pplVar28 == (long **)*plVar23)
                goto LAB_10168fd1c;
              }
              bVar29 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar20 >> 0x38) == -1),
                                           CONCAT16(-((char)((ulong)uVar20 >> 0x30) == -1),
                                                    CONCAT15(-((char)((ulong)uVar20 >> 0x28) == -1),
                                                             CONCAT14(-((char)((ulong)uVar20 >> 0x20
                                                                              ) == -1),
                                                                      CONCAT13(-((char)((ulong)
                                                  uVar20 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar20 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar20 >> 8) ==
                                                                     -1),-((char)uVar20 == -1)))))))
                                          ),1);
              if ((bVar29 & 1) != 0) break;
              lVar18 = lVar18 + 8;
              uVar19 = uVar19 + lVar18 & uVar8;
              uVar20 = *(undefined8 *)(lVar5 + uVar19);
              uVar14 = CONCAT17(-((byte)((ulong)uVar20 >> 0x38) == bVar25),
                                CONCAT16(-((byte)((ulong)uVar20 >> 0x30) == bVar25),
                                         CONCAT15(-((byte)((ulong)uVar20 >> 0x28) == bVar25),
                                                  CONCAT14(-((byte)((ulong)uVar20 >> 0x20) == bVar25
                                                            ),CONCAT13(-((byte)((ulong)uVar20 >>
                                                                               0x18) == bVar25),
                                                                       CONCAT12(-((byte)((ulong)
                                                  uVar20 >> 0x10) == bVar25),
                                                  CONCAT11(-((byte)((ulong)uVar20 >> 8) == bVar25),
                                                           -((byte)uVar20 == bVar25)))))))) &
                       0x8080808080808080;
            }
          }
        }
        if (*(long *)(lVar22 + 0x370) != -0x7ffffffffffffffa) {
          *(undefined1 *)(lVar22 + 0x482) = 0;
          uStack_2348 = *(undefined8 *)(lVar22 + 0x438);
          uStack_2350 = *(undefined8 *)(lVar22 + 0x430);
          uStack_2338 = *(undefined8 *)(lVar22 + 0x448);
          uStack_2340 = *(undefined8 *)(lVar22 + 0x440);
          uStack_2328 = *(undefined8 *)(lVar22 + 0x458);
          uStack_2330 = *(undefined8 *)(lVar22 + 0x450);
          uStack_2318 = *(undefined8 *)(lVar22 + 0x468);
          uStack_2320 = *(undefined8 *)(lVar22 + 0x460);
          uStack_2388 = *(undefined8 *)(lVar22 + 0x3f8);
          uStack_2390 = *(undefined8 *)(lVar22 + 0x3f0);
          uStack_2378 = *(undefined8 *)(lVar22 + 0x408);
          uStack_2380 = *(undefined8 *)(lVar22 + 0x400);
          uStack_2368 = *(undefined8 *)(lVar22 + 0x418);
          uStack_2370 = *(undefined8 *)(lVar22 + 0x410);
          uStack_2358 = *(undefined8 *)(lVar22 + 0x428);
          uStack_2360 = *(undefined8 *)(lVar22 + 0x420);
          uStack_23c8 = *(undefined8 *)(lVar22 + 0x3b8);
          uStack_23d0 = *(undefined8 *)(lVar22 + 0x3b0);
          uStack_23b8 = *(undefined8 *)(lVar22 + 0x3c8);
          uStack_23c0 = *(undefined8 *)(lVar22 + 0x3c0);
          uStack_23a8 = *(undefined8 *)(lVar22 + 0x3d8);
          uStack_23b0 = *(undefined8 *)(lVar22 + 0x3d0);
          uStack_2398 = *(undefined8 *)(lVar22 + 1000);
          uStack_23a0 = *(undefined8 *)(lVar22 + 0x3e0);
          uStack_2408 = *(undefined8 *)(lVar22 + 0x378);
          uStack_2410 = *(undefined8 *)(lVar22 + 0x370);
          uStack_23f8 = *(undefined8 *)(lVar22 + 0x388);
          uStack_2400 = *(undefined8 *)(lVar22 + 0x380);
          uStack_23e8 = *(undefined8 *)(lVar22 + 0x398);
          uStack_23f0 = *(undefined8 *)(lVar22 + 0x390);
          uStack_23d8 = *(undefined8 *)(lVar22 + 0x3a8);
          uStack_23e0 = *(undefined8 *)(lVar22 + 0x3a0);
          __ZN9codex_tui3app14thread_routing37__LT_impl_u20_codex_tui__app__App_GT_31push_thread_interactive_request17hd22faaba94dddf74E
                    (lVar26,&uStack_2410);
        }
        goto LAB_10168fd1c;
      }
      if (bVar25 == 3) {
LAB_10168f290:
        func_0x0001016983ec(&lStack_2730,lVar22 + 0x488,uVar15);
        uVar20 = 1;
        if (lStack_2730 == -0x7ffffffffffffff9) {
          uVar21 = 3;
          goto LAB_10168fe70;
        }
        *(undefined1 *)(lVar22 + 0x482) = 1;
        *(undefined8 *)(lVar22 + 0x438) = uStack_2668;
        *(undefined8 *)(lVar22 + 0x430) = uStack_2670;
        *(undefined8 *)(lVar22 + 0x448) = uStack_2658;
        *(undefined8 *)(lVar22 + 0x440) = uStack_2660;
        *(undefined8 *)(lVar22 + 0x458) = uStack_2648;
        *(undefined8 *)(lVar22 + 0x450) = uStack_2650;
        *(undefined8 *)(lVar22 + 0x468) = uStack_2638;
        *(undefined8 *)(lVar22 + 0x460) = uStack_2640;
        *(undefined8 *)(lVar22 + 0x3f8) = uStack_26a8;
        *(undefined8 *)(lVar22 + 0x3f0) = uStack_26b0;
        *(undefined8 *)(lVar22 + 0x408) = uStack_2698;
        *(undefined8 *)(lVar22 + 0x400) = uStack_26a0;
        *(undefined8 *)(lVar22 + 0x418) = uStack_2688;
        *(undefined8 *)(lVar22 + 0x410) = uStack_2690;
        *(undefined8 *)(lVar22 + 0x428) = uStack_2678;
        *(undefined8 *)(lVar22 + 0x420) = uStack_2680;
        *(undefined8 *)(lVar22 + 0x3b8) = uStack_26e8;
        *(undefined8 *)(lVar22 + 0x3b0) = uStack_26f0;
        *(undefined8 *)(lVar22 + 0x3c8) = uStack_26d8;
        *(undefined8 *)(lVar22 + 0x3c0) = uStack_26e0;
        *(undefined8 *)(lVar22 + 0x3d8) = uStack_26c8;
        *(undefined8 *)(lVar22 + 0x3d0) = uStack_26d0;
        *(undefined8 *)(lVar22 + 1000) = uStack_26b8;
        *(undefined8 *)(lVar22 + 0x3e0) = uStack_26c0;
        *(undefined8 *)(lVar22 + 0x378) = uStack_2728;
        *(long *)(lVar22 + 0x370) = lStack_2730;
        *(undefined8 *)(lVar22 + 0x388) = uStack_2718;
        *(undefined8 *)(lVar22 + 0x380) = uStack_2720;
        *(undefined8 *)(lVar22 + 0x398) = uStack_2708;
        *(undefined8 *)(lVar22 + 0x390) = uStack_2710;
        *(undefined8 *)(lVar22 + 0x3a8) = uStack_26f8;
        *(undefined8 *)(lVar22 + 0x3a0) = uStack_2700;
        FUN_100d612a4(lVar22 + 0x488);
        lVar26 = *(long *)(lVar22 + 0x1b8);
        goto LAB_10168f31c;
      }
      if (bVar25 == 4) goto LAB_10168f374;
      goto LAB_10168fd50;
    }
    lVar22 = *param_1;
    param_1[1] = lVar22;
    bVar25 = *(byte *)(lVar22 + 0x8e1d);
    *(undefined1 *)(lVar22 + 0x8e1d) = 0;
    if ((bVar25 & 1) != 0) {
      lVar26 = *(long *)(lVar22 + 0x8e1e);
      param_1[4] = *(long *)(lVar22 + 0x8e26);
      param_1[3] = lVar26;
      param_1[0x16] = param_1[1];
      *(undefined2 *)((long)param_1 + 0xb9) = 0;
      goto LAB_10168f020;
    }
LAB_10168f088:
    lVar22 = param_1[1];
    if (*(long *)(lVar22 + 0x8e00) != 0) {
      FUN_100cd65bc(lVar22 + 0x8e00);
      lVar22 = param_1[1];
    }
    *(undefined8 *)(lVar22 + 0x8e00) = 0;
    param_1[0x20] = param_1[1];
    *(undefined1 *)((long)param_1 + 0x11b) = 0;
  }
  else if (bVar25 == 3) {
LAB_10168f020:
    iVar13 = FUN_10168ed68(param_1 + 3,param_2);
    if (iVar13 != 0) {
      uVar15 = 1;
      uVar21 = 3;
      goto LAB_10168f0e4;
    }
    if ((((*(char *)((long)param_1 + 0xb9) == '\x03') && ((char)param_1[0x15] == '\x03')) &&
        ((char)param_1[0x14] == '\x03')) && ((char)param_1[0xb] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0xc);
      if (param_1[0xd] != 0) {
        (**(code **)(param_1[0xd] + 0x18))(param_1[0xe]);
      }
    }
    goto LAB_10168f088;
  }
  uVar14 = FUN_101696164(param_1 + 3,param_2);
  if ((uVar14 & 1) == 0) {
    FUN_100d51964(param_1 + 3);
    uVar15 = 0;
    uVar21 = 1;
  }
  else {
    uVar15 = 1;
    uVar21 = 4;
  }
LAB_10168f0e4:
  *(undefined1 *)(param_1 + 2) = uVar21;
  return uVar15;
code_r0x00010168f4c4:
  uVar19 = *(ulong *)(lVar26 + 0x1e0);
  bVar2 = uVar19 == uVar14;
  uVar14 = uVar19;
  if (bVar2) goto code_r0x00010168f4cc;
  goto LAB_10168f4b8;
code_r0x00010168f4cc:
  *(ulong *)(lVar26 + 0x1e0) = uVar8;
  pplStack_f00 = (long **)0x8000000000000041;
  _memcpy(&pppcStack_ef8,&plStack_15b0,0x1a0);
  LOAcquire();
  uVar14 = *(ulong *)(lVar26 + 0x88);
  *(ulong *)(lVar26 + 0x88) = uVar14 + 1;
  lVar18 = FUN_100fca4a4(lVar26 + 0x80,uVar14);
  _memcpy(lVar18 + (uVar14 & 0x1f) * 0x1f8,&pplStack_f00,0x1f8);
  *(ulong *)(lVar18 + 0x3f10) = *(ulong *)(lVar18 + 0x3f10) | 1L << (uVar14 & 0x1f);
  LORelease();
  puVar1 = (ulong *)(lVar26 + 0x110);
  LOAcquire();
  uVar14 = *puVar1;
  *puVar1 = uVar14 | 2;
  LORelease();
  if (uVar14 == 0) {
    lVar18 = *(long *)(lVar26 + 0x100);
    *(undefined8 *)(lVar26 + 0x100) = 0;
    *puVar1 = in_xzr;
    LORelease();
    if (lVar18 != 0) {
      (**(code **)(lVar18 + 8))(*(undefined8 *)(lVar26 + 0x108));
    }
  }
  auStack_2630[0] = 2;
LAB_10168fd0c:
  if ((auStack_2630[0] & 1) != 0) {
    FUN_100cdd078(auStack_2630);
  }
LAB_10168fd1c:
  if (cVar27 != '\x06') {
    cVar6 = cVar27;
  }
  if (cVar6 != '\x06') {
    pppcStack_ef8 = *(char ****)(lVar22 + 0x1c8);
    pplStack_f00 = *(long ***)(lVar22 + 0x1c0);
    __ZN9codex_tui3app4side37__LT_impl_u20_codex_tui__app__App_GT_22set_side_parent_status17he95a9c2129256965E
              (*(undefined8 *)(lVar22 + 0x1b8),&pplStack_f00);
  }
  *(undefined8 *)(lVar22 + 0x570) = *(undefined8 *)(lVar22 + 0x1b8);
  *(undefined1 *)(lVar22 + 0x58b) = 0;
LAB_10168fd50:
  uVar14 = FUN_101696164(lVar22 + 0x488,uVar15);
  if ((uVar14 & 1) == 0) {
    FUN_100d51964(lVar22 + 0x488);
    lVar26 = **(long **)(lVar22 + 0x478);
    **(long **)(lVar22 + 0x478) = lVar26 + -1;
    LORelease();
    if (lVar26 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbc4ddf33f5ab629fE(lVar22 + 0x478);
    }
    if ((*(byte *)(lVar22 + 0x481) & 1) != 0) {
      lVar18 = *(long *)(lVar22 + 0x470);
      LOAcquire();
      lVar26 = *(long *)(lVar18 + 0x1f0);
      *(long *)(lVar18 + 0x1f0) = lVar26 + -1;
      LORelease();
      if (lVar26 == 1) {
        LOAcquire();
        lVar26 = *(long *)(lVar18 + 0x88);
        *(long *)(lVar18 + 0x88) = lVar26 + 1;
        lVar26 = FUN_100fca4a4(lVar18 + 0x80,lVar26);
        *(ulong *)(lVar26 + 0x3f10) = *(ulong *)(lVar26 + 0x3f10) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(lVar18 + 0x110);
        LOAcquire();
        uVar14 = *puVar1;
        *puVar1 = uVar14 | 2;
        LORelease();
        if (uVar14 == 0) {
          lVar26 = *(long *)(lVar18 + 0x100);
          *(undefined8 *)(lVar18 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar26 != 0) {
            (**(code **)(lVar26 + 8))(*(undefined8 *)(lVar18 + 0x108));
          }
        }
      }
      plVar23 = *(long **)(lVar22 + 0x470);
      lVar26 = *plVar23;
      *plVar23 = lVar26 + -1;
      LORelease();
      if (lVar26 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h20edc871926e8591E
                  ((undefined8 *)(lVar22 + 0x470));
      }
    }
    *(undefined1 *)(lVar22 + 0x481) = 0;
    if ((*(long *)(lVar22 + 0x370) != -0x7ffffffffffffffa) && ((*(byte *)(lVar22 + 0x482) & 1) != 0)
       ) {
      FUN_100e1066c(lVar22 + 0x370);
    }
    *(undefined1 *)(lVar22 + 0x482) = 0;
    if ((*(byte *)(lVar22 + 0x483) & 1) != 0) {
      func_0x000100e45ab8(lVar22 + 0x1d0);
    }
    uVar20 = 0;
    *(undefined1 *)(lVar22 + 0x483) = 0;
    uVar21 = 1;
  }
  else {
    uVar21 = 5;
    uVar20 = 1;
  }
LAB_10168fe70:
  *(undefined1 *)(lVar22 + 0x480) = uVar21;
  return uVar20;
}

