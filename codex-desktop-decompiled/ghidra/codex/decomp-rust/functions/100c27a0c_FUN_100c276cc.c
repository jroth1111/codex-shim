
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c276cc(undefined8 *param_1,int *param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [8];
  ulong uVar7;
  code *pcVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong *puVar12;
  char cVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long unaff_x22;
  long lVar17;
  ulong unaff_x23;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  char cStack_2b8;
  int iStack_2b7;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  undefined1 auStack_170 [8];
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined *puStack_e0;
  char ***pppcStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char **ppcStack_b8;
  undefined *puStack_b0;
  char *pcStack_a8;
  ulong **ppuStack_a0;
  ulong uStack_98;
  ulong *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar1 = *(uint *)(param_3 + 1);
  uStack_80 = param_3[1];
  if ((((ulong)uVar1 < *(ulong *)(*param_3 + 0x10)) &&
      (plVar14 = (long *)(*(long *)(*param_3 + 8) + (ulong)uVar1 * 0x140), *plVar14 != 2)) &&
     (*(int *)((long)plVar14 + 0x124) == *(int *)((long)param_3 + 0xc))) {
    lVar5 = plVar14[9];
    pcVar2 = (char *)*param_4;
    unaff_x22 = param_4[1];
    uVar11 = param_4[2];
    uVar4 = param_4[3];
    puVar3 = (undefined4 *)param_4[4];
    param_4 = (undefined8 *)param_4[5];
    cVar13 = *pcVar2;
    if (cVar13 == '\x01') {
      if (*param_2 == 1) {
        uVar20 = *(ulong *)(param_2 + 2);
        uVar16 = *(ulong *)(param_2 + 0x14);
        if (uVar20 <= uVar16) {
          if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
             (((bVar9 = bRam000000010b632900, bRam000000010b632900 - 1 < 2 ||
               ((bRam000000010b632900 != 0 &&
                (bVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                                   ), bVar9 != 0)))) &&
              (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                                   ,bVar9), iVar10 != 0)))) {
            lStack_c8 = ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                        + 0x30;
            puStack_90 = &uStack_98;
            puStack_88 = &DAT_100c929e0;
            ppuStack_a0 = &puStack_90;
            pcStack_a8 = s__locally_reset_streams_reached_l_108ac84be;
            ppcStack_b8 = &pcStack_a8;
            puStack_b0 = &UNK_10b208fd0;
            pppcStack_d8 = &ppcStack_b8;
            puStack_e0 = (undefined *)0x1;
            uStack_d0 = 1;
            uStack_98 = uVar20;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                       ,&puStack_e0);
            lVar17 = 
            ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              lStack_78 = *(undefined8 *)
                           (
                           ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                           + 0x20);
              uStack_70 = *(undefined8 *)
                           (
                           ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                           + 0x28);
              uStack_80 = 2;
              puVar18 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar18 = &UNK_10b3c24c8;
              }
              puVar19 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar19 = &UNK_109adfc03;
              }
              iVar10 = (**(code **)(puVar18 + 0x18))(puVar19,&uStack_80);
              if (iVar10 != 0) {
LAB_100c27a3c:
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar17,puVar19,puVar18,&uStack_80,&puStack_e0);
              }
            }
          }
          else {
            lVar17 = 
            ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              lStack_78 = *(undefined8 *)
                           (
                           ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                           + 0x20);
              uStack_70 = *(undefined8 *)
                           (
                           ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                           + 0x28);
              uStack_80 = 2;
              puVar18 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar18 = &UNK_10b3c24c8;
              }
              puVar19 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar19 = &UNK_109adfc03;
              }
              iVar10 = (**(code **)(puVar18 + 0x18))(puVar19,&uStack_80);
              if (iVar10 != 0) {
                lStack_c8 = ___ZN2h25proto7streams7streams7Actions10send_reset28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h767901a4bb1483b8E
                            + 0x30;
                puStack_90 = &uStack_98;
                puStack_88 = &DAT_100c929e0;
                ppuStack_a0 = &puStack_90;
                pcStack_a8 = s__locally_reset_streams_reached_l_108ac84be;
                ppcStack_b8 = &pcStack_a8;
                puStack_b0 = &UNK_10b208fd0;
                pppcStack_d8 = &ppcStack_b8;
                puStack_e0 = (undefined *)0x1;
                uStack_d0 = 1;
                uStack_98 = uVar20;
                goto LAB_100c27a3c;
              }
            }
          }
          puStack_e0 = &UNK_10b209220;
          pppcStack_d8 = (char ***)&UNK_108cb0b23;
          lStack_c8 = 0;
          uStack_d0 = 0x18;
          uStack_c0 = 0xb;
          goto LAB_100c2790c;
        }
      }
      else {
        uVar16 = *(ulong *)(param_2 + 0x14);
      }
      *(ulong *)(param_2 + 0x14) = uVar16 + 1;
      cVar13 = *pcVar2;
    }
    FUN_100c24b74(uVar11,*puVar3,cVar13,param_4,param_3,param_2,uVar4);
    __ZN2h25proto7streams4recv4Recv24enqueue_reset_expiration17h246d203a9ffc409cE
              (unaff_x22,param_3,param_2);
    uVar1 = *(uint *)(param_3 + 1);
    uStack_80 = param_3[1];
    if ((((ulong)uVar1 < *(ulong *)(*param_3 + 0x10)) &&
        (plVar14 = (long *)(*(long *)(*param_3 + 8) + (ulong)uVar1 * 0x140), *plVar14 != 2)) &&
       (*(int *)((long)plVar14 + 0x124) == *(int *)((long)param_3 + 0xc))) {
      lVar17 = plVar14[0x15];
      plVar14[0x15] = 0;
      if (lVar17 != 0) {
        (**(code **)(lVar17 + 8))(plVar14[0x16]);
      }
      puStack_e0 = (undefined *)0x0;
LAB_100c2790c:
      lStack_78 = param_3[1];
      uStack_80 = *param_3;
      __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
                (param_2,&uStack_80,(int)lVar5 != 1000000000);
      param_1[1] = pppcStack_d8;
      *param_1 = puStack_e0;
      param_1[3] = lStack_c8;
      param_1[2] = uStack_d0;
      param_1[4] = CONCAT44(uStack_bc,uStack_c0);
      return;
    }
  }
  else {
    puStack_e0 = (undefined *)((long)&uStack_80 + 4);
    pppcStack_d8 = (char ***)&DAT_10571bc44;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b15a2c,&puStack_e0,&UNK_10b3a3ca8);
  }
  puStack_e0 = (undefined *)((long)&uStack_80 + 4);
  pppcStack_d8 = (char ***)&DAT_10571bc44;
  plVar14 = (long *)&UNK_10b3a3cc0;
  uVar11 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                     (s__dangling_store_key_for_stream_i_108b15a2c,&puStack_e0);
  if ((unaff_x23 & 1) == 0) {
    plVar14 = (long *)0x18;
    (**(code **)(unaff_x22 + 0x20))(&lStack_c8,&UNK_108cb0b23);
  }
  __Unwind_Resume(uVar11);
  auVar21 = func_0x000108a07bc4();
  puVar12 = auVar21._0_8_;
  uVar1 = (uint)plVar14[1];
  auStack_170 = (undefined1  [8])plVar14[1];
  if ((((ulong)uVar1 < *(ulong *)(*plVar14 + 0x10)) &&
      (plVar15 = (long *)(*(long *)(*plVar14 + 8) + (ulong)uVar1 * 0x140), *plVar15 != 2)) &&
     (*(int *)((long)plVar15 + 0x124) == *(int *)((long)plVar14 + 0xc))) {
    lVar5 = plVar15[9];
    _memcpy(&uStack_290,param_4,0x120);
    uVar11 = param_4[0x24];
    plVar15 = (long *)param_4[0x25];
    __ZN2h25proto7streams4recv4Recv17recv_push_promise17h1c681163056a63d9E
              (&cStack_2b8,uVar11,&uStack_290,plVar14);
    if (cStack_2b8 == '\x03') {
      uStack_290 = (long *)CONCAT44(1,(int)uStack_290);
      puStack_288 = (undefined *)plVar14[1];
      uStack_290 = (long *)CONCAT71(uStack_290._1_7_,3);
LAB_100c27c8c:
      uStack_168 = plVar14[1];
      auStack_170 = (undefined1  [8])*plVar14;
      __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
                (auVar21._8_8_,auStack_170,(int)lVar5 != 1000000000);
      puVar12[1] = (ulong)puStack_288;
      *puVar12 = (ulong)uStack_290;
      puVar12[3] = uStack_278;
      puVar12[2] = uStack_280;
      puVar12[4] = uStack_270;
      return;
    }
    if (*plVar15 == 0) {
      FUN_108854158(plVar15);
    }
    iVar10 = _pthread_mutex_lock();
    if (iVar10 == 0) {
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) {
        bVar9 = 0;
        cVar13 = (char)plVar15[1];
        uVar16 = uStack_2b0;
        uStack_280 = uStack_2a8;
        uStack_278 = uStack_2a0;
        uStack_270 = uStack_298;
        puVar18 = puStack_288;
      }
      else {
        bVar9 = func_0x000108a82c0c();
        bVar9 = bVar9 ^ 1;
        cVar13 = (char)plVar15[1];
        uVar16 = uStack_2b0;
        uStack_280 = uStack_2a8;
        uStack_278 = uStack_2a0;
        uStack_270 = uStack_298;
        puVar18 = puStack_288;
      }
      puStack_288 = (undefined *)uVar16;
      if (cVar13 == '\0') {
        uStack_290._0_4_ = iStack_2b7 << 8;
        FUN_100c2a794(auStack_170,uVar11,plVar15 + 2,plVar14,auVar21._8_8_,&uStack_290);
        puVar18 = (undefined *)uStack_168;
        auVar6 = auStack_170;
        uVar16 = uStack_158;
        uVar20 = uStack_160;
        uVar7 = uStack_150;
        if (auStack_170[0] == '\x03') {
          uStack_290 = (long *)(ulong)CONCAT31((int3)((uint)(int)uStack_290 >> 8),3);
          puVar18 = puStack_288;
          auVar6 = (undefined1  [8])uStack_290;
          uVar16 = uStack_278;
          uVar20 = uStack_280;
          uVar7 = uStack_270;
        }
        uStack_270 = uVar7;
        uStack_280 = uVar20;
        uStack_278 = uVar16;
        uStack_290 = (long *)auVar6;
        puStack_288 = puVar18;
        if ((((bVar9 & 1) == 0) &&
            ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
             0x7fffffffffffffff) != 0)) && (uVar16 = func_0x000108a82c0c(), (uVar16 & 1) == 0)) {
          *(undefined1 *)(plVar15 + 1) = 1;
        }
        _pthread_mutex_unlock(*plVar15);
        goto LAB_100c27c8c;
      }
      puStack_288 = (undefined *)CONCAT71((int7)((ulong)puVar18 >> 8),bVar9);
      uStack_290 = plVar15;
      func_0x000108a07a3c(&UNK_108cc408f,0x2b,&uStack_290,&UNK_10b235220,&UNK_10b233c68);
    }
    else {
      FUN_108a81ad4();
    }
  }
  else {
    uStack_290 = (long *)(auStack_170 + 4);
    puStack_288 = &DAT_10571bc44;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b15a2c,&uStack_290,&UNK_10b3a3ca8);
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100c27d74);
  (*pcVar8)();
}

