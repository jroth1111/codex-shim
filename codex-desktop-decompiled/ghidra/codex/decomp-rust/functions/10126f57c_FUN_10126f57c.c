
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10126f57c(undefined8 *param_1,ulong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int **ppiVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  int *in_x11;
  int *extraout_x11;
  int *extraout_x11_00;
  int *extraout_x11_01;
  int *extraout_x11_02;
  int *extraout_x11_03;
  int *extraout_x11_04;
  int *extraout_x11_05;
  int *extraout_x11_06;
  int *extraout_x11_07;
  int *extraout_x11_08;
  int *extraout_x11_09;
  int *extraout_x11_10;
  int *extraout_x11_11;
  int *extraout_x11_12;
  int *extraout_x11_13;
  int *extraout_x11_14;
  int *extraout_x11_15;
  int *extraout_x11_16;
  int *piVar20;
  int *piVar21;
  long lVar22;
  int *piVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int *piVar26;
  int *extraout_d0;
  undefined8 extraout_d0_00;
  undefined1 auVar27 [16];
  int *piStack_418;
  int *piStack_3b8;
  undefined8 *puStack_3a0;
  int *piStack_388;
  int *piStack_380;
  int *piStack_378;
  int *piStack_370;
  int *piStack_368;
  int *piStack_360;
  int *piStack_358;
  int *piStack_350;
  int *piStack_348;
  int *piStack_340;
  int *piStack_338;
  int *piStack_330;
  int *piStack_328;
  int *piStack_320;
  int *piStack_318;
  int *piStack_300;
  int *piStack_2f8;
  int *piStack_2e0;
  int *piStack_2d8;
  int *piStack_2d0;
  int *piStack_2c8;
  int *piStack_2c0;
  int *piStack_2b8;
  int *piStack_2b0;
  int *piStack_2a8;
  int *piStack_2a0;
  int *piStack_298;
  int *piStack_290;
  int *piStack_288;
  undefined1 uStack_280;
  int *piStack_270;
  int *piStack_268;
  int *piStack_260;
  int *piStack_258;
  int *piStack_250;
  int *piStack_248;
  int *piStack_240;
  int *piStack_238;
  int *piStack_230;
  int *piStack_228;
  int *piStack_220;
  int *piStack_210;
  int *piStack_208;
  int *piStack_200;
  int *piStack_1f8;
  int *piStack_1f0;
  int *piStack_1e8;
  int *piStack_1e0;
  int *piStack_1d8;
  int *piStack_1d0;
  int *piStack_1c8;
  int *piStack_1c0;
  int *piStack_1b8;
  int *piStack_1b0;
  int *piStack_1a8;
  int *piStack_1a0;
  int *piStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  int *piStack_178;
  undefined8 *puStack_170;
  int *piStack_168;
  int *piStack_160;
  int *piStack_150;
  int *piStack_148;
  int *piStack_140;
  int *piStack_130;
  int *piStack_128;
  int *piStack_120;
  int *piStack_118;
  int *piStack_110;
  int *piStack_108;
  int *piStack_100;
  int *piStack_f8;
  int *piStack_f0;
  int *piStack_e8;
  int *piStack_e0;
  undefined8 uStack_d8;
  int *piStack_d0;
  int *piStack_c8;
  int *piStack_c0;
  int *piStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  int *piStack_a0;
  int *piStack_98;
  int *piStack_90;
  int *piStack_88;
  int *piStack_80;
  undefined8 uStack_78;
  
  piVar1 = (int *)param_2[10];
  piVar3 = (int *)param_2[0xb];
  uVar15 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar15 = 6;
  }
  if ((long)uVar15 < 3) {
    if (uVar15 == 0) {
      if (param_2[1] == 0x8000000000000000) {
        piStack_208 = (int *)param_2[2];
        piStack_200 = (int *)param_2[3];
        piStack_210 = (int *)CONCAT71(piStack_210._1_7_,5);
        FUN_1087e3db0(&piStack_2e0,&piStack_210,&piStack_150,&UNK_10b219ab0);
        piVar20 = piStack_2e0;
      }
      else {
        func_0x00010880f544(&piStack_2e0);
        piVar20 = piStack_2e0;
      }
    }
    else if (uVar15 == 1) {
      piStack_268 = (int *)param_2[2];
      piStack_270 = (int *)param_2[1];
      piStack_258 = (int *)param_2[4];
      piStack_260 = (int *)param_2[3];
      auVar27 = func_0x00010612451c(&piStack_270);
      if ((auVar27._0_8_ & 1) == 0) {
        auVar27 = func_0x0001061247b8(&piStack_270);
        if ((auVar27._0_8_ & 1) == 0) {
          func_0x0001061249a4(&piStack_130,&piStack_270);
          if (((ulong)piStack_130 & 1) == 0) {
            __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                      (&piStack_d0,&piStack_270);
            if (((ulong)piStack_d0 & 1) == 0) {
              piStack_2e0 = (int *)0x0;
              FUN_100f1395c(&piStack_210,&piStack_2e0);
              piStack_2b8 = piStack_1e8;
              piStack_2c0 = piStack_1f0;
              piStack_2a8 = piStack_1d8;
              piStack_2b0 = piStack_1e0;
              piStack_298 = piStack_1c8;
              piStack_2a0 = piStack_1d0;
              piStack_290 = piStack_1c0;
              piStack_2d8 = piStack_208;
              piStack_2e0 = piStack_210;
              piStack_2c8 = piStack_1f8;
              piStack_2d0 = piStack_200;
              if (((ulong)piStack_270 & 0x7fffffffffffffff) != 0) {
                _free(piStack_268);
                piStack_210 = piStack_2e0;
              }
              goto LAB_101270524;
            }
            func_0x00010880bc00(&piStack_2e0,piStack_c0,piStack_b8);
          }
          else {
            func_0x0001087f7dd8(&piStack_2e0,piStack_120,piStack_118);
          }
        }
        else {
          piStack_210 = (int *)CONCAT71(piStack_210._1_7_,1);
          piStack_208 = auVar27._8_8_;
          FUN_1087e3db0(&piStack_2e0,&piStack_210,&piStack_150,&UNK_10b219ab0);
        }
      }
      else {
        piStack_210 = (int *)CONCAT71(piStack_210._1_7_,2);
        piStack_208 = auVar27._8_8_;
        FUN_1087e3db0(&piStack_2e0,&piStack_210,&piStack_150,&UNK_10b219ab0);
      }
      piVar20 = piStack_2e0;
      if (((ulong)piStack_270 & 0x7fffffffffffffff) != 0) {
        _free(piStack_268);
        piVar20 = piStack_2e0;
      }
    }
    else {
      piStack_c8 = (int *)param_2[2];
      piStack_d0 = (int *)param_2[1];
      piStack_c0 = (int *)param_2[3];
      uVar15 = func_0x0001061240c0(&piStack_d0);
      if ((uVar15 & 1) == 0) {
        piVar20 = (int *)_malloc(0x20);
        if (piVar20 == (int *)0x0) {
          func_0x0001087c9084(1,0x20);
LAB_1012706d4:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1012706d8);
          (*pcVar10)();
        }
        piVar20[2] = 0x696f702d;
        piVar20[3] = 0x6e20746e;
        piVar20[0] = 0x616f6c66;
        piVar20[1] = 0x676e6974;
        piVar20[6] = 0x6c667265;
        piVar20[7] = 0x6465776f;
        piVar20[4] = 0x65626d75;
        piVar20[5] = 0x766f2072;
        piStack_2c8 = (int *)0x20;
        piStack_2b0 = (int *)0x0;
        piStack_2b8 = (int *)0x20;
        piStack_2a0 = (int *)0x0;
        piStack_298 = (int *)0x0;
        piStack_2a8 = (int *)0x8;
        piStack_2c0 = piVar20;
        if (((ulong)piStack_d0 & 0x7fffffffffffffff) != 0) {
          _free(piStack_c8);
        }
        piStack_210 = (int *)0x0;
        goto LAB_101270524;
      }
      piStack_210 = (int *)CONCAT71(piStack_210._1_7_,3);
      piStack_208 = (int *)extraout_d0_00;
      FUN_1087e3db0(&piStack_2e0,&piStack_210,&piStack_150,&UNK_10b219ab0);
      piVar20 = piStack_2e0;
      if (((ulong)piStack_d0 & 0x7fffffffffffffff) != 0) {
        _free(piStack_c8);
        piVar20 = piStack_2e0;
      }
    }
  }
  else if ((long)uVar15 < 5) {
    if (uVar15 == 3) {
      piStack_210 = (int *)((ulong)CONCAT61(piStack_210._2_6_,(char)param_2[1]) << 8);
      FUN_1087e3db0(&piStack_2e0,&piStack_210,&piStack_150,&UNK_10b219ab0);
      piVar20 = piStack_2e0;
    }
    else {
      piStack_210 = (int *)CONCAT71(piStack_210._1_7_,0xb);
      FUN_1087e3db0(&piStack_2e0,&piStack_210,&piStack_150,&UNK_10b219ab0);
      piVar20 = piStack_2e0;
    }
  }
  else if (uVar15 == 5) {
    uVar15 = param_2[1];
    puVar4 = (undefined8 *)param_2[2];
    puVar16 = puVar4 + param_2[3] * 0xc;
    piStack_388 = (int *)0x0;
    piStack_380 = (int *)0x8;
    piStack_378 = (int *)0x0;
    puVar24 = puVar4;
    if (param_2[3] != 0) {
      puVar17 = (undefined8 *)((ulong)&piStack_270 | 8);
      ppiVar14 = &piStack_258;
      puStack_3a0 = puVar4;
      do {
        puVar25 = puStack_3a0 + 0xc;
        piVar20 = (int *)*puStack_3a0;
        puVar24 = puVar25;
        if (piVar20 == (int *)0x8000000000000006) break;
        piVar13 = (int *)puStack_3a0[10];
        piVar5 = (int *)puStack_3a0[0xb];
        piStack_2c0 = (int *)puStack_3a0[4];
        piStack_2c8 = (int *)puStack_3a0[3];
        piStack_2b0 = (int *)puStack_3a0[6];
        piStack_2b8 = (int *)puStack_3a0[5];
        piStack_2a0 = (int *)puStack_3a0[8];
        piStack_2a8 = (int *)puStack_3a0[7];
        piStack_298 = (int *)puStack_3a0[9];
        piStack_2d0 = (int *)puStack_3a0[2];
        piStack_2d8 = (int *)puStack_3a0[1];
        uVar18 = (ulong)piVar20 ^ 0x8000000000000000;
        if (-1 < (long)piVar20) {
          uVar18 = 6;
        }
        uStack_280 = 0;
        piStack_2e0 = piVar20;
        piStack_290 = piVar13;
        piStack_288 = piVar5;
        if ((long)uVar18 < 3) {
          if (uVar18 == 0) {
            if (piStack_2d8 == (int *)0x8000000000000000) {
              piStack_210 = (int *)CONCAT71(piStack_210._1_7_,5);
              piStack_208 = piStack_2d0;
              piStack_200 = piStack_2c8;
              FUN_1087e3db0(&piStack_270,&piStack_210,&piStack_150,&UNK_10b21bbb0);
              in_x11 = extraout_x11_03;
            }
            else {
              func_0x000108814cb8(&piStack_270,&piStack_2d8);
              in_x11 = extraout_x11_08;
            }
            goto LAB_10126ff7c;
          }
          if (uVar18 == 1) {
            piStack_128 = (int *)puStack_3a0[2];
            piStack_130 = (int *)puStack_3a0[1];
            piStack_118 = (int *)puStack_3a0[4];
            piStack_120 = (int *)puStack_3a0[3];
            auVar27 = func_0x00010612451c(&piStack_130);
            if ((auVar27._0_8_ & 1) == 0) {
              auVar27 = func_0x0001061247b8(&piStack_130);
              if ((auVar27._0_8_ & 1) == 0) {
                func_0x0001061249a4(&piStack_d0,&piStack_130);
                if (((ulong)piStack_d0 & 1) == 0) {
                  __ZN4toml2de6parser7devalue9DeInteger7to_u12817ha90a074fb71015bdE
                            (&piStack_210,&piStack_130);
                  if (((ulong)piStack_210 & 1) == 0) {
                    piVar20 = (int *)_malloc(0x19);
                    if (piVar20 != (int *)0x0) {
                      piVar20[2] = 0x626d756e;
                      piVar20[3] = 0x6f207265;
                      piVar20[0] = 0x65746e69;
                      piVar20[1] = 0x20726567;
                      *(undefined8 *)((long)piVar20 + 0x11) = 0x6465776f6c667265;
                      *(undefined8 *)((long)piVar20 + 9) = 0x766f207265626d75;
                      piStack_258 = (int *)0x19;
                      piStack_250 = piVar20;
                      piStack_240 = (int *)0x0;
                      piStack_248 = (int *)0x19;
                      piStack_238 = (int *)0x8;
                      piStack_230 = (int *)0x0;
                      piStack_228 = (int *)0x0;
                      piVar20 = piStack_128;
                      piVar21 = piStack_130;
                      goto joined_r0x00010127068c;
                    }
                    func_0x0001087c9084(1,0x19);
                    goto LAB_1012706d4;
                  }
                  func_0x000108807b18(&piStack_270,piStack_200,piStack_1f8);
                  in_x11 = extraout_x11_14;
                  piVar20 = piStack_128;
                  piVar21 = piStack_130;
                }
                else {
                  func_0x0001087f97e4(&piStack_270,piStack_c0,piStack_b8);
                  in_x11 = extraout_x11_12;
                  piVar20 = piStack_128;
                  piVar21 = piStack_130;
                }
              }
              else {
                piStack_210 = (int *)CONCAT71(piStack_210._1_7_,1);
                piStack_208 = auVar27._8_8_;
                FUN_1087e3db0(&piStack_270,&piStack_210,&piStack_150,&UNK_10b21bbb0);
                in_x11 = extraout_x11_09;
                piVar20 = piStack_128;
                piVar21 = piStack_130;
              }
            }
            else {
              piStack_210 = (int *)CONCAT71(piStack_210._1_7_,2);
              piStack_208 = auVar27._8_8_;
              FUN_1087e3db0(&piStack_270,&piStack_210,&piStack_150,&UNK_10b21bbb0);
              in_x11 = extraout_x11_00;
              piVar20 = piStack_128;
              piVar21 = piStack_130;
            }
joined_r0x00010126ff70:
            if (((ulong)piVar21 & 0x7fffffffffffffff) != 0) {
              _free(piVar20);
              in_x11 = extraout_x11_15;
            }
            goto LAB_10126ff7c;
          }
          piStack_c8 = (int *)puStack_3a0[2];
          piStack_d0 = (int *)puStack_3a0[1];
          piStack_c0 = (int *)puStack_3a0[3];
          uVar18 = func_0x0001061240c0(&piStack_d0);
          if ((uVar18 & 1) != 0) {
            piStack_210 = (int *)CONCAT71(piStack_210._1_7_,3);
            piStack_208 = extraout_d0;
            FUN_1087e3db0(&piStack_270,&piStack_210,&piStack_150,&UNK_10b21bbb0);
            in_x11 = extraout_x11_04;
            piVar20 = piStack_c8;
            piVar21 = piStack_d0;
            goto joined_r0x00010126ff70;
          }
          piVar20 = (int *)_malloc(0x20);
          if (piVar20 == (int *)0x0) {
            func_0x0001087c9084(1,0x20);
            goto LAB_1012706d4;
          }
          piVar20[2] = 0x696f702d;
          piVar20[3] = 0x6e20746e;
          piVar20[0] = 0x616f6c66;
          piVar20[1] = 0x676e6974;
          piVar20[6] = 0x6c667265;
          piVar20[7] = 0x6465776f;
          piVar20[4] = 0x65626d75;
          piVar20[5] = 0x766f2072;
          piStack_258 = (int *)0x20;
          piStack_250 = piVar20;
          piStack_240 = (int *)0x0;
          piStack_248 = (int *)0x20;
          piStack_238 = (int *)0x8;
          piStack_230 = (int *)0x0;
          piStack_228 = (int *)0x0;
          piVar20 = piStack_c8;
          piVar21 = piStack_d0;
joined_r0x00010127068c:
          piStack_228 = (int *)0x0;
          piStack_230 = (int *)0x0;
          piStack_238 = (int *)0x8;
          piStack_240 = (int *)0x0;
          piStack_270 = (int *)0x0;
          if (((ulong)piVar21 & 0x7fffffffffffffff) != 0) {
            piStack_240 = (int *)0x0;
            piStack_228 = (int *)0x0;
            piStack_230 = (int *)0x0;
            piStack_238 = (int *)0x8;
            piStack_270 = (int *)0x0;
            _free(piVar20);
          }
          piStack_208 = piStack_250;
          piStack_210 = piStack_258;
          piStack_1f8 = piStack_240;
          piStack_200 = piStack_248;
          piStack_1e8 = piStack_230;
          piStack_1f0 = piStack_238;
          piStack_1d8 = piStack_220;
          piStack_1e0 = piStack_228;
LAB_1012705ec:
          ppiVar14 = &piStack_210;
          piStack_2d0 = piVar5;
          piStack_2d8 = piVar13;
          piStack_210 = piStack_258;
          piStack_208 = piStack_250;
          piStack_200 = piStack_248;
          piStack_1f8 = piStack_240;
          piStack_1f0 = piStack_238;
          piStack_1e8 = piStack_230;
          piStack_1e0 = piStack_228;
          piStack_1d8 = piStack_220;
LAB_1012705f0:
          piStack_368 = ppiVar14[1];
          piStack_370 = *ppiVar14;
          piStack_358 = ppiVar14[3];
          piStack_360 = ppiVar14[2];
          piStack_318 = piStack_1e8;
          piStack_320 = piStack_1f0;
          piStack_2a0 = piStack_1e8;
          piStack_2a8 = piStack_1f0;
          piStack_290 = piStack_1d8;
          piStack_298 = piStack_1e0;
          piStack_2e0 = (int *)0x1;
          piStack_300 = piStack_370;
          piStack_2f8 = piStack_368;
          piStack_2c8 = piStack_370;
          piStack_2c0 = piStack_368;
          piStack_2b8 = piStack_360;
          piStack_2b0 = piStack_358;
          piStack_258 = piStack_210;
          piStack_250 = piStack_208;
          piStack_248 = piStack_200;
          piStack_240 = piStack_1f8;
          piStack_238 = piStack_1f0;
          piStack_230 = piStack_1e8;
          piStack_228 = piStack_1e0;
          piStack_220 = piStack_1d8;
          FUN_100cec868(&piStack_388);
          goto LAB_101270414;
        }
        if ((long)uVar18 < 5) {
          if (uVar18 == 3) {
            piStack_210 = (int *)((ulong)CONCAT61(piStack_210._2_6_,piStack_2d8._0_1_) << 8);
            FUN_1087e3db0(&piStack_270,&piStack_210,&piStack_150,&UNK_10b21bbb0);
            in_x11 = extraout_x11;
          }
          else {
            piStack_c8 = (int *)puStack_3a0[2];
            piStack_d0 = (int *)puStack_3a0[1];
            piStack_c0 = (int *)puStack_3a0[3];
            do {
              if ((int)piStack_d0 == 2) {
                piStack_250 = (int *)0x8000000000000000;
                piStack_268 = (int *)0x8000000000000000;
                piStack_270 = (int *)0x2;
                goto LAB_10126ff7c;
              }
              FUN_101509040(&piStack_210,&piStack_d0);
              in_x11 = extraout_x11_05;
            } while (piStack_210 == (int *)0x2);
            piStack_248 = piStack_1e8;
            piStack_250 = piStack_1f0;
            piStack_238 = piStack_1d8;
            piStack_240 = piStack_1e0;
            piStack_228 = piStack_1c8;
            piStack_230 = piStack_1d0;
            piStack_220 = piStack_1c0;
            piStack_268 = piStack_208;
            piStack_270 = piStack_210;
            piStack_258 = piStack_1f8;
            piStack_260 = piStack_200;
          }
        }
        else if (uVar18 == 5) {
          piVar21 = (int *)puStack_3a0[1];
          piVar6 = (int *)puStack_3a0[2];
          lVar22 = puStack_3a0[3];
          piVar26 = piVar6 + lVar22 * 0x18;
          piVar20 = piVar6;
          piStack_130 = piVar6;
          piStack_128 = piVar6;
          piStack_120 = piVar21;
          piStack_118 = piVar26;
          if (lVar22 == 0) {
LAB_10126f840:
            FUN_1087e427c(&piStack_210,0,&UNK_10b231e28,&UNK_10b20a590);
            piStack_248 = piStack_1e8;
            piStack_250 = piStack_1f0;
            piStack_238 = piStack_1d8;
            piStack_240 = piStack_1e0;
            piStack_228 = piStack_1c8;
            piStack_230 = piStack_1d0;
            piStack_220 = piStack_1c0;
            piStack_268 = piStack_208;
            piStack_270 = piStack_210;
            piStack_258 = piStack_1f8;
            piStack_260 = piStack_200;
            in_x11 = extraout_x11_01;
          }
          else {
            piVar20 = piVar6 + 0x18;
            piStack_128 = piVar20;
            if (*(int **)piVar6 == (int *)0x8000000000000006) goto LAB_10126f840;
            piVar23 = *(int **)(piVar6 + 0x14);
            piVar7 = *(int **)(piVar6 + 0x16);
            piStack_1f0 = *(int **)(piVar6 + 8);
            piStack_1f8 = *(int **)(piVar6 + 6);
            piStack_1e0 = *(int **)(piVar6 + 0xc);
            piStack_1e8 = *(int **)(piVar6 + 10);
            piStack_1d0 = *(int **)(piVar6 + 0x10);
            piStack_1d8 = *(int **)(piVar6 + 0xe);
            piStack_1c8 = *(int **)(piVar6 + 0x12);
            piStack_200 = *(int **)(piVar6 + 4);
            piStack_208 = *(int **)(piVar6 + 2);
            piStack_1b0 = (int *)((ulong)piStack_1b0 & 0xffffffffffffff00);
            piStack_210 = *(int **)piVar6;
            piStack_1c0 = piVar23;
            piStack_1b8 = piVar7;
            FUN_10160334c(&piStack_d0,&piStack_210);
            piVar9 = piStack_b8;
            piVar8 = piStack_c0;
            piVar11 = piStack_c8;
            if (piStack_d0 != (int *)0x2) {
              piStack_248 = piStack_a8;
              piStack_250 = piStack_b0;
              piStack_238 = piStack_98;
              piStack_240 = piStack_a0;
              piStack_228 = piStack_88;
              piStack_230 = piStack_90;
              piStack_220 = piStack_80;
              piStack_260 = piVar7;
              piStack_268 = piVar23;
              if (piStack_d0 != (int *)0x0) {
                piStack_260 = piStack_c0;
                piStack_268 = piStack_c8;
              }
              piStack_270 = piStack_d0;
              if (piStack_d0 < (int *)0x2) {
                piStack_270 = (int *)0x1;
              }
              piStack_258 = piStack_b8;
              in_x11 = piStack_c0;
              goto LAB_10126f880;
            }
            if (piStack_c8 == (int *)0x8000000000000001) goto LAB_10126f840;
            if (lVar22 == 1) {
LAB_10126fe2c:
              FUN_1087e427c(&piStack_210,1,&UNK_10b231e28,&UNK_10b20a590);
              piStack_248 = piStack_1e8;
              piStack_250 = piStack_1f0;
              piStack_238 = piStack_1d8;
              piStack_240 = piStack_1e0;
              piStack_228 = piStack_1c8;
              piStack_230 = piStack_1d0;
              piStack_220 = piStack_1c0;
              piStack_270 = piStack_210;
              piStack_260 = piStack_200;
              piStack_268 = piStack_208;
              piStack_258 = piStack_1f8;
              in_x11 = extraout_x11_10;
              if (((ulong)piVar11 & 0x7fffffffffffffff) != 0) {
LAB_10126fe78:
                _free(piVar8);
                in_x11 = extraout_x11_11;
              }
            }
            else {
              piVar20 = piVar6 + 0x30;
              piStack_128 = piVar20;
              if (*(int **)(piVar6 + 0x18) == (int *)0x8000000000000006) goto LAB_10126fe2c;
              piVar23 = *(int **)(piVar6 + 0x2c);
              piVar7 = *(int **)(piVar6 + 0x2e);
              piStack_1f0 = *(int **)(piVar6 + 0x20);
              piStack_1f8 = *(int **)(piVar6 + 0x1e);
              piStack_1e0 = *(int **)(piVar6 + 0x24);
              piStack_1e8 = *(int **)(piVar6 + 0x22);
              piStack_1d0 = *(int **)(piVar6 + 0x28);
              piStack_1d8 = *(int **)(piVar6 + 0x26);
              piStack_1c8 = *(int **)(piVar6 + 0x2a);
              piStack_200 = *(int **)(piVar6 + 0x1c);
              piStack_208 = *(int **)(piVar6 + 0x1a);
              piStack_1b0 = (int *)((ulong)piStack_1b0 & 0xffffffffffffff00);
              piStack_210 = *(int **)(piVar6 + 0x18);
              piStack_1c0 = piVar23;
              piStack_1b8 = piVar7;
              FUN_10061a998(&piStack_d0,&piStack_210);
              if (piStack_d0 != (int *)0x2) {
                piStack_248 = piStack_a8;
                piStack_250 = piStack_b0;
                piStack_238 = piStack_98;
                piStack_240 = piStack_a0;
                piStack_228 = piStack_88;
                piStack_230 = piStack_90;
                piStack_220 = piStack_80;
                piStack_268 = piStack_c8;
                piStack_260 = piStack_c0;
                if (((ulong)piStack_d0 & 1) == 0) {
                  piStack_268 = piVar23;
                  piStack_260 = piVar7;
                }
                piStack_258 = piStack_b8;
                piStack_270 = (int *)0x1;
                in_x11 = piStack_d0;
                if (((ulong)piVar11 & 0x7fffffffffffffff) == 0) goto LAB_10126f880;
                goto LAB_10126fe78;
              }
              in_x11 = (int *)0x8000000000000001;
              if (piStack_c8 == (int *)0x8000000000000001) goto LAB_10126fe2c;
              piStack_248 = piStack_c0;
              piStack_240 = piStack_b8;
              piStack_260 = piVar8;
              piStack_258 = piVar9;
              piStack_250 = piStack_c8;
              piStack_270 = (int *)0x2;
              piStack_268 = piVar11;
            }
          }
LAB_10126f880:
          lVar22 = ((ulong)((long)piVar26 - (long)piVar20) >> 5) * -0x5555555555555555 + 1;
          while (lVar22 = lVar22 + -1, lVar22 != 0) {
            FUN_100dfe50c(piVar20);
            in_x11 = extraout_x11_02;
            piVar20 = piVar20 + 0x18;
          }
          if (piVar21 != (int *)0x0) {
            _free(piVar6);
            in_x11 = extraout_x11_07;
          }
        }
        else {
          puVar2 = (undefined8 *)puStack_3a0[1];
          lVar22 = puStack_3a0[2];
          lVar19 = puStack_3a0[4];
          if ((lVar19 != 0) && (lVar19 * 9 != -0x11)) {
            _free(puStack_3a0[3] + lVar19 * -8 + -8);
            in_x11 = extraout_x11_06;
          }
          puStack_170 = puVar2 + lVar22 * 0x12;
          piStack_210 = (int *)0x8000000000000001;
          piStack_150 = (int *)0x8000000000000001;
          puStack_188 = puVar2;
          puStack_180 = puVar2;
          piStack_178 = piVar20;
          piStack_168 = piVar13;
          piStack_160 = piVar5;
          if (lVar22 == 0) {
            piStack_268 = (int *)0x8000000000000000;
            piStack_260 = (int *)0x8000000000000001;
            piStack_250 = (int *)0x8000000000000000;
            piStack_258 = in_x11;
          }
          else {
            piVar20 = (int *)0x8000000000000001;
            do {
              puVar2 = puStack_180 + 0x12;
              piVar21 = (int *)*puStack_180;
              if (piVar21 == (int *)0x8000000000000001) break;
              piVar6 = (int *)puStack_180[1];
              piVar23 = (int *)puStack_180[2];
              piVar26 = (int *)puStack_180[3];
              piVar7 = (int *)puStack_180[4];
              piStack_108 = (int *)puStack_180[10];
              piStack_110 = (int *)puStack_180[9];
              piStack_f8 = (int *)puStack_180[0xc];
              piStack_100 = (int *)puStack_180[0xb];
              piStack_e8 = (int *)puStack_180[0xe];
              piStack_f0 = (int *)puStack_180[0xd];
              uStack_d8 = puStack_180[0x10];
              piStack_e0 = (int *)puStack_180[0xf];
              piStack_128 = (int *)puStack_180[6];
              piStack_130 = (int *)puStack_180[5];
              piStack_118 = (int *)puStack_180[8];
              piStack_120 = (int *)puStack_180[7];
              puStack_180 = puVar2;
              piStack_d0 = piStack_130;
              piStack_c8 = piStack_128;
              piStack_c0 = piStack_120;
              piStack_b8 = piStack_118;
              piStack_b0 = piStack_110;
              piStack_a8 = piStack_108;
              piStack_a0 = piStack_100;
              piStack_98 = piStack_f8;
              piStack_90 = piStack_f0;
              piStack_88 = piStack_e8;
              piStack_80 = piStack_e0;
              uStack_78 = uStack_d8;
              if (piVar21 == (int *)0x8000000000000000) {
                if (piVar23 == (int *)0x6) {
                  iVar12 = 1;
                  if (*piVar6 != 0x5f796e61 || (short)piVar6[1] != 0x666f) {
                    iVar12 = 2;
                  }
                }
                else if (piVar23 == (int *)0x5) {
                  iVar12 = 2;
                  if (*piVar6 == 0x656b6f74 && (char)piVar6[1] == 'n') {
                    iVar12 = 0;
                  }
                }
                else {
LAB_10126fb9c:
                  iVar12 = 2;
                }
              }
              else if (piVar23 == (int *)0x0) {
                iVar12 = 2;
              }
              else {
                piVar11 = (int *)_malloc(piVar23);
                if (piVar11 == (int *)0x0) {
                  func_0x0001087c9084(1,piVar23);
                  goto LAB_1012706d4;
                }
                _memcpy(piVar11,piVar6,piVar23);
                iVar12 = 2;
                if (piVar23 == (int *)0x8000000000000000) goto LAB_10126fb9c;
                if (piVar23 == (int *)0x6) {
                  iVar12 = 1;
                  if (*piVar11 != 0x5f796e61 || (short)piVar11[1] != 0x666f) {
                    iVar12 = 2;
                  }
                }
                else if ((piVar23 == (int *)0x5) &&
                        (iVar12 = 2, *piVar11 == 0x656b6f74 && (char)piVar11[1] == 'n')) {
                  iVar12 = 0;
                }
                _free(piVar11);
              }
              if (piStack_210 != (int *)0x8000000000000001) {
                if (((ulong)piStack_210 & 0x7fffffffffffffff) != 0) {
                  _free(piStack_208);
                }
                FUN_100dfe50c(&piStack_1e8);
              }
              piStack_1c0 = piStack_a8;
              piStack_1c8 = piStack_b0;
              piStack_1b0 = piStack_98;
              piStack_1b8 = piStack_a0;
              piStack_1a0 = piStack_88;
              piStack_1a8 = piStack_90;
              uStack_190 = uStack_78;
              piStack_198 = piStack_80;
              piStack_1e0 = piStack_c8;
              piStack_1e8 = piStack_d0;
              piStack_1d0 = piStack_b8;
              piStack_1d8 = piStack_c0;
              piStack_210 = piVar21;
              piStack_208 = piVar6;
              piStack_200 = piVar23;
              piStack_1f8 = piVar26;
              piStack_1f0 = piVar7;
              if (iVar12 == 0) {
                if (piVar20 != (int *)0x8000000000000001) {
                  FUN_1087e4364(&piStack_d0,&UNK_108ca7cfe,5);
                  goto LAB_101270148;
                }
                FUN_100625804(&piStack_d0,&piStack_210);
                piStack_418 = piStack_b8;
                piVar21 = piStack_c0;
                piVar20 = piStack_c8;
                if (piStack_d0 == (int *)0x2) goto LAB_10126fa0c;
                piStack_268 = piStack_c8;
                piVar20 = (int *)0x8000000000000001;
                piStack_260 = piStack_c0;
                piStack_258 = piStack_b8;
LAB_101270168:
                piVar6 = piStack_148;
                piVar21 = piStack_150;
                piStack_270 = piStack_d0;
                piStack_250 = piStack_b0;
                piStack_248 = piStack_a8;
                piStack_240 = piStack_a0;
                piStack_238 = piStack_98;
                piStack_230 = piStack_90;
                piStack_228 = piStack_88;
                piStack_220 = piStack_80;
                if ((piStack_150 != (int *)0x8000000000000001) &&
                   (piStack_150 != (int *)0x8000000000000000)) {
                  if (piStack_140 != (int *)0x0) {
                    piVar26 = piStack_148 + 2;
                    piVar23 = piStack_140;
                    do {
                      if (*(long *)(piVar26 + -2) != 0) {
                        _free(*(undefined8 *)piVar26);
                      }
                      piVar26 = piVar26 + 6;
                      piVar23 = (int *)((long)piVar23 + -1);
                    } while (piVar23 != (int *)0x0);
                  }
                  if (piVar21 != (int *)0x0) {
                    _free(piVar6);
                  }
                }
                if ((-0x7fffffffffffffff < (long)piVar20) && (piVar20 != (int *)0x0)) {
                  _free(piStack_3b8);
                }
                goto LAB_10126fef8;
              }
              piVar21 = piStack_3b8;
              if (iVar12 == 1) {
                if (piStack_150 != (int *)0x8000000000000001) {
                  FUN_1087e4364(&piStack_d0,&UNK_108cac268,6);
LAB_101270148:
                  piStack_268 = piStack_c8;
                  piStack_258 = piStack_b8;
                  piStack_260 = piStack_c0;
                  goto LAB_101270168;
                }
                FUN_100620610(&piStack_d0,&piStack_210);
                piStack_128 = piStack_c0;
                piStack_130 = piStack_c8;
                piStack_120 = piStack_b8;
                if (piStack_d0 != (int *)0x2) {
                  puVar17[1] = piStack_c0;
                  *puVar17 = piStack_c8;
                  puVar17[2] = piStack_b8;
                  goto LAB_101270168;
                }
                piStack_148 = piStack_c0;
                piStack_150 = piStack_c8;
                piStack_140 = piStack_b8;
              }
              else {
                func_0x0001014e08dc(&piStack_d0,&piStack_210);
                if (piStack_d0 != (int *)0x2) goto LAB_101270148;
              }
LAB_10126fa0c:
              piStack_3b8 = piVar21;
              puVar2 = puStack_180;
            } while (puStack_180 != puStack_170);
            puStack_180 = puVar2;
            piStack_268 = (int *)0x8000000000000000;
            if (piVar20 != (int *)0x8000000000000001) {
              piStack_268 = piVar20;
            }
            piStack_260 = piStack_3b8;
            piStack_250 = (int *)0x8000000000000000;
            piStack_258 = piStack_418;
            if (piStack_150 != (int *)0x8000000000000001) {
              piStack_c8 = piStack_140;
              piStack_d0 = piStack_148;
              piStack_250 = piStack_150;
            }
          }
          piStack_240 = piStack_c8;
          piStack_248 = piStack_d0;
          piStack_270 = (int *)0x2;
LAB_10126fef8:
          FUN_100e1fd94(&piStack_210);
          in_x11 = extraout_x11_13;
        }
LAB_10126ff7c:
        piVar20 = piStack_378;
        if (piStack_270 != (int *)0x2) {
          piStack_208 = piStack_250;
          piStack_210 = piStack_258;
          piStack_1f8 = piStack_240;
          piStack_200 = piStack_248;
          piStack_1e8 = piStack_230;
          piStack_1f0 = piStack_238;
          piStack_1d8 = piStack_220;
          piStack_1e0 = piStack_228;
          piStack_2d0 = piStack_260;
          piStack_2d8 = piStack_268;
          if (((ulong)piStack_270 & 1) == 0) goto LAB_1012705ec;
          goto LAB_1012705f0;
        }
        piStack_368 = piStack_250;
        piStack_370 = piStack_258;
        piStack_358 = piStack_240;
        piStack_360 = piStack_248;
        if (piStack_268 == (int *)0x8000000000000001) break;
        piStack_348 = piStack_260;
        piStack_350 = piStack_268;
        piStack_340 = piStack_370;
        piStack_338 = piStack_368;
        piStack_330 = piStack_360;
        piStack_328 = piStack_358;
        if (piStack_378 == piStack_388) {
          func_0x000108919e4c(&piStack_388);
          in_x11 = extraout_x11_16;
        }
        piVar13 = piStack_380 + (long)piVar20 * 0xc;
        *(int **)(piVar13 + 2) = piStack_348;
        *(int **)piVar13 = piStack_350;
        *(int **)(piVar13 + 6) = piStack_338;
        *(int **)(piVar13 + 4) = piStack_340;
        *(int **)(piVar13 + 10) = piStack_328;
        *(int **)(piVar13 + 8) = piStack_330;
        piStack_378 = (int *)((long)piVar20 + 1);
        puVar24 = puVar16;
        puStack_3a0 = puVar25;
      } while (puVar25 != puVar16);
    }
    piStack_2d0 = piStack_380;
    piStack_2d8 = piStack_388;
    piStack_2c8 = piStack_378;
    piStack_2e0 = (int *)0x2;
    puVar25 = puVar24;
LAB_101270414:
    lVar22 = ((ulong)((long)puVar16 - (long)puVar25) >> 5) * -0x5555555555555555 + 1;
    while (lVar22 = lVar22 + -1, lVar22 != 0) {
      FUN_100dfe50c(puVar25);
      puVar25 = puVar25 + 0xc;
    }
    piVar20 = piStack_2e0;
    if (uVar15 != 0) {
      _free(puVar4);
      piVar20 = piStack_2e0;
    }
  }
  else {
    piStack_1e8 = (int *)param_2[5];
    piStack_1f0 = (int *)param_2[4];
    piStack_1d8 = (int *)param_2[7];
    piStack_1e0 = (int *)param_2[6];
    piStack_1c8 = (int *)param_2[9];
    piStack_1d0 = (int *)param_2[8];
    piStack_208 = (int *)param_2[1];
    piStack_210 = (int *)*param_2;
    piStack_1f8 = (int *)param_2[3];
    piStack_200 = (int *)param_2[2];
    piStack_1c0 = piVar1;
    piStack_1b8 = piVar3;
    func_0x000108872d8c(&piStack_2e0,&piStack_210);
    piVar20 = piStack_2e0;
  }
  piStack_210 = piVar20;
  if (piStack_210 == (int *)0x2) {
    param_1[2] = piStack_2d0;
    param_1[1] = piStack_2d8;
    param_1[3] = piStack_2c8;
    *param_1 = 2;
    return;
  }
LAB_101270524:
  param_1[4] = piStack_2c0;
  param_1[3] = piStack_2c8;
  param_1[6] = piStack_2b0;
  param_1[5] = piStack_2b8;
  param_1[8] = piStack_2a0;
  param_1[7] = piStack_2a8;
  param_1[10] = piStack_290;
  param_1[9] = piStack_298;
  if (((ulong)piStack_210 & 1) == 0) {
    piStack_2d8 = piVar1;
    piStack_2d0 = piVar3;
  }
  *param_1 = 1;
  param_1[1] = piStack_2d8;
  param_1[2] = piStack_2d0;
  return;
}

