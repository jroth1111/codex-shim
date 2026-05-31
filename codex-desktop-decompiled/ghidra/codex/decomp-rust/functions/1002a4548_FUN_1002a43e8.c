
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a43e8(undefined1 *param_1,int *param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [8];
  code *pcVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  int *piVar13;
  char cVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong unaff_x22;
  long lVar18;
  ulong *unaff_x23;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  char cStack_458;
  int iStack_457;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  undefined1 auStack_310 [8];
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined *puStack_280;
  char ***pppcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  char **ppcStack_258;
  undefined *puStack_250;
  char *pcStack_248;
  ulong **ppuStack_240;
  ulong uStack_238;
  ulong *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_190;
  undefined1 auStack_188 [296];
  
  if (*param_2 != 1) {
    *param_1 = 9;
    return;
  }
  uVar17 = *(ulong *)(param_2 + 2);
  if (uVar17 < *(ulong *)(param_3 + 0x10)) {
    unaff_x23 = (ulong *)(*(long *)(param_3 + 8) + uVar17 * 0x138);
    unaff_x22 = *unaff_x23;
    if (unaff_x22 != 2) {
      uVar20 = *(ulong *)(param_2 + 4);
      uVar22 = *(ulong *)(param_3 + 0x20);
      _memcpy(&uStack_190,unaff_x23 + 1,0x130);
      *unaff_x23 = 2;
      unaff_x23[1] = uVar22;
      *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + -1;
      *(ulong *)(param_3 + 0x20) = uVar17;
      if (uVar17 == uVar20) {
        if (unaff_x22 != 0) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108c7524f,0x25,&UNK_10b1f4d60);
LAB_1002a4510:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a4514);
          (*pcVar7)();
        }
        param_2[0] = 0;
        param_2[1] = 0;
      }
      else {
        if ((unaff_x22 & 1) == 0) {
          FUN_107c05cb0(&UNK_10b1f4d48);
          goto LAB_1002a4510;
        }
        param_2[0] = 1;
        param_2[1] = 0;
        *(undefined8 *)(param_2 + 2) = uStack_190;
      }
      _memcpy(param_1,auStack_188,0x128);
      return;
    }
  }
  plVar15 = (long *)&UNK_10b1f4d30;
  uVar10 = FUN_107c05cac(&UNK_108c75c96,0xb);
  FUN_1002c4fd4(auStack_188);
  __Unwind_Resume(uVar10);
  auVar23 = FUN_107c05ccc();
  piVar13 = auVar23._8_8_;
  puVar11 = auVar23._0_8_;
  uVar1 = *(uint *)(plVar15 + 1);
  uStack_220 = plVar15[1];
  if ((((ulong)uVar1 < *(ulong *)(*plVar15 + 0x10)) &&
      (plVar16 = (long *)(*(long *)(*plVar15 + 8) + (ulong)uVar1 * 0x140), *plVar16 != 2)) &&
     (*(int *)((long)plVar16 + 0x124) == *(int *)((long)plVar15 + 0xc))) {
    lVar5 = plVar16[9];
    pcVar2 = (char *)*param_4;
    unaff_x22 = param_4[1];
    uVar10 = param_4[2];
    uVar4 = param_4[3];
    puVar3 = (undefined4 *)param_4[4];
    param_4 = (undefined8 *)param_4[5];
    cVar14 = *pcVar2;
    if (cVar14 == '\x01') {
      if (*piVar13 == 1) {
        uVar20 = *(ulong *)(piVar13 + 2);
        uVar17 = *(ulong *)(piVar13 + 0x14);
        if (uVar20 <= uVar17) {
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
             (((bVar8 = bRam000000010b632900, bRam000000010b632900 - 1 < 2 ||
               ((bRam000000010b632900 != 0 &&
                (bVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                                   ), bVar8 != 0)))) &&
              (iVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                                  ,bVar8), iVar9 != 0)))) {
            lStack_268 = ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                         + 0x30;
            puStack_230 = &uStack_238;
            puStack_228 = &DAT_1002b2644;
            ppuStack_240 = &puStack_230;
            pcStack_248 = s__locally_reset_streams_reached_l_108ac84be;
            ppcStack_258 = &pcStack_248;
            puStack_250 = &UNK_10b1f3630;
            pppcStack_278 = &ppcStack_258;
            puStack_280 = (undefined *)0x1;
            uStack_270 = 1;
            uStack_238 = uVar20;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                       ,&puStack_280);
            lVar18 = 
            ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              lStack_218 = *(undefined8 *)
                            (
                            ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                            + 0x20);
              uStack_210 = *(undefined8 *)
                            (
                            ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                            + 0x28);
              uStack_220 = 2;
              puVar19 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar19 = &UNK_10b3c24c8;
              }
              puVar21 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar21 = &UNK_109adfc03;
              }
              iVar9 = (**(code **)(puVar19 + 0x18))(puVar21,&uStack_220);
              if (iVar9 != 0) {
LAB_1002a48b8:
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar18,puVar21,puVar19,&uStack_220,&puStack_280);
              }
            }
          }
          else {
            lVar18 = 
            ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              lStack_218 = *(undefined8 *)
                            (
                            ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                            + 0x20);
              uStack_210 = *(undefined8 *)
                            (
                            ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                            + 0x28);
              uStack_220 = 2;
              puVar19 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar19 = &UNK_10b3c24c8;
              }
              puVar21 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar21 = &UNK_109adfc03;
              }
              iVar9 = (**(code **)(puVar19 + 0x18))(puVar21,&uStack_220);
              if (iVar9 != 0) {
                lStack_268 = ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                             + 0x30;
                puStack_230 = &uStack_238;
                puStack_228 = &DAT_1002b2644;
                ppuStack_240 = &puStack_230;
                pcStack_248 = s__locally_reset_streams_reached_l_108ac84be;
                ppcStack_258 = &pcStack_248;
                puStack_250 = &UNK_10b1f3630;
                pppcStack_278 = &ppcStack_258;
                puStack_280 = (undefined *)0x1;
                uStack_270 = 1;
                uStack_238 = uVar20;
                goto LAB_1002a48b8;
              }
            }
          }
          puStack_280 = &UNK_10b1f34d8;
          pppcStack_278 = (char ***)&UNK_108c75460;
          lStack_268 = 0;
          uStack_270 = 0x18;
          uStack_260 = 0xb;
          goto LAB_1002a4788;
        }
      }
      else {
        uVar17 = *(ulong *)(piVar13 + 0x14);
      }
      *(ulong *)(piVar13 + 0x14) = uVar17 + 1;
      cVar14 = *pcVar2;
    }
    FUN_1002a19f0(uVar10,*puVar3,cVar14,param_4,plVar15,piVar13,uVar4);
    __ZN2h25proto7streams4recv4Recv24enqueue_reset_expiration17h246d203a9ffc409cE
              (unaff_x22,plVar15,piVar13);
    uVar1 = *(uint *)(plVar15 + 1);
    uStack_220 = plVar15[1];
    if ((((ulong)uVar1 < *(ulong *)(*plVar15 + 0x10)) &&
        (plVar16 = (long *)(*(long *)(*plVar15 + 8) + (ulong)uVar1 * 0x140), *plVar16 != 2)) &&
       (*(int *)((long)plVar16 + 0x124) == *(int *)((long)plVar15 + 0xc))) {
      lVar18 = plVar16[0x15];
      plVar16[0x15] = 0;
      if (lVar18 != 0) {
        (**(code **)(lVar18 + 8))(plVar16[0x16]);
      }
      puStack_280 = (undefined *)0x0;
LAB_1002a4788:
      lStack_218 = plVar15[1];
      uStack_220 = *plVar15;
      __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
                (piVar13,&uStack_220,(int)lVar5 != 1000000000);
      puVar11[1] = pppcStack_278;
      *puVar11 = puStack_280;
      puVar11[3] = lStack_268;
      puVar11[2] = uStack_270;
      puVar11[4] = CONCAT44(uStack_25c,uStack_260);
      return;
    }
  }
  else {
    puStack_280 = (undefined *)((long)&uStack_220 + 4);
    pppcStack_278 = (char ***)&DAT_10571bc44;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b15a2c,&puStack_280,&UNK_10b3a3ca8);
  }
  puStack_280 = (undefined *)((long)&uStack_220 + 4);
  pppcStack_278 = (char ***)&DAT_10571bc44;
  plVar15 = (long *)&UNK_10b3a3cc0;
  uVar10 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                     (s__dangling_store_key_for_stream_i_108b15a2c,&puStack_280);
  if (((ulong)unaff_x23 & 1) == 0) {
    plVar15 = (long *)0x18;
    (**(code **)(unaff_x22 + 0x20))(&lStack_268,&UNK_108c75460);
  }
  __Unwind_Resume(uVar10);
  auVar23 = FUN_107c05ccc();
  puVar12 = auVar23._0_8_;
  uVar1 = (uint)plVar15[1];
  auStack_310 = (undefined1  [8])plVar15[1];
  if ((((ulong)uVar1 < *(ulong *)(*plVar15 + 0x10)) &&
      (plVar16 = (long *)(*(long *)(*plVar15 + 8) + (ulong)uVar1 * 0x140), *plVar16 != 2)) &&
     (*(int *)((long)plVar16 + 0x124) == *(int *)((long)plVar15 + 0xc))) {
    lVar5 = plVar16[9];
    _memcpy(&uStack_430,param_4,0x120);
    uVar10 = param_4[0x24];
    plVar16 = (long *)param_4[0x25];
    __ZN2h25proto7streams4recv4Recv17recv_push_promise17h1c681163056a63d9E
              (&cStack_458,uVar10,&uStack_430,plVar15);
    if (cStack_458 == '\x03') {
      uStack_430 = (long *)CONCAT44(1,(int)uStack_430);
      puStack_428 = (undefined *)plVar15[1];
      uStack_430 = (long *)CONCAT71(uStack_430._1_7_,3);
LAB_1002a4b08:
      uStack_308 = plVar15[1];
      auStack_310 = (undefined1  [8])*plVar15;
      __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
                (auVar23._8_8_,auStack_310,(int)lVar5 != 1000000000);
      puVar12[1] = (ulong)puStack_428;
      *puVar12 = (ulong)uStack_430;
      puVar12[3] = uStack_418;
      puVar12[2] = uStack_420;
      puVar12[4] = uStack_410;
      return;
    }
    if (*plVar16 == 0) {
      thunk_FUN_1087d4f48(plVar16);
    }
    iVar9 = _pthread_mutex_lock();
    if (iVar9 == 0) {
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) {
        bVar8 = 0;
        cVar14 = (char)plVar16[1];
        uVar17 = uStack_450;
        uStack_420 = uStack_448;
        uStack_418 = uStack_440;
        uStack_410 = uStack_438;
        puVar19 = puStack_428;
      }
      else {
        bVar8 = FUN_107c05e34();
        bVar8 = bVar8 ^ 1;
        cVar14 = (char)plVar16[1];
        uVar17 = uStack_450;
        uStack_420 = uStack_448;
        uStack_418 = uStack_440;
        uStack_410 = uStack_438;
        puVar19 = puStack_428;
      }
      puStack_428 = (undefined *)uVar17;
      if (cVar14 == '\0') {
        uStack_430._0_4_ = iStack_457 << 8;
        FUN_1002a7860(auStack_310,uVar10,plVar16 + 2,plVar15,auVar23._8_8_,&uStack_430);
        puVar19 = (undefined *)uStack_308;
        auVar6 = auStack_310;
        uVar17 = uStack_2f8;
        uVar20 = uStack_300;
        uVar22 = uStack_2f0;
        if (auStack_310[0] == '\x03') {
          uStack_430 = (long *)(ulong)CONCAT31((int3)((uint)(int)uStack_430 >> 8),3);
          puVar19 = puStack_428;
          auVar6 = (undefined1  [8])uStack_430;
          uVar17 = uStack_418;
          uVar20 = uStack_420;
          uVar22 = uStack_410;
        }
        uStack_410 = uVar22;
        uStack_420 = uVar20;
        uStack_418 = uVar17;
        uStack_430 = (long *)auVar6;
        puStack_428 = puVar19;
        if ((((bVar8 & 1) == 0) &&
            ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
             0x7fffffffffffffff) != 0)) && (uVar17 = FUN_107c05e34(), (uVar17 & 1) == 0)) {
          *(undefined1 *)(plVar16 + 1) = 1;
        }
        _pthread_mutex_unlock(*plVar16);
        goto LAB_1002a4b08;
      }
      puStack_428 = (undefined *)CONCAT71((int7)((ulong)puVar19 >> 8),bVar8);
      uStack_430 = plVar16;
      FUN_107c05cb4(&UNK_108c7587c,0x2b,&uStack_430,&UNK_10b1f5848,&UNK_10b1f5198);
    }
    else {
      thunk_FUN_108a81ad4();
    }
  }
  else {
    uStack_430 = (long *)(auStack_310 + 4);
    puStack_428 = &DAT_10571bc44;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b15a2c,&uStack_430,&UNK_10b3a3ca8);
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a4bf0);
  (*pcVar7)();
}

