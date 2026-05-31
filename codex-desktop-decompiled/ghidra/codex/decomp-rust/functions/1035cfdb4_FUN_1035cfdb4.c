
void FUN_1035cfdb4(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  undefined7 uVar4;
  undefined7 uVar5;
  undefined6 uVar6;
  undefined1 uVar7;
  undefined6 uVar8;
  undefined6 uVar9;
  undefined1 uVar10;
  undefined6 uVar11;
  code *pcVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  long lVar22;
  ulong *puVar23;
  undefined7 uStack_408;
  undefined1 uStack_401;
  undefined7 uStack_400;
  undefined1 uStack_3f9;
  undefined7 uStack_3f8;
  undefined1 uStack_3f1;
  undefined7 uStack_3f0;
  undefined1 uStack_3e9;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong *puStack_3a0;
  ulong *puStack_398;
  ulong uStack_390;
  ulong *puStack_388;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  ulong uStack_368;
  undefined8 uStack_360;
  undefined7 uStack_358;
  undefined1 uStack_351;
  undefined7 uStack_350;
  ulong uStack_349;
  undefined8 uStack_340;
  undefined7 uStack_338;
  undefined1 uStack_331;
  undefined7 uStack_330;
  undefined1 uStack_329;
  undefined7 uStack_328;
  undefined1 uStack_321;
  undefined7 uStack_320;
  undefined1 uStack_319;
  undefined7 uStack_318;
  undefined1 uStack_311;
  undefined7 uStack_310;
  ulong uStack_309;
  ulong uStack_301;
  ulong uStack_2f9;
  ulong uStack_2e8;
  long lStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined7 uStack_298;
  undefined1 uStack_291;
  undefined7 uStack_290;
  ulong uStack_289;
  char cStack_280;
  undefined7 uStack_27f;
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
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined8 uStack_1f9;
  undefined8 uStack_1f0;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  undefined7 uStack_1d0;
  undefined1 uStack_1c9;
  undefined7 uStack_1c8;
  undefined1 uStack_1c1;
  undefined7 uStack_1c0;
  ulong uStack_1b9;
  ulong uStack_1b1;
  ulong uStack_1a9;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
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
  ulong uStack_110;
  ulong uStack_108;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  char cStack_c8;
  undefined6 uStack_c7;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined6 uStack_bf;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined6 uStack_b7;
  char cStack_b1;
  undefined1 uStack_b0;
  undefined6 uStack_af;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined6 uStack_a7;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined6 uStack_9f;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined6 uStack_97;
  undefined1 uStack_91;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar19 = *param_2;
  uVar14 = uVar19 ^ 0x8000000000000000;
  if (-1 < (long)uVar19) {
    uVar14 = 6;
  }
  if ((long)uVar14 < 3) {
    if (uVar14 == 0) {
      uVar19 = param_2[2];
      uStack_3f9 = (undefined1)uVar19;
      uStack_401 = (undefined1)param_2[1];
      uStack_400 = (undefined7)(param_2[1] >> 8);
      uVar14 = param_2[3];
      *(undefined1 *)(param_1 + 1) = 0xc;
      *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_3f9,uStack_400);
      *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_401,uStack_408);
      param_1[4] = uVar14;
      param_1[3] = uVar19;
    }
    else if (uVar14 == 1) {
      uVar14 = param_2[1];
      *(undefined1 *)(param_1 + 1) = 8;
      param_1[2] = uVar14;
    }
    else {
      uVar14 = param_2[1];
      *(undefined1 *)(param_1 + 1) = 10;
      param_1[2] = uVar14;
    }
  }
  else {
    if (4 < (long)uVar14) {
      if (uVar14 == 5) {
        uStack_110 = param_2[1];
        uStack_120 = param_2[2];
        uVar19 = param_2[3];
        uStack_108 = uStack_120 + uVar19 * 0x50;
        uStack_118 = uStack_120;
        func_0x000103744d90(&uStack_408,&uStack_120);
        uVar14 = uStack_118;
        cStack_c8 = (char)uStack_3f8;
        uStack_c7 = (undefined6)((uint7)uStack_3f8 >> 8);
        uStack_b8 = (undefined1)uStack_3e8;
        uStack_b7 = (undefined6)(uStack_3e8 >> 8);
        cStack_b1 = (char)(uStack_3e8 >> 0x38);
        uStack_c0 = (undefined1)uStack_3f0;
        uStack_bf = (undefined6)((uint7)uStack_3f0 >> 8);
        if (CONCAT17(uStack_401,uStack_408) == 2) {
          uVar15 = uStack_108 - uStack_118;
          if (uVar15 == 0) {
            param_1[2] = CONCAT17(uStack_3f1,uStack_3f8);
            param_1[1] = CONCAT17(uStack_3f9,uStack_400);
            param_1[4] = uStack_3e8;
            param_1[3] = CONCAT17(uStack_3e9,uStack_3f0);
            *param_1 = 2;
          }
          else {
            FUN_1089223ec(&uStack_408,uVar19,&UNK_10b2b6868,&UNK_10b29b520);
            param_1[5] = uStack_3e0;
            param_1[4] = uStack_3e8;
            param_1[7] = uStack_3d0;
            param_1[6] = uStack_3d8;
            param_1[9] = uStack_3c0;
            param_1[8] = uStack_3c8;
            param_1[10] = uStack_3b8;
            param_1[1] = CONCAT17(uStack_3f9,uStack_400);
            *param_1 = CONCAT17(uStack_401,uStack_408);
            param_1[3] = CONCAT17(uStack_3e9,uStack_3f0);
            param_1[2] = CONCAT17(uStack_3f1,uStack_3f8);
            FUN_10339b15c(&uStack_180);
          }
          lVar22 = (uVar15 >> 4) * -0x3333333333333333 + 1;
          while (lVar22 = lVar22 + -1, lVar22 != 0) {
            FUN_10337b6e4(uVar14);
            uVar14 = uVar14 + 0x50;
          }
        }
        else {
          param_1[6] = uStack_3d8;
          param_1[5] = uStack_3e0;
          param_1[8] = uStack_3c8;
          param_1[7] = uStack_3d0;
          param_1[10] = uStack_3b8;
          param_1[9] = uStack_3c0;
          param_1[2] = CONCAT17(uStack_3f1,uStack_3f8);
          param_1[1] = CONCAT17(uStack_3f9,uStack_400);
          param_1[4] = uStack_3e8;
          param_1[3] = CONCAT17(uStack_3e9,uStack_3f0);
          *param_1 = CONCAT17(uStack_401,uStack_408);
          lVar22 = (uStack_108 - uStack_118 >> 4) * -0x3333333333333333 + 1;
          while (lVar22 = lVar22 + -1, lVar22 != 0) {
            FUN_10337b6e4(uVar14);
            uVar14 = uVar14 + 0x50;
          }
        }
        if (uStack_110 == 0) {
          return;
        }
        _free(uStack_120);
        return;
      }
      uVar15 = param_2[6];
      puVar23 = (ulong *)param_2[1];
      uVar14 = param_2[2];
      uVar17 = param_2[4];
      if ((uVar17 != 0) && (uVar17 * 9 != -0x11)) {
        _free(param_2[3] + uVar17 * -8 + -8);
      }
      puVar21 = puVar23 + uVar14 * 0xe;
      uStack_408 = 0;
      uStack_401 = 0x80;
      uVar17 = uVar14;
      if (0x3fff < uVar14) {
        uVar17 = 0x4000;
      }
      puStack_3a0 = puVar23;
      puStack_398 = puVar23;
      uStack_390 = uVar19;
      puStack_388 = puVar21;
      if (uVar14 == 0) {
        uStack_2e8 = 0;
        lStack_2e0 = 8;
        uStack_2d8 = 0;
      }
      else {
        lVar22 = _malloc(uVar17 << 6);
        if (lVar22 == 0) {
          func_0x0001087c9084(8,uVar17 << 6);
          goto LAB_1035d054c;
        }
        uStack_2d8 = 0;
        puVar18 = (undefined8 *)((ulong)&uStack_180 | 1);
        puVar16 = (undefined8 *)((ulong)&cStack_280 | 1);
        puVar20 = puVar23;
        uStack_2e8 = uVar17;
        lStack_2e0 = lVar22;
        do {
          puStack_398 = puVar20 + 0xe;
          uVar14 = *puVar20;
          if (uVar14 == 0x8000000000000000) {
LAB_1035d0304:
            puVar23 = puVar20 + 0xe;
            break;
          }
          uVar17 = puVar20[2];
          uVar19 = puVar20[1];
          cStack_c8 = (char)uVar17;
          uStack_c7 = (undefined6)(uVar17 >> 8);
          uStack_c1 = (undefined1)(uVar17 >> 0x38);
          uVar7 = uStack_c1;
          uStack_d0 = (undefined7)uVar19;
          uStack_c9 = (undefined1)(uVar19 >> 0x38);
          uStack_168 = puVar20[4];
          uStack_170 = puVar20[3];
          uStack_b8 = (undefined1)uStack_168;
          uStack_b7 = (undefined6)(uStack_168 >> 8);
          cStack_b1 = (char)(uStack_168 >> 0x38);
          uStack_c0 = (undefined1)uStack_170;
          uStack_bf = (undefined6)(uStack_170 >> 8);
          uStack_b9 = (undefined1)(uStack_170 >> 0x38);
          uStack_158 = puVar20[6];
          uStack_160 = puVar20[5];
          uStack_a8 = (undefined1)uStack_158;
          uStack_a7 = (undefined6)(uStack_158 >> 8);
          uStack_a1 = (undefined1)(uStack_158 >> 0x38);
          uStack_b0 = (undefined1)uStack_160;
          uStack_af = (undefined6)(uStack_160 >> 8);
          uStack_a9 = (undefined1)(uStack_160 >> 0x38);
          uStack_148 = puVar20[8];
          uStack_150 = puVar20[7];
          uStack_98 = (undefined1)uStack_148;
          uStack_97 = (undefined6)(uStack_148 >> 8);
          uStack_91 = (undefined1)(uStack_148 >> 0x38);
          uStack_a0 = (undefined1)uStack_150;
          uStack_9f = (undefined6)(uStack_150 >> 8);
          uStack_99 = (undefined1)(uStack_150 >> 0x38);
          uStack_138 = puVar20[10];
          uStack_140 = puVar20[9];
          uStack_128 = puVar20[0xc];
          uStack_130 = puVar20[0xb];
          uStack_180 = uVar19;
          uStack_178 = uVar17;
          uStack_90 = uStack_140;
          uStack_88 = uStack_138;
          uStack_80 = uStack_130;
          uStack_78 = uStack_128;
          if (uVar17 == 0) {
            lVar22 = 1;
          }
          else {
            lVar22 = _malloc(uVar17);
            if (lVar22 == 0) {
              func_0x0001087c9084(1,uVar17);
              goto LAB_1035d054c;
            }
          }
          _memcpy(lVar22,uVar19,uVar17);
          if (CONCAT17(uStack_401,uStack_408) != -0x8000000000000000) {
            if (CONCAT17(uStack_401,uStack_408) != 0) {
              _free(CONCAT17(uStack_3f9,uStack_400));
            }
            FUN_10337b6e4(&uStack_3f0);
          }
          uStack_3d8 = uStack_158;
          uStack_3e0 = uStack_160;
          uStack_3c8 = uStack_148;
          uStack_3d0 = uStack_150;
          uStack_3b8 = uStack_138;
          uStack_3c0 = uStack_140;
          uStack_3a8 = uStack_128;
          uStack_3b0 = uStack_130;
          uStack_408 = (undefined7)uVar17;
          uStack_400 = (undefined7)lVar22;
          uStack_3f9 = (undefined1)((ulong)lVar22 >> 0x38);
          uStack_3e8 = uStack_168;
          uStack_3f0 = (undefined7)uStack_170;
          uStack_3e9 = (undefined1)(uStack_170 >> 0x38);
          uStack_120 = 0x8000000000000000;
          uStack_401 = uVar7;
          uStack_3f8 = uStack_408;
          uStack_3f1 = uVar7;
          uStack_118 = uVar14;
          uStack_110 = uVar19;
          uStack_108 = uVar17;
          FUN_1035cfdb4(&uStack_d0,&uStack_120);
          cVar2 = cStack_c8;
          lVar22 = CONCAT17(uStack_c9,uStack_d0);
          uStack_208 = CONCAT16(uStack_b9,uStack_bf);
          uStack_210 = CONCAT17(uStack_c0,CONCAT16(uStack_c1,uStack_c7));
          uStack_1f9 = CONCAT17(uStack_a9,CONCAT61(uStack_af,uStack_b0));
          uStack_201 = uStack_b8;
          uStack_200 = (undefined7)(CONCAT17(cStack_b1,CONCAT61(uStack_b7,uStack_b8)) >> 8);
          if (lVar22 != 2) {
            uStack_238 = CONCAT17(uStack_99,CONCAT61(uStack_9f,uStack_a0));
            uStack_240 = CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_a8));
            uStack_230 = CONCAT17(uStack_91,CONCAT61(uStack_97,uStack_98));
            uStack_228 = uStack_90;
            uStack_218 = uStack_80;
            uStack_220 = uStack_88;
            uStack_1d9 = uStack_b0;
            uStack_1d8 = (undefined7)((ulong)uStack_1f9 >> 8);
            uStack_1e0 = uStack_200;
            uStack_1e1 = uStack_b8;
            uStack_1b9 = uStack_90;
            uStack_1c1 = uStack_98;
            uStack_1c0 = (undefined7)((ulong)uStack_230 >> 8);
            uStack_1a9 = uStack_80;
            uStack_1b1 = uStack_88;
            uStack_1c9 = uStack_a0;
            uStack_1c8 = (undefined7)((ulong)uStack_238 >> 8);
            uStack_1d1 = uStack_a8;
            uStack_1d0 = (undefined7)((ulong)uStack_240 >> 8);
            uStack_2b8 = CONCAT17(uStack_b8,uStack_208);
            uStack_2a8 = CONCAT17(uStack_a8,uStack_1d8);
            uStack_2b0 = CONCAT17(uStack_b0,uStack_200);
            uStack_2a0 = CONCAT17(uStack_a0,uStack_1d0);
            uStack_289 = uStack_90;
            uStack_298 = uStack_1c8;
            uStack_291 = uStack_98;
            uStack_2c8 = uStack_80;
            uStack_2d0 = uStack_88;
            cVar3 = cStack_c8;
            uStack_2c0 = uStack_210;
            uStack_290 = uStack_1c0;
            uStack_1f0 = uStack_210;
            uStack_1e8 = uStack_208;
LAB_1035d03f0:
            uStack_338 = (undefined7)uStack_2b8;
            uStack_331 = (undefined1)((ulong)uStack_2b8 >> 0x38);
            uStack_340 = uStack_2c0;
            uStack_328 = (undefined7)uStack_2a8;
            uStack_321 = (undefined1)((ulong)uStack_2a8 >> 0x38);
            uStack_330 = (undefined7)uStack_2b0;
            uStack_329 = (undefined1)((ulong)uStack_2b0 >> 0x38);
            uStack_318 = uStack_298;
            uStack_320 = (undefined7)uStack_2a0;
            uStack_319 = (undefined1)((ulong)uStack_2a0 >> 0x38);
            uStack_309 = uStack_289;
            uStack_311 = uStack_291;
            uStack_310 = uStack_290;
            uStack_2f9 = uStack_2c8;
            uStack_301 = uStack_2d0;
            func_0x0001032f2520(&uStack_2e8);
            uStack_349 = CONCAT71(uStack_328,uStack_329);
            uStack_350 = uStack_330;
            uStack_358 = uStack_338;
            uStack_351 = uStack_331;
            uStack_360 = uStack_340;
            param_1[6] = CONCAT71(uStack_318,uStack_319);
            param_1[5] = CONCAT71(uStack_320,uStack_321);
            param_1[8] = uStack_309;
            param_1[7] = CONCAT71(uStack_310,uStack_311);
            param_1[10] = uStack_2f9;
            param_1[9] = uStack_301;
            *(char *)(param_1 + 1) = cVar3;
            *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_331,uStack_338);
            *(undefined8 *)((long)param_1 + 9) = uStack_340;
            param_1[4] = uStack_349;
            param_1[3] = CONCAT71(uStack_330,uStack_331);
            *param_1 = lVar22;
            goto LAB_1035d0458;
          }
          if (cStack_c8 == '\x16') goto LAB_1035d0304;
          uStack_180 = CONCAT71(uStack_180._1_7_,cStack_c8);
          puVar18[1] = CONCAT17(uStack_b8,uStack_208);
          *puVar18 = uStack_210;
          *(undefined8 *)((long)puVar18 + 0x17) = uStack_1f9;
          *(ulong *)((long)puVar18 + 0xf) = CONCAT71(uStack_200,uStack_b8);
          func_0x000103608270(&uStack_d0,&uStack_408);
          uVar11 = uStack_af;
          uVar10 = uStack_b0;
          uVar9 = uStack_b7;
          uStack_291 = uStack_b8;
          uVar8 = uStack_bf;
          uVar7 = uStack_c0;
          uVar6 = uStack_c7;
          cVar3 = cStack_c8;
          uVar14 = uStack_2d8;
          lVar22 = CONCAT17(uStack_c9,uStack_d0);
          if (lVar22 != 2) {
            uStack_2b8 = CONCAT17(uStack_b8,CONCAT16(uStack_b9,uStack_bf));
            uStack_2c0 = CONCAT17(uStack_c0,CONCAT16(uStack_c1,uStack_c7));
            uStack_2a8 = CONCAT17(uStack_a8,CONCAT16(uStack_a9,uStack_af));
            uStack_2b0 = CONCAT17(uStack_b0,CONCAT16(cStack_b1,uStack_b7));
            uStack_298 = CONCAT16(uStack_99,uStack_9f);
            uStack_2a0 = CONCAT17(uStack_a0,CONCAT16(uStack_a1,uStack_a7));
            uStack_289 = uStack_90;
            uStack_291 = uStack_98;
            uStack_290 = (undefined7)(CONCAT17(uStack_91,CONCAT61(uStack_97,uStack_98)) >> 8);
            uStack_2c8 = uStack_80;
            uStack_2d0 = uStack_88;
            FUN_10339b15c(&uStack_180);
            goto LAB_1035d03f0;
          }
          uStack_198 = CONCAT17(uStack_b9,CONCAT61(uStack_bf,uStack_c0));
          uStack_1a0 = CONCAT17(uStack_c1,CONCAT61(uStack_c7,cStack_c8));
          uVar5 = CONCAT61(uStack_af,uStack_b0);
          uStack_188 = CONCAT17(uStack_a9,uVar5);
          uVar4 = CONCAT61(uStack_b7,uStack_b8);
          uStack_190 = CONCAT17(cStack_b1,uVar4);
          cStack_c8 = (char)uStack_208;
          uStack_c7 = (undefined6)((uint7)uStack_208 >> 8);
          uStack_d0 = (undefined7)uStack_210;
          uStack_c9 = (undefined1)((ulong)uStack_210 >> 0x38);
          uStack_b9 = (undefined1)uStack_1f9;
          uStack_b8 = (undefined1)((ulong)uStack_1f9 >> 8);
          uStack_b7 = (undefined6)((ulong)uStack_1f9 >> 0x10);
          uStack_c1 = uStack_201;
          uStack_c0 = (undefined1)uStack_200;
          uStack_bf = (undefined6)((uint7)uStack_200 >> 8);
          uStack_a9 = uVar7;
          uStack_a8 = (undefined1)uVar8;
          uStack_a7 = (undefined6)((ulong)uStack_198 >> 0x10);
          cStack_b1 = cVar3;
          uStack_b0 = (undefined1)uVar6;
          uStack_af = (undefined6)((ulong)uStack_1a0 >> 0x10);
          uStack_99 = uVar10;
          uStack_98 = (undefined1)uVar11;
          uStack_97 = (undefined6)((ulong)uStack_188 >> 0x10);
          uStack_a1 = uStack_291;
          uStack_a0 = (undefined1)uVar9;
          uStack_9f = (undefined6)((ulong)uStack_190 >> 0x10);
          uStack_2b8 = CONCAT17(uStack_201,uStack_208);
          uStack_2c0 = uStack_210;
          uStack_2a8 = CONCAT17(cVar3,(int7)((ulong)uStack_1f9 >> 8));
          uStack_2b0 = CONCAT17(uStack_b9,uStack_200);
          uStack_298 = CONCAT61(uStack_a7,uStack_a8);
          uStack_2a0 = CONCAT17(uVar7,CONCAT61(uStack_af,uStack_b0));
          uStack_289 = CONCAT62(uStack_97,(short)uVar5);
          uStack_290 = (undefined7)(CONCAT62(uStack_9f,(short)uVar4) >> 8);
          cStack_280 = cVar2;
          puVar16[1] = uStack_2b8;
          *puVar16 = uStack_210;
          puVar16[3] = uStack_2a8;
          puVar16[2] = uStack_2b0;
          puVar16[5] = CONCAT17(uStack_291,uStack_298);
          puVar16[4] = uStack_2a0;
          *(ulong *)((long)puVar16 + 0x37) = uStack_289;
          *(ulong *)((long)puVar16 + 0x2f) = CONCAT71(uStack_290,uStack_291);
          if (uStack_2d8 == uStack_2e8) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&uStack_2e8);
          }
          puVar1 = (undefined8 *)(lStack_2e0 + uVar14 * 0x40);
          puVar1[1] = uStack_278;
          *puVar1 = CONCAT71(uStack_27f,cStack_280);
          puVar1[3] = uStack_268;
          puVar1[2] = uStack_270;
          puVar1[5] = uStack_258;
          puVar1[4] = uStack_260;
          puVar1[7] = uStack_248;
          puVar1[6] = uStack_250;
          uStack_2d8 = uVar14 + 1;
          puVar20 = puStack_398;
          puVar21 = puStack_388;
          puVar23 = puStack_388;
        } while (puStack_398 != puStack_388);
      }
      uStack_c1 = (undefined1)lStack_2e0;
      uStack_c0 = (undefined1)((ulong)lStack_2e0 >> 8);
      uStack_bf = (undefined6)((ulong)lStack_2e0 >> 0x10);
      uStack_c9 = (undefined1)uStack_2e8;
      cStack_c8 = (char)(uStack_2e8 >> 8);
      uStack_c7 = (undefined6)(uStack_2e8 >> 0x10);
      uStack_b9 = (undefined1)uStack_2d8;
      uStack_b8 = (undefined1)(uStack_2d8 >> 8);
      uStack_b7 = (undefined6)(uStack_2d8 >> 0x10);
      uStack_377 = (undefined7)(uStack_2e8 >> 8);
      uStack_360 = CONCAT17(uStack_c9,uStack_d0);
      uStack_328 = (undefined7)(uStack_2d8 >> 8);
      uStack_330 = (undefined7)((ulong)lStack_2e0 >> 8);
      uStack_368 = uStack_2d8;
      uStack_351 = uStack_c1;
      uStack_380 = 0x15;
      uStack_36f = uStack_330;
      uStack_370 = uStack_c1;
      uStack_37f = uStack_d0;
      uStack_378 = uStack_c9;
      uStack_358 = uStack_377;
      uStack_350 = uStack_330;
      uStack_349 = uStack_368;
      uStack_340 = uStack_360;
      uStack_338 = uStack_377;
      uStack_331 = uStack_c1;
      uStack_329 = uStack_b9;
      if (puVar21 == puVar23) {
        param_1[2] = uStack_2e8;
        param_1[1] = CONCAT71(uStack_d0,0x15);
        param_1[4] = uStack_2d8;
        param_1[3] = lStack_2e0;
        *param_1 = 2;
      }
      else {
        FUN_1089223ec(&uStack_d0,uVar15,&UNK_10b2b6878,&UNK_10b29b520);
        param_1[5] = CONCAT17(uStack_a1,CONCAT61(uStack_a7,uStack_a8));
        param_1[4] = CONCAT17(uStack_a9,CONCAT61(uStack_af,uStack_b0));
        param_1[7] = CONCAT17(uStack_91,CONCAT61(uStack_97,uStack_98));
        param_1[6] = CONCAT17(uStack_99,CONCAT61(uStack_9f,uStack_a0));
        param_1[9] = uStack_88;
        param_1[8] = uStack_90;
        param_1[10] = uStack_80;
        param_1[1] = CONCAT17(uStack_c1,CONCAT61(uStack_c7,cStack_c8));
        *param_1 = CONCAT17(uStack_c9,uStack_d0);
        param_1[3] = CONCAT17(cStack_b1,CONCAT61(uStack_b7,uStack_b8));
        param_1[2] = CONCAT17(uStack_b9,CONCAT61(uStack_bf,uStack_c0));
        FUN_10339b15c(&uStack_380);
      }
LAB_1035d0458:
      FUN_10338a7ec(&uStack_408);
      return;
    }
    if (uVar14 != 3) {
      uStack_118 = param_2[2];
      uStack_120 = param_2[1];
      uStack_110 = param_2[3];
      uStack_d0 = 0;
      uStack_c9 = 0;
      cStack_c8 = '\x01';
      uStack_c7 = 0;
      uStack_c1 = 0;
      uStack_c0 = 0;
      uStack_bf = 0;
      uStack_b9 = 0;
      uStack_3f8 = 0x60000020;
      uStack_3f1 = 0;
      uStack_408 = SUB87(&uStack_d0,0);
      uStack_401 = (undefined1)((ulong)&uStack_d0 >> 0x38);
      uStack_400 = 0x10b29a448;
      uStack_3f9 = 0;
      iVar13 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                         (&uStack_120,&uStack_408);
      if (iVar13 == 0) {
        uStack_3f8 = (undefined7)(CONCAT17(uStack_c1,CONCAT61(uStack_c7,cStack_c8)) >> 8);
        uStack_401 = (undefined1)uStack_d0;
        uStack_400 = (undefined7)(CONCAT17(uStack_c9,uStack_d0) >> 8);
        uStack_3f0 = (undefined7)(CONCAT17(uStack_b9,CONCAT61(uStack_bf,uStack_c0)) >> 8);
        *(undefined1 *)(param_1 + 1) = 0xc;
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(cStack_c8,uStack_400);
        *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_401,uStack_408);
        param_1[4] = CONCAT71(uStack_3f0,uStack_c0);
        param_1[3] = CONCAT71(uStack_3f8,cStack_c8);
        *param_1 = 2;
        return;
      }
      func_0x000108a07a3c(&UNK_108d8639e,0x37,&uStack_180,&UNK_10b2c0eb8,&UNK_10b2c0b18);
LAB_1035d054c:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1035d0550);
      (*pcVar12)();
    }
    uVar14 = param_2[1];
    *(undefined1 *)(param_1 + 1) = 0;
    *(char *)((long)param_1 + 9) = (char)uVar14;
  }
  *param_1 = 2;
  return;
}

