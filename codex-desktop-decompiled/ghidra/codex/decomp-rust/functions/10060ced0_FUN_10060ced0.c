
void FUN_10060ced0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  ulong uStack_350;
  ulong uStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long *plStack_300;
  long *plStack_2f8;
  long lStack_2f0;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  long *plStack_230;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  
  lStack_378 = param_2[1];
  lStack_380 = *param_2;
  lStack_368 = param_2[3];
  lStack_370 = param_2[2];
  lStack_360 = param_2[4];
  plVar13 = (long *)param_2[0x10];
  plVar12 = (long *)param_2[0xf];
  lStack_318 = param_2[0xc];
  lStack_320 = param_2[0xb];
  lStack_308 = param_2[0xe];
  lStack_310 = param_2[0xd];
  lStack_2f0 = param_2[0x11];
  plVar2 = (long *)param_2[0x12];
  uStack_348 = param_2[6];
  uStack_350 = param_2[5];
  lStack_338 = param_2[8];
  lStack_340 = param_2[7];
  lStack_328 = param_2[10];
  lStack_330 = param_2[9];
  uVar9 = uStack_350 ^ 0x8000000000000000;
  if (-1 < (long)uStack_350) {
    uVar9 = 6;
  }
  plStack_300 = plVar12;
  plStack_2f8 = plVar13;
  if ((long)uVar9 < 3) {
    if (uVar9 == 0) {
      if (uStack_348 == 0x8000000000000000) {
        func_0x000107c0580c(&plStack_2e0,&lStack_380,plVar2,lStack_340,lStack_338);
        plVar4 = plStack_2e0;
        plVar8 = plStack_280;
      }
      else {
        func_0x000107c05754(&plStack_2e0,&lStack_380,plVar2,(ulong)&uStack_350 | 8);
        plVar4 = plStack_2e0;
        plVar8 = plStack_280;
      }
      goto joined_r0x00010060d710;
    }
    if (uVar9 == 1) {
      plStack_178 = (long *)param_2[7];
      plStack_180 = (long *)param_2[6];
      plStack_168 = (long *)param_2[9];
      plStack_170 = (long *)param_2[8];
      auVar14 = func_0x00010612451c(&plStack_180);
      if ((auVar14._0_8_ & 1) == 0) {
        auVar14 = func_0x0001061247b8(&plStack_180);
        if ((auVar14._0_8_ & 1) == 0) {
          func_0x0001061249a4(&plStack_130,&plStack_180);
          if (((ulong)plStack_130 & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&plStack_d0,&plStack_180);
            if (((ulong)plStack_d0 & 1) == 0) {
              plStack_148 = (long *)0x0;
              FUN_100f1395c(&plStack_280,&plStack_148);
              plStack_2b8 = plStack_258;
              plStack_2c0 = plStack_260;
              plStack_2a8 = plStack_248;
              plStack_2b0 = plStack_250;
              plStack_298 = plStack_238;
              plStack_2a0 = plStack_240;
              plStack_290 = plStack_230;
              plStack_2d8 = plStack_278;
              plStack_2e0 = plStack_280;
              plStack_2c8 = plStack_268;
              plStack_2d0 = plStack_270;
              if (((ulong)plStack_180 & 0x7fffffffffffffff) != 0) {
                _free(plStack_178);
                plStack_280 = plStack_2e0;
              }
              goto LAB_10060d760;
            }
            func_0x000107c05718(&plStack_2e0,&lStack_380,plVar2,plStack_c0,plStack_b8);
          }
          else {
            func_0x000107c056d8(&plStack_2e0,&lStack_380,plVar2,plStack_120,plStack_118);
          }
        }
        else {
          func_0x000107c05838(&plStack_2e0,&lStack_380,plVar2,auVar14._8_8_);
        }
      }
      else {
        func_0x000107c057a8(&plStack_2e0,&lStack_380,plVar2,auVar14._8_8_);
      }
      plVar4 = plStack_2e0;
      plVar8 = plStack_280;
      if (((ulong)plStack_180 & 0x7fffffffffffffff) != 0) {
        _free(plStack_178);
        plVar4 = plStack_2e0;
        plVar8 = plStack_280;
      }
      goto joined_r0x00010060d710;
    }
    plStack_278 = (long *)param_2[7];
    plStack_280 = (long *)param_2[6];
    plStack_270 = (long *)param_2[8];
    uVar9 = func_0x0001061240c0(&plStack_280);
    if ((uVar9 & 1) != 0) {
      func_0x000107c0579c(&plStack_2e0,&lStack_380,plVar2);
LAB_10060d488:
      plVar4 = plStack_2e0;
      plVar8 = plStack_280;
      if (((ulong)plStack_280 & 0x7fffffffffffffff) != 0) {
        _free(plStack_278);
        plVar4 = plStack_2e0;
        plVar8 = plStack_280;
      }
      goto joined_r0x00010060d710;
    }
    plStack_2c0 = (long *)_malloc(0x20);
    if (plStack_2c0 == (long *)0x0) {
      FUN_107c03c64(1,0x20);
LAB_10060d834:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10060d838);
      (*pcVar7)();
    }
    plStack_2c0[1] = 0x6e20746e696f702d;
    *plStack_2c0 = 0x676e6974616f6c66;
    plStack_2c0[3] = 0x6465776f6c667265;
    plStack_2c0[2] = 0x766f207265626d75;
    plStack_2c8 = (long *)0x20;
    plStack_2b0 = (long *)0x0;
    plStack_2b8 = (long *)0x20;
    plStack_2a0 = (long *)0x0;
    plStack_298 = (long *)0x0;
    plStack_2a8 = (long *)0x8;
    if (((ulong)plStack_280 & 0x7fffffffffffffff) != 0) {
      _free(plStack_278);
    }
    plStack_280 = (long *)0x0;
  }
  else {
    if ((long)uVar9 < 5) {
      if (uVar9 == 3) {
        func_0x000107c056c0(&plStack_2e0,&lStack_380,plVar2,uStack_348 & 0xff);
        plVar4 = plStack_2e0;
        plVar8 = plStack_280;
      }
      else {
        plStack_b0 = (long *)param_2[7];
        plStack_b8 = (long *)param_2[6];
        plStack_a8 = (long *)param_2[8];
        plStack_a0 = &lStack_380;
        plStack_d0 = (long *)0x8000000000000000;
        plStack_198 = (long *)0x0;
        plStack_188 = (long *)0x0;
        plStack_98 = plVar2;
LAB_10060d0a0:
        if ((int)plStack_b8 != 2) {
          plVar8 = (long *)_malloc(0x18);
          if (plVar8 != (long *)0x0) {
            plVar8[1] = 0x5f65746176697270;
            *plVar8 = 0x5f6c6d6f745f5f24;
            plVar8[2] = 0x656d697465746164;
            if (plStack_d0 != (long *)0x8000000000000000 && plStack_d0 != (long *)0x0) {
              _free(plStack_c8);
              plStack_d0 = (long *)0x18;
              plStack_c0 = (long *)0x18;
              plStack_c8 = plVar8;
              plVar8 = (long *)_malloc(0x18);
              if (plVar8 != (long *)0x0) goto LAB_10060d134;
              goto LAB_10060d818;
            }
            plStack_d0 = (long *)0x18;
            plStack_c0 = (long *)0x18;
            plStack_c8 = plVar8;
            plVar8 = (long *)_malloc(0x18);
            if (plVar8 == (long *)0x0) goto LAB_10060d818;
LAB_10060d134:
            plVar8[1] = 0x5f65746176697270;
            *plVar8 = 0x5f6c6d6f745f5f24;
            plVar8[2] = 0x656d697465746164;
            plStack_180 = (long *)0x18;
            uStack_288 = 0x18;
            func_0x000101495178(&plStack_280,&plStack_d0);
            plVar6 = plStack_268;
            plVar5 = plStack_270;
            plVar4 = plStack_278;
            if (plStack_280 == (long *)0x2) goto code_r0x00010060d17c;
            plStack_158 = plStack_258;
            plStack_160 = plStack_260;
            plStack_150 = plStack_250;
            plStack_128 = plStack_240;
            plStack_130 = plStack_248;
            plStack_118 = plStack_230;
            plStack_120 = plStack_238;
            _free(plVar8);
            plStack_2b8 = plStack_158;
            plStack_2c0 = plStack_160;
            plStack_2b0 = plStack_150;
            plStack_2e0 = plStack_280;
            plStack_2d8 = plVar4;
            plStack_2d0 = plVar5;
            plStack_2c8 = plVar6;
            plStack_2a0 = plStack_128;
            plStack_2a8 = plStack_130;
            plStack_290 = plStack_118;
            plStack_298 = plStack_120;
            if (plStack_198 == (long *)0x0) {
              plStack_240 = (long *)0x0;
            }
            else {
              plStack_278 = (long *)0x0;
              plStack_270 = plStack_198;
              plStack_268 = plStack_190;
              plStack_258 = (long *)0x0;
              plStack_250 = plStack_198;
              plStack_248 = plStack_190;
              plStack_240 = plStack_188;
            }
            plStack_280 = (long *)(ulong)(plStack_198 != (long *)0x0);
            plStack_260 = plStack_280;
            while (FUN_100f3a3c8(&plStack_180,&plStack_280), plVar4 = plStack_170,
                  plVar8 = plStack_180, plStack_180 != (long *)0x0) {
              if (plStack_180[(long)plStack_170 * 3 + 1] != 0) {
                _free(plStack_180[(long)plStack_170 * 3 + 2]);
              }
              if (plVar8[(long)plVar4 * 3 + 0x22] != 0) {
                _free(plVar8[(long)plVar4 * 3 + 0x23]);
              }
            }
            if (((ulong)plStack_d0 & 0x7fffffffffffffff) != 0) {
              _free(plStack_c8);
            }
            plStack_258 = plStack_2b8;
            plStack_260 = plStack_2c0;
            plStack_248 = plStack_2a8;
            plStack_250 = plStack_2b0;
            plStack_238 = plStack_298;
            plStack_240 = plStack_2a0;
            plStack_230 = plStack_290;
            plStack_278 = plStack_2d8;
            plStack_280 = plStack_2e0;
            plStack_268 = plStack_2c8;
            plStack_270 = plStack_2d0;
            __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(plVar2,&lStack_380);
            plVar4 = plStack_2e0;
            plVar8 = plStack_280;
            goto joined_r0x00010060d710;
          }
LAB_10060d818:
          FUN_107c03c64(1,0x18);
          goto LAB_10060d834;
        }
        plStack_180 = (long *)0x8000000000000000;
        plStack_2d0 = plStack_190;
        plStack_2d8 = plStack_198;
        plStack_2c8 = plStack_188;
        plStack_2e0 = (long *)0x2;
        plVar4 = plStack_2e0;
        plVar8 = plStack_280;
        if (((ulong)plStack_d0 & 0x7fffffffffffffff) != 0) {
          _free(plStack_c8);
          plVar4 = plStack_2e0;
          plVar8 = plStack_280;
        }
      }
    }
    else if (uVar9 == 5) {
      plStack_270 = (long *)param_2[6];
      plStack_280 = (long *)param_2[7];
      plStack_268 = plStack_280 + param_2[8] * 0xc;
      plStack_278 = plStack_280;
      func_0x000107c057f0(&plStack_2e0,&lStack_380,plVar2,&plStack_280);
      plVar4 = plStack_2e0;
      plVar8 = plStack_280;
    }
    else {
      lVar1 = param_2[5];
      lVar3 = param_2[6];
      lVar11 = param_2[7];
      lVar10 = param_2[9];
      if ((lVar10 != 0) && (lVar10 * 9 != -0x11)) {
        _free(param_2[8] + lVar10 * -8 + -8);
      }
      lStack_1c8 = lVar3 + lVar11 * 0x90;
      plStack_1b0 = &lStack_380;
      plStack_268 = (long *)0x8000000000000001;
      plStack_280 = (long *)0x8000000000000000;
      plStack_198 = (long *)0x0;
      plStack_188 = (long *)0x0;
      lStack_1e0 = lVar3;
      lStack_1d8 = lVar3;
      lStack_1d0 = lVar1;
      plStack_1c0 = plVar12;
      plStack_1b8 = plVar13;
      plStack_1a8 = plVar2;
      while (func_0x000101493b30(&plStack_130,&plStack_280), plVar5 = plStack_118,
            plVar4 = plStack_120, plVar8 = plStack_128, plStack_130 == (long *)0x2) {
        if (plStack_128 == (long *)0x8000000000000000) {
          plStack_2d0 = plStack_190;
          plStack_2d8 = plStack_198;
          plStack_2c8 = plStack_188;
          plStack_2e0 = (long *)0x2;
          FUN_100e1fd94(&plStack_268);
          goto LAB_10060d488;
        }
        func_0x00010149498c(&plStack_d0,&plStack_280);
        plStack_2c8 = plStack_b8;
        plStack_2d0 = plStack_c0;
        plStack_2d8 = plStack_c8;
        if (plStack_d0 != (long *)0x2) {
          plStack_150 = plStack_a0;
          plStack_178 = plStack_90;
          plStack_180 = plStack_98;
          plStack_168 = plStack_80;
          plStack_170 = plStack_88;
          plStack_158 = plStack_a8;
          plStack_160 = plStack_b0;
          plStack_2e0 = plStack_d0;
          if (plVar8 != (long *)0x0) {
            _free(plVar4);
          }
          goto LAB_10060d4e4;
        }
        plStack_158 = plStack_c0;
        plStack_160 = plStack_c8;
        plStack_150 = plStack_b8;
        plStack_148 = plVar8;
        plStack_140 = plVar4;
        plStack_138 = plVar5;
        FUN_100f38238(&plStack_d0,&plStack_198,&plStack_148,&plStack_160);
        if ((plStack_d0 != (long *)0x8000000000000000) && (plStack_d0 != (long *)0x0)) {
          _free(plStack_c8);
        }
      }
      plStack_150 = plStack_100;
      plStack_178 = plStack_f0;
      plStack_180 = plStack_f8;
      plStack_168 = plStack_e0;
      plStack_170 = plStack_e8;
      plStack_158 = plStack_108;
      plStack_160 = plStack_110;
      plStack_2d0 = plStack_120;
      plStack_2e0 = plStack_130;
      plStack_2c8 = plStack_118;
      plStack_2d8 = plStack_128;
LAB_10060d4e4:
      plStack_2b8 = plStack_158;
      plStack_2c0 = plStack_160;
      plStack_2b0 = plStack_150;
      plStack_2a0 = plStack_178;
      plStack_2a8 = plStack_180;
      plStack_290 = plStack_168;
      plStack_298 = plStack_170;
      if (plStack_198 == (long *)0x0) {
        plStack_90 = (long *)0x0;
      }
      else {
        plStack_c8 = (long *)0x0;
        plStack_c0 = plStack_198;
        plStack_b8 = plStack_190;
        plStack_a8 = (long *)0x0;
        plStack_a0 = plStack_198;
        plStack_98 = plStack_190;
        plStack_90 = plStack_188;
      }
      plStack_d0 = (long *)(ulong)(plStack_198 != (long *)0x0);
      plStack_b0 = plStack_d0;
      while (FUN_100f3a3c8(&plStack_130,&plStack_d0), plVar4 = plStack_120, plVar8 = plStack_130,
            plStack_130 != (long *)0x0) {
        if (plStack_130[(long)plStack_120 * 3 + 1] != 0) {
          _free(plStack_130[(long)plStack_120 * 3 + 2]);
        }
        if (plVar8[(long)plVar4 * 3 + 0x22] != 0) {
          _free(plVar8[(long)plVar4 * 3 + 0x23]);
        }
      }
      FUN_100e1fd94(&plStack_268);
      if (((ulong)plStack_280 & 0x7fffffffffffffff) != 0) {
        _free(plStack_278);
      }
      plStack_258 = plStack_2b8;
      plStack_260 = plStack_2c0;
      plStack_248 = plStack_2a8;
      plStack_250 = plStack_2b0;
      plStack_238 = plStack_298;
      plStack_240 = plStack_2a0;
      plStack_230 = plStack_290;
      plStack_278 = plStack_2d8;
      plStack_280 = plStack_2e0;
      plStack_268 = plStack_2c8;
      plStack_270 = plStack_2d0;
      __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(plVar2,&lStack_380);
      plVar4 = plStack_2e0;
      plVar8 = plStack_280;
    }
joined_r0x00010060d710:
    plStack_280 = plVar4;
    plStack_2e0 = plStack_280;
    if (plStack_280 == (long *)0x2) {
      param_1[2] = plStack_2d0;
      param_1[1] = plStack_2d8;
      param_1[3] = plStack_2c8;
      *param_1 = 2;
      plStack_280 = plVar8;
      goto LAB_10060d7d4;
    }
  }
LAB_10060d760:
  param_1[4] = plStack_2c0;
  param_1[3] = plStack_2c8;
  param_1[6] = plStack_2b0;
  param_1[5] = plStack_2b8;
  param_1[8] = plStack_2a0;
  param_1[7] = plStack_2a8;
  param_1[10] = plStack_290;
  param_1[9] = plStack_298;
  plVar8 = plStack_2d0;
  plVar4 = plStack_2d8;
  if (((ulong)plStack_280 & 1) == 0) {
    plVar8 = plVar13;
    plVar4 = plVar12;
  }
  *param_1 = 1;
  param_1[1] = plVar4;
  param_1[2] = plVar8;
  plStack_278 = (long *)param_1[1];
  plStack_280 = (long *)*param_1;
  plStack_268 = (long *)param_1[3];
  plStack_270 = (long *)param_1[2];
  plStack_258 = (long *)param_1[5];
  plStack_260 = (long *)param_1[4];
  plStack_248 = (long *)param_1[7];
  plStack_250 = (long *)param_1[6];
  plStack_238 = (long *)param_1[9];
  plStack_240 = (long *)param_1[8];
  plStack_230 = (long *)param_1[10];
  __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(plVar2,&lStack_380);
LAB_10060d7d4:
  if (((lStack_380 == 2) || (lStack_380 == 4)) && (lStack_370 != 0)) {
    _free(lStack_368);
  }
  return;
code_r0x00010060d17c:
  plStack_158 = plStack_270;
  plStack_160 = plStack_278;
  plStack_150 = plStack_268;
  plStack_138 = (long *)0x18;
  plStack_148 = (long *)0x18;
  plStack_140 = plVar8;
  FUN_100f38238(&plStack_280,&plStack_198,&plStack_148,&plStack_160);
  if ((plStack_280 != (long *)0x8000000000000000) && (plStack_280 != (long *)0x0)) {
    _free(plStack_278);
  }
  goto LAB_10060d0a0;
}

