
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1008099b4(ulong param_1,undefined4 param_2,undefined1 param_3,char *******param_4,
                   char *******param_5,long *param_6,char *******param_7)

{
  char *******pppppppcVar1;
  undefined *puVar2;
  char ******ppppppcVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  char *******pppppppcVar12;
  char *******pppppppcVar13;
  char *****pppppcVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined *unaff_x19;
  long *plVar18;
  long lVar19;
  char *******unaff_x20;
  ulong unaff_x21;
  char ******ppppppcVar20;
  char *******unaff_x23;
  char ******ppppppcVar21;
  undefined *unaff_x25;
  undefined *puVar22;
  char ******unaff_x26;
  undefined1 uVar23;
  char ******ppppppcVar24;
  char ******ppppppcVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 ******ppppppuStack_558;
  char ***pppcStack_550;
  undefined8 uStack_548;
  long lStack_540;
  char **ppcStack_538;
  undefined *puStack_530;
  char *pcStack_528;
  undefined1 *puStack_520;
  undefined1 auStack_518 [8];
  char *******pppppppcStack_510;
  long lStack_508;
  undefined *puStack_500;
  char ******ppppppcStack_4f8;
  undefined *puStack_4f0;
  long lStack_4e8;
  undefined *puStack_4e0;
  long lStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  char *pcStack_4a8;
  undefined8 *******pppppppuStack_4a0;
  undefined8 *******pppppppuStack_398;
  undefined *puStack_390;
  char *******pppppppcStack_388;
  char ******ppppppcStack_380;
  char ******ppppppcStack_370;
  byte **ppbStack_368;
  char ******ppppppcStack_360;
  undefined *puStack_358;
  char ******ppppppcStack_350;
  char *******pppppppcStack_348;
  char ******ppppppcStack_340;
  ulong uStack_338;
  char *******pppppppcStack_330;
  undefined *puStack_328;
  undefined1 *puStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  char *******pppppppcStack_308;
  undefined4 uStack_2fc;
  undefined1 uStack_2f8;
  byte bStack_2f7;
  char cStack_2f6;
  byte bStack_2f5;
  uint uStack_2f4;
  undefined8 uStack_2f0;
  char *****pppppcStack_2e8;
  char *****pppppcStack_2e0;
  char *******pppppppcStack_2d8;
  char ******ppppppcStack_2d0;
  char *****pppppcStack_2c8;
  char ******ppppppcStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  uint uStack_288;
  undefined4 uStack_284;
  byte *pbStack_280;
  char *****pppppcStack_278;
  char *****pppppcStack_270;
  char ******ppppppcStack_268;
  undefined *puStack_260;
  char *****pppppcStack_258;
  char *******pppppppcStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  char *****pppppcStack_238;
  char ******ppppppcStack_230;
  char *****pppppcStack_228;
  char *****pppppcStack_220;
  byte *pbStack_218;
  char *****pppppcStack_210;
  char *****pppppcStack_208;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  char *******pppppppcStack_1f0;
  char *****pppppcStack_1e8;
  undefined *puStack_1e0;
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
  
  ppppppcVar24 = *param_5;
  pppppppcVar12 = param_5 + 1;
  uVar11 = *(uint *)pppppppcVar12;
  ppppppcVar21 = (char ******)(ulong)uVar11;
  uVar8 = *(uint *)((long)param_5 + 0xc);
  ppppppcVar3 = *pppppppcVar12;
  auStack_e8 = (undefined1  [8])*pppppppcVar12;
  ppppppcVar20 = (char ******)(ulong)uVar8;
  pppppppcVar12 = param_4;
  pppppppcVar13 = param_5;
  ppppppcVar25 = ppppppcVar24;
  plStack_310 = param_6;
  pppppppcStack_308 = param_7;
  uStack_2fc = param_2;
  uStack_2f8 = param_3;
  if (ppppppcVar21 < ppppppcVar24[2]) {
    pppppcVar14 = ppppppcVar24[1] + (ulong)uVar11 * 0x2b;
    if ((*pppppcVar14 == (char ****)0x2) || (*(uint *)((long)pppppcVar14 + 0x13c) != uVar8))
    goto LAB_10080a5f0;
    bStack_2f7 = *(byte *)(pppppcVar14 + 0xd) < 7 && *(byte *)(pppppcVar14 + 0xd) != 4;
    cStack_2f6 = *(byte *)(pppppcVar14 + 0xd) < 7;
    bStack_2f5 = (byte)*pppppcVar14 ^ 1;
    puVar22 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
    uVar9 = param_1;
    uStack_2f4 = uVar8;
    unaff_x26 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
    unaff_x20 = param_5;
    unaff_x21 = param_1;
    unaff_x23 = param_4;
    unaff_x25 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
      unaff_x19 = &
                  __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
      ;
      uVar10 = (uint)bRam000000010b636c48;
      if (1 < bRam000000010b636c48 - 1) {
        if (bRam000000010b636c48 != 0) {
          uVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
                            );
          uVar10 = (uint)uVar9 & 0xff;
          if ((uVar9 & 0xff) != 0) goto LAB_100809c6c;
        }
        goto LAB_100809a7c;
      }
LAB_100809c6c:
      uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
                         ,uVar10);
      if ((int)uVar9 == 0) goto LAB_100809a7c;
      unaff_x25 = puVar22;
      unaff_x26 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
      auStack_e8 = (undefined1  [8])ppppppcVar3;
      if (((ppppppcVar24[2] <= ppppppcVar21) ||
          (pppppcVar14 = ppppppcVar24[1] + (ulong)uVar11 * 0x2b, *pppppcVar14 == (char ****)0x2)) ||
         (*(uint *)((long)pppppcVar14 + 0x13c) != uVar8)) goto LAB_10080a5f0;
      ppppppcStack_d0 =
           ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
           + 6;
      pppppcStack_1e8 = pppppcVar14 + 0xd;
      uStack_248 = (char ******)&uStack_2fc;
      uStack_240._0_4_ = 0x5add874;
      uStack_240._4_4_ = 1;
      pppppcStack_238 = (char *****)&uStack_2f8;
      ppppppcStack_230 = (char ******)&DAT_10112c67c;
      pppppcStack_228 = (char *****)&uStack_2f4;
      pppppcStack_220 = (char *****)&DAT_10114d844;
      pbStack_218 = &bStack_2f7;
      pppppcStack_210 = (char *****)&DAT_100c3c388;
      pppppcStack_208 = (char *****)&cStack_2f6;
      uStack_200 = (char *****)&DAT_100c3c388;
      pbStack_1f8 = &bStack_2f5;
      pppppppcStack_1f0 = (char *******)&DAT_100c3c388;
      puStack_1e0 = &
                    __ZN85__LT_rama_http_core__h2__proto__streams__state__State_u20_as_u20_core__fmt__Debug_GT_3fmt17h26c43699343208c0E
      ;
      pppppppcStack_70 = (char *******)&uStack_248;
      pppppppcStack_78 = (char *******)s_send_reset______reason____initia_108ac7eea;
      pppppppcStack_88 = (char *******)&pppppppcStack_78;
      puStack_80 = &UNK_10b208fd0;
      pppppppcStack_e0 = (char *******)&pppppppcStack_88;
      auStack_e8 = (undefined1  [8])0x1;
      pppppcStack_d8 = (char *****)0x1;
      uVar9 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
                         ,auStack_e8);
      ppppppcVar21 = 
      ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        ppppppcStack_2d0 =
             (char ******)
             ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
             [4];
        pppppcStack_2c8 =
             ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
             [5];
        pppppppcStack_2d8 = (char *******)0x5;
        puVar2 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_10b3c24c8;
        }
        ppppppcVar20 = ppppppcRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          ppppppcVar20 = (char ******)&UNK_109adfc03;
        }
        uVar9 = (**(code **)(puVar2 + 0x18))(ppppppcVar20,&pppppppcStack_2d8);
        if ((int)uVar9 != 0) {
          pppppppcVar12 = (char *******)&pppppppcStack_2d8;
          pppppppcVar13 = (char *******)0x0;
          uVar9 = __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (ppppppcVar21,ppppppcVar20,puVar2);
        }
      }
    }
    else {
LAB_100809a7c:
      ppppppcVar20 = 
      ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE;
      uStack_248 = (char ******)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (uStack_248 = (char ******)CONCAT44(uStack_248._4_4_,(undefined4)uStack_248),
         4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        ppppppcVar24 = (char ******)
                       &
                       __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
        ;
        pppppcStack_2e8 =
             ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
             [4];
        pppppcStack_2e0 =
             ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
             [5];
        uStack_2f0 = 5;
        unaff_x19 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          unaff_x19 = &UNK_10b3c24c8;
        }
        ppppppcVar21 = ppppppcRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          ppppppcVar21 = (char ******)&UNK_109adfc03;
        }
        uVar9 = (**(code **)(unaff_x19 + 0x18))(ppppppcVar21,&uStack_2f0);
        if ((int)uVar9 != 0) {
          uVar11 = *(uint *)(param_5 + 1);
          auStack_e8 = (undefined1  [8])param_5[1];
          ppppppcVar25 = ppppppcVar24;
          if ((((*param_5)[2] <= (char *****)(ulong)uVar11) ||
              (pppppcVar14 = (*param_5)[1] + (ulong)uVar11 * 0x2b, *pppppcVar14 == (char ****)0x2))
             || (unaff_x25 = puVar22,
                unaff_x26 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E,
                ppppppcVar25 = (char ******)
                               &
                               __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
                , *(int *)((long)pppppcVar14 + 0x13c) != *(int *)((long)param_5 + 0xc)))
          goto LAB_10080a5f0;
          ppppppcStack_2c0 =
               ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h4488031ce36993feE
               + 6;
          pppppcStack_1e8 = pppppcVar14 + 0xd;
          uStack_248 = (char ******)&uStack_2fc;
          uStack_240._0_4_ = 0x5add874;
          uStack_240._4_4_ = 1;
          pppppcStack_238 = (char *****)&uStack_2f8;
          ppppppcStack_230 = (char ******)&DAT_10112c67c;
          pppppcStack_228 = (char *****)&uStack_2f4;
          pppppcStack_220 = (char *****)&DAT_10114d844;
          pbStack_218 = &bStack_2f7;
          pppppcStack_210 = (char *****)&DAT_100c3c388;
          pppppcStack_208 = (char *****)&cStack_2f6;
          uStack_200 = (char *****)&DAT_100c3c388;
          pbStack_1f8 = &bStack_2f5;
          pppppppcStack_1f0 = (char *******)&DAT_100c3c388;
          puStack_1e0 = &
                        __ZN85__LT_rama_http_core__h2__proto__streams__state__State_u20_as_u20_core__fmt__Debug_GT_3fmt17h26c43699343208c0E
          ;
          pppppppcStack_250 = (char *******)&uStack_248;
          pppppcStack_258 = (char *****)s_send_reset______reason____initia_108ac7eea;
          ppppppcStack_268 = &pppppcStack_258;
          puStack_260 = &UNK_10b208fd0;
          ppppppcStack_2d0 = (char ******)&ppppppcStack_268;
          pppppppcStack_2d8 = (char *******)0x1;
          pppppcStack_2c8 = (char *****)0x1;
          pppppcStack_b0 = pppppcStack_2e8;
          uStack_b8 = uStack_2f0;
          pppppcStack_a8 = pppppcStack_2e0;
          pppppcStack_c8 = ppppppcVar20[0xc];
          pppppcStack_c0 = ppppppcVar20[0xd];
          pppppppcStack_e0 = (char *******)ppppppcVar20[10];
          pppppcStack_d8 = ppppppcVar20[0xb];
          auStack_e8 = (undefined1  [8])0x1;
          if (pppppppcStack_e0 == (char *******)0x0) {
            auStack_e8 = (undefined1  [8])0x2;
          }
          uStack_a0 = *(undefined4 *)(ppppppcVar20 + 1);
          uStack_9c = *(undefined4 *)((long)ppppppcVar20 + 0xc);
          pppppppcStack_88 = (char *******)&pppppppcStack_2d8;
          puStack_80 = (undefined *)CONCAT71(puStack_80._1_7_,1);
          pppppppcStack_78 = (char *******)&pppppppcStack_88;
          pppppppcStack_70 = (char *******)&DAT_1061c2098;
          ppppppcStack_d0 = (char ******)0x1;
          if (pppppcStack_c8 == (char *****)0x0) {
            ppppppcStack_d0 = (char ******)0x2;
          }
          pppppppcStack_90 = (char *******)&pppppppcStack_78;
          pcStack_98 = s__108b39f4f;
          uVar9 = (**(code **)(unaff_x19 + 0x20))(ppppppcVar21,auStack_e8);
        }
      }
    }
    uVar11 = (uint)pppppppcVar13;
    if ((bStack_2f7 & 1) != 0) {
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
        plVar18 = (long *)&
                          __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h50071b1fc3eb5d49E
        ;
        uVar11 = (uint)bRam000000010b636c60;
        if (bRam000000010b636c60 - 1 < 2) {
LAB_10080a278:
          uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h50071b1fc3eb5d49E
                             ,uVar11);
          if ((int)uVar9 != 0) {
            pppppppcStack_78 = (char *******)s__>_not_sending_RST_STREAM___is_a_108ac7fb4;
            lVar19 = 
            ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h50071b1fc3eb5d49E
            ;
LAB_10080a308:
            pppppppcStack_2d8 = (char *******)&uStack_2f4;
            ppppppcStack_2d0 = (char ******)&DAT_10114d844;
            ppppppcStack_230 = (char ******)(lVar19 + 0x30);
            pppppppcStack_70 = (char *******)&pppppppcStack_2d8;
            pppppppcStack_88 = (char *******)&pppppppcStack_78;
            puStack_80 = &UNK_10b208fd0;
            uStack_240 = (char *******)&pppppppcStack_88;
            uStack_248._0_4_ = 1;
            uStack_248._4_4_ = 0;
            pppppcStack_238 = (char *****)0x1;
            uVar9 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar19,&uStack_248);
            if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
              return uVar9;
            }
            if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
              lVar19 = *plVar18;
              pppppppcStack_e0 = *(char ********)(lVar19 + 0x20);
              pppppcStack_d8 = *(char ******)(lVar19 + 0x28);
              auStack_e8 = (undefined1  [8])0x5;
              puVar22 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar22 = &UNK_10b3c24c8;
              }
              ppppppcVar24 = ppppppcRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                ppppppcVar24 = (char ******)&UNK_109adfc03;
              }
              uVar9 = (**(code **)(puVar22 + 0x18))(ppppppcVar24,auStack_e8);
              if ((int)uVar9 != 0) {
                uVar9 = __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                  (lVar19,ppppppcVar24,puVar22,auStack_e8,&uStack_248);
                return uVar9;
              }
              return uVar9;
            }
            return uVar9;
          }
        }
        else if (bRam000000010b636c60 != 0) {
          uVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h50071b1fc3eb5d49E
                            );
          uVar11 = (uint)uVar9 & 0xff;
          if ((uVar9 & 0xff) != 0) goto LAB_10080a278;
        }
      }
      lVar19 = 
      ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h50071b1fc3eb5d49E;
      if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
        return uVar9;
      }
      if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
        return uVar9;
      }
      uStack_2b0 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h50071b1fc3eb5d49E
                    + 0x20);
      uStack_2a8 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h50071b1fc3eb5d49E
                    + 0x28);
      uStack_2b8 = 5;
      puVar22 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar22 = &UNK_10b3c24c8;
      }
      ppppppcVar24 = ppppppcRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        ppppppcVar24 = (char ******)&UNK_109adfc03;
      }
      uVar9 = (**(code **)(puVar22 + 0x18))(ppppppcVar24,&uStack_2b8);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
      pppppcStack_258 = (char *****)s__>_not_sending_RST_STREAM___is_a_108ac7fb4;
      pppppcStack_228 = *(char ******)(lVar19 + 0x60);
      pppppcStack_220 = *(char ******)(lVar19 + 0x68);
      lVar15 = *(long *)(lVar19 + 0x50);
      pppppcStack_238 = *(char ******)(lVar19 + 0x58);
      uStack_248._0_4_ = 1;
      if (lVar15 == 0) {
        uStack_248._0_4_ = 2;
      }
      uVar16 = *(undefined4 *)(lVar19 + 8);
      uVar17 = *(undefined4 *)(lVar19 + 0xc);
      ppppppcStack_230 = (char ******)0x1;
      if (pppppcStack_228 == (char *****)0x0) {
        ppppppcStack_230 = (char ******)0x2;
      }
      pppppcStack_210 = (char *****)uStack_2b0;
      pbStack_218 = (byte *)uStack_2b8;
      pppppcStack_208 = (char *****)uStack_2a8;
      lVar19 = 
      ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h50071b1fc3eb5d49E;
LAB_10080a080:
      pppppppcStack_78 = (char *******)auStack_e8;
      pppppppcStack_88 = (char *******)&uStack_2f4;
      ppppppcStack_d0 = (char ******)(lVar19 + 0x30);
      pppppppcStack_e0 = &ppppppcStack_268;
      pppppppcStack_250 = (char *******)&pppppppcStack_88;
      ppppppcStack_268 = &pppppcStack_258;
      pppppppcStack_2d8 = (char *******)&pppppppcStack_78;
      pppppppcStack_70 = (char *******)CONCAT71(pppppppcStack_70._1_7_,1);
      puStack_80 = &DAT_10114d844;
      pppppcStack_d8 = (char *****)0x1;
      auStack_e8 = (undefined1  [8])0x1;
      puStack_260 = &UNK_10b208fd0;
      ppppppcStack_2d0 = (char ******)&DAT_1061c2098;
      pppppppcStack_1f0 = (char *******)&pppppppcStack_2d8;
      pbStack_1f8 = (byte *)s__108b39f4f;
      uStack_248._4_4_ = 0;
      uStack_240._0_4_ = (undefined4)lVar15;
      uStack_240._4_4_ = (undefined4)((ulong)lVar15 >> 0x20);
      uStack_200 = (char *****)CONCAT44(uVar17,uVar16);
      uVar9 = (**(code **)(puVar22 + 0x20))(ppppppcVar24,&uStack_248);
      return uVar9;
    }
    ppppppcVar21 = *param_5;
    pppppppcVar1 = param_5 + 1;
    uVar8 = *(uint *)pppppppcVar1;
    ppppppcVar20 = (char ******)(ulong)uVar8;
    uVar10 = *(uint *)((long)param_5 + 0xc);
    ppppppcVar3 = *pppppppcVar1;
    auStack_e8 = (undefined1  [8])*pppppppcVar1;
    unaff_x19 = (undefined *)(ulong)uVar10;
    unaff_x25 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
    unaff_x26 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
    ppppppcVar25 = ppppppcVar24;
    if (((ppppppcVar20 < ppppppcVar21[2]) &&
        (pppppcVar14 = ppppppcVar21[1] + (ulong)uVar8 * 0x2b, *pppppcVar14 != (char ****)0x2)) &&
       (unaff_x25 = puVar22,
       unaff_x26 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E,
       *(uint *)((long)pppppcVar14 + 0x13c) == uVar10)) {
      uVar9 = __ZN14rama_http_core2h25proto7streams6stream6Stream9set_reset17h5d91f8db0e189843E
                        (pppppcVar14,uStack_2fc,uStack_2f8);
      if ((cStack_2f6 == '\x01') && ((bStack_2f5 & 1) != 0)) {
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
          plVar18 = (long *)&
                            __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h54a9cd2901027669E
          ;
          uVar11 = (uint)bRam000000010b636c78;
          if (bRam000000010b636c78 - 1 < 2) {
LAB_10080a2dc:
            uVar9 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h54a9cd2901027669E
                               ,uVar11);
            if ((int)uVar9 != 0) {
              pppppppcStack_78 = (char *******)s____>_not_sending_explicit_RST_ST_108ac7f64;
              lVar19 = 
              ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h54a9cd2901027669E
              ;
              goto LAB_10080a308;
            }
          }
          else if (bRam000000010b636c78 != 0) {
            uVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h54a9cd2901027669E
                              );
            uVar11 = (uint)uVar9 & 0xff;
            if ((uVar9 & 0xff) != 0) goto LAB_10080a2dc;
          }
        }
        lVar19 = 
        ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h54a9cd2901027669E
        ;
        if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE != '\0') {
          return uVar9;
        }
        if (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E < 5) {
          return uVar9;
        }
        uStack_298 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h54a9cd2901027669E
                      + 0x20);
        uStack_290 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h54a9cd2901027669E
                      + 0x28);
        uStack_2a0 = 5;
        puVar22 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar22 = &UNK_10b3c24c8;
        }
        ppppppcVar24 = ppppppcRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          ppppppcVar24 = (char ******)&UNK_109adfc03;
        }
        uVar9 = (**(code **)(puVar22 + 0x18))(ppppppcVar24,&uStack_2a0);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
        pppppcStack_258 = (char *****)s____>_not_sending_explicit_RST_ST_108ac7f64;
        pppppcStack_228 = *(char ******)(lVar19 + 0x60);
        pppppcStack_220 = *(char ******)(lVar19 + 0x68);
        lVar15 = *(long *)(lVar19 + 0x50);
        pppppcStack_238 = *(char ******)(lVar19 + 0x58);
        uStack_248._0_4_ = 1;
        if (lVar15 == 0) {
          uStack_248._0_4_ = 2;
        }
        uVar16 = *(undefined4 *)(lVar19 + 8);
        uVar17 = *(undefined4 *)(lVar19 + 0xc);
        ppppppcStack_230 = (char ******)0x1;
        if (pppppcStack_228 == (char *****)0x0) {
          ppppppcStack_230 = (char ******)0x2;
        }
        pppppcStack_210 = (char *****)uStack_298;
        pbStack_218 = (byte *)uStack_2a0;
        pppppcStack_208 = (char *****)uStack_290;
        lVar19 = 
        ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h54a9cd2901027669E
        ;
        goto LAB_10080a080;
      }
      FUN_100804fd4(param_1 + 8,param_4,param_5);
      auStack_e8 = (undefined1  [8])ppppppcVar3;
      if (((ppppppcVar21[2] <= ppppppcVar20) ||
          (ppppppcVar21[1][(ulong)uVar8 * 0x2b] == (char ****)0x2)) ||
         (*(uint *)((long)(ppppppcVar21[1] + (ulong)uVar8 * 0x2b) + 0x13c) != uVar10))
      goto LAB_10080a5f0;
      uStack_284 = uStack_2fc;
      puVar2 = unaff_x19;
      uStack_288 = uVar10;
      if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
        unaff_x19 = &
                    __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
        ;
        bVar5 = bRam000000010b636c90;
        if (1 < bRam000000010b636c90 - 1) {
          puVar2 = &
                   __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
          ;
          if (bRam000000010b636c90 != 0) {
            bVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
                              );
            puVar2 = unaff_x19;
            if (bVar5 != 0) goto LAB_10080a3f0;
          }
          goto LAB_10080a110;
        }
LAB_10080a3f0:
        iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
                           ,bVar5);
        puVar2 = &
                 __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
        ;
        if (iVar7 == 0) goto LAB_10080a110;
        ppppppcStack_230 =
             ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
             + 6;
        pppppppcStack_2d8 = (char *******)&uStack_288;
        ppppppcStack_2d0 = (char ******)&DAT_10120e5cc;
        pppppppcStack_70 = (char *******)&pppppppcStack_2d8;
        pppppppcStack_78 = (char *******)s_send_reset____queueing__frame__108ab9874;
        pppppppcStack_88 = (char *******)&pppppppcStack_78;
        puStack_80 = &UNK_10b208fd0;
        uStack_240 = (char *******)&pppppppcStack_88;
        uStack_248._0_4_ = 1;
        uStack_248._4_4_ = 0;
        pppppcStack_238 = (char *****)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
                   ,&uStack_248);
        ppppppcVar24 = 
        ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppcStack_e0 =
               (char *******)
               ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
               [4];
          pppppcStack_d8 =
               ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
               [5];
          auStack_e8 = (undefined1  [8])0x5;
          puVar22 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar22 = &UNK_10b3c24c8;
          }
          unaff_x26 = ppppppcRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x26 = (char ******)&UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar22 + 0x18))(unaff_x26,auStack_e8);
          ppppppcVar21 = ppppppcVar24;
          if (iVar7 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (ppppppcVar24,unaff_x26,puVar22,auStack_e8,&uStack_248);
          }
        }
      }
      else {
LAB_10080a110:
        unaff_x19 = puVar2;
        ppppppcVar24 = 
        ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
        ;
        puVar22 = &__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE;
        unaff_x26 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar22 = &
                    __ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
          ;
          pppppcStack_278 =
               ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
               [4];
          pppppcStack_270 =
               ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
               [5];
          pbStack_280 = (byte *)0x5;
          unaff_x19 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x19 = &UNK_10b3c24c8;
          }
          ppppppcVar21 = ppppppcRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            ppppppcVar21 = (char ******)&UNK_109adfc03;
          }
          iVar7 = (**(code **)(unaff_x19 + 0x18))(ppppppcVar21,&pbStack_280);
          ppppppcVar20 = ppppppcVar24;
          unaff_x26 = (char ******)&__ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E;
          if (iVar7 != 0) {
            ppppppcStack_d0 =
                 ___ZN14rama_http_core2h25proto7streams4send4Send10send_reset10__CALLSITE17h5854d597562e01f8E
                 + 6;
            pppppppcStack_88 = (char *******)&uStack_288;
            puStack_80 = &DAT_10120e5cc;
            pppppppcStack_250 = (char *******)&pppppppcStack_88;
            pppppcStack_258 = (char *****)s_send_reset____queueing__frame__108ab9874;
            ppppppcStack_268 = &pppppcStack_258;
            puStack_260 = &UNK_10b208fd0;
            pppppppcStack_e0 = &ppppppcStack_268;
            auStack_e8 = (undefined1  [8])0x1;
            pppppcStack_d8 = (char *****)0x1;
            pppppcStack_228 = ppppppcVar24[0xc];
            pppppcStack_220 = ppppppcVar24[0xd];
            pppppcVar14 = ppppppcVar24[10];
            pppppcStack_238 = ppppppcVar24[0xb];
            uStack_248._0_4_ = 1;
            if (pppppcVar14 == (char *****)0x0) {
              uStack_248._0_4_ = 2;
            }
            uStack_200 = ppppppcVar24[1];
            pppppppcStack_78 = (char *******)auStack_e8;
            pppppppcStack_70 = (char *******)CONCAT71(pppppppcStack_70._1_7_,1);
            pppppppcStack_2d8 = (char *******)&pppppppcStack_78;
            ppppppcStack_2d0 = (char ******)&DAT_1061c2098;
            ppppppcStack_230 = (char ******)0x1;
            if (pppppcStack_228 == (char *****)0x0) {
              ppppppcStack_230 = (char ******)0x2;
            }
            pppppcStack_210 = pppppcStack_278;
            pbStack_218 = pbStack_280;
            pppppcStack_208 = pppppcStack_270;
            pppppppcStack_1f0 = (char *******)&pppppppcStack_2d8;
            pbStack_1f8 = (byte *)s__108b39f4f;
            uStack_248._4_4_ = 0;
            uStack_240._0_4_ = SUB84(pppppcVar14,0);
            uStack_240._4_4_ = (undefined4)((ulong)pppppcVar14 >> 0x20);
            (**(code **)(unaff_x19 + 0x20))(ppppppcVar21,&uStack_248);
          }
        }
      }
      uStack_248._4_4_ = uStack_288;
      uStack_240._0_4_ = uStack_284;
      uStack_248._0_4_ = CONCAT31(uStack_248._1_3_,8);
      pppppppcVar12 = param_5;
      pppppppcVar13 = pppppppcStack_308;
      uVar9 = FUN_100805848(param_1 + 8,&uStack_248,param_4);
      uVar11 = *(uint *)(param_5 + 1);
      auStack_e8 = (undefined1  [8])param_5[1];
      unaff_x25 = puVar22;
      if ((((char *****)(ulong)uVar11 < (*param_5)[2]) &&
          (pppppcVar14 = (*param_5)[1] + (ulong)uVar11 * 0x2b, *pppppcVar14 != (char ****)0x2)) &&
         (*(int *)((long)pppppcVar14 + 0x13c) == *(int *)((long)param_5 + 0xc))) {
        iVar7 = *(int *)((long)pppppcVar14 + 0x9c);
        if (0 < iVar7) {
          *(undefined4 *)((long)pppppcVar14 + 0x9c) = 0;
          uVar9 = FUN_105a83b58(param_1 + 8,iVar7,param_5,plStack_310);
        }
        return uVar9;
      }
      goto LAB_10080a5f0;
    }
  }
  else {
LAB_10080a5f0:
    uVar11 = (uint)pppppppcVar13;
    uStack_248 = (char ******)(auStack_e8 + 4);
    uStack_240._0_4_ = 0x5abf048;
    uStack_240._4_4_ = 1;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&uStack_248,&UNK_10b3fa588);
  }
  uStack_248 = (char ******)(auStack_e8 + 4);
  uStack_240._0_4_ = 0x5abf048;
  uStack_240._4_4_ = 1;
  puVar22 = &UNK_10b3fa5a0;
  auVar26 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__dangling_store_key_for_stream_i_108b233d4,&uStack_248,&UNK_10b3fa5a0);
  ppppppcVar24 = auVar26._8_8_;
  lVar19 = auVar26._0_8_;
  uStack_318 = 0x10080a640;
  ppppppcStack_370 = ppppppcVar25;
  ppbStack_368 = &pbStack_280;
  ppppppcStack_360 = unaff_x26;
  puStack_358 = unaff_x25;
  ppppppcStack_350 = ppppppcVar21;
  pppppppcStack_348 = unaff_x23;
  ppppppcStack_340 = ppppppcVar20;
  uStack_338 = unaff_x21;
  pppppppcStack_330 = unaff_x20;
  puStack_328 = unaff_x19;
  puStack_320 = &stack0xfffffffffffffff0;
  uVar8 = __ZN14rama_http_core2h25proto7streams4send4Send13check_headers17h3e8b09c81bbfb53eE
                    (ppppppcVar24);
  uVar9 = (ulong)(uVar8 & 0xff);
  if ((uVar8 & 0xff) != 0xf) {
LAB_10080a75c:
    FUN_100e3fdac(ppppppcVar24);
    return uVar9;
  }
  uVar8 = *(uint *)(pppppppcVar12 + 1);
  auStack_518 = (undefined1  [8])pppppppcVar12[1];
  if ((((*pppppppcVar12)[2] <= (char *****)(ulong)uVar8) ||
      (pppppcVar14 = (*pppppppcVar12)[1] + (ulong)uVar8 * 0x2b, *pppppcVar14 == (char ****)0x2)) ||
     (*(int *)((long)pppppcVar14 + 0x13c) != *(int *)((long)pppppppcVar12 + 0xc))) {
    puVar22 = &UNK_10b3fa5a0;
LAB_10080aac0:
    ppppppcStack_4f8 = (char ******)(auStack_518 + 4);
    puStack_4f0 = &DAT_105abf048;
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
              (s__dangling_store_key_for_stream_i_108b233d4,&ppppppcStack_4f8,puVar22);
LAB_10080aadc:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10080aae0);
    (*pcVar4)();
  }
  uVar9 = __ZN14rama_http_core2h25proto7streams5state5State9send_open17h70170da7effed1e8E
                    (pppppcVar14 + 0xd,*(byte *)((long)ppppppcVar24 + 0x154) & 1);
  if (((uint)uVar9 & 0xff) != 0xf) goto LAB_10080a75c;
  if (*(uint *)(ppppppcVar24 + 0x2a) == 0) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b09f81,0x1f,&UNK_10b3fc510);
    goto LAB_10080aadc;
  }
  if ((*(uint *)(ppppppcVar24 + 0x2a) & 1) == (uVar11 & 1)) {
LAB_10080a744:
    uVar23 = false;
  }
  else {
    uVar11 = *(uint *)(pppppppcVar12 + 1);
    auStack_518 = (undefined1  [8])pppppppcVar12[1];
    if ((((*pppppppcVar12)[2] <= (char *****)(ulong)uVar11) ||
        (pppppcVar14 = (*pppppppcVar12)[1] + (ulong)uVar11 * 0x2b, *pppppcVar14 == (char ****)0x2))
       || (*(int *)((long)pppppcVar14 + 0x13c) != *(int *)((long)pppppppcVar12 + 0xc))) {
      puVar22 = &UNK_10b3fa588;
      goto LAB_10080aac0;
    }
    if ((*(byte *)((long)pppppcVar14 + 0x14d) & 1) != 0) goto LAB_10080a744;
    __ZN14rama_http_core2h25proto7streams10prioritize10Prioritize10queue_open17hcaf950f74df1152eE
              (lVar19 + 8,pppppppcVar12);
    uVar23 = true;
  }
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
    if (bRam000000010b636cc0 - 1 < 2) {
LAB_10080a7a0:
      iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE
                        );
      if (iVar7 != 0) {
        puStack_500 = (undefined *)
                      (
                      ___ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE
                      + 0x30);
        lStack_4e8 = lVar19 + 100;
        puStack_4f0 = &
                      __ZN88__LT_rama_http_types__proto__h2__frame__headers__Headers_u20_as_u20_core__fmt__Debug_GT_3fmt17h398d725d0da93e06E
        ;
        puStack_4e0 = &DAT_100c92598;
        ppppppcStack_380 = (char ******)&ppppppcStack_4f8;
        pppppppcStack_388 = (char *******)s_send_headers__frame____init_wind_108ac7fe6;
        pppppppuStack_398 = &pppppppcStack_388;
        puStack_390 = &UNK_10b208fd0;
        pppppppcStack_510 = (char *******)&pppppppuStack_398;
        auStack_518 = (undefined1  [8])0x1;
        lStack_508 = 1;
        ppppppcStack_4f8 = ppppppcVar24;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE
                   ,auStack_518);
        lVar15 = 
        ___ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppcStack_550 =
               *(char ****)
                (
                ___ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE
                + 0x20);
          uStack_548 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE
                        + 0x28);
          ppppppuStack_558 = (undefined8 ******)0x5;
          puVar2 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_10b3c24c8;
          }
          ppppppcVar21 = ppppppcRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            ppppppcVar21 = (char ******)&UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar2 + 0x18))(ppppppcVar21,&ppppppuStack_558);
          if (iVar7 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar15,ppppppcVar21,puVar2,&ppppppuStack_558,auStack_518);
          }
        }
        goto LAB_10080aa04;
      }
    }
    else if (bRam000000010b636cc0 != 0) {
      cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                        (&
                         __ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE
                        );
      if (cVar6 != '\0') goto LAB_10080a7a0;
    }
  }
  lVar15 = 
  ___ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uStack_568 = *(undefined8 *)
                  (
                  ___ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE
                  + 0x20);
    uStack_560 = *(undefined8 *)
                  (
                  ___ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE
                  + 0x28);
    uStack_570 = 5;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    ppppppcVar21 = ppppppcRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      ppppppcVar21 = (char ******)&UNK_109adfc03;
    }
    iVar7 = (**(code **)(puVar2 + 0x18))(ppppppcVar21,&uStack_570);
    if (iVar7 != 0) {
      lStack_540 = ___ZN14rama_http_core2h25proto7streams4send4Send12send_headers10__CALLSITE17hf1815a5ab119c46eE
                   + 0x30;
      lStack_508 = lVar19 + 100;
      pppppppcStack_510 =
           (char *******)
           &
           __ZN88__LT_rama_http_types__proto__h2__frame__headers__Headers_u20_as_u20_core__fmt__Debug_GT_3fmt17h398d725d0da93e06E
      ;
      puStack_500 = &DAT_100c92598;
      puStack_520 = auStack_518;
      pcStack_528 = s_send_headers__frame____init_wind_108ac7fe6;
      ppcStack_538 = &pcStack_528;
      puStack_530 = &UNK_10b208fd0;
      pppcStack_550 = &ppcStack_538;
      ppppppuStack_558 = (undefined8 ******)0x1;
      uStack_548 = 1;
      lStack_4d8 = *(long *)(lVar15 + 0x60);
      uStack_4d0 = *(undefined8 *)(lVar15 + 0x68);
      puStack_4f0 = *(undefined **)(lVar15 + 0x50);
      lStack_4e8 = *(long *)(lVar15 + 0x58);
      ppppppcStack_4f8 = (char ******)0x1;
      if (puStack_4f0 == (undefined *)0x0) {
        ppppppcStack_4f8 = (char ******)0x2;
      }
      uStack_4b0 = *(undefined4 *)(lVar15 + 8);
      uStack_4ac = *(undefined4 *)(lVar15 + 0xc);
      pppppppuStack_398 = &ppppppuStack_558;
      puStack_390 = (undefined *)CONCAT71(puStack_390._1_7_,1);
      pppppppcStack_388 = (char *******)&pppppppuStack_398;
      ppppppcStack_380 = (char ******)&DAT_1061c2098;
      puStack_4e0 = (undefined *)0x1;
      if (lStack_4d8 == 0) {
        puStack_4e0 = (undefined *)0x2;
      }
      uStack_4c0 = uStack_568;
      uStack_4c8 = uStack_570;
      uStack_4b8 = uStack_560;
      pppppppuStack_4a0 = &pppppppcStack_388;
      pcStack_4a8 = s__108b39f4f;
      auStack_518 = (undefined1  [8])ppppppcVar24;
      (**(code **)(puVar2 + 0x20))(ppppppcVar21,&ppppppcStack_4f8);
    }
  }
LAB_10080aa04:
  _memcpy(&puStack_4f0,ppppppcVar24,0x158);
  ppppppcStack_4f8 = (char ******)CONCAT71(ppppppcStack_4f8._1_7_,1);
  FUN_100805848(lVar19 + 8,&ppppppcStack_4f8,puVar22,pppppppcVar12,param_6);
  if ((bool)uVar23) {
    lVar19 = *param_6;
    *param_6 = 0;
    if (lVar19 != 0) {
      (**(code **)(lVar19 + 8))(param_6[1]);
    }
  }
  return 0xf;
}

