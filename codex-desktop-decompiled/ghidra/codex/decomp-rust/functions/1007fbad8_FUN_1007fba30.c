
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007fba30(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  byte *****pppppbVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  code *pcVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  char *****pppppcVar13;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 *extraout_x1_02;
  undefined8 *extraout_x1_03;
  ulong uVar14;
  undefined8 extraout_x1_04;
  ulong extraout_x1_05;
  char *****pppppcVar15;
  byte *pbVar16;
  undefined2 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  byte *****pppppbVar22;
  char ******ppppppcVar23;
  byte *unaff_x22;
  undefined *unaff_x23;
  long lVar24;
  undefined *puVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  char in_wzr;
  char *pcVar31;
  char ******ppppppcVar32;
  byte bVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  char ****ppppcStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  uint uStack_430;
  undefined4 uStack_42c;
  char *****pppppcStack_428;
  byte *pbStack_420;
  long lStack_418;
  char *****pppppcStack_410;
  byte *pbStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined4 uStack_3f0;
  char *****pppppcStack_3e0;
  byte *pbStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_3b9 [9];
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 uStack_399;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  char *****pppppcStack_380;
  char *****pppppcStack_378;
  ulong uStack_370;
  byte *****pppppbStack_368;
  byte bStack_360;
  byte bStack_35f;
  undefined2 uStack_35e;
  undefined4 uStack_35c;
  undefined8 uStack_358;
  char *pcStack_350;
  char ******ppppppcStack_348;
  char **ppcStack_340;
  char *pcStack_338;
  byte bStack_208;
  byte bStack_207;
  undefined2 uStack_206;
  undefined4 uStack_204;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  char ******ppppppcStack_1f0;
  undefined4 uStack_ac;
  byte *****pppppbStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char **ppcStack_90;
  undefined *puStack_88;
  char *pcStack_80;
  char ******ppppppcStack_78;
  
  bVar10 = *param_3;
  if (1 < bVar10) {
    if (bVar10 != 2) {
      if (bVar10 != 3) {
        puVar17 = (undefined2 *)*param_2;
        *puVar17 = 0x101;
        *(undefined4 *)(puVar17 + 2) = 0;
        goto LAB_1007fc700;
      }
      auStack_3b9[0] = param_3[1];
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
          ((bVar10 = bRam000000010b636798, bRam000000010b636798 - 1 < 2 ||
           ((bRam000000010b636798 != 0 &&
            (bVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
                                ), unaff_x22 = param_3, bVar10 != 0)))))) &&
         (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
                              ,bVar10), iVar11 != 0)) {
        ppppppcStack_1f0 =
             (char ******)
             (
             ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
             + 0x30);
        pppppcStack_410 = (char *****)auStack_3b9;
        pbStack_408 = &DAT_1011dd6dc;
        pppppcStack_378 = (char *****)&pppppcStack_410;
        pppppcStack_380 = (char *****)s_connection__poll__user_error__108ac7c56;
        pppppbStack_a8 = (byte *****)&pppppcStack_380;
        uStack_a0 = &UNK_10b208fd0;
        uStack_200 = (char ******)&pppppbStack_a8;
        bStack_208 = 1;
        bStack_207 = 0;
        uStack_206 = 0;
        uStack_204 = 0;
        pbStack_1f8 = (byte *)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
                   ,&bStack_208);
        lVar24 = 
        ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
        ;
        ppppppcVar23 = uStack_200;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pcStack_350 = *(char **)(
                                  ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
                                  + 0x28);
          bStack_360 = 4;
          bStack_35f = 0;
          uStack_35e = 0;
          uStack_35c = 0;
          uStack_358._0_4_ =
               (undefined4)
               *(undefined8 *)
                (
                ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
                + 0x20);
          uStack_358._4_4_ =
               (undefined4)
               ((ulong)*(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
                        + 0x20) >> 0x20);
          unaff_x22 = pbRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = &UNK_10b3c24c8;
          }
          puVar25 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar25 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(unaff_x22 + 0x18))(puVar25,&bStack_360);
          ppppppcVar23 = uStack_200;
          if (iVar11 != 0) {
            pbVar16 = &bStack_360;
LAB_1007fc414:
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar24,puVar25,unaff_x22,pbVar16,&bStack_208);
            ppppppcVar23 = uStack_200;
          }
        }
      }
      else {
        lVar24 = 
        ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
        ;
        ppppppcVar23 = (char ******)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (ppppppcVar23 = (char ******)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200),
           3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_3b0 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
                        + 0x20);
          uStack_3a8 = *(undefined8 *)
                        (
                        ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
                        + 0x28);
          auStack_3b9._1_8_ = 4;
          unaff_x22 = pbRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = &UNK_10b3c24c8;
          }
          puVar25 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar25 = &UNK_109adfc03;
          }
          iVar11 = (**(code **)(unaff_x22 + 0x18))(puVar25,auStack_3b9 + 1);
          ppppppcVar23 = (char ******)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
          if (iVar11 != 0) {
            ppppppcStack_1f0 =
                 (char ******)
                 (
                 ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17hd7c9a36c0bec122aE
                 + 0x30);
            bStack_360 = (byte)auStack_3b9;
            bStack_35f = (byte)((ulong)auStack_3b9 >> 8);
            uStack_35e = (undefined2)((ulong)auStack_3b9 >> 0x10);
            uStack_35c = (undefined4)((ulong)auStack_3b9 >> 0x20);
            uStack_358._0_4_ = 0x11dd6dc;
            uStack_358._4_4_ = 1;
            pbStack_408 = &bStack_360;
            pppppcStack_410 = (char *****)s_connection__poll__user_error__108ac7c56;
            pppppcStack_380 = (char *****)&pppppcStack_410;
            pppppcStack_378 = (char *****)&UNK_10b208fd0;
            uStack_200 = &pppppcStack_380;
            bStack_208 = 1;
            bStack_207 = 0;
            uStack_206 = 0;
            uStack_204 = 0;
            pbStack_1f8 = (byte *)0x1;
            pbVar16 = auStack_3b9 + 1;
            goto LAB_1007fc414;
          }
        }
      }
      uStack_200._4_4_ = (undefined4)((ulong)ppppppcVar23 >> 0x20);
      uStack_200._0_4_ = SUB84(ppppppcVar23,0);
      puVar29 = *(undefined8 **)(param_3 + 8);
      uVar34 = *(undefined8 *)param_3;
      ppppppcVar32 = *(char *******)(param_3 + 0x18);
      pcVar31 = *(char **)(param_3 + 0x10);
      uStack_358._0_4_ = SUB84(puVar29,0);
      uStack_358._4_4_ = (undefined4)((ulong)puVar29 >> 0x20);
      bStack_360 = (byte)uVar34;
      bVar10 = bStack_360;
      bStack_35f = (byte)((ulong)uVar34 >> 8);
      bVar33 = bStack_35f;
      uStack_35e = (undefined2)((ulong)uVar34 >> 0x10);
      uStack_35c = (undefined4)((ulong)uVar34 >> 0x20);
      ppcStack_340 = *(char ***)(param_3 + 0x20);
      pcStack_350 = pcVar31;
      ppppppcStack_348 = ppppppcVar32;
      if (bStack_360 < 2) {
        if (bStack_360 == 0) {
          uStack_204 = uStack_35c;
          uStack_200._0_4_ = (undefined4)uStack_358;
LAB_1007fc4b8:
          bStack_207 = bStack_35f;
        }
        else {
          uStack_200 = ppppppcVar23;
          (*(code *)*puVar29)(&uStack_200,&ppcStack_340,pcVar31,ppppppcVar32);
          uStack_204 = uStack_35c;
          bStack_207 = bStack_35f;
        }
      }
      else {
        if (bStack_360 != 2) goto LAB_1007fc4b8;
        uStack_200 = (char ******)0x8000000000000000;
        if (puVar29 != (undefined8 *)0x8000000000000000) {
          if (ppppppcVar32 == (char ******)0x0) {
            unaff_x22 = (byte *)0x1;
            uStack_200 = ppppppcVar23;
          }
          else {
            uStack_200 = ppppppcVar23;
            unaff_x22 = (byte *)_malloc(ppppppcVar32);
            if (unaff_x22 == (byte *)0x0) {
              func_0x0001087c9084(1,ppppppcVar32);
              goto LAB_1007fca00;
            }
          }
          _memcpy(unaff_x22,pcVar31,ppppppcVar32);
          uStack_200 = ppppppcVar32;
        }
        bStack_207 = bVar33;
        pbStack_1f8 = unaff_x22;
        ppppppcStack_1f0 = uStack_200;
      }
      bStack_208 = bVar10;
      FUN_1008103e8(param_2[4],param_2[5],&bStack_208);
      goto LAB_1007fc798;
    }
    uStack_399 = param_3[1];
    lVar24 = *(long *)(param_3 + 8);
    pcVar31 = *(char **)(param_3 + 0x10);
    ppppppcVar23 = *(char *******)(param_3 + 0x18);
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
      if (((1 < bRam000000010b636780 - 1) &&
          ((unaff_x23 = &
                        __ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
           , bRam000000010b636780 == 0 ||
           (cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
                              ),
           unaff_x23 = &
                       __ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
           , cVar9 == '\0')))) ||
         (iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
                             ),
         unaff_x23 = &
                     __ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
         , iVar11 == 0)) goto LAB_1007fc11c;
      ppppppcStack_1f0 =
           (char ******)
           (
           ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
           + 0x30);
      pppppcStack_410 = (char *****)&uStack_399;
      pbStack_408 = &DAT_10112a694;
      pppppcStack_378 = (char *****)&pppppcStack_410;
      pppppcStack_380 = (char *****)s_Connection__poll__IO_error__108ac7c37;
      pppppbStack_a8 = (byte *****)&pppppcStack_380;
      uStack_a0 = &UNK_10b208fd0;
      uStack_200 = (char ******)&pppppbStack_a8;
      bStack_208 = 1;
      bStack_207 = 0;
      uStack_206 = 0;
      uStack_204 = 0;
      pbStack_1f8 = (byte *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
                 ,&bStack_208);
      puVar25 = 
      ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pcStack_350 = *(char **)(
                                ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
                                + 0x28);
        bStack_360 = 4;
        bStack_35f = 0;
        uStack_35e = 0;
        uStack_35c = 0;
        uStack_358._0_4_ =
             (undefined4)
             *(undefined8 *)
              (
              ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
              + 0x20);
        uStack_358._4_4_ =
             (undefined4)
             ((ulong)*(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
                      + 0x20) >> 0x20);
        pbVar16 = pbRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          pbVar16 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(pbVar16 + 0x18))(puVar3,&bStack_360);
        unaff_x23 = puVar25;
        if (iVar11 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (puVar25,puVar3,pbVar16,&bStack_360,&bStack_208);
        }
      }
    }
    else {
LAB_1007fc11c:
      puVar25 = 
      ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
      ;
      uStack_200 = (char ******)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (uStack_200 = (char ******)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200),
         3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_390 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
                      + 0x20);
        uStack_388 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
                      + 0x28);
        uStack_398 = 4;
        pbVar16 = pbRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          pbVar16 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(pbVar16 + 0x18))(puVar3,&uStack_398);
        unaff_x23 = puVar25;
        if (iVar11 != 0) {
          ppppppcStack_1f0 =
               (char ******)
               (
               ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h71320b8bf0e0ea26E
               + 0x30);
          bStack_360 = (byte)&uStack_399;
          bStack_35f = (byte)((ulong)&uStack_399 >> 8);
          uStack_35e = (undefined2)((ulong)&uStack_399 >> 0x10);
          uStack_35c = (undefined4)((ulong)&uStack_399 >> 0x20);
          uStack_358._0_4_ = 0x112a694;
          uStack_358._4_4_ = 1;
          pbStack_408 = &bStack_360;
          pppppcStack_410 = (char *****)s_Connection__poll__IO_error__108ac7c37;
          pppppcStack_380 = (char *****)&pppppcStack_410;
          pppppcStack_378 = (char *****)&UNK_10b208fd0;
          uStack_200 = &pppppcStack_380;
          bStack_208 = 1;
          bStack_207 = 0;
          uStack_206 = 0;
          uStack_204 = 0;
          pbStack_1f8 = (byte *)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (puVar25,puVar3,pbVar16,&uStack_398,&bStack_208);
        }
      }
    }
    bVar10 = uStack_399;
    bStack_35f = uStack_399;
    uStack_358._0_4_ = (undefined4)lVar24;
    uStack_358._4_4_ = (undefined4)((ulong)lVar24 >> 0x20);
    bStack_360 = 2;
    pcStack_350 = pcVar31;
    ppppppcStack_348 = ppppppcVar23;
    if (lVar24 == -0x8000000000000000) {
      ppppppcStack_1f0 = (char ******)0x8000000000000000;
    }
    else {
      if (ppppppcVar23 == (char ******)0x0) {
        unaff_x23 = (undefined *)0x1;
      }
      else {
        unaff_x23 = (undefined *)_malloc(ppppppcVar23);
        if (unaff_x23 == (undefined *)0x0) {
          func_0x0001087c9084(1,ppppppcVar23);
LAB_1007fca00:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1007fca04);
          (*pcVar8)();
        }
      }
      _memcpy(unaff_x23,pcVar31,ppppppcVar23);
      ppppppcStack_1f0 = ppppppcVar23;
    }
    bStack_207 = bVar10;
    uStack_200._0_4_ = SUB84(ppppppcStack_1f0,0);
    uStack_200._4_4_ = (undefined4)((ulong)ppppppcStack_1f0 >> 0x20);
    bStack_208 = 2;
    pcVar31 = (char *)param_2[5];
    pbStack_1f8 = unaff_x23;
    FUN_1008103e8(param_2[4],pcVar31,&bStack_208);
    if (*pcVar31 == '\0') {
      *pcVar31 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar31,extraout_x1_04,1000000000);
    }
    lVar24 = *(long *)(pcVar31 + 0x20);
    if (*pcVar31 == '\x01') {
      *pcVar31 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar31,0);
    }
    if (((lVar24 == 0) && (uStack_399 == 0x25)) &&
       (((*(byte *)(param_2 + 6) & 1) != 0 ||
        ((*(long *)param_2[2] != 0 && (*(int *)((long)param_2[2] + 0x24) == 0)))))) {
      puVar17 = (undefined2 *)*param_2;
      *puVar17 = 0x102;
      *(undefined4 *)(puVar17 + 2) = 0;
      *(undefined1 *)param_1 = 4;
      if (bStack_360 != 2) {
        if (bStack_360 != 1) {
          return;
        }
        (**(code **)(CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) + 0x20))
                  (&ppcStack_340,pcStack_350,ppppppcStack_348);
        return;
      }
      if (CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) == -0x8000000000000000) {
        return;
      }
      if (CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) == 0) {
        return;
      }
      _free(pcStack_350);
      return;
    }
LAB_1007fc798:
    param_1[1] = CONCAT44(uStack_358._4_4_,(undefined4)uStack_358);
    *param_1 = CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(bStack_35f,bStack_360)));
    param_1[3] = ppppppcStack_348;
    param_1[2] = pcStack_350;
    param_1[4] = ppcStack_340;
    return;
  }
  if (bVar10 == 0) {
    uStack_430 = *(uint *)(param_3 + 4);
    uStack_42c = *(undefined4 *)(param_3 + 8);
    puVar29 = param_2;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) {
      puVar29 = (undefined8 *)(ulong)bRam000000010b636768;
      if (1 < bRam000000010b636768 - 1) {
        if (bRam000000010b636768 != 0) {
          bVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
                             );
          puVar29 = (undefined8 *)(ulong)bVar10;
          if (bVar10 != 0) goto LAB_1007fbe64;
        }
        goto LAB_1007fbbc0;
      }
LAB_1007fbe64:
      iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
                          ,puVar29);
      puVar29 = extraout_x1_01;
      if (iVar11 == 0) goto LAB_1007fbbc0;
      ppppppcStack_348 =
           (char ******)
           (
           ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
           + 0x30);
      bStack_208 = (byte)&uStack_430;
      bStack_207 = (byte)((ulong)&uStack_430 >> 8);
      uStack_206 = (undefined2)((ulong)&uStack_430 >> 0x10);
      uStack_204 = (undefined4)((ulong)&uStack_430 >> 0x20);
      uStack_200._0_4_ = 0x114d844;
      uStack_200._4_4_ = 1;
      pbStack_1f8 = (byte *)&uStack_42c;
      ppppppcStack_1f0 =
           (char ******)
           &
           __ZN86__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17hf5f8d7ddc269cbc2E
      ;
      pppppcStack_378 = (char *****)&bStack_208;
      pppppcStack_380 = (char *****)s_stream_error_w__reason__108ac7c19;
      pppppbStack_a8 = (byte *****)&pppppcStack_380;
      uStack_a0 = &UNK_10b208fd0;
      uStack_358 = (char ******)&pppppbStack_a8;
      bStack_360 = 1;
      bStack_35f = 0;
      uStack_35e = 0;
      uStack_35c = 0;
      pcStack_350 = (char *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
                 ,&bStack_360);
      lVar24 = 
      ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
      ;
      puVar29 = extraout_x1_02;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pbStack_408 = *(byte **)(
                                ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
                                + 0x20);
        lStack_400 = *(long *)(
                              ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
                              + 0x28);
        pppppcStack_410 = (char *****)0x5;
        pbVar16 = pbRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          pbVar16 = &UNK_10b3c24c8;
        }
        puVar25 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar25 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(pbVar16 + 0x18))(puVar25,&pppppcStack_410);
        puVar29 = extraout_x1_03;
        if (iVar11 == 0) goto LAB_1007fbf5c;
        goto LAB_1007fbcbc;
      }
    }
    else {
LAB_1007fbbc0:
      lVar24 = 
      ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
      ;
      uStack_358 = (char ******)CONCAT44(uStack_358._4_4_,(undefined4)uStack_358);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (uStack_358 = (char ******)CONCAT44(uStack_358._4_4_,(undefined4)uStack_358),
         4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pbStack_420 = *(byte **)(
                                ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
                                + 0x20);
        lStack_418 = *(long *)(
                              ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
                              + 0x28);
        pppppcStack_428 = (char *****)0x5;
        pbVar16 = pbRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          pbVar16 = &UNK_10b3c24c8;
        }
        puVar25 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar25 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(pbVar16 + 0x18))(puVar25,&pppppcStack_428);
        puVar29 = extraout_x1;
        if (iVar11 != 0) {
          ppppppcStack_348 =
               (char ******)
               (
               ___ZN14rama_http_core2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h0f09bd504b1d3fe6E
               + 0x30);
          bStack_208 = (byte)&uStack_430;
          bStack_207 = (byte)((ulong)&uStack_430 >> 8);
          uStack_206 = (undefined2)((ulong)&uStack_430 >> 0x10);
          uStack_204 = (undefined4)((ulong)&uStack_430 >> 0x20);
          uStack_200._0_4_ = 0x114d844;
          uStack_200._4_4_ = 1;
          pbStack_1f8 = (byte *)&uStack_42c;
          ppppppcStack_1f0 =
               (char ******)
               &
               __ZN86__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Debug_GT_3fmt17hf5f8d7ddc269cbc2E
          ;
          pppppcStack_378 = (char *****)&bStack_208;
          pppppcStack_380 = (char *****)s_stream_error_w__reason__108ac7c19;
          pppppbStack_a8 = (byte *****)&pppppcStack_380;
          uStack_a0 = &UNK_10b208fd0;
          uStack_358 = (char ******)&pppppbStack_a8;
          bStack_360 = 1;
          bStack_35f = 0;
          uStack_35e = 0;
          uStack_35c = 0;
          pcStack_350 = (char *)0x1;
          pbStack_408 = pbStack_420;
          pppppcStack_410 = pppppcStack_428;
          lStack_400 = lStack_418;
LAB_1007fbcbc:
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar24,puVar25,pbVar16,&pppppcStack_410,&bStack_360);
          puVar29 = extraout_x1_00;
        }
      }
    }
LAB_1007fbf5c:
    uVar5 = uStack_42c;
    uVar7 = uStack_430;
    uVar26 = (ulong)uStack_430;
    pcVar31 = (char *)param_2[4];
    pcVar4 = (char *)param_2[5];
    if (*pcVar31 == '\0') {
      *pcVar31 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar31,puVar29,1000000000)
      ;
    }
    pppppbVar1 = (byte *****)(pcVar31 + 0x1f0);
    pppppcVar15 = (char *****)(pcVar31 + 0x218);
    bStack_208 = (byte)uVar7;
    bStack_207 = (byte)(uVar7 >> 8);
    uStack_206 = (undefined2)(uVar7 >> 0x10);
    pppppcVar13 = (char *****)
                  FUN_105ab0488(*(undefined8 *)(pcVar31 + 0x250),*(undefined8 *)(pcVar31 + 600),
                                &bStack_208);
    lVar24 = 0;
    uVar14 = *(ulong *)(pcVar31 + 0x228);
    uVar19 = *(ulong *)(pcVar31 + 0x238);
    lVar20 = *(long *)(pcVar31 + 0x230);
    bVar10 = (byte)((ulong)pppppcVar13 >> 0x39);
    uVar21 = (ulong)pppppcVar13 & uVar19;
    uVar34 = *(undefined8 *)(lVar20 + uVar21);
    uVar2 = CONCAT17(-((byte)((ulong)uVar34 >> 0x38) == bVar10),
                     CONCAT16(-((byte)((ulong)uVar34 >> 0x30) == bVar10),
                              CONCAT15(-((byte)((ulong)uVar34 >> 0x28) == bVar10),
                                       CONCAT14(-((byte)((ulong)uVar34 >> 0x20) == bVar10),
                                                CONCAT13(-((byte)((ulong)uVar34 >> 0x18) == bVar10),
                                                         CONCAT12(-((byte)((ulong)uVar34 >> 0x10) ==
                                                                   bVar10),CONCAT11(-((byte)((ulong)
                                                  uVar34 >> 8) == bVar10),-((byte)uVar34 == bVar10))
                                                  )))))) & 0x8080808080808080;
    while( true ) {
      while (uVar2 == 0) {
        bVar33 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar34 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar34 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar34 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar34 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar34
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar34 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar34 >> 8) == -1),
                                                           -((char)uVar34 == -1)))))))),1);
        if ((bVar33 & 1) != 0) {
          pppppcStack_380 = pppppcVar15;
          pppppcStack_378 = pppppcVar13;
          uStack_370 = uVar26;
          pppppbStack_368 = pppppbVar1;
          if (uVar7 == 0) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b09f81,0x1f,&UNK_10b3fc510);
            goto LAB_1007fca00;
          }
          if (((uVar7 ^ (byte)pcVar31[0x60]) & 1) == 0) {
            if (((*(uint *)(pcVar31 + 0xd0) & 1) == 0) && (*(uint *)(pcVar31 + 0xd4) <= uVar7)) {
              *(uint *)(pcVar31 + 0xd0) = uVar7 + 2 >> 0x1f;
              *(uint *)(pcVar31 + 0xd4) = uVar7 + 2;
            }
          }
          else if (((*(uint *)(pcVar31 + 0x180) & 1) == 0) && (*(uint *)(pcVar31 + 0x184) <= uVar7))
          {
            *(uint *)(pcVar31 + 0x180) = uVar7 + 2 >> 0x1f;
            *(uint *)(pcVar31 + 0x184) = uVar7 + 2;
          }
          lVar24 = *(long *)(pcVar31 + 0xa0);
          if (lVar24 == 0) {
            bStack_208 = 0;
            bStack_207 = 0;
            uStack_206 = 0;
            uStack_204 = 0;
            uStack_200._0_4_ = 8;
            uStack_200._4_4_ = 0;
            goto LAB_1007fc4cc;
          }
          puVar29 = *(undefined8 **)(pcVar31 + 0x98);
          lVar27 = lVar24 << 5;
          lVar20 = _malloc(lVar27);
          if (lVar20 != 0) {
            lVar28 = 0;
            bStack_208 = (byte)lVar24;
            bStack_207 = (byte)((ulong)lVar24 >> 8);
            uStack_206 = (undefined2)((ulong)lVar24 >> 0x10);
            uStack_204 = (undefined4)((ulong)lVar24 >> 0x20);
            uStack_200._0_4_ = (undefined4)lVar20;
            uStack_200._4_4_ = (undefined4)((ulong)lVar20 >> 0x20);
            puVar30 = (undefined8 *)(lVar20 + 0x10);
            goto LAB_1007fc0e4;
          }
          func_0x0001087c9084(8,lVar27);
          goto LAB_1007fca00;
        }
        lVar24 = lVar24 + 8;
        uVar21 = uVar21 + lVar24 & uVar19;
        uVar34 = *(undefined8 *)(lVar20 + uVar21);
        uVar2 = CONCAT17(-((byte)((ulong)uVar34 >> 0x38) == bVar10),
                         CONCAT16(-((byte)((ulong)uVar34 >> 0x30) == bVar10),
                                  CONCAT15(-((byte)((ulong)uVar34 >> 0x28) == bVar10),
                                           CONCAT14(-((byte)((ulong)uVar34 >> 0x20) == bVar10),
                                                    CONCAT13(-((byte)((ulong)uVar34 >> 0x18) ==
                                                              bVar10),CONCAT12(-((byte)((ulong)
                                                  uVar34 >> 0x10) == bVar10),
                                                  CONCAT11(-((byte)((ulong)uVar34 >> 8) == bVar10),
                                                           -((byte)uVar34 == bVar10)))))))) &
                0x8080808080808080;
      }
      uVar18 = (uVar2 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar2 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      pppppbVar22 = (byte *****)
                    (uVar21 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3) & uVar19);
      uVar18 = *(ulong *)(lVar20 + -8 + (long)pppppbVar22 * -8);
      if (uVar14 <= uVar18) {
        FUN_107c05cd0(uVar18,uVar14,&UNK_10b4074f0);
        goto LAB_1007fca00;
      }
      lVar27 = *(long *)(pcVar31 + 0x220) + uVar18 * 0x10;
      if (uVar7 == *(uint *)(lVar27 + 8)) break;
      uVar2 = uVar2 - 1 & uVar2;
    }
    pppppcStack_380 = (char *****)0x0;
    uVar12 = *(undefined4 *)(lVar27 + 0xc);
    pppppcStack_378 = pppppcVar15;
    uStack_370 = uVar18;
    pppppbStack_368 = pppppbVar22;
    goto LAB_1007fc660;
  }
  uStack_448 = *(undefined8 *)(param_3 + 0x10);
  ppppcStack_450 = *(char *****)(param_3 + 8);
  uStack_438 = *(undefined8 *)(param_3 + 0x20);
  uStack_440 = *(undefined8 *)(param_3 + 0x18);
  uVar5 = *(undefined4 *)(param_3 + 4);
  bVar10 = param_3[1];
  pppppcVar15 = &ppppcStack_450;
  goto LAB_1007fc6fc;
  while( true ) {
    auVar35 = (**(code **)(puVar29[1] + 0x30))(*puVar29);
    lVar28 = lVar28 + 1;
    *(undefined1 (*) [16])(puVar30 + -2) = auVar35;
    puVar6 = puVar29 + 3;
    uVar34 = puVar29[2];
    puVar29 = puVar29 + 4;
    puVar30[1] = *puVar6;
    *puVar30 = uVar34;
    lVar27 = lVar27 + -0x20;
    puVar30 = puVar30 + 4;
    if (lVar24 == lVar28) break;
LAB_1007fc0e4:
    if (lVar27 == 0) break;
  }
LAB_1007fc4cc:
  pbStack_408 = (byte *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
  pppppcStack_410 =
       (char *****)CONCAT44(uStack_204,CONCAT22(uStack_206,CONCAT11(bStack_207,bStack_208)));
  lStack_400 = lVar24;
  __ZN14rama_http_core2h25proto7streams6stream6Stream7try_new17haca2a9786849580dE
            (&bStack_360,uVar26,0,0,&pppppcStack_410);
  if (CONCAT44(uStack_35c,CONCAT22(uStack_35e,CONCAT11(bStack_35f,bStack_360))) == 2) {
    uStack_ac = (undefined4)uStack_358;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) {
      if (1 < bRam000000010b636f60 - 1) {
        if (bRam000000010b636f60 != 0) {
          cVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
                            );
          if (cVar9 != '\0') goto LAB_1007fc53c;
        }
        goto LAB_1007fc7cc;
      }
LAB_1007fc53c:
      iVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (
                         ___ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
                         );
      if (iVar11 == 0) goto LAB_1007fc7cc;
      ppppppcStack_1f0 =
           (char ******)
           (
           ___ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
           + 0x30);
      pppppbStack_a8 = (byte *****)&uStack_ac;
      uStack_a0 = &
                  __ZN88__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Display_GT_3fmt17h9f21c62600986cccE
      ;
      ppppppcStack_78 = (char ******)&pppppbStack_a8;
      pcStack_80 = s__h2_streams__failed_to_create_ne_108ac82e8;
      ppcStack_90 = &pcStack_80;
      puStack_88 = &UNK_10b208fd0;
      uStack_200 = (char ******)&ppcStack_90;
      bStack_208 = 1;
      bStack_207 = 0;
      uStack_206 = 0;
      uStack_204 = 0;
      pbStack_1f8 = (byte *)0x1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
                 ,&bStack_208);
      lVar24 = 
      ___ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pbStack_408 = *(byte **)(
                                ___ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
                                + 0x20);
        lStack_400 = *(undefined8 *)
                      (
                      ___ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
                      + 0x28);
        pppppcStack_410 = (char *****)0x4;
        pbVar16 = pbRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          pbVar16 = &UNK_10b3c24c8;
        }
        puVar25 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar25 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(pbVar16 + 0x18))(puVar25,&pppppcStack_410);
        if (iVar11 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar24,puVar25,pbVar16,&pppppcStack_410,&bStack_208);
        }
      }
    }
    else {
LAB_1007fc7cc:
      lVar24 = 
      ___ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
      ;
      uStack_200 = (char ******)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (uStack_200 = (char ******)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200),
         3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_a0 = *(undefined **)
                     (
                     ___ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
                     + 0x20);
        uStack_98 = *(undefined8 *)
                     (
                     ___ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
                     + 0x28);
        pppppbStack_a8 = (byte *****)0x4;
        pbVar16 = pbRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          pbVar16 = &UNK_10b3c24c8;
        }
        puVar25 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar25 = &UNK_109adfc03;
        }
        iVar11 = (**(code **)(pbVar16 + 0x18))(puVar25,&pppppbStack_a8);
        if (iVar11 != 0) {
          ppppppcStack_1f0 =
               (char ******)
               (
               ___ZN14rama_http_core2h25proto7streams7streams5Inner10send_reset10__CALLSITE17h7f4c2a18def8d421E
               + 0x30);
          pppppcStack_410 = (char *****)&uStack_ac;
          pbStack_408 = &
                        __ZN88__LT_rama_http_types__proto__h2__frame__reason__Reason_u20_as_u20_core__fmt__Display_GT_3fmt17h9f21c62600986cccE
          ;
          ppppppcStack_78 = &pppppcStack_410;
          pcStack_80 = s__h2_streams__failed_to_create_ne_108ac82e8;
          ppcStack_90 = &pcStack_80;
          puStack_88 = &UNK_10b208fd0;
          uStack_200 = (char ******)&ppcStack_90;
          bStack_208 = 1;
          bStack_207 = 0;
          uStack_206 = 0;
          uStack_204 = 0;
          pbStack_1f8 = (byte *)0x1;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar24,puVar25,pbVar16,&pppppbStack_a8,&bStack_208);
        }
      }
    }
    uStack_3f0 = uStack_ac;
    pppppcStack_410 = (char *****)&UNK_10b209220;
    pbStack_408 = (byte *)0x1;
    lStack_400 = 0;
    uStack_3f8 = 0;
  }
  else {
    _memcpy(&bStack_208,&bStack_360,0x158);
    uVar12 = __ZN14rama_http_core2h25proto7streams5store11VacantEntry6insert17h42a5532dea9c5a3bE
                       (&pppppcStack_380,&bStack_208);
    uVar14 = extraout_x1_05;
    uVar26 = extraout_x1_05;
LAB_1007fc660:
    uStack_a0 = (undefined *)CONCAT44((int)uVar26,uVar12);
    pppppbStack_a8 = pppppbVar1;
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar4,uVar14,1000000000);
    }
    pcStack_338 = pcVar4 + 8;
    pcStack_80 = (char *)CONCAT44(pcStack_80._4_4_,uVar5);
    ppcStack_90 = (char **)CONCAT71(ppcStack_90._1_7_,1);
    uStack_358 = (char ******)(pcVar31 + 0xa8);
    pcStack_350 = pcVar31 + 0x180;
    ppppppcStack_348 = (char ******)(pcVar31 + 0x170);
    bStack_360 = (byte)&ppcStack_90;
    bStack_35f = (byte)((ulong)&ppcStack_90 >> 8);
    uStack_35e = (undefined2)((ulong)&ppcStack_90 >> 0x10);
    uStack_35c = (undefined4)((ulong)&ppcStack_90 >> 0x20);
    ppcStack_340 = &pcStack_80;
    FUN_10080ece8(&pppppcStack_410,pcVar31 + 8,&pppppbStack_a8,&bStack_360);
    if (*pcVar4 == '\x01') {
      *pcVar4 = in_wzr;
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar4,0);
    }
  }
  if (*pcVar31 == '\x01') {
    *pcVar31 = in_wzr;
    uVar5 = uStack_3f0;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar31,0);
    uVar5 = uStack_3f0;
  }
  if (pppppcStack_410 == (char *****)0x0) goto LAB_1007fc700;
  pppppcVar15 = (char *****)&pppppcStack_3e0;
  bVar10 = 1;
  uStack_3f0 = uVar5;
  pppppcStack_3e0 = pppppcStack_410;
  pbStack_3d8 = pbStack_408;
  lStack_3d0 = lStack_400;
  uStack_3c8 = uStack_3f8;
LAB_1007fc6fc:
  FUN_1007fb33c(param_2,uVar5,pppppcVar15,bVar10);
LAB_1007fc700:
  *(undefined1 *)param_1 = 4;
  return;
}

