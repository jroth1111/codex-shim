
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c2b46c(char *param_1,long param_2,undefined8 *param_3)

{
  ulong *******pppppppuVar1;
  ulong *******pppppppuVar2;
  ulong *******pppppppuVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  code *pcVar10;
  bool bVar11;
  char cVar12;
  byte bVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  ulong *******pppppppuVar18;
  ulong uVar19;
  ulong *******pppppppuVar20;
  undefined *puVar21;
  uint extraout_w1;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  ulong *******pppppppuVar28;
  ulong ******ppppppuVar29;
  ulong ******ppppppuVar30;
  ulong ******ppppppuVar31;
  ulong uVar32;
  ulong *******pppppppuVar33;
  long *plVar34;
  ulong *******pppppppuVar35;
  long lVar36;
  uint uVar37;
  ulong *******unaff_x23;
  ulong *******unaff_x25;
  undefined4 uVar38;
  long lVar39;
  ulong ******ppppppuVar40;
  undefined8 extraout_d0;
  undefined1 auVar41 [16];
  undefined8 extraout_var;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  ulong *******pppppppuStack_448;
  ulong *******pppppppuStack_440;
  byte bStack_3f4;
  ulong *******pppppppuStack_3c0;
  ulong *******pppppppuStack_3b8;
  ulong uStack_398;
  long *plStack_390;
  long lStack_388;
  undefined8 uStack_380;
  long lStack_378;
  ulong *******pppppppuStack_370;
  ulong *******pppppppuStack_368;
  ulong *******pppppppuStack_360;
  ulong *******pppppppuStack_358;
  ulong *******pppppppuStack_350;
  ulong *******pppppppuStack_348;
  ulong *******pppppppuStack_340;
  ulong *******pppppppuStack_338;
  undefined1 auStack_330 [8];
  ulong *******pppppppuStack_328;
  ulong *******pppppppuStack_320;
  ulong *******pppppppuStack_318;
  ulong *******pppppppuStack_310;
  ulong *******pppppppuStack_308;
  undefined1 uStack_300;
  ulong *******pppppppuStack_2f8;
  ulong *******pppppppuStack_2f0;
  ulong *******pppppppuStack_2e8;
  ulong *******pppppppuStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  ulong *******pppppppuStack_2c8;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  ulong *******pppppppuStack_2b8;
  ulong *******pppppppuStack_2b0;
  ulong *******pppppppuStack_2a8;
  ulong ******ppppppuStack_2a0;
  ulong *******pppppppuStack_298;
  ulong *******pppppppuStack_290;
  ulong *******pppppppuStack_288;
  ulong *******pppppppuStack_280;
  undefined4 uStack_278;
  ulong *******pppppppuStack_270;
  ulong *******pppppppuStack_268;
  ulong *******pppppppuStack_260;
  ulong *******pppppppuStack_258;
  char cStack_241;
  ulong *******pppppppuStack_240;
  ulong *******pppppppuStack_238;
  ulong *******pppppppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong ******ppppppuStack_218;
  ulong *******pppppppuStack_210;
  ulong *******pppppppuStack_208;
  ulong ******ppppppuStack_200;
  ulong *******pppppppuStack_1f8;
  undefined8 uStack_1f0;
  ulong *******pppppppuStack_1e8;
  ulong *******pppppppuStack_1e0;
  ulong *******pppppppuStack_1d8;
  undefined8 uStack_1d0;
  ulong ******ppppppuStack_1c8;
  ulong *******pppppppuStack_1c0;
  ulong *******pppppppuStack_1b8;
  ulong *******pppppppuStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  char *pcStack_1a0;
  ulong *******pppppppuStack_198;
  undefined8 uStack_b0;
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *******pppppppuStack_98;
  ulong *******pppppppuStack_90;
  undefined *puStack_88;
  ulong *******pppppppuStack_80;
  undefined4 uStack_78;
  uint uStack_74;
  
  if (*(ulong *)(param_2 + 0x3c0) == 2) {
    lStack_378 = *(long *)(param_2 + 0x3e0);
    uStack_398 = 2;
  }
  else {
    plVar34 = *(long **)(param_2 + 0x3c8);
    lVar39 = *(long *)(param_2 + 0x3d0);
    if ((*(ulong *)(param_2 + 0x3c0) & 1) == 0) {
      uStack_380 = (**(code **)(lVar39 + 0x70))(plVar34,param_2 + 0x3d8);
      lStack_378 = *(long *)(param_2 + 0x3e0);
      uStack_398 = 0;
      plVar27 = plVar34;
    }
    else {
      uVar22 = (**(code **)(lVar39 + 0x70))
                         ((long)plVar34 +
                          (*(long *)(lVar39 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                          param_2 + 0x3d8);
      lVar36 = *plVar34;
      *plVar34 = lVar36 + 1;
      if (lVar36 < 0) {
LAB_100c2daec:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100c2daf0);
        (*pcVar10)();
      }
      lStack_378 = *(long *)(param_2 + 0x3e0);
      uStack_398 = 1;
      plVar27 = (long *)((long)plVar34 + (*(long *)(lVar39 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10
                        );
      uStack_380 = uVar22;
    }
    plStack_390 = plVar34;
    lStack_388 = lVar39;
    (**(code **)(lVar39 + 0x60))(plVar27,&uStack_380);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_378 != 0)) {
    auStack_330 = *(undefined1 (*) [8])(lStack_378 + 0x10);
    pppppppuStack_328 = *(ulong ********)(lStack_378 + 0x18);
    uStack_1f0 = (ulong *******)auStack_330;
    pppppppuStack_1e8 = (ulong *******)&DAT_100c7b3a0;
    FUN_1011d7d74(&uStack_398,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&uStack_1f0);
  }
  pppppppuVar35 =
       (ulong *******)
       &__ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17he3d96b283f6320b5E;
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bRam000000010b6321b0 - 1 < 2 ||
       ((bRam000000010b6321b0 != 0 &&
        (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17he3d96b283f6320b5E
                            ), cVar12 != '\0')))) &&
      (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17he3d96b283f6320b5E
                          ), iVar15 != 0)))) {
    pppppppuStack_1d8 =
         ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17he3d96b283f6320b5E
         + 6;
    uStack_1f0 = (ulong *******)0x1;
    pppppppuStack_1e8 = (ulong *******)0x8;
    pppppppuStack_1e0 = (ulong *******)0x0;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (&pppppppuStack_370,
               ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17he3d96b283f6320b5E
               ,&uStack_1f0);
  }
  else {
    uStack_1f0 = (ulong *******)0x2;
    uStack_1d0 = 
    ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17he3d96b283f6320b5E;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      pppppppuStack_318 =
           ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17he3d96b283f6320b5E
           + 6;
      auStack_330 = (undefined1  [8])0x1;
      pppppppuStack_328 = (ulong *******)0x8;
      pppppppuStack_320 = (ulong *******)0x0;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&uStack_1f0,auStack_330);
    }
    pppppppuStack_368 = pppppppuStack_1e8;
    pppppppuStack_370 = uStack_1f0;
    pppppppuStack_358 = pppppppuStack_1d8;
    pppppppuStack_360 = pppppppuStack_1e0;
    pppppppuStack_350 = uStack_1d0;
  }
  if (pppppppuStack_370 != (ulong *******)0x2) {
    pppppppuVar20 = pppppppuStack_368;
    if (((ulong)pppppppuStack_370 & 1) != 0) {
      pppppppuVar20 =
           (ulong *******)
           ((long)pppppppuStack_368 + ((long)pppppppuStack_360[2] - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    (*(code *)pppppppuStack_360[0xc])(pppppppuVar20,&pppppppuStack_358);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (pppppppuStack_350 != (ulong *******)0x0)) {
    auStack_330 = (undefined1  [8])pppppppuStack_350[2];
    pppppppuStack_328 = (ulong *******)pppppppuStack_350[3];
    uStack_1f0 = (ulong *******)auStack_330;
    pppppppuStack_1e8 = (ulong *******)&DAT_100c7b3a0;
    FUN_1011d7d74(&pppppppuStack_370,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&uStack_1f0);
  }
  pppppppuVar20 = (ulong *******)(param_2 + 0x4c0);
  plVar34 = (long *)(param_2 + 0x4c8);
  pppppppuVar1 = (ulong *******)(param_2 + 0x4a0);
  pppppppuVar2 = (ulong *******)(param_2 + 0x4d8);
  pppppppuVar3 = (ulong *******)(param_2 + 1000);
  puVar25 = (undefined8 *)*param_3;
  pppppppuVar18 = uStack_b0;
LAB_100c2b6fc:
  do {
    while( true ) {
      uStack_b0 = pppppppuVar18;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b632180 - 1 < 2 ||
           ((bRam000000010b632180 != 0 &&
            (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
                                ), cVar12 != '\0')))))) &&
         (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
                             ), iVar15 != 0)) {
        pppppppuStack_318 =
             (ulong *******)
             (
             ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
             + 0x30);
        pppppppuStack_270 = (ulong *******)&pppppppuStack_2e0;
        pppppppuStack_268 = (ulong *******)&UNK_10b233640;
        pppppppuStack_328 = (ulong *******)&pppppppuStack_270;
        auStack_330 = (undefined1  [8])0x1;
        pppppppuStack_320 = (ulong *******)0x1;
        pppppppuStack_2e0 = pppppppuVar20;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
                   ,auStack_330);
        lVar39 = 
        ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppuStack_a8 =
               *(ulong ********)
                (
                ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
                + 0x20);
          pppppppuStack_a0 =
               *(ulong ********)
                (
                ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
                + 0x28);
          uStack_b0 = (ulong *******)0x5;
          pppppppuVar18 = pppppppuRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar18 = (ulong *******)&UNK_10b3c24c8;
          }
          pppppppuVar35 = pppppppuRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar35 = (ulong *******)&UNK_109adfc03;
          }
          iVar15 = (*(code *)pppppppuVar18[3])(pppppppuVar35,&uStack_b0);
          if (iVar15 != 0) {
            uStack_1d0 = *(ulong ********)(lVar39 + 0x60);
            ppppppuStack_1c8 = *(ulong *******)(lVar39 + 0x68);
            pppppppuStack_1e8 = *(ulong ********)(lVar39 + 0x50);
            pppppppuStack_1e0 = *(ulong ********)(lVar39 + 0x58);
            uStack_1f0 = (ulong *******)0x1;
            if (pppppppuStack_1e8 == (ulong *******)0x0) {
              uStack_1f0 = (ulong *******)0x2;
            }
            uStack_1a8 = *(undefined4 *)(lVar39 + 8);
            uStack_1a4 = *(undefined4 *)(lVar39 + 0xc);
            pppppppuStack_210 = (ulong *******)auStack_330;
            pppppppuStack_208 = (ulong *******)CONCAT71(pppppppuStack_208._1_7_,1);
            pppppppuStack_298 = (ulong *******)&pppppppuStack_210;
            pppppppuStack_290 = (ulong *******)&DAT_1061c2098;
            pppppppuStack_1d8 = (ulong *******)0x1;
            if (uStack_1d0 == (ulong *******)0x0) {
              pppppppuStack_1d8 = (ulong *******)0x2;
            }
            pppppppuStack_1b8 = pppppppuStack_a8;
            pppppppuStack_1c0 = uStack_b0;
            pppppppuStack_1b0 = pppppppuStack_a0;
            pcStack_1a0 = s__108b39f4f;
            pppppppuStack_198 = (ulong *******)&pppppppuStack_298;
            (*(code *)pppppppuVar18[4])(pppppppuVar35,&uStack_1f0);
          }
        }
      }
      else {
        lVar39 = 
        ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppuStack_340 =
               *(ulong ********)
                (
                ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
                + 0x20);
          pppppppuStack_338 =
               *(ulong ********)
                (
                ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
                + 0x28);
          pppppppuStack_348 = (ulong *******)0x5;
          pppppppuVar18 = pppppppuRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar18 = (ulong *******)&UNK_10b3c24c8;
          }
          pppppppuVar35 = pppppppuRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar35 = (ulong *******)&UNK_109adfc03;
          }
          iVar15 = (*(code *)pppppppuVar18[3])(pppppppuVar35,&pppppppuStack_348);
          if (iVar15 != 0) {
            pppppppuStack_318 =
                 (ulong *******)
                 (
                 ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1bffb6a32cb18652E
                 + 0x30);
            pppppppuStack_210 = (ulong *******)&pppppppuStack_270;
            pppppppuStack_208 = (ulong *******)&UNK_10b233640;
            pppppppuStack_328 = (ulong *******)&pppppppuStack_210;
            auStack_330 = (undefined1  [8])0x1;
            pppppppuStack_320 = (ulong *******)0x1;
            pppppppuStack_1b8 = pppppppuStack_340;
            pppppppuStack_1c0 = pppppppuStack_348;
            pppppppuStack_1b0 = pppppppuStack_338;
            uStack_1d0 = *(ulong ********)(lVar39 + 0x60);
            ppppppuStack_1c8 = *(ulong *******)(lVar39 + 0x68);
            pppppppuStack_1e8 = *(ulong ********)(lVar39 + 0x50);
            pppppppuStack_1e0 = *(ulong ********)(lVar39 + 0x58);
            uStack_1f0 = (ulong *******)0x1;
            if (pppppppuStack_1e8 == (ulong *******)0x0) {
              uStack_1f0 = (ulong *******)0x2;
            }
            uStack_1a8 = *(undefined4 *)(lVar39 + 8);
            uStack_1a4 = *(undefined4 *)(lVar39 + 0xc);
            pppppppuStack_298 = (ulong *******)auStack_330;
            pppppppuStack_290 = (ulong *******)CONCAT71(pppppppuStack_290._1_7_,1);
            uStack_b0 = (ulong *******)&pppppppuStack_298;
            pppppppuStack_a8 = (ulong *******)&DAT_1061c2098;
            pppppppuStack_1d8 = (ulong *******)0x1;
            if (uStack_1d0 == (ulong *******)0x0) {
              pppppppuStack_1d8 = (ulong *******)0x2;
            }
            pcStack_1a0 = s__108b39f4f;
            pppppppuStack_198 = (ulong *******)&uStack_b0;
            pppppppuStack_270 = pppppppuVar20;
            (*(code *)pppppppuVar18[4])(pppppppuVar35,&uStack_1f0);
          }
        }
      }
      if (*(char *)pppppppuVar20 == '\0') break;
      if (*(char *)pppppppuVar20 != '\x01') {
        uVar16 = *(uint *)(param_2 + 0x4c4);
        pppppppuVar35 = (ulong *******)(ulong)*(byte *)(param_2 + 0x4c1);
        pppppppuStack_1e8 = *(ulong ********)(param_2 + 0x4e0);
        uStack_1f0 = (ulong *******)*pppppppuVar2;
        pppppppuStack_1d8 = *(ulong ********)(param_2 + 0x4f0);
        pppppppuStack_1e0 = *(ulong ********)(param_2 + 0x4e8);
        uStack_1d0 = *(ulong ********)(param_2 + 0x4f8);
        *(undefined8 *)(param_2 + 0x4d8) = 0;
        if (uStack_1f0 == (ulong *******)0x0) {
          auStack_330 = (undefined1  [8])&UNK_10b209220;
          pppppppuStack_328 = (ulong *******)0x1;
          pppppppuStack_320 = (ulong *******)0x0;
          pppppppuStack_318 = (ulong *******)0x0;
          pppppppuStack_310 = (ulong *******)((ulong)pppppppuStack_310 & 0xffffffff00000000);
          pppppppuStack_a8 = (ulong *******)0x1;
          uStack_b0 = (ulong *******)&UNK_10b209220;
          pppppppuStack_98 = (ulong *******)0x0;
          pppppppuStack_a0 = (ulong *******)0x0;
          if (uVar16 == 0) {
LAB_100c2d624:
            cVar12 = '\x03';
          }
          else {
LAB_100c2d5b4:
            cVar12 = '\x01';
          }
          (*(code *)uStack_b0[4])(&pppppppuStack_98,pppppppuStack_a8,pppppppuStack_a0);
          pppppppuStack_3b8 = (ulong *******)0x0;
          pppppppuStack_3c0 = (ulong *******)0x0;
          unaff_x25 = (ulong *******)&UNK_10b209220;
          unaff_x23 = (ulong *******)0x1;
          uVar37 = uVar16;
          pppppppuVar18 = uStack_b0;
        }
        else {
          (*(code *)*uStack_1f0)(auStack_330,&pppppppuStack_1d8,pppppppuStack_1e8,pppppppuStack_1e0)
          ;
          uVar37 = uStack_1d0._4_4_;
          pppppppuStack_a8 = pppppppuStack_328;
          uStack_b0 = (ulong *******)auStack_330;
          pppppppuStack_98 = pppppppuStack_318;
          pppppppuStack_a0 = pppppppuStack_320;
          if (uStack_1f0 != (ulong *******)0x0) {
            (*(code *)uStack_1f0[4])(&pppppppuStack_1d8,pppppppuStack_1e8,pppppppuStack_1e0);
          }
          if (uVar16 == 0) {
            if (uVar37 == 0) goto LAB_100c2d624;
          }
          else if (uVar37 == 0) goto LAB_100c2d5b4;
          pppppppuVar35 = (ulong *******)0x2;
          cVar12 = '\x01';
          unaff_x23 = pppppppuStack_a8;
          unaff_x25 = uStack_b0;
          pppppppuStack_3c0 = pppppppuStack_a0;
          pppppppuVar18 = uStack_b0;
          pppppppuStack_3b8 = pppppppuStack_98;
        }
        goto joined_r0x000100c2d488;
      }
      uVar38 = *(undefined4 *)(param_2 + 0x4c4);
      bVar13 = *(byte *)(param_2 + 0x4c1);
      uVar37 = (uint)bVar13;
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b632198 - 1 < 2 ||
           ((bRam000000010b632198 != 0 &&
            (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
                                ), cVar12 != '\0')))))) &&
         (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
                             ), iVar15 != 0)) {
        pppppppuStack_318 =
             ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
             + 6;
        pppppppuStack_270 = (ulong *******)&UNK_108cb0764;
        pppppppuStack_268 = (ulong *******)0x3d;
        pppppppuStack_2e0 = (ulong *******)&pppppppuStack_270;
        pppppppuStack_2d8 = (ulong *******)&UNK_10b208fd0;
        pppppppuStack_328 = (ulong *******)&pppppppuStack_2e0;
        auStack_330 = (undefined1  [8])0x1;
        pppppppuStack_320 = (ulong *******)0x1;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
                   ,auStack_330);
        pppppppuVar18 =
             ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppuStack_a8 =
               (ulong *******)
               ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
               [4];
          pppppppuStack_a0 =
               (ulong *******)
               ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
               [5];
          uStack_b0 = (ulong *******)0x5;
          pppppppuVar4 = pppppppuRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar4 = (ulong *******)&UNK_10b3c24c8;
          }
          pppppppuVar35 = pppppppuRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar35 = (ulong *******)&UNK_109adfc03;
          }
          iVar15 = (*(code *)pppppppuVar4[3])(pppppppuVar35,&uStack_b0);
          unaff_x23 = pppppppuVar18;
          if (iVar15 != 0) {
            uStack_1d0 = (ulong *******)pppppppuVar18[0xc];
            ppppppuStack_1c8 = pppppppuVar18[0xd];
            pppppppuStack_1e8 = (ulong *******)pppppppuVar18[10];
            pppppppuStack_1e0 = (ulong *******)pppppppuVar18[0xb];
            uStack_1f0 = (ulong *******)0x1;
            if (pppppppuStack_1e8 == (ulong *******)0x0) {
              uStack_1f0 = (ulong *******)0x2;
            }
            uStack_1a8 = *(undefined4 *)(pppppppuVar18 + 1);
            uStack_1a4 = *(undefined4 *)((long)pppppppuVar18 + 0xc);
            pppppppuStack_210 = (ulong *******)auStack_330;
            pppppppuStack_208 = (ulong *******)CONCAT71(pppppppuStack_208._1_7_,1);
            pppppppuStack_298 = (ulong *******)&pppppppuStack_210;
            pppppppuStack_290 = (ulong *******)&DAT_1061c2098;
            pppppppuStack_1d8 = (ulong *******)0x1;
            if (uStack_1d0 == (ulong *******)0x0) {
              pppppppuStack_1d8 = (ulong *******)0x2;
            }
            pppppppuStack_1b8 = pppppppuStack_a8;
            pppppppuStack_1c0 = uStack_b0;
            pppppppuStack_1b0 = pppppppuStack_a0;
            pcStack_1a0 = s__108b39f4f;
            pppppppuStack_198 = (ulong *******)&pppppppuStack_298;
            (*(code *)pppppppuVar4[4])(pppppppuVar35,&uStack_1f0);
          }
        }
      }
      else {
        pppppppuVar18 =
             ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppuStack_2f0 =
               (ulong *******)
               ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
               [4];
          pppppppuStack_2e8 =
               (ulong *******)
               ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
               [5];
          pppppppuStack_2f8 = (ulong *******)0x5;
          pppppppuVar4 = pppppppuRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar4 = (ulong *******)&UNK_10b3c24c8;
          }
          pppppppuVar35 = pppppppuRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar35 = (ulong *******)&UNK_109adfc03;
          }
          iVar15 = (*(code *)pppppppuVar4[3])(pppppppuVar35,&pppppppuStack_2f8);
          unaff_x23 = pppppppuVar18;
          if (iVar15 != 0) {
            pppppppuStack_318 =
                 ___ZN2h25proto10connection27Connection_LT_T_C_P_C_B_GT_4poll10__CALLSITE17h1fd9683040814faeE
                 + 6;
            pppppppuStack_210 = (ulong *******)&UNK_108cb0764;
            pppppppuStack_208 = (ulong *******)0x3d;
            pppppppuStack_270 = (ulong *******)&pppppppuStack_210;
            pppppppuStack_268 = (ulong *******)&UNK_10b208fd0;
            pppppppuStack_328 = (ulong *******)&pppppppuStack_270;
            auStack_330 = (undefined1  [8])0x1;
            pppppppuStack_320 = (ulong *******)0x1;
            pppppppuStack_1b8 = pppppppuStack_2f0;
            pppppppuStack_1c0 = pppppppuStack_2f8;
            pppppppuStack_1b0 = pppppppuStack_2e8;
            uStack_1d0 = (ulong *******)pppppppuVar18[0xc];
            ppppppuStack_1c8 = pppppppuVar18[0xd];
            pppppppuStack_1e8 = (ulong *******)pppppppuVar18[10];
            pppppppuStack_1e0 = (ulong *******)pppppppuVar18[0xb];
            uStack_1f0 = (ulong *******)0x1;
            if (pppppppuStack_1e8 == (ulong *******)0x0) {
              uStack_1f0 = (ulong *******)0x2;
            }
            uStack_1a8 = *(undefined4 *)(pppppppuVar18 + 1);
            uStack_1a4 = *(undefined4 *)((long)pppppppuVar18 + 0xc);
            pppppppuStack_298 = (ulong *******)auStack_330;
            pppppppuStack_290 = (ulong *******)CONCAT71(pppppppuStack_290._1_7_,1);
            uStack_b0 = (ulong *******)&pppppppuStack_298;
            pppppppuStack_a8 = (ulong *******)&DAT_1061c2098;
            pppppppuStack_1d8 = (ulong *******)0x1;
            if (uStack_1d0 == (ulong *******)0x0) {
              pppppppuStack_1d8 = (ulong *******)0x2;
            }
            pcStack_1a0 = s__108b39f4f;
            pppppppuStack_198 = (ulong *******)&uStack_b0;
            (*(code *)pppppppuVar4[4])(pppppppuVar35,&uStack_1f0);
          }
        }
      }
      if ((*(byte *)(param_2 + 0x180) & 1) == 0) {
        auVar43 = FUN_100c13758(param_2,param_3);
        pppppppuVar18 = auVar43._8_8_;
        if ((auVar43._0_8_ & 1) == 0) {
          if (pppppppuVar18 == (ulong *******)0x0) {
            *(undefined1 *)(param_2 + 0x180) = 1;
            goto LAB_100c2c578;
          }
LAB_100c2d5c0:
          __ZN92__LT_h2__proto__error__Error_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h94272e5efd4a2f01E
                    (&uStack_1f0,pppppppuVar18);
          goto LAB_100c2d5cc;
        }
        goto LAB_100c2d480;
      }
LAB_100c2c578:
      if (*(int *)(param_2 + 0x18) == -1) {
        func_0x000108a07a20(&UNK_10b4cd2b8);
        goto LAB_100c2daec;
      }
      iVar15 = _shutdown(*(int *)(param_2 + 0x18),1);
      if (iVar15 == -1) {
        puVar17 = (uint *)___error();
        pppppppuVar18 = (ulong *******)((ulong)*puVar17 << 0x20 | 2);
        cVar12 = FUN_1060eda1c();
        pppppppuVar35 = pppppppuVar18;
        if (cVar12 != '\a') goto LAB_100c2d5c0;
      }
      *(undefined1 *)(param_2 + 0x4c0) = 2;
      *(byte *)(param_2 + 0x4c1) = bVar13;
      *(undefined4 *)(param_2 + 0x4c4) = uVar38;
      pppppppuVar18 = uStack_b0;
    }
    FUN_100c1ae54(&uStack_b0,param_2,param_3);
    pppppppuVar28 = pppppppuStack_98;
    pppppppuVar4 = pppppppuStack_a0;
    pppppppuVar18 = pppppppuStack_a8;
    if ((byte)uStack_b0 == 4) {
      lVar39 = *plVar34;
      pppppppuVar18 = (ulong *******)(lVar39 + 0x10);
      if (*(long *)(lVar39 + 0x10) == 0) {
        FUN_108854158(pppppppuVar18);
      }
      iVar15 = _pthread_mutex_lock();
      if (iVar15 != 0) goto LAB_100c2d868;
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) {
        bVar13 = 0;
        cVar12 = *(char *)(lVar39 + 0x18);
      }
      else {
        bVar13 = func_0x000108a82c0c();
        bVar13 = bVar13 ^ 1;
        cVar12 = *(char *)(lVar39 + 0x18);
      }
      if (cVar12 == '\0') {
        lVar36 = *(long *)(param_2 + 0x4d0);
        pppppppuVar4 = (ulong *******)(lVar36 + 0x10);
        if (*(long *)(lVar36 + 0x10) == 0) {
          FUN_108854158(pppppppuVar4);
        }
        iVar15 = _pthread_mutex_lock();
        if (iVar15 == 0) {
          if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
              0x7fffffffffffffff) == 0) {
            bStack_3f4 = 0;
            cVar12 = *(char *)(lVar36 + 0x18);
          }
          else {
            bStack_3f4 = func_0x000108a82c0c();
            bStack_3f4 = bStack_3f4 ^ 1;
            cVar12 = *(char *)(lVar36 + 0x18);
          }
          if (cVar12 == '\0') {
            iVar15 = *(int *)(lVar39 + 200);
            uVar37 = *(int *)(lVar39 + 0xcc) - iVar15;
            pppppppuVar35 = (ulong *******)(ulong)uVar37;
            pppppppuVar28 = unaff_x23;
            if ((uVar37 == 0 || *(int *)(lVar39 + 0xcc) < iVar15) || ((int)uVar37 < iVar15 / 2))
            goto LAB_100c2bcec;
            if ((*(long *)(param_2 + 0xf8) != 4) ||
               ((ulong)(*(long *)(param_2 + 0x150) - *(long *)(param_2 + 0x148)) <
                *(ulong *)(param_2 + 0x170))) {
              auVar43 = FUN_100c13758(param_2,param_3);
              pppppppuVar28 = auVar43._8_8_;
              if ((auVar43._0_8_ & 1) != 0) goto LAB_100c2c610;
              if (pppppppuVar28 == (ulong *******)0x0) {
                unaff_x23 = pppppppuVar28;
                if ((*(long *)(param_2 + 0xf8) == 4) &&
                   (*(ulong *)(param_2 + 0x170) <=
                    (ulong)(*(long *)(param_2 + 0x150) - *(long *)(param_2 + 0x148))))
                goto LAB_100c2bcb4;
                goto LAB_100c2c610;
              }
              goto LAB_100c2c670;
            }
LAB_100c2bcb4:
            uStack_1f0._1_7_ = (uint7)((ulong)uStack_1f0 >> 8) & 0xffffff;
            pppppppuStack_1e8 = (ulong *******)CONCAT44(pppppppuStack_1e8._4_4_,uVar37);
            uStack_1f0 = (ulong *******)CONCAT71(uStack_1f0._1_7_,7);
            cVar12 = FUN_100c0fe88(param_2 + 0x40,&uStack_1f0);
            if (cVar12 == '\r') {
              auVar44 = __ZN2h25proto7streams12flow_control11FlowControl10inc_window17hc6ae84f738c118ceE
                                  ((int *)(lVar39 + 200),pppppppuVar35);
              if ((auVar44._0_8_ & 1) == 0) {
LAB_100c2bcec:
                pppppppuStack_3c0 = (ulong *******)(lVar39 + 0x1d0);
                uVar16 = *(uint *)(lVar39 + 0xd0);
                lVar26 = *(long *)(param_2 + 0xf8);
                pppppppuVar33 = (ulong *******)(ulong)*(uint *)(lVar39 + 0xd4);
                uVar9 = *(uint *)(lVar39 + 0xd8);
                do {
                  uVar37 = (uint)pppppppuVar35;
                  if ((lVar26 != 4) ||
                     (unaff_x23 = pppppppuVar28,
                     (ulong)(*(long *)(param_2 + 0x150) - *(long *)(param_2 + 0x148)) <
                     *(ulong *)(param_2 + 0x170))) {
                    auVar43 = FUN_100c13758(param_2,param_3);
                    unaff_x23 = auVar43._8_8_;
                    if ((auVar43._0_8_ & 1) == 0) {
                      if (unaff_x23 != (ulong *******)0x0) {
                        pppppppuVar35 = (ulong *******)0x0;
                        goto joined_r0x000100c2c630;
                      }
                      pppppppuVar28 = unaff_x23;
                      if ((*(long *)(param_2 + 0xf8) == 4) &&
                         (*(ulong *)(param_2 + 0x170) <=
                          (ulong)(*(long *)(param_2 + 0x150) - *(long *)(param_2 + 0x148))))
                      goto LAB_100c2bd5c;
                    }
                    pppppppuVar35 = (ulong *******)0x1;
                    unaff_x23 = pppppppuVar28;
                    goto joined_r0x000100c2c630;
                  }
LAB_100c2bd5c:
                  if ((uVar16 & 1) == 0) goto LAB_100c2c5ec;
                  uVar38 = SUB84(pppppppuVar33,0);
                  if (pppppppuVar33 == (ulong *******)(ulong)*(uint *)(lVar39 + 0xdc) &&
                      uVar9 == *(uint *)(lVar39 + 0xe0)) {
                    auStack_330._4_4_ = uVar9;
                    auStack_330._0_4_ = uVar38;
                    pppppppuVar28 = *(ulong ********)(lVar39 + 0x1e0);
                    if (((pppppppuVar28 <= pppppppuVar33) ||
                        (plVar27 = (long *)(*(long *)(lVar39 + 0x1d8) + (long)pppppppuVar33 * 0x140)
                        , *plVar27 == 2)) || (*(uint *)((long)plVar27 + 0x124) != uVar9))
                    goto LAB_100c2d9a0;
                    if ((int)plVar27[0x1f] == 0) {
                      uVar16 = 0;
                      *(undefined4 *)(lVar39 + 0xd0) = 0;
                      unaff_x25 = pppppppuVar33;
                      uVar37 = uVar9;
                      goto LAB_100c2be1c;
                    }
                    __ZN4core9panicking5panic17h30f5ec71e3af4326E
                              (&UNK_108cc39d2,0x2c,&UNK_10b2337d0);
                    goto LAB_100c2daec;
                  }
                  auStack_330._4_4_ = uVar9;
                  auStack_330._0_4_ = uVar38;
                  if (((*(ulong ********)(lVar39 + 0x1e0) <= pppppppuVar33) ||
                      (plVar27 = (long *)(*(long *)(lVar39 + 0x1d8) + (long)pppppppuVar33 * 0x140),
                      *plVar27 == 2)) || (*(uint *)((long)plVar27 + 0x124) != uVar9)) {
LAB_100c2d9d4:
                    puVar23 = &UNK_10b3a3cc0;
LAB_100c2d9e4:
                    auStack_330._4_4_ = uVar9;
                    auStack_330._0_4_ = uVar38;
                    pppppppuStack_1e8 = (ulong *******)&DAT_10571bc44;
                    uStack_1f0 = (ulong *******)(auStack_330 + 4);
                    __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                              (s__dangling_store_key_for_stream_i_108b15a2c,&uStack_1f0,puVar23);
                    goto LAB_100c2daec;
                  }
                  uVar16 = *(uint *)(plVar27 + 0x1f);
                  uVar7 = *(uint *)((long)plVar27 + 0xfc);
                  uVar37 = *(uint *)(plVar27 + 0x20);
                  *(undefined4 *)(plVar27 + 0x1f) = 0;
                  if ((uVar16 & 1) == 0) {
                    func_0x000108a07a20(&UNK_10b2337b8);
                    goto LAB_100c2daec;
                  }
                  uVar16 = 1;
                  *(undefined4 *)(lVar39 + 0xd0) = 1;
                  *(uint *)(lVar39 + 0xd4) = uVar7;
                  *(uint *)(lVar39 + 0xd8) = uVar37;
                  pppppppuVar28 = *(ulong ********)(lVar39 + 0x1e0);
                  unaff_x25 = (ulong *******)(ulong)uVar7;
LAB_100c2be1c:
                  if (((pppppppuVar28 <= pppppppuVar33) ||
                      (plVar27 = (long *)(*(long *)(lVar39 + 0x1d8) + (long)pppppppuVar33 * 0x140),
                      *plVar27 == 2)) || (*(uint *)((long)plVar27 + 0x124) != uVar9))
                  goto LAB_100c2d9d4;
                  *(undefined1 *)((long)plVar27 + 0x137) = 0;
                  auStack_330._4_4_ = uVar9;
                  auStack_330._0_4_ = uVar38;
                  if (((*(ulong ********)(lVar39 + 0x1e0) <= pppppppuVar33) ||
                      (plVar27 = (long *)(*(long *)(lVar39 + 0x1d8) + (long)pppppppuVar33 * 0x140),
                      *plVar27 == 2)) || (*(uint *)((long)plVar27 + 0x124) != uVar9)) {
LAB_100c2d9a0:
                    puVar23 = &UNK_10b3a3ca8;
                    goto LAB_100c2d9e4;
                  }
                  lVar26 = plVar27[9];
                  pppppppuVar28 = unaff_x23;
                  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
                     (((bRam000000010b6324f8 - 1 < 2 ||
                       ((bRam000000010b6324f8 != 0 &&
                        (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                            (&
                                             __ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                                            ), cVar12 != '\0')))) &&
                      (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                          (
                                          ___ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                                          ), iVar15 != 0)))) {
                    if (((*(ulong ********)(lVar39 + 0x1e0) <= pppppppuVar33) ||
                        (plVar27 = (long *)(*(long *)(lVar39 + 0x1d8) + (long)pppppppuVar33 * 0x140)
                        , *plVar27 == 2)) || (*(uint *)((long)plVar27 + 0x124) != uVar9))
                    goto LAB_100c2d9a0;
                    pppppppuStack_2e0 = (ulong *******)((long)plVar27 + 0x124);
                    pppppppuStack_318 =
                         ___ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                         + 6;
                    pppppppuStack_2d8 = (ulong *******)&DAT_10114d844;
                    pppppppuStack_240 = (ulong *******)s__pending_window_updates____pop__s_108ab984b
                    ;
                    pppppppuStack_238 = (ulong *******)&pppppppuStack_2e0;
                    pppppppuStack_2b8 = (ulong *******)&pppppppuStack_240;
                    pppppppuStack_2b0 = (ulong *******)&UNK_10b208fd0;
                    pppppppuStack_328 = (ulong *******)&pppppppuStack_2b8;
                    auStack_330 = (undefined1  [8])0x1;
                    pppppppuStack_320 = (ulong *******)0x1;
                    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                              (___ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                               ,auStack_330);
                    pppppppuVar6 = 
                    ___ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      pppppppuStack_290 =
                           (ulong *******)
                           ___ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                           [4];
                      pppppppuStack_288 =
                           (ulong *******)
                           ___ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                           [5];
                      pppppppuStack_298 = (ulong *******)0x5;
                      pppppppuVar5 = pppppppuRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        pppppppuVar5 = (ulong *******)&UNK_10b3c24c8;
                      }
                      pppppppuVar35 = pppppppuRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        pppppppuVar35 = (ulong *******)&UNK_109adfc03;
                      }
                      iVar15 = (*(code *)pppppppuVar5[3])(pppppppuVar35,&pppppppuStack_298);
                      pppppppuVar28 = pppppppuVar6;
                      if (iVar15 != 0) {
                        uStack_1d0 = (ulong *******)pppppppuVar6[0xc];
                        ppppppuStack_1c8 = pppppppuVar6[0xd];
                        pppppppuStack_1e8 = (ulong *******)pppppppuVar6[10];
                        pppppppuStack_1e0 = (ulong *******)pppppppuVar6[0xb];
                        uStack_1f0 = (ulong *******)0x1;
                        if (pppppppuStack_1e8 == (ulong *******)0x0) {
                          uStack_1f0 = (ulong *******)0x2;
                        }
                        uStack_1a8 = *(undefined4 *)(pppppppuVar6 + 1);
                        uStack_1a4 = *(undefined4 *)((long)pppppppuVar6 + 0xc);
                        pppppppuStack_270 = (ulong *******)auStack_330;
                        pppppppuStack_268 = (ulong *******)CONCAT71(pppppppuStack_268._1_7_,1);
                        pppppppuStack_210 = (ulong *******)&pppppppuStack_270;
                        pppppppuStack_208 = (ulong *******)&DAT_1061c2098;
                        pppppppuStack_1d8 = (ulong *******)0x1;
                        if (uStack_1d0 == (ulong *******)0x0) {
                          pppppppuStack_1d8 = (ulong *******)0x2;
                        }
                        pppppppuStack_1b8 = pppppppuStack_290;
                        pppppppuStack_1c0 = pppppppuStack_298;
                        pppppppuStack_1b0 = pppppppuStack_288;
                        pcStack_1a0 = s__108b39f4f;
                        pppppppuStack_198 = (ulong *******)&pppppppuStack_210;
                        (*(code *)pppppppuVar5[4])(pppppppuVar35,&uStack_1f0);
                      }
                    }
                  }
                  else {
                    pppppppuVar6 = 
                    ___ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                    ;
                    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                       (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                      pppppppuStack_290 =
                           (ulong *******)
                           ___ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                           [4];
                      pppppppuStack_288 =
                           (ulong *******)
                           ___ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                           [5];
                      pppppppuStack_298 = (ulong *******)0x5;
                      pppppppuVar35 = pppppppuRam000000010b634c20;
                      if (lRam000000010b66fd20 != 2) {
                        pppppppuVar35 = (ulong *******)&UNK_10b3c24c8;
                      }
                      pppppppuVar28 = pppppppuRam000000010b634c18;
                      if (lRam000000010b66fd20 != 2) {
                        pppppppuVar28 = (ulong *******)&UNK_109adfc03;
                      }
                      iVar15 = (*(code *)pppppppuVar35[3])(pppppppuVar28,&pppppppuStack_298);
                      if (iVar15 != 0) {
                        if (((*(ulong ********)(lVar39 + 0x1e0) <= pppppppuVar33) ||
                            (plVar27 = (long *)(*(long *)(lVar39 + 0x1d8) +
                                               (long)pppppppuVar33 * 0x140), *plVar27 == 2)) ||
                           (*(uint *)((long)plVar27 + 0x124) != uVar9)) goto LAB_100c2d9a0;
                        pppppppuStack_2e0 = (ulong *******)((long)plVar27 + 0x124);
                        pppppppuStack_318 =
                             ___ZN2h25proto7streams4recv4Recv26send_stream_window_updates28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hf5a38ddc40bc5480E
                             + 6;
                        pppppppuStack_2d8 = (ulong *******)&DAT_10114d844;
                        pppppppuStack_240 =
                             (ulong *******)s__pending_window_updates____pop__s_108ab984b;
                        pppppppuStack_238 = (ulong *******)&pppppppuStack_2e0;
                        pppppppuStack_2b8 = (ulong *******)&pppppppuStack_240;
                        pppppppuStack_2b0 = (ulong *******)&UNK_10b208fd0;
                        pppppppuStack_328 = (ulong *******)&pppppppuStack_2b8;
                        auStack_330 = (undefined1  [8])0x1;
                        pppppppuStack_320 = (ulong *******)0x1;
                        uStack_1d0 = (ulong *******)pppppppuVar6[0xc];
                        ppppppuStack_1c8 = pppppppuVar6[0xd];
                        pppppppuStack_1e8 = (ulong *******)pppppppuVar6[10];
                        pppppppuStack_1e0 = (ulong *******)pppppppuVar6[0xb];
                        uStack_1f0 = (ulong *******)0x1;
                        if (pppppppuStack_1e8 == (ulong *******)0x0) {
                          uStack_1f0 = (ulong *******)0x2;
                        }
                        uStack_1a8 = *(undefined4 *)(pppppppuVar6 + 1);
                        uStack_1a4 = *(undefined4 *)((long)pppppppuVar6 + 0xc);
                        pppppppuStack_270 = (ulong *******)auStack_330;
                        pppppppuStack_268 = (ulong *******)CONCAT71(pppppppuStack_268._1_7_,1);
                        pppppppuStack_210 = (ulong *******)&pppppppuStack_270;
                        pppppppuStack_208 = (ulong *******)&DAT_1061c2098;
                        pppppppuStack_1d8 = (ulong *******)0x1;
                        if (uStack_1d0 == (ulong *******)0x0) {
                          pppppppuStack_1d8 = (ulong *******)0x2;
                        }
                        pppppppuStack_1b8 = pppppppuStack_290;
                        pppppppuStack_1c0 = pppppppuStack_298;
                        pppppppuStack_1b0 = pppppppuStack_288;
                        pcStack_1a0 = s__108b39f4f;
                        pppppppuStack_198 = (ulong *******)&pppppppuStack_210;
                        (*(code *)pppppppuVar35[4])(pppppppuVar28,&uStack_1f0);
                      }
                    }
                  }
                  if (((*(ulong ********)(lVar39 + 0x1e0) <= pppppppuVar33) ||
                      (plVar27 = (long *)(*(long *)(lVar39 + 0x1d8) + (long)pppppppuVar33 * 0x140),
                      *plVar27 == 2)) || (*(uint *)((long)plVar27 + 0x124) != uVar9))
                  goto LAB_100c2d9a0;
                  cVar12 = '\x06';
                  if (5 < *(byte *)(plVar27 + 10)) {
                    cVar12 = *(byte *)(plVar27 + 10) - 6;
                  }
                  if (cVar12 == '\x03') {
                    cVar12 = *(char *)((long)plVar27 + 0x52);
joined_r0x000100c2c2c0:
                    if (cVar12 == '\x01') {
                      iVar15 = (int)plVar27[0x14];
                      uVar7 = *(int *)((long)plVar27 + 0xa4) - iVar15;
                      pppppppuVar35 = (ulong *******)(ulong)uVar7;
                      if ((uVar7 != 0 && iVar15 <= *(int *)((long)plVar27 + 0xa4)) &&
                         (iVar15 / 2 <= (int)uVar7)) {
                        uStack_1f0 = (ulong *******)CONCAT44(uVar9,(undefined4)uStack_1f0);
                        pppppppuStack_1e8 = (ulong *******)CONCAT44(pppppppuStack_1e8._4_4_,uVar7);
                        uStack_1f0 = (ulong *******)CONCAT71(uStack_1f0._1_7_,7);
                        cVar12 = FUN_100c0fe88(param_2 + 0x40,&uStack_1f0);
                        if (cVar12 != '\r') {
                          uStack_1f0 = (ulong *******)CONCAT71(uStack_1f0._1_7_,cVar12);
                          puVar23 = &UNK_10b233758;
                          goto LAB_100c2d930;
                        }
                        if (((*(ulong ********)(lVar39 + 0x1e0) <= pppppppuVar33) ||
                            (plVar27 = (long *)(*(long *)(lVar39 + 0x1d8) +
                                               (long)pppppppuVar33 * 0x140), *plVar27 == 2)) ||
                           (*(uint *)((long)plVar27 + 0x124) != uVar9)) goto LAB_100c2d9d4;
                        auVar44 = __ZN2h25proto7streams12flow_control11FlowControl10inc_window17hc6ae84f738c118ceE
                                            (plVar27 + 0x14,pppppppuVar35);
                        if ((auVar44._0_8_ & 1) != 0) {
                          uStack_1f0 = (ulong *******)CONCAT44(uStack_1f0._4_4_,auVar44._8_4_);
                          puVar23 = &UNK_10b233770;
                          goto LAB_100c2d958;
                        }
                      }
                    }
                  }
                  else if (cVar12 == '\x04') {
                    cVar12 = *(char *)((long)plVar27 + 0x51);
                    goto joined_r0x000100c2c2c0;
                  }
                  pppppppuStack_1e8 = (ulong *******)((ulong)pppppppuVar33 | (ulong)uVar9 << 0x20);
                  uStack_1f0 = pppppppuStack_3c0;
                  __ZN2h25proto7streams6counts6Counts16transition_after17h9f59a27fc86d1418E
                            (lVar39 + 0x20,&uStack_1f0,(int)lVar26 != 1000000000);
                  lVar26 = *(long *)(param_2 + 0xf8);
                  pppppppuVar33 = unaff_x25;
                  uVar9 = uVar37;
                } while( true );
              }
              uStack_1f0 = (ulong *******)CONCAT44(uStack_1f0._4_4_,auVar44._8_4_);
              puVar23 = &UNK_10b2337a0;
LAB_100c2d958:
              puVar24 = &UNK_10b234f80;
              uVar22 = 0x1d;
              puVar21 = &UNK_108cc39b5;
            }
            else {
              uStack_1f0 = (ulong *******)CONCAT71(uStack_1f0._1_7_,cVar12);
              puVar23 = &UNK_10b233788;
LAB_100c2d930:
              puVar24 = &UNK_10b234fc0;
              uVar22 = 0x1b;
              puVar21 = &UNK_108cc399a;
            }
            func_0x000108a07a3c(puVar21,uVar22,&uStack_1f0,puVar24,puVar23);
          }
          else {
            pppppppuStack_1e8._1_7_ = (undefined7)((ulong)pppppppuStack_1e8 >> 8);
            pppppppuStack_1e8 = (ulong *******)CONCAT71(pppppppuStack_1e8._1_7_,bStack_3f4);
            uStack_1f0 = pppppppuVar4;
            func_0x000108a07a3c(&UNK_108cc408f,0x2b,&uStack_1f0,&UNK_10b235220,&UNK_10b233c38);
          }
        }
        else {
          FUN_108a81ad4();
        }
      }
      else {
        pppppppuStack_1e8._1_7_ = (undefined7)((ulong)pppppppuStack_1e8 >> 8);
        pppppppuStack_1e8 = (ulong *******)CONCAT71(pppppppuStack_1e8._1_7_,bVar13);
        uStack_1f0 = pppppppuVar18;
        func_0x000108a07a3c(&UNK_108cc408f,0x2b,&uStack_1f0,&UNK_10b235160,&UNK_10b233b00);
      }
      goto LAB_100c2daec;
    }
    unaff_x23 = *(ulong ********)(param_2 + 0x4c8);
    lVar39 = *(long *)(param_2 + 0x4d0);
    pppppppuVar35 = (ulong *******)(lVar39 + 0x10);
    unaff_x25 = unaff_x23 + 2;
    uStack_300 = 1;
    auStack_330 = (undefined1  [8])pppppppuVar20;
    pppppppuStack_328 = pppppppuVar3;
    pppppppuStack_320 = pppppppuVar2;
    pppppppuStack_318 = pppppppuVar1;
    pppppppuStack_310 = unaff_x25;
    pppppppuStack_308 = pppppppuVar35;
    if (1 < (byte)uStack_b0) goto LAB_100c2ca64;
    if ((byte)uStack_b0 == 0) {
      uStack_2c0 = uStack_b0._4_4_;
      uStack_2bc = SUB84(pppppppuStack_a8,0);
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
          ((bRam000000010b632120 - 1 < 2 ||
           ((bRam000000010b632120 != 0 &&
            (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
                                ), cVar12 != '\0')))))) &&
         (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
                             ), iVar15 != 0)) {
        pppppppuStack_98 =
             (ulong *******)
             (
             ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
             + 0x30);
        pppppppuStack_210 = (ulong *******)&UNK_108cc390f;
        pppppppuStack_208 = (ulong *******)0x19;
        uStack_228 = (ulong ******)&uStack_2c0;
        pppppppuStack_80 = (ulong *******)&uStack_2bc;
        uStack_1f0 = (ulong *******)&pppppppuStack_210;
        pppppppuStack_1e8 = (ulong *******)&UNK_10b208fd0;
        pppppppuStack_1e0 = (ulong *******)&uStack_228;
        pppppppuStack_1d8 = (ulong *******)&UNK_10b2335e0;
        uStack_1d0 = (ulong *******)&pppppppuStack_80;
        ppppppuStack_1c8 = (ulong ******)&UNK_10b233600;
        uStack_b0 = (ulong *******)0x1;
        pppppppuStack_a8 = (ulong *******)&uStack_1f0;
        pppppppuStack_a0 = (ulong *******)0x3;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
                   ,&uStack_b0);
        lVar36 = 
        ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppuStack_290 =
               *(ulong ********)
                (
                ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
                + 0x20);
          pppppppuStack_288 =
               *(ulong ********)
                (
                ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
                + 0x28);
          pppppppuStack_298 = (ulong *******)0x5;
          pppppppuVar18 = pppppppuRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar18 = (ulong *******)&UNK_10b3c24c8;
          }
          pppppppuVar4 = pppppppuRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar4 = (ulong *******)&UNK_109adfc03;
          }
          iVar15 = (*(code *)pppppppuVar18[3])(pppppppuVar4,&pppppppuStack_298);
          if (iVar15 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar36,pppppppuVar4,pppppppuVar18,&pppppppuStack_298,&uStack_b0);
          }
        }
      }
      else {
        lVar36 = 
        ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          pppppppuStack_2b0 =
               *(ulong ********)
                (
                ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
                + 0x20);
          pppppppuStack_2a8 =
               *(ulong ********)
                (
                ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
                + 0x28);
          pppppppuStack_2b8 = (ulong *******)0x5;
          pppppppuVar18 = pppppppuRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar18 = (ulong *******)&UNK_10b3c24c8;
          }
          pppppppuVar4 = pppppppuRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            pppppppuVar4 = (ulong *******)&UNK_109adfc03;
          }
          iVar15 = (*(code *)pppppppuVar18[3])(pppppppuVar4,&pppppppuStack_2b8);
          if (iVar15 != 0) {
            pppppppuStack_280 =
                 (ulong *******)
                 (
                 ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h3ed5d050be44d93dE
                 + 0x30);
            uStack_228 = (ulong ******)&UNK_108cc390f;
            uStack_220 = 0x19;
            ppppppuStack_2a0 = (ulong ******)&uStack_2c0;
            ppppppuStack_218 = (ulong ******)&uStack_2bc;
            uStack_b0 = (ulong *******)&uStack_228;
            pppppppuStack_a0 = &ppppppuStack_2a0;
            pppppppuStack_a8 = (ulong *******)&UNK_10b208fd0;
            pppppppuStack_90 = &ppppppuStack_218;
            pppppppuStack_98 = (ulong *******)&UNK_10b2335e0;
            puStack_88 = &UNK_10b233600;
            pppppppuStack_290 = (ulong *******)&uStack_b0;
            pppppppuStack_298 = (ulong *******)0x1;
            pppppppuStack_288 = (ulong *******)0x3;
            pppppppuStack_1b8 = pppppppuStack_2b0;
            pppppppuStack_1c0 = pppppppuStack_2b8;
            pppppppuStack_1b0 = pppppppuStack_2a8;
            uStack_1d0 = *(ulong ********)(lVar36 + 0x60);
            ppppppuStack_1c8 = *(ulong *******)(lVar36 + 0x68);
            pppppppuStack_1e8 = *(ulong ********)(lVar36 + 0x50);
            pppppppuStack_1e0 = *(ulong ********)(lVar36 + 0x58);
            uStack_1f0 = (ulong *******)0x1;
            if (pppppppuStack_1e8 == (ulong *******)0x0) {
              uStack_1f0 = (ulong *******)0x2;
            }
            uStack_1a8 = *(undefined4 *)(lVar36 + 8);
            uStack_1a4 = *(undefined4 *)(lVar36 + 0xc);
            pppppppuStack_80 = (ulong *******)&pppppppuStack_298;
            uStack_78 = CONCAT31(uStack_78._1_3_,1);
            pppppppuStack_210 = (ulong *******)&pppppppuStack_80;
            pppppppuStack_208 = (ulong *******)&DAT_1061c2098;
            pppppppuStack_1d8 = (ulong *******)0x1;
            if (uStack_1d0 == (ulong *******)0x0) {
              pppppppuStack_1d8 = (ulong *******)0x2;
            }
            pcStack_1a0 = s__108b39f4f;
            pppppppuStack_198 = (ulong *******)&pppppppuStack_210;
            (*(code *)pppppppuVar18[4])(pppppppuVar4,&uStack_1f0);
          }
        }
      }
      uVar38 = uStack_2bc;
      uVar16 = uStack_2c0;
      ppppppuVar40 = (ulong ******)(ulong)uStack_2c0;
      if (*unaff_x25 == (ulong ******)0x0) {
        FUN_108854158(unaff_x25);
      }
      iVar15 = _pthread_mutex_lock();
      if (iVar15 != 0) {
        FUN_108a81ad4();
        goto LAB_100c2daec;
      }
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) {
        bVar13 = 0;
        cVar12 = *(char *)(unaff_x23 + 3);
      }
      else {
        bVar13 = func_0x000108a82c0c();
        bVar13 = bVar13 ^ 1;
        cVar12 = *(char *)(unaff_x23 + 3);
      }
      if (cVar12 != '\0') {
        pppppppuStack_1e8._1_7_ = (undefined7)((ulong)pppppppuStack_1e8 >> 8);
        pppppppuStack_1e8 = (ulong *******)CONCAT71(pppppppuStack_1e8._1_7_,bVar13);
        uStack_1f0 = unaff_x25;
        func_0x000108a07a3c(&UNK_108cc408f,0x2b,&uStack_1f0,&UNK_10b235160,&UNK_10b2339e0);
        goto LAB_100c2daec;
      }
      pppppppuVar18 = unaff_x23 + 0x3a;
      pppppppuVar4 = unaff_x23 + 0x3f;
      uStack_1f0._4_4_ = (uint)((ulong)uStack_1f0 >> 0x20);
      uStack_1f0 = (ulong *******)CONCAT44(uStack_1f0._4_4_,uVar16);
      pppppppuVar28 = (ulong *******)FUN_105714a00(unaff_x23[0x46],unaff_x23[0x47],&uStack_1f0);
      lVar36 = 0;
      ppppppuVar30 = unaff_x23[0x43];
      ppppppuVar31 = unaff_x23[0x42];
      bVar14 = (byte)((ulong)pppppppuVar28 >> 0x39);
      uVar32 = (ulong)pppppppuVar28 & (ulong)ppppppuVar30;
      uVar22 = *(undefined8 *)((long)ppppppuVar31 + uVar32);
      uVar19 = CONCAT17(-((byte)((ulong)uVar22 >> 0x38) == bVar14),
                        CONCAT16(-((byte)((ulong)uVar22 >> 0x30) == bVar14),
                                 CONCAT15(-((byte)((ulong)uVar22 >> 0x28) == bVar14),
                                          CONCAT14(-((byte)((ulong)uVar22 >> 0x20) == bVar14),
                                                   CONCAT13(-((byte)((ulong)uVar22 >> 0x18) ==
                                                             bVar14),CONCAT12(-((byte)((ulong)uVar22
                                                                                      >> 0x10) ==
                                                                               bVar14),CONCAT11(-((
                                                  byte)((ulong)uVar22 >> 8) == bVar14),
                                                  -((byte)uVar22 == bVar14)))))))) &
               0x8080808080808080;
      while( true ) {
        while (uVar19 == 0) {
          bVar42 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar22 >> 0x38) == -1),
                                       CONCAT16(-((char)((ulong)uVar22 >> 0x30) == -1),
                                                CONCAT15(-((char)((ulong)uVar22 >> 0x28) == -1),
                                                         CONCAT14(-((char)((ulong)uVar22 >> 0x20) ==
                                                                   -1),CONCAT13(-((char)((ulong)
                                                  uVar22 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar22 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar22 >> 8) ==
                                                                     -1),-((char)uVar22 == -1)))))))
                                      ),1);
          if ((bVar42 & 1) != 0) {
            pppppppuStack_210 = pppppppuVar4;
            pppppppuStack_208 = pppppppuVar28;
            ppppppuStack_200 = ppppppuVar40;
            pppppppuStack_1f8 = pppppppuVar18;
            if (uVar16 == 0) {
              __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109a6e3e2,0x1f,&UNK_10b3a7160);
              goto LAB_100c2daec;
            }
            if (((uVar16 ^ *(byte *)(unaff_x23 + 0xf)) & 1) == 0) {
              if ((((ulong)unaff_x23[0x15] & 1) == 0) &&
                 (*(uint *)((long)unaff_x23 + 0xac) <= uVar16)) {
                *(uint *)(unaff_x23 + 0x15) = uVar16 + 2 >> 0x1f;
                *(uint *)((long)unaff_x23 + 0xac) = uVar16 + 2;
              }
            }
            else if ((((ulong)unaff_x23[0x24] & 1) == 0) &&
                    (*(uint *)((long)unaff_x23 + 0x124) <= uVar16)) {
              *(uint *)(unaff_x23 + 0x24) = uVar16 + 2 >> 0x1f;
              *(uint *)((long)unaff_x23 + 0x124) = uVar16 + 2;
            }
            __ZN2h25proto7streams6stream6Stream3new17h76de4913006692e0E
                      (&uStack_1f0,ppppppuVar40,0,0);
            uStack_78 = __ZN2h25proto7streams5store11VacantEntry6insert17hc84b670a5f03d5c0E
                                  (&pppppppuStack_210,&uStack_1f0);
            uVar16 = extraout_w1;
            goto LAB_100c2cf04;
          }
          lVar36 = lVar36 + 8;
          uVar32 = uVar32 + lVar36 & (ulong)ppppppuVar30;
          uVar22 = *(undefined8 *)((long)ppppppuVar31 + uVar32);
          uVar19 = CONCAT17(-((byte)((ulong)uVar22 >> 0x38) == bVar14),
                            CONCAT16(-((byte)((ulong)uVar22 >> 0x30) == bVar14),
                                     CONCAT15(-((byte)((ulong)uVar22 >> 0x28) == bVar14),
                                              CONCAT14(-((byte)((ulong)uVar22 >> 0x20) == bVar14),
                                                       CONCAT13(-((byte)((ulong)uVar22 >> 0x18) ==
                                                                 bVar14),CONCAT12(-((byte)((ulong)
                                                  uVar22 >> 0x10) == bVar14),
                                                  CONCAT11(-((byte)((ulong)uVar22 >> 8) == bVar14),
                                                           -((byte)uVar22 == bVar14)))))))) &
                   0x8080808080808080;
        }
        uVar8 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        pppppppuVar33 =
             (ulong *******)
             (uVar32 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & (ulong)ppppppuVar30);
        ppppppuVar29 = (ulong ******)ppppppuVar31[-1 - (long)pppppppuVar33];
        if (unaff_x23[0x41] <= ppppppuVar29) {
          func_0x000108a07bdc(ppppppuVar29,unaff_x23[0x41],&UNK_10b3ad158);
          goto LAB_100c2daec;
        }
        if (uVar16 == *(uint *)(unaff_x23[0x40] + (long)ppppppuVar29 * 2 + 1)) break;
        uVar19 = uVar19 - 1 & uVar19;
      }
      pppppppuStack_210 = (ulong *******)0x0;
      uStack_78 = *(undefined4 *)((long)unaff_x23[0x40] + (long)ppppppuVar29 * 0x10 + 0xc);
      pppppppuStack_208 = pppppppuVar4;
      ppppppuStack_200 = ppppppuVar29;
      pppppppuStack_1f8 = pppppppuVar33;
LAB_100c2cf04:
      pppppppuStack_80 = pppppppuVar18;
      uStack_74 = uVar16;
      if (*pppppppuVar35 == (ulong ******)0x0) {
        FUN_108854158(pppppppuVar35);
      }
      iVar15 = _pthread_mutex_lock();
      if (iVar15 != 0) {
        FUN_108a81ad4();
        goto LAB_100c2daec;
      }
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) {
        bVar14 = 0;
        cVar12 = *(char *)(lVar39 + 0x18);
      }
      else {
        bVar14 = func_0x000108a82c0c();
        bVar14 = bVar14 ^ 1;
        cVar12 = *(char *)(lVar39 + 0x18);
      }
      if (cVar12 != '\0') {
        uVar19 = (ulong)pppppppuStack_a8 >> 8;
        pppppppuStack_a8 = (ulong *******)CONCAT71((int7)uVar19,bVar14);
        uStack_b0 = pppppppuVar35;
        func_0x000108a07a3c(&UNK_108cc408f,0x2b,&uStack_b0,&UNK_10b235220,&UNK_10b233bd8);
        goto LAB_100c2daec;
      }
      puStack_88 = (undefined *)(lVar39 + 0x20);
      uVar19 = (ulong)uStack_228 >> 0x20;
      uStack_228 = (ulong ******)CONCAT44((int)uVar19,uVar38);
      uVar19 = (ulong)ppppppuStack_218 >> 8;
      ppppppuStack_218 = (ulong ******)CONCAT71((int7)uVar19,1);
      pppppppuStack_a8 = unaff_x23 + 0x10;
      pppppppuStack_a0 = unaff_x23 + 0x24;
      pppppppuStack_98 = unaff_x23 + 0x38;
      uStack_b0 = &ppppppuStack_218;
      pppppppuStack_90 = (ulong *******)&uStack_228;
      FUN_100c276cc(&pppppppuStack_298,unaff_x23 + 4,&pppppppuStack_80,&uStack_b0);
      if ((((bVar14 & 1) == 0) &&
          ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
           0x7fffffffffffffff) != 0)) && (uVar19 = func_0x000108a82c0c(), (uVar19 & 1) == 0)) {
        *(undefined1 *)(lVar39 + 0x18) = 1;
      }
      _pthread_mutex_unlock(*pppppppuVar35);
      if ((((bVar13 & 1) == 0) &&
          ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
           0x7fffffffffffffff) != 0)) && (uVar19 = func_0x000108a82c0c(), (uVar19 & 1) == 0)) {
        *(char *)(unaff_x23 + 3) = '\x01';
      }
      _pthread_mutex_unlock(*unaff_x25);
      pppppppuVar18 = uStack_b0;
      if (pppppppuStack_298 != (ulong *******)0x0) {
        pppppppuStack_268 = pppppppuStack_290;
        pppppppuStack_270 = pppppppuStack_298;
        pppppppuStack_258 = pppppppuStack_280;
        pppppppuStack_260 = pppppppuStack_288;
        FUN_100c1a544(auStack_330,uStack_278,&pppppppuStack_270,1);
        pppppppuVar18 = uStack_b0;
      }
    }
    else {
      pppppppuStack_2e0 = pppppppuStack_a8;
      pppppppuStack_2d8 = pppppppuStack_a0;
      pppppppuStack_2c8 = pppppppuStack_90;
      pppppppuStack_2d0 = pppppppuStack_98;
      FUN_100c1a544(auStack_330,uStack_b0._4_4_,&pppppppuStack_2e0);
      pppppppuVar18 = uStack_b0;
    }
  } while( true );
LAB_100c2c5ec:
  auVar43 = FUN_100c2013c(lVar39 + 0x128,param_3,lVar36 + 0x20,pppppppuStack_3c0,lVar39 + 0x20,
                          param_2);
  pppppppuVar28 = auVar43._8_8_;
  if ((auVar43._0_8_ & 1) == 0) {
    if (pppppppuVar28 != (ulong *******)0x0) {
LAB_100c2c670:
      pppppppuVar35 = (ulong *******)0x0;
      unaff_x23 = pppppppuVar28;
      goto joined_r0x000100c2c630;
    }
    auVar43 = (**(code **)*puVar25)(puVar25[1]);
    uVar37 = auVar43._8_4_;
    if (*(long *)(lVar39 + 0x1c0) != 0) {
      (**(code **)(*(long *)(lVar39 + 0x1c0) + 0x18))(*(undefined8 *)(lVar39 + 0x1c8));
    }
    *(undefined1 (*) [16])(lVar39 + 0x1c0) = auVar43;
    if (((bStack_3f4 & 1) == 0) &&
       ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) != 0)) {
      uVar19 = func_0x000108a82c0c();
      unaff_x23 = (ulong *******)0x0;
      pppppppuVar35 = (ulong *******)0x0;
      if ((uVar19 & 1) != 0) goto LAB_100c2c690;
      goto LAB_100c2d35c;
    }
    unaff_x23 = (ulong *******)0x0;
    pppppppuVar35 = (ulong *******)0x0;
  }
  else {
LAB_100c2c610:
    pppppppuVar35 = (ulong *******)0x1;
joined_r0x000100c2c630:
    if ((((bStack_3f4 & 1) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar19 = func_0x000108a82c0c(), (uVar19 & 1) == 0)) {
LAB_100c2d35c:
      *(undefined1 *)(lVar36 + 0x18) = 1;
    }
  }
LAB_100c2c690:
  _pthread_mutex_unlock(*pppppppuVar4);
  if ((((bVar13 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar19 = func_0x000108a82c0c(), (uVar19 & 1) == 0)) {
    *(undefined1 *)(lVar39 + 0x18) = 1;
  }
  _pthread_mutex_unlock(*pppppppuVar18);
  if ((int)pppppppuVar35 == 0) {
    if (unaff_x23 != (ulong *******)0x0) {
      __ZN92__LT_h2__proto__error__Error_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17h94272e5efd4a2f01E
                (&uStack_1f0,unaff_x23);
LAB_100c2d5cc:
      pppppppuVar35 = (ulong *******)((ulong)uStack_1f0 >> 8 & 0xff);
      unaff_x23 = pppppppuStack_1e0;
      unaff_x25 = pppppppuStack_1e8;
      uVar37 = uStack_1f0._4_4_;
      pppppppuStack_3c0 = pppppppuStack_1d8;
      pppppppuVar18 = uStack_b0;
      pppppppuStack_3b8 = uStack_1d0;
      cVar12 = (char)uStack_1f0;
      goto joined_r0x000100c2d488;
    }
    if (*pppppppuVar2 == (ulong ******)0x0) {
      cVar12 = '\x04';
      if (((*(byte *)(param_2 + 0x41c) & 1) != 0) || (*(int *)(param_2 + 0x410) == 0))
      goto LAB_100c2d480;
      pppppppuVar18 = uStack_b0;
      if (*(int *)(param_2 + 0x414) == 0x7fffffff) goto joined_r0x000100c2d488;
    }
    lVar39 = *plVar34;
    pppppppuVar35 = (ulong *******)(lVar39 + 0x10);
    if (*(long *)(lVar39 + 0x10) == 0) {
      FUN_108854158(pppppppuVar35);
    }
    iVar15 = _pthread_mutex_lock();
    if (iVar15 != 0) {
LAB_100c2d868:
      FUN_108a81ad4();
      goto LAB_100c2daec;
    }
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      bVar13 = 0;
      cVar12 = *(char *)(lVar39 + 0x18);
    }
    else {
      bVar13 = func_0x000108a82c0c();
      bVar13 = bVar13 ^ 1;
      cVar12 = *(char *)(lVar39 + 0x18);
    }
    if (cVar12 != '\0') {
      pppppppuStack_1e8._1_7_ = (undefined7)((ulong)pppppppuStack_1e8 >> 8);
      pppppppuStack_1e8 = (ulong *******)CONCAT71(pppppppuStack_1e8._1_7_,bVar13);
      uStack_1f0 = pppppppuVar35;
      func_0x000108a07a3c(&UNK_108cc408f,0x2b,&uStack_1f0,&UNK_10b235160,&UNK_10b233ad0);
      goto LAB_100c2daec;
    }
    if (*(long *)(lVar39 + 0x38) == 0) {
      bVar11 = *(long *)(lVar39 + 0x48) != 0;
    }
    else {
      bVar11 = true;
    }
    if ((((bVar13 & 1) == 0) &&
        ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
         0x7fffffffffffffff) != 0)) && (uVar19 = func_0x000108a82c0c(), (uVar19 & 1) == 0)) {
      *(undefined1 *)(lVar39 + 0x18) = 1;
    }
    _pthread_mutex_unlock(*pppppppuVar35);
    if (!bVar11) {
      uStack_1d0 = (ulong *******)(*plVar34 + 0x10);
      ppppppuStack_1c8 = (ulong ******)(*(long *)(param_2 + 0x4d0) + 0x10);
      pppppppuStack_1c0 = (ulong *******)CONCAT71(pppppppuStack_1c0._1_7_,1);
      uStack_1f0 = pppppppuVar20;
      pppppppuStack_1e8 = pppppppuVar3;
      pppppppuStack_1e0 = pppppppuVar2;
      pppppppuStack_1d8 = pppppppuVar1;
      uVar16 = FUN_100c29984(&uStack_1d0);
      pppppppuStack_310 = (ulong *******)(ulong)uVar16;
      auStack_330 = (undefined1  [8])&UNK_10b209220;
      pppppppuStack_328 = (ulong *******)0x1;
      pppppppuStack_320 = (ulong *******)0x0;
      pppppppuStack_318 = (ulong *******)0x0;
      __ZN2h25proto7go_away6GoAway11go_away_now17h55c1634ea022ebedE(pppppppuVar3,auStack_330);
      pppppppuVar18 = uStack_b0;
      goto LAB_100c2b6fc;
    }
  }
LAB_100c2d480:
  pppppppuVar18 = uStack_b0;
  cVar12 = '\x04';
  goto joined_r0x000100c2d488;
LAB_100c2ca64:
  if ((byte)uStack_b0 == 2) {
    cStack_241 = uStack_b0._1_1_;
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
        ((bRam000000010b632138 - 1 < 2 ||
         ((bRam000000010b632138 != 0 &&
          (cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
                              ), cVar12 != '\0')))))) &&
       (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
                           ), iVar15 != 0)) {
      pppppppuStack_98 =
           ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
           + 6;
      pppppppuStack_210 = (ulong *******)&UNK_108cc391b;
      pppppppuStack_208 = (ulong *******)0x35;
      pppppppuStack_80 = (ulong *******)&cStack_241;
      uStack_1f0 = (ulong *******)&pppppppuStack_210;
      pppppppuStack_1e8 = (ulong *******)&UNK_10b208fd0;
      pppppppuStack_1e0 = (ulong *******)&pppppppuStack_80;
      pppppppuStack_1d8 = (ulong *******)&UNK_10b233620;
      uStack_b0 = (ulong *******)0x1;
      pppppppuStack_a8 = (ulong *******)&uStack_1f0;
      pppppppuStack_a0 = (ulong *******)0x2;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
                 ,&uStack_b0);
      pppppppuVar33 =
           ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppuStack_290 =
             (ulong *******)
             ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
             [4];
        pppppppuStack_288 =
             (ulong *******)
             ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
             [5];
        pppppppuStack_298 = (ulong *******)0x4;
        unaff_x23 = pppppppuRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          unaff_x23 = (ulong *******)&UNK_10b3c24c8;
        }
        unaff_x25 = pppppppuRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          unaff_x25 = (ulong *******)&UNK_109adfc03;
        }
        iVar15 = (*(code *)unaff_x23[3])(unaff_x25,&pppppppuStack_298);
        if (iVar15 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (pppppppuVar33,unaff_x25,unaff_x23,&pppppppuStack_298,&uStack_b0);
        }
      }
    }
    else {
      pppppppuVar33 =
           ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppppuStack_238 =
             (ulong *******)
             ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
             [4];
        pppppppuStack_230 =
             (ulong *******)
             ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
             [5];
        pppppppuStack_240 = (ulong *******)0x4;
        pppppppuVar6 = pppppppuRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          pppppppuVar6 = (ulong *******)&UNK_10b3c24c8;
        }
        pppppppuVar5 = pppppppuRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          pppppppuVar5 = (ulong *******)&UNK_109adfc03;
        }
        iVar15 = (*(code *)pppppppuVar6[3])(pppppppuVar5,&pppppppuStack_240);
        unaff_x23 = pppppppuVar33;
        if (iVar15 != 0) {
          pppppppuStack_280 =
               ___ZN2h25proto10connection22DynConnection_LT_B_GT_19handle_poll2_result10__CALLSITE17h59067067fae5acd7E
               + 6;
          uStack_228 = (ulong ******)&UNK_108cc391b;
          uStack_220 = 0x35;
          ppppppuStack_218 = (ulong ******)&cStack_241;
          uStack_b0 = (ulong *******)&uStack_228;
          pppppppuStack_a0 = &ppppppuStack_218;
          pppppppuStack_a8 = (ulong *******)&UNK_10b208fd0;
          pppppppuStack_98 = (ulong *******)&UNK_10b233620;
          pppppppuStack_290 = (ulong *******)&uStack_b0;
          pppppppuStack_298 = (ulong *******)0x1;
          pppppppuStack_288 = (ulong *******)0x2;
          pppppppuStack_1b8 = pppppppuStack_238;
          pppppppuStack_1c0 = pppppppuStack_240;
          pppppppuStack_1b0 = pppppppuStack_230;
          uStack_1d0 = (ulong *******)pppppppuVar33[0xc];
          ppppppuStack_1c8 = pppppppuVar33[0xd];
          pppppppuStack_1e8 = (ulong *******)pppppppuVar33[10];
          pppppppuStack_1e0 = (ulong *******)pppppppuVar33[0xb];
          uStack_1f0 = (ulong *******)0x1;
          if (pppppppuStack_1e8 == (ulong *******)0x0) {
            uStack_1f0 = (ulong *******)0x2;
          }
          uStack_1a8 = *(undefined4 *)(pppppppuVar33 + 1);
          uStack_1a4 = *(undefined4 *)((long)pppppppuVar33 + 0xc);
          pppppppuStack_80 = (ulong *******)&pppppppuStack_298;
          uStack_78 = CONCAT31(uStack_78._1_3_,1);
          pppppppuStack_210 = (ulong *******)&pppppppuStack_80;
          pppppppuStack_208 = (ulong *******)&DAT_1061c2098;
          pppppppuStack_1d8 = (ulong *******)0x1;
          if (uStack_1d0 == (ulong *******)0x0) {
            pppppppuStack_1d8 = (ulong *******)0x2;
          }
          pcStack_1a0 = s__108b39f4f;
          pppppppuStack_198 = (ulong *******)&pppppppuStack_210;
          (*(code *)pppppppuVar6[4])(pppppppuVar5,&uStack_1f0);
        }
      }
    }
    cVar12 = cStack_241;
    uStack_b0 = (ulong *******)CONCAT71(CONCAT61(uStack_b0._2_6_,cStack_241),2);
    pppppppuVar33 = (ulong *******)0x8000000000000000;
    pppppppuStack_a8 = pppppppuVar18;
    pppppppuStack_a0 = pppppppuVar4;
    pppppppuStack_98 = pppppppuVar28;
    if (pppppppuVar18 != (ulong *******)0x8000000000000000) {
      if (pppppppuVar28 == (ulong *******)0x0) {
        pppppppuStack_440 = (ulong *******)0x1;
      }
      else {
        pppppppuStack_440 = (ulong *******)_malloc(pppppppuVar28);
        if (pppppppuStack_440 == (ulong *******)0x0) {
          func_0x0001087c9084(1,pppppppuVar28);
          goto LAB_100c2daec;
        }
      }
      _memcpy(pppppppuStack_440,pppppppuVar4,pppppppuVar28);
      pppppppuStack_448 = pppppppuVar28;
      pppppppuVar33 = pppppppuVar28;
    }
    pppppppuStack_1e0 = pppppppuStack_440;
    pppppppuStack_1d8 = pppppppuStack_448;
    uStack_1f0 = (ulong *******)CONCAT71(CONCAT61(uStack_1f0._2_6_,cVar12),2);
    pppppppuStack_1e8 = pppppppuVar33;
    FUN_100c29538(&pppppppuStack_310,&uStack_1f0);
    if (*pppppppuVar35 == (ulong ******)0x0) {
      FUN_108854158(pppppppuVar35);
    }
    iVar15 = _pthread_mutex_lock();
    if (iVar15 != 0) {
      FUN_108a81ad4();
      goto LAB_100c2daec;
    }
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      if (*(char *)(lVar39 + 0x18) != '\0') {
        bVar13 = 0;
LAB_100c2da48:
        pppppppuStack_1e8 = (ulong *******)CONCAT71(pppppppuStack_1e8._1_7_,bVar13);
        uStack_1f0 = pppppppuVar35;
        func_0x000108a07a3c(&UNK_108cc408f,0x2b,&uStack_1f0,&UNK_10b235220,&UNK_10b233ab8);
        goto LAB_100c2daec;
      }
      lVar36 = *(long *)(lVar39 + 0x38);
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) goto LAB_100c2d250;
LAB_100c2d3ec:
      uVar19 = func_0x000108a82c0c();
      if ((uVar19 & 1) == 0) {
        *(undefined1 *)(lVar39 + 0x18) = 1;
      }
LAB_100c2d3fc:
      _pthread_mutex_unlock(*pppppppuVar35);
      pppppppuVar18 = uStack_b0;
    }
    else {
      iVar15 = func_0x000108a82c0c();
      if (*(char *)(lVar39 + 0x18) != '\0') {
        bVar13 = (byte)iVar15 ^ 1;
        goto LAB_100c2da48;
      }
      lVar36 = *(long *)(lVar39 + 0x38);
      if (iVar15 == 0) goto LAB_100c2d3fc;
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) != 0) goto LAB_100c2d3ec;
LAB_100c2d250:
      _pthread_mutex_unlock(*pppppppuVar35);
      pppppppuVar18 = uStack_b0;
    }
    uStack_b0._0_1_ = (byte)pppppppuVar18;
    if ((lVar36 == 0) && (cStack_241 == '%')) {
      *(undefined2 *)(param_2 + 0x4c0) = 0x102;
      *(undefined4 *)(param_2 + 0x4c4) = 0;
      if ((byte)uStack_b0 != '\0') {
        uStack_b0 = pppppppuVar18;
        if ((byte)uStack_b0 == '\x01') {
          (*(code *)pppppppuStack_a8[4])(&pppppppuStack_90,pppppppuStack_a0,pppppppuStack_98);
          pppppppuVar18 = uStack_b0;
        }
        else if ((pppppppuStack_a8 != (ulong *******)0x8000000000000000) &&
                (pppppppuStack_a8 != (ulong *******)0x0)) {
          _free(pppppppuStack_a0);
          pppppppuVar18 = uStack_b0;
        }
      }
    }
    else if ((byte)uStack_b0 != '\x03') {
      pppppppuVar35 = (ulong *******)((ulong)pppppppuVar18 >> 8 & 0xff);
      uStack_b0._4_4_ = (uint)((ulong)pppppppuVar18 >> 0x20);
      unaff_x23 = pppppppuStack_a0;
      unaff_x25 = pppppppuStack_a8;
      uVar37 = uStack_b0._4_4_;
      pppppppuStack_3c0 = pppppppuStack_98;
      pppppppuStack_3b8 = pppppppuStack_90;
      cVar12 = (byte)uStack_b0;
joined_r0x000100c2d488:
      uStack_b0 = pppppppuVar18;
      if (pppppppuStack_370 != (ulong *******)0x2) {
        pppppppuVar20 = pppppppuStack_368;
        if (((ulong)pppppppuStack_370 & 1) != 0) {
          pppppppuVar20 =
               (ulong *******)
               ((long)pppppppuStack_368 +
               ((long)*(ulong *******)((long)pppppppuStack_360 + 0x10) - 1U & 0xfffffffffffffff0) +
               0x10);
        }
        (*(code *)*(ulong *******)((long)pppppppuStack_360 + 0x68))
                  (pppppppuVar20,&pppppppuStack_358);
      }
      auVar43._8_8_ = pppppppuStack_3b8;
      auVar43._0_8_ = pppppppuStack_3c0;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (pppppppuStack_350 != (ulong *******)0x0)) {
        auStack_330 = (undefined1  [8])pppppppuStack_350[2];
        pppppppuStack_328 = (ulong *******)pppppppuStack_350[3];
        uStack_1f0 = (ulong *******)auStack_330;
        pppppppuStack_1e8 = (ulong *******)&DAT_100c7b3a0;
        FUN_1011d7d74(&pppppppuStack_370,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&uStack_1f0);
      }
      FUN_100dddd8c(&pppppppuStack_370);
      if (uStack_398 != 2) {
        plVar34 = plStack_390;
        if ((uStack_398 & 1) != 0) {
          plVar34 = (long *)((long)plStack_390 +
                            (*(long *)(lStack_388 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
        }
        (**(code **)(lStack_388 + 0x68))(plVar34,&uStack_380);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_378 != 0))
      {
        auStack_330 = *(undefined1 (*) [8])(lStack_378 + 0x10);
        pppppppuStack_328 = *(ulong ********)(lStack_378 + 0x18);
        uStack_1f0 = (ulong *******)auStack_330;
        pppppppuStack_1e8 = (ulong *******)&DAT_100c7b3a0;
        FUN_1011d7d74(&uStack_398,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&uStack_1f0);
      }
      auVar41 = FUN_100dddd8c(&uStack_398);
      if (cVar12 == '\x03') {
        cVar12 = '\x05';
      }
      else {
        if (cVar12 != '\x04') {
          if (cVar12 == '\0') {
            unaff_x25 = (ulong *******)((ulong)unaff_x25 & 0xffffffff);
            auVar43 = auVar41;
          }
          else if (cVar12 != '\x01') {
            if (unaff_x25 == (ulong *******)0x8000000000000000) {
              unaff_x25 = (ulong *******)((ulong)((uint)pppppppuVar35 & 0xff) << 0x20 | 3);
            }
            else {
              uStack_1f0 = unaff_x25;
              pppppppuStack_1e8 = unaff_x23;
              pppppppuStack_1e0 = pppppppuStack_3c0;
              unaff_x25 = (ulong *******)
                          __ZN3std2io5error5Error3new17h29bf53227769a2d6E(pppppppuVar35,&uStack_1f0)
              ;
              auVar41._8_8_ = extraout_var;
              auVar41._0_8_ = extraout_d0;
            }
            cVar12 = '\x04';
            auVar43 = auVar41;
          }
          *param_1 = cVar12;
          param_1[1] = (char)pppppppuVar35;
          *(uint *)(param_1 + 4) = uVar37;
          *(ulong ********)(param_1 + 8) = unaff_x25;
          *(ulong ********)(param_1 + 0x10) = unaff_x23;
          *(undefined1 (*) [16])(param_1 + 0x18) = auVar43;
          return;
        }
        cVar12 = '\x06';
      }
      *param_1 = cVar12;
      return;
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x4c0) = 0x101;
    *(undefined4 *)(param_2 + 0x4c4) = 0;
    pppppppuVar18 = uStack_b0;
  }
  goto LAB_100c2b6fc;
}

