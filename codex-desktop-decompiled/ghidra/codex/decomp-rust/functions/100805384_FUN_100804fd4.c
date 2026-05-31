
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100804fd4(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 **ppuVar4;
  long lVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_690 [8];
  undefined1 *puStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  undefined8 *puStack_660;
  undefined *puStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  undefined1 auStack_4f0 [8];
  undefined *puStack_4e8;
  undefined8 ***pppuStack_470;
  undefined *puStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  undefined1 auStack_448 [8];
  undefined *puStack_440;
  undefined8 uStack_438;
  long lStack_430;
  undefined8 ***pppuStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 ****ppppuStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 *****pppppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 ***pppuStack_158;
  undefined8 *****pppppuStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 ****ppppuStack_138;
  undefined *puStack_130;
  undefined8 ****ppppuStack_128;
  undefined *puStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 *****pppppuStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  undefined8 *****pppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined *puStack_78;
  
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bVar9 = bRam000000010b636858, bRam000000010b636858 - 1 < 2 ||
       ((bRam000000010b636858 != 0 &&
        (bVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h0a80be599c30f0e9E
                           ), bVar9 != 0)))))) &&
     (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h0a80be599c30f0e9E
                          ,bVar9), iVar11 != 0)) {
    uVar2 = *(uint *)(param_3 + 1);
    auStack_448 = (undefined1  [8])param_3[1];
    if (((*(ulong *)(*param_3 + 0x10) <= (ulong)uVar2) ||
        (plVar17 = (long *)(*(long *)(*param_3 + 8) + (ulong)uVar2 * 0x158), *plVar17 == 2)) ||
       (*(int *)((long)plVar17 + 0x13c) != *(int *)((long)param_3 + 0xc))) {
      pppuStack_2e8 = (undefined8 ***)(auStack_448 + 4);
      puStack_2e0 = &DAT_105abf048;
      puVar14 = &UNK_10b3fa588;
      uVar12 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                         (s__dangling_store_key_for_stream_i_108b233d4,&pppuStack_2e8);
      FUN_100dddd8c(&pppuStack_2e8);
      __Unwind_Resume(uVar12);
      auVar19 = FUN_107c05ccc();
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b636888 - 1 < 2 ||
           ((bRam000000010b636888 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h33e29348cd2103c2E
                               ), cVar8 != '\0')))))) &&
         (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h33e29348cd2103c2E
                             ), iVar11 != 0)) {
        uVar2 = *(uint *)(param_4 + 1);
        auStack_690 = (undefined1  [8])param_4[1];
        if (((*(ulong *)(*param_4 + 0x10) <= (ulong)uVar2) ||
            (plVar17 = (long *)(*(long *)(*param_4 + 8) + (ulong)uVar2 * 0x158), *plVar17 == 2)) ||
           (*(int *)((long)plVar17 + 0x13c) != *(int *)((long)param_4 + 0xc))) {
          puStack_660 = (undefined8 *)(auStack_690 + 4);
          puStack_658 = &DAT_105abf048;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b233d4,&puStack_660,&UNK_10b3fa588);
          goto LAB_100805ca0;
        }
        lStack_668 = (long)plVar17 + 0x13c;
        lStack_648 = ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h33e29348cd2103c2E
                     + 0x30;
        auStack_4f0 = (undefined1  [8])&lStack_668;
        puStack_4e8 = &UNK_10b223338;
        puStack_658 = auStack_4f0;
        puStack_660 = (undefined8 *)0x1;
        lStack_650 = 1;
        __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                  (auStack_690,
                   ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h33e29348cd2103c2E
                   ,&puStack_660);
      }
      else {
        puStack_660 = (undefined8 *)0x2;
        lStack_640 = 
        ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h33e29348cd2103c2E
        ;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
          uVar2 = *(uint *)(param_4 + 1);
          auStack_4f0 = (undefined1  [8])param_4[1];
          if (((*(ulong *)(*param_4 + 0x10) <= (ulong)uVar2) ||
              (plVar17 = (long *)(*(long *)(*param_4 + 8) + (ulong)uVar2 * 0x158), *plVar17 == 2))
             || (*(int *)((long)plVar17 + 0x13c) != *(int *)((long)param_4 + 0xc))) {
            auStack_690 = (undefined1  [8])(auStack_4f0 + 4);
            puStack_688 = &DAT_105abf048;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b233d4,auStack_690,&UNK_10b3fa588);
            goto LAB_100805ca0;
          }
          lStack_668 = (long)plVar17 + 0x13c;
          lStack_678 = ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h33e29348cd2103c2E
                       + 0x30;
          auStack_4f0 = (undefined1  [8])&lStack_668;
          puStack_4e8 = &UNK_10b223338;
          puStack_688 = auStack_4f0;
          auStack_690 = (undefined1  [8])0x1;
          lStack_680 = 1;
          __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&puStack_660,auStack_690);
        }
        puStack_688 = puStack_658;
        auStack_690 = (undefined1  [8])puStack_660;
        lStack_678 = lStack_648;
        lStack_680 = lStack_650;
        lStack_670 = lStack_640;
      }
      if (auStack_690 != (undefined1  [8])0x2) {
        puVar13 = puStack_688;
        if (((ulong)auStack_690 & 1) != 0) {
          puVar13 = puStack_688 + (*(long *)(lStack_680 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(lStack_680 + 0x60))(puVar13,&lStack_678);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_670 != 0))
      {
        auStack_4f0 = *(undefined1 (*) [8])(lStack_670 + 0x10);
        puStack_4e8 = *(undefined **)(lStack_670 + 0x18);
        puStack_660 = (undefined8 *)auStack_4f0;
        puStack_658 = &DAT_100c7b3a0;
        FUN_1011d7d74(auStack_690,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&puStack_660);
      }
      uVar2 = *(uint *)(param_4 + 1);
      auStack_4f0 = (undefined1  [8])param_4[1];
      if ((((ulong)uVar2 < *(ulong *)(*param_4 + 0x10)) &&
          (plVar17 = (long *)(*(long *)(*param_4 + 8) + (ulong)uVar2 * 0x158), *plVar17 != 2)) &&
         (*(int *)((long)plVar17 + 0x13c) == *(int *)((long)param_4 + 0xc))) {
        _memcpy(&lStack_650,auVar19._8_8_,0x160);
        puStack_660 = (undefined8 *)0x0;
        lVar18 = *(long *)(puVar14 + 0x20);
        FUN_100f1360c(puVar14,lVar18,&puStack_660);
        if ((int)*plVar17 == 1) {
          if ((*(ulong *)(puVar14 + 0x10) <= (ulong)plVar17[2]) ||
             (plVar16 = (long *)(*(long *)(puVar14 + 8) + plVar17[2] * 0x170), *plVar16 == 2)) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5715,0xb,&UNK_10b223418);
            goto LAB_100805ca0;
          }
          *plVar16 = 1;
          plVar16[1] = lVar18;
        }
        else {
          *plVar17 = 1;
          plVar17[1] = lVar18;
        }
        plVar17[2] = lVar18;
        func_0x000105a807d8(auVar19._0_8_,param_4,param_5);
        if (auStack_690 != (undefined1  [8])0x2) {
          puVar14 = puStack_688;
          if (((ulong)auStack_690 & 1) != 0) {
            puVar14 = puStack_688 + (*(long *)(lStack_680 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(lStack_680 + 0x68))(puVar14,&lStack_678);
        }
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_670 != 0)
           ) {
          auStack_4f0 = *(undefined1 (*) [8])(lStack_670 + 0x10);
          puStack_4e8 = *(undefined **)(lStack_670 + 0x18);
          puStack_660 = (undefined8 *)auStack_4f0;
          puStack_658 = &DAT_100c7b3a0;
          FUN_1011d7d74(auStack_690,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&puStack_660);
        }
        FUN_100dddd8c(auStack_690);
        return;
      }
      puStack_660 = (undefined8 *)(auStack_4f0 + 4);
      puStack_658 = &DAT_105abf048;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b233d4,&puStack_660,&UNK_10b3fa5a0);
LAB_100805ca0:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100805ca4);
      (*pcVar7)();
    }
    auStack_e0 = (undefined1  [8])((long)plVar17 + 0x13c);
    lStack_2d0 = ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h0a80be599c30f0e9E
                 + 0x30;
    auStack_448 = (undefined1  [8])auStack_e0;
    puStack_440 = &UNK_10b223338;
    puStack_2e0 = auStack_448;
    pppuStack_2e8 = (undefined8 ***)0x1;
    lStack_2d8 = 1;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (&pppuStack_470,
               ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h0a80be599c30f0e9E
               ,&pppuStack_2e8);
    lVar18 = lStack_450;
    pppuVar6 = pppuStack_470;
  }
  else {
    pppuStack_2e8 = (undefined8 ***)0x2;
    lStack_2c8 = 
    ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h0a80be599c30f0e9E
    ;
    puStack_468 = puStack_2e0;
    lStack_460 = lStack_2d8;
    lVar18 = 
    ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h0a80be599c30f0e9E
    ;
    pppuVar6 = pppuStack_2e8;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      uVar2 = *(uint *)(param_3 + 1);
      auStack_e0 = (undefined1  [8])param_3[1];
      if (((*(ulong *)(*param_3 + 0x10) <= (ulong)uVar2) ||
          (plVar17 = (long *)(*(long *)(*param_3 + 8) + (ulong)uVar2 * 0x158), *plVar17 == 2)) ||
         (*(int *)((long)plVar17 + 0x13c) != *(int *)((long)param_3 + 0xc))) {
        auStack_448 = (undefined1  [8])(auStack_e0 + 4);
        puStack_440 = &DAT_105abf048;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__dangling_store_key_for_stream_i_108b233d4,auStack_448,&UNK_10b3fa588);
        goto LAB_1008057c8;
      }
      pppuStack_470 = (undefined8 ***)((long)plVar17 + 0x13c);
      lStack_430 = ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h0a80be599c30f0e9E
                   + 0x30;
      auStack_e0 = (undefined1  [8])&pppuStack_470;
      puStack_d8 = &UNK_10b223338;
      puStack_440 = auStack_e0;
      auStack_448 = (undefined1  [8])0x1;
      uStack_438 = 1;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&pppuStack_2e8,auStack_448);
      puStack_468 = puStack_2e0;
      lStack_460 = lStack_2d8;
      lVar18 = lStack_2c8;
      pppuVar6 = pppuStack_2e8;
    }
  }
  pppuStack_470 = pppuVar6;
  lStack_450 = lVar18;
  if (pppuStack_470 != (undefined8 ***)0x2) {
    puVar14 = puStack_468;
    if (((ulong)pppuStack_470 & 1) != 0) {
      puVar14 = puStack_468 + (*(long *)(lStack_460 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(lStack_460 + 0x60))(puVar14,&lStack_458);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_450 != 0)) {
    auStack_448 = *(undefined1 (*) [8])(lStack_450 + 0x10);
    puStack_440 = *(undefined **)(lStack_450 + 0x18);
    pppuStack_2e8 = (undefined8 ***)auStack_448;
    puStack_2e0 = &DAT_100c7b3a0;
    FUN_1011d7d74(&pppuStack_470,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&pppuStack_2e8);
  }
  lVar18 = *param_3;
  puVar1 = (uint *)(param_3 + 1);
  uVar2 = *puVar1;
  uVar3 = (ulong)uVar2;
  iVar11 = *(int *)((long)param_3 + 0xc);
  ppuVar4 = *(undefined8 ***)puVar1;
  uVar15 = *(ulong *)(lVar18 + 0x10);
  while (auStack_e0 = *(undefined1 (*) [8])puVar1, uVar3 < uVar15) {
    auStack_e0 = *(undefined1 (*) [8])puVar1;
    plVar17 = (long *)(*(long *)(lVar18 + 8) + (ulong)uVar2 * 0x158);
    if ((*plVar17 == 2) || (*(int *)((long)plVar17 + 0x13c) != iVar11)) break;
    func_0x00010080e710(auStack_448,plVar17,param_2);
    if (auStack_448[0] == '\t') {
      if (((((uVar3 < *(ulong *)(lVar18 + 0x10)) &&
            (plVar17 = (long *)(*(long *)(lVar18 + 8) + (ulong)uVar2 * 0x158), *plVar17 != 2)) &&
           (*(int *)((long)plVar17 + 0x13c) == iVar11)) &&
          ((plVar17[0x14] = 0, uVar3 < *(ulong *)(lVar18 + 0x10) &&
           (plVar17 = (long *)(*(long *)(lVar18 + 8) + (ulong)uVar2 * 0x158), *plVar17 != 2)))) &&
         (*(int *)((long)plVar17 + 0x13c) == iVar11)) {
        *(undefined4 *)(plVar17 + 0x28) = 0;
        if (((*(int *)(param_1 + 0x3c) == 1) && (uVar2 == *(uint *)(param_1 + 0x40))) &&
           (iVar11 == *(int *)(param_1 + 0x44))) {
          *(undefined4 *)(param_1 + 0x3c) = 2;
        }
        auStack_448 = (undefined1  [8])ppuVar4;
        if (pppuStack_470 != (undefined8 ***)0x2) {
          if (((ulong)pppuStack_470 & 1) != 0) {
            puStack_468 = puStack_468 +
                          (*(long *)(lStack_460 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(lStack_460 + 0x68))(puStack_468,&lStack_458);
        }
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_450 != 0)
           ) {
          auStack_448 = *(undefined1 (*) [8])(lStack_450 + 0x10);
          puStack_440 = *(undefined **)(lStack_450 + 0x18);
          pppuStack_2e8 = (undefined8 ***)auStack_448;
          puStack_2e0 = &DAT_100c7b3a0;
          FUN_1011d7d74(&pppuStack_470,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&pppuStack_2e8);
        }
        FUN_100dddd8c(&pppuStack_470);
        return;
      }
      auStack_448 = *(undefined1 (*) [8])puVar1;
      pppuStack_2e8 = (undefined8 ***)(auStack_448 + 4);
      puStack_2e0 = &DAT_105abf048;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b233d4,&pppuStack_2e8,&UNK_10b3fa5a0);
      goto LAB_1008057c8;
    }
    _memcpy(&pppuStack_2e8,auStack_448,0x160);
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b636870 - 1 < 2 ||
         ((bRam000000010b636870 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
                             ), cVar8 != '\0')))) &&
        (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
                            ), iVar10 != 0)))) {
      lStack_140 = ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
                   + 0x30;
      pppuStack_178 = &pppuStack_2e8;
      ppppuStack_110 = (undefined8 ****)&DAT_1013ec198;
      ppppuStack_188 = (undefined8 ****)s_dropping__frame___108ac7cb4;
      ppppuStack_180 = &pppuStack_118;
      ppppuStack_138 = &ppppuStack_188;
      puStack_130 = &UNK_10b208fd0;
      ppppuStack_128 = &pppuStack_178;
      puStack_120 = &UNK_10b223358;
      pppuStack_158 = (undefined8 ****)0x1;
      pppppuStack_150 = &ppppuStack_138;
      uStack_148 = 2;
      pppuStack_118 = pppuStack_178;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
                 ,&pppuStack_158);
      lVar5 = 
      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_100 = *(undefined **)
                       (
                       ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
                       + 0x20);
        uStack_f8 = *(undefined8 *)
                     (
                     ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
                     + 0x28);
        pppppuStack_108 = (undefined8 *****)0x5;
        puVar14 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar14 = &UNK_10b3c24c8;
        }
        puVar13 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar13 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar14 + 0x18))(puVar13,&pppppuStack_108);
        if (iVar10 != 0) {
          lStack_c0 = *(long *)(lVar5 + 0x60);
          uStack_b8 = *(undefined8 *)(lVar5 + 0x68);
          puStack_d8 = *(undefined **)(lVar5 + 0x50);
          uStack_d0 = *(undefined8 *)(lVar5 + 0x58);
          auStack_e0 = (undefined1  [8])0x1;
          if (puStack_d8 == (undefined *)0x0) {
            auStack_e0 = (undefined1  [8])0x2;
          }
          uStack_98 = *(undefined4 *)(lVar5 + 8);
          uStack_94 = *(undefined4 *)(lVar5 + 0xc);
          ppppuStack_f0 = &pppuStack_158;
          puStack_e8 = (undefined *)CONCAT71(puStack_e8._1_7_,1);
          ppppuStack_80 = &ppppuStack_f0;
          puStack_78 = &DAT_1061c2098;
          uStack_c8 = 1;
          if (lStack_c0 == 0) {
            uStack_c8 = 2;
          }
          puStack_a8 = puStack_100;
          pppppuStack_b0 = pppppuStack_108;
          uStack_a0 = uStack_f8;
          pppppuStack_88 = &ppppuStack_80;
          pcStack_90 = s__108b39f4f;
          (**(code **)(puVar14 + 0x20))(puVar13,auStack_e0);
        }
      }
    }
    else {
      lVar5 = 
      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_168 = *(undefined **)
                       (
                       ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
                       + 0x20);
        uStack_160 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
                      + 0x28);
        pppppuStack_170 = (undefined8 *****)0x5;
        puVar14 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar14 = &UNK_10b3c24c8;
        }
        puVar13 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar13 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar14 + 0x18))(puVar13,&pppppuStack_170);
        if (iVar10 != 0) {
          lStack_140 = ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h27408e3982e94887E
                       + 0x30;
          ppppuStack_188 = &pppuStack_2e8;
          puStack_e8 = &DAT_1013ec198;
          pppuStack_118 = (undefined8 ***)s_dropping__frame___108ac7cb4;
          ppppuStack_110 = &ppppuStack_f0;
          ppppuStack_138 = &pppuStack_118;
          puStack_130 = &UNK_10b208fd0;
          ppppuStack_128 = &ppppuStack_188;
          puStack_120 = &UNK_10b223358;
          pppuStack_158 = (undefined8 ****)0x1;
          pppppuStack_150 = &ppppuStack_138;
          uStack_148 = 2;
          puStack_a8 = puStack_168;
          pppppuStack_b0 = pppppuStack_170;
          uStack_a0 = uStack_160;
          lStack_c0 = *(long *)(lVar5 + 0x60);
          uStack_b8 = *(undefined8 *)(lVar5 + 0x68);
          puStack_d8 = *(undefined **)(lVar5 + 0x50);
          uStack_d0 = *(undefined8 *)(lVar5 + 0x58);
          auStack_e0 = (undefined1  [8])0x1;
          if (puStack_d8 == (undefined *)0x0) {
            auStack_e0 = (undefined1  [8])0x2;
          }
          uStack_98 = *(undefined4 *)(lVar5 + 8);
          uStack_94 = *(undefined4 *)(lVar5 + 0xc);
          ppppuStack_80 = &pppuStack_158;
          puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
          pppppuStack_108 = &ppppuStack_80;
          puStack_100 = &DAT_1061c2098;
          uStack_c8 = 1;
          if (lStack_c0 == 0) {
            uStack_c8 = 2;
          }
          pppppuStack_88 = &pppppuStack_108;
          pcStack_90 = s__108b39f4f;
          ppppuStack_f0 = ppppuStack_188;
          (**(code **)(puVar14 + 0x20))(puVar13,auStack_e0);
        }
      }
    }
    FUN_100d07cd4(&pppuStack_2e8);
    uVar15 = *(ulong *)(lVar18 + 0x10);
  }
  pppuStack_2e8 = (undefined8 ***)(auStack_e0 + 4);
  puStack_2e0 = &DAT_105abf048;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__dangling_store_key_for_stream_i_108b233d4,&pppuStack_2e8,&UNK_10b3fa5a0);
LAB_1008057c8:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1008057cc);
  (*pcVar7)();
}

