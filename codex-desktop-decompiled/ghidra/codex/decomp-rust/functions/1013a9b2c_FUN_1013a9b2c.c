
/* WARNING: Removing unreachable block (ram,0x0001013aa6e4) */

void FUN_1013a9b2c(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  code *pcVar9;
  bool bVar10;
  int *piVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  ulong *puVar24;
  ulong *unaff_x20;
  ulong *puVar25;
  uint uVar26;
  ulong *puVar27;
  ulong *puVar28;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined1 auVar29 [16];
  ulong *puStack_448;
  ulong *puStack_440;
  ulong *puStack_438;
  ulong *puStack_400;
  ulong *puStack_3f8;
  ulong *puStack_3f0;
  ulong *puStack_3d0;
  ulong *puStack_3a8;
  ulong *puStack_3a0;
  ulong *puStack_398;
  ulong *puStack_390;
  ulong *puStack_388;
  ulong *puStack_380;
  ulong *puStack_378;
  ulong uStack_370;
  ulong *puStack_360;
  ulong *puStack_358;
  ulong *puStack_350;
  ulong *puStack_348;
  ulong *puStack_340;
  ulong *puStack_338;
  ulong uStack_330;
  ulong uStack_320;
  ulong uStack_318;
  ulong *puStack_310;
  ulong *puStack_300;
  ulong *puStack_2f8;
  ulong *puStack_2f0;
  ulong *puStack_2e8;
  ulong uStack_2e0;
  ulong *puStack_2d0;
  ulong *puStack_2c8;
  ulong *puStack_2c0;
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  undefined1 uStack_270;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  ulong *puStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong *puStack_210;
  ulong *puStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  byte bStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  ulong *puStack_168;
  undefined8 *puStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong *puStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  ulong *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong *puStack_f0;
  undefined8 uStack_e8;
  ulong *puStack_e0;
  byte bStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  ulong *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_71 [17];
  
  puVar1 = (ulong *)param_2[10];
  puVar4 = (ulong *)param_2[0xb];
  uVar16 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar16 = 6;
  }
  if ((long)uVar16 < 3) {
    if (uVar16 == 0) {
      if (param_2[1] == 0x8000000000000000) {
        uStack_1f8 = (undefined1)param_2[2];
        uStack_1f7 = (undefined7)(param_2[2] >> 8);
        uStack_1f0 = (undefined1)param_2[3];
        uStack_1ef = (undefined7)(param_2[3] >> 8);
        puStack_200 = (ulong *)CONCAT71(puStack_200._1_7_,5);
        FUN_1087e3db0(&puStack_2d0,&puStack_200,auStack_71,&UNK_10b21a270);
        puVar13 = puStack_2d0;
      }
      else {
        func_0x000108817588(&puStack_2d0);
        puVar13 = puStack_2d0;
      }
    }
    else if (uVar16 == 1) {
      puStack_258 = (ulong *)param_2[2];
      puStack_260 = (ulong *)param_2[1];
      puStack_248 = (ulong *)param_2[4];
      puStack_250 = (ulong *)param_2[3];
      auVar29 = func_0x00010612451c(&puStack_260);
      if ((auVar29._0_8_ & 1) == 0) {
        auVar29 = func_0x0001061247b8(&puStack_260);
        if ((auVar29._0_8_ & 1) == 0) {
          func_0x0001061249a4(&puStack_140,&puStack_260);
          if (((uint)puStack_140 & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&puStack_e0,&puStack_260);
            if (((uint)puStack_e0 & 1) == 0) {
              puStack_2d0 = (ulong *)0x0;
              FUN_100f1395c(&puStack_200,&puStack_2d0);
              puStack_2a8 = (ulong *)CONCAT71(uStack_1d7,uStack_1d8);
              puStack_2b0 = (ulong *)CONCAT71(uStack_1df,uStack_1e0);
              uStack_298 = CONCAT71(uStack_1c7,uStack_1c8);
              puStack_2a0 = (ulong *)CONCAT71(uStack_1cf,bStack_1d0);
              uStack_288 = CONCAT71(uStack_1b7,uStack_1b8);
              uStack_290 = CONCAT71(uStack_1bf,uStack_1c0);
              puStack_280 = puStack_1b0;
              puStack_2c8 = (ulong *)CONCAT71(uStack_1f7,uStack_1f8);
              puStack_2b8 = (ulong *)CONCAT71(uStack_1e7,uStack_1e8);
              puStack_2c0 = (ulong *)CONCAT71(uStack_1ef,uStack_1f0);
              puStack_2d0 = puStack_200;
              if (((ulong)puStack_260 & 0x7fffffffffffffff) != 0) {
                _free(puStack_258);
                puStack_200 = puStack_2d0;
              }
              goto LAB_1013aaddc;
            }
            func_0x000108806778(&puStack_2d0,CONCAT71(uStack_cf,uStack_d0),
                                CONCAT71(uStack_c7,uStack_c8));
          }
          else {
            func_0x0001087f7324(&puStack_2d0,uStack_130,puStack_128);
          }
        }
        else {
          uStack_1f8 = auVar29[8];
          uStack_1f7 = auVar29._9_7_;
          puStack_200 = (ulong *)CONCAT71(puStack_200._1_7_,1);
          FUN_1087e3db0(&puStack_2d0,&puStack_200,auStack_71,&UNK_10b21a270);
        }
      }
      else {
        uStack_1f8 = auVar29[8];
        uStack_1f7 = auVar29._9_7_;
        puStack_200 = (ulong *)CONCAT71(puStack_200._1_7_,2);
        FUN_1087e3db0(&puStack_2d0,&puStack_200,auStack_71,&UNK_10b21a270);
      }
      puVar13 = puStack_2d0;
      if (((ulong)puStack_260 & 0x7fffffffffffffff) != 0) {
        _free(puStack_258);
        puVar13 = puStack_2d0;
      }
    }
    else {
      puStack_e0 = (ulong *)param_2[1];
      bStack_d8 = (byte)param_2[2];
      uStack_d7 = (undefined7)(param_2[2] >> 8);
      uStack_d0 = (undefined1)param_2[3];
      uStack_cf = (undefined7)(param_2[3] >> 8);
      uVar16 = func_0x0001061240c0(&puStack_e0);
      if ((uVar16 & 1) == 0) {
        puVar13 = (ulong *)_malloc(0x20);
        if (puVar13 == (ulong *)0x0) {
          func_0x0001087c9084(1,0x20);
LAB_1013ab018:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1013ab01c);
          (*pcVar9)();
        }
        puVar13[1] = 0x6e20746e696f702d;
        *puVar13 = 0x676e6974616f6c66;
        puVar13[3] = 0x6465776f6c667265;
        puVar13[2] = 0x766f207265626d75;
        puStack_2b8 = (ulong *)0x20;
        puStack_2a0 = (ulong *)0x0;
        puStack_2a8 = (ulong *)0x20;
        uStack_290 = 0;
        uStack_288 = 0;
        uStack_298 = 8;
        puStack_2b0 = puVar13;
        if (((ulong)puStack_e0 & 0x7fffffffffffffff) != 0) {
          _free(CONCAT71(uStack_d7,bStack_d8));
        }
        puStack_200 = (ulong *)0x0;
        goto LAB_1013aaddc;
      }
      uStack_1f8 = (undefined1)extraout_d0_00;
      uStack_1f7 = (undefined7)((ulong)extraout_d0_00 >> 8);
      puStack_200 = (ulong *)CONCAT71(puStack_200._1_7_,3);
      FUN_1087e3db0(&puStack_2d0,&puStack_200,auStack_71,&UNK_10b21a270);
      puVar13 = puStack_2d0;
      if (((ulong)puStack_e0 & 0x7fffffffffffffff) != 0) {
        _free(CONCAT71(uStack_d7,bStack_d8));
        puVar13 = puStack_2d0;
      }
    }
  }
  else if ((long)uVar16 < 5) {
    if (uVar16 == 3) {
      puStack_200 = (ulong *)((ulong)CONCAT61(puStack_200._2_6_,(char)param_2[1]) << 8);
      FUN_1087e3db0(&puStack_2d0,&puStack_200,auStack_71,&UNK_10b21a270);
      puVar13 = puStack_2d0;
    }
    else {
      puStack_200 = (ulong *)CONCAT71(puStack_200._1_7_,0xb);
      FUN_1087e3db0(&puStack_2d0,&puStack_200,auStack_71,&UNK_10b21a270);
      puVar13 = puStack_2d0;
    }
  }
  else if (uVar16 == 5) {
    uVar16 = param_2[1];
    puVar5 = (ulong *)param_2[2];
    puVar17 = puVar5 + param_2[3] * 0xc;
    puStack_3a8 = (ulong *)0x0;
    puStack_3a0 = (ulong *)0x8;
    puStack_398 = (ulong *)0x0;
    puVar13 = puVar5;
    if (param_2[3] != 0) {
      puVar14 = (undefined8 *)((ulong)&puStack_260 | 9);
      puVar27 = puVar5;
LAB_1013a9cb4:
      puVar13 = puVar27 + 0xc;
      puVar21 = (ulong *)*puVar27;
      if (puVar21 != (ulong *)0x8000000000000006) {
        puVar24 = (ulong *)puVar27[10];
        puVar6 = (ulong *)puVar27[0xb];
        puStack_2b0 = (ulong *)puVar27[4];
        puStack_2b8 = (ulong *)puVar27[3];
        puStack_2a0 = (ulong *)puVar27[6];
        puStack_2a8 = (ulong *)puVar27[5];
        uStack_290 = puVar27[8];
        uStack_298 = puVar27[7];
        uStack_288 = puVar27[9];
        puStack_2c0 = (ulong *)puVar27[2];
        puStack_2c8 = (ulong *)puVar27[1];
        uVar18 = (ulong)puVar21 ^ 0x8000000000000000;
        if (-1 < (long)puVar21) {
          uVar18 = 6;
        }
        uStack_270 = 0;
        puStack_2d0 = puVar21;
        puStack_280 = puVar24;
        puStack_278 = puVar6;
        if ((long)uVar18 < 3) {
          if (uVar18 == 0) {
            if (puStack_2c8 == (ulong *)0x8000000000000000) {
              uStack_1f8 = SUB81(puStack_2c0,0);
              uStack_1f7 = (undefined7)((ulong)puStack_2c0 >> 8);
              uStack_1f0 = SUB81(puStack_2b8,0);
              uStack_1ef = (undefined7)((ulong)puStack_2b8 >> 8);
              puStack_200 = (ulong *)CONCAT71(puStack_200._1_7_,5);
              FUN_1087e3db0(&puStack_260,&puStack_200,auStack_71,&UNK_10b21aeb0);
            }
            else {
              func_0x000108812a08(&puStack_260,&puStack_2c8);
            }
            goto LAB_1013aa86c;
          }
          if (uVar18 != 1) {
            puStack_e0 = (ulong *)puVar27[1];
            uStack_d0 = (undefined1)puVar27[3];
            uStack_cf = (undefined7)(puVar27[3] >> 8);
            bStack_d8 = (byte)puVar27[2];
            uStack_d7 = (undefined7)(puVar27[2] >> 8);
            uVar18 = func_0x0001061240c0(&puStack_e0);
            if ((uVar18 & 1) != 0) {
              uStack_1f8 = (undefined1)extraout_d0;
              uStack_1f7 = (undefined7)((ulong)extraout_d0 >> 8);
              puStack_200 = (ulong *)CONCAT71(puStack_200._1_7_,3);
              FUN_1087e3db0(&puStack_260,&puStack_200,auStack_71,&UNK_10b21aeb0);
              if (((ulong)puStack_e0 & 0x7fffffffffffffff) != 0) {
                _free(CONCAT71(uStack_d7,bStack_d8));
              }
              goto LAB_1013aa86c;
            }
            puVar27 = (ulong *)_malloc(0x20);
            if (puVar27 != (ulong *)0x0) {
              puVar27[1] = 0x6e20746e696f702d;
              *puVar27 = 0x676e6974616f6c66;
              puVar27[3] = 0x6465776f6c667265;
              puVar27[2] = 0x766f207265626d75;
              puStack_260 = (ulong *)0x0;
              puStack_248 = (ulong *)0x20;
              puStack_230 = (ulong *)0x0;
              puStack_238 = (ulong *)0x20;
              uStack_228 = 8;
              uStack_220 = 0;
              uStack_218 = 0;
              puStack_240 = puVar27;
              if (((ulong)puStack_e0 & 0x7fffffffffffffff) != 0) {
                puVar27 = (ulong *)CONCAT71(uStack_d7,bStack_d8);
LAB_1013aae90:
                puStack_230 = (ulong *)0x0;
                uStack_218 = 0;
                uStack_220 = 0;
                uStack_228 = 8;
                puStack_260 = (ulong *)0x0;
                _free(puVar27);
              }
LAB_1013aae94:
              puVar27 = puStack_3a0;
              puStack_2f8 = puStack_240;
              puStack_300 = puStack_248;
              puStack_2e8 = puStack_230;
              puStack_2f0 = puStack_238;
              uStack_2e0 = uStack_228;
              uStack_318 = uStack_218;
              uStack_320 = uStack_220;
              puStack_310 = puStack_210;
              puStack_2c8 = puStack_258;
              puStack_2c0 = puStack_250;
              if (((ulong)puStack_260 & 1) == 0) {
                puStack_2c8 = puVar24;
                puStack_2c0 = puVar6;
              }
              uStack_370 = uStack_228;
              puStack_388 = puStack_240;
              puStack_390 = puStack_248;
              puStack_378 = puStack_230;
              puStack_380 = puStack_238;
              puStack_280 = puStack_210;
              uStack_288 = uStack_218;
              uStack_290 = uStack_220;
              uStack_298 = uStack_228;
              puStack_2a0 = puStack_230;
              puStack_2a8 = puStack_238;
              puStack_2b0 = puStack_240;
              puStack_2b8 = puStack_248;
              puStack_2d0 = (ulong *)0x1;
              if (puStack_398 != (ulong *)0x0) {
                puVar21 = puStack_3a0 + 4;
                puVar24 = puStack_398;
                do {
                  if ((puVar21[-4] & 0x7fffffffffffffff) != 0) {
                    _free(puVar21[-3]);
                  }
                  if (puVar21[-1] != 0x8000000000000000 && puVar21[-1] != 0) {
                    _free(*puVar21);
                  }
                  puVar24 = (ulong *)((long)puVar24 + -1);
                  puVar21 = puVar21 + 7;
                } while (puVar24 != (ulong *)0x0);
              }
              if (puStack_3a8 != (ulong *)0x0) {
                _free(puVar27);
              }
              goto LAB_1013aaccc;
            }
            func_0x0001087c9084(1,0x20);
            goto LAB_1013ab018;
          }
          puStack_138 = (ulong *)puVar27[2];
          puStack_140 = (ulong *)puVar27[1];
          puStack_128 = (ulong *)puVar27[4];
          uStack_130 = puVar27[3];
          auVar29 = func_0x00010612451c(&puStack_140);
          if ((auVar29._0_8_ & 1) == 0) {
            auVar29 = func_0x0001061247b8(&puStack_140);
            if ((auVar29._0_8_ & 1) == 0) {
              func_0x0001061249a4(&puStack_e0,&puStack_140);
              if (((ulong)puStack_e0 & 1) == 0) {
                __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                          (&puStack_200,&puStack_140);
                if (((ulong)puStack_200 & 1) == 0) {
                  puVar21 = (ulong *)_malloc(0x19);
                  if (puVar21 != (ulong *)0x0) {
                    puVar21[1] = 0x6f207265626d756e;
                    *puVar21 = 0x2072656765746e69;
                    *(undefined8 *)((long)puVar21 + 0x11) = 0x6465776f6c667265;
                    *(undefined8 *)((long)puVar21 + 9) = 0x766f207265626d75;
                    puStack_260 = (ulong *)0x0;
                    puStack_248 = (ulong *)0x19;
                    puStack_230 = (ulong *)0x0;
                    puStack_238 = (ulong *)0x19;
                    uStack_228 = 8;
                    uStack_220 = 0;
                    uStack_218 = 0;
                    puVar27 = puStack_138;
                    puStack_240 = puVar21;
                    if (((ulong)puStack_140 & 0x7fffffffffffffff) != 0) goto LAB_1013aae90;
                    goto LAB_1013aae94;
                  }
                  func_0x0001087c9084(1,0x19);
                  goto LAB_1013ab018;
                }
                func_0x00010880a678(&puStack_260,CONCAT71(uStack_1ef,uStack_1f0),
                                    CONCAT71(uStack_1e7,uStack_1e8));
              }
              else {
                func_0x0001087faba8(&puStack_260,CONCAT71(uStack_cf,uStack_d0),
                                    CONCAT71(uStack_c7,uStack_c8));
              }
            }
            else {
              uStack_1f8 = auVar29[8];
              uStack_1f7 = auVar29._9_7_;
              puStack_200 = (ulong *)CONCAT71(puStack_200._1_7_,1);
              FUN_1087e3db0(&puStack_260,&puStack_200,auStack_71,&UNK_10b21aeb0);
            }
          }
          else {
            uStack_1f8 = auVar29[8];
            uStack_1f7 = auVar29._9_7_;
            puStack_200 = (ulong *)CONCAT71(puStack_200._1_7_,2);
            FUN_1087e3db0(&puStack_260,&puStack_200,auStack_71,&UNK_10b21aeb0);
          }
          if (((ulong)puStack_140 & 0x7fffffffffffffff) != 0) {
            _free(puStack_138);
          }
          goto LAB_1013aa86c;
        }
        if ((long)uVar18 < 5) {
          if (uVar18 == 3) {
            puStack_200 = (ulong *)((ulong)CONCAT61(puStack_200._2_6_,puStack_2c8._0_1_) << 8);
            FUN_1087e3db0(&puStack_260,&puStack_200,auStack_71,&UNK_10b21aeb0);
          }
          else {
            puStack_e0 = (ulong *)puVar27[1];
            bStack_d8 = (byte)puVar27[2];
            uStack_d7 = (undefined7)(puVar27[2] >> 8);
            uStack_d0 = (undefined1)puVar27[3];
            uStack_cf = (undefined7)(puVar27[3] >> 8);
            do {
              if ((uint)puStack_e0 == 2) {
                FUN_1087e4020(&puStack_200,&UNK_108ca2209,7);
                if (puStack_200 == (ulong *)0x2) {
                  puStack_240 = (ulong *)0x8000000000000000;
                  uStack_228 = CONCAT71(uStack_228._1_7_,uStack_1f8);
                  puStack_258 = (ulong *)0x8000000000000000;
                  puStack_260 = (ulong *)0x2;
                }
                else {
                  puVar14[5] = CONCAT17(uStack_1c8,uStack_1cf);
                  puVar14[4] = CONCAT17(bStack_1d0,uStack_1d7);
                  puVar14[7] = CONCAT17(uStack_1b8,uStack_1bf);
                  puVar14[6] = CONCAT17(uStack_1c0,uStack_1c7);
                  *(ulong **)((long)puVar14 + 0x47) = puStack_1b0;
                  *(ulong *)((long)puVar14 + 0x3f) = CONCAT71(uStack_1b7,uStack_1b8);
                  puVar14[1] = CONCAT17(uStack_1e8,uStack_1ef);
                  *puVar14 = CONCAT17(uStack_1f0,uStack_1f7);
                  puVar14[3] = CONCAT17(uStack_1d8,uStack_1df);
                  puVar14[2] = CONCAT17(uStack_1e0,uStack_1e7);
                  puStack_260 = puStack_200;
                  puStack_258 = (ulong *)CONCAT71(puStack_258._1_7_,uStack_1f8);
                }
                goto LAB_1013aa86c;
              }
              FUN_101509040(&puStack_200,&puStack_e0);
            } while (puStack_200 == (ulong *)0x2);
            puStack_238 = (ulong *)CONCAT71(uStack_1d7,uStack_1d8);
            puStack_240 = (ulong *)CONCAT71(uStack_1df,uStack_1e0);
            uStack_228 = CONCAT71(uStack_1c7,uStack_1c8);
            puStack_230 = (ulong *)CONCAT71(uStack_1cf,bStack_1d0);
            uStack_218 = CONCAT71(uStack_1b7,uStack_1b8);
            uStack_220 = CONCAT71(uStack_1bf,uStack_1c0);
            puStack_210 = puStack_1b0;
            puStack_258 = (ulong *)CONCAT71(uStack_1f7,uStack_1f8);
            puStack_248 = (ulong *)CONCAT71(uStack_1e7,uStack_1e8);
            puStack_250 = (ulong *)CONCAT71(uStack_1ef,uStack_1f0);
            puStack_260 = puStack_200;
          }
        }
        else if (uVar18 == 5) {
          uVar18 = puVar27[1];
          puVar21 = (ulong *)puVar27[2];
          puVar28 = puVar21 + puVar27[3] * 0xc;
          puStack_3d0 = (ulong *)0x5;
          puStack_140 = puVar21;
          uStack_130 = uVar18;
          puStack_128 = puVar28;
          if (puVar27[3] == 0) {
            puVar27 = (ulong *)0x8000000000000000;
            puVar15 = puVar21;
            puVar25 = unaff_x20;
            puStack_138 = puVar21;
LAB_1013aa324:
            if (puVar15 == puVar28) {
              puVar22 = (ulong *)0x0;
              puVar12 = puVar28;
              goto LAB_1013aa454;
            }
            puVar12 = puVar15 + 0xc;
            puStack_138 = puVar12;
            if ((ulong *)*puVar15 == (ulong *)0x8000000000000006) {
              puVar22 = (ulong *)0x8000000000000000;
              puVar8 = puStack_3f8;
LAB_1013aa34c:
              puStack_3f8 = puVar8;
              bVar10 = puVar12 == puVar28;
              puVar12 = puVar28;
              if (bVar10) {
LAB_1013aa454:
                FUN_1087e427c(&puStack_200,2,&UNK_10b22d5f0,&UNK_10b20a590);
                puStack_238 = (ulong *)CONCAT71(uStack_1d7,uStack_1d8);
                puStack_240 = (ulong *)CONCAT71(uStack_1df,uStack_1e0);
                uStack_228 = CONCAT71(uStack_1c7,uStack_1c8);
                puStack_230 = (ulong *)CONCAT71(uStack_1cf,bStack_1d0);
                uStack_218 = CONCAT71(uStack_1b7,uStack_1b8);
                uStack_220 = CONCAT71(uStack_1bf,uStack_1c0);
                puStack_258 = (ulong *)CONCAT71(uStack_1f7,uStack_1f8);
                puStack_248 = (ulong *)CONCAT71(uStack_1e7,uStack_1e8);
                puStack_250 = (ulong *)CONCAT71(uStack_1ef,uStack_1f0);
                unaff_x20 = puVar25;
                puStack_210 = puStack_1b0;
                puStack_260 = puStack_200;
              }
              else {
                puVar12 = puVar15 + 0x18;
                puStack_138 = puVar12;
                if ((ulong *)puVar15[0xc] == (ulong *)0x8000000000000006) goto LAB_1013aa454;
                uStack_1e0 = (undefined1)puVar15[0x10];
                uStack_1df = (undefined7)(puVar15[0x10] >> 8);
                uStack_1e8 = (undefined1)puVar15[0xf];
                uStack_1e7 = (undefined7)(puVar15[0xf] >> 8);
                bStack_1d0 = (byte)puVar15[0x12];
                uStack_1cf = (undefined7)(puVar15[0x12] >> 8);
                uStack_1d8 = (undefined1)puVar15[0x11];
                uStack_1d7 = (undefined7)(puVar15[0x11] >> 8);
                uStack_1c0 = (undefined1)puVar15[0x14];
                uStack_1bf = (undefined7)(puVar15[0x14] >> 8);
                uStack_1c8 = (undefined1)puVar15[0x13];
                uStack_1c7 = (undefined7)(puVar15[0x13] >> 8);
                uStack_1b8 = (undefined1)puVar15[0x15];
                uStack_1b7 = (undefined7)(puVar15[0x15] >> 8);
                uStack_1f0 = (undefined1)puVar15[0xe];
                uStack_1ef = (undefined7)(puVar15[0xe] >> 8);
                uStack_1f8 = (undefined1)puVar15[0xd];
                uStack_1f7 = (undefined7)(puVar15[0xd] >> 8);
                puStack_1a8 = (ulong *)puVar15[0x17];
                puStack_1b0 = (ulong *)puVar15[0x16];
                uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
                puStack_200 = (ulong *)puVar15[0xc];
                FUN_10061703c(&puStack_e0,&puStack_200);
                unaff_x20 = puVar25;
                if (puStack_e0 == (ulong *)0x2) {
                  puStack_250 = puStack_3d0;
                  puStack_248 = puStack_400;
                  puStack_238 = puStack_3f8;
                  uStack_228 = CONCAT71(uStack_228._1_7_,bStack_d8);
                  puStack_260 = (ulong *)0x2;
                  puStack_258 = puVar27;
                  puStack_240 = puVar22;
                  puStack_230 = puVar25;
                  goto LAB_1013aa824;
                }
                puVar14[5] = CONCAT17(uStack_a8,uStack_af);
                puVar14[4] = CONCAT17(uStack_b0,uStack_b7);
                puVar14[7] = CONCAT17(uStack_98,uStack_9f);
                puVar14[6] = CONCAT17(uStack_a0,uStack_a7);
                *(ulong **)((long)puVar14 + 0x47) = puStack_90;
                *(ulong *)((long)puVar14 + 0x3f) = CONCAT71(uStack_97,uStack_98);
                puVar14[1] = CONCAT17(uStack_c8,uStack_cf);
                *puVar14 = CONCAT17(uStack_d0,uStack_d7);
                puVar14[3] = CONCAT17(uStack_b8,uStack_bf);
                puVar14[2] = CONCAT17(uStack_c0,uStack_c7);
                puStack_258 = (ulong *)CONCAT71(puStack_258._1_7_,bStack_d8);
                puStack_260 = puStack_e0;
              }
              if (((ulong)puVar22 & 0x7fffffffffffffff) != 0) {
                _free(puStack_3f8);
              }
            }
            else {
              unaff_x20 = (ulong *)puVar15[10];
              puVar8 = (ulong *)puVar15[0xb];
              uStack_1e0 = (undefined1)puVar15[4];
              uStack_1df = (undefined7)(puVar15[4] >> 8);
              uStack_1e8 = (undefined1)puVar15[3];
              uStack_1e7 = (undefined7)(puVar15[3] >> 8);
              bStack_1d0 = (byte)puVar15[6];
              uStack_1cf = (undefined7)(puVar15[6] >> 8);
              uStack_1d8 = (undefined1)puVar15[5];
              uStack_1d7 = (undefined7)(puVar15[5] >> 8);
              uStack_1c0 = (undefined1)puVar15[8];
              uStack_1bf = (undefined7)(puVar15[8] >> 8);
              uStack_1c8 = (undefined1)puVar15[7];
              uStack_1c7 = (undefined7)(puVar15[7] >> 8);
              uStack_1b8 = (undefined1)puVar15[9];
              uStack_1b7 = (undefined7)(puVar15[9] >> 8);
              uStack_1f0 = (undefined1)puVar15[2];
              uStack_1ef = (undefined7)(puVar15[2] >> 8);
              uStack_1f8 = (undefined1)puVar15[1];
              uStack_1f7 = (undefined7)(puVar15[1] >> 8);
              uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
              puStack_200 = (ulong *)*puVar15;
              puStack_1b0 = unaff_x20;
              puStack_1a8 = puVar8;
              FUN_10160334c(&puStack_e0,&puStack_200);
              puVar22 = (ulong *)CONCAT71(uStack_d7,bStack_d8);
              puVar25 = (ulong *)CONCAT71(uStack_c7,uStack_c8);
              if (puStack_e0 == (ulong *)0x2) {
                puVar8 = (ulong *)CONCAT71(uStack_cf,uStack_d0);
                if (puVar22 == (ulong *)0x8000000000000001) {
                  puVar22 = (ulong *)0x8000000000000000;
                  puVar25 = unaff_x20;
                  puVar8 = puStack_3f8;
                }
                goto LAB_1013aa34c;
              }
              puStack_238 = (ulong *)CONCAT71(uStack_b7,uStack_b8);
              puStack_240 = (ulong *)CONCAT71(uStack_bf,uStack_c0);
              uStack_228 = CONCAT71(uStack_a7,uStack_a8);
              puStack_230 = (ulong *)CONCAT71(uStack_af,uStack_b0);
              uStack_218 = CONCAT71(uStack_97,uStack_98);
              uStack_220 = CONCAT71(uStack_9f,uStack_a0);
              puStack_210 = puStack_90;
              puStack_250 = puVar8;
              puStack_258 = unaff_x20;
              if (puStack_e0 != (ulong *)0x0) {
                puStack_250 = (ulong *)CONCAT71(uStack_cf,uStack_d0);
                puStack_258 = puVar22;
              }
              puStack_260 = puStack_e0;
              puStack_248 = puVar25;
              if (puStack_e0 < (ulong *)0x2) {
                puStack_260 = (ulong *)0x1;
              }
            }
            if (((ulong)puVar27 & 0x7fffffffffffffff) != 0) {
              _free(puStack_3d0);
            }
          }
          else {
            puVar12 = puVar21 + 0xc;
            puStack_138 = puVar12;
            puVar15 = puVar12;
            if ((ulong *)*puVar21 == (ulong *)0x8000000000000006) {
LAB_1013a9df8:
              puVar27 = (ulong *)0x8000000000000000;
              puVar25 = unaff_x20;
              goto LAB_1013aa324;
            }
            puVar25 = (ulong *)puVar21[10];
            unaff_x20 = (ulong *)puVar21[0xb];
            uStack_1e0 = (undefined1)puVar21[4];
            uStack_1df = (undefined7)(puVar21[4] >> 8);
            uStack_1e8 = (undefined1)puVar21[3];
            uStack_1e7 = (undefined7)(puVar21[3] >> 8);
            bStack_1d0 = (byte)puVar21[6];
            uStack_1cf = (undefined7)(puVar21[6] >> 8);
            uStack_1d8 = (undefined1)puVar21[5];
            uStack_1d7 = (undefined7)(puVar21[5] >> 8);
            uStack_1c0 = (undefined1)puVar21[8];
            uStack_1bf = (undefined7)(puVar21[8] >> 8);
            uStack_1c8 = (undefined1)puVar21[7];
            uStack_1c7 = (undefined7)(puVar21[7] >> 8);
            uStack_1b8 = (undefined1)puVar21[9];
            uStack_1b7 = (undefined7)(puVar21[9] >> 8);
            uStack_1f0 = (undefined1)puVar21[2];
            uStack_1ef = (undefined7)(puVar21[2] >> 8);
            uStack_1f8 = (undefined1)puVar21[1];
            uStack_1f7 = (undefined7)(puVar21[1] >> 8);
            uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
            puStack_200 = (ulong *)*puVar21;
            puStack_1b0 = puVar25;
            puStack_1a8 = unaff_x20;
            func_0x0001014a83ac(&puStack_e0,&puStack_200);
            puVar27 = (ulong *)CONCAT71(uStack_d7,bStack_d8);
            puStack_3d0 = (ulong *)CONCAT71(uStack_cf,uStack_d0);
            puVar22 = (ulong *)CONCAT71(uStack_c7,uStack_c8);
            if (puStack_e0 == (ulong *)0x2) {
              puVar25 = unaff_x20;
              puStack_400 = puVar22;
              if (puVar27 != (ulong *)0x8000000000000001) goto LAB_1013aa324;
              goto LAB_1013a9df8;
            }
            puStack_238 = (ulong *)CONCAT71(uStack_b7,uStack_b8);
            puStack_240 = (ulong *)CONCAT71(uStack_bf,uStack_c0);
            uStack_228 = CONCAT71(uStack_a7,uStack_a8);
            puStack_230 = (ulong *)CONCAT71(uStack_af,uStack_b0);
            uStack_218 = CONCAT71(uStack_97,uStack_98);
            uStack_220 = CONCAT71(uStack_9f,uStack_a0);
            puStack_210 = puStack_90;
            puStack_250 = unaff_x20;
            puStack_258 = puVar25;
            if (puStack_e0 != (ulong *)0x0) {
              puStack_250 = puStack_3d0;
              puStack_258 = puVar27;
            }
            puStack_260 = puStack_e0;
            puStack_248 = puVar22;
            if (puStack_e0 < (ulong *)0x2) {
              puStack_260 = (ulong *)0x1;
            }
          }
LAB_1013aa824:
          lVar23 = ((ulong)((long)puVar28 - (long)puVar12) >> 5) * -0x5555555555555555 + 1;
          while (lVar23 = lVar23 + -1, lVar23 != 0) {
            FUN_100dfe50c(puVar12);
            puVar12 = puVar12 + 0xc;
          }
          if (uVar18 != 0) {
            _free(puVar21);
          }
        }
        else {
          puVar2 = (undefined8 *)puVar27[1];
          uVar18 = puVar27[2];
          uVar19 = puVar27[4];
          if ((uVar19 != 0) && (uVar19 * 9 != -0x11)) {
            _free(puVar27[3] + uVar19 * -8 + -8);
          }
          puStack_160 = puVar2 + uVar18 * 0x12;
          puStack_200 = (ulong *)0x8000000000000001;
          puStack_178 = puVar2;
          puStack_168 = puVar21;
          puStack_158 = puVar24;
          puStack_150 = puVar6;
          if (uVar18 == 0) {
            puStack_3f8 = (ulong *)0x8000000000000001;
            puStack_400 = (ulong *)CONCAT44(puStack_400._4_4_,2);
            puStack_3f0 = (ulong *)0x8000000000000001;
            puVar27 = param_2;
          }
          else {
            puStack_3f0 = (ulong *)0x8000000000000001;
            puStack_400 = (ulong *)CONCAT44(puStack_400._4_4_,2);
            puStack_3f8 = (ulong *)0x8000000000000001;
            puStack_170 = puVar2;
            puVar27 = puVar4;
            while( true ) {
              puVar2 = puStack_170 + 0x12;
              puVar21 = (ulong *)*puStack_170;
              if (puVar21 == (ulong *)0x8000000000000001) break;
              piVar3 = (int *)puStack_170[1];
              lVar23 = puStack_170[2];
              unaff_x20 = (ulong *)puStack_170[3];
              uVar7 = puStack_170[4];
              uStack_118 = puStack_170[10];
              uStack_120 = puStack_170[9];
              uStack_108 = puStack_170[0xc];
              uStack_110 = puStack_170[0xb];
              uStack_f8 = puStack_170[0xe];
              uStack_100 = puStack_170[0xd];
              uStack_e8 = puStack_170[0x10];
              puStack_f0 = (ulong *)puStack_170[0xf];
              puStack_138 = (ulong *)puStack_170[6];
              puStack_140 = (ulong *)puStack_170[5];
              puStack_128 = (ulong *)puStack_170[8];
              uStack_130 = puStack_170[7];
              uStack_b8 = (undefined1)uStack_118;
              uStack_b7 = (undefined7)((ulong)uStack_118 >> 8);
              uStack_c0 = (undefined1)uStack_120;
              uStack_bf = (undefined7)((ulong)uStack_120 >> 8);
              uStack_a8 = (undefined1)uStack_108;
              uStack_a7 = (undefined7)((ulong)uStack_108 >> 8);
              uStack_b0 = (undefined1)uStack_110;
              uStack_af = (undefined7)((ulong)uStack_110 >> 8);
              uStack_98 = (undefined1)uStack_f8;
              uStack_97 = (undefined7)((ulong)uStack_f8 >> 8);
              uStack_a0 = (undefined1)uStack_100;
              uStack_9f = (undefined7)((ulong)uStack_100 >> 8);
              bStack_d8 = (byte)puStack_138;
              uStack_d7 = (undefined7)((ulong)puStack_138 >> 8);
              uStack_c8 = SUB81(puStack_128,0);
              uStack_c7 = (undefined7)((ulong)puStack_128 >> 8);
              uStack_d0 = (undefined1)uStack_130;
              uStack_cf = (undefined7)(uStack_130 >> 8);
              puStack_170 = puVar2;
              puStack_e0 = puStack_140;
              puStack_90 = puStack_f0;
              uStack_88 = uStack_e8;
              if (puVar21 == (ulong *)0x8000000000000000) {
                if (lVar23 == 7) {
                  if (*piVar3 == 0x62616e65 && *(int *)((long)piVar3 + 3) == 0x64656c62) {
                    uVar26 = 2;
                    goto joined_r0x0001013aa12c;
                  }
                }
                else if (lVar23 == 4) {
                  if (*piVar3 == 0x68746170) {
                    uVar26 = 0;
                  }
                  else {
                    if (*piVar3 != 0x656d616e) goto LAB_1013aa0c0;
                    uVar26 = 1;
                  }
                  goto joined_r0x0001013aa12c;
                }
LAB_1013aa0c0:
                uVar26 = 3;
              }
              else {
                if (lVar23 == 0) goto LAB_1013aa0c0;
                piVar11 = (int *)_malloc(lVar23);
                if (piVar11 == (int *)0x0) {
                  func_0x0001087c9084(1,lVar23);
                  goto LAB_1013ab018;
                }
                _memcpy(piVar11,piVar3,lVar23);
                if (lVar23 == -0x8000000000000000) goto LAB_1013aa0c0;
                if (lVar23 == 7) {
                  if (*piVar11 == 0x62616e65 && *(int *)((long)piVar11 + 3) == 0x64656c62) {
                    uVar26 = 2;
                    goto LAB_1013aa100;
                  }
LAB_1013aa0fc:
                  uVar26 = 3;
                }
                else {
                  if (lVar23 != 4) goto LAB_1013aa0fc;
                  if (*piVar11 == 0x68746170) {
                    uVar26 = 0;
                  }
                  else {
                    if (*piVar11 != 0x656d616e) goto LAB_1013aa0fc;
                    uVar26 = 1;
                  }
                }
LAB_1013aa100:
                _free(piVar11);
              }
joined_r0x0001013aa12c:
              if (puStack_200 != (ulong *)0x8000000000000001) {
                if (((ulong)puStack_200 & 0x7fffffffffffffff) != 0) {
                  _free(CONCAT71(uStack_1f7,uStack_1f8));
                }
                FUN_100dfe50c(&uStack_1d8);
              }
              puStack_1b0 = (ulong *)CONCAT71(uStack_b7,uStack_b8);
              uStack_1a0 = CONCAT71(uStack_a7,uStack_a8);
              puStack_1a8 = (ulong *)CONCAT71(uStack_af,uStack_b0);
              uStack_1b8 = uStack_c0;
              uStack_1b7 = uStack_bf;
              uStack_190 = CONCAT71(uStack_97,uStack_98);
              uStack_198 = CONCAT71(uStack_9f,uStack_a0);
              uStack_180 = uStack_88;
              puStack_188 = puStack_90;
              bStack_1d0 = bStack_d8;
              uStack_1cf = uStack_d7;
              uStack_1d8 = SUB81(puStack_e0,0);
              uStack_1d7 = (undefined7)((ulong)puStack_e0 >> 8);
              uStack_1f8 = SUB81(piVar3,0);
              uStack_1f7 = (undefined7)((ulong)piVar3 >> 8);
              uStack_1f0 = (undefined1)lVar23;
              uStack_1ef = (undefined7)((ulong)lVar23 >> 8);
              uStack_1e8 = SUB81(unaff_x20,0);
              uStack_1e7 = (undefined7)((ulong)unaff_x20 >> 8);
              uStack_1e0 = (undefined1)uVar7;
              uStack_1df = (undefined7)((ulong)uVar7 >> 8);
              uStack_1c0 = uStack_c8;
              uStack_1bf = uStack_c7;
              uStack_1c8 = uStack_d0;
              uStack_1c7 = uStack_cf;
              puStack_200 = puVar21;
              puVar21 = puVar27;
              puVar28 = puStack_448;
              puVar25 = puStack_440;
              if (uVar26 < 2) {
                if (uVar26 == 0) {
                  if (puStack_3f0 != (ulong *)0x8000000000000001) {
                    FUN_1087e4364(&puStack_e0,&UNK_108c61038,4);
LAB_1013aaa90:
                    puStack_238 = (ulong *)CONCAT71(uStack_b7,uStack_b8);
                    puStack_240 = (ulong *)CONCAT71(uStack_bf,uStack_c0);
                    uStack_228 = CONCAT71(uStack_a7,uStack_a8);
                    puStack_230 = (ulong *)CONCAT71(uStack_af,uStack_b0);
                    uStack_218 = CONCAT71(uStack_97,uStack_98);
                    uStack_220 = CONCAT71(uStack_9f,uStack_a0);
                    puStack_248 = (ulong *)CONCAT71(uStack_c7,uStack_c8);
                    puStack_210 = puStack_90;
                    puStack_260 = puStack_e0;
                    puStack_258 = (ulong *)CONCAT71(uStack_d7,bStack_d8);
                    puStack_250 = (ulong *)CONCAT71(uStack_cf,uStack_d0);
joined_r0x0001013aaac4:
                    bVar10 = true;
                    puStack_e0 = puStack_260;
                    if ((puStack_3f8 != (ulong *)0x8000000000000001) &&
                       (bVar10 = true, ((ulong)puStack_3f8 & 0x7fffffffffffffff) != 0)) {
                      _free(puStack_440);
                    }
                    goto LAB_1013aaa00;
                  }
                  func_0x000100624374(&puStack_e0,&puStack_200);
                  puStack_438 = (ulong *)CONCAT71(uStack_c7,uStack_c8);
                  puVar21 = (ulong *)CONCAT71(uStack_cf,uStack_d0);
                  puStack_3f0 = (ulong *)CONCAT71(uStack_d7,bStack_d8);
                  if (puStack_e0 != (ulong *)0x2) {
                    puStack_238 = (ulong *)CONCAT71(uStack_b7,uStack_b8);
                    puStack_240 = (ulong *)CONCAT71(uStack_bf,uStack_c0);
                    uStack_228 = CONCAT71(uStack_a7,uStack_a8);
                    puStack_230 = (ulong *)CONCAT71(uStack_af,uStack_b0);
                    uStack_218 = CONCAT71(uStack_97,uStack_98);
                    uStack_220 = CONCAT71(uStack_9f,uStack_a0);
                    puStack_3f0 = (ulong *)0x8000000000000001;
                    puStack_210 = puStack_90;
                    puStack_260 = puStack_e0;
                    puStack_258 = (ulong *)CONCAT71(uStack_d7,bStack_d8);
                    puStack_250 = (ulong *)CONCAT71(uStack_cf,uStack_d0);
                    puStack_248 = puStack_438;
                    goto joined_r0x0001013aaac4;
                  }
                }
                else {
                  if (puStack_3f8 != (ulong *)0x8000000000000001) {
                    FUN_1087e4364(&puStack_e0,&UNK_108c61018,4);
                    goto LAB_1013aaa90;
                  }
                  func_0x000100625804(&puStack_e0,&puStack_200);
                  puStack_3f8 = (ulong *)CONCAT71(uStack_d7,bStack_d8);
                  puVar28 = (ulong *)CONCAT71(uStack_c7,uStack_c8);
                  puVar25 = (ulong *)CONCAT71(uStack_cf,uStack_d0);
                  if (puStack_e0 != (ulong *)0x2) {
                    puStack_238 = (ulong *)CONCAT71(uStack_b7,uStack_b8);
                    puStack_240 = (ulong *)CONCAT71(uStack_bf,uStack_c0);
                    uStack_228 = CONCAT71(uStack_a7,uStack_a8);
                    puStack_230 = (ulong *)CONCAT71(uStack_af,uStack_b0);
                    uStack_218 = CONCAT71(uStack_97,uStack_98);
                    uStack_220 = CONCAT71(uStack_9f,uStack_a0);
                    puStack_210 = puStack_90;
                    puStack_260 = puStack_e0;
                    bVar10 = true;
                    puStack_258 = puStack_3f8;
                    puStack_250 = (ulong *)CONCAT71(uStack_cf,uStack_d0);
                    puStack_248 = (ulong *)CONCAT71(uStack_c7,uStack_c8);
                    goto LAB_1013aaa00;
                  }
                }
              }
              else if (uVar26 == 2) {
                if ((int)puStack_400 != 2) {
                  FUN_1087e4364(&puStack_e0,&UNK_108ca2209,7);
                  goto LAB_1013aaa90;
                }
                FUN_1014e04f4(&puStack_e0,&puStack_200);
                puStack_400 = (ulong *)CONCAT44(puStack_400._4_4_,(uint)bStack_d8);
                if (puStack_e0 != (ulong *)0x2) {
                  puVar14[5] = CONCAT17(uStack_a8,uStack_af);
                  puVar14[4] = CONCAT17(uStack_b0,uStack_b7);
                  puVar14[7] = CONCAT17(uStack_98,uStack_9f);
                  puVar14[6] = CONCAT17(uStack_a0,uStack_a7);
                  *(ulong **)((long)puVar14 + 0x47) = puStack_90;
                  *(ulong *)((long)puVar14 + 0x3f) = CONCAT71(uStack_97,uStack_98);
                  puVar14[1] = CONCAT17(uStack_c8,uStack_cf);
                  *puVar14 = CONCAT17(uStack_d0,uStack_d7);
                  puVar14[3] = CONCAT17(uStack_b8,uStack_bf);
                  puVar14[2] = CONCAT17(uStack_c0,uStack_c7);
                  puStack_258 = (ulong *)CONCAT71(puStack_258._1_7_,bStack_d8);
                  puStack_260 = puStack_e0;
                  goto joined_r0x0001013aaac4;
                }
              }
              else {
                func_0x0001014e08dc(&puStack_e0,&puStack_200);
                if (puStack_e0 != (ulong *)0x2) {
                  puStack_238 = (ulong *)CONCAT71(uStack_b7,uStack_b8);
                  puStack_240 = (ulong *)CONCAT71(uStack_bf,uStack_c0);
                  uStack_228 = CONCAT71(uStack_a7,uStack_a8);
                  puStack_230 = (ulong *)CONCAT71(uStack_af,uStack_b0);
                  uStack_218 = CONCAT71(uStack_97,uStack_98);
                  uStack_220 = CONCAT71(uStack_9f,uStack_a0);
                  puStack_258 = (ulong *)CONCAT71(uStack_d7,bStack_d8);
                  puStack_248 = (ulong *)CONCAT71(uStack_c7,uStack_c8);
                  puStack_250 = (ulong *)CONCAT71(uStack_cf,uStack_d0);
                  puStack_210 = puStack_90;
                  puStack_260 = puStack_e0;
                  goto joined_r0x0001013aaac4;
                }
              }
              puStack_440 = puVar25;
              puStack_448 = puVar28;
              puVar27 = puVar21;
              puVar2 = puStack_170;
              if (puStack_170 == puStack_160) break;
            }
          }
          puStack_170 = puVar2;
          bVar10 = puStack_3f0 == (ulong *)0x8000000000000001;
          puVar21 = (ulong *)0x8000000000000000;
          if (!bVar10) {
            puVar21 = puStack_3f0;
          }
          unaff_x20 = (ulong *)0x8000000000000000;
          if (puStack_3f8 != (ulong *)0x8000000000000001) {
            unaff_x20 = puStack_3f8;
          }
          bVar20 = (byte)puStack_400;
          if (((int)puStack_400 == 2) &&
             (FUN_1087e4020(&puStack_e0,&UNK_108ca2209,7), bVar20 = bStack_d8,
             puStack_e0 != (ulong *)0x2)) {
            puVar14[5] = CONCAT17(uStack_a8,uStack_af);
            puVar14[4] = CONCAT17(uStack_b0,uStack_b7);
            puVar14[7] = CONCAT17(uStack_98,uStack_9f);
            puVar14[6] = CONCAT17(uStack_a0,uStack_a7);
            *(ulong **)((long)puVar14 + 0x47) = puStack_90;
            *(ulong *)((long)puVar14 + 0x3f) = CONCAT71(uStack_97,uStack_98);
            puVar14[1] = CONCAT17(uStack_c8,uStack_cf);
            *puVar14 = CONCAT17(uStack_d0,uStack_d7);
            puVar14[3] = CONCAT17(uStack_b8,uStack_bf);
            puVar14[2] = CONCAT17(uStack_c0,uStack_c7);
            puStack_260 = puStack_e0;
            puStack_258 = (ulong *)CONCAT71(puStack_258._1_7_,bStack_d8);
            if (((ulong)unaff_x20 & 0x7fffffffffffffff) != 0) {
              _free(puStack_440);
            }
            if (((ulong)puVar21 & 0x7fffffffffffffff) != 0) {
              _free(puVar27);
            }
LAB_1013aaa00:
            if (((bVar10) && (puStack_3f0 != (ulong *)0x8000000000000001)) &&
               (((ulong)puStack_3f0 & 0x7fffffffffffffff) != 0)) {
              _free(puVar27);
            }
          }
          else {
            puStack_248 = puStack_438;
            puStack_238 = puStack_440;
            puStack_230 = puStack_448;
            uStack_228 = CONCAT71(uStack_228._1_7_,bVar20) & 0xffffffffffffff01;
            puStack_260 = (ulong *)0x2;
            puStack_258 = puVar21;
            puStack_250 = puVar27;
            puStack_240 = unaff_x20;
          }
          FUN_100e1fd94(&puStack_200);
        }
LAB_1013aa86c:
        puVar27 = puStack_398;
        if (puStack_260 != (ulong *)0x2) goto LAB_1013aae94;
        uStack_370 = uStack_228;
        puStack_378 = puStack_230;
        puStack_380 = puStack_238;
        puStack_388 = puStack_240;
        puStack_390 = puStack_248;
        if (puStack_258 != (ulong *)0x8000000000000001) goto code_r0x0001013aa8a4;
      }
    }
LAB_1013aacb4:
    puStack_2c0 = puStack_3a0;
    puStack_2c8 = puStack_3a8;
    puStack_2b8 = puStack_398;
    puStack_2d0 = (ulong *)0x2;
LAB_1013aaccc:
    lVar23 = ((ulong)((long)puVar17 - (long)puVar13) >> 5) * -0x5555555555555555 + 1;
    while (lVar23 = lVar23 + -1, lVar23 != 0) {
      FUN_100dfe50c(puVar13);
      puVar13 = puVar13 + 0xc;
    }
    puVar13 = puStack_2d0;
    if (uVar16 != 0) {
      _free(puVar5);
      puVar13 = puStack_2d0;
    }
  }
  else {
    uStack_1d8 = (undefined1)param_2[5];
    uStack_1d7 = (undefined7)(param_2[5] >> 8);
    uStack_1e0 = (undefined1)param_2[4];
    uStack_1df = (undefined7)(param_2[4] >> 8);
    uStack_1c8 = (undefined1)param_2[7];
    uStack_1c7 = (undefined7)(param_2[7] >> 8);
    bStack_1d0 = (byte)param_2[6];
    uStack_1cf = (undefined7)(param_2[6] >> 8);
    uStack_1b8 = (undefined1)param_2[9];
    uStack_1b7 = (undefined7)(param_2[9] >> 8);
    uStack_1c0 = (undefined1)param_2[8];
    uStack_1bf = (undefined7)(param_2[8] >> 8);
    puStack_200 = (ulong *)*param_2;
    uStack_1f8 = (undefined1)param_2[1];
    uStack_1f7 = (undefined7)(param_2[1] >> 8);
    uStack_1e8 = (undefined1)param_2[3];
    uStack_1e7 = (undefined7)(param_2[3] >> 8);
    uStack_1f0 = (undefined1)param_2[2];
    uStack_1ef = (undefined7)(param_2[2] >> 8);
    puStack_1b0 = puVar1;
    puStack_1a8 = puVar4;
    func_0x000108871994(&puStack_2d0,&puStack_200);
    puVar13 = puStack_2d0;
  }
  puStack_200 = puVar13;
  if (puStack_200 == (ulong *)0x2) {
    param_1[2] = puStack_2c0;
    param_1[1] = puStack_2c8;
    param_1[3] = puStack_2b8;
    *param_1 = 2;
    return;
  }
LAB_1013aaddc:
  param_1[4] = puStack_2b0;
  param_1[3] = puStack_2b8;
  param_1[6] = puStack_2a0;
  param_1[5] = puStack_2a8;
  param_1[8] = uStack_290;
  param_1[7] = uStack_298;
  param_1[10] = puStack_280;
  param_1[9] = uStack_288;
  if (((ulong)puStack_200 & 1) == 0) {
    puStack_2c0 = puVar4;
    puStack_2c8 = puVar1;
  }
  *param_1 = 1;
  param_1[1] = puStack_2c8;
  param_1[2] = puStack_2c0;
  return;
code_r0x0001013aa8a4:
  puStack_358 = puStack_250;
  puStack_360 = puStack_258;
  puStack_348 = puStack_240;
  puStack_350 = puStack_248;
  puStack_338 = puStack_230;
  puStack_340 = puStack_238;
  uStack_330 = uStack_228;
  if (puStack_398 == puStack_3a8) {
    func_0x000108919eb4(&puStack_3a8);
  }
  puVar21 = puStack_3a0 + (long)puVar27 * 7;
  puVar21[1] = (ulong)puStack_358;
  *puVar21 = (ulong)puStack_360;
  puVar21[3] = (ulong)puStack_348;
  puVar21[2] = (ulong)puStack_350;
  puVar21[5] = (ulong)puStack_338;
  puVar21[4] = (ulong)puStack_340;
  puVar21[6] = uStack_330;
  puStack_398 = (ulong *)((long)puVar27 + 1);
  bVar10 = puVar13 == puVar17;
  puVar27 = puVar13;
  puVar13 = puVar17;
  if (bVar10) goto LAB_1013aacb4;
  goto LAB_1013a9cb4;
}

