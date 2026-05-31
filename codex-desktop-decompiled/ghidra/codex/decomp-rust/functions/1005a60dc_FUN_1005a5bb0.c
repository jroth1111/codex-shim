
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1005a5bb0(long param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char *******pppppppcVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 *puVar14;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined1 uVar15;
  char cVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  char cVar21;
  long unaff_x22;
  long lVar22;
  undefined8 ******ppppppuVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 unaff_x24;
  char *******unaff_x25;
  long in_xzr;
  long lVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  char **ppcStack_928;
  undefined *puStack_920;
  char *pcStack_918;
  undefined8 **ppuStack_910;
  undefined8 *puStack_908;
  undefined *puStack_900;
  char *****pppppcStack_8f8;
  char ***pppcStack_8f0;
  undefined8 uStack_8e8;
  undefined8 ******ppppppuStack_8e0;
  undefined8 ******ppppppuStack_8d8;
  long lStack_8d0;
  long lStack_8c8;
  undefined8 *puStack_8c0;
  long lStack_8b8;
  undefined8 *puStack_8b0;
  undefined *puStack_8a8;
  long lStack_8a0;
  long lStack_898;
  char *pcStack_890;
  char ******ppppppcStack_888;
  long lStack_880;
  undefined8 *puStack_700;
  undefined *puStack_6f8;
  long lStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 *puStack_6d0;
  undefined *puStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  char *****pppppcStack_6a0;
  char ***pppcStack_698;
  undefined *puStack_690;
  long lStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 *puStack_670;
  undefined *puStack_668;
  long lStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  char ******ppppppcStack_640;
  undefined *puStack_638;
  undefined8 ******ppppppuStack_630;
  undefined8 **ppuStack_628;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  undefined1 auStack_528 [488];
  long lStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 auStack_328 [59];
  long *plStack_150;
  char ***pppcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  char **ppcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  long **pplStack_118;
  long *plStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long ****pppplStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  long ****pppplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long ***ppplStack_60;
  undefined *puStack_58;
  
  bVar4 = *(byte *)(param_1 + 0x5e8);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      lVar22 = *(long *)(param_1 + 0x1f0);
      *(undefined1 *)(param_1 + 0x5e9) = 1;
      _memcpy(param_1 + 0x1f8,param_1,0x1f0);
      __ZN10codex_core5agent6status23agent_status_from_event17he51c063350aa8074E
                (&lStack_340,param_1 + 0x210);
      uVar10 = uStack_338;
      lVar18 = lStack_340;
      if (lStack_340 != 7) {
        lVar24 = *(long *)(lVar22 + 0x6d0);
        plVar19 = (long *)(lVar24 + 0x130);
        if (*plVar19 == 0) {
          *plVar19 = 8;
        }
        else {
          __ZN11parking_lot10raw_rwlock9RawRwLock19lock_exclusive_slow17h52751bf05e1f824dE
                    (plVar19,extraout_x1,1000000000);
        }
        uVar9 = *(ulong *)(lVar24 + 0x140);
        lVar26 = *(long *)(lVar24 + 0x138);
        uVar27 = *(undefined8 *)(lVar24 + 0x148);
        *(undefined8 *)(lVar24 + 0x140) = uVar10;
        *(long *)(lVar24 + 0x138) = lVar18;
        *(undefined8 *)(lVar24 + 0x150) = auStack_328[0];
        *(undefined8 *)(lVar24 + 0x148) = uStack_330;
        *(long *)(lVar24 + 0x158) = *(long *)(lVar24 + 0x158) + 2;
        LORelease();
        if (*plVar19 == 8) {
          *plVar19 = in_xzr;
        }
        else {
          FUN_107c05d6c(plVar19,0);
        }
        __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE
                  (lVar24 + 0x10);
        if (lVar26 == 3) {
          uVar9 = uVar9 & 0x7fffffffffffffff;
        }
        else if (lVar26 != 4) goto LAB_1005a5c98;
        if (uVar9 != 0) {
          _free(uVar27);
        }
      }
LAB_1005a5c98:
      *(undefined1 *)(param_1 + 0x5e9) = 0;
      _memcpy(param_1 + 1000,param_1 + 0x1f8,0x1f0);
      *(long *)(param_1 + 0x5d8) = lVar22 + 0x6c8;
      *(undefined8 *)(param_1 + 0x5e0) = 0;
LAB_1005a5cc4:
      func_0x0001011c40bc(&lStack_340,param_1 + 1000,*param_2);
      lVar18 = lStack_340;
      if (lStack_340 == -0x7fffffffffffffff) {
        uVar15 = 3;
      }
      else {
        _memcpy(auStack_528,&uStack_338,0x1e8);
        FUN_100e44a28(param_1 + 1000);
        if (lStack_340 != -0x8000000000000000) {
          _memcpy(&uStack_338,auStack_528,0x1e8);
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
             (((bRam000000010b62ac00 - 1 < 2 ||
               ((bRam000000010b62ac00 != 0 &&
                (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
                                   ), cVar7 != '\0')))) &&
              (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
                                 ), (uVar9 & 1) != 0)))) {
            lStack_138 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
                         + 0x30;
            plStack_110 = &lStack_340;
            puStack_108 = &DAT_10118fd10;
            pplStack_118 = &plStack_110;
            pcStack_120 = s__dropping_event_because_channel_i_108ac1844;
            ppcStack_130 = &pcStack_120;
            puStack_128 = &UNK_10b208fd0;
            pppcStack_148 = &ppcStack_130;
            plStack_150 = (long *)0x1;
            uStack_140 = 1;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
                       ,&plStack_150);
            lVar22 = 
            ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              pplStack_e0 = *(long ***)
                             (
                             ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
                             + 0x20);
              uStack_d8 = *(undefined8 *)
                           (
                           ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
                           + 0x28);
              pplStack_e8 = (long **)0x4;
              puVar1 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_10b3c24c8;
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&pplStack_e8);
              if (iVar8 != 0) {
                lStack_b0 = *(long *)(lVar22 + 0x60);
                uStack_a8 = *(undefined8 *)(lVar22 + 0x68);
                pppplStack_c8 = *(long *****)(lVar22 + 0x50);
                uStack_c0 = *(undefined8 *)(lVar22 + 0x58);
                uStack_d0 = 1;
                if (pppplStack_c8 == (long ****)0x0) {
                  uStack_d0 = 2;
                }
                uStack_88 = *(undefined4 *)(lVar22 + 8);
                uStack_84 = *(undefined4 *)(lVar22 + 0xc);
                pplStack_70 = &plStack_150;
                uStack_68 = 1;
                ppplStack_60 = &pplStack_70;
                puStack_58 = &DAT_1061c2098;
                lStack_b8 = 1;
                if (lStack_b0 == 0) {
                  lStack_b8 = 2;
                }
                pplStack_98 = pplStack_e0;
                pplStack_a0 = pplStack_e8;
                uStack_90 = uStack_d8;
                pppplStack_78 = &ppplStack_60;
                pcStack_80 = s__108b39f4f;
                (**(code **)(puVar1 + 0x20))(puVar2,&uStack_d0);
              }
            }
          }
          else {
            lVar22 = 
            ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              uStack_f8 = *(undefined8 *)
                           (
                           ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
                           + 0x20);
              uStack_f0 = *(undefined8 *)
                           (
                           ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
                           + 0x28);
              uStack_100 = 4;
              puVar1 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar1 = &UNK_10b3c24c8;
              }
              puVar2 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_109adfc03;
              }
              iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_100);
              if (iVar8 != 0) {
                lStack_b8 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_17deliver_event_raw28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h2d3b306e71da6d92E
                            + 0x30;
                plStack_150 = &lStack_340;
                pppcStack_148 = (char ***)&DAT_10118fd10;
                pplStack_e0 = &plStack_150;
                pplStack_e8 = (long **)s__dropping_event_because_channel_i_108ac1844;
                ppplStack_60 = &pplStack_e8;
                puStack_58 = &UNK_10b208fd0;
                pppplStack_c8 = &ppplStack_60;
                uStack_d0 = 1;
                uStack_c0 = 1;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar22,puVar2,puVar1,&uStack_100,&uStack_d0);
              }
            }
          }
          if (lStack_340 != 0) {
            _free(uStack_338);
          }
          func_0x000100dfc74c(auStack_328);
        }
        *(undefined1 *)(param_1 + 0x5e9) = 0;
        uVar15 = 1;
      }
      *(undefined1 *)(param_1 + 0x5e8) = uVar15;
      return (ulong)(lVar18 == -0x7fffffffffffffff);
    }
    FUN_107c05cc0(&UNK_10b218180);
  }
  else if (bVar4 == 3) goto LAB_1005a5cc4;
  uVar10 = FUN_107c05cc4(&UNK_10b218180);
  FUN_100e52488(&lStack_340);
  if ((*(byte *)(param_1 + 0x5e9) & 1) != 0) {
    FUN_100df5e04(param_1 + 0x1f8);
  }
  *(undefined2 *)(param_1 + 0x5e8) = 2;
  __Unwind_Resume(uVar10);
  auVar28 = FUN_107c05ccc();
  plVar19 = auVar28._8_8_;
  puVar11 = auVar28._0_8_;
  bVar4 = *(byte *)(plVar19 + 0x10);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      plVar19[1] = *plVar19 + 0x790;
      *(undefined1 *)(plVar19 + 0xf) = 0;
LAB_1005a6124:
      auVar28 = FUN_100fd3e50(plVar19 + 1,param_3);
      uVar10 = auVar28._8_8_;
      pcVar13 = auVar28._0_8_;
      if (pcVar13 == (char *)0x0) {
        *puVar11 = 2;
        uVar15 = 3;
        uVar9 = 0;
      }
      else {
        if ((((char)plVar19[0xf] == '\x03') && ((char)plVar19[0xe] == '\x03')) &&
           ((char)plVar19[5] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar19 + 6);
          uVar10 = extraout_x1_00;
          if (plVar19[7] != 0) {
            (**(code **)(plVar19[7] + 0x18))(plVar19[8]);
            uVar10 = extraout_x1_01;
          }
        }
        lVar18 = *(long *)(pcVar13 + 0x4f0);
        if (lVar18 != 2) {
          uStack_5a8 = *(ulong *)(pcVar13 + 0x508);
          uStack_5b0 = *(ulong *)(pcVar13 + 0x500);
          uStack_598 = *(ulong *)(pcVar13 + 0x518);
          uStack_5a0 = *(ulong *)(pcVar13 + 0x510);
          uStack_590 = *(ulong *)(pcVar13 + 0x520);
        }
        if (*pcVar13 == '\0') {
          *pcVar13 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar13,uVar10,1000000000);
        }
        uVar9 = FUN_1060fa678(pcVar13,1,pcVar13);
        *puVar11 = (ulong)(lVar18 != 2);
        puVar11[2] = uStack_5a8;
        puVar11[1] = uStack_5b0;
        puVar11[4] = uStack_598;
        puVar11[3] = uStack_5a0;
        puVar11[5] = uStack_590;
        uVar15 = 1;
      }
      *(undefined1 *)(plVar19 + 0x10) = uVar15;
      return uVar9;
    }
    FUN_107c05cc0(&UNK_10b218198);
  }
  else if (bVar4 == 3) goto LAB_1005a6124;
  FUN_107c05cc4(&UNK_10b218198);
  *(undefined1 *)(plVar19 + 0x10) = 2;
  uVar10 = __Unwind_Resume();
  FUN_100ca4214(plVar19 + 1);
  *(undefined1 *)(plVar19 + 0x10) = 2;
  __Unwind_Resume(uVar10);
  auVar28 = FUN_107c05ccc();
  puVar14 = auVar28._8_8_;
  puVar12 = auVar28._0_8_;
  bVar4 = *(byte *)(puVar14 + 0x1b);
  if (bVar4 < 4) {
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        *(undefined2 *)((long)puVar14 + 0xdd) = 0;
        *(undefined4 *)((long)puVar14 + 0xd9) = 0;
        unaff_x25 = (char *******)0x1;
        *(undefined1 *)((long)puVar14 + 0xdd) = 1;
        puVar14[9] = puVar14[7];
        puVar14[8] = puVar14[6];
        puVar14[0xb] = puVar14[1];
        puVar14[10] = *puVar14;
        puVar14[0xc] = puVar14[2];
        *(undefined1 *)((long)puVar14 + 0xdc) = 1;
        puVar14[0xe] = puVar14[4];
        puVar14[0xd] = puVar14[3];
        puVar14[0xf] = puVar14[5];
        unaff_x24 = *(undefined8 *)(puVar14[7] + 0x238);
        unaff_x22 = *(long *)(puVar14[7] + 0x240);
        if (unaff_x22 == 0) goto LAB_1005a635c;
        lVar18 = _malloc(unaff_x22);
        if (lVar18 != 0) goto LAB_1005a6360;
      }
      else {
        FUN_107c05cc0(&UNK_10b2181c8);
      }
      FUN_107c03c64(1,unaff_x22);
      goto LAB_1005a6d0c;
    }
    if (bVar4 != 3) {
      FUN_107c05cc4(&UNK_10b2181c8);
LAB_1005a635c:
      lVar18 = 1;
LAB_1005a6360:
      _memcpy(lVar18,unaff_x24,unaff_x22);
      puVar14[0x10] = unaff_x22;
      puVar14[0x11] = lVar18;
      puVar14[0x12] = unaff_x22;
      *(char *)((long)puVar14 + 0xda) = (char)unaff_x25;
      lStack_8d0 = 0;
      lStack_880 = 0;
      ppppppuStack_8e0 = unaff_x25;
      ppppppuStack_8d8 = unaff_x25;
      plVar19 = (long *)_malloc(0x68);
      if (plVar19 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x68);
        goto LAB_1005a6d0c;
      }
      plVar19[9] = lStack_898;
      plVar19[8] = lStack_8a0;
      plVar19[0xb] = (long)ppppppcStack_888;
      plVar19[10] = (long)pcStack_890;
      plVar19[0xc] = lStack_880;
      plVar19[1] = (long)ppppppuStack_8d8;
      *plVar19 = (long)ppppppuStack_8e0;
      plVar19[3] = lStack_8c8;
      plVar19[2] = lStack_8d0;
      lVar24 = 1;
      plVar19[5] = lStack_8b8;
      plVar19[4] = (long)puStack_8c0;
      plVar19[7] = (long)puStack_8a8;
      plVar19[6] = (long)puStack_8b0;
      lVar22 = *plVar19;
      *plVar19 = lVar22 + 1;
      if (lVar22 < 0) goto LAB_1005a6d0c;
      *(undefined1 *)((long)puVar14 + 0xd9) = 1;
      *(undefined1 *)((long)puVar14 + 0xdb) = 1;
      puVar14[0x13] = plVar19;
      puVar14[0x14] = plVar19;
      if ((unaff_x22 != 0) && (lVar24 = _malloc(unaff_x22), lVar24 == 0)) {
        FUN_107c03c64(1,unaff_x22);
        goto LAB_1005a6d0c;
      }
      _memcpy(lVar24,lVar18,unaff_x22);
      puVar14[0x15] = unaff_x22;
      puVar14[0x16] = lVar24;
      puVar14[0x17] = unaff_x22;
      puVar14[0x1c] = puVar14[8] + 0x1108;
      *(undefined1 *)(puVar14 + 0x2a) = 0;
    }
    auVar28 = FUN_100fd3e50(puVar14 + 0x1c,param_3);
    uVar10 = auVar28._8_8_;
    if (auVar28._0_8_ == 0) {
      *puVar12 = 1;
      uVar15 = 3;
      uVar9 = 0;
      goto LAB_1005a6c80;
    }
    puVar14[0x1a] = auVar28._0_8_;
    if (((*(char *)(puVar14 + 0x2a) == '\x03') && (*(char *)(puVar14 + 0x29) == '\x03')) &&
       (*(char *)(puVar14 + 0x20) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (puVar14 + 0x21);
      uVar10 = extraout_x1_02;
      if (puVar14[0x22] != 0) {
        (**(code **)(puVar14[0x22] + 0x18))(puVar14[0x23]);
        uVar10 = extraout_x1_03;
      }
    }
    pcVar13 = (char *)puVar14[0x1a];
    if (*(long *)(pcVar13 + 0x28) != -0x8000000000000000) {
      puVar14[0x1c] = *(long *)(pcVar13 + 0x70) + 0x10;
      *(undefined1 *)(puVar14 + 0x2a) = 0;
      goto LAB_1005a64a0;
    }
    puVar14[0x18] = 0;
LAB_1005a6540:
    if (*pcVar13 == '\0') {
      *pcVar13 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar13,uVar10,1000000000);
    }
    FUN_1060fa678(pcVar13,1,pcVar13);
    if (puVar14[0x18] != 0) {
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b62ac18 - 1 < 2 ||
           ((bRam000000010b62ac18 != 0 &&
            (cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
                               ), cVar7 != '\0')))))) &&
         (uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
                            ), (uVar9 & 1) != 0)) {
        lStack_688 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
                     + 0x30;
        puStack_908 = puVar14 + 0x15;
        puStack_900 = &DAT_10112965c;
        ppuStack_910 = &puStack_908;
        pcStack_918 = s_4Overwriting_existing_pending_us_108ac1871;
        ppcStack_928 = &pcStack_918;
        puStack_920 = &UNK_10b208fd0;
        pppcStack_698 = &ppcStack_928;
        pppppcStack_6a0 = (char *****)0x1;
        puStack_690 = (undefined *)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
                   ,&pppppcStack_6a0);
        lVar18 = 
        ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puStack_668 = *(undefined **)
                         (
                         ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
                         + 0x20);
          lStack_660 = *(long *)(
                                ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
                                + 0x28);
          puStack_670 = (undefined8 *)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&puStack_670);
          if (iVar8 != 0) {
            puStack_8c0 = *(undefined8 **)(lVar18 + 0x60);
            lStack_8b8 = *(long *)(lVar18 + 0x68);
            ppppppuStack_8d8 = *(undefined8 *******)(lVar18 + 0x50);
            lStack_8d0 = *(long *)(lVar18 + 0x58);
            ppppppuStack_8e0 = (char *******)0x1;
            if ((char *******)ppppppuStack_8d8 == (char *******)0x0) {
              ppppppuStack_8e0 = (char *******)0x2;
            }
            lStack_898 = *(long *)(lVar18 + 8);
            ppppppcStack_640 = &pppppcStack_6a0;
            puStack_638 = (undefined *)CONCAT71(puStack_638._1_7_,1);
            ppppppuStack_630 = &ppppppcStack_640;
            ppuStack_628 = (undefined8 **)&DAT_1061c2098;
            lStack_8c8 = 1;
            if (puStack_8c0 == (undefined8 *)0x0) {
              lStack_8c8 = 2;
            }
            puStack_8a8 = puStack_668;
            puStack_8b0 = puStack_670;
            lStack_8a0 = lStack_660;
            ppppppcStack_888 = (char ******)&ppppppuStack_630;
            pcStack_890 = s__108b39f4f;
            (**(code **)(puVar1 + 0x20))(puVar2,&ppppppuStack_8e0);
          }
        }
      }
      else {
        lVar18 = 
        ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppcStack_8f0 =
               *(char ****)
                (
                ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
                + 0x20);
          uStack_8e8 = *(undefined8 *)
                        (
                        ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
                        + 0x28);
          pppppcStack_8f8 = (char *****)0x2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar8 = (**(code **)(puVar1 + 0x18))(puVar2,&pppppcStack_8f8);
          if (iVar8 != 0) {
            lStack_8c8 = ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_18request_user_input28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9b8f8fc1816d826cE
                         + 0x30;
            puStack_670 = puVar14 + 0x15;
            puStack_668 = &DAT_10112965c;
            ppuStack_628 = &puStack_670;
            ppppppuStack_630 = (undefined8 ******)s_4Overwriting_existing_pending_us_108ac1871;
            ppppppcStack_640 = (char ******)&ppppppuStack_630;
            puStack_638 = &UNK_10b208fd0;
            ppppppuStack_8d8 = &ppppppcStack_640;
            ppppppuStack_8e0 = (char *******)0x1;
            lStack_8d0 = 1;
            pppcStack_698 = pppcStack_8f0;
            pppppcStack_6a0 = pppppcStack_8f8;
            puStack_690 = (undefined *)uStack_8e8;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar18,puVar2,puVar1,&pppppcStack_6a0,&ppppppuStack_8e0);
          }
        }
      }
    }
    *(undefined1 *)((long)puVar14 + 0xdd) = 0;
    lVar18 = puVar14[0xb];
    lVar22 = puVar14[0xc];
    pppppppcVar3 = (char *******)puVar14[10];
    uVar10 = *(undefined8 *)(puVar14[9] + 0x238);
    puVar25 = *(undefined8 **)(puVar14[9] + 0x240);
    if (puVar25 == (undefined8 *)0x0) {
      lVar24 = 1;
    }
    else {
      lVar24 = _malloc(puVar25);
      if (lVar24 == 0) {
        FUN_107c03c64(1,puVar25);
        goto LAB_1005a6d0c;
      }
    }
    _memcpy(lVar24,uVar10,puVar25);
    *(undefined1 *)((long)puVar14 + 0xdc) = 0;
    lStack_8a0 = puVar14[0xe];
    puStack_8a8 = (undefined *)puVar14[0xd];
    lStack_898 = puVar14[0xf];
    *(undefined1 *)((long)puVar14 + 0xde) = 1;
    ppppppuStack_8e0 = (undefined8 ******)CONCAT44(ppppppuStack_8e0._4_4_,0x25);
    *(undefined1 *)(*(long *)(*(long *)(puVar14[9] + 0x7a0) + 0xf0) + 0x10) = 1;
    *(undefined1 *)((long)puVar14 + 0xde) = 0;
    ppppppuStack_8d8 = pppppppcVar3;
    lStack_8d0 = lVar18;
    lStack_8c8 = lVar22;
    puStack_8c0 = puVar25;
    lStack_8b8 = lVar24;
    puStack_8b0 = puVar25;
    _memcpy(puVar14 + 0x1c,&ppppppuStack_8e0,0x1d8);
    puVar14[0x58] = puVar14[9];
    puVar14[0x57] = puVar14[8];
    *(undefined1 *)(puVar14 + 0xd1) = 0;
LAB_1005a68b4:
    uVar9 = FUN_10059e898(puVar14 + 0x1c,param_3);
    if ((int)uVar9 != 0) {
      *puVar12 = 1;
      uVar15 = 5;
      goto LAB_1005a6c80;
    }
    FUN_100d1ddbc(puVar14 + 0x1c);
    *(undefined1 *)((long)puVar14 + 0xdb) = 0;
    lVar18 = puVar14[0x14];
    puVar14[0x1c] = lVar18;
  }
  else {
    if (bVar4 == 4) {
LAB_1005a64a0:
      pcVar13 = (char *)FUN_100fd3e50(puVar14 + 0x1c,param_3);
      if (pcVar13 == (char *)0x0) {
        *puVar12 = 1;
        uVar15 = 4;
        uVar9 = 0;
        goto LAB_1005a6c80;
      }
      if (((*(char *)(puVar14 + 0x2a) == '\x03') && (*(char *)(puVar14 + 0x29) == '\x03')) &&
         (*(char *)(puVar14 + 0x20) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (puVar14 + 0x21);
        if (puVar14[0x22] != 0) {
          (**(code **)(puVar14[0x22] + 0x18))(puVar14[0x23]);
        }
      }
      ppppppuStack_8d8 = (undefined8 ******)puVar14[0x11];
      ppppppuStack_8e0 = (undefined8 ******)puVar14[0x10];
      lStack_8d0 = puVar14[0x12];
      *(undefined2 *)((long)puVar14 + 0xd9) = 0;
      auVar28 = __ZN10codex_core5state4turn9TurnState25insert_pending_user_input17h33560d6a20cd800bE
                          (pcVar13 + 0x28,&ppppppuStack_8e0,puVar14[0x13]);
      *(undefined1 (*) [16])(puVar14 + 0x18) = auVar28;
      if (*pcVar13 == '\0') {
        *pcVar13 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar13,auVar28._8_8_,1000000000);
      }
      FUN_1060fa678(pcVar13,1,pcVar13);
      pcVar13 = (char *)puVar14[0x1a];
      uVar10 = extraout_x1_04;
      goto LAB_1005a6540;
    }
    if (bVar4 == 5) goto LAB_1005a68b4;
    lVar18 = puVar14[0x1c];
  }
  if (lVar18 == 0) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd5b1c,0x2b,&UNK_10b24d460);
LAB_1005a6d0c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1005a6d10);
    (*pcVar5)();
  }
  uVar9 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(uVar9 + 0x48) == '\x01') {
LAB_1005a6990:
    cVar7 = *(char *)(uVar9 + 0x44);
    cVar21 = *(char *)(uVar9 + 0x45);
    cVar16 = cVar21;
    if (cVar7 == '\x01') {
      if (cVar21 != '\0') {
        cVar16 = cVar21 + -1;
        goto LAB_1005a69ac;
      }
      uVar9 = FUN_10610bbb4(*(undefined8 *)*param_3,((undefined8 *)*param_3)[1]);
      goto LAB_1005a6aa0;
    }
LAB_1005a69ac:
    *(char *)(uVar9 + 0x45) = cVar16;
    ppppppuStack_630 =
         (undefined8 ******)CONCAT62(ppppppuStack_630._2_6_,*(undefined2 *)(uVar9 + 0x44));
    uVar17 = (uint)*(undefined8 *)(lVar18 + 0x60);
    if ((uVar17 >> 1 & 1) == 0) goto LAB_1005a69c0;
LAB_1005a6ab8:
    ppppppuVar23 = *(undefined8 *******)(lVar18 + 0x10);
    *(undefined8 *)(lVar18 + 0x10) = 0;
    if (ppppppuVar23 != (undefined8 ******)0x0) {
      puStack_668 = *(undefined **)(lVar18 + 0x20);
      puStack_670 = *(undefined8 **)(lVar18 + 0x18);
      uStack_658 = *(undefined8 *)(lVar18 + 0x30);
      lStack_660 = *(long *)(lVar18 + 0x28);
      uStack_650 = *(undefined8 *)(lVar18 + 0x38);
    }
LAB_1005a6ad8:
    puStack_690 = puStack_668;
    pppcStack_698 = (char ***)puStack_670;
    uStack_680 = uStack_658;
    lStack_688 = lStack_660;
    uStack_678 = uStack_650;
    plVar19 = (long *)puVar14[0x1c];
    pppppcStack_6a0 = (char *****)ppppppuVar23;
    if (plVar19 != (long *)0x0) {
      lVar18 = *plVar19;
      *plVar19 = lVar18 + -1;
      LORelease();
      if (lVar18 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4c4abda393d83b1E(puVar14 + 0x1c);
      }
    }
    puVar14[0x1c] = 0;
    puStack_6f8 = puStack_690;
    puStack_700 = pppcStack_698;
    uStack_6e8 = uStack_680;
    lStack_6f0 = lStack_688;
    uStack_6e0 = uStack_678;
    uVar9 = FUN_100ce2bd0(puVar14 + 0x1c);
    if (ppppppuVar23 != (undefined8 ******)0x0) {
      puStack_6c8 = puStack_6f8;
      puStack_6d0 = puStack_700;
      uStack_6b8 = uStack_6e8;
      lStack_6c0 = lStack_6f0;
      uStack_6b0 = uStack_6e0;
    }
    *(undefined1 *)((long)puVar14 + 0xde) = 0;
    if (puVar14[0x18] != 0) {
      plVar19 = (long *)puVar14[0x19];
      if (plVar19 != (long *)0x0) {
        uVar6 = plVar19[0xc];
        do {
          uVar20 = uVar6;
          if (((uint)uVar20 >> 2 & 1) != 0) goto LAB_1005a6b88;
          uVar6 = plVar19[0xc];
        } while (uVar6 != uVar20);
        plVar19[0xc] = uVar20 | 2;
LAB_1005a6b88:
        if ((uVar20 & 5) == 1) {
          uVar9 = (**(code **)(plVar19[10] + 0x10))(plVar19[0xb]);
        }
        lVar18 = *plVar19;
        *plVar19 = lVar18 + -1;
        LORelease();
        if (lVar18 == 1) {
          DataMemoryBarrier(2,1);
          uVar9 = __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4c4abda393d83b1E(puVar14 + 0x19);
        }
      }
    }
    if (puVar14[0x15] != 0) {
      uVar9 = _free(puVar14[0x16]);
    }
    *(undefined1 *)((long)puVar14 + 0xdb) = 0;
    if ((*(byte *)((long)puVar14 + 0xd9) & 1) != 0) {
      plVar19 = (long *)puVar14[0x13];
      if (plVar19 != (long *)0x0) {
        uVar6 = plVar19[0xc];
        do {
          uVar20 = uVar6;
          if (((uint)uVar20 >> 2 & 1) != 0) goto LAB_1005a6c0c;
          uVar6 = plVar19[0xc];
        } while (uVar6 != uVar20);
        plVar19[0xc] = uVar20 | 2;
LAB_1005a6c0c:
        if ((uVar20 & 5) == 1) {
          uVar9 = (**(code **)(plVar19[10] + 0x10))(plVar19[0xb]);
        }
        lVar18 = *plVar19;
        *plVar19 = lVar18 + -1;
        LORelease();
        if (lVar18 == 1) {
          DataMemoryBarrier(2,1);
          uVar9 = __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4c4abda393d83b1E(puVar14 + 0x13);
        }
      }
    }
    *(undefined1 *)((long)puVar14 + 0xd9) = 0;
    if (((*(byte *)((long)puVar14 + 0xda) & 1) != 0) && (puVar14[0x10] != 0)) {
      uVar9 = _free(puVar14[0x11]);
    }
    *(undefined1 *)((long)puVar14 + 0xda) = 0;
    *(undefined2 *)((long)puVar14 + 0xdc) = 0;
    puVar12[3] = puStack_6c8;
    puVar12[2] = puStack_6d0;
    puVar12[5] = uStack_6b8;
    puVar12[4] = lStack_6c0;
    puVar12[6] = uStack_6b0;
    *puVar12 = 0;
    puVar12[1] = ppppppuVar23;
    uVar15 = 1;
    goto LAB_1005a6c80;
  }
  if (*(char *)(uVar9 + 0x48) != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(uVar9,&DAT_100c35d48);
    *(undefined1 *)(uVar9 + 0x48) = 1;
    goto LAB_1005a6990;
  }
  cVar7 = '\0';
  cVar21 = '\0';
  ppppppuStack_630 = (undefined8 ******)((ulong)ppppppuStack_630 & 0xffffffffffff0000);
  uVar17 = (uint)*(undefined8 *)(lVar18 + 0x60);
  if ((uVar17 >> 1 & 1) != 0) goto LAB_1005a6ab8;
LAB_1005a69c0:
  if ((uVar17 >> 2 & 1) != 0) {
    ppppppuVar23 = (undefined8 ******)0x0;
    goto LAB_1005a6ad8;
  }
  if ((uVar17 & 1) == 0) {
LAB_1005a6a14:
    auVar28 = (*(code *)**(undefined8 **)*param_3)(((undefined8 *)*param_3)[1]);
    *(undefined1 (*) [16])(lVar18 + 0x50) = auVar28;
    LOAcquire();
    uVar6 = *(ulong *)(lVar18 + 0x60);
    *(ulong *)(lVar18 + 0x60) = uVar6 | 1;
    LORelease();
    if (((uint)uVar6 >> 1 & 1) != 0) goto LAB_1005a6ab8;
  }
  else if ((*(long *)(lVar18 + 0x58) != ((long *)*param_3)[1]) ||
          (*(long *)(lVar18 + 0x50) != *(long *)*param_3)) {
    puVar11 = (ulong *)(lVar18 + 0x60);
    LOAcquire();
    uVar6 = *puVar11;
    *puVar11 = uVar6 & 0xfffffffffffffffe;
    LORelease();
    if (((uint)uVar6 >> 1 & 1) != 0) {
      LOAcquire();
      *puVar11 = *puVar11 | 1;
      LORelease();
      goto LAB_1005a6ab8;
    }
    (**(code **)(*(long *)(lVar18 + 0x50) + 0x18))(*(undefined8 *)(lVar18 + 0x58));
    goto LAB_1005a6a14;
  }
  if (cVar7 != '\0') {
    if (*(char *)(uVar9 + 0x48) != '\x01') {
      if (*(char *)(uVar9 + 0x48) == '\x02') goto LAB_1005a6aa0;
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (uVar9,&DAT_1060edbcc);
      *(undefined1 *)(uVar9 + 0x48) = 1;
    }
    *(undefined1 *)(uVar9 + 0x44) = 1;
    *(char *)(uVar9 + 0x45) = cVar21;
  }
LAB_1005a6aa0:
  *puVar12 = 1;
  uVar15 = 6;
LAB_1005a6c80:
  *(undefined1 *)(puVar14 + 0x1b) = uVar15;
  return uVar9;
}

