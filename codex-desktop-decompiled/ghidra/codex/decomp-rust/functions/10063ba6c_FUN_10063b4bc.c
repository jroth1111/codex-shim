
undefined8
FUN_10063b4bc(long *param_1,undefined8 param_2,undefined8 *param_3,byte *param_4,byte *param_5)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar5;
  long extraout_x1;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *unaff_x20;
  undefined8 *unaff_x21;
  byte *unaff_x22;
  undefined8 unaff_x23;
  ulong uVar11;
  undefined8 unaff_x24;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 *puStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  byte *pbStack_420;
  undefined8 *puStack_418;
  byte *pbStack_410;
  undefined8 uStack_408;
  undefined1 ***pppuStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a0;
  long lStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  byte *pbStack_378;
  undefined1 auStack_340 [8];
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 **ppuStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  byte *pbStack_228;
  undefined1 auStack_1f0 [8];
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plVar4;
  
  if (*param_1 == -0x8000000000000000) {
    puVar6 = (undefined8 *)&UNK_10b24c5c0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
    pbVar8 = param_4;
  }
  else {
    puVar6 = param_3;
    pbVar8 = param_4;
    lVar2 = _malloc(param_3);
    unaff_x20 = param_4;
    unaff_x21 = param_3;
    unaff_x23 = param_2;
    if (lVar2 != 0) {
      _memcpy(lVar2,param_2,param_3);
      if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
        _free(param_1[10]);
      }
      param_1[10] = lVar2;
      param_1[0xb] = (long)param_3;
      param_1[9] = -0x8000000000000000;
      lStack_f0 = param_1[0xb];
      lStack_f8 = param_1[10];
      puStack_100 = param_3;
      if (*(long *)param_4 == -0x8000000000000000) {
        lStack_e8 = -0x8000000000000000;
      }
      else {
        func_0x000100633f00(&lStack_e8,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10))
        ;
        if (lStack_e8 == -0x7ffffffffffffffb) {
          _free(lStack_f8);
          return uStack_e0;
        }
      }
      FUN_101497a9c(auStack_a0,param_1,&puStack_100,&lStack_e8);
      uStack_148 = uStack_90;
      lStack_150 = lStack_98;
      uStack_138 = uStack_80;
      uStack_140 = uStack_88;
      uStack_128 = uStack_70;
      uStack_130 = uStack_78;
      uStack_118 = uStack_60;
      uStack_120 = uStack_68;
      uStack_110 = uStack_58;
      if (lStack_98 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_150);
      }
      return 0;
    }
  }
  plVar3 = (long *)FUN_107c03c64(1,unaff_x21);
  _free(lStack_f8);
  auVar12 = __Unwind_Resume(plVar3);
  plVar4 = auVar12._0_8_;
  uStack_158 = 0x10063b634;
  puStack_160 = &stack0xfffffffffffffff0;
  if (*plVar4 == -0x8000000000000000) {
    puVar7 = (undefined8 *)&UNK_10b24c5c0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
    pbVar9 = pbVar8;
    pbVar10 = param_5;
  }
  else {
    puVar7 = puVar6;
    pbVar9 = pbVar8;
    pbVar10 = param_5;
    lVar2 = _malloc(puVar6);
    plVar3 = plVar4;
    unaff_x20 = param_5;
    unaff_x21 = puVar6;
    unaff_x22 = pbVar8;
    unaff_x24 = auVar12._8_8_;
    if (lVar2 != 0) {
      _memcpy(lVar2,auVar12._8_8_,puVar6);
      if (plVar4[9] != -0x8000000000000000 && plVar4[9] != 0) {
        _free(plVar4[10]);
      }
      plVar4[10] = lVar2;
      plVar4[0xb] = (long)puVar6;
      plVar4[9] = -0x8000000000000000;
      lStack_240 = plVar4[0xb];
      lStack_248 = plVar4[10];
      uStack_238 = 0x8000000000000002;
      if (((ulong)pbVar8 & 1) == 0) {
        uStack_238 = 0x8000000000000000;
      }
      uStack_230 = 0;
      puStack_250 = puVar6;
      pbStack_228 = param_5;
      FUN_101497a9c(auStack_1f0,plVar4,&puStack_250,&uStack_238);
      uStack_298 = uStack_1e0;
      lStack_2a0 = lStack_1e8;
      uStack_288 = uStack_1d0;
      uStack_290 = uStack_1d8;
      uStack_278 = uStack_1c0;
      uStack_280 = uStack_1c8;
      uStack_268 = uStack_1b0;
      uStack_270 = uStack_1b8;
      uStack_260 = uStack_1a8;
      if (lStack_1e8 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_2a0);
      }
      return 0;
    }
  }
  auVar12._8_8_ = unaff_x24;
  auVar12._0_8_ = plVar3;
  auVar13 = FUN_107c03c64(1,unaff_x21);
  plVar3 = auVar13._0_8_;
  uStack_2a8 = 0x10063b76c;
  ppuStack_2b0 = &puStack_160;
  if (*plVar3 == -0x8000000000000000) {
    puVar6 = (undefined8 *)&UNK_10b24c5c0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
    pbVar8 = pbVar9;
  }
  else {
    puVar6 = puVar7;
    pbVar8 = pbVar9;
    lVar2 = _malloc(puVar7);
    unaff_x20 = pbVar10;
    unaff_x21 = puVar7;
    unaff_x22 = pbVar9;
    auVar12 = auVar13;
    if (lVar2 != 0) {
      _memcpy(lVar2,auVar13._8_8_,puVar7);
      if (plVar3[9] != -0x8000000000000000 && plVar3[9] != 0) {
        _free(plVar3[10]);
      }
      plVar3[10] = lVar2;
      plVar3[0xb] = (long)puVar7;
      plVar3[9] = -0x8000000000000000;
      lStack_390 = plVar3[0xb];
      lStack_398 = plVar3[10];
      uStack_388 = 0x8000000000000002;
      if (((ulong)pbVar9 & 1) == 0) {
        uStack_388 = 0x8000000000000000;
      }
      uStack_380 = 0;
      puStack_3a0 = puVar7;
      pbStack_378 = pbVar10;
      FUN_101497a9c(auStack_340,plVar3,&puStack_3a0,&uStack_388);
      uStack_3e8 = uStack_330;
      lStack_3f0 = lStack_338;
      uStack_3d8 = uStack_320;
      uStack_3e0 = uStack_328;
      uStack_3c8 = uStack_310;
      uStack_3d0 = uStack_318;
      uStack_3b8 = uStack_300;
      uStack_3c0 = uStack_308;
      uStack_3b0 = uStack_2f8;
      if (lStack_338 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_3f0);
      }
      return 0;
    }
  }
  auVar13 = FUN_107c03c64(1,unaff_x21);
  plVar3 = auVar13._0_8_;
  uStack_3f8 = 0x10063b8a4;
  uStack_430 = auVar12._8_8_;
  uStack_428 = unaff_x23;
  pbStack_420 = unaff_x22;
  puStack_418 = unaff_x21;
  pbStack_410 = unaff_x20;
  uStack_408 = auVar12._0_8_;
  pppuStack_400 = &ppuStack_2b0;
  if (*plVar3 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
    pbVar9 = pbVar8;
  }
  else {
    pbVar9 = pbVar8;
    lVar2 = _malloc(puVar6);
    unaff_x21 = puVar6;
    if (lVar2 != 0) {
      _memcpy(lVar2,auVar13._8_8_,puVar6);
      uVar11 = 0x8000000000000000;
      if (plVar3[9] != -0x8000000000000000 && plVar3[9] != 0) {
        _free(plVar3[10]);
      }
      plVar3[10] = lVar2;
      plVar3[0xb] = (long)puVar6;
      plVar3[9] = -0x8000000000000000;
      lStack_508 = plVar3[0xb];
      lStack_510 = plVar3[10];
      uStack_4c8 = (ulong)*pbVar8;
      puStack_518 = puVar6;
      if (*pbVar8 == 1) {
        uStack_4c8 = 0;
        uStack_4c0 = 1;
        lStack_4b8 = 0;
        FUN_10624142c(&uStack_480,pbVar8 + 1,0);
        thunk_FUN_108855060(&uStack_4c8,0,0x24,1,1);
        puVar6 = (undefined8 *)(uStack_4c0 + lStack_4b8);
        *(undefined4 *)(puVar6 + 4) = uStack_460;
        puVar6[1] = lStack_478;
        *puVar6 = uStack_480;
        puVar6[3] = uStack_468;
        puVar6[2] = uStack_470;
        lStack_4f8 = lStack_4b8 + 0x24;
        lStack_500 = uStack_4c0;
        uVar11 = 0x8000000000000003;
      }
      lStack_4b0 = lStack_4f8;
      lStack_4b8 = lStack_500;
      uStack_4a0 = uStack_4e8;
      uStack_4a8 = uStack_4f0;
      uStack_490 = uStack_4d8;
      uStack_498 = uStack_4e0;
      uStack_488 = uStack_4d0;
      uStack_4c0 = uStack_4c8;
      uStack_4c8 = uVar11;
      FUN_101497a9c(&uStack_480,plVar3,&puStack_518,&uStack_4c8);
      uStack_558 = uStack_470;
      lStack_560 = lStack_478;
      uStack_550 = uStack_468;
      uStack_538 = uStack_450;
      uStack_540 = uStack_458;
      uStack_528 = uStack_440;
      uStack_530 = uStack_448;
      uStack_520 = uStack_438;
      if (lStack_478 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_560);
      }
      return 0;
    }
  }
  uVar5 = FUN_107c03c64(1,unaff_x21);
  if (uStack_4c8 != 0) {
    _free(uStack_4c0);
  }
  _free(lStack_510);
  plVar3 = (long *)__Unwind_Resume(uVar5);
  uVar5 = FUN_1013fe3ec();
  if ((char)*plVar3 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
    lVar2 = extraout_x1;
  }
  else {
    unaff_x21 = (undefined8 *)plVar3[1];
    plVar3 = (long *)*unaff_x21;
    lVar2 = plVar3[2];
    if (*plVar3 != lVar2) goto LAB_10063baac;
  }
  uVar5 = thunk_FUN_108855060(plVar3,lVar2,1,1,1);
  lVar2 = plVar3[2];
LAB_10063baac:
  *(undefined1 *)(plVar3[1] + lVar2) = 0x3a;
  plVar3[2] = lVar2 + 1;
  plVar3 = (long *)*unaff_x21;
  if (*(long *)pbVar9 == -0x8000000000000000) {
    lVar2 = plVar3[2];
    if ((ulong)(*plVar3 - lVar2) < 4) {
      uVar5 = thunk_FUN_108855060(plVar3,lVar2,4,1,1);
      lVar2 = plVar3[2];
    }
    *(undefined4 *)(plVar3[1] + lVar2) = 0x6c6c756e;
    lVar2 = lVar2 + 4;
  }
  else {
    uVar5 = *(undefined8 *)(pbVar9 + 8);
    uVar1 = *(undefined8 *)(pbVar9 + 0x10);
    lVar2 = plVar3[2];
    if (*plVar3 == lVar2) {
      thunk_FUN_108855060(plVar3,lVar2,1,1,1);
      lVar2 = plVar3[2];
    }
    *(undefined1 *)(plVar3[1] + lVar2) = 0x22;
    plVar3[2] = lVar2 + 1;
    uVar5 = FUN_100657654(plVar3,uVar5,uVar1);
    lVar2 = plVar3[2];
    if (*plVar3 == lVar2) {
      uVar5 = thunk_FUN_108855060(plVar3,lVar2,1,1,1);
      lVar2 = plVar3[2];
    }
    *(undefined1 *)(plVar3[1] + lVar2) = 0x22;
    lVar2 = lVar2 + 1;
  }
  plVar3[2] = lVar2;
  return uVar5;
}

