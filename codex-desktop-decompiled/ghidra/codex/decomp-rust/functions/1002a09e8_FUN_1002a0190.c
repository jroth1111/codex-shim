
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a0190(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 **ppuVar6;
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
  undefined1 auStack_5e0 [8];
  undefined1 *puStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b0;
  undefined8 *puStack_5a8;
  undefined *puStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  undefined1 auStack_470 [8];
  undefined *puStack_468;
  undefined8 *puStack_3f0;
  undefined *puStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  undefined1 auStack_3c0 [8];
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 **ppuStack_298;
  undefined *puStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  undefined8 ***pppuStack_170;
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined8 ****ppppuStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 ****ppppuStack_120;
  undefined *puStack_118;
  undefined8 ***pppuStack_110;
  undefined *puStack_108;
  undefined8 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char *pcStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined *puStack_70;
  
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bVar9 = bRam000000010b6321e0, bRam000000010b6321e0 - 1 < 2 ||
       ((bRam000000010b6321e0 != 0 &&
        (bVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h9945f8369abf895cE
                           ), bVar9 != 0)))))) &&
     (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h9945f8369abf895cE
                          ,bVar9), iVar11 != 0)) {
    uVar2 = *(uint *)(param_3 + 1);
    auStack_3c0 = (undefined1  [8])param_3[1];
    if (((*(ulong *)(*param_3 + 0x10) <= (ulong)uVar2) ||
        (plVar17 = (long *)(*(long *)(*param_3 + 8) + (ulong)uVar2 * 0x140), *plVar17 == 2)) ||
       (*(int *)((long)plVar17 + 0x124) != *(int *)((long)param_3 + 0xc))) {
      ppuStack_298 = (undefined8 **)(auStack_3c0 + 4);
      puStack_290 = &DAT_10571bc44;
      puVar14 = &UNK_10b3a3ca8;
      uVar12 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                         (s__dangling_store_key_for_stream_i_108b15a2c,&ppuStack_298);
      FUN_1002bdf20(&ppuStack_298);
      __Unwind_Resume(uVar12);
      auVar19 = FUN_107c05ccc();
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b6321f8 - 1 < 2 ||
           ((bRam000000010b6321f8 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h0e20f271286cd0d5E
                               ), cVar8 != '\0')))))) &&
         (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h0e20f271286cd0d5E
                             ), iVar11 != 0)) {
        uVar2 = *(uint *)(param_4 + 1);
        auStack_5e0 = (undefined1  [8])param_4[1];
        if (((*(ulong *)(*param_4 + 0x10) <= (ulong)uVar2) ||
            (plVar17 = (long *)(*(long *)(*param_4 + 8) + (ulong)uVar2 * 0x140), *plVar17 == 2)) ||
           (*(int *)((long)plVar17 + 0x124) != *(int *)((long)param_4 + 0xc))) {
          puStack_5a8 = (undefined8 *)(auStack_5e0 + 4);
          puStack_5a0 = &DAT_10571bc44;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b15a2c,&puStack_5a8,&UNK_10b3a3ca8);
          goto LAB_1002a0e44;
        }
        lStack_5b0 = (long)plVar17 + 0x124;
        lStack_590 = ___ZN2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h0e20f271286cd0d5E
                     + 0x30;
        auStack_470 = (undefined1  [8])&lStack_5b0;
        puStack_468 = &UNK_10b1f4aa8;
        puStack_5a0 = auStack_470;
        puStack_5a8 = (undefined8 *)0x1;
        lStack_598 = 1;
        __ZN7tracing4span4Span3new17hfb1cb23559a61740E
                  (auStack_5e0,
                   ___ZN2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h0e20f271286cd0d5E
                   ,&puStack_5a8);
      }
      else {
        puStack_5a8 = (undefined8 *)0x2;
        lStack_588 = 
        ___ZN2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h0e20f271286cd0d5E;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
          uVar2 = *(uint *)(param_4 + 1);
          auStack_470 = (undefined1  [8])param_4[1];
          if (((*(ulong *)(*param_4 + 0x10) <= (ulong)uVar2) ||
              (plVar17 = (long *)(*(long *)(*param_4 + 8) + (ulong)uVar2 * 0x140), *plVar17 == 2))
             || (*(int *)((long)plVar17 + 0x124) != *(int *)((long)param_4 + 0xc))) {
            auStack_5e0 = (undefined1  [8])(auStack_470 + 4);
            puStack_5d8 = &DAT_10571bc44;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b15a2c,auStack_5e0,&UNK_10b3a3ca8);
            goto LAB_1002a0e44;
          }
          lStack_5b0 = (long)plVar17 + 0x124;
          lStack_5c8 = ___ZN2h25proto7streams10prioritize10Prioritize11queue_frame10__CALLSITE17h0e20f271286cd0d5E
                       + 0x30;
          auStack_470 = (undefined1  [8])&lStack_5b0;
          puStack_468 = &UNK_10b1f4aa8;
          puStack_5d8 = auStack_470;
          auStack_5e0 = (undefined1  [8])0x1;
          lStack_5d0 = 1;
          __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&puStack_5a8,auStack_5e0);
        }
        puStack_5d8 = puStack_5a0;
        auStack_5e0 = (undefined1  [8])puStack_5a8;
        lStack_5c8 = lStack_590;
        lStack_5d0 = lStack_598;
        lStack_5c0 = lStack_588;
      }
      if (auStack_5e0 != (undefined1  [8])0x2) {
        puVar13 = puStack_5d8;
        if (((ulong)auStack_5e0 & 1) != 0) {
          puVar13 = puStack_5d8 + (*(long *)(lStack_5d0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(lStack_5d0 + 0x60))(puVar13,&lStack_5c8);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_5c0 != 0))
      {
        auStack_470 = *(undefined1 (*) [8])(lStack_5c0 + 0x10);
        puStack_468 = *(undefined **)(lStack_5c0 + 0x18);
        puStack_5a8 = (undefined8 *)auStack_470;
        puStack_5a0 = &DAT_1002b2088;
        FUN_1002dafa4(auStack_5e0,&UNK_108c77ecb,0x15,s__>___108ab67cd,&puStack_5a8);
      }
      uVar2 = *(uint *)(param_4 + 1);
      auStack_470 = (undefined1  [8])param_4[1];
      if ((((ulong)uVar2 < *(ulong *)(*param_4 + 0x10)) &&
          (plVar17 = (long *)(*(long *)(*param_4 + 8) + (ulong)uVar2 * 0x140), *plVar17 != 2)) &&
         (*(int *)((long)plVar17 + 0x124) == *(int *)((long)param_4 + 0xc))) {
        _memcpy(&lStack_598,auVar19._8_8_,0x128);
        puStack_5a8 = (undefined8 *)0x0;
        lVar18 = *(long *)(puVar14 + 0x20);
        FUN_1002c6ff4(puVar14,lVar18,&puStack_5a8);
        if ((int)*plVar17 == 1) {
          if ((*(ulong *)(puVar14 + 0x10) <= (ulong)plVar17[2]) ||
             (plVar16 = (long *)(*(long *)(puVar14 + 8) + plVar17[2] * 0x138), *plVar16 == 2)) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108c75c96,0xb,&UNK_10b1f4d78);
            goto LAB_1002a0e44;
          }
          *plVar16 = 1;
          plVar16[1] = lVar18;
        }
        else {
          *plVar17 = 1;
          plVar17[1] = lVar18;
        }
        plVar17[2] = lVar18;
        func_0x0001056f74b4(auVar19._0_8_,param_4,param_5);
        if (auStack_5e0 != (undefined1  [8])0x2) {
          puVar14 = puStack_5d8;
          if (((ulong)auStack_5e0 & 1) != 0) {
            puVar14 = puStack_5d8 + (*(long *)(lStack_5d0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(lStack_5d0 + 0x68))(puVar14,&lStack_5c8);
        }
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_5c0 != 0)
           ) {
          auStack_470 = *(undefined1 (*) [8])(lStack_5c0 + 0x10);
          puStack_468 = *(undefined **)(lStack_5c0 + 0x18);
          puStack_5a8 = (undefined8 *)auStack_470;
          puStack_5a0 = &DAT_1002b2088;
          FUN_1002dafa4(auStack_5e0,&UNK_108c77ecb,0x15,s_<____108ab67c5,&puStack_5a8);
        }
        FUN_1002bdf20(auStack_5e0);
        return;
      }
      puStack_5a8 = (undefined8 *)(auStack_470 + 4);
      puStack_5a0 = &DAT_10571bc44;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b15a2c,&puStack_5a8,&UNK_10b3a3cc0);
LAB_1002a0e44:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a0e48);
      (*pcVar7)();
    }
    auStack_d8 = (undefined1  [8])((long)plVar17 + 0x124);
    lStack_280 = ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h9945f8369abf895cE
                 + 0x30;
    auStack_3c0 = (undefined1  [8])auStack_d8;
    puStack_3b8 = &UNK_10b1f4aa8;
    puStack_290 = auStack_3c0;
    ppuStack_298 = (undefined8 **)0x1;
    lStack_288 = 1;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (&puStack_3f0,
               ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h9945f8369abf895cE
               ,&ppuStack_298);
    lVar18 = lStack_3d0;
    ppuVar6 = (undefined8 **)puStack_3f0;
  }
  else {
    ppuStack_298 = (undefined8 **)0x2;
    lStack_278 = 
    ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h9945f8369abf895cE;
    puStack_3e8 = puStack_290;
    lStack_3e0 = lStack_288;
    lVar18 = 
    ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h9945f8369abf895cE;
    ppuVar6 = ppuStack_298;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      uVar2 = *(uint *)(param_3 + 1);
      auStack_d8 = (undefined1  [8])param_3[1];
      if (((*(ulong *)(*param_3 + 0x10) <= (ulong)uVar2) ||
          (plVar17 = (long *)(*(long *)(*param_3 + 8) + (ulong)uVar2 * 0x140), *plVar17 == 2)) ||
         (*(int *)((long)plVar17 + 0x124) != *(int *)((long)param_3 + 0xc))) {
        auStack_3c0 = (undefined1  [8])(auStack_d8 + 4);
        puStack_3b8 = &DAT_10571bc44;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__dangling_store_key_for_stream_i_108b15a2c,auStack_3c0,&UNK_10b3a3ca8);
        goto LAB_1002a0968;
      }
      puStack_3f0 = (undefined8 *)((long)plVar17 + 0x124);
      lStack_3a8 = ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h9945f8369abf895cE
                   + 0x30;
      auStack_d8 = (undefined1  [8])&puStack_3f0;
      puStack_d0 = &UNK_10b1f4aa8;
      puStack_3b8 = auStack_d8;
      auStack_3c0 = (undefined1  [8])0x1;
      uStack_3b0 = 1;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&ppuStack_298,auStack_3c0);
      puStack_3e8 = puStack_290;
      lStack_3e0 = lStack_288;
      lVar18 = lStack_278;
      ppuVar6 = ppuStack_298;
    }
  }
  puStack_3f0 = ppuVar6;
  lStack_3d0 = lVar18;
  if ((undefined8 **)puStack_3f0 != (undefined8 **)0x2) {
    puVar14 = puStack_3e8;
    if (((ulong)puStack_3f0 & 1) != 0) {
      puVar14 = puStack_3e8 + (*(long *)(lStack_3e0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(lStack_3e0 + 0x60))(puVar14,&lStack_3d8);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_3d0 != 0)) {
    auStack_3c0 = *(undefined1 (*) [8])(lStack_3d0 + 0x10);
    puStack_3b8 = *(undefined **)(lStack_3d0 + 0x18);
    ppuStack_298 = (undefined8 **)auStack_3c0;
    puStack_290 = &DAT_1002b2088;
    FUN_1002dafa4(&puStack_3f0,&UNK_108c77ecb,0x15,s__>___108ab67cd,&ppuStack_298);
  }
  lVar18 = *param_3;
  puVar1 = (uint *)(param_3 + 1);
  uVar2 = *puVar1;
  uVar3 = (ulong)uVar2;
  iVar11 = *(int *)((long)param_3 + 0xc);
  puVar4 = *(undefined8 **)puVar1;
  uVar15 = *(ulong *)(lVar18 + 0x10);
  while (auStack_d8 = *(undefined1 (*) [8])puVar1, uVar3 < uVar15) {
    auStack_d8 = *(undefined1 (*) [8])puVar1;
    plVar17 = (long *)(*(long *)(lVar18 + 8) + (ulong)uVar2 * 0x140);
    if ((*plVar17 == 2) || (*(int *)((long)plVar17 + 0x124) != iVar11)) break;
    FUN_1002a43e8(auStack_3c0,plVar17,param_2);
    if (auStack_3c0[0] == '\t') {
      if (((((uVar3 < *(ulong *)(lVar18 + 0x10)) &&
            (plVar17 = (long *)(*(long *)(lVar18 + 8) + (ulong)uVar2 * 0x140), *plVar17 != 2)) &&
           (*(int *)((long)plVar17 + 0x124) == iVar11)) &&
          ((plVar17[0x11] = 0, uVar3 < *(ulong *)(lVar18 + 0x10) &&
           (plVar17 = (long *)(*(long *)(lVar18 + 8) + (ulong)uVar2 * 0x140), *plVar17 != 2)))) &&
         (*(int *)((long)plVar17 + 0x124) == iVar11)) {
        *(undefined4 *)(plVar17 + 0x25) = 0;
        if (((*(int *)(param_1 + 0x4c) == 1) && (uVar2 == *(uint *)(param_1 + 0x50))) &&
           (iVar11 == *(int *)(param_1 + 0x54))) {
          *(undefined4 *)(param_1 + 0x4c) = 2;
        }
        auStack_3c0 = (undefined1  [8])puVar4;
        if ((undefined8 **)puStack_3f0 != (undefined8 **)0x2) {
          if (((ulong)puStack_3f0 & 1) != 0) {
            puStack_3e8 = puStack_3e8 +
                          (*(long *)(lStack_3e0 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
          }
          (**(code **)(lStack_3e0 + 0x68))(puStack_3e8,&lStack_3d8);
        }
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_3d0 != 0)
           ) {
          auStack_3c0 = *(undefined1 (*) [8])(lStack_3d0 + 0x10);
          puStack_3b8 = *(undefined **)(lStack_3d0 + 0x18);
          ppuStack_298 = (undefined8 **)auStack_3c0;
          puStack_290 = &DAT_1002b2088;
          FUN_1002dafa4(&puStack_3f0,&UNK_108c77ecb,0x15,s_<____108ab67c5,&ppuStack_298);
        }
        FUN_1002bdf20(&puStack_3f0);
        return;
      }
      auStack_3c0 = *(undefined1 (*) [8])puVar1;
      ppuStack_298 = (undefined8 **)(auStack_3c0 + 4);
      puStack_290 = &DAT_10571bc44;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b15a2c,&ppuStack_298,&UNK_10b3a3cc0);
      goto LAB_1002a0968;
    }
    _memcpy(&ppuStack_298,auStack_3c0,0x128);
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bRam000000010b6321c8 - 1 < 2 ||
         ((bRam000000010b6321c8 != 0 &&
          (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E
                             ), cVar8 != '\0')))) &&
        (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E
                            ), iVar10 != 0)))) {
      lStack_128 = ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E
                   + 0x30;
      pppuStack_170 = (undefined8 ***)&UNK_108c78a18;
      uStack_168 = 0x11;
      ppuStack_160 = &ppuStack_298;
      ppppuStack_120 = &pppuStack_170;
      puStack_118 = &UNK_10b1f3630;
      pppuStack_110 = &ppuStack_160;
      puStack_108 = &UNK_10b1f4b70;
      pppuStack_140 = (undefined8 ***)0x1;
      ppppuStack_138 = &ppppuStack_120;
      uStack_130 = 2;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E
                 ,&pppuStack_140);
      lVar5 = 
      ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_f8 = *(undefined **)
                      (
                      ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E
                      + 0x20);
        uStack_f0 = *(undefined8 *)
                     (
                     ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E
                     + 0x28);
        ppppuStack_100 = (undefined8 *****)0x5;
        puVar14 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar14 = &UNK_10b3c24c8;
        }
        puVar13 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar13 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar14 + 0x18))(puVar13,&ppppuStack_100);
        if (iVar10 != 0) {
          lStack_b8 = *(long *)(lVar5 + 0x60);
          uStack_b0 = *(undefined8 *)(lVar5 + 0x68);
          puStack_d0 = *(undefined **)(lVar5 + 0x50);
          uStack_c8 = *(undefined8 *)(lVar5 + 0x58);
          auStack_d8 = (undefined1  [8])0x1;
          if (puStack_d0 == (undefined *)0x0) {
            auStack_d8 = (undefined1  [8])0x2;
          }
          uStack_90 = *(undefined4 *)(lVar5 + 8);
          uStack_8c = *(undefined4 *)(lVar5 + 0xc);
          pppuStack_e8 = &pppuStack_140;
          uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
          ppppuStack_78 = &pppuStack_e8;
          puStack_70 = &DAT_1061c2098;
          uStack_c0 = 1;
          if (lStack_b8 == 0) {
            uStack_c0 = 2;
          }
          puStack_a0 = puStack_f8;
          ppppuStack_a8 = ppppuStack_100;
          uStack_98 = uStack_f0;
          pppppuStack_80 = &ppppuStack_78;
          pcStack_88 = s__108b39f4f;
          (**(code **)(puVar14 + 0x20))(puVar13,auStack_d8);
        }
      }
    }
    else {
      lVar5 = 
      ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_150 = *(undefined **)
                       (
                       ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E
                       + 0x20);
        uStack_148 = *(undefined8 *)
                      (
                      ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E
                      + 0x28);
        ppppuStack_158 = (undefined8 *****)0x5;
        puVar14 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar14 = &UNK_10b3c24c8;
        }
        puVar13 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar13 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar14 + 0x18))(puVar13,&ppppuStack_158);
        if (iVar10 != 0) {
          lStack_128 = ___ZN2h25proto7streams10prioritize10Prioritize11clear_queue10__CALLSITE17h42baacb57c389452E
                       + 0x30;
          pppuStack_e8 = (undefined8 ***)&UNK_108c78a18;
          uStack_e0 = 0x11;
          pppuStack_170 = &ppuStack_298;
          ppppuStack_120 = &pppuStack_e8;
          puStack_118 = &UNK_10b1f3630;
          pppuStack_110 = &pppuStack_170;
          puStack_108 = &UNK_10b1f4b70;
          pppuStack_140 = (undefined8 ***)0x1;
          ppppuStack_138 = &ppppuStack_120;
          uStack_130 = 2;
          puStack_a0 = puStack_150;
          ppppuStack_a8 = ppppuStack_158;
          uStack_98 = uStack_148;
          lStack_b8 = *(long *)(lVar5 + 0x60);
          uStack_b0 = *(undefined8 *)(lVar5 + 0x68);
          puStack_d0 = *(undefined **)(lVar5 + 0x50);
          uStack_c8 = *(undefined8 *)(lVar5 + 0x58);
          auStack_d8 = (undefined1  [8])0x1;
          if (puStack_d0 == (undefined *)0x0) {
            auStack_d8 = (undefined1  [8])0x2;
          }
          uStack_90 = *(undefined4 *)(lVar5 + 8);
          uStack_8c = *(undefined4 *)(lVar5 + 0xc);
          ppppuStack_78 = &pppuStack_140;
          puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,1);
          ppppuStack_100 = &ppppuStack_78;
          puStack_f8 = &DAT_1061c2098;
          uStack_c0 = 1;
          if (lStack_b8 == 0) {
            uStack_c0 = 2;
          }
          pppppuStack_80 = &ppppuStack_100;
          pcStack_88 = s__108b39f4f;
          (**(code **)(puVar14 + 0x20))(puVar13,auStack_d8);
        }
      }
    }
    FUN_1002c4fd4(&ppuStack_298);
    uVar15 = *(ulong *)(lVar18 + 0x10);
  }
  ppuStack_298 = (undefined8 **)(auStack_d8 + 4);
  puStack_290 = &DAT_10571bc44;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__dangling_store_key_for_stream_i_108b15a2c,&ppuStack_298,&UNK_10b3a3cc0);
LAB_1002a0968:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1002a096c);
  (*pcVar7)();
}

