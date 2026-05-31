
/* WARNING: Type propagation algorithm not settling */

long * FUN_10373e75c(long *param_1,long param_2,long param_3)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *******pppppppuVar15;
  ulong uVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 *****UNRECOVERED_JUMPTABLE;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long unaff_x23;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  long unaff_x26;
  long lVar32;
  long lVar33;
  undefined1 auVar34 [16];
  undefined1 uStack_629;
  undefined8 *******pppppppuStack_628;
  undefined8 ******ppppppuStack_620;
  undefined8 *******pppppppuStack_618;
  undefined8 *******pppppppuStack_610;
  undefined8 uStack_608;
  undefined8 ******ppppppuStack_600;
  undefined8 *******pppppppuStack_5f8;
  undefined8 *******pppppppuStack_5f0;
  byte bStack_5e8;
  byte bStack_5e7;
  long lStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  ulong uStack_4c8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  long lStack_460;
  long lStack_458;
  ulong uStack_450;
  ulong uStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
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
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  if (param_3 == 0) {
    lStack_428 = 0;
    plStack_420 = (long *)0x8;
    plVar8 = param_1;
LAB_10373f2c0:
    param_1[1] = (long)plStack_420;
    *param_1 = lStack_428;
    param_1[2] = param_3;
    return plVar8;
  }
  lVar32 = param_3;
  plVar8 = (long *)_malloc(param_3 * 0x270);
  if (plVar8 != (long *)0x0) {
    lVar32 = 0;
    lVar21 = param_2 + param_3 * 0x270;
    uStack_418 = 0;
    lVar26 = param_3;
    lStack_428 = param_3;
    plStack_420 = plVar8;
    do {
      if (param_2 == lVar21) break;
      uVar29 = *(undefined8 *)(param_2 + 8);
      lVar2 = *(long *)(param_2 + 0x10);
      if (lVar2 == 0) {
        lVar9 = 1;
      }
      else {
        lVar9 = _malloc(lVar2);
        if (lVar9 == 0) {
          func_0x0001087c9084(1,lVar2);
          goto LAB_10373f45c;
        }
      }
      _memcpy(lVar9,uVar29,lVar2);
      uVar29 = *(undefined8 *)(param_2 + 0x20);
      lVar13 = *(long *)(param_2 + 0x28);
      if (lVar13 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = _malloc(lVar13);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar13);
          goto LAB_10373f45c;
        }
      }
      _memcpy(lVar10,uVar29,lVar13);
      lVar27 = -0x8000000000000000;
      uStack_448 = -0x8000000000000000;
      lVar25 = lVar26;
      if (*(long *)(param_2 + 0x48) != -0x8000000000000000) {
        uVar29 = *(undefined8 *)(param_2 + 0x50);
        uStack_448 = *(long *)(param_2 + 0x58);
        if (uStack_448 == 0) {
          lStack_498 = 1;
        }
        else {
          lStack_498 = _malloc(uStack_448);
          lVar25 = uStack_448;
          if (lStack_498 == 0) {
            func_0x0001087c9084(1,uStack_448);
            goto LAB_10373f45c;
          }
        }
        _memcpy(lStack_498,uVar29);
      }
      if (*(long *)(param_2 + 0x60) != -0x8000000000000000) {
        uVar29 = *(undefined8 *)(param_2 + 0x68);
        lVar27 = *(long *)(param_2 + 0x70);
        if (lVar27 == 0) {
          lStack_4a0 = 1;
        }
        else {
          lStack_4a0 = _malloc(lVar27);
          if (lStack_4a0 == 0) {
            func_0x0001087c9084(1,lVar27);
            goto LAB_10373f45c;
          }
        }
        _memcpy(lStack_4a0,uVar29,lVar27);
      }
      lVar28 = -0x8000000000000000;
      uStack_450 = -0x8000000000000000;
      if (*(long *)(param_2 + 0x78) != -0x8000000000000000) {
        uVar29 = *(undefined8 *)(param_2 + 0x80);
        uStack_450 = *(long *)(param_2 + 0x88);
        if (uStack_450 == 0) {
          lStack_4a8 = 1;
        }
        else {
          lStack_4a8 = _malloc(uStack_450);
          lVar25 = uStack_450;
          if (lStack_4a8 == 0) {
            func_0x0001087c9084(1,uStack_450);
            goto LAB_10373f45c;
          }
        }
        _memcpy(lStack_4a8,uVar29);
      }
      if (*(long *)(param_2 + 0x90) != -0x8000000000000000) {
        uVar29 = *(undefined8 *)(param_2 + 0x98);
        lVar28 = *(long *)(param_2 + 0xa0);
        if (lVar28 == 0) {
          lStack_4b0 = 1;
        }
        else {
          lStack_4b0 = _malloc(lVar28);
          if (lStack_4b0 == 0) {
            func_0x0001087c9084(1,lVar28);
            goto LAB_10373f45c;
          }
        }
        _memcpy(lStack_4b0,uVar29,lVar28);
      }
      lVar23 = *(long *)(param_2 + 0xc0);
      if (lVar23 == -0x8000000000000000) {
        if (*(long *)(param_2 + 0xd8) != -0x8000000000000000) goto LAB_10373ea24;
LAB_10373e9b4:
        lVar30 = -0x8000000000000000;
        lVar33 = lVar13;
        if (*(long *)(param_2 + 0xf0) == -0x8000000000000000) goto LAB_10373e9c0;
LAB_10373ea60:
        uVar29 = *(undefined8 *)(param_2 + 0xf8);
        unaff_x26 = *(long *)(param_2 + 0x100);
        if (unaff_x26 == 0) {
          lVar25 = 1;
        }
        else {
          lVar25 = _malloc(unaff_x26);
          if (lVar25 == 0) {
            func_0x0001087c9084(1,unaff_x26);
            goto LAB_10373f45c;
          }
        }
        _memcpy(lVar25,uVar29,unaff_x26);
        lVar11 = *(long *)(param_2 + 0x108);
joined_r0x00010373e9d0:
        if (lVar11 == -0x8000000000000000) {
          lVar11 = -0x8000000000000000;
          lVar22 = *(long *)(param_2 + 0x120);
          lVar31 = lVar28;
        }
        else {
          uVar29 = *(undefined8 *)(param_2 + 0x110);
          lVar11 = *(long *)(param_2 + 0x118);
          if (lVar11 == 0) {
            lVar31 = 1;
          }
          else {
            lVar31 = _malloc(lVar11);
            if (lVar31 == 0) {
              func_0x0001087c9084(1,lVar11);
              goto LAB_10373f45c;
            }
          }
          _memcpy(lVar31,uVar29,lVar11);
          lVar22 = *(long *)(param_2 + 0x120);
        }
        lVar20 = -0x8000000000000000;
        if (lVar22 != -0x8000000000000000) {
          uVar29 = *(undefined8 *)(param_2 + 0x128);
          lVar20 = *(long *)(param_2 + 0x130);
          if (lVar20 == 0) {
            lStack_4d8 = 1;
          }
          else {
            lStack_4d8 = _malloc(lVar20);
            if (lStack_4d8 == 0) {
              func_0x0001087c9084(1,lVar20);
              goto LAB_10373f45c;
            }
          }
          _memcpy(lStack_4d8,uVar29,lVar20);
          lStack_4d0 = lVar20;
        }
        uStack_1c0 = *(undefined1 *)(param_2 + 0x138);
        lStack_1c8 = lStack_4d0;
        lStack_1d0 = lStack_4d8;
        lVar22 = *(long *)(param_2 + 0x140);
        lStack_238 = lVar23;
        lStack_230 = lStack_430;
        lStack_228 = lVar23;
        lStack_220 = lVar30;
        lStack_218 = lVar33;
        lStack_210 = lVar30;
        lStack_208 = unaff_x26;
        lStack_200 = lVar25;
        lStack_1f8 = unaff_x26;
        lStack_1f0 = lVar11;
        lStack_1e8 = lVar31;
        lStack_1e0 = lVar11;
        lStack_1d8 = lVar20;
        if (lVar22 != -0x7fffffffffffffff) goto LAB_10373e978;
LAB_10373eb78:
        lStack_1b8 = -0x7fffffffffffffff;
        if (*(long *)(param_2 + 0x238) != 0) goto LAB_10373eb84;
LAB_10373f048:
        lStack_c0 = 0;
        lVar25 = *(long *)(param_2 + 0xa8);
      }
      else {
        if (lVar23 != -0x7fffffffffffffff) {
          uVar29 = *(undefined8 *)(param_2 + 200);
          lVar23 = *(long *)(param_2 + 0xd0);
          if (lVar23 == 0) {
            lStack_430 = 1;
          }
          else {
            lStack_430 = _malloc(lVar23);
            if (lStack_430 == 0) {
              func_0x0001087c9084(1,lVar23);
              goto LAB_10373f45c;
            }
          }
          _memcpy(lStack_430,uVar29,lVar23);
          if (*(long *)(param_2 + 0xd8) == -0x8000000000000000) goto LAB_10373e9b4;
LAB_10373ea24:
          lVar25 = *(long *)(param_2 + 0xe0);
          lVar30 = *(long *)(param_2 + 0xe8);
          if (lVar30 == 0) {
            lVar33 = 1;
          }
          else {
            lVar33 = _malloc(lVar30);
            if (lVar33 == 0) {
              func_0x0001087c9084(1,lVar30);
              goto LAB_10373f45c;
            }
          }
          _memcpy(lVar33,lVar25,lVar30);
          if (*(long *)(param_2 + 0xf0) != -0x8000000000000000) goto LAB_10373ea60;
LAB_10373e9c0:
          unaff_x26 = -0x8000000000000000;
          lVar11 = *(long *)(param_2 + 0x108);
          goto joined_r0x00010373e9d0;
        }
        lStack_238 = -0x7fffffffffffffff;
        lVar22 = *(long *)(param_2 + 0x140);
        if (lVar22 == -0x7fffffffffffffff) goto LAB_10373eb78;
LAB_10373e978:
        lVar25 = -0x8000000000000000;
        lVar23 = -0x8000000000000000;
        if (lVar22 != -0x8000000000000000) {
          uVar29 = *(undefined8 *)(param_2 + 0x148);
          lVar25 = *(long *)(param_2 + 0x150);
          if (lVar25 == 0) {
            lStack_4e8 = 1;
          }
          else {
            lStack_4e8 = _malloc(lVar25);
            if (lStack_4e8 == 0) {
              func_0x0001087c9084(1,lVar25);
              goto LAB_10373f45c;
            }
          }
          _memcpy(lStack_4e8,uVar29,lVar25);
        }
        if (*(long *)(param_2 + 0x158) == -0x8000000000000000) {
          lStack_3f0 = -0x8000000000000000;
          if (*(long *)(param_2 + 0x170) == -0x8000000000000000) goto LAB_10373ebec;
LAB_10373ec90:
          func_0x0001035ad330(&lStack_3c0,*(undefined8 *)(param_2 + 0x178),
                              *(undefined8 *)(param_2 + 0x180));
          lStack_b8 = lStack_3b8;
          lStack_c0 = lStack_3c0;
          lStack_b0 = lStack_3b0;
          if (*(long *)(param_2 + 0x188) != -0x8000000000000000) goto LAB_10373ecc0;
LAB_10373ec00:
          lStack_4e0 = -0x8000000000000000;
          if (*(long *)(param_2 + 0x1a0) == -0x8000000000000000) goto LAB_10373ec10;
LAB_10373ecfc:
          lVar30 = *(long *)(param_2 + 0x1b0);
          if (lVar30 == 0) {
            lStack_3c0 = 0;
            lStack_3b8 = 8;
          }
          else {
            lVar33 = *(long *)(param_2 + 0x1a8);
            lVar31 = lVar30 * 0x48;
            lVar11 = _malloc(lVar31);
            if (lVar11 == 0) {
              func_0x0001087c9084(8,lVar31);
              goto LAB_10373f45c;
            }
            lVar22 = 0;
            plVar12 = (long *)(lVar33 + 0x40);
            plVar24 = (long *)(lVar11 + 0x20);
            lStack_3c0 = lVar30;
            lStack_3b8 = lVar11;
            do {
              if (lVar31 == 0) break;
              lVar23 = -0x8000000000000000;
              lStack_430 = -0x8000000000000000;
              if (*(long *)(lVar33 + 0x18) != -0x8000000000000000) {
                lVar11 = plVar12[-4];
                lStack_430 = plVar12[-3];
                if (lStack_430 == 0) {
                  lStack_438 = 1;
                }
                else {
                  lStack_438 = _malloc(lStack_430);
                  if (lStack_438 == 0) {
                    func_0x0001087c9084(1,lStack_430);
                    goto LAB_10373f45c;
                  }
                }
                _memcpy(lStack_438,lVar11,lStack_430);
              }
              if (*(long *)(lVar33 + 0x30) != -0x8000000000000000) {
                lVar11 = plVar12[-1];
                lVar23 = *plVar12;
                if (lVar23 == 0) {
                  lStack_440 = 1;
                }
                else {
                  lStack_440 = _malloc(lVar23);
                  if (lStack_440 == 0) {
                    func_0x0001087c9084(1,lVar23);
                    goto LAB_10373f45c;
                  }
                }
                _memcpy(lStack_440,lVar11,lVar23);
              }
              unaff_x26 = *(long *)(lVar33 + 8);
              lVar11 = *(long *)(lVar33 + 0x10);
              if (lVar11 == 0) {
                lVar20 = 1;
              }
              else {
                lVar20 = _malloc(lVar11);
                if (lVar20 == 0) {
                  func_0x0001087c9084(1,lVar11);
                  goto LAB_10373f45c;
                }
              }
              lVar33 = lVar33 + 0x48;
              lVar22 = lVar22 + 1;
              _memcpy(lVar20,unaff_x26,lVar11);
              plVar24[-4] = lVar11;
              plVar24[-3] = lVar20;
              plVar24[-2] = lVar11;
              plVar24[-1] = lStack_430;
              *plVar24 = lStack_438;
              plVar24[1] = lStack_430;
              plVar12 = plVar12 + 9;
              plVar24[2] = lVar23;
              plVar24[3] = lStack_440;
              plVar24[4] = lVar23;
              plVar24 = plVar24 + 9;
              lVar31 = lVar31 + -0x48;
              lVar23 = lVar30;
            } while (lVar30 != lVar22);
          }
          lStack_2b8 = lStack_3b8;
          lStack_2c0 = lStack_3c0;
          lStack_2b0 = lVar30;
          if (*(long *)(param_2 + 0x1b8) != -0x8000000000000000) goto LAB_10373ee58;
LAB_10373ec28:
          lVar30 = -0x8000000000000000;
          if (*(long *)(param_2 + 0x1d0) == -0x8000000000000000) goto LAB_10373ec34;
LAB_10373ee90:
          lVar23 = *(long *)(param_2 + 0x1d8);
          lVar33 = *(long *)(param_2 + 0x1e0);
          if (lVar33 == 0) {
            lStack_438 = 1;
          }
          else {
            lStack_438 = _malloc(lVar33);
            if (lStack_438 == 0) {
              func_0x0001087c9084(1,lVar33);
              goto LAB_10373f45c;
            }
          }
          _memcpy(lStack_438,lVar23,lVar33);
          if (*(long *)(param_2 + 0x1e8) != -0x8000000000000000) goto LAB_10373eed0;
LAB_10373ec48:
          lVar11 = -0x8000000000000000;
          if (*(long *)(param_2 + 0x200) == -0x8000000000000000) goto LAB_10373ec54;
LAB_10373ef0c:
          uVar29 = *(undefined8 *)(param_2 + 0x208);
          lVar31 = *(long *)(param_2 + 0x210);
          if (lVar31 == 0) {
            lVar23 = 1;
          }
          else {
            lVar23 = _malloc(lVar31);
            if (lVar23 == 0) {
              func_0x0001087c9084(1,lVar31);
              goto LAB_10373f45c;
            }
          }
          _memcpy(lVar23,uVar29,lVar31);
          lVar22 = *(long *)(param_2 + 0x218);
        }
        else {
          func_0x0001035ad330(&lStack_3c0,*(undefined8 *)(param_2 + 0x160),
                              *(undefined8 *)(param_2 + 0x168));
          lStack_3e8 = lStack_3b8;
          lStack_3f0 = lStack_3c0;
          lStack_3e0 = lStack_3b0;
          if (*(long *)(param_2 + 0x170) != -0x8000000000000000) goto LAB_10373ec90;
LAB_10373ebec:
          lStack_c0 = -0x8000000000000000;
          if (*(long *)(param_2 + 0x188) == -0x8000000000000000) goto LAB_10373ec00;
LAB_10373ecc0:
          uVar29 = *(undefined8 *)(param_2 + 400);
          lStack_4e0 = *(long *)(param_2 + 0x198);
          if (lStack_4e0 == 0) {
            lStack_4f0 = 1;
          }
          else {
            lStack_4f0 = _malloc(lStack_4e0);
            if (lStack_4f0 == 0) {
              func_0x0001087c9084(1,lStack_4e0);
              goto LAB_10373f45c;
            }
          }
          _memcpy(lStack_4f0,uVar29,lStack_4e0);
          if (*(long *)(param_2 + 0x1a0) != -0x8000000000000000) goto LAB_10373ecfc;
LAB_10373ec10:
          lStack_2c0 = -0x8000000000000000;
          if (*(long *)(param_2 + 0x1b8) == -0x8000000000000000) goto LAB_10373ec28;
LAB_10373ee58:
          uVar29 = *(undefined8 *)(param_2 + 0x1c0);
          lVar30 = *(long *)(param_2 + 0x1c8);
          if (lVar30 == 0) {
            lStack_430 = 1;
          }
          else {
            lStack_430 = _malloc(lVar30);
            if (lStack_430 == 0) {
              func_0x0001087c9084(1,lVar30);
              goto LAB_10373f45c;
            }
          }
          _memcpy(lStack_430,uVar29,lVar30);
          if (*(long *)(param_2 + 0x1d0) != -0x8000000000000000) goto LAB_10373ee90;
LAB_10373ec34:
          lVar33 = -0x8000000000000000;
          if (*(long *)(param_2 + 0x1e8) == -0x8000000000000000) goto LAB_10373ec48;
LAB_10373eed0:
          lVar23 = *(long *)(param_2 + 0x1f0);
          lVar11 = *(long *)(param_2 + 0x1f8);
          if (lVar11 == 0) {
            unaff_x26 = 1;
          }
          else {
            unaff_x26 = _malloc(lVar11);
            if (unaff_x26 == 0) {
              func_0x0001087c9084(1,lVar11);
              goto LAB_10373f45c;
            }
          }
          _memcpy(unaff_x26,lVar23,lVar11);
          if (*(long *)(param_2 + 0x200) != -0x8000000000000000) goto LAB_10373ef0c;
LAB_10373ec54:
          lVar31 = -0x8000000000000000;
          lVar22 = *(long *)(param_2 + 0x218);
        }
        lVar20 = -0x8000000000000000;
        if (lVar22 != -0x8000000000000000) {
          uVar29 = *(undefined8 *)(param_2 + 0x220);
          lVar20 = *(long *)(param_2 + 0x228);
          if (lVar20 == 0) {
            lStack_500 = 1;
          }
          else {
            lStack_500 = _malloc(lVar20);
            if (lStack_500 == 0) {
              func_0x0001087c9084(1,lVar20);
              goto LAB_10373f45c;
            }
          }
          _memcpy(lStack_500,uVar29);
          lStack_4f8 = lVar20;
        }
        uStack_c8 = *(undefined2 *)(param_2 + 0x230);
        lStack_198 = lStack_3e8;
        lStack_1a0 = lStack_3f0;
        lStack_190 = lStack_3e0;
        lStack_180 = lStack_b8;
        lStack_188 = lStack_c0;
        lStack_178 = lStack_b0;
        lStack_150 = lStack_2b8;
        lStack_158 = lStack_2c0;
        lStack_148 = lStack_2b0;
        lStack_1b0 = lStack_4e8;
        lStack_d8 = lStack_500;
        lStack_d0 = lStack_4f8;
        lStack_1b8 = lVar25;
        lStack_1a8 = lVar25;
        lStack_170 = lStack_4e0;
        lStack_168 = lStack_4f0;
        lStack_160 = lStack_4e0;
        lStack_140 = lVar30;
        lStack_138 = lStack_430;
        lStack_130 = lVar30;
        lStack_128 = lVar33;
        lStack_120 = lStack_438;
        lStack_118 = lVar33;
        lStack_110 = lVar11;
        lStack_108 = unaff_x26;
        lStack_100 = lVar11;
        lStack_f8 = lVar31;
        lStack_f0 = lVar23;
        lStack_e8 = lVar31;
        lStack_e0 = lVar20;
        if (*(long *)(param_2 + 0x238) == 0) goto LAB_10373f048;
LAB_10373eb84:
        FUN_10363a0d0(&lStack_3c0,param_2 + 0x238);
        lVar25 = *(long *)(param_2 + 0xa8);
        lStack_c0 = lStack_3c0;
        lStack_b8 = lStack_3b8;
        lStack_b0 = lStack_3b0;
        lStack_a8 = lStack_3a8;
        lStack_a0 = lStack_3a0;
        lStack_98 = lStack_398;
      }
      lVar30 = -0x8000000000000000;
      if (lVar25 != -0x8000000000000000) {
        uVar29 = *(undefined8 *)(param_2 + 0xb0);
        lVar30 = *(long *)(param_2 + 0xb8);
        if (lVar30 == 0) {
          lVar23 = 1;
        }
        else {
          lVar23 = _malloc(lVar30);
          if (lVar23 == 0) {
            func_0x0001087c9084(1,lVar30);
LAB_10373f45c:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10373f460);
            (*pcVar5)();
          }
        }
        _memcpy(lVar23,uVar29,lVar30);
      }
      uVar3 = *(undefined1 *)(param_2 + 0x268);
      uVar4 = *(undefined1 *)(param_2 + 0x269);
      func_0x0001035ad330(&lStack_88,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40)
                         );
      param_2 = param_2 + 0x270;
      lStack_278 = lStack_1f0;
      lStack_280 = lStack_1f8;
      lStack_268 = lStack_1e0;
      lStack_270 = lStack_1e8;
      plVar12 = plVar8 + lVar32 * 0x4e;
      lVar32 = lVar32 + 1;
      lStack_258 = lStack_1d0;
      lStack_260 = lStack_1d8;
      lStack_248 = CONCAT71(uStack_1bf,uStack_1c0);
      lStack_250 = lStack_1c8;
      lStack_2b8 = lStack_230;
      lStack_2c0 = lStack_238;
      lStack_2a8 = lStack_220;
      lStack_2b0 = lStack_228;
      lStack_298 = lStack_210;
      lStack_2a0 = lStack_218;
      lStack_288 = lStack_200;
      lStack_290 = lStack_208;
      lStack_2f8 = lStack_f0;
      lStack_300 = lStack_f8;
      lStack_2e8 = lStack_e0;
      lStack_2f0 = lStack_e8;
      lStack_2d8 = lStack_d0;
      lStack_2e0 = lStack_d8;
      lStack_2d0 = CONCAT62(uStack_c6,uStack_c8);
      lStack_338 = lStack_130;
      lStack_340 = lStack_138;
      lStack_328 = lStack_120;
      lStack_330 = lStack_128;
      lStack_318 = lStack_110;
      lStack_320 = lStack_118;
      lStack_308 = lStack_100;
      lStack_310 = lStack_108;
      lStack_378 = lStack_170;
      lStack_380 = lStack_178;
      lStack_368 = lStack_160;
      lStack_370 = lStack_168;
      lStack_358 = lStack_150;
      lStack_360 = lStack_158;
      lStack_348 = lStack_140;
      lStack_350 = lStack_148;
      lStack_3b8 = lStack_1b0;
      lStack_3c0 = lStack_1b8;
      lStack_3a8 = lStack_1a0;
      lStack_3b0 = lStack_1a8;
      lStack_398 = lStack_190;
      lStack_3a0 = lStack_198;
      lStack_388 = lStack_180;
      lStack_390 = lStack_188;
      lStack_3e8 = lStack_b8;
      lStack_3f0 = lStack_c0;
      lStack_3d8 = lStack_a8;
      lStack_3e0 = lStack_b0;
      lStack_3c8 = lStack_98;
      lStack_3d0 = lStack_a0;
      *plVar12 = lVar2;
      plVar12[1] = lVar9;
      plVar12[2] = lVar2;
      plVar12[3] = lVar13;
      plVar12[4] = lVar10;
      plVar12[5] = lVar13;
      plVar12[7] = lStack_80;
      plVar12[6] = lStack_88;
      plVar12[8] = lStack_78;
      plVar12[9] = uStack_448;
      plVar12[10] = lStack_498;
      plVar12[0xb] = uStack_448;
      plVar12[0xc] = lVar27;
      plVar12[0xd] = lStack_4a0;
      plVar12[0xe] = lVar27;
      plVar12[0xf] = uStack_450;
      plVar12[0x10] = lStack_4a8;
      plVar12[0x11] = uStack_450;
      plVar12[0x12] = lVar28;
      plVar12[0x13] = lStack_4b0;
      plVar12[0x14] = lVar28;
      plVar12[0x15] = lVar30;
      plVar12[0x16] = lVar23;
      plVar12[0x17] = lVar30;
      plVar12[0x25] = lStack_1d0;
      plVar12[0x24] = lStack_1d8;
      plVar12[0x27] = lStack_248;
      plVar12[0x26] = lStack_1c8;
      plVar12[0x21] = lStack_1f0;
      plVar12[0x20] = lStack_1f8;
      plVar12[0x23] = lStack_1e0;
      plVar12[0x22] = lStack_1e8;
      plVar12[0x1d] = lStack_210;
      plVar12[0x1c] = lStack_218;
      plVar12[0x1f] = lStack_200;
      plVar12[0x1e] = lStack_208;
      plVar12[0x19] = lStack_230;
      plVar12[0x18] = lStack_238;
      plVar12[0x1b] = lStack_220;
      plVar12[0x1a] = lStack_228;
      plVar12[0x2d] = lStack_190;
      plVar12[0x2c] = lStack_198;
      plVar12[0x2f] = lStack_180;
      plVar12[0x2e] = lStack_188;
      plVar12[0x29] = lStack_1b0;
      plVar12[0x28] = lStack_1b8;
      plVar12[0x2b] = lStack_1a0;
      plVar12[0x2a] = lStack_1a8;
      plVar12[0x35] = lStack_150;
      plVar12[0x34] = lStack_158;
      plVar12[0x37] = lStack_140;
      plVar12[0x36] = lStack_148;
      plVar12[0x31] = lStack_170;
      plVar12[0x30] = lStack_178;
      plVar12[0x33] = lStack_160;
      plVar12[0x32] = lStack_168;
      plVar12[0x3d] = lStack_110;
      plVar12[0x3c] = lStack_118;
      plVar12[0x3f] = lStack_100;
      plVar12[0x3e] = lStack_108;
      plVar12[0x39] = lStack_130;
      plVar12[0x38] = lStack_138;
      plVar12[0x3b] = lStack_120;
      plVar12[0x3a] = lStack_128;
      plVar12[0x46] = lStack_2d0;
      plVar12[0x43] = lStack_e0;
      plVar12[0x42] = lStack_e8;
      plVar12[0x45] = lStack_d0;
      plVar12[0x44] = lStack_d8;
      plVar12[0x41] = lStack_f0;
      plVar12[0x40] = lStack_f8;
      plVar12[0x48] = lStack_b8;
      plVar12[0x47] = lStack_c0;
      plVar12[0x4a] = lStack_a8;
      plVar12[0x49] = lStack_b0;
      plVar12[0x4c] = lStack_98;
      plVar12[0x4b] = lStack_a0;
      *(undefined1 *)(plVar12 + 0x4d) = uVar3;
      *(undefined1 *)((long)plVar12 + 0x269) = uVar4;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    goto LAB_10373f2c0;
  }
  uVar29 = func_0x0001087c9084(8,param_3 * 0x270);
  FUN_1033e3d2c(&lStack_c0);
  FUN_1033e3d2c(&lStack_3f0);
  if ((uStack_4c8 & 0x7fffffffffffffff) != 0) {
    _free(lStack_4e8);
  }
  FUN_1032b919c(&lStack_238);
  if ((uStack_470 & 0x7fffffffffffffff) != 0) {
    _free(lStack_4b0);
  }
  if ((uStack_450 & 0x7fffffffffffffff) != 0) {
    _free(lStack_4a8);
  }
  if ((uStack_468 & 0x7fffffffffffffff) != 0) {
    _free(lStack_4a0);
  }
  if ((uStack_448 & 0x7fffffffffffffff) != 0) {
    _free(lStack_498);
  }
  if (lStack_458 != 0) {
    _free(uStack_480);
  }
  if (lStack_460 != 0) {
    _free(uStack_478);
  }
  FUN_1033eeae0(&lStack_428);
  auVar34 = __Unwind_Resume(uVar29);
  lVar26 = auVar34._8_8_;
  plVar8 = auVar34._0_8_;
  if (lVar32 == 0) {
    lStack_598 = 0;
    plStack_590 = (long *)0x8;
    plVar12 = plVar8;
LAB_10373f83c:
    plVar8[1] = (long)plStack_590;
    *plVar8 = lStack_598;
    plVar8[2] = lVar32;
    return plVar12;
  }
  lVar21 = lVar32 * 0x30;
  uStack_580 = uVar29;
  plVar12 = (long *)_malloc(lVar21);
  if (plVar12 != (long *)0x0) {
    plVar24 = plVar12 + 3;
    lStack_598 = lVar32;
    plStack_590 = plVar12;
    do {
      if (lVar21 == 0) break;
      uVar29 = *(undefined8 *)(lVar26 + 8);
      lVar2 = *(long *)(lVar26 + 0x10);
      if (lVar2 == 0) {
        lVar13 = 1;
        _memcpy(1,uVar29,0);
        uVar29 = *(undefined8 *)(lVar26 + 0x20);
        lVar9 = *(long *)(lVar26 + 0x28);
        if (lVar9 == 0) goto LAB_10373f79c;
LAB_10373f820:
        lVar10 = _malloc(lVar9);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar9);
LAB_10373f888:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10373f88c);
          (*pcVar5)();
        }
      }
      else {
        lVar13 = _malloc(lVar2);
        if (lVar13 == 0) {
          func_0x0001087c9084(1,lVar2);
          goto LAB_10373f888;
        }
        _memcpy(lVar13,uVar29,lVar2);
        uVar29 = *(undefined8 *)(lVar26 + 0x20);
        lVar9 = *(long *)(lVar26 + 0x28);
        if (lVar9 != 0) goto LAB_10373f820;
LAB_10373f79c:
        lVar10 = 1;
      }
      lVar26 = lVar26 + 0x30;
      plVar12 = (long *)_memcpy(lVar10,uVar29,lVar9);
      plVar24[-3] = lVar2;
      plVar24[-2] = lVar13;
      plVar24[-1] = lVar2;
      *plVar24 = lVar9;
      plVar24[1] = lVar10;
      plVar24[2] = lVar9;
      plVar24 = plVar24 + 6;
      lVar21 = lVar21 + -0x30;
    } while (lVar21 != 0);
    goto LAB_10373f83c;
  }
  uVar14 = func_0x0001087c9084(8,lVar21);
  if (unaff_x23 != 0) {
    _free();
    uStack_588 = uVar29;
    FUN_1032c0cd4(&lStack_598);
    uVar14 = __Unwind_Resume(uVar14);
  }
  uStack_588 = uVar29;
  FUN_1032c0cd4(&lStack_598);
  auVar34 = __Unwind_Resume(uVar14);
  pppppppuVar18 = auVar34._8_8_;
  pppppppuVar15 = auVar34._0_8_;
  bVar6 = 2;
  if (1 < *(byte *)(pppppppuVar15 + 1)) {
    bVar6 = *(byte *)(pppppppuVar15 + 1) - 2;
  }
  if (bVar6 < 2) {
    if (bVar6 == 0) {
      ppppppuVar17 = *pppppppuVar18;
      UNRECOVERED_JUMPTABLE = pppppppuVar18[1][3];
      puVar19 = &UNK_108d91314;
      uVar29 = 0x20;
      goto LAB_10373f9c4;
    }
    pppppppuVar1 = (undefined8 *******)*pppppppuVar18;
    ppppppuVar17 = pppppppuVar18[1];
    UNRECOVERED_JUMPTABLE = ppppppuVar17[3];
    uVar16 = (*(code *)UNRECOVERED_JUMPTABLE)(pppppppuVar1,&UNK_108d91334,0x17);
    if ((uVar16 & 1) != 0) {
      return (long *)0x1;
    }
    if (-1 < *(char *)((long)pppppppuVar18 + 0x12)) {
      uVar16 = (*(code *)UNRECOVERED_JUMPTABLE)(pppppppuVar1,&UNK_108f5892e,1);
      if ((uVar16 & 1) != 0) {
        return (long *)0x1;
      }
      pppppppuStack_628 = pppppppuVar15;
      bVar6 = (*(code *)pppppppuVar18[1][3])(*pppppppuVar18,&UNK_108d895ca,0xd);
      uStack_608._0_2_ = (ushort)bVar6;
      pppppppuStack_610 = pppppppuVar18;
      __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
                (&pppppppuStack_610,&UNK_108d7a285,7,&pppppppuStack_628,&UNK_10b2c0bc8);
      if ((uStack_608._1_1_ == '\x01') && (((ulong)uStack_608 & 1) == 0)) {
        if (-1 < *(char *)((long)pppppppuStack_610 + 0x12)) {
          uVar16 = (*(code *)pppppppuStack_610[1][3])(*pppppppuStack_610,&UNK_108f5894c,2);
          if ((uVar16 & 1) != 0) {
            return (long *)0x1;
          }
          goto LAB_10373fc60;
        }
        puVar19 = (undefined *)
                  (*(code *)pppppppuStack_610[1][3])(*pppppppuStack_610,&UNK_108f5894b,1);
      }
      else {
        puVar19 = uStack_608;
        if (((ulong)uStack_608 & 0x100) != 0) {
          return (long *)0x1;
        }
      }
      if (((ulong)puVar19 & 1) != 0) {
        return (long *)0x1;
      }
      goto LAB_10373fc60;
    }
    uVar16 = (*(code *)UNRECOVERED_JUMPTABLE)(pppppppuVar1,&UNK_108f5892f,2);
    if ((uVar16 & 1) != 0) {
      return (long *)0x1;
    }
    uStack_629 = 1;
    pppppppuStack_618 = (undefined8 *******)&uStack_629;
    ppppppuStack_600 = pppppppuVar18[2];
    pppppppuStack_610 = &pppppppuStack_628;
    uStack_608 = &UNK_10b392408;
    pppppppuStack_628 = pppppppuVar1;
    ppppppuStack_620 = ppppppuVar17;
    pppppppuStack_5f8 = pppppppuVar15;
    bStack_5e8 = __ZN68__LT_core__fmt__builders__PadAdapter_u20_as_u20_core__fmt__Write_GT_9write_str17h0a67632c7cefcdb4E
                           (&pppppppuStack_628,&UNK_108d895ca,0xd);
    pppppppuStack_5f0 = &pppppppuStack_610;
    bStack_5e7 = 0;
    __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
              (&pppppppuStack_5f0,&UNK_108d7a285,7,&pppppppuStack_5f8,&UNK_10b2c0bc8);
    if ((bStack_5e7 == 1) && ((bStack_5e8 & 1) == 0)) {
      if (*(char *)((long)pppppppuStack_5f0 + 0x12) < '\0') {
        ppppppuVar17 = *pppppppuStack_5f0;
        UNRECOVERED_JUMPTABLE = pppppppuStack_5f0[1][3];
        puVar19 = &UNK_108f5894b;
        uVar29 = 1;
      }
      else {
        ppppppuVar17 = *pppppppuStack_5f0;
        UNRECOVERED_JUMPTABLE = pppppppuStack_5f0[1][3];
        puVar19 = &UNK_108f5894c;
        uVar29 = 2;
      }
      uVar16 = (*(code *)UNRECOVERED_JUMPTABLE)(ppppppuVar17,puVar19,uVar29);
      if ((uVar16 & 1) != 0) {
        return (long *)0x1;
      }
    }
    else {
      if ((bStack_5e7 & 1) != 0) {
        return (long *)0x1;
      }
      if (bStack_5e8 != 0) {
        return (long *)0x1;
      }
    }
LAB_10373fc44:
    uVar16 = (**(code **)(uStack_608 + 0x18))(pppppppuStack_610,&UNK_108f5892c,2);
  }
  else {
    if (bVar6 != 2) {
      if (bVar6 == 3) {
        ppppppuVar17 = *pppppppuVar18;
        UNRECOVERED_JUMPTABLE = pppppppuVar18[1][3];
        puVar19 = &UNK_108d91359;
        uVar29 = 0x19;
      }
      else {
        ppppppuVar17 = *pppppppuVar18;
        UNRECOVERED_JUMPTABLE = pppppppuVar18[1][3];
        puVar19 = &UNK_108d91372;
        uVar29 = 0x17;
      }
LAB_10373f9c4:
                    /* WARNING: Could not recover jumptable at 0x00010373f9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar8 = (long *)(*(code *)UNRECOVERED_JUMPTABLE)(ppppppuVar17,puVar19,uVar29);
      return plVar8;
    }
    pppppppuVar1 = (undefined8 *******)*pppppppuVar18;
    ppppppuVar17 = pppppppuVar18[1];
    UNRECOVERED_JUMPTABLE = ppppppuVar17[3];
    pppppppuStack_5f0 = pppppppuVar15;
    uVar16 = (*(code *)UNRECOVERED_JUMPTABLE)(pppppppuVar1,&UNK_108d9134b,0xe);
    if ((uVar16 & 1) != 0) {
      return (long *)0x1;
    }
    if (*(char *)((long)pppppppuVar18 + 0x12) < '\0') {
      uVar16 = (*(code *)UNRECOVERED_JUMPTABLE)(pppppppuVar1,&UNK_108f5892f,2);
      if ((uVar16 & 1) != 0) {
        return (long *)0x1;
      }
      pppppppuStack_5f8 = (undefined8 *******)CONCAT71(pppppppuStack_5f8._1_7_,1);
      pppppppuStack_618 = &pppppppuStack_5f8;
      ppppppuStack_600 = pppppppuVar18[2];
      pppppppuStack_610 = &pppppppuStack_628;
      uStack_608 = &UNK_10b392408;
      pppppppuStack_628 = pppppppuVar1;
      ppppppuStack_620 = ppppppuVar17;
      iVar7 = func_0x000103269f88(&pppppppuStack_5f0,&pppppppuStack_610);
      if (iVar7 != 0) {
        return (long *)0x1;
      }
      goto LAB_10373fc44;
    }
    uVar16 = (*(code *)UNRECOVERED_JUMPTABLE)(pppppppuVar1,&UNK_108f5892e,1);
    if ((uVar16 & 1) != 0) {
      return (long *)0x1;
    }
    uVar16 = func_0x000103269f88(&pppppppuStack_5f0,pppppppuVar18);
  }
  if ((uVar16 & 1) != 0) {
    return (long *)0x1;
  }
LAB_10373fc60:
  plVar8 = (long *)(*(code *)pppppppuVar18[1][3])(*pppppppuVar18,&UNK_108f58934,1);
  return plVar8;
}

