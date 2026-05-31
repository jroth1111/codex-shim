
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100c24b74(ulong param_1,undefined4 param_2,undefined1 param_3,char *******param_4,
                   char *******param_5,long *param_6,char *******param_7)

{
  char *******pppppppcVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  char ******ppppppcVar10;
  undefined *puVar11;
  char *******pppppppcVar12;
  char *******pppppppcVar13;
  char *****pppppcVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  long *plVar18;
  long lVar19;
  char *******unaff_x20;
  char ******ppppppcVar20;
  ulong unaff_x21;
  char ******ppppppcVar21;
  char *******unaff_x23;
  char ******unaff_x24;
  char ******unaff_x25;
  char ******ppppppcVar22;
  undefined *unaff_x28;
  char ******ppppppcVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 ******ppppppuStack_4f0;
  char ***pppcStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  char **ppcStack_4d0;
  undefined *puStack_4c8;
  char *pcStack_4c0;
  undefined1 *puStack_4b8;
  undefined1 auStack_4b0 [8];
  char *******pppppppcStack_4a8;
  long lStack_4a0;
  undefined *puStack_498;
  char ******ppppppcStack_490;
  undefined *puStack_488;
  long lStack_480;
  undefined *puStack_478;
  long lStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  char *pcStack_440;
  undefined8 *******pppppppuStack_438;
  undefined8 *******pppppppuStack_368;
  undefined *puStack_360;
  char *******pppppppcStack_358;
  char ******ppppppcStack_350;
  undefined *puStack_340;
  byte **ppbStack_338;
  char ******ppppppcStack_330;
  char ******ppppppcStack_328;
  char ******ppppppcStack_320;
  char *******pppppppcStack_318;
  char ******ppppppcStack_310;
  ulong uStack_308;
  char *******pppppppcStack_300;
  char ******ppppppcStack_2f8;
  undefined1 *puStack_2f0;
  undefined8 uStack_2e8;
  long *plStack_2d8;
  char *******pppppppcStack_2d0;
  undefined4 uStack_2c4;
  undefined1 uStack_2c0;
  byte bStack_2bf;
  char cStack_2be;
  byte bStack_2bd;
  uint uStack_2bc;
  undefined8 uStack_2b8;
  char *****pppppcStack_2b0;
  char *****pppppcStack_2a8;
  char *******pppppppcStack_2a0;
  char ******ppppppcStack_298;
  char *****pppppcStack_290;
  char ******ppppppcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  uint uStack_250;
  undefined4 uStack_24c;
  byte *pbStack_248;
  char *****pppppcStack_240;
  char *****pppppcStack_238;
  char ******ppppppcStack_230;
  undefined *puStack_228;
  char *****pppppcStack_220;
  char *******pppppppcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  char *****pppppcStack_200;
  char ******ppppppcStack_1f8;
  char *****pppppcStack_1f0;
  char *****pppppcStack_1e8;
  byte *pbStack_1e0;
  char *****pppppcStack_1d8;
  char *****pppppcStack_1d0;
  undefined8 uStack_1c8;
  byte *pbStack_1c0;
  char *******pppppppcStack_1b8;
  char *****pppppcStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_e8 [8];
  char *******pppppppcStack_e0;
  char *****pppppcStack_d8;
  char ******ppppppcStack_d0;
  char *****pppppcStack_c8;
  char *****pppppcStack_c0;
  undefined8 uStack_b8;
  char *****pppppcStack_b0;
  char *****pppppcStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  char *******pppppppcStack_90;
  char *******pppppppcStack_88;
  undefined *puStack_80;
  char *******pppppppcStack_78;
  char *******pppppppcStack_70;
  
  ppppppcVar21 = *param_5;
  pppppppcVar12 = param_5 + 1;
  uVar9 = *(uint *)pppppppcVar12;
  ppppppcVar20 = (char ******)(ulong)uVar9;
  uVar2 = *(uint *)((long)param_5 + 0xc);
  ppppppcVar10 = *pppppppcVar12;
  auStack_e8 = (undefined1  [8])*pppppppcVar12;
  ppppppcVar23 = (char ******)(ulong)uVar2;
  pppppppcVar12 = param_4;
  pppppppcVar13 = param_5;
  plStack_2d8 = param_6;
  pppppppcStack_2d0 = param_7;
  uStack_2c4 = param_2;
  uStack_2c0 = param_3;
  if (ppppppcVar20 < ppppppcVar21[2]) {
    pppppcVar14 = ppppppcVar21[1] + (ulong)uVar9 * 0x28;
    if ((*pppppcVar14 == (char ****)0x2) || (*(uint *)((long)pppppcVar14 + 0x124) != uVar2))
    goto LAB_100c2577c;
    bStack_2bf = *(byte *)(pppppcVar14 + 10) < 6 && *(byte *)(pppppcVar14 + 10) != 3;
    cStack_2be = *(byte *)(pppppcVar14 + 10) < 6;
    bStack_2bd = (byte)*pppppcVar14 ^ 1;
    ppppppcVar22 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
    uVar7 = param_1;
    uStack_2bc = uVar2;
    unaff_x20 = param_5;
    unaff_x21 = param_1;
    unaff_x23 = param_4;
    unaff_x25 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
    unaff_x28 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
      unaff_x24 = (char ******)
                  &__ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE;
      uVar8 = (uint)bRam000000010b632540;
      if (1 < bRam000000010b632540 - 1) {
        if (bRam000000010b632540 != 0) {
          uVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE
                            );
          uVar8 = (uint)uVar7 & 0xff;
          if ((uVar7 & 0xff) != 0) goto LAB_100c24e24;
        }
        goto LAB_100c24c38;
      }
LAB_100c24e24:
      uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE
                         ,uVar8);
      if ((int)uVar7 == 0) goto LAB_100c24c38;
      unaff_x25 = ppppppcVar22;
      unaff_x28 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
      auStack_e8 = (undefined1  [8])ppppppcVar10;
      if (((ppppppcVar21[2] <= ppppppcVar20) ||
          (pppppcVar14 = ppppppcVar21[1] + (ulong)uVar9 * 0x28, *pppppcVar14 == (char ****)0x2)) ||
         (*(uint *)((long)pppppcVar14 + 0x124) != uVar2)) goto LAB_100c2577c;
      ppppppcStack_d0 =
           ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE + 6;
      pppppcStack_1b0 = pppppcVar14 + 10;
      uStack_210 = (char ******)&uStack_2c4;
      uStack_208._0_4_ = 0x571a924;
      uStack_208._4_4_ = 1;
      pppppcStack_200 = (char *****)&uStack_2c0;
      ppppppcStack_1f8 = (char ******)&DAT_10112c67c;
      pppppcStack_1f0 = (char *****)&uStack_2bc;
      pppppcStack_1e8 = (char *****)&DAT_10114d844;
      pbStack_1e0 = &bStack_2bf;
      pppppcStack_1d8 = (char *****)&DAT_100c3c388;
      pppppcStack_1d0 = (char *****)&cStack_2be;
      uStack_1c8 = (char *****)&DAT_100c3c388;
      pbStack_1c0 = &bStack_2bd;
      pppppppcStack_1b8 = (char *******)&DAT_100c3c388;
      puStack_1a8 = &
                    __ZN69__LT_h2__proto__streams__state__State_u20_as_u20_core__fmt__Debug_GT_3fmt17hadd9a30687b67127E
      ;
      pppppppcStack_70 = (char *******)&uStack_210;
      pppppppcStack_78 = (char *******)s_send_reset______reason____initia_108ac7eea;
      pppppppcStack_88 = (char *******)&pppppppcStack_78;
      puStack_80 = &UNK_10b208fd0;
      pppppppcStack_e0 = (char *******)&pppppppcStack_88;
      auStack_e8 = (undefined1  [8])0x1;
      pppppcStack_d8 = (char *****)0x1;
      uVar7 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE
                         ,auStack_e8);
      ppppppcVar23 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        ppppppcStack_298 =
             (char ******)
             ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE[4];
        pppppcStack_290 =
             ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE[5];
        pppppppcStack_2a0 = (char *******)0x5;
        ppppppcVar21 = ppppppcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          ppppppcVar21 = (char ******)&UNK_10b3c24c8;
        }
        ppppppcVar20 = ppppppcRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          ppppppcVar20 = (char ******)&UNK_109adfc03;
        }
        uVar7 = (*(code *)ppppppcVar21[3])(ppppppcVar20,&pppppppcStack_2a0);
        if ((int)uVar7 != 0) {
          pppppppcVar12 = (char *******)&pppppppcStack_2a0;
          pppppppcVar13 = (char *******)auStack_e8;
          uVar7 = __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (ppppppcVar23,ppppppcVar20,ppppppcVar21);
        }
      }
    }
    else {
LAB_100c24c38:
      ppppppcVar23 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE;
      uStack_210 = (char ******)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (uStack_210 = (char ******)CONCAT44(uStack_210._4_4_,(undefined4)uStack_210),
         4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppcStack_2b0 =
             ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE[4];
        pppppcStack_2a8 =
             ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE[5];
        uStack_2b8 = 5;
        ppppppcVar20 = ppppppcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          ppppppcVar20 = (char ******)&UNK_10b3c24c8;
        }
        unaff_x24 = ppppppcRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          unaff_x24 = (char ******)&UNK_109adfc03;
        }
        uVar7 = (*(code *)ppppppcVar20[3])(unaff_x24,&uStack_2b8);
        if ((int)uVar7 != 0) {
          uVar9 = *(uint *)(param_5 + 1);
          auStack_e8 = (undefined1  [8])param_5[1];
          ppppppcVar21 = (char ******)
                         &
                         __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE
          ;
          if ((((*param_5)[2] <= (char *****)(ulong)uVar9) ||
              (pppppcVar14 = (*param_5)[1] + (ulong)uVar9 * 0x28, *pppppcVar14 == (char ****)0x2))
             || (ppppppcVar21 = (char ******)
                                &
                                __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE
                , unaff_x25 = ppppppcVar22,
                unaff_x28 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE,
                *(int *)((long)pppppcVar14 + 0x124) != *(int *)((long)param_5 + 0xc)))
          goto LAB_100c2577c;
          ppppppcStack_288 =
               ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hd39c7aec450c931eE + 6;
          pppppcStack_1b0 = pppppcVar14 + 10;
          uStack_210 = (char ******)&uStack_2c4;
          uStack_208._0_4_ = 0x571a924;
          uStack_208._4_4_ = 1;
          pppppcStack_200 = (char *****)&uStack_2c0;
          ppppppcStack_1f8 = (char ******)&DAT_10112c67c;
          pppppcStack_1f0 = (char *****)&uStack_2bc;
          pppppcStack_1e8 = (char *****)&DAT_10114d844;
          pbStack_1e0 = &bStack_2bf;
          pppppcStack_1d8 = (char *****)&DAT_100c3c388;
          pppppcStack_1d0 = (char *****)&cStack_2be;
          uStack_1c8 = (char *****)&DAT_100c3c388;
          pbStack_1c0 = &bStack_2bd;
          pppppppcStack_1b8 = (char *******)&DAT_100c3c388;
          puStack_1a8 = &
                        __ZN69__LT_h2__proto__streams__state__State_u20_as_u20_core__fmt__Debug_GT_3fmt17hadd9a30687b67127E
          ;
          pppppppcStack_218 = (char *******)&uStack_210;
          pppppcStack_220 = (char *****)s_send_reset______reason____initia_108ac7eea;
          ppppppcStack_230 = &pppppcStack_220;
          puStack_228 = &UNK_10b208fd0;
          ppppppcStack_298 = (char ******)&ppppppcStack_230;
          pppppppcStack_2a0 = (char *******)0x1;
          pppppcStack_290 = (char *****)0x1;
          pppppcStack_b0 = pppppcStack_2b0;
          uStack_b8 = uStack_2b8;
          pppppcStack_a8 = pppppcStack_2a8;
          pppppcStack_c8 = ppppppcVar23[0xc];
          pppppcStack_c0 = ppppppcVar23[0xd];
          pppppppcStack_e0 = (char *******)ppppppcVar23[10];
          pppppcStack_d8 = ppppppcVar23[0xb];
          auStack_e8 = (undefined1  [8])0x1;
          if (pppppppcStack_e0 == (char *******)0x0) {
            auStack_e8 = (undefined1  [8])0x2;
          }
          uStack_a0 = *(undefined4 *)(ppppppcVar23 + 1);
          uStack_9c = *(undefined4 *)((long)ppppppcVar23 + 0xc);
          pppppppcStack_88 = (char *******)&pppppppcStack_2a0;
          puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,1);
          pppppppcStack_78 = (char *******)&pppppppcStack_88;
          pppppppcStack_70 = (char *******)&DAT_1061c2098;
          ppppppcStack_d0 = (char ******)0x1;
          if (pppppcStack_c8 == (char *****)0x0) {
            ppppppcStack_d0 = (char ******)0x2;
          }
          pppppppcStack_90 = (char *******)&pppppppcStack_78;
          pcStack_98 = s__108b39f4f;
          uVar7 = (*(code *)ppppppcVar20[4])(unaff_x24,auStack_e8);
        }
      }
    }
    if ((bStack_2bf & 1) != 0) {
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
        plVar18 = (long *)&
                          __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E
        ;
        uVar9 = (uint)bRam000000010b632570;
        if (bRam000000010b632570 - 1 < 2) {
LAB_100c25424:
          uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E
                             ,uVar9);
          if ((int)uVar7 != 0) {
            pppppppcStack_78 = (char *******)s__>_not_sending_RST_STREAM___is_a_108ac7fb4;
            lVar19 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E;
LAB_100c254b4:
            pppppppcStack_2a0 = (char *******)&uStack_2bc;
            ppppppcStack_298 = (char ******)&DAT_10114d844;
            ppppppcStack_1f8 = (char ******)(lVar19 + 0x30);
            pppppppcStack_70 = (char *******)&pppppppcStack_2a0;
            pppppppcStack_88 = (char *******)&pppppppcStack_78;
            puStack_80 = &UNK_10b208fd0;
            uStack_208 = (char *******)&pppppppcStack_88;
            uStack_210._0_4_ = 1;
            uStack_210._4_4_ = 0;
            pppppcStack_200 = (char *****)0x1;
            uVar7 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar19,&uStack_210);
            if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
              return uVar7;
            }
            if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
              lVar19 = *plVar18;
              pppppppcStack_e0 = *(char ********)(lVar19 + 0x20);
              pppppcStack_d8 = *(char ******)(lVar19 + 0x28);
              auStack_e8 = (undefined1  [8])0x5;
              ppppppcVar20 = ppppppcRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                ppppppcVar20 = (char ******)&UNK_10b3c24c8;
              }
              ppppppcVar23 = ppppppcRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                ppppppcVar23 = (char ******)&UNK_109adfc03;
              }
              uVar7 = (*(code *)ppppppcVar20[3])(ppppppcVar23,auStack_e8);
              if ((int)uVar7 != 0) {
                uVar7 = __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar19,ppppppcVar23,ppppppcVar20,auStack_e8,&uStack_210);
                return uVar7;
              }
              return uVar7;
            }
            return uVar7;
          }
        }
        else if (bRam000000010b632570 != 0) {
          uVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E
                            );
          uVar9 = (uint)uVar7 & 0xff;
          if ((uVar7 & 0xff) != 0) goto LAB_100c25424;
        }
      }
      lVar19 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
        return uVar7;
      }
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
        return uVar7;
      }
      uStack_278 = *(undefined8 *)
                    (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E +
                    0x20);
      uStack_270 = *(undefined8 *)
                    (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E +
                    0x28);
      uStack_280 = 5;
      ppppppcVar20 = ppppppcRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        ppppppcVar20 = (char ******)&UNK_10b3c24c8;
      }
      ppppppcVar23 = ppppppcRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        ppppppcVar23 = (char ******)&UNK_109adfc03;
      }
      uVar7 = (*(code *)ppppppcVar20[3])(ppppppcVar23,&uStack_280);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      pppppcStack_220 = (char *****)s__>_not_sending_RST_STREAM___is_a_108ac7fb4;
      pppppcStack_1f0 = *(char ******)(lVar19 + 0x60);
      pppppcStack_1e8 = *(char ******)(lVar19 + 0x68);
      lVar15 = *(long *)(lVar19 + 0x50);
      pppppcStack_200 = *(char ******)(lVar19 + 0x58);
      uStack_210._0_4_ = 1;
      if (lVar15 == 0) {
        uStack_210._0_4_ = 2;
      }
      uVar16 = *(undefined4 *)(lVar19 + 8);
      uVar17 = *(undefined4 *)(lVar19 + 0xc);
      ppppppcStack_1f8 = (char ******)0x1;
      if (pppppcStack_1f0 == (char *****)0x0) {
        ppppppcStack_1f8 = (char ******)0x2;
      }
      pppppcStack_1d8 = (char *****)uStack_278;
      pbStack_1e0 = (byte *)uStack_280;
      pppppcStack_1d0 = (char *****)uStack_270;
      lVar19 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17he7fb74a25cb1ec16E;
LAB_100c25230:
      pppppppcStack_78 = (char *******)auStack_e8;
      pppppppcStack_88 = (char *******)&uStack_2bc;
      ppppppcStack_d0 = (char ******)(lVar19 + 0x30);
      pppppppcStack_e0 = &ppppppcStack_230;
      pppppppcStack_218 = (char *******)&pppppppcStack_88;
      ppppppcStack_230 = &pppppcStack_220;
      pppppppcStack_2a0 = (char *******)&pppppppcStack_78;
      pppppppcStack_70 = (char *******)CONCAT71(pppppppcStack_70._1_7_,1);
      puStack_80 = &DAT_10114d844;
      pppppcStack_d8 = (char *****)0x1;
      auStack_e8 = (undefined1  [8])0x1;
      puStack_228 = &UNK_10b208fd0;
      ppppppcStack_298 = (char ******)&DAT_1061c2098;
      pppppppcStack_1b8 = (char *******)&pppppppcStack_2a0;
      pbStack_1c0 = (byte *)s__108b39f4f;
      uStack_210._4_4_ = 0;
      uStack_208._0_4_ = (undefined4)lVar15;
      uStack_208._4_4_ = (undefined4)((ulong)lVar15 >> 0x20);
      uStack_1c8 = (char *****)CONCAT44(uVar17,uVar16);
      uVar7 = (*(code *)ppppppcVar20[4])(ppppppcVar23,&uStack_210);
      return uVar7;
    }
    unaff_x24 = *param_5;
    pppppppcVar1 = param_5 + 1;
    uVar9 = *(uint *)pppppppcVar1;
    ppppppcVar21 = (char ******)(ulong)uVar9;
    uVar2 = *(uint *)((long)param_5 + 0xc);
    ppppppcVar10 = *pppppppcVar1;
    auStack_e8 = (undefined1  [8])*pppppppcVar1;
    ppppppcVar23 = (char ******)(ulong)uVar2;
    unaff_x25 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
    unaff_x28 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
    if (((ppppppcVar21 < unaff_x24[2]) &&
        (pppppcVar14 = unaff_x24[1] + (ulong)uVar9 * 0x28, *pppppcVar14 != (char ****)0x2)) &&
       (unaff_x25 = ppppppcVar22,
       unaff_x28 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE,
       *(uint *)((long)pppppcVar14 + 0x124) == uVar2)) {
      uVar7 = __ZN2h25proto7streams6stream6Stream9set_reset17h4f47399f0e6ca518E
                        (pppppcVar14,uStack_2c4,uStack_2c0);
      if ((cStack_2be == '\x01') && ((bStack_2bd & 1) != 0)) {
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
          plVar18 = (long *)&
                            __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE
          ;
          uVar9 = (uint)bRam000000010b632558;
          if (bRam000000010b632558 - 1 < 2) {
LAB_100c25488:
            uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE
                               ,uVar9);
            if ((int)uVar7 != 0) {
              pppppppcStack_78 = (char *******)s____>_not_sending_explicit_RST_ST_108ac7f64;
              lVar19 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE;
              goto LAB_100c254b4;
            }
          }
          else if (bRam000000010b632558 != 0) {
            uVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE
                              );
            uVar9 = (uint)uVar7 & 0xff;
            if ((uVar7 & 0xff) != 0) goto LAB_100c25488;
          }
        }
        lVar19 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
          return uVar7;
        }
        if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
          return uVar7;
        }
        uStack_260 = *(undefined8 *)
                      (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE
                      + 0x20);
        uStack_258 = *(undefined8 *)
                      (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE
                      + 0x28);
        uStack_268 = 5;
        ppppppcVar20 = ppppppcRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          ppppppcVar20 = (char ******)&UNK_10b3c24c8;
        }
        ppppppcVar23 = ppppppcRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          ppppppcVar23 = (char ******)&UNK_109adfc03;
        }
        uVar7 = (*(code *)ppppppcVar20[3])(ppppppcVar23,&uStack_268);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        pppppcStack_220 = (char *****)s____>_not_sending_explicit_RST_ST_108ac7f64;
        pppppcStack_1f0 = *(char ******)(lVar19 + 0x60);
        pppppcStack_1e8 = *(char ******)(lVar19 + 0x68);
        lVar15 = *(long *)(lVar19 + 0x50);
        pppppcStack_200 = *(char ******)(lVar19 + 0x58);
        uStack_210._0_4_ = 1;
        if (lVar15 == 0) {
          uStack_210._0_4_ = 2;
        }
        uVar16 = *(undefined4 *)(lVar19 + 8);
        uVar17 = *(undefined4 *)(lVar19 + 0xc);
        ppppppcStack_1f8 = (char ******)0x1;
        if (pppppcStack_1f0 == (char *****)0x0) {
          ppppppcStack_1f8 = (char ******)0x2;
        }
        pppppcStack_1d8 = (char *****)uStack_260;
        pbStack_1e0 = (byte *)uStack_268;
        pppppcStack_1d0 = (char *****)uStack_258;
        lVar19 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17hdf05f3ce77a366aeE;
        goto LAB_100c25230;
      }
      FUN_100c1f438(param_1 + 8,param_4,param_5);
      auStack_e8 = (undefined1  [8])ppppppcVar10;
      if (((unaff_x24[2] <= ppppppcVar21) || (unaff_x24[1][(ulong)uVar9 * 0x28] == (char ****)0x2))
         || (*(uint *)((long)(unaff_x24[1] + (ulong)uVar9 * 0x28) + 0x124) != uVar2))
      goto LAB_100c2577c;
      uStack_24c = uStack_2c4;
      ppppppcVar10 = ppppppcVar23;
      uStack_250 = uVar2;
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
        ppppppcVar23 = (char ******)
                       &__ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E;
        bVar4 = bRam000000010b632588;
        if (1 < bRam000000010b632588 - 1) {
          ppppppcVar10 = (char ******)
                         &
                         __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E
          ;
          if (bRam000000010b632588 != 0) {
            bVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E
                              );
            ppppppcVar10 = ppppppcVar23;
            if (bVar4 != 0) goto LAB_100c25594;
          }
          goto LAB_100c252c0;
        }
LAB_100c25594:
        iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E
                           ,bVar4);
        ppppppcVar10 = (char ******)
                       &__ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E;
        if (iVar6 == 0) goto LAB_100c252c0;
        ppppppcStack_1f8 =
             ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E + 6;
        pppppppcStack_2a0 = (char *******)&uStack_250;
        ppppppcStack_298 = (char ******)&DAT_101129730;
        pppppppcStack_70 = (char *******)&pppppppcStack_2a0;
        pppppppcStack_78 = (char *******)s_send_reset____queueing__frame__108ab9874;
        pppppppcStack_88 = (char *******)&pppppppcStack_78;
        puStack_80 = &UNK_10b208fd0;
        uStack_208 = (char *******)&pppppppcStack_88;
        uStack_210._0_4_ = 1;
        uStack_210._4_4_ = 0;
        pppppcStack_200 = (char *****)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E,
                   &uStack_210);
        ppppppcVar10 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_e0 =
               (char *******)
               ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E[4];
          pppppcStack_d8 =
               ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E[5];
          auStack_e8 = (undefined1  [8])0x5;
          ppppppcVar22 = ppppppcRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            ppppppcVar22 = (char ******)&UNK_10b3c24c8;
          }
          ppppppcVar20 = ppppppcRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            ppppppcVar20 = (char ******)&UNK_109adfc03;
          }
          iVar6 = (*(code *)ppppppcVar22[3])(ppppppcVar20,auStack_e8);
          unaff_x24 = ppppppcVar10;
          if (iVar6 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (ppppppcVar10,ppppppcVar20,ppppppcVar22,auStack_e8,&uStack_210);
          }
        }
      }
      else {
LAB_100c252c0:
        ppppppcVar23 = ppppppcVar10;
        ppppppcVar10 = ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E;
        ppppppcVar22 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          ppppppcVar22 = (char ******)
                         &
                         __ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E
          ;
          pppppcStack_240 =
               ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E[4];
          pppppcStack_238 =
               ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E[5];
          pbStack_248 = (byte *)0x5;
          ppppppcVar23 = ppppppcRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            ppppppcVar23 = (char ******)&UNK_10b3c24c8;
          }
          unaff_x24 = ppppppcRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x24 = (char ******)&UNK_109adfc03;
          }
          iVar6 = (*(code *)ppppppcVar23[3])(unaff_x24,&pbStack_248);
          ppppppcVar21 = ppppppcVar10;
          if (iVar6 != 0) {
            ppppppcStack_d0 =
                 ___ZN2h25proto7streams4send4Send10send_reset10__CALLSITE17heecc769f3a76a066E + 6;
            pppppppcStack_88 = (char *******)&uStack_250;
            puStack_80 = &DAT_101129730;
            pppppppcStack_218 = (char *******)&pppppppcStack_88;
            pppppcStack_220 = (char *****)s_send_reset____queueing__frame__108ab9874;
            ppppppcStack_230 = &pppppcStack_220;
            puStack_228 = &UNK_10b208fd0;
            pppppppcStack_e0 = &ppppppcStack_230;
            auStack_e8 = (undefined1  [8])0x1;
            pppppcStack_d8 = (char *****)0x1;
            pppppcStack_1f0 = ppppppcVar10[0xc];
            pppppcStack_1e8 = ppppppcVar10[0xd];
            pppppcVar14 = ppppppcVar10[10];
            pppppcStack_200 = ppppppcVar10[0xb];
            uStack_210._0_4_ = 1;
            if (pppppcVar14 == (char *****)0x0) {
              uStack_210._0_4_ = 2;
            }
            uStack_1c8 = ppppppcVar10[1];
            pppppppcStack_78 = (char *******)auStack_e8;
            pppppppcStack_70 = (char *******)CONCAT71(pppppppcStack_70._1_7_,1);
            pppppppcStack_2a0 = (char *******)&pppppppcStack_78;
            ppppppcStack_298 = (char ******)&DAT_1061c2098;
            ppppppcStack_1f8 = (char ******)0x1;
            if (pppppcStack_1f0 == (char *****)0x0) {
              ppppppcStack_1f8 = (char ******)0x2;
            }
            pppppcStack_1d8 = pppppcStack_240;
            pbStack_1e0 = pbStack_248;
            pppppcStack_1d0 = pppppcStack_238;
            pppppppcStack_1b8 = (char *******)&pppppppcStack_2a0;
            pbStack_1c0 = (byte *)s__108b39f4f;
            uStack_210._4_4_ = 0;
            uStack_208._0_4_ = SUB84(pppppcVar14,0);
            uStack_208._4_4_ = (undefined4)((ulong)pppppcVar14 >> 0x20);
            (*(code *)ppppppcVar23[4])(unaff_x24,&uStack_210);
          }
        }
      }
      uStack_210._4_4_ = uStack_250;
      uStack_208._0_4_ = uStack_24c;
      uStack_210._0_4_ = CONCAT31(uStack_210._1_3_,8);
      pppppppcVar12 = param_5;
      pppppppcVar13 = pppppppcStack_2d0;
      uVar7 = FUN_100c1fc90(param_1 + 8,&uStack_210,param_4);
      uVar9 = *(uint *)(param_5 + 1);
      auStack_e8 = (undefined1  [8])param_5[1];
      unaff_x25 = ppppppcVar22;
      if ((((char *****)(ulong)uVar9 < (*param_5)[2]) &&
          (pppppcVar14 = (*param_5)[1] + (ulong)uVar9 * 0x28, *pppppcVar14 != (char ****)0x2)) &&
         (*(int *)((long)pppppcVar14 + 0x124) == *(int *)((long)param_5 + 0xc))) {
        iVar6 = *(int *)((long)pppppcVar14 + 0x84);
        if (0 < iVar6) {
          *(undefined4 *)((long)pppppcVar14 + 0x84) = 0;
          uVar7 = FUN_1056fa7e4(param_1 + 8,iVar6,param_5,plStack_2d8);
        }
        return uVar7;
      }
      goto LAB_100c2577c;
    }
  }
  else {
LAB_100c2577c:
    uStack_210 = (char ******)(auStack_e8 + 4);
    uStack_208._0_4_ = 0x571bc44;
    uStack_208._4_4_ = 1;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b15a2c,&uStack_210,&UNK_10b3a3ca8);
  }
  uStack_210 = (char ******)(auStack_e8 + 4);
  uStack_208._0_4_ = 0x571bc44;
  uStack_208._4_4_ = 1;
  puVar11 = &UNK_10b3a3cc0;
  auVar24 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b15a2c,&uStack_210,&UNK_10b3a3cc0);
  ppppppcVar10 = auVar24._8_8_;
  lVar19 = auVar24._0_8_;
  uStack_2e8 = 0x100c257d4;
  puStack_340 = unaff_x28;
  ppbStack_338 = &pbStack_248;
  ppppppcStack_330 = ppppppcVar20;
  ppppppcStack_328 = unaff_x25;
  ppppppcStack_320 = unaff_x24;
  pppppppcStack_318 = unaff_x23;
  ppppppcStack_310 = ppppppcVar21;
  uStack_308 = unaff_x21;
  pppppppcStack_300 = unaff_x20;
  ppppppcStack_2f8 = ppppppcVar23;
  puStack_2f0 = &stack0xfffffffffffffff0;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
    if (1 < bRam000000010b6325b8 - 1) {
      if (bRam000000010b6325b8 != 0) {
        cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (&
                           __ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                          );
        if (cVar5 != '\0') goto LAB_100c25990;
      }
      goto LAB_100c2581c;
    }
LAB_100c25990:
    iVar6 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                      (
                      ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                      );
    if (iVar6 == 0) goto LAB_100c2581c;
    puStack_498 = (undefined *)
                  (___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E +
                  0x30);
    lStack_480 = lVar19 + 0x6c;
    puStack_488 = &
                  __ZN64__LT_h2__frame__headers__Headers_u20_as_u20_core__fmt__Debug_GT_3fmt17h9fddf5de93287193E
    ;
    puStack_478 = &DAT_100c92598;
    ppppppcStack_350 = (char ******)&ppppppcStack_490;
    pppppppcStack_358 = (char *******)s_send_headers__frame____init_wind_108ac7fe6;
    pppppppuStack_368 = &pppppppcStack_358;
    puStack_360 = &UNK_10b208fd0;
    pppppppcStack_4a8 = (char *******)&pppppppuStack_368;
    auStack_4b0 = (undefined1  [8])0x1;
    lStack_4a0 = 1;
    ppppppcStack_490 = ppppppcVar10;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E,
               auStack_4b0);
    lVar15 = ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      pppcStack_4e8 =
           *(char ****)
            (___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E + 0x20);
      uStack_4e0 = *(undefined8 *)
                    (___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                    + 0x28);
      ppppppuStack_4f0 = (undefined8 ******)0x5;
      ppppppcVar20 = ppppppcRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        ppppppcVar20 = (char ******)&UNK_10b3c24c8;
      }
      ppppppcVar23 = ppppppcRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        ppppppcVar23 = (char ******)&UNK_109adfc03;
      }
      iVar6 = (*(code *)ppppppcVar20[3])(ppppppcVar23,&ppppppuStack_4f0);
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar15,ppppppcVar23,ppppppcVar20,&ppppppuStack_4f0,auStack_4b0);
      }
    }
  }
  else {
LAB_100c2581c:
    lVar15 = ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      uStack_500 = *(undefined8 *)
                    (___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                    + 0x20);
      uStack_4f8 = *(undefined8 *)
                    (___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                    + 0x28);
      uStack_508 = 5;
      ppppppcVar20 = ppppppcRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        ppppppcVar20 = (char ******)&UNK_10b3c24c8;
      }
      ppppppcVar23 = ppppppcRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        ppppppcVar23 = (char ******)&UNK_109adfc03;
      }
      iVar6 = (*(code *)ppppppcVar20[3])(ppppppcVar23,&uStack_508);
      if (iVar6 != 0) {
        lStack_4d8 = ___ZN2h25proto7streams4send4Send12send_headers10__CALLSITE17h3212d7ba2bc903f4E
                     + 0x30;
        lStack_4a0 = lVar19 + 0x6c;
        pppppppcStack_4a8 =
             (char *******)
             &
             __ZN64__LT_h2__frame__headers__Headers_u20_as_u20_core__fmt__Debug_GT_3fmt17h9fddf5de93287193E
        ;
        puStack_498 = &DAT_100c92598;
        puStack_4b8 = auStack_4b0;
        pcStack_4c0 = s_send_headers__frame____init_wind_108ac7fe6;
        ppcStack_4d0 = &pcStack_4c0;
        puStack_4c8 = &UNK_10b208fd0;
        pppcStack_4e8 = &ppcStack_4d0;
        ppppppuStack_4f0 = (undefined8 ******)0x1;
        uStack_4e0 = 1;
        lStack_470 = *(long *)(lVar15 + 0x60);
        uStack_468 = *(undefined8 *)(lVar15 + 0x68);
        puStack_488 = *(undefined **)(lVar15 + 0x50);
        lStack_480 = *(long *)(lVar15 + 0x58);
        ppppppcStack_490 = (char ******)0x1;
        if (puStack_488 == (undefined *)0x0) {
          ppppppcStack_490 = (char ******)0x2;
        }
        uStack_448 = *(undefined4 *)(lVar15 + 8);
        uStack_444 = *(undefined4 *)(lVar15 + 0xc);
        pppppppuStack_368 = &ppppppuStack_4f0;
        puStack_360 = (undefined *)CONCAT71(puStack_360._1_7_,1);
        pppppppcStack_358 = (char *******)&pppppppuStack_368;
        ppppppcStack_350 = (char ******)&DAT_1061c2098;
        puStack_478 = (undefined *)0x1;
        if (lStack_470 == 0) {
          puStack_478 = (undefined *)0x2;
        }
        uStack_458 = uStack_500;
        uStack_460 = uStack_508;
        uStack_450 = uStack_4f8;
        pppppppuStack_438 = &pppppppcStack_358;
        pcStack_440 = s__108b39f4f;
        auStack_4b0 = (undefined1  [8])ppppppcVar10;
        (*(code *)ppppppcVar20[4])(ppppppcVar23,&ppppppcStack_490);
      }
    }
  }
  uVar9 = __ZN2h25proto7streams4send4Send13check_headers17h52911a7f51d4cfa7E(ppppppcVar10);
  uVar7 = (ulong)(uVar9 & 0xff);
  if ((uVar9 & 0xff) != 0xd) {
LAB_100c25b94:
    FUN_100def764(ppppppcVar10);
    func_0x000100dea8fc(ppppppcVar10 + 0xc);
    return uVar7;
  }
  ppppppcVar23 = *pppppppcVar12;
  pppppppcVar1 = pppppppcVar12 + 1;
  uVar9 = *(uint *)pppppppcVar1;
  iVar6 = *(int *)((long)pppppppcVar12 + 0xc);
  ppppppcVar20 = *pppppppcVar1;
  auStack_4b0 = (undefined1  [8])*pppppppcVar1;
  if ((((char *****)(ulong)uVar9 < ppppppcVar23[2]) &&
      (pppppcVar14 = ppppppcVar23[1] + (ulong)uVar9 * 0x28, *pppppcVar14 != (char ****)0x2)) &&
     (*(int *)((long)pppppcVar14 + 0x124) == iVar6)) {
    uVar7 = __ZN2h25proto7streams5state5State9send_open17h28808bd52e4d0442E
                      (pppppcVar14 + 10,*(byte *)((long)ppppppcVar10 + 0x11c) & 1);
    if (((uint)uVar7 & 0xff) != 0xd) goto LAB_100c25b94;
    if (*(uint *)(ppppppcVar10 + 0x23) == 0) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109a6e3e2,0x1f,&UNK_10b3a7160);
      goto LAB_100c25c88;
    }
    if ((*(uint *)(ppppppcVar10 + 0x23) & 1) == (uint)*(byte *)(pppppppcVar13 + 0xb)) {
LAB_100c25b58:
      _memcpy(&puStack_488,ppppppcVar10,0x120);
      ppppppcStack_490 = (char ******)CONCAT71(ppppppcStack_490._1_7_,1);
      FUN_100c1fc90(lVar19 + 8,&ppppppcStack_490,puVar11,pppppppcVar12,param_6);
      return 0xd;
    }
    if ((((char *****)(ulong)uVar9 < ppppppcVar23[2]) &&
        (pppppcVar14 = ppppppcVar23[1] + (ulong)uVar9 * 0x28, *pppppcVar14 != (char ****)0x2)) &&
       (*(int *)((long)pppppcVar14 + 0x124) == iVar6)) {
      auStack_4b0 = (undefined1  [8])ppppppcVar20;
      if ((*(byte *)((long)pppppcVar14 + 0x135) & 1) == 0) {
        __ZN2h25proto7streams10prioritize10Prioritize10queue_open17hf43ec52d92cb1e91E
                  (lVar19 + 8,pppppppcVar12);
        _memcpy(&puStack_488,ppppppcVar10,0x120);
        ppppppcStack_490 = (char ******)CONCAT71(ppppppcStack_490._1_7_,1);
        FUN_100c1fc90(lVar19 + 8,&ppppppcStack_490,puVar11,pppppppcVar12,param_6);
        lVar19 = *param_6;
        *param_6 = 0;
        if (lVar19 == 0) {
          return 0xd;
        }
        (**(code **)(lVar19 + 8))(param_6[1]);
        return 0xd;
      }
      goto LAB_100c25b58;
    }
    puVar11 = &UNK_10b3a3ca8;
  }
  else {
    puVar11 = &UNK_10b3a3cc0;
  }
  auStack_4b0 = (undefined1  [8])*pppppppcVar1;
  ppppppcStack_490 = (char ******)(auStack_4b0 + 4);
  puStack_488 = &DAT_10571bc44;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__dangling_store_key_for_stream_i_108b15a2c,&ppppppcStack_490,puVar11);
LAB_100c25c88:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100c25c8c);
  (*pcVar3)();
}

