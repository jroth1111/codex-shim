
void FUN_101146714(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 extraout_x1;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  long *plVar31;
  undefined1 auVar32 [16];
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  long lStack_3d8;
  long lStack_3b8;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_118;
  long *plStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  long lStack_78;
  long lStack_70;
  
  if (param_3 == 0) {
    lStack_78 = 0;
    lStack_70 = 8;
LAB_1011467c0:
    param_1[1] = lStack_70;
    *param_1 = lStack_78;
    param_1[2] = param_3;
    return;
  }
  lVar20 = param_3 * 0x18;
  lVar25 = param_3;
  lStack_70 = _malloc(lVar20);
  if (lStack_70 != 0) {
    lVar25 = 0;
    plVar27 = (long *)(lStack_70 + 0x10);
    lStack_78 = param_3;
    do {
      if (lVar20 == 0) break;
      uVar5 = *(undefined8 *)(param_2 + 8);
      lVar19 = *(long *)(param_2 + 0x10);
      if (lVar19 == 0) {
        lVar4 = 1;
      }
      else {
        lVar4 = _malloc(lVar19);
        if (lVar4 == 0) {
          func_0x0001087c9084(1,lVar19);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1011467fc);
          (*pcVar3)();
        }
      }
      _memcpy(lVar4,uVar5,lVar19);
      lVar25 = lVar25 + 1;
      param_2 = param_2 + 0x18;
      plVar27[-2] = lVar19;
      plVar27[-1] = lVar4;
      *plVar27 = lVar19;
      lVar20 = lVar20 + -0x18;
      plVar27 = plVar27 + 3;
    } while (param_3 != lVar25);
    goto LAB_1011467c0;
  }
  uVar5 = func_0x0001087c9084(8,lVar20);
  FUN_100e1ad68(&lStack_78);
  auVar32 = __Unwind_Resume(uVar5);
  plVar27 = auVar32._0_8_;
  if (lVar25 == 0) {
    lStack_118 = 0;
    plStack_110 = (long *)0x8;
LAB_101146958:
    plVar27[1] = (long)plStack_110;
    *plVar27 = lStack_118;
    plVar27[2] = lVar25;
    return;
  }
  lVar19 = lVar25 << 5;
  lVar20 = lVar25;
  plStack_110 = (long *)_malloc(lVar19);
  if (plStack_110 != (long *)0x0) {
    lVar20 = 0;
    puVar29 = (undefined8 *)(auVar32._8_8_ + 0x18);
    plVar13 = plStack_110;
    lStack_118 = lVar25;
    do {
      if (lVar19 == 0) break;
      uVar15 = puVar29[-3] ^ 0x8000000000000000;
      if (-1 < (long)puVar29[-3]) {
        uVar15 = 3;
      }
      if ((long)uVar15 < 3) {
        if (uVar15 == 0) {
          lStack_100 = -0x8000000000000000;
        }
        else if (uVar15 == 1) {
          lStack_100 = -0x7fffffffffffffff;
        }
        else {
          FUN_101146714(&lStack_f8,puVar29[-1],*puVar29);
          lStack_100 = -0x7ffffffffffffffe;
        }
      }
      else if (uVar15 == 3) {
        uVar5 = puVar29[-2];
        lStack_100 = puVar29[-1];
        if (lStack_100 == 0) {
          lVar4 = 1;
        }
        else {
          lVar4 = _malloc(lStack_100);
          if (lVar4 == 0) {
            func_0x0001087c9084(1,lStack_100);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101146998);
            (*pcVar3)();
          }
        }
        _memcpy(lVar4,uVar5,lStack_100);
        uStack_e8 = *(undefined1 *)puVar29;
        lStack_f8 = lVar4;
        lStack_f0 = lStack_100;
      }
      else if (uVar15 == 4) {
        lStack_100 = -0x7ffffffffffffffc;
      }
      else {
        lStack_100 = -0x7ffffffffffffffb;
      }
      lVar20 = lVar20 + 1;
      plVar13[1] = lStack_f8;
      *plVar13 = lStack_100;
      plVar13[3] = CONCAT71(uStack_e7,uStack_e8);
      plVar13[2] = lStack_f0;
      puVar29 = puVar29 + 4;
      lVar19 = lVar19 + -0x20;
      plVar13 = plVar13 + 4;
    } while (lVar25 != lVar20);
    goto LAB_101146958;
  }
  uVar5 = func_0x0001087c9084(8,lVar19);
  FUN_100cf15c8(&lStack_118);
  uVar5 = __Unwind_Resume(uVar5);
  FUN_100cf15c8(&lStack_118);
  auVar32 = __Unwind_Resume(uVar5);
  lVar25 = auVar32._8_8_;
  plVar27 = auVar32._0_8_;
  if (lVar20 == 0) {
    lStack_368 = 0;
    lStack_360 = 8;
LAB_1011470f4:
    plVar27[1] = lStack_360;
    *plVar27 = lStack_368;
    plVar27[2] = lVar20;
    return;
  }
  lVar19 = lVar20;
  lVar4 = _malloc(lVar20 * 200);
  if (lVar4 != 0) {
    lVar19 = 0;
    lVar12 = lVar25 + lVar20 * 200;
    uStack_358 = 0;
    lVar17 = lVar20;
    lStack_368 = lVar20;
    lStack_360 = lVar4;
    do {
      if (lVar25 == lVar12) break;
      uVar2 = *(undefined1 *)(lVar25 + 0xc0);
      uVar5 = *(undefined8 *)(lVar25 + 8);
      lVar1 = *(long *)(lVar25 + 0x10);
      if (lVar1 == 0) {
        lVar6 = 1;
      }
      else {
        lVar6 = _malloc(lVar1);
        if (lVar6 == 0) {
          func_0x0001087c9084(1,lVar1);
          goto LAB_101147254;
        }
      }
      _memcpy(lVar6,uVar5,lVar1);
      lVar22 = -0x8000000000000000;
      if (*(long *)(lVar25 + 0x18) != -0x8000000000000000) {
        uVar5 = *(undefined8 *)(lVar25 + 0x20);
        lVar22 = *(long *)(lVar25 + 0x28);
        if (lVar22 == 0) {
          lStack_3b8 = 1;
        }
        else {
          lStack_3b8 = _malloc(lVar22);
          if (lStack_3b8 == 0) {
            func_0x0001087c9084(1,lVar22);
            goto LAB_101147254;
          }
        }
        _memcpy(lStack_3b8,uVar5,lVar22);
      }
      lVar23 = -0x8000000000000000;
      if (*(long *)(lVar25 + 0x30) != -0x8000000000000000) {
        lVar23 = *(long *)(lVar25 + 0x40);
        if (lVar23 == 0) {
          lStack_1d0 = 0;
          lStack_1c8 = 8;
        }
        else {
          lVar28 = *(long *)(lVar25 + 0x38);
          lVar7 = _malloc(lVar23 * 0x30);
          if (lVar7 == 0) {
            func_0x0001087c9084(8,lVar23 * 0x30);
            goto LAB_101147254;
          }
          lVar16 = 0;
          lVar14 = lVar28 + lVar23 * 0x30;
          lVar24 = lVar23;
          lStack_1d0 = lVar23;
          lStack_1c8 = lVar7;
          do {
            if (lVar28 == lVar14) break;
            uVar5 = *(undefined8 *)(lVar28 + 8);
            lVar11 = *(long *)(lVar28 + 0x10);
            if (lVar11 == 0) {
              lVar8 = 1;
            }
            else {
              lVar8 = _malloc(lVar11);
              if (lVar8 == 0) {
                func_0x0001087c9084(1,lVar11);
                goto LAB_101147254;
              }
            }
            _memcpy(lVar8,uVar5,lVar11);
            lVar26 = *(long *)(lVar28 + 0x28);
            if (lVar26 == 0) {
              lStack_350 = 0;
              lStack_348 = 8;
            }
            else {
              lVar21 = *(long *)(lVar28 + 0x20);
              lVar18 = lVar26 * 0x18;
              lVar9 = _malloc(lVar18);
              if (lVar9 == 0) {
                func_0x0001087c9084(8,lVar18);
                goto LAB_101147254;
              }
              lVar30 = 0;
              plVar13 = (long *)(lVar9 + 0x10);
              lStack_350 = lVar26;
              lStack_348 = lVar9;
              do {
                if (lVar18 == 0) break;
                uVar5 = *(undefined8 *)(lVar21 + 8);
                lVar9 = *(long *)(lVar21 + 0x10);
                if (lVar9 == 0) {
                  lVar10 = 1;
                }
                else {
                  lVar10 = _malloc(lVar9);
                  if (lVar10 == 0) {
                    func_0x0001087c9084(1,lVar9);
                    goto LAB_101147254;
                  }
                }
                _memcpy(lVar10,uVar5,lVar9);
                lVar30 = lVar30 + 1;
                lVar21 = lVar21 + 0x18;
                plVar13[-2] = lVar9;
                plVar13[-1] = lVar10;
                *plVar13 = lVar9;
                lVar18 = lVar18 + -0x18;
                plVar13 = plVar13 + 3;
              } while (lVar26 != lVar30);
            }
            lVar28 = lVar28 + 0x30;
            lStack_1a8 = lStack_348;
            lStack_1b0 = lStack_350;
            lVar21 = lVar16 * 0x30;
            lVar16 = lVar16 + 1;
            plVar13 = (long *)(lVar7 + lVar21);
            *plVar13 = lVar11;
            plVar13[1] = lVar8;
            plVar13[2] = lVar11;
            plVar13[4] = lStack_348;
            plVar13[3] = lStack_350;
            plVar13[5] = lVar26;
            lVar24 = lVar24 + -1;
            lStack_1a0 = lVar26;
          } while (lVar24 != 0);
        }
        lStack_228 = lStack_1c8;
        lStack_230 = lStack_1d0;
        lVar28 = *(long *)(lVar25 + 0x58);
        lStack_220 = lVar23;
        if (lVar28 == 0) {
          lStack_350 = 0;
          lStack_348 = 8;
        }
        else {
          lVar23 = *(long *)(lVar25 + 0x50);
          lVar16 = lVar28 * 0x48;
          lVar7 = _malloc(lVar16);
          if (lVar7 == 0) {
            func_0x0001087c9084(8,lVar16);
            goto LAB_101147254;
          }
          lVar24 = 0;
          plVar13 = (long *)(lVar23 + 0x40);
          plVar31 = (long *)(lVar7 + 0x20);
          lStack_350 = lVar28;
          lStack_348 = lVar7;
          do {
            if (lVar16 == 0) break;
            uVar5 = *(undefined8 *)(lVar23 + 8);
            lVar7 = *(long *)(lVar23 + 0x10);
            if (lVar7 == 0) {
              lVar11 = 1;
              _memcpy(1,uVar5,0);
              uVar5 = *(undefined8 *)(lVar23 + 0x20);
              lVar14 = *(long *)(lVar23 + 0x28);
              if (lVar14 != 0) goto LAB_101146e0c;
LAB_101146e3c:
              lVar8 = 1;
            }
            else {
              lVar11 = _malloc(lVar7);
              if (lVar11 == 0) {
                func_0x0001087c9084(1,lVar7);
                goto LAB_101147254;
              }
              _memcpy(lVar11,uVar5,lVar7);
              uVar5 = *(undefined8 *)(lVar23 + 0x20);
              lVar14 = *(long *)(lVar23 + 0x28);
              if (lVar14 == 0) goto LAB_101146e3c;
LAB_101146e0c:
              lVar8 = _malloc(lVar14);
              if (lVar8 == 0) {
                func_0x0001087c9084(1,lVar14);
                goto LAB_101147254;
              }
            }
            _memcpy(lVar8,uVar5,lVar14);
            lVar26 = -0x8000000000000000;
            if (*(long *)(lVar23 + 0x30) != -0x8000000000000000) {
              lVar21 = plVar13[-1];
              lVar26 = *plVar13;
              if (lVar26 == 0) {
                lStack_370 = 1;
              }
              else {
                lStack_370 = _malloc(lVar26,lVar21);
                if (lStack_370 == 0) {
                  func_0x0001087c9084(1,lVar26);
                  goto LAB_101147254;
                }
              }
              _memcpy(lStack_370,lVar21,lVar26);
              lStack_378 = lVar26;
            }
            lVar23 = lVar23 + 0x48;
            lVar24 = lVar24 + 1;
            plVar31[-4] = lVar7;
            plVar31[-3] = lVar11;
            plVar31[-2] = lVar7;
            plVar31[-1] = lVar14;
            *plVar31 = lVar8;
            plVar31[1] = lVar14;
            plVar13 = plVar13 + 9;
            lVar16 = lVar16 + -0x48;
            plVar31[2] = lVar26;
            plVar31[3] = lStack_370;
            plVar31[4] = lStack_378;
            plVar31 = plVar31 + 9;
          } while (lVar28 != lVar24);
        }
        lStack_208 = lStack_348;
        lStack_210 = lStack_350;
        lVar23 = *(long *)(lVar25 + 0x70);
        lStack_200 = lVar28;
        if (lVar23 == 0) {
          lStack_350 = 0;
          lStack_348 = 8;
        }
        else {
          lVar28 = *(long *)(lVar25 + 0x68);
          lVar16 = lVar23 * 0x18;
          lVar7 = _malloc(lVar16);
          if (lVar7 == 0) {
            func_0x0001087c9084(8,lVar16);
            goto LAB_101147254;
          }
          lVar24 = 0;
          plVar13 = (long *)(lVar7 + 0x10);
          lStack_350 = lVar23;
          lStack_348 = lVar7;
          do {
            if (lVar16 == 0) break;
            uVar5 = *(undefined8 *)(lVar28 + 8);
            lVar7 = *(long *)(lVar28 + 0x10);
            if (lVar7 == 0) {
              lVar14 = 1;
            }
            else {
              lVar14 = _malloc(lVar7);
              if (lVar14 == 0) {
                func_0x0001087c9084(1,lVar7);
                goto LAB_101147254;
              }
            }
            _memcpy(lVar14,uVar5,lVar7);
            lVar24 = lVar24 + 1;
            lVar28 = lVar28 + 0x18;
            plVar13[-2] = lVar7;
            plVar13[-1] = lVar14;
            *plVar13 = lVar7;
            lVar16 = lVar16 + -0x18;
            plVar13 = plVar13 + 3;
          } while (lVar23 != lVar24);
        }
        lStack_1e8 = lStack_348;
        lStack_1f0 = lStack_350;
        lVar28 = *(long *)(lVar25 + 0x88);
        lStack_1e0 = lVar23;
        if (lVar28 == 0) {
          lStack_350 = 0;
          lStack_348 = 8;
        }
        else {
          lVar23 = *(long *)(lVar25 + 0x80);
          lVar16 = lVar28 * 0x18;
          lVar7 = _malloc(lVar16);
          if (lVar7 == 0) {
            func_0x0001087c9084(8,lVar16);
            goto LAB_101147254;
          }
          lVar24 = 0;
          plVar13 = (long *)(lVar7 + 0x10);
          lStack_350 = lVar28;
          lStack_348 = lVar7;
          do {
            if (lVar16 == 0) break;
            uVar5 = *(undefined8 *)(lVar23 + 8);
            lVar7 = *(long *)(lVar23 + 0x10);
            if (lVar7 == 0) {
              lVar14 = 1;
            }
            else {
              lVar14 = _malloc(lVar7);
              if (lVar14 == 0) {
                func_0x0001087c9084(1,lVar7);
                goto LAB_101147254;
              }
            }
            _memcpy(lVar14,uVar5,lVar7);
            lVar24 = lVar24 + 1;
            lVar23 = lVar23 + 0x18;
            plVar13[-2] = lVar7;
            plVar13[-1] = lVar14;
            *plVar13 = lVar7;
            lVar16 = lVar16 + -0x18;
            plVar13 = plVar13 + 3;
          } while (lVar28 != lVar24);
        }
        lStack_1c8 = lStack_348;
        lStack_1d0 = lStack_350;
        lVar23 = *(long *)(lVar25 + 0xa0);
        lStack_1c0 = lVar28;
        if (lVar23 == 0) {
          lStack_350 = 0;
          lStack_348 = 8;
        }
        else {
          lVar28 = *(long *)(lVar25 + 0x98);
          lVar16 = lVar23 * 0x18;
          lVar7 = _malloc(lVar16);
          if (lVar7 == 0) {
            func_0x0001087c9084(8,lVar16);
            goto LAB_101147254;
          }
          lVar24 = 0;
          plVar13 = (long *)(lVar7 + 0x10);
          lStack_350 = lVar23;
          lStack_348 = lVar7;
          do {
            if (lVar16 == 0) break;
            uVar5 = *(undefined8 *)(lVar28 + 8);
            lVar7 = *(long *)(lVar28 + 0x10);
            if (lVar7 == 0) {
              lVar14 = 1;
            }
            else {
              lVar14 = _malloc(lVar7);
              if (lVar14 == 0) {
                func_0x0001087c9084(1,lVar7);
                goto LAB_101147254;
              }
            }
            _memcpy(lVar14,uVar5,lVar7);
            lVar24 = lVar24 + 1;
            lVar28 = lVar28 + 0x18;
            plVar13[-2] = lVar7;
            plVar13[-1] = lVar14;
            *plVar13 = lVar7;
            lVar16 = lVar16 + -0x18;
            plVar13 = plVar13 + 3;
          } while (lVar23 != lVar24);
        }
        lStack_1a8 = lStack_348;
        lStack_1b0 = lStack_350;
        lVar28 = *(long *)(lVar25 + 0xb8);
        lStack_1a0 = lVar23;
        if (lVar28 == 0) {
          lStack_350 = 0;
          lStack_348 = 8;
        }
        else {
          lVar23 = *(long *)(lVar25 + 0xb0);
          lVar16 = lVar28 * 0x18;
          lVar7 = _malloc(lVar16);
          if (lVar7 == 0) {
            func_0x0001087c9084(8,lVar16);
LAB_101147254:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101147258);
            (*pcVar3)();
          }
          lVar24 = 0;
          plVar13 = (long *)(lVar7 + 0x10);
          lStack_350 = lVar28;
          lStack_348 = lVar7;
          do {
            if (lVar16 == 0) break;
            uVar5 = *(undefined8 *)(lVar23 + 8);
            lVar7 = *(long *)(lVar23 + 0x10);
            if (lVar7 == 0) {
              lVar14 = 1;
            }
            else {
              lVar14 = _malloc(lVar7);
              if (lVar14 == 0) {
                func_0x0001087c9084(1,lVar7);
                goto LAB_101147254;
              }
            }
            _memcpy(lVar14,uVar5,lVar7);
            lVar24 = lVar24 + 1;
            lVar23 = lVar23 + 0x18;
            plVar13[-2] = lVar7;
            plVar13[-1] = lVar14;
            *plVar13 = lVar7;
            lVar16 = lVar16 + -0x18;
            plVar13 = plVar13 + 3;
          } while (lVar28 != lVar24);
        }
        lStack_248 = lStack_348;
        lStack_250 = lStack_350;
        lStack_2b8 = lStack_220;
        lStack_2c0 = lStack_228;
        lStack_2a8 = lStack_208;
        lStack_2b0 = lStack_210;
        lStack_2a0 = lStack_200;
        lStack_290 = lStack_1e8;
        lStack_298 = lStack_1f0;
        lStack_288 = lStack_1e0;
        lStack_278 = lStack_1c8;
        lStack_280 = lStack_1d0;
        lStack_270 = lStack_1c0;
        lStack_258 = lStack_1a0;
        lStack_260 = lStack_1a8;
        lStack_268 = lStack_1b0;
        lVar23 = lStack_230;
        lStack_240 = lVar28;
      }
      lVar25 = lVar25 + 200;
      plVar13 = (long *)(lVar4 + lVar19 * 200);
      lVar19 = lVar19 + 1;
      lStack_2d8 = lStack_248;
      lStack_2e0 = lStack_250;
      lStack_2d0 = lStack_240;
      lStack_328 = lStack_298;
      lStack_330 = lStack_2a0;
      lStack_318 = lStack_288;
      lStack_320 = lStack_290;
      lStack_2f8 = lStack_268;
      lStack_300 = lStack_270;
      lStack_2e8 = lStack_258;
      lStack_2f0 = lStack_260;
      lStack_308 = lStack_278;
      lStack_310 = lStack_280;
      lStack_348 = lStack_2b8;
      lStack_350 = lStack_2c0;
      lStack_338 = lStack_2a8;
      lStack_340 = lStack_2b0;
      *plVar13 = lVar1;
      plVar13[1] = lVar6;
      plVar13[2] = lVar1;
      plVar13[3] = lVar22;
      plVar13[4] = lStack_3b8;
      plVar13[5] = lVar22;
      plVar13[6] = lVar23;
      plVar13[0x12] = lStack_268;
      plVar13[0x11] = lStack_270;
      plVar13[0x14] = lStack_258;
      plVar13[0x13] = lStack_260;
      plVar13[0x16] = lStack_248;
      plVar13[0x15] = lStack_250;
      plVar13[0x17] = lStack_240;
      plVar13[10] = lStack_2a8;
      plVar13[9] = lStack_2b0;
      plVar13[0xc] = lStack_298;
      plVar13[0xb] = lStack_2a0;
      plVar13[0xe] = lStack_288;
      plVar13[0xd] = lStack_290;
      plVar13[0x10] = lStack_278;
      plVar13[0xf] = lStack_280;
      plVar13[8] = lStack_2b8;
      plVar13[7] = lStack_2c0;
      *(undefined1 *)(plVar13 + 0x18) = uVar2;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    goto LAB_1011470f4;
  }
  uVar5 = func_0x0001087c9084(8,lVar20 * 200);
  FUN_100ca9cd4(&lStack_1d0);
  FUN_100ca9cd4(&lStack_1f0);
  FUN_100ca9d44(&lStack_210);
  FUN_100cbf72c(&lStack_230);
  if ((uStack_3e0 & 0x7fffffffffffffff) != 0) {
    _free(lStack_3b8);
  }
  if (lStack_3d8 != 0) {
    _free(uStack_3e8);
  }
  FUN_100cf6794(&lStack_368);
  auVar32 = __Unwind_Resume(uVar5);
  uVar5 = auVar32._8_8_;
  plVar27 = auVar32._0_8_;
  lVar25 = lVar19 << 3;
  if (lVar19 != 0) {
    lVar20 = _malloc(lVar25);
    if (lVar20 != 0) goto LAB_10114742c;
    func_0x0001087c9084(8,lVar25);
    uVar5 = extraout_x1;
  }
  lVar20 = 8;
LAB_10114742c:
  *plVar27 = lVar19;
  plVar27[1] = lVar20;
  _memcpy(lVar20,uVar5,lVar25);
  plVar27[2] = lVar19;
  return;
}

