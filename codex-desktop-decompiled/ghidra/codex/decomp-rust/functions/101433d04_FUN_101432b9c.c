
void FUN_101432b9c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long *in_x12;
  undefined8 *puVar17;
  char *pcVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  long lVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  long *plStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  undefined8 uStack_4a0;
  long *plStack_498;
  long *plStack_490;
  long *plStack_488;
  long *plStack_480;
  long *plStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  long *plStack_450;
  long *plStack_448;
  long *plStack_440;
  long *plStack_438;
  long *plStack_430;
  long *plStack_428;
  long *plStack_420;
  long *plStack_418;
  long *plStack_410;
  long *plStack_408;
  long *plStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  long *plStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  long *plStack_390;
  long *plStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  char *pcStack_330;
  char *pcStack_328;
  long lStack_320;
  char *pcStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  undefined8 uStack_300;
  byte *pbStack_2f8;
  long *plStack_2f0;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  char cStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  char cStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  char acStack_b0 [8];
  undefined8 *puStack_a8;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  bVar5 = *param_2;
  if (bVar5 == 0x14) {
    lVar15 = *(long *)(param_2 + 8);
    pcVar3 = *(char **)(param_2 + 0x10);
    lVar24 = *(long *)(param_2 + 0x18);
    pcVar2 = pcVar3 + lVar24 * 0x20;
    pbStack_310 = (byte *)0x0;
    pcVar18 = pcVar3;
    pcStack_330 = pcVar3;
    lStack_320 = lVar15;
    pcStack_318 = pcVar2;
    if (lVar24 == 0) {
LAB_101432cb0:
      pcStack_328 = pcVar18;
      plStack_498 = (long *)FUN_1087e422c(0,&UNK_10b22e4d8,&UNK_10b20a590);
LAB_101432cc8:
      uStack_4a0 = (long *)0x8000000000000002;
    }
    else {
      pcVar18 = pcVar3 + 0x20;
      cVar6 = *pcVar3;
      if (cVar6 == '\x16') goto LAB_101432cb0;
      uStack_127 = (undefined7)*(undefined8 *)(pcVar3 + 9);
      uStack_12f = (undefined7)*(undefined8 *)(pcVar3 + 1);
      uStack_128 = (undefined1)((ulong)*(undefined8 *)(pcVar3 + 1) >> 0x38);
      plStack_118 = *(long **)(pcVar3 + 0x18);
      uStack_120 = (undefined1)*(undefined8 *)(pcVar3 + 0x10);
      uStack_11f = (undefined7)((ulong)*(undefined8 *)(pcVar3 + 0x10) >> 8);
      pbStack_310 = (byte *)0x1;
      pcStack_328 = pcVar18;
      cStack_130 = cVar6;
      if (cVar6 != '\x10') {
        if (cVar6 == '\x11') {
          puVar17 = (undefined8 *)CONCAT71(uStack_127,uStack_128);
          plStack_1b8 = (long *)puVar17[1];
          plStack_1c0 = (long *)*puVar17;
          plStack_1a8 = (long *)puVar17[3];
          plStack_1b0 = (long *)puVar17[2];
          FUN_10145f654(&uStack_4a0,&plStack_1c0);
          _free(puVar17);
        }
        else {
          if (cVar6 == '\x12') goto LAB_101433354;
          FUN_10145f654(&uStack_4a0,&cStack_130);
        }
        if (uStack_4a0 != (long *)0x8000000000000002) {
          plStack_3b8 = plStack_488;
          plStack_3c0 = plStack_490;
          plStack_3a8 = plStack_478;
          plStack_3b0 = plStack_480;
          plStack_398 = plStack_468;
          plStack_3a0 = plStack_470;
          plStack_390 = plStack_460;
          plVar20 = plStack_498;
          plVar22 = uStack_4a0;
          if (uStack_4a0 != (long *)0x8000000000000003) goto LAB_101433360;
        }
        goto LAB_101432cc8;
      }
LAB_101433354:
      plVar20 = (long *)FUN_100e077ec(&cStack_130);
      plVar22 = (long *)0x8000000000000001;
LAB_101433360:
      plStack_1f0 = plStack_3b8;
      plStack_1f8 = plStack_3c0;
      plStack_1e0 = plStack_3a8;
      plStack_1e8 = plStack_3b0;
      plStack_1d0 = plStack_398;
      plStack_1d8 = plStack_3a0;
      plStack_1c8 = plStack_390;
      plStack_208 = plVar22;
      plStack_200 = plVar20;
      if (lVar24 != 1) {
        pcVar18 = pcVar3 + 0x40;
        cVar6 = pcVar3[0x20];
        pcStack_328 = pcVar18;
        if (cVar6 == '\x16') goto LAB_1014333a0;
        uStack_167 = (undefined7)*(undefined8 *)(pcVar3 + 0x29);
        uStack_16f = (undefined7)*(undefined8 *)(pcVar3 + 0x21);
        uStack_168 = (undefined1)((ulong)*(undefined8 *)(pcVar3 + 0x21) >> 0x38);
        plStack_158 = *(long **)(pcVar3 + 0x38);
        uStack_160 = (undefined1)*(undefined8 *)(pcVar3 + 0x30);
        uStack_15f = (undefined7)((ulong)*(undefined8 *)(pcVar3 + 0x30) >> 8);
        pbStack_310 = (byte *)0x2;
        cStack_170 = cVar6;
        if (cVar6 != '\x10') {
          if (cVar6 == '\x11') {
            puVar17 = (undefined8 *)CONCAT71(uStack_167,uStack_168);
            plStack_118 = (long *)puVar17[3];
            uStack_128 = (undefined1)puVar17[1];
            uStack_127 = (undefined7)((ulong)puVar17[1] >> 8);
            cStack_130 = (char)*puVar17;
            uStack_12f = (undefined7)((ulong)*puVar17 >> 8);
            uStack_120 = (undefined1)puVar17[2];
            uStack_11f = (undefined7)((ulong)puVar17[2] >> 8);
            FUN_101450164(&uStack_4a0,&cStack_130);
            _free(puVar17);
          }
          else {
            if (cVar6 == '\x12') goto LAB_10143379c;
            FUN_101450164(&uStack_4a0,&cStack_170);
          }
          if (uStack_4a0 != (long *)0x8000000000000002) {
            plStack_3b8 = plStack_488;
            plStack_3c0 = plStack_490;
            plStack_3a8 = plStack_478;
            plStack_3b0 = plStack_480;
            plStack_398 = plStack_468;
            plStack_3a0 = plStack_470;
            plStack_390 = plStack_460;
            plVar20 = plStack_498;
            plVar19 = uStack_4a0;
            if (uStack_4a0 != (long *)0x8000000000000003) goto LAB_1014337a8;
          }
          goto LAB_1014333b8;
        }
LAB_10143379c:
        plVar20 = (long *)FUN_100e077ec(&cStack_170);
        plVar19 = (long *)0x8000000000000001;
LAB_1014337a8:
        plStack_1a8 = plStack_3b8;
        plStack_1b0 = plStack_3c0;
        plStack_198 = plStack_3a8;
        plStack_1a0 = plStack_3b0;
        plStack_188 = plStack_398;
        plStack_190 = plStack_3a0;
        plStack_180 = plStack_390;
        plStack_1c0 = plVar19;
        plStack_1b8 = plVar20;
        if (lVar24 == 2) {
LAB_1014337e4:
          plStack_498 = (long *)FUN_1087e422c(2,&UNK_10b22e4d8,&UNK_10b20a590);
LAB_1014337fc:
          uStack_4a0 = (long *)0x8000000000000002;
          if ((plVar19 != (long *)0x8000000000000001) && (plVar19 != (long *)0x8000000000000000)) {
            if ((plStack_1a0 != (long *)0x0) && ((long)plStack_1a0 * 9 != -0x11)) {
              _free(plStack_1a8 + (-1 - (long)plStack_1a0));
            }
            func_0x000100cd7284(&plStack_1c0);
          }
          goto LAB_1014333c4;
        }
        pcVar18 = pcVar3 + 0x60;
        cVar6 = pcVar3[0x40];
        pcStack_328 = pcVar18;
        if (cVar6 == '\x16') goto LAB_1014337e4;
        uStack_167 = (undefined7)*(undefined8 *)(pcVar3 + 0x49);
        uStack_16f = (undefined7)*(undefined8 *)(pcVar3 + 0x41);
        uStack_168 = (undefined1)((ulong)*(undefined8 *)(pcVar3 + 0x41) >> 0x38);
        plStack_158 = *(long **)(pcVar3 + 0x58);
        uStack_160 = (undefined1)*(undefined8 *)(pcVar3 + 0x50);
        uStack_15f = (undefined7)((ulong)*(undefined8 *)(pcVar3 + 0x50) >> 8);
        pbStack_310 = (byte *)0x3;
        cStack_170 = cVar6;
        if (cVar6 != '\x10') {
          if (cVar6 == '\x11') {
            puVar17 = (undefined8 *)CONCAT71(uStack_167,uStack_168);
            plStack_118 = (long *)puVar17[3];
            uStack_128 = (undefined1)puVar17[1];
            uStack_127 = (undefined7)((ulong)puVar17[1] >> 8);
            cStack_130 = (char)*puVar17;
            uStack_12f = (undefined7)((ulong)*puVar17 >> 8);
            uStack_120 = (undefined1)puVar17[2];
            uStack_11f = (undefined7)((ulong)puVar17[2] >> 8);
            FUN_10142e300(&uStack_4a0,&cStack_130);
            _free(puVar17);
          }
          else {
            if (cVar6 == '\x12') goto LAB_101433ac0;
            FUN_10142e300(&uStack_4a0,&cStack_170);
          }
          if (uStack_4a0 != (long *)0x8000000000000002) {
            plStack_3b8 = plStack_488;
            plStack_3c0 = plStack_490;
            plStack_3a8 = plStack_478;
            plStack_3b0 = plStack_480;
            plStack_398 = plStack_468;
            plStack_3a0 = plStack_470;
            plStack_390 = plStack_460;
            plVar20 = plStack_498;
            plVar16 = uStack_4a0;
            if (uStack_4a0 != (long *)0x8000000000000003) goto LAB_101433acc;
          }
          goto LAB_1014337fc;
        }
LAB_101433ac0:
        plVar20 = (long *)FUN_100e077ec(&cStack_170);
        plVar16 = (long *)0x8000000000000001;
LAB_101433acc:
        plVar22 = plStack_208;
        plVar12 = plStack_390;
        plVar11 = plStack_398;
        plVar10 = plStack_3a0;
        plVar9 = plStack_3a8;
        plVar8 = plStack_3b0;
        plVar21 = plStack_3b8;
        plVar19 = plStack_3c0;
        plStack_3f8 = plStack_3b8;
        plStack_400 = plStack_3c0;
        plStack_3e8 = plStack_3a8;
        plStack_3f0 = plStack_3b0;
        plStack_3d8 = plStack_398;
        plStack_3e0 = plStack_3a0;
        plStack_3d0 = plStack_390;
        plStack_398 = plStack_1e0;
        plStack_3a0 = plStack_1e8;
        plStack_388 = plStack_1d0;
        plStack_390 = plStack_1d8;
        plStack_380 = plStack_1c8;
        plStack_3b8 = plStack_200;
        plStack_3c0 = plStack_208;
        plStack_3a8 = plStack_1f0;
        plStack_3b0 = plStack_1f8;
        plStack_350 = plStack_198;
        plStack_358 = plStack_1a0;
        plStack_340 = plStack_188;
        plStack_348 = plStack_190;
        plStack_370 = plStack_1b8;
        plStack_378 = plStack_1c0;
        plStack_360 = plStack_1a8;
        plStack_368 = plStack_1b0;
        plStack_338 = plStack_180;
        uStack_4a0 = plStack_208;
        plStack_488 = plStack_1f0;
        plStack_490 = plStack_1f8;
        plStack_478 = plStack_1e0;
        plStack_480 = plStack_1e8;
        plStack_468 = plStack_1d0;
        plStack_470 = plStack_1d8;
        plStack_498 = plStack_200;
        plStack_428 = plStack_190;
        plStack_430 = plStack_198;
        plStack_418 = plStack_180;
        plStack_420 = plStack_188;
        plStack_458 = plStack_1c0;
        plStack_460 = plStack_1c8;
        plStack_448 = plStack_1b0;
        plStack_450 = plStack_1b8;
        plStack_438 = plStack_1a0;
        plStack_440 = plStack_1a8;
        plStack_410 = plVar16;
        plStack_408 = plVar20;
        if (plStack_208 == (long *)0x8000000000000002) goto LAB_101432cd4;
        plStack_238 = plVar21;
        plStack_240 = plVar19;
        plStack_228 = plVar9;
        plStack_230 = plVar8;
        plStack_218 = plVar11;
        plStack_220 = plVar10;
        plStack_210 = plVar12;
        plStack_278 = plStack_1a0;
        plStack_280 = plStack_1a8;
        plStack_268 = plStack_190;
        plStack_270 = plStack_198;
        plStack_258 = plStack_180;
        plStack_260 = plStack_188;
        plStack_2b8 = plStack_1e0;
        plStack_2c0 = plStack_1e8;
        plStack_2a8 = plStack_1d0;
        plStack_2b0 = plStack_1d8;
        plStack_298 = plStack_1c0;
        plStack_2a0 = plStack_1c8;
        plStack_288 = plStack_1b0;
        plStack_290 = plStack_1b8;
        plStack_2d8 = plStack_200;
        plStack_2e0 = plStack_208;
        plStack_2c8 = plStack_1f0;
        plStack_2d0 = plStack_1f8;
        plStack_250 = plVar16;
        plStack_248 = plVar20;
        plVar20 = (long *)FUN_100fbc738(&pcStack_330);
        if (plVar20 != (long *)0x0) {
          plVar22 = (long *)0x8000000000000002;
          uStack_4a0 = (long *)0x8000000000000002;
          plStack_498 = plVar20;
          FUN_100e2bb8c(&plStack_2e0);
        }
        goto LAB_101433664;
      }
LAB_1014333a0:
      plStack_498 = (long *)FUN_1087e422c(1,&UNK_10b22e4d8,&UNK_10b20a590);
LAB_1014333b8:
      uStack_4a0 = (long *)0x8000000000000002;
LAB_1014333c4:
      if ((plVar22 != (long *)0x8000000000000001) && (plVar22 != (long *)0x8000000000000000)) {
        if ((plStack_1e8 != (long *)0x0) && ((long)plStack_1e8 * 9 != -0x11)) {
          _free(plStack_1f0 + (-1 - (long)plStack_1e8));
        }
        func_0x000100cd7284(&plStack_208);
      }
    }
LAB_101432cd4:
    lVar24 = ((ulong)((long)pcVar2 - (long)pcVar18) >> 5) + 1;
    plVar22 = (long *)0x8000000000000002;
    while (lVar24 = lVar24 + -1, lVar24 != 0) {
      FUN_100e077ec(pcVar18);
      pcVar18 = pcVar18 + 0x20;
    }
    if (lVar15 != 0) {
      _free(pcVar3);
    }
  }
  else {
    if (bVar5 != 0x15) {
      plStack_498 = (long *)FUN_108855b04(param_2,acStack_b0,&UNK_10b20aa00);
      goto LAB_10143368c;
    }
    uStack_300 = *(undefined8 *)(param_2 + 8);
    pbStack_310 = *(byte **)(param_2 + 0x10);
    lVar15 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbStack_310 + lVar15;
    pcStack_330 = (char *)CONCAT71(pcStack_330._1_7_,0x16);
    plStack_2f0 = (long *)0x0;
    plStack_208 = (long *)0x8000000000000002;
    plStack_1c0 = (long *)0x8000000000000002;
    plStack_3c0 = (long *)0x8000000000000002;
    pbStack_308 = pbStack_310;
    pbStack_2f8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      plStack_458 = (long *)0x8000000000000001;
      plVar22 = (long *)0x8000000000000001;
      plStack_4d8 = in_x12;
LAB_101432d28:
      plStack_4a8 = (long *)0x8000000000000001;
    }
    else {
      plVar20 = (long *)0x0;
      puVar27 = (undefined8 *)((ulong)&uStack_4a0 | 1);
      puVar17 = (undefined8 *)((ulong)&pcStack_330 | 1);
      puVar23 = (undefined8 *)((ulong)acStack_b0 | 1);
      plStack_4b0 = (long *)0x8000000000000002;
      plStack_4a8 = (long *)0x8000000000000002;
      plStack_4c0 = (long *)0x8000000000000002;
      plStack_4b8 = (long *)0x8000000000000002;
      plStack_4d0 = (long *)0x8000000000000002;
      plStack_4c8 = (long *)0x8000000000000002;
      pbVar7 = pbStack_310;
      do {
        plVar16 = plStack_490;
        plVar19 = plStack_498;
        plVar22 = uStack_4a0;
        pbVar25 = pbVar7 + 0x40;
        bVar4 = *pbVar7;
        plVar21 = plVar20;
        pbVar26 = pbVar25;
        if (bVar4 == 0x16) break;
        uStack_4a0 = (long *)CONCAT71(uStack_4a0._1_7_,bVar4);
        plVar21 = uStack_4a0;
        uVar28 = *(undefined8 *)(pbVar7 + 0x10);
        *(undefined8 *)((long)puVar27 + 0x17) = *(undefined8 *)(pbVar7 + 0x18);
        *(undefined8 *)((long)puVar27 + 0xf) = uVar28;
        uVar28 = *(undefined8 *)(pbVar7 + 1);
        puVar27[1] = *(undefined8 *)(pbVar7 + 9);
        *puVar27 = uVar28;
        pcStack_328 = *(char **)(pbVar7 + 0x28);
        pcStack_330 = *(char **)(pbVar7 + 0x20);
        pcStack_318 = *(char **)(pbVar7 + 0x38);
        lStack_320 = *(long *)(pbVar7 + 0x30);
        if (bVar4 < 0xd) {
          if (bVar4 == 1) {
            uStack_4a0._1_1_ = SUB81(plVar22,1);
            if (2 < uStack_4a0._1_1_) {
              uStack_4a0._1_1_ = 3;
            }
LAB_101432fd0:
            uStack_90._1_7_ = CONCAT61(uStack_90._2_6_,uStack_4a0._1_1_);
            uStack_90 = (undefined *)((ulong)uStack_90._1_7_ << 8);
            uStack_4a0 = plVar21;
            goto LAB_101432fd4;
          }
          if (bVar4 == 4) {
            plVar22 = plStack_498;
            if ((long *)0x2 < plStack_498) {
              plVar22 = (long *)0x3;
            }
            uStack_4a0._1_1_ = (byte)plVar22;
            goto LAB_101432fd0;
          }
          if (bVar4 == 0xc) {
            if (plStack_488 == (long *)0x5) {
              if ((int)*plStack_490 != 0x6c6f6f74 || *(char *)((long)plStack_490 + 4) != 's')
              goto LAB_101432f50;
              uStack_90 = (undefined *)CONCAT62(uStack_90._2_6_,0x200);
            }
            else if (plStack_488 == (long *)0xb) {
              if (*plStack_490 != 0x7461746963696c65 ||
                  *(long *)((long)plStack_490 + 3) != 0x6e6f697461746963) goto LAB_101432f50;
              uStack_90 = (undefined *)CONCAT62(uStack_90._2_6_,0x100);
            }
            else if ((plStack_488 == (long *)0x8) && (*plStack_490 == 0x676e696c706d6173)) {
              uStack_90 = (undefined *)((ulong)uStack_90._2_6_ << 0x10);
            }
            else {
LAB_101432f50:
              uStack_90 = (undefined *)CONCAT62(uStack_90._2_6_,0x300);
            }
joined_r0x0001014332e8:
            if (plVar19 != (long *)0x0) {
              _free(plVar16);
            }
          }
          else {
LAB_1014332f8:
            plStack_88 = (long *)FUN_108855b04(&uStack_4a0,acStack_b0,&UNK_10b20fa40);
            uStack_90 = (undefined *)CONCAT71(uStack_90._1_7_,1);
          }
        }
        else {
          if (bVar4 == 0xd) {
            if (plStack_490 == (long *)0x5) {
              if ((int)*plStack_498 != 0x6c6f6f74 || *(char *)((long)plStack_498 + 4) != 's')
              goto LAB_101432fc8;
              uStack_4a0._1_1_ = 2;
            }
            else if (plStack_490 == (long *)0xb) {
              if (*plStack_498 != 0x7461746963696c65 ||
                  *(long *)((long)plStack_498 + 3) != 0x6e6f697461746963) goto LAB_101432fc8;
              uStack_4a0._1_1_ = 1;
            }
            else if ((plStack_490 == (long *)0x8) && (*plStack_498 == 0x676e696c706d6173)) {
              uStack_4a0._1_1_ = 0;
            }
            else {
LAB_101432fc8:
              uStack_4a0._1_1_ = 3;
            }
            goto LAB_101432fd0;
          }
          if (bVar4 == 0xe) {
            FUN_100b3ad80(&uStack_90,plStack_490);
            goto joined_r0x0001014332e8;
          }
          if (bVar4 != 0xf) goto LAB_1014332f8;
          FUN_100b3ad80(&uStack_90,plStack_498,plStack_490);
LAB_101432fd4:
          FUN_100e077ec(&uStack_4a0);
        }
        puVar13 = puStack_a8;
        plVar22 = plStack_88;
        plStack_200 = plStack_4e0;
        plStack_1b8 = plStack_4e8;
        if (((ulong)uStack_90 & 1) != 0) {
LAB_101433448:
          plStack_2f0 = (long *)((long)plVar20 + 1);
          plStack_498 = plVar22;
          pbStack_308 = pbVar25;
          plStack_3c0 = plStack_4d0;
          plStack_3b8 = plStack_4d8;
          plStack_208 = plStack_4c0;
          plStack_1c0 = plStack_4c8;
joined_r0x000101433470:
          uStack_4a0 = (long *)0x8000000000000002;
          if (plStack_4a8 != (long *)0x8000000000000002) {
joined_r0x000101433484:
            uStack_4a0 = (long *)0x8000000000000002;
            if ((plStack_4a8 != (long *)0x8000000000000001) &&
               (uStack_4a0 = (long *)0x8000000000000002, plStack_4a8 != (long *)0x8000000000000000))
            {
              if ((plStack_3a0 != (long *)0x0) && ((long)plStack_3a0 * 9 != -0x11)) {
                _free(plStack_3a8 + (-1 - (long)plStack_3a0));
              }
              func_0x000100cd7284(&plStack_3c0);
            }
          }
LAB_10143390c:
          plVar22 = (long *)0x8000000000000002;
          if (((plStack_4b0 != (long *)0x8000000000000002) &&
              (plStack_4b0 != (long *)0x8000000000000001)) &&
             (plStack_4b0 != (long *)0x8000000000000000)) {
            if ((plStack_1a0 != (long *)0x0) && ((long)plStack_1a0 * 9 != -0x11)) {
              _free(plStack_1a8 + (-1 - (long)plStack_1a0));
            }
            func_0x000100cd7284(&plStack_1c0);
          }
          if (((plStack_4b8 != (long *)0x8000000000000002) &&
              (plStack_4b8 != (long *)0x8000000000000001)) &&
             (plStack_4b8 != (long *)0x8000000000000000)) {
            if ((plStack_1e8 != (long *)0x0) && ((long)plStack_1e8 * 9 != -0x11)) {
              _free(plStack_1f0 + (-1 - (long)plStack_1e8));
            }
            func_0x000100cd7284(&plStack_208);
          }
          FUN_100d34830(&pbStack_310);
          if ((char)pcStack_330 != '\x16') {
            FUN_100e077ec(&pcStack_330);
          }
          goto LAB_101433664;
        }
        cVar6 = (char)pcStack_330;
        if (uStack_90._1_1_ < 2) {
          if (uStack_90._1_1_ == 0) {
            if (plStack_4b8 == (long *)0x8000000000000002) {
              pcStack_330 = (char *)CONCAT71(pcStack_330._1_7_,0x16);
              if (cVar6 == '\x16') {
                plStack_2f0 = (long *)((long)plVar20 + 1);
                plStack_3c0 = plStack_4d0;
                plStack_3b8 = plStack_4d8;
                plStack_1c0 = plStack_4c8;
                plStack_208 = plStack_4c0;
                pbStack_308 = pbVar25;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_101433f20;
              }
              uVar28 = *puVar17;
              puVar23[1] = puVar17[1];
              *puVar23 = uVar28;
              uVar28 = *(undefined8 *)((long)puVar17 + 0xf);
              *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
              *(undefined8 *)((long)puVar23 + 0xf) = uVar28;
              acStack_b0[0] = cVar6;
              if (cVar6 == '\x10') {
LAB_101433048:
                FUN_100e077ec(acStack_b0);
                plStack_4b8 = (long *)0x8000000000000001;
              }
              else {
                if (cVar6 == '\x11') {
                  plStack_88 = (long *)puStack_a8[1];
                  uStack_90 = (undefined *)*puStack_a8;
                  uStack_78 = puStack_a8[3];
                  uStack_80 = puStack_a8[2];
                  FUN_10145f654(&uStack_4a0,&uStack_90);
                  _free(puVar13);
                  plStack_4b8 = uStack_4a0;
                }
                else {
                  if (cVar6 == '\x12') goto LAB_101433048;
                  acStack_b0[0] = cVar6;
                  FUN_10145f654(&uStack_4a0,acStack_b0);
                  plStack_4b8 = uStack_4a0;
                }
                uStack_4a0 = plStack_4b8;
                if (plStack_4b8 == (long *)0x8000000000000002) {
                  plStack_4b8 = (long *)0x8000000000000002;
                  plVar22 = plStack_498;
                  goto LAB_101433448;
                }
              }
              plStack_1f0 = plStack_488;
              plStack_1f8 = plStack_490;
              plStack_1e0 = plStack_478;
              plStack_1e8 = plStack_480;
              plStack_1d0 = plStack_468;
              plStack_1d8 = plStack_470;
              plStack_1c8 = plStack_460;
              plStack_4e0 = plStack_498;
              plStack_4c0 = plStack_4b8;
              goto LAB_101432d8c;
            }
            plStack_2f0 = (long *)((long)plVar20 + 1);
            plStack_3c0 = plStack_4d0;
            plStack_3b8 = plStack_4d8;
            plStack_1c0 = plStack_4c8;
            plStack_208 = plStack_4c0;
            uStack_90 = &UNK_108c98478;
            plStack_88 = (long *)0x8;
            uStack_4a0 = &uStack_90;
            plStack_498 = (long *)&DAT_100c7b3a0;
            pbStack_308 = pbVar25;
            plStack_498 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_4a0);
          }
          else {
            if (plStack_4b0 == (long *)0x8000000000000002) {
              pcStack_330 = (char *)CONCAT71(pcStack_330._1_7_,0x16);
              if (cVar6 == '\x16') {
                plStack_2f0 = (long *)((long)plVar20 + 1);
                plStack_3c0 = plStack_4d0;
                plStack_3b8 = plStack_4d8;
                plStack_1c0 = plStack_4c8;
                plStack_208 = plStack_4c0;
                pbStack_308 = pbVar25;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_101433f20;
              }
              uVar28 = *puVar17;
              puVar23[1] = puVar17[1];
              *puVar23 = uVar28;
              uVar28 = *(undefined8 *)((long)puVar17 + 0xf);
              *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
              *(undefined8 *)((long)puVar23 + 0xf) = uVar28;
              acStack_b0[0] = cVar6;
              if (cVar6 == '\x10') {
LAB_10143313c:
                FUN_100e077ec(acStack_b0);
                plStack_4b0 = (long *)0x8000000000000001;
              }
              else {
                if (cVar6 == '\x11') {
                  plStack_88 = (long *)puStack_a8[1];
                  uStack_90 = (undefined *)*puStack_a8;
                  uStack_78 = puStack_a8[3];
                  uStack_80 = puStack_a8[2];
                  FUN_101450164(&uStack_4a0,&uStack_90);
                  _free(puVar13);
                }
                else {
                  if (cVar6 == '\x12') goto LAB_10143313c;
                  FUN_101450164(&uStack_4a0,acStack_b0);
                }
                plStack_4b0 = uStack_4a0;
                if (uStack_4a0 == (long *)0x8000000000000002) {
                  plStack_2f0 = (long *)((long)plVar20 + 1);
                  plStack_4b0 = (long *)0x8000000000000002;
                  pbStack_308 = pbVar25;
                  plStack_3c0 = plStack_4d0;
                  plStack_3b8 = plStack_4d8;
                  plStack_208 = plStack_4c0;
                  plStack_1c0 = plStack_4c8;
                  goto joined_r0x000101433470;
                }
              }
              plStack_1a8 = plStack_488;
              plStack_1b0 = plStack_490;
              plStack_198 = plStack_478;
              plStack_1a0 = plStack_480;
              plStack_188 = plStack_468;
              plStack_190 = plStack_470;
              plStack_180 = plStack_460;
              plStack_4e8 = plStack_498;
              plStack_4c8 = plStack_4b0;
              goto LAB_101432d8c;
            }
            plStack_2f0 = (long *)((long)plVar20 + 1);
            plStack_3c0 = plStack_4d0;
            plStack_3b8 = plStack_4d8;
            plStack_1c0 = plStack_4c8;
            plStack_208 = plStack_4c0;
            uStack_90 = &UNK_108cb9329;
            plStack_88 = (long *)0xb;
            uStack_4a0 = &uStack_90;
            plStack_498 = (long *)&DAT_100c7b3a0;
            pbStack_308 = pbVar25;
            plStack_498 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_4a0);
          }
          goto joined_r0x000101433470;
        }
        if (uStack_90._1_1_ == 2) {
          if (plStack_4a8 != (long *)0x8000000000000002) {
            plStack_2f0 = (long *)((long)plVar20 + 1);
            plStack_3c0 = plStack_4d0;
            plStack_3b8 = plStack_4d8;
            plStack_1c0 = plStack_4c8;
            plStack_208 = plStack_4c0;
            uStack_90 = &UNK_108ca26d4;
            plStack_88 = (long *)0x5;
            uStack_4a0 = &uStack_90;
            plStack_498 = (long *)&DAT_100c7b3a0;
            pbStack_308 = pbVar25;
            plStack_498 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_4a0);
            goto joined_r0x000101433484;
          }
          pcStack_330 = (char *)CONCAT71(pcStack_330._1_7_,0x16);
          if (cVar6 == '\x16') {
            plStack_2f0 = (long *)((long)plVar20 + 1);
            plStack_3c0 = plStack_4d0;
            plStack_3b8 = plStack_4d8;
            plStack_1c0 = plStack_4c8;
            plStack_208 = plStack_4c0;
            pbStack_308 = pbVar25;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101433f20;
          }
          uVar28 = *puVar17;
          puVar23[1] = puVar17[1];
          *puVar23 = uVar28;
          uVar28 = *(undefined8 *)((long)puVar17 + 0xf);
          *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
          *(undefined8 *)((long)puVar23 + 0xf) = uVar28;
          acStack_b0[0] = cVar6;
          if (cVar6 == '\x10') {
LAB_1014330c4:
            FUN_100e077ec(acStack_b0);
            plStack_4d0 = (long *)0x8000000000000001;
LAB_101433258:
            plStack_3a8 = plStack_488;
            plStack_3b0 = plStack_490;
            plStack_398 = plStack_478;
            plStack_3a0 = plStack_480;
            plStack_388 = plStack_468;
            plStack_390 = plStack_470;
            plStack_380 = plStack_460;
            plStack_4d8 = plStack_498;
            plStack_4a8 = plStack_4d0;
            goto LAB_101432d8c;
          }
          if (cVar6 == '\x11') {
            plStack_88 = (long *)puStack_a8[1];
            uStack_90 = (undefined *)*puStack_a8;
            uStack_78 = puStack_a8[3];
            uStack_80 = puStack_a8[2];
            FUN_10142e300(&uStack_4a0,&uStack_90);
            _free(puVar13);
          }
          else {
            if (cVar6 == '\x12') goto LAB_1014330c4;
            FUN_10142e300(&uStack_4a0,acStack_b0);
          }
          plStack_4d0 = uStack_4a0;
          if (uStack_4a0 != (long *)0x8000000000000002) goto LAB_101433258;
          plStack_2f0 = (long *)((long)plVar20 + 1);
          plStack_1c0 = plStack_4c8;
          plStack_208 = plStack_4c0;
          uStack_4a0 = (long *)0x8000000000000002;
          pbStack_308 = pbVar25;
          goto LAB_10143390c;
        }
        pcStack_330 = (char *)CONCAT71(pcStack_330._1_7_,0x16);
        if (cVar6 == '\x16') {
          plStack_2f0 = (long *)((long)plVar20 + 1);
          plStack_3c0 = plStack_4d0;
          plStack_3b8 = plStack_4d8;
          plStack_1c0 = plStack_4c8;
          plStack_208 = plStack_4c0;
          pbStack_308 = pbVar25;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101433f20:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x101433f24);
          (*pcVar14)();
        }
        uVar28 = *puVar17;
        puVar27[1] = puVar17[1];
        *puVar27 = uVar28;
        uVar28 = *(undefined8 *)((long)puVar17 + 0xf);
        *(undefined8 *)((long)puVar27 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
        *(undefined8 *)((long)puVar27 + 0xf) = uVar28;
        uStack_4a0 = (long *)CONCAT71(uStack_4a0._1_7_,cVar6);
        FUN_100e077ec(&uStack_4a0);
LAB_101432d8c:
        plVar20 = (long *)((long)plVar20 + 1);
        plVar21 = (long *)((lVar15 - 0x40U >> 6) + 1);
        pbVar26 = pbVar1;
        pbVar7 = pbVar25;
      } while (pbVar25 != pbVar1);
      plStack_1b8 = plStack_4e8;
      plStack_200 = plStack_4e0;
      if (plStack_4b8 == (long *)0x8000000000000002) {
        plStack_4b8 = (long *)0x8000000000000001;
        if (plStack_4b0 != (long *)0x8000000000000002) goto LAB_10143352c;
LAB_101433598:
        plStack_458 = (long *)0x8000000000000001;
        plVar22 = plStack_4b8;
      }
      else {
        plStack_158 = plStack_1e8;
        uStack_168 = SUB81(plStack_1f8,0);
        uStack_167 = (undefined7)((ulong)plStack_1f8 >> 8);
        cStack_170 = (char)plStack_4e0;
        uStack_16f = (undefined7)((ulong)plStack_4e0 >> 8);
        uStack_160 = SUB81(plStack_1f0,0);
        uStack_15f = (undefined7)((ulong)plStack_1f0 >> 8);
        plStack_148 = plStack_1d8;
        plStack_150 = plStack_1e0;
        plStack_138 = plStack_1c8;
        plStack_140 = plStack_1d0;
        if (plStack_4b0 == (long *)0x8000000000000002) goto LAB_101433598;
LAB_10143352c:
        uStack_128 = SUB81(plStack_1b0,0);
        uStack_127 = (undefined7)((ulong)plStack_1b0 >> 8);
        cStack_130 = (char)plStack_4e8;
        uStack_12f = (undefined7)((ulong)plStack_4e8 >> 8);
        uStack_120 = SUB81(plStack_1a8,0);
        uStack_11f = (undefined7)((ulong)plStack_1a8 >> 8);
        plStack_458 = plStack_4b0;
        plVar22 = plStack_4b8;
        plStack_118 = plStack_1a0;
        plStack_110 = plStack_198;
        plStack_108 = plStack_190;
        plStack_100 = plStack_188;
        plStack_f8 = plStack_180;
      }
      pbStack_308 = pbVar26;
      plStack_2f0 = plVar21;
      if (plStack_4a8 == (long *)0x8000000000000002) goto LAB_101432d28;
      plStack_e8 = plStack_3a8;
      plStack_f0 = plStack_3b0;
      plStack_d8 = plStack_398;
      plStack_e0 = plStack_3a0;
      plStack_c8 = plStack_388;
      plStack_d0 = plStack_390;
      plStack_c0 = plStack_380;
    }
    plVar20 = plStack_2f0;
    pbVar7 = pbStack_308;
    plStack_490 = (long *)CONCAT71(uStack_167,uStack_168);
    plStack_498 = (long *)CONCAT71(uStack_16f,cStack_170);
    plStack_488 = (long *)CONCAT71(uStack_15f,uStack_160);
    plStack_480 = plStack_158;
    plStack_470 = plStack_148;
    plStack_478 = plStack_150;
    plStack_460 = plStack_138;
    plStack_468 = plStack_140;
    plStack_448 = (long *)CONCAT71(uStack_127,uStack_128);
    plStack_450 = (long *)CONCAT71(uStack_12f,cStack_130);
    plStack_440 = (long *)CONCAT71(uStack_11f,uStack_120);
    plStack_438 = plStack_118;
    plStack_428 = plStack_108;
    plStack_430 = plStack_110;
    plStack_418 = plStack_f8;
    plStack_420 = plStack_100;
    plStack_3d0 = plStack_c0;
    plStack_3e8 = plStack_d8;
    plStack_3f0 = plStack_e0;
    plStack_3d8 = plStack_c8;
    plStack_3e0 = plStack_d0;
    plStack_3f8 = plStack_e8;
    plStack_400 = plStack_f0;
    plStack_210 = plStack_c0;
    plStack_228 = plStack_d8;
    plStack_230 = plStack_e0;
    plStack_218 = plStack_c8;
    plStack_220 = plStack_d0;
    plStack_2a0 = plStack_138;
    plStack_2b8 = plStack_150;
    plStack_2c0 = plStack_158;
    plStack_2a8 = plStack_140;
    plStack_2b0 = plStack_148;
    plStack_238 = plStack_e8;
    plStack_240 = plStack_f0;
    plStack_268 = plStack_108;
    plStack_270 = plStack_110;
    plStack_258 = plStack_f8;
    plStack_260 = plStack_100;
    plStack_278 = plStack_118;
    uStack_4a0 = plVar22;
    plStack_410 = plStack_4a8;
    plStack_408 = plStack_4d8;
    plStack_2e0 = plVar22;
    plStack_2d8 = plStack_498;
    plStack_2d0 = plStack_490;
    plStack_2c8 = plStack_488;
    plStack_298 = plStack_458;
    plStack_290 = plStack_450;
    plStack_288 = plStack_448;
    plStack_280 = plStack_440;
    plStack_250 = plStack_4a8;
    plStack_248 = plStack_4d8;
    FUN_100d34830(&pbStack_310);
    if (pbVar1 != pbVar7) {
      plStack_3c0 = plVar20;
      plStack_498 = (long *)FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar7) >> 6) +
                                          (long)plVar20,&plStack_3c0,&UNK_10b23a190);
      uStack_4a0 = (long *)0x8000000000000002;
      FUN_100e2bb8c(&plStack_2e0);
      plVar22 = (long *)0x8000000000000002;
    }
  }
LAB_101433664:
  if ((bVar5 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (plVar22 != (long *)0x8000000000000002) {
    param_1[0x15] = plStack_3f8;
    param_1[0x14] = plStack_400;
    param_1[0x17] = plStack_3e8;
    param_1[0x16] = plStack_3f0;
    param_1[0x19] = plStack_3d8;
    param_1[0x18] = plStack_3e0;
    param_1[0x1a] = plStack_3d0;
    param_1[0xd] = plStack_438;
    param_1[0xc] = plStack_440;
    param_1[0xf] = plStack_428;
    param_1[0xe] = plStack_430;
    param_1[0x11] = plStack_418;
    param_1[0x10] = plStack_420;
    param_1[0x13] = plStack_408;
    param_1[0x12] = plStack_410;
    param_1[5] = plStack_478;
    param_1[4] = plStack_480;
    param_1[7] = plStack_468;
    param_1[6] = plStack_470;
    param_1[9] = plStack_458;
    param_1[8] = plStack_460;
    param_1[0xb] = plStack_448;
    param_1[10] = plStack_450;
    param_1[1] = plStack_498;
    *param_1 = uStack_4a0;
    param_1[3] = plStack_488;
    param_1[2] = plStack_490;
    return;
  }
LAB_10143368c:
  *param_1 = 0x8000000000000003;
  param_1[1] = plStack_498;
  return;
}

