
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10063c4b8(long *param_1,long param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16])

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*unaff_x20) [16];
  undefined1 (*unaff_x21) [16];
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_480;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  long lStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 (*pauStack_248) [16];
  long lStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined1 auStack_1e0 [8];
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 (*pauStack_f0) [16];
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 (*pauStack_d0) [16];
  long lStack_c8;
  undefined1 (*pauStack_c0) [16];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_1 == -0x8000000000000000) {
    pauVar8 = (undefined1 (*) [16])&UNK_10b24c5c0;
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
LAB_10063c670:
    plVar4 = (long *)FUN_107c03c64(1,unaff_x20);
    if (unaff_x20 != (undefined1 (*) [16])0x0) {
      _free(lStack_e8);
    }
    auVar10 = __Unwind_Resume(plVar4);
    plVar5 = auVar10._0_8_;
    if (*plVar5 == -0x8000000000000000) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
    }
    else {
      lVar2 = _malloc(pauVar8);
      plVar4 = plVar5;
      unaff_x20 = pauVar8;
      unaff_x21 = param_4;
      if (lVar2 != 0) {
        _memcpy(lVar2,auVar10._8_8_,pauVar8);
        if (plVar5[9] != -0x8000000000000000 && plVar5[9] != 0) {
          _free(plVar5[10]);
        }
        plVar5[10] = lVar2;
        plVar5[0xb] = (long)pauVar8;
        plVar5[9] = -0x8000000000000000;
        lStack_238 = plVar5[0xb];
        lStack_240 = plVar5[10];
        uStack_220 = (ulong)param_4 & 0xffffffff;
        uStack_228 = 0;
        uStack_230 = 0x8000000000000002;
        pauStack_248 = pauVar8;
        FUN_101497a9c(auStack_1e0,plVar5,&pauStack_248,&uStack_230);
        uStack_288 = uStack_1d0;
        lStack_290 = lStack_1d8;
        uStack_278 = uStack_1c0;
        uStack_280 = uStack_1c8;
        uStack_268 = uStack_1b0;
        uStack_270 = uStack_1b8;
        uStack_258 = uStack_1a0;
        uStack_260 = uStack_1a8;
        uStack_250 = uStack_198;
        if (lStack_1d8 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_290);
        }
        return 0;
      }
    }
    auVar11._8_8_ = unaff_x20;
    auVar11._0_8_ = plVar4;
    auVar10 = FUN_107c03c64(1,unaff_x20);
    plVar4 = auVar10._0_8_;
    if (*plVar4 == -0x8000000000000000) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
      auVar10 = auVar11;
LAB_10063cb54:
      auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*unaff_x21 + 8) = auVar11._8_8_;
      unaff_x21[1][0] = 1;
    }
    else {
      puVar6 = (undefined4 *)_malloc(6);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_107c03c64(1,6);
        goto LAB_10063d40c;
      }
      *(undefined2 *)(puVar6 + 1) = 0x7061;
      *puVar6 = 0x6d79656b;
      if (plVar4[9] != -0x8000000000000000 && plVar4[9] != 0) {
        _free(plVar4[10]);
      }
      plVar4[10] = (long)puVar6;
      plVar4[0xb] = 6;
      plVar4[9] = -0x8000000000000000;
      lStack_4c8 = plVar4[0xb];
      lStack_4d0 = plVar4[10];
      uStack_4d8 = 6;
      unaff_x21 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
      if (unaff_x21[1][0] != '\x01') goto LAB_10063cb54;
      auVar11 = *unaff_x21;
    }
    lVar3 = auVar10._8_8_;
    *(long *)*unaff_x21 = auVar11._0_8_ + 1;
    FUN_105dc99f8(&lStack_350,9,auVar11._0_8_,auVar11._8_8_);
    lStack_308 = -0x8000000000000000;
    lVar2 = lStack_348;
    if (lStack_350 == -0x7fffffffffffffff) goto LAB_10063cb10;
    uStack_488 = uStack_318;
    uStack_490 = uStack_320;
    lStack_478 = -0x8000000000000000;
    lStack_480 = uStack_310;
    uStack_468 = uStack_2f8;
    puStack_470 = puStack_300;
    uStack_4a8 = uStack_338;
    uStack_4b0 = uStack_340;
    uStack_498 = uStack_328;
    uStack_4a0 = uStack_330;
    lStack_4c0 = lStack_350;
    lStack_4b8 = lStack_348;
    if (lStack_350 == -0x8000000000000000) {
LAB_10063c8d4:
      lStack_350 = 10;
      lVar2 = FUN_107c05dbc(&lStack_350,0,0);
    }
    else {
      unaff_x22 = 6;
      puVar7 = (undefined8 *)_malloc(6);
      if (puVar7 == (undefined8 *)0x0) goto LAB_10063d40c;
      *(undefined2 *)((long)puVar7 + 4) = 0x6c61;
      *(undefined4 *)puVar7 = 0x626f6c67;
      if ((lStack_478 != -0x8000000000000000) && (lStack_478 != 0)) {
        _free(puStack_470);
      }
      uStack_468 = 6;
      lStack_478 = -0x8000000000000000;
      uStack_400 = 6;
      uStack_410 = 6;
      puStack_470 = puVar7;
      puStack_408 = puVar7;
      if (unaff_x21[1][0] == '\x01') {
        auVar11 = *unaff_x21;
      }
      else {
        auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*unaff_x21 + 8) = auVar11._8_8_;
        unaff_x21[1][0] = 1;
      }
      *(long *)*unaff_x21 = auVar11._0_8_ + 1;
      FUN_105dc99f8(&lStack_350,10,auVar11._0_8_,auVar11._8_8_);
      lStack_308 = -0x8000000000000000;
      lVar2 = lStack_348;
      if (lStack_350 == -0x7fffffffffffffff) {
LAB_10063cafc:
        _free(puStack_408);
joined_r0x00010063cb04:
        if (lVar2 == 0) goto LAB_10063cc24;
        goto LAB_10063cb08;
      }
      uStack_378 = uStack_318;
      uStack_380 = uStack_320;
      lStack_368 = -0x8000000000000000;
      uStack_370 = uStack_310;
      uStack_358 = uStack_2f8;
      puStack_360 = puStack_300;
      uStack_398 = uStack_338;
      uStack_3a0 = uStack_340;
      uStack_388 = uStack_328;
      uStack_390 = uStack_330;
      lStack_3b0 = lStack_350;
      lStack_3a8 = lStack_348;
      lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab5cf,0xf,lVar3);
      if (((((lVar2 != 0) ||
            (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab5de,0x14,lVar3 + 0x20), lVar2 != 0)) ||
           (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cde3a8,4,lVar3 + 0x40), lVar2 != 0)) ||
          (((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab5f2,0xe,lVar3 + 0x60), lVar2 != 0 ||
            (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab27c,6,lVar3 + 0x80), lVar2 != 0)) ||
           ((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab282,5,lVar3 + 0xa0), lVar2 != 0 ||
            ((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cdca20,0x10,lVar3 + 0xc0), lVar2 != 0 ||
             (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab600,0xf,lVar3 + 0xe0), lVar2 != 0))))))))
         || ((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cdca40,0x10,lVar3 + 0x100), lVar2 != 0 ||
             (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab60f,0x11,lVar3 + 0x120), lVar2 != 0)))) {
        FUN_100e040f0(&lStack_3b0);
        goto LAB_10063cafc;
      }
      uStack_328 = uStack_388;
      uStack_330 = uStack_390;
      uStack_318 = uStack_378;
      uStack_320 = uStack_380;
      lStack_308 = lStack_368;
      uStack_310 = uStack_370;
      uStack_2f8 = uStack_358;
      puStack_300 = puStack_360;
      lStack_348 = lStack_3a8;
      lStack_350 = lStack_3b0;
      uStack_338 = uStack_398;
      uStack_340 = uStack_3a0;
      __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                (&lStack_3f8,&lStack_350);
      lVar2 = lStack_3f0;
      if (lStack_3f8 == -0x7ffffffffffffffb) {
        _free(puStack_408);
        goto joined_r0x00010063cb04;
      }
      FUN_101497a9c(&lStack_350,&lStack_4c0,&uStack_410,&lStack_3f8);
      uStack_458 = uStack_340;
      lStack_460 = lStack_348;
      uStack_448 = uStack_330;
      uStack_450 = uStack_338;
      uStack_438 = uStack_320;
      uStack_440 = uStack_328;
      uStack_428 = uStack_310;
      uStack_430 = uStack_318;
      lStack_420 = lStack_308;
      if (lStack_348 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_460);
      }
LAB_10063cc24:
      if (lStack_4c0 == -0x8000000000000000) goto LAB_10063c8d4;
      unaff_x22 = 4;
      puVar7 = (undefined8 *)_malloc(4);
      if (puVar7 == (undefined8 *)0x0) goto LAB_10063d40c;
      *(undefined4 *)puVar7 = 0x74616863;
      if ((lStack_478 != -0x8000000000000000) && (lStack_478 != 0)) {
        _free(puStack_470);
      }
      uStack_468 = 4;
      lStack_478 = -0x8000000000000000;
      uStack_400 = 4;
      uStack_410 = 4;
      puStack_470 = puVar7;
      puStack_408 = puVar7;
      if (unaff_x21[1][0] == '\x01') {
        auVar11 = *unaff_x21;
      }
      else {
        auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*unaff_x21 + 8) = auVar11._8_8_;
        unaff_x21[1][0] = 1;
      }
      *(long *)*unaff_x21 = auVar11._0_8_ + 1;
      FUN_105dc99f8(&lStack_350,3,auVar11._0_8_,auVar11._8_8_);
      lStack_308 = -0x8000000000000000;
      lVar2 = lStack_348;
      if (lStack_350 == -0x7fffffffffffffff) {
LAB_10063cd54:
        _free(puStack_408);
joined_r0x00010063cd5c:
        if (lVar2 != 0) goto LAB_10063cb08;
      }
      else {
        uStack_378 = uStack_318;
        uStack_380 = uStack_320;
        lStack_368 = -0x8000000000000000;
        uStack_370 = uStack_310;
        uStack_358 = uStack_2f8;
        puStack_360 = puStack_300;
        uStack_398 = uStack_338;
        uStack_3a0 = uStack_340;
        uStack_388 = uStack_328;
        uStack_390 = uStack_330;
        lStack_3b0 = lStack_350;
        lStack_3a8 = lStack_348;
        lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab492,0x19,lVar3 + 0x140);
        if (((lVar2 != 0) ||
            (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab4ab,0x19,lVar3 + 0x160), lVar2 != 0)) ||
           (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab4c4,0x13,lVar3 + 0x180), lVar2 != 0)) {
          FUN_100e040f0(&lStack_3b0);
          goto LAB_10063cd54;
        }
        uStack_328 = uStack_388;
        uStack_330 = uStack_390;
        uStack_318 = uStack_378;
        uStack_320 = uStack_380;
        lStack_308 = lStack_368;
        uStack_310 = uStack_370;
        uStack_2f8 = uStack_358;
        puStack_300 = puStack_360;
        lStack_348 = lStack_3a8;
        lStack_350 = lStack_3b0;
        uStack_338 = uStack_398;
        uStack_340 = uStack_3a0;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (&lStack_3f8,&lStack_350);
        lVar2 = lStack_3f0;
        if (lStack_3f8 == -0x7ffffffffffffffb) {
          _free(puStack_408);
          goto joined_r0x00010063cd5c;
        }
        FUN_101497a9c(&lStack_350,&lStack_4c0,&uStack_410,&lStack_3f8);
        uStack_458 = uStack_340;
        lStack_460 = lStack_348;
        uStack_448 = uStack_330;
        uStack_450 = uStack_338;
        uStack_438 = uStack_320;
        uStack_440 = uStack_328;
        uStack_428 = uStack_310;
        uStack_430 = uStack_318;
        lStack_420 = lStack_308;
        if (lStack_348 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_460);
        }
      }
      if (lStack_4c0 == -0x8000000000000000) goto LAB_10063c8d4;
      unaff_x22 = 8;
      puVar7 = (undefined8 *)_malloc(8);
      if (puVar7 == (undefined8 *)0x0) goto LAB_10063d40c;
      *puVar7 = 0x7265736f706d6f63;
      if ((lStack_478 != -0x8000000000000000) && (lStack_478 != 0)) {
        _free(puStack_470);
      }
      uStack_468 = 8;
      lStack_478 = -0x8000000000000000;
      uStack_400 = 8;
      uStack_410 = 8;
      puStack_470 = puVar7;
      puStack_408 = puVar7;
      __ZN82__LT_serde_json__value__ser__Serializer_u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17h1afe0e688f2d23f7E
                (&lStack_350,&UNK_108cab26b,0x11,5);
      lVar2 = lStack_348;
      if (lStack_350 == -0x7fffffffffffffff) {
LAB_10063cec0:
        _free(puStack_408);
joined_r0x00010063cec8:
        if (lVar2 != 0) goto LAB_10063cb08;
      }
      else {
        uStack_378 = uStack_318;
        uStack_380 = uStack_320;
        lStack_368 = lStack_308;
        uStack_370 = uStack_310;
        uStack_358 = uStack_2f8;
        puStack_360 = puStack_300;
        uStack_398 = uStack_338;
        uStack_3a0 = uStack_340;
        uStack_388 = uStack_328;
        uStack_390 = uStack_330;
        lStack_3b0 = lStack_350;
        lStack_3a8 = lStack_348;
        lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab27c,6,lVar3 + 0x1a0);
        if (((lVar2 != 0) ||
            (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab282,5,lVar3 + 0x1c0), lVar2 != 0)) ||
           ((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cdca20,0x10,lVar3 + 0x1e0), lVar2 != 0 ||
            ((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab287,0x17,lVar3 + 0x200), lVar2 != 0 ||
             (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab29e,0x13,lVar3 + 0x220), lVar2 != 0))))))
        {
          FUN_100e040f0(&lStack_3b0);
          goto LAB_10063cec0;
        }
        uStack_328 = uStack_388;
        uStack_330 = uStack_390;
        uStack_318 = uStack_378;
        uStack_320 = uStack_380;
        lStack_308 = lStack_368;
        uStack_310 = uStack_370;
        uStack_2f8 = uStack_358;
        puStack_300 = puStack_360;
        lStack_348 = lStack_3a8;
        lStack_350 = lStack_3b0;
        uStack_338 = uStack_398;
        uStack_340 = uStack_3a0;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (&lStack_3f8,&lStack_350);
        lVar2 = lStack_3f0;
        if (lStack_3f8 == -0x7ffffffffffffffb) {
          _free(puStack_408);
          goto joined_r0x00010063cec8;
        }
        FUN_101497a9c(&lStack_350,&lStack_4c0,&uStack_410,&lStack_3f8);
        uStack_458 = uStack_340;
        lStack_460 = lStack_348;
        uStack_448 = uStack_330;
        uStack_450 = uStack_338;
        uStack_438 = uStack_320;
        uStack_440 = uStack_328;
        uStack_428 = uStack_310;
        uStack_430 = uStack_318;
        lStack_420 = lStack_308;
        if (lStack_348 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_460);
        }
      }
      if (lStack_4c0 == -0x8000000000000000) goto LAB_10063c8d4;
      unaff_x22 = 6;
      puVar7 = (undefined8 *)_malloc(6);
      if (puVar7 == (undefined8 *)0x0) {
LAB_10063d40c:
        FUN_107c03c64(1,unaff_x22);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10063d41c);
        (*pcVar1)();
      }
      *(undefined2 *)((long)puVar7 + 4) = 0x726f;
      *(undefined4 *)puVar7 = 0x74696465;
      if ((lStack_478 != -0x8000000000000000) && (lStack_478 != 0)) {
        _free(puStack_470);
      }
      uStack_468 = 6;
      lStack_478 = -0x8000000000000000;
      uStack_400 = 6;
      uStack_410 = 6;
      puStack_470 = puVar7;
      puStack_408 = puVar7;
      __ZN82__LT_serde_json__value__ser__Serializer_u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17h1afe0e688f2d23f7E
                (&lStack_350,&UNK_108cab526,0xf,0x11);
      lVar2 = lStack_348;
      if (lStack_350 == -0x7fffffffffffffff) {
LAB_10063d1ac:
        _free(puStack_408);
joined_r0x00010063d1b4:
        if (lVar2 != 0) goto LAB_10063cb08;
      }
      else {
        uStack_378 = uStack_318;
        uStack_380 = uStack_320;
        lStack_368 = lStack_308;
        uStack_370 = uStack_310;
        uStack_358 = uStack_2f8;
        puStack_360 = puStack_300;
        uStack_398 = uStack_338;
        uStack_3a0 = uStack_340;
        uStack_388 = uStack_328;
        uStack_390 = uStack_330;
        lStack_3b0 = lStack_350;
        lStack_3a8 = lStack_348;
        lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab535,0xe,lVar3 + 0x240);
        if (((((((lVar2 != 0) ||
                (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab30e,9,lVar3 + 0x260), lVar2 != 0)) ||
               (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab317,10,lVar3 + 0x280), lVar2 != 0)) ||
              ((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab321,7,lVar3 + 0x2a0), lVar2 != 0 ||
               (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab328,9,lVar3 + 0x2c0), lVar2 != 0)))) ||
             (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab543,0xe,lVar3 + 0x2e0), lVar2 != 0)) ||
            (((((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab551,0xf,lVar3 + 0x300), lVar2 != 0 ||
                (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab361,0xf,lVar3 + 800), lVar2 != 0)) ||
               ((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab370,0xd,lVar3 + 0x340), lVar2 != 0 ||
                (((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab560,0xf,lVar3 + 0x360), lVar2 != 0
                  || (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab56f,0xe,lVar3 + 0x380),
                     lVar2 != 0)) ||
                 (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab57d,0x14,lVar3 + 0x3a0), lVar2 != 0))
                )))) || ((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab591,0x13,lVar3 + 0x3c0),
                         lVar2 != 0 ||
                         (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab5a4,0xf,lVar3 + 0x3e0),
                         lVar2 != 0)))) ||
             (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab5b3,0xf,lVar3 + 0x400), lVar2 != 0)))) ||
           ((lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cab5c2,0xd,lVar3 + 0x420), lVar2 != 0 ||
            (lVar2 = FUN_1014788c0(&lStack_3b0,&UNK_108cde3a4,4,lVar3 + 0x440), lVar2 != 0)))) {
          FUN_100e040f0(&lStack_3b0);
          goto LAB_10063d1ac;
        }
        uStack_328 = uStack_388;
        uStack_330 = uStack_390;
        uStack_318 = uStack_378;
        uStack_320 = uStack_380;
        lStack_308 = lStack_368;
        uStack_310 = uStack_370;
        uStack_2f8 = uStack_358;
        puStack_300 = puStack_360;
        lStack_348 = lStack_3a8;
        lStack_350 = lStack_3b0;
        uStack_338 = uStack_398;
        uStack_340 = uStack_3a0;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (&lStack_3f8,&lStack_350);
        if (lStack_3f8 == -0x7ffffffffffffffb) {
          _free(puStack_408);
          lVar2 = lStack_3f0;
          goto joined_r0x00010063d1b4;
        }
        FUN_101497a9c(&lStack_350,&lStack_4c0,&uStack_410,&lStack_3f8);
        uStack_458 = uStack_340;
        lStack_460 = lStack_348;
        uStack_448 = uStack_330;
        uStack_450 = uStack_338;
        uStack_438 = uStack_320;
        uStack_440 = uStack_328;
        uStack_428 = uStack_310;
        uStack_430 = uStack_318;
        lStack_420 = lStack_308;
        if (lStack_348 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_460);
        }
      }
      lVar2 = FUN_1014906a8(&lStack_4c0,lVar3 + 0x460);
      if ((((lVar2 == 0) && (lVar2 = FUN_10148f424(&lStack_4c0,lVar3 + 0x720), lVar2 == 0)) &&
          (lVar2 = FUN_1014932b0(&lStack_4c0,lVar3 + 0x8a0), lVar2 == 0)) &&
         ((lVar2 = FUN_10148be18(&lStack_4c0,lVar3 + 0x9e0), lVar2 == 0 &&
          (lVar2 = FUN_10147ea08(&lStack_4c0,lVar3 + 0xb20), lVar2 == 0)))) {
        uStack_328 = uStack_498;
        uStack_330 = uStack_4a0;
        uStack_318 = uStack_488;
        uStack_320 = uStack_490;
        lStack_308 = lStack_478;
        uStack_310 = lStack_480;
        uStack_2f8 = uStack_468;
        puStack_300 = puStack_470;
        lStack_348 = lStack_4b8;
        lStack_350 = lStack_4c0;
        uStack_338 = uStack_4a8;
        uStack_340 = uStack_4b0;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (&lStack_3b0,&lStack_350);
        lVar2 = lStack_3a8;
        if (lStack_3b0 != -0x7ffffffffffffffb) {
          FUN_101497a9c(&lStack_350,auVar10._0_8_,&uStack_4d8,&lStack_3b0);
          lStack_4b8 = uStack_340;
          lStack_4c0 = lStack_348;
          uStack_4a8 = uStack_330;
          uStack_4b0 = uStack_338;
          uStack_498 = uStack_320;
          uStack_4a0 = uStack_328;
          uStack_488 = uStack_310;
          uStack_490 = uStack_318;
          lStack_480 = lStack_308;
          if (lStack_348 != -0x7ffffffffffffffb) {
            FUN_100de6690(&lStack_4c0);
          }
          return 0;
        }
        goto LAB_10063cb10;
      }
    }
LAB_10063cb08:
    FUN_100e040f0(&lStack_4c0);
LAB_10063cb10:
    _free(lStack_4d0);
    return lVar2;
  }
  unaff_x20 = *(undefined1 (**) [16])(param_2 + 0x10);
  if (unaff_x20 == (undefined1 (*) [16])0x0) {
    lVar2 = 1;
    if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) goto LAB_10063c530;
LAB_10063c590:
    _free(param_1[10]);
    param_1[10] = lVar2;
    param_1[0xb] = (long)unaff_x20;
    param_1[9] = -0x8000000000000000;
    if (unaff_x20 != (undefined1 (*) [16])0x8000000000000000) goto LAB_10063c544;
LAB_10063c5ac:
    FUN_107c05cac(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 8);
    pauVar8 = param_3;
    lVar2 = _malloc(unaff_x20);
    unaff_x21 = param_3;
    if (lVar2 == 0) goto LAB_10063c670;
    _memcpy(lVar2,uVar9,unaff_x20);
    if (unaff_x20 == (undefined1 (*) [16])0x8000000000000000) {
      return lVar2;
    }
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) goto LAB_10063c590;
LAB_10063c530:
    param_1[10] = lVar2;
    param_1[0xb] = (long)unaff_x20;
    param_1[9] = -0x8000000000000000;
    if (unaff_x20 == (undefined1 (*) [16])0x8000000000000000) goto LAB_10063c5ac;
LAB_10063c544:
    lStack_e0 = param_1[0xb];
    lStack_e8 = param_1[10];
    lVar2 = *(long *)(*param_3 + 8);
    param_3 = *(undefined1 (**) [16])param_3[1];
    pauStack_f0 = unaff_x20;
    if (param_3 != (undefined1 (*) [16])0x0) {
      lVar3 = _malloc(param_3);
      if (lVar3 == 0) {
        FUN_107c03c64(1,param_3);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10063c578);
        (*pcVar1)();
      }
      goto LAB_10063c5c8;
    }
  }
  lVar3 = 1;
LAB_10063c5c8:
  _memcpy(lVar3,lVar2,param_3);
  uStack_d8 = 0x8000000000000003;
  pauStack_d0 = param_3;
  lStack_c8 = lVar3;
  pauStack_c0 = param_3;
  FUN_101497a9c(auStack_90,param_1,&pauStack_f0,&uStack_d8);
  uStack_138 = uStack_80;
  lStack_140 = lStack_88;
  uStack_128 = uStack_70;
  uStack_130 = uStack_78;
  uStack_118 = uStack_60;
  uStack_120 = uStack_68;
  uStack_108 = uStack_50;
  uStack_110 = uStack_58;
  uStack_100 = uStack_48;
  if (lStack_88 != -0x7ffffffffffffffb) {
    FUN_100de6690(&lStack_140);
  }
  return 0;
}

