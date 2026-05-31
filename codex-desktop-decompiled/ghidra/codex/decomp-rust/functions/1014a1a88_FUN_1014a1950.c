
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1014a1950(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint3 uVar5;
  undefined5 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  uint *puVar14;
  long *plVar15;
  long *plVar16;
  undefined4 *puVar17;
  undefined1 uVar18;
  char cVar19;
  ulong *extraout_x8;
  ulong *puVar20;
  code *pcVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  ulong **ppuVar24;
  ulong **extraout_x9;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  ulong extraout_x10;
  undefined2 *puVar28;
  ulong *unaff_x22;
  undefined8 uVar29;
  undefined4 uVar30;
  ulong ***unaff_x23;
  undefined8 *puVar31;
  undefined4 uVar32;
  char cVar33;
  long *plVar34;
  char in_wzr;
  undefined1 auVar35 [16];
  undefined2 auStack_41c [2];
  undefined2 uStack_418;
  undefined2 uStack_416;
  undefined2 auStack_414 [2];
  undefined1 auStack_410 [8];
  long *plStack_408;
  long *plStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3a8;
  undefined2 uStack_3a4;
  undefined8 *puStack_3a0;
  long *plStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined8 uStack_380;
  undefined3 uStack_378;
  undefined5 uStack_375;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  long lStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong ***pppuStack_1c8;
  undefined *puStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  ulong ***pppuStack_1a0;
  ulong ***pppuStack_198;
  ulong **ppuStack_190;
  ulong ***pppuStack_188;
  ulong **ppuStack_180;
  ulong ****ppppuStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char *pcStack_b8;
  ulong ****ppppuStack_b0;
  ulong ***pppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  ulong **ppuStack_80;
  undefined *puStack_78;
  ulong ***pppuStack_70;
  undefined *puStack_68;
  
  bVar4 = *(byte *)(param_1 + 0x10);
  if (1 < bVar4) {
    if (bVar4 == 3) {
LAB_1014a1f0c:
      uVar27 = func_0x000106114748(param_1 + 2,param_2);
      if ((uVar27 & 1) != 0) {
        plVar12 = (long *)0x1;
        uVar18 = 3;
        goto LAB_1014a1f78;
      }
      FUN_100de8a5c(param_1 + 2);
    }
    else {
      func_0x000108a07b10(&UNK_10b24dc60);
      puVar20 = extraout_x8;
      ppuVar24 = extraout_x9;
      uVar27 = extraout_x10;
LAB_1014a1b4c:
      if (uVar27 == 2) {
        if (0x3d < (uint)((ulong)ppuVar24 >> 0x20) ||
            (1L << ((ulong)ppuVar24 >> 0x20 & 0x3f) & 0x2260000100000010U) == 0) {
LAB_1014a1d14:
          if ((*puVar20 < 5) &&
             (((bRam000000010b639b08 - 1 < 2 ||
               ((bRam000000010b639b08 != 0 &&
                (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
                                    ), cVar10 != '\0')))) &&
              (uVar27 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
                                  ), (uVar27 & 1) != 0)))) {
            uStack_168 = ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
                         + 0x30;
            pppuStack_188 =
                 (ulong ***)
                 &
                 __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
            ;
            pppuStack_198 = &ppuStack_190;
            pppuStack_1a0 = (ulong ***)s_TCP_accept_error__108ad897b;
            pppuStack_1c8 = (ulong ***)&pppuStack_1a0;
            puStack_1c0 = &UNK_10b208fd0;
            ppppuStack_178 = &pppuStack_1c8;
            ppuStack_180 = (ulong **)0x1;
            uStack_170 = 1;
            ppuStack_190 = (ulong **)unaff_x23;
            __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                      (___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
                       ,&ppuStack_180);
            lVar8 = 
            ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
              puStack_90 = *(undefined **)
                            (
                            ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
                            + 0x20);
              uStack_88 = *(undefined8 *)
                           (
                           ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
                           + 0x28);
              pppuStack_98 = (ulong ***)0x1;
              puVar2 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_10b3c24c8;
              }
              puVar3 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_109adfc03;
              }
              iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppuStack_98);
              if (iVar11 != 0) {
                lStack_e8 = *(long *)(lVar8 + 0x60);
                uStack_e0 = *(undefined8 *)(lVar8 + 0x68);
                lStack_100 = *(long *)(lVar8 + 0x50);
                uStack_f8 = *(undefined8 *)(lVar8 + 0x58);
                uStack_108 = 1;
                if (lStack_100 == 0) {
                  uStack_108 = 2;
                }
                uVar30 = *(undefined4 *)(lVar8 + 8);
                uVar32 = *(undefined4 *)(lVar8 + 0xc);
                ppuStack_80 = (ulong **)&ppuStack_180;
                puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
                pppuStack_70 = &ppuStack_80;
                puStack_68 = &DAT_1061c2098;
                uStack_f0 = 1;
                if (lStack_e8 == 0) {
                  uStack_f0 = 2;
                }
                unaff_x22[7] = unaff_x22[0xf];
                unaff_x22[6] = unaff_x22[0xe];
                uStack_c8 = uStack_88;
                ppppuStack_b0 = &pppuStack_70;
                pcStack_b8 = s__108b39f4f;
                uStack_c0 = uVar30;
                uStack_bc = uVar32;
                (**(code **)(puVar2 + 0x20))(puVar3,&uStack_108);
              }
            }
          }
          else {
            lVar8 = 
            ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
              uStack_1b0 = *(ulong *)(
                                     ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
                                     + 0x20);
              uStack_1a8 = *(undefined8 *)
                            (
                            ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
                            + 0x28);
              uStack_1b8 = 1;
              puVar2 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar2 = &UNK_10b3c24c8;
              }
              puVar3 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar3 = &UNK_109adfc03;
              }
              iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_1b8);
              if (iVar11 != 0) {
                uStack_168 = ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd0e95f44822dc9caE
                             + 0x30;
                puStack_78 = &
                             __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
                ;
                pppuStack_188 = &ppuStack_80;
                ppuStack_190 = (ulong **)s_TCP_accept_error__108ad897b;
                pppuStack_1a0 = &ppuStack_190;
                pppuStack_198 = (ulong ***)&UNK_10b208fd0;
                ppppuStack_178 = &pppuStack_1a0;
                ppuStack_180 = (ulong **)0x1;
                uStack_170 = 1;
                lStack_e8 = *(long *)(lVar8 + 0x60);
                uStack_e0 = *(undefined8 *)(lVar8 + 0x68);
                lStack_100 = *(long *)(lVar8 + 0x50);
                uStack_f8 = *(undefined8 *)(lVar8 + 0x58);
                uStack_108 = 1;
                if (lStack_100 == 0) {
                  uStack_108 = 2;
                }
                uVar30 = *(undefined4 *)(lVar8 + 8);
                uVar32 = *(undefined4 *)(lVar8 + 0xc);
                pppuStack_70 = &ppuStack_180;
                puStack_68 = (undefined *)CONCAT71(puStack_68._1_7_,1);
                pppuStack_98 = (ulong ***)&pppuStack_70;
                puStack_90 = &DAT_1061c2098;
                uStack_f0 = 1;
                if (lStack_e8 == 0) {
                  uStack_f0 = 2;
                }
                ppuStack_80 = (ulong **)unaff_x23;
                unaff_x22[7] = uStack_1b0;
                unaff_x22[6] = uStack_1b8;
                uStack_c8 = uStack_1a8;
                ppppuStack_b0 = &pppuStack_98;
                pcStack_b8 = s__108b39f4f;
                uStack_c0 = uVar30;
                uStack_bc = uVar32;
                (**(code **)(puVar2 + 0x20))(puVar3,&uStack_108);
              }
            }
          }
          __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E(&uStack_108,1,0,&UNK_10b24dc48);
          uStack_138 = unaff_x22[9];
          uStack_140 = unaff_x22[8];
          uStack_128 = unaff_x22[0xb];
          uStack_130 = unaff_x22[10];
          uStack_118 = unaff_x22[0xd];
          uStack_120 = unaff_x22[0xc];
          ppppuStack_178 = (ulong ****)unaff_x22[1];
          ppuStack_180 = (ulong **)*unaff_x22;
          uStack_168 = unaff_x22[3];
          uStack_170 = unaff_x22[2];
          uStack_158 = unaff_x22[5];
          uStack_160 = unaff_x22[4];
          uStack_148 = unaff_x22[7];
          uStack_150 = unaff_x22[6];
          param_1[0xb] = uStack_138;
          param_1[10] = uStack_140;
          param_1[0xd] = uStack_128;
          param_1[0xc] = uStack_130;
          param_1[0xf] = uStack_118;
          param_1[0xe] = uStack_120;
          param_1[3] = ppppuStack_178;
          param_1[2] = ppuStack_180;
          param_1[5] = uStack_168;
          param_1[4] = uStack_170;
          param_1[7] = uStack_158;
          param_1[6] = uStack_160;
          param_1[9] = uStack_148;
          param_1[8] = uStack_150;
          goto LAB_1014a1f0c;
        }
      }
      else if ((1L << ((ulong)ppuVar24 >> 0x20 & 0x3f) & 0x3d7fffff733U) != 0) goto LAB_1014a1d14;
LAB_1014a19e0:
      if (((*puVar20 == 0) &&
          ((bRam000000010b639af0 - 1 < 2 ||
           ((bRam000000010b639af0 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
                                ), cVar10 != '\0')))))) &&
         (uVar27 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
                             ), (uVar27 & 1) != 0)) {
        uStack_168 = ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
                     + 0x30;
        pppuStack_188 =
             (ulong ***)
             &
             __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
        ;
        pppuStack_198 = &ppuStack_190;
        pppuStack_1a0 = (ulong ***)s__TCP_accept_error__connect_error_108ad8990;
        pppuStack_1c8 = (ulong ***)&pppuStack_1a0;
        puStack_1c0 = &UNK_10b208fd0;
        ppppuStack_178 = &pppuStack_1c8;
        ppuStack_180 = (ulong **)0x1;
        uStack_170 = 1;
        ppuStack_190 = (ulong **)unaff_x23;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
                   ,&ppuStack_180);
        lVar8 = 
        ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puStack_90 = *(undefined **)
                        (
                        ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
                        + 0x20);
          uStack_88 = *(undefined8 *)
                       (
                       ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
                       + 0x28);
          pppuStack_98 = (ulong ***)0x5;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&pppuStack_98);
          if (iVar11 != 0) {
            lStack_e8 = *(long *)(lVar8 + 0x60);
            uStack_e0 = *(undefined8 *)(lVar8 + 0x68);
            lStack_100 = *(long *)(lVar8 + 0x50);
            uStack_f8 = *(undefined8 *)(lVar8 + 0x58);
            uStack_108 = 1;
            if (lStack_100 == 0) {
              uStack_108 = 2;
            }
            uVar30 = *(undefined4 *)(lVar8 + 8);
            uVar32 = *(undefined4 *)(lVar8 + 0xc);
            ppuStack_80 = (ulong **)&ppuStack_180;
            puStack_78 = (undefined *)CONCAT71(puStack_78._1_7_,1);
            pppuStack_70 = &ppuStack_80;
            puStack_68 = &DAT_1061c2098;
            uStack_f0 = 1;
            if (lStack_e8 == 0) {
              uStack_f0 = 2;
            }
            unaff_x22[7] = unaff_x22[0xf];
            unaff_x22[6] = unaff_x22[0xe];
            uStack_c8 = uStack_88;
            ppppuStack_b0 = &pppuStack_70;
            pcStack_b8 = s__108b39f4f;
            uStack_c0 = uVar30;
            uStack_bc = uVar32;
            (**(code **)(puVar2 + 0x20))(puVar3,&uStack_108);
          }
        }
      }
      else {
        lVar8 = 
        ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_1d8 = *(ulong *)(
                                 ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
                                 + 0x20);
          uStack_1d0 = *(undefined8 *)
                        (
                        ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
                        + 0x28);
          uStack_1e0 = 5;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          puVar3 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar3 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(puVar2 + 0x18))(puVar3,&uStack_1e0);
          if (iVar11 != 0) {
            uStack_168 = ___ZN8rama_tcp6server8listener17handle_accept_err28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h5d111388e8c4c70bE
                         + 0x30;
            puStack_78 = &
                         __ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17heced06dcf81bbc5fE
            ;
            pppuStack_188 = &ppuStack_80;
            ppuStack_190 = (ulong **)s__TCP_accept_error__connect_error_108ad8990;
            pppuStack_1a0 = &ppuStack_190;
            pppuStack_198 = (ulong ***)&UNK_10b208fd0;
            ppppuStack_178 = &pppuStack_1a0;
            ppuStack_180 = (ulong **)0x1;
            uStack_170 = 1;
            lStack_e8 = *(long *)(lVar8 + 0x60);
            uStack_e0 = *(undefined8 *)(lVar8 + 0x68);
            lStack_100 = *(long *)(lVar8 + 0x50);
            uStack_f8 = *(undefined8 *)(lVar8 + 0x58);
            uStack_108 = 1;
            if (lStack_100 == 0) {
              uStack_108 = 2;
            }
            uVar30 = *(undefined4 *)(lVar8 + 8);
            uVar32 = *(undefined4 *)(lVar8 + 0xc);
            pppuStack_70 = &ppuStack_180;
            puStack_68 = (undefined *)CONCAT71(puStack_68._1_7_,1);
            pppuStack_98 = (ulong ***)&pppuStack_70;
            puStack_90 = &DAT_1061c2098;
            uStack_f0 = 1;
            if (lStack_e8 == 0) {
              uStack_f0 = 2;
            }
            ppuStack_80 = (ulong **)unaff_x23;
            unaff_x22[7] = uStack_1d8;
            unaff_x22[6] = uStack_1e0;
            uStack_c8 = uStack_1d0;
            ppppuStack_b0 = &pppuStack_98;
            pcStack_b8 = s__108b39f4f;
            uStack_c0 = uVar30;
            uStack_bc = uVar32;
            (**(code **)(puVar2 + 0x20))(puVar3,&uStack_108);
          }
        }
      }
    }
    uVar27 = param_1[1];
    if ((uVar27 & 3) == 1) {
      uVar29 = *(undefined8 *)(uVar27 - 1);
      puVar31 = *(undefined8 **)(uVar27 + 7);
      pcVar21 = (code *)*puVar31;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(uVar29);
      }
      if (puVar31[1] != 0) {
        _free(uVar29);
      }
      _free((undefined8 *)(uVar27 - 1));
    }
    plVar12 = (long *)0x0;
    uVar18 = 1;
LAB_1014a1f78:
    *(undefined1 *)(param_1 + 0x10) = uVar18;
    return plVar12;
  }
  if (bVar4 == 0) {
    unaff_x22 = &uStack_108;
    ppuVar24 = (ulong **)*param_1;
    unaff_x23 = (ulong ***)(param_1 + 1);
    *unaff_x23 = ppuVar24;
    uVar27 = (ulong)ppuVar24 & 3;
    puVar20 = (ulong *)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
    if (1 < uVar27) goto LAB_1014a1b4c;
    lVar8 = 0x10;
    if (uVar27 != 0) {
      lVar8 = 0xf;
    }
    if (0x25 < *(byte *)((long)ppuVar24 + lVar8) ||
        (1L << ((ulong)*(byte *)((long)ppuVar24 + lVar8) & 0x3f) & 0x28000008ccU) == 0)
    goto LAB_1014a1d14;
    goto LAB_1014a19e0;
  }
  uVar29 = func_0x000108a07af4(&UNK_10b24dc60);
  FUN_100de21d4(param_1 + 1);
  *(undefined1 *)(param_1 + 0x10) = 2;
  __Unwind_Resume(uVar29);
  auVar35 = func_0x000108a07bc4();
  puVar17 = auVar35._8_8_;
  plVar12 = auVar35._0_8_;
  bVar4 = *(byte *)(puVar17 + 0x16);
  if (bVar4 < 3) {
    if (bVar4 != 0) {
      if (bVar4 == 1) {
        func_0x000108a07af4(&UNK_10b24dcc0);
      }
      func_0x000108a07b10();
LAB_1014a2bf4:
      func_0x000108a07af4(&UNK_10b24dca8);
      plVar15 = plStack_360;
      plVar16 = plStack_350;
      plVar13 = plStack_348;
      uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
      goto LAB_1014a2c20;
    }
    *(undefined1 *)((long)puVar17 + 0x59) = 0;
    uVar30 = *puVar17;
    uVar32 = puVar17[1];
    uVar23 = *(undefined4 *)((long)puVar17 + 10);
    uStack_418 = (undefined2)uVar23;
    uStack_416 = (undefined2)((uint)uVar23 >> 0x10);
    auStack_414[0] = *(undefined2 *)((long)puVar17 + 0xe);
    auStack_41c[0] = *(undefined2 *)(puVar17 + 9);
    bVar1 = (*(ushort *)(puVar17 + 2) & 1) == 0;
    if (bVar1) {
      uVar27 = 0;
      puVar28 = auStack_414;
    }
    else {
      uVar27 = (ulong)*(uint5 *)((long)puVar17 + 0x17);
      uVar23 = CONCAT22(*(undefined2 *)((long)puVar17 + 0xe),uStack_416);
      auStack_410._0_3_ = (undefined3)puVar17[4];
      auStack_410._3_4_ = *(undefined4 *)((long)puVar17 + 0x13);
      puVar28 = auStack_41c;
    }
    uStack_380._4_4_ = auStack_410._0_4_;
    uStack_378 = auStack_410._4_3_;
    auStack_410._0_3_ = (undefined3)uVar23;
    *(undefined2 *)((long)puVar17 + 0x42) = *puVar28;
    uStack_380._3_1_ = (undefined1)((uint)uVar23 >> 0x18);
    *(undefined2 *)(puVar17 + 0x10) = 0;
    *(bool *)(puVar17 + 0x11) = !bVar1;
    *(short *)((long)puVar17 + 0x45) = (short)uVar23;
    *(char *)((long)puVar17 + 0x47) = (char)((uint)uVar23 >> 0x10);
    *(ulong *)(puVar17 + 0x12) = CONCAT35(uStack_378,CONCAT41(uStack_380._4_4_,uStack_380._3_1_));
    *(ulong *)(puVar17 + 0x14) = uVar27;
    *(undefined8 *)(puVar17 + 0xc) = *(undefined8 *)(puVar17 + 0x12);
    *(undefined8 *)(puVar17 + 10) = *(undefined8 *)(puVar17 + 0x10);
    *(ulong *)(puVar17 + 0xe) = uVar27;
    uStack_380._0_4_ = uVar23;
    if ((*(ushort *)(puVar17 + 10) & 1) == 0) {
      uStack_3b8 = *(undefined8 *)((long)puVar17 + 0x4a);
      uStack_3c0 = *(undefined8 *)((long)puVar17 + 0x42);
      uStack_3b0 = *(undefined4 *)((long)puVar17 + 0x52);
      lStack_3d0 = lStack_340;
      plStack_408 = (long *)CONCAT53(uStack_375,uStack_378);
      auStack_410 = (undefined1  [8])CONCAT44(uStack_380._4_4_,uVar23);
      plStack_3f8 = plStack_368;
      plStack_400 = plStack_370;
      puVar17[0x18] = uVar30;
      puVar17[0x19] = uVar32;
      plStack_3e8 = plStack_358;
      plStack_3f0 = plStack_360;
      plStack_3d8 = plStack_348;
      plStack_3e0 = plStack_350;
      *(long **)(puVar17 + 0x28) = plStack_348;
      *(long **)(puVar17 + 0x26) = plStack_350;
      *(ulong *)(puVar17 + 0x2c) = CONCAT44(uStack_334,uStack_338);
      *(long *)(puVar17 + 0x2a) = lStack_340;
      *(undefined8 *)(puVar17 + 0x30) = uStack_3b8;
      *(undefined8 *)(puVar17 + 0x2e) = uStack_3c0;
      puVar17[0x32] = uStack_3b0;
      *(long **)(puVar17 + 0x1c) = plStack_408;
      *(undefined1 (*) [8])(puVar17 + 0x1a) = auStack_410;
      *(long **)(puVar17 + 0x20) = plStack_368;
      *(long **)(puVar17 + 0x1e) = plStack_370;
      *(long **)(puVar17 + 0x24) = plStack_358;
      *(long **)(puVar17 + 0x22) = plStack_360;
      *(undefined1 *)(puVar17 + 0x33) = 0;
      uStack_330 = uStack_3c0;
      uStack_328 = uStack_3b8;
      uStack_320 = uStack_3b0;
LAB_1014a23d8:
      puVar17[0x1a] = uVar30;
      puVar17[0x1b] = uVar32;
      uVar27 = (ulong)*(byte *)((long)puVar17 + 0xbd);
      uVar5 = *(uint3 *)((long)puVar17 + 0xbb);
      bVar1 = (*(byte *)((long)puVar17 + 0xba) & 1) == 0;
      if (bVar1) {
        uVar25 = (ulong)(uVar5 >> 0x10);
        uStack_3a8 = *(undefined4 *)((long)puVar17 + 0xbb);
        uStack_3a4 = *(undefined2 *)(puVar17 + 0x2e);
      }
      else {
        uVar25 = (ulong)*(uint6 *)((long)puVar17 + 0xc6);
        uVar27 = *(ulong *)((long)puVar17 + 0xbe) >> 8;
        uStack_3a8 = CONCAT22((short)uVar5,(undefined2)uStack_3a8);
        uStack_3a4 = CONCAT11((char)*(ulong *)((long)puVar17 + 0xbe),(char)(uVar5 >> 0x10));
      }
      *(ushort *)(puVar17 + 0x1c) = (ushort)!bVar1;
      *(undefined4 *)((long)puVar17 + 0x72) = uStack_3a8;
      *(undefined2 *)((long)puVar17 + 0x76) = uStack_3a4;
      puVar17[0x1e] = (int)uVar27;
      *(char *)((long)puVar17 + 0x7e) = (char)(uVar27 >> 0x30);
      *(short *)(puVar17 + 0x1f) = (short)(uVar27 >> 0x20);
      *(int *)((long)puVar17 + 0x7f) = (int)uVar25;
      *(char *)((long)puVar17 + 0x83) = (char)(uVar25 >> 0x20);
      puVar17[0x21] = 0;
      puVar17[0x22] = 0;
      *(undefined2 *)(puVar17 + 0x23) = *(undefined2 *)(puVar17 + 0x2e);
      *(undefined1 *)(puVar17 + 0x2c) = 0;
      goto LAB_1014a2478;
    }
    *(long *)(puVar17 + 0x1a) = *(long *)(puVar17 + 0xc);
    __ZN8rama_net6socket4opts13SocketOptions16try_build_socket17h78aafac232e487faE
              (auStack_410,*(long *)(puVar17 + 0xc) + 0x10);
    if (auStack_410._0_4_ == 1) {
      uStack_380._0_4_ = 0x8cd603c;
      uStack_380._4_4_ = 1;
      uStack_378 = 0x19;
      uStack_375 = 0;
      plStack_370 = plStack_408;
      plVar15 = (long *)_malloc(0x18);
      if (plVar15 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        plVar15 = plStack_360;
        plVar16 = plStack_350;
        plVar13 = plStack_348;
        uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
        goto LAB_1014a2c20;
      }
      plVar15[1] = CONCAT53(uStack_375,uStack_378);
      *plVar15 = CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
      plVar15[2] = (long)plStack_370;
      uStack_380._0_4_ = SUB84(plVar15,0);
      uStack_380._4_4_ = (undefined4)((ulong)plVar15 >> 0x20);
      uStack_378 = 0x2372e8;
      uStack_375 = 0x10b;
      plVar13 = (long *)_malloc(0x10);
      if (plVar13 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
        plVar15 = plStack_360;
        plVar16 = plStack_350;
        plVar13 = plStack_348;
        uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
        goto LAB_1014a2c20;
      }
      *plVar13 = (long)plVar15;
      plVar13[1] = (long)&UNK_10b2372e8;
      plVar16 = plVar13;
    }
    else {
      *(undefined1 *)((long)puVar17 + 0x59) = 1;
      puVar17[0x18] = auStack_410._4_4_;
      iVar11 = _listen(auStack_410._4_4_,0x1000);
      if (iVar11 != -1) {
        puVar17[0x1c] = uVar30;
        *(undefined1 *)((long)puVar17 + 0x59) = 0;
        uVar30 = puVar17[0x18];
        puVar17[0x1d] = uVar32;
        puVar17[0x20] = uVar30;
        *(undefined1 *)(puVar17 + 0x21) = 0;
        goto LAB_1014a2540;
      }
      puVar14 = (uint *)___error();
      plStack_370 = (long *)((ulong)*puVar14 << 0x20 | 2);
      uStack_380._0_4_ = 0x8cd6055;
      uStack_380._4_4_ = 1;
      uStack_378 = 0x3f;
      uStack_375 = 0;
      plVar15 = (long *)_malloc(0x18);
      if (plVar15 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        plVar15 = plStack_360;
        plVar16 = plStack_350;
        plVar13 = plStack_348;
        uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
        goto LAB_1014a2c20;
      }
      plVar15[1] = CONCAT53(uStack_375,uStack_378);
      *plVar15 = CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
      plVar15[2] = (long)plStack_370;
      uStack_380._0_4_ = SUB84(plVar15,0);
      uStack_380._4_4_ = (undefined4)((ulong)plVar15 >> 0x20);
      uStack_378 = 0x2372e8;
      uStack_375 = 0x10b;
      plVar16 = (long *)_malloc(0x10);
      if (plVar16 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
        plVar15 = plStack_360;
        plVar16 = plStack_350;
        plVar13 = plStack_348;
        uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
        goto LAB_1014a2c20;
      }
      *plVar16 = (long)plVar15;
      plVar16[1] = (long)&UNK_10b2372e8;
      plVar13 = (long *)_close(puVar17[0x18]);
    }
    *(undefined1 *)((long)puVar17 + 0x59) = 0;
    lVar8 = **(long **)(puVar17 + 0x1a);
    **(long **)(puVar17 + 0x1a) = lVar8 + -1;
    LORelease();
    plVar34 = (long *)&UNK_10b2099a8;
    puVar31 = (undefined8 *)0x2;
    if (lVar8 != 1) goto LAB_1014a2a8c;
LAB_1014a2a80:
    DataMemoryBarrier(2,1);
    plVar13 = (long *)func_0x0001047f2c6c(puVar17 + 0x1a);
  }
  else {
    if (bVar4 != 3) {
      bVar4 = *(byte *)(puVar17 + 0x21);
      if (bVar4 < 2) {
        if (bVar4 != 0) {
          func_0x000108a07af4(&UNK_10b24dc90);
          plVar15 = plStack_360;
          plVar16 = plStack_350;
          plVar13 = plStack_348;
          uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          goto LAB_1014a2c20;
        }
        uVar30 = puVar17[0x20];
LAB_1014a2540:
        _auStack_410 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E
                                 (&UNK_10b24dc78);
        plVar34 = auStack_410._8_8_;
        do {
          lVar8 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
          lVar9 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
          bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
          ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar9;
        } while (bVar1);
        lVar9 = 0x220;
        if ((auStack_410 & 1) == 0) {
          lVar9 = 0x300;
        }
        if ((auStack_410 & 1) == 0) {
          plVar15 = plVar34 + 0x4c;
          if ((char)*plVar15 == '\0') {
            *(char *)plVar15 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (plVar15,plVar34,1000000000);
          }
          plVar34[0x51] = plVar34[0x51] + 1;
          if ((char)*plVar15 == '\x01') {
            *(char *)plVar15 = in_wzr;
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar15,0);
          }
          lVar7 = *plVar34;
          *plVar34 = lVar7 + 1;
          plVar15 = plStack_360;
          plVar16 = plStack_350;
          plVar13 = plStack_348;
          uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          if (lVar7 < 0) goto LAB_1014a2c20;
          plVar26 = (long *)plVar34[0x5e];
          plStack_360 = (long *)0x0;
          plStack_348 = plVar34 + 0x5c;
        }
        else {
          lVar7 = *plVar34;
          *plVar34 = lVar7 + 1;
          plVar15 = plStack_360;
          plVar16 = plStack_350;
          plVar13 = plStack_348;
          uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          if (lVar7 < 0) goto LAB_1014a2c20;
          plVar26 = (long *)plVar34[0x4a];
          plStack_360 = (long *)0x1;
          plStack_348 = plVar34 + 0x48;
        }
        plStack_350 = (long *)0x0;
        if (plVar26 != (long *)0x0) {
          lVar7 = *plVar26;
          *plVar26 = lVar7 + 1;
          uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          if (lVar7 < 0) goto LAB_1014a2c20;
          plStack_350 = (long *)plStack_348[2];
          plStack_348 = (long *)plStack_348[3];
          lVar7 = *plStack_350;
          *plStack_350 = lVar7 + 1;
          uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          if (lVar7 < 0) goto LAB_1014a2c20;
        }
        uStack_380._0_4_ = 0xcc;
        uStack_380._4_4_ = 0;
        uStack_378 = 0;
        uStack_375 = 0;
        plStack_370 = (long *)&UNK_10b23d3a0;
        plStack_368 = (long *)0x0;
        lStack_340 = lVar8;
        uStack_338 = 0;
        uVar27 = (ulong)uStack_330 >> 0x20;
        uStack_330 = CONCAT44((int)uVar27,uVar30);
        uStack_308 = 0;
        uStack_300 = 0;
        uStack_310 = 0;
        puStack_3a0 = (undefined8 *)0x0;
        plStack_358 = plVar34;
        plStack_2f0 = plStack_350;
        plStack_2e8 = plStack_348;
        iVar11 = _posix_memalign(&puStack_3a0,0x80,0x100);
        puVar31 = puStack_3a0;
        if ((iVar11 != 0) || (puStack_3a0 == (undefined8 *)0x0)) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x100);
          plVar15 = plStack_360;
          plVar16 = plStack_350;
          plVar13 = plStack_348;
          uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          goto LAB_1014a2c20;
        }
        puStack_3a0[0x13] = plStack_2e8;
        puStack_3a0[0x12] = plStack_2f0;
        puStack_3a0[0x15] = uStack_2d8;
        puStack_3a0[0x14] = uStack_2e0;
        puStack_3a0[0x17] = uStack_2c8;
        puStack_3a0[0x16] = uStack_2d0;
        puStack_3a0[3] = plStack_368;
        puStack_3a0[2] = plStack_370;
        puStack_3a0[5] = plStack_358;
        puStack_3a0[4] = plStack_360;
        puStack_3a0[7] = plStack_348;
        puStack_3a0[6] = plStack_350;
        puStack_3a0[1] = CONCAT53(uStack_375,uStack_378);
        *puStack_3a0 = CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
        puStack_3a0[0xd] = uStack_318;
        puStack_3a0[0xc] = CONCAT44(uStack_31c,uStack_320);
        puStack_3a0[0xf] = uStack_308;
        puStack_3a0[0xe] = uStack_310;
        puStack_3a0[9] = CONCAT44(uStack_334,uStack_338);
        puStack_3a0[8] = lStack_340;
        puStack_3a0[0xb] = uStack_328;
        puStack_3a0[10] = uStack_330;
        puStack_3a0[0x11] = uStack_2f8;
        puStack_3a0[0x10] = uStack_300;
        puStack_3a0[0x1d] = uStack_298;
        puStack_3a0[0x1c] = uStack_2a0;
        puStack_3a0[0x1f] = uStack_288;
        puStack_3a0[0x1e] = uStack_290;
        puStack_3a0[0x19] = uStack_2b8;
        puStack_3a0[0x18] = uStack_2c0;
        puStack_3a0[0x1b] = uStack_2a8;
        puStack_3a0[0x1a] = uStack_2b0;
        auVar35 = __ZN5tokio7runtime8blocking4pool7Spawner10spawn_task17h940099594ef92638E
                            ((long)plVar34 + lVar9,puStack_3a0,1,auStack_410);
        if (((auVar35._0_8_ & 1) != 0) && (auVar35._8_8_ != (undefined8 *)0x0)) {
          uStack_380 = &puStack_3a0;
          uStack_378 = 0x54098;
          uStack_375 = 0x106;
          puStack_3a0 = auVar35._8_8_;
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s_OS_can_t_spawn_worker_thread__108ad752a,&uStack_380,&UNK_10b24dc78);
          plVar15 = plStack_360;
          plVar16 = plStack_350;
          plVar13 = plStack_348;
          goto LAB_1014a2c20;
        }
        if (auStack_410 == (undefined1  [8])0x0) {
          lVar8 = *plStack_408;
          *plStack_408 = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE(&plStack_408);
          }
        }
        else {
          lVar8 = *plStack_408;
          *plStack_408 = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E(&plStack_408);
          }
        }
        *(undefined8 **)(puVar17 + 0x1e) = puVar31;
      }
      else {
        if (bVar4 != 3) {
          func_0x000108a07b10(&UNK_10b24dc90);
          plVar15 = plStack_360;
          plVar16 = plStack_350;
          plVar13 = plStack_348;
          uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          goto LAB_1014a2c20;
        }
        puVar31 = *(undefined8 **)(puVar17 + 0x1e);
      }
      uStack_380._0_4_ = 4;
      uStack_380._4_4_ = 0;
      lVar8 = (*
              ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
              )();
      if (*(char *)(lVar8 + 0x48) == '\x01') {
LAB_1014a2938:
        cVar10 = *(char *)(lVar8 + 0x44);
        cVar33 = *(char *)(lVar8 + 0x45);
        cVar19 = cVar33;
        if (cVar10 != '\x01') {
LAB_1014a2954:
          *(char *)(lVar8 + 0x45) = cVar19;
          goto LAB_1014a2958;
        }
        if (cVar33 != '\0') {
          cVar19 = cVar33 + -1;
          goto LAB_1014a2954;
        }
        plVar13 = (long *)FUN_10610bbb4(*(undefined8 *)*param_3,((undefined8 *)*param_3)[1]);
        if (CONCAT44(uStack_380._4_4_,(undefined4)uStack_380) != 4) {
          plVar13 = (long *)FUN_100da7224(&uStack_380);
        }
      }
      else {
        if (*(char *)(lVar8 + 0x48) != '\x02') {
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar8,&DAT_100c35d48);
          *(undefined1 *)(lVar8 + 0x48) = 1;
          goto LAB_1014a2938;
        }
        cVar10 = '\0';
        cVar33 = '\0';
LAB_1014a2958:
        auStack_410[1] = cVar33;
        auStack_410[0] = cVar10;
        plVar13 = (long *)(**(code **)(puVar31[2] + 0x18))(puVar31,&uStack_380,*param_3);
        plVar15 = plStack_368;
        plVar34 = plStack_370;
        puVar31 = (undefined8 *)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
        if (puVar31 != (undefined8 *)0x4) {
          plVar16 = (long *)CONCAT53(uStack_375,uStack_378);
          plVar13 = *(long **)(puVar17 + 0x1e);
          if (*plVar13 == 0xcc) {
            *plVar13 = 0x84;
          }
          else {
            plVar13 = (long *)(**(code **)(plVar13[2] + 0x20))();
          }
          if (puVar31 == (undefined8 *)0x3) {
            plStack_368 = plVar34;
            plStack_360 = plVar15;
            uStack_380._0_4_ = 0x8cd6006;
            uStack_380._4_4_ = 1;
            uStack_378 = 0x1f;
            uStack_375 = 0;
            plStack_370 = plVar16;
            plVar15 = (long *)_malloc(0x28);
            if (plVar15 == (long *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
              plVar15 = plStack_360;
              plVar16 = plStack_350;
              plVar13 = plStack_348;
              uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
LAB_1014a2c20:
              plStack_348 = plVar13;
              plStack_350 = plVar16;
              plStack_360 = plVar15;
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x1014a2c24);
              (*pcVar21)();
            }
            plVar15[1] = CONCAT53(uStack_375,uStack_378);
            *plVar15 = CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
            plVar15[3] = (long)plStack_368;
            plVar15[2] = (long)plStack_370;
            plVar15[4] = (long)plStack_360;
            uStack_380._0_4_ = SUB84(plVar15,0);
            uStack_380._4_4_ = (undefined4)((ulong)plVar15 >> 0x20);
            uStack_378 = 0x24b998;
            uStack_375 = 0x10b;
            plVar13 = (long *)_malloc(0x10);
            if (plVar13 == (long *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
              plVar15 = plStack_360;
              plVar16 = plStack_350;
              plVar13 = plStack_348;
              uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
              goto LAB_1014a2c20;
            }
            *plVar13 = (long)plVar15;
            plVar13[1] = (long)&UNK_10b24b998;
            plVar34 = (long *)&UNK_10b2099a8;
            puVar31 = (undefined8 *)0x2;
            plVar16 = plVar13;
          }
          *(undefined1 *)(puVar17 + 0x21) = 1;
          *(undefined1 *)((long)puVar17 + 0x59) = 0;
          lVar8 = **(long **)(puVar17 + 0x1a);
          **(long **)(puVar17 + 0x1a) = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) goto LAB_1014a2a80;
          goto LAB_1014a2a8c;
        }
        if (cVar10 != '\0') {
          if (*(char *)(lVar8 + 0x48) != '\x01') {
            if (*(char *)(lVar8 + 0x48) == '\x02') goto LAB_1014a2abc;
            plVar13 = (long *)__ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                                        (lVar8,&DAT_1060edbcc);
            *(undefined1 *)(lVar8 + 0x48) = 1;
          }
          *(undefined1 *)(lVar8 + 0x44) = 1;
          *(char *)(lVar8 + 0x45) = cVar33;
        }
      }
LAB_1014a2abc:
      *(undefined1 *)(puVar17 + 0x21) = 3;
      *plVar12 = 3;
      uVar18 = 4;
      goto LAB_1014a2acc;
    }
    bVar4 = *(byte *)(puVar17 + 0x33);
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        uVar30 = puVar17[0x18];
        uVar32 = puVar17[0x19];
        goto LAB_1014a23d8;
      }
      goto LAB_1014a2bf4;
    }
    if (bVar4 != 3) {
      func_0x000108a07b10(&UNK_10b24dca8);
      plVar15 = plStack_360;
      plVar16 = plStack_350;
      plVar13 = plStack_348;
      uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
      goto LAB_1014a2c20;
    }
LAB_1014a2478:
    plVar13 = (long *)func_0x000100fc4c34(&uStack_380,puVar17 + 0x1c);
    plVar15 = plStack_368;
    plVar34 = plStack_370;
    uVar6 = uStack_375;
    puVar31 = (undefined8 *)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
    if (puVar31 == (undefined8 *)0x3) {
      uVar18 = 3;
      *(undefined1 *)(puVar17 + 0x33) = 3;
      *plVar12 = 3;
      goto LAB_1014a2acc;
    }
    plVar16 = (long *)CONCAT53(uStack_375,uStack_378);
    if (((*(char *)(puVar17 + 0x2c) == '\x03') && (*(short *)(puVar17 + 0x24) == 3)) &&
       (uVar27 = *(ulong *)(puVar17 + 0x26), (uVar27 & 3) == 1)) {
      uVar29 = *(undefined8 *)(uVar27 - 1);
      puVar22 = *(undefined8 **)(uVar27 + 7);
      pcVar21 = (code *)*puVar22;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(uVar29);
      }
      if (puVar22[1] != 0) {
        _free(uVar29);
      }
      plVar13 = (long *)_free((undefined8 *)(uVar27 - 1));
      if (puVar31 != (undefined8 *)0x2) goto LAB_1014a282c;
LAB_1014a24d8:
      uStack_380._0_4_ = SUB84(plVar16,0);
      uStack_380._4_4_ = (undefined4)((uint5)uVar6 >> 8);
      plVar13 = (long *)_malloc(8);
      if (plVar13 == (long *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
        plVar15 = plStack_360;
        plVar16 = plStack_350;
        plVar13 = plStack_348;
        uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
        goto LAB_1014a2c20;
      }
      *plVar13 = (long)plVar16;
      plVar34 = (long *)&UNK_10b212e38;
      plVar16 = plVar13;
LAB_1014a24fc:
      puVar31 = (undefined8 *)0x2;
    }
    else {
      if (puVar31 == (undefined8 *)0x2) goto LAB_1014a24d8;
LAB_1014a282c:
      plStack_390 = plVar34;
      plStack_388 = plVar15;
      if (puVar17[0x1a] == 1) {
        puStack_3a0 = puVar31;
        plStack_398 = plVar16;
        if ((int)plVar15 == -1) {
          func_0x000108a07a20(&UNK_10b4cd2b8);
          plVar15 = plStack_360;
          plVar16 = plStack_350;
          plVar13 = plStack_348;
          uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          goto LAB_1014a2c20;
        }
        uStack_380._0_4_ = puVar17[0x1b];
        plVar13 = (long *)_setsockopt(plVar15,0,4,&uStack_380,4);
        if ((int)plVar13 == -1) {
          puVar14 = (uint *)___error();
          plStack_370 = (long *)((ulong)*puVar14 << 0x20 | 2);
          uStack_380._0_4_ = 0x8cd6025;
          uStack_380._4_4_ = 1;
          uStack_378 = 0x17;
          uStack_375 = 0;
          plVar15 = (long *)_malloc(0x18);
          if (plVar15 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            plVar15 = plStack_360;
            plVar16 = plStack_350;
            plVar13 = plStack_348;
            uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
            goto LAB_1014a2c20;
          }
          plVar15[1] = CONCAT53(uStack_375,uStack_378);
          *plVar15 = CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
          plVar15[2] = (long)plStack_370;
          uStack_380._0_4_ = SUB84(plVar15,0);
          uStack_380._4_4_ = (undefined4)((ulong)plVar15 >> 0x20);
          uStack_378 = 0x2372e8;
          uStack_375 = 0x10b;
          plVar16 = (long *)_malloc(0x10);
          if (plVar16 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
            plVar15 = plStack_360;
            plVar16 = plStack_350;
            plVar13 = plStack_348;
            uStack_380 = (undefined8 **)CONCAT44(uStack_380._4_4_,(undefined4)uStack_380);
            goto LAB_1014a2c20;
          }
          *plVar16 = (long)plVar15;
          plVar16[1] = (long)&UNK_10b2372e8;
          plVar13 = (long *)FUN_100deb62c(&puStack_3a0);
          plVar34 = (long *)&UNK_10b2099a8;
          goto LAB_1014a24fc;
        }
      }
    }
    *(undefined1 *)(puVar17 + 0x33) = 1;
  }
LAB_1014a2a8c:
  *plVar12 = (long)puVar31;
  plVar12[1] = (long)plVar16;
  uVar18 = 1;
  plVar12[2] = (long)plVar34;
  plVar12[3] = (long)plVar15;
LAB_1014a2acc:
  *(undefined1 *)(puVar17 + 0x16) = uVar18;
  return plVar13;
}

