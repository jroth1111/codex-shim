
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014e010c(ulong *param_1,ulong *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *******ppppppplVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  code *pcVar10;
  long lVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  long *****ppppplVar20;
  undefined8 extraout_x1;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long ******pppppplVar25;
  undefined8 uVar26;
  long ******pppppplVar27;
  undefined8 *puVar28;
  undefined1 auVar29 [16];
  long *******ppppppplStack_5d8;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined8 uStack_5a8;
  long *******ppppppplStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  long ******pppppplStack_580;
  long ******pppppplStack_578;
  long ******pppppplStack_560;
  code *pcStack_558;
  ulong uStack_550;
  long ******pppppplStack_548;
  code *pcStack_540;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong *puStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  undefined1 uStack_470;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  undefined8 uStack_438;
  undefined1 ******ppppppuStack_430;
  undefined8 uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong *puStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  undefined1 uStack_3c0;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  undefined1 *****pppppuStack_380;
  undefined8 uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong *puStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  undefined1 uStack_310;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 ****ppppuStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong *puStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined1 uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined1 ***pppuStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong *puStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined1 uStack_1b0;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined1 uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 uStack_50;
  
  uVar17 = *param_2;
  uVar18 = param_2[1];
  uVar22 = param_2[2];
  uVar15 = param_2[0xf];
  uVar6 = param_2[0x10];
  *param_2 = 0x8000000000000001;
  if (uVar17 != 0x8000000000000001) {
    uStack_98 = param_2[8];
    uStack_a0 = param_2[7];
    uStack_88 = param_2[10];
    uStack_90 = param_2[9];
    puStack_78 = (ulong *)param_2[0xc];
    uStack_80 = param_2[0xb];
    uStack_68 = param_2[0xe];
    uStack_70 = param_2[0xd];
    uStack_a8 = param_2[6];
    uStack_b0 = param_2[5];
    uStack_50 = 0;
    uStack_60 = uVar15;
    uStack_58 = uVar6;
    uVar14 = func_0x0001015f3754(param_1,&uStack_b0);
    if (*param_1 == 2) {
      if ((uVar17 & 0x7fffffffffffffff) != 0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar14 = (*(code *)PTR__free_10b61b0a8)(uVar18);
        return uVar14;
      }
    }
    else {
      uStack_88 = param_1[5];
      uStack_90 = param_1[4];
      puStack_78 = (ulong *)param_1[7];
      uStack_80 = param_1[6];
      uStack_68 = param_1[9];
      uStack_70 = param_1[8];
      uStack_60 = param_1[10];
      uStack_b0 = *param_1;
      uStack_98 = param_1[3];
      uStack_a8 = param_1[1];
      uStack_a0 = param_1[2];
      if ((uStack_b0 & 1) == 0) {
        uStack_b0 = 1;
        uStack_a8 = uVar15;
        uStack_a0 = uVar6;
      }
      uVar15 = uVar18;
      if (uVar17 == 0x8000000000000000) {
        if (uVar22 == 0) {
          uVar15 = 1;
        }
        else {
          uVar15 = _malloc(uVar22);
          if (uVar15 == 0) {
            func_0x0001087c9084(1,uVar22);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e0208);
            (*pcVar10)();
          }
        }
        uVar14 = _memcpy(uVar15,uVar18,uVar22);
        uVar17 = uVar22;
      }
      uVar6 = uStack_70;
      if (uStack_70 == uStack_80) {
        uVar14 = __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_80);
      }
      puVar16 = puStack_78;
      if (uVar6 != 0) {
        uVar14 = _memmove(puStack_78 + 3,puStack_78,uVar6 * 0x18);
      }
      *puVar16 = uVar17;
      puVar16[1] = uVar15;
      puVar16[2] = uVar22;
      param_1[5] = uStack_88;
      param_1[4] = uStack_90;
      param_1[7] = (ulong)puStack_78;
      param_1[6] = uStack_80;
      param_1[10] = uStack_60;
      param_1[1] = uStack_a8;
      *param_1 = uStack_b0;
      param_1[3] = uStack_98;
      param_1[2] = uStack_a0;
      param_1[9] = uStack_68;
      param_1[8] = uVar6 + 1;
    }
    return uVar14;
  }
  uVar14 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
  FUN_100de3b58(&uStack_b0);
  auVar29 = __Unwind_Resume(uVar14);
  puVar19 = auVar29._8_8_;
  puVar16 = auVar29._0_8_;
  uStack_b8 = 0x1014e0300;
  uVar24 = *puVar19;
  uVar7 = puVar19[1];
  uVar23 = puVar19[2];
  uVar4 = puVar19[0xf];
  uVar8 = puVar19[0x10];
  *puVar19 = 0x8000000000000001;
  uStack_f0 = uVar6;
  uStack_e8 = uVar17;
  uStack_e0 = uVar15;
  uStack_d8 = uVar22;
  uStack_d0 = uVar18;
  uStack_c8 = uVar14;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (uVar24 != 0x8000000000000001) {
    uStack_148 = puVar19[8];
    uStack_150 = puVar19[7];
    uStack_138 = puVar19[10];
    uStack_140 = puVar19[9];
    puStack_128 = (ulong *)puVar19[0xc];
    uStack_130 = puVar19[0xb];
    uStack_118 = puVar19[0xe];
    uStack_120 = puVar19[0xd];
    uStack_158 = puVar19[6];
    uStack_160 = puVar19[5];
    uStack_100 = 0;
    uStack_110 = uVar4;
    uStack_108 = uVar8;
    uVar14 = FUN_1015cf9a8(puVar16,&uStack_160);
    if (*puVar16 == 2) {
      uVar18 = uVar7;
      if ((uVar24 & 0x7fffffffffffffff) != 0) goto code_r0x000108aa97c4;
    }
    else {
      uStack_138 = puVar16[5];
      uStack_140 = puVar16[4];
      puStack_128 = (ulong *)puVar16[7];
      uStack_130 = puVar16[6];
      uStack_118 = puVar16[9];
      uStack_120 = puVar16[8];
      uStack_110 = puVar16[10];
      uStack_160 = *puVar16;
      uStack_148 = puVar16[3];
      uStack_158 = puVar16[1];
      uStack_150 = puVar16[2];
      if ((uStack_160 & 1) == 0) {
        uStack_160 = 1;
        uStack_158 = uVar4;
        uStack_150 = uVar8;
      }
      uVar17 = uVar7;
      if (uVar24 == 0x8000000000000000) {
        if (uVar23 == 0) {
          uVar17 = 1;
        }
        else {
          uVar17 = _malloc(uVar23);
          if (uVar17 == 0) {
            func_0x0001087c9084(1,uVar23);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e03fc);
            (*pcVar10)();
          }
        }
        uVar14 = _memcpy(uVar17,uVar7,uVar23);
        uVar24 = uVar23;
      }
      uVar15 = uStack_120;
      if (uStack_120 == uStack_130) {
        uVar14 = __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_130);
      }
      puVar19 = puStack_128;
      if (uVar15 != 0) {
        uVar14 = _memmove(puStack_128 + 3,puStack_128,uVar15 * 0x18);
      }
      *puVar19 = uVar24;
      puVar19[1] = uVar17;
      puVar19[2] = uVar23;
      puVar16[5] = uStack_138;
      puVar16[4] = uStack_140;
      puVar16[7] = (ulong)puStack_128;
      puVar16[6] = uStack_130;
      puVar16[10] = uStack_110;
      puVar16[1] = uStack_158;
      *puVar16 = uStack_160;
      puVar16[3] = uStack_148;
      puVar16[2] = uStack_150;
      puVar16[9] = uStack_118;
      puVar16[8] = uVar15 + 1;
    }
    return uVar14;
  }
  uVar14 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
  FUN_100de3b58(&uStack_160);
  auVar29 = __Unwind_Resume(uVar14);
  puVar19 = auVar29._8_8_;
  puVar16 = auVar29._0_8_;
  pcStack_168 = FUN_1014e04f4;
  uVar17 = *puVar19;
  uVar18 = puVar19[1];
  uVar22 = puVar19[2];
  uVar15 = puVar19[0xf];
  uVar6 = puVar19[0x10];
  *puVar19 = 0x8000000000000001;
  uStack_1a0 = uVar8;
  uStack_198 = uVar24;
  uStack_190 = uVar4;
  uStack_188 = uVar23;
  uStack_180 = uVar7;
  uStack_178 = uVar14;
  ppuStack_170 = &puStack_c0;
  if (uVar17 != 0x8000000000000001) {
    uStack_1f8 = puVar19[8];
    uStack_200 = puVar19[7];
    uStack_1e8 = puVar19[10];
    uStack_1f0 = puVar19[9];
    puStack_1d8 = (ulong *)puVar19[0xc];
    uStack_1e0 = puVar19[0xb];
    uStack_1c8 = puVar19[0xe];
    uStack_1d0 = puVar19[0xd];
    uStack_208 = puVar19[6];
    uStack_210 = puVar19[5];
    uStack_1b0 = 0;
    uStack_1c0 = uVar15;
    uStack_1b8 = uVar6;
    uVar14 = FUN_10061703c(puVar16,&uStack_210);
    if (*puVar16 == 2) {
      if ((uVar17 & 0x7fffffffffffffff) != 0) goto code_r0x000108aa97c4;
    }
    else {
      uStack_1e8 = puVar16[5];
      uStack_1f0 = puVar16[4];
      puStack_1d8 = (ulong *)puVar16[7];
      uStack_1e0 = puVar16[6];
      uStack_1c8 = puVar16[9];
      uStack_1d0 = puVar16[8];
      uStack_1c0 = puVar16[10];
      uStack_210 = *puVar16;
      uStack_1f8 = puVar16[3];
      uStack_208 = puVar16[1];
      uStack_200 = puVar16[2];
      if ((uStack_210 & 1) == 0) {
        uStack_210 = 1;
        uStack_208 = uVar15;
        uStack_200 = uVar6;
      }
      uVar15 = uVar18;
      if (uVar17 == 0x8000000000000000) {
        if (uVar22 == 0) {
          uVar15 = 1;
        }
        else {
          uVar15 = _malloc(uVar22);
          if (uVar15 == 0) {
            func_0x0001087c9084(1,uVar22);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e05f0);
            (*pcVar10)();
          }
        }
        uVar14 = _memcpy(uVar15,uVar18,uVar22);
        uVar17 = uVar22;
      }
      uVar6 = uStack_1d0;
      if (uStack_1d0 == uStack_1e0) {
        uVar14 = __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_1e0);
      }
      puVar19 = puStack_1d8;
      if (uVar6 != 0) {
        uVar14 = _memmove(puStack_1d8 + 3,puStack_1d8,uVar6 * 0x18);
      }
      *puVar19 = uVar17;
      puVar19[1] = uVar15;
      puVar19[2] = uVar22;
      puVar16[5] = uStack_1e8;
      puVar16[4] = uStack_1f0;
      puVar16[7] = (ulong)puStack_1d8;
      puVar16[6] = uStack_1e0;
      puVar16[10] = uStack_1c0;
      puVar16[1] = uStack_208;
      *puVar16 = uStack_210;
      puVar16[3] = uStack_1f8;
      puVar16[2] = uStack_200;
      puVar16[9] = uStack_1c8;
      puVar16[8] = uVar6 + 1;
    }
    return uVar14;
  }
  uVar14 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
  FUN_100de3b58(&uStack_210);
  auVar29 = __Unwind_Resume(uVar14);
  puVar19 = auVar29._8_8_;
  puVar16 = auVar29._0_8_;
  uStack_218 = 0x1014e06e8;
  uVar24 = *puVar19;
  uVar7 = puVar19[1];
  uVar23 = puVar19[2];
  uVar4 = puVar19[0xf];
  uVar8 = puVar19[0x10];
  *puVar19 = 0x8000000000000001;
  uStack_250 = uVar6;
  uStack_248 = uVar17;
  uStack_240 = uVar15;
  uStack_238 = uVar22;
  uStack_230 = uVar18;
  uStack_228 = uVar14;
  pppuStack_220 = &ppuStack_170;
  if (uVar24 != 0x8000000000000001) {
    uStack_2a8 = puVar19[8];
    uStack_2b0 = puVar19[7];
    uStack_298 = puVar19[10];
    uStack_2a0 = puVar19[9];
    puStack_288 = (ulong *)puVar19[0xc];
    uStack_290 = puVar19[0xb];
    uStack_278 = puVar19[0xe];
    uStack_280 = puVar19[0xd];
    uStack_2b8 = puVar19[6];
    uStack_2c0 = puVar19[5];
    uStack_260 = 0;
    uStack_270 = uVar4;
    uStack_268 = uVar8;
    uVar14 = FUN_10060c644(puVar16,&uStack_2c0);
    if (*puVar16 == 2) {
      uVar18 = uVar7;
      if ((uVar24 & 0x7fffffffffffffff) != 0) goto code_r0x000108aa97c4;
    }
    else {
      uStack_298 = puVar16[5];
      uStack_2a0 = puVar16[4];
      puStack_288 = (ulong *)puVar16[7];
      uStack_290 = puVar16[6];
      uStack_278 = puVar16[9];
      uStack_280 = puVar16[8];
      uStack_270 = puVar16[10];
      uStack_2c0 = *puVar16;
      uStack_2a8 = puVar16[3];
      uStack_2b8 = puVar16[1];
      uStack_2b0 = puVar16[2];
      if ((uStack_2c0 & 1) == 0) {
        uStack_2c0 = 1;
        uStack_2b8 = uVar4;
        uStack_2b0 = uVar8;
      }
      uVar17 = uVar7;
      if (uVar24 == 0x8000000000000000) {
        if (uVar23 == 0) {
          uVar17 = 1;
        }
        else {
          uVar17 = _malloc(uVar23);
          if (uVar17 == 0) {
            func_0x0001087c9084(1,uVar23);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e07e4);
            (*pcVar10)();
          }
        }
        uVar14 = _memcpy(uVar17,uVar7,uVar23);
        uVar24 = uVar23;
      }
      uVar15 = uStack_280;
      if (uStack_280 == uStack_290) {
        uVar14 = __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_290);
      }
      puVar19 = puStack_288;
      if (uVar15 != 0) {
        uVar14 = _memmove(puStack_288 + 3,puStack_288,uVar15 * 0x18);
      }
      *puVar19 = uVar24;
      puVar19[1] = uVar17;
      puVar19[2] = uVar23;
      puVar16[5] = uStack_298;
      puVar16[4] = uStack_2a0;
      puVar16[7] = (ulong)puStack_288;
      puVar16[6] = uStack_290;
      puVar16[10] = uStack_270;
      puVar16[1] = uStack_2b8;
      *puVar16 = uStack_2c0;
      puVar16[3] = uStack_2a8;
      puVar16[2] = uStack_2b0;
      puVar16[9] = uStack_278;
      puVar16[8] = uVar15 + 1;
    }
    return uVar14;
  }
  uVar14 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
  FUN_100de3b58(&uStack_2c0);
  auVar29 = __Unwind_Resume(uVar14);
  puVar19 = auVar29._8_8_;
  puVar16 = auVar29._0_8_;
  uStack_2c8 = 0x1014e08dc;
  uVar17 = *puVar19;
  uVar18 = puVar19[1];
  uVar22 = puVar19[2];
  uVar15 = puVar19[0xf];
  uVar6 = puVar19[0x10];
  *puVar19 = 0x8000000000000001;
  uStack_300 = uVar8;
  uStack_2f8 = uVar24;
  uStack_2f0 = uVar4;
  uStack_2e8 = uVar23;
  uStack_2e0 = uVar7;
  uStack_2d8 = uVar14;
  ppppuStack_2d0 = &pppuStack_220;
  if (uVar17 != 0x8000000000000001) {
    uStack_358 = puVar19[8];
    uStack_360 = puVar19[7];
    uStack_348 = puVar19[10];
    uStack_350 = puVar19[9];
    puStack_338 = (ulong *)puVar19[0xc];
    uStack_340 = puVar19[0xb];
    uStack_328 = puVar19[0xe];
    uStack_330 = puVar19[0xd];
    uStack_368 = puVar19[6];
    uStack_370 = puVar19[5];
    uStack_310 = 0;
    uStack_320 = uVar15;
    uStack_318 = uVar6;
    uVar14 = FUN_1015e67e0(puVar16,&uStack_370);
    if (*puVar16 == 2) {
      if ((uVar17 & 0x7fffffffffffffff) != 0) goto code_r0x000108aa97c4;
    }
    else {
      uStack_348 = puVar16[5];
      uStack_350 = puVar16[4];
      puStack_338 = (ulong *)puVar16[7];
      uStack_340 = puVar16[6];
      uStack_328 = puVar16[9];
      uStack_330 = puVar16[8];
      uStack_320 = puVar16[10];
      uStack_370 = *puVar16;
      uStack_358 = puVar16[3];
      uStack_368 = puVar16[1];
      uStack_360 = puVar16[2];
      if ((uStack_370 & 1) == 0) {
        uStack_370 = 1;
        uStack_368 = uVar15;
        uStack_360 = uVar6;
      }
      uVar15 = uVar18;
      if (uVar17 == 0x8000000000000000) {
        if (uVar22 == 0) {
          uVar15 = 1;
        }
        else {
          uVar15 = _malloc(uVar22);
          if (uVar15 == 0) {
            func_0x0001087c9084(1,uVar22);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e09d8);
            (*pcVar10)();
          }
        }
        uVar14 = _memcpy(uVar15,uVar18,uVar22);
        uVar17 = uVar22;
      }
      uVar6 = uStack_330;
      if (uStack_330 == uStack_340) {
        uVar14 = __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_340);
      }
      puVar19 = puStack_338;
      if (uVar6 != 0) {
        uVar14 = _memmove(puStack_338 + 3,puStack_338,uVar6 * 0x18);
      }
      *puVar19 = uVar17;
      puVar19[1] = uVar15;
      puVar19[2] = uVar22;
      puVar16[5] = uStack_348;
      puVar16[4] = uStack_350;
      puVar16[7] = (ulong)puStack_338;
      puVar16[6] = uStack_340;
      puVar16[10] = uStack_320;
      puVar16[1] = uStack_368;
      *puVar16 = uStack_370;
      puVar16[3] = uStack_358;
      puVar16[2] = uStack_360;
      puVar16[9] = uStack_328;
      puVar16[8] = uVar6 + 1;
    }
    return uVar14;
  }
  uVar14 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
  FUN_100de3b58(&uStack_370);
  auVar29 = __Unwind_Resume(uVar14);
  puVar19 = auVar29._8_8_;
  puVar16 = auVar29._0_8_;
  uStack_378 = 0x1014e0ad0;
  uVar24 = *puVar19;
  uVar7 = puVar19[1];
  uVar23 = puVar19[2];
  uVar4 = puVar19[0xf];
  uVar8 = puVar19[0x10];
  *puVar19 = 0x8000000000000001;
  uStack_3b0 = uVar6;
  uStack_3a8 = uVar17;
  uStack_3a0 = uVar15;
  uStack_398 = uVar22;
  uStack_390 = uVar18;
  uStack_388 = uVar14;
  pppppuStack_380 = &ppppuStack_2d0;
  if (uVar24 != 0x8000000000000001) {
    uStack_408 = puVar19[8];
    uStack_410 = puVar19[7];
    uStack_3f8 = puVar19[10];
    uStack_400 = puVar19[9];
    puStack_3e8 = (ulong *)puVar19[0xc];
    uStack_3f0 = puVar19[0xb];
    uStack_3d8 = puVar19[0xe];
    uStack_3e0 = puVar19[0xd];
    uStack_418 = puVar19[6];
    uStack_420 = puVar19[5];
    uStack_3c0 = 0;
    uStack_3d0 = uVar4;
    uStack_3c8 = uVar8;
    uVar14 = FUN_1015cdf0c(puVar16,&uStack_420);
    if (*puVar16 == 2) {
      uVar18 = uVar7;
      if ((uVar24 & 0x7fffffffffffffff) != 0) goto code_r0x000108aa97c4;
    }
    else {
      uStack_3f8 = puVar16[5];
      uStack_400 = puVar16[4];
      puStack_3e8 = (ulong *)puVar16[7];
      uStack_3f0 = puVar16[6];
      uStack_3d8 = puVar16[9];
      uStack_3e0 = puVar16[8];
      uStack_3d0 = puVar16[10];
      uStack_420 = *puVar16;
      uStack_408 = puVar16[3];
      uStack_418 = puVar16[1];
      uStack_410 = puVar16[2];
      if ((uStack_420 & 1) == 0) {
        uStack_420 = 1;
        uStack_418 = uVar4;
        uStack_410 = uVar8;
      }
      uVar17 = uVar7;
      if (uVar24 == 0x8000000000000000) {
        if (uVar23 == 0) {
          uVar17 = 1;
        }
        else {
          uVar17 = _malloc(uVar23);
          if (uVar17 == 0) {
            func_0x0001087c9084(1,uVar23);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e0bcc);
            (*pcVar10)();
          }
        }
        uVar14 = _memcpy(uVar17,uVar7,uVar23);
        uVar24 = uVar23;
      }
      uVar15 = uStack_3e0;
      if (uStack_3e0 == uStack_3f0) {
        uVar14 = __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_3f0);
      }
      puVar19 = puStack_3e8;
      if (uVar15 != 0) {
        uVar14 = _memmove(puStack_3e8 + 3,puStack_3e8,uVar15 * 0x18);
      }
      *puVar19 = uVar24;
      puVar19[1] = uVar17;
      puVar19[2] = uVar23;
      puVar16[5] = uStack_3f8;
      puVar16[4] = uStack_400;
      puVar16[7] = (ulong)puStack_3e8;
      puVar16[6] = uStack_3f0;
      puVar16[10] = uStack_3d0;
      puVar16[1] = uStack_418;
      *puVar16 = uStack_420;
      puVar16[3] = uStack_408;
      puVar16[2] = uStack_410;
      puVar16[9] = uStack_3d8;
      puVar16[8] = uVar15 + 1;
    }
    return uVar14;
  }
  uVar14 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
  FUN_100de3b58(&uStack_420);
  auVar29 = __Unwind_Resume(uVar14);
  puVar19 = auVar29._8_8_;
  puVar16 = auVar29._0_8_;
  uStack_428 = 0x1014e0cc4;
  uVar17 = *puVar19;
  uVar18 = puVar19[1];
  uVar22 = puVar19[2];
  uVar15 = puVar19[0xf];
  uVar6 = puVar19[0x10];
  *puVar19 = 0x8000000000000001;
  uStack_460 = uVar8;
  uStack_458 = uVar24;
  uStack_450 = uVar4;
  uStack_448 = uVar23;
  uStack_440 = uVar7;
  uStack_438 = uVar14;
  ppppppuStack_430 = &pppppuStack_380;
  if (uVar17 != 0x8000000000000001) {
    uStack_4b8 = puVar19[8];
    uStack_4c0 = puVar19[7];
    uStack_4a8 = puVar19[10];
    uStack_4b0 = puVar19[9];
    puStack_498 = (ulong *)puVar19[0xc];
    uStack_4a0 = puVar19[0xb];
    uStack_488 = puVar19[0xe];
    uStack_490 = puVar19[0xd];
    uStack_4c8 = puVar19[6];
    uStack_4d0 = puVar19[5];
    uStack_470 = 0;
    uStack_480 = uVar15;
    uStack_478 = uVar6;
    uVar14 = FUN_10160334c(puVar16,&uStack_4d0);
    if (*puVar16 == 2) {
      if ((uVar17 & 0x7fffffffffffffff) != 0) goto code_r0x000108aa97c4;
    }
    else {
      uStack_4a8 = puVar16[5];
      uStack_4b0 = puVar16[4];
      puStack_498 = (ulong *)puVar16[7];
      uStack_4a0 = puVar16[6];
      uStack_488 = puVar16[9];
      uStack_490 = puVar16[8];
      uStack_480 = puVar16[10];
      uStack_4d0 = *puVar16;
      uStack_4b8 = puVar16[3];
      uStack_4c8 = puVar16[1];
      uStack_4c0 = puVar16[2];
      if ((uStack_4d0 & 1) == 0) {
        uStack_4d0 = 1;
        uStack_4c8 = uVar15;
        uStack_4c0 = uVar6;
      }
      uVar15 = uVar18;
      if (uVar17 == 0x8000000000000000) {
        if (uVar22 == 0) {
          uVar15 = 1;
        }
        else {
          uVar15 = _malloc(uVar22);
          if (uVar15 == 0) {
            func_0x0001087c9084(1,uVar22);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e0dc0);
            (*pcVar10)();
          }
        }
        uVar14 = _memcpy(uVar15,uVar18,uVar22);
        uVar17 = uVar22;
      }
      uVar6 = uStack_490;
      if (uStack_490 == uStack_4a0) {
        uVar14 = __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_4a0);
      }
      puVar19 = puStack_498;
      if (uVar6 != 0) {
        uVar14 = _memmove(puStack_498 + 3,puStack_498,uVar6 * 0x18);
      }
      *puVar19 = uVar17;
      puVar19[1] = uVar15;
      puVar19[2] = uVar22;
      puVar16[5] = uStack_4a8;
      puVar16[4] = uStack_4b0;
      puVar16[7] = (ulong)puStack_498;
      puVar16[6] = uStack_4a0;
      puVar16[10] = uStack_480;
      puVar16[1] = uStack_4c8;
      *puVar16 = uStack_4d0;
      puVar16[3] = uStack_4b8;
      puVar16[2] = uStack_4c0;
      puVar16[9] = uStack_488;
      puVar16[8] = uVar6 + 1;
    }
    return uVar14;
  }
  uVar14 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd62fe,0x8d,&UNK_10b24e0b8);
  FUN_100de3b58(&uStack_4d0);
  auVar29 = __Unwind_Resume(uVar14);
  uVar14 = auVar29._8_8_;
  puVar16 = auVar29._0_8_;
  if (*puVar16 != 2) {
    uVar17 = puVar16[1];
    if ((*puVar16 & 1) != 0) {
      uVar17 = uVar17 + (*(long *)(puVar16[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(puVar16[2] + 0x60))(uVar17,puVar16 + 3);
  }
  uStack_5c0 = (long *******)CONCAT44(uStack_5c0._4_4_,(undefined4)uStack_5c0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar17 = puVar16[4],
     uStack_5c0 = (long *******)CONCAT44(uStack_5c0._4_4_,(undefined4)uStack_5c0), uVar17 != 0)) {
    ppppppplStack_5a0 = *(long ********)(uVar17 + 0x10);
    uStack_598 = (undefined4)*(undefined8 *)(uVar17 + 0x18);
    uStack_594 = (undefined4)((ulong)*(undefined8 *)(uVar17 + 0x18) >> 0x20);
    uStack_5c0 = (long *******)&ppppppplStack_5a0;
    uStack_5b8._0_4_ = 0xc7b3a0;
    uStack_5b8._4_4_ = 1;
    FUN_1011d7d74(puVar16,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&uStack_5c0);
  }
  bVar9 = (byte)puVar16[0x14];
  if (bVar9 < 4) {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        func_0x000108a07af4(&UNK_10b217040);
        goto LAB_1014e1664;
      }
      *(undefined4 *)((long)puVar16 + 0xa1) = 0x1010100;
      plVar21 = (long *)puVar16[8];
      lVar11 = *plVar21;
      *plVar21 = lVar11 + 1;
      if (lVar11 < 0) goto LAB_1014e1664;
      puVar16[0xe] = (ulong)plVar21;
      *(undefined1 *)((long)puVar16 + 0xa4) = 0;
      ppppppplVar5 = (long *******)puVar16[9];
      uVar17 = puVar16[10];
      uStack_598 = (undefined4)uVar17;
      uStack_594 = (undefined4)(uVar17 >> 0x20);
      pppppplVar25 = (long ******)puVar16[0xb];
      ppppplVar20 = *pppppplVar25;
      *pppppplVar25 = (long *****)((long)ppppplVar20 + 1);
      ppppppplStack_5a0 = ppppppplVar5;
      if ((long)ppppplVar20 < 0) goto LAB_1014e1664;
      *(undefined2 *)((long)puVar16 + 0xa2) = 0;
      pppppplVar27 = (long ******)puVar16[8];
      uStack_5b8._0_4_ = (undefined4)puVar16[6];
      uStack_5b8._4_4_ = (undefined4)(puVar16[6] >> 0x20);
      uStack_5c0._0_4_ = (undefined4)puVar16[5];
      uStack_5c0._4_4_ = (undefined4)(puVar16[5] >> 0x20);
      uStack_5b0 = (undefined4)puVar16[7];
      uStack_5ac = (undefined4)(puVar16[7] >> 0x20);
      pppppplStack_580 = pppppplVar25;
      pppppplStack_560 = pppppplVar27;
      uVar26 = __ZN10tokio_util4sync18cancellation_token17CancellationToken11child_token17hbb1a1ff9d9cc5a86E
                         (puVar16 + 0xc);
      auVar29 = (**(code **)(uVar17 + 0x30))
                          (ppppppplVar5,pppppplVar25,pppppplVar27,&uStack_5c0,uVar26);
      *(undefined1 (*) [16])(puVar16 + 0x15) = auVar29;
    }
    else {
      if (bVar9 != 3) {
        func_0x000108a07b10(&UNK_10b217040);
        goto LAB_1014e1664;
      }
      auVar29 = *(undefined1 (*) [16])(puVar16 + 0x15);
    }
    (**(code **)(auVar29._8_8_ + 0x18))(&uStack_5c0,auVar29._0_8_,uVar14);
    if (uStack_5c0 != (long *******)0x8000000000000001) {
      *(undefined1 *)((long)puVar16 + 0xa1) = 1;
      puVar16[0x10] = CONCAT44(uStack_5b8._4_4_,(undefined4)uStack_5b8);
      puVar16[0xf] = (ulong)uStack_5c0;
      puVar16[0x11] = CONCAT44(uStack_5ac,uStack_5b0);
      uVar17 = puVar16[0x15];
      puVar28 = (undefined8 *)puVar16[0x16];
      pcVar10 = (code *)*puVar28;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(uVar17);
      }
      if (puVar28[1] != 0) {
        _free(uVar17);
      }
      plVar21 = *(long **)(puVar16[0xb] + 0x10);
      lVar11 = *plVar21;
      *plVar21 = lVar11 + 1;
      if (lVar11 < 0) goto LAB_1014e1664;
      puVar16[0x12] = (ulong)plVar21;
      puVar16[0x15] = (ulong)(plVar21 + 2);
      *(undefined1 *)(puVar16 + 0x10f) = 0;
      goto LAB_1014e10c4;
    }
    *(undefined1 *)(puVar16 + 0x14) = 3;
    uVar17 = *puVar16;
joined_r0x0001014e13b0:
    uVar14 = 1;
  }
  else {
    if (bVar9 == 4) {
LAB_1014e10c4:
      pppppplVar25 = (long ******)(puVar16 + 0x15);
      auVar29 = FUN_1005a38b4(pppppplVar25,uVar14);
      ppppplVar20 = auVar29._8_8_;
      if ((auVar29._0_8_ & 1) != 0) {
        uVar14 = 1;
        *(undefined1 *)(puVar16 + 0x14) = 4;
        uVar17 = *puVar16;
        goto joined_r0x0001014e13b0;
      }
      puVar16[0x13] = (ulong)ppppplVar20;
      if ((char)puVar16[0x10f] == '\x03') {
        FUN_100c97ff8(puVar16 + 0x16);
        ppppplVar20 = (long *****)puVar16[0x13];
      }
      if (ppppplVar20 != (long *****)0x0) {
        *pppppplVar25 = ppppplVar20;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
          if (1 < bRam000000010b62a4d8 - 1) {
            if (bRam000000010b62a4d8 != 0) {
              cVar12 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                                 );
              if (cVar12 != '\0') goto LAB_1014e114c;
            }
            goto LAB_1014e1238;
          }
LAB_1014e114c:
          uVar17 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                             );
          if ((uVar17 & 1) == 0) goto LAB_1014e1238;
          uStack_5a8 = ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                       + 0x30;
          pcStack_558 = 
          __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          pppppplStack_578 = (long ******)&pppppplStack_560;
          pppppplStack_580 = (long ******)s_0failed_to_flush_rollout_before_c_108ac0a20;
          ppppppplStack_5d8 = &pppppplStack_580;
          puStack_5d0 = &UNK_10b208fd0;
          uStack_5b8 = (long *******)&ppppppplStack_5d8;
          uStack_5c0._0_4_ = 1;
          uStack_5c0._4_4_ = 0;
          uStack_5b0 = 1;
          uStack_5ac = 0;
          pppppplStack_560 = pppppplVar25;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                    (___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                     ,&uStack_5c0);
          lVar11 = 
          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
          ;
          uStack_5c0 = (long *******)CONCAT44(uStack_5c0._4_4_,(undefined4)uStack_5c0);
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (uStack_5c0 = (long *******)CONCAT44(uStack_5c0._4_4_,(undefined4)uStack_5c0),
             1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            ppppppplStack_5a0 = (long *******)0x2;
            uStack_598 = (undefined4)
                         *(undefined8 *)
                          (
                          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                          + 0x20);
            uStack_594 = (undefined4)
                         ((ulong)*(undefined8 *)
                                  (
                                  ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                                  + 0x20) >> 0x20);
            uStack_590 = (undefined4)
                         *(undefined8 *)
                          (
                          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                          + 0x28);
            uStack_58c = (undefined4)
                         ((ulong)*(undefined8 *)
                                  (
                                  ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                                  + 0x28) >> 0x20);
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar13 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppppplStack_5a0);
            if (iVar13 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar11,puVar3,puVar2,&ppppppplStack_5a0,&uStack_5c0);
            }
          }
        }
        else {
LAB_1014e1238:
          lVar11 = 
          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
          ;
          uStack_5b8 = (long *******)CONCAT44(uStack_5b8._4_4_,(undefined4)uStack_5b8);
          uStack_5a8 = CONCAT44(uStack_5a8._4_4_,(undefined4)uStack_5a8);
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (uStack_5b8 = (long *******)CONCAT44(uStack_5b8._4_4_,(undefined4)uStack_5b8),
             uStack_5a8 = CONCAT44(uStack_5a8._4_4_,(undefined4)uStack_5a8),
             1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puStack_5d0 = *(undefined **)
                           (
                           ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                           + 0x20);
            uStack_5c8 = *(undefined8 *)
                          (
                          ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                          + 0x28);
            ppppppplStack_5d8 = (long *******)0x2;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar3 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_109adfc03;
            }
            iVar13 = (**(code **)(puVar2 + 0x18))(puVar3,&ppppppplStack_5d8);
            if (iVar13 != 0) {
              uStack_5a8 = ___ZN10codex_core5tasks55__LT_impl_u20_codex_core__session__session__Session_GT_10start_task28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h33e5a587f2d8f6c9E
                           + 0x30;
              pcStack_558 = 
              __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
              ;
              pppppplStack_578 = (long ******)&pppppplStack_560;
              pppppplStack_580 = (long ******)s_0failed_to_flush_rollout_before_c_108ac0a20;
              pppppplStack_548 = (long ******)&pppppplStack_580;
              pcStack_540 = (code *)&UNK_10b208fd0;
              uStack_5b8 = &pppppplStack_548;
              uStack_5c0._0_4_ = 1;
              uStack_5c0._4_4_ = 0;
              uStack_5b0 = 1;
              uStack_5ac = 0;
              uStack_598 = SUB84(puStack_5d0,0);
              uStack_594 = (undefined4)((ulong)puStack_5d0 >> 0x20);
              ppppppplStack_5a0 = ppppppplStack_5d8;
              uStack_590 = (undefined4)uStack_5c8;
              uStack_58c = (undefined4)((ulong)uStack_5c8 >> 0x20);
              pppppplStack_560 = pppppplVar25;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar11,puVar3,puVar2,&ppppppplStack_5a0,&uStack_5c0);
            }
          }
        }
        uVar17 = puVar16[0x12];
        uVar15 = puVar16[0xe];
        pcStack_540 = 
        __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
        pppppplStack_548 = pppppplVar25;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&pppppplStack_560,s_QFailed_to_save_the_conversation_108ac0a53,&pppppplStack_548)
        ;
        uStack_5b8._4_4_ = SUB84(pcStack_558,0);
        uStack_5b0 = (undefined4)((ulong)pcStack_558 >> 0x20);
        uStack_5c0._4_4_ = SUB84(pppppplStack_560,0);
        uStack_5b8._0_4_ = (undefined4)((ulong)pppppplStack_560 >> 0x20);
        uStack_5ac = (undefined4)uStack_550;
        uStack_5a8._0_4_ = (undefined4)(uStack_550 >> 0x20);
        ppppppplStack_5a0 = (long *******)CONCAT44(uStack_5c0._4_4_,(undefined4)uStack_5c0);
        uStack_598 = (undefined4)uStack_5b8;
        *(undefined4 *)(puVar16 + 0x16) = 1;
        *(ulong *)((long)puVar16 + 0xbc) = CONCAT44(uStack_5b8._4_4_,(undefined4)uStack_5b8);
        *(long ********)((long)puVar16 + 0xb4) = ppppppplStack_5a0;
        puVar16[0x19] = uStack_550;
        puVar16[0x18] = (ulong)pcStack_558;
        puVar16[0x51] = uVar17 + 0x10;
        puVar16[0x52] = uVar15 + 0x10;
        *(undefined1 *)(puVar16 + 0xcb) = 0;
        uStack_594 = uStack_5b8._4_4_;
        uStack_590 = uStack_5b0;
        uStack_58c = uStack_5ac;
        uStack_588 = (undefined4)uStack_5a8;
        uStack_5c0 = ppppppplStack_5a0;
        goto LAB_1014e138c;
      }
LAB_1014e1400:
      auVar29 = __ZN10tokio_util4sync18cancellation_token17CancellationToken12is_cancelled17hfcad7db0dfd3f315E
                          (puVar16 + 0xc);
      uVar26 = auVar29._8_8_;
      if ((auVar29._0_8_ & 1) == 0) {
        plVar21 = (long *)puVar16[0xe];
        lVar11 = *plVar21;
        *plVar21 = lVar11 + 1;
        if (lVar11 < 0) {
LAB_1014e1664:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1014e1668);
          (*pcVar10)();
        }
        *(undefined1 *)((long)puVar16 + 0xa1) = 0;
        puVar16[0x16] = puVar16[0x10];
        puVar16[0x15] = puVar16[0xf];
        puVar16[0x17] = puVar16[0x11];
        puVar16[0x18] = (ulong)(puVar16 + 0x12);
        puVar16[0x19] = (ulong)plVar21;
        *(undefined1 *)(puVar16 + 0x71) = 0;
        goto LAB_1014e143c;
      }
    }
    else {
      if (bVar9 == 5) {
LAB_1014e138c:
        iVar13 = FUN_10059e898(puVar16 + 0x16,uVar14);
        if (iVar13 != 0) {
          *(undefined1 *)(puVar16 + 0x14) = 5;
          uVar17 = *puVar16;
          goto joined_r0x0001014e13b0;
        }
        FUN_100d1ddbc(puVar16 + 0x16);
        uVar17 = puVar16[0x15];
        if ((uVar17 & 3) == 1) {
          uVar26 = *(undefined8 *)(uVar17 - 1);
          puVar28 = *(undefined8 **)(uVar17 + 7);
          pcVar10 = (code *)*puVar28;
          if (pcVar10 != (code *)0x0) {
            (*pcVar10)(uVar26);
          }
          if (puVar28[1] != 0) {
            _free(uVar26);
          }
          _free((undefined8 *)(uVar17 - 1));
        }
        goto LAB_1014e1400;
      }
LAB_1014e143c:
      uVar17 = FUN_10053cfd0(puVar16 + 0x15,uVar14);
      if ((uVar17 & 1) != 0) {
        *(undefined1 *)(puVar16 + 0x14) = 6;
        uVar17 = *puVar16;
        goto joined_r0x0001014e13b0;
      }
      FUN_100d28fdc(puVar16 + 0x15);
      uVar26 = extraout_x1;
    }
    puVar19 = puVar16 + 0xd;
    uVar17 = *puVar19;
    pcVar1 = (char *)(uVar17 + 0x18);
    if (*pcVar1 == '\0') {
      *pcVar1 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar1,uVar26,1000000000);
    }
    uStack_5c0 = (long *******)(uVar17 + 0x10);
    uStack_5b0 = SUB84(*uStack_5c0,0);
    uStack_5ac = (undefined4)((ulong)*uStack_5c0 >> 0x20);
    uStack_5b8 = (long *******)pcVar1;
    __ZN5tokio4sync6notify11NotifyGuard14notify_waiters17hd8e3750d9b2bdaa3E(&uStack_5c0);
    lVar11 = *(long *)puVar16[0x12];
    *(long *)puVar16[0x12] = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E();
    }
    if ((((*(byte *)((long)puVar16 + 0xa1) & 1) != 0) && (puVar16[0xf] != 0x8000000000000000)) &&
       (puVar16[0xf] != 0)) {
      _free(puVar16[0x10]);
    }
    *(undefined1 *)((long)puVar16 + 0xa1) = 0;
    lVar11 = *(long *)puVar16[0xe];
    *(long *)puVar16[0xe] = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E();
    }
    lVar11 = *(long *)puVar16[0xb];
    *(long *)puVar16[0xb] = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he5950738018d7f91E();
    }
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (puVar16 + 0xc);
    lVar11 = *(long *)puVar16[0xc];
    *(long *)puVar16[0xc] = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar16 + 0xc);
    }
    lVar11 = *(long *)*puVar19;
    *(long *)*puVar19 = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(puVar19);
    }
    uVar14 = 0;
    *(undefined1 *)(puVar16 + 0x14) = 1;
    uVar17 = *puVar16;
  }
joined_r0x0001014e13b0:
  if (uVar17 != 2) {
    uVar15 = puVar16[1];
    if ((uVar17 & 1) != 0) {
      uVar15 = uVar15 + (*(long *)(puVar16[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(puVar16[2] + 0x68))(uVar15,puVar16 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar17 = puVar16[4], uVar17 != 0)) {
    ppppppplStack_5a0 = *(long ********)(uVar17 + 0x10);
    uStack_598 = (undefined4)*(undefined8 *)(uVar17 + 0x18);
    uStack_594 = (undefined4)((ulong)*(undefined8 *)(uVar17 + 0x18) >> 0x20);
    uStack_5c0 = (long *******)&ppppppplStack_5a0;
    uStack_5b8._0_4_ = 0xc7b3a0;
    uStack_5b8._4_4_ = 1;
    FUN_1011d7d74(puVar16,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&uStack_5c0);
  }
  return uVar14;
}

