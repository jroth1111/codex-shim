
/* WARNING: Possible PIC construction at 0x000101975340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101975344) */
/* WARNING: Type propagation algorithm not settling */

void __ZN4core5slice4sort6stable14driftsort_main17h178fd1da3b6a9f57E
               (undefined8 param_1,ulong param_2,undefined8 *param_3,ulong param_4,uint param_5,
               undefined8 *param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulong auStack_66c0 [66];
  byte abStack_64ab [75];
  ulong uStack_63f8;
  undefined8 *puStack_63f0;
  undefined8 uStack_63e8;
  undefined8 uStack_63e0;
  ulong uStack_63d8;
  ulong uStack_63d0;
  long lStack_63c8;
  ulong uStack_63c0;
  undefined8 uStack_63b8;
  undefined8 *******pppppppuStack_63b0;
  undefined8 uStack_63a8;
  undefined1 auStack_6398 [24];
  undefined8 uStack_6380;
  ulong uStack_5398;
  undefined1 *puStack_5390;
  undefined8 uStack_5388;
  undefined8 *******pppppppuStack_5340;
  undefined8 uStack_5338;
  undefined1 auStack_5328 [24];
  undefined8 uStack_5310;
  ulong uStack_4328;
  undefined1 *puStack_4320;
  undefined8 uStack_4318;
  undefined1 *******pppppppuStack_42d0;
  undefined8 uStack_42c8;
  undefined1 auStack_42b8 [24];
  undefined8 uStack_42a0;
  ulong uStack_32b8;
  undefined1 *puStack_32b0;
  undefined8 uStack_32a8;
  undefined1 ******ppppppuStack_3260;
  undefined8 uStack_3258;
  ulong uStack_3248;
  long lStack_3240;
  undefined8 uStack_3238;
  undefined8 uStack_3230;
  undefined8 uStack_3228;
  ulong uStack_3220;
  ulong uStack_3218;
  ulong uStack_3210;
  undefined8 uStack_3208;
  undefined1 *****pppppuStack_3200;
  undefined8 uStack_31f8;
  undefined1 auStack_31e8 [24];
  undefined8 uStack_31d0;
  ulong uStack_21e8;
  undefined1 *puStack_21e0;
  undefined8 uStack_21d8;
  undefined1 ****ppppuStack_2190;
  undefined8 uStack_2188;
  undefined1 auStack_2178 [24];
  undefined8 uStack_2160;
  ulong uStack_1178;
  undefined1 *puStack_1170;
  undefined8 uStack_1168;
  undefined1 ***pppuStack_1120;
  undefined8 uStack_1118;
  undefined8 auStack_1110 [512];
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  auVar36._8_8_ = param_2;
  auVar36._0_8_ = param_1;
  uVar11 = param_2 - (param_2 >> 1);
  if (0x4b1d < param_2) {
    param_2 = 0x4b1e;
  }
  if (param_2 <= uVar11) {
    param_2 = uVar11;
  }
  if (param_2 < 0x31) {
    param_2 = 0x30;
  }
  lVar20 = param_2 * 0x1a0;
  if (0x4ec4ec4ec4ec4e < uVar11) {
    auVar36 = func_0x0001087c9084(0,lVar20);
  }
  uVar11 = auVar36._8_8_;
  if (lVar20 == 0) {
    param_2 = 0;
    lVar4 = 8;
  }
  else {
    puVar6 = param_3;
    lVar4 = _malloc(lVar20);
    if (lVar4 == 0) {
      uVar5 = func_0x0001087c9084(8,lVar20);
      FUN_101930318(&uStack_58);
      __Unwind_Resume(uVar5);
      auVar37 = func_0x000108a07bc4();
      uVar13 = auVar37._8_8_;
      uStack_68 = 0x1019749c4;
      uVar12 = uVar13 - (uVar13 >> 1);
      if (0x86b1 < uVar13) {
        uVar13 = 0x86b2;
      }
      if (uVar13 <= uVar12) {
        uVar13 = uVar12;
      }
      if (uVar13 < 0x31) {
        uVar13 = 0x30;
      }
      lVar21 = uVar13 * 0xe8;
      lStack_90 = lVar20;
      puStack_70 = &stack0xfffffffffffffff0;
      if (0x8d3dcb08d3dcb0 < uVar12) {
        uStack_a0 = uVar11;
        uStack_98 = auVar36._0_8_;
        auVar37 = func_0x0001087c9084(0,lVar21);
        auVar36._8_8_ = uStack_a0;
        auVar36._0_8_ = uStack_98;
      }
      uStack_a0 = auVar36._8_8_;
      uStack_98 = auVar36._0_8_;
      if (lVar21 == 0) {
        uVar13 = 0;
        lVar4 = 8;
      }
      else {
        puVar8 = puVar6;
        lVar4 = _malloc(lVar21);
        auVar36._8_8_ = uStack_a0;
        auVar36._0_8_ = uStack_98;
        if (lVar4 == 0) {
          uVar5 = func_0x0001087c9084(8,lVar21);
          FUN_101963724(&uStack_b8);
          __Unwind_Resume(uVar5);
          auVar36 = func_0x000108a07bc4();
          uVar12 = auVar36._8_8_;
          uStack_c8 = 0x101974ac0;
          puVar6 = auStack_1110;
          auStack_1110[0] = 0;
          uVar15 = uVar12 - (uVar12 >> 1);
          uVar11 = uVar12;
          if (499999 < uVar12) {
            uVar11 = 500000;
          }
          if (uVar11 <= uVar15) {
            uVar11 = uVar15;
          }
          uVar19 = uVar11;
          if (uVar11 < 0x31) {
            uVar19 = 0x30;
          }
          ppuStack_d0 = &puStack_70;
          if (uVar11 < 0x101) {
            uVar19 = 0x100;
LAB_101974b5c:
            FUN_101978434(auVar36._0_8_,uVar12,puVar6,uVar19,uVar12 < 0x41,puVar8);
            if (0x100 < uVar11) {
              _free(puVar6);
            }
            return;
          }
          uVar5 = 0;
          puVar9 = puVar8;
          if ((uVar15 >> 0x3c == 0) && ((uVar19 & 0xfffffffffffffff) >> 0x3b == 0)) {
            puVar6 = (undefined8 *)_malloc(uVar19 << 4);
            if (puVar6 != (undefined8 *)0x0) goto LAB_101974b5c;
            uVar5 = 1;
          }
          uVar5 = func_0x0001087c9084(uVar5,uVar19 << 4);
          if (0x100 < uVar11) {
            _free(uVar13);
          }
          auVar36 = __Unwind_Resume(uVar5);
          uVar11 = auVar36._8_8_;
          uStack_1118 = 0x101974bc8;
          uStack_2160 = 0;
          uVar12 = uVar11 - (uVar11 >> 1);
          if (0x1b206 < uVar11) {
            uVar11 = 0x1b207;
          }
          if (uVar11 <= uVar12) {
            uVar11 = uVar12;
          }
          uVar15 = uVar11;
          if (uVar11 < 0x31) {
            uVar15 = 0x30;
          }
          auVar2._8_8_ = auVar36._0_8_;
          auVar2._0_8_ = uVar15;
          auVar37._8_8_ = auVar36._0_8_;
          auVar37._0_8_ = uVar15;
          pppuStack_1120 = &ppuStack_d0;
          if (0x38 < uVar11) {
            lVar20 = uVar15 * 0x48;
            if (uVar12 < 0x1c71c71c71c71c8) {
              if (lVar20 == 0) {
                uVar15 = 0;
                puVar7 = (undefined1 *)0x8;
              }
              else {
                puVar6 = puVar9;
                puVar7 = (undefined1 *)_malloc(lVar20);
                if (puVar7 == (undefined1 *)0x0) {
                  uVar5 = func_0x0001087c9084(8,lVar20);
                  if (0x38 < uVar11) {
                    FUN_101942ca8(&uStack_1178);
                  }
                  auVar36 = __Unwind_Resume(uVar5);
                  uVar12 = auVar36._8_8_;
                  uStack_2188 = 0x101974cfc;
                  uStack_31d0 = 0;
                  uVar15 = uVar12 - (uVar12 >> 1);
                  uVar11 = uVar12;
                  if (249999 < uVar12) {
                    uVar11 = 250000;
                  }
                  if (uVar11 <= uVar15) {
                    uVar11 = uVar15;
                  }
                  uVar19 = uVar11;
                  if (uVar11 < 0x31) {
                    uVar19 = 0x30;
                  }
                  ppppuStack_2190 = &pppuStack_1120;
                  if (uVar11 < 0x81) {
                    puVar7 = auStack_31e8;
                    uVar19 = 0x80;
LAB_101974da8:
                    FUN_101979554(auVar36._0_8_,uVar12,puVar7,uVar19,uVar12 < 0x41,puVar6);
                    if (0x80 < uVar11) {
                      _free(puVar7);
                    }
                    return;
                  }
                  uVar5 = 0;
                  uVar18 = uVar19 * 0x20;
                  puVar8 = puVar6;
                  if ((uVar15 >> 0x3b == 0) && (auVar37 = auVar2, uVar18 < 0x7ffffffffffffff9)) {
                    puVar7 = (undefined1 *)_malloc(uVar18);
                    if (puVar7 != (undefined1 *)0x0) {
                      uStack_21d8 = 0;
                      uStack_21e8 = uVar19;
                      puStack_21e0 = puVar7;
                      goto LAB_101974da8;
                    }
                    uVar5 = 8;
                    auVar37 = auVar36;
                  }
                  uVar5 = func_0x0001087c9084(uVar5,uVar18);
                  if (0x80 < uVar11) {
                    FUN_101930dd4(&uStack_21e8);
                  }
                  auVar36 = __Unwind_Resume(uVar5);
                  uVar12 = auVar36._8_8_;
                  uStack_31f8 = 0x101974e18;
                  uVar15 = uVar12 - (uVar12 >> 1);
                  if (0x12c7a < uVar12) {
                    uVar12 = 0x12c7b;
                  }
                  if (uVar12 <= uVar15) {
                    uVar12 = uVar15;
                  }
                  if (uVar12 < 0x31) {
                    uVar12 = 0x30;
                  }
                  lVar20 = uVar12 * 0x68;
                  uStack_3220 = uVar11;
                  uStack_3218 = uVar18;
                  uStack_3210 = uVar13;
                  uStack_3208 = uVar5;
                  pppppuStack_3200 = &ppppuStack_2190;
                  if (0x13b13b13b13b13b < uVar15) {
                    uStack_3230 = auVar37._8_8_;
                    uStack_3228 = auVar37._0_8_;
                    auVar36 = func_0x0001087c9084(0,lVar20);
                    auVar37._8_8_ = uStack_3230;
                    auVar37._0_8_ = uStack_3228;
                  }
                  uStack_3230 = auVar37._8_8_;
                  uStack_3228 = auVar37._0_8_;
                  if (lVar20 == 0) {
                    uVar12 = 0;
                    lStack_3240 = 8;
LAB_101974eb8:
                    uStack_3230 = auVar37._8_8_;
                    uStack_3228 = auVar37._0_8_;
                    uStack_3238 = 0;
                    uStack_3248 = uVar12;
                    FUN_101977d94(auVar36._0_8_,auVar36._8_8_,lStack_3240,uVar12,
                                  auVar36._8_8_ < 0x41,puVar8);
                    FUN_101935c9c(&uStack_3248);
                    return;
                  }
                  puVar6 = puVar8;
                  lStack_3240 = _malloc(lVar20);
                  auVar37._8_8_ = uStack_3230;
                  auVar37._0_8_ = uStack_3228;
                  if (lStack_3240 != 0) goto LAB_101974eb8;
                  uVar5 = func_0x0001087c9084(8,lVar20);
                  FUN_101935c9c(&uStack_3248);
                  auVar36 = __Unwind_Resume(uVar5);
                  uVar11 = auVar36._8_8_;
                  uStack_3258 = 0x101974f14;
                  uStack_42a0 = 0;
                  uVar13 = uVar11 - (uVar11 >> 1);
                  if (0x28b09 < uVar11) {
                    uVar11 = 0x28b0a;
                  }
                  if (uVar11 <= uVar13) {
                    uVar11 = uVar13;
                  }
                  uVar15 = uVar11;
                  if (uVar11 < 0x31) {
                    uVar15 = 0x30;
                  }
                  ppppppuStack_3260 = &pppppuStack_3200;
                  if (uVar11 < 0x56) {
                    puVar7 = auStack_42b8;
                    uVar15 = 0x55;
                  }
                  else {
                    lVar20 = uVar15 * 0x30;
                    puVar8 = puVar6;
                    if (0x2aaaaaaaaaaaaaa < uVar13) {
                      auVar36 = func_0x0001087c9084(0,lVar20);
                    }
                    if (lVar20 == 0) {
                      uVar15 = 0;
                      puVar7 = (undefined1 *)0x8;
                    }
                    else {
                      puVar7 = (undefined1 *)_malloc(lVar20);
                      if (puVar7 == (undefined1 *)0x0) {
                        uVar5 = func_0x0001087c9084(8,lVar20);
                        if (0x55 < uVar11) {
                          FUN_1019396f8(&uStack_32b8);
                        }
                        auVar36 = __Unwind_Resume(uVar5);
                        uVar13 = auVar36._8_8_;
                        uStack_42c8 = 0x101975040;
                        uStack_5310 = 0;
                        uVar15 = uVar13 - (uVar13 >> 1);
                        uVar11 = uVar13;
                        if (249999 < uVar13) {
                          uVar11 = 250000;
                        }
                        if (uVar11 <= uVar15) {
                          uVar11 = uVar15;
                        }
                        uVar19 = uVar11;
                        if (uVar11 < 0x31) {
                          uVar19 = 0x30;
                        }
                        pppppppuStack_42d0 = &ppppppuStack_3260;
                        if (uVar11 < 0x81) {
                          puVar7 = auStack_5328;
                          uVar19 = 0x80;
LAB_1019750ec:
                          FUN_1019771a0(auVar36._0_8_,uVar13,puVar7,uVar19,uVar13 < 0x41,puVar8);
                          if (0x80 < uVar11) {
                            _free(puVar7);
                          }
                          return;
                        }
                        uVar5 = 0;
                        uVar18 = uVar19 * 0x20;
                        puVar6 = puVar8;
                        if ((uVar15 >> 0x3b == 0) && (uVar18 < 0x7ffffffffffffff9)) {
                          puVar7 = (undefined1 *)_malloc(uVar18);
                          if (puVar7 != (undefined1 *)0x0) {
                            uStack_4318 = 0;
                            uStack_4328 = uVar19;
                            puStack_4320 = puVar7;
                            goto LAB_1019750ec;
                          }
                          uVar5 = 8;
                        }
                        uVar5 = func_0x0001087c9084(uVar5,uVar18);
                        if (0x80 < uVar11) {
                          FUN_101930dd4(&uStack_4328);
                        }
                        auVar36 = __Unwind_Resume(uVar5);
                        uVar11 = auVar36._8_8_;
                        uStack_5338 = 0x10197515c;
                        uStack_6380 = 0;
                        uVar13 = uVar11 - (uVar11 >> 1);
                        if (0x51614 < uVar11) {
                          uVar11 = 0x51615;
                        }
                        if (uVar11 <= uVar13) {
                          uVar11 = uVar13;
                        }
                        uVar15 = uVar11;
                        if (uVar11 < 0x31) {
                          uVar15 = 0x30;
                        }
                        pppppppuStack_5340 = &pppppppuStack_42d0;
                        if (uVar11 < 0xab) {
                          puVar7 = auStack_6398;
                          uVar15 = 0xaa;
                        }
                        else {
                          lVar20 = uVar15 * 0x18;
                          puVar8 = puVar6;
                          if (0x555555555555555 < uVar13) {
                            auVar36 = func_0x0001087c9084(0,lVar20);
                          }
                          if (lVar20 == 0) {
                            uVar15 = 0;
                            puVar7 = (undefined1 *)0x8;
                          }
                          else {
                            puVar7 = (undefined1 *)_malloc(lVar20);
                            if (puVar7 == (undefined1 *)0x0) {
                              uVar5 = func_0x0001087c9084(8,lVar20);
                              if (0xaa < uVar11) {
                                FUN_101965f14(&uStack_5398);
                              }
                              auVar37 = __Unwind_Resume(uVar5);
                              uVar13 = auVar37._8_8_;
                              uStack_63e0 = auVar36._0_8_;
                              uStack_63d8 = uVar15;
                              uStack_63d0 = uVar11;
                              lStack_63c8 = lVar20;
                              uStack_63c0 = uVar12;
                              uStack_63b8 = uVar5;
                              pppppppuStack_63b0 = &pppppppuStack_5340;
                              uStack_63a8 = 0x101975288;
                              uVar11 = uVar13 - (uVar13 >> 1);
                              if (0x12c7a < uVar13) {
                                uVar13 = 0x12c7b;
                              }
                              if (uVar13 <= uVar11) {
                                uVar13 = uVar11;
                              }
                              if (uVar13 < 0x31) {
                                uVar13 = 0x30;
                              }
                              lVar20 = uVar13 * 0x68;
                              if (0x13b13b13b13b13b < uVar11) {
                                auVar37 = func_0x0001087c9084(0,lVar20);
                              }
                              if (lVar20 == 0) {
                                puVar6 = (undefined8 *)0x8;
                                uVar13 = 0;
                              }
                              else {
                                puVar9 = puVar8;
                                puVar6 = (undefined8 *)_malloc(lVar20);
                                if (puVar6 == (undefined8 *)0x0) {
                                  uVar5 = func_0x0001087c9084(8,lVar20);
                                  FUN_101935c9c(&uStack_63f8);
                                  auVar37 = __Unwind_Resume(uVar5);
                                  goto SUB_101975384;
                                }
                              }
                              param_4 = uVar13;
                              puVar9 = puVar6;
                              uStack_63f8 = param_4;
                              puStack_63f0 = puVar9;
                              uStack_63e8 = 0;
                              param_5 = (uint)(auVar37._8_8_ < 0x41);
                              param_6 = puVar8;
SUB_101975384:
                              uVar11 = auVar37._8_8_;
                              lVar20 = auVar37._0_8_;
                              if (uVar11 < 2) {
                                return;
                              }
                              uVar13 = 0;
                              if (uVar11 != 0) {
                                uVar13 = 0x4000000000000000 / uVar11;
                              }
                              if (uVar13 * uVar11 != 0x4000000000000000) {
                                uVar13 = uVar13 + 1;
                              }
                              if (uVar11 < 0x1001) {
                                uVar12 = uVar11 - (uVar11 >> 1);
                                if (0x3f < uVar12) {
                                  uVar12 = 0x40;
                                }
                              }
                              else {
                                uVar17 = (uint)LZCOUNT(uVar11 | 1) ^ 0x3f;
                                uVar12 = (ulong)((uVar17 & 1) + (uVar17 >> 1));
                                uVar12 = (1L << (uVar12 & 0x3f)) + (uVar11 >> (uVar12 & 0x3f)) >> 1;
                              }
                              uVar19 = 0;
                              uVar15 = 0;
                              uVar27 = 1;
                              uVar18 = uVar11;
                              if (uVar11 == 0) goto LAB_1019754b4;
LAB_10197545c:
                              lVar4 = lVar20 + uVar19 * 0x68;
                              if (uVar18 < uVar12) {
LAB_101975470:
                                if ((param_5 & 1) == 0) {
                                  if (uVar12 <= uVar18) {
                                    uVar18 = uVar12;
                                  }
                                  uVar18 = uVar18 << 1;
                                }
                                else {
                                  if (0x1f < uVar18) {
                                    uVar18 = 0x20;
                                  }
                                  __ZN4core5slice4sort6stable9quicksort9quicksort17h7c9f8b224df92aaeE
                                            (lVar4,uVar18,puVar9,param_4,0,0,param_6);
                                  uVar18 = uVar18 << 1 | 1;
                                }
                              }
                              else {
                                if (1 < uVar18) {
                                  uVar17 = *(uint *)(lVar4 + 200);
                                  if (*(uint *)(lVar4 + 0x60) == uVar17) {
                                    uVar14 = *(ulong *)(lVar4 + 0x90);
                                    uVar22 = *(ulong *)(lVar4 + 0x28);
                                    uVar29 = uVar14;
                                    if (uVar22 <= uVar14) {
                                      uVar29 = uVar22;
                                    }
                                    iVar3 = _memcmp(*(undefined8 *)(lVar4 + 0x88),
                                                    *(undefined8 *)(lVar4 + 0x20),uVar29);
                                    lVar21 = uVar14 - uVar22;
                                    if (iVar3 != 0) {
                                      lVar21 = (long)iVar3;
                                    }
                                    if (lVar21 < 0) goto LAB_101975544;
LAB_10197552c:
                                    if (uVar18 == 2) {
                                      bVar10 = false;
                                      uVar29 = 2;
                                    }
                                    else {
                                      puVar6 = (undefined8 *)(lVar20 + 0xf0 + uVar19 * 0x68);
                                      uVar29 = 2;
                                      do {
                                        uVar1 = *(uint *)(puVar6 + 8);
                                        if (uVar17 == uVar1) {
                                          uVar22 = puVar6[1];
                                          uVar24 = puVar6[-0xc];
                                          uVar14 = uVar22;
                                          if (uVar24 <= uVar22) {
                                            uVar14 = uVar24;
                                          }
                                          iVar3 = _memcmp(*puVar6,puVar6[-0xd],uVar14);
                                          lVar21 = uVar22 - uVar24;
                                          if (iVar3 != 0) {
                                            lVar21 = (long)iVar3;
                                          }
                                          if (lVar21 < 0) {
LAB_1019755b4:
                                            bVar10 = false;
                                            goto LAB_101975634;
                                          }
                                        }
                                        else if (uVar17 < uVar1) goto LAB_1019755b4;
                                        uVar29 = uVar29 + 1;
                                        puVar6 = puVar6 + 0xd;
                                        uVar17 = uVar1;
                                      } while (uVar18 != uVar29);
                                      bVar10 = false;
                                      uVar29 = uVar18;
                                    }
                                  }
                                  else {
                                    if (uVar17 <= *(uint *)(lVar4 + 0x60)) goto LAB_10197552c;
LAB_101975544:
                                    if (uVar18 == 2) {
                                      bVar10 = true;
                                      uVar29 = 2;
                                    }
                                    else {
                                      puVar6 = (undefined8 *)(lVar20 + 0xf0 + uVar19 * 0x68);
                                      uVar29 = 2;
                                      do {
                                        uVar1 = *(uint *)(puVar6 + 8);
                                        if (uVar17 == uVar1) {
                                          uVar22 = puVar6[1];
                                          uVar24 = puVar6[-0xc];
                                          uVar14 = uVar22;
                                          if (uVar24 <= uVar22) {
                                            uVar14 = uVar24;
                                          }
                                          iVar3 = _memcmp(*puVar6,puVar6[-0xd],uVar14);
                                          lVar21 = uVar22 - uVar24;
                                          if (iVar3 != 0) {
                                            lVar21 = (long)iVar3;
                                          }
                                          if (-1 < lVar21) {
LAB_101975618:
                                            bVar10 = true;
                                            goto LAB_101975634;
                                          }
                                        }
                                        else if (uVar1 <= uVar17) goto LAB_101975618;
                                        uVar29 = uVar29 + 1;
                                        puVar6 = puVar6 + 0xd;
                                        uVar17 = uVar1;
                                      } while (uVar18 != uVar29);
                                      bVar10 = true;
                                      uVar29 = uVar18;
                                    }
                                  }
LAB_101975634:
                                  if (uVar29 < uVar12) goto LAB_101975470;
                                  uVar18 = uVar29;
                                  if ((bVar10) && (1 < uVar29)) {
                                    uVar14 = uVar29 >> 1;
                                    puVar6 = (undefined8 *)(lVar20 + 0x30 + uVar19 * 0x68);
                                    puVar8 = (undefined8 *)
                                             (lVar20 + -0x28 + uVar19 * 0x68 + uVar29 * 0x68);
                                    do {
                                      uVar30 = puVar6[-5];
                                      uVar5 = puVar6[-6];
                                      uVar32 = puVar6[-3];
                                      uVar31 = puVar6[-4];
                                      uVar33 = puVar8[-8];
                                      uVar35 = puVar8[-5];
                                      uVar34 = puVar8[-6];
                                      puVar6[-5] = puVar8[-7];
                                      puVar6[-6] = uVar33;
                                      puVar6[-3] = uVar35;
                                      puVar6[-4] = uVar34;
                                      puVar8[-7] = uVar30;
                                      puVar8[-8] = uVar5;
                                      puVar8[-5] = uVar32;
                                      puVar8[-6] = uVar31;
                                      uVar30 = puVar6[-1];
                                      uVar5 = puVar6[-2];
                                      uVar32 = puVar6[1];
                                      uVar31 = *puVar6;
                                      uVar33 = puVar8[-4];
                                      uVar35 = puVar8[-1];
                                      uVar34 = puVar8[-2];
                                      puVar6[-1] = puVar8[-3];
                                      puVar6[-2] = uVar33;
                                      puVar6[1] = uVar35;
                                      *puVar6 = uVar34;
                                      puVar8[-3] = uVar30;
                                      puVar8[-4] = uVar5;
                                      puVar8[-1] = uVar32;
                                      puVar8[-2] = uVar31;
                                      uVar31 = puVar6[3];
                                      uVar30 = puVar6[2];
                                      uVar33 = puVar6[5];
                                      uVar32 = puVar6[4];
                                      uVar5 = *puVar8;
                                      uVar35 = puVar8[3];
                                      uVar34 = puVar8[2];
                                      puVar6[3] = puVar8[1];
                                      puVar6[2] = uVar5;
                                      puVar6[5] = uVar35;
                                      puVar6[4] = uVar34;
                                      uVar5 = puVar6[6];
                                      puVar6[6] = puVar8[4];
                                      puVar6 = puVar6 + 0xd;
                                      puVar8[1] = uVar31;
                                      *puVar8 = uVar30;
                                      puVar8[3] = uVar33;
                                      puVar8[2] = uVar32;
                                      puVar8[4] = uVar5;
                                      puVar8 = puVar8 + -0xd;
                                      uVar14 = uVar14 - 1;
                                    } while (uVar14 != 0);
                                  }
                                }
                                uVar18 = uVar18 << 1 | 1;
                              }
                              lVar4 = LZCOUNT((uVar19 * 2 + (uVar18 >> 1)) * uVar13 ^
                                              (uVar19 * 2 - (uVar27 >> 1)) * uVar13);
                              uVar29 = uVar27;
                              do {
                                uVar27 = uVar18;
                                if (1 < uVar15) {
                                  do {
                                    while( true ) {
                                      uVar18 = uVar15 - 1;
                                      if ((uint)abStack_64ab[uVar15] < (uint)lVar4)
                                      goto LAB_1019759a8;
                                      uVar22 = auStack_66c0[uVar18];
                                      uVar24 = uVar22 >> 1;
                                      uVar26 = uVar29 >> 1;
                                      uVar14 = uVar24 + uVar26;
                                      uVar15 = uVar18;
                                      if (uVar14 <= param_4 &&
                                          (((uint)uVar22 | (uint)uVar29) & 1) == 0) break;
                                      puVar6 = (undefined8 *)(lVar20 + (uVar19 - uVar14) * 0x68);
                                      if ((uVar22 & 1) == 0) {
                                        __ZN4core5slice4sort6stable9quicksort9quicksort17h7c9f8b224df92aaeE
                                                  (puVar6,uVar24,puVar9,param_4,
                                                   (int)LZCOUNT(uVar24 | 1) << 1 ^ 0x7e,0,param_6);
                                      }
                                      if ((uVar29 & 1) == 0) {
                                        __ZN4core5slice4sort6stable9quicksort9quicksort17h7c9f8b224df92aaeE
                                                  (puVar6 + uVar24 * 0xd,uVar26,puVar9,param_4,
                                                   (int)LZCOUNT(uVar26 | 1) << 1 ^ 0x7e,0,param_6);
                                      }
                                      if ((1 < uVar22) && (1 < uVar29)) {
                                        uVar29 = uVar26;
                                        if (uVar24 <= uVar26) {
                                          uVar29 = uVar24;
                                        }
                                        if (uVar29 <= param_4) {
                                          puVar23 = puVar6 + uVar24 * 0xd;
                                          puVar8 = puVar23;
                                          if (uVar24 <= uVar26) {
                                            puVar8 = puVar6;
                                          }
                                          _memcpy(puVar9,puVar8,uVar29 * 0x68);
                                          puVar28 = puVar9 + uVar29 * 0xd;
                                          puVar16 = puVar9;
                                          puVar8 = puVar6;
                                          puVar25 = (undefined8 *)(lVar20 + -0x68 + uVar19 * 0x68);
                                          if (uVar26 < uVar24) {
                                            do {
                                              uVar29 = (ulong)(*(uint *)(puVar23 + -1) <
                                                              *(uint *)(puVar28 + -1));
                                              if (*(uint *)(puVar23 + -1) == *(uint *)(puVar28 + -1)
                                                 ) {
                                                uVar22 = puVar28[-8];
                                                uVar24 = puVar23[-8];
                                                uVar29 = uVar22;
                                                if (uVar24 <= uVar22) {
                                                  uVar29 = uVar24;
                                                }
                                                iVar3 = _memcmp(puVar28[-9],puVar23[-9],uVar29);
                                                uVar29 = uVar22 - uVar24;
                                                if (iVar3 != 0) {
                                                  uVar29 = (long)iVar3;
                                                }
                                                uVar29 = uVar29 >> 0x3f;
                                              }
                                              puVar8 = puVar23 + -0xd;
                                              if ((uint)uVar29 == 0) {
                                                puVar8 = puVar28 + -0xd;
                                              }
                                              uVar30 = puVar8[1];
                                              uVar5 = *puVar8;
                                              uVar31 = puVar8[2];
                                              uVar33 = puVar8[5];
                                              uVar32 = puVar8[4];
                                              puVar25[3] = puVar8[3];
                                              puVar25[2] = uVar31;
                                              puVar25[5] = uVar33;
                                              puVar25[4] = uVar32;
                                              puVar25[1] = uVar30;
                                              *puVar25 = uVar5;
                                              uVar30 = puVar8[7];
                                              uVar5 = puVar8[6];
                                              uVar32 = puVar8[9];
                                              uVar31 = puVar8[8];
                                              uVar34 = puVar8[0xb];
                                              uVar33 = puVar8[10];
                                              puVar25[0xc] = puVar8[0xc];
                                              puVar25[9] = uVar32;
                                              puVar25[8] = uVar31;
                                              puVar25[0xb] = uVar34;
                                              puVar25[10] = uVar33;
                                              puVar25[7] = uVar30;
                                              puVar25[6] = uVar5;
                                              puVar8 = puVar23 + -0xd +
                                                       (ulong)((uint)uVar29 ^ 1) * 0xd;
                                              puVar28 = puVar28 + -0xd + uVar29 * 0xd;
                                              puVar23 = puVar8;
                                              puVar25 = puVar25 + -0xd;
                                            } while (puVar8 != puVar6 && puVar28 != puVar9);
                                          }
                                          else {
                                            do {
                                              uVar29 = (ulong)(*(uint *)(puVar16 + 0xc) <
                                                              *(uint *)(puVar23 + 0xc));
                                              if (*(uint *)(puVar16 + 0xc) ==
                                                  *(uint *)(puVar23 + 0xc)) {
                                                uVar22 = puVar23[5];
                                                uVar24 = puVar16[5];
                                                uVar29 = uVar22;
                                                if (uVar24 <= uVar22) {
                                                  uVar29 = uVar24;
                                                }
                                                iVar3 = _memcmp(puVar23[4],puVar16[4],uVar29);
                                                uVar29 = uVar22 - uVar24;
                                                if (iVar3 != 0) {
                                                  uVar29 = (long)iVar3;
                                                }
                                                uVar29 = uVar29 >> 0x3f;
                                              }
                                              puVar6 = puVar23;
                                              if ((uint)uVar29 == 0) {
                                                puVar6 = puVar16;
                                              }
                                              uVar30 = puVar6[1];
                                              uVar5 = *puVar6;
                                              uVar31 = puVar6[2];
                                              uVar33 = puVar6[5];
                                              uVar32 = puVar6[4];
                                              puVar8[3] = puVar6[3];
                                              puVar8[2] = uVar31;
                                              puVar8[5] = uVar33;
                                              puVar8[4] = uVar32;
                                              puVar8[1] = uVar30;
                                              *puVar8 = uVar5;
                                              uVar30 = puVar6[7];
                                              uVar5 = puVar6[6];
                                              uVar32 = puVar6[9];
                                              uVar31 = puVar6[8];
                                              uVar34 = puVar6[0xb];
                                              uVar33 = puVar6[10];
                                              puVar8[0xc] = puVar6[0xc];
                                              puVar8[9] = uVar32;
                                              puVar8[8] = uVar31;
                                              puVar8[0xb] = uVar34;
                                              puVar8[10] = uVar33;
                                              puVar8[7] = uVar30;
                                              puVar8[6] = uVar5;
                                              puVar16 = puVar16 + (ulong)((uint)uVar29 ^ 1) * 0xd;
                                              puVar23 = puVar23 + uVar29 * 0xd;
                                              puVar8 = puVar8 + 0xd;
                                            } while (puVar16 != puVar28 &&
                                                     puVar23 !=
                                                     (undefined8 *)(lVar20 + uVar19 * 0x68));
                                          }
                                          _memcpy(puVar8,puVar16,(long)puVar28 - (long)puVar16);
                                        }
                                      }
                                      uVar29 = uVar14 * 2 | 1;
                                      if (uVar18 < 2) goto LAB_10197599c;
                                    }
                                    uVar29 = uVar14 * 2;
                                  } while (1 < uVar18);
LAB_10197599c:
                                  uVar15 = 1;
                                }
LAB_1019759a8:
                                auStack_66c0[uVar15] = uVar29;
                                abStack_64ab[uVar15 + 1] = (byte)lVar4;
                                if (uVar11 <= uVar19) {
                                  if ((uVar29 & 1) != 0) {
                                    return;
                                  }
                                  __ZN4core5slice4sort6stable9quicksort9quicksort17h7c9f8b224df92aaeE
                                            (lVar20,uVar11,puVar9);
                                  return;
                                }
                                uVar15 = uVar15 + 1;
                                uVar19 = uVar19 + (uVar27 >> 1);
                                uVar18 = uVar11 - uVar19;
                                if (uVar19 <= uVar11 && uVar18 != 0) goto LAB_10197545c;
LAB_1019754b4:
                                lVar4 = 0;
                                uVar18 = 1;
                                uVar29 = uVar27;
                              } while( true );
                            }
                          }
                          uStack_5388 = 0;
                          uStack_5398 = uVar15;
                          puStack_5390 = puVar7;
                        }
                        FUN_101975a24(auVar36._0_8_,auVar36._8_8_,puVar7,uVar15,auVar36._8_8_ < 0x41
                                      ,puVar6);
                        if (0xaa < uVar11) {
                          _free(puVar7);
                        }
                        return;
                      }
                    }
                    uStack_32a8 = 0;
                    uStack_32b8 = uVar15;
                    puStack_32b0 = puVar7;
                  }
                  FUN_101976b88(auVar36._0_8_,auVar36._8_8_,puVar7,uVar15,auVar36._8_8_ < 0x41,
                                puVar6);
                  if (0x55 < uVar11) {
                    _free(puVar7);
                  }
                  return;
                }
              }
              uStack_1168 = 0;
              uStack_1178 = uVar15;
              puStack_1170 = puVar7;
              goto LAB_101974c90;
            }
            auVar36 = func_0x0001087c9084(0,lVar20);
          }
          puVar7 = auStack_2178;
          uVar15 = 0x38;
LAB_101974c90:
          FUN_10197774c(auVar36._0_8_,auVar36._8_8_,puVar7,uVar15,auVar36._8_8_ < 0x41,puVar9);
          if (0x38 < uVar11) {
            _free(puVar7);
          }
          return;
        }
      }
      uStack_a0 = auVar36._8_8_;
      uStack_98 = auVar36._0_8_;
      uStack_a8 = 0;
      uStack_b8 = uVar13;
      lStack_b0 = lVar4;
      FUN_101978a80(auVar37._0_8_,auVar37._8_8_,lVar4,uVar13,auVar37._8_8_ < 0x41,puVar6);
      goto code_r0x000108aa97c4;
    }
  }
  uStack_48 = 0;
  uStack_58 = param_2;
  lStack_50 = lVar4;
  FUN_101976238(auVar36._0_8_,uVar11,lVar4,param_2,uVar11 < 0x41,param_3);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar4);
  return;
}

