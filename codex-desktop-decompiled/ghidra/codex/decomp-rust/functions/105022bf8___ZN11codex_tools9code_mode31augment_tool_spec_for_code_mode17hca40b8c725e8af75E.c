
void __ZN11codex_tools9code_mode31augment_tool_spec_for_code_mode17hca40b8c725e8af75E
               (undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  code *pcVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lStack_598;
  long lStack_580;
  int *piStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  ulong uStack_550;
  long lStack_548;
  ulong uStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  undefined8 uStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long alStack_4a0 [9];
  undefined1 uStack_458;
  undefined1 uStack_457;
  long lStack_450;
  int *piStack_448;
  ulong uStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  int *piStack_400;
  long lStack_3f8;
  long lStack_3f0;
  int *piStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  ulong uStack_3c0;
  long lStack_3b8;
  ulong uStack_3b0;
  long lStack_3a8;
  int *piStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  ulong uStack_378;
  int *piStack_370;
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  ulong uStack_348;
  long lStack_340;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  undefined1 uStack_327;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  ulong uStack_308;
  long lStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  int *piStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  int *piStack_2a0;
  long lStack_298;
  long lStack_290;
  int *piStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  ulong uStack_260;
  long lStack_258;
  ulong uStack_250;
  long lStack_248;
  int *piStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  ulong uStack_218;
  long lStack_210;
  ulong uStack_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  long lStack_1f8;
  int *piStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  int *piStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  lVar8 = 0;
  if (*param_2 != 0) {
    lVar8 = *param_2 + -1;
  }
  if (lVar8 == 0) {
    _memcpy(&lStack_580,param_2,0x130);
    if (lStack_4c0 == 0) {
      lVar8 = 1;
      _memcpy(1,uStack_4c8,0);
      lVar6 = lStack_4b0;
      lVar13 = lStack_4a8;
    }
    else {
      lVar8 = _malloc(lStack_4c0);
      if (lVar8 == 0) {
        func_0x0001087c9084(1,lStack_4c0);
        goto LAB_1050234ec;
      }
      _memcpy(lVar8,uStack_4c8,lStack_4c0);
      lVar6 = lStack_4b0;
      lVar13 = lStack_4a8;
    }
    lStack_4b0 = lVar6;
    lStack_4a8 = lVar13;
    if (lVar13 == 0) {
      lVar9 = 1;
    }
    else {
      lVar9 = _malloc(lVar13);
      if (lVar9 == 0) {
        func_0x0001087c9084(1,lVar13);
        goto LAB_1050234ec;
      }
    }
    _memcpy(lVar9,lVar6,lVar13);
    func_0x00010502bd78(&lStack_1b0,param_2);
    piStack_370 = (int *)0x8000000000000005;
    if (alStack_4a0[0] != -0x7ffffffffffffffb) {
      FUN_10502b3b8(&piStack_c0,alStack_4a0);
      lStack_f8 = lStack_b0;
      lStack_100 = lStack_b8;
      lStack_e8 = lStack_a0;
      lStack_f0 = lStack_a8;
      lStack_d8 = lStack_90;
      uStack_e0 = uStack_98;
      uStack_c8 = uStack_80;
      uStack_d0 = uStack_88;
      piStack_370 = piStack_c0;
    }
    lStack_340 = lStack_d8;
    uStack_348 = uStack_e0;
    uStack_330 = uStack_c8;
    uStack_338 = uStack_d0;
    lStack_3c8 = uStack_128;
    lStack_3d0 = uStack_130;
    lStack_3b8 = uStack_118;
    uStack_3c0 = uStack_120;
    lStack_3a8 = lStack_108;
    uStack_3b0 = uStack_110;
    uStack_408 = uStack_168;
    uStack_410 = lStack_170;
    lStack_3f8 = uStack_158;
    piStack_400 = (int *)uStack_160;
    piStack_3e8 = (int *)uStack_148;
    lStack_3f0 = lStack_150;
    lStack_3d8 = uStack_138;
    lStack_3e0 = uStack_140;
    piStack_448 = (int *)lStack_1a8;
    lStack_450 = lStack_1b0;
    lStack_438 = lStack_198;
    uStack_440 = uStack_1a0;
    lStack_428 = lStack_188;
    lStack_430 = lStack_190;
    uStack_418 = lStack_178;
    uStack_420 = lStack_180;
    lStack_360 = lStack_f8;
    uStack_368 = lStack_100;
    piStack_3a0 = (int *)lStack_4c0;
    lStack_390 = lStack_4c0;
    lStack_350 = lStack_e8;
    lStack_358 = lStack_f0;
    uStack_328 = uStack_458;
    uStack_327 = uStack_457;
    lStack_398 = lVar8;
    lStack_380 = lVar9;
    func_0x0001050228b8(&lStack_1e0,&lStack_450);
    if (lStack_1e0 == -0x8000000000000000) {
      func_0x000105026a10(&lStack_450);
    }
    else {
      func_0x000105026a10(&lStack_450);
      if (lStack_4b8 != 0) {
        _free(lVar6);
      }
      lStack_4b8 = lStack_1e0;
      lStack_4b0 = lStack_1d8;
      lStack_4a8 = lStack_1d0;
      param_2 = &lStack_580;
    }
    _memcpy(param_1,param_2,0x130);
    return;
  }
  if (lVar8 == 1) {
    lStack_178 = param_2[8];
    lStack_180 = param_2[7];
    lStack_198 = param_2[4];
    uVar15 = param_2[3];
    lStack_188 = param_2[6];
    lStack_190 = param_2[5];
    lStack_170 = param_2[9];
    lVar8 = param_2[2];
    lStack_1b0 = param_2[1];
    lStack_1a8 = lVar8;
    uStack_1a0 = uVar15;
    if (lStack_170 != 0) {
      lVar6 = lStack_170 * 0x130;
      plVar14 = (long *)(lStack_178 + 0xe0);
      do {
        if (uVar15 == 0) {
          lVar10 = 1;
          _memcpy(1,lVar8,0);
          lVar13 = plVar14[-5];
          lVar9 = plVar14[-4];
          if (lVar9 != 0) goto LAB_105022d24;
LAB_105022d54:
          lVar11 = 1;
        }
        else {
          lVar10 = _malloc(uVar15);
          if (lVar10 == 0) {
            func_0x0001087c9084(1,uVar15);
            goto LAB_1050234ec;
          }
          _memcpy(lVar10,lVar8,uVar15);
          lVar13 = plVar14[-5];
          lVar9 = plVar14[-4];
          if (lVar9 == 0) goto LAB_105022d54;
LAB_105022d24:
          lVar11 = _malloc(lVar9);
          if (lVar11 == 0) {
            func_0x0001087c9084(1,lVar9);
            goto LAB_1050234ec;
          }
        }
        _memcpy(lVar11,lVar13,lVar9);
        lStack_320 = lVar9;
        lStack_318 = lVar11;
        lStack_310 = lVar9;
        uStack_308 = uVar15;
        lStack_300 = lVar10;
        uStack_2f8 = uVar15;
        func_0x0001050227a8(&lStack_1f8,&lStack_320);
        lStack_1d8 = lStack_318;
        lStack_1e0 = lStack_320;
        uStack_1c8 = uStack_308;
        lStack_1d0 = lStack_310;
        uStack_1b8 = uStack_2f8;
        lStack_1c0 = lStack_300;
        lVar13 = plVar14[-2];
        lVar9 = plVar14[-1];
        if (lVar9 == 0) {
          piVar7 = (int *)0x1;
        }
        else {
          piVar7 = (int *)_malloc(lVar9);
          if (piVar7 == (int *)0x0) {
            func_0x0001087c9084(1,lVar9);
            goto LAB_1050234ec;
          }
        }
        _memcpy(piVar7,lVar13,lVar9);
        func_0x00010501c778(&lStack_450,plVar14 + -0x1c);
        piVar4 = piStack_448;
        if (lStack_450 == -0x7ffffffffffffffb) {
          lStack_580 = -0x7ffffffffffffffb;
          func_0x00010502695c(piStack_448);
          _free(piVar4);
          lVar13 = *plVar14;
        }
        else {
          lVar13 = *plVar14;
          lStack_558 = lStack_428;
          lStack_560 = lStack_430;
          lStack_548 = uStack_418;
          uStack_550 = uStack_420;
          uStack_540 = uStack_410;
          lStack_568 = lStack_438;
          lStack_570 = uStack_440;
          piStack_578 = piStack_448;
          lStack_580 = lStack_450;
        }
        lVar10 = -0x7ffffffffffffffb;
        if (lVar13 != -0x7ffffffffffffffb) {
          FUN_10502b3b8(&lStack_450,plVar14);
          lStack_b8 = uStack_440;
          piStack_c0 = piStack_448;
          lStack_a8 = lStack_430;
          lStack_b0 = lStack_438;
          uStack_98 = uStack_420;
          lStack_a0 = lStack_428;
          uStack_88 = uStack_410;
          lStack_90 = uStack_418;
          lVar10 = lStack_450;
        }
        piStack_2e8 = piStack_1f0;
        lStack_2f0 = lStack_1f8;
        lStack_2d0 = lStack_1d8;
        lStack_2d8 = lStack_1e0;
        uStack_2c0 = uStack_1c8;
        lStack_2c8 = lStack_1d0;
        uStack_2b0 = uStack_1b8;
        lStack_2b8 = lStack_1c0;
        lStack_2e0 = lStack_1e8;
        uStack_200 = 0;
        uStack_250 = uStack_540;
        lStack_268 = lStack_558;
        lStack_270 = lStack_560;
        lStack_258 = lStack_548;
        uStack_260 = uStack_550;
        piStack_288 = piStack_578;
        lStack_290 = lStack_580;
        lStack_278 = lStack_568;
        lStack_280 = lStack_570;
        lStack_238 = lStack_b8;
        piStack_240 = piStack_c0;
        lStack_228 = lStack_a8;
        lStack_230 = lStack_b0;
        uStack_218 = uStack_98;
        lStack_220 = lStack_a0;
        uStack_208 = uStack_88;
        lStack_210 = lStack_90;
        lStack_2a8 = lVar9;
        piStack_2a0 = piVar7;
        lStack_298 = lVar9;
        lStack_248 = lVar10;
        if ((lStack_1e8 != 4) || (*piStack_1f0 != 0x63657865)) {
          func_0x0001028bf464(&lStack_580,&lStack_2f0);
          if (lVar9 != 0) {
            _free(piVar7);
          }
          piStack_2a0 = piStack_578;
          lStack_2a8 = lStack_580;
          lStack_298 = lStack_570;
        }
        lStack_388 = lStack_228;
        lStack_390 = lStack_230;
        uStack_378 = uStack_218;
        lStack_380 = lStack_220;
        uStack_368 = uStack_208;
        piStack_370 = (int *)lStack_210;
        lStack_360 = CONCAT71(uStack_1ff,uStack_200);
        lStack_3c8 = lStack_268;
        lStack_3d0 = lStack_270;
        lStack_3b8 = lStack_258;
        uStack_3c0 = uStack_260;
        lStack_3a8 = lStack_248;
        uStack_3b0 = uStack_250;
        lStack_398 = lStack_238;
        piStack_3a0 = piStack_240;
        uStack_408 = lStack_2a8;
        uStack_410 = uStack_2b0;
        lStack_3f8 = lStack_298;
        piStack_400 = piStack_2a0;
        piStack_3e8 = piStack_288;
        lStack_3f0 = lStack_290;
        lStack_3d8 = lStack_278;
        lStack_3e0 = lStack_280;
        piStack_448 = piStack_2e8;
        lStack_450 = lStack_2f0;
        lStack_438 = lStack_2d8;
        uStack_440 = lStack_2e0;
        lStack_428 = lStack_2c8;
        lStack_430 = lStack_2d0;
        uStack_418 = lStack_2b8;
        uStack_420 = uStack_2c0;
        if (plVar14[-3] != 0) {
          _free(plVar14[-2]);
        }
        plVar14[-2] = (long)piStack_400;
        plVar14[-3] = uStack_408;
        plVar14[-1] = lStack_3f8;
        if (lStack_450 != 0) {
          _free(piStack_448);
        }
        if (lStack_438 != 0) {
          _free(lStack_430);
        }
        if ((uStack_420 & 0x7fffffffffffffff) != 0) {
          _free(uStack_418);
        }
        if (lStack_3f0 != -0x7ffffffffffffffb) {
          func_0x000105026878(&lStack_3f0);
        }
        if (lStack_3a8 != -0x7ffffffffffffffb) {
          func_0x000105026878(&lStack_3a8);
        }
        plVar14 = plVar14 + 0x26;
        lVar6 = lVar6 + -0x130;
      } while (lVar6 != 0);
    }
    param_1[4] = lStack_198;
    param_1[3] = uStack_1a0;
    param_1[6] = lStack_188;
    param_1[5] = lStack_190;
    param_1[8] = lStack_178;
    param_1[7] = lStack_180;
    param_1[9] = lStack_170;
    param_1[2] = lStack_1a8;
    param_1[1] = lStack_1b0;
    *param_1 = 2;
    return;
  }
  if (lVar8 != 5) {
                    /* WARNING: Could not recover jumptable at 0x000108aa9c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_10b61b3a8)(param_1,param_2,0x130);
    return;
  }
  lStack_538 = param_2[10];
  uStack_540 = param_2[9];
  lStack_528 = param_2[0xc];
  lStack_530 = param_2[0xb];
  lStack_518 = param_2[0xe];
  lStack_520 = param_2[0xd];
  lStack_510 = param_2[0xf];
  piVar7 = (int *)param_2[2];
  lStack_580 = param_2[1];
  lStack_568 = param_2[4];
  lVar8 = param_2[3];
  lStack_558 = param_2[6];
  lStack_560 = param_2[5];
  lStack_548 = param_2[8];
  uStack_550 = param_2[7];
  piStack_578 = piVar7;
  lStack_570 = lVar8;
  if (lVar8 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = _malloc(lVar8);
    if (lVar6 == 0) {
      func_0x0001087c9084(1,lVar8);
      goto LAB_1050234ec;
    }
  }
  _memcpy(lVar6,piVar7,lVar8);
  lVar9 = lStack_558;
  lVar13 = lStack_560;
  if (lStack_558 == 0) {
    lStack_598 = 1;
    _memcpy(1,lStack_560,0);
    if (uStack_540 != 0) goto LAB_105023268;
LAB_1050232e4:
    uVar15 = uStack_540;
    lVar10 = 1;
    _memcpy(1,lStack_548,uStack_540);
    if (lStack_528 == 0) goto LAB_105023304;
LAB_105023290:
    lVar1 = lStack_528;
    lVar2 = lStack_530;
    lVar11 = _malloc(lStack_528);
    if (lVar11 == 0) {
      func_0x0001087c9084(1,lVar1);
      goto LAB_1050234ec;
    }
    _memcpy(lVar11,lVar2,lVar1);
    lVar2 = lStack_518;
    lVar3 = lStack_510;
  }
  else {
    lStack_598 = _malloc(lStack_558);
    if (lStack_598 == 0) {
      func_0x0001087c9084(1,lVar9);
      goto LAB_1050234ec;
    }
    _memcpy(lStack_598,lVar13,lVar9);
    if (uStack_540 == 0) goto LAB_1050232e4;
LAB_105023268:
    uVar15 = uStack_540;
    lVar11 = lStack_548;
    lVar10 = _malloc(uStack_540);
    if (lVar10 == 0) {
      func_0x0001087c9084(1,uVar15);
      goto LAB_1050234ec;
    }
    _memcpy(lVar10,lVar11,uVar15);
    if (lStack_528 != 0) goto LAB_105023290;
LAB_105023304:
    lVar1 = lStack_528;
    lVar11 = 1;
    _memcpy(1,lStack_530,lStack_528);
    lVar2 = lStack_518;
    lVar3 = lStack_510;
  }
  lStack_518 = lVar2;
  lStack_510 = lVar3;
  if (lVar3 == 0) {
    lVar12 = 1;
  }
  else {
    lVar12 = _malloc(lVar3);
    if (lVar12 == 0) {
      func_0x0001087c9084(1,lVar3);
LAB_1050234ec:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1050234f0);
      (*pcVar5)();
    }
  }
  _memcpy(lVar12,lVar2,lVar3);
  lStack_430 = lVar9;
  uStack_420 = lVar9;
  lStack_450 = 6;
  piStack_448 = (int *)lVar8;
  uStack_440 = lVar6;
  lStack_438 = lVar8;
  lStack_428 = lStack_598;
  uStack_418 = uVar15;
  uStack_410 = lVar10;
  uStack_408 = uVar15;
  piStack_400 = (int *)lVar1;
  lStack_3f8 = lVar11;
  lStack_3f0 = lVar1;
  piStack_3e8 = (int *)lVar3;
  lStack_3e0 = lVar12;
  lStack_3d8 = lVar3;
  func_0x0001050228b8(&lStack_1b0,&lStack_450);
  if (lStack_1b0 == -0x8000000000000000) {
    func_0x000105026a10(&lStack_450);
    lVar8 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = lVar8;
    lVar8 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = lVar8;
    lVar8 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = lVar8;
    param_1[0xf] = param_2[0xf];
    lVar8 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar8;
    lVar8 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar8;
    lVar8 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = lVar8;
    lVar8 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = lVar8;
  }
  else {
    func_0x000105026a10(&lStack_450);
    if (lStack_568 != 0) {
      _free(lVar13);
    }
    param_1[10] = lStack_538;
    param_1[9] = uStack_540;
    param_1[0xc] = lStack_528;
    param_1[0xb] = lStack_530;
    param_1[0xe] = lStack_518;
    param_1[0xd] = lStack_520;
    param_1[2] = piStack_578;
    param_1[1] = lStack_580;
    param_1[8] = lStack_548;
    param_1[7] = uStack_550;
    param_1[4] = lStack_1b0;
    param_1[3] = lStack_570;
    param_1[0xf] = lStack_510;
    param_1[6] = uStack_1a0;
    param_1[5] = lStack_1a8;
  }
  *param_1 = 6;
  return;
}

