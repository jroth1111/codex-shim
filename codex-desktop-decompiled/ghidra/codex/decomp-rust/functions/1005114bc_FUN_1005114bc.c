
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005114bc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  undefined1 uVar11;
  uint extraout_w8;
  long lVar12;
  code *pcVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  uint uVar19;
  ulong uVar20;
  char *pcVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined1 (*pauVar24) [16];
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  byte bVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  undefined8 uVar32;
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  undefined1 *puVar37;
  undefined *puVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  undefined8 uVar41;
  undefined8 *puVar42;
  undefined8 uVar43;
  byte bVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  undefined1 auVar49 [16];
  undefined1 *puStack_500;
  undefined8 *puStack_4f8;
  undefined1 (*pauStack_4e8) [16];
  undefined1 (*pauStack_4e0) [16];
  undefined1 (*pauStack_4c8) [16];
  undefined1 (*pauStack_4b0) [16];
  long alStack_4a0 [62];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 (*pauStack_2a0) [16];
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  undefined1 uStack_281;
  undefined1 (*pauStack_280) [16];
  undefined1 (*pauStack_278) [16];
  undefined1 (*pauStack_270) [16];
  undefined1 (*pauStack_268) [16];
  undefined1 (*pauStack_260) [16];
  undefined1 (*pauStack_258) [16];
  undefined1 (*pauStack_250) [16];
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  undefined1 (*pauStack_238) [16];
  undefined1 (*pauStack_230) [16];
  undefined1 (*pauStack_228) [16];
  undefined1 (*pauStack_220) [16];
  undefined1 (*pauStack_218) [16];
  undefined1 (*pauStack_210) [16];
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
  undefined1 (**ppauStack_1f0) [16];
  undefined *puStack_1e8;
  long *plStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 (*pauStack_1b0) [16];
  undefined1 (*pauStack_1a8) [16];
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 (*pauStack_180) [16];
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined1 (*pauStack_128) [16];
  undefined1 auStack_120 [16];
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c0) [16];
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 (*pauStack_90) [16];
  undefined *puStack_88;
  
  bVar3 = *(byte *)(param_2 + 0x27a);
  if (bVar3 < 5) {
    if (bVar3 < 3) {
      if (bVar3 != 0) {
        if (bVar3 == 1) {
          FUN_107c05cc0();
          uVar19 = extraout_w8;
LAB_100512048:
          if (uVar19 == 1) {
            FUN_107c05cc0(&UNK_10b216238);
            goto LAB_1005152e0;
          }
        }
        else {
          FUN_107c05cc4(&UNK_10b216250);
        }
        FUN_107c05cc4(&UNK_10b216238);
        goto LAB_1005152e0;
      }
      *(undefined2 *)(param_2 + 0x278) = 0;
      *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x270);
      *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_2 + 0x1f0);
      *(undefined8 *)(param_2 + 0x280) = *(undefined8 *)(param_2 + 0x270);
      *(undefined1 *)(param_2 + 0x300) = 0;
LAB_100511574:
      lVar12 = FUN_10059e730(param_2 + 0x280,param_3);
      if (lVar12 == 0) {
        *param_1 = 0x8000000000000001;
        uVar11 = 3;
        goto LAB_1005153a4;
      }
      *(long *)(param_2 + 0x208) = lVar12;
      if ((((*(char *)(param_2 + 0x300) == '\x03') && (*(char *)(param_2 + 0x2f8) == '\x03')) &&
          (*(char *)(param_2 + 0x2f0) == '\x03')) && (*(char *)(param_2 + 0x2a8) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_2 + 0x2b0);
        if (*(long *)(param_2 + 0x2b8) != 0) {
          (**(code **)(*(long *)(param_2 + 0x2b8) + 0x18))(*(undefined8 *)(param_2 + 0x2c0));
        }
      }
      uVar32 = *(undefined8 *)(*(long *)(param_2 + 0x208) + 0x1bc8);
      lVar12 = *(long *)(*(long *)(param_2 + 0x208) + 0x1bd0);
      if (lVar12 == 0) {
        lVar9 = 1;
      }
      else {
        lVar9 = _malloc(lVar12);
        if (lVar9 == 0) {
          FUN_107c03c64(1,lVar12);
          goto LAB_1005152e0;
        }
      }
      _memcpy(lVar9,uVar32,lVar12);
      *(long *)(param_2 + 0x210) = lVar12;
      *(long *)(param_2 + 0x218) = lVar9;
      *(long *)(param_2 + 0x220) = lVar12;
      *(undefined8 *)(param_2 + 0x280) = *(undefined8 *)(param_2 + 0x1f8);
      *(undefined1 *)(param_2 + 0x300) = 0;
    }
    else if (bVar3 == 3) goto LAB_100511574;
    FUN_1005a3614(alStack_4a0,param_2 + 0x280,param_3);
    if (alStack_4a0[0] == 3) {
      *param_1 = 0x8000000000000001;
      uVar11 = 4;
      goto LAB_1005153a4;
    }
    _memcpy(param_2,alStack_4a0,0x1f0);
    if (((*(char *)(param_2 + 0x300) == '\x03') && (*(char *)(param_2 + 0x2f8) == '\x03')) &&
       ((*(char *)(param_2 + 0x2f0) == '\x03' && (*(char *)(param_2 + 0x2a8) == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_2 + 0x2b0);
      if (*(long *)(param_2 + 0x2b8) != 0) {
        (**(code **)(*(long *)(param_2 + 0x2b8) + 0x18))(*(undefined8 *)(param_2 + 0x2c0));
      }
    }
    func_0x000102d55cf8(param_2 + 0x228,*(undefined8 *)(param_2 + 0x1d8),
                        *(undefined8 *)(param_2 + 0x1e0));
    *(undefined1 *)(param_2 + 0x279) = 1;
    lVar12 = *(long *)(param_2 + 0x1f8);
    *(long *)(param_2 + 0x280) = lVar12;
    *(undefined1 *)(param_2 + 0x298) = 0;
LAB_1005117a4:
    pauStack_240 = (undefined1 (*) [16])0x0;
    pauStack_238 = (undefined1 (*) [16])0x8;
    pauStack_228 = (undefined1 (*) [16])0x8000000000000000;
    pauStack_230 = (undefined1 (*) [16])0x0;
    pauStack_210 = (undefined1 (*) [16])0x8000000000000000;
    puStack_1f8 = (undefined *)0x8000000000000000;
    uStack_1c8 = 0x28;
    plStack_1e0 = (long *)0x8000000000000000;
    uStack_1c0 = 0x101;
    auVar49 = (**(code **)(*(long *)(lVar12 + 1000) + 0x78))
                        (*(long *)(lVar12 + 0x3e0) +
                         (*(long *)(*(long *)(lVar12 + 1000) + 0x10) - 1U & 0xfffffffffffffff0) +
                         0x10,&pauStack_240);
    *(undefined1 (*) [16])(param_2 + 0x288) = auVar49;
LAB_100511810:
    (**(code **)(auVar49._8_8_ + 0x18))(&pauStack_240,auVar49._0_8_,param_3);
    pauVar30 = pauStack_220;
    pauVar14 = pauStack_228;
    pauVar33 = pauStack_230;
    pauVar29 = pauStack_238;
    pauVar35 = pauStack_240;
    if (pauStack_240 == (undefined1 (*) [16])0x8000000000000001) {
      *(undefined1 *)(param_2 + 0x298) = 3;
      *param_1 = 0x8000000000000001;
      uVar11 = 5;
      goto LAB_1005153a4;
    }
    uVar32 = *(undefined8 *)(param_2 + 0x288);
    puVar42 = *(undefined8 **)(param_2 + 0x290);
    pcVar13 = (code *)*puVar42;
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(uVar32);
    }
    if (puVar42[1] != 0) {
      _free(uVar32);
    }
    if (pauVar35 == (undefined1 (*) [16])0x8000000000000000) {
      pauStack_c0 = pauVar29;
      pauStack_b8 = pauVar33;
      pauStack_b0 = pauVar14;
      pauStack_a8 = pauVar30;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b629c58 - 1 < 2 ||
           ((bRam000000010b629c58 != 0 &&
            (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN10codex_core16realtime_context19load_recent_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98ac2302b4df56efE
                               ), cVar6 != '\0')))) &&
          (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_core16realtime_context19load_recent_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98ac2302b4df56efE
                             ), (uVar8 & 1) != 0)))) {
        pauStack_228 = (undefined1 (*) [16])
                       (
                       ___ZN10codex_core16realtime_context19load_recent_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98ac2302b4df56efE
                       + 0x30);
        pauStack_180 = (undefined1 (*) [16])&pauStack_c0;
        pauStack_178 = (undefined1 (*) [16])
                       &
                       __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
        ;
        pauStack_d0 = (undefined1 (*) [16])&pauStack_180;
        pauStack_d8 = (undefined1 (*) [16])s__failed_to_load_realtime_startup_108ac02e8;
        pauStack_f0 = (undefined1 (*) [16])&pauStack_d8;
        pauStack_e8 = (undefined1 (*) [16])&UNK_10b208fd0;
        pauStack_238 = (undefined1 (*) [16])&pauStack_f0;
        pauStack_240 = (undefined1 (*) [16])0x1;
        pauStack_230 = (undefined1 (*) [16])0x1;
        FUN_100511380(&pauStack_240);
      }
      else {
        lVar12 = 
        ___ZN10codex_core16realtime_context19load_recent_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98ac2302b4df56efE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pauStack_138 = *(undefined1 (**) [16])
                          (
                          ___ZN10codex_core16realtime_context19load_recent_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98ac2302b4df56efE
                          + 0x20);
          pauStack_130 = *(undefined1 (**) [16])
                          (
                          ___ZN10codex_core16realtime_context19load_recent_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98ac2302b4df56efE
                          + 0x28);
          pauStack_140 = (undefined1 (*) [16])0x2;
          puVar38 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar38 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar38 + 0x18))(puVar2,&pauStack_140);
          if (iVar7 != 0) {
            pauStack_228 = (undefined1 (*) [16])
                           (
                           ___ZN10codex_core16realtime_context19load_recent_threads28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h98ac2302b4df56efE
                           + 0x30);
            pauStack_180 = (undefined1 (*) [16])&pauStack_c0;
            pauStack_178 = (undefined1 (*) [16])
                           &
                           __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
            ;
            pauStack_d0 = (undefined1 (*) [16])&pauStack_180;
            pauStack_d8 = (undefined1 (*) [16])s__failed_to_load_realtime_startup_108ac02e8;
            pauStack_f0 = (undefined1 (*) [16])&pauStack_d8;
            pauStack_e8 = (undefined1 (*) [16])&UNK_10b208fd0;
            pauStack_238 = (undefined1 (*) [16])&pauStack_f0;
            pauStack_240 = (undefined1 (*) [16])0x1;
            pauStack_230 = (undefined1 (*) [16])0x1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar12,puVar2,puVar38,&pauStack_140,&pauStack_240);
          }
        }
      }
      if ((byte)pauStack_c0 < 2) {
        if ((byte)pauStack_c0 != 0) {
LAB_100511a68:
          if (pauStack_b8 != (undefined1 (*) [16])0x0) {
            _free(pauStack_b0);
          }
        }
      }
      else if (((byte)pauStack_c0 == 2) || ((byte)pauStack_c0 != 3)) goto LAB_100511a68;
      pauVar33 = (undefined1 (*) [16])0x0;
      pauVar35 = (undefined1 (*) [16])0x0;
      pauVar29 = (undefined1 (*) [16])0x8;
    }
    else if (((ulong)pauVar14 & 0x7fffffffffffffff) != 0) {
      _free(pauVar30);
    }
    *(undefined1 *)(param_2 + 0x298) = 1;
    *(undefined1 (**) [16])(param_2 + 0x240) = pauVar35;
    *(undefined1 (**) [16])(param_2 + 0x248) = pauVar29;
    *(undefined1 (**) [16])(param_2 + 0x250) = pauVar33;
    lVar12 = param_2 + 0x210;
    *(undefined1 (**) [16])(param_2 + 0x2b0) = pauVar29;
    *(undefined1 (**) [16])(param_2 + 0x2b8) = pauVar33;
    *(long *)(param_2 + 0x2c8) = lVar12;
    *(undefined1 *)(param_2 + 0x2d3) = 0;
LAB_100511ab8:
    puStack_4f8 = (undefined8 *)(param_2 + 0x280);
    *(undefined2 *)(param_2 + 0x2d0) = 0;
    *(undefined1 *)(param_2 + 0x2d2) = 0;
    *(long *)(param_2 + 0x2c0) = lVar12;
    pauVar35 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar35[1][0] == '\x01') {
      auVar49 = *pauVar35;
    }
    else {
      auVar49 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar35 + 8) = auVar49._8_8_;
      pauVar35[1][0] = 1;
    }
    *(long *)*pauVar35 = auVar49._0_8_ + 1;
    *(undefined8 *)(param_2 + 0x288) = 0;
    *puStack_4f8 = &UNK_108c56c70;
    *(undefined8 *)(param_2 + 0x298) = 0;
    *(undefined8 *)(param_2 + 0x290) = 0;
    *(undefined1 (*) [16])(param_2 + 0x2a0) = auVar49;
    *(undefined1 *)(param_2 + 0x2d0) = 1;
    pauVar35 = (undefined1 (*) [16])((long)pauVar29 + (long)pauVar33 * 0x278);
    *(undefined1 (**) [16])(param_2 + 0x458) = pauVar29;
    *(undefined1 (**) [16])(param_2 + 0x460) = pauVar35;
    if (pauVar29 != pauVar35) goto LAB_100515734;
LAB_100511b2c:
    if (lRam000000010b62c4d8 != 0) {
      pauStack_c0 = (undefined1 (*) [16])
                    &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
      pauStack_240 = (undefined1 (*) [16])&pauStack_c0;
      __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                (0x10b62c4d8,1,&pauStack_240,&UNK_10b234158,&UNK_10b2340c8);
    }
    lVar12 = lRam000000010b62c4d0;
    *(ulong *)(param_2 + 0x2e8) =
         ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE +
         (*(long *)(lRam000000010b62c4d0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    *(long *)(param_2 + 0x2f0) = lVar12;
    *(undefined8 *)(param_2 + 0x328) = *(undefined8 *)(param_2 + 0x2c0);
    *(undefined1 *)(param_2 + 0x331) = 0;
LAB_100511b68:
    pauVar35 = (undefined1 (*) [16])(param_2 + 0x2d8);
    FUN_10085c0c8(&pauStack_240,pauVar35,param_3);
    pauVar29 = pauStack_240;
    if (pauStack_240 == (undefined1 (*) [16])0x8000000000000001) {
      uVar11 = 4;
LAB_10051538c:
      puStack_500 = (undefined1 *)(param_2 + 0x2d3);
      *puStack_500 = uVar11;
    }
    else {
      pauStack_1a8 = pauStack_230;
      pauStack_1b0 = pauStack_238;
      FUN_100cb96cc(pauVar35);
      if (pauVar29 == (undefined1 (*) [16])0x8000000000000000) {
        uVar32 = *(undefined8 *)(*(long *)(param_2 + 0x2c0) + 8);
        lVar12 = *(long *)(*(long *)(param_2 + 0x2c0) + 0x10);
        if (lVar12 == 0) {
          lVar9 = 1;
        }
        else {
          lVar9 = _malloc(lVar12);
          if (lVar9 == 0) {
            FUN_107c03c64(1,lVar12);
            goto LAB_1005152e0;
          }
        }
        _memcpy(lVar9,uVar32,lVar12);
        *(long *)(param_2 + 0x2d8) = lVar12;
        *(long *)(param_2 + 0x2e0) = lVar9;
        *(long *)(param_2 + 0x2e8) = lVar12;
      }
      else {
        *(undefined1 (**) [16])(param_2 + 0x2d8) = pauVar29;
        *(undefined1 (**) [16])(param_2 + 0x2e8) = pauStack_1a8;
        *(undefined1 (**) [16])(param_2 + 0x2e0) = pauStack_1b0;
      }
      *(undefined1 *)(param_2 + 0x2d0) = 0;
      pauStack_a8 = *(undefined1 (**) [16])(param_2 + 0x280);
      lVar12 = *(long *)(param_2 + 0x288);
      pauVar14 = *(undefined1 (**) [16])(param_2 + 0x298);
      lVar9 = *(long *)*pauStack_a8;
      pauVar29 = pauVar14;
      pauVar33 = pauVar14;
      if (lVar12 != 0) {
        pauVar29 = pauStack_a8 + lVar12 * -3 + -3;
        pauVar33 = (undefined1 (*) [16])(lVar12 * 0x31 + 0x39);
      }
      pauStack_c0 = (undefined1 (*) [16])0x0;
      if (lVar12 != 0) {
        pauStack_c0 = (undefined1 (*) [16])0x8;
      }
      pauStack_98 = (undefined1 (*) [16])(*pauStack_a8 + 8);
      pauStack_90 = (undefined1 (*) [16])(*pauStack_a8 + lVar12 + 1);
      pauStack_b8 = pauVar33;
      pauStack_b0 = pauVar29;
      if (pauVar14 == (undefined1 (*) [16])0x0) {
        *(undefined8 *)(param_2 + 0x2f0) = 0;
        *(undefined8 *)(param_2 + 0x2f8) = 8;
        *(undefined8 *)(param_2 + 0x300) = 0;
LAB_100511dbc:
        if ((lVar12 != 0) && (pauVar33 != (undefined1 (*) [16])0x0)) {
          _free(pauVar29);
        }
      }
      else {
        uVar8 = CONCAT17(-(-1 < lVar9),
                         CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                  CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                           CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                    CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                             CONCAT12(-(-1 < (char)((ulong)lVar9 >>
                                                                                   0x10)),
                                                                      CONCAT11(-(-1 < (char)((ulong)
                                                  lVar9 >> 8)),-(-1 < (char)lVar9))))))));
        while (uVar8 = uVar8 & 0x8080808080808080, uVar8 == 0) {
          lVar9 = *(long *)*pauStack_98;
          pauStack_a8 = pauStack_a8 + -0x18;
          pauStack_98 = (undefined1 (*) [16])(*pauStack_98 + 8);
          uVar8 = CONCAT17(-(-1 < lVar9),
                           CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar9
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar9 >> 8)),-(-1 < (char)lVar9))))))));
        }
        uVar20 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        pauStack_a0 = (undefined1 (*) [16])(uVar8 - 1 & uVar8);
        iVar7 = (int)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
        puStack_88 = pauVar14[-1] + 0xf;
        lVar9 = *(long *)pauStack_a8[(long)-iVar7 * 3 + -3];
        if (lVar9 == -0x8000000000000000) {
          *(undefined8 *)(param_2 + 0x2f0) = 0;
          *(undefined8 *)(param_2 + 0x2f8) = 8;
          *(undefined8 *)(param_2 + 0x300) = 0;
          pauVar14 = pauStack_a8;
          pauVar30 = pauStack_98;
          pauVar40 = pauStack_a0;
          puVar38 = puStack_88;
          if (puStack_88 != (undefined *)0x0) {
            do {
              while (pauVar40 == (undefined1 (*) [16])0x0) {
                lVar9 = *(long *)*pauVar30;
                pauVar14 = pauVar14 + -0x18;
                pauVar30 = (undefined1 (*) [16])(*pauVar30 + 8);
                pauVar40 = (undefined1 (*) [16])
                           (CONCAT17(-(-1 < lVar9),
                                     CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                              CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                                       CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20))
                                                                ,CONCAT13(-(-1 < (char)((ulong)lVar9
                                                                                       >> 0x18)),
                                                                          CONCAT12(-(-1 < (char)((
                                                  ulong)lVar9 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar9 >> 8)),
                                                           -(-1 < (char)lVar9)))))))) &
                           0x8080808080808080);
              }
              uVar8 = ((ulong)pauVar40 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      ((ulong)pauVar40 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
              iVar7 = (int)((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
              if (*(long *)pauVar14[(long)-iVar7 * 3 + -3] != 0) {
                _free(*(undefined8 *)(pauVar14[(long)-iVar7 * 3 + -3] + 8));
              }
              if (*(long *)(pauVar14[(long)-iVar7 * 3 + -2] + 8) != 0) {
                _free(*(undefined8 *)pauVar14[(long)-iVar7 * 3 + -1]);
              }
              pauVar40 = (undefined1 (*) [16])((ulong)(pauVar40[-1] + 0xf) & (ulong)pauVar40);
              puVar38 = puVar38 + -1;
            } while (puVar38 != (undefined *)0x0);
            puStack_88 = (undefined *)0x0;
            pauStack_a8 = pauVar14;
            pauStack_a0 = pauVar40;
            pauStack_98 = pauVar30;
          }
          goto LAB_100511dbc;
        }
        uVar26 = *(undefined8 *)(pauStack_a8[(long)-iVar7 * 3 + -3] + 8);
        uVar32 = *(undefined8 *)(pauStack_a8[(long)-iVar7 * 3 + -2] + 8);
        uVar23 = *(undefined8 *)pauStack_a8[(long)-iVar7 * 3 + -1];
        pauVar29 = pauVar14;
        if (pauVar14 < (undefined1 (*) [16])0x5) {
          pauVar29 = (undefined1 (*) [16])0x4;
        }
        lVar12 = (long)pauVar29 * 0x30;
        if ((undefined1 (*) [16])0x2aaaaaaaaaaaaaa < pauVar14) {
          uVar27 = 0;
LAB_100511da0:
          FUN_107c03c64(uVar27,lVar12);
          goto LAB_1005152e0;
        }
        uVar43 = *(undefined8 *)pauStack_a8[(long)-iVar7 * 3 + -2];
        uVar41 = *(undefined8 *)(pauStack_a8[(long)-iVar7 * 3 + -1] + 8);
        if (lVar12 == 0) {
          pauVar29 = (undefined1 (*) [16])0x0;
          pauVar33 = (undefined1 (*) [16])0x8;
        }
        else {
          uVar27 = 8;
          pauVar33 = (undefined1 (*) [16])__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar12,8);
          if (pauVar33 == (undefined1 (*) [16])0x0) goto LAB_100511da0;
        }
        *(long *)*pauVar33 = lVar9;
        *(undefined8 *)(*pauVar33 + 8) = uVar26;
        *(undefined8 *)pauVar33[1] = uVar43;
        *(undefined8 *)(pauVar33[1] + 8) = uVar32;
        *(undefined8 *)pauVar33[2] = uVar23;
        *(undefined8 *)(pauVar33[2] + 8) = uVar41;
        pauStack_c8 = (undefined1 (*) [16])0x1;
        pauStack_d0 = pauVar33;
        pauStack_d8 = pauVar29;
        pauVar29 = pauStack_c8;
        pauStack_238 = pauStack_b8;
        pauStack_240 = pauStack_c0;
        pauStack_228 = pauStack_a8;
        pauVar14 = pauStack_a8;
        pauStack_230 = pauStack_b0;
        puVar38 = puStack_88;
        puStack_208 = puStack_88;
        pauStack_210 = pauStack_90;
        pauStack_218 = pauStack_98;
        pauVar30 = pauStack_98;
        pauVar40 = pauStack_a0;
        pauStack_220 = pauStack_a0;
        pauVar10 = pauStack_140;
        while (puVar2 = puVar38, pauStack_c8 = pauVar29, puVar38 != (undefined *)0x0) {
          while (pauVar40 == (undefined1 (*) [16])0x0) {
            lVar12 = *(long *)*pauVar30;
            pauVar14 = pauVar14 + -0x18;
            pauVar30 = (undefined1 (*) [16])(*pauVar30 + 8);
            pauVar40 = (undefined1 (*) [16])
                       (CONCAT17(-(-1 < lVar12),
                                 CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                          CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                                   CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                            CONCAT13(-(-1 < (char)((ulong)lVar12 >>
                                                                                  0x18)),
                                                                     CONCAT12(-(-1 < (char)((ulong)
                                                  lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                       0x8080808080808080);
          }
          uVar8 = ((ulong)pauVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                  ((ulong)pauVar40 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          pauVar40 = (undefined1 (*) [16])((ulong)(pauVar40[-1] + 0xf) & (ulong)pauVar40);
          iVar7 = (int)((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3);
          pauStack_140 = *(undefined1 (**) [16])pauVar14[(long)-iVar7 * 3 + -3];
          pauStack_178 = *(undefined1 (**) [16])pauVar14[(long)-iVar7 * 3 + -2];
          pauStack_180 = *(undefined1 (**) [16])(pauVar14[(long)-iVar7 * 3 + -3] + 8);
          uStack_168 = *(undefined8 *)pauVar14[(long)-iVar7 * 3 + -1];
          pauStack_170 = *(undefined1 (**) [16])(pauVar14[(long)-iVar7 * 3 + -2] + 8);
          uStack_160 = *(undefined8 *)(pauVar14[(long)-iVar7 * 3 + -1] + 8);
          puVar2 = puVar38 + -1;
          if (pauStack_140 == (undefined1 (*) [16])0x8000000000000000) break;
          pauStack_138 = pauStack_180;
          pauStack_130 = pauStack_178;
          pauStack_128 = pauStack_170;
          auStack_120._0_8_ = uStack_168;
          auStack_120._8_8_ = uStack_160;
          if (pauVar29 == pauStack_d8) {
            thunk_FUN_108855060(&pauStack_d8,pauVar29,puVar38,8,0x30);
            pauVar33 = pauStack_d0;
          }
          pauVar10 = pauVar33 + (long)pauVar29 * 3;
          *(undefined1 (**) [16])(pauVar10[1] + 8) = pauStack_128;
          *(undefined1 (**) [16])pauVar10[1] = pauStack_130;
          *(undefined8 *)(pauVar10[2] + 8) = auStack_120._8_8_;
          *(undefined8 *)pauVar10[2] = auStack_120._0_8_;
          *(undefined1 (**) [16])(*pauVar10 + 8) = pauStack_138;
          *(undefined1 (**) [16])*pauVar10 = pauStack_140;
          pauVar29 = (undefined1 (*) [16])(*pauVar29 + 1);
          puVar38 = puVar38 + -1;
          pauVar10 = pauStack_140;
        }
        puStack_208 = puVar2;
        pauStack_218 = pauVar30;
        pauStack_220 = pauVar40;
        pauStack_228 = pauVar14;
        pauStack_140 = pauVar10;
        FUN_100d53e4c(&pauStack_240);
        *(undefined1 (**) [16])(param_2 + 0x2f8) = pauStack_d0;
        *(undefined1 (**) [16])(param_2 + 0x2f0) = pauStack_d8;
        *(undefined1 (**) [16])(param_2 + 0x300) = pauStack_c8;
      }
      *(undefined1 *)(param_2 + 0x2d2) = 1;
      uVar8 = *(ulong *)(param_2 + 0x300);
      pauStack_240 = (undefined1 (*) [16])&pauStack_c0;
      pauStack_c0 = pauVar35;
      if (1 < uVar8) {
        if (uVar8 < 0x15) {
          FUN_100e951e0(*(undefined8 *)(param_2 + 0x2f8),uVar8,&pauStack_c0);
        }
        else {
          func_0x0001034048e4(*(undefined8 *)(param_2 + 0x2f8),uVar8,&pauStack_240);
        }
      }
      *(undefined8 *)(param_2 + 0x308) = 0;
      *(undefined8 *)(param_2 + 0x310) = 8;
      *(undefined8 *)(param_2 + 0x318) = 0;
      *(undefined1 *)(param_2 + 0x2d2) = 0;
      lVar12 = *(long *)(param_2 + 0x2f8);
      *(long *)(param_2 + 800) = lVar12;
      *(long *)(param_2 + 0x328) = lVar12;
      *(undefined8 *)(param_2 + 0x330) = *(undefined8 *)(param_2 + 0x2f0);
      *(long *)(param_2 + 0x338) = lVar12 + *(long *)(param_2 + 0x300) * 0x30;
      *(undefined8 *)(param_2 + 0x340) = 8;
      lVar12 = 8;
      while (puStack_4f8 = (undefined8 *)(param_2 + 0x280), lVar12 != 0) {
        *(long *)(param_2 + 0x340) = lVar12 + -1;
        puVar22 = *(undefined8 **)(param_2 + 0x338);
        puVar42 = *(undefined8 **)(param_2 + 0x328);
        if (puVar42 == puVar22) {
          *(undefined8 *)(param_2 + 0x570) = 0x8000000000000000;
          puVar17 = puVar42;
          goto LAB_10051322c;
        }
        puVar17 = puVar42 + 6;
        *(undefined8 **)(param_2 + 0x328) = puVar17;
        uVar27 = puVar42[3];
        uVar26 = puVar42[2];
        uVar23 = puVar42[5];
        uVar32 = puVar42[4];
        uVar41 = *puVar42;
        *(undefined8 *)(param_2 + 0x578) = puVar42[1];
        *(undefined8 *)(param_2 + 0x570) = uVar41;
        *(undefined8 *)(param_2 + 0x588) = uVar27;
        *(undefined8 *)(param_2 + 0x580) = uVar26;
        *(undefined8 *)(param_2 + 0x598) = uVar23;
        *(undefined8 *)(param_2 + 0x590) = uVar32;
        if (*(long *)(param_2 + 0x570) == -0x8000000000000000) goto LAB_10051322c;
        uVar23 = puVar42[1];
        uVar32 = *puVar42;
        *(undefined8 *)(param_2 + 0x358) = puVar42[2];
        *(undefined8 *)(param_2 + 0x350) = uVar23;
        *(undefined8 *)(param_2 + 0x348) = uVar32;
        *(undefined1 *)(param_2 + 0x2d1) = 1;
        *(undefined8 *)(param_2 + 0x368) = *(undefined8 *)(param_2 + 0x590);
        *(undefined8 *)(param_2 + 0x360) = *(undefined8 *)(param_2 + 0x588);
        uVar8 = *(ulong *)(param_2 + 0x598);
        *(ulong *)(param_2 + 0x370) = uVar8;
        pauStack_240 = (undefined1 (*) [16])&pauStack_c0;
        if (1 < uVar8) {
          if (uVar8 < 0x15) {
            FUN_100e96494();
          }
          else {
            func_0x000103404c28(*(undefined8 *)(param_2 + 0x368),uVar8,&pauStack_240);
          }
        }
        uVar32 = *(undefined8 *)(param_2 + 0x2e0);
        uVar23 = *(undefined8 *)(param_2 + 0x2e8);
        uVar26 = *(undefined8 *)(param_2 + 0x350);
        uVar27 = *(undefined8 *)(param_2 + 0x358);
        *(undefined1 *)(param_2 + 0x2d1) = 0;
        *(undefined8 *)(param_2 + 0x380) = *(undefined8 *)(param_2 + 0x368);
        *(undefined8 *)(param_2 + 0x378) = *(undefined8 *)(param_2 + 0x360);
        *(undefined8 *)(param_2 + 0x388) = *(undefined8 *)(param_2 + 0x370);
        *(undefined8 *)(param_2 + 0x390) = uVar32;
        *(undefined8 *)(param_2 + 0x398) = uVar23;
        *(undefined8 *)(param_2 + 0x3a0) = uVar26;
        *(undefined8 *)(param_2 + 0x3a8) = uVar27;
        *(undefined1 *)(param_2 + 0x568) = 0;
LAB_100512344:
        *(undefined8 *)(param_2 + 0x3b0) = uVar32;
        *(undefined8 *)(param_2 + 0x3b8) = uVar23;
        *(undefined8 *)(param_2 + 0x3c0) = uVar26;
        *(undefined8 *)(param_2 + 0x3c8) = uVar27;
        *(undefined1 *)(param_2 + 0x569) = 1;
        *(undefined8 *)(param_2 + 0x3d8) = *(undefined8 *)(param_2 + 0x380);
        *(undefined8 *)(param_2 + 0x3d0) = *(undefined8 *)(param_2 + 0x378);
        *(long *)(param_2 + 0x3e0) = *(long *)(param_2 + 0x388);
        if (*(long *)(param_2 + 0x388) == 0) {
          pauStack_180 = (undefined1 (*) [16])0x8000000000000000;
          if (*(long *)(param_2 + 0x3d0) != 0) {
            _free();
          }
          *(undefined2 *)(param_2 + 0x568) = 1;
          pauVar35 = (undefined1 (*) [16])0x8000000000000000;
        }
        else {
          *(long **)(param_2 + 1000) = *(long **)(param_2 + 0x3d8);
          lVar12 = **(long **)(param_2 + 0x3d8);
          __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                    (&pauStack_c0,*(undefined8 *)(lVar12 + 0x68),*(undefined8 *)(lVar12 + 0x70));
          pauVar35 = pauStack_b8;
          __ZN25codex_utils_absolute_path10absolutize10absolutize17h28de722e70c9dcbeE
                    (&pauStack_240,pauStack_b8,pauStack_b0);
          if (pauStack_240 == (undefined1 (*) [16])0x8000000000000000) {
            *(undefined1 (**) [16])(param_2 + 0x3f8) = pauStack_238;
            *(undefined8 *)(param_2 + 0x3f0) = 0x8000000000000000;
            pauVar29 = pauStack_238;
            if (pauStack_c0 != (undefined1 (*) [16])0x0) goto LAB_100512418;
joined_r0x0001005123c8:
            if (((ulong)pauVar29 & 3) == 1) {
              puVar22 = (undefined8 *)((long)pauVar29[-1] + 0xf);
              uVar32 = *puVar22;
              puVar42 = *(undefined8 **)((long)*pauVar29 + 7);
              pcVar13 = (code *)*puVar42;
              if (pcVar13 != (code *)0x0) {
                (*pcVar13)(uVar32);
              }
              if (puVar42[1] != 0) {
                _free(uVar32);
              }
              _free(puVar22);
            }
            pauStack_140 = *(undefined1 (**) [16])(param_2 + 0x3c0);
            pauStack_138 = *(undefined1 (**) [16])(param_2 + 0x3c8);
            pauStack_c0 = (undefined1 (*) [16])&pauStack_140;
            pauStack_b8 = (undefined1 (*) [16])
                          &
                          __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
            ;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&pauStack_240,s_____Directory__108ac0232,&pauStack_c0);
            pauVar33 = pauStack_230;
            pauVar29 = pauStack_238;
            pauVar35 = pauStack_240;
            puVar42 = (undefined8 *)_malloc(0x48);
          }
          else {
            *(undefined1 (**) [16])(param_2 + 0x3f0) = pauStack_240;
            *(undefined1 (**) [16])(param_2 + 0x3f8) = pauStack_238;
            *(undefined1 (**) [16])(param_2 + 0x400) = pauStack_230;
            if (pauStack_c0 != (undefined1 (*) [16])0x0) {
LAB_100512418:
              _free(pauVar35);
              if (*(long *)(param_2 + 0x3f0) == -0x8000000000000000) {
                pauVar29 = *(undefined1 (**) [16])(param_2 + 0x3f8);
                goto joined_r0x0001005123c8;
              }
            }
            *(undefined8 *)(param_2 + 0x410) = *(undefined8 *)(param_2 + 0x3f8);
            *(long *)(param_2 + 0x408) = *(long *)(param_2 + 0x3f0);
            *(undefined8 *)(param_2 + 0x418) = *(undefined8 *)(param_2 + 0x400);
            if (lRam000000010b62c4d8 != 0) {
              pauStack_c0 = (undefined1 (*) [16])
                            &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE
              ;
              pauStack_240 = (undefined1 (*) [16])&pauStack_c0;
              __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                        (0x10b62c4d8,1,&pauStack_240,&UNK_10b234158,&UNK_10b2340c8);
            }
            lVar12 = lRam000000010b62c4d0;
            *(ulong *)(param_2 + 0x430) =
                 ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE +
                 (*(long *)(lRam000000010b62c4d0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
            *(long *)(param_2 + 0x438) = lVar12;
            *(long **)(param_2 + 0x470) = (long *)(param_2 + 0x408);
            *(undefined1 *)(param_2 + 0x479) = 0;
LAB_100512518:
            FUN_10085c0c8(&pauStack_240,param_2 + 0x420,param_3);
            pauVar29 = pauStack_238;
            pauVar35 = pauStack_240;
            if (pauStack_240 == (undefined1 (*) [16])0x8000000000000001) {
              *(undefined1 *)(param_2 + 0x568) = 3;
              uVar11 = 5;
              goto LAB_10051538c;
            }
            FUN_100cb96cc(param_2 + 0x420);
            if (pauVar35 == (undefined1 (*) [16])0x8000000000000000) {
              pauStack_140 = *(undefined1 (**) [16])(param_2 + 0x3c0);
              pauStack_138 = *(undefined1 (**) [16])(param_2 + 0x3c8);
              pauStack_c0 = (undefined1 (*) [16])&pauStack_140;
              pauStack_b8 = (undefined1 (*) [16])
                            &
                            __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&pauStack_240,s_____Directory__108ac0232,&pauStack_c0);
            }
            else {
              if (pauVar35 != (undefined1 (*) [16])0x0) {
                _free(pauVar29);
              }
              pauStack_140 = *(undefined1 (**) [16])(param_2 + 0x3c0);
              pauStack_138 = *(undefined1 (**) [16])(param_2 + 0x3c8);
              pauStack_c0 = (undefined1 (*) [16])&pauStack_140;
              pauStack_b8 = (undefined1 (*) [16])
                            &
                            __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&pauStack_240,s_____Git_repo__108ac0289,&pauStack_c0);
            }
            pauVar33 = pauStack_230;
            pauVar29 = pauStack_238;
            pauVar35 = pauStack_240;
            if (*(long *)(param_2 + 0x408) != 0) {
              _free(*(undefined8 *)(param_2 + 0x410));
            }
            if ((*(long *)(param_2 + 0x3f0) == -0x8000000000000000) &&
               (uVar8 = *(ulong *)(param_2 + 0x3f8), (uVar8 & 3) == 1)) {
              uVar32 = *(undefined8 *)(uVar8 - 1);
              puVar42 = *(undefined8 **)(uVar8 + 7);
              pcVar13 = (code *)*puVar42;
              if (pcVar13 != (code *)0x0) {
                (*pcVar13)(uVar32);
              }
              if (puVar42[1] != 0) {
                _free(uVar32);
              }
              _free((undefined8 *)(uVar8 - 1));
              puVar42 = (undefined8 *)_malloc(0x48);
            }
            else {
              puVar42 = (undefined8 *)_malloc(0x48);
            }
          }
          if (puVar42 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x48);
            goto LAB_1005152e0;
          }
          pauStack_4e8 = (undefined1 (*) [16])(param_2 + 0x378);
          pauStack_140 = *(undefined1 (**) [16])(param_2 + 0x3e0);
          pauStack_c0 = (undefined1 (*) [16])&pauStack_140;
          pauStack_b8 = (undefined1 (*) [16])
                        &
                        __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&pauStack_240,s_Recent_sessions__108ac029a,&pauStack_c0);
          pauVar40 = pauStack_230;
          pauVar30 = pauStack_238;
          pauVar14 = pauStack_240;
          FUN_101183e28(&pauStack_240,**(long **)(param_2 + 1000) + 0x244);
          pauStack_138 = (undefined1 (*) [16])&DAT_10112965c;
          pauStack_140 = (undefined1 (*) [16])&pauStack_240;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&pauStack_c0,s_Latest_activity__108ac02ae,&pauStack_140);
          if (pauStack_240 != (undefined1 (*) [16])0x0) {
            _free(pauStack_238);
          }
          puVar42[7] = pauStack_b8;
          puVar42[6] = pauStack_c0;
          puVar42[8] = pauStack_b0;
          *puVar42 = pauVar35;
          puVar42[1] = pauVar29;
          puVar42[2] = pauVar33;
          puVar42[3] = pauVar14;
          puVar42[4] = pauVar30;
          puVar42[5] = pauVar40;
          pauStack_158 = (undefined1 (*) [16])0x3;
          pauStack_148 = (undefined1 (*) [16])0x3;
          lVar12 = **(long **)(param_2 + 1000);
          pauStack_150 = (undefined1 (*) [16])puVar42;
          if (((*(long *)(lVar12 + 0x160) == -0x7fffffffffffffff) ||
              (*(long *)(lVar12 + 0x178) == -0x8000000000000000)) ||
             (*(undefined1 (**) [16])(lVar12 + 0x188) == (undefined1 (*) [16])0x0)) {
LAB_1005126ec:
            pauVar35 = pauStack_148;
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_158);
          }
          else {
            pauStack_140 = *(undefined1 (**) [16])(lVar12 + 0x180);
            pauStack_c0 = (undefined1 (*) [16])&pauStack_140;
            pauStack_b8 = (undefined1 (*) [16])&DAT_100c7b3a0;
            pauStack_138 = *(undefined1 (**) [16])(lVar12 + 0x188);
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&pauStack_240,s_Latest_branch__108ac02c2,&pauStack_c0);
            pauVar14 = pauStack_148;
            pauVar33 = pauStack_230;
            pauVar29 = pauStack_238;
            pauVar35 = pauStack_240;
            if (pauStack_148 == pauStack_158) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_158);
            }
            puVar42 = (undefined8 *)((long)pauStack_150 + (long)pauVar14 * 3 * 8);
            *puVar42 = pauVar35;
            puVar42[1] = pauVar29;
            puVar42[2] = pauVar33;
            pauVar35 = (undefined1 (*) [16])((long)*pauVar14 + 1);
            pauStack_148 = pauVar35;
            if (pauVar35 == pauStack_158) goto LAB_1005126ec;
          }
          puVar42 = (undefined8 *)((long)pauStack_150 + (long)pauVar35 * 3 * 8);
          *puVar42 = 0;
          puVar42[1] = 1;
          puVar42[2] = 0;
          pauVar29 = (undefined1 (*) [16])((long)*pauVar35 + 1);
          pauStack_148 = pauVar29;
          puVar42 = (undefined8 *)_malloc(10);
          if (puVar42 == (undefined8 *)0x0) {
            FUN_107c03c64(1,10);
            goto LAB_1005152e0;
          }
          *(undefined2 *)(puVar42 + 1) = 0x3a73;
          *puVar42 = 0x6b73612072657355;
          if (pauVar29 == pauStack_158) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_158);
          }
          puVar22 = (undefined8 *)((long)pauStack_150 + (long)pauVar29 * 3 * 8);
          *puVar22 = 10;
          puVar22[1] = puVar42;
          puVar22[2] = 10;
          pauStack_148 = (undefined1 (*) [16])((long)*pauVar35 + 2);
          pauVar35 = (undefined1 (*) [16])
                     (*
                     ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                     )();
          if (pauVar35[1][0] == '\x01') {
            auVar49 = *pauVar35;
          }
          else {
            auVar49 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
            *(long *)(*pauVar35 + 8) = auVar49._8_8_;
            pauVar35[1][0] = 1;
          }
          bVar4 = false;
          *(long *)*pauVar35 = auVar49._0_8_ + 1;
          pauStack_138 = (undefined1 (*) [16])0x0;
          pauStack_140 = (undefined1 (*) [16])&UNK_108c56c70;
          pauStack_128 = (undefined1 (*) [16])0x0;
          pauStack_130 = (undefined1 (*) [16])0x0;
          pauStack_c0 = *(undefined1 (**) [16])(param_2 + 0x3c0);
          pauStack_b8 = *(undefined1 (**) [16])(param_2 + 0x3c8);
          pauStack_240 = *(undefined1 (**) [16])(param_2 + 0x3b0);
          pauStack_238 = *(undefined1 (**) [16])(param_2 + 0x3b8);
          if (pauStack_b8 != (undefined1 (*) [16])0x0) {
            bVar4 = (*pauStack_c0)[0] == '/';
          }
          bVar5 = false;
          pauStack_b0 = (undefined1 (*) [16])CONCAT71(pauStack_b0._1_7_,6);
          puStack_88 = (undefined *)CONCAT62(CONCAT51(puStack_88._3_5_,bVar4),0x201);
          if (pauStack_238 != (undefined1 (*) [16])0x0) {
            bVar5 = (*pauStack_240)[0] == '/';
          }
          pauStack_230 = (undefined1 (*) [16])CONCAT71(pauStack_230._1_7_,6);
          puStack_208 = (undefined *)CONCAT62(CONCAT51(puStack_208._3_5_,bVar5),0x201);
          auStack_120 = auVar49;
          iVar7 = FUN_10112a6c0(&pauStack_c0,&pauStack_240);
          pauVar35 = (undefined1 (*) [16])0x8;
          if (iVar7 == 0) {
            pauVar35 = (undefined1 (*) [16])0x5;
          }
          *(undefined1 *)(param_2 + 0x569) = 0;
          lVar12 = *(long *)(param_2 + 0x3d0);
          pauStack_4e0 = *(undefined1 (**) [16])(param_2 + 0x3d8);
          if (*(long *)(param_2 + 0x3e0) != 0) {
            pauStack_4c8 = (undefined1 (*) [16])(*pauStack_4e0 + *(long *)(param_2 + 0x3e0) * 8);
            pauVar29 = pauStack_4e0;
            do {
              puVar38 = *pauVar29;
              lVar9 = *(long *)*pauVar29;
              if (*(long *)(lVar9 + 0x120) != -0x8000000000000000) {
                pauStack_230 = *(undefined1 (**) [16])(lVar9 + 0x128);
                pauStack_238 = *(undefined1 (**) [16])(lVar9 + 0x130);
                pauStack_218 = (undefined1 (*) [16])(*pauStack_238 + (long)*pauStack_230);
                pauStack_240 = (undefined1 (*) [16])0x0;
                pauStack_210 = (undefined1 (*) [16])0x0;
                bVar4 = true;
                puStack_208 = (undefined *)CONCAT62(puStack_208._2_6_,1);
                pauStack_228 = pauStack_238;
                pauStack_220 = pauStack_230;
                auVar49 = FUN_1014ac438(&pauStack_240);
                if (auVar49._0_8_ == 0) {
                  uVar8 = 0;
                  pauVar29 = (undefined1 (*) [16])0x8;
                }
                else {
                  pauVar40 = (undefined1 (*) [16])_malloc(0x40);
                  puVar2 = puStack_208;
                  pauVar30 = pauStack_218;
                  pauVar14 = pauStack_230;
                  pauVar33 = pauStack_238;
                  if (pauVar40 == (undefined1 (*) [16])0x0) {
                    FUN_107c03c64(8,0x40);
                    goto LAB_1005152e0;
                  }
                  *pauVar40 = auVar49;
                  uVar8 = 1;
                  uVar31 = (ulong)puStack_208 >> 8 & 0xff;
                  uVar20 = uVar31;
                  pauVar10 = pauStack_240;
                  pauVar34 = pauStack_210;
                  pauVar36 = pauStack_240;
                  pauVar39 = pauStack_220;
                  uVar45 = 4;
                  pauVar29 = pauVar40;
                  while (pauVar24 = pauVar10, pauVar10 = pauVar34, (uVar20 & 1) == 0) {
                    do {
                      while( true ) {
                        while( true ) {
                          do {
                            pauVar34 = pauVar10;
                            if (pauVar39 == pauVar30) {
                              uVar31 = 1;
                              uVar20 = 1;
                              pauVar15 = pauVar33;
                              pauVar10 = pauVar24;
                              if ((((ulong)puVar2 & 1) != 0) || (pauVar33 != pauVar24))
                              goto LAB_10051293c;
                              goto LAB_100512b00;
                            }
                            pauVar15 = (undefined1 (*) [16])(*pauVar39 + 1);
                            uVar19 = (uint)(byte)(*pauVar39)[0];
                            uVar20 = (ulong)uVar19;
                            if ((char)(*pauVar39)[0] < '\0') {
                              uVar1 = (byte)(*pauVar39)[1] & 0x3f;
                              if (uVar19 < 0xe0) {
                                pauVar15 = (undefined1 (*) [16])(*pauVar39 + 2);
                                uVar20 = (ulong)(uVar1 | (uVar19 & 0x1f) << 6);
                              }
                              else {
                                uVar1 = (byte)(*pauVar39)[2] & 0x3f | uVar1 << 6;
                                if (uVar19 < 0xf0) {
                                  pauVar15 = (undefined1 (*) [16])(*pauVar39 + 3);
                                  uVar20 = (ulong)(uVar1 | (uVar19 & 0x1f) << 0xc);
                                }
                                else {
                                  pauVar15 = (undefined1 (*) [16])(*pauVar39 + 4);
                                  uVar20 = (ulong)((byte)(*pauVar39)[3] & 0x3f | uVar1 << 6 |
                                                  (uVar19 & 7) << 0x12);
                                }
                              }
                            }
                            pauVar10 = (undefined1 (*) [16])
                                       ((long)pauVar34 + ((long)pauVar15 - (long)pauVar39));
                            uVar19 = (uint)uVar20;
                            pauVar39 = pauVar15;
                            if (uVar19 < 0x21 && (1L << (uVar20 & 0x3f) & 0x100003e00U) != 0)
                            goto LAB_100512930;
                          } while (uVar19 < 0x80);
                          uVar1 = uVar19 >> 8;
                          if (0x1f < uVar1) break;
                          if (uVar1 == 0) {
                            if (((&
                                 __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                                 )[uVar20 & 0xff] & 1) != 0) goto LAB_100512930;
                          }
                          else if ((uVar1 == 0x16) && (uVar19 == 0x1680)) goto LAB_100512930;
                        }
                        if (uVar1 == 0x20) break;
                        if ((uVar1 == 0x30) && (uVar19 == 0x3000)) goto LAB_100512930;
                      }
                    } while (((byte)(&
                                    __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                                    )[uVar20 & 0xff] >> 1 & 1) == 0);
LAB_100512930:
                    uVar20 = 0;
                    pauVar15 = pauVar34;
                    pauVar34 = pauVar10;
                    pauVar36 = pauVar10;
LAB_10051293c:
                    if ((long)pauVar15 - (long)pauVar24 != 0) {
                      if (pauVar14 == (undefined1 (*) [16])0x0) {
                        bVar4 = false;
                        uVar8 = 1;
                        pauVar29 = pauVar40;
                        goto LAB_100512b28;
                      }
                      uVar16 = uVar45;
                      if (uVar8 == uVar45) {
                        uVar16 = uVar45 * 2;
                        if (uVar16 < 5) {
                          uVar16 = 4;
                        }
                        thunk_FUN_108854f18(&pauStack_c0,uVar45,pauVar29,uVar16,8,0x10);
                        pauVar29 = pauStack_b8;
                        if ((int)pauStack_c0 == 1) {
                          FUN_107c03c64(pauStack_b8,pauStack_b0);
                          goto LAB_1005152e0;
                        }
                      }
                      *(undefined1 **)pauVar29[uVar8] = *pauVar24 + (long)*pauVar14;
                      *(long *)(pauVar29[uVar8] + 8) = (long)pauVar15 - (long)pauVar24;
                      uVar8 = uVar8 + 1;
                      uVar20 = uVar31;
                      pauVar10 = pauVar36;
                      uVar45 = uVar16;
                    }
                  }
LAB_100512b00:
                  bVar4 = uVar45 == 0;
                }
LAB_100512b28:
                func_0x000100f3f8c4(&pauStack_110,pauVar29,uVar8,&UNK_108ca1947,1);
                if (!bVar4) {
                  _free(pauVar29);
                }
                pauStack_d8 = *(undefined1 (**) [16])(lVar9 + 0x68);
                pauStack_d0 = *(undefined1 (**) [16])(lVar9 + 0x70);
                pauStack_240 = (undefined1 (*) [16])&pauStack_d8;
                pauStack_238 = (undefined1 (*) [16])
                               &
                               __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                ;
                pauStack_230 = (undefined1 (*) [16])&pauStack_110;
                pauStack_228 = (undefined1 (*) [16])&DAT_10112965c;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (&pauStack_c0,s___108ac02d4,&pauStack_240);
                if (pauStack_100 == (undefined1 (*) [16])0x0) {
                  if (pauStack_c0 != (undefined1 (*) [16])0x0) {
                    _free();
                  }
LAB_10051287c:
                  if (pauStack_110 == (undefined1 (*) [16])0x0) goto LAB_10051288c;
                }
                else {
                  pauStack_240 = pauStack_c0;
                  pauStack_238 = pauStack_b8;
                  pauStack_230 = pauStack_b0;
                  uVar8 = FUN_1016e6d00(&pauStack_140,&pauStack_240);
                  if ((uVar8 & 1) != 0) goto LAB_10051287c;
                  if (pauStack_100 < (undefined1 (*) [16])0x20) {
                    if (pauStack_100 != (undefined1 (*) [16])0x0) {
                      if (pauStack_100 < (undefined1 (*) [16])0x8) {
                        pauVar29 = (undefined1 (*) [16])0x0;
                        uVar8 = 0;
                      }
                      else {
                        pauVar29 = (undefined1 (*) [16])((ulong)pauStack_100 & 0x18);
                        uVar32 = *(undefined8 *)*pauStack_108;
                        uVar8 = (ulong)(-(-0x41 < (char)((ulong)uVar32 >> 0x30)) & 1);
                        uVar20 = (ulong)(-(-0x41 < (char)((ulong)uVar32 >> 0x38)) & 1);
                        uVar45 = (ulong)(-(-0x41 < (char)((ulong)uVar32 >> 0x20)) & 1);
                        uVar31 = (ulong)(-(-0x41 < (char)((ulong)uVar32 >> 0x28)) & 1);
                        uVar16 = (ulong)(-(-0x41 < (char)((ulong)uVar32 >> 0x10)) & 1);
                        uVar46 = (ulong)(-(-0x41 < (char)((ulong)uVar32 >> 0x18)) & 1);
                        uVar47 = (ulong)(-(-0x41 < (char)uVar32) & 1);
                        uVar48 = (ulong)(-(-0x41 < (char)((ulong)uVar32 >> 8)) & 1);
                        if (pauVar29 != (undefined1 (*) [16])0x8) {
                          uVar32 = *(undefined8 *)(*pauStack_108 + 8);
                          uVar8 = uVar8 + (-(-0x41 < (char)((ulong)uVar32 >> 0x30)) & 1);
                          uVar20 = uVar20 + (-(-0x41 < (char)((ulong)uVar32 >> 0x38)) & 1);
                          uVar45 = uVar45 + (-(-0x41 < (char)((ulong)uVar32 >> 0x20)) & 1);
                          uVar31 = uVar31 + (-(-0x41 < (char)((ulong)uVar32 >> 0x28)) & 1);
                          uVar16 = uVar16 + (-(-0x41 < (char)((ulong)uVar32 >> 0x10)) & 1);
                          uVar46 = uVar46 + (-(-0x41 < (char)((ulong)uVar32 >> 0x18)) & 1);
                          uVar47 = uVar47 + (-(-0x41 < (char)uVar32) & 1);
                          uVar48 = uVar48 + (-(-0x41 < (char)((ulong)uVar32 >> 8)) & 1);
                          if (pauVar29 != (undefined1 (*) [16])0x10) {
                            uVar32 = *(undefined8 *)pauStack_108[1];
                            uVar8 = uVar8 + (-(-0x41 < (char)((ulong)uVar32 >> 0x30)) & 1);
                            uVar20 = uVar20 + (-(-0x41 < (char)((ulong)uVar32 >> 0x38)) & 1);
                            uVar45 = uVar45 + (-(-0x41 < (char)((ulong)uVar32 >> 0x20)) & 1);
                            uVar31 = uVar31 + (-(-0x41 < (char)((ulong)uVar32 >> 0x28)) & 1);
                            uVar16 = uVar16 + (-(-0x41 < (char)((ulong)uVar32 >> 0x10)) & 1);
                            uVar46 = uVar46 + (-(-0x41 < (char)((ulong)uVar32 >> 0x18)) & 1);
                            uVar47 = uVar47 + (-(-0x41 < (char)uVar32) & 1);
                            uVar48 = uVar48 + (-(-0x41 < (char)((ulong)uVar32 >> 8)) & 1);
                          }
                        }
                        uVar8 = uVar47 + uVar45 + uVar16 + uVar8 + uVar48 + uVar31 + uVar46 + uVar20
                        ;
                        if (pauStack_100 == pauVar29) goto LAB_100512d04;
                      }
                      lVar25 = (long)pauStack_100 - (long)pauVar29;
                      pcVar21 = *pauVar29 + (long)*pauStack_108;
                      do {
                        if (-0x41 < *pcVar21) {
                          uVar8 = uVar8 + 1;
                        }
                        lVar25 = lVar25 + -1;
                        pcVar21 = pcVar21 + 1;
                      } while (lVar25 != 0);
                      goto LAB_100512d04;
                    }
LAB_100512d0c:
                    pauStack_e8 = pauStack_108;
                    pauStack_f0 = pauStack_110;
                    pauStack_e0 = pauStack_100;
                    bVar4 = true;
                  }
                  else {
                    uVar8 = __ZN4core3str5count14do_count_chars17haf03aa108601295cE();
LAB_100512d04:
                    if (uVar8 < 0xf1) goto LAB_100512d0c;
                    pauStack_238 = (undefined1 (*) [16])(*pauStack_100 + (long)*pauStack_108);
                    pauStack_240 = pauStack_108;
                    pauStack_230 = (undefined1 (*) [16])0xed;
                    FUN_101509234(&pauStack_c0,&pauStack_240);
                    pauStack_240 = (undefined1 (*) [16])&pauStack_c0;
                    pauStack_238 = (undefined1 (*) [16])&DAT_10112965c;
                    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                              (&pauStack_d8,s_____108ac02d9,&pauStack_240);
                    if (pauStack_c0 != (undefined1 (*) [16])0x0) {
                      _free(pauStack_b8);
                    }
                    bVar4 = false;
                    pauStack_e8 = pauStack_d0;
                    pauStack_f0 = pauStack_d8;
                    pauStack_e0 = pauStack_c8;
                  }
                  pauStack_d8 = *(undefined1 (**) [16])(lVar9 + 0x68);
                  pauStack_d0 = *(undefined1 (**) [16])(lVar9 + 0x70);
                  pauStack_240 = (undefined1 (*) [16])&pauStack_d8;
                  pauStack_238 = (undefined1 (*) [16])
                                 &
                                 __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  pauStack_230 = (undefined1 (*) [16])&pauStack_f0;
                  pauStack_228 = (undefined1 (*) [16])&DAT_10112965c;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (&pauStack_c0,s_____108ac02df,&pauStack_240);
                  pauVar30 = pauStack_b0;
                  pauVar14 = pauStack_b8;
                  pauVar33 = pauStack_c0;
                  pauVar29 = pauStack_148;
                  if (pauStack_148 == pauStack_158) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                              (&pauStack_158);
                  }
                  puVar42 = (undefined8 *)((long)pauStack_150 + (long)pauVar29 * 3 * 8);
                  *puVar42 = pauVar33;
                  puVar42[1] = pauVar14;
                  puVar42[2] = pauVar30;
                  pauStack_148 = (undefined1 (*) [16])((long)*pauVar29 + 1);
                  if (pauStack_128 == pauVar35) {
                    if (pauStack_f0 != (undefined1 (*) [16])0x0) {
                      _free(pauStack_e8);
                    }
                    if ((!bVar4) && (pauStack_110 != (undefined1 (*) [16])0x0)) {
                      _free(pauStack_108);
                    }
                    break;
                  }
                  if (pauStack_f0 != (undefined1 (*) [16])0x0) {
                    _free(pauStack_e8);
                  }
                  if (pauStack_110 == (undefined1 (*) [16])0x0) {
                    bVar4 = true;
                  }
                  if (bVar4) goto LAB_10051288c;
                }
                _free(pauStack_108);
              }
LAB_10051288c:
              pauVar29 = (undefined1 (*) [16])(puVar38 + 8);
            } while ((undefined1 (*) [16])(puVar38 + 8) != pauStack_4c8);
          }
          if (lVar12 != 0) {
            _free(pauStack_4e0);
          }
          if (pauStack_148 < (undefined1 (*) [16])0x6) {
            pauStack_180 = (undefined1 (*) [16])0x8000000000000000;
            pauVar35 = pauStack_138;
          }
          else {
            func_0x000100f3f514(&pauStack_180,pauStack_150,pauStack_148,&UNK_108ca14f4,1);
            pauVar35 = pauStack_138;
          }
          pauStack_138 = pauVar35;
          if (pauVar35 != (undefined1 (*) [16])0x0) {
            if (pauStack_128 != (undefined1 (*) [16])0x0) {
              plVar18 = (long *)(*pauStack_140 + 8);
              lVar12 = *(long *)*pauStack_140;
              uVar8 = CONCAT17(-(-1 < lVar12),
                               CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar12 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                      0x8080808080808080;
              pauVar29 = pauStack_140;
              pauVar33 = pauStack_128;
              do {
                while (uVar8 == 0) {
                  lVar12 = *plVar18;
                  pauVar29 = pauVar29 + -0xc;
                  plVar18 = plVar18 + 1;
                  uVar8 = CONCAT17(-(-1 < lVar12),
                                   CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                            CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                                     CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                              CONCAT13(-(-1 < (char)((ulong)lVar12
                                                                                    >> 0x18)),
                                                                       CONCAT12(-(-1 < (char)((ulong
                                                  )lVar12 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar12 >> 8)),
                                                           -(-1 < (char)lVar12)))))))) &
                          0x8080808080808080;
                }
                uVar20 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                iVar7 = (int)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                if (*(long *)((long)pauVar29 + (long)-iVar7 * 0x18 + -0x18) != 0) {
                  _free(*(undefined8 *)((long)pauVar29 + (long)-iVar7 * 0x18 + -0x10));
                }
                uVar8 = uVar8 - 1 & uVar8;
                pauVar33 = (undefined1 (*) [16])(pauVar33[-1] + 0xf);
              } while (pauVar33 != (undefined1 (*) [16])0x0);
            }
            if ((long)pauVar35 * 0x19 != -0x21) {
              _free((undefined *)((long)pauStack_140 + (long)pauVar35 * -0x18 + -0x18));
            }
          }
          pauVar35 = pauStack_150;
          if (pauStack_148 != (undefined1 (*) [16])0x0) {
            puVar42 = (undefined8 *)((long)pauStack_150 + 8);
            pauVar29 = pauStack_148;
            do {
              if (puVar42[-1] != 0) {
                _free(*puVar42);
              }
              puVar42 = puVar42 + 3;
              pauVar29 = (undefined1 (*) [16])((long)pauVar29[-1] + 0xf);
            } while (pauVar29 != (undefined1 (*) [16])0x0);
          }
          if (pauStack_158 != (undefined1 (*) [16])0x0) {
            _free(pauVar35);
          }
          *(undefined2 *)(param_2 + 0x568) = 1;
          pauVar35 = pauStack_180;
          if (pauStack_180 == (undefined1 (*) [16])0x8000000000000001) {
            uVar11 = 5;
            goto LAB_10051538c;
          }
        }
        pauVar33 = pauStack_170;
        pauVar29 = pauStack_178;
        FUN_100e8b900(param_2 + 0x378);
        if (pauVar35 != (undefined1 (*) [16])0x8000000000000000) {
          lVar12 = *(long *)(param_2 + 0x318);
          if (lVar12 == *(long *)(param_2 + 0x308)) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(param_2 + 0x308);
          }
          puVar42 = (undefined8 *)(*(long *)(param_2 + 0x310) + lVar12 * 0x18);
          *puVar42 = pauVar35;
          puVar42[1] = pauVar29;
          puVar42[2] = pauVar33;
          *(long *)(param_2 + 0x318) = lVar12 + 1;
        }
        *(undefined1 *)(param_2 + 0x2d1) = 0;
        if (*(long *)(param_2 + 0x348) != 0) {
          _free(*(undefined8 *)(param_2 + 0x350));
        }
        lVar12 = *(long *)(param_2 + 0x340);
      }
      *(undefined8 *)(param_2 + 0x570) = 0x8000000000000000;
      puVar17 = *(undefined8 **)(param_2 + 0x328);
      puVar22 = *(undefined8 **)(param_2 + 0x338);
LAB_10051322c:
      if ((long)puVar22 - (long)puVar17 != 0) {
        uVar8 = (ulong)((long)puVar22 - (long)puVar17) / 0x30;
        puVar17 = puVar17 + 4;
        do {
          if (puVar17[-4] != 0) {
            _free(puVar17[-3]);
          }
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 6;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (*(long *)(param_2 + 0x330) != 0) {
        _free(*(undefined8 *)(param_2 + 800));
      }
      if (*(long *)(param_2 + 0x318) == 0) {
        lStack_198 = -0x8000000000000000;
        lVar12 = *(long *)(param_2 + 0x310);
      }
      else {
        func_0x000100f3f514(&lStack_198,*(undefined8 *)(param_2 + 0x310),*(long *)(param_2 + 0x318),
                            &UNK_108ca2ccc,2);
        lVar9 = *(long *)(param_2 + 0x318);
        lVar12 = *(long *)(param_2 + 0x310);
        if (lVar9 != 0) {
          puVar42 = (undefined8 *)(lVar12 + 8);
          do {
            if (puVar42[-1] != 0) {
              _free(*puVar42);
            }
            puVar42 = puVar42 + 3;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      if (*(long *)(param_2 + 0x308) != 0) {
        _free(lVar12);
      }
      *(undefined1 *)(param_2 + 0x2d2) = 0;
      if (*(long *)(param_2 + 0x2d8) != 0) {
        _free(*(undefined8 *)(param_2 + 0x2e0));
      }
      *(undefined1 *)(param_2 + 0x2d0) = 0;
      uStack_2a8 = uStack_188;
      uStack_2b0 = uStack_190;
      *(undefined1 *)(param_2 + 0x2d3) = 1;
      if (lStack_198 != -0x7fffffffffffffff) {
        *(undefined1 *)(param_2 + 0x278) = 1;
        *(long *)(param_2 + 600) = lStack_198;
        *(undefined8 *)(param_2 + 0x268) = uStack_188;
        *(undefined8 *)(param_2 + 0x260) = uStack_190;
        FUN_100cae488(puStack_4f8);
        __ZN8dirs_sys21target_unix_not_redox8home_dir17hc19926733471277dE(&pauStack_240);
        lVar12 = param_2 + 0x210;
        pauStack_108 = pauStack_238;
        pauStack_110 = pauStack_240;
        pauStack_100 = pauStack_230;
        *(undefined1 (**) [16])(param_2 + 0x290) = pauStack_230;
        *(undefined1 (**) [16])(param_2 + 0x288) = pauStack_238;
        *puStack_4f8 = pauStack_240;
        *(long *)(param_2 + 0x298) = lVar12;
        *(undefined1 *)(param_2 + 0x410) = 0;
LAB_100513390:
        *(undefined8 *)(param_2 + 0x2a8) = *(undefined8 *)(param_2 + 0x288);
        *(undefined8 *)(param_2 + 0x2a0) = *(undefined8 *)(param_2 + 0x280);
        *(undefined8 *)(param_2 + 0x2b0) = *(undefined8 *)(param_2 + 0x290);
        uVar32 = *(undefined8 *)(lVar12 + 0x10);
        *(undefined8 *)(param_2 + 0x2b8) = *(undefined8 *)(lVar12 + 8);
        *(undefined8 *)(param_2 + 0x2c0) = uVar32;
        if (lRam000000010b62c4d8 != 0) {
          pauStack_c0 = (undefined1 (*) [16])
                        &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
          pauStack_240 = (undefined1 (*) [16])&pauStack_c0;
          __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                    (0x10b62c4d8,1,&pauStack_240,&UNK_10b234158,&UNK_10b2340c8);
        }
        lVar9 = lRam000000010b62c4d0;
        *(ulong *)(param_2 + 0x2d8) =
             ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE +
             (*(long *)(lRam000000010b62c4d0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        *(long *)(param_2 + 0x2e0) = lVar9;
        *(long *)(param_2 + 0x318) = lVar12;
        *(undefined1 *)(param_2 + 0x321) = 0;
        goto LAB_1005133dc;
      }
    }
    *param_1 = 0x8000000000000001;
    uVar11 = 6;
    goto LAB_1005153a4;
  }
  if (bVar3 == 5) {
    bVar3 = *(byte *)(param_2 + 0x298);
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        FUN_107c05cc0(&UNK_10b216220);
        goto LAB_1005152e0;
      }
      lVar12 = *(long *)(param_2 + 0x280);
      goto LAB_1005117a4;
    }
    if (bVar3 != 3) {
      FUN_107c05cc4(&UNK_10b216220);
      goto LAB_1005152e0;
    }
    auVar49 = *(undefined1 (*) [16])(param_2 + 0x288);
    goto LAB_100511810;
  }
  if (bVar3 == 6) {
    bVar3 = *(byte *)(param_2 + 0x2d3);
    uVar19 = (uint)bVar3;
    if (bVar3 < 3) {
      if (bVar3 != 0) goto LAB_100512048;
      lVar12 = *(long *)(param_2 + 0x2c8);
      pauVar29 = *(undefined1 (**) [16])(param_2 + 0x2b0);
      pauVar33 = *(undefined1 (**) [16])(param_2 + 0x2b8);
      goto LAB_100511ab8;
    }
    if (bVar3 != 3) {
      if (bVar3 != 4) {
        bVar3 = *(byte *)(param_2 + 0x568);
        if (bVar3 < 2) {
          if (bVar3 == 0) {
            uVar32 = *(undefined8 *)(param_2 + 0x390);
            uVar23 = *(undefined8 *)(param_2 + 0x398);
            uVar26 = *(undefined8 *)(param_2 + 0x3a0);
            uVar27 = *(undefined8 *)(param_2 + 0x3a8);
            goto LAB_100512344;
          }
          FUN_107c05cc0(&UNK_10b216208);
        }
        else {
          if (bVar3 == 3) goto LAB_100512518;
          FUN_107c05cc4(&UNK_10b216208);
        }
        goto LAB_1005152e0;
      }
      goto LAB_100511b68;
    }
LAB_1005152f4:
    FUN_10085c0c8(&pauStack_240,param_2 + 0x310,param_3);
    pauVar33 = pauStack_230;
    pauVar29 = pauStack_238;
    pauVar35 = pauStack_240;
    if (pauStack_240 != (undefined1 (*) [16])0x8000000000000001) {
      FUN_100cb96cc(param_2 + 0x310);
      if (pauVar35 == (undefined1 (*) [16])0x8000000000000000) {
        uVar32 = *(undefined8 *)(*(long *)(param_2 + 0x2d8) + 0x68);
        pauVar35 = *(undefined1 (**) [16])(*(long *)(param_2 + 0x2d8) + 0x70);
        pauVar29 = (undefined1 (*) [16])0x1;
        if ((pauVar35 != (undefined1 (*) [16])0x0) &&
           (pauVar29 = (undefined1 (*) [16])_malloc(pauVar35), pauVar29 == (undefined1 (*) [16])0x0)
           ) {
          FUN_107c03c64(1,pauVar35);
          goto LAB_1005152e0;
        }
        _memcpy(pauVar29,uVar32,pauVar35);
        pauVar33 = pauVar35;
      }
      if (*(long *)(param_2 + 0x2f8) != 0) {
        _free(*(undefined8 *)(param_2 + 0x300));
      }
      if (*(long *)(param_2 + 0x2e0) != -0x8000000000000000) goto LAB_100515468;
LAB_100515400:
      uVar8 = *(ulong *)(param_2 + 0x2e8);
      if ((uVar8 & 3) == 1) {
        uVar32 = *(undefined8 *)(uVar8 - 1);
        puVar42 = *(undefined8 **)(uVar8 + 7);
        pcVar13 = (code *)*puVar42;
        if (pcVar13 != (code *)0x0) {
          (*pcVar13)(uVar32);
        }
        if (puVar42[1] != 0) {
          _free(uVar32);
        }
        _free((undefined8 *)(uVar8 - 1));
      }
LAB_100515468:
      puStack_4f8 = (undefined8 *)(param_2 + 0x280);
      uVar45 = FUN_100e8e860(*(undefined8 *)(param_2 + 0x2a0),*(undefined8 *)(param_2 + 0x2a8),
                             pauVar29,pauVar33);
      lVar12 = 0;
      uVar31 = *(ulong *)(param_2 + 0x288);
      bVar3 = (byte)(uVar45 >> 0x38);
      bVar28 = bVar3 >> 1;
      lVar9 = *(long *)(param_2 + 0x280);
      uVar20 = uVar45 & uVar31;
      uVar32 = *(undefined8 *)(lVar9 + uVar20);
      uVar8 = CONCAT17(-((byte)((ulong)uVar32 >> 0x38) == bVar28),
                       CONCAT16(-((byte)((ulong)uVar32 >> 0x30) == bVar28),
                                CONCAT15(-((byte)((ulong)uVar32 >> 0x28) == bVar28),
                                         CONCAT14(-((byte)((ulong)uVar32 >> 0x20) == bVar28),
                                                  CONCAT13(-((byte)((ulong)uVar32 >> 0x18) == bVar28
                                                            ),CONCAT12(-((byte)((ulong)uVar32 >>
                                                                               0x10) == bVar28),
                                                                       CONCAT11(-((byte)((ulong)
                                                  uVar32 >> 8) == bVar28),-((byte)uVar32 == bVar28))
                                                  ))))));
      while( true ) {
        uVar8 = uVar8 & 0x8080808080808080;
        if (uVar8 != 0) {
          if (pauVar33 == (undefined1 (*) [16])0x0) {
            do {
              uVar16 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8
              ;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              pauVar14 = (undefined1 (*) [16])
                         (lVar9 + (uVar20 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                                  uVar31) * -0x30);
              pauStack_c0 = *(undefined1 (**) [16])((long)pauVar14[-3] + 8);
              pauStack_b8 = *(undefined1 (**) [16])pauVar14[-2];
              if (pauStack_b8 == (undefined1 (*) [16])0x0) {
                bVar4 = false;
              }
              else {
                bVar4 = (*pauStack_c0)[0] == '/';
              }
              pauStack_b0 = (undefined1 (*) [16])CONCAT71(pauStack_b0._1_7_,6);
              puStack_88 = (undefined *)CONCAT62(CONCAT51(puStack_88._3_5_,bVar4),0x201);
              pauStack_238 = (undefined1 (*) [16])0x0;
              pauStack_230 = (undefined1 (*) [16])CONCAT71(pauStack_230._1_7_,6);
              puStack_208._2_6_ = (uint6)((ulong)puStack_208 >> 0x10) & 0xffffffffff00;
              puStack_208 = (undefined *)CONCAT62(puStack_208._2_6_,0x201);
              pauStack_240 = pauVar29;
              uVar16 = FUN_10112a6c0(&pauStack_c0,&pauStack_240);
              if ((uVar16 & 1) != 0) goto LAB_100515618;
              uVar8 = uVar8 - 1 & uVar8;
            } while (uVar8 != 0);
          }
          else {
            do {
              uVar16 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8
              ;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              pauVar14 = (undefined1 (*) [16])
                         (lVar9 + (uVar20 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) &
                                  uVar31) * -0x30);
              pauStack_c0 = *(undefined1 (**) [16])((long)pauVar14[-3] + 8);
              pauStack_b8 = *(undefined1 (**) [16])pauVar14[-2];
              if (pauStack_b8 == (undefined1 (*) [16])0x0) {
                bVar4 = false;
              }
              else {
                bVar4 = (*pauStack_c0)[0] == '/';
              }
              pauStack_b0 = (undefined1 (*) [16])CONCAT71(pauStack_b0._1_7_,6);
              puStack_88 = (undefined *)CONCAT62(CONCAT51(puStack_88._3_5_,bVar4),0x201);
              pauStack_230 = (undefined1 (*) [16])CONCAT71(pauStack_230._1_7_,6);
              puStack_208 = (undefined *)
                            CONCAT62(CONCAT51(puStack_208._3_5_,(*pauVar29)[0] == '/'),0x201);
              pauStack_240 = pauVar29;
              pauStack_238 = pauVar33;
              uVar16 = FUN_10112a6c0(&pauStack_c0,&pauStack_240);
              if ((uVar16 & 1) != 0) goto LAB_100515618;
              uVar8 = uVar8 - 1 & uVar8;
            } while (uVar8 != 0);
          }
        }
        bVar44 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar32 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar32 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar32 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar32 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar32
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar32 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar32 >> 8) == -1),
                                                           -((char)uVar32 == -1)))))))),1);
        if ((bVar44 & 1) != 0) break;
        lVar12 = lVar12 + 8;
        uVar20 = uVar20 + lVar12 & uVar31;
        uVar32 = *(undefined8 *)(lVar9 + uVar20);
        uVar8 = CONCAT17(-((byte)((ulong)uVar32 >> 0x38) == bVar28),
                         CONCAT16(-((byte)((ulong)uVar32 >> 0x30) == bVar28),
                                  CONCAT15(-((byte)((ulong)uVar32 >> 0x28) == bVar28),
                                           CONCAT14(-((byte)((ulong)uVar32 >> 0x20) == bVar28),
                                                    CONCAT13(-((byte)((ulong)uVar32 >> 0x18) ==
                                                              bVar28),CONCAT12(-((byte)((ulong)
                                                  uVar32 >> 0x10) == bVar28),
                                                  CONCAT11(-((byte)((ulong)uVar32 >> 8) == bVar28),
                                                           -((byte)uVar32 == bVar28))))))));
      }
      if (*(long *)(param_2 + 0x290) == 0) {
        __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h9a07468d6863a4acE
                  (puStack_4f8,1,param_2 + 0x2a0,1);
      }
      if (pauVar35 == (undefined1 (*) [16])0x8000000000000000) {
        uVar32 = *(undefined8 *)(param_2 + 0x2d8);
        pauVar35 = *(undefined1 (**) [16])(pauVar29[-1] + 8);
        pauVar14 = pauVar29;
        if (pauVar35 != *(undefined1 (**) [16])(pauVar29[-2] + 8)) goto LAB_100515714;
        goto LAB_100515710;
      }
      plVar18 = *(long **)(param_2 + 0x280);
      uVar8 = *(ulong *)(param_2 + 0x288);
      uVar45 = uVar8 & uVar45;
      lVar12 = *(long *)((long)plVar18 + uVar45);
      uVar20 = CONCAT17(-(lVar12 < 0),
                        CONCAT16(-((char)((ulong)lVar12 >> 0x30) < '\0'),
                                 CONCAT15(-((char)((ulong)lVar12 >> 0x28) < '\0'),
                                          CONCAT14(-((char)((ulong)lVar12 >> 0x20) < '\0'),
                                                   CONCAT13(-((char)((ulong)lVar12 >> 0x18) < '\0'),
                                                            CONCAT12(-((char)((ulong)lVar12 >> 0x10)
                                                                      < '\0'),CONCAT11(-((char)((
                                                  ulong)lVar12 >> 8) < '\0'),-((char)lVar12 < '\0'))
                                                  ))))));
      if (uVar20 == 0) {
        lVar12 = 8;
        do {
          uVar45 = uVar45 + lVar12 & uVar8;
          lVar9 = *(long *)((long)plVar18 + uVar45);
          uVar20 = CONCAT17(-(lVar9 < 0),
                            CONCAT16(-((char)((ulong)lVar9 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar9 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar9 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar9 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar9 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar9 >> 8) < '\0'),
                                                           -((char)lVar9 < '\0'))))))));
          lVar12 = lVar12 + 8;
        } while (uVar20 == 0);
      }
      uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
      uVar45 = uVar45 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3) & uVar8;
      uVar20 = (ulong)*(char *)((long)plVar18 + uVar45);
      if (-1 < *(char *)((long)plVar18 + uVar45)) {
        lVar12 = *plVar18;
        uVar20 = CONCAT17(-(lVar12 < 0),
                          CONCAT16(-((char)((ulong)lVar12 >> 0x30) < '\0'),
                                   CONCAT15(-((char)((ulong)lVar12 >> 0x28) < '\0'),
                                            CONCAT14(-((char)((ulong)lVar12 >> 0x20) < '\0'),
                                                     CONCAT13(-((char)((ulong)lVar12 >> 0x18) < '\0'
                                                               ),CONCAT12(-((char)((ulong)lVar12 >>
                                                                                  0x10) < '\0'),
                                                                          CONCAT11(-((char)((ulong)
                                                  lVar12 >> 8) < '\0'),-((char)lVar12 < '\0'))))))))
        ;
        uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        uVar45 = (ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3;
        uVar20 = (ulong)*(byte *)((long)plVar18 + uVar45);
      }
      *(byte *)((long)plVar18 + uVar45) = bVar3 >> 1;
      *(byte *)((long)plVar18 + (uVar45 - 8 & uVar8) + 8) = bVar3 >> 1;
      pauVar14 = (undefined1 (*) [16])(plVar18 + uVar45 * -6);
      *(undefined1 (**) [16])pauVar14[-3] = pauVar35;
      *(undefined1 (**) [16])((long)pauVar14[-3] + 8) = pauVar29;
      *(undefined1 (**) [16])pauVar14[-2] = pauVar33;
      *(undefined1 (**) [16])((long)pauVar14[-2] + 8) = (undefined1 (*) [16])0x0;
      *(undefined1 (**) [16])pauVar14[-1] = (undefined1 (*) [16])0x8;
      *(undefined1 (**) [16])((long)pauVar14[-1] + 8) = (undefined1 (*) [16])0x0;
      *(long *)(param_2 + 0x298) = *(long *)(param_2 + 0x298) + 1;
      *(ulong *)(param_2 + 0x290) = *(long *)(param_2 + 0x290) - (uVar20 & 1);
      uVar32 = *(undefined8 *)(param_2 + 0x2d8);
      pauVar35 = *(undefined1 (**) [16])((long)pauVar14[-1] + 8);
      pauVar29 = pauVar14;
      if (pauVar35 == *(undefined1 (**) [16])((long)pauVar14[-2] + 8)) goto LAB_100515710;
      goto LAB_100515714;
    }
    uVar11 = 3;
    goto LAB_10051538c;
  }
  bVar3 = *(byte *)(param_2 + 0x410);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      FUN_107c05cc0(&UNK_10b216288);
      goto LAB_1005152e0;
    }
    lVar12 = *(long *)(param_2 + 0x298);
    goto LAB_100513390;
  }
  if (bVar3 != 3) {
    FUN_107c05cc4(&UNK_10b216288);
    goto LAB_1005152e0;
  }
LAB_1005133dc:
  puVar37 = (undefined1 *)(param_2 + 0x410);
  FUN_10085c0c8(&pauStack_240,param_2 + 0x2c8,param_3);
  pauVar33 = pauStack_230;
  pauVar29 = pauStack_238;
  pauVar35 = pauStack_240;
  if (pauStack_240 == (undefined1 (*) [16])0x8000000000000001) {
    *puVar37 = 3;
LAB_100513d24:
    *param_1 = 0x8000000000000001;
    uVar11 = 7;
    goto LAB_1005153a4;
  }
  FUN_100cb96cc(param_2 + 0x2c8);
  uVar32 = *(undefined8 *)(param_2 + 0x2b8);
  pauVar14 = *(undefined1 (**) [16])(param_2 + 0x2c0);
  uVar8 = __ZN3std4path4Path6is_dir17h70f322681d113b19E(uVar32,pauVar14);
  if ((uVar8 & 1) == 0) {
    pauVar30 = (undefined1 (*) [16])0x8000000000000000;
    pauVar40 = pauStack_4e8;
    pauVar10 = pauStack_e8;
    pauVar34 = pauStack_e0;
joined_r0x000100513498:
    pauStack_e0 = pauVar34;
    pauStack_e8 = pauVar10;
    pauStack_4e8 = pauVar40;
    pauStack_f0 = pauVar30;
    if (pauVar35 == (undefined1 (*) [16])0x8000000000000000) goto LAB_100513510;
LAB_10051349c:
    pauStack_240 = *(undefined1 (**) [16])(param_2 + 0x2b8);
    pauStack_238 = *(undefined1 (**) [16])(param_2 + 0x2c0);
    if (pauVar33 == (undefined1 (*) [16])0x0) {
      bVar4 = false;
    }
    else {
      bVar4 = (*pauVar29)[0] == '/';
    }
    pauStack_c0 = pauVar29;
    pauStack_b8 = pauVar33;
    pauStack_b0 = (undefined1 (*) [16])CONCAT71(pauStack_b0._1_7_,6);
    puStack_88 = (undefined *)CONCAT62(CONCAT51(puStack_88._3_5_,bVar4),0x201);
    if (pauStack_238 == (undefined1 (*) [16])0x0) {
      bVar4 = false;
    }
    else {
      bVar4 = (*pauStack_240)[0] == '/';
    }
    pauStack_230 = (undefined1 (*) [16])CONCAT71(pauStack_230._1_7_,6);
    puStack_208 = (undefined *)CONCAT62(CONCAT51(puStack_208._3_5_,bVar4),0x201);
    uVar8 = FUN_10112a6c0(&pauStack_c0,&pauStack_240);
    if ((uVar8 & 1) != 0) goto LAB_100513510;
    uVar8 = __ZN3std4path4Path6is_dir17h70f322681d113b19E(pauVar29,pauVar33);
    if ((uVar8 & 1) == 0) {
      lVar12 = *(long *)(param_2 + 0x2a0);
      goto joined_r0x000100514268;
    }
    pauStack_240 = (undefined1 (*) [16])0x0;
    pauStack_238 = (undefined1 (*) [16])0x8;
    pauStack_230 = (undefined1 (*) [16])0x0;
    FUN_102d553d8(pauVar29,pauVar33,0,&pauStack_240);
    pauVar14 = pauStack_230;
    if (pauStack_230 == (undefined1 (*) [16])0x0) {
      pauStack_d8 = (undefined1 (*) [16])0x8000000000000000;
      if (pauStack_240 == (undefined1 (*) [16])0x0) {
        pauStack_4b0 = (undefined1 (*) [16])0x8000000000000000;
      }
      else {
        _free();
        pauStack_4b0 = (undefined1 (*) [16])0x8000000000000000;
      }
    }
    else {
      pauStack_d8 = pauStack_240;
      pauStack_d0 = pauStack_238;
      pauStack_4c8 = pauStack_238;
      pauStack_c8 = pauStack_230;
      pauStack_4b0 = pauStack_240;
    }
    if (*(long *)(param_2 + 0x2a0) != -0x8000000000000000) goto LAB_100513528;
LAB_10051361c:
    pauStack_180 = (undefined1 (*) [16])0x8000000000000000;
  }
  else {
    pauStack_240 = (undefined1 (*) [16])0x0;
    pauStack_238 = (undefined1 (*) [16])0x8;
    pauStack_230 = (undefined1 (*) [16])0x0;
    FUN_102d553d8(uVar32,pauVar14,0,&pauStack_240);
    pauStack_4e0 = pauStack_230;
    pauVar30 = pauStack_240;
    pauVar40 = pauStack_238;
    pauVar10 = pauStack_238;
    pauVar34 = pauStack_230;
    if (pauStack_230 != (undefined1 (*) [16])0x0) goto joined_r0x000100513498;
    pauStack_f0 = (undefined1 (*) [16])0x8000000000000000;
    if (pauStack_240 == (undefined1 (*) [16])0x0) {
      pauVar30 = (undefined1 (*) [16])0x8000000000000000;
      pauVar40 = pauStack_4e8;
      pauVar10 = pauStack_e8;
      pauVar34 = pauStack_e0;
      goto joined_r0x000100513498;
    }
    _free();
    pauVar30 = (undefined1 (*) [16])0x8000000000000000;
    if (pauVar35 != (undefined1 (*) [16])0x8000000000000000) goto LAB_10051349c;
LAB_100513510:
    lVar12 = *(long *)(param_2 + 0x2a0);
joined_r0x000100514268:
    pauStack_d8 = (undefined1 (*) [16])0x8000000000000000;
    pauStack_4b0 = (undefined1 (*) [16])0x8000000000000000;
    if (lVar12 == -0x8000000000000000) goto LAB_10051361c;
LAB_100513528:
    pauStack_240 = *(undefined1 (**) [16])(param_2 + 0x2b8);
    pauStack_238 = *(undefined1 (**) [16])(param_2 + 0x2c0);
    pauStack_c0 = *(undefined1 (**) [16])(param_2 + 0x2a8);
    pauStack_b8 = *(undefined1 (**) [16])(param_2 + 0x2b0);
    if (pauStack_b8 == (undefined1 (*) [16])0x0) {
      bVar4 = false;
    }
    else {
      bVar4 = (*pauStack_c0)[0] == '/';
    }
    pauStack_b0 = (undefined1 (*) [16])CONCAT71(pauStack_b0._1_7_,6);
    puStack_88 = (undefined *)CONCAT62(CONCAT51(puStack_88._3_5_,bVar4),0x201);
    if (pauStack_238 == (undefined1 (*) [16])0x0) {
      bVar4 = false;
    }
    else {
      bVar4 = (*pauStack_240)[0] == '/';
    }
    pauStack_230 = (undefined1 (*) [16])CONCAT71(pauStack_230._1_7_,6);
    puStack_208 = (undefined *)CONCAT62(CONCAT51(puStack_208._3_5_,bVar4),0x201);
    uVar8 = FUN_10112a6c0(&pauStack_c0,&pauStack_240);
    if ((uVar8 & 1) != 0) goto LAB_10051361c;
    if (pauVar35 != (undefined1 (*) [16])0x8000000000000000) {
      pauStack_240 = *(undefined1 (**) [16])(param_2 + 0x2a8);
      pauStack_238 = *(undefined1 (**) [16])(param_2 + 0x2b0);
      if (pauVar33 == (undefined1 (*) [16])0x0) {
        bVar4 = false;
      }
      else {
        bVar4 = (*pauVar29)[0] == '/';
      }
      pauStack_c0 = pauVar29;
      pauStack_b8 = pauVar33;
      pauStack_b0 = (undefined1 (*) [16])CONCAT71(pauStack_b0._1_7_,6);
      puStack_88 = (undefined *)CONCAT62(CONCAT51(puStack_88._3_5_,bVar4),0x201);
      if (pauStack_238 == (undefined1 (*) [16])0x0) {
        bVar4 = false;
      }
      else {
        bVar4 = (*pauStack_240)[0] == '/';
      }
      pauStack_230 = (undefined1 (*) [16])CONCAT71(pauStack_230._1_7_,6);
      puStack_208 = (undefined *)CONCAT62(CONCAT51(puStack_208._3_5_,bVar4),0x201);
      uVar8 = FUN_10112a6c0(&pauStack_c0,&pauStack_240);
      if ((uVar8 & 1) != 0) goto LAB_10051361c;
    }
    __ZN10codex_core16realtime_context11render_tree17h0a7011ac96dfcb2eE
              (&pauStack_180,*(undefined8 *)(param_2 + 0x2a8),*(undefined8 *)(param_2 + 0x2b0));
  }
  pauVar40 = pauStack_180;
  if (((pauVar35 == (undefined1 (*) [16])0x8000000000000000) &&
      (pauVar30 == (undefined1 (*) [16])0x8000000000000000)) &&
     (pauStack_180 == (undefined1 (*) [16])0x8000000000000000)) {
    pauVar33 = (undefined1 (*) [16])0x1;
    if (pauStack_4b0 != (undefined1 (*) [16])0x8000000000000000) {
      if (pauVar14 != (undefined1 (*) [16])0x0) {
        pauVar33 = (undefined1 (*) [16])(*pauStack_4c8 + 8);
        do {
          if (*(long *)(pauVar33[-1] + 8) != 0) {
            _free(*(undefined8 *)*pauVar33);
          }
          pauVar33 = (undefined1 (*) [16])(pauVar33[1] + 8);
          pauVar14 = (undefined1 (*) [16])(pauVar14[-1] + 0xf);
        } while (pauVar14 != (undefined1 (*) [16])0x0);
      }
      if (pauStack_4b0 != (undefined1 (*) [16])0x0) {
        _free(pauStack_4c8);
      }
    }
    if ((*(ulong *)(param_2 + 0x2a0) & 0x7fffffffffffffff) != 0) {
      pauVar14 = (undefined1 (*) [16])0x8000000000000000;
      goto LAB_100513d38;
    }
    *puVar37 = 1;
    pauVar14 = (undefined1 (*) [16])0x8000000000000000;
    lVar12 = *(long *)(param_2 + 0x228);
  }
  else {
    pauVar10 = (undefined1 (*) [16])_malloc(0x30);
    if (pauVar10 == (undefined1 (*) [16])0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
      goto LAB_1005152e0;
    }
    pauStack_158 = *(undefined1 (**) [16])(param_2 + 0x2b8);
    pauStack_150 = *(undefined1 (**) [16])(param_2 + 0x2c0);
    pauStack_c0 = (undefined1 (*) [16])&pauStack_158;
    pauStack_b8 = (undefined1 (*) [16])
                  &
                  __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&pauStack_240,s_Current_working_directory__108ac0343,&pauStack_c0);
    pauVar39 = pauStack_230;
    pauVar36 = pauStack_238;
    pauVar34 = pauStack_240;
    __ZN10codex_core16realtime_context16file_name_string17h6447358e7d6afe1eE
              (&pauStack_240,*(undefined8 *)(param_2 + 0x2b8),*(undefined8 *)(param_2 + 0x2c0));
    pauStack_150 = (undefined1 (*) [16])&DAT_10112965c;
    pauStack_158 = (undefined1 (*) [16])&pauStack_240;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&pauStack_c0,s_Working_directory_name__108ac0361,&pauStack_158);
    if (pauStack_240 != (undefined1 (*) [16])0x0) {
      _free(pauStack_238);
    }
    *(undefined1 (**) [16])pauVar10[2] = pauStack_b8;
    *(undefined1 (**) [16])(pauVar10[1] + 8) = pauStack_c0;
    *(undefined1 (**) [16])(pauVar10[2] + 8) = pauStack_b0;
    *(undefined1 (**) [16])*pauVar10 = pauVar34;
    *(undefined1 (**) [16])(*pauVar10 + 8) = pauVar36;
    *(undefined1 (**) [16])pauVar10[1] = pauVar39;
    pauStack_140 = (undefined1 (*) [16])0x2;
    pauStack_130 = (undefined1 (*) [16])0x2;
    pauStack_138 = pauVar10;
    if (pauVar35 != (undefined1 (*) [16])0x8000000000000000) {
      pauStack_158 = pauVar29;
      pauStack_150 = pauVar33;
      pauStack_c0 = (undefined1 (*) [16])&pauStack_158;
      pauStack_b8 = (undefined1 (*) [16])
                    &
                    __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pauStack_240,s_Git_root__108ac037c,&pauStack_c0);
      pauVar39 = pauStack_130;
      pauVar36 = pauStack_230;
      pauVar34 = pauStack_238;
      pauVar10 = pauStack_240;
      if (pauStack_130 == pauStack_140) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_140);
      }
      puVar42 = (undefined8 *)((long)pauStack_138 + (long)pauVar39 * 0x18);
      *puVar42 = pauVar10;
      puVar42[1] = pauVar34;
      puVar42[2] = pauVar36;
      pauStack_130 = (undefined1 (*) [16])(*pauVar39 + 1);
      __ZN10codex_core16realtime_context16file_name_string17h6447358e7d6afe1eE
                (&pauStack_240,pauVar29,pauVar33);
      pauStack_150 = (undefined1 (*) [16])&DAT_10112965c;
      pauStack_158 = (undefined1 (*) [16])&pauStack_240;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pauStack_c0,s_Git_project__108ac0389,&pauStack_158);
      if (pauStack_240 != (undefined1 (*) [16])0x0) {
        _free(pauStack_238);
      }
      pauVar36 = pauStack_b0;
      pauVar34 = pauStack_b8;
      pauVar10 = pauStack_c0;
      pauVar33 = pauStack_130;
      if (pauStack_130 == pauStack_140) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_140);
      }
      puVar42 = (undefined8 *)((long)pauStack_138 + (long)pauVar33 * 0x18);
      *puVar42 = pauVar10;
      puVar42[1] = pauVar34;
      puVar42[2] = pauVar36;
      pauStack_130 = (undefined1 (*) [16])(*pauVar33 + 1);
    }
    if (*(long *)(param_2 + 0x2a0) != -0x8000000000000000) {
      pauStack_158 = *(undefined1 (**) [16])(param_2 + 0x2a8);
      pauStack_150 = *(undefined1 (**) [16])(param_2 + 0x2b0);
      pauStack_c0 = (undefined1 (*) [16])&pauStack_158;
      pauStack_b8 = (undefined1 (*) [16])
                    &
                    __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&pauStack_240,s_User_root__108ac0399,&pauStack_c0);
      pauVar36 = pauStack_130;
      pauVar34 = pauStack_230;
      pauVar10 = pauStack_238;
      pauVar33 = pauStack_240;
      if (pauStack_130 == pauStack_140) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_140);
      }
      puVar42 = (undefined8 *)((long)pauStack_138 + (long)pauVar36 * 0x18);
      *puVar42 = pauVar33;
      puVar42[1] = pauVar10;
      puVar42[2] = pauVar34;
      pauStack_130 = (undefined1 (*) [16])(*pauVar36 + 1);
    }
    pauVar33 = pauStack_130;
    if (pauVar30 != (undefined1 (*) [16])0x8000000000000000) {
      if (pauStack_130 == pauStack_140) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_140);
      }
      puVar42 = (undefined8 *)((long)pauStack_138 + (long)pauVar33 * 0x18);
      *puVar42 = 0;
      puVar42[1] = 1;
      puVar42[2] = 0;
      pauVar10 = (undefined1 (*) [16])(*pauVar33 + 1);
      pauStack_130 = pauVar10;
      puVar42 = (undefined8 *)_malloc(0x17);
      if (puVar42 == (undefined8 *)0x0) {
        FUN_107c03c64(1,0x17);
        goto LAB_1005152e0;
      }
      puVar42[1] = 0x726f746365726964;
      *puVar42 = 0x20676e696b726f57;
      *(undefined8 *)((long)puVar42 + 0xf) = 0x3a65657274207972;
      if (pauVar10 == pauStack_140) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_140);
      }
      puVar22 = (undefined8 *)((long)pauStack_138 + (long)pauVar10 * 0x18);
      *puVar22 = 0x17;
      puVar22[1] = puVar42;
      puVar22[2] = 0x17;
      pauStack_130 = (undefined1 (*) [16])(*pauVar33 + 2);
      pauStack_228 = (undefined1 (*) [16])((long)pauStack_4e8 + (long)pauStack_4e0 * 0x18);
      pauStack_240 = pauStack_4e8;
      pauStack_238 = pauStack_4e8;
      pauStack_230 = pauVar30;
      if ((undefined1 (*) [16])((long)pauStack_140 - (long)pauStack_130) < pauStack_4e0) {
        thunk_FUN_108855060(&pauStack_140,pauStack_130,pauStack_4e0,8,0x18);
      }
      pauVar33 = pauStack_130;
      _memcpy((undefined *)((long)pauStack_138 + (long)pauStack_130 * 0x18),pauStack_4e8,
              (long)pauStack_4e0 * 0x18);
      pauStack_130 = (undefined1 (*) [16])((long)pauVar33 + (long)pauStack_4e0);
      if (pauVar30 != (undefined1 (*) [16])0x0) {
        _free(pauStack_4e8);
      }
    }
    pauVar33 = pauStack_130;
    if (pauStack_4b0 != (undefined1 (*) [16])0x8000000000000000) {
      if (pauStack_130 == pauStack_140) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_140);
      }
      puVar42 = (undefined8 *)((long)pauStack_138 + (long)pauVar33 * 0x18);
      *puVar42 = 0;
      puVar42[1] = 1;
      puVar42[2] = 0;
      pauVar30 = (undefined1 (*) [16])(*pauVar33 + 1);
      pauStack_130 = pauVar30;
      puVar42 = (undefined8 *)_malloc(0xe);
      if (puVar42 == (undefined8 *)0x0) {
        FUN_107c03c64(1,0xe);
        goto LAB_1005152e0;
      }
      *puVar42 = 0x746f6f7220746947;
      *(undefined8 *)((long)puVar42 + 6) = 0x3a6565727420746f;
      if (pauVar30 == pauStack_140) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_140);
      }
      puVar22 = (undefined8 *)((long)pauStack_138 + (long)pauVar30 * 0x18);
      *puVar22 = 0xe;
      puVar22[1] = puVar42;
      puVar22[2] = 0xe;
      pauStack_130 = (undefined1 (*) [16])(*pauVar33 + 2);
      pauStack_228 = (undefined1 (*) [16])((long)pauStack_4c8 + (long)pauVar14 * 0x18);
      pauStack_240 = pauStack_4c8;
      pauStack_238 = pauStack_4c8;
      pauStack_230 = pauStack_4b0;
      if ((undefined1 (*) [16])((long)pauStack_140 - (long)pauStack_130) < pauVar14) {
        thunk_FUN_108855060(&pauStack_140,pauStack_130,pauVar14,8,0x18);
      }
      pauVar33 = pauStack_130;
      _memcpy((undefined *)((long)pauStack_138 + (long)pauStack_130 * 0x18),pauStack_4c8,
              (long)pauVar14 * 0x18);
      pauStack_130 = (undefined1 (*) [16])((long)pauVar33 + (long)pauVar14);
      if (pauStack_4b0 != (undefined1 (*) [16])0x0) {
        _free(pauStack_4c8);
      }
    }
    pauVar30 = pauStack_130;
    pauVar14 = pauStack_170;
    pauVar33 = pauStack_178;
    if (pauVar40 != (undefined1 (*) [16])0x8000000000000000) {
      if (pauStack_130 == pauStack_140) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_140);
      }
      puVar42 = (undefined8 *)((long)pauStack_138 + (long)pauVar30 * 0x18);
      *puVar42 = 0;
      puVar42[1] = 1;
      puVar42[2] = 0;
      pauVar10 = (undefined1 (*) [16])(*pauVar30 + 1);
      pauStack_130 = pauVar10;
      puVar42 = (undefined8 *)_malloc(0xf);
      if (puVar42 == (undefined8 *)0x0) {
        FUN_107c03c64(1,0xf);
        goto LAB_1005152e0;
      }
      *puVar42 = 0x6f6f722072657355;
      *(undefined8 *)((long)puVar42 + 7) = 0x3a6565727420746f;
      if (pauVar10 == pauStack_140) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_140);
      }
      puVar22 = (undefined8 *)((long)pauStack_138 + (long)pauVar10 * 0x18);
      *puVar22 = 0xf;
      puVar22[1] = puVar42;
      puVar22[2] = 0xf;
      pauStack_130 = (undefined1 (*) [16])(*pauVar30 + 2);
      pauStack_228 = (undefined1 (*) [16])((long)pauVar33 + (long)pauVar14 * 0x18);
      pauStack_240 = pauVar33;
      pauStack_238 = pauVar33;
      pauStack_230 = pauVar40;
      if ((undefined1 (*) [16])((long)pauStack_140 - (long)pauStack_130) < pauVar14) {
        thunk_FUN_108855060(&pauStack_140,pauStack_130,pauVar14,8,0x18);
      }
      pauVar30 = pauStack_130;
      _memcpy((undefined *)((long)pauStack_138 + (long)pauStack_130 * 0x18),pauVar33,
              (long)pauVar14 * 0x18);
      pauStack_130 = (undefined1 (*) [16])((long)pauVar30 + (long)pauVar14);
      if (pauVar40 != (undefined1 (*) [16])0x0) {
        _free(pauVar33);
      }
    }
    func_0x000100f3f514(&pauStack_240,pauStack_138,pauStack_130,&UNK_108ca14f4,1);
    pauVar30 = pauStack_138;
    pauVar33 = pauStack_230;
    pauStack_4c8 = pauStack_238;
    pauVar14 = pauStack_240;
    if (pauStack_130 != (undefined1 (*) [16])0x0) {
      puVar42 = (undefined8 *)(*pauStack_138 + 8);
      pauVar40 = pauStack_130;
      do {
        if (puVar42[-1] != 0) {
          _free(*puVar42);
        }
        puVar42 = puVar42 + 3;
        pauVar40 = (undefined1 (*) [16])(pauVar40[-1] + 0xf);
      } while (pauVar40 != (undefined1 (*) [16])0x0);
    }
    if (pauStack_140 != (undefined1 (*) [16])0x0) {
      _free(pauVar30);
    }
    if (((ulong)pauVar35 & 0x7fffffffffffffff) == 0) {
      if ((*(ulong *)(param_2 + 0x2a0) & 0x7fffffffffffffff) != 0) goto LAB_100513d38;
LAB_100513d10:
      *puVar37 = 1;
    }
    else {
      _free(pauVar29);
      if ((*(ulong *)(param_2 + 0x2a0) & 0x7fffffffffffffff) == 0) goto LAB_100513d10;
LAB_100513d38:
      _free(*(undefined8 *)(param_2 + 0x2a8));
      *puVar37 = 1;
    }
    if (pauVar14 == (undefined1 (*) [16])0x8000000000000001) goto LAB_100513d24;
    lVar12 = *(long *)(param_2 + 0x228);
  }
  if (((lVar12 == -0x8000000000000000) && (pauVar14 == (undefined1 (*) [16])0x8000000000000000)) &&
     (*(long *)(param_2 + 600) == -0x8000000000000000)) {
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
      if (1 < bRam000000010b629c88 - 1) {
        if (bRam000000010b629c88 != 0) {
          cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35c31ca84502adf8E
                            );
          if (cVar6 != '\0') goto LAB_100513dac;
        }
        goto LAB_10051471c;
      }
LAB_100513dac:
      uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35c31ca84502adf8E
                        );
      if ((uVar8 & 1) == 0) goto LAB_10051471c;
      pauStack_228 = (undefined1 (*) [16])
                     (
                     ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35c31ca84502adf8E
                     + 0x30);
      pauStack_c0 = (undefined1 (*) [16])&UNK_108ca2ec9;
      pauStack_b8 = (undefined1 (*) [16])0x71;
      pauStack_140 = (undefined1 (*) [16])&pauStack_c0;
      pauStack_138 = (undefined1 (*) [16])&UNK_10b208fd0;
      pauStack_238 = (undefined1 (*) [16])&pauStack_140;
      pauStack_240 = (undefined1 (*) [16])0x1;
      pauStack_230 = (undefined1 (*) [16])0x1;
      FUN_10051596c(&pauStack_240);
    }
    else {
LAB_10051471c:
      lVar12 = 
      ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35c31ca84502adf8E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pauStack_298 = *(undefined1 (**) [16])
                        (
                        ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35c31ca84502adf8E
                        + 0x20);
        pauStack_290 = *(undefined1 (**) [16])
                        (
                        ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35c31ca84502adf8E
                        + 0x28);
        pauStack_2a0 = (undefined1 (*) [16])0x4;
        puVar38 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar38 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar38 + 0x18))(puVar2,&pauStack_2a0);
        if (iVar7 != 0) {
          pauStack_228 = (undefined1 (*) [16])
                         (
                         ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h35c31ca84502adf8E
                         + 0x30);
          pauStack_140 = (undefined1 (*) [16])&UNK_108ca2ec9;
          pauStack_138 = (undefined1 (*) [16])0x71;
          pauStack_180 = (undefined1 (*) [16])&pauStack_140;
          pauStack_178 = (undefined1 (*) [16])&UNK_10b208fd0;
          pauStack_238 = (undefined1 (*) [16])&pauStack_180;
          pauStack_240 = (undefined1 (*) [16])0x1;
          pauStack_230 = (undefined1 (*) [16])0x1;
          pauStack_b8 = pauStack_298;
          pauStack_c0 = pauStack_2a0;
          pauStack_b0 = pauStack_290;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar2,puVar38,&pauStack_c0,&pauStack_240);
        }
      }
    }
    if ((*(long *)(param_2 + 600) != -0x8000000000000000) && (*(long *)(param_2 + 600) != 0)) {
      _free(*(undefined8 *)(param_2 + 0x260));
    }
    *(undefined1 *)(param_2 + 0x278) = 0;
    FUN_100e4ea58(param_2 + 0x240);
    if ((*(long *)(param_2 + 0x228) != -0x8000000000000000) && (*(long *)(param_2 + 0x228) != 0)) {
      _free(*(undefined8 *)(param_2 + 0x230));
    }
    *(undefined1 *)(param_2 + 0x279) = 0;
    FUN_100e47a48(param_2 + 0x1d0);
    if (*(long *)(param_2 + 0x60) != 3) {
      FUN_100e13e9c();
    }
    if (*(long *)(param_2 + 0x210) != 0) {
      _free(*(undefined8 *)(param_2 + 0x218));
    }
    lVar12 = **(long **)(param_2 + 0x208);
    **(long **)(param_2 + 0x208) = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(param_2 + 0x208);
    }
    pauVar35 = (undefined1 (*) [16])0x8000000000000000;
  }
  else {
    pauVar35 = (undefined1 (*) [16])_malloc(0x18);
    if (pauVar35 == (undefined1 (*) [16])0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_1005152e0:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1005152e4);
      (*pcVar13)();
    }
    puVar42 = (undefined8 *)_malloc(0xcc);
    if (puVar42 == (undefined8 *)0x0) {
      FUN_107c03c64(1,0xcc);
      goto LAB_1005152e0;
    }
    puVar42[0x15] = 0x70657220746f6e20;
    puVar42[0x14] = 0x6f6420646e61202c;
    puVar42[0x17] = 0x656c6e75206b6361;
    puVar42[0x16] = 0x6220746920746165;
    *(undefined8 *)((long)puVar42 + 0xc4) = 0x2e746e6176656c65;
    *(undefined8 *)((long)puVar42 + 0xbc) = 0x72207373656c6e75;
    puVar42[0xd] = 0x65622079616d2074;
    puVar42[0xc] = 0x49202e74756f7961;
    puVar42[0xf] = 0x7320726f20657465;
    puVar42[0xe] = 0x6c706d6f636e6920;
    puVar42[0x11] = 0x206f742074692065;
    puVar42[0x10] = 0x7355202e656c6174;
    puVar42[0x13] = 0x7365736e6f707365;
    puVar42[0x12] = 0x72206d726f666e69;
    puVar42[5] = 0x6320646e756f7267;
    puVar42[4] = 0x6b63616220736920;
    puVar42[7] = 0x6365722074756f62;
    puVar42[6] = 0x6120747865746e6f;
    puVar42[9] = 0x63616d20646e6120;
    puVar42[8] = 0x6b726f7720746e65;
    puVar42[0xb] = 0x6c2065636170736b;
    puVar42[10] = 0x726f772f656e6968;
    puVar42[1] = 0x20747865746e6f63;
    *puVar42 = 0x2070757472617453;
    puVar42[3] = 0x736968540a2e7865;
    puVar42[2] = 0x646f43206d6f7266;
    *(undefined8 *)*pauVar35 = 0xcc;
    *(undefined8 **)(*pauVar35 + 8) = puVar42;
    *(undefined8 *)pauVar35[1] = 0xcc;
    pauStack_d8 = (undefined1 (*) [16])0x1;
    pauStack_c8 = (undefined1 (*) [16])0x1;
    uStack_281 = lVar12 != -0x8000000000000000;
    pauStack_1b0 = (undefined1 (*) [16])
                   CONCAT71(pauStack_1b0._1_7_,*(long *)(param_2 + 600) != -0x8000000000000000);
    lStack_198 = CONCAT71(lStack_198._1_7_,pauVar14 != (undefined1 (*) [16])0x8000000000000000);
    *(undefined1 *)(param_2 + 0x279) = 0;
    pauStack_238 = *(undefined1 (**) [16])(param_2 + 0x230);
    pauStack_240 = *(undefined1 (**) [16])(param_2 + 0x228);
    pauStack_230 = *(undefined1 (**) [16])(param_2 + 0x238);
    pauStack_d0 = pauVar35;
    __ZN10codex_core16realtime_context14format_section17hb0ff26b5d70175a7E
              (&pauStack_c0,&UNK_108ca2d9a,0xe,&pauStack_240,0x4b0);
    pauVar40 = pauStack_b0;
    pauVar30 = pauStack_b8;
    pauVar29 = pauStack_c0;
    pauVar35 = pauStack_c8;
    if (pauStack_c0 != (undefined1 (*) [16])0x8000000000000000) {
      if (pauStack_c8 == pauStack_d8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_d8);
      }
      puVar42 = (undefined8 *)((long)pauStack_d0 + (long)pauVar35 * 0x18);
      *puVar42 = pauVar29;
      puVar42[1] = pauVar30;
      puVar42[2] = pauVar40;
      pauStack_c8 = (undefined1 (*) [16])(*pauVar35 + 1);
    }
    *(undefined1 *)(param_2 + 0x278) = 0;
    pauStack_238 = *(undefined1 (**) [16])(param_2 + 0x260);
    pauStack_240 = *(undefined1 (**) [16])(param_2 + 600);
    pauStack_230 = *(undefined1 (**) [16])(param_2 + 0x268);
    __ZN10codex_core16realtime_context14format_section17hb0ff26b5d70175a7E
              (&pauStack_c0,&UNK_108ca2da8,0xb,&pauStack_240,0x898);
    pauVar40 = pauStack_b0;
    pauVar30 = pauStack_b8;
    pauVar29 = pauStack_c0;
    pauVar35 = pauStack_c8;
    if (pauStack_c0 != (undefined1 (*) [16])0x8000000000000000) {
      if (pauStack_c8 == pauStack_d8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_d8);
      }
      puVar42 = (undefined8 *)((long)pauStack_d0 + (long)pauVar35 * 0x18);
      *puVar42 = pauVar29;
      puVar42[1] = pauVar30;
      puVar42[2] = pauVar40;
      pauStack_c8 = (undefined1 (*) [16])(*pauVar35 + 1);
    }
    pauStack_240 = pauVar14;
    pauStack_238 = pauStack_4c8;
    pauStack_230 = pauVar33;
    __ZN10codex_core16realtime_context14format_section17hb0ff26b5d70175a7E
              (&pauStack_c0,&UNK_108ca2db3,0x17,&pauStack_240,0x640);
    pauVar14 = pauStack_b0;
    pauVar33 = pauStack_b8;
    pauVar29 = pauStack_c0;
    pauVar35 = pauStack_c8;
    if (pauStack_c0 != (undefined1 (*) [16])0x8000000000000000) {
      if (pauStack_c8 == pauStack_d8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_d8);
      }
      puVar42 = (undefined8 *)((long)pauStack_d0 + (long)pauVar35 * 0x18);
      *puVar42 = pauVar29;
      puVar42[1] = pauVar33;
      puVar42[2] = pauVar14;
      pauStack_c8 = (undefined1 (*) [16])(*pauVar35 + 1);
    }
    puVar42 = (undefined8 *)_malloc(0xdc);
    if (puVar42 == (undefined8 *)0x0) {
      FUN_107c03c64(1,0xdc);
      goto LAB_1005152e0;
    }
    puVar42[0x15] = 0x6a6f7270202c7365;
    puVar42[0x14] = 0x6c69662053544e45;
    puVar42[0x17] = 0x622074706d6f7270;
    puVar42[0x16] = 0x20636f642d746365;
    puVar42[0x19] = 0x726f6d656d20646e;
    puVar42[0x18] = 0x61202c73646e656c;
    *(undefined8 *)((long)puVar42 + 0xd4) = 0x2e73656972616d6d;
    *(undefined8 *)((long)puVar42 + 0xcc) = 0x75732079726f6d65;
    puVar42[0xd] = 0x2065636170736b72;
    puVar42[0xc] = 0x6f77206c61636f6c;
    puVar42[0xf] = 0x756c637865207369;
    puVar42[0xe] = 0x6854202e6e616373;
    puVar42[0x11] = 0x2079726f6d656d20;
    puVar42[0x10] = 0x6f70657220736564;
    puVar42[0x13] = 0x4741202c736e6f69;
    puVar42[0x12] = 0x7463757274736e69;
    puVar42[5] = 0x616572687420746e;
    puVar42[4] = 0x6572727563206568;
    puVar42[7] = 0x6c61636f6c202c79;
    puVar42[6] = 0x726f747369682064;
    puVar42[9] = 0x617461646174656d;
    puVar42[8] = 0x2064616572687420;
    puVar42[0xb] = 0x206465646e756f62;
    puVar42[10] = 0x206120646e61202c;
    puVar42[1] = 0x6d69746c61657220;
    *puVar42 = 0x746120746c697542;
    puVar42[3] = 0x74206d6f72662070;
    puVar42[2] = 0x7574726174732065;
    pauStack_240 = (undefined1 (*) [16])0xdc;
    pauStack_230 = (undefined1 (*) [16])0xdc;
    pauStack_238 = (undefined1 (*) [16])puVar42;
    __ZN10codex_core16realtime_context14format_section17hb0ff26b5d70175a7E
              (&pauStack_c0,&UNK_108ca2ea6,5,&pauStack_240,300);
    pauVar14 = pauStack_b0;
    pauVar33 = pauStack_b8;
    pauVar29 = pauStack_c0;
    pauVar35 = pauStack_c8;
    if (pauStack_c0 != (undefined1 (*) [16])0x8000000000000000) {
      if (pauStack_c8 == pauStack_d8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&pauStack_d8);
      }
      puVar42 = (undefined8 *)((long)pauStack_d0 + (long)pauVar35 * 0x18);
      *puVar42 = pauVar29;
      puVar42[1] = pauVar33;
      puVar42[2] = pauVar14;
      pauStack_c8 = (undefined1 (*) [16])(*pauVar35 + 1);
    }
    func_0x000100f3f514(&pauStack_c0,pauStack_d0,pauStack_c8,&UNK_108ca2ccc,2);
    pauVar35 = pauStack_b8;
    pauStack_140 = pauStack_b8;
    pauStack_138 = pauStack_b0;
    pauStack_240 = (undefined1 (*) [16])&UNK_10b2a5c70;
    pauStack_238 = (undefined1 (*) [16])&DAT_103296230;
    pauStack_230 = (undefined1 (*) [16])&pauStack_140;
    pauStack_228 = (undefined1 (*) [16])&DAT_103296230;
    pauStack_220 = (undefined1 (*) [16])&UNK_10b2a5c80;
    pauStack_218 = (undefined1 (*) [16])&DAT_103296230;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&pauStack_180,s__108af16d9,&pauStack_240);
    if (pauStack_c0 != (undefined1 (*) [16])0x0) {
      _free(pauVar35);
    }
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
      if (1 < bRam000000010b629c70 - 1) {
        if (bRam000000010b629c70 != 0) {
          cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238fa1b1b345bc28E
                            );
          if (cVar6 != '\0') goto LAB_100514188;
        }
        goto LAB_100514274;
      }
LAB_100514188:
      uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238fa1b1b345bc28E
                        );
      if ((uVar8 & 1) == 0) goto LAB_100514274;
      pauStack_a8 = (undefined1 (*) [16])
                    (
                    ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238fa1b1b345bc28E
                    + 0x30);
      pauStack_140 = (undefined1 (*) [16])&UNK_108ca2eab;
      pauStack_138 = (undefined1 (*) [16])0x3d;
      pauStack_110 = (undefined1 (*) [16])((ulong)(*pauStack_170 + 3) >> 2);
      pauStack_220 = (undefined1 (*) [16])(param_2 + 0x200);
      pauStack_f0 = pauStack_170;
      pauStack_240 = (undefined1 (*) [16])&pauStack_140;
      pauStack_238 = (undefined1 (*) [16])&UNK_10b208fd0;
      pauStack_230 = (undefined1 (*) [16])&pauStack_110;
      pauStack_228 = (undefined1 (*) [16])&UNK_10b215f00;
      pauStack_218 = (undefined1 (*) [16])&UNK_10b215f00;
      pauStack_210 = (undefined1 (*) [16])&pauStack_f0;
      puStack_208 = &UNK_10b215f00;
      puStack_200 = &uStack_281;
      puStack_1f8 = &UNK_10b216268;
      ppauStack_1f0 = &pauStack_1b0;
      puStack_1e8 = &UNK_10b216268;
      plStack_1e0 = &lStack_198;
      puStack_1d8 = &UNK_10b216268;
      pauStack_b8 = (undefined1 (*) [16])&pauStack_240;
      pauStack_c0 = (undefined1 (*) [16])0x1;
      pauStack_b0 = (undefined1 (*) [16])0x7;
      FUN_100515aa8(&pauStack_c0);
    }
    else {
LAB_100514274:
      lVar12 = 
      ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238fa1b1b345bc28E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pauStack_278 = *(undefined1 (**) [16])
                        (
                        ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238fa1b1b345bc28E
                        + 0x20);
        pauStack_270 = *(undefined1 (**) [16])
                        (
                        ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238fa1b1b345bc28E
                        + 0x28);
        pauStack_280 = (undefined1 (*) [16])0x4;
        puVar38 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar38 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar38 + 0x18))(puVar2,&pauStack_280);
        if (iVar7 != 0) {
          pauStack_a8 = (undefined1 (*) [16])
                        (
                        ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h238fa1b1b345bc28E
                        + 0x30);
          pauStack_f0 = (undefined1 (*) [16])&UNK_108ca2eab;
          pauStack_e8 = (undefined1 (*) [16])0x3d;
          pauStack_158 = (undefined1 (*) [16])((ulong)(*pauStack_170 + 3) >> 2);
          pauStack_220 = (undefined1 (*) [16])(param_2 + 0x200);
          pauStack_110 = pauStack_170;
          pauStack_240 = (undefined1 (*) [16])&pauStack_f0;
          pauStack_238 = (undefined1 (*) [16])&UNK_10b208fd0;
          pauStack_230 = (undefined1 (*) [16])&pauStack_158;
          pauStack_228 = (undefined1 (*) [16])&UNK_10b215f00;
          pauStack_218 = (undefined1 (*) [16])&UNK_10b215f00;
          pauStack_210 = (undefined1 (*) [16])&pauStack_110;
          puStack_208 = &UNK_10b215f00;
          puStack_200 = &uStack_281;
          puStack_1f8 = &UNK_10b216268;
          ppauStack_1f0 = &pauStack_1b0;
          puStack_1e8 = &UNK_10b216268;
          plStack_1e0 = &lStack_198;
          puStack_1d8 = &UNK_10b216268;
          pauStack_b8 = (undefined1 (*) [16])&pauStack_240;
          pauStack_c0 = (undefined1 (*) [16])0x1;
          pauStack_b0 = (undefined1 (*) [16])0x7;
          pauStack_138 = pauStack_278;
          pauStack_140 = pauStack_280;
          pauStack_130 = pauStack_270;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar2,puVar38,&pauStack_140,&pauStack_c0);
        }
      }
    }
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) {
      if (1 < bRam000000010b629ca0 - 1) {
        if (bRam000000010b629ca0 != 0) {
          cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf181ca2d10e08311E
                            );
          if (cVar6 != '\0') goto LAB_1005143f4;
        }
        goto LAB_100514464;
      }
LAB_1005143f4:
      uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf181ca2d10e08311E
                        );
      if ((uVar8 & 1) == 0) goto LAB_100514464;
      pauStack_228 = (undefined1 (*) [16])
                     (
                     ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf181ca2d10e08311E
                     + 0x30);
      pauStack_c0 = (undefined1 (*) [16])&pauStack_180;
      pauStack_b8 = (undefined1 (*) [16])&DAT_10112965c;
      pauStack_138 = (undefined1 (*) [16])&pauStack_c0;
      pauStack_140 = (undefined1 (*) [16])s_realtime_startup_context__108ac0326;
      pauStack_f0 = (undefined1 (*) [16])&pauStack_140;
      pauStack_e8 = (undefined1 (*) [16])&UNK_10b208fd0;
      pauStack_238 = (undefined1 (*) [16])&pauStack_f0;
      pauStack_240 = (undefined1 (*) [16])0x1;
      pauStack_230 = (undefined1 (*) [16])0x1;
      FUN_100515be4(&pauStack_240);
    }
    else {
LAB_100514464:
      lVar12 = 
      ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf181ca2d10e08311E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pauStack_260 = *(undefined1 (**) [16])
                        (
                        ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf181ca2d10e08311E
                        + 0x20);
        pauStack_258 = *(undefined1 (**) [16])
                        (
                        ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf181ca2d10e08311E
                        + 0x28);
        pauStack_268 = (undefined1 (*) [16])0x3;
        puVar38 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar38 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar38 + 0x18))(puVar2,&pauStack_268);
        if (iVar7 != 0) {
          pauStack_228 = (undefined1 (*) [16])
                         (
                         ___ZN10codex_core16realtime_context30build_realtime_startup_context28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf181ca2d10e08311E
                         + 0x30);
          pauStack_140 = (undefined1 (*) [16])&pauStack_180;
          pauStack_138 = (undefined1 (*) [16])&DAT_10112965c;
          pauStack_e8 = (undefined1 (*) [16])&pauStack_140;
          pauStack_f0 = (undefined1 (*) [16])s_realtime_startup_context__108ac0326;
          pauStack_110 = (undefined1 (*) [16])&pauStack_f0;
          pauStack_108 = (undefined1 (*) [16])&UNK_10b208fd0;
          pauStack_238 = (undefined1 (*) [16])&pauStack_110;
          pauStack_240 = (undefined1 (*) [16])0x1;
          pauStack_230 = (undefined1 (*) [16])0x1;
          pauStack_b8 = pauStack_260;
          pauStack_c0 = pauStack_268;
          pauStack_b0 = pauStack_258;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar12,puVar2,puVar38,&pauStack_c0,&pauStack_240);
        }
      }
    }
    pauVar29 = pauStack_d0;
    pauVar35 = pauStack_180;
    pauStack_248 = pauStack_170;
    pauStack_250 = pauStack_178;
    if (pauStack_c8 != (undefined1 (*) [16])0x0) {
      puVar42 = (undefined8 *)(*pauStack_d0 + 8);
      pauVar33 = pauStack_c8;
      do {
        if (puVar42[-1] != 0) {
          _free(*puVar42);
        }
        puVar42 = puVar42 + 3;
        pauVar33 = (undefined1 (*) [16])(pauVar33[-1] + 0xf);
      } while (pauVar33 != (undefined1 (*) [16])0x0);
    }
    if (pauStack_d8 != (undefined1 (*) [16])0x0) {
      _free(pauVar29);
    }
    *(undefined1 *)(param_2 + 0x278) = 0;
    lVar25 = *(long *)(param_2 + 0x248);
    lVar12 = *(long *)(param_2 + 0x250) + 1;
    lVar9 = lVar25;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100e0ce70(lVar9);
      lVar9 = lVar9 + 0x278;
    }
    if (*(long *)(param_2 + 0x240) != 0) {
      _free(lVar25);
    }
    *(undefined1 *)(param_2 + 0x279) = 0;
    lVar9 = *(long *)(param_2 + 0x1d8);
    lVar12 = *(long *)(param_2 + 0x1e0) + 1;
    lVar25 = lVar9;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100e02a24(lVar25);
      lVar25 = lVar25 + 0xc0;
    }
    if (*(long *)(param_2 + 0x1d0) != 0) {
      _free(lVar9);
    }
    if (*(long *)(param_2 + 0x60) != 3) {
      FUN_100e13e9c();
    }
    if (*(long *)(param_2 + 0x210) != 0) {
      _free(*(undefined8 *)(param_2 + 0x218));
    }
    lVar12 = **(long **)(param_2 + 0x208);
    **(long **)(param_2 + 0x208) = lVar12 + -1;
    LORelease();
    if (lVar12 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(param_2 + 0x208);
    }
  }
  *param_1 = pauVar35;
  param_1[2] = pauStack_248;
  param_1[1] = pauStack_250;
  uVar11 = 1;
LAB_1005153a4:
  *(undefined1 *)(param_2 + 0x27a) = uVar11;
  return;
LAB_100515618:
  if (pauVar35 != (undefined1 (*) [16])0x0) {
    _free(pauVar29);
  }
  uVar32 = *(undefined8 *)(param_2 + 0x2d8);
  pauVar35 = *(undefined1 (**) [16])((long)pauVar14[-1] + 8);
  pauVar29 = pauVar14;
  if (pauVar35 == *(undefined1 (**) [16])((long)pauVar14[-2] + 8)) {
LAB_100515710:
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17he554f7448e0096e2E();
    pauVar29 = pauVar14;
  }
LAB_100515714:
  *(undefined8 *)(**(undefined1 (**) [16])pauVar29[-1] + (long)pauVar35 * 8) = uVar32;
  *(undefined1 (**) [16])((long)pauVar29[-1] + 8) = (undefined1 (*) [16])(*pauVar35 + 1);
  pauVar29 = *(undefined1 (**) [16])(param_2 + 0x458);
  if (pauVar29 == *(undefined1 (**) [16])(param_2 + 0x460)) goto LAB_100511b2c;
LAB_100515734:
  *(undefined1 **)(param_2 + 0x458) = pauVar29[0x27] + 8;
  *(undefined1 (**) [16])(param_2 + 0x2d8) = pauVar29;
  __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
            (&pauStack_c0,*(undefined8 *)(pauVar29[6] + 8),*(undefined8 *)pauVar29[7]);
  pauVar35 = pauStack_b8;
  __ZN25codex_utils_absolute_path10absolutize10absolutize17h28de722e70c9dcbeE
            (&pauStack_240,pauStack_b8,pauStack_b0);
  if (pauStack_240 == (undefined1 (*) [16])0x8000000000000000) {
    *(undefined1 (**) [16])(param_2 + 0x2e8) = pauStack_238;
    *(undefined8 *)(param_2 + 0x2e0) = 0x8000000000000000;
    if (pauStack_c0 == (undefined1 (*) [16])0x0) goto LAB_1005157b8;
  }
  else {
    *(undefined1 (**) [16])(param_2 + 0x2e0) = pauStack_240;
    *(undefined1 (**) [16])(param_2 + 0x2e8) = pauStack_238;
    *(undefined1 (**) [16])(param_2 + 0x2f0) = pauStack_230;
    if (pauStack_c0 == (undefined1 (*) [16])0x0) {
LAB_100515800:
      *(undefined8 *)(param_2 + 0x300) = *(undefined8 *)(param_2 + 0x2e8);
      *(long *)(param_2 + 0x2f8) = *(long *)(param_2 + 0x2e0);
      *(undefined8 *)(param_2 + 0x308) = *(undefined8 *)(param_2 + 0x2f0);
      if (lRam000000010b62c4d8 != 0) {
        pauStack_c0 = (undefined1 (*) [16])
                      &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
        pauStack_240 = (undefined1 (*) [16])&pauStack_c0;
        __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                  (0x10b62c4d8,1,&pauStack_240,&UNK_10b234158,&UNK_10b2340c8);
      }
      lVar12 = lRam000000010b62c4d0;
      *(ulong *)(param_2 + 800) =
           ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE +
           (*(long *)(lRam000000010b62c4d0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      *(long *)(param_2 + 0x328) = lVar12;
      *(long **)(param_2 + 0x360) = (long *)(param_2 + 0x2f8);
      *(undefined1 *)(param_2 + 0x369) = 0;
      goto LAB_1005152f4;
    }
  }
  _free(pauVar35);
  if (*(long *)(param_2 + 0x2e0) != -0x8000000000000000) goto LAB_100515800;
LAB_1005157b8:
  uVar32 = *(undefined8 *)(*(long *)(param_2 + 0x2d8) + 0x68);
  pauVar35 = *(undefined1 (**) [16])(*(long *)(param_2 + 0x2d8) + 0x70);
  pauVar29 = (undefined1 (*) [16])0x1;
  if ((pauVar35 != (undefined1 (*) [16])0x0) &&
     (pauVar29 = (undefined1 (*) [16])_malloc(pauVar35), pauVar29 == (undefined1 (*) [16])0x0)) {
    FUN_107c03c64(1,pauVar35);
    goto LAB_1005152e0;
  }
  _memcpy(pauVar29,uVar32,pauVar35);
  pauVar33 = pauVar35;
  if (*(long *)(param_2 + 0x2e0) == -0x8000000000000000) goto LAB_100515400;
  goto LAB_100515468;
}

