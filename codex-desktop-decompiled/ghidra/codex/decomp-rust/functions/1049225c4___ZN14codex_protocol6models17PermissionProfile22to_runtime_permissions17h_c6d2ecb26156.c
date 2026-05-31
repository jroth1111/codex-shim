
/* WARNING: Type propagation algorithm not settling */

void __ZN14codex_protocol6models17PermissionProfile22to_runtime_permissions17h4b4f2f8c47dcf8d7E
               (ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined1 extraout_w1;
  undefined1 uVar8;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong *extraout_x8_01;
  long *extraout_x8_02;
  ulong uVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  int aiStack_3e0 [2];
  long lStack_3d8;
  long lStack_3d0;
  ulong *puStack_3c8;
  long lStack_3c0;
  char cStack_3b8;
  undefined8 *puStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 *puStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined7 uStack_357;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined1 ****ppppuStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 *puStack_2f8;
  ulong uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  ulong uStack_2b0;
  ulong uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined1 auStack_290 [16];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 ***pppuStack_270;
  undefined8 uStack_268;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong *puStack_238;
  ulong uStack_230;
  undefined1 uStack_228;
  ulong uStack_220;
  ulong *puStack_218;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 **ppuStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  
  uVar9 = *param_2;
  uVar15 = uVar9;
  if (uVar9 < 0x8000000000000001) {
    uVar15 = 0;
  }
  if ((uVar15 & 0x7fffffffffffffff) == 0) {
    if (uVar9 == 0x8000000000000000) {
      uVar15 = 0;
      uVar9 = 0;
      uVar17 = 0;
      uVar8 = 1;
      puVar7 = &uStack_b8;
      uVar12 = 8;
    }
    else {
      uVar15 = param_2[2];
      uVar9 = param_2[3];
      uVar17 = (ulong)(uVar9 != 0);
      if (uVar15 == 0) {
        uVar12 = 8;
      }
      else {
        uVar14 = param_2[1];
        lVar11 = uVar15 * 0x38;
        uVar12 = _malloc(lVar11);
        if (uVar12 == 0) {
          uVar2 = func_0x0001087c9084(8,lVar11);
          FUN_1049a918c(&uStack_b0);
          piVar3 = (int *)__Unwind_Resume(uVar2);
          uStack_c8 = 0x10492247c;
          bVar10 = *(byte *)(piVar3 + 10);
          uVar12 = (ulong)bVar10;
          if (1 < bVar10) {
            *(undefined1 *)(extraout_x8 + 1) = extraout_w1;
            *extraout_x8 = -0x7ffffffffffffffe;
            return;
          }
          if (bVar10 != 0) {
            lVar19 = -0x8000000000000000;
            goto LAB_104922570;
          }
          lVar19 = *(long *)(piVar3 + 8);
          if (lVar19 == 0) {
            puStack_158 = (undefined8 *)0x8;
          }
          else {
            lVar16 = *(long *)(piVar3 + 6);
            lVar13 = lVar19 * 0x38;
            uStack_110 = uVar9;
            uStack_108 = uVar17;
            uStack_100 = uVar15;
            uStack_f8 = uVar14;
            lStack_f0 = lVar11;
            puStack_d0 = &stack0xfffffffffffffff0;
            puVar4 = (undefined8 *)_malloc(lVar13);
            if (puVar4 == (undefined8 *)0x0) {
              uVar2 = func_0x0001087c9084(8,lVar13);
              uStack_150 = uVar9;
              FUN_1049a918c(&lStack_160);
              auVar20 = __Unwind_Resume(uVar2);
              uVar2 = auVar20._8_8_;
              puVar7 = auVar20._0_8_;
              uStack_178 = 0x1049225c4;
              uVar9 = *puVar7;
              uVar15 = uVar9;
              if (uVar9 < 0x8000000000000001) {
                uVar15 = 0;
              }
              if ((uVar15 & 0x7fffffffffffffff) != 0) {
                if ((uVar15 & 0x7fffffffffffffff) == 1) {
                  *extraout_x8_00 = 0x8000000000000000;
                  return;
                }
                uVar15 = puVar7[1];
                *extraout_x8_00 = 0x8000000000000002;
                *(char *)(extraout_x8_00 + 1) = (char)uVar15;
                return;
              }
              ppuStack_180 = &puStack_d0;
              if (uVar9 == 0x8000000000000000) {
                uVar9 = 0;
                puVar5 = &uStack_230;
                uStack_240 = 0;
                puStack_238 = (ulong *)0x8;
                uStack_228 = 1;
                uStack_250 = 0;
                goto LAB_104922714;
              }
              uVar15 = puVar7[2];
              uVar9 = puVar7[3];
              uStack_258 = (ulong)(uVar9 != 0);
              if (uVar15 == 0) {
                uStack_220 = 0;
                puStack_218 = (ulong *)0x8;
              }
              else {
                uVar17 = puVar7[1];
                lVar11 = uVar15 * 0x38;
                puVar5 = (ulong *)_malloc(lVar11);
                if (puVar5 == (ulong *)0x0) {
                  uVar6 = func_0x0001087c9084(8,lVar11);
                  FUN_1049a6bcc(&uStack_250);
                  uVar6 = __Unwind_Resume(uVar6);
                  FUN_1049a918c(&uStack_220);
                  puVar7 = (ulong *)__Unwind_Resume(uVar6);
                  uStack_268 = 0x10492284c;
                  uVar12 = *puVar7;
                  uVar15 = uVar12;
                  if (uVar12 < 0x8000000000000001) {
                    uVar15 = 0;
                  }
                  if ((uVar15 & 0x7fffffffffffffff) != 0) {
                    if ((uVar15 & 0x7fffffffffffffff) == 1) {
                      uVar8 = 1;
                    }
                    else {
                      uVar8 = 2;
                    }
                    *(undefined1 *)(extraout_x8_01 + 5) = uVar8;
                    *extraout_x8_01 = 0;
                    extraout_x8_01[2] = 0;
                    extraout_x8_01[3] = 8;
                    extraout_x8_01[4] = 0;
                    return;
                  }
                  if (uVar12 == 0x8000000000000000) {
                    uVar12 = 0;
                    uVar14 = 0;
                    extraout_x8_01[2] = 0;
                    extraout_x8_01[3] = 8;
                    uVar8 = 1;
                    lVar11 = 0x20;
                    goto LAB_104922974;
                  }
                  uVar15 = puVar7[2];
                  uVar12 = puVar7[3];
                  uVar14 = (ulong)(uVar12 != 0);
                  if (uVar15 == 0) {
                    uStack_300 = 0;
                    puStack_2f8 = (undefined8 *)0x8;
                  }
                  else {
                    uVar18 = puVar7[1];
                    lVar19 = uVar15 * 0x38;
                    uStack_2b0 = uVar9;
                    uStack_2a8 = uVar17;
                    lStack_2a0 = lVar16;
                    lStack_298 = lVar11;
                    uStack_280 = param_4;
                    uStack_278 = uVar6;
                    pppuStack_270 = &ppuStack_180;
                    auStack_290 = auVar20;
                    puVar4 = (undefined8 *)_malloc(lVar19);
                    if (puVar4 == (undefined8 *)0x0) {
                      uVar6 = func_0x0001087c9084(8,lVar19);
                      uStack_2f0 = uVar9;
                      FUN_1049a918c(&uStack_300);
                      puVar7 = (ulong *)__Unwind_Resume(uVar6);
                      uStack_308 = 0x1049229c0;
                      uVar17 = *puVar7 ^ 0x8000000000000000;
                      if (-1 < (long)*puVar7) {
                        uVar17 = 3;
                      }
                      uStack_350 = uVar9;
                      uStack_348 = uVar15;
                      uStack_340 = uVar14;
                      uStack_338 = uVar12;
                      uStack_330 = uVar18;
                      uStack_328 = uVar2;
                      lStack_320 = lVar19;
                      uStack_318 = uVar6;
                      ppppuStack_310 = &pppuStack_270;
                      if ((long)uVar17 < 2) {
                        if (uVar17 == 0) {
                          __ZN14codex_protocol11permissions23FileSystemSandboxPolicy34from_legacy_sandbox_policy_for_cwd17h74a0b781ff24ae74E
                                    (aiStack_3e0,puVar7);
                          lVar11 = 1;
                          bVar10 = 1;
                        }
                        else {
LAB_104922ac8:
                          __ZN14codex_protocol11permissions23FileSystemSandboxPolicy34from_legacy_sandbox_policy_for_cwd17h74a0b781ff24ae74E
                                    (aiStack_3e0,puVar7);
                          lVar19 = 0x18;
                          if (uVar17 != 3) {
                            lVar19 = 8;
                          }
                          lVar11 = 0;
                          bVar10 = *(byte *)((long)puVar7 + lVar19);
                        }
                        if (cStack_3b8 != '\0') goto LAB_104922af4;
LAB_104922a20:
                        lVar11 = lStack_3c0;
                        puVar7 = puStack_3c8;
                        if (lStack_3c0 == 0) {
                          puStack_398 = (undefined8 *)0x8;
                        }
                        else {
                          lVar19 = lStack_3c0 * 0x38;
                          puVar4 = (undefined8 *)_malloc(lVar19);
                          if (puVar4 == (undefined8 *)0x0) {
                            func_0x0001087c9084(8,lVar19);
                    /* WARNING: Does not return */
                            pcVar1 = (code *)SoftwareBreakpoint(1,0x104922c7c);
                            (*pcVar1)();
                          }
                          lVar16 = 0;
                          lStack_3a0 = lVar11;
                          puStack_398 = puVar4;
                          do {
                            if (lVar19 == 0) break;
                            FUN_1049d0944(&uStack_388,puVar7);
                            lVar16 = lVar16 + 1;
                            uStack_358 = (undefined1)puVar7[6];
                            puVar7 = puVar7 + 7;
                            puVar4[1] = uStack_380;
                            *puVar4 = uStack_388;
                            puVar4[3] = uStack_370;
                            puVar4[2] = uStack_378;
                            puVar4[5] = uStack_360;
                            puVar4[4] = uStack_368;
                            puVar4[6] = CONCAT71(uStack_357,uStack_358);
                            lVar19 = lVar19 + -0x38;
                            puVar4 = puVar4 + 7;
                          } while (lVar11 != lVar16);
                        }
                        lStack_390 = lVar11;
                        lStack_3a8 = lVar11;
                        puStack_3b0 = puStack_398;
                        if (aiStack_3e0[0] == 0) {
                          lStack_3d8 = 0;
                        }
                      }
                      else {
                        if (uVar17 != 2) goto LAB_104922ac8;
                        __ZN14codex_protocol11permissions23FileSystemSandboxPolicy34from_legacy_sandbox_policy_for_cwd17h74a0b781ff24ae74E
                                  (aiStack_3e0,puVar7);
                        bVar10 = (byte)puVar7[1];
                        lVar11 = 0;
                        if (cStack_3b8 == '\0') goto LAB_104922a20;
LAB_104922af4:
                        lStack_3d8 = lVar11;
                        puVar5 = puStack_3c8;
                        lVar11 = lStack_3c0;
                        puVar7 = puStack_3c8;
                        if (cStack_3b8 != '\x01') {
                          *(byte *)(extraout_x8_02 + 1) = bVar10 & 1;
                          *extraout_x8_02 = -0x7ffffffffffffffe;
                          goto joined_r0x000104922b0c;
                        }
                        if ((int)lStack_3d8 != 0) {
                          *extraout_x8_02 = -0x7fffffffffffffff;
                          goto joined_r0x000104922b0c;
                        }
                        lVar11 = -0x8000000000000000;
                      }
                      *extraout_x8_02 = lVar11;
                      extraout_x8_02[2] = lStack_3a8;
                      extraout_x8_02[1] = (long)puStack_3b0;
                      extraout_x8_02[3] = lStack_3d8;
                      *(byte *)(extraout_x8_02 + 4) = bVar10 & 1;
                      puVar5 = puStack_3c8;
                      lVar11 = lStack_3c0;
                      puVar7 = puStack_3c8;
joined_r0x000104922b0c:
                      do {
                        if (lVar11 == 0) {
                          if (lStack_3d0 == 0) {
                            return;
                          }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)PTR__free_10b61b0a8)(puVar7);
                          return;
                        }
                        uVar15 = *puVar5;
                        lVar19 = uVar15 + 0x7ffffffffffffffb;
                        if (uVar15 < 0x8000000000000005) {
                          lVar19 = 2;
                        }
                        if ((lVar19 == 0) || (lVar19 == 1)) {
                          uVar15 = puVar5[1];
joined_r0x000104922ba0:
                          if (uVar15 != 0) {
                            lVar19 = 0x10;
LAB_104922ba8:
                            _free(*(undefined8 *)((long)puVar5 + lVar19));
                          }
                        }
                        else {
                          uVar9 = uVar15 ^ 0x8000000000000000;
                          if (-1 < (long)uVar15) {
                            uVar9 = 5;
                          }
                          if (uVar9 < 5) {
                            if (uVar9 == 2) {
                              uVar15 = puVar5[1] & 0x7fffffffffffffff;
                              goto joined_r0x000104922ba0;
                            }
                          }
                          else {
                            if (uVar15 != 0) {
                              _free(puVar5[1]);
                            }
                            if ((puVar5[3] & 0x7fffffffffffffff) != 0) {
                              lVar19 = 0x20;
                              goto LAB_104922ba8;
                            }
                          }
                        }
                        puVar5 = puVar5 + 7;
                        lVar11 = lVar11 + -1;
                      } while( true );
                    }
                    uVar9 = 0;
                    uStack_300 = uVar15;
                    puStack_2f8 = puVar4;
                    do {
                      if (lVar19 == 0) break;
                      FUN_1049d0944(&uStack_2e8,uVar18);
                      uVar9 = uVar9 + 1;
                      uStack_2b8 = *(undefined1 *)(uVar18 + 0x30);
                      uVar18 = uVar18 + 0x38;
                      puVar4[1] = uStack_2e0;
                      *puVar4 = uStack_2e8;
                      puVar4[3] = uStack_2d0;
                      puVar4[2] = uStack_2d8;
                      puVar4[5] = uStack_2c0;
                      puVar4[4] = uStack_2c8;
                      puVar4[6] = CONCAT71(uStack_2b7,uStack_2b8);
                      lVar19 = lVar19 + -0x38;
                      puVar4 = puVar4 + 7;
                    } while (uVar15 != uVar9);
                  }
                  uVar8 = 0;
                  extraout_x8_01[3] = (ulong)puStack_2f8;
                  extraout_x8_01[2] = uStack_300;
                  extraout_x8_01[4] = uVar15;
                  lVar11 = 8;
LAB_104922974:
                  *(ulong *)((long)extraout_x8_01 + lVar11) = uVar12;
                  *(undefined1 *)(extraout_x8_01 + 5) = uVar8;
                  *extraout_x8_01 = uVar14;
                  return;
                }
                uVar12 = 0;
                uStack_220 = uVar15;
                puStack_218 = puVar5;
                do {
                  if (lVar11 == 0) break;
                  FUN_1049d0944(&uStack_208,uVar17);
                  uVar12 = uVar12 + 1;
                  uStack_1d8 = *(undefined1 *)(uVar17 + 0x30);
                  uVar17 = uVar17 + 0x38;
                  puVar5[1] = uStack_200;
                  *puVar5 = uStack_208;
                  puVar5[3] = uStack_1f0;
                  puVar5[2] = uStack_1f8;
                  puVar5[5] = uStack_1e0;
                  puVar5[4] = uStack_1e8;
                  puVar5[6] = CONCAT71(uStack_1d7,uStack_1d8);
                  lVar11 = lVar11 + -0x38;
                  puVar5 = puVar5 + 7;
                } while (uVar15 != uVar12);
              }
              uStack_228 = 0;
              puVar5 = &uStack_248;
              puStack_238 = puStack_218;
              uStack_240 = uStack_220;
              uStack_250 = uStack_258;
              uStack_230 = uVar15;
LAB_104922714:
              *puVar5 = uVar9;
              __ZN14codex_protocol11permissions23FileSystemSandboxPolicy24to_legacy_sandbox_policy17h82b1c3fcc1b81cc7E
                        (extraout_x8_00,&uStack_250,(char)puVar7[4],uVar2,param_4);
              puVar5 = puStack_238;
              puVar7 = puStack_238;
              uVar15 = uStack_230;
              do {
                if (uVar15 == 0) {
                  if (uStack_240 != 0) {
                    _free(puVar5);
                  }
                  return;
                }
                uVar9 = *puVar7;
                lVar11 = uVar9 + 0x7ffffffffffffffb;
                if (uVar9 < 0x8000000000000005) {
                  lVar11 = 2;
                }
                if ((lVar11 == 0) || (lVar11 == 1)) {
                  uVar9 = puVar7[1];
joined_r0x00010492275c:
                  if (uVar9 != 0) {
                    lVar11 = 0x10;
LAB_104922764:
                    _free(*(undefined8 *)((long)puVar7 + lVar11));
                  }
                }
                else {
                  uVar17 = uVar9 ^ 0x8000000000000000;
                  if (-1 < (long)uVar9) {
                    uVar17 = 5;
                  }
                  if (uVar17 < 5) {
                    if (uVar17 == 2) {
                      uVar9 = puVar7[1] & 0x7fffffffffffffff;
                      goto joined_r0x00010492275c;
                    }
                  }
                  else {
                    if (uVar9 != 0) {
                      _free(puVar7[1]);
                    }
                    if ((puVar7[3] & 0x7fffffffffffffff) != 0) {
                      lVar11 = 0x20;
                      goto LAB_104922764;
                    }
                  }
                }
                puVar7 = puVar7 + 7;
                uVar15 = uVar15 - 1;
              } while( true );
            }
            lVar11 = 0;
            lStack_160 = lVar19;
            puStack_158 = puVar4;
            do {
              if (lVar13 == 0) break;
              FUN_1049d0944(&uStack_148,lVar16);
              lVar11 = lVar11 + 1;
              uStack_118 = *(undefined1 *)(lVar16 + 0x30);
              lVar16 = lVar16 + 0x38;
              puVar4[1] = uStack_140;
              *puVar4 = uStack_148;
              puVar4[3] = uStack_130;
              puVar4[2] = uStack_138;
              puVar4[5] = uStack_120;
              puVar4[4] = uStack_128;
              puVar4[6] = CONCAT71(uStack_117,uStack_118);
              lVar13 = lVar13 + -0x38;
              puVar4 = puVar4 + 7;
            } while (lVar19 != lVar11);
          }
          puStack_170 = puStack_158;
          uVar12 = *(ulong *)(piVar3 + 2);
          lStack_168 = lVar19;
          if (*piVar3 == 0) {
            uVar12 = 0;
          }
LAB_104922570:
          *extraout_x8 = lVar19;
          extraout_x8[2] = lStack_168;
          extraout_x8[1] = (long)puStack_170;
          extraout_x8[3] = uVar12;
          *(undefined1 *)(extraout_x8 + 4) = extraout_w1;
          return;
        }
        lVar19 = 0;
        uVar18 = 0;
        uStack_b0 = uVar15;
        uStack_a8 = uVar12;
        do {
          if (lVar11 == lVar19) break;
          FUN_1049d0944(&uStack_98,uVar14);
          uVar18 = uVar18 + 1;
          uStack_68 = *(undefined1 *)(uVar14 + 0x30);
          uVar14 = uVar14 + 0x38;
          puVar7 = (ulong *)(uVar12 + lVar19);
          puVar7[1] = uStack_90;
          *puVar7 = uStack_98;
          puVar7[3] = uStack_80;
          puVar7[2] = uStack_88;
          puVar7[5] = uStack_70;
          puVar7[4] = uStack_78;
          puVar7[6] = CONCAT71(uStack_67,uStack_68);
          lVar19 = lVar19 + 0x38;
        } while (uVar15 != uVar18);
      }
      uVar8 = 0;
      puVar7 = &uStack_98;
      uStack_b8 = uVar15;
    }
    *puVar7 = uVar9;
    lVar11 = 0x20;
  }
  else {
    uStack_b8 = 0;
    uVar12 = 8;
    uStack_98 = 0x8000000000000000;
    if ((uVar15 & 0x7fffffffffffffff) == 1) {
      uVar15 = 0;
      uVar17 = 0;
      bVar10 = 1;
      uVar8 = 1;
      goto LAB_104922420;
    }
    uVar8 = 2;
    uVar15 = 0;
    uVar17 = 0;
    lVar11 = 8;
  }
  bVar10 = *(byte *)((long)param_2 + lVar11);
LAB_104922420:
  *param_1 = uVar17;
  param_1[1] = uStack_98;
  param_1[2] = uVar15;
  param_1[3] = uVar12;
  param_1[4] = uStack_b8;
  *(undefined1 *)(param_1 + 5) = uVar8;
  *(byte *)(param_1 + 6) = bVar10 & 1;
  return;
}

