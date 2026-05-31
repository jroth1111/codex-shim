
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100613244(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 (*pauVar7) [16];
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  ulong uStack_370;
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long *plStack_320;
  long *plStack_318;
  long lStack_310;
  long *plStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined1 auStack_1a0 [16];
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined1 auStack_110 [16];
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
  
  lStack_398 = param_2[1];
  lStack_3a0 = *param_2;
  lStack_388 = param_2[3];
  lStack_390 = param_2[2];
  lStack_380 = param_2[4];
  plVar13 = (long *)param_2[0x10];
  plVar12 = (long *)param_2[0xf];
  lStack_338 = param_2[0xc];
  lStack_340 = param_2[0xb];
  lStack_328 = param_2[0xe];
  lStack_330 = param_2[0xd];
  lStack_310 = param_2[0x11];
  plVar2 = (long *)param_2[0x12];
  uStack_368 = param_2[6];
  uStack_370 = param_2[5];
  lStack_358 = param_2[8];
  lStack_360 = param_2[7];
  lStack_348 = param_2[10];
  lStack_350 = param_2[9];
  uVar9 = uStack_370 ^ 0x8000000000000000;
  if (-1 < (long)uStack_370) {
    uVar9 = 6;
  }
  plStack_320 = plVar12;
  plStack_318 = plVar13;
  if ((long)uVar9 < 3) {
    if (uVar9 == 0) {
      if (uStack_368 == 0x8000000000000000) {
        func_0x000107c05808(&plStack_300,&lStack_3a0,plVar2,lStack_360,lStack_358);
        plVar4 = plStack_300;
        plVar8 = plStack_2a0;
      }
      else {
        func_0x000107c05758(&plStack_300,&lStack_3a0,plVar2,(ulong)&uStack_370 | 8);
        plVar4 = plStack_300;
        plVar8 = plStack_2a0;
      }
      goto joined_r0x000100613a2c;
    }
    if (uVar9 == 1) {
      plStack_1b8 = (long *)param_2[7];
      plStack_1c0 = (long *)param_2[6];
      plStack_1a8 = (long *)param_2[9];
      plStack_1b0 = (long *)param_2[8];
      auVar14 = func_0x00010612451c(&plStack_1c0);
      if ((auVar14._0_8_ & 1) == 0) {
        auVar14 = func_0x0001061247b8(&plStack_1c0);
        if ((auVar14._0_8_ & 1) == 0) {
          func_0x0001061249a4(&plStack_130,&plStack_1c0);
          if (((ulong)plStack_130 & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&plStack_d0,&plStack_1c0);
            if (((ulong)plStack_d0 & 1) == 0) {
              plStack_190 = (long *)0x0;
              FUN_100f1395c(&plStack_2a0,&plStack_190);
              auStack_2d8 = (undefined1  [8])plStack_278;
              plStack_2e0 = plStack_280;
              plStack_2c8 = plStack_268;
              uStack_2d0 = plStack_270;
              auVar14._8_8_ = plStack_270;
              auVar14._0_8_ = plStack_278;
              plStack_2b8 = plStack_258;
              plStack_2c0 = plStack_260;
              plStack_2b0 = plStack_250;
              plStack_2f8 = plStack_298;
              plStack_300 = plStack_2a0;
              plStack_2e8 = plStack_288;
              plStack_2f0 = plStack_290;
              if (((ulong)plStack_1c0 & 0x7fffffffffffffff) != 0) {
                _free(plStack_1b8);
                auVar14._8_8_ = uStack_2d0;
                auVar14._0_8_ = auStack_2d8;
                plStack_2a0 = plStack_300;
              }
              goto LAB_100613a7c;
            }
            func_0x000107c0570c(&plStack_300,&lStack_3a0,plVar2,plStack_c0,plStack_b8);
          }
          else {
            func_0x000107c05700(&plStack_300,&lStack_3a0,plVar2,plStack_120,plStack_118);
          }
        }
        else {
          func_0x000107c0584c(&plStack_300,&lStack_3a0,plVar2,auVar14._8_8_);
        }
      }
      else {
        func_0x000107c057b4(&plStack_300,&lStack_3a0,plVar2,auVar14._8_8_);
      }
      plVar4 = plStack_300;
      plVar8 = plStack_2a0;
      if (((ulong)plStack_1c0 & 0x7fffffffffffffff) != 0) {
        _free(plStack_1b8);
        plVar4 = plStack_300;
        plVar8 = plStack_2a0;
      }
      goto joined_r0x000100613a2c;
    }
    plStack_298 = (long *)param_2[7];
    plStack_2a0 = (long *)param_2[6];
    plStack_290 = (long *)param_2[8];
    uVar9 = func_0x0001061240c0(&plStack_2a0);
    if ((uVar9 & 1) != 0) {
      func_0x000107c05774(&plStack_300,&lStack_3a0,plVar2);
LAB_1006138a0:
      plVar4 = plStack_300;
      plVar8 = plStack_2a0;
      if (((ulong)plStack_2a0 & 0x7fffffffffffffff) != 0) {
        _free(plStack_298);
        plVar4 = plStack_300;
        plVar8 = plStack_2a0;
      }
      goto joined_r0x000100613a2c;
    }
    plStack_2e0 = (long *)_malloc(0x20);
    if (plStack_2e0 == (long *)0x0) {
      FUN_107c03c64(1,0x20);
LAB_100613b78:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100613b7c);
      (*pcVar6)();
    }
    plStack_2e0[1] = 0x6e20746e696f702d;
    *plStack_2e0 = 0x676e6974616f6c66;
    plStack_2e0[3] = 0x6465776f6c667265;
    plStack_2e0[2] = 0x766f207265626d75;
    plStack_2e8 = (long *)0x20;
    uStack_2d0 = (long *)0x0;
    auStack_2d8 = (undefined1  [8])0x20;
    plStack_2c0 = (long *)0x0;
    plStack_2b8 = (long *)0x0;
    plStack_2c8 = (long *)0x8;
    if (((ulong)plStack_2a0 & 0x7fffffffffffffff) != 0) {
      _free(plStack_298);
    }
    auVar14._8_8_ = uStack_2d0;
    auVar14._0_8_ = auStack_2d8;
    plStack_2a0 = (long *)0x0;
  }
  else {
    if ((long)uVar9 < 5) {
      if (uVar9 == 3) {
        func_0x000107c056b8(&plStack_300,&lStack_3a0,plVar2,uStack_368 & 0xff);
        plVar4 = plStack_300;
        plVar8 = plStack_2a0;
      }
      else {
        plStack_b0 = (long *)param_2[7];
        plStack_b8 = (long *)param_2[6];
        plStack_a8 = (long *)param_2[8];
        plStack_a0 = &lStack_3a0;
        plStack_d0 = (long *)0x8000000000000000;
        plStack_98 = plVar2;
        pauVar7 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
        if ((pauVar7[1][0] & 1) == 0) {
          auStack_110 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar7 + 8) = auStack_110._8_8_;
          pauVar7[1][0] = 1;
        }
        else {
          auStack_110 = *pauVar7;
        }
        *(long *)*pauVar7 = auStack_110._0_8_ + 1;
        plStack_130 = (long *)&UNK_108c56c70;
        plStack_128 = (long *)0x0;
        plStack_118 = (long *)0x0;
        plStack_120 = (long *)0x0;
        while( true ) {
          if ((int)plStack_b8 == 2) break;
          plVar8 = (long *)_malloc(0x18);
          if (plVar8 == (long *)0x0) {
LAB_100613b5c:
            FUN_107c03c64(1,0x18);
            goto LAB_100613b78;
          }
          plVar8[1] = 0x5f65746176697270;
          *plVar8 = 0x5f6c6d6f745f5f24;
          plVar8[2] = 0x656d697465746164;
          if (plStack_d0 == (long *)0x8000000000000000 || plStack_d0 == (long *)0x0) {
            plStack_d0 = (long *)0x18;
            plStack_c0 = (long *)0x18;
            plStack_c8 = plVar8;
            plVar8 = (long *)_malloc(0x18);
          }
          else {
            _free(plStack_c8);
            plStack_d0 = (long *)0x18;
            plStack_c0 = (long *)0x18;
            plStack_c8 = plVar8;
            plVar8 = (long *)_malloc(0x18);
          }
          if (plVar8 == (long *)0x0) goto LAB_100613b5c;
          plVar8[1] = 0x5f65746176697270;
          *plVar8 = 0x5f6c6d6f745f5f24;
          plVar8[2] = 0x656d697465746164;
          plStack_170 = (long *)0x18;
          uStack_2a8 = 0x18;
          func_0x000101495178(&plStack_2a0,&plStack_d0);
          if (plStack_2a0 != (long *)0x2) {
            plStack_148 = plStack_278;
            plStack_150 = plStack_280;
            plStack_140 = plStack_270;
            plStack_1b8 = plStack_260;
            plStack_1c0 = plStack_268;
            plStack_1a8 = plStack_250;
            plStack_1b0 = plStack_258;
            _free(plVar8);
            auStack_2d8 = (undefined1  [8])plStack_148;
            plStack_2e0 = plStack_150;
            uStack_2d0 = plStack_140;
            plStack_300 = plStack_2a0;
            plStack_2f8 = plStack_298;
            plStack_2f0 = plStack_290;
            plStack_2e8 = plStack_288;
            plStack_2c0 = plStack_1b8;
            plStack_2c8 = plStack_1c0;
            plStack_2b0 = plStack_1a8;
            plStack_2b8 = plStack_1b0;
            FUN_100cb56bc(&plStack_130);
            if (((ulong)plStack_d0 & 0x7fffffffffffffff) != 0) {
              _free(plStack_c8);
            }
            plStack_278 = (long *)auStack_2d8;
            plStack_280 = plStack_2e0;
            plStack_268 = plStack_2c8;
            plStack_270 = uStack_2d0;
            plStack_258 = plStack_2b8;
            plStack_260 = plStack_2c0;
            plStack_250 = plStack_2b0;
            plStack_298 = plStack_2f8;
            plStack_2a0 = plStack_300;
            plStack_288 = plStack_2e8;
            plStack_290 = plStack_2f0;
            __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(plVar2,&lStack_3a0);
            plVar4 = plStack_300;
            plVar8 = plStack_2a0;
            goto joined_r0x000100613a2c;
          }
          plStack_148 = plStack_290;
          plStack_150 = plStack_298;
          plStack_140 = plStack_288;
          plStack_180 = (long *)0x18;
          plStack_190 = (long *)0x18;
          plStack_188 = plVar8;
          FUN_1016e4cfc(&plStack_2a0,&plStack_130,&plStack_190,&plStack_150);
          if ((plStack_2a0 != (long *)0x8000000000000000) && (plStack_2a0 != (long *)0x0)) {
            _free(plStack_298);
          }
        }
        plStack_170 = (long *)0x8000000000000000;
        plStack_2f0 = plStack_128;
        plStack_2f8 = plStack_130;
        plStack_2e0 = plStack_118;
        plStack_2e8 = plStack_120;
        plStack_300 = (long *)0x2;
        plVar4 = plStack_300;
        plVar8 = plStack_2a0;
        _auStack_2d8 = auStack_110;
        if (((ulong)plStack_d0 & 0x7fffffffffffffff) != 0) {
          _free(plStack_c8);
          plVar4 = plStack_300;
          plVar8 = plStack_2a0;
        }
      }
    }
    else if (uVar9 == 5) {
      plStack_290 = (long *)param_2[6];
      plStack_2a0 = (long *)param_2[7];
      plStack_288 = plStack_2a0 + param_2[8] * 0xc;
      plStack_298 = plStack_2a0;
      func_0x000107c057ec(&plStack_300,&lStack_3a0,plVar2,&plStack_2a0);
      plVar4 = plStack_300;
      plVar8 = plStack_2a0;
    }
    else {
      lVar1 = param_2[5];
      lVar3 = param_2[6];
      lVar11 = param_2[7];
      lVar10 = param_2[9];
      if ((lVar10 != 0) && (lVar10 * 9 != -0x11)) {
        _free(param_2[8] + lVar10 * -8 + -8);
      }
      lStack_1e8 = lVar3 + lVar11 * 0x90;
      plStack_1d0 = &lStack_3a0;
      plStack_288 = (long *)0x8000000000000001;
      plStack_2a0 = (long *)0x8000000000000000;
      lStack_200 = lVar3;
      lStack_1f8 = lVar3;
      lStack_1f0 = lVar1;
      plStack_1e0 = plVar12;
      plStack_1d8 = plVar13;
      plStack_1c8 = plVar2;
      pauVar7 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if ((pauVar7[1][0] & 1) == 0) {
        auStack_1a0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar7 + 8) = auStack_1a0._8_8_;
        pauVar7[1][0] = 1;
      }
      else {
        auStack_1a0 = *pauVar7;
      }
      *(long *)*pauVar7 = auStack_1a0._0_8_ + 1;
      plStack_1c0 = (long *)&UNK_108c56c70;
      plStack_1b8 = (long *)0x0;
      plStack_1a8 = (long *)0x0;
      plStack_1b0 = (long *)0x0;
      while( true ) {
        func_0x000101493b30(&plStack_130,&plStack_2a0);
        plVar5 = plStack_118;
        plVar4 = plStack_120;
        plVar8 = plStack_128;
        if (plStack_130 != (long *)0x2) break;
        if (plStack_128 == (long *)0x8000000000000000) {
          plStack_2f0 = plStack_1b8;
          plStack_2f8 = plStack_1c0;
          plStack_2e0 = plStack_1a8;
          plStack_2e8 = plStack_1b0;
          plStack_300 = (long *)0x2;
          _auStack_2d8 = auStack_1a0;
          FUN_100e1fd94(&plStack_288);
          goto LAB_1006138a0;
        }
        func_0x00010149498c(&plStack_d0,&plStack_2a0);
        plStack_2e8 = plStack_b8;
        plStack_2f0 = plStack_c0;
        plStack_2f8 = plStack_c8;
        plStack_300 = plStack_d0;
        if (plStack_d0 != (long *)0x2) {
          plStack_160 = plStack_a0;
          plStack_188 = plStack_90;
          plStack_190 = plStack_98;
          plStack_178 = plStack_80;
          plStack_180 = plStack_88;
          plStack_168 = plStack_a8;
          plStack_170 = plStack_b0;
          if (plVar8 != (long *)0x0) {
            _free(plVar4);
          }
          goto LAB_100613900;
        }
        plStack_168 = plStack_c0;
        plStack_170 = plStack_c8;
        plStack_160 = plStack_b8;
        plStack_150 = plVar8;
        plStack_148 = plVar4;
        plStack_140 = plVar5;
        FUN_1016e4cfc(&plStack_d0,&plStack_1c0,&plStack_150,&plStack_170);
        if ((plStack_d0 != (long *)0x8000000000000000) && (plStack_d0 != (long *)0x0)) {
          _free(plStack_c8);
        }
      }
      plStack_160 = plStack_100;
      plStack_188 = plStack_f0;
      plStack_190 = plStack_f8;
      plStack_178 = plStack_e0;
      plStack_180 = plStack_e8;
      plStack_168 = (long *)auStack_110._8_8_;
      plStack_170 = (long *)auStack_110._0_8_;
      plStack_2f0 = plStack_120;
      plStack_2e8 = plStack_118;
      plStack_300 = plStack_130;
      plStack_2f8 = plStack_128;
LAB_100613900:
      auStack_2d8 = (undefined1  [8])plStack_168;
      plStack_2e0 = plStack_170;
      uStack_2d0 = plStack_160;
      plStack_2c0 = plStack_188;
      plStack_2c8 = plStack_190;
      plStack_2b0 = plStack_178;
      plStack_2b8 = plStack_180;
      FUN_100cb56bc(&plStack_1c0);
      FUN_100e1fd94(&plStack_288);
      if (((ulong)plStack_2a0 & 0x7fffffffffffffff) != 0) {
        _free(plStack_298);
      }
      plStack_278 = (long *)auStack_2d8;
      plStack_280 = plStack_2e0;
      plStack_268 = plStack_2c8;
      plStack_270 = uStack_2d0;
      plStack_258 = plStack_2b8;
      plStack_260 = plStack_2c0;
      plStack_250 = plStack_2b0;
      plStack_298 = plStack_2f8;
      plStack_2a0 = plStack_300;
      plStack_288 = plStack_2e8;
      plStack_290 = plStack_2f0;
      __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(plVar2,&lStack_3a0);
      plVar4 = plStack_300;
      plVar8 = plStack_2a0;
    }
joined_r0x000100613a2c:
    plStack_2a0 = plVar4;
    plStack_300 = plStack_2a0;
    auVar14 = _auStack_2d8;
    if (plStack_2a0 == (long *)0x2) {
      param_1[2] = plStack_2f0;
      param_1[1] = plStack_2f8;
      param_1[4] = plStack_2e0;
      param_1[3] = plStack_2e8;
      *(undefined1 (*) [16])(param_1 + 5) = _auStack_2d8;
      *param_1 = 2;
      plStack_2a0 = plVar8;
      goto LAB_100613aec;
    }
  }
LAB_100613a7c:
  param_1[4] = plStack_2e0;
  param_1[3] = plStack_2e8;
  *(undefined1 (*) [16])(param_1 + 5) = auVar14;
  param_1[8] = plStack_2c0;
  param_1[7] = plStack_2c8;
  param_1[10] = plStack_2b0;
  param_1[9] = plStack_2b8;
  plVar8 = plStack_2f0;
  plVar4 = plStack_2f8;
  if (((ulong)plStack_2a0 & 1) == 0) {
    plVar8 = plVar13;
    plVar4 = plVar12;
  }
  *param_1 = 1;
  param_1[1] = plVar4;
  param_1[2] = plVar8;
  plStack_298 = (long *)param_1[1];
  plStack_2a0 = (long *)*param_1;
  plStack_288 = (long *)param_1[3];
  plStack_290 = (long *)param_1[2];
  plStack_278 = (long *)param_1[5];
  plStack_280 = (long *)param_1[4];
  plStack_268 = (long *)param_1[7];
  plStack_270 = (long *)param_1[6];
  plStack_258 = (long *)param_1[9];
  plStack_260 = (long *)param_1[8];
  plStack_250 = (long *)param_1[10];
  _auStack_2d8 = auVar14;
  __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(plVar2,&lStack_3a0);
LAB_100613aec:
  if (((lStack_3a0 == 2) || (lStack_3a0 == 4)) && (lStack_390 != 0)) {
    _free(lStack_388);
  }
  return;
}

