
/* WARNING: Possible PIC construction at 0x000105a8c794: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a986b8(long *param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8;
  undefined4 uVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x20;
  undefined *puVar15;
  undefined *unaff_x21;
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  char *pcStack_180;
  long ***ppplStack_178;
  long *plStack_170;
  undefined1 uStack_168;
  long **pplStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  char **ppcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  if (((*(ulong *)(*param_1 + 0x10) <= (ulong)*(uint *)(param_1 + 1)) ||
      (plVar13 = (long *)(*(long *)(*param_1 + 8) + (ulong)*(uint *)(param_1 + 1) * 0x158),
      *plVar13 == 2)) || (*(int *)((long)plVar13 + 0x13c) != *(int *)((long)param_1 + 0xc))) {
    auVar18 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                        (s__dangling_store_key_for_stream_i_108b233d4,&stack0xffffffffffffffc0,
                         &UNK_10b3fa588);
    plVar13 = auVar18._8_8_;
    uStack_90 = auVar18._0_8_;
    uVar2 = *(uint *)(plVar13 + 1);
    iVar7 = *(int *)((long)plVar13 + 0xc);
    uStack_88 = (undefined8 *)plVar13[1];
    if ((((ulong)uVar2 < *(ulong *)(*plVar13 + 0x10)) &&
        (plVar13 = (long *)(*(long *)(*plVar13 + 8) + (ulong)uVar2 * 0x158), *plVar13 != 2)) &&
       (*(int *)((long)plVar13 + 0x13c) == iVar7)) {
      plVar13[0x12] = plVar13[0x12] + 1;
      *extraout_x8 = uStack_90;
      *(uint *)(extraout_x8 + 1) = uVar2;
      *(int *)((long)extraout_x8 + 0xc) = iVar7;
      return;
    }
    lStack_80 = (long)&uStack_88 + 4;
    puStack_78 = &DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&lStack_80,&UNK_10b3fa5a0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x105a98874);
    (*pcVar5)();
  }
  if ((plVar13[0x12] != 0) || (*(byte *)(plVar13 + 0xd) < 7)) {
    return;
  }
  uVar12 = 8;
  if (((*(byte *)(plVar13 + 0xd) == 0xb) && ((*(byte *)(param_3 + 0x58) & 1) != 0)) &&
     (uVar12 = 0, *(char *)((long)plVar13 + 0x69) == '\0')) {
    uVar12 = 8;
  }
  func_0x000105a91b30(param_2 + 0xd8,param_1,uVar12,param_3,param_2 + 200);
  lVar16 = *param_1;
  puVar1 = (uint *)(param_1 + 1);
  uVar2 = *puVar1;
  uVar3 = *(uint *)((long)param_1 + 0xc);
  lVar10 = *(long *)puVar1;
  uStack_90 = *(char **)puVar1;
  if (((*(ulong *)(lVar16 + 0x10) <= (ulong)uVar2) ||
      (plVar13 = (long *)(*(long *)(lVar16 + 8) + (ulong)uVar2 * 0x158), *plVar13 == 2)) ||
     (*(uint *)((long)plVar13 + 0x13c) != uVar3)) goto LAB_105a8d11c;
  bVar6 = *(byte *)(plVar13 + 0xd);
  if (6 < bVar6) {
    return;
  }
  uVar4 = bVar6 - 4;
  if (bVar6 < 4) {
    uVar4 = 1;
  }
  if (uVar4 == 0) {
    return;
  }
  if (((uVar4 & 0xff) == 1 && bVar6 < 2) && (1 < *(byte *)((long)plVar13 + 0x69))) {
    return;
  }
  if ((int)plVar13[0xc] != 1000000000) {
    return;
  }
  if (*(ulong *)(param_3 + 0x30) <= *(ulong *)(param_3 + 0x38)) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bVar6 = bRam000000010b638448, bRam000000010b638448 - 1 < 2 ||
         ((bRam000000010b638448 != 0 &&
          (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b638438), bVar6 != 0)))) &&
        (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b638438,bVar6), iVar7 != 0)))) {
      lVar10 = lRam000000010b638438 + 0x30;
      lVar16 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                         (param_1);
      uStack_90 = (char *)(lVar16 + 0x13c);
      uStack_88 = (undefined8 *)&DAT_105abf048;
      puStack_e0 = &uStack_90;
      pcStack_e8 = s__enqueue_reset_expiration__dropp_108b16bba;
      uStack_a0 = (char *)&pcStack_e8;
      ppcStack_98 = (char **)&UNK_10b3f92b0;
      ppuStack_c8 = (undefined8 **)&uStack_a0;
      lStack_d0 = 1;
      uStack_c0 = 1;
      plStack_b8 = (long *)lVar10;
      FUN_105a8d2b0(&lStack_d0);
      return;
    }
    lVar10 = lRam000000010b638438;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
      return;
    }
    if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
      return;
    }
    uStack_f8 = *(undefined8 *)(lRam000000010b638438 + 0x20);
    uStack_f0 = *(undefined8 *)(lRam000000010b638438 + 0x28);
    uStack_100 = 5;
    plVar13 = plRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      plVar13 = (long *)&UNK_10b3c24c8;
    }
    puVar15 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar15 = &UNK_109adfc03;
    }
    iVar7 = (*(code *)plVar13[3])(puVar15,&uStack_100);
    if (iVar7 == 0) {
      return;
    }
    lVar16 = lRam000000010b638438 + 0x30;
    lVar9 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                      (param_1);
    uStack_90 = (char *)(lVar9 + 0x13c);
    uStack_88 = (undefined8 *)&DAT_105abf048;
    puStack_e0 = &uStack_90;
    pcStack_e8 = s__enqueue_reset_expiration__dropp_108b16bba;
    uStack_a0 = (char *)&pcStack_e8;
    ppcStack_98 = (char **)&UNK_10b3f92b0;
    ppuStack_c8 = (undefined8 **)&uStack_a0;
    lStack_d0 = 1;
    uStack_c0 = 1;
    puVar11 = &uStack_100;
    plStack_b8 = (long *)lVar16;
    goto LAB_105a8cc14;
  }
  *(ulong *)(param_3 + 0x38) = *(ulong *)(param_3 + 0x38) + 1;
  lStack_120 = param_2;
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bVar6 = bRam000000010b638460, bRam000000010b638460 - 1 < 2 ||
       ((bRam000000010b638460 != 0 &&
        (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (0x10b638450), bVar6 != 0)))))) &&
     (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (lRam000000010b638450,bVar6), unaff_x20 = param_1, iVar7 != 0)) {
    plVar13 = (long *)(lRam000000010b638450 + 0x30);
    lVar10 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                       (param_1);
    uStack_90 = (char *)(lVar10 + 0x13c);
    uStack_88 = (undefined8 *)&DAT_105abf048;
    puStack_e0 = &uStack_90;
    pcStack_e8 = s_enqueue_reset_expiration__108b238e6;
    uStack_a0 = (char *)&pcStack_e8;
    ppcStack_98 = (char **)&UNK_10b3f92b0;
    ppuStack_c8 = (undefined8 **)&uStack_a0;
    lStack_d0 = 1;
    uStack_c0 = 1;
    plVar14 = &lStack_d0;
    uVar17 = 0x105a8c798;
    plStack_b8 = plVar13;
    goto SUB_105a8d178;
  }
  lVar9 = lRam000000010b638450;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    puStack_110 = *(undefined8 **)(lRam000000010b638450 + 0x20);
    lStack_108 = *(long *)(lRam000000010b638450 + 0x28);
    lStack_118 = 5;
    unaff_x20 = plRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x20 = (long *)&UNK_10b3c24c8;
    }
    unaff_x21 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      unaff_x21 = &UNK_109adfc03;
    }
    iVar7 = (*(code *)unaff_x20[3])(unaff_x21,&lStack_118);
    if (iVar7 != 0) {
      plVar13 = (long *)(lRam000000010b638450 + 0x30);
      lVar8 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                        (param_1);
      pcStack_e8 = (char *)(lVar8 + 0x13c);
      puStack_e0 = (undefined8 *)&DAT_105abf048;
      ppcStack_98 = &pcStack_e8;
      uStack_a0 = s_enqueue_reset_expiration__108b238e6;
      puStack_b0 = &uStack_a0;
      puStack_a8 = &UNK_10b3f92b0;
      ppuStack_c8 = &puStack_b0;
      lStack_d0 = 1;
      uStack_c0 = 1;
      uStack_88 = puStack_110;
      uStack_90 = (char *)lStack_118;
      lStack_80 = lStack_108;
      plStack_b8 = plVar13;
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (lVar9,unaff_x21,unaff_x20,&uStack_90,&lStack_d0);
    }
  }
  param_1 = unaff_x20;
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bVar6 = bRam000000010b636e28, bRam000000010b636e28 - 1 < 2 ||
       ((bRam000000010b636e28 != 0 &&
        (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                           ), bVar6 != 0)))))) &&
     (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                         ,bVar6), iVar7 != 0)) {
    plStack_b8 = (long *)(
                         ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                         + 0x30);
    pcStack_e8 = &UNK_108c73cd0;
    puStack_e0 = (undefined8 *)0x21;
    uStack_a0 = (char *)&pcStack_e8;
    ppcStack_98 = (char **)&UNK_10b3f92b0;
    ppuStack_c8 = (undefined8 **)&uStack_a0;
    lStack_d0 = 1;
    uStack_c0 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
               ,&lStack_d0);
    lVar9 = 
    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_88 = *(undefined8 **)
                   (
                   ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                   + 0x20);
      lStack_80 = *(long *)(
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                           + 0x28);
      uStack_90 = (char *)0x5;
      param_1 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        param_1 = (long *)&UNK_10b3c24c8;
      }
      unaff_x21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x21 = &UNK_109adfc03;
      }
      iVar7 = (*(code *)param_1[3])(unaff_x21,&uStack_90);
      if (iVar7 != 0) {
LAB_105a8c870:
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar9,unaff_x21,param_1,&uStack_90,&lStack_d0);
      }
    }
  }
  else {
    lVar9 = 
    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puStack_e0 = *(undefined8 **)
                    (
                    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                    + 0x20);
      lStack_d8 = *(long *)(
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                           + 0x28);
      pcStack_e8 = (char *)0x5;
      param_1 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        param_1 = (long *)&UNK_10b3c24c8;
      }
      unaff_x21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x21 = &UNK_109adfc03;
      }
      iVar7 = (*(code *)param_1[3])(unaff_x21,&pcStack_e8);
      if (iVar7 != 0) {
        plStack_b8 = (long *)(
                             ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h16298b56701583b6E
                             + 0x30);
        uStack_a0 = &UNK_108c73cd0;
        ppcStack_98 = (char **)0x21;
        puStack_b0 = &uStack_a0;
        puStack_a8 = &UNK_10b3f92b0;
        ppuStack_c8 = &puStack_b0;
        lStack_d0 = 1;
        uStack_c0 = 1;
        uStack_88 = puStack_e0;
        uStack_90 = pcStack_e8;
        lStack_80 = lStack_d8;
        goto LAB_105a8c870;
      }
    }
  }
  uStack_90 = (char *)lVar10;
  if (((*(ulong *)(lVar16 + 0x10) <= (ulong)uVar2) ||
      (plVar13 = (long *)(*(long *)(lVar16 + 8) + (ulong)uVar2 * 0x158), *plVar13 == 2)) ||
     (*(uint *)((long)plVar13 + 0x13c) != uVar3)) {
LAB_105a8d11c:
    do {
      lStack_d0 = (long)&uStack_90 + 4;
      ppuStack_c8 = (undefined8 **)&DAT_105abf048;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__dangling_store_key_for_stream_i_108b233d4,&lStack_d0,&UNK_10b3fa588);
    } while( true );
  }
  if ((int)plVar13[0xc] != 1000000000) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bVar6 = bRam000000010b636e58, bRam000000010b636e58 - 1 < 2 ||
         ((bRam000000010b636e58 != 0 &&
          (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                             ), bVar6 != 0)))) &&
        (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                            ,bVar6), iVar7 != 0)))) {
      plStack_b8 = (long *)(
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                           + 0x30);
      uStack_a0 = &UNK_109b0e2a6;
      ppcStack_98 = (char **)0x25;
      puStack_b0 = &uStack_a0;
      puStack_a8 = &UNK_10b3f92b0;
      ppuStack_c8 = &puStack_b0;
      lStack_d0 = 1;
      uStack_c0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                 ,&lStack_d0);
      lVar10 = 
      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
      ;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
        return;
      }
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
        return;
      }
      uStack_88 = *(undefined8 **)
                   (
                   ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                   + 0x20);
      lStack_80 = *(long *)(
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                           + 0x28);
      uStack_90 = (char *)0x5;
      plVar13 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar13 = (long *)&UNK_10b3c24c8;
      }
      puVar15 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar15 = &UNK_109adfc03;
      }
      iVar7 = (*(code *)plVar13[3])(puVar15,&uStack_90);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      lVar10 = 
      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
      ;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
        return;
      }
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
        return;
      }
      uStack_88 = *(undefined8 **)
                   (
                   ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                   + 0x20);
      lStack_80 = *(long *)(
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                           + 0x28);
      uStack_90 = (char *)0x5;
      plVar13 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar13 = (long *)&UNK_10b3c24c8;
      }
      puVar15 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar15 = &UNK_109adfc03;
      }
      iVar7 = (*(code *)plVar13[3])(puVar15,&uStack_90);
      if (iVar7 == 0) {
        return;
      }
      plStack_b8 = (long *)(
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hd800205f69123d49E
                           + 0x30);
      uStack_a0 = &UNK_109b0e2a6;
      ppcStack_98 = (char **)0x25;
      puStack_b0 = &uStack_a0;
      puStack_a8 = &UNK_10b3f92b0;
      ppuStack_c8 = &puStack_b0;
      lStack_d0 = 1;
      uStack_c0 = 1;
    }
    puVar11 = &uStack_90;
LAB_105a8cc14:
    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
              (lVar10,puVar15,plVar13,puVar11,&lStack_d0);
    return;
  }
  auVar19 = func_0x000106032954(8);
  *(undefined1 (*) [12])(plVar13 + 0xb) = auVar19;
  if (*(int *)(lStack_120 + 0x78) != 1) {
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bVar6 = bRam000000010b636e40, bRam000000010b636e40 - 1 < 2 ||
         ((bRam000000010b636e40 != 0 &&
          (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                             ), bVar6 != 0)))))) &&
       (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                           ,bVar6), iVar7 != 0)) {
      plStack_b8 = (long *)(
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                           + 0x30);
      uStack_a0 = &UNK_109b0e297;
      ppcStack_98 = (char **)0x1f;
      puStack_b0 = &uStack_a0;
      puStack_a8 = &UNK_10b3f92b0;
      ppuStack_c8 = &puStack_b0;
      lStack_d0 = 1;
      uStack_c0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                 ,&lStack_d0);
      lVar10 = 
      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_88 = *(undefined8 **)
                     (
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                     + 0x20);
        lStack_80 = *(long *)(
                             ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                             + 0x28);
        uStack_90 = (char *)0x5;
        plVar13 = plRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          plVar13 = (long *)&UNK_10b3c24c8;
        }
        puVar15 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar15 = &UNK_109adfc03;
        }
        iVar7 = (*(code *)plVar13[3])(puVar15,&uStack_90);
        if (iVar7 != 0) {
LAB_105a8ccf4:
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar10,puVar15,plVar13,&uStack_90,&lStack_d0);
        }
      }
    }
    else {
      lVar10 = 
      ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_88 = *(undefined8 **)
                     (
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                     + 0x20);
        lStack_80 = *(long *)(
                             ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                             + 0x28);
        uStack_90 = (char *)0x5;
        plVar13 = plRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          plVar13 = (long *)&UNK_10b3c24c8;
        }
        puVar15 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar15 = &UNK_109adfc03;
        }
        iVar7 = (*(code *)plVar13[3])(puVar15,&uStack_90);
        if (iVar7 != 0) {
          plStack_b8 = (long *)(
                               ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17hc344329b1f7fe1a6E
                               + 0x30);
          uStack_a0 = &UNK_109b0e297;
          ppcStack_98 = (char **)0x1f;
          puStack_b0 = &uStack_a0;
          puStack_a8 = &UNK_10b3f92b0;
          ppuStack_c8 = &puStack_b0;
          lStack_d0 = 1;
          uStack_c0 = 1;
          goto LAB_105a8ccf4;
        }
      }
    }
    *(undefined4 *)(lStack_120 + 0x78) = 1;
    *(uint *)(lStack_120 + 0x7c) = uVar2;
    *(uint *)(lStack_120 + 0x80) = uVar3;
    goto LAB_105a8d098;
  }
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     ((bVar6 = bRam000000010b636e10, bRam000000010b636e10 - 1 < 2 ||
      ((bRam000000010b636e10 != 0 &&
       (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (&
                           __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                          ), bVar6 != 0)))))) {
    plVar13 = (long *)0x10b636000;
    iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                      (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                       ,bVar6);
    if (iVar7 == 0) goto LAB_105a8ca68;
    plStack_b8 = ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                 + 6;
    uStack_a0 = &UNK_109b0e283;
    ppcStack_98 = (char **)0x29;
    puStack_b0 = &uStack_a0;
    puStack_a8 = &UNK_10b3f92b0;
    ppuStack_c8 = &puStack_b0;
    lStack_d0 = 1;
    uStack_c0 = 1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
               ,&lStack_d0);
    plVar14 = 
    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_88 = (undefined8 *)
                  ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                  [4];
      lStack_80 = ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                  [5];
      uStack_90 = (char *)0x5;
      param_1 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        param_1 = (long *)&UNK_10b3c24c8;
      }
      unaff_x21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x21 = &UNK_109adfc03;
      }
      iVar7 = (*(code *)param_1[3])(unaff_x21,&uStack_90);
      plVar13 = plVar14;
      if (iVar7 == 0) goto LAB_105a8cf50;
LAB_105a8cb2c:
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (plVar14,unaff_x21,param_1,&uStack_90,&lStack_d0);
      plVar13 = plVar14;
    }
  }
  else {
LAB_105a8ca68:
    plVar14 = 
    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_88 = (undefined8 *)
                  ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                  [4];
      lStack_80 = ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                  [5];
      uStack_90 = (char *)0x5;
      param_1 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        param_1 = (long *)&UNK_10b3c24c8;
      }
      unaff_x21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        unaff_x21 = &UNK_109adfc03;
      }
      iVar7 = (*(code *)param_1[3])(unaff_x21,&uStack_90);
      plVar13 = plVar14;
      if (iVar7 != 0) {
        plStack_b8 = ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_4push10__CALLSITE17h021c122b172c1dadE
                     + 6;
        uStack_a0 = &UNK_109b0e283;
        ppcStack_98 = (char **)0x29;
        puStack_b0 = &uStack_a0;
        puStack_a8 = &UNK_10b3f92b0;
        ppuStack_c8 = &puStack_b0;
        lStack_d0 = 1;
        uStack_c0 = 1;
        goto LAB_105a8cb2c;
      }
    }
  }
LAB_105a8cf50:
  uVar4 = *(uint *)(lStack_120 + 0x84);
  uStack_a0 = *(char **)(lStack_120 + 0x84);
  if (((*(ulong *)(lVar16 + 0x10) <= (ulong)uVar4) ||
      (plVar14 = (long *)(*(long *)(lVar16 + 8) + (ulong)uVar4 * 0x158), *plVar14 == 2)) ||
     (*(int *)((long)plVar14 + 0x13c) != *(int *)(lStack_120 + 0x88))) {
    lStack_d0 = (long)&uStack_a0 + 4;
    ppuStack_c8 = (undefined8 **)&DAT_105abf048;
    uVar17 = 0x105a8d178;
    plVar14 = (long *)__ZN4core9panicking9panic_fmt17h6f8816b337451651E
                                (s__dangling_store_key_for_stream_i_108b233d4,&lStack_d0,
                                 &UNK_10b3fa5a0);
SUB_105a8d178:
    uStack_150 = (ulong)uVar3;
    puStack_148 = unaff_x21;
    plStack_140 = param_1;
    plStack_138 = plVar13;
    puStack_130 = &stack0xfffffffffffffff0;
    uStack_128 = uVar17;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b638450,plVar14);
    lVar10 = lRam000000010b638450;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_1e0 = *(undefined8 *)(lRam000000010b638450 + 0x20);
      uStack_1d8 = *(undefined8 *)(lRam000000010b638450 + 0x28);
      uStack_1e8 = 5;
      plVar13 = plRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        plVar13 = (long *)&UNK_10b3c24c8;
      }
      puVar15 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar15 = &UNK_109adfc03;
      }
      iVar7 = (*(code *)plVar13[3])(puVar15,&uStack_1e8);
      if (iVar7 != 0) {
        lStack_1b0 = *(long *)(lVar10 + 0x60);
        uStack_1a8 = *(undefined8 *)(lVar10 + 0x68);
        lStack_1c8 = *(long *)(lVar10 + 0x50);
        uStack_1c0 = *(undefined8 *)(lVar10 + 0x58);
        uStack_1d0 = 1;
        if (lStack_1c8 == 0) {
          uStack_1d0 = 2;
        }
        uStack_188 = *(undefined4 *)(lVar10 + 8);
        uStack_184 = *(undefined4 *)(lVar10 + 0xc);
        uStack_168 = 1;
        pplStack_160 = &plStack_170;
        puStack_158 = &DAT_1061c2098;
        uStack_1b8 = 1;
        if (lStack_1b0 == 0) {
          uStack_1b8 = 2;
        }
        uStack_198 = uStack_1e0;
        uStack_1a0 = uStack_1e8;
        uStack_190 = uStack_1d8;
        ppplStack_178 = &pplStack_160;
        pcStack_180 = s__108b39f4f;
        plStack_170 = plVar14;
        (*(code *)plVar13[4])(puVar15,&uStack_1d0);
      }
    }
    return;
  }
  *(undefined4 *)((long)plVar14 + 0x11c) = 1;
  *(uint *)(plVar14 + 0x24) = uVar2;
  *(uint *)((long)plVar14 + 0x124) = uVar3;
LAB_105a8d098:
  *(uint *)(lStack_120 + 0x84) = uVar2;
  *(uint *)(lStack_120 + 0x88) = uVar3;
  return;
}

