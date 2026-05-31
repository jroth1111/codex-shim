
long FUN_101489150(long *param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  ulong uStack_3d0;
  long lStack_3c8;
  ulong uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_380;
  long lStack_378;
  long lStack_370;
  undefined8 uStack_368;
  ulong uStack_360;
  long lStack_358;
  ulong uStack_350;
  long lStack_320;
  ulong uStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_90;
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
    uStack_90 = 10;
    lVar3 = func_0x000108a4a0f8(&uStack_90,0,0);
    return lVar3;
  }
  puVar9 = param_3;
  uVar10 = param_4;
  lVar3 = _malloc(param_3);
  if (lVar3 != 0) {
    _memcpy(lVar3,param_2,param_3);
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = lVar3;
    param_1[0xb] = (long)param_3;
    param_1[9] = -0x8000000000000000;
    lStack_e0 = param_1[0xb];
    lStack_e8 = param_1[10];
    puStack_f0 = param_3;
    func_0x000100634558(&lStack_d8,param_4);
    if (lStack_d8 == -0x7ffffffffffffffb) {
      _free(lStack_e8);
      return lStack_d0;
    }
    FUN_101497a9c(&uStack_90,param_1,&puStack_f0,&lStack_d8);
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
  uVar4 = func_0x0001087c9084(1,param_3);
  _free(lStack_e8);
  auVar13 = __Unwind_Resume(uVar4);
  plVar5 = auVar13._0_8_;
  if (*plVar5 == -0x8000000000000000) {
    uStack_1d0 = 10;
    lVar3 = func_0x000108a4a0f8(&uStack_1d0,0,0);
    return lVar3;
  }
  puVar6 = (undefined8 *)_malloc(0xf);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0x7474615f6e617073;
    *(undefined8 *)((long)puVar6 + 7) = 0x7365747562697274;
    if (plVar5[9] != -0x8000000000000000 && plVar5[9] != 0) {
      _free(plVar5[10]);
    }
    plVar5[10] = (long)puVar6;
    plVar5[0xb] = 0xf;
    plVar5[9] = -0x8000000000000000;
    lStack_220 = plVar5[0xb];
    lStack_228 = plVar5[10];
    uStack_230 = 0xf;
    if (*auVar13._8_8_ == 1) {
      FUN_100644190(&lStack_218,auVar13._8_8_ + 2);
      if (lStack_218 == -0x7ffffffffffffffb) {
        _free(lStack_228);
        return lStack_210;
      }
    }
    else {
      lStack_218 = -0x8000000000000000;
    }
    FUN_101497a9c(&uStack_1d0,plVar5,&uStack_230,&lStack_218);
    uStack_278 = uStack_1c0;
    lStack_280 = lStack_1c8;
    uStack_268 = uStack_1b0;
    uStack_270 = uStack_1b8;
    uStack_258 = uStack_1a0;
    uStack_260 = uStack_1a8;
    uStack_248 = uStack_190;
    uStack_250 = uStack_198;
    uStack_240 = uStack_188;
    if (lStack_1c8 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_280);
    }
    return 0;
  }
  uVar4 = func_0x0001087c9084(1,0xf);
  _free(lStack_228);
  auVar13 = __Unwind_Resume(uVar4);
  lVar3 = auVar13._8_8_;
  plVar5 = auVar13._0_8_;
  if (*plVar5 == -0x8000000000000000) {
    lStack_320 = 10;
    lVar3 = func_0x000108a4a0f8(&lStack_320,0,0);
    return lVar3;
  }
  puVar7 = (undefined2 *)_malloc(2);
  if (puVar7 == (undefined2 *)0x0) {
    func_0x0001087c9084(1,2);
  }
  else {
    *puVar7 = auVar13._8_2_;
    if (plVar5[9] != -0x8000000000000000 && plVar5[9] != 0) {
      _free(plVar5[10]);
    }
    plVar5[10] = (long)puVar7;
    plVar5[0xb] = 2;
    plVar5[9] = -0x8000000000000000;
    lStack_370 = plVar5[0xb];
    lStack_378 = plVar5[10];
    uStack_380 = 2;
    lVar3 = uVar10 * 0x48;
    if (0x1c71c71c71c71c7 < uVar10) {
      uVar4 = 0;
      goto LAB_1014894e0;
    }
    if (lVar3 == 0) {
      uStack_3d0 = 0;
      lStack_3c8 = 8;
joined_r0x000101489530:
      uStack_3c0 = 0;
      if (uVar10 != 0) {
        uStack_3c0 = 0;
        do {
          FUN_1007dc9dc(&lStack_320,*puVar9);
          uVar1 = uStack_3c0;
          lVar3 = lStack_3c8;
          if (lStack_320 == -0x7ffffffffffffffb) {
            lVar12 = uStack_3c0 + 1;
            lVar8 = lStack_3c8;
            while (lVar12 = lVar12 + -1, lVar12 != 0) {
              FUN_100de6690(lVar8);
              lVar8 = lVar8 + 0x48;
            }
            if (uStack_3d0 != 0) {
              _free(lVar3);
            }
            _free(lStack_378);
            return uStack_318;
          }
          if (uStack_3c0 == uStack_3d0) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&uStack_3d0);
          }
          plVar11 = (long *)(lStack_3c8 + uVar1 * 0x48);
          plVar11[1] = uStack_318;
          *plVar11 = lStack_320;
          plVar11[3] = lStack_308;
          plVar11[2] = lStack_310;
          plVar11[5] = lStack_2f8;
          plVar11[4] = lStack_300;
          plVar11[7] = lStack_2e8;
          plVar11[6] = lStack_2f0;
          plVar11[8] = lStack_2e0;
          uStack_3c0 = uVar1 + 1;
          uVar10 = uVar10 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar10 != 0);
      }
      uStack_350 = uStack_3c0;
      lStack_358 = lStack_3c8;
      uStack_368 = 0x8000000000000004;
      uStack_360 = uStack_3d0;
      FUN_101497a9c(&lStack_320,plVar5,&uStack_380,&uStack_368);
      lStack_3c8 = lStack_310;
      uStack_3d0 = uStack_318;
      lStack_3b8 = lStack_300;
      uStack_3c0 = lStack_308;
      lStack_3a8 = lStack_2f0;
      lStack_3b0 = lStack_2f8;
      lStack_398 = lStack_2e0;
      lStack_3a0 = lStack_2e8;
      uStack_390 = uStack_2d8;
      if (uStack_318 != 0x8000000000000005) {
        FUN_100de6690(&uStack_3d0);
      }
      return 0;
    }
    lStack_3c8 = _malloc(lVar3);
    uStack_3d0 = uVar10;
    if (lStack_3c8 != 0) goto joined_r0x000101489530;
  }
  uVar4 = 8;
LAB_1014894e0:
  func_0x0001087c9084(uVar4,lVar3);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014894e8);
  (*pcVar2)();
}

