
void FUN_10114a850(ulong *param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  long lVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong extraout_x12;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined1 uVar31;
  ulong unaff_x24;
  undefined8 *puVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong unaff_x28;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  long lStack_860;
  long lStack_858;
  long lStack_850;
  long lStack_848;
  long lStack_840;
  long lStack_838;
  long lStack_830;
  long lStack_828;
  long lStack_820;
  long lStack_7e0;
  ulong uStack_7d8;
  long lStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  long lStack_798;
  long lStack_790;
  long lStack_788;
  long lStack_780;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  ulong uStack_570;
  long lStack_568;
  ulong uStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined8 uStack_457;
  undefined8 uStack_44f;
  undefined1 uStack_447;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_328;
  ulong uStack_320;
  long lStack_318;
  ulong uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_198;
  ulong uStack_180;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_78;
  ulong uStack_70;
  
  if (param_3 == 0) {
    uStack_78 = 0;
    uStack_70 = 8;
  }
  else {
    uVar24 = param_3 << 5;
    uVar34 = param_3;
    uStack_70 = _malloc(uVar24);
    if (uStack_70 == 0) {
      uVar6 = func_0x0001087c9084(8,uVar24);
      FUN_100c99aa0(&uStack_78);
      auVar40 = __Unwind_Resume(uVar6);
      lVar29 = auVar40._8_8_;
      puVar7 = auVar40._0_8_;
      if (uVar34 == 0) {
        uStack_138 = 0;
        uStack_130 = 8;
      }
      else {
        uVar22 = uVar34 * 0x30;
        uVar23 = uVar34;
        uVar8 = _malloc(uVar22);
        if (uVar8 == 0) {
          uVar6 = func_0x0001087c9084(8,uVar22);
          FUN_100e4e778(&uStack_138);
          uVar6 = __Unwind_Resume(uVar6);
          if ((uStack_180 & 0x7fffffffffffffff) != 0) {
            _free(lStack_198);
          }
          FUN_100e4e778(&uStack_138);
          auVar40 = __Unwind_Resume(uVar6);
          lVar5 = auVar40._8_8_;
          puVar7 = auVar40._0_8_;
          if (uVar23 == 0) {
            uStack_2c8 = 0;
            puStack_2c0 = (undefined8 *)0x8;
          }
          else {
            lVar20 = uVar23 * 0xa0;
            uVar34 = uVar23;
            puStack_2c0 = (undefined8 *)_malloc(lVar20);
            if (puStack_2c0 == (undefined8 *)0x0) {
              uVar6 = func_0x0001087c9084(8,lVar20);
              FUN_100ca0554(&uStack_2c8);
              __Unwind_Resume(uVar6);
              auVar40 = func_0x000108a07bc4();
              puVar27 = auVar40._8_8_;
              puVar7 = auVar40._0_8_;
              if (uVar34 == 0) {
                uStack_328 = 0;
                uStack_320 = 8;
              }
              else {
                lVar5 = uVar34 << 5;
                uVar24 = uVar34;
                uStack_320 = _malloc(lVar5);
                if (uStack_320 == 0) {
                  uVar6 = func_0x0001087c9084(8,lVar5);
                  lStack_318 = lVar29;
                  func_0x000100e3c8d4(&uStack_328);
                  __Unwind_Resume(uVar6);
                  auVar40 = func_0x000108a07bc4();
                  lVar29 = auVar40._8_8_;
                  puVar7 = auVar40._0_8_;
                  if (uVar24 == 0) {
                    uStack_7c8 = 0;
                    uStack_7c0 = 8;
                  }
                  else {
                    lVar5 = uVar24 * 0x1e0;
                    uStack_7c0 = _malloc(lVar5);
                    if (uStack_7c0 == 0) {
                      func_0x0001087c9084(8,lVar5);
LAB_10114b780:
                      func_0x0001087c9084(1,unaff_x24);
LAB_10114b830:
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x10114b834);
                      (*pcVar4)();
                    }
                    lVar20 = 0;
                    uVar34 = 0;
                    do {
                      uStack_7c8 = uVar24;
                      if (lVar5 == lVar20) break;
                      lVar9 = *(long *)(lVar29 + lVar20);
                      if (1 < lVar9) {
                        if (lVar9 != 2) {
                          if (lVar9 == 3) {
                            FUN_1011dcc18(&lStack_7a8);
                          }
                          else {
                            FUN_1011a1230(&lStack_7a8);
                          }
                          goto LAB_10114afa8;
                        }
                        lVar17 = lVar29 + lVar20;
                        uVar6 = *(undefined8 *)(lVar17 + 0x10);
                        lVar33 = *(long *)(lVar17 + 0x18);
                        if (lVar33 == 0) {
                          lVar30 = 1;
LAB_10114b0e0:
                          _memcpy(lVar30,uVar6);
                          lVar15 = -0x8000000000000000;
                          if (*(long *)(lVar17 + 0x20) != -0x8000000000000000) {
                            FUN_1011499a8(&lStack_5d0,*(undefined8 *)(lVar29 + lVar20 + 0x28),
                                          *(undefined8 *)(lVar29 + lVar20 + 0x30));
                            lStack_428 = lStack_5c0;
                            lStack_430 = lStack_5c8;
                            lVar15 = lStack_5d0;
                          }
                          lStack_780 = lStack_428;
                          lStack_788 = lStack_430;
                          lStack_7a8 = lVar33;
                          lStack_7a0 = lVar30;
                          lStack_798 = lVar33;
                          lStack_790 = lVar15;
                          goto LAB_10114afa8;
                        }
                        lVar30 = _malloc(lVar33);
                        if (lVar30 != 0) goto LAB_10114b0e0;
LAB_10114b72c:
                        func_0x0001087c9084(1,lVar33);
                        goto LAB_10114b830;
                      }
                      if (lVar9 == 0) {
                        lVar17 = lVar29 + lVar20;
                        if (*(char *)(lVar17 + 0x180) == '\x01') {
                          uStack_438 = *(undefined8 *)(lVar17 + 0x189);
                          uStack_440 = *(undefined8 *)(lVar17 + 0x181);
                          uVar31 = 1;
                          uVar6 = *(undefined8 *)(lVar17 + 0x10);
                          lVar33 = *(long *)(lVar17 + 0x18);
                          if (lVar33 != 0) goto LAB_10114b030;
LAB_10114b0ac:
                          lVar17 = 1;
                        }
                        else {
                          uVar31 = 0;
                          uVar6 = *(undefined8 *)(lVar17 + 0x10);
                          lVar33 = *(long *)(lVar17 + 0x18);
                          if (lVar33 == 0) goto LAB_10114b0ac;
LAB_10114b030:
                          lVar17 = _malloc(lVar33);
                          if (lVar17 == 0) goto LAB_10114b72c;
                        }
                        _memcpy(lVar17,uVar6);
                        lVar30 = lVar29 + lVar20;
                        uVar6 = *(undefined8 *)(lVar30 + 0x28);
                        lVar15 = *(long *)(lVar30 + 0x30);
                        if (lVar15 == 0) {
                          lVar11 = 1;
                        }
                        else {
                          lVar11 = _malloc(lVar15);
                          if (lVar11 == 0) {
                            func_0x0001087c9084(1,lVar15);
                            goto LAB_10114b830;
                          }
                        }
                        _memcpy(lVar11,uVar6,lVar15);
                        uVar6 = *(undefined8 *)(lVar30 + 0x40);
                        lVar30 = *(long *)(lVar30 + 0x48);
                        if (lVar30 == 0) {
                          lVar12 = 1;
                        }
                        else {
                          lVar12 = _malloc(lVar30);
                          if (lVar12 == 0) {
                            func_0x0001087c9084(1,lVar30);
                            goto LAB_10114b830;
                          }
                        }
                        _memcpy(lVar12,uVar6,lVar30);
                        lVar19 = lVar29 + lVar20;
                        uVar6 = *(undefined8 *)(lVar19 + 0x58);
                        lVar2 = *(long *)(lVar19 + 0x60);
                        if (lVar2 == 0) {
                          lVar13 = 1;
                        }
                        else {
                          lVar13 = _malloc(lVar2);
                          if (lVar13 == 0) {
                            func_0x0001087c9084(1,lVar2);
                            goto LAB_10114b830;
                          }
                        }
                        _memcpy(lVar13,uVar6,lVar2);
                        lVar14 = *(ulong *)(lVar19 + 0x110) + 0x7ffffffffffffffa;
                        if (*(ulong *)(lVar19 + 0x110) < 0x8000000000000006) {
                          lVar14 = 6;
                        }
                        if (lVar14 < 4) {
                          if (lVar14 < 2) {
                            if (lVar14 == 0) {
                              lStack_430 = -0x7ffffffffffffffa;
                            }
                            else {
                              lStack_430 = -0x7ffffffffffffff9;
                            }
                          }
                          else if (lVar14 == 2) {
                            lStack_430 = -0x7ffffffffffffff8;
                          }
                          else {
                            lStack_430 = -0x7ffffffffffffff7;
                          }
                        }
                        else if (lVar14 < 6) {
                          if (lVar14 == 4) {
                            uVar6 = *(undefined8 *)(lVar29 + lVar20 + 0x120);
                            lVar19 = *(long *)(lVar29 + lVar20 + 0x128);
                            if (lVar19 == 0) {
                              lVar14 = 1;
                            }
                            else {
                              lVar14 = _malloc(lVar19);
                              if (lVar14 == 0) {
                                func_0x0001087c9084(1,lVar19);
                                goto LAB_10114b830;
                              }
                            }
                            _memcpy(lVar14,uVar6,lVar19);
                            lStack_430 = -0x7ffffffffffffff6;
                            lStack_428 = lVar19;
                            lStack_420 = lVar14;
                            lStack_418 = lVar19;
                          }
                          else {
                            lStack_430 = -0x7ffffffffffffff5;
                          }
                        }
                        else if (lVar14 == 6) {
                          FUN_1011d1944(&lStack_430,lVar19 + 0x110);
                        }
                        else {
                          lStack_430 = -0x7ffffffffffffff3;
                        }
                        lVar19 = lVar29 + lVar20;
                        uVar3 = *(undefined1 *)(lVar19 + 0x191);
                        uStack_7d8 = 0x8000000000000000;
                        if (*(long *)(lVar19 + 0x68) != -0x8000000000000000) {
                          uVar6 = *(undefined8 *)(lVar19 + 0x70);
                          unaff_x24 = *(ulong *)(lVar19 + 0x78);
                          if (unaff_x24 == 0) {
                            lStack_820 = 1;
                          }
                          else {
                            lStack_820 = _malloc(unaff_x24);
                            if (lStack_820 == 0) goto LAB_10114b780;
                          }
                          _memcpy(lStack_820,uVar6);
                          uStack_7d8 = unaff_x24;
                        }
                        lVar14 = -0x8000000000000000;
                        if (*(long *)(lVar19 + 0x80) != -0x8000000000000000) {
                          uVar6 = *(undefined8 *)(lVar29 + lVar20 + 0x88);
                          lVar14 = *(long *)(lVar29 + lVar20 + 0x90);
                          if (lVar14 == 0) {
                            lStack_828 = 1;
                          }
                          else {
                            lStack_828 = _malloc(lVar14);
                            if (lStack_828 == 0) {
                              func_0x0001087c9084(1,lVar14);
                              goto LAB_10114b830;
                            }
                          }
                          _memcpy(lStack_828,uVar6,lVar14);
                        }
                        lVar19 = lVar29 + lVar20;
                        lVar37 = -0x8000000000000000;
                        lStack_7e0 = -0x8000000000000000;
                        if (*(long *)(lVar19 + 0x98) != -0x8000000000000000) {
                          uVar6 = *(undefined8 *)(lVar19 + 0xa0);
                          lStack_7e0 = *(long *)(lVar19 + 0xa8);
                          if (lStack_7e0 == 0) {
                            lStack_830 = 1;
                          }
                          else {
                            lStack_830 = _malloc(lStack_7e0);
                            if (lStack_830 == 0) {
                              func_0x0001087c9084(1,lStack_7e0);
                              goto LAB_10114b830;
                            }
                          }
                          _memcpy(lStack_830,uVar6);
                        }
                        if (*(long *)(lVar19 + 0xb0) != -0x8000000000000000) {
                          uVar6 = *(undefined8 *)(lVar29 + lVar20 + 0xb8);
                          lVar37 = *(long *)(lVar29 + lVar20 + 0xc0);
                          if (lVar37 == 0) {
                            lStack_838 = 1;
                          }
                          else {
                            lStack_838 = _malloc(lVar37);
                            if (lStack_838 == 0) {
                              func_0x0001087c9084(1,lVar37);
                              goto LAB_10114b830;
                            }
                          }
                          _memcpy(lStack_838,uVar6,lVar37);
                        }
                        lVar19 = lVar29 + lVar20;
                        lVar28 = -0x8000000000000000;
                        if (*(long *)(lVar19 + 200) != -0x8000000000000000) {
                          uVar6 = *(undefined8 *)(lVar19 + 0xd0);
                          lVar28 = *(long *)(lVar19 + 0xd8);
                          if (lVar28 == 0) {
                            lStack_840 = 1;
                          }
                          else {
                            lStack_840 = _malloc(lVar28);
                            if (lStack_840 == 0) {
                              func_0x0001087c9084(1,lVar28);
                              goto LAB_10114b830;
                            }
                          }
                          _memcpy(lStack_840,uVar6,lVar28);
                        }
                        if (*(long *)(lVar19 + 0xe0) == -0x8000000000000000) {
                          uStack_3d0 = 0x8000000000000000;
                          lVar19 = *(long *)(lVar29 + lVar20 + 0xf8);
                        }
                        else {
                          FUN_101146390(&uStack_3b8,*(undefined8 *)(lVar29 + lVar20 + 0xe8),
                                        *(undefined8 *)(lVar29 + lVar20 + 0xf0));
                          lVar19 = *(long *)(lVar29 + lVar20 + 0xf8);
                          uStack_3c8 = uStack_3b0;
                          uStack_3d0 = uStack_3b8;
                          uStack_3c0 = uStack_3a8;
                        }
                        lVar18 = -0x8000000000000000;
                        if (lVar19 != -0x8000000000000000) {
                          uVar6 = *(undefined8 *)(lVar29 + lVar20 + 0x100);
                          lVar18 = *(long *)(lVar29 + lVar20 + 0x108);
                          if (lVar18 == 0) {
                            lStack_850 = 1;
                          }
                          else {
                            lStack_850 = _malloc(lVar18);
                            if (lStack_850 == 0) {
                              func_0x0001087c9084(1,lVar18);
                              goto LAB_10114b830;
                            }
                          }
                          _memcpy(lStack_850,uVar6);
                          lStack_848 = lVar18;
                        }
                        lVar19 = lVar29 + lVar20;
                        lStack_7d0 = -0x8000000000000000;
                        uStack_460 = *(undefined8 *)(lVar19 + 0x178);
                        uStack_468 = *(undefined8 *)(lVar19 + 0x170);
                        uStack_44f = uStack_438;
                        uStack_457 = uStack_440;
                        uStack_480 = uStack_3e8;
                        uStack_488 = uStack_3f0;
                        uStack_470 = uStack_3d8;
                        uStack_478 = uStack_3e0;
                        uStack_4a0 = uStack_408;
                        uStack_4a8 = uStack_410;
                        uStack_490 = uStack_3f8;
                        uStack_498 = uStack_400;
                        lStack_4c0 = lStack_428;
                        lStack_4c8 = lStack_430;
                        lStack_4b0 = lStack_418;
                        lStack_4b8 = lStack_420;
                        uStack_570 = uStack_7d8;
                        lStack_568 = lStack_820;
                        uStack_560 = uStack_7d8;
                        lStack_550 = lStack_828;
                        lStack_540 = lStack_7e0;
                        lStack_538 = lStack_830;
                        lStack_530 = lStack_7e0;
                        lStack_520 = lStack_838;
                        lStack_508 = lStack_840;
                        uStack_4e8 = uStack_3c0;
                        uStack_4f0 = uStack_3c8;
                        uStack_4f8 = uStack_3d0;
                        lStack_4d8 = lStack_850;
                        lStack_4d0 = lStack_848;
                        lVar19 = *(long *)(lVar19 + 0x198);
                        lStack_5d0 = lVar33;
                        lStack_5c8 = lVar17;
                        lStack_5c0 = lVar33;
                        lStack_5b8 = lVar15;
                        lStack_5b0 = lVar11;
                        lStack_5a8 = lVar15;
                        lStack_5a0 = lVar30;
                        lStack_598 = lVar12;
                        lStack_590 = lVar30;
                        lStack_588 = lVar2;
                        lStack_580 = lVar13;
                        lStack_578 = lVar2;
                        lStack_558 = lVar14;
                        lStack_548 = lVar14;
                        lStack_528 = lVar37;
                        lStack_518 = lVar37;
                        lStack_510 = lVar28;
                        lStack_500 = lVar28;
                        lStack_4e0 = lVar18;
                        uStack_458 = uVar31;
                        uStack_447 = uVar3;
                        if (lVar19 == -0x8000000000000000) {
                          lStack_7d0 = lVar17;
                          if (*(long *)(lVar29 + lVar20 + 0x1b0) != -0x8000000000000000)
                          goto LAB_10114b630;
LAB_10114b5d8:
                          lVar37 = -0x8000000000000000;
                          lVar28 = -0x8000000000000000;
                          if (*(long *)(lVar29 + lVar20 + 0x1c8) == -0x8000000000000000)
                          goto LAB_10114b6b0;
LAB_10114b670:
                          uVar6 = *(undefined8 *)(lVar29 + lVar20 + 0x1d0);
                          lVar37 = *(long *)(lVar29 + lVar20 + 0x1d8);
                          if (lVar37 == 0) {
                            lStack_860 = 1;
                          }
                          else {
                            lStack_860 = _malloc(lVar37);
                            if (lStack_860 == 0) {
                              func_0x0001087c9084(1,lVar37);
                              goto LAB_10114b830;
                            }
                          }
                          _memcpy(lStack_860,uVar6,lVar37);
                          lStack_858 = lVar37;
                        }
                        else if (lVar19 != -0x7fffffffffffffff) {
                          uVar6 = *(undefined8 *)(lVar29 + lVar20 + 0x1a0);
                          lVar19 = *(long *)(lVar29 + lVar20 + 0x1a8);
                          if (lVar19 == 0) {
                            lStack_7d0 = 1;
                          }
                          else {
                            lStack_7d0 = _malloc(lVar19);
                            if (lStack_7d0 == 0) {
                              func_0x0001087c9084(1,lVar19);
                              goto LAB_10114b830;
                            }
                          }
                          _memcpy(lStack_7d0,uVar6,lVar19);
                          if (*(long *)(lVar29 + lVar20 + 0x1b0) == -0x8000000000000000)
                          goto LAB_10114b5d8;
LAB_10114b630:
                          lVar17 = lVar29 + lVar20;
                          lVar37 = -0x8000000000000000;
                          uVar6 = *(undefined8 *)(lVar17 + 0x1b8);
                          lVar28 = *(long *)(lVar17 + 0x1c0);
                          if (lVar28 == 0) {
                            lVar15 = 1;
                          }
                          else {
                            lVar15 = _malloc(lVar28);
                            if (lVar15 == 0) {
                              func_0x0001087c9084(1,lVar28);
                              goto LAB_10114b830;
                            }
                          }
                          _memcpy(lVar15,uVar6,lVar28);
                          if (*(long *)(lVar17 + 0x1c8) != -0x8000000000000000) goto LAB_10114b670;
                        }
LAB_10114b6b0:
                        _memcpy(&lStack_7a8,&lStack_5d0,400);
                        lStack_5e0 = lStack_860;
                        lStack_5d8 = lStack_858;
                        lStack_618 = lVar19;
                        lStack_610 = lStack_7d0;
                        lStack_608 = lVar19;
                        lStack_600 = lVar28;
                        lStack_5f8 = lVar15;
                        lStack_5f0 = lVar28;
                        lStack_5e8 = lVar37;
                      }
                      else {
                        FUN_1011b5300(&lStack_7a8,(long *)(lVar29 + lVar20) + 1);
                      }
LAB_10114afa8:
                      uVar34 = uVar34 + 1;
                      lStack_7b0 = lVar9;
                      _memcpy(uStack_7c0 + lVar20,&lStack_7b0,0x1e0);
                      lVar20 = lVar20 + 0x1e0;
                    } while (uVar24 != uVar34);
                  }
                  puVar7[1] = uStack_7c0;
                  *puVar7 = uStack_7c8;
                  puVar7[2] = uVar24;
                  return;
                }
                uVar24 = 0;
                puVar32 = (undefined8 *)(uStack_320 + 0x10);
                uStack_328 = uVar34;
                do {
                  if (lVar5 == 0) break;
                  auVar40 = (**(code **)(puVar27[1] + 0x30))(*puVar27);
                  uVar24 = uVar24 + 1;
                  uVar39 = puVar27[3];
                  uVar6 = puVar27[2];
                  puVar27 = puVar27 + 4;
                  *(undefined1 (*) [16])(puVar32 + -2) = auVar40;
                  puVar32[1] = uVar39;
                  *puVar32 = uVar6;
                  lVar5 = lVar5 + -0x20;
                  puVar32 = puVar32 + 4;
                } while (uVar34 != uVar24);
              }
              puVar7[1] = uStack_320;
              *puVar7 = uStack_328;
              puVar7[2] = uVar34;
              return;
            }
            uVar34 = 0;
            puVar27 = puStack_2c0;
            uStack_2c8 = uVar23;
            do {
              if (lVar20 == 0) break;
              FUN_10151ee5c(&uStack_2b0,lVar5);
              uVar34 = uVar34 + 1;
              lVar5 = lVar5 + 0xa0;
              puVar27[0xd] = uStack_248;
              puVar27[0xc] = uStack_250;
              puVar27[0xf] = uStack_238;
              puVar27[0xe] = uStack_240;
              puVar27[0x11] = uStack_228;
              puVar27[0x10] = uStack_230;
              puVar27[0x13] = uStack_218;
              puVar27[0x12] = uStack_220;
              puVar27[5] = uStack_288;
              puVar27[4] = uStack_290;
              puVar27[7] = uStack_278;
              puVar27[6] = uStack_280;
              puVar27[9] = uStack_268;
              puVar27[8] = uStack_270;
              puVar27[0xb] = uStack_258;
              puVar27[10] = uStack_260;
              lVar20 = lVar20 + -0xa0;
              puVar27[1] = uStack_2a8;
              *puVar27 = uStack_2b0;
              puVar27[3] = uStack_298;
              puVar27[2] = uStack_2a0;
              puVar27 = puVar27 + 0x14;
            } while (uVar23 != uVar34);
          }
          puVar7[1] = (ulong)puStack_2c0;
          *puVar7 = uStack_2c8;
          puVar7[2] = uVar23;
          return;
        }
        uVar23 = 0;
        lVar5 = lVar29 + uVar34 * 0x30;
        uVar21 = extraout_x12;
        uVar35 = uVar34;
        uStack_138 = uVar34;
        uStack_130 = uVar8;
        do {
          if (lVar29 == lVar5) break;
          uVar25 = 0x8000000000000000;
          if (*(long *)(lVar29 + 0x18) != -0x8000000000000000) {
            uVar6 = *(undefined8 *)(lVar29 + 0x20);
            uVar25 = *(ulong *)(lVar29 + 0x28);
            if (uVar25 == 0) {
              lStack_198 = 1;
            }
            else {
              lStack_198 = _malloc(uVar25);
              if (lStack_198 == 0) {
                func_0x0001087c9084(1,uVar25);
                goto LAB_10114aca8;
              }
            }
            _memcpy(lStack_198,uVar6,uVar25);
          }
          lVar20 = *(long *)(lVar29 + 0x10);
          if (lVar20 == 0) {
            lStack_100 = 0;
            lStack_f8 = 8;
          }
          else {
            lVar17 = *(long *)(lVar29 + 8);
            lVar9 = _malloc();
            if (lVar9 == 0) {
              func_0x0001087c9084(8,lVar20 * 0x60);
LAB_10114aca8:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10114acac);
              (*pcVar4)();
            }
            lVar30 = 0;
            lVar33 = 0;
            uVar10 = uVar23;
            uVar26 = uVar25;
            uVar36 = uVar35;
            lStack_100 = lVar20;
            lStack_f8 = lVar9;
            do {
              if (lVar20 * 0x60 == lVar30) break;
              uVar38 = *(ulong *)(lVar17 + lVar30);
              lVar15 = 0;
              if (uVar38 != 0) {
                lVar15 = uVar38 - 1;
              }
              if (lVar15 == 0) {
                uVar10 = lVar17 + lVar30;
                uVar6 = *(undefined8 *)(uVar10 + 0x18);
                uVar21 = *(ulong *)(uVar10 + 0x20);
                if (uVar21 == 0) {
                  uStack_140 = 1;
                }
                else {
                  uStack_140 = _malloc(uVar21);
                  if (uStack_140 == 0) {
                    func_0x0001087c9084(1,uVar21);
                    goto LAB_10114aca8;
                  }
                }
                _memcpy(uStack_140,uVar6,uVar21);
                uVar26 = 0x8000000000000000;
                uVar36 = 0x8000000000000000;
                if (*(long *)(uVar10 + 0x28) != -0x8000000000000000) {
                  uVar6 = *(undefined8 *)(lVar17 + lVar30 + 0x30);
                  uVar36 = *(ulong *)(lVar17 + lVar30 + 0x38);
                  if (uVar36 == 0) {
                    uVar10 = 1;
                  }
                  else {
                    uVar10 = _malloc(uVar36);
                    if (uVar10 == 0) {
                      func_0x0001087c9084(1,uVar36);
                      goto LAB_10114aca8;
                    }
                  }
                  _memcpy(uVar10,uVar6,uVar36);
                }
                lVar15 = lVar17 + lVar30;
                unaff_x28 = *(ulong *)(lVar15 + 8);
                uVar38 = uVar38 & 1;
                unaff_x24 = (ulong)*(byte *)(lVar15 + 0x58);
                if (*(long *)(lVar15 + 0x40) != -0x8000000000000000) {
                  uVar6 = *(undefined8 *)(lVar15 + 0x48);
                  uVar22 = *(ulong *)(lVar15 + 0x50);
                  if (uVar22 == 0) {
                    uVar24 = 1;
                  }
                  else {
                    uVar24 = _malloc();
                    if (uVar24 == 0) {
                      func_0x0001087c9084(1,uVar22);
                      goto LAB_10114aca8;
                    }
                  }
                  _memcpy(uVar24,uVar6,uVar22);
                  uVar26 = uVar22;
                }
              }
              else {
                uVar38 = 2;
                if (lVar15 != 1) {
                  uVar38 = 3;
                }
              }
              lVar33 = lVar33 + 1;
              puVar1 = (ulong *)(lVar9 + lVar30);
              *puVar1 = uVar38;
              puVar1[1] = unaff_x28;
              puVar1[2] = uVar21;
              puVar1[3] = uStack_140;
              puVar1[4] = uVar21;
              puVar1[5] = uVar36;
              puVar1[6] = uVar10;
              puVar1[7] = uVar36;
              puVar1[8] = uVar26;
              puVar1[9] = uVar24;
              puVar1[10] = uVar22;
              lVar30 = lVar30 + 0x60;
              *(char *)(puVar1 + 0xb) = (char)unaff_x24;
            } while (lVar20 != lVar33);
          }
          lVar29 = lVar29 + 0x30;
          plVar16 = (long *)(uVar8 + uVar23 * 0x30);
          uVar23 = uVar23 + 1;
          lStack_118 = lStack_f8;
          lStack_120 = lStack_100;
          plVar16[1] = lStack_f8;
          *plVar16 = lStack_100;
          plVar16[2] = lVar20;
          plVar16[3] = uVar25;
          plVar16[4] = lStack_198;
          plVar16[5] = uVar25;
          uVar35 = uVar35 - 1;
          unaff_x24 = uVar8;
          lStack_110 = lVar20;
          lStack_f0 = lVar20;
        } while (uVar35 != 0);
      }
      puVar7[1] = uStack_130;
      *puVar7 = uStack_138;
      puVar7[2] = uVar34;
      return;
    }
    uVar34 = 0;
    plVar16 = (long *)(uStack_70 + 0x10);
    uStack_78 = param_3;
    do {
      if (uVar24 == 0) break;
      uVar31 = *(undefined1 *)(param_2 + 0x18);
      uVar6 = *(undefined8 *)(param_2 + 8);
      lVar29 = *(long *)(param_2 + 0x10);
      if (lVar29 == 0) {
        lVar5 = 1;
      }
      else {
        lVar5 = _malloc(lVar29);
        if (lVar5 == 0) {
          func_0x0001087c9084(1,lVar29);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10114a940);
          (*pcVar4)();
        }
      }
      _memcpy(lVar5,uVar6,lVar29);
      uVar34 = uVar34 + 1;
      param_2 = param_2 + 0x20;
      plVar16[-2] = lVar29;
      plVar16[-1] = lVar5;
      *plVar16 = lVar29;
      *(undefined1 *)(plVar16 + 1) = uVar31;
      uVar24 = uVar24 - 0x20;
      plVar16 = plVar16 + 4;
    } while (param_3 != uVar34);
  }
  param_1[1] = uStack_70;
  *param_1 = uStack_78;
  param_1[2] = param_3;
  return;
}

