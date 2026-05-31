
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10147a8bc(long *param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  long extraout_x1;
  long *plVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  long lStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  byte *pbStack_678;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  long lStack_618;
  long lStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long lStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  byte *pbStack_500;
  long lStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long lStack_4d8;
  undefined1 auStack_4a0 [8];
  long lStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  byte *pbStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined1 auStack_350 [8];
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  byte *pbStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined1 **ppuStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  byte *pbStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_a0 = 10;
    uVar17 = func_0x000108a4a0f8(&uStack_a0,0,0);
    return uVar17;
  }
  pbVar14 = param_3;
  pbVar16 = param_4;
  lVar7 = param_5;
  lVar6 = _malloc(param_3);
  if (lVar6 != 0) {
    _memcpy(lVar6,param_2,param_3);
    if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
      param_1[10] = lVar6;
      param_1[0xb] = (long)param_3;
      param_1[9] = -0x8000000000000000;
      lStack_f0 = param_1[0xb];
      lStack_f8 = param_1[10];
    }
    else {
      _free(param_1[10]);
      param_1[10] = lVar6;
      param_1[0xb] = (long)param_3;
      param_1[9] = -0x8000000000000000;
      lStack_f0 = param_1[0xb];
      lStack_f8 = param_1[10];
    }
    pbStack_100 = param_3;
    if (param_5 == 0) {
      lVar7 = 1;
    }
    else {
      lVar7 = _malloc(param_5);
      if (lVar7 == 0) {
        func_0x0001087c9084(1,param_5);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10147a964);
        (*pcVar3)();
      }
    }
    _memcpy(lVar7,param_4,param_5);
    uStack_e8 = 0x8000000000000003;
    lStack_e0 = param_5;
    lStack_d8 = lVar7;
    lStack_d0 = param_5;
    FUN_101497a9c(&uStack_a0,param_1,&pbStack_100,&uStack_e8);
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
  uVar8 = func_0x0001087c9084(1,param_3);
  _free(lStack_f8);
  auVar18 = __Unwind_Resume(uVar8);
  plVar12 = auVar18._8_8_;
  plVar5 = auVar18._0_8_;
  uStack_158 = 0x10147aa54;
  puStack_160 = &stack0xfffffffffffffff0;
  if (*plVar5 == -0x8000000000000000) {
    uStack_1f0 = 10;
    uVar17 = func_0x000108a4a0f8(&uStack_1f0,0,0);
    return uVar17;
  }
  puVar9 = (undefined8 *)_malloc(0x16);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = 0x696d7265705f6c61;
    *puVar9 = 0x6e6f697469646461;
    *(undefined8 *)((long)puVar9 + 0xe) = 0x736e6f697373696d;
    if (plVar5[9] != -0x8000000000000000 && plVar5[9] != 0) {
      _free(plVar5[10]);
    }
    plVar5[10] = (long)puVar9;
    plVar5[0xb] = 0x16;
    plVar5[9] = -0x8000000000000000;
    lStack_2a0 = plVar5[0xb];
    lStack_2a8 = plVar5[10];
    uStack_2b0 = 0x16;
    if (*plVar12 == -0x7fffffffffffffff) {
      uStack_298 = 0x8000000000000000;
      goto LAB_10147ab00;
    }
    pauVar10 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar10[1][0] == '\x01') {
      auVar18 = *pauVar10;
    }
    else {
      auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar10 + 8) = auVar18._8_8_;
      pauVar10[1][0] = 1;
    }
    *(long *)*pauVar10 = auVar18._0_8_ + 1;
    FUN_105dc99f8(&uStack_1f0,2,auVar18._0_8_,auVar18._8_8_);
    uStack_1a8 = 0x8000000000000000;
    uVar17 = uStack_1e8;
    if (uStack_1f0 != 0x8000000000000001) {
      uStack_218 = uStack_1b8;
      uStack_220 = uStack_1c0;
      uStack_208 = 0x8000000000000000;
      uStack_210 = uStack_1b0;
      uStack_1f8 = uStack_198;
      uStack_200 = uStack_1a0;
      uStack_238 = uStack_1d8;
      uStack_240 = uStack_1e0;
      uStack_228 = uStack_1c8;
      uStack_230 = uStack_1d0;
      uStack_250 = uStack_1f0;
      uStack_248 = uStack_1e8;
      uVar11 = FUN_10148a270(&uStack_250,(char)plVar12[4]);
      if ((uVar11 == 0) &&
         (uVar11 = FUN_10147be10(&uStack_250,plVar12), uVar17 = uStack_248, uVar2 = uStack_250,
         uVar11 == 0)) {
        uStack_298 = uStack_248;
        uStack_258 = uStack_208;
        if (uStack_250 == 0x8000000000000000) {
          if (uStack_248 == 0x8000000000000005) {
            func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10147ad00);
            (*pcVar3)();
          }
          uStack_288 = uStack_238;
          uStack_290 = uStack_240;
          uStack_278 = uStack_228;
          uStack_280 = uStack_230;
          uStack_268 = uStack_218;
          uStack_270 = uStack_220;
          uStack_260 = uStack_210;
        }
        else {
          uStack_298 = uStack_250;
          uStack_290 = uStack_248;
          uStack_280 = uStack_238;
          uStack_288 = uStack_240;
          uStack_270 = uStack_228;
          uStack_278 = uStack_230;
          uStack_260 = uStack_218;
          uStack_268 = uStack_220;
          uStack_258 = uStack_210;
          if ((uStack_208 & 0x7fffffffffffffff) != 0) {
            _free(uStack_200);
          }
          if (uVar2 == 0x8000000000000005) goto LAB_10147abfc;
        }
LAB_10147ab00:
        FUN_101497a9c(&uStack_1f0,plVar5,&uStack_2b0,&uStack_298);
        uStack_248 = uStack_1e0;
        uStack_250 = uStack_1e8;
        uStack_238 = uStack_1d0;
        uStack_240 = uStack_1d8;
        uStack_228 = uStack_1c0;
        uStack_230 = uStack_1c8;
        uStack_218 = uStack_1b0;
        uStack_220 = uStack_1b8;
        uStack_210 = uStack_1a8;
        if (uStack_1e8 != 0x8000000000000005) {
          FUN_100de6690(&uStack_250);
        }
        return 0;
      }
      uVar17 = uVar11;
      FUN_100e040f0(&uStack_250);
    }
LAB_10147abfc:
    _free(lStack_2a8);
    return uVar17;
  }
  uVar8 = func_0x0001087c9084(1,0x16);
  FUN_100e040f0(&uStack_250);
  _free(lStack_2a8);
  auVar18 = __Unwind_Resume(uVar8);
  plVar5 = auVar18._0_8_;
  ppuStack_2c0 = &puStack_160;
  if (*plVar5 == -0x8000000000000000) {
    uStack_2b8 = 0x10147ad34;
    pbStack_2d8 = (byte *)0xa;
    uVar17 = func_0x000108a4a0f8(&pbStack_2d8,0,0);
    return uVar17;
  }
  uStack_2b8 = 0x10147ad34;
  pbStack_2d8 = param_4;
  plStack_2d0 = plVar12;
  uStack_2c8 = uVar8;
  if (*plVar5 == -0x8000000000000000) {
    pbVar13 = &UNK_10b24c5c0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
    pbVar15 = pbVar16;
    lVar6 = lVar7;
  }
  else {
    pbVar13 = pbVar14;
    pbVar15 = pbVar16;
    lVar6 = lVar7;
    lVar4 = _malloc(pbVar14);
    param_4 = pbVar14;
    param_2 = auVar18._8_8_;
    if (lVar4 != 0) {
      _memcpy(lVar4,auVar18._8_8_,pbVar14);
      if (plVar5[9] != -0x8000000000000000 && plVar5[9] != 0) {
        _free(plVar5[10]);
      }
      plVar5[10] = lVar4;
      plVar5[0xb] = (long)pbVar14;
      plVar5[9] = -0x8000000000000000;
      lStack_3a0 = plVar5[0xb];
      lStack_3a8 = plVar5[10];
      uStack_398 = 0x8000000000000002;
      if (((ulong)pbVar16 & 1) == 0) {
        uStack_398 = 0x8000000000000000;
      }
      uStack_390 = 0;
      pbStack_3b0 = pbVar14;
      lStack_388 = lVar7;
      FUN_101497a9c(auStack_350,plVar5,&pbStack_3b0,&uStack_398);
      uStack_3f8 = uStack_340;
      lStack_400 = lStack_348;
      uStack_3e8 = uStack_330;
      uStack_3f0 = uStack_338;
      uStack_3d8 = uStack_320;
      uStack_3e0 = uStack_328;
      uStack_3c8 = uStack_310;
      uStack_3d0 = uStack_318;
      uStack_3c0 = uStack_308;
      if (lStack_348 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_400);
      }
      return 0;
    }
  }
  auVar18 = FUN_107c03c64(1,param_4);
  plVar5 = auVar18._0_8_;
  if (*plVar5 == -0x8000000000000000) {
    pbVar14 = &UNK_10b24c5c0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
    pbVar16 = pbVar15;
  }
  else {
    pbVar14 = pbVar13;
    pbVar16 = pbVar15;
    lVar7 = _malloc(pbVar13);
    param_4 = pbVar13;
    param_2 = auVar18._8_8_;
    if (lVar7 != 0) {
      _memcpy(lVar7,auVar18._8_8_,pbVar13);
      if (plVar5[9] != -0x8000000000000000 && plVar5[9] != 0) {
        _free(plVar5[10]);
      }
      plVar5[10] = lVar7;
      plVar5[0xb] = (long)pbVar13;
      plVar5[9] = -0x8000000000000000;
      lStack_4f0 = plVar5[0xb];
      lStack_4f8 = plVar5[10];
      uStack_4e8 = 0x8000000000000002;
      if (((ulong)pbVar15 & 1) == 0) {
        uStack_4e8 = 0x8000000000000000;
      }
      uStack_4e0 = 0;
      pbStack_500 = pbVar13;
      lStack_4d8 = lVar6;
      FUN_101497a9c(auStack_4a0,plVar5,&pbStack_500,&uStack_4e8);
      uStack_548 = uStack_490;
      lStack_550 = lStack_498;
      uStack_538 = uStack_480;
      uStack_540 = uStack_488;
      uStack_528 = uStack_470;
      uStack_530 = uStack_478;
      uStack_518 = uStack_460;
      uStack_520 = uStack_468;
      uStack_510 = uStack_458;
      if (lStack_498 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_550);
      }
      return 0;
    }
  }
  auVar18 = FUN_107c03c64(1,param_4);
  plVar5 = auVar18._0_8_;
  uStack_590 = param_2;
  if (*plVar5 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
    pbVar13 = pbVar16;
  }
  else {
    pbVar13 = pbVar16;
    lVar7 = _malloc(pbVar14);
    param_4 = pbVar14;
    if (lVar7 != 0) {
      _memcpy(lVar7,auVar18._8_8_,pbVar14);
      uVar17 = 0x8000000000000000;
      if (plVar5[9] != -0x8000000000000000 && plVar5[9] != 0) {
        _free(plVar5[10]);
      }
      plVar5[10] = lVar7;
      plVar5[0xb] = (long)pbVar14;
      plVar5[9] = -0x8000000000000000;
      lStack_668 = plVar5[0xb];
      lStack_670 = plVar5[10];
      uStack_628 = (ulong)*pbVar16;
      pbStack_678 = pbVar14;
      if (*pbVar16 == 1) {
        uStack_628 = 0;
        uStack_620 = 1;
        lStack_618 = 0;
        FUN_10624142c(&uStack_5e0,pbVar16 + 1,0);
        thunk_FUN_108855060(&uStack_628,0,0x24,1,1);
        puVar9 = (undefined8 *)(uStack_620 + lStack_618);
        *(undefined4 *)(puVar9 + 4) = uStack_5c0;
        puVar9[1] = lStack_5d8;
        *puVar9 = uStack_5e0;
        puVar9[3] = uStack_5c8;
        puVar9[2] = uStack_5d0;
        lStack_658 = lStack_618 + 0x24;
        lStack_660 = uStack_620;
        uVar17 = 0x8000000000000003;
      }
      lStack_610 = lStack_658;
      lStack_618 = lStack_660;
      uStack_600 = uStack_648;
      uStack_608 = uStack_650;
      uStack_5f0 = uStack_638;
      uStack_5f8 = uStack_640;
      uStack_5e8 = uStack_630;
      uStack_620 = uStack_628;
      uStack_628 = uVar17;
      FUN_101497a9c(&uStack_5e0,plVar5,&pbStack_678,&uStack_628);
      uStack_6b8 = uStack_5d0;
      lStack_6c0 = lStack_5d8;
      uStack_6b0 = uStack_5c8;
      uStack_698 = uStack_5b0;
      uStack_6a0 = uStack_5b8;
      uStack_688 = uStack_5a0;
      uStack_690 = uStack_5a8;
      uStack_680 = uStack_598;
      if (lStack_5d8 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_6c0);
      }
      return 0;
    }
  }
  uVar8 = FUN_107c03c64(1,param_4);
  if (uStack_628 != 0) {
    _free(uStack_620);
  }
  _free(lStack_670);
  plVar5 = (long *)__Unwind_Resume(uVar8);
  uVar17 = FUN_1013fe3ec();
  if ((char)*plVar5 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
    lVar7 = extraout_x1;
  }
  else {
    param_4 = (byte *)plVar5[1];
    plVar5 = *(long **)param_4;
    lVar7 = plVar5[2];
    if (*plVar5 != lVar7) goto LAB_10063baac;
  }
  uVar17 = thunk_FUN_108855060(plVar5,lVar7,1,1,1);
  lVar7 = plVar5[2];
LAB_10063baac:
  *(undefined1 *)(plVar5[1] + lVar7) = 0x3a;
  plVar5[2] = lVar7 + 1;
  plVar5 = *(long **)param_4;
  if (*(long *)pbVar13 == -0x8000000000000000) {
    lVar7 = plVar5[2];
    if ((ulong)(*plVar5 - lVar7) < 4) {
      uVar17 = thunk_FUN_108855060(plVar5,lVar7,4,1,1);
      lVar7 = plVar5[2];
    }
    *(undefined4 *)(plVar5[1] + lVar7) = 0x6c6c756e;
    lVar7 = lVar7 + 4;
  }
  else {
    uVar8 = *(undefined8 *)(pbVar13 + 8);
    uVar1 = *(undefined8 *)(pbVar13 + 0x10);
    lVar7 = plVar5[2];
    if (*plVar5 == lVar7) {
      thunk_FUN_108855060(plVar5,lVar7,1,1,1);
      lVar7 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar7) = 0x22;
    plVar5[2] = lVar7 + 1;
    uVar17 = FUN_100657654(plVar5,uVar8,uVar1);
    lVar7 = plVar5[2];
    if (*plVar5 == lVar7) {
      uVar17 = thunk_FUN_108855060(plVar5,lVar7,1,1,1);
      lVar7 = plVar5[2];
    }
    *(undefined1 *)(plVar5[1] + lVar7) = 0x22;
    lVar7 = lVar7 + 1;
  }
  plVar5[2] = lVar7;
  return uVar17;
}

