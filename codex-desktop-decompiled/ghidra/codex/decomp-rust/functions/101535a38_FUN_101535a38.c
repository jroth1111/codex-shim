
void FUN_101535a38(ulong *param_1,long *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  char cVar13;
  code *pcVar14;
  undefined8 *in_x9;
  ulong uVar15;
  long unaff_x20;
  long *plVar16;
  long *plVar17;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uVar18;
  undefined1 uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *puStack_560;
  ulong uStack_558;
  long *plStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  undefined8 *puStack_500;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  long lStack_498;
  long lStack_490;
  undefined8 *puStack_488;
  long lStack_480;
  undefined8 *puStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  undefined8 *puStack_420;
  long lStack_418;
  long *plStack_410;
  long lStack_408;
  undefined8 uStack_400;
  ulong uStack_3f0;
  long *plStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  long *plStack_3a0;
  ulong uStack_398;
  ulong uStack_388;
  long *plStack_380;
  ulong uStack_378;
  ulong uStack_370;
  undefined8 *puStack_368;
  ulong uStack_360;
  ulong uStack_358;
  long *plStack_350;
  ulong uStack_348;
  ulong uStack_340;
  undefined8 *puStack_338;
  ulong uStack_330;
  ulong uStack_328;
  long *plStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined8 *puStack_308;
  long lStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined8 *puStack_2e8;
  ulong uStack_2e0;
  long *plStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined8 *puStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  long *plStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined8 *puStack_290;
  long *plStack_258;
  long *plStack_250;
  ulong uStack_248;
  long *plStack_240;
  long *plStack_238;
  ulong uStack_230;
  ulong uStack_228;
  long *plStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  long *plStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 *puStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long *plStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 *puStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long *plStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 *puStack_178;
  ulong uStack_168;
  long *plStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long *plStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 *puStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_a8;
  long *plStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong *puStack_78;
  
  lVar24 = param_2[1];
  lVar23 = *param_2;
  lVar26 = param_2[3];
  lStack_510 = param_2[2];
  puVar1 = (undefined8 *)param_2[4];
  lVar3 = param_2[5];
  lStack_520 = lVar23;
  lStack_518 = lVar24;
  lStack_508 = lVar26;
  puStack_500 = puVar1;
  if (lVar23 < 4) {
    if (lVar23 < 2) {
      if (lVar23 == 0) {
        lStack_498 = 0;
        puStack_488 = in_x9;
        lStack_490 = unaff_x20;
      }
      else {
LAB_101535b00:
        lStack_498 = *param_2;
        unaff_x23 = param_2[3];
        puStack_488 = (undefined8 *)param_2[2];
        lStack_490 = param_2[1];
        unaff_x22 = (undefined8 *)param_2[4];
      }
    }
    else {
      if (lVar23 != 2) goto LAB_101535b00;
      if (puVar1 == (undefined8 *)0x0) {
        unaff_x23 = 1;
      }
      else {
        unaff_x23 = _malloc(puVar1);
        if (unaff_x23 == 0) goto LAB_1015364d4;
      }
      _memcpy(unaff_x23,lVar26,puVar1);
      lStack_498 = 2;
      puStack_488 = puVar1;
      lStack_490 = lVar24;
      unaff_x22 = puVar1;
    }
  }
  else {
    if ((5 < lVar23) || (lVar23 != 4)) goto LAB_101535b00;
    if (puVar1 == (undefined8 *)0x0) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = _malloc(puVar1);
      if (unaff_x23 == 0) {
LAB_1015364d4:
        func_0x0001087c9084(1,puVar1);
        goto LAB_1015364f0;
      }
    }
    _memcpy(unaff_x23,lVar26,puVar1);
    lStack_498 = 4;
    puStack_488 = puVar1;
    lStack_490 = lVar24;
    unaff_x22 = puVar1;
  }
  plVar2 = (long *)param_3[10];
  uVar4 = param_3[0xb];
  plStack_410 = &lStack_498;
  lStack_418 = 5;
  uVar15 = *param_3 ^ 0x8000000000000000;
  if (-1 < (long)*param_3) {
    uVar15 = 6;
  }
  uVar22 = uVar4;
  lStack_480 = unaff_x23;
  puStack_478 = unaff_x22;
  if (uVar15 == 0) {
    uStack_108 = param_3[2];
    uStack_110 = param_3[1];
    uStack_100 = param_3[3];
    uStack_1d0 = 0x8000000000000000;
    puStack_f8 = &uStack_1d0;
    func_0x00010161966c(&uStack_2e0,&uStack_110,&uStack_1d0);
    puVar12 = puStack_290;
    uVar11 = uStack_298;
    uVar10 = uStack_2a0;
    plVar20 = plStack_2a8;
    uVar9 = uStack_2b0;
    uVar8 = uStack_2b8;
    puVar1 = puStack_2c0;
    uVar25 = uStack_2c8;
    uVar22 = uStack_2d0;
    uVar21 = uStack_2e0;
    plVar16 = (long *)((ulong)plStack_2d8 & 0xff);
    if (uStack_2e0 != 2) {
      plVar17 = (long *)((ulong)plStack_2d8 >> 8);
      uStack_388 = uStack_2e0;
      plStack_380 = plStack_2d8;
      uStack_378 = uStack_2d0;
      uStack_370 = uStack_2c8;
      puStack_368 = puStack_2c0;
      uStack_360 = uStack_2b8;
      uStack_358 = uStack_2b0;
      plStack_350 = plStack_2a8;
      uStack_348 = uStack_2a0;
      uStack_340 = uStack_298;
      puStack_338 = puStack_290;
      __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_418);
      if ((uStack_1d0 & 0x7fffffffffffffff) != 0) {
        _free(uStack_1c8);
      }
      __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_418);
      uStack_558 = uVar25;
      plStack_550 = plVar20;
      uStack_538 = uVar10;
      uStack_530 = uVar8;
      uStack_548 = uVar11;
      uStack_540 = uVar9;
      puStack_560 = puVar12;
      unaff_x22 = puVar1;
      goto joined_r0x000101535dc0;
    }
    uVar22 = uVar4;
    if ((uStack_1d0 & 0x7fffffffffffffff) != 0) {
      _free(uStack_1c8);
    }
LAB_101535dc4:
    bVar7 = true;
    uVar21 = 2;
    plVar17 = plVar2;
  }
  else {
    if (uVar15 == 6) {
      uStack_3c8 = param_3[5];
      uStack_3d0 = param_3[4];
      uStack_3b8 = param_3[7];
      uStack_3c0 = param_3[6];
      uStack_3a8 = param_3[9];
      uStack_3b0 = param_3[8];
      plVar16 = (long *)param_3[1];
      uVar25 = *param_3;
      uStack_3d8 = param_3[3];
      uVar21 = param_3[2];
      uStack_3f0 = uVar25;
      plStack_3e8 = plVar16;
      uStack_3e0 = uVar21;
      plStack_3a0 = plVar2;
      uStack_398 = uVar4;
      if (uStack_3c0 != 1) {
        if (uStack_3c0 == 0) {
          uVar18 = 0x2a;
          unaff_x22 = (undefined8 *)_malloc(0x2a);
          if (unaff_x22 == (undefined8 *)0x0) {
LAB_1015364c4:
            func_0x0001087c9084(1,uVar18);
            goto LAB_1015364f0;
          }
          unaff_x22[1] = 0x3120796c74636178;
          *unaff_x22 = 0x65206465746e6177;
          unaff_x22[3] = 0x20646e756f66202c;
          unaff_x22[2] = 0x746e656d656c6520;
          *(undefined8 *)((long)unaff_x22 + 0x22) = 0x73746e656d656c65;
          *(undefined8 *)((long)unaff_x22 + 0x1a) = 0x203020646e756f66;
          uStack_530 = 0x2a;
          uStack_558 = uStack_530;
        }
        else {
          uVar18 = 0x2d;
          unaff_x22 = (undefined8 *)_malloc(0x2d);
          if (unaff_x22 == (undefined8 *)0x0) goto LAB_1015364c4;
          unaff_x22[1] = 0x3120796c74636178;
          *unaff_x22 = 0x65206465746e6177;
          unaff_x22[3] = 0x742065726f6d202c;
          unaff_x22[2] = 0x746e656d656c6520;
          *(undefined8 *)((long)unaff_x22 + 0x25) = 0x746e656d656c6520;
          *(undefined8 *)((long)unaff_x22 + 0x1d) = 0x31206e6168742065;
          uStack_530 = 0x2d;
          uStack_558 = uStack_530;
        }
        if ((uStack_3d0 != 0) && (uStack_3d0 * 9 != -0x11)) {
          _free(uStack_3d8 + uStack_3d0 * -8 + -8);
        }
        func_0x000100d96fa0(&uStack_3f0);
        uStack_540 = 0;
        uStack_538 = 0;
        uVar21 = 1;
        plStack_550 = (long *)0x8;
        uStack_548 = 0;
        plVar16 = plVar2;
        plVar17 = (long *)((ulong)plVar2 >> 8);
        uStack_530 = uStack_558;
        goto joined_r0x000101535dc0;
      }
      if ((uStack_3d0 != 0) && (uStack_3d0 * 9 != -0x11)) {
        _free(uStack_3d8 + uStack_3d0 * -8 + -8);
      }
      plStack_240 = plVar16 + uVar21 * 0x12;
      uStack_2e0 = 0x8000000000000001;
      uStack_2f8 = 0x8000000000000000;
      plStack_250 = plVar16;
      plStack_258 = plVar16;
      uStack_248 = uVar25;
      plStack_238 = plVar2;
      uStack_230 = uVar4;
      if (uVar21 == 0) {
LAB_101535e54:
        unaff_x22 = (undefined8 *)_malloc(0x36);
        if (unaff_x22 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x36);
LAB_1015364f0:
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1015364f4);
          (*pcVar14)();
        }
        uStack_540 = 0;
        uStack_538 = 0;
        unaff_x22[1] = 0x7720656c62617420;
        *unaff_x22 = 0x6465746365707865;
        unaff_x22[3] = 0x6e65203120796c74;
        unaff_x22[2] = 0x6361786520687469;
        unaff_x22[5] = 0x7974706d6520646e;
        unaff_x22[4] = 0x756f66202c797274;
        uStack_530 = 0x36;
        *(undefined8 *)((long)unaff_x22 + 0x2e) = 0x656c626174207974;
        plStack_550 = (long *)0x8;
        uStack_548 = 0;
        uStack_558 = 0x36;
        plVar20 = plVar2;
LAB_101535ea4:
        FUN_100e1fd94(&uStack_2e0);
        uVar21 = 1;
LAB_101535eb0:
        uStack_210 = uStack_558;
        uStack_200 = uStack_530;
        uStack_1f8 = uStack_540;
        plStack_1f0 = plStack_550;
        uStack_1e8 = uStack_538;
        uStack_1e0 = uStack_548;
        puStack_1d8 = puStack_560;
        uStack_228 = uVar21;
        plStack_220 = plVar20;
        uStack_218 = uVar22;
        puStack_208 = unaff_x22;
        __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_418);
        if ((uStack_2f8 & 0x7fffffffffffffff) != 0) {
          _free(uStack_2f0);
        }
        plVar17 = (long *)((ulong)plVar20 >> 8);
        plVar16 = plVar20;
        if (uVar21 == 2) goto joined_r0x000101535dc0;
      }
      else {
        plStack_250 = plVar16 + 0x12;
        if (*plVar16 == -0x7fffffffffffffff) goto LAB_101535e54;
        plVar17 = (long *)plVar16[3];
        uVar25 = plVar16[4];
        lStack_88 = plVar16[1];
        lStack_80 = plVar16[2];
        lStack_e8 = plVar16[10];
        lStack_f0 = plVar16[9];
        lStack_d8 = plVar16[0xc];
        lStack_e0 = plVar16[0xb];
        lStack_c8 = plVar16[0xe];
        lStack_d0 = plVar16[0xd];
        lStack_b8 = plVar16[0x10];
        lStack_c0 = plVar16[0xf];
        uStack_108 = plVar16[6];
        uStack_110 = plVar16[5];
        puStack_f8 = (ulong *)plVar16[8];
        uStack_100 = plVar16[7];
        puStack_1a8 = (undefined8 *)plVar16[10];
        uStack_1b0 = plVar16[9];
        uStack_198 = plVar16[0xc];
        uStack_1a0 = plVar16[0xb];
        uStack_188 = plVar16[0xe];
        plStack_190 = (long *)plVar16[0xd];
        puStack_178 = (undefined8 *)plVar16[0x10];
        uStack_180 = plVar16[0xf];
        uStack_1c8 = plVar16[6];
        uStack_1d0 = plVar16[5];
        uStack_1b8 = plVar16[8];
        plStack_1c0 = (long *)plVar16[7];
        uStack_a8 = 1;
        puStack_78 = &uStack_2f8;
        plStack_a0 = plVar17;
        uStack_98 = uVar25;
        lStack_90 = *plVar16;
        func_0x00010161966c(&uStack_168,&lStack_90,&uStack_2f8);
        uVar9 = uStack_168;
        puStack_560 = puStack_178;
        uStack_548 = uStack_180;
        uStack_538 = uStack_188;
        plStack_550 = plStack_190;
        uStack_540 = uStack_198;
        uStack_530 = uStack_1a0;
        unaff_x22 = puStack_1a8;
        uStack_558 = uStack_1b0;
        uVar22 = uStack_1b8;
        plVar20 = plStack_1c0;
        uVar21 = uStack_1c8;
        uVar8 = uStack_1d0;
        if (uStack_168 != 2) {
          plVar20 = plStack_160;
          if ((uStack_168 & 1) == 0) {
            plVar20 = plVar17;
          }
          uStack_168 = 1;
          uStack_558 = uStack_150;
          plStack_550 = plStack_130;
          uStack_538 = uStack_128;
          uStack_530 = uStack_140;
          uStack_548 = uStack_120;
          uStack_540 = uStack_138;
          puStack_560 = puStack_118;
          plStack_160 = plVar20;
          FUN_100dfe50c(&uStack_1d0);
          unaff_x22 = puStack_148;
          uVar22 = uStack_158;
          if ((uVar9 & 1) == 0) {
            uVar22 = uVar25;
          }
          goto LAB_101535ea4;
        }
        cVar13 = (char)plStack_160;
        plVar16 = (long *)((ulong)plStack_160 & 0xff);
        FUN_100e1fd94(&uStack_2e0);
        if (uVar8 == 0x8000000000000006) goto LAB_101535eb0;
        uStack_388 = 8;
        if (uStack_2f8 != 0x8000000000000000) {
          uStack_388 = 4;
        }
        plStack_380 = &lStack_418;
        uStack_378 = uStack_2f8;
        uStack_370 = uStack_2f0;
        puStack_368 = puStack_2e8;
        uStack_360 = uVar8;
        uStack_358 = uVar21;
        plStack_350 = plVar20;
        uStack_348 = uVar22;
        uStack_340 = uStack_558;
        puStack_338 = unaff_x22;
        uStack_330 = uStack_530;
        uStack_328 = uStack_540;
        plStack_320 = plStack_550;
        uStack_318 = uStack_538;
        uStack_310 = uStack_548;
        puStack_308 = puStack_560;
        lStack_300 = lVar3;
        if (cVar13 == '\x02') {
          FUN_100b19dfc(&uStack_2e0,&uStack_388);
        }
        else if (cVar13 == '\x01') {
          FUN_100b19dfc(&uStack_2e0,&uStack_388);
        }
        else {
          FUN_100b19dfc(&uStack_2e0,&uStack_388);
        }
        if (uStack_2e0 == 2) {
          uVar21 = 2;
          plVar17 = plVar16;
          goto joined_r0x000101535dc0;
        }
        uStack_558 = uStack_2c8;
        plStack_550 = plStack_2a8;
        uStack_538 = uStack_2a0;
        uStack_530 = uStack_2b8;
        uStack_548 = uStack_298;
        uStack_540 = uStack_2b0;
        puStack_560 = puStack_290;
        plVar17 = (long *)((ulong)plStack_2d8 >> 8);
        unaff_x22 = puStack_2c0;
        plVar20 = plStack_2d8;
        uVar21 = uStack_2e0;
        uVar22 = uStack_2d0;
      }
      uStack_2c8 = uStack_558;
      uStack_2b8 = uStack_530;
      uStack_2b0 = uStack_540;
      plStack_2a8 = plStack_550;
      uStack_2a0 = uStack_538;
      uStack_298 = uStack_548;
      puStack_290 = puStack_560;
      uStack_2e0 = uVar21;
      plStack_2d8 = plVar20;
      uStack_2d0 = uVar22;
      puStack_2c0 = unaff_x22;
      __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_418);
      plVar16 = plVar20;
joined_r0x000101535dc0:
      if (uVar21 == 2) goto LAB_101535dc4;
      if ((uVar21 & 1) != 0) {
        bVar7 = false;
        uVar21 = 1;
        goto joined_r0x000101535dcc;
      }
    }
    else {
      unaff_x22 = (undefined8 *)_malloc(0x16);
      if (unaff_x22 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x16);
        goto LAB_1015364f0;
      }
      uStack_540 = 0;
      uStack_538 = 0;
      unaff_x22[1] = 0x726f20676e697274;
      *unaff_x22 = 0x73206465746e6177;
      uStack_530 = 0x16;
      *(undefined8 *)((long)unaff_x22 + 0xe) = 0x656c62617420726f;
      plStack_550 = (long *)0x8;
      uStack_548 = 0;
      uStack_558 = 0x16;
    }
    bVar7 = false;
    uVar21 = 1;
    plVar17 = (long *)((ulong)plVar2 >> 8);
    plVar16 = plVar2;
    uVar22 = uVar4;
  }
joined_r0x000101535dcc:
  if ((uVar15 != 0) && (uVar15 != 6)) {
    FUN_100dfe50c(param_3);
  }
  uVar19 = SUB81(plVar16,0);
  uVar6 = (undefined2)((ulong)plVar17 >> 0x20);
  uVar5 = (undefined1)((ulong)plVar17 >> 0x30);
  if (!bVar7) {
    plStack_2d8 = (long *)CONCAT17(uVar5,CONCAT25(uVar6,CONCAT41((int)plVar17,uVar19)));
    uStack_2e0 = uVar21;
    uStack_2d0 = uVar22;
    uStack_2c8 = uStack_558;
    puStack_2c0 = unaff_x22;
    uStack_2b8 = uStack_530;
    uStack_2b0 = uStack_540;
    plStack_2a8 = plStack_550;
    uStack_2a0 = uStack_538;
    uStack_298 = uStack_548;
    puStack_290 = puStack_560;
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_418);
  }
  if (((lStack_418 == 2) || (lStack_418 == 4)) && (lStack_408 != 0)) {
    _free(uStack_400);
  }
  if (bVar7) {
    *(undefined1 *)(param_1 + 1) = uVar19;
    *param_1 = 2;
  }
  else {
    *(int *)((long)param_1 + 9) = (int)plVar17;
    *(undefined1 *)((long)param_1 + 0xf) = uVar5;
    *(undefined2 *)((long)param_1 + 0xd) = uVar6;
    param_1[2] = uVar22;
    param_1[3] = uStack_558;
    param_1[4] = (ulong)unaff_x22;
    param_1[5] = uStack_530;
    param_1[6] = uStack_540;
    param_1[7] = (ulong)plStack_550;
    param_1[8] = uStack_538;
    param_1[9] = uStack_548;
    param_1[10] = (ulong)puStack_560;
    *(undefined1 *)(param_1 + 1) = uVar19;
    *param_1 = uVar21;
    uStack_448 = param_1[5];
    uStack_450 = param_1[4];
    uStack_438 = param_1[7];
    uStack_440 = param_1[6];
    uStack_428 = param_1[9];
    uStack_430 = param_1[8];
    uStack_468 = param_1[1];
    uStack_470 = *param_1;
    uStack_458 = param_1[3];
    uStack_460 = param_1[2];
    puStack_420 = puStack_560;
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_498);
    *param_1 = uVar21;
    param_1[2] = uVar22;
    uStack_2b8 = param_1[5];
    puStack_2c0 = (undefined8 *)param_1[4];
    plStack_2a8 = (long *)param_1[7];
    uStack_2b0 = param_1[6];
    uStack_298 = param_1[9];
    uStack_2a0 = param_1[8];
    puStack_290 = (undefined8 *)param_1[10];
    plStack_2d8 = (long *)param_1[1];
    uStack_2e0 = *param_1;
    uStack_2c8 = param_1[3];
    uStack_2d0 = param_1[2];
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_498);
  }
  if (((lStack_498 == 2) || (lStack_498 == 4)) && (puStack_488 != (undefined8 *)0x0)) {
    _free(lStack_480);
  }
  if (!bVar7) {
    uStack_4c8 = param_1[5];
    uStack_4d0 = param_1[4];
    uStack_4b8 = param_1[7];
    uStack_4c0 = param_1[6];
    uStack_4a8 = param_1[9];
    uStack_4b0 = param_1[8];
    uStack_4a0 = param_1[10];
    uStack_4e8 = param_1[1];
    uStack_4f0 = *param_1;
    uStack_4d8 = param_1[3];
    uStack_4e0 = param_1[2];
    __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(lVar3,&lStack_520);
  }
  if (((lVar23 == 2) || (lVar23 == 4)) && (lStack_510 != 0)) {
    _free(lStack_508);
  }
  return;
}

