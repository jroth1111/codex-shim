
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10080ab10(undefined2 *param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 *******param_5,undefined8 param_6,undefined8 param_7)

{
  ulong *puVar1;
  undefined8 *******pppppppuVar2;
  char ******ppppppcVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *******pppppppuVar6;
  long *******ppppppplVar7;
  code *pcVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  long *******ppppppplVar13;
  undefined4 uVar14;
  undefined *puVar15;
  char ******ppppppcVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  long lVar19;
  undefined8 ******ppppppuVar20;
  undefined *puVar21;
  undefined8 *****pppppuVar22;
  undefined1 auVar23 [12];
  char ******ppppppcStack_220;
  char ******ppppppcStack_208;
  int iStack_1e4;
  undefined8 *******pppppppuStack_1e0;
  long *******ppppppplStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  long *******ppppppplStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  long *******ppppppplStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  int iStack_194;
  undefined1 auStack_190 [8];
  long *******ppppppplStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long ******pppppplStack_170;
  undefined *puStack_168;
  long *****ppppplStack_160;
  undefined1 *puStack_158;
  undefined1 auStack_150 [8];
  long *******ppppppplStack_148;
  undefined8 ******ppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  undefined *puStack_128;
  long *******ppppppplStack_120;
  undefined *puStack_118;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 *******pppppppuStack_f0;
  long *******ppppppplStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  long *******ppppppplStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char *pcStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  char *******pppppppcStack_80;
  char *******pppppppcStack_78;
  
  if (*(int *)(param_3 + 0x30) == 1) {
    *(bool *)(param_2 + 0x69) = *(int *)(param_3 + 0x34) != 0;
  }
  if (*(int *)(param_3 + 0x18) != 1) goto LAB_10080be50;
  uVar4 = *(uint *)(param_3 + 0x1c);
  uVar5 = *(uint *)(param_2 + 100);
  *(uint *)(param_2 + 100) = uVar4;
  cVar9 = uVar5 <= uVar4 && uVar4 - uVar5 != 0;
  if (uVar5 > uVar4) {
    cVar9 = -1;
  }
  if (cVar9 != -1) {
    if ((cVar9 == '\x01') && (ppppppuVar18 = param_5[0xb], ppppppuVar18 != (undefined8 ******)0x0))
    {
      ppppppuVar17 = (undefined8 ******)0x0;
      do {
        if (param_5[7] <= ppppppuVar17) {
LAB_10080bed0:
          FUN_107c05cac(&UNK_108cb08c8,0x3e,&UNK_10b2233d0);
LAB_10080bee8:
          pppppppuStack_f0 = (undefined8 *******)ppppppcStack_220;
          ppppppplStack_e8 = (long *******)&DAT_105abf048;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b233d4,&pppppppuStack_f0,&UNK_10b3fa5a0);
LAB_10080bf10:
          pppppppuStack_f0 = (undefined8 *******)ppppppcStack_208;
          puVar15 = &UNK_10b3fa5a0;
LAB_10080bf3c:
          ppppppplStack_e8 = (long *******)&DAT_105abf048;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__dangling_store_key_for_stream_i_108b233d4,&pppppppuStack_f0,puVar15);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10080bf5c);
          (*pcVar8)();
        }
        ppppppplStack_e8 = (long *******)NEON_rev64(param_5[6][(long)ppppppuVar17 * 2 + 1],4);
        pppppppuStack_f0 = param_5;
        auVar23 = FUN_10080bf98(param_2,uVar4 - uVar5,param_4,&pppppppuStack_f0,param_6,param_7);
        uVar14 = auVar23._8_4_;
        if ((auVar23._0_8_ & 1) != 0) {
LAB_10080b7c0:
          *(undefined8 *)(param_1 + 0xc) = 0;
          *(undefined8 *)(param_1 + 0x10) = 0;
          *param_1 = 0x101;
          *(undefined4 *)(param_1 + 2) = uVar14;
          *(undefined **)(param_1 + 4) = &UNK_10b209220;
          *(undefined8 *)(param_1 + 8) = 1;
          return;
        }
        if (param_5[0xb] >= ppppppuVar18) {
          ppppppuVar17 = (undefined8 ******)((long)ppppppuVar17 + 1);
        }
        ppppppuVar18 = (undefined8 ******)
                       ((long)ppppppuVar18 - (ulong)(param_5[0xb] < ppppppuVar18));
      } while (ppppppuVar17 < ppppppuVar18);
    }
    goto LAB_10080be50;
  }
  iStack_1e4 = uVar5 - uVar4;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bVar10 = bRam000000010b636cf0, bRam000000010b636cf0 - 1 < 2 ||
       ((bRam000000010b636cf0 != 0 &&
        (bVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
                            ), bVar10 != 0)))) &&
      (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
                           ,bVar10), iVar11 != 0)))) {
    ppppppuStack_d8 =
         (undefined8 ******)
         (
         ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
         + 0x30);
    auStack_190 = (undefined1  [8])&iStack_1e4;
    ppppppplStack_188 =
         (long *******)
         &
         __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
    ;
    puStack_100 = auStack_190;
    auStack_108 = (undefined1  [8])s_decrementing_all_windows__dec__108ac800e;
    ppppppplStack_1b0 = (long *******)auStack_108;
    puStack_1a8 = &UNK_10b208fd0;
    ppppppplStack_e8 = (long *******)&ppppppplStack_1b0;
    pppppppuStack_f0 = (undefined8 *******)0x1;
    ppppppuStack_e0 = (undefined8 ******)0x1;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
               ,&pppppppuStack_f0);
    lVar19 = 
    ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      ppppppplStack_148 =
           *(long ********)
            (
            ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
            + 0x20);
      ppppppuStack_140 =
           *(undefined8 *******)
            (
            ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
            + 0x28);
      auStack_150 = (undefined1  [8])0x5;
      puVar15 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar15 = &UNK_10b3c24c8;
      }
      puVar21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar21 = &UNK_109adfc03;
      }
      iVar11 = (**(code **)(puVar15 + 0x18))(puVar21,auStack_150);
      if (iVar11 != 0) {
LAB_10080ad14:
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar19,puVar21,puVar15,auStack_150,&pppppppuStack_f0);
      }
    }
  }
  else {
    lVar19 = 
    ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      ppppppplStack_1d8 =
           *(long ********)
            (
            ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
            + 0x20);
      ppppppuStack_1d0 =
           *(undefined8 *******)
            (
            ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
            + 0x28);
      pppppppuStack_1e0 = (undefined8 *******)0x5;
      puVar15 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar15 = &UNK_10b3c24c8;
      }
      puVar21 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar21 = &UNK_109adfc03;
      }
      iVar11 = (**(code **)(puVar15 + 0x18))(puVar21,&pppppppuStack_1e0);
      if (iVar11 != 0) {
        ppppppuStack_d8 =
             (undefined8 ******)
             (
             ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings10__CALLSITE17h1e8cf1d7def31fdbE
             + 0x30);
        auStack_190 = (undefined1  [8])&iStack_1e4;
        ppppppplStack_188 =
             (long *******)
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        puStack_100 = auStack_190;
        auStack_108 = (undefined1  [8])s_decrementing_all_windows__dec__108ac800e;
        ppppppplStack_1b0 = (long *******)auStack_108;
        puStack_1a8 = &UNK_10b208fd0;
        ppppppplStack_e8 = (long *******)&ppppppplStack_1b0;
        pppppppuStack_f0 = (undefined8 *******)0x1;
        ppppppuStack_e0 = (undefined8 ******)0x1;
        ppppppplStack_148 = ppppppplStack_1d8;
        auStack_150 = (undefined1  [8])pppppppuStack_1e0;
        ppppppuStack_140 = ppppppuStack_1d0;
        goto LAB_10080ad14;
      }
    }
  }
  iVar11 = iStack_1e4;
  ppppppuVar18 = param_5[0xb];
  if (ppppppuVar18 == (undefined8 ******)0x0) {
    ppppppcStack_208 = (char ******)0x0;
  }
  else {
    ppppppcStack_208 = (char ******)((ulong)ppppppcStack_208 & 0xffffffff00000000);
    ppppppuVar17 = (undefined8 ******)0x0;
    ppppppcStack_220 = (char ******)(auStack_150 + 4);
    do {
      if (param_5[7] <= ppppppuVar17) goto LAB_10080bed0;
      auStack_150._4_4_ = *(undefined4 *)(param_5[6] + (long)ppppppuVar17 * 2 + 1);
      auStack_150._0_4_ = *(uint *)((long)param_5[6] + (long)ppppppuVar17 * 0x10 + 0xc);
      if (((param_5[2] <= (undefined8 ******)(ulong)(uint)auStack_150._0_4_) ||
          (ppppppuVar20 = param_5[1] + (ulong)(uint)auStack_150._0_4_ * 0x2b,
          *ppppppuVar20 == (undefined8 *****)0x2)) ||
         (*(int *)((long)ppppppuVar20 + 0x13c) != auStack_150._4_4_)) goto LAB_10080bee8;
      pppppppuVar2 = (undefined8 *******)((long)ppppppuVar20 + 0x13c);
      uVar4 = *(byte *)(ppppppuVar20 + 0xd) - 7;
      if (*(byte *)(ppppppuVar20 + 0xd) < 7) {
        uVar4 = 6;
      }
      if (((uVar4 & 0xff) < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x54U) != 0) &&
         (ppppppuVar20[0x14] == (undefined8 *****)0x0)) {
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bVar10 = bRam000000010b636d08, bRam000000010b636d08 - 1 < 2 ||
             ((bRam000000010b636d08 != 0 &&
              (bVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
                                  ), bVar10 != 0)))) &&
            (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
                                 ,bVar10), iVar12 != 0)))) {
          ppppppuStack_138 =
               (undefined8 ******)
               (
               ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
               + 0x30);
          ppppppuStack_e0 = ppppppuVar20 + 0x13;
          ppppppplStack_e8 = (long *******)&DAT_10114d844;
          ppppppuStack_d8 = (undefined8 ******)&DAT_10160cf9c;
          pppppppcStack_78 = (char *******)&pppppppuStack_f0;
          pppppppcStack_80 = (char *******)s_skipping_send_closed_stream__id__108ab98b8;
          pppppppuStack_90 = &pppppppcStack_80;
          puStack_88 = &UNK_10b208fd0;
          ppppppplStack_148 = (long *******)&pppppppuStack_90;
          auStack_150 = (undefined1  [8])0x1;
          ppppppuStack_140 = (undefined8 ******)0x1;
          pppppppuStack_f0 = pppppppuVar2;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
                     ,auStack_150);
          lVar19 = 
          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_188 =
                 *(long ********)
                  (
                  ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
                  + 0x20);
            uStack_180 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
                          + 0x28);
            auStack_190 = (undefined1  [8])0x5;
            puVar15 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar15 = &UNK_10b3c24c8;
            }
            puVar21 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar21 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(puVar15 + 0x18))(puVar21,auStack_190);
            if (iVar12 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar19,puVar21,puVar15,auStack_190,auStack_150);
            }
          }
        }
        else {
          lVar19 = 
          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_1c0 = *(undefined **)
                           (
                           ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
                           + 0x20);
            uStack_1b8 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
                          + 0x28);
            ppppppplStack_1c8 = (long *******)0x5;
            puVar15 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar15 = &UNK_10b3c24c8;
            }
            puVar21 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar21 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(puVar15 + 0x18))(puVar21,&ppppppplStack_1c8);
            if (iVar12 != 0) {
              lStack_178 = ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h330996c379695904E
                           + 0x30;
              ppppppuStack_140 = ppppppuVar20 + 0x13;
              ppppppplStack_148 = (long *******)&DAT_10114d844;
              ppppppuStack_138 = (undefined8 ******)&DAT_10160cf9c;
              puStack_158 = auStack_150;
              ppppplStack_160 = (long *****)s_skipping_send_closed_stream__id__108ab98b8;
              pppppplStack_170 = &ppppplStack_160;
              puStack_168 = &UNK_10b208fd0;
              ppppppplStack_188 = &pppppplStack_170;
              auStack_190 = (undefined1  [8])0x1;
              uStack_180 = 1;
              ppppppuStack_d0 = *(undefined8 *******)(lVar19 + 0x60);
              puStack_c8 = *(undefined **)(lVar19 + 0x68);
              ppppppplStack_e8 = *(long ********)(lVar19 + 0x50);
              ppppppuStack_e0 = *(undefined8 *******)(lVar19 + 0x58);
              pppppppuStack_f0 = (undefined8 *******)0x1;
              if (ppppppplStack_e8 == (long *******)0x0) {
                pppppppuStack_f0 = (undefined8 *******)0x2;
              }
              uStack_a8 = *(undefined4 *)(lVar19 + 8);
              uStack_a4 = *(undefined4 *)(lVar19 + 0xc);
              pppppppuStack_90 = (undefined8 *******)auStack_190;
              puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
              pppppppcStack_80 = (char *******)&pppppppuStack_90;
              pppppppcStack_78 = (char *******)&DAT_1061c2098;
              ppppppuStack_d8 = (undefined8 ******)0x1;
              if (ppppppuStack_d0 == (undefined8 ******)0x0) {
                ppppppuStack_d8 = (undefined8 ******)0x2;
              }
              puStack_b8 = puStack_1c0;
              ppppppplStack_c0 = ppppppplStack_1c8;
              uStack_b0 = uStack_1b8;
              pppppppuStack_98 = &pppppppcStack_80;
              pcStack_a0 = s__108b39f4f;
              auStack_150 = (undefined1  [8])pppppppuVar2;
              (**(code **)(puVar15 + 0x20))(puVar21,&pppppppuStack_f0);
            }
          }
        }
      }
      else {
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bVar10 = bRam000000010b636d38, bRam000000010b636d38 - 1 < 2 ||
             ((bRam000000010b636d38 != 0 &&
              (bVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
                                  ), bVar10 != 0)))))) &&
           (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
                                ,bVar10), iVar12 != 0)) {
          ppppppuStack_138 =
               (undefined8 ******)
               (
               ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
               + 0x30);
          ppppppuStack_d0 = ppppppuVar20 + 0x13;
          ppppppplStack_e8 = (long *******)&DAT_10114d844;
          ppppppuStack_e0 = (undefined8 ******)&iStack_1e4;
          ppppppuStack_d8 =
               (undefined8 ******)
               &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
          ;
          puStack_c8 = &DAT_10160cf9c;
          pppppppcStack_78 = (char *******)&pppppppuStack_f0;
          pppppppcStack_80 = (char *******)s_decrementing_stream_window__id____108ab98e4;
          pppppppuStack_90 = &pppppppcStack_80;
          puStack_88 = &UNK_10b208fd0;
          ppppppplStack_148 = (long *******)&pppppppuStack_90;
          auStack_150 = (undefined1  [8])0x1;
          ppppppuStack_140 = (undefined8 ******)0x1;
          pppppppuStack_f0 = pppppppuVar2;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
                     ,auStack_150);
          lVar19 = 
          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_188 =
                 *(long ********)
                  (
                  ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
                  + 0x20);
            uStack_180 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
                          + 0x28);
            auStack_190 = (undefined1  [8])0x5;
            puVar15 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar15 = &UNK_10b3c24c8;
            }
            puVar21 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar21 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(puVar15 + 0x18))(puVar21,auStack_190);
            if (iVar12 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar19,puVar21,puVar15,auStack_190,auStack_150);
            }
          }
        }
        else {
          lVar19 = 
          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_1a8 = *(undefined **)
                           (
                           ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
                           + 0x20);
            uStack_1a0 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
                          + 0x28);
            ppppppplStack_1b0 = (long *******)0x5;
            puVar15 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar15 = &UNK_10b3c24c8;
            }
            puVar21 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar21 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(puVar15 + 0x18))(puVar21,&ppppppplStack_1b0);
            if (iVar12 != 0) {
              lStack_178 = ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h730fe4e0d3fd1d69E
                           + 0x30;
              ppppppuStack_130 = ppppppuVar20 + 0x13;
              ppppppplStack_148 = (long *******)&DAT_10114d844;
              ppppppuStack_140 = (undefined8 ******)&iStack_1e4;
              ppppppuStack_138 =
                   (undefined8 ******)
                   &
                   __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
              ;
              puStack_128 = &DAT_10160cf9c;
              puStack_158 = auStack_150;
              ppppplStack_160 = (long *****)s_decrementing_stream_window__id____108ab98e4;
              pppppplStack_170 = &ppppplStack_160;
              puStack_168 = &UNK_10b208fd0;
              ppppppplStack_188 = &pppppplStack_170;
              auStack_190 = (undefined1  [8])0x1;
              uStack_180 = 1;
              ppppppuStack_d0 = *(undefined8 *******)(lVar19 + 0x60);
              puStack_c8 = *(undefined **)(lVar19 + 0x68);
              ppppppplStack_e8 = *(long ********)(lVar19 + 0x50);
              ppppppuStack_e0 = *(undefined8 *******)(lVar19 + 0x58);
              pppppppuStack_f0 = (undefined8 *******)0x1;
              if (ppppppplStack_e8 == (long *******)0x0) {
                pppppppuStack_f0 = (undefined8 *******)0x2;
              }
              uStack_a8 = *(undefined4 *)(lVar19 + 8);
              uStack_a4 = *(undefined4 *)(lVar19 + 0xc);
              pppppppuStack_90 = (undefined8 *******)auStack_190;
              puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
              pppppppcStack_80 = (char *******)&pppppppuStack_90;
              pppppppcStack_78 = (char *******)&DAT_1061c2098;
              ppppppuStack_d8 = (undefined8 ******)0x1;
              if (ppppppuStack_d0 == (undefined8 ******)0x0) {
                ppppppuStack_d8 = (undefined8 ******)0x2;
              }
              puStack_b8 = puStack_1a8;
              ppppppplStack_c0 = ppppppplStack_1b0;
              uStack_b0 = uStack_1a0;
              pppppppuStack_98 = &pppppppcStack_80;
              pcStack_a0 = s__108b39f4f;
              auStack_150 = (undefined1  [8])pppppppuVar2;
              (**(code **)(puVar15 + 0x20))(puVar21,&pppppppuStack_f0);
            }
          }
        }
        ppppppplVar13 = (long *******)(ppppppuVar20 + 0x13);
        auVar23 = __ZN14rama_http_core2h25proto7streams12flow_control11FlowControl15dec_send_window17h82a6f93a2c7a4c23E
                            (ppppppplVar13,iVar11);
        uVar14 = auVar23._8_4_;
        if ((auVar23._0_8_ & 1) != 0) goto LAB_10080b7c0;
        uVar4 = *(uint *)(ppppppuVar20 + 0x13) &
                ((int)*(uint *)(ppppppuVar20 + 0x13) >> 0x1f ^ 0xffffffffU);
        iStack_194 = *(int *)((long)ppppppuVar20 + 0x9c) - uVar4;
        if (iStack_194 == 0 || *(int *)((long)ppppppuVar20 + 0x9c) < (int)uVar4) {
          iStack_194 = 0;
        }
        else {
          *(uint *)((long)ppppppuVar20 + 0x9c) = uVar4;
          ppppppcStack_208 =
               (char ******)CONCAT44(ppppppcStack_208._4_4_,iStack_194 + (int)ppppppcStack_208);
        }
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bVar10 = bRam000000010b636d20, bRam000000010b636d20 - 1 < 2 ||
             ((bRam000000010b636d20 != 0 &&
              (bVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
                                  ), bVar10 != 0)))))) &&
           (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
                                ,bVar10), iVar12 != 0)) {
          ppppppuStack_138 =
               (undefined8 ******)
               (
               ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
               + 0x30);
          ppppppplStack_e8 = (long *******)&DAT_10114d844;
          ppppppuStack_e0 = (undefined8 ******)&iStack_1e4;
          ppppppuStack_d0 = (undefined8 ******)&iStack_194;
          ppppppuStack_d8 =
               (undefined8 ******)
               &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
          ;
          puStack_c8 = &
                       __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
          ;
          puStack_b8 = &DAT_10160cf9c;
          pppppppcStack_78 = (char *******)&pppppppuStack_f0;
          pppppppcStack_80 = (char *******)s_decremented_stream_window__id____108ab9918;
          pppppppuStack_90 = &pppppppcStack_80;
          puStack_88 = &UNK_10b208fd0;
          ppppppplStack_148 = (long *******)&pppppppuStack_90;
          auStack_150 = (undefined1  [8])0x1;
          ppppppuStack_140 = (undefined8 ******)0x1;
          pppppppuStack_f0 = pppppppuVar2;
          ppppppplStack_c0 = ppppppplVar13;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
                     ,auStack_150);
          lVar19 = 
          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_188 =
                 *(long ********)
                  (
                  ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
                  + 0x20);
            uStack_180 = *(undefined8 *)
                          (
                          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
                          + 0x28);
            auStack_190 = (undefined1  [8])0x5;
            puVar15 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar15 = &UNK_10b3c24c8;
            }
            puVar21 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar21 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(puVar15 + 0x18))(puVar21,auStack_190);
            if (iVar12 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar19,puVar21,puVar15,auStack_190,auStack_150);
            }
          }
        }
        else {
          lVar19 = 
          ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_100 = *(undefined **)
                           (
                           ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
                           + 0x20);
            uStack_f8 = *(undefined8 *)
                         (
                         ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
                         + 0x28);
            auStack_108 = (undefined1  [8])0x5;
            puVar15 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar15 = &UNK_10b3c24c8;
            }
            puVar21 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar21 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(puVar15 + 0x18))(puVar21,auStack_108);
            if (iVar12 != 0) {
              lStack_178 = ___ZN14rama_http_core2h25proto7streams4send4Send21apply_remote_settings28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3e59f2bb2c9da16dE
                           + 0x30;
              ppppppplStack_148 = (long *******)&DAT_10114d844;
              ppppppuStack_140 = (undefined8 ******)&iStack_1e4;
              ppppppuStack_130 = (undefined8 ******)&iStack_194;
              ppppppuStack_138 =
                   (undefined8 ******)
                   &
                   __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
              ;
              puStack_128 = &
                            __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
              ;
              puStack_118 = &DAT_10160cf9c;
              puStack_158 = auStack_150;
              ppppplStack_160 = (long *****)s_decremented_stream_window__id____108ab9918;
              pppppplStack_170 = &ppppplStack_160;
              puStack_168 = &UNK_10b208fd0;
              ppppppplStack_188 = &pppppplStack_170;
              auStack_190 = (undefined1  [8])0x1;
              uStack_180 = 1;
              ppppppuStack_d0 = *(undefined8 *******)(lVar19 + 0x60);
              puStack_c8 = *(undefined **)(lVar19 + 0x68);
              ppppppplStack_e8 = *(long ********)(lVar19 + 0x50);
              ppppppuStack_e0 = *(undefined8 *******)(lVar19 + 0x58);
              pppppppuStack_f0 = (undefined8 *******)0x1;
              if (ppppppplStack_e8 == (long *******)0x0) {
                pppppppuStack_f0 = (undefined8 *******)0x2;
              }
              uStack_a8 = *(undefined4 *)(lVar19 + 8);
              uStack_a4 = *(undefined4 *)(lVar19 + 0xc);
              pppppppuStack_90 = (undefined8 *******)auStack_190;
              puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,1);
              pppppppcStack_80 = (char *******)&pppppppuStack_90;
              pppppppcStack_78 = (char *******)&DAT_1061c2098;
              ppppppuStack_d8 = (undefined8 ******)0x1;
              if (ppppppuStack_d0 == (undefined8 ******)0x0) {
                ppppppuStack_d8 = (undefined8 ******)0x2;
              }
              puStack_b8 = puStack_100;
              ppppppplStack_c0 = (long *******)auStack_108;
              uStack_b0 = uStack_f8;
              pppppppuStack_98 = &pppppppcStack_80;
              pcStack_a0 = s__108b39f4f;
              auStack_150 = (undefined1  [8])pppppppuVar2;
              ppppppplStack_120 = ppppppplVar13;
              (**(code **)(puVar15 + 0x20))(puVar21,&pppppppuStack_f0);
            }
          }
        }
      }
      if (param_5[0xb] >= ppppppuVar18) {
        ppppppuVar17 = (undefined8 ******)((long)ppppppuVar17 + 1);
      }
      ppppppuVar18 = (undefined8 ******)((long)ppppppuVar18 - (ulong)(param_5[0xb] < ppppppuVar18));
    } while (ppppppuVar17 < ppppppuVar18);
  }
  pppppppcStack_80 = (char *******)CONCAT44(pppppppcStack_80._4_4_,(int)ppppppcStack_208);
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
      ((bVar10 = bRam000000010b636960, bRam000000010b636960 - 1 < 2 ||
       ((bRam000000010b636960 != 0 &&
        (bVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
                            ), bVar10 != 0)))))) &&
     (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
                          ,bVar10), iVar11 != 0)) {
    ppppppuStack_d8 =
         ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
         + 6;
    auStack_190 = (undefined1  [8])&pppppppcStack_80;
    ppppppplStack_188 = (long *******)&UNK_10b223390;
    ppppppplStack_e8 = (long *******)auStack_190;
    pppppppuStack_f0 = (undefined8 *******)0x1;
    ppppppuStack_e0 = (undefined8 ******)0x1;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (auStack_150,
               ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
               ,&pppppppuStack_f0);
    ppppppuVar18 = ppppppuStack_130;
  }
  else {
    pppppppuStack_f0 = (undefined8 *******)0x2;
    ppppppuStack_d0 =
         ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
    ;
    ppppppplStack_148 = ppppppplStack_e8;
    ppppppuStack_140 = ppppppuStack_e0;
    ppppppuStack_138 = ppppppuStack_d8;
    ppppppuVar18 = 
    ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
    ;
    auStack_150 = (undefined1  [8])pppppppuStack_f0;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      auStack_190 = (undefined1  [8])&pppppppcStack_80;
      ppppppplStack_188 = (long *******)&UNK_10b223390;
      ppppppuStack_138 =
           ___ZN14rama_http_core2h25proto7streams10prioritize10Prioritize26assign_connection_capacity10__CALLSITE17h83a77bc01f9eddd9E
           + 6;
      ppppppplStack_148 = (long *******)auStack_190;
      auStack_150 = (undefined1  [8])0x1;
      ppppppuStack_140 = (undefined8 ******)0x1;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&pppppppuStack_f0,auStack_150);
      ppppppplStack_148 = ppppppplStack_e8;
      ppppppuStack_140 = ppppppuStack_e0;
      ppppppuStack_138 = ppppppuStack_d8;
      ppppppuVar18 = ppppppuStack_d0;
      auStack_150 = (undefined1  [8])pppppppuStack_f0;
    }
  }
  ppppppuStack_130 = ppppppuVar18;
  if (auStack_150 != (undefined1  [8])0x2) {
    ppppppplVar13 = ppppppplStack_148;
    if (((ulong)auStack_150 & 1) != 0) {
      ppppppplVar13 =
           (long *******)
           ((long)ppppppplStack_148 + ((long)ppppppuStack_140[2] - 1U & 0xfffffffffffffff0) + 0x10);
    }
    (*(code *)ppppppuStack_140[0xc])(ppppppplVar13,&ppppppuStack_138);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (ppppppuStack_130 != (undefined8 ******)0x0)) {
    auStack_190 = (undefined1  [8])ppppppuStack_130[2];
    ppppppplStack_188 = (long *******)ppppppuStack_130[3];
    pppppppuStack_f0 = (undefined8 *******)auStack_190;
    ppppppplStack_e8 = (long *******)&DAT_100c7b3a0;
    FUN_1011d7d74(auStack_150,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&pppppppuStack_f0);
  }
  iVar11 = *(int *)(param_2 + 0x54);
  if (!SCARRY4(iVar11,(int)pppppppcStack_80)) {
    *(int *)(param_2 + 0x54) = iVar11 + (int)pppppppcStack_80;
    iVar11 = iVar11 + (int)pppppppcStack_80;
  }
  if (0 < iVar11) {
    ppppppcStack_208 = (char ******)(auStack_190 + 4);
    ppppppcVar3 = (char ******)(auStack_108 + 4);
    do {
      if (*(int *)(param_2 + 0x1c) != 1) {
        if (auStack_150 != (undefined1  [8])0x2) {
          ppppppplVar13 = ppppppplStack_148;
          if (((ulong)auStack_150 & 1) != 0) {
            ppppppplVar13 =
                 (long *******)
                 ((long)ppppppplStack_148 +
                 ((long)ppppppuStack_140[2] - 1U & 0xfffffffffffffff0) + 0x10);
          }
          (*(code *)ppppppuStack_140[0xd])(ppppppplVar13,&ppppppuStack_138);
        }
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (ppppppuStack_130 != (undefined8 ******)0x0)) {
          auStack_190 = (undefined1  [8])ppppppuStack_130[2];
          ppppppplStack_188 = (long *******)ppppppuStack_130[3];
          pppppppuStack_f0 = (undefined8 *******)auStack_190;
          ppppppplStack_e8 = (long *******)&DAT_100c7b3a0;
          FUN_1011d7d74(auStack_150,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&pppppppuStack_f0);
        }
        goto LAB_10080be48;
      }
      puVar1 = (ulong *)(param_2 + 0x20);
      uVar4 = *(uint *)puVar1;
      ppppppuVar18 = (undefined8 ******)(ulong)uVar4;
      iVar11 = *(int *)(param_2 + 0x24);
      ppppppplVar7 = (long *******)*puVar1;
      pppppppuVar6 = (undefined8 *******)*puVar1;
      pppppppuVar2 = (undefined8 *******)*puVar1;
      auStack_190 = (undefined1  [8])*puVar1;
      ppppppplVar13 = (long *******)*puVar1;
      if (uVar4 == *(uint *)(param_2 + 0x28) && iVar11 == *(int *)(param_2 + 0x2c)) {
LAB_10080bbc4:
        *(undefined4 *)(param_2 + 0x1c) = 0;
      }
      else {
        if (((param_5[2] <= ppppppuVar18) ||
            (ppppppuVar17 = param_5[1] + (ulong)uVar4 * 0x2b, *ppppppuVar17 == (undefined8 *****)0x2
            )) || (*(int *)((long)ppppppuVar17 + 0x13c) != iVar11)) goto LAB_10080bf10;
        uVar5 = *(uint *)((long)ppppppuVar17 + 0xec);
        pppppuVar22 = ppppppuVar17[0x1e];
        *(undefined4 *)((long)ppppppuVar17 + 0xec) = 0;
        if ((uVar5 & 1) == 0) {
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
              ((bRam000000010b636df8 - 1 < 2 ||
               ((bRam000000010b636df8 != 0 &&
                (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                   (&
                                    __ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                                   ), cVar9 != '\0')))))) &&
             (iVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                                 ), iVar12 != 0)) {
            ppppppuStack_d8 =
                 (undefined8 ******)
                 (
                 ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                 + 0x30);
            ppppppplStack_1b0 = (long *******)&UNK_108cb0865;
            puStack_1a8 = (undefined *)0xc7;
            ppppppplStack_1c8 = (long *******)&ppppppplStack_1b0;
            puStack_1c0 = &UNK_10b208fd0;
            ppppppplStack_e8 = (long *******)&ppppppplStack_1c8;
            pppppppuStack_f0 = (undefined8 *******)0x1;
            ppppppuStack_e0 = (undefined8 ******)0x1;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                       ,&pppppppuStack_f0);
            lVar19 = 
            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              ppppppplStack_188 =
                   *(long ********)
                    (
                    ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                    + 0x20);
              uStack_180 = *(undefined8 *)
                            (
                            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                            + 0x28);
              auStack_190 = (undefined1  [8])0x2;
              puVar15 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar15 = &UNK_10b3c24c8;
              }
              puVar21 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar21 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar15 + 0x18))(puVar21,auStack_190);
              if (iVar12 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar19,puVar21,puVar15,auStack_190,&pppppppuStack_f0);
              }
            }
          }
          else {
            lVar19 = 
            ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              puStack_100 = *(undefined **)
                             (
                             ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                             + 0x20);
              uStack_f8 = *(undefined8 *)
                           (
                           ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                           + 0x28);
              auStack_108 = (undefined1  [8])0x2;
              puVar15 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar15 = &UNK_10b3c24c8;
              }
              puVar21 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar21 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar15 + 0x18))(puVar21,auStack_108);
              if (iVar12 != 0) {
                ppppppuStack_d8 =
                     (undefined8 ******)
                     (
                     ___ZN14rama_http_core2h25proto7streams5store14Queue_LT_N_GT_3pop10__CALLSITE17h87ccf0648c1416d0E
                     + 0x30);
                auStack_190 = (undefined1  [8])&UNK_108cb0865;
                ppppppplStack_188 = (long *******)0xc7;
                ppppppplStack_1b0 = (long *******)auStack_190;
                puStack_1a8 = &UNK_10b208fd0;
                ppppppplStack_e8 = (long *******)&ppppppplStack_1b0;
                pppppppuStack_f0 = (undefined8 *******)0x1;
                ppppppuStack_e0 = (undefined8 ******)0x1;
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (lVar19,puVar21,puVar15,auStack_108,&pppppppuStack_f0);
              }
            }
          }
          goto LAB_10080bbc4;
        }
        *(undefined4 *)(param_2 + 0x1c) = 1;
        *(undefined8 ******)(param_2 + 0x20) = pppppuVar22;
      }
      auStack_190 = (undefined1  [8])pppppppuVar2;
      if (((param_5[2] <= ppppppuVar18) ||
          (ppppppuVar17 = param_5[1] + (long)ppppppuVar18 * 0x2b,
          *ppppppuVar17 == (undefined8 *****)0x2)) ||
         (*(int *)((long)ppppppuVar17 + 0x13c) != iVar11)) goto LAB_10080bf10;
      *(undefined1 *)((long)ppppppuVar17 + 0x14a) = 0;
      ppppppcVar16 = ppppppcStack_208;
      auStack_190 = (undefined1  [8])pppppppuVar6;
      if (param_5[2] <= ppppppuVar18) {
LAB_10080bf30:
        puVar15 = &UNK_10b3fa588;
        pppppppuStack_f0 = (undefined8 *******)ppppppcVar16;
        goto LAB_10080bf3c;
      }
      ppppppuVar17 = param_5[1] + (ulong)uVar4 * 0x2b;
      if ((*ppppppuVar17 == (undefined8 *****)0x2) ||
         (*(int *)((long)ppppppuVar17 + 0x13c) != iVar11)) goto LAB_10080bf30;
      cVar9 = *(byte *)(ppppppuVar17 + 0xd) - 7;
      if (*(byte *)(ppppppuVar17 + 0xd) < 7) {
        cVar9 = '\x06';
      }
      if (((cVar9 == '\x05' || cVar9 == '\x03') && (*(char *)((long)ppppppuVar17 + 0x69) == '\x01'))
         || (ppppppuVar17[0x14] != (undefined8 *****)0x0)) {
        ppppppcVar16 = ppppppcVar3;
        auStack_190 = (undefined1  [8])param_5;
        ppppppplStack_188 = ppppppplVar13;
        auStack_108 = (undefined1  [8])ppppppplVar7;
        if (((param_5[2] <= ppppppuVar18) ||
            (ppppppuVar18 = param_5[1] + (ulong)uVar4 * 0x2b, *ppppppuVar18 == (undefined8 *****)0x2
            )) || (*(int *)((long)ppppppuVar18 + 0x13c) != iVar11)) goto LAB_10080bf30;
        iVar11 = *(int *)(ppppppuVar18 + 0xc);
        func_0x000105a818f0(param_2 + 8,auStack_190);
        ppppppplStack_e8 = ppppppplStack_188;
        pppppppuStack_f0 = (undefined8 *******)auStack_190;
        __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
                  (param_6,&pppppppuStack_f0,iVar11 != 1000000000);
      }
    } while (0 < *(int *)(param_2 + 0x54));
  }
  if (auStack_150 != (undefined1  [8])0x2) {
    ppppppplVar13 = ppppppplStack_148;
    if (((ulong)auStack_150 & 1) != 0) {
      ppppppplVar13 =
           (long *******)
           ((long)ppppppplStack_148 + ((long)ppppppuStack_140[2] - 1U & 0xfffffffffffffff0) + 0x10);
    }
    (*(code *)ppppppuStack_140[0xd])(ppppppplVar13,&ppppppuStack_138);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (ppppppuStack_130 != (undefined8 ******)0x0)) {
    auStack_190 = (undefined1  [8])ppppppuStack_130[2];
    ppppppplStack_188 = (long *******)ppppppuStack_130[3];
    pppppppuStack_f0 = (undefined8 *******)auStack_190;
    ppppppplStack_e8 = (long *******)&DAT_100c7b3a0;
    FUN_1011d7d74(auStack_150,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&pppppppuStack_f0);
  }
LAB_10080be48:
  FUN_100dddd8c(auStack_150);
LAB_10080be50:
  if ((*(uint *)(param_3 + 8) & 1) != 0) {
    *(bool *)(param_2 + 0x68) = *(int *)(param_3 + 0xc) != 0;
  }
  *(undefined1 *)param_1 = 4;
  return;
}

