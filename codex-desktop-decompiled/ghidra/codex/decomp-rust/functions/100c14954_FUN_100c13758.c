
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100c13758(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  long ******pppppplVar8;
  long lVar9;
  long ******pppppplVar10;
  long *******ppppppplVar11;
  long ******pppppplVar12;
  undefined8 uVar13;
  long *******ppppppplVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  long *******ppppppplStack_560;
  long *******ppppppplStack_558;
  long *******ppppppplStack_550;
  long lStack_548;
  long lStack_540;
  long *******ppppppplStack_538;
  undefined *puStack_530;
  undefined8 uStack_528;
  long *******ppppppplStack_520;
  undefined *puStack_518;
  undefined8 uStack_510;
  long *******ppppppplStack_508;
  undefined *puStack_500;
  undefined8 uStack_4f8;
  long *******ppppppplStack_4f0;
  undefined *puStack_4e8;
  long *******ppppppplStack_4e0;
  long *******ppppppplStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  undefined8 uStack_4c0;
  long *******ppppppplStack_4b0;
  undefined *puStack_4a8;
  undefined8 uStack_4a0;
  long *******ppppppplStack_490;
  long *******ppppppplStack_488;
  long *******ppppppplStack_480;
  undefined *puStack_478;
  long lStack_470;
  undefined8 uStack_468;
  long *******ppppppplStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  char *pcStack_440;
  long *******ppppppplStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
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
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *******ppppppplStack_88;
  undefined8 uStack_80;
  long *******ppppppplStack_78;
  undefined *puStack_70;
  
  if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
     (((bVar6 = bRam000000010b631f28, bRam000000010b631f28 - 1 < 2 ||
       ((bRam000000010b631f28 != 0 &&
        (bVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17hcc74853773e2be3bE
                           ), bVar6 != 0)))) &&
      (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                         (___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17hcc74853773e2be3bE
                          ,bVar6), iVar7 != 0)))) {
    puStack_478 = (undefined *)
                  (
                  ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17hcc74853773e2be3bE
                  + 0x30);
    ppppppplStack_490 = (long *******)0x1;
    ppppppplStack_488 = (long *******)0x8;
    ppppppplStack_480 = (long *******)0x0;
    __ZN7tracing4span4Span3new17hfb1cb23559a61740E
              (&ppppppplStack_560,
               ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17hcc74853773e2be3bE
               ,&ppppppplStack_490);
  }
  else {
    ppppppplStack_490 = (long *******)0x2;
    lStack_470 = 
    ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17hcc74853773e2be3bE;
    ppppppplStack_558 = ppppppplStack_488;
    ppppppplStack_550 = ppppppplStack_480;
    lStack_540 = 
    ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17hcc74853773e2be3bE;
    ppppppplStack_560 = ppppppplStack_490;
    if (__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') {
      lStack_4c8 = ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17hcc74853773e2be3bE
                   + 0x30;
      ppppppplStack_4e0 = (long *******)0x1;
      ppppppplStack_4d8 = (long *******)0x8;
      uStack_4d0 = 0;
      __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE(&ppppppplStack_490,&ppppppplStack_4e0);
      ppppppplStack_558 = ppppppplStack_488;
      ppppppplStack_550 = ppppppplStack_480;
      lStack_540 = lStack_470;
      ppppppplStack_560 = ppppppplStack_490;
    }
  }
  if (ppppppplStack_560 != (long *******)0x2) {
    ppppppplVar14 = ppppppplStack_558;
    if (((ulong)ppppppplStack_560 & 1) != 0) {
      ppppppplVar14 =
           (long *******)
           ((long)ppppppplStack_558 + ((long)ppppppplStack_550[2] - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    (*(code *)ppppppplStack_550[0xc])(ppppppplVar14,&lStack_548);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_540 != 0)) {
    ppppppplStack_4e0 = *(long ********)(lStack_540 + 0x10);
    ppppppplStack_4d8 = *(long ********)(lStack_540 + 0x18);
    ppppppplStack_490 = (long *******)&ppppppplStack_4e0;
    ppppppplStack_488 = (long *******)&DAT_100c7b3a0;
    FUN_1011d7d74(&ppppppplStack_560,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&ppppppplStack_490);
  }
LAB_100c138b4:
  do {
    while( true ) {
      while (lVar15 = *(long *)(param_1 + 0xf8), lVar15 - 3U < 2) {
        if (*(ulong *)(param_1 + 0x148) <= *(ulong *)(param_1 + 0x160)) goto LAB_100c13b78;
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
           (((bRam000000010b631f10 - 1 < 2 ||
             ((bRam000000010b631f10 != 0 &&
              (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
                                 ), cVar5 != '\0')))) &&
            (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
                               ), iVar7 != 0)))) {
          lStack_4c8 = ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
                       + 0x30;
          ppppppplStack_4e0 = (long *******)0x1;
          ppppppplStack_4d8 = (long *******)&UNK_10b233418;
          uStack_4d0 = 1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
                     ,&ppppppplStack_4e0);
          lVar15 = 
          ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_4a8 = *(undefined **)
                           (
                           ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
                           + 0x20);
            uStack_4a0 = *(undefined8 *)
                          (
                          ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
                          + 0x28);
            ppppppplStack_4b0 = (long *******)0x5;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppplStack_4b0);
            if (iVar7 != 0) {
              lStack_470 = *(long *)(lVar15 + 0x60);
              uStack_468 = *(undefined8 *)(lVar15 + 0x68);
              ppppppplStack_488 = *(long ********)(lVar15 + 0x50);
              ppppppplStack_480 = *(long ********)(lVar15 + 0x58);
              ppppppplStack_490 = (long *******)0x1;
              if (ppppppplStack_488 == (long *******)0x0) {
                ppppppplStack_490 = (long *******)0x2;
              }
              uStack_448 = *(undefined8 *)(lVar15 + 8);
              ppppppplStack_88 = (long *******)&ppppppplStack_4e0;
              uStack_80 = CONCAT71(uStack_80._1_7_,1);
              ppppppplStack_78 = (long *******)&ppppppplStack_88;
              puStack_70 = &DAT_1061c2098;
              puStack_478 = (undefined *)0x1;
              if (lStack_470 == 0) {
                puStack_478 = (undefined *)0x2;
              }
              puStack_458 = puStack_4a8;
              ppppppplStack_460 = ppppppplStack_4b0;
              uStack_450 = uStack_4a0;
              ppppppplStack_438 = (long *******)&ppppppplStack_78;
              pcStack_440 = s__108b39f4f;
              (**(code **)(puVar1 + 0x20))(puVar2,&ppppppplStack_490);
            }
          }
        }
        else {
          lVar15 = 
          ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_518 = *(undefined **)
                           (
                           ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
                           + 0x20);
            uStack_510 = *(undefined8 *)
                          (
                          ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
                          + 0x28);
            ppppppplStack_520 = (long *******)0x5;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppplStack_520);
            if (iVar7 != 0) {
              lStack_4c8 = ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17ha628f857fdc40dbcE
                           + 0x30;
              ppppppplStack_4e0 = (long *******)0x1;
              ppppppplStack_4d8 = (long *******)&UNK_10b233418;
              uStack_4d0 = 1;
              puStack_458 = puStack_518;
              ppppppplStack_460 = ppppppplStack_520;
              uStack_450 = uStack_510;
              lStack_470 = *(long *)(lVar15 + 0x60);
              uStack_468 = *(undefined8 *)(lVar15 + 0x68);
              ppppppplStack_488 = *(long ********)(lVar15 + 0x50);
              ppppppplStack_480 = *(long ********)(lVar15 + 0x58);
              ppppppplStack_490 = (long *******)0x1;
              if (ppppppplStack_488 == (long *******)0x0) {
                ppppppplStack_490 = (long *******)0x2;
              }
              uStack_448 = *(undefined8 *)(lVar15 + 8);
              ppppppplStack_78 = (long *******)&ppppppplStack_4e0;
              puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,1);
              ppppppplStack_4b0 = (long *******)&ppppppplStack_78;
              puStack_4a8 = &DAT_1061c2098;
              puStack_478 = (undefined *)0x1;
              if (lStack_470 == 0) {
                puStack_478 = (undefined *)0x2;
              }
              ppppppplStack_438 = (long *******)&ppppppplStack_4b0;
              pcStack_440 = s__108b39f4f;
              (**(code **)(puVar1 + 0x20))(puVar2,&ppppppplStack_490);
            }
          }
        }
        uVar16 = *(ulong *)(param_1 + 0x148);
        uVar17 = *(ulong *)(param_1 + 0x160);
        if (uVar17 <= uVar16 && (long *******)(uVar16 - uVar17) != (long *******)0x0) {
          ppppppplStack_480 = (long *******)0x1;
          puStack_478 = (undefined *)0x0;
          lStack_470 = 1;
          uStack_468 = 0;
          ppppppplStack_460 = (long *******)0x1;
          puStack_458 = (undefined *)0x0;
          uStack_450 = 1;
          uStack_448 = 0;
          pcStack_440 = (char *)0x1;
          ppppppplStack_438 = (long *******)0x0;
          uStack_430 = 1;
          uStack_428 = 0;
          uStack_420 = 1;
          uStack_418 = 0;
          uStack_410 = 1;
          uStack_408 = 0;
          uStack_400 = 1;
          uStack_3f8 = 0;
          uStack_3f0 = 1;
          uStack_3e8 = 0;
          uStack_3e0 = 1;
          uStack_3d8 = 0;
          uStack_3d0 = 1;
          uStack_3c8 = 0;
          uStack_3c0 = 1;
          uStack_3b8 = 0;
          uStack_3b0 = 1;
          uStack_3a8 = 0;
          uStack_3a0 = 1;
          uStack_398 = 0;
          uStack_390 = 1;
          uStack_388 = 0;
          uStack_380 = 1;
          uStack_378 = 0;
          uStack_370 = 1;
          uStack_368 = 0;
          uStack_360 = 1;
          uStack_358 = 0;
          uStack_350 = 1;
          uStack_348 = 0;
          uStack_340 = 1;
          uStack_338 = 0;
          uStack_330 = 1;
          uStack_328 = 0;
          uStack_320 = 1;
          uStack_318 = 0;
          uStack_310 = 1;
          uStack_308 = 0;
          uStack_300 = 1;
          uStack_2f8 = 0;
          uStack_2f0 = 1;
          uStack_2e8 = 0;
          uStack_2e0 = 1;
          uStack_2d8 = 0;
          uStack_2d0 = 1;
          uStack_2c8 = 0;
          uStack_2c0 = 1;
          uStack_2b8 = 0;
          uStack_2b0 = 1;
          uStack_2a8 = 0;
          uStack_2a0 = 1;
          uStack_298 = 0;
          uStack_290 = 1;
          uStack_288 = 0;
          uStack_280 = 1;
          uStack_278 = 0;
          uStack_270 = 1;
          uStack_268 = 0;
          uStack_260 = 1;
          uStack_258 = 0;
          uStack_250 = 1;
          uStack_248 = 0;
          uStack_240 = 1;
          uStack_238 = 0;
          uStack_230 = 1;
          uStack_228 = 0;
          uStack_220 = 1;
          uStack_218 = 0;
          uStack_210 = 1;
          uStack_208 = 0;
          uStack_200 = 1;
          uStack_1f8 = 0;
          uStack_1f0 = 1;
          uStack_1e8 = 0;
          uStack_1e0 = 1;
          uStack_1d8 = 0;
          uStack_1d0 = 1;
          uStack_1c8 = 0;
          uStack_1c0 = 1;
          uStack_1b8 = 0;
          uStack_1b0 = 1;
          uStack_1a8 = 0;
          uStack_1a0 = 1;
          uStack_198 = 0;
          uStack_190 = 1;
          uStack_188 = 0;
          uStack_180 = 1;
          uStack_178 = 0;
          uStack_170 = 1;
          uStack_168 = 0;
          uStack_160 = 1;
          uStack_158 = 0;
          uStack_150 = 1;
          uStack_148 = 0;
          uStack_140 = 1;
          uStack_138 = 0;
          uStack_130 = 1;
          uStack_128 = 0;
          uStack_120 = 1;
          uStack_118 = 0;
          uStack_110 = 1;
          uStack_108 = 0;
          uStack_100 = 1;
          uStack_f8 = 0;
          uStack_f0 = 1;
          uStack_e8 = 0;
          uStack_e0 = 1;
          uStack_d8 = 0;
          uStack_d0 = 1;
          uStack_c8 = 0;
          uStack_c0 = 1;
          uStack_b8 = 0;
          uStack_b0 = 1;
          uStack_a8 = 0;
          uStack_a0 = 1;
          uStack_98 = 0;
          ppppppplStack_490 = (long *******)(*(long *)(param_1 + 0x140) + uVar17);
          ppppppplStack_488 = (long *******)(uVar16 - uVar17);
          auVar18 = func_0x0001060f90f4(param_1,param_2,&ppppppplStack_490,1);
          ppppppplVar14 = auVar18._8_8_;
          if (auVar18._0_8_ == 2) goto LAB_100c144fc;
          if ((auVar18._0_8_ & 1) != 0) goto LAB_100c14514;
          ppppppplVar11 = (long *******)0x0;
          if (uVar17 <= uVar16) {
            ppppppplVar11 = (long *******)(uVar16 - uVar17);
          }
          if (ppppppplVar11 < ppppppplVar14) goto LAB_100c14908;
          *(undefined **)(param_1 + 0x160) = (undefined *)(uVar17 + (long)ppppppplVar14);
        }
      }
      if (lVar15 == 0) break;
      if (lVar15 == 1) {
        uVar16 = 0;
        if (*(ulong *)(param_1 + 0x110) <= *(ulong *)(param_1 + 0x108)) {
          uVar16 = *(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x110);
        }
        uVar17 = *(ulong *)(param_1 + 0x120);
        if (uVar16 <= *(ulong *)(param_1 + 0x120)) {
          uVar17 = uVar16;
        }
        if (uVar17 != 0) goto LAB_100c13a30;
      }
LAB_100c13b78:
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 4;
      if (lVar15 != 3) {
        if (lVar15 != 4) {
          ppppppplStack_488 = *(long ********)(param_1 + 0x108);
          ppppppplStack_490 = *(long ********)(param_1 + 0x100);
          puStack_478 = *(undefined **)(param_1 + 0x118);
          ppppppplStack_480 = *(long ********)(param_1 + 0x110);
          lStack_470 = *(long *)(param_1 + 0x120);
          puStack_4a8 = *(undefined **)(param_1 + 0x130);
          ppppppplStack_4b0 = *(long ********)(param_1 + 0x128);
          uStack_4a0 = *(undefined8 *)(param_1 + 0x138);
          lVar9 = *(long *)(param_1 + 0xb0);
          if (lVar9 != 3) {
            if (lVar9 == 1) {
              if (*(long *)(param_1 + 0xc0) != 0) {
                _free(*(undefined8 *)(param_1 + 0xb8));
              }
            }
            else if (lVar9 == 0) {
              (**(code **)(*(long *)(param_1 + 0xb8) + 0x20))
                        (param_1 + 0xd0,*(undefined8 *)(param_1 + 0xc0),
                         *(undefined8 *)(param_1 + 200));
            }
          }
          *(long *)(param_1 + 0xb0) = lVar15;
          *(long ********)(param_1 + 0xc0) = ppppppplStack_488;
          *(long ********)(param_1 + 0xb8) = ppppppplStack_490;
          *(undefined **)(param_1 + 0xd0) = puStack_478;
          *(long ********)(param_1 + 200) = ppppppplStack_480;
          *(long *)(param_1 + 0xd8) = lStack_470;
          *(undefined **)(param_1 + 0xe8) = puStack_4a8;
          *(long ********)(param_1 + 0xe0) = ppppppplStack_4b0;
          *(undefined8 *)(param_1 + 0xf0) = uStack_4a0;
        }
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
            ((bRam000000010b631ee0 - 1 < 2 ||
             ((bRam000000010b631ee0 != 0 &&
              (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
                                 ), cVar5 != '\0')))))) &&
           (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
                              ), iVar7 != 0)) {
          puStack_478 = (undefined *)
                        (
                        ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
                        + 0x30);
          ppppppplStack_4b0 = (long *******)&UNK_108cb06cf;
          puStack_4a8 = (undefined *)0x1f;
          ppppppplStack_78 = (long *******)&ppppppplStack_4b0;
          puStack_70 = &UNK_10b208fd0;
          ppppppplStack_488 = (long *******)&ppppppplStack_78;
          ppppppplStack_490 = (long *******)0x1;
          ppppppplStack_480 = (long *******)0x1;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
                     ,&ppppppplStack_490);
          lVar15 = 
          ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_4d8 =
                 *(long ********)
                  (
                  ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
                  + 0x20);
            uStack_4d0 = *(undefined8 *)
                          (
                          ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
                          + 0x28);
            ppppppplStack_4e0 = (long *******)0x5;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppplStack_4e0);
            if (iVar7 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar15,puVar2,puVar1,&ppppppplStack_4e0,&ppppppplStack_490);
            }
          }
        }
        else {
          lVar15 = 
          ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_500 = *(undefined **)
                           (
                           ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
                           + 0x20);
            uStack_4f8 = *(undefined8 *)
                          (
                          ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
                          + 0x28);
            ppppppplStack_508 = (long *******)0x5;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppplStack_508);
            if (iVar7 != 0) {
              lStack_4c8 = ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h315277fb0c84080dE
                           + 0x30;
              ppppppplStack_88 = (long *******)&UNK_108cb06cf;
              uStack_80 = 0x1f;
              ppppppplStack_4f0 = (long *******)&ppppppplStack_88;
              puStack_4e8 = &UNK_10b208fd0;
              ppppppplStack_4d8 = (long *******)&ppppppplStack_4f0;
              ppppppplStack_4e0 = (long *******)0x1;
              uStack_4d0 = 1;
              lStack_470 = *(long *)(lVar15 + 0x60);
              uStack_468 = *(undefined8 *)(lVar15 + 0x68);
              ppppppplStack_488 = *(long ********)(lVar15 + 0x50);
              ppppppplStack_480 = *(long ********)(lVar15 + 0x58);
              ppppppplStack_490 = (long *******)0x1;
              if (ppppppplStack_488 == (long *******)0x0) {
                ppppppplStack_490 = (long *******)0x2;
              }
              uStack_448 = *(undefined8 *)(lVar15 + 8);
              ppppppplStack_78 = (long *******)&ppppppplStack_4e0;
              puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,1);
              ppppppplStack_4b0 = (long *******)&ppppppplStack_78;
              puStack_4a8 = &DAT_1061c2098;
              puStack_478 = (undefined *)0x1;
              if (lStack_470 == 0) {
                puStack_478 = (undefined *)0x2;
              }
              puStack_458 = puStack_500;
              ppppppplStack_460 = ppppppplStack_508;
              uStack_450 = uStack_4f8;
              ppppppplStack_438 = (long *******)&ppppppplStack_4b0;
              pcStack_440 = s__108b39f4f;
              (**(code **)(puVar1 + 0x20))(puVar2,&ppppppplStack_490);
            }
          }
        }
        if (ppppppplStack_560 != (long *******)0x2) {
          if (((ulong)ppppppplStack_560 & 1) != 0) {
            ppppppplStack_558 =
                 (long *******)
                 ((long)ppppppplStack_558 +
                 ((long)ppppppplStack_550[2] - 1U & 0xfffffffffffffff0) + 0x10);
          }
          (*(code *)ppppppplStack_550[0xd])(ppppppplStack_558,&lStack_548);
        }
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_540 != 0)
           ) {
          ppppppplStack_4e0 = *(long ********)(lStack_540 + 0x10);
          ppppppplStack_4d8 = *(long ********)(lStack_540 + 0x18);
          ppppppplStack_490 = (long *******)&ppppppplStack_4e0;
          ppppppplStack_488 = (long *******)&DAT_100c7b3a0;
          FUN_1011d7d74(&ppppppplStack_560,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&ppppppplStack_490);
        }
        ppppppplVar14 = (long *******)0x0;
        uVar13 = 0;
        goto LAB_100c148bc;
      }
      ppppppplStack_4d8 = *(long ********)(param_1 + 0x108);
      ppppppplStack_4e0 = *(long ********)(param_1 + 0x100);
      lStack_4c8 = *(long *)(param_1 + 0x118);
      uStack_4d0 = *(undefined8 *)(param_1 + 0x110);
      uStack_4c0 = *(undefined8 *)(param_1 + 0x120);
      puStack_4a8 = (undefined *)((ulong)*(uint *)(param_1 + 0x178) + 9);
      ppppppplStack_4b0 = (long *******)(param_1 + 0x140);
      __ZN2h25frame7headers12Continuation6encode17h2189ba94a8052adcE
                (&ppppppplStack_490,&ppppppplStack_4e0,&ppppppplStack_4b0);
      if (ppppppplStack_490 != (long *******)0x0) {
        lVar15 = *(long *)(param_1 + 0xf8);
        if (lVar15 != 4) {
          if ((lVar15 == 3) || (lVar15 == 0)) {
            (**(code **)(*(long *)(param_1 + 0x100) + 0x20))
                      (param_1 + 0x118,*(undefined8 *)(param_1 + 0x108),
                       *(undefined8 *)(param_1 + 0x110));
          }
          else if ((lVar15 == 1) && (*(long *)(param_1 + 0x108) != 0)) {
            _free(*(undefined8 *)(param_1 + 0x100));
          }
        }
        *(undefined8 *)(param_1 + 0xf8) = 3;
        *(long ********)(param_1 + 0x108) = ppppppplStack_488;
        *(long ********)(param_1 + 0x100) = ppppppplStack_490;
        *(undefined **)(param_1 + 0x118) = puStack_478;
        *(long ********)(param_1 + 0x110) = ppppppplStack_480;
        *(long *)(param_1 + 0x120) = lStack_470;
      }
    }
    uVar16 = *(ulong *)(param_1 + 0x120);
    if (*(ulong *)(param_1 + 0x110) <= *(ulong *)(param_1 + 0x120)) {
      uVar16 = *(ulong *)(param_1 + 0x110);
    }
    if (uVar16 == 0) goto LAB_100c13b78;
LAB_100c13a30:
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bRam000000010b631ef8 - 1 < 2 ||
         ((bRam000000010b631ef8 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E
                             ), cVar5 != '\0')))))) &&
       (iVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E
                          ), iVar7 != 0)) {
      lStack_4c8 = ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E
                   + 0x30;
      ppppppplStack_4e0 = (long *******)0x1;
      ppppppplStack_4d8 = (long *******)&UNK_10b233408;
      uStack_4d0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E
                 ,&ppppppplStack_4e0);
      lVar15 = 
      ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_4a8 = *(undefined **)
                       (
                       ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E
                       + 0x20);
        uStack_4a0 = *(undefined8 *)
                      (
                      ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E
                      + 0x28);
        ppppppplStack_4b0 = (long *******)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppplStack_4b0);
        if (iVar7 != 0) {
          lStack_470 = *(long *)(lVar15 + 0x60);
          uStack_468 = *(undefined8 *)(lVar15 + 0x68);
          ppppppplStack_488 = *(long ********)(lVar15 + 0x50);
          ppppppplStack_480 = *(long ********)(lVar15 + 0x58);
          ppppppplStack_490 = (long *******)0x1;
          if (ppppppplStack_488 == (long *******)0x0) {
            ppppppplStack_490 = (long *******)0x2;
          }
          uStack_448 = *(undefined8 *)(lVar15 + 8);
          ppppppplStack_88 = (long *******)&ppppppplStack_4e0;
          uStack_80 = CONCAT71(uStack_80._1_7_,1);
          ppppppplStack_78 = (long *******)&ppppppplStack_88;
          puStack_70 = &DAT_1061c2098;
          puStack_478 = (undefined *)0x1;
          if (lStack_470 == 0) {
            puStack_478 = (undefined *)0x2;
          }
          puStack_458 = puStack_4a8;
          ppppppplStack_460 = ppppppplStack_4b0;
          uStack_450 = uStack_4a0;
          ppppppplStack_438 = (long *******)&ppppppplStack_78;
          pcStack_440 = s__108b39f4f;
          (**(code **)(puVar1 + 0x20))(puVar2,&ppppppplStack_490);
        }
      }
    }
    else {
      lVar15 = 
      ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack_530 = *(undefined **)
                       (
                       ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E
                       + 0x20);
        uStack_528 = *(undefined8 *)
                      (
                      ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E
                      + 0x28);
        ppppppplStack_538 = (long *******)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppppplStack_538);
        if (iVar7 != 0) {
          lStack_4c8 = ___ZN2h25codec12framed_write24FramedWrite_LT_T_C_B_GT_5flush10__CALLSITE17h38b86f77d8f026b6E
                       + 0x30;
          ppppppplStack_4e0 = (long *******)0x1;
          ppppppplStack_4d8 = (long *******)&UNK_10b233408;
          uStack_4d0 = 1;
          puStack_458 = puStack_530;
          ppppppplStack_460 = ppppppplStack_538;
          uStack_450 = uStack_528;
          lStack_470 = *(long *)(lVar15 + 0x60);
          uStack_468 = *(undefined8 *)(lVar15 + 0x68);
          ppppppplStack_488 = *(long ********)(lVar15 + 0x50);
          ppppppplStack_480 = *(long ********)(lVar15 + 0x58);
          ppppppplStack_490 = (long *******)0x1;
          if (ppppppplStack_488 == (long *******)0x0) {
            ppppppplStack_490 = (long *******)0x2;
          }
          uStack_448 = *(undefined8 *)(lVar15 + 8);
          ppppppplStack_78 = (long *******)&ppppppplStack_4e0;
          puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,1);
          ppppppplStack_4b0 = (long *******)&ppppppplStack_78;
          puStack_4a8 = &DAT_1061c2098;
          puStack_478 = (undefined *)0x1;
          if (lStack_470 == 0) {
            puStack_478 = (undefined *)0x2;
          }
          ppppppplStack_438 = (long *******)&ppppppplStack_4b0;
          pcStack_440 = s__108b39f4f;
          (**(code **)(puVar1 + 0x20))(puVar2,&ppppppplStack_490);
        }
      }
    }
    lVar15 = *(long *)(param_1 + 0xf8);
    if (lVar15 == 0) {
      pppppplVar8 = *(long *******)(param_1 + 0x110);
    }
    else if (lVar15 == 1) {
      pppppplVar8 = (long ******)0x0;
      if (*(ulong *)(param_1 + 0x110) <= *(ulong *)(param_1 + 0x108)) {
        pppppplVar8 = (long ******)(*(ulong *)(param_1 + 0x108) - *(ulong *)(param_1 + 0x110));
      }
    }
    else {
      pppppplVar8 = (long ******)0x0;
    }
    uVar17 = *(ulong *)(param_1 + 0x148);
    uVar16 = *(ulong *)(param_1 + 0x160);
    lVar9 = 0;
    if (uVar16 <= uVar17) {
      lVar9 = uVar17 - uVar16;
    }
    pppppplVar10 = *(long *******)(param_1 + 0x120);
    pppppplVar12 = pppppplVar10;
    if (pppppplVar8 <= pppppplVar10) {
      pppppplVar12 = pppppplVar8;
    }
  } while (pppppplVar12 == (long ******)0x0 && lVar9 == 0);
  ppppppplStack_490 = (long *******)0x1;
  ppppppplStack_488 = (long *******)0x0;
  ppppppplStack_480 = (long *******)0x1;
  puStack_478 = (undefined *)0x0;
  lStack_470 = 1;
  uStack_468 = 0;
  ppppppplStack_460 = (long *******)0x1;
  puStack_458 = (undefined *)0x0;
  uStack_450 = 1;
  uStack_448 = 0;
  pcStack_440 = (char *)0x1;
  ppppppplStack_438 = (long *******)0x0;
  uStack_430 = 1;
  uStack_428 = 0;
  uStack_420 = 1;
  uStack_418 = 0;
  uStack_410 = 1;
  uStack_408 = 0;
  uStack_400 = 1;
  uStack_3f8 = 0;
  uStack_3f0 = 1;
  uStack_3e8 = 0;
  uStack_3e0 = 1;
  uStack_3d8 = 0;
  uStack_3d0 = 1;
  uStack_3c8 = 0;
  uStack_3c0 = 1;
  uStack_3b8 = 0;
  uStack_3b0 = 1;
  uStack_3a8 = 0;
  uStack_3a0 = 1;
  uStack_398 = 0;
  uStack_390 = 1;
  uStack_388 = 0;
  uStack_380 = 1;
  uStack_378 = 0;
  uStack_370 = 1;
  uStack_368 = 0;
  uStack_360 = 1;
  uStack_358 = 0;
  uStack_350 = 1;
  uStack_348 = 0;
  uStack_340 = 1;
  uStack_338 = 0;
  uStack_330 = 1;
  uStack_328 = 0;
  uStack_320 = 1;
  uStack_318 = 0;
  uStack_310 = 1;
  uStack_308 = 0;
  uStack_300 = 1;
  uStack_2f8 = 0;
  uStack_2f0 = 1;
  uStack_2e8 = 0;
  uStack_2e0 = 1;
  uStack_2d8 = 0;
  uStack_2d0 = 1;
  uStack_2c8 = 0;
  uStack_2c0 = 1;
  uStack_2b8 = 0;
  uStack_2b0 = 1;
  uStack_2a8 = 0;
  uStack_2a0 = 1;
  uStack_298 = 0;
  uStack_290 = 1;
  uStack_288 = 0;
  uStack_280 = 1;
  uStack_278 = 0;
  uStack_270 = 1;
  uStack_268 = 0;
  uStack_260 = 1;
  uStack_258 = 0;
  uStack_250 = 1;
  uStack_248 = 0;
  uStack_240 = 1;
  uStack_238 = 0;
  uStack_230 = 1;
  uStack_228 = 0;
  uStack_220 = 1;
  uStack_218 = 0;
  uStack_210 = 1;
  uStack_208 = 0;
  uStack_200 = 1;
  uStack_1f8 = 0;
  uStack_1f0 = 1;
  uStack_1e8 = 0;
  uStack_1e0 = 1;
  uStack_1d8 = 0;
  uStack_1d0 = 1;
  uStack_1c8 = 0;
  uStack_1c0 = 1;
  uStack_1b8 = 0;
  uStack_1b0 = 1;
  uStack_1a8 = 0;
  uStack_1a0 = 1;
  uStack_198 = 0;
  uStack_190 = 1;
  uStack_188 = 0;
  uStack_180 = 1;
  uStack_178 = 0;
  uStack_170 = 1;
  uStack_168 = 0;
  uStack_160 = 1;
  uStack_158 = 0;
  uStack_150 = 1;
  uStack_148 = 0;
  uStack_140 = 1;
  uStack_138 = 0;
  uStack_130 = 1;
  uStack_128 = 0;
  uStack_120 = 1;
  uStack_118 = 0;
  uStack_110 = 1;
  uStack_108 = 0;
  uStack_100 = 1;
  uStack_f8 = 0;
  uStack_f0 = 1;
  uStack_e8 = 0;
  uStack_e0 = 1;
  uStack_d8 = 0;
  uStack_d0 = 1;
  uStack_c8 = 0;
  uStack_c0 = 1;
  uStack_b8 = 0;
  uStack_b0 = 1;
  uStack_a8 = 0;
  uStack_a0 = 1;
  uStack_98 = 0;
  ppppppplVar14 = (long *******)(uVar17 - uVar16);
  if (uVar17 < uVar16 || ppppppplVar14 == (long *******)0x0) {
    ppppppplVar11 = (long *******)&ppppppplStack_490;
  }
  else {
    ppppppplStack_490 = (long *******)((long)*(long *******)(param_1 + 0x140) + uVar16);
    ppppppplVar11 = (long *******)&ppppppplStack_480;
    ppppppplStack_488 = ppppppplVar14;
  }
  if ((pppppplVar10 == (long ******)0x0) || (lVar15 == 2)) {
LAB_100c13fc8:
    cVar5 = '\0';
  }
  else {
    if (lVar15 == 1) {
      uVar3 = *(ulong *)(param_1 + 0x110);
      pppppplVar8 = (long ******)(*(ulong *)(param_1 + 0x108) - uVar3);
      if (*(ulong *)(param_1 + 0x108) < uVar3 || pppppplVar8 == (long ******)0x0)
      goto LAB_100c13fc8;
      pppppplVar12 = (long ******)(*(long *)(param_1 + 0x100) + uVar3);
    }
    else {
      pppppplVar8 = *(long *******)(param_1 + 0x110);
      cVar5 = '\0';
      if (pppppplVar8 == (long ******)0x0) goto LAB_100c14358;
      pppppplVar12 = *(long *******)(param_1 + 0x108);
    }
    if (pppppplVar8 <= pppppplVar10) {
      pppppplVar10 = pppppplVar8;
    }
    *ppppppplVar11 = pppppplVar12;
    ppppppplVar11[1] = pppppplVar10;
    cVar5 = '\x01';
  }
LAB_100c14358:
  auVar18 = func_0x0001060f90f4(param_1,param_2,&ppppppplStack_490,
                                cVar5 + (uVar17 >= uVar16 && ppppppplVar14 != (long *******)0x0));
  ppppppplVar14 = auVar18._8_8_;
  if (auVar18._0_8_ == 2) {
LAB_100c144fc:
    uVar13 = 1;
  }
  else {
    if ((auVar18._0_8_ & 1) == 0) {
      uVar17 = *(ulong *)(param_1 + 0x148);
      uVar16 = *(ulong *)(param_1 + 0x160);
      ppppppplVar11 = (long *******)0x0;
      if (uVar16 <= uVar17) {
        ppppppplVar11 = (long *******)(uVar17 - uVar16);
      }
      if (uVar16 <= uVar17 && (long *******)(uVar17 - uVar16) != (long *******)0x0) {
        if (ppppppplVar14 <= ppppppplVar11) {
          *(undefined **)(param_1 + 0x160) = (undefined *)(uVar16 + (long)ppppppplVar14);
          goto LAB_100c138b4;
        }
        *(undefined **)(param_1 + 0x160) = (undefined *)((long)ppppppplVar11 + uVar16);
        ppppppplVar14 = (long *******)((long)ppppppplVar14 - (long)ppppppplVar11);
      }
      lVar15 = (long)*(long ********)(param_1 + 0x120) - (long)ppppppplVar14;
      if (*(long ********)(param_1 + 0x120) < ppppppplVar14) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cd2e85,0x23,&UNK_10b24a6b8);
        goto LAB_100c1496c;
      }
      if (*(long *)(param_1 + 0xf8) != 2) {
        if (*(long *)(param_1 + 0xf8) != 1) {
          ppppppplVar11 = *(long ********)(param_1 + 0x110);
          ppppppplStack_4b0 = ppppppplVar14;
          if (ppppppplVar11 < ppppppplVar14) {
            ppppppplStack_490 = (long *******)&ppppppplStack_4b0;
            ppppppplStack_488 = (long *******)&DAT_100c929e0;
            ppppppplStack_480 = (long *******)&ppppppplStack_4e0;
            puStack_478 = &DAT_100c929e0;
            ppppppplStack_4e0 = ppppppplVar11;
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__cannot_advance_past__remaining__108aba12e,&ppppppplStack_490,
                       &UNK_10b243fb8);
LAB_100c1496c:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100c14970);
            (*pcVar4)();
          }
          *(undefined **)(param_1 + 0x108) =
               (undefined *)(*(long *)(param_1 + 0x108) + (long)ppppppplVar14);
          *(long *)(param_1 + 0x110) = (long)ppppppplVar11 - (long)ppppppplVar14;
          *(long *)(param_1 + 0x120) = lVar15;
          goto LAB_100c138b4;
        }
        uVar16 = *(ulong *)(param_1 + 0x110);
        ppppppplVar11 = (long *******)0x0;
        if (uVar16 <= *(ulong *)(param_1 + 0x108)) {
          ppppppplVar11 = (long *******)(*(ulong *)(param_1 + 0x108) - uVar16);
        }
        if (ppppppplVar11 < ppppppplVar14) {
LAB_100c14908:
          ppppppplStack_490 = ppppppplVar14;
          ppppppplStack_488 = ppppppplVar11;
          __ZN5bytes13panic_advance17h894eeb3b0f978370E();
          goto LAB_100c1496c;
        }
        *(undefined **)(param_1 + 0x110) = (undefined *)(uVar16 + (long)ppppppplVar14);
      }
      *(long *)(param_1 + 0x120) = lVar15;
      goto LAB_100c138b4;
    }
LAB_100c14514:
    uVar13 = 0;
  }
  if (ppppppplStack_560 != (long *******)0x2) {
    if (((ulong)ppppppplStack_560 & 1) != 0) {
      ppppppplStack_558 =
           (long *******)
           ((long)ppppppplStack_558 + ((long)ppppppplStack_550[2] - 1U & 0xfffffffffffffff0) + 0x10)
      ;
    }
    (*(code *)ppppppplStack_550[0xd])(ppppppplStack_558,&lStack_548);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (lStack_540 != 0)) {
    ppppppplStack_4e0 = *(long ********)(lStack_540 + 0x10);
    ppppppplStack_4d8 = *(long ********)(lStack_540 + 0x18);
    ppppppplStack_490 = (long *******)&ppppppplStack_4e0;
    ppppppplStack_488 = (long *******)&DAT_100c7b3a0;
    FUN_1011d7d74(&ppppppplStack_560,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&ppppppplStack_490);
  }
LAB_100c148bc:
  FUN_100dddd8c(&ppppppplStack_560);
  auVar18._8_8_ = ppppppplVar14;
  auVar18._0_8_ = uVar13;
  return auVar18;
}

