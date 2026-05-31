
void FUN_10159f794(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined7 uVar8;
  undefined7 uVar9;
  undefined1 uVar10;
  undefined6 uVar11;
  uint7 uVar12;
  uint7 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined6 uVar17;
  undefined6 uVar18;
  undefined6 uVar19;
  code *pcVar20;
  int iVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  bool bVar29;
  ulong *puVar30;
  ulong *puVar31;
  long lVar32;
  long lVar33;
  undefined8 extraout_d0;
  long lVar34;
  undefined1 auVar35 [16];
  ulong uStack_360;
  undefined1 uStack_358;
  undefined1 uStack_357;
  undefined6 uStack_356;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined1 uStack_330;
  undefined7 uStack_32f;
  undefined1 uStack_328;
  undefined7 uStack_327;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  uint7 uStack_300;
  undefined1 uStack_2f9;
  undefined1 uStack_2f8;
  undefined6 uStack_2f7;
  undefined1 uStack_2f1;
  undefined1 uStack_2f0;
  undefined6 uStack_2ef;
  undefined1 uStack_2e9;
  undefined1 uStack_2e8;
  undefined6 uStack_2e7;
  undefined1 uStack_2e1;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long *plStack_260;
  long *plStack_258;
  ulong uStack_250;
  long *plStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined7 uStack_1c8;
  undefined1 uStack_1c1;
  undefined7 uStack_1c0;
  long lStack_1b9;
  ulong uStack_1b0;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong uStack_170;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined1 uStack_128;
  undefined6 uStack_127;
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
  int iStack_b8;
  undefined4 uStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long alStack_78 [3];
  
  uVar11 = uStack_356;
  uVar10 = uStack_357;
  uVar2 = param_2[10];
  uVar6 = param_2[0xb];
  uVar28 = *param_2;
  uVar25 = uVar28 ^ 0x8000000000000000;
  if (-1 < (long)uVar28) {
    uVar25 = 6;
  }
  uStack_357 = (undefined1)uStack_300;
  uStack_356 = (undefined6)(uStack_300 >> 8);
  if ((long)uVar25 < 3) {
    if (uVar25 == 0) {
      if (param_2[1] == 0x8000000000000000) {
        uVar25 = param_2[2];
        uVar2 = param_2[3];
        if (uVar2 == 0) {
          lVar27 = 1;
          uStack_357 = uVar10;
          uStack_356 = uVar11;
        }
        else {
          uStack_357 = uVar10;
          uStack_356 = uVar11;
          lVar27 = _malloc(uVar2);
          if (lVar27 == 0) {
            func_0x0001087c9084(1,uVar2);
LAB_1015a0304:
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1015a0308);
            (*pcVar20)();
          }
        }
        _memcpy(lVar27,uVar25,uVar2);
        uStack_358 = 0xc;
        uStack_350 = (undefined1)uVar2;
        uStack_34f = (undefined7)(uVar2 >> 8);
        uStack_348 = (undefined1)lVar27;
        uStack_347 = (undefined7)((ulong)lVar27 >> 8);
        uStack_340 = uStack_350;
        uStack_33f = uStack_34f;
      }
      else {
        uVar25 = param_2[1];
        uStack_2f1 = (undefined1)param_2[2];
        uStack_2f9 = (undefined1)uVar25;
        uStack_358 = 0xc;
        uStack_34f = (undefined7)(uVar25 >> 8);
        uStack_350 = uStack_2f9;
        uStack_340 = (undefined1)param_2[3];
        uStack_33f = (undefined7)(param_2[3] >> 8);
        uStack_347 = (undefined7)(param_2[2] >> 8);
        uStack_348 = uStack_2f1;
      }
      goto LAB_1015a0210;
    }
    if (uVar25 != 1) {
      uVar25 = param_2[2];
      uStack_2f8 = (undefined1)uVar25;
      uStack_2f7 = (undefined6)(uVar25 >> 8);
      uStack_2f1 = (undefined1)(uVar25 >> 0x38);
      uStack_300 = (uint7)param_2[1];
      uStack_2f9 = (undefined1)(param_2[1] >> 0x38);
      uVar25 = param_2[3];
      uStack_2f0 = (undefined1)uVar25;
      uStack_2ef = (undefined6)(uVar25 >> 8);
      uStack_2e9 = (undefined1)(uVar25 >> 0x38);
      uStack_357 = uVar10;
      uStack_356 = uVar11;
      uVar25 = func_0x0001061240c0(&uStack_300);
      if ((uVar25 & 1) != 0) {
        uStack_358 = 10;
        uStack_350 = (undefined1)extraout_d0;
        uStack_34f = (undefined7)((ulong)extraout_d0 >> 8);
        if ((CONCAT17(uStack_2f9,uStack_300) & 0x7fffffffffffffff) != 0) {
          _free(CONCAT17(uStack_2f1,CONCAT61(uStack_2f7,uStack_2f8)));
        }
        goto LAB_1015a0210;
      }
      puVar23 = (undefined8 *)_malloc(0x20);
      if (puVar23 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x20);
        goto LAB_1015a0304;
      }
      puVar23[1] = 0x6e20746e696f702d;
      *puVar23 = 0x676e6974616f6c66;
      puVar23[3] = 0x6465776f6c667265;
      puVar23[2] = 0x766f207265626d75;
      uStack_348 = 0x20;
      uStack_347 = 0;
      uStack_340 = SUB81(puVar23,0);
      uStack_33f = (undefined7)((ulong)puVar23 >> 8);
      uStack_330 = 0;
      uStack_32f = 0;
      uStack_338 = 0x20;
      uStack_337 = 0;
      lStack_320 = 0;
      lStack_318 = 0;
      uStack_328 = 8;
      uStack_327 = 0;
      if ((CONCAT17(uStack_2f9,uStack_300) & 0x7fffffffffffffff) != 0) {
        _free(CONCAT17(uStack_2f1,CONCAT61(uStack_2f7,uStack_2f8)));
      }
      uStack_360 = 0;
      goto LAB_1015a01a8;
    }
    uStack_1b0 = param_2[1];
    uStack_1a8 = (undefined7)param_2[2];
    uStack_1a1 = (undefined1)(param_2[2] >> 0x38);
    uStack_198 = (undefined7)param_2[4];
    uStack_191 = (undefined1)(param_2[4] >> 0x38);
    uStack_1a0 = (undefined7)param_2[3];
    uStack_199 = (undefined1)(param_2[3] >> 0x38);
    uStack_357 = uVar10;
    uStack_356 = uVar11;
    auVar35 = func_0x00010612451c(&uStack_1b0);
    uVar24 = auVar35._8_8_;
    if ((auVar35._0_8_ & 1) == 0) {
      auVar35 = func_0x0001061247b8(&uStack_1b0);
      uVar24 = auVar35._8_8_;
      if ((auVar35._0_8_ & 1) != 0) {
        uStack_358 = 4;
        goto LAB_10159ff18;
      }
      func_0x0001061249a4(&uStack_d0,&uStack_1b0);
      if (((uint)uStack_d0 & 1) == 0) {
        __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE(&uStack_130,&uStack_1b0);
        if ((uStack_130 & 1) == 0) {
          uStack_1f0 = 0;
          FUN_100f1395c(&uStack_300,&uStack_1f0);
          uStack_338 = uStack_2d8;
          uStack_337 = uStack_2d7;
          uStack_340 = uStack_2e0;
          uStack_33f = uStack_2df;
          uStack_328 = uStack_2c8;
          uStack_327 = uStack_2c7;
          uStack_330 = uStack_2d0;
          uStack_32f = uStack_2cf;
          lStack_318 = lStack_2b8;
          lStack_320 = lStack_2c0;
          lStack_310 = lStack_2b0;
          uStack_360 = (ulong)uStack_300;
          uStack_358 = uStack_2f8;
          uStack_357 = (undefined1)uStack_2f7;
          uStack_356 = (undefined6)(CONCAT17(uStack_2f1,CONCAT61(uStack_2f7,uStack_2f8)) >> 0x10);
          uStack_348 = uStack_2e8;
          uStack_347 = (undefined7)(CONCAT17(uStack_2e1,CONCAT61(uStack_2e7,uStack_2e8)) >> 8);
          uStack_350 = uStack_2f0;
          uStack_34f = (undefined7)(CONCAT17(uStack_2e9,CONCAT61(uStack_2ef,uStack_2f0)) >> 8);
          if ((uStack_1b0 & 0x7fffffffffffffff) != 0) {
            _free(CONCAT17(uStack_1a1,uStack_1a8));
          }
          goto LAB_1015a01a8;
        }
        func_0x00010883c1dc(&uStack_360,param_3,param_4,
                            CONCAT17(uStack_119,CONCAT61(uStack_11f,uStack_120)),
                            CONCAT17(uStack_111,CONCAT61(uStack_117,uStack_118)));
      }
      else {
        func_0x00010883b5a8(&uStack_360,param_3,param_4,CONCAT71(uStack_bf,uStack_c0),
                            CONCAT44(uStack_b4,iStack_b8));
      }
    }
    else {
      uStack_358 = 8;
LAB_10159ff18:
      uStack_350 = (undefined1)uVar24;
      uStack_34f = (undefined7)((ulong)uVar24 >> 8);
      uStack_360 = 2;
    }
    if ((uStack_1b0 & 0x7fffffffffffffff) != 0) {
      _free(CONCAT17(uStack_1a1,uStack_1a8));
    }
  }
  else if ((long)uVar25 < 5) {
    if (uVar25 == 3) {
      uStack_357 = (undefined1)param_2[1];
      uStack_358 = 0;
      uStack_356 = uVar11;
      goto LAB_1015a0210;
    }
    uStack_b0 = param_2[2];
    iStack_b8 = (int)param_2[1];
    uStack_b4 = (undefined4)(param_2[1] >> 0x20);
    uStack_a8 = param_2[3];
    uStack_d0 = 0x8000000000000000;
    uStack_170 = 0;
    uStack_168 = 8;
    uStack_161 = 0;
    uStack_160 = 0;
    uStack_159 = 0;
    if (iStack_b8 == 2) {
      uStack_358 = 0x15;
      uStack_34f = 0;
      uStack_350 = 0;
      uStack_340 = 0;
      uStack_33f = 0;
      uStack_348 = 8;
      uStack_347 = 0;
    }
    else {
      puVar30 = (ulong *)((ulong)&uStack_150 | 1);
      puVar31 = (ulong *)((ulong)&uStack_130 | 1);
      uStack_a0 = param_3;
      uStack_98 = param_4;
      do {
        puVar23 = (undefined8 *)_malloc(0x18);
        if (puVar23 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x18);
          goto LAB_1015a0304;
        }
        puVar23[1] = 0x5f65746176697270;
        *puVar23 = 0x5f6c6d6f745f5f24;
        puVar23[2] = 0x656d697465746164;
        if (uStack_d0 != 0x8000000000000000 && uStack_d0 != 0) {
          _free(CONCAT71(uStack_c7,uStack_c8));
        }
        uStack_d0 = 0x18;
        uStack_c8 = SUB81(puVar23,0);
        uStack_c7 = (undefined7)((ulong)puVar23 >> 8);
        uStack_c0 = 0x18;
        uStack_bf = 0;
        uStack_150 = CONCAT71(uStack_150._1_7_,0xd);
        puStack_148 = &UNK_108cad42e;
        uStack_140 = 0x18;
        func_0x000101494090(&uStack_300,&uStack_d0);
        uVar25 = CONCAT17(uStack_2f9,uStack_300);
        if (uVar25 != 2) {
          uStack_1e8._0_7_ = CONCAT16(uStack_2e9,uStack_2ef);
          uStack_1e8._7_1_ = uStack_2e8;
          uStack_1f0 = CONCAT17(uStack_2f0,CONCAT16(uStack_2f1,uStack_2f7));
          uStack_1d8._0_7_ = uStack_2df;
          uStack_1d8._7_1_ = uStack_2d8;
          uStack_1e0._0_7_ = CONCAT16(uStack_2e1,uStack_2e7);
          uStack_1e0._7_1_ = uStack_2e0;
          uStack_1d0._0_7_ = uStack_2d7;
          uStack_1d0._7_1_ = uStack_2d0;
          uStack_1c8 = uStack_2cf;
          lStack_1b9 = lStack_2c0;
          uStack_1c1 = uStack_2c8;
          uStack_1c0 = uStack_2c7;
          lStack_218 = lStack_2b0;
          lStack_220 = lStack_2b8;
          FUN_100e077ec(&uStack_150);
          uStack_34f = (undefined7)uStack_1e8;
          uStack_348 = uStack_1e8._7_1_;
          uStack_357 = (undefined1)uStack_1f0;
          uStack_356 = (undefined6)(uStack_1f0 >> 8);
          uStack_350 = (undefined1)(uStack_1f0 >> 0x38);
          uStack_33f = (undefined7)uStack_1d8;
          uStack_338 = uStack_1d8._7_1_;
          uStack_347 = (undefined7)uStack_1e0;
          uStack_340 = uStack_1e0._7_1_;
          uStack_32f = uStack_1c8;
          uStack_337 = (undefined7)uStack_1d0;
          uStack_330 = uStack_1d0._7_1_;
          lStack_320 = lStack_1b9;
          uStack_328 = uStack_1c1;
          uStack_327 = uStack_1c0;
          lStack_310 = lStack_218;
          lStack_318 = lStack_220;
          uStack_358 = uStack_2f8;
          uStack_360 = uVar25;
          FUN_100d03040(&uStack_170);
          if ((uStack_d0 & 0x7fffffffffffffff) != 0) {
            _free(CONCAT71(uStack_c7,uStack_c8),param_3);
          }
          lStack_2b8 = lStack_318;
          lStack_2c0 = lStack_320;
          lStack_2b0 = lStack_310;
          uStack_2f8 = uStack_358;
          uStack_2f7 = (undefined6)(CONCAT62(uStack_356,CONCAT11(uStack_357,uStack_358)) >> 8);
          uStack_2f1 = (undefined1)((uint6)uStack_356 >> 0x28);
          uStack_300 = (uint7)uStack_360;
          uStack_2f9 = (undefined1)(uStack_360 >> 0x38);
          uStack_2e7 = (undefined6)uStack_347;
          uStack_2e1 = (undefined1)((uint7)uStack_347 >> 0x30);
          uStack_2f0 = uStack_350;
          uStack_2ef = (undefined6)uStack_34f;
          uStack_2e9 = (undefined1)((uint7)uStack_34f >> 0x30);
          __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(param_4,param_3);
          uStack_360 = uVar25;
          goto LAB_1015a01a0;
        }
        uStack_188 = (undefined7)(CONCAT17(uStack_2e9,CONCAT61(uStack_2ef,uStack_2f0)) >> 8);
        uStack_190 = (undefined7)(CONCAT17(uStack_2f1,CONCAT61(uStack_2f7,uStack_2f8)) >> 8);
        uStack_180 = (undefined7)(CONCAT17(uStack_2e1,CONCAT61(uStack_2e7,uStack_2e8)) >> 8);
        uStack_199 = (undefined1)*(undefined8 *)((long)puVar30 + 0x17);
        uStack_198 = (undefined7)((ulong)*(undefined8 *)((long)puVar30 + 0x17) >> 8);
        uStack_1a0 = (undefined7)((ulong)*(undefined8 *)((long)puVar30 + 0xf) >> 8);
        uStack_1e8 = puVar30[1];
        uStack_1f0 = *puVar30;
        uStack_1a8 = (undefined7)uStack_1e8;
        uStack_1a1 = (undefined1)(uStack_1e8 >> 0x38);
        uStack_1d8 = CONCAT17(uStack_2f8,uStack_198);
        uStack_1e0 = CONCAT17(uStack_199,uStack_1a0);
        uStack_1d0 = CONCAT17(uStack_2f0,uStack_190);
        uStack_1c8 = uStack_188;
        lStack_1b9 = CONCAT71(uStack_2df,uStack_2e0);
        uStack_1c1 = uStack_2e8;
        uStack_1c0 = uStack_180;
        uStack_130 = CONCAT31(uStack_130._1_3_,0xd);
        puVar31[1] = uStack_1e8;
        *puVar31 = uStack_1f0;
        puVar31[3] = uStack_1d8;
        puVar31[2] = uStack_1e0;
        puVar31[5] = CONCAT17(uStack_2e8,uStack_188);
        puVar31[4] = uStack_1d0;
        *(long *)((long)puVar31 + 0x37) = lStack_1b9;
        *(ulong *)((long)puVar31 + 0x2f) = CONCAT71(uStack_180,uStack_2e8);
        uVar25 = CONCAT17(uStack_159,uStack_160);
        uStack_1b0 = uStack_1f0;
        if (uVar25 == uStack_170) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&uStack_170);
        }
        puVar23 = (undefined8 *)(CONCAT17(uStack_161,uStack_168) + uVar25 * 0x40);
        puVar23[1] = CONCAT17(uStack_121,CONCAT61(uStack_127,uStack_128));
        *puVar23 = CONCAT44(uStack_12c,uStack_130);
        puVar23[3] = CONCAT17(uStack_111,CONCAT61(uStack_117,uStack_118));
        puVar23[2] = CONCAT17(uStack_119,CONCAT61(uStack_11f,uStack_120));
        puVar23[5] = CONCAT17(uStack_101,CONCAT61(uStack_107,uStack_108));
        puVar23[4] = CONCAT17(uStack_109,CONCAT61(uStack_10f,uStack_110));
        puVar23[7] = CONCAT17(uStack_f1,CONCAT61(uStack_f7,uStack_f8));
        puVar23[6] = CONCAT17(uStack_f9,CONCAT61(uStack_ff,uStack_100));
        lVar27 = uVar25 + 1;
        uStack_160 = (undefined7)lVar27;
        uStack_159 = (undefined1)((ulong)lVar27 >> 0x38);
      } while (iStack_b8 != 2);
      uStack_2f1 = (undefined1)uStack_168;
      uStack_2f0 = (undefined1)((uint7)uStack_168 >> 8);
      uStack_2ef = (undefined6)(CONCAT17(uStack_161,uStack_168) >> 0x10);
      uStack_2f9 = (undefined1)uStack_170;
      uStack_2f8 = (undefined1)(uStack_170 >> 8);
      uStack_2f7 = (undefined6)(uStack_170 >> 0x10);
      uStack_2e9 = (undefined1)lVar27;
      uStack_2e8 = (undefined1)((ulong)lVar27 >> 8);
      uStack_2e7 = (undefined6)((ulong)lVar27 >> 0x10);
      uStack_358 = 0x15;
      uStack_34f = (undefined7)(uStack_170 >> 8);
      uStack_357 = (undefined1)uStack_300;
      uStack_356 = (undefined6)(uStack_300 >> 8);
      uStack_350 = uStack_2f9;
      uStack_33f = (undefined7)((ulong)lVar27 >> 8);
      uStack_347 = (undefined7)(CONCAT62(uStack_2ef,(short)uStack_168) >> 8);
      uStack_348 = uStack_2f1;
      uStack_340 = uStack_2e9;
      if ((uStack_d0 & 0x7fffffffffffffff) != 0) {
        _free(CONCAT71(uStack_c7,uStack_c8));
      }
    }
    uStack_360 = 2;
  }
  else if (uVar25 == 5) {
    uVar25 = param_2[1];
    uVar28 = param_2[2];
    lVar27 = uVar28 + param_2[3] * 0x60;
    uStack_300 = (uint7)uVar28;
    uStack_2f9 = (undefined1)(uVar28 >> 0x38);
    uStack_2f8 = (undefined1)uVar28;
    uStack_2f7 = (undefined6)(uVar28 >> 8);
    uStack_2f0 = (undefined1)uVar25;
    uStack_2ef = (undefined6)(uVar25 >> 8);
    uStack_2e9 = (undefined1)(uVar25 >> 0x38);
    uStack_2e8 = (undefined1)lVar27;
    uStack_2e7 = (undefined6)((ulong)lVar27 >> 8);
    uStack_2e1 = (undefined1)((ulong)lVar27 >> 0x38);
    uStack_2e0 = (undefined1)param_3;
    uStack_2df = (undefined7)((ulong)param_3 >> 8);
    uStack_2d8 = (undefined1)param_4;
    uStack_2d7 = (undefined7)((ulong)param_4 >> 8);
    uStack_2d0 = 0;
    uStack_2cf = 0;
    uStack_357 = uVar10;
    uStack_356 = uVar11;
    uStack_2f1 = uStack_2f9;
    func_0x0001013f03e4(&uStack_360,&uStack_300);
    if (uStack_360 != 2) {
      lStack_2b8 = lStack_318;
      lStack_2c0 = lStack_320;
      lStack_2b0 = lStack_310;
      uStack_2f7 = (undefined6)(CONCAT62(uStack_356,CONCAT11(uStack_357,uStack_358)) >> 8);
      uStack_2f1 = (undefined1)((uint6)uStack_356 >> 0x28);
      uStack_300 = (uint7)uStack_360;
      uStack_2f9 = (undefined1)(uStack_360 >> 0x38);
      uStack_2e7 = (undefined6)uStack_347;
      uStack_2e1 = (undefined1)((uint7)uStack_347 >> 0x30);
      uStack_2ef = (undefined6)uStack_34f;
      uStack_2e9 = (undefined1)((uint7)uStack_34f >> 0x30);
      __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(param_4,param_3);
    }
  }
  else {
    plVar3 = (long *)param_2[1];
    uVar25 = param_2[2];
    uVar26 = param_2[4];
    if ((uVar26 != 0) && (uVar26 * 9 != -0x11)) {
      _free(param_2[3] + uVar26 * -8 + -8);
    }
    plStack_248 = plVar3 + uVar25 * 0x12;
    uStack_2e8 = 1;
    uStack_2e7 = 0;
    uStack_2e1 = 0x80;
    uStack_300 = 0;
    uStack_2f9 = 0x80;
    lStack_220 = 0;
    lStack_218 = 8;
    lStack_210 = 0;
    plStack_260 = plVar3;
    uStack_250 = uVar28;
    uStack_240 = uVar2;
    uStack_238 = uVar6;
    uStack_230 = param_3;
    uStack_228 = param_4;
    if (uVar25 != 0) {
      puVar30 = (ulong *)((ulong)&uStack_d0 | 1);
      puVar31 = (ulong *)((ulong)&uStack_1b0 | 1);
      plStack_258 = plVar3;
      do {
        uVar11 = uStack_2ef;
        uVar15 = uStack_2f0;
        uVar10 = uStack_2f9;
        uVar12 = uStack_300;
        plVar3 = plStack_258 + 0x12;
        lVar27 = *plStack_258;
        if (lVar27 == -0x7fffffffffffffff) break;
        lVar4 = plStack_258[1];
        uVar25 = plStack_258[2];
        lVar5 = plStack_258[3];
        lVar7 = plStack_258[4];
        lVar22 = plStack_258[10];
        lVar33 = plStack_258[9];
        lVar34 = plStack_258[0xc];
        lVar32 = plStack_258[0xb];
        uStack_108 = (undefined1)lVar22;
        uStack_107 = (undefined6)((ulong)lVar22 >> 8);
        uStack_101 = (undefined1)((ulong)lVar22 >> 0x38);
        uStack_110 = (undefined1)lVar33;
        uStack_10f = (undefined6)((ulong)lVar33 >> 8);
        uStack_109 = (undefined1)((ulong)lVar33 >> 0x38);
        uStack_f8 = (undefined1)lVar34;
        uStack_f7 = (undefined6)((ulong)lVar34 >> 8);
        uStack_f1 = (undefined1)((ulong)lVar34 >> 0x38);
        uStack_100 = (undefined1)lVar32;
        uStack_ff = (undefined6)((ulong)lVar32 >> 8);
        uStack_f9 = (undefined1)((ulong)lVar32 >> 0x38);
        lStack_e8 = plStack_258[0xe];
        lStack_f0 = plStack_258[0xd];
        lStack_d8 = plStack_258[0x10];
        lStack_e0 = plStack_258[0xf];
        lVar33 = plStack_258[6];
        lVar32 = plStack_258[8];
        lVar22 = plStack_258[7];
        uStack_128 = (undefined1)lVar33;
        uStack_127 = (undefined6)((ulong)lVar33 >> 8);
        uStack_121 = (undefined1)((ulong)lVar33 >> 0x38);
        uStack_130 = (uint)plStack_258[5];
        uStack_12c = (undefined4)((ulong)plStack_258[5] >> 0x20);
        uStack_118 = (undefined1)lVar32;
        uStack_117 = (undefined6)((ulong)lVar32 >> 8);
        uStack_111 = (undefined1)((ulong)lVar32 >> 0x38);
        uStack_120 = (undefined1)lVar22;
        uStack_11f = (undefined6)((ulong)lVar22 >> 8);
        uStack_119 = (undefined1)((ulong)lVar22 >> 0x38);
        uStack_2f0 = (undefined1)uVar25;
        uVar16 = uStack_2f0;
        uStack_2ef = (undefined6)(uVar25 >> 8);
        uVar17 = uStack_2ef;
        uStack_300 = (uint7)uVar25;
        uVar13 = uStack_300;
        uStack_2f9 = (undefined1)(uVar25 >> 0x38);
        uVar14 = uStack_2f9;
        plStack_258 = plVar3;
        uStack_300 = uVar12;
        uStack_2f9 = uVar10;
        uStack_2f0 = uVar15;
        uStack_2ef = uVar11;
        if (lVar27 == -0x8000000000000000) {
          lVar33 = lVar4;
          if (uVar25 != 0) {
LAB_10159fb18:
            lVar32 = _malloc(uVar25);
            if (lVar32 != 0) {
              bVar29 = false;
              lVar22 = lVar33;
              goto LAB_10159fb2c;
            }
LAB_1015a02e8:
            func_0x0001087c9084(1,uVar25);
            goto LAB_1015a0304;
          }
          bVar29 = true;
          lVar32 = 1;
          lVar22 = lVar4;
LAB_10159fb2c:
          _memcpy(lVar32,lVar22,uVar25);
          if ((CONCAT17(uStack_2f9,uStack_300) != -0x8000000000000000) &&
             (CONCAT17(uStack_2f9,uStack_300) != 0)) {
            _free(CONCAT17(uStack_2f1,CONCAT61(uStack_2f7,uStack_2f8)));
          }
          uStack_2f8 = (undefined1)lVar32;
          uStack_2f7 = (undefined6)((ulong)lVar32 >> 8);
          uStack_2f1 = (undefined1)((ulong)lVar32 >> 0x38);
          if (bVar29) {
            lVar33 = 1;
            uStack_300 = uVar13;
            uStack_2f9 = uVar14;
            uStack_2f0 = uVar16;
            uStack_2ef = uVar17;
            uStack_2e9 = uVar14;
          }
          else {
            if (uVar25 == 0) {
              alStack_78[0] = 0;
              uStack_300 = uVar13;
              uStack_2f9 = uVar14;
              uStack_2f0 = uVar16;
              uStack_2ef = uVar17;
              uStack_2e9 = uVar14;
              iVar21 = _posix_memalign(alStack_78,8,0);
              lVar33 = alStack_78[0];
              if (iVar21 != 0) {
                uVar25 = 0;
                goto LAB_1015a02e8;
              }
            }
            else {
              uStack_300 = uVar13;
              uStack_2f9 = uVar14;
              uStack_2f0 = uVar16;
              uStack_2ef = uVar17;
              uStack_2e9 = uVar14;
              lVar33 = _malloc(uVar25);
            }
            if (lVar33 == 0) goto LAB_1015a02e8;
          }
          _memcpy(lVar33,lVar22,uVar25);
        }
        else {
          if (uVar25 == 0) {
            lVar33 = 1;
            lVar22 = 1;
          }
          else {
            lVar33 = _malloc(uVar25);
            if (lVar33 == 0) goto LAB_1015a02e8;
            _memcpy(lVar33,lVar4,uVar25);
            if (uVar25 == 0x8000000000000000) goto LAB_10159fb18;
            lVar22 = _malloc(uVar25);
            if (lVar22 == 0) {
              func_0x0001087c9084(1,uVar25);
              goto LAB_1015a0304;
            }
          }
          _memcpy(lVar22,lVar33,uVar25);
          if ((CONCAT17(uStack_2f9,uStack_300) != -0x8000000000000000) &&
             (CONCAT17(uStack_2f9,uStack_300) != 0)) {
            _free(CONCAT17(uStack_2f1,CONCAT61(uStack_2f7,uStack_2f8)));
          }
          uStack_2f8 = (undefined1)lVar22;
          uStack_2f7 = (undefined6)((ulong)lVar22 >> 8);
          uStack_2f1 = (undefined1)((ulong)lVar22 >> 0x38);
          uStack_300 = uVar13;
          uStack_2f9 = uVar14;
          uStack_2f0 = uVar16;
          uStack_2ef = uVar17;
          uStack_2e9 = uVar14;
        }
        uStack_c8 = 0xc;
        uStack_bf = (undefined7)(uVar25 >> 8);
        uVar8 = uStack_bf;
        iStack_b8 = (int)lVar33;
        uStack_b4 = (undefined4)((ulong)lVar33 >> 0x20);
        uStack_d0 = 2;
        uVar28 = CONCAT17(uStack_2e1,CONCAT61(uStack_2e7,uStack_2e8));
        uStack_c0 = uVar16;
        uStack_b0 = uVar25;
        if (uVar28 != 0x8000000000000001) {
          if ((uVar28 & 0x7fffffffffffffff) != 0) {
            _free(CONCAT71(uStack_2df,uStack_2e0));
          }
          FUN_100dfe50c(&lStack_2c0);
        }
        uStack_2e8 = (undefined1)lVar27;
        uStack_2e7 = (undefined6)((ulong)lVar27 >> 8);
        uStack_2e1 = (undefined1)((ulong)lVar27 >> 0x38);
        uStack_2e0 = (undefined1)lVar4;
        uStack_2df = (undefined7)((ulong)lVar4 >> 8);
        uStack_2d0 = (undefined1)lVar5;
        uStack_2cf = (undefined7)((ulong)lVar5 >> 8);
        uStack_2c8 = (undefined1)lVar7;
        uStack_2c7 = (undefined7)((ulong)lVar7 >> 8);
        uStack_298 = CONCAT17(uStack_101,CONCAT61(uStack_107,uStack_108));
        uStack_2a0 = CONCAT17(uStack_109,CONCAT61(uStack_10f,uStack_110));
        uStack_288 = CONCAT17(uStack_f1,CONCAT61(uStack_f7,uStack_f8));
        uStack_290 = CONCAT17(uStack_f9,CONCAT61(uStack_ff,uStack_100));
        lStack_278 = lStack_e8;
        lStack_280 = lStack_f0;
        lStack_268 = lStack_d8;
        lStack_270 = lStack_e0;
        lStack_2b8 = CONCAT17(uStack_121,CONCAT61(uStack_127,uStack_128));
        lStack_2c0 = CONCAT44(uStack_12c,uStack_130);
        uStack_2a8 = CONCAT17(uStack_111,CONCAT61(uStack_117,uStack_118));
        lStack_2b0 = CONCAT17(uStack_119,CONCAT61(uStack_11f,uStack_120));
        uStack_170 = CONCAT17(uStack_c0,uStack_c7);
        uStack_159 = (undefined1)uStack_b0;
        uStack_158 = (undefined7)(uStack_b0 >> 8);
        uStack_160 = (undefined7)(CONCAT44(uStack_b4,iStack_b8) >> 8);
        uStack_168 = uStack_bf;
        uStack_161 = (undefined1)iStack_b8;
        uStack_d0 = CONCAT71(uStack_d0._1_7_,0xc);
        puVar30[1] = CONCAT17((undefined1)iStack_b8,uStack_bf);
        *puVar30 = uStack_170;
        *(ulong *)((long)puVar30 + 0x17) = uStack_b0;
        *(ulong *)((long)puVar30 + 0xf) = CONCAT71(uStack_160,(undefined1)iStack_b8);
        uStack_2d8 = uVar16;
        uStack_2d7 = uVar8;
        func_0x000101494c28(&uStack_130,&uStack_300);
        uVar19 = uStack_10f;
        uVar15 = uStack_110;
        uVar18 = uStack_117;
        uStack_1c1 = uStack_118;
        uVar17 = uStack_11f;
        uVar10 = uStack_120;
        uVar11 = uStack_127;
        uStack_358 = uStack_128;
        lVar27 = lStack_210;
        uVar25 = CONCAT44(uStack_12c,uStack_130);
        if (uVar25 != 2) {
          uStack_1e8._0_7_ = CONCAT16(uStack_119,uStack_11f);
          uStack_1e8._7_1_ = uStack_118;
          uStack_1f0 = CONCAT17(uStack_120,CONCAT16(uStack_121,uStack_127));
          uStack_1d8._0_7_ = CONCAT16(uStack_109,uStack_10f);
          uStack_1d8._7_1_ = uStack_108;
          uStack_1e0._0_7_ = CONCAT16(uStack_111,uStack_117);
          uStack_1e0._7_1_ = uStack_110;
          uStack_1c8 = CONCAT16(uStack_f9,uStack_ff);
          uStack_1d0._0_7_ = CONCAT16(uStack_101,uStack_107);
          uStack_1d0._7_1_ = uStack_100;
          lStack_1b9 = lStack_f0;
          uStack_1c1 = uStack_f8;
          uStack_1c0 = (undefined7)(CONCAT17(uStack_f1,CONCAT61(uStack_f7,uStack_f8)) >> 8);
          lStack_1f8 = lStack_e0;
          lStack_200 = lStack_e8;
          FUN_100e077ec(&uStack_d0);
          uStack_34f = (undefined7)uStack_1e8;
          uStack_348 = uStack_1e8._7_1_;
          uStack_357 = (undefined1)uStack_1f0;
          uStack_356 = (undefined6)(uStack_1f0 >> 8);
          uStack_350 = (undefined1)(uStack_1f0 >> 0x38);
          uStack_33f = (undefined7)uStack_1d8;
          uStack_338 = uStack_1d8._7_1_;
          uStack_347 = (undefined7)uStack_1e0;
          uStack_340 = uStack_1e0._7_1_;
          uStack_32f = uStack_1c8;
          uStack_337 = (undefined7)uStack_1d0;
          uStack_330 = uStack_1d0._7_1_;
          lStack_320 = lStack_1b9;
          uStack_328 = uStack_1c1;
          uStack_327 = uStack_1c0;
          lStack_310 = lStack_1f8;
          lStack_318 = lStack_200;
          uStack_360 = uVar25;
          FUN_100d03040(&lStack_220);
          FUN_100e1fd94(&uStack_2e8);
          if ((CONCAT17(uStack_2f9,uStack_300) != -0x8000000000000000) &&
             (CONCAT17(uStack_2f9,uStack_300) != 0)) {
            _free(CONCAT17(uStack_2f1,CONCAT61(uStack_2f7,uStack_2f8)),param_3);
          }
          uStack_2d8 = uStack_338;
          uStack_2d7 = uStack_337;
          uStack_2e0 = uStack_340;
          uStack_2df = uStack_33f;
          uStack_2c8 = uStack_328;
          uStack_2c7 = uStack_327;
          uStack_2d0 = uStack_330;
          uStack_2cf = uStack_32f;
          lStack_2b8 = lStack_318;
          lStack_2c0 = lStack_320;
          lStack_2b0 = lStack_310;
          uStack_2f8 = uStack_358;
          uStack_2f7 = (undefined6)(CONCAT62(uStack_356,CONCAT11(uStack_357,uStack_358)) >> 8);
          uStack_2f1 = (undefined1)((uint6)uStack_356 >> 0x28);
          uStack_300 = (uint7)uStack_360;
          uStack_2f9 = (undefined1)(uStack_360 >> 0x38);
          uStack_2e8 = uStack_348;
          uStack_2e7 = (undefined6)uStack_347;
          uStack_2e1 = (undefined1)((uint7)uStack_347 >> 0x30);
          uStack_2f0 = uStack_350;
          uStack_2ef = (undefined6)uStack_34f;
          uStack_2e9 = (undefined1)((uint7)uStack_34f >> 0x30);
          __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E(param_4,param_3);
          uStack_360 = uVar25;
          goto LAB_1015a01a0;
        }
        puStack_148 = (undefined *)CONCAT17(uStack_119,CONCAT61(uStack_11f,uStack_120));
        uStack_150 = CONCAT17(uStack_121,CONCAT61(uStack_127,uStack_128));
        uVar9 = CONCAT61(uStack_10f,uStack_110);
        uStack_138 = CONCAT17(uStack_109,uVar9);
        uVar8 = CONCAT61(uStack_117,uStack_118);
        uStack_140 = CONCAT17(uStack_111,uVar8);
        uStack_128 = (undefined1)uStack_168;
        uStack_127 = (undefined6)((uint7)uStack_168 >> 8);
        uStack_130 = (uint)uStack_170;
        uStack_12c = (undefined4)(uStack_170 >> 0x20);
        uStack_119 = uStack_159;
        uStack_118 = (undefined1)uStack_158;
        uStack_117 = (undefined6)((uint7)uStack_158 >> 8);
        uStack_121 = uStack_161;
        uStack_120 = (undefined1)uStack_160;
        uStack_11f = (undefined6)((uint7)uStack_160 >> 8);
        uStack_109 = uVar10;
        uStack_108 = (undefined1)uVar17;
        uStack_107 = (undefined6)((ulong)puStack_148 >> 0x10);
        uStack_111 = uStack_358;
        uStack_110 = (undefined1)uVar11;
        uStack_10f = (undefined6)((ulong)uStack_150 >> 0x10);
        uStack_f9 = uVar15;
        uStack_f8 = (undefined1)uVar19;
        uStack_f7 = (undefined6)((ulong)uStack_138 >> 0x10);
        uStack_101 = uStack_1c1;
        uStack_100 = (undefined1)uVar18;
        uStack_ff = (undefined6)((ulong)uStack_140 >> 0x10);
        uStack_1e8 = CONCAT17(uStack_161,uStack_168);
        uStack_1f0 = uStack_170;
        uStack_1d8 = CONCAT17(uStack_358,uStack_158);
        uStack_1e0 = CONCAT17(uStack_159,uStack_160);
        uStack_1c8 = CONCAT61(uStack_107,uStack_108);
        uStack_1d0 = CONCAT17(uVar10,CONCAT61(uStack_10f,uStack_110));
        lStack_1b9 = CONCAT62(uStack_f7,(short)uVar9);
        uStack_1c0 = (undefined7)(CONCAT62(uStack_ff,(short)uVar8) >> 8);
        uStack_1b0 = CONCAT71(uStack_1b0._1_7_,0xc);
        puVar31[1] = uStack_1e8;
        *puVar31 = uStack_170;
        puVar31[3] = uStack_1d8;
        puVar31[2] = uStack_1e0;
        puVar31[5] = CONCAT17(uStack_1c1,uStack_1c8);
        puVar31[4] = uStack_1d0;
        *(long *)((long)puVar31 + 0x37) = lStack_1b9;
        *(ulong *)((long)puVar31 + 0x2f) = CONCAT71(uStack_1c0,uStack_1c1);
        if (lStack_210 == lStack_220) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_220);
        }
        puVar1 = (ulong *)(lStack_218 + lVar27 * 0x40);
        puVar1[1] = CONCAT17(uStack_1a1,uStack_1a8);
        *puVar1 = uStack_1b0;
        puVar1[3] = CONCAT17(uStack_191,uStack_198);
        puVar1[2] = CONCAT17(uStack_199,uStack_1a0);
        puVar1[5] = CONCAT17(uStack_181,uStack_188);
        puVar1[4] = CONCAT17(uStack_189,uStack_190);
        puVar1[7] = CONCAT17(uStack_171,uStack_178);
        puVar1[6] = CONCAT17(uStack_179,uStack_180);
        lStack_210 = lVar27 + 1;
        plVar3 = plStack_258;
      } while (plStack_258 != plStack_248);
    }
    plStack_258 = plVar3;
    uStack_121 = (undefined1)lStack_218;
    uStack_120 = (undefined1)((ulong)lStack_218 >> 8);
    uStack_11f = (undefined6)((ulong)lStack_218 >> 0x10);
    uStack_12c._3_1_ = (undefined1)lStack_220;
    uStack_128 = (undefined1)((ulong)lStack_220 >> 8);
    uStack_127 = (undefined6)((ulong)lStack_220 >> 0x10);
    uStack_119 = (undefined1)lStack_210;
    uStack_118 = (undefined1)((ulong)lStack_210 >> 8);
    uStack_117 = (undefined6)((ulong)lStack_210 >> 0x10);
    uStack_358 = 0x15;
    uStack_34f = (undefined7)((ulong)lStack_220 >> 8);
    uStack_357 = (undefined1)uStack_130;
    uStack_356 = (undefined6)(CONCAT44(uStack_12c,uStack_130) >> 8);
    uStack_350 = uStack_12c._3_1_;
    uStack_33f = (undefined7)((ulong)lStack_210 >> 8);
    uStack_347 = (undefined7)((ulong)lStack_218 >> 8);
    uStack_348 = uStack_121;
    uStack_340 = uStack_119;
    FUN_100e1fd94(&uStack_2e8);
    if ((CONCAT17(uStack_2f9,uStack_300) != -0x8000000000000000) &&
       (CONCAT17(uStack_2f9,uStack_300) != 0)) {
      _free(CONCAT17(uStack_2f1,CONCAT61(uStack_2f7,uStack_2f8)));
    }
    uStack_360 = 2;
  }
LAB_1015a01a0:
  if (uStack_360 != 2) {
LAB_1015a01a8:
    param_1[4] = CONCAT71(uStack_33f,uStack_340);
    param_1[3] = CONCAT71(uStack_347,uStack_348);
    param_1[6] = CONCAT71(uStack_32f,uStack_330);
    param_1[5] = CONCAT71(uStack_337,uStack_338);
    param_1[8] = lStack_320;
    param_1[7] = CONCAT71(uStack_327,uStack_328);
    param_1[10] = lStack_310;
    param_1[9] = lStack_318;
    uVar25 = CONCAT71(uStack_34f,uStack_350);
    uVar28 = CONCAT62(uStack_356,CONCAT11(uStack_357,uStack_358));
    if ((uStack_360 & 1) == 0) {
      uVar25 = uVar6;
      uVar28 = uVar2;
    }
    *param_1 = 1;
    param_1[1] = uVar28;
    param_1[2] = uVar25;
    return;
  }
LAB_1015a0210:
  param_1[2] = CONCAT71(uStack_34f,uStack_350);
  param_1[1] = CONCAT62(uStack_356,CONCAT11(uStack_357,uStack_358));
  param_1[4] = CONCAT71(uStack_33f,uStack_340);
  param_1[3] = CONCAT71(uStack_347,uStack_348);
  *param_1 = 2;
  return;
}

