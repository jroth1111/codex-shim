
void FUN_1015f3754(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined7 uVar6;
  undefined7 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined6 uVar12;
  undefined6 uVar13;
  undefined1 uVar14;
  undefined6 uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  undefined8 extraout_d0;
  ulong uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined1 auVar31 [16];
  uint7 uStack_330;
  undefined1 uStack_329;
  undefined1 uStack_328;
  undefined6 uStack_327;
  undefined1 uStack_321;
  undefined1 uStack_320;
  undefined6 uStack_31f;
  undefined1 uStack_319;
  undefined1 uStack_318;
  undefined6 uStack_317;
  undefined1 uStack_311;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  ulong uStack_298;
  long *plStack_290;
  ulong uStack_288;
  ulong uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined7 uStack_220;
  long lStack_219;
  ulong uStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined7 uStack_1c8;
  undefined1 uStack_1c1;
  undefined7 uStack_1c0;
  ulong uStack_1b9;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined5 uStack_126;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined6 uStack_11f;
  undefined1 uStack_119;
  undefined1 uStack_118;
  undefined6 uStack_117;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined6 uStack_10f;
  undefined1 uStack_109;
  undefined1 uStack_108;
  undefined6 uStack_107;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined6 uStack_ff;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined6 uStack_f7;
  undefined1 uStack_f1;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  ulong uStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  long lStack_99;
  
  uVar26 = param_2[10];
  uVar28 = param_2[0xb];
  uVar23 = *param_2;
  uVar20 = uVar23 ^ 0x8000000000000000;
  if (-1 < (long)uVar23) {
    uVar20 = 6;
  }
  if ((long)uVar20 < 3) {
    if (uVar20 == 0) {
      if (param_2[1] == 0x8000000000000000) {
        uVar20 = param_2[2];
        uVar26 = param_2[3];
        if (uVar26 == 0) {
          lVar22 = 1;
        }
        else {
          lVar22 = _malloc(uVar26);
          if (lVar22 == 0) {
            func_0x0001087c9084(1,uVar26);
LAB_1015f403c:
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1015f4040);
            (*pcVar16)();
          }
        }
        _memcpy(lVar22,uVar20,uVar26);
        uStack_128 = 0xc;
        uStack_120 = (undefined1)uVar26;
        uStack_11f = (undefined6)(uVar26 >> 8);
        uStack_119 = (undefined1)(uVar26 >> 0x38);
        uStack_118 = (undefined1)lVar22;
        uStack_117 = (undefined6)((ulong)lVar22 >> 8);
        uStack_111 = (undefined1)((ulong)lVar22 >> 0x38);
        uStack_110 = uStack_120;
        uStack_10f = uStack_11f;
        uStack_109 = uStack_119;
      }
      else {
        uVar28 = param_2[2];
        uVar26 = param_2[1];
        uStack_321 = (undefined1)uVar28;
        uStack_329 = (undefined1)uVar26;
        uVar20 = param_2[3];
        uStack_128 = 0xc;
        uStack_11f = (undefined6)(uVar26 >> 8);
        uStack_119 = (undefined1)(uVar26 >> 0x38);
        uStack_127 = (undefined1)uStack_330;
        uStack_126 = (undefined5)(uStack_330 >> 8);
        uStack_121 = (undefined1)(uStack_330 >> 0x30);
        uStack_120 = uStack_329;
        uStack_110 = (undefined1)uVar20;
        uStack_10f = (undefined6)(uVar20 >> 8);
        uStack_109 = (undefined1)(uVar20 >> 0x38);
        uStack_117 = (undefined6)(uVar28 >> 8);
        uStack_111 = (undefined1)(uVar28 >> 0x38);
        uStack_118 = uStack_321;
      }
      goto LAB_1015f3f0c;
    }
    if (uVar20 != 1) {
      uVar20 = param_2[2];
      uStack_328 = (undefined1)uVar20;
      uStack_327 = (undefined6)(uVar20 >> 8);
      uStack_321 = (undefined1)(uVar20 >> 0x38);
      uStack_330 = (uint7)param_2[1];
      uStack_329 = (undefined1)(param_2[1] >> 0x38);
      uVar20 = param_2[3];
      uStack_320 = (undefined1)uVar20;
      uStack_31f = (undefined6)(uVar20 >> 8);
      uStack_319 = (undefined1)(uVar20 >> 0x38);
      uVar20 = func_0x0001061240c0(&uStack_330);
      if ((uVar20 & 1) == 0) {
        puVar19 = (undefined8 *)_malloc(0x20);
        if (puVar19 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x20);
          goto LAB_1015f403c;
        }
        puVar19[1] = 0x6e20746e696f702d;
        *puVar19 = 0x676e6974616f6c66;
        puVar19[3] = 0x6465776f6c667265;
        puVar19[2] = 0x766f207265626d75;
        uStack_118 = 0x20;
        uStack_117 = 0;
        uStack_111 = 0;
        uStack_110 = SUB81(puVar19,0);
        uStack_10f = (undefined6)((ulong)puVar19 >> 8);
        uStack_109 = (undefined1)((ulong)puVar19 >> 0x38);
        uStack_100 = 0;
        uStack_ff = 0;
        uStack_f9 = 0;
        uStack_108 = 0x20;
        uStack_107 = 0;
        uStack_101 = 0;
        lStack_e8 = 0;
        uStack_f8 = 8;
        uStack_f7 = 0;
        uStack_f1 = 0;
        lStack_f0 = 0;
        if ((CONCAT17(uStack_329,uStack_330) & 0x7fffffffffffffff) != 0) {
          _free(CONCAT17(uStack_321,CONCAT61(uStack_327,uStack_328)));
        }
        uStack_130 = 0;
        goto LAB_1015f3fc0;
      }
      uStack_128 = 10;
      uStack_120 = (undefined1)extraout_d0;
      uStack_11f = (undefined6)((ulong)extraout_d0 >> 8);
      uStack_119 = (undefined1)((ulong)extraout_d0 >> 0x38);
      uStack_130 = 2;
      if ((CONCAT17(uStack_329,uStack_330) & 0x7fffffffffffffff) != 0) {
        _free(CONCAT17(uStack_321,CONCAT61(uStack_327,uStack_328)));
      }
      goto LAB_1015f3f00;
    }
    puStack_208 = (undefined *)param_2[2];
    uStack_210 = param_2[1];
    uStack_1f8 = param_2[4];
    uStack_200 = param_2[3];
    auVar31 = func_0x00010612451c(&uStack_210);
    uVar27 = auVar31._8_8_;
    if ((auVar31._0_8_ & 1) == 0) {
      auVar31 = func_0x0001061247b8(&uStack_210);
      uVar27 = auVar31._8_8_;
      if ((auVar31._0_8_ & 1) != 0) {
        uStack_128 = 4;
        goto LAB_1015f3d5c;
      }
      func_0x0001061249a4(&uStack_d0,&uStack_210);
      if (((uint)uStack_d0 & 1) == 0) {
        __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE(&uStack_190,&uStack_210);
        if ((uStack_190 & 1) == 0) {
          uStack_130 = 0;
          FUN_100f1395c(&uStack_330,&uStack_130);
          uStack_108 = uStack_308;
          uStack_107 = (undefined6)uStack_307;
          uStack_101 = (undefined1)((uint7)uStack_307 >> 0x30);
          uStack_110 = uStack_310;
          uStack_10f = (undefined6)uStack_30f;
          uStack_109 = (undefined1)((uint7)uStack_30f >> 0x30);
          uStack_f8 = uStack_2f8;
          uStack_f7 = (undefined6)uStack_2f7;
          uStack_f1 = (undefined1)((uint7)uStack_2f7 >> 0x30);
          uStack_100 = uStack_300;
          uStack_ff = (undefined6)uStack_2ff;
          uStack_f9 = (undefined1)((uint7)uStack_2ff >> 0x30);
          lStack_e8 = lStack_2e8;
          lStack_f0 = lStack_2f0;
          lStack_e0 = lStack_2e0;
          uStack_130 = (ulong)uStack_330;
          uStack_128 = uStack_328;
          uStack_127 = (undefined1)uStack_327;
          uStack_126 = (undefined5)((uint6)uStack_327 >> 8);
          uStack_121 = uStack_321;
          uStack_118 = uStack_318;
          uStack_117 = uStack_317;
          uStack_111 = uStack_311;
          uStack_120 = uStack_320;
          uStack_11f = uStack_31f;
          uStack_119 = uStack_319;
          if ((uStack_210 & 0x7fffffffffffffff) != 0) {
            _free(puStack_208);
          }
          goto LAB_1015f3fc0;
        }
        func_0x000108808c64(&uStack_130,CONCAT17(uStack_179,uStack_180),
                            CONCAT17(uStack_171,uStack_178));
      }
      else {
        func_0x0001087f8a68(&uStack_130,CONCAT71(uStack_bf,uStack_c0),CONCAT71(uStack_b7,uStack_b8))
        ;
      }
    }
    else {
      uStack_128 = 8;
LAB_1015f3d5c:
      uStack_120 = (undefined1)uVar27;
      uStack_11f = (undefined6)((ulong)uVar27 >> 8);
      uStack_119 = (undefined1)((ulong)uVar27 >> 0x38);
      uStack_130 = 2;
    }
    if ((uStack_210 & 0x7fffffffffffffff) != 0) {
      _free(puStack_208);
    }
  }
  else if ((long)uVar20 < 5) {
    if (uVar20 == 3) {
      uStack_127 = (undefined1)param_2[1];
      uStack_128 = 0;
      goto LAB_1015f3f0c;
    }
    uStack_1a8 = param_2[2];
    uStack_1b0 = param_2[1];
    uStack_1a0 = param_2[3];
    uStack_250 = 0;
    uStack_248 = 8;
    uStack_240 = 0;
    if ((int)uStack_1b0 != 2) {
      puVar24 = (ulong *)((ulong)&uStack_210 | 1);
      puVar25 = (ulong *)((ulong)&uStack_190 | 1);
      do {
        uStack_210 = CONCAT71(uStack_210._1_7_,0xd);
        puStack_208 = &UNK_108cad42e;
        uStack_200 = 0x18;
        FUN_101508f24(&uStack_330,&uStack_1b0);
        uVar11 = uStack_f8;
        uVar10 = uStack_100;
        uVar9 = uStack_108;
        uVar20 = uStack_240;
        uStack_f8 = (undefined1)uStack_30f;
        uStack_108 = (undefined1)uStack_31f;
        uStack_100 = (undefined1)uStack_317;
        if (CONCAT17(uStack_329,uStack_330) != 2) {
          uStack_d0 = CONCAT17(uStack_320,CONCAT16(uStack_321,uStack_327));
          uStack_c7 = (undefined7)(CONCAT17(uStack_318,CONCAT16(uStack_319,uStack_31f)) >> 8);
          uStack_b7 = (undefined7)(CONCAT17(uStack_308,uStack_30f) >> 8);
          uStack_bf = (undefined7)(CONCAT17(uStack_310,CONCAT16(uStack_311,uStack_317)) >> 8);
          uStack_b0 = CONCAT17(uStack_300,uStack_307);
          uStack_a8 = uStack_2ff;
          lStack_99 = lStack_2f0;
          uStack_a1 = uStack_2f8;
          uStack_a0 = uStack_2f7;
          uStack_1c8 = (undefined7)lStack_2e0;
          uStack_1c1 = (undefined1)((ulong)lStack_2e0 >> 0x38);
          uStack_1d0 = lStack_2e8;
          uStack_c8 = uStack_108;
          uStack_108 = uVar9;
          uStack_c0 = uStack_100;
          uStack_100 = uVar10;
          uStack_b8 = uStack_f8;
          uStack_f8 = uVar11;
          FUN_100e077ec(&uStack_210);
          uStack_11f = (undefined6)CONCAT71(uStack_c7,uStack_c8);
          uStack_119 = (undefined1)((uint7)uStack_c7 >> 0x28);
          uStack_118 = (undefined1)((uint7)uStack_c7 >> 0x30);
          uStack_127 = (undefined1)uStack_d0;
          uStack_126 = (undefined5)(uStack_d0 >> 8);
          uStack_121 = (undefined1)(uStack_d0 >> 0x30);
          uStack_120 = (undefined1)(uStack_d0 >> 0x38);
          uStack_10f = (undefined6)CONCAT71(uStack_b7,uStack_b8);
          uStack_109 = (undefined1)((uint7)uStack_b7 >> 0x28);
          uStack_108 = (undefined1)((uint7)uStack_b7 >> 0x30);
          uStack_117 = (undefined6)CONCAT71(uStack_bf,uStack_c0);
          uStack_111 = (undefined1)((uint7)uStack_bf >> 0x28);
          uStack_110 = (undefined1)((uint7)uStack_bf >> 0x30);
          uStack_ff = (undefined6)uStack_a8;
          uStack_f9 = (undefined1)((uint7)uStack_a8 >> 0x30);
          uStack_107 = (undefined6)uStack_b0;
          uStack_101 = (undefined1)(uStack_b0 >> 0x30);
          uStack_100 = (undefined1)(uStack_b0 >> 0x38);
          lStack_f0 = lStack_99;
          uStack_f8 = uStack_a1;
          uStack_f7 = (undefined6)uStack_a0;
          uStack_f1 = (undefined1)((uint7)uStack_a0 >> 0x30);
          lStack_e0 = CONCAT17(uStack_1c1,uStack_1c8);
          lStack_e8 = uStack_1d0;
          uStack_128 = uStack_328;
          uStack_130 = CONCAT17(uStack_329,uStack_330);
          FUN_100d03040(&uStack_250);
          goto LAB_1015f3f00;
        }
        uStack_107 = (undefined6)(CONCAT17(uStack_319,CONCAT61(uStack_31f,uStack_320)) >> 0x10);
        uStack_110 = (undefined1)uStack_327;
        uStack_10f = (undefined6)(CONCAT17(uStack_321,CONCAT61(uStack_327,uStack_328)) >> 0x10);
        uStack_f9 = uStack_310;
        uStack_f7 = (undefined6)((uint7)uStack_30f >> 8);
        uStack_101 = uStack_318;
        uStack_ff = (undefined6)(CONCAT17(uStack_311,CONCAT61(uStack_317,uStack_318)) >> 0x10);
        uVar29 = *(undefined8 *)((long)puVar24 + 0x17);
        uVar27 = *(undefined8 *)((long)puVar24 + 0xf);
        uStack_119 = (undefined1)uVar29;
        uStack_118 = (undefined1)((ulong)uVar29 >> 8);
        uStack_117 = (undefined6)((ulong)uVar29 >> 0x10);
        uStack_120 = (undefined1)((ulong)uVar27 >> 8);
        uStack_11f = (undefined6)((ulong)uVar27 >> 0x10);
        uVar23 = puVar24[1];
        uStack_130 = *puVar24;
        uStack_128 = (undefined1)uVar23;
        uStack_127 = (undefined1)(uVar23 >> 8);
        uStack_126 = (undefined5)(uVar23 >> 0x10);
        uStack_121 = (undefined1)(uVar23 >> 0x38);
        uStack_a8 = CONCAT61(uStack_107,uStack_108);
        uStack_b0 = CONCAT17(uStack_320,CONCAT61(uStack_10f,uStack_110));
        uStack_b7 = (undefined7)(CONCAT17(uStack_328,(int7)((ulong)uVar29 >> 8)) >> 8);
        uStack_bf = (undefined7)(CONCAT17(uStack_119,(int7)((ulong)uVar27 >> 8)) >> 8);
        lStack_99 = CONCAT62(uStack_f7,CONCAT11(uStack_f8,uStack_310));
        uStack_a0 = (undefined7)(CONCAT62(uStack_ff,(short)CONCAT61(uStack_317,uStack_318)) >> 8);
        uStack_c7 = (undefined7)(uVar23 >> 8);
        uStack_190 = CONCAT31(uStack_190._1_3_,0xd);
        puVar25[1] = uVar23;
        *puVar25 = uStack_130;
        puVar25[3] = CONCAT71(uStack_b7,uStack_118);
        puVar25[2] = CONCAT71(uStack_bf,uStack_120);
        puVar25[5] = CONCAT17(uStack_318,uStack_a8);
        puVar25[4] = uStack_b0;
        *(long *)((long)puVar25 + 0x37) = lStack_99;
        *(ulong *)((long)puVar25 + 0x2f) = CONCAT71(uStack_a0,uStack_318);
        uStack_d0 = uStack_130;
        uStack_c8 = uStack_128;
        uStack_c0 = uStack_120;
        uStack_b8 = uStack_118;
        if (uStack_240 == uStack_250) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&uStack_250);
        }
        puVar19 = (undefined8 *)(uStack_248 + uVar20 * 0x40);
        puVar19[1] = CONCAT17(uStack_181,uStack_188);
        *puVar19 = CONCAT44(uStack_18c,uStack_190);
        puVar19[3] = CONCAT17(uStack_171,uStack_178);
        puVar19[2] = CONCAT17(uStack_179,uStack_180);
        puVar19[5] = lStack_168;
        puVar19[4] = lStack_170;
        puVar19[7] = lStack_158;
        puVar19[6] = lStack_160;
        uStack_240 = uVar20 + 1;
      } while ((int)uStack_1b0 != 2);
    }
    uStack_321 = (undefined1)uStack_248;
    uStack_329 = (undefined1)uStack_250;
    uStack_128 = 0x15;
    uStack_11f = (undefined6)(uStack_250 >> 8);
    uStack_119 = (undefined1)(uStack_250 >> 0x38);
    uStack_127 = (undefined1)uStack_330;
    uStack_126 = (undefined5)(uStack_330 >> 8);
    uStack_121 = (undefined1)(uStack_330 >> 0x30);
    uStack_120 = uStack_329;
    uStack_110 = (undefined1)uStack_240;
    uStack_10f = (undefined6)(uStack_240 >> 8);
    uStack_109 = (undefined1)(uStack_240 >> 0x38);
    uStack_117 = (undefined6)(uStack_248 >> 8);
    uStack_111 = (undefined1)(uStack_248 >> 0x38);
    uStack_130 = 2;
    uStack_118 = uStack_321;
  }
  else if (uVar20 == 5) {
    uVar20 = param_2[1];
    uVar23 = param_2[2];
    lVar22 = uVar23 + param_2[3] * 0x60;
    uStack_330 = (uint7)uVar23;
    uStack_329 = (undefined1)(uVar23 >> 0x38);
    uStack_328 = (undefined1)uVar23;
    uStack_327 = (undefined6)(uVar23 >> 8);
    uStack_320 = (undefined1)uVar20;
    uStack_31f = (undefined6)(uVar20 >> 8);
    uStack_319 = (undefined1)(uVar20 >> 0x38);
    uStack_318 = (undefined1)lVar22;
    uStack_317 = (undefined6)((ulong)lVar22 >> 8);
    uStack_311 = (undefined1)((ulong)lVar22 >> 0x38);
    uStack_321 = uStack_329;
    func_0x0001013ef7b0(&uStack_130,&uStack_330);
  }
  else {
    plVar2 = (long *)param_2[1];
    uVar20 = param_2[2];
    uVar21 = param_2[4];
    if ((uVar21 != 0) && (uVar21 * 9 != -0x11)) {
      _free(param_2[3] + uVar21 * -8 + -8);
    }
    plStack_290 = plVar2 + uVar20 * 0x12;
    lStack_278 = 0;
    uStack_330 = 1;
    uStack_329 = 0x80;
    lStack_270 = 8;
    lStack_268 = 0;
    plStack_2a8 = plVar2;
    uStack_298 = uVar23;
    uStack_288 = uVar26;
    uStack_280 = uVar28;
    if (uVar20 != 0) {
      puVar24 = (ulong *)((ulong)&uStack_190 | 1);
      puVar25 = (ulong *)((ulong)&uStack_210 | 1);
      plStack_2a0 = plVar2;
      do {
        plVar2 = plStack_2a0 + 0x12;
        lVar22 = *plStack_2a0;
        if (lVar22 == -0x7fffffffffffffff) break;
        lVar3 = plStack_2a0[1];
        uVar20 = plStack_2a0[2];
        lVar4 = plStack_2a0[3];
        lVar5 = plStack_2a0[4];
        lStack_168 = plStack_2a0[10];
        lStack_170 = plStack_2a0[9];
        lStack_158 = plStack_2a0[0xc];
        lStack_160 = plStack_2a0[0xb];
        lStack_148 = plStack_2a0[0xe];
        lStack_150 = plStack_2a0[0xd];
        lStack_138 = plStack_2a0[0x10];
        lStack_140 = plStack_2a0[0xf];
        lVar17 = plStack_2a0[6];
        uStack_130 = plStack_2a0[5];
        lVar18 = plStack_2a0[8];
        lVar30 = plStack_2a0[7];
        uStack_188 = (undefined7)lVar17;
        uStack_181 = (undefined1)((ulong)lVar17 >> 0x38);
        uStack_190 = (uint)uStack_130;
        uStack_18c = (undefined4)(uStack_130 >> 0x20);
        uStack_178 = (undefined7)lVar18;
        uStack_171 = (undefined1)((ulong)lVar18 >> 0x38);
        uStack_180 = (undefined7)lVar30;
        uStack_179 = (undefined1)((ulong)lVar30 >> 0x38);
        uStack_108 = (undefined1)lStack_168;
        uStack_107 = (undefined6)((ulong)lStack_168 >> 8);
        uStack_101 = (undefined1)((ulong)lStack_168 >> 0x38);
        uStack_110 = (undefined1)lStack_170;
        uStack_10f = (undefined6)((ulong)lStack_170 >> 8);
        uStack_109 = (undefined1)((ulong)lStack_170 >> 0x38);
        uStack_f8 = (undefined1)lStack_158;
        uStack_f7 = (undefined6)((ulong)lStack_158 >> 8);
        uStack_f1 = (undefined1)((ulong)lStack_158 >> 0x38);
        uStack_100 = (undefined1)lStack_160;
        uStack_ff = (undefined6)((ulong)lStack_160 >> 8);
        uStack_f9 = (undefined1)((ulong)lStack_160 >> 0x38);
        uStack_128 = (undefined1)lVar17;
        uStack_127 = (undefined1)((ulong)lVar17 >> 8);
        uStack_126 = (undefined5)((ulong)lVar17 >> 0x10);
        uStack_118 = (undefined1)lVar18;
        uStack_117 = (undefined6)((ulong)lVar18 >> 8);
        uStack_120 = (undefined1)lVar30;
        uStack_11f = (undefined6)((ulong)lVar30 >> 8);
        uVar23 = uVar20;
        plStack_2a0 = plVar2;
        uStack_121 = uStack_181;
        uStack_119 = uStack_179;
        uStack_111 = uStack_171;
        lStack_f0 = lStack_150;
        lStack_e8 = lStack_148;
        lStack_e0 = lStack_140;
        lStack_d8 = lStack_138;
        if (lVar22 == -0x8000000000000000) {
          lVar17 = lVar3;
          if (uVar20 == 0) {
            lVar30 = lVar3;
            lVar17 = 1;
          }
          else {
LAB_1015f3a90:
            lVar18 = _malloc(uVar20);
            lVar30 = lVar17;
            lVar17 = lVar18;
            if (lVar18 == 0) {
LAB_1015f4020:
              func_0x0001087c9084(1,uVar20);
              goto LAB_1015f403c;
            }
          }
          _memcpy(lVar17,lVar30,uVar20);
        }
        else if (uVar20 == 0) {
          uVar23 = 0;
          lVar17 = 1;
        }
        else {
          lVar17 = _malloc(uVar20);
          if (lVar17 == 0) goto LAB_1015f4020;
          _memcpy(lVar17,lVar3,uVar20);
          if (uVar20 == 0x8000000000000000) goto LAB_1015f3a90;
        }
        uStack_c8 = 0xc;
        uStack_c0 = (undefined1)uVar23;
        uStack_bf = (undefined7)(uVar23 >> 8);
        uStack_b8 = (undefined1)lVar17;
        uStack_b7 = (undefined7)((ulong)lVar17 >> 8);
        uStack_d0 = 2;
        uStack_b0 = uVar20;
        if (CONCAT17(uStack_329,uStack_330) != 0x8000000000000001) {
          if ((CONCAT17(uStack_329,uStack_330) & 0x7fffffffffffffff) != 0) {
            _free(CONCAT17(uStack_321,CONCAT61(uStack_327,uStack_328)));
          }
          FUN_100dfe50c(&uStack_308);
        }
        uStack_330 = (uint7)lVar22;
        uStack_329 = (undefined1)((ulong)lVar22 >> 0x38);
        uStack_328 = (undefined1)lVar3;
        uStack_327 = (undefined6)((ulong)lVar3 >> 8);
        uStack_321 = (undefined1)((ulong)lVar3 >> 0x38);
        uStack_320 = (undefined1)uVar20;
        uStack_31f = (undefined6)(uVar20 >> 8);
        uStack_319 = (undefined1)(uVar20 >> 0x38);
        uStack_318 = (undefined1)lVar4;
        uStack_317 = (undefined6)((ulong)lVar4 >> 8);
        uStack_311 = (undefined1)((ulong)lVar4 >> 0x38);
        uStack_310 = (undefined1)lVar5;
        uStack_30f = (undefined7)((ulong)lVar5 >> 8);
        lStack_2e0 = CONCAT17(uStack_101,CONCAT61(uStack_107,uStack_108));
        lStack_2e8 = CONCAT17(uStack_109,CONCAT61(uStack_10f,uStack_110));
        uStack_2d0 = CONCAT17(uStack_f1,CONCAT61(uStack_f7,uStack_f8));
        uStack_2d8 = CONCAT17(uStack_f9,CONCAT61(uStack_ff,uStack_100));
        lStack_2c0 = lStack_e8;
        lStack_2c8 = lStack_f0;
        lStack_2b0 = lStack_d8;
        lStack_2b8 = lStack_e0;
        lStack_2f0 = CONCAT17(uStack_111,CONCAT61(uStack_117,uStack_118));
        uStack_300 = uStack_128;
        uStack_2ff = (undefined7)
                     (CONCAT17(uStack_121,CONCAT52(uStack_126,CONCAT11(uStack_127,uStack_128))) >> 8
                     );
        uStack_308 = (undefined1)uStack_130;
        uStack_307 = (undefined7)(uStack_130 >> 8);
        uStack_2f8 = uStack_120;
        uStack_2f7 = (undefined7)(CONCAT17(uStack_119,CONCAT61(uStack_11f,uStack_120)) >> 8);
        uStack_1d0 = CONCAT17(uStack_c0,uStack_c7);
        uStack_1b9 = uStack_b0;
        uStack_1c0 = uStack_b7;
        uStack_1c8 = uStack_bf;
        uStack_1c1 = uStack_b8;
        uStack_190 = CONCAT31(uStack_190._1_3_,0xc);
        puVar24[1] = CONCAT17(uStack_b8,uStack_bf);
        *puVar24 = uStack_1d0;
        *(ulong *)((long)puVar24 + 0x17) = uStack_b0;
        *(ulong *)((long)puVar24 + 0xf) = CONCAT71(uStack_b7,uStack_b8);
        FUN_1014e010c(&uStack_130,&uStack_330);
        uVar15 = uStack_10f;
        uVar14 = uStack_110;
        uVar13 = uStack_117;
        uStack_221 = uStack_118;
        uVar12 = uStack_11f;
        uVar11 = uStack_120;
        uVar10 = uStack_127;
        uVar9 = uStack_128;
        uVar20 = uStack_130;
        lVar22 = lStack_268;
        if (uStack_130 != 2) {
          uStack_248 = CONCAT17(uStack_118,CONCAT16(uStack_119,uStack_11f));
          uStack_250 = CONCAT17(uStack_120,CONCAT16(uStack_121,CONCAT51(uStack_126,uStack_127)));
          uStack_238 = CONCAT17(uStack_108,CONCAT16(uStack_109,uStack_10f));
          uStack_240 = CONCAT17(uStack_110,CONCAT16(uStack_111,uStack_117));
          uStack_228 = CONCAT16(uStack_f9,uStack_ff);
          uStack_230 = CONCAT17(uStack_100,CONCAT16(uStack_101,uStack_107));
          lStack_219 = lStack_f0;
          uStack_221 = uStack_f8;
          uStack_220 = (undefined7)(CONCAT17(uStack_f1,CONCAT61(uStack_f7,uStack_f8)) >> 8);
          lStack_258 = lStack_e0;
          lStack_260 = lStack_e8;
          FUN_100e077ec(&uStack_190);
          uStack_11f = (undefined6)uStack_248;
          uStack_119 = (undefined1)(uStack_248 >> 0x30);
          uStack_118 = (undefined1)(uStack_248 >> 0x38);
          uStack_127 = (undefined1)uStack_250;
          uStack_126 = (undefined5)(uStack_250 >> 8);
          uStack_121 = (undefined1)(uStack_250 >> 0x30);
          uStack_120 = (undefined1)(uStack_250 >> 0x38);
          uStack_10f = (undefined6)uStack_238;
          uStack_109 = (undefined1)(uStack_238 >> 0x30);
          uStack_108 = (undefined1)(uStack_238 >> 0x38);
          uStack_117 = (undefined6)uStack_240;
          uStack_111 = (undefined1)(uStack_240 >> 0x30);
          uStack_110 = (undefined1)(uStack_240 >> 0x38);
          uStack_ff = (undefined6)uStack_228;
          uStack_f9 = (undefined1)((uint7)uStack_228 >> 0x30);
          uStack_107 = (undefined6)uStack_230;
          uStack_101 = (undefined1)(uStack_230 >> 0x30);
          uStack_100 = (undefined1)(uStack_230 >> 0x38);
          lStack_f0 = lStack_219;
          uStack_f8 = uStack_221;
          uStack_f7 = (undefined6)uStack_220;
          uStack_f1 = (undefined1)((uint7)uStack_220 >> 0x30);
          lStack_e0 = lStack_258;
          lStack_e8 = lStack_260;
          uStack_130 = uVar20;
          uStack_128 = uVar9;
          FUN_100d03040(&lStack_278);
          goto LAB_1015f3eec;
        }
        uStack_1a8 = CONCAT17(uStack_119,CONCAT61(uStack_11f,uStack_120));
        uStack_1b0 = CONCAT17(uStack_121,CONCAT52(uStack_126,CONCAT11(uStack_127,uStack_128)));
        uVar7 = CONCAT61(uStack_10f,uStack_110);
        uStack_198 = CONCAT17(uStack_109,uVar7);
        uVar6 = CONCAT61(uStack_117,uStack_118);
        uStack_1a0 = CONCAT17(uStack_111,uVar6);
        uStack_128 = (undefined1)uStack_1c8;
        uStack_127 = (undefined1)((uint7)uStack_1c8 >> 8);
        uStack_126 = (undefined5)((uint7)uStack_1c8 >> 0x10);
        uStack_130 = uStack_1d0;
        uStack_119 = (undefined1)uStack_1b9;
        uStack_118 = (undefined1)(uStack_1b9 >> 8);
        uStack_117 = (undefined6)(uStack_1b9 >> 0x10);
        uStack_121 = uStack_1c1;
        uStack_120 = (undefined1)uStack_1c0;
        uStack_11f = (undefined6)((uint7)uStack_1c0 >> 8);
        uStack_109 = uVar11;
        uStack_108 = (undefined1)uVar12;
        uStack_107 = (undefined6)(uStack_1a8 >> 0x10);
        uStack_111 = uVar9;
        uStack_110 = uVar10;
        uStack_10f = (undefined6)(uStack_1b0 >> 0x10);
        uStack_f9 = uVar14;
        uStack_f8 = (undefined1)uVar15;
        uStack_f7 = (undefined6)((ulong)uStack_198 >> 0x10);
        uStack_101 = uStack_221;
        uStack_100 = (undefined1)uVar13;
        uStack_ff = (undefined6)(uStack_1a0 >> 0x10);
        uStack_248 = CONCAT17(uStack_1c1,uStack_1c8);
        uStack_250 = uStack_1d0;
        uStack_238 = CONCAT17(uVar9,(int7)(uStack_1b9 >> 8));
        uStack_240 = CONCAT17(uStack_119,uStack_1c0);
        uStack_228 = CONCAT61(uStack_107,uStack_108);
        uStack_230 = CONCAT17(uVar11,CONCAT61(uStack_10f,uVar10));
        lStack_219 = CONCAT62(uStack_f7,(short)uVar7);
        uStack_220 = (undefined7)(CONCAT62(uStack_ff,(short)uVar6) >> 8);
        uStack_210 = CONCAT71(uStack_210._1_7_,0xc);
        puVar25[1] = uStack_248;
        *puVar25 = uStack_1d0;
        puVar25[3] = uStack_238;
        puVar25[2] = uStack_240;
        puVar25[5] = CONCAT17(uStack_221,uStack_228);
        puVar25[4] = uStack_230;
        *(long *)((long)puVar25 + 0x37) = lStack_219;
        *(ulong *)((long)puVar25 + 0x2f) = CONCAT71(uStack_220,uStack_221);
        if (lStack_268 == lStack_278) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_278);
        }
        puVar1 = (ulong *)(lStack_270 + lVar22 * 0x40);
        puVar1[1] = (ulong)puStack_208;
        *puVar1 = uStack_210;
        puVar1[3] = uStack_1f8;
        puVar1[2] = uStack_200;
        puVar1[5] = uStack_1e8;
        puVar1[4] = uStack_1f0;
        puVar1[7] = uStack_1d8;
        puVar1[6] = uStack_1e0;
        lStack_268 = lVar22 + 1;
        plVar2 = plStack_2a0;
      } while (plStack_2a0 != plStack_290);
    }
    plStack_2a0 = plVar2;
    uVar8 = uStack_18c;
    uStack_181 = (undefined1)lStack_270;
    uStack_180 = (undefined7)((ulong)lStack_270 >> 8);
    uStack_18c._3_1_ = (undefined1)lStack_278;
    uStack_188 = (undefined7)((ulong)lStack_278 >> 8);
    uStack_179 = (undefined1)lStack_268;
    uStack_178 = (undefined7)((ulong)lStack_268 >> 8);
    uStack_128 = 0x15;
    uStack_11f = (undefined6)((ulong)lStack_278 >> 8);
    uStack_119 = (undefined1)((ulong)lStack_278 >> 0x38);
    uStack_127 = (undefined1)uStack_190;
    uStack_126 = (undefined5)(CONCAT44(uStack_18c,uStack_190) >> 8);
    uStack_121 = (undefined1)((uint)uVar8 >> 0x10);
    uStack_120 = uStack_18c._3_1_;
    uStack_10f = (undefined6)((ulong)lStack_268 >> 8);
    uStack_109 = (undefined1)((ulong)lStack_268 >> 0x38);
    uStack_117 = (undefined6)((ulong)lStack_270 >> 8);
    uStack_111 = (undefined1)((ulong)lStack_270 >> 0x38);
    uStack_130 = 2;
    uStack_118 = uStack_181;
    uStack_110 = uStack_179;
LAB_1015f3eec:
    FUN_100e1fd94(&uStack_330);
  }
LAB_1015f3f00:
  if (uStack_130 != 2) {
LAB_1015f3fc0:
    param_1[4] = CONCAT17(uStack_109,CONCAT61(uStack_10f,uStack_110));
    param_1[3] = CONCAT17(uStack_111,CONCAT61(uStack_117,uStack_118));
    param_1[6] = CONCAT17(uStack_f9,CONCAT61(uStack_ff,uStack_100));
    param_1[5] = CONCAT17(uStack_101,CONCAT61(uStack_107,uStack_108));
    param_1[8] = lStack_f0;
    param_1[7] = CONCAT17(uStack_f1,CONCAT61(uStack_f7,uStack_f8));
    param_1[10] = lStack_e0;
    param_1[9] = lStack_e8;
    uVar20 = CONCAT17(uStack_119,CONCAT61(uStack_11f,uStack_120));
    uVar23 = CONCAT17(uStack_121,CONCAT52(uStack_126,CONCAT11(uStack_127,uStack_128)));
    if ((uStack_130 & 1) == 0) {
      uVar20 = uVar28;
      uVar23 = uVar26;
    }
    *param_1 = 1;
    param_1[1] = uVar23;
    param_1[2] = uVar20;
    return;
  }
LAB_1015f3f0c:
  param_1[2] = CONCAT17(uStack_119,CONCAT61(uStack_11f,uStack_120));
  param_1[1] = CONCAT17(uStack_121,CONCAT52(uStack_126,CONCAT11(uStack_127,uStack_128)));
  param_1[4] = CONCAT17(uStack_109,CONCAT61(uStack_10f,uStack_110));
  param_1[3] = CONCAT17(uStack_111,CONCAT61(uStack_117,uStack_118));
  *param_1 = 2;
  return;
}

