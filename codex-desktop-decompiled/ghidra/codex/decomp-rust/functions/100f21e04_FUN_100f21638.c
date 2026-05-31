
void FUN_100f21638(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined2 *puVar6;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  ulong uStack_488;
  ulong *puStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  char cStack_440;
  undefined1 uStack_43f;
  undefined8 uStack_438;
  ulong *puStack_430;
  ulong *puStack_428;
  ulong uStack_420;
  ulong *puStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  char cStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined8 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined1 ****ppppuStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long *plStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined1 ***pppuStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long *plStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 **ppuStack_130;
  undefined8 uStack_128;
  char cStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar1 = *param_2;
  plVar7 = (long *)param_2[1];
  lVar13 = param_2[2];
  *param_2 = -0x8000000000000000;
  if (lVar1 != -0x8000000000000000) {
    FUN_100616c64(&lStack_a0,param_2 + 3);
    if (lStack_a0 == 2) {
      *(undefined1 *)(param_1 + 1) = (undefined1)lStack_98;
      *param_1 = 2;
    }
    else {
      param_1[5] = lStack_78;
      param_1[4] = lStack_80;
      param_1[7] = (long)plStack_68;
      param_1[6] = lStack_70;
      param_1[9] = lStack_58;
      param_1[8] = lStack_60;
      param_1[10] = lStack_50;
      param_1[1] = lStack_98;
      *param_1 = lStack_a0;
      param_1[3] = lStack_88;
      param_1[2] = lStack_90;
      if (*param_1 != 2) {
        plStack_68 = (long *)param_1[7];
        lStack_70 = param_1[6];
        lStack_58 = param_1[9];
        lVar16 = param_1[8];
        lStack_88 = param_1[3];
        lStack_90 = param_1[2];
        lStack_78 = param_1[5];
        lStack_80 = param_1[4];
        lStack_50 = param_1[10];
        lStack_98 = param_1[1];
        lStack_a0 = *param_1;
        lStack_60 = lVar16;
        if (lVar16 == lStack_70) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_70);
        }
        plVar5 = plStack_68;
        if (lVar16 != 0) {
          _memmove(plStack_68 + 3,plStack_68,lVar16 * 0x18);
        }
        *plVar5 = lVar1;
        plVar5[1] = (long)plVar7;
        plVar5[2] = lVar13;
        param_1[5] = lStack_78;
        param_1[4] = lStack_80;
        param_1[7] = (long)plStack_68;
        param_1[6] = lStack_70;
        param_1[10] = lStack_50;
        param_1[1] = lStack_98;
        *param_1 = lStack_a0;
        param_1[3] = lStack_88;
        param_1[2] = lStack_90;
        param_1[9] = lStack_58;
        param_1[8] = lVar16 + 1;
        return;
      }
    }
    if (lVar1 == 0) {
      return;
    }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar7);
    return;
  }
  puVar3 = (undefined8 *)_malloc(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0x676e697373696d20;
    *puVar3 = 0x73692065756c6176;
    *param_1 = 0;
    param_1[3] = 0x10;
    param_1[4] = (long)puVar3;
    param_1[6] = 0;
    param_1[5] = 0x10;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 8;
    return;
  }
  uVar4 = func_0x0001087c9084(1,0x10);
  _free(plVar7);
  FUN_100de3b58(&lStack_a0);
  auVar17 = __Unwind_Resume(uVar4);
  pcVar8 = auVar17._8_8_;
  plVar5 = auVar17._0_8_;
  uStack_a8 = 0x100f21808;
  cVar2 = *pcVar8;
  *pcVar8 = '\x16';
  plStack_c0 = plVar7;
  uStack_b8 = uVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (cVar2 != '\x16') {
    uStack_117 = (undefined7)*(undefined8 *)(pcVar8 + 9);
    uStack_11f = (undefined7)*(undefined8 *)(pcVar8 + 1);
    uStack_118 = (undefined1)((ulong)*(undefined8 *)(pcVar8 + 1) >> 0x38);
    uStack_108 = *(undefined8 *)(pcVar8 + 0x18);
    uStack_110 = (undefined1)*(undefined8 *)(pcVar8 + 0x10);
    uStack_10f = (undefined7)((ulong)*(undefined8 *)(pcVar8 + 0x10) >> 8);
    cStack_120 = cVar2;
    if (cVar2 != '\x10') {
      if (cVar2 == '\x11') {
        plVar7 = (long *)CONCAT71(uStack_117,uStack_118);
        lStack_f8 = plVar7[1];
        lStack_100 = *plVar7;
        lStack_e8 = plVar7[3];
        lStack_f0 = plVar7[2];
        FUN_1014a868c(&lStack_d8,&lStack_100);
        if (lStack_d8 == -0x8000000000000000) {
          *plVar5 = -0x7fffffffffffffff;
          plVar5[1] = lStack_d0;
        }
        else {
          plVar5[1] = lStack_d0;
          *plVar5 = lStack_d8;
          plVar5[2] = lStack_c8;
        }
        goto code_r0x000108aa97c4;
      }
      if (cVar2 != '\x12') {
        FUN_1014a868c(&lStack_100,&cStack_120);
        if (lStack_100 == -0x8000000000000000) {
          *plVar5 = -0x7fffffffffffffff;
          plVar5[1] = lStack_f8;
          return;
        }
        plVar5[1] = lStack_f8;
        *plVar5 = lStack_100;
        plVar5[2] = lStack_f0;
        return;
      }
    }
    *plVar5 = -0x8000000000000000;
    FUN_100e077ec(&cStack_120);
    return;
  }
  uVar4 = func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
  _free(plVar7);
  auVar17 = __Unwind_Resume(uVar4);
  plVar9 = auVar17._8_8_;
  plVar5 = auVar17._0_8_;
  uStack_128 = 0x100f21944;
  lVar1 = *plVar9;
  plVar7 = (long *)plVar9[1];
  lVar13 = plVar9[2];
  *plVar9 = -0x8000000000000000;
  ppuStack_130 = &puStack_b0;
  if (lVar1 != -0x8000000000000000) {
    func_0x00010136af34(plVar5,plVar9 + 3);
    if (*plVar5 == 2) {
      if (lVar1 != 0) goto code_r0x000108aa97c4;
    }
    else {
      plStack_188 = (long *)plVar5[7];
      lStack_190 = plVar5[6];
      lStack_178 = plVar5[9];
      lVar16 = plVar5[8];
      lStack_1a8 = plVar5[3];
      lStack_1b0 = plVar5[2];
      lStack_198 = plVar5[5];
      lStack_1a0 = plVar5[4];
      lStack_170 = plVar5[10];
      lStack_1b8 = plVar5[1];
      lStack_1c0 = *plVar5;
      lStack_180 = lVar16;
      if (lVar16 == lStack_190) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_190);
      }
      plVar9 = plStack_188;
      if (lVar16 != 0) {
        _memmove(plStack_188 + 3,plStack_188,lVar16 * 0x18);
      }
      *plVar9 = lVar1;
      plVar9[1] = (long)plVar7;
      plVar9[2] = lVar13;
      plVar5[5] = lStack_198;
      plVar5[4] = lStack_1a0;
      plVar5[7] = (long)plStack_188;
      plVar5[6] = lStack_190;
      plVar5[10] = lStack_170;
      plVar5[1] = lStack_1b8;
      *plVar5 = lStack_1c0;
      plVar5[3] = lStack_1a8;
      plVar5[2] = lStack_1b0;
      plVar5[9] = lStack_178;
      plVar5[8] = lVar16 + 1;
    }
    return;
  }
  puVar3 = (undefined8 *)_malloc(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0x676e697373696d20;
    *puVar3 = 0x73692065756c6176;
    *plVar5 = 0;
    plVar5[3] = 0x10;
    plVar5[4] = (long)puVar3;
    plVar5[6] = 0;
    plVar5[5] = 0x10;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[7] = 8;
    return;
  }
  uVar4 = func_0x0001087c9084(1,0x10);
  _free(plVar7);
  FUN_100de3b58(&lStack_1c0);
  auVar17 = __Unwind_Resume(uVar4);
  plVar9 = auVar17._8_8_;
  plVar5 = auVar17._0_8_;
  uStack_1c8 = 0x100f21ad4;
  lVar1 = *plVar9;
  plVar7 = (long *)plVar9[1];
  lVar13 = plVar9[2];
  *plVar9 = -0x8000000000000000;
  pppuStack_1d0 = &ppuStack_130;
  if (lVar1 != -0x8000000000000000) {
    FUN_100615128(&lStack_260,plVar9 + 3);
    if (lStack_260 == 2) {
      plVar5[2] = lStack_258;
      plVar5[1] = 1;
      *plVar5 = 2;
    }
    else {
      plVar5[5] = lStack_238;
      plVar5[4] = lStack_240;
      plVar5[7] = (long)plStack_228;
      plVar5[6] = lStack_230;
      plVar5[9] = lStack_218;
      plVar5[8] = lStack_220;
      plVar5[10] = lStack_210;
      plVar5[1] = lStack_258;
      *plVar5 = lStack_260;
      plVar5[3] = lStack_248;
      plVar5[2] = lStack_250;
      if (*plVar5 != 2) {
        plStack_228 = (long *)plVar5[7];
        lStack_230 = plVar5[6];
        lStack_218 = plVar5[9];
        lVar16 = plVar5[8];
        lStack_248 = plVar5[3];
        lStack_250 = plVar5[2];
        lStack_238 = plVar5[5];
        lStack_240 = plVar5[4];
        lStack_210 = plVar5[10];
        lStack_258 = plVar5[1];
        lStack_260 = *plVar5;
        lStack_220 = lVar16;
        if (lVar16 == lStack_230) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_230);
        }
        plVar9 = plStack_228;
        if (lVar16 != 0) {
          _memmove(plStack_228 + 3,plStack_228,lVar16 * 0x18);
        }
        *plVar9 = lVar1;
        plVar9[1] = (long)plVar7;
        plVar9[2] = lVar13;
        plVar5[5] = lStack_238;
        plVar5[4] = lStack_240;
        plVar5[7] = (long)plStack_228;
        plVar5[6] = lStack_230;
        plVar5[10] = lStack_210;
        plVar5[1] = lStack_258;
        *plVar5 = lStack_260;
        plVar5[3] = lStack_248;
        plVar5[2] = lStack_250;
        plVar5[9] = lStack_218;
        plVar5[8] = lVar16 + 1;
        return;
      }
    }
    if (lVar1 == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  puVar3 = (undefined8 *)_malloc(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0x676e697373696d20;
    *puVar3 = 0x73692065756c6176;
    *plVar5 = 0;
    plVar5[3] = 0x10;
    plVar5[4] = (long)puVar3;
    plVar5[6] = 0;
    plVar5[5] = 0x10;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[7] = 8;
    return;
  }
  uVar4 = func_0x0001087c9084(1,0x10);
  _free(plVar7);
  FUN_100de3b58(&lStack_260);
  auVar17 = __Unwind_Resume(uVar4);
  pcVar8 = auVar17._8_8_;
  plVar5 = auVar17._0_8_;
  uStack_268 = 0x100f21ca8;
  cStack_310 = *pcVar8;
  *pcVar8 = '\x16';
  plStack_280 = plVar7;
  uStack_278 = uVar4;
  ppppuStack_270 = &pppuStack_1d0;
  if (cStack_310 != '\x16') {
    uStack_307 = (undefined7)*(undefined8 *)(pcVar8 + 9);
    uStack_30f = (undefined7)*(undefined8 *)(pcVar8 + 1);
    uStack_308 = (undefined1)((ulong)*(undefined8 *)(pcVar8 + 1) >> 0x38);
    uStack_2f8 = *(undefined8 *)(pcVar8 + 0x18);
    uStack_300 = (undefined1)*(undefined8 *)(pcVar8 + 0x10);
    uStack_2ff = (undefined7)((ulong)*(undefined8 *)(pcVar8 + 0x10) >> 8);
    if (cStack_310 != '\x10') {
      if (cStack_310 == '\x11') {
        plVar7 = (long *)CONCAT71(uStack_307,uStack_308);
        lStack_2e8 = plVar7[1];
        lStack_2f0 = *plVar7;
        lStack_2d8 = plVar7[3];
        lStack_2e0 = plVar7[2];
        FUN_1004b53b8(&lStack_2c8,&lStack_2f0);
        if (lStack_2c8 == -0x8000000000000000) {
          *plVar5 = -0x7fffffffffffffff;
          plVar5[1] = lStack_2c0;
        }
        else {
          plVar5[5] = lStack_2a0;
          plVar5[4] = lStack_2a8;
          plVar5[7] = lStack_290;
          plVar5[6] = lStack_298;
          plVar5[8] = lStack_288;
          plVar5[1] = lStack_2c0;
          *plVar5 = lStack_2c8;
          plVar5[3] = lStack_2b0;
          plVar5[2] = lStack_2b8;
        }
        goto code_r0x000108aa97c4;
      }
      if (cStack_310 != '\x12') {
        FUN_1004b53b8(&lStack_2c8,&cStack_310);
        if (lStack_2c8 == -0x8000000000000000) {
          *plVar5 = -0x7fffffffffffffff;
          plVar5[1] = lStack_2c0;
          return;
        }
        plVar5[5] = lStack_2a0;
        plVar5[4] = lStack_2a8;
        plVar5[7] = lStack_290;
        plVar5[6] = lStack_298;
        plVar5[8] = lStack_288;
        plVar5[1] = lStack_2c0;
        *plVar5 = lStack_2c8;
        plVar5[3] = lStack_2b0;
        plVar5[2] = lStack_2b8;
        return;
      }
    }
    *plVar5 = -0x8000000000000000;
    FUN_100e077ec(&cStack_310);
    return;
  }
  uVar4 = func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
  _free(plVar7);
  auVar17 = __Unwind_Resume(uVar4);
  puVar10 = auVar17._8_8_;
  puVar6 = auVar17._0_8_;
  uVar12 = *puVar10;
  *puVar10 = 0x8000000000000005;
  if (uVar12 == 0x8000000000000005) {
    uVar4 = FUN_1088561c0(&UNK_108cde170,0x10);
    *(undefined8 *)(puVar6 + 4) = uVar4;
    goto LAB_100f21fc4;
  }
  uVar15 = puVar10[2];
  puVar14 = (ulong *)puVar10[1];
  uStack_468 = puVar10[4];
  uStack_470 = puVar10[3];
  uStack_458 = puVar10[6];
  uStack_460 = puVar10[5];
  uStack_448 = puVar10[8];
  uStack_450 = puVar10[7];
  uStack_488 = uVar12;
  puStack_480 = puVar14;
  uStack_478 = uVar15;
  if (uVar12 == 0x8000000000000000) {
    *puVar6 = 0x300;
    FUN_100de6690(&uStack_488);
    return;
  }
  uVar11 = uVar12 ^ 0x8000000000000000;
  if (-1 < (long)uVar12) {
    uVar11 = 5;
  }
  if (uVar11 == 3) {
    uStack_3b8 = puVar10[2];
    uStack_3c0 = puVar10[1];
    uStack_3b0 = puVar10[3];
    uStack_3a8 = 0x8000000000000005;
    FUN_100ae26a0(&cStack_440,&uStack_3c0);
  }
  else if (uVar11 == 5) {
    if ((uStack_468 != 0) && (uStack_468 * 9 != -0x11)) {
      _free(uStack_470 + uStack_468 * -8 + -8);
    }
    puStack_418 = puVar14 + uVar15 * 0xd;
    puStack_428 = puVar14;
    puStack_430 = puVar14;
    uStack_420 = uVar12;
    if (uVar15 != 0) {
      puStack_428 = puVar14 + 0xd;
      uVar12 = *puVar14;
      if (uVar12 != 0x8000000000000000) {
        uVar11 = puVar14[1];
        uStack_3b0 = puVar14[2];
        uStack_3f8 = puVar14[6];
        uStack_400 = puVar14[5];
        uStack_3e8 = puVar14[8];
        uStack_3f0 = puVar14[7];
        uStack_3d8 = puVar14[10];
        uStack_3e0 = puVar14[9];
        uStack_3d0 = puVar14[0xb];
        uStack_408 = puVar14[4];
        uStack_410 = puVar14[3];
        if (uVar15 == 1) {
LAB_100f21f34:
          uStack_390 = puVar14[6];
          uStack_398 = puVar14[5];
          uStack_380 = puVar14[8];
          uStack_388 = puVar14[7];
          uStack_370 = puVar14[10];
          uStack_378 = puVar14[9];
          uStack_368 = puVar14[0xb];
          uStack_3a0 = puVar14[4];
          uStack_3a8 = puVar14[3];
          uStack_3c0 = uVar12;
          uStack_3b8 = uVar11;
          FUN_100ae26a0(&cStack_440,&uStack_3c0);
        }
        else {
          puStack_428 = puVar14 + 0x1a;
          uStack_3c0 = puVar14[0xd];
          if (uStack_3c0 == 0x8000000000000000) goto LAB_100f21f34;
          uStack_3b0 = puVar14[0xf];
          uStack_3b8 = puVar14[0xe];
          uStack_3a0 = puVar14[0x11];
          uStack_3a8 = puVar14[0x10];
          uStack_390 = puVar14[0x13];
          uStack_398 = puVar14[0x12];
          uStack_380 = puVar14[0x15];
          uStack_388 = puVar14[0x14];
          uStack_370 = puVar14[0x17];
          uStack_378 = puVar14[0x16];
          uStack_368 = puVar14[0x18];
          if (uStack_3c0 != 0) {
            _free(uStack_3b8);
          }
          FUN_100de6690(&uStack_3a8);
          uStack_3c0 = CONCAT71(uStack_3c0._1_7_,0xb);
          uStack_438 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_3c0,&UNK_10b20a580,&UNK_10b20a590);
          cStack_440 = '\x01';
          FUN_100de6690(&uStack_410);
          if (uVar12 != 0) {
            _free(uVar11);
          }
        }
        FUN_100de8910(&puStack_430);
        goto joined_r0x000100f22024;
      }
    }
    uStack_3c0 = CONCAT71(uStack_3c0._1_7_,0xb);
    uStack_438 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (&uStack_3c0,&UNK_10b20a580,&UNK_10b20a590);
    cStack_440 = '\x01';
    FUN_100de8910(&puStack_430);
  }
  else {
    __ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_10unexpected17he5d1f58814edc489E
              (&uStack_3c0,&uStack_488);
    uStack_438 = func_0x000108a4a50c(&uStack_3c0,&UNK_10b20a5b0,&UNK_10b20a590);
    cStack_440 = '\x01';
    FUN_100de6690(&uStack_488);
  }
joined_r0x000100f22024:
  if (cStack_440 != '\x01') {
    *(undefined1 *)((long)puVar6 + 1) = uStack_43f;
    *(undefined1 *)puVar6 = 0;
    return;
  }
  *(undefined8 *)(puVar6 + 4) = uStack_438;
LAB_100f21fc4:
  *(undefined1 *)puVar6 = 1;
  return;
}

