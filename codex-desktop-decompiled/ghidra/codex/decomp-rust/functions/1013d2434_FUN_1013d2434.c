
/* WARNING: Type propagation algorithm not settling */

void FUN_1013d2434(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
  undefined7 uVar11;
  undefined1 uVar12;
  undefined7 uVar13;
  byte bVar14;
  undefined7 uVar15;
  byte bVar16;
  undefined7 uVar17;
  undefined1 uVar18;
  undefined7 uVar19;
  byte bVar20;
  undefined7 uVar21;
  undefined1 uVar22;
  undefined7 uVar23;
  byte bVar24;
  undefined7 uVar25;
  byte bVar26;
  undefined7 uVar27;
  code *pcVar28;
  bool bVar29;
  int *piVar30;
  undefined8 *puVar31;
  int iVar32;
  ulong uVar33;
  ulong *puVar34;
  ulong uVar35;
  ulong uVar36;
  byte bVar37;
  ulong *puVar38;
  ulong *puVar39;
  long lVar40;
  ulong uVar41;
  ulong *puVar42;
  ulong unaff_x23;
  ulong *puVar43;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined1 auVar44 [16];
  ulong uStack_3c8;
  undefined8 uStack_3a8;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  undefined8 *puStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong *puStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 *puStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined1 uStack_270;
  ulong *puStack_260;
  byte bStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  byte bStack_248;
  undefined7 uStack_247;
  byte bStack_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined7 uStack_237;
  byte bStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  byte bStack_220;
  undefined7 uStack_21f;
  byte bStack_218;
  undefined7 uStack_217;
  ulong uStack_210;
  ulong *puStack_200;
  undefined8 uStack_1f8;
  ulong *puStack_1f0;
  byte bStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  byte bStack_1d8;
  undefined7 uStack_1d7;
  byte bStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  byte bStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  byte bStack_1b0;
  undefined7 uStack_1af;
  byte bStack_1a8;
  undefined7 uStack_1a7;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  ulong *puStack_158;
  undefined8 *puStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong *puStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  ulong *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  byte bStack_b8;
  undefined7 uStack_b7;
  byte bStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  byte bStack_90;
  undefined7 uStack_8f;
  byte bStack_88;
  undefined7 uStack_87;
  ulong uStack_80;
  undefined8 uStack_78;
  
  uVar2 = param_2[10];
  uVar5 = param_2[0xb];
  uVar33 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar33 = 6;
  }
  if ((long)uVar33 < 3) {
    if (uVar33 == 0) {
      if (param_2[1] == 0x8000000000000000) {
        bStack_1e8 = (byte)param_2[2];
        uStack_1e7 = (undefined7)(param_2[2] >> 8);
        uStack_1e0 = (undefined1)param_2[3];
        uStack_1df = (undefined7)(param_2[3] >> 8);
        puStack_1f0 = (ulong *)CONCAT71(puStack_1f0._1_7_,5);
        FUN_1087e3db0(&puStack_2d0,&puStack_1f0,&puStack_200,&UNK_10b219e50);
        puVar42 = puStack_2d0;
      }
      else {
        func_0x000108816a3c(&puStack_2d0);
        puVar42 = puStack_2d0;
      }
    }
    else if (uVar33 == 1) {
      puStack_260 = (ulong *)param_2[1];
      bStack_258 = (byte)param_2[2];
      uStack_257 = (undefined7)(param_2[2] >> 8);
      bStack_248 = (byte)param_2[4];
      uStack_247 = (undefined7)(param_2[4] >> 8);
      uStack_250 = (undefined1)param_2[3];
      uStack_24f = (undefined7)(param_2[3] >> 8);
      auVar44 = func_0x00010612451c(&puStack_260);
      if ((auVar44._0_8_ & 1) == 0) {
        auVar44 = func_0x0001061247b8(&puStack_260);
        if ((auVar44._0_8_ & 1) == 0) {
          func_0x0001061249a4(&puStack_130,&puStack_260);
          if (((uint)puStack_130 & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&puStack_d0,&puStack_260);
            if (((uint)puStack_d0 & 1) == 0) {
              puStack_2d0 = (ulong *)0x0;
              FUN_100f1395c(&puStack_1f0,&puStack_2d0);
              uStack_2a8 = CONCAT71(uStack_1c7,uStack_1c8);
              puStack_2b0 = (undefined8 *)CONCAT71(uStack_1cf,bStack_1d0);
              uStack_298 = CONCAT71(uStack_1b7,uStack_1b8);
              uStack_2a0 = CONCAT71(uStack_1bf,bStack_1c0);
              uStack_288 = CONCAT71(uStack_1a7,bStack_1a8);
              uStack_290 = CONCAT71(uStack_1af,bStack_1b0);
              uStack_280 = uStack_1a0;
              uStack_2c8 = CONCAT71(uStack_1e7,bStack_1e8);
              uStack_2b8 = CONCAT71(uStack_1d7,bStack_1d8);
              uStack_2c0 = CONCAT71(uStack_1df,uStack_1e0);
              puStack_2d0 = puStack_1f0;
              if (((ulong)puStack_260 & 0x7fffffffffffffff) != 0) {
                _free(CONCAT71(uStack_257,bStack_258));
                puStack_1f0 = puStack_2d0;
              }
              goto LAB_1013d337c;
            }
            func_0x000108809e68(&puStack_2d0,CONCAT71(uStack_bf,uStack_c0),
                                CONCAT71(uStack_b7,bStack_b8));
          }
          else {
            func_0x0001087fb838(&puStack_2d0,uStack_120,puStack_118);
          }
        }
        else {
          bStack_1e8 = auVar44[8];
          uStack_1e7 = auVar44._9_7_;
          puStack_1f0 = (ulong *)CONCAT71(puStack_1f0._1_7_,1);
          FUN_1087e3db0(&puStack_2d0,&puStack_1f0,&puStack_200,&UNK_10b219e50);
        }
      }
      else {
        bStack_1e8 = auVar44[8];
        uStack_1e7 = auVar44._9_7_;
        puStack_1f0 = (ulong *)CONCAT71(puStack_1f0._1_7_,2);
        FUN_1087e3db0(&puStack_2d0,&puStack_1f0,&puStack_200,&UNK_10b219e50);
      }
      puVar42 = puStack_2d0;
      if (((ulong)puStack_260 & 0x7fffffffffffffff) != 0) {
        _free(CONCAT71(uStack_257,bStack_258));
        puVar42 = puStack_2d0;
      }
    }
    else {
      puStack_d0 = (ulong *)param_2[1];
      bStack_c8 = (byte)param_2[2];
      uStack_c7 = (undefined7)(param_2[2] >> 8);
      uStack_c0 = (undefined1)param_2[3];
      uStack_bf = (undefined7)(param_2[3] >> 8);
      uVar33 = func_0x0001061240c0(&puStack_d0);
      if ((uVar33 & 1) == 0) {
        puVar31 = (undefined8 *)_malloc(0x20);
        if (puVar31 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x20);
LAB_1013d3568:
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x1013d356c);
          (*pcVar28)();
        }
        puVar31[1] = 0x6e20746e696f702d;
        *puVar31 = 0x676e6974616f6c66;
        puVar31[3] = 0x6465776f6c667265;
        puVar31[2] = 0x766f207265626d75;
        uStack_2b8 = 0x20;
        uStack_2a0 = 0;
        uStack_2a8 = 0x20;
        uStack_290 = 0;
        uStack_288 = 0;
        uStack_298 = 8;
        puStack_2b0 = puVar31;
        if (((ulong)puStack_d0 & 0x7fffffffffffffff) != 0) {
          _free(CONCAT71(uStack_c7,bStack_c8));
        }
        puStack_1f0 = (ulong *)0x0;
        goto LAB_1013d337c;
      }
      bStack_1e8 = (byte)extraout_d0_00;
      uStack_1e7 = (undefined7)((ulong)extraout_d0_00 >> 8);
      puStack_1f0 = (ulong *)CONCAT71(puStack_1f0._1_7_,3);
      FUN_1087e3db0(&puStack_2d0,&puStack_1f0,&puStack_200,&UNK_10b219e50);
      puVar42 = puStack_2d0;
      if (((ulong)puStack_d0 & 0x7fffffffffffffff) != 0) {
        _free(CONCAT71(uStack_c7,bStack_c8));
        puVar42 = puStack_2d0;
      }
    }
  }
  else if ((long)uVar33 < 5) {
    if (uVar33 == 3) {
      puStack_1f0 = (ulong *)((ulong)CONCAT61(puStack_1f0._2_6_,(char)param_2[1]) << 8);
      FUN_1087e3db0(&puStack_2d0,&puStack_1f0,&puStack_200,&UNK_10b219e50);
      puVar42 = puStack_2d0;
    }
    else {
      puStack_1f0 = (ulong *)CONCAT71(puStack_1f0._1_7_,0xb);
      FUN_1087e3db0(&puStack_2d0,&puStack_1f0,&puStack_200,&UNK_10b219e50);
      puVar42 = puStack_2d0;
    }
  }
  else if (uVar33 == 5) {
    uVar33 = param_2[1];
    puVar6 = (ulong *)param_2[2];
    puVar34 = puVar6 + param_2[3] * 0xc;
    uStack_338 = 0;
    uStack_330 = 8;
    uStack_328 = 0;
    puVar39 = puVar6;
    puVar42 = puVar6;
    if (param_2[3] != 0) {
LAB_1013d258c:
      puVar42 = puVar39 + 0xc;
      puVar38 = (ulong *)*puVar39;
      if (puVar38 != (ulong *)0x8000000000000006) {
        uVar41 = puVar39[10];
        uVar7 = puVar39[0xb];
        puStack_2b0 = (undefined8 *)puVar39[4];
        uStack_2b8 = puVar39[3];
        uStack_2a0 = puVar39[6];
        uStack_2a8 = puVar39[5];
        uStack_290 = puVar39[8];
        uStack_298 = puVar39[7];
        uStack_288 = puVar39[9];
        uStack_2c0 = puVar39[2];
        uStack_2c8 = puVar39[1];
        uVar35 = (ulong)puVar38 ^ 0x8000000000000000;
        if (-1 < (long)puVar38) {
          uVar35 = 6;
        }
        uStack_270 = 0;
        puStack_2d0 = puVar38;
        uStack_280 = uVar41;
        uStack_278 = uVar7;
        if ((long)uVar35 < 3) {
          if (uVar35 == 0) {
            if (uStack_2c8 == 0x8000000000000000) {
              bStack_1e8 = (byte)uStack_2c0;
              uStack_1e7 = (undefined7)(uStack_2c0 >> 8);
              uStack_1e0 = (undefined1)uStack_2b8;
              uStack_1df = (undefined7)(uStack_2b8 >> 8);
              puStack_1f0 = (ulong *)CONCAT71(puStack_1f0._1_7_,5);
              FUN_1087e3db0(&puStack_260,&puStack_1f0,&puStack_200,&UNK_10b21acf0);
            }
            else {
              func_0x0001088187c8(&puStack_260,&uStack_2c8);
            }
            goto LAB_1013d2f40;
          }
          if (uVar35 != 1) {
            puStack_d0 = (ulong *)puVar39[1];
            uStack_c0 = (undefined1)puVar39[3];
            uStack_bf = (undefined7)(puVar39[3] >> 8);
            bStack_c8 = (byte)puVar39[2];
            uStack_c7 = (undefined7)(puVar39[2] >> 8);
            uVar35 = func_0x0001061240c0(&puStack_d0);
            if ((uVar35 & 1) != 0) {
              bStack_1e8 = (byte)extraout_d0;
              uStack_1e7 = (undefined7)((ulong)extraout_d0 >> 8);
              puStack_1f0 = (ulong *)CONCAT71(puStack_1f0._1_7_,3);
              FUN_1087e3db0(&puStack_260,&puStack_1f0,&puStack_200,&UNK_10b21acf0);
              if (((ulong)puStack_d0 & 0x7fffffffffffffff) != 0) {
                _free(CONCAT71(uStack_c7,bStack_c8));
              }
              goto LAB_1013d2f40;
            }
            puVar31 = (undefined8 *)_malloc(0x20);
            if (puVar31 != (undefined8 *)0x0) {
              puVar31[1] = 0x6e20746e696f702d;
              *puVar31 = 0x676e6974616f6c66;
              puVar31[3] = 0x6465776f6c667265;
              puVar31[2] = 0x766f207265626d75;
              puStack_260 = (ulong *)0x0;
              bStack_248 = 0x20;
              uStack_247 = 0;
              bStack_240 = (byte)puVar31;
              uStack_23f = (undefined7)((ulong)puVar31 >> 8);
              bStack_230 = 0;
              uStack_22f = 0;
              uStack_238 = 0x20;
              uStack_237 = 0;
              uStack_228 = 8;
              uStack_227 = 0;
              bStack_220 = 0;
              uStack_21f = 0;
              bStack_218 = 0;
              uStack_217 = 0;
              if (((ulong)puStack_d0 & 0x7fffffffffffffff) != 0) {
                puVar39 = (ulong *)CONCAT71(uStack_c7,bStack_c8);
LAB_1013d3430:
                uStack_217 = 0;
                bStack_218 = 0;
                uStack_21f = 0;
                bStack_220 = 0;
                uStack_227 = 0;
                uStack_228 = 8;
                uStack_22f = 0;
                bStack_230 = 0;
                uStack_237 = 0;
                uStack_247 = 0;
                puStack_260 = (ulong *)0x0;
                _free(puVar39);
              }
LAB_1013d3434:
              puVar39 = (ulong *)0x0;
LAB_1013d3438:
              uVar35 = uStack_330;
              puStack_318 = (undefined8 *)CONCAT71(uStack_23f,bStack_240);
              uStack_320 = CONCAT71(uStack_247,bStack_248);
              uStack_308 = CONCAT71(uStack_22f,bStack_230);
              uStack_310 = CONCAT71(uStack_237,uStack_238);
              uStack_290 = CONCAT71(uStack_21f,bStack_220);
              uStack_298 = CONCAT71(uStack_227,uStack_228);
              uStack_288 = CONCAT71(uStack_217,bStack_218);
              uStack_2c0 = CONCAT71(uStack_24f,uStack_250);
              uStack_2c8 = CONCAT71(uStack_257,bStack_258);
              if (((ulong)puVar39 & 1) == 0) {
                uStack_2c0 = uVar7;
                uStack_2c8 = uVar41;
              }
              uStack_280 = uStack_210;
              puStack_2d0 = (ulong *)0x1;
              uStack_2b8 = uStack_320;
              puStack_2b0 = puStack_318;
              uStack_2a8 = uStack_310;
              uStack_2a0 = uStack_308;
              if (uStack_328 != 0) {
                puVar31 = (undefined8 *)(uStack_330 + 8);
                uVar41 = uStack_328;
                do {
                  if (puVar31[-1] != 0) {
                    _free(*puVar31);
                  }
                  puVar31 = puVar31 + 4;
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
              if (uStack_338 != 0) {
                _free(uVar35);
              }
              goto LAB_1013d326c;
            }
            func_0x0001087c9084(1,0x20);
            goto LAB_1013d3568;
          }
          puStack_128 = (ulong *)puVar39[2];
          puStack_130 = (ulong *)puVar39[1];
          puStack_118 = (ulong *)puVar39[4];
          uStack_120 = puVar39[3];
          auVar44 = func_0x00010612451c(&puStack_130);
          if ((auVar44._0_8_ & 1) == 0) {
            auVar44 = func_0x0001061247b8(&puStack_130);
            if ((auVar44._0_8_ & 1) == 0) {
              func_0x0001061249a4(&puStack_d0,&puStack_130);
              if (((ulong)puStack_d0 & 1) == 0) {
                __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                          (&puStack_1f0,&puStack_130);
                if (((ulong)puStack_1f0 & 1) == 0) {
                  puVar31 = (undefined8 *)_malloc(0x19);
                  if (puVar31 != (undefined8 *)0x0) {
                    puVar31[1] = 0x6f207265626d756e;
                    *puVar31 = 0x2072656765746e69;
                    *(undefined8 *)((long)puVar31 + 0x11) = 0x6465776f6c667265;
                    *(undefined8 *)((long)puVar31 + 9) = 0x766f207265626d75;
                    puStack_260 = (ulong *)0x0;
                    bStack_248 = 0x19;
                    uStack_247 = 0;
                    bStack_240 = (byte)puVar31;
                    uStack_23f = (undefined7)((ulong)puVar31 >> 8);
                    bStack_230 = 0;
                    uStack_22f = 0;
                    uStack_238 = 0x19;
                    uStack_237 = 0;
                    uStack_228 = 8;
                    uStack_227 = 0;
                    bStack_220 = 0;
                    uStack_21f = 0;
                    bStack_218 = 0;
                    uStack_217 = 0;
                    puVar39 = puStack_128;
                    if (((ulong)puStack_130 & 0x7fffffffffffffff) != 0) goto LAB_1013d3430;
                    goto LAB_1013d3434;
                  }
                  func_0x0001087c9084(1,0x19);
                  goto LAB_1013d3568;
                }
                func_0x00010880beac(&puStack_260,CONCAT71(uStack_1df,uStack_1e0),
                                    CONCAT71(uStack_1d7,bStack_1d8));
              }
              else {
                func_0x0001087fca40(&puStack_260,CONCAT71(uStack_bf,uStack_c0),
                                    CONCAT71(uStack_b7,bStack_b8));
              }
            }
            else {
              bStack_1e8 = auVar44[8];
              uStack_1e7 = auVar44._9_7_;
              puStack_1f0 = (ulong *)CONCAT71(puStack_1f0._1_7_,1);
              FUN_1087e3db0(&puStack_260,&puStack_1f0,&puStack_200,&UNK_10b21acf0);
            }
          }
          else {
            bStack_1e8 = auVar44[8];
            uStack_1e7 = auVar44._9_7_;
            puStack_1f0 = (ulong *)CONCAT71(puStack_1f0._1_7_,2);
            FUN_1087e3db0(&puStack_260,&puStack_1f0,&puStack_200,&UNK_10b21acf0);
          }
          if (((ulong)puStack_130 & 0x7fffffffffffffff) != 0) {
            _free(puStack_128);
          }
          goto LAB_1013d2f40;
        }
        if ((long)uVar35 < 5) {
          if (uVar35 == 3) {
            puStack_1f0 = (ulong *)((ulong)CONCAT61(puStack_1f0._2_6_,(undefined1)uStack_2c8) << 8);
            FUN_1087e3db0(&puStack_260,&puStack_1f0,&puStack_200,&UNK_10b21acf0);
          }
          else {
            puStack_d0 = (ulong *)puVar39[1];
            bStack_c8 = (byte)puVar39[2];
            uStack_c7 = (undefined7)(puVar39[2] >> 8);
            uStack_c0 = (undefined1)puVar39[3];
            uStack_bf = (undefined7)(puVar39[3] >> 8);
            do {
              if ((uint)puStack_d0 == 2) {
                FUN_1087e4020(&puStack_1f0,&UNK_108cde34c,4);
                bVar37 = bStack_1e8;
                unaff_x23 = uVar7;
                if (puStack_1f0 == (ulong *)0x2) {
                  FUN_1087e4020(&puStack_1f0,&UNK_108ca26b0,2);
                  if (puStack_1f0 == (ulong *)0x2) {
                    uStack_250 = uStack_1e0;
                    uStack_24f = uStack_1df;
                    bStack_248 = bStack_1d8;
                    uStack_247 = uStack_1d7;
                    bStack_240 = bVar37;
                    bStack_258 = bStack_1e8;
                    uStack_257 = uStack_1e7;
                    puStack_260 = (ulong *)0x2;
                  }
                  else {
                    uStack_238 = uStack_1c8;
                    uStack_237 = uStack_1c7;
                    bStack_240 = bStack_1d0;
                    uStack_23f = uStack_1cf;
                    uStack_228 = uStack_1b8;
                    uStack_227 = uStack_1b7;
                    bStack_230 = bStack_1c0;
                    uStack_22f = uStack_1bf;
                    bStack_218 = bStack_1a8;
                    uStack_217 = uStack_1a7;
                    bStack_220 = bStack_1b0;
                    uStack_21f = uStack_1af;
                    uStack_210 = uStack_1a0;
                    puStack_260 = puStack_1f0;
                    bStack_258 = bStack_1e8;
                    uStack_257 = uStack_1e7;
                    uStack_250 = uStack_1e0;
                    uStack_24f = uStack_1df;
                    bStack_248 = bStack_1d8;
                    uStack_247 = uStack_1d7;
                  }
                }
                else {
                  uStack_23f = uStack_1cf;
                  uStack_238 = uStack_1c8;
                  uStack_247 = uStack_1d7;
                  bStack_240 = bStack_1d0;
                  uStack_22f = uStack_1bf;
                  uStack_228 = uStack_1b8;
                  uStack_237 = uStack_1c7;
                  bStack_230 = bStack_1c0;
                  uStack_21f = uStack_1af;
                  uStack_227 = uStack_1b7;
                  bStack_220 = bStack_1b0;
                  uStack_210 = uStack_1a0;
                  bStack_218 = bStack_1a8;
                  uStack_217 = uStack_1a7;
                  uStack_24f = uStack_1df;
                  bStack_248 = bStack_1d8;
                  uStack_257 = uStack_1e7;
                  uStack_250 = uStack_1e0;
                  puStack_260 = puStack_1f0;
                  bStack_258 = bStack_1e8;
                }
                goto LAB_1013d2f40;
              }
              FUN_101509040(&puStack_1f0,&puStack_d0);
            } while (puStack_1f0 == (ulong *)0x2);
            uStack_238 = uStack_1c8;
            uStack_237 = uStack_1c7;
            bStack_240 = bStack_1d0;
            uStack_23f = uStack_1cf;
            uStack_228 = uStack_1b8;
            uStack_227 = uStack_1b7;
            bStack_230 = bStack_1c0;
            uStack_22f = uStack_1bf;
            bStack_218 = bStack_1a8;
            uStack_217 = uStack_1a7;
            bStack_220 = bStack_1b0;
            uStack_21f = uStack_1af;
            uStack_210 = uStack_1a0;
            bStack_258 = bStack_1e8;
            uStack_257 = uStack_1e7;
            puStack_260 = puStack_1f0;
            bStack_248 = bStack_1d8;
            uStack_247 = uStack_1d7;
            uStack_250 = uStack_1e0;
            uStack_24f = uStack_1df;
          }
          goto LAB_1013d2f40;
        }
        if (uVar35 != 5) {
          puVar31 = (undefined8 *)puVar39[1];
          uVar35 = puVar39[2];
          uVar36 = puVar39[4];
          if ((uVar36 != 0) && (uVar36 * 9 != -0x11)) {
            _free(puVar39[3] + uVar36 * -8 + -8);
          }
          puStack_150 = puVar31 + uVar35 * 0x12;
          puStack_1f0 = (ulong *)0x8000000000000001;
          uVar36 = 0x8000000000000000;
          puStack_168 = puVar31;
          puStack_160 = puVar31;
          puStack_158 = puVar38;
          uStack_148 = uVar41;
          uStack_140 = uVar7;
          if (uVar35 == 0) {
LAB_1013d2c2c:
            FUN_1087e4020(&puStack_d0,&UNK_108cde34c,4);
            bVar37 = bStack_c8;
            uVar35 = uStack_80;
            puVar39 = puStack_d0;
            bVar10 = bStack_c8;
            uVar11 = uStack_c7;
            uVar12 = uStack_c0;
            uVar13 = uStack_bf;
            bVar14 = bStack_b8;
            uVar15 = uStack_b7;
            bVar16 = bStack_b0;
            uVar17 = uStack_af;
            uVar18 = uStack_a8;
            uVar19 = uStack_a7;
            bVar20 = bStack_a0;
            uVar21 = uStack_9f;
            uVar22 = uStack_98;
            uVar23 = uStack_97;
            bVar24 = bStack_90;
            uVar25 = uStack_8f;
            bVar26 = bStack_88;
            uVar27 = uStack_87;
            if (puStack_d0 == (ulong *)0x2) goto LAB_1013d2c50;
joined_r0x0001013d2b44:
            uStack_217 = uVar27;
            bStack_218 = bVar26;
            uStack_21f = uVar25;
            bStack_220 = bVar24;
            uStack_227 = uVar23;
            uStack_228 = uVar22;
            uStack_22f = uVar21;
            bStack_230 = bVar20;
            uStack_237 = uVar19;
            uStack_238 = uVar18;
            uStack_23f = uVar17;
            bStack_240 = bVar16;
            uStack_247 = uVar15;
            bStack_248 = bVar14;
            uStack_24f = uVar13;
            uStack_250 = uVar12;
            uStack_257 = uVar11;
            bStack_258 = bVar10;
            puStack_260 = puVar39;
            uStack_210 = uVar35;
            puStack_d0 = puStack_260;
            bStack_c8 = bStack_258;
            uStack_c7 = uStack_257;
            uStack_c0 = uStack_250;
            uStack_bf = uStack_24f;
            bStack_b8 = bStack_248;
            uStack_b7 = uStack_247;
            bStack_b0 = bStack_240;
            uStack_af = uStack_23f;
            uStack_a8 = uStack_238;
            uStack_a7 = uStack_237;
            bStack_a0 = bStack_230;
            uStack_9f = uStack_22f;
            uStack_98 = uStack_228;
            uStack_97 = uStack_227;
            bStack_90 = bStack_220;
            uStack_8f = uStack_21f;
            bStack_88 = bStack_218;
            uStack_87 = uStack_217;
            uStack_80 = uStack_210;
            if ((uVar36 & 0x7fffffffffffffff) != 0) {
              _free(uStack_3a8);
            }
          }
          else {
            bVar37 = 2;
            do {
              puVar31 = puStack_160 + 0x12;
              puVar39 = (ulong *)*puStack_160;
              if (puVar39 == (ulong *)0x8000000000000001) break;
              piVar3 = (int *)puStack_160[1];
              lVar40 = puStack_160[2];
              uVar4 = puStack_160[3];
              unaff_x23 = puStack_160[4];
              uStack_108 = puStack_160[10];
              uStack_110 = puStack_160[9];
              uStack_f8 = puStack_160[0xc];
              uStack_100 = puStack_160[0xb];
              uStack_e8 = puStack_160[0xe];
              uStack_f0 = puStack_160[0xd];
              uStack_d8 = puStack_160[0x10];
              uStack_e0 = puStack_160[0xf];
              puStack_128 = (ulong *)puStack_160[6];
              puStack_130 = (ulong *)puStack_160[5];
              puStack_118 = (ulong *)puStack_160[8];
              uStack_120 = puStack_160[7];
              uStack_a8 = (undefined1)uStack_108;
              uStack_a7 = (undefined7)((ulong)uStack_108 >> 8);
              bStack_b0 = (byte)uStack_110;
              uStack_af = (undefined7)((ulong)uStack_110 >> 8);
              uStack_98 = (undefined1)uStack_f8;
              uStack_97 = (undefined7)((ulong)uStack_f8 >> 8);
              bStack_a0 = (byte)uStack_100;
              uStack_9f = (undefined7)((ulong)uStack_100 >> 8);
              bStack_88 = (byte)uStack_e8;
              uStack_87 = (undefined7)((ulong)uStack_e8 >> 8);
              bStack_90 = (byte)uStack_f0;
              uStack_8f = (undefined7)((ulong)uStack_f0 >> 8);
              bStack_c8 = (byte)puStack_128;
              uStack_c7 = (undefined7)((ulong)puStack_128 >> 8);
              bStack_b8 = (byte)puStack_118;
              uStack_b7 = (undefined7)((ulong)puStack_118 >> 8);
              uStack_c0 = (undefined1)uStack_120;
              uStack_bf = (undefined7)(uStack_120 >> 8);
              puStack_160 = puVar31;
              puStack_d0 = puStack_130;
              uStack_80 = uStack_e0;
              uStack_78 = uStack_d8;
              if (puVar39 == (ulong *)0x8000000000000000) {
                if (lVar40 == 2) {
                  iVar32 = 1;
                  if ((short)*piVar3 != 0x6469) {
                    iVar32 = 2;
                  }
                }
                else {
                  if (lVar40 != 4) goto LAB_1013d29bc;
                  iVar32 = 2;
                  if (*piVar3 == 0x65707974) {
                    iVar32 = 0;
                  }
                }
              }
              else if (lVar40 == 0) {
LAB_1013d29bc:
                iVar32 = 2;
              }
              else {
                piVar30 = (int *)_malloc(lVar40);
                if (piVar30 == (int *)0x0) {
                  func_0x0001087c9084(1,lVar40);
                  goto LAB_1013d3568;
                }
                _memcpy(piVar30,piVar3,lVar40);
                iVar32 = 2;
                if (lVar40 != -0x8000000000000000) {
                  if (lVar40 == 2) {
                    iVar32 = 1;
                    if ((short)*piVar30 != 0x6469) {
                      iVar32 = 2;
                    }
                  }
                  else if ((lVar40 == 4) && (iVar32 = 2, *piVar30 == 0x65707974)) {
                    iVar32 = 0;
                  }
                  _free(piVar30);
                }
              }
              if (puStack_1f0 != (ulong *)0x8000000000000001) {
                if (((ulong)puStack_1f0 & 0x7fffffffffffffff) != 0) {
                  _free(CONCAT71(uStack_1e7,bStack_1e8));
                }
                FUN_100dfe50c(&uStack_1c8);
              }
              uStack_1a0 = CONCAT71(uStack_a7,uStack_a8);
              uStack_190 = CONCAT71(uStack_97,uStack_98);
              uStack_198 = CONCAT71(uStack_9f,bStack_a0);
              bStack_1a8 = bStack_b0;
              uStack_1a7 = uStack_af;
              uStack_180 = CONCAT71(uStack_87,bStack_88);
              uStack_188 = CONCAT71(uStack_8f,bStack_90);
              uStack_170 = uStack_78;
              uStack_178 = uStack_80;
              bStack_1c0 = bStack_c8;
              uStack_1bf = uStack_c7;
              uStack_1c8 = SUB81(puStack_d0,0);
              uStack_1c7 = (undefined7)((ulong)puStack_d0 >> 8);
              bStack_1e8 = (byte)piVar3;
              uStack_1e7 = (undefined7)((ulong)piVar3 >> 8);
              uStack_1e0 = (undefined1)lVar40;
              uStack_1df = (undefined7)((ulong)lVar40 >> 8);
              bStack_1d8 = (byte)uVar4;
              uStack_1d7 = (undefined7)((ulong)uVar4 >> 8);
              bStack_1d0 = (byte)unaff_x23;
              uStack_1cf = (undefined7)(unaff_x23 >> 8);
              bStack_1b0 = bStack_b8;
              uStack_1af = uStack_b7;
              uStack_1b8 = uStack_c0;
              uStack_1b7 = uStack_bf;
              puStack_1f0 = puVar39;
              if (iVar32 == 0) {
                if (bVar37 != 2) {
                  FUN_1087e4364(&puStack_d0,&UNK_108cde34c,4);
                  uVar35 = uStack_80;
                  puVar39 = puStack_d0;
                  bVar10 = bStack_c8;
                  uVar11 = uStack_c7;
                  uVar12 = uStack_c0;
                  uVar13 = uStack_bf;
                  bVar14 = bStack_b8;
                  uVar15 = uStack_b7;
                  bVar16 = bStack_b0;
                  uVar17 = uStack_af;
                  uVar18 = uStack_a8;
                  uVar19 = uStack_a7;
                  bVar20 = bStack_a0;
                  uVar21 = uStack_9f;
                  uVar22 = uStack_98;
                  uVar23 = uStack_97;
                  bVar24 = bStack_90;
                  uVar25 = uStack_8f;
                  bVar26 = bStack_88;
                  uVar27 = uStack_87;
                  goto joined_r0x0001013d2b44;
                }
                func_0x0001006291d8(&puStack_d0,&puStack_1f0);
                bVar37 = bStack_c8;
joined_r0x0001013d2afc:
                uVar9 = uStack_3c8;
                uVar35 = uStack_80;
                puVar39 = puStack_d0;
                bVar10 = bStack_c8;
                uVar11 = uStack_c7;
                uVar12 = uStack_c0;
                uVar13 = uStack_bf;
                bVar14 = bStack_b8;
                uVar15 = uStack_b7;
                bVar16 = bStack_b0;
                uVar17 = uStack_af;
                uVar18 = uStack_a8;
                uVar19 = uStack_a7;
                bVar20 = bStack_a0;
                uVar21 = uStack_9f;
                uVar22 = uStack_98;
                uVar23 = uStack_97;
                bVar24 = bStack_90;
                uVar25 = uStack_8f;
                bVar26 = bStack_88;
                uVar27 = uStack_87;
                if (puStack_d0 != (ulong *)0x2) goto joined_r0x0001013d2b44;
              }
              else {
                if (iVar32 != 1) {
                  func_0x0001014e08dc(&puStack_d0,&puStack_1f0);
                  goto joined_r0x0001013d2afc;
                }
                if (uVar36 != 0x8000000000000000) {
                  FUN_1087e4364(&puStack_d0,&UNK_108ca26b0,2);
                  uVar35 = uStack_80;
                  puVar39 = puStack_d0;
                  bVar10 = bStack_c8;
                  uVar11 = uStack_c7;
                  uVar12 = uStack_c0;
                  uVar13 = uStack_bf;
                  bVar14 = bStack_b8;
                  uVar15 = uStack_b7;
                  bVar16 = bStack_b0;
                  uVar17 = uStack_af;
                  uVar18 = uStack_a8;
                  uVar19 = uStack_a7;
                  bVar20 = bStack_a0;
                  uVar21 = uStack_9f;
                  uVar22 = uStack_98;
                  uVar23 = uStack_97;
                  bVar24 = bStack_90;
                  uVar25 = uStack_8f;
                  bVar26 = bStack_88;
                  uVar27 = uStack_87;
                  goto joined_r0x0001013d2b44;
                }
                func_0x0001014e0cc4(&puStack_d0,&puStack_1f0);
                uVar36 = CONCAT71(uStack_c7,bStack_c8);
                uStack_3a8 = CONCAT71(uStack_bf,uStack_c0);
                uVar9 = CONCAT71(uStack_b7,bStack_b8);
                if (puStack_d0 != (ulong *)0x2) {
                  uStack_238 = uStack_a8;
                  uStack_237 = uStack_a7;
                  bStack_240 = bStack_b0;
                  uStack_23f = uStack_af;
                  uStack_228 = uStack_98;
                  uStack_227 = uStack_97;
                  bStack_230 = bStack_a0;
                  uStack_22f = uStack_9f;
                  bStack_218 = bStack_88;
                  uStack_217 = uStack_87;
                  bStack_220 = bStack_90;
                  uStack_21f = uStack_8f;
                  uStack_210 = uStack_80;
                  puStack_260 = puStack_d0;
                  bStack_258 = bStack_c8;
                  uStack_257 = uStack_c7;
                  uStack_250 = uStack_c0;
                  uStack_24f = uStack_bf;
                  bStack_248 = bStack_b8;
                  uStack_247 = uStack_b7;
                  goto LAB_1013d2f30;
                }
              }
              uStack_3c8 = uVar9;
              puVar31 = puStack_160;
            } while (puStack_160 != puStack_150);
            puStack_160 = puVar31;
            unaff_x23 = uStack_3c8;
            if (bVar37 == 2) goto LAB_1013d2c2c;
LAB_1013d2c50:
            uVar4 = uStack_3a8;
            if (uVar36 == 0x8000000000000000) {
              FUN_1087e4020(&puStack_d0,&UNK_108ca26b0,2);
              uVar36 = CONCAT71(uStack_c7,bStack_c8);
              unaff_x23 = CONCAT71(uStack_b7,bStack_b8);
              uVar4 = CONCAT71(uStack_bf,uStack_c0);
              if (puStack_d0 != (ulong *)0x2) {
                uStack_238 = uStack_a8;
                uStack_237 = uStack_a7;
                bStack_240 = bStack_b0;
                uStack_23f = uStack_af;
                uStack_228 = uStack_98;
                uStack_227 = uStack_97;
                bStack_230 = bStack_a0;
                uStack_22f = uStack_9f;
                bStack_218 = bStack_88;
                uStack_217 = uStack_87;
                bStack_220 = bStack_90;
                uStack_21f = uStack_8f;
                uStack_210 = uStack_80;
                puStack_260 = puStack_d0;
                bStack_258 = bStack_c8;
                uStack_257 = uStack_c7;
                uStack_250 = uStack_c0;
                uStack_24f = uStack_bf;
                bStack_248 = bStack_b8;
                uStack_247 = uStack_b7;
                goto LAB_1013d2f30;
              }
            }
            uStack_3a8 = uVar4;
            bStack_240 = bVar37 & 1;
            uStack_250 = (undefined1)uStack_3a8;
            uStack_24f = (undefined7)((ulong)uStack_3a8 >> 8);
            bStack_248 = (byte)unaff_x23;
            uStack_247 = (undefined7)(unaff_x23 >> 8);
            puStack_260 = (ulong *)0x2;
            bStack_258 = (byte)uVar36;
            uStack_257 = (undefined7)(uVar36 >> 8);
          }
LAB_1013d2f30:
          FUN_100e1fd94(&puStack_1f0);
          goto LAB_1013d2f40;
        }
        unaff_x23 = puVar39[1];
        puVar38 = (ulong *)puVar39[2];
        uVar35 = puVar39[3];
        puVar43 = puVar38 + uVar35 * 0xc;
        puVar39 = puVar38;
        puStack_130 = puVar38;
        uStack_120 = unaff_x23;
        puStack_118 = puVar43;
        if (uVar35 == 0) {
LAB_1013d26dc:
          puStack_128 = puVar39;
          FUN_1087e427c(&puStack_1f0,0,&UNK_10b22cc00,&UNK_10b20a590);
LAB_1013d26f8:
          uStack_238 = uStack_1c8;
          uStack_237 = uStack_1c7;
          bStack_240 = bStack_1d0;
          uStack_23f = uStack_1cf;
          uStack_228 = uStack_1b8;
          uStack_227 = uStack_1b7;
          bStack_230 = bStack_1c0;
          uStack_22f = uStack_1bf;
          bStack_218 = bStack_1a8;
          uStack_217 = uStack_1a7;
          bStack_220 = bStack_1b0;
          uStack_21f = uStack_1af;
          uStack_210 = uStack_1a0;
          bStack_258 = bStack_1e8;
          uStack_257 = uStack_1e7;
          puStack_260 = puStack_1f0;
          bStack_248 = bStack_1d8;
          uStack_247 = uStack_1d7;
          uStack_250 = uStack_1e0;
          uStack_24f = uStack_1df;
        }
        else {
          puVar39 = puVar38 + 0xc;
          if ((ulong *)*puVar38 == (ulong *)0x8000000000000006) goto LAB_1013d26dc;
          bStack_1d0 = (byte)puVar38[4];
          uStack_1cf = (undefined7)(puVar38[4] >> 8);
          bStack_1d8 = (byte)puVar38[3];
          uStack_1d7 = (undefined7)(puVar38[3] >> 8);
          bStack_1c0 = (byte)puVar38[6];
          uStack_1bf = (undefined7)(puVar38[6] >> 8);
          uStack_1c8 = (undefined1)puVar38[5];
          uStack_1c7 = (undefined7)(puVar38[5] >> 8);
          bStack_1b0 = (byte)puVar38[8];
          uStack_1af = (undefined7)(puVar38[8] >> 8);
          uStack_1b8 = (undefined1)puVar38[7];
          uStack_1b7 = (undefined7)(puVar38[7] >> 8);
          bStack_1a8 = (byte)puVar38[9];
          uStack_1a7 = (undefined7)(puVar38[9] >> 8);
          uStack_1e0 = (undefined1)puVar38[2];
          uStack_1df = (undefined7)(puVar38[2] >> 8);
          bStack_1e8 = (byte)puVar38[1];
          uStack_1e7 = (undefined7)(puVar38[1] >> 8);
          uStack_198 = puVar38[0xb];
          uStack_1a0 = puVar38[10];
          uStack_190 = uStack_190 & 0xffffffffffffff00;
          puStack_1f0 = (ulong *)*puVar38;
          puStack_128 = puVar39;
          func_0x0001013d48d0(&puStack_d0,&puStack_1f0);
          bVar37 = bStack_c8;
          if (puStack_d0 != (ulong *)0x2) {
            uStack_23f = uStack_af;
            uStack_238 = uStack_a8;
            uStack_247 = uStack_b7;
            bStack_240 = bStack_b0;
            uStack_22f = uStack_9f;
            uStack_228 = uStack_98;
            uStack_237 = uStack_a7;
            bStack_230 = bStack_a0;
            uStack_21f = uStack_8f;
            uStack_227 = uStack_97;
            bStack_220 = bStack_90;
            uStack_210 = uStack_80;
            bStack_218 = bStack_88;
            uStack_217 = uStack_87;
            uStack_24f = uStack_bf;
            bStack_248 = bStack_b8;
            uStack_257 = uStack_c7;
            uStack_250 = uStack_c0;
            puStack_260 = puStack_d0;
            bStack_258 = bVar37;
            goto LAB_1013d271c;
          }
          if (uVar35 == 1) {
LAB_1013d2d60:
            FUN_1087e427c(&puStack_1f0,1,&UNK_10b22cc00,&UNK_10b20a590);
            goto LAB_1013d26f8;
          }
          puVar39 = puVar38 + 0x18;
          puStack_128 = puVar39;
          if ((ulong *)puVar38[0xc] == (ulong *)0x8000000000000006) goto LAB_1013d2d60;
          bStack_1d0 = (byte)puVar38[0x10];
          uStack_1cf = (undefined7)(puVar38[0x10] >> 8);
          bStack_1d8 = (byte)puVar38[0xf];
          uStack_1d7 = (undefined7)(puVar38[0xf] >> 8);
          bStack_1c0 = (byte)puVar38[0x12];
          uStack_1bf = (undefined7)(puVar38[0x12] >> 8);
          uStack_1c8 = (undefined1)puVar38[0x11];
          uStack_1c7 = (undefined7)(puVar38[0x11] >> 8);
          bStack_1b0 = (byte)puVar38[0x14];
          uStack_1af = (undefined7)(puVar38[0x14] >> 8);
          uStack_1b8 = (undefined1)puVar38[0x13];
          uStack_1b7 = (undefined7)(puVar38[0x13] >> 8);
          bStack_1a8 = (byte)puVar38[0x15];
          uStack_1a7 = (undefined7)(puVar38[0x15] >> 8);
          uStack_1e0 = (undefined1)puVar38[0xe];
          uStack_1df = (undefined7)(puVar38[0xe] >> 8);
          bStack_1e8 = (byte)puVar38[0xd];
          uStack_1e7 = (undefined7)(puVar38[0xd] >> 8);
          uStack_198 = puVar38[0x17];
          uStack_1a0 = puVar38[0x16];
          uStack_190 = uStack_190 & 0xffffffffffffff00;
          puStack_1f0 = (ulong *)puVar38[0xc];
          FUN_10160334c(&puStack_d0,&puStack_1f0);
          uVar11 = uStack_c7;
          bVar10 = bStack_c8;
          lVar40 = CONCAT71(uStack_c7,bStack_c8);
          uStack_1f8 = CONCAT71(uStack_b7,bStack_b8);
          puStack_200 = (ulong *)CONCAT71(uStack_bf,uStack_c0);
          if (puStack_d0 == (ulong *)0x2) {
            bStack_c8 = bStack_b8;
            uStack_c7 = uStack_b7;
            puStack_d0 = puStack_200;
            if (lVar40 == -0x8000000000000000) goto LAB_1013d2d60;
            bStack_248 = bStack_b8;
            uStack_247 = uStack_b7;
            uStack_250 = uStack_c0;
            uStack_24f = uStack_bf;
            bStack_258 = bVar10;
            uStack_257 = uVar11;
            puStack_260 = (ulong *)0x2;
            bStack_240 = bVar37;
          }
          else {
            uStack_228 = uStack_98;
            uStack_227 = uStack_97;
            bStack_230 = bStack_a0;
            uStack_22f = uStack_9f;
            bStack_218 = bStack_88;
            uStack_217 = uStack_87;
            bStack_220 = bStack_90;
            uStack_21f = uStack_8f;
            uStack_210 = uStack_80;
            bStack_c8 = bStack_b8;
            uStack_c7 = uStack_b7;
            bStack_248 = bStack_b8;
            uStack_247 = uStack_b7;
            uStack_250 = uStack_c0;
            uStack_24f = uStack_bf;
            uStack_238 = uStack_a8;
            uStack_237 = uStack_a7;
            bStack_240 = bStack_b0;
            uStack_23f = uStack_af;
            bStack_258 = bVar10;
            uStack_257 = uVar11;
            puStack_260 = puStack_d0;
            puStack_d0 = puStack_200;
          }
        }
LAB_1013d271c:
        lVar40 = ((ulong)((long)puVar43 - (long)puVar39) >> 5) * -0x5555555555555555 + 1;
        while (lVar40 = lVar40 + -1, lVar40 != 0) {
          FUN_100dfe50c(puVar39);
          puVar39 = puVar39 + 0xc;
        }
        if (unaff_x23 != 0) {
          _free(puVar38);
        }
LAB_1013d2f40:
        uVar35 = uStack_328;
        puVar39 = puStack_260;
        if (puStack_260 != (ulong *)0x2) goto LAB_1013d3438;
        lVar40 = CONCAT71(uStack_257,bStack_258);
        lVar8 = CONCAT71(uStack_24f,uStack_250);
        puStack_318 = (undefined8 *)CONCAT71(uStack_23f,bStack_240);
        uStack_320 = CONCAT71(uStack_247,bStack_248);
        if (lVar40 != -0x8000000000000000) goto code_r0x0001013d2f68;
      }
    }
LAB_1013d3254:
    uStack_2c0 = uStack_330;
    uStack_2c8 = uStack_338;
    uStack_2b8 = uStack_328;
    puStack_2d0 = (ulong *)0x2;
LAB_1013d326c:
    lVar40 = ((ulong)((long)puVar34 - (long)puVar42) >> 5) * -0x5555555555555555 + 1;
    while (lVar40 = lVar40 + -1, lVar40 != 0) {
      FUN_100dfe50c(puVar42);
      puVar42 = puVar42 + 0xc;
    }
    puVar42 = puStack_2d0;
    if (uVar33 != 0) {
      _free(puVar6);
      puVar42 = puStack_2d0;
    }
  }
  else {
    uStack_1c8 = (undefined1)param_2[5];
    uStack_1c7 = (undefined7)(param_2[5] >> 8);
    bStack_1d0 = (byte)param_2[4];
    uStack_1cf = (undefined7)(param_2[4] >> 8);
    uStack_1b8 = (undefined1)param_2[7];
    uStack_1b7 = (undefined7)(param_2[7] >> 8);
    bStack_1c0 = (byte)param_2[6];
    uStack_1bf = (undefined7)(param_2[6] >> 8);
    bStack_1a8 = (byte)param_2[9];
    uStack_1a7 = (undefined7)(param_2[9] >> 8);
    bStack_1b0 = (byte)param_2[8];
    uStack_1af = (undefined7)(param_2[8] >> 8);
    puStack_1f0 = (ulong *)*param_2;
    bStack_1e8 = (byte)param_2[1];
    uStack_1e7 = (undefined7)(param_2[1] >> 8);
    bStack_1d8 = (byte)param_2[3];
    uStack_1d7 = (undefined7)(param_2[3] >> 8);
    uStack_1e0 = (undefined1)param_2[2];
    uStack_1df = (undefined7)(param_2[2] >> 8);
    uStack_1a0 = uVar2;
    uStack_198 = uVar5;
    func_0x00010887144c(&puStack_2d0,&puStack_1f0);
    puVar42 = puStack_2d0;
  }
  puStack_1f0 = puVar42;
  if (puStack_1f0 == (ulong *)0x2) {
    param_1[2] = uStack_2c0;
    param_1[1] = uStack_2c8;
    param_1[3] = uStack_2b8;
    *param_1 = 2;
    return;
  }
LAB_1013d337c:
  param_1[4] = puStack_2b0;
  param_1[3] = uStack_2b8;
  param_1[6] = uStack_2a0;
  param_1[5] = uStack_2a8;
  param_1[8] = uStack_290;
  param_1[7] = uStack_298;
  param_1[10] = uStack_280;
  param_1[9] = uStack_288;
  if (((ulong)puStack_1f0 & 1) == 0) {
    uStack_2c0 = uVar5;
    uStack_2c8 = uVar2;
  }
  *param_1 = 1;
  param_1[1] = uStack_2c8;
  param_1[2] = uStack_2c0;
  return;
code_r0x0001013d2f68:
  if (uStack_328 == uStack_338) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h03420294d64adb6aE(&uStack_338);
  }
  plVar1 = (long *)(uStack_330 + uVar35 * 0x20);
  *plVar1 = lVar40;
  plVar1[1] = lVar8;
  plVar1[3] = (long)puStack_318;
  plVar1[2] = uStack_320;
  uStack_328 = uVar35 + 1;
  bVar29 = puVar42 == puVar34;
  puVar39 = puVar42;
  puVar42 = puVar34;
  if (bVar29) goto LAB_1013d3254;
  goto LAB_1013d258c;
}

