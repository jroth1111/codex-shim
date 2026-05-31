
/* WARNING: Possible PIC construction at 0x000108a2a3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a2a61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a2a788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a2ab68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a2a97c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a2a8d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a2a980) */
/* WARNING: Removing unreachable block (ram,0x000108a2ab6c) */
/* WARNING: Removing unreachable block (ram,0x000108a2a78c) */
/* WARNING: Removing unreachable block (ram,0x000108a2a620) */
/* WARNING: Removing unreachable block (ram,0x000108a2a3f4) */
/* WARNING: Removing unreachable block (ram,0x000108a2a8d4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_10080ece8(undefined8 *param_1,uint *param_2,long *param_3,undefined8 *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  byte bVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  undefined *puVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int extraout_w10;
  ulong uVar28;
  ulong uVar29;
  uint *unaff_x20;
  long lVar30;
  long unaff_x22;
  ulong unaff_x23;
  undefined *puVar31;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 *******pppppppuVar32;
  char in_wzr;
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  undefined1 auStack_320 [8];
  undefined *puStack_318;
  undefined8 uStack_310;
  uint uStack_308;
  int iStack_304;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  ulong uStack_2f0;
  undefined8 auStack_2e8 [8];
  undefined1 auStack_2a8 [96];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *******pppppppuStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  undefined8 *******pppppppuStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  char ***pppcStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  char **ppcStack_c0;
  undefined *puStack_b8;
  char *pcStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong extraout_x9;
  
  puVar13 = (ulong *)auStack_f0;
  uVar20 = *(uint *)(param_3 + 1);
  uStack_80 = param_3[1];
  if ((((ulong)uVar20 < *(ulong *)(*param_3 + 0x10)) &&
      (plVar24 = (long *)(*(long *)(*param_3 + 8) + (ulong)uVar20 * 0x158), *plVar24 != 2)) &&
     (*(int *)((long)plVar24 + 0x13c) == *(int *)((long)param_3 + 0xc))) {
    uVar20 = *(uint *)(plVar24 + 0xc);
    unaff_x25 = (ulong)uVar20;
    unaff_x22 = param_4[1];
    uVar22 = param_4[2];
    uVar4 = param_4[3];
    puVar3 = (undefined4 *)param_4[4];
    uVar5 = param_4[5];
    cVar6 = *(char *)*param_4;
    if (cVar6 == '\x01') {
      if ((*param_2 & 1) == 0) {
        uVar25 = *(ulong *)(param_2 + 0x14);
      }
      else {
        unaff_x26 = *(ulong *)(param_2 + 2);
        uVar25 = *(ulong *)(param_2 + 0x14);
        if (unaff_x26 <= uVar25) {
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
             (((bVar11 = bRam000000010b6370c8, bRam000000010b6370c8 - 1 < 2 ||
               ((bRam000000010b6370c8 != 0 &&
                (bVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
                                    ), bVar11 != 0)))) &&
              (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (___ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
                                   ,bVar11), iVar12 != 0)))) {
            lStack_d0 = ___ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
                        + 0x30;
            uStack_a0 = 1;
            puStack_90 = &uStack_a0;
            puStack_88 = &DAT_101138dc8;
            ppuStack_a8 = &puStack_90;
            pcStack_b0 = s__locally_reset_streams_reached_l_108ac84be;
            ppcStack_c0 = &pcStack_b0;
            puStack_b8 = &UNK_10b208fd0;
            pppcStack_e0 = &ppcStack_c0;
            puStack_e8 = (undefined *)0x1;
            uStack_d8 = 1;
            uStack_98 = unaff_x26;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
                       ,&puStack_e8);
            lVar30 = 
            ___ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              lStack_78 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
                           + 0x20);
              uStack_70 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
                           + 0x28);
              uStack_80 = 2;
              puVar19 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar19 = &UNK_10b3c24c8;
              }
              puVar31 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar31 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar19 + 0x18))(puVar31,&uStack_80);
              if (iVar12 != 0) {
LAB_10080f054:
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar30,puVar31,puVar19,&uStack_80,&puStack_e8);
              }
            }
          }
          else {
            lVar30 = 
            ___ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              lStack_78 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
                           + 0x20);
              uStack_70 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
                           + 0x28);
              uStack_80 = 2;
              puVar19 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar19 = &UNK_10b3c24c8;
              }
              puVar31 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar31 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar19 + 0x18))(puVar31,&uStack_80);
              if (iVar12 != 0) {
                lStack_d0 = ___ZN14rama_http_core2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hff217616791389c4E
                            + 0x30;
                uStack_a0 = 1;
                puStack_90 = &uStack_a0;
                puStack_88 = &DAT_101138dc8;
                ppuStack_a8 = &puStack_90;
                pcStack_b0 = s__locally_reset_streams_reached_l_108ac84be;
                ppcStack_c0 = &pcStack_b0;
                puStack_b8 = &UNK_10b208fd0;
                pppcStack_e0 = &ppcStack_c0;
                puStack_e8 = (undefined *)0x1;
                uStack_d8 = 1;
                uStack_98 = unaff_x26;
                goto LAB_10080f054;
              }
            }
          }
          puStack_e8 = &UNK_10b209220;
          pppcStack_e0 = (char ***)&UNK_108cb0b23;
          lStack_d0 = 0;
          uStack_d8 = 0x18;
          uStack_c8 = 0xb;
          goto LAB_10080ef20;
        }
      }
      *(ulong *)(param_2 + 0x14) = uVar25 + 1;
    }
    FUN_1008099b4(uVar22,*puVar3,cVar6,uVar5,param_3,param_2,uVar4);
    func_0x000105a8c434(unaff_x22,param_3,param_2);
    uVar2 = *(uint *)(param_3 + 1);
    uStack_80 = param_3[1];
    unaff_x20 = param_2;
    if ((((ulong)uVar2 < *(ulong *)(*param_3 + 0x10)) &&
        (plVar24 = (long *)(*(long *)(*param_3 + 8) + (ulong)uVar2 * 0x158), *plVar24 != 2)) &&
       (*(int *)((long)plVar24 + 0x13c) == *(int *)((long)param_3 + 0xc))) {
      lVar30 = plVar24[0x18];
      plVar24[0x18] = 0;
      if (lVar30 != 0) {
        (**(code **)(lVar30 + 8))(plVar24[0x19]);
      }
      puStack_e8 = (undefined *)0x0;
LAB_10080ef20:
      lStack_78 = param_3[1];
      uStack_80 = *param_3;
      puVar13 = (ulong *)__ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
                                   (param_2,&uStack_80,uVar20 != 1000000000);
      param_1[1] = pppcStack_e0;
      *param_1 = puStack_e8;
      param_1[3] = lStack_d0;
      param_1[2] = uStack_d8;
      param_1[4] = CONCAT44(uStack_c4,uStack_c8);
      return puVar13;
    }
  }
  else {
    puStack_e8 = (undefined *)((long)&uStack_80 + 4);
    pppcStack_e0 = (char ***)&DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&puStack_e8,&UNK_10b3fa588);
  }
  puStack_e8 = (undefined *)((long)&uStack_80 + 4);
  pppcStack_e0 = (char ***)&DAT_105abf048;
  puVar19 = &UNK_10b3fa5a0;
  puVar14 = (ulong *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                               (s__dangling_store_key_for_stream_i_108b233d4,&puStack_e8,
                                &UNK_10b3fa5a0);
  if ((unaff_x23 & 1) == 0) {
    puVar19 = (undefined *)0x18;
    (**(code **)(unaff_x22 + 0x20))(&lStack_d0,&UNK_108cb0b23,0x18);
  }
  __Unwind_Resume(puVar14);
  auVar33 = FUN_107c05ccc();
  plVar24 = auVar33._8_8_;
  pcStack_f8 = FUN_10080f13c;
  lVar30 = *plVar24;
  puVar1 = (uint *)(lVar30 + 0x10);
  pppppppuStack_100 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (*(char *)puVar1 == '\0') {
    *(char *)puVar1 = '\x01';
    uVar25 = (ulong)*(uint *)(plVar24 + 1);
    iVar12 = *(int *)((long)plVar24 + 0xc);
    uStack_148 = (code *)plVar24[1];
    if (*(ulong *)(lVar30 + 0x210) <= uVar25) goto LAB_10080f220;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(puVar1,plVar24,1000000000);
    uVar25 = (ulong)*(uint *)(plVar24 + 1);
    iVar12 = *(int *)((long)plVar24 + 0xc);
    uStack_148 = (code *)plVar24[1];
    if (*(ulong *)(lVar30 + 0x210) <= uVar25) goto LAB_10080f220;
  }
  plVar24 = (long *)(*(long *)(lVar30 + 0x208) + uVar25 * 0x158);
  if ((*plVar24 == 2) || (*(int *)((long)plVar24 + 0x13c) != iVar12)) {
LAB_10080f220:
    uStack_140 = (long)&uStack_148 + 4;
    puStack_138 = &DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&uStack_140,&UNK_10b3fa5a0);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10080f250);
    (*pcVar8)();
  }
  puVar15 = (ulong *)__ZN14rama_http_core2h25proto7streams4send4Send10poll_reset17h1afe50882ad2b31eE
                               (auVar33._0_8_,lVar30 + 400,puVar19,plVar24);
  if (*(char *)puVar1 == '\x01') {
    *(char *)puVar1 = in_wzr;
    return puVar15;
  }
  uVar25 = (long)puVar1 * -0x61c8864680b583eb;
  uStack_140 = unaff_x26;
  puStack_138 = (undefined *)unaff_x25;
  do {
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == (long *)0x0) {
      plVar24 = (long *)__ZN16parking_lot_core11parking_lot16create_hashtable17h93300b7db245cbcbE();
      puVar15 = (ulong *)(uVar25 >> ((ulong)(uint)-(int)plVar24[3] & 0x3f));
      if ((ulong *)plVar24[1] <= puVar15) goto LAB_108a2a63c;
    }
    else {
      puVar15 = (ulong *)(uVar25 >>
                         ((ulong)(uint)-(int)___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E
                                             [3] & 0x3f));
      plVar24 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
      if ((ulong *)___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E[1] <= puVar15)
      goto LAB_108a2a63c;
    }
    puVar18 = (ulong *)(*plVar24 + (long)puVar15 * 0x40);
    if (*puVar18 == 0) {
      *puVar18 = 1;
    }
    else {
      puVar15 = (ulong *)__ZN16parking_lot_core9word_lock8WordLock9lock_slow17h5ad1492ffb62c75cE
                                   (puVar18);
    }
    pppppppuVar32 = &pppppppuStack_100;
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == plVar24) {
      uVar10 = puVar18[1];
      if (uVar10 == 0) goto LAB_108a2a4f0;
      if (*(uint **)(uVar10 + 0x78) != puVar1) goto LAB_108a2a480;
      uVar21 = 0;
      uVar28 = *(ulong *)(uVar10 + 0x80);
      puVar18[1] = uVar28;
      if (puVar18[2] == uVar10) goto LAB_108a2a4b0;
      goto LAB_108a2a460;
    }
    uVar10 = *puVar18;
    *puVar18 = uVar10 - 1;
    LORelease();
  } while (uVar10 < 4 || (uVar10 & 2) != 0);
  puVar13 = &uStack_140;
  puVar14 = puVar18;
  unaff_x20 = puVar1;
  pcVar8 = (code *)0x108a2a3f4;
  goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
  while (*(uint **)(uVar10 + 0x78) != puVar1) {
LAB_108a2a480:
    uVar21 = uVar10;
    uVar10 = *(ulong *)(uVar21 + 0x80);
    if (uVar10 == 0) goto LAB_108a2a4f0;
  }
  uVar28 = *(ulong *)(uVar10 + 0x80);
  *(ulong *)(uVar21 + 0x80) = uVar28;
  if (puVar18[2] == uVar10) {
LAB_108a2a4b0:
    uVar25 = 0;
    puVar18[2] = uVar21;
LAB_108a2a4b8:
    auVar34 = func_0x000106032954(8);
    uVar21 = auVar34._0_8_;
    uVar28 = puVar18[3];
    bVar9 = SBORROW8(uVar21,uVar28);
    lVar30 = uVar21 - uVar28;
    if (uVar21 != uVar28) goto LAB_108a2a53c;
LAB_108a2a4cc:
    iVar12 = (int)uVar25;
    if (auVar34._8_4_ <= (uint)puVar18[4]) goto LAB_108a2a4d8;
LAB_108a2a540:
    uVar21 = auVar34._0_8_;
    uVar20 = (uint)puVar18[5] ^ (uint)puVar18[5] << 0xd;
    uVar20 = uVar20 ^ uVar20 >> 0x11;
    uVar20 = uVar20 ^ uVar20 << 5;
    *(uint *)(puVar18 + 5) = uVar20;
    uVar20 = uVar20 % 1000000 + auVar34._8_4_;
    if (999999999 < uVar20) {
      bVar9 = SCARRY8(uVar21,1);
      uVar21 = uVar21 + 1;
      if (bVar9) {
        func_0x000108a079f0(&UNK_109bd7235,0x28,&UNK_10b4aef18);
LAB_108a2a63c:
        iVar12 = 0xb3df510;
        auVar33 = func_0x000108a07bdc();
        uStack_310 = auVar33._8_8_;
        pbVar16 = auVar33._0_8_;
        puVar13 = (ulong *)auStack_320;
        uStack_148 = __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E;
        pppppppuStack_150 = &pppppppuStack_100;
        puStack_2f8 = (undefined8 *)
                      (*
                      ___ZN16parking_lot_core11parking_lot16with_thread_data11THREAD_DATA29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h1b951351c9673096E
                      )();
        uVar23 = (undefined4)extraout_x9;
        uVar10 = 0;
        puStack_300 = auStack_2e8;
        uStack_308 = (uint)(iVar12 != extraout_w10);
        unaff_x20 = (uint *)&__ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
        puStack_318 = &UNK_10b3df510;
        puVar14 = (ulong *)0xffffffffffffffff;
        uVar21 = extraout_x9;
        iStack_304 = iVar12;
        if ((extraout_x9 & 1) != 0) goto LAB_108a2a6f8;
LAB_108a2a6dc:
        bVar11 = *pbVar16;
        if (bVar11 == (byte)uVar21) {
          *pbVar16 = (byte)uVar21 | 1;
        }
        if ((uint)bVar11 == ((uint)uVar21 & 0xff)) {
          return (ulong *)0x1;
        }
joined_r0x000108a2a6f4:
        while( true ) {
          uVar21 = (ulong)bVar11;
          uVar23 = ZEXT14(bVar11);
          if ((bVar11 & 1) == 0) break;
LAB_108a2a6f8:
          if (((uint)uVar23 >> 1 & 1) != 0) goto LAB_108a2a718;
          uVar20 = (uint)uVar10;
          if (9 < uVar20) goto code_r0x000108a2a704;
          uVar10 = (ulong)(uVar20 + 1);
          if (uVar20 < 3) {
            iVar12 = 2 << (ulong)(uVar20 & 0x1f);
            do {
              InstructionSynchronizationBarrier();
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
            goto LAB_108a2aa60;
          }
          _sched_yield();
          bVar11 = *pbVar16;
          uVar25 = uVar10;
        }
        goto LAB_108a2a6dc;
      }
      uVar20 = uVar20 + 0xc4653600;
    }
    puVar18[3] = uVar21;
    *(uint *)(puVar18 + 4) = uVar20;
    uVar22 = 1;
    if ((int)uVar25 == 0) {
      *(char *)puVar1 = '\x01';
    }
  }
  else {
LAB_108a2a460:
    if (uVar28 != 0) {
      do {
        bVar9 = *(uint **)(uVar28 + 0x78) == puVar1;
        uVar25 = (ulong)bVar9;
        if (bVar9) break;
        uVar28 = *(ulong *)(uVar28 + 0x80);
      } while (uVar28 != 0);
      goto LAB_108a2a4b8;
    }
    uVar25 = 0;
    auVar34 = func_0x000106032954(8);
    uVar21 = auVar34._0_8_;
    uVar28 = puVar18[3];
    bVar9 = SBORROW8(uVar21,uVar28);
    lVar30 = uVar21 - uVar28;
    if (uVar21 == uVar28) goto LAB_108a2a4cc;
LAB_108a2a53c:
    iVar12 = (int)uVar25;
    if (lVar30 < 0 == bVar9) goto LAB_108a2a540;
LAB_108a2a4d8:
    uVar22 = 0;
    if (iVar12 == 0) {
      *puVar1 = 0;
    }
    else {
      *puVar1 = 2;
    }
  }
  *(undefined8 *)(uVar10 + 0x88) = uVar22;
  _pthread_mutex_lock(uVar10);
  uVar25 = *puVar18;
  *puVar18 = uVar25 - 1;
  LORelease();
  if ((uVar25 < 4) || (((uint)uVar25 >> 1 & 1) != 0)) {
    *(undefined1 *)(uVar10 + 0x70) = 0;
    _pthread_cond_signal(uVar10 + 0x40);
code_r0x000108aaa13c:
                    /* WARNING: Could not recover jumptable at 0x000108aaa144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar13 = (ulong *)(*(code *)PTR__pthread_mutex_unlock_10b61b6f8)(uVar10);
    return puVar13;
  }
  puVar13 = &uStack_140;
  puVar14 = puVar18;
  unaff_x20 = puVar1;
  pcVar8 = (code *)0x108a2a620;
__ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E:
  *(uint **)((long)puVar13 + -0x20) = unaff_x20;
  *(ulong **)((long)puVar13 + -0x18) = puVar14;
  *(undefined8 ********)((long)puVar13 + -0x10) = pppppppuVar32;
  *(code **)((long)puVar13 + -8) = pcVar8;
  uVar25 = *puVar18;
  do {
    uVar21 = uVar25;
    if (uVar21 < 4) {
      return puVar18;
    }
    if (((uint)uVar21 >> 1 & 1) != 0) {
      return puVar18;
    }
    uVar25 = *puVar18;
  } while (*puVar18 != uVar21);
  *puVar18 = uVar21 | 2;
  do {
    uVar28 = uVar21 & 0xfffffffffffffffc;
    uVar10 = *(ulong *)(uVar28 + 0x78);
    uVar25 = uVar28;
    while (uVar10 == 0) {
      uVar29 = *(ulong *)(uVar25 + 0x88);
      *(ulong *)(uVar29 + 0x80) = uVar25;
      uVar25 = uVar29;
      uVar10 = *(ulong *)(uVar29 + 0x78);
    }
    *(ulong *)(uVar28 + 0x78) = uVar10;
    if ((uVar21 & 1) == 0) {
      uVar25 = uVar21;
      if (*(long *)(uVar10 + 0x80) != 0) {
        *(long *)(uVar28 + 0x78) = *(long *)(uVar10 + 0x80);
        uVar25 = *puVar18;
        *puVar18 = uVar25 & 0xfffffffffffffffd;
        LORelease();
LAB_108a2b2e4:
        _pthread_mutex_lock(uVar25,uVar10);
        *(undefined1 *)(uVar10 + 0x70) = 0;
        _pthread_cond_signal(uVar10 + 0x40);
        goto code_r0x000108aaa13c;
      }
      do {
        uVar21 = *puVar18;
        if (uVar21 == uVar25) {
          *puVar18 = uVar25 & 1;
          goto LAB_108a2b2e4;
        }
        uVar25 = uVar21;
      } while (uVar21 < 4);
    }
    else {
      uVar25 = uVar21 & 0xfffffffffffffffd;
      bVar9 = *puVar18 == uVar21;
      uVar21 = *puVar18;
      if (bVar9) {
        *puVar18 = uVar25;
        return puVar18;
      }
    }
    DataMemoryBarrier(2,1);
  } while( true );
LAB_108a2a4f0:
  *puVar1 = 0;
  uVar25 = *puVar18;
  *puVar18 = uVar25 - 1;
  LORelease();
  pppppppuVar32 = pppppppuStack_100;
  pcVar8 = pcStack_f8;
  if (uVar25 < 4 || (uVar25 & 2) != 0) {
    return puVar15;
  }
  goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
code_r0x000108a2a704:
  bVar11 = *pbVar16;
  if (bVar11 == (byte)uVar23) {
    *pbVar16 = (byte)uVar23 | 2;
  }
  if ((uint)bVar11 != (uVar23 & 0xff)) goto joined_r0x000108a2a6f4;
LAB_108a2a718:
  uStack_2f0 = 0;
  puVar17 = puStack_2f8;
  if (((*(char *)(puStack_2f8 + 0x14) != '\x01') &&
      (puVar17 = (undefined8 *)FUN_108a2ac08(puStack_2f8), puVar17 == (undefined8 *)0x0)) &&
     (puVar17 = puStack_300, (uStack_2f0 & 1) == 0)) {
    __ZN16parking_lot_core11parking_lot10ThreadData3new17hfa4775c6f0f885d9E(&uStack_248);
    uVar5 = uStack_1d0;
    uVar4 = uStack_1d8;
    uVar22 = uStack_1e8;
    uStack_2f0 = 1;
    puStack_300[0xd] = uStack_1e0;
    puStack_300[0xc] = uVar22;
    puStack_300[0xf] = uVar5;
    puStack_300[0xe] = uVar4;
    uVar5 = uStack_1b0;
    uVar4 = uStack_1b8;
    uVar22 = uStack_1c8;
    puStack_300[0x11] = uStack_1c0;
    puStack_300[0x10] = uVar22;
    puStack_300[0x13] = uVar5;
    puStack_300[0x12] = uVar4;
    uVar5 = uStack_210;
    uVar4 = uStack_218;
    uVar22 = uStack_228;
    puStack_300[5] = uStack_220;
    puStack_300[4] = uVar22;
    puStack_300[7] = uVar5;
    puStack_300[6] = uVar4;
    uVar5 = uStack_1f0;
    uVar4 = uStack_1f8;
    uVar22 = uStack_208;
    puStack_300[9] = uStack_200;
    puStack_300[8] = uVar22;
    puStack_300[0xb] = uVar5;
    puStack_300[10] = uVar4;
    uVar5 = uStack_230;
    uVar4 = uStack_238;
    uVar22 = uStack_248;
    puStack_300[1] = uStack_240;
    *puStack_300 = uVar22;
    puStack_300[3] = uVar5;
    puStack_300[2] = uVar4;
    puVar17 = puStack_300;
  }
  while( true ) {
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == (long *)0x0) {
      plVar24 = (long *)__ZN16parking_lot_core11parking_lot16create_hashtable17h93300b7db245cbcbE();
      uVar10 = (ulong)((long)pbVar16 * -0x61c8864680b583eb) >>
               ((ulong)(uint)-(int)plVar24[3] & 0x3f);
      uVar21 = plVar24[1];
      if (uVar21 <= uVar10) goto LAB_108a2abac;
    }
    else {
      uVar10 = (ulong)((long)pbVar16 * -0x61c8864680b583eb) >>
               ((ulong)(uint)-(int)___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E
                                   [3] & 0x3f);
      uVar21 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E[1];
      plVar24 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
      if (uVar21 <= uVar10) goto LAB_108a2abac;
    }
    puVar18 = (ulong *)(*plVar24 + uVar10 * 0x40);
    if (*puVar18 == 0) {
      *puVar18 = 1;
    }
    else {
      __ZN16parking_lot_core9word_lock8WordLock9lock_slow17h5ad1492ffb62c75cE(puVar18);
    }
    pppppppuVar32 = &pppppppuStack_150;
    if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == plVar24) break;
    uVar10 = *puVar18;
    *puVar18 = uVar10 - 1;
    LORelease();
    if (3 < uVar10 && (uVar10 & 2) == 0) {
      puVar13 = (ulong *)auStack_320;
      pcVar8 = (code *)0x108a2a78c;
      goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
    }
  }
  if (*pbVar16 != 3) {
    uVar10 = *puVar18;
    *puVar18 = uVar10 - 1;
    LORelease();
    if (uVar10 < 4 || (uVar10 & 2) != 0) {
      lVar30 = 1;
    }
    else {
      func_0x000108a2b220(puVar18);
      lVar30 = 1;
    }
    goto LAB_108a2aa28;
  }
  *(char *)(puVar17 + 0x13) = (char)uStack_308;
  puVar17[0x10] = 0;
  puVar17[0xf] = pbVar16;
  puVar17[0x12] = 0;
  *(undefined1 *)(puVar17 + 0xe) = 1;
  if ((*(byte *)((long)puVar17 + 0x71) & 1) == 0) {
    *(undefined1 *)((long)puVar17 + 0x71) = 1;
  }
  if (puVar18[1] == 0) {
    puVar18[1] = (ulong)puVar17;
    puVar18[2] = (ulong)puVar17;
    uVar25 = *puVar18;
    *puVar18 = uVar25 - 1;
    LORelease();
    if (3 < uVar25 && (uVar25 & 2) == 0) goto LAB_108a2a8cc;
  }
  else {
    *(undefined8 **)(puVar18[2] + 0x80) = puVar17;
    puVar18[2] = (ulong)puVar17;
    uVar25 = *puVar18;
    *puVar18 = uVar25 - 1;
    LORelease();
    if (3 < uVar25 && (uVar25 & 2) == 0) {
LAB_108a2a8cc:
      pcVar8 = (code *)0x108a2a8d4;
      goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
    }
  }
  if (iStack_304 == 1000000000) {
    _pthread_mutex_lock(puVar17);
    if (*(char *)(puVar17 + 0xe) == '\x01') {
      do {
        _pthread_cond_wait(puVar17 + 8,puVar17);
      } while ((*(byte *)(puVar17 + 0xe) & 1) != 0);
    }
    _pthread_mutex_unlock(puVar17);
  }
  else {
    uVar25 = FUN_1059dd990(puVar17,uStack_310);
    if ((uVar25 & 1) == 0) {
      do {
        plVar24 = ___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E;
        if (___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == (long *)0x0) {
          plVar24 = (long *)__ZN16parking_lot_core11parking_lot16create_hashtable17h93300b7db245cbcbE
                                      ();
        }
        uVar25 = puVar17[0xf];
        uVar10 = uVar25 * -0x61c8864680b583eb >> ((ulong)(uint)-(int)plVar24[3] & 0x3f);
        uVar21 = plVar24[1];
        if (uVar21 <= uVar10) {
          puStack_318 = &UNK_10b3df588;
LAB_108a2abac:
          func_0x000108a07bdc(uVar10,uVar21,puStack_318);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x108a2abb8);
          (*pcVar8)();
        }
        puVar18 = (ulong *)(*plVar24 + uVar10 * 0x40);
        if (*puVar18 == 0) {
          *puVar18 = 1;
        }
        else {
          __ZN16parking_lot_core9word_lock8WordLock9lock_slow17h5ad1492ffb62c75cE(puVar18);
        }
        if ((___ZN16parking_lot_core11parking_lot9HASHTABLE17h738ba5664d7e2164E == plVar24) &&
           (puVar17[0xf] == uVar25)) goto LAB_108a2a994;
        uVar25 = *puVar18;
        *puVar18 = uVar25 - 1;
        LORelease();
        if (3 < uVar25 && (uVar25 & 2) == 0) {
          puVar13 = (ulong *)auStack_320;
          pcVar8 = (code *)0x108a2a980;
          goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
        }
      } while( true );
    }
  }
LAB_108a2aa18:
  lVar30 = 0;
  uVar25 = (ulong)(puVar17[0x11] == 1);
LAB_108a2aa28:
  lVar7 = ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E;
  if (uStack_2f0 != 0) {
    ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E =
         ___ZN16parking_lot_core11parking_lot11NUM_THREADS17he083b4440ba4b236E + -1;
    _pthread_mutex_destroy(lVar7,puStack_300);
    _pthread_cond_destroy(auStack_2a8);
  }
  if (lVar30 == 0) {
    if ((uVar25 & 1) != 0) {
      return (ulong *)0x1;
    }
    uVar10 = 0;
    bVar11 = *pbVar16;
    uVar25 = uVar10;
  }
  else {
    if (lVar30 != 1) {
      return (ulong *)0x0;
    }
    uVar10 = 0;
LAB_108a2aa60:
    bVar11 = *pbVar16;
    uVar25 = uVar10;
  }
  goto joined_r0x000108a2a6f4;
LAB_108a2a994:
  _pthread_mutex_lock(puVar17);
  bVar11 = *(byte *)(puVar17 + 0xe);
  _pthread_mutex_unlock(puVar17);
  if ((bVar11 & 1) != 0) {
    puVar26 = (undefined8 *)puVar18[1];
    if (puVar26 != (undefined8 *)0x0) {
      if (puVar26 == puVar17) {
        uVar10 = puVar26[0x10];
        puVar18[1] = uVar10;
        if ((undefined8 *)puVar18[2] != puVar17) {
          bVar9 = true;
          goto joined_r0x000108a2aaa0;
        }
        puVar18[2] = 0;
LAB_108a2aac4:
        *pbVar16 = *pbVar16 & 0xfd;
      }
      else {
        bVar9 = true;
        do {
          puVar27 = puVar26;
          puVar26 = (undefined8 *)puVar27[0x10];
          if (puVar26 == (undefined8 *)0x0) goto LAB_108a2aacc;
          bVar9 = (bool)(puVar27[0xf] != uVar25 & bVar9);
        } while (puVar26 != puVar17);
        uVar10 = puVar26[0x10];
        puVar27[0x10] = uVar10;
        if ((undefined8 *)puVar18[2] == puVar17) {
          puVar18[2] = (ulong)puVar27;
          if (bVar9) goto LAB_108a2aac4;
        }
        else {
joined_r0x000108a2aaa0:
          for (; uVar10 != 0; uVar10 = *(ulong *)(uVar10 + 0x80)) {
            if (*(ulong *)(uVar10 + 0x78) == uVar25) goto LAB_108a2aacc;
          }
          if (bVar9) goto LAB_108a2aac4;
        }
      }
    }
LAB_108a2aacc:
    uVar10 = *puVar18;
    *puVar18 = uVar10 - 1;
    LORelease();
    if (3 < uVar10 && (uVar10 & 2) == 0) {
      puVar13 = (ulong *)auStack_320;
      pcVar8 = (code *)0x108a2ab6c;
      goto __ZN16parking_lot_core9word_lock8WordLock11unlock_slow17hf23effa208de0cd0E;
    }
    lVar30 = 2;
    goto LAB_108a2aa28;
  }
  uVar25 = *puVar18;
  *puVar18 = uVar25 - 1;
  LORelease();
  if (3 < uVar25 && (uVar25 & 2) == 0) {
    func_0x000108a2b220(puVar18);
  }
  goto LAB_108a2aa18;
}

