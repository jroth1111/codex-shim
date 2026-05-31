
/* WARNING: Type propagation algorithm not settling */

void FUN_100f21028(long *param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  ulong uStack_718;
  ulong *puStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  char cStack_6d0;
  undefined1 uStack_6cf;
  undefined8 uStack_6c8;
  ulong *puStack_6c0;
  ulong *puStack_6b8;
  ulong uStack_6b0;
  ulong *puStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  char cStack_5a0;
  undefined7 uStack_59f;
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined1 uStack_590;
  undefined7 uStack_58f;
  undefined8 uStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 *******pppppppuStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long *plStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  undefined1 *******pppppppuStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long *plStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  undefined1 ******ppppppuStack_3c0;
  undefined8 uStack_3b8;
  char cStack_3b0;
  undefined7 uStack_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined8 uStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined1 *****pppppuStack_340;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long *plStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined1 ****ppppuStack_2a0;
  code *pcStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long *plStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined1 ***pppuStack_200;
  undefined8 uStack_1f8;
  char cStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined1 **ppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  char cStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  cVar2 = *param_2;
  *param_2 = '\x16';
  if (cVar2 != '\x16') {
    uStack_77 = (undefined7)*(undefined8 *)(param_2 + 9);
    uStack_7f = (undefined7)*(undefined8 *)(param_2 + 1);
    uStack_78 = (undefined1)((ulong)*(undefined8 *)(param_2 + 1) >> 0x38);
    uStack_68 = *(undefined8 *)(param_2 + 0x18);
    uStack_70 = (undefined1)*(undefined8 *)(param_2 + 0x10);
    uStack_6f = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x10) >> 8);
    cStack_80 = cVar2;
    if (cVar2 != '\x10') {
      if (cVar2 == '\x11') {
        plVar7 = (long *)CONCAT71(uStack_77,uStack_78);
        lStack_58 = plVar7[1];
        lStack_60 = *plVar7;
        lStack_48 = plVar7[3];
        lStack_50 = plVar7[2];
        FUN_1004b5b34(&lStack_38,&lStack_60);
        if (lStack_38 == -0x8000000000000000) {
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lStack_30;
        }
        else {
          param_1[1] = lStack_30;
          *param_1 = lStack_38;
          param_1[2] = lStack_28;
        }
        goto code_r0x000108aa97c4;
      }
      if (cVar2 != '\x12') {
        FUN_1004b5b34(&lStack_60,&cStack_80);
        if (lStack_60 == -0x8000000000000000) {
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lStack_58;
          return;
        }
        param_1[1] = lStack_58;
        *param_1 = lStack_60;
        param_1[2] = lStack_50;
        return;
      }
    }
    *param_1 = -0x8000000000000000;
    FUN_100e077ec(&cStack_80);
    return;
  }
  uVar3 = func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
  _free();
  auVar17 = __Unwind_Resume(uVar3);
  plVar8 = auVar17._8_8_;
  plVar4 = auVar17._0_8_;
  uStack_88 = 0x100f21164;
  lVar1 = *plVar8;
  plVar7 = (long *)plVar8[1];
  lVar13 = plVar8[2];
  *plVar8 = -0x8000000000000000;
  puStack_90 = &stack0xfffffffffffffff0;
  if (lVar1 != -0x8000000000000000) {
    FUN_101361208(plVar4,plVar8 + 3);
    if (*plVar4 == 5) {
      lStack_d8 = plVar4[10];
      lVar16 = plVar4[9];
      plStack_e8 = (long *)plVar4[8];
      lStack_f0 = plVar4[7];
      lStack_f8 = plVar4[6];
      lStack_100 = plVar4[5];
      lStack_d0 = plVar4[0xb];
      lStack_118 = plVar4[2];
      lStack_120 = plVar4[1];
      lStack_108 = plVar4[4];
      lStack_110 = plVar4[3];
      lStack_e0 = lVar16;
      if (lVar16 == lStack_f0) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_f0);
      }
      plVar8 = plStack_e8;
      if (lVar16 != 0) {
        _memmove(plStack_e8 + 3,plStack_e8,lVar16 * 0x18);
      }
      *plVar8 = lVar1;
      plVar8[1] = (long)plVar7;
      plVar8[2] = lVar13;
      plVar4[6] = lStack_f8;
      plVar4[5] = lStack_100;
      plVar4[8] = (long)plStack_e8;
      plVar4[7] = lStack_f0;
      plVar4[2] = lStack_118;
      plVar4[1] = lStack_120;
      plVar4[0xb] = lStack_d0;
      plVar4[4] = lStack_108;
      plVar4[3] = lStack_110;
      plVar4[10] = lStack_d8;
      plVar4[9] = lVar16 + 1;
      *plVar4 = 5;
    }
    else if (lVar1 != 0) goto code_r0x000108aa97c4;
    return;
  }
  puVar5 = (undefined8 *)_malloc(0x10);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0x676e697373696d20;
    *puVar5 = 0x73692065756c6176;
    plVar4[4] = 0x10;
    plVar4[5] = (long)puVar5;
    plVar4[7] = 0;
    plVar4[6] = 0x10;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[8] = 8;
    plVar4[1] = 0;
    *plVar4 = 5;
    return;
  }
  uVar3 = func_0x0001087c9084(1,0x10);
  _free(plVar7);
  FUN_100de3b58(&lStack_120);
  auVar17 = __Unwind_Resume(uVar3);
  pcVar9 = auVar17._8_8_;
  plVar4 = auVar17._0_8_;
  uStack_128 = 0x100f21318;
  cVar2 = *pcVar9;
  *pcVar9 = '\x16';
  lStack_150 = lVar1;
  ppuStack_130 = &puStack_90;
  if (cVar2 != '\x16') {
    uStack_1e7 = (undefined7)*(undefined8 *)(pcVar9 + 9);
    uStack_1ef = (undefined7)*(undefined8 *)(pcVar9 + 1);
    uStack_1e8 = (undefined1)((ulong)*(undefined8 *)(pcVar9 + 1) >> 0x38);
    uStack_1d8 = *(undefined8 *)(pcVar9 + 0x18);
    uStack_1e0 = (undefined1)*(undefined8 *)(pcVar9 + 0x10);
    uStack_1df = (undefined7)((ulong)*(undefined8 *)(pcVar9 + 0x10) >> 8);
    cStack_1f0 = cVar2;
    if (cVar2 != '\x10') {
      if (cVar2 == '\x11') {
        plVar7 = (long *)CONCAT71(uStack_1e7,uStack_1e8);
        lStack_1c8 = plVar7[1];
        lStack_1d0 = *plVar7;
        lStack_1b8 = plVar7[3];
        lStack_1c0 = plVar7[2];
        FUN_100618608(&lStack_1a8,&lStack_1d0);
        if (lStack_1a8 == 2) {
          plVar4[2] = lStack_198;
          plVar4[1] = lStack_1a0;
          plVar4[3] = lStack_190;
          *plVar4 = 2;
        }
        else {
          plVar4[5] = lStack_180;
          plVar4[4] = lStack_188;
          plVar4[7] = lStack_170;
          plVar4[6] = lStack_178;
          plVar4[9] = lStack_160;
          plVar4[8] = lStack_168;
          plVar4[10] = lStack_158;
          plVar4[1] = lStack_1a0;
          *plVar4 = lStack_1a8;
          plVar4[3] = lStack_190;
          plVar4[2] = lStack_198;
        }
        goto code_r0x000108aa97c4;
      }
      if (cVar2 != '\x12') {
        FUN_100618608(&lStack_1a8,&cStack_1f0);
        if (lStack_1a8 == 2) {
          plVar4[2] = lStack_198;
          plVar4[1] = lStack_1a0;
          plVar4[3] = lStack_190;
          *plVar4 = 2;
          return;
        }
        plVar4[5] = lStack_180;
        plVar4[4] = lStack_188;
        plVar4[7] = lStack_170;
        plVar4[6] = lStack_178;
        plVar4[9] = lStack_160;
        plVar4[8] = lStack_168;
        plVar4[10] = lStack_158;
        plVar4[1] = lStack_1a0;
        *plVar4 = lStack_1a8;
        plVar4[3] = lStack_190;
        plVar4[2] = lStack_198;
        return;
      }
    }
    plVar4[1] = -0x8000000000000000;
    *plVar4 = 2;
    FUN_100e077ec(&cStack_1f0);
    return;
  }
  uVar3 = func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
  _free(plVar7);
  auVar17 = __Unwind_Resume(uVar3);
  plVar8 = auVar17._8_8_;
  plVar4 = auVar17._0_8_;
  uStack_1f8 = 0x100f214a8;
  lVar1 = *plVar8;
  plVar7 = (long *)plVar8[1];
  lVar13 = plVar8[2];
  *plVar8 = -0x8000000000000000;
  pppuStack_200 = &ppuStack_130;
  if (lVar1 != -0x8000000000000000) {
    FUN_1012d5c64(plVar4,plVar8 + 3);
    if (*plVar4 == 2) {
      if (lVar1 != 0) goto code_r0x000108aa97c4;
    }
    else {
      plStack_258 = (long *)plVar4[7];
      lStack_260 = plVar4[6];
      lStack_248 = plVar4[9];
      lVar16 = plVar4[8];
      lStack_278 = plVar4[3];
      lStack_280 = plVar4[2];
      lStack_268 = plVar4[5];
      lStack_270 = plVar4[4];
      lStack_240 = plVar4[10];
      lStack_288 = plVar4[1];
      lStack_290 = *plVar4;
      lStack_250 = lVar16;
      if (lVar16 == lStack_260) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_260);
      }
      plVar8 = plStack_258;
      if (lVar16 != 0) {
        _memmove(plStack_258 + 3,plStack_258,lVar16 * 0x18);
      }
      *plVar8 = lVar1;
      plVar8[1] = (long)plVar7;
      plVar8[2] = lVar13;
      plVar4[5] = lStack_268;
      plVar4[4] = lStack_270;
      plVar4[7] = (long)plStack_258;
      plVar4[6] = lStack_260;
      plVar4[10] = lStack_240;
      plVar4[1] = lStack_288;
      *plVar4 = lStack_290;
      plVar4[3] = lStack_278;
      plVar4[2] = lStack_280;
      plVar4[9] = lStack_248;
      plVar4[8] = lVar16 + 1;
    }
    return;
  }
  puVar5 = (undefined8 *)_malloc(0x10);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0x676e697373696d20;
    *puVar5 = 0x73692065756c6176;
    *plVar4 = 0;
    plVar4[3] = 0x10;
    plVar4[4] = (long)puVar5;
    plVar4[6] = 0;
    plVar4[5] = 0x10;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[7] = 8;
    return;
  }
  uVar3 = func_0x0001087c9084(1,0x10);
  _free(plVar7);
  FUN_100de3b58(&lStack_290);
  auVar17 = __Unwind_Resume(uVar3);
  plVar8 = auVar17._8_8_;
  plVar4 = auVar17._0_8_;
  pcStack_298 = FUN_100f21638;
  lVar1 = *plVar8;
  plVar7 = (long *)plVar8[1];
  lVar13 = plVar8[2];
  *plVar8 = -0x8000000000000000;
  ppppuStack_2a0 = &pppuStack_200;
  if (lVar1 != -0x8000000000000000) {
    FUN_100616c64(&lStack_330,plVar8 + 3);
    if (lStack_330 == 2) {
      *(undefined1 *)(plVar4 + 1) = (undefined1)lStack_328;
      *plVar4 = 2;
    }
    else {
      plVar4[5] = lStack_308;
      plVar4[4] = lStack_310;
      plVar4[7] = (long)plStack_2f8;
      plVar4[6] = lStack_300;
      plVar4[9] = lStack_2e8;
      plVar4[8] = lStack_2f0;
      plVar4[10] = lStack_2e0;
      plVar4[1] = lStack_328;
      *plVar4 = lStack_330;
      plVar4[3] = lStack_318;
      plVar4[2] = lStack_320;
      if (*plVar4 != 2) {
        plStack_2f8 = (long *)plVar4[7];
        lStack_300 = plVar4[6];
        lStack_2e8 = plVar4[9];
        lVar16 = plVar4[8];
        lStack_318 = plVar4[3];
        lStack_320 = plVar4[2];
        lStack_308 = plVar4[5];
        lStack_310 = plVar4[4];
        lStack_2e0 = plVar4[10];
        lStack_328 = plVar4[1];
        lStack_330 = *plVar4;
        lStack_2f0 = lVar16;
        if (lVar16 == lStack_300) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_300);
        }
        plVar8 = plStack_2f8;
        if (lVar16 != 0) {
          _memmove(plStack_2f8 + 3,plStack_2f8,lVar16 * 0x18);
        }
        *plVar8 = lVar1;
        plVar8[1] = (long)plVar7;
        plVar8[2] = lVar13;
        plVar4[5] = lStack_308;
        plVar4[4] = lStack_310;
        plVar4[7] = (long)plStack_2f8;
        plVar4[6] = lStack_300;
        plVar4[10] = lStack_2e0;
        plVar4[1] = lStack_328;
        *plVar4 = lStack_330;
        plVar4[3] = lStack_318;
        plVar4[2] = lStack_320;
        plVar4[9] = lStack_2e8;
        plVar4[8] = lVar16 + 1;
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
  puVar5 = (undefined8 *)_malloc(0x10);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0x676e697373696d20;
    *puVar5 = 0x73692065756c6176;
    *plVar4 = 0;
    plVar4[3] = 0x10;
    plVar4[4] = (long)puVar5;
    plVar4[6] = 0;
    plVar4[5] = 0x10;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[7] = 8;
    return;
  }
  uVar3 = func_0x0001087c9084(1,0x10);
  _free(plVar7);
  FUN_100de3b58(&lStack_330);
  auVar17 = __Unwind_Resume(uVar3);
  pcVar9 = auVar17._8_8_;
  plVar4 = auVar17._0_8_;
  uStack_338 = 0x100f21808;
  cVar2 = *pcVar9;
  *pcVar9 = '\x16';
  plStack_350 = plVar7;
  uStack_348 = uVar3;
  pppppuStack_340 = &ppppuStack_2a0;
  if (cVar2 != '\x16') {
    uStack_3a7 = (undefined7)*(undefined8 *)(pcVar9 + 9);
    uStack_3af = (undefined7)*(undefined8 *)(pcVar9 + 1);
    uStack_3a8 = (undefined1)((ulong)*(undefined8 *)(pcVar9 + 1) >> 0x38);
    uStack_398 = *(undefined8 *)(pcVar9 + 0x18);
    uStack_3a0 = (undefined1)*(undefined8 *)(pcVar9 + 0x10);
    uStack_39f = (undefined7)((ulong)*(undefined8 *)(pcVar9 + 0x10) >> 8);
    cStack_3b0 = cVar2;
    if (cVar2 != '\x10') {
      if (cVar2 == '\x11') {
        plVar7 = (long *)CONCAT71(uStack_3a7,uStack_3a8);
        lStack_388 = plVar7[1];
        lStack_390 = *plVar7;
        lStack_378 = plVar7[3];
        lStack_380 = plVar7[2];
        FUN_1014a868c(&lStack_368,&lStack_390);
        if (lStack_368 == -0x8000000000000000) {
          *plVar4 = -0x7fffffffffffffff;
          plVar4[1] = lStack_360;
        }
        else {
          plVar4[1] = lStack_360;
          *plVar4 = lStack_368;
          plVar4[2] = lStack_358;
        }
        goto code_r0x000108aa97c4;
      }
      if (cVar2 != '\x12') {
        FUN_1014a868c(&lStack_390,&cStack_3b0);
        if (lStack_390 == -0x8000000000000000) {
          *plVar4 = -0x7fffffffffffffff;
          plVar4[1] = lStack_388;
          return;
        }
        plVar4[1] = lStack_388;
        *plVar4 = lStack_390;
        plVar4[2] = lStack_380;
        return;
      }
    }
    *plVar4 = -0x8000000000000000;
    FUN_100e077ec(&cStack_3b0);
    return;
  }
  uVar3 = func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
  _free(plVar7);
  auVar17 = __Unwind_Resume(uVar3);
  plVar8 = auVar17._8_8_;
  plVar4 = auVar17._0_8_;
  uStack_3b8 = 0x100f21944;
  lVar1 = *plVar8;
  plVar7 = (long *)plVar8[1];
  lVar13 = plVar8[2];
  *plVar8 = -0x8000000000000000;
  ppppppuStack_3c0 = &pppppuStack_340;
  if (lVar1 != -0x8000000000000000) {
    FUN_10136af34(plVar4,plVar8 + 3);
    if (*plVar4 == 2) {
      if (lVar1 != 0) goto code_r0x000108aa97c4;
    }
    else {
      plStack_418 = (long *)plVar4[7];
      lStack_420 = plVar4[6];
      lStack_408 = plVar4[9];
      lVar16 = plVar4[8];
      lStack_438 = plVar4[3];
      lStack_440 = plVar4[2];
      lStack_428 = plVar4[5];
      lStack_430 = plVar4[4];
      lStack_400 = plVar4[10];
      lStack_448 = plVar4[1];
      lStack_450 = *plVar4;
      lStack_410 = lVar16;
      if (lVar16 == lStack_420) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_420);
      }
      plVar8 = plStack_418;
      if (lVar16 != 0) {
        _memmove(plStack_418 + 3,plStack_418,lVar16 * 0x18);
      }
      *plVar8 = lVar1;
      plVar8[1] = (long)plVar7;
      plVar8[2] = lVar13;
      plVar4[5] = lStack_428;
      plVar4[4] = lStack_430;
      plVar4[7] = (long)plStack_418;
      plVar4[6] = lStack_420;
      plVar4[10] = lStack_400;
      plVar4[1] = lStack_448;
      *plVar4 = lStack_450;
      plVar4[3] = lStack_438;
      plVar4[2] = lStack_440;
      plVar4[9] = lStack_408;
      plVar4[8] = lVar16 + 1;
    }
    return;
  }
  puVar5 = (undefined8 *)_malloc(0x10);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0x676e697373696d20;
    *puVar5 = 0x73692065756c6176;
    *plVar4 = 0;
    plVar4[3] = 0x10;
    plVar4[4] = (long)puVar5;
    plVar4[6] = 0;
    plVar4[5] = 0x10;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[7] = 8;
    return;
  }
  uVar3 = func_0x0001087c9084(1,0x10);
  _free(plVar7);
  FUN_100de3b58(&lStack_450);
  auVar17 = __Unwind_Resume(uVar3);
  plVar8 = auVar17._8_8_;
  plVar4 = auVar17._0_8_;
  uStack_458 = 0x100f21ad4;
  lVar1 = *plVar8;
  plVar7 = (long *)plVar8[1];
  lVar13 = plVar8[2];
  *plVar8 = -0x8000000000000000;
  pppppppuStack_460 = &ppppppuStack_3c0;
  if (lVar1 != -0x8000000000000000) {
    FUN_100615128(&lStack_4f0,plVar8 + 3);
    if (lStack_4f0 == 2) {
      plVar4[2] = lStack_4e8;
      plVar4[1] = 1;
      *plVar4 = 2;
    }
    else {
      plVar4[5] = lStack_4c8;
      plVar4[4] = lStack_4d0;
      plVar4[7] = (long)plStack_4b8;
      plVar4[6] = lStack_4c0;
      plVar4[9] = lStack_4a8;
      plVar4[8] = lStack_4b0;
      plVar4[10] = lStack_4a0;
      plVar4[1] = lStack_4e8;
      *plVar4 = lStack_4f0;
      plVar4[3] = lStack_4d8;
      plVar4[2] = lStack_4e0;
      if (*plVar4 != 2) {
        plStack_4b8 = (long *)plVar4[7];
        lStack_4c0 = plVar4[6];
        lStack_4a8 = plVar4[9];
        lVar16 = plVar4[8];
        lStack_4d8 = plVar4[3];
        lStack_4e0 = plVar4[2];
        lStack_4c8 = plVar4[5];
        lStack_4d0 = plVar4[4];
        lStack_4a0 = plVar4[10];
        lStack_4e8 = plVar4[1];
        lStack_4f0 = *plVar4;
        lStack_4b0 = lVar16;
        if (lVar16 == lStack_4c0) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_4c0);
        }
        plVar8 = plStack_4b8;
        if (lVar16 != 0) {
          _memmove(plStack_4b8 + 3,plStack_4b8,lVar16 * 0x18);
        }
        *plVar8 = lVar1;
        plVar8[1] = (long)plVar7;
        plVar8[2] = lVar13;
        plVar4[5] = lStack_4c8;
        plVar4[4] = lStack_4d0;
        plVar4[7] = (long)plStack_4b8;
        plVar4[6] = lStack_4c0;
        plVar4[10] = lStack_4a0;
        plVar4[1] = lStack_4e8;
        *plVar4 = lStack_4f0;
        plVar4[3] = lStack_4d8;
        plVar4[2] = lStack_4e0;
        plVar4[9] = lStack_4a8;
        plVar4[8] = lVar16 + 1;
        return;
      }
    }
    if (lVar1 == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  puVar5 = (undefined8 *)_malloc(0x10);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0x676e697373696d20;
    *puVar5 = 0x73692065756c6176;
    *plVar4 = 0;
    plVar4[3] = 0x10;
    plVar4[4] = (long)puVar5;
    plVar4[6] = 0;
    plVar4[5] = 0x10;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[7] = 8;
    return;
  }
  uVar3 = func_0x0001087c9084(1,0x10);
  _free(plVar7);
  FUN_100de3b58(&lStack_4f0);
  auVar17 = __Unwind_Resume(uVar3);
  pcVar9 = auVar17._8_8_;
  plVar4 = auVar17._0_8_;
  uStack_4f8 = 0x100f21ca8;
  cStack_5a0 = *pcVar9;
  *pcVar9 = '\x16';
  plStack_510 = plVar7;
  uStack_508 = uVar3;
  pppppppuStack_500 = &pppppppuStack_460;
  if (cStack_5a0 != '\x16') {
    uStack_597 = (undefined7)*(undefined8 *)(pcVar9 + 9);
    uStack_59f = (undefined7)*(undefined8 *)(pcVar9 + 1);
    uStack_598 = (undefined1)((ulong)*(undefined8 *)(pcVar9 + 1) >> 0x38);
    uStack_588 = *(undefined8 *)(pcVar9 + 0x18);
    uStack_590 = (undefined1)*(undefined8 *)(pcVar9 + 0x10);
    uStack_58f = (undefined7)((ulong)*(undefined8 *)(pcVar9 + 0x10) >> 8);
    if (cStack_5a0 != '\x10') {
      if (cStack_5a0 == '\x11') {
        plVar7 = (long *)CONCAT71(uStack_597,uStack_598);
        lStack_578 = plVar7[1];
        lStack_580 = *plVar7;
        lStack_568 = plVar7[3];
        lStack_570 = plVar7[2];
        FUN_1004b53b8(&lStack_558,&lStack_580);
        if (lStack_558 == -0x8000000000000000) {
          *plVar4 = -0x7fffffffffffffff;
          plVar4[1] = lStack_550;
        }
        else {
          plVar4[5] = lStack_530;
          plVar4[4] = lStack_538;
          plVar4[7] = lStack_520;
          plVar4[6] = lStack_528;
          plVar4[8] = lStack_518;
          plVar4[1] = lStack_550;
          *plVar4 = lStack_558;
          plVar4[3] = lStack_540;
          plVar4[2] = lStack_548;
        }
        goto code_r0x000108aa97c4;
      }
      if (cStack_5a0 != '\x12') {
        FUN_1004b53b8(&lStack_558,&cStack_5a0);
        if (lStack_558 == -0x8000000000000000) {
          *plVar4 = -0x7fffffffffffffff;
          plVar4[1] = lStack_550;
          return;
        }
        plVar4[5] = lStack_530;
        plVar4[4] = lStack_538;
        plVar4[7] = lStack_520;
        plVar4[6] = lStack_528;
        plVar4[8] = lStack_518;
        plVar4[1] = lStack_550;
        *plVar4 = lStack_558;
        plVar4[3] = lStack_540;
        plVar4[2] = lStack_548;
        return;
      }
    }
    *plVar4 = -0x8000000000000000;
    FUN_100e077ec(&cStack_5a0);
    return;
  }
  uVar3 = func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
  _free(plVar7);
  auVar17 = __Unwind_Resume(uVar3);
  puVar10 = auVar17._8_8_;
  puVar6 = auVar17._0_8_;
  uVar12 = *puVar10;
  *puVar10 = 0x8000000000000005;
  if (uVar12 == 0x8000000000000005) {
    uVar3 = FUN_1088561c0(&UNK_108cde170,0x10);
    *(undefined8 *)(puVar6 + 4) = uVar3;
    goto LAB_100f21fc4;
  }
  uVar15 = puVar10[2];
  puVar14 = (ulong *)puVar10[1];
  uStack_6f8 = puVar10[4];
  uStack_700 = puVar10[3];
  uStack_6e8 = puVar10[6];
  uStack_6f0 = puVar10[5];
  uStack_6d8 = puVar10[8];
  uStack_6e0 = puVar10[7];
  uStack_718 = uVar12;
  puStack_710 = puVar14;
  uStack_708 = uVar15;
  if (uVar12 == 0x8000000000000000) {
    *puVar6 = 0x300;
    FUN_100de6690(&uStack_718);
    return;
  }
  uVar11 = uVar12 ^ 0x8000000000000000;
  if (-1 < (long)uVar12) {
    uVar11 = 5;
  }
  if (uVar11 == 3) {
    uStack_648 = puVar10[2];
    uStack_650 = puVar10[1];
    uStack_640 = puVar10[3];
    uStack_638 = 0x8000000000000005;
    FUN_100ae26a0(&cStack_6d0,&uStack_650);
  }
  else if (uVar11 == 5) {
    if ((uStack_6f8 != 0) && (uStack_6f8 * 9 != -0x11)) {
      _free(uStack_700 + uStack_6f8 * -8 + -8);
    }
    puStack_6a8 = puVar14 + uVar15 * 0xd;
    puStack_6b8 = puVar14;
    puStack_6c0 = puVar14;
    uStack_6b0 = uVar12;
    if (uVar15 != 0) {
      puStack_6b8 = puVar14 + 0xd;
      uVar12 = *puVar14;
      if (uVar12 != 0x8000000000000000) {
        uVar11 = puVar14[1];
        uStack_640 = puVar14[2];
        uStack_688 = puVar14[6];
        uStack_690 = puVar14[5];
        uStack_678 = puVar14[8];
        uStack_680 = puVar14[7];
        uStack_668 = puVar14[10];
        uStack_670 = puVar14[9];
        uStack_660 = puVar14[0xb];
        uStack_698 = puVar14[4];
        uStack_6a0 = puVar14[3];
        if (uVar15 == 1) {
LAB_100f21f34:
          uStack_620 = puVar14[6];
          uStack_628 = puVar14[5];
          uStack_610 = puVar14[8];
          uStack_618 = puVar14[7];
          uStack_600 = puVar14[10];
          uStack_608 = puVar14[9];
          uStack_5f8 = puVar14[0xb];
          uStack_630 = puVar14[4];
          uStack_638 = puVar14[3];
          uStack_650 = uVar12;
          uStack_648 = uVar11;
          FUN_100ae26a0(&cStack_6d0,&uStack_650);
        }
        else {
          puStack_6b8 = puVar14 + 0x1a;
          uStack_650 = puVar14[0xd];
          if (uStack_650 == 0x8000000000000000) goto LAB_100f21f34;
          uStack_640 = puVar14[0xf];
          uStack_648 = puVar14[0xe];
          uStack_630 = puVar14[0x11];
          uStack_638 = puVar14[0x10];
          uStack_620 = puVar14[0x13];
          uStack_628 = puVar14[0x12];
          uStack_610 = puVar14[0x15];
          uStack_618 = puVar14[0x14];
          uStack_600 = puVar14[0x17];
          uStack_608 = puVar14[0x16];
          uStack_5f8 = puVar14[0x18];
          if (uStack_650 != 0) {
            _free(uStack_648);
          }
          FUN_100de6690(&uStack_638);
          uStack_650 = CONCAT71(uStack_650._1_7_,0xb);
          uStack_6c8 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_650,&UNK_10b20a580,&UNK_10b20a590);
          cStack_6d0 = '\x01';
          FUN_100de6690(&uStack_6a0);
          if (uVar12 != 0) {
            _free(uVar11);
          }
        }
        FUN_100de8910(&puStack_6c0);
        goto joined_r0x000100f22024;
      }
    }
    uStack_650 = CONCAT71(uStack_650._1_7_,0xb);
    uStack_6c8 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                           (&uStack_650,&UNK_10b20a580,&UNK_10b20a590);
    cStack_6d0 = '\x01';
    FUN_100de8910(&puStack_6c0);
  }
  else {
    __ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_10unexpected17he5d1f58814edc489E
              (&uStack_650,&uStack_718);
    uStack_6c8 = func_0x000108a4a50c(&uStack_650,&UNK_10b20a5b0,&UNK_10b20a590);
    cStack_6d0 = '\x01';
    FUN_100de6690(&uStack_718);
  }
joined_r0x000100f22024:
  if (cStack_6d0 != '\x01') {
    *(undefined1 *)((long)puVar6 + 1) = uStack_6cf;
    *(undefined1 *)puVar6 = 0;
    return;
  }
  *(undefined8 *)(puVar6 + 4) = uStack_6c8;
LAB_100f21fc4:
  *(undefined1 *)puVar6 = 1;
  return;
}

