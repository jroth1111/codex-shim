
/* WARNING: Possible PIC construction at 0x00010394ecf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010394ecfc) */
/* WARNING: Type propagation algorithm not settling */

void __ZN4core5slice4sort6stable14driftsort_main17h8327118381420963E
               (undefined8 param_1,ulong param_2,long param_3,ulong param_4,uint param_5,
               long param_6)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x24;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong uStack_528;
  ulong auStack_500 [66];
  byte abStack_2eb [75];
  ulong uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined1 *****pppppuStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined1 ****ppppuStack_190;
  undefined8 uStack_188;
  ulong uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 ***pppuStack_130;
  undefined8 uStack_128;
  ulong uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_d0;
  undefined8 uStack_c8;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  ulong uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  uVar8 = param_2 - (param_2 >> 1);
  uVar7 = param_2;
  if (0x3d08 < param_2) {
    uVar7 = 0x3d09;
  }
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (uVar7 < 0x31) {
    uVar7 = 0x30;
  }
  uVar10 = uVar7 * 0x200;
  lVar11 = param_3;
  if ((uVar8 >> 0x37 == 0) && (uVar10 < 0x7ffffffffffffff9)) {
    lVar4 = _malloc(uVar10);
    if (lVar4 != 0) {
      uStack_48 = 0;
      uStack_58 = uVar7;
      lStack_50 = lVar4;
      FUN_10394f368(param_1,param_2,lVar4,uVar7,param_2 < 0x41,param_3);
      goto _free;
    }
    uVar3 = 8;
    unaff_x24 = param_2;
  }
  uVar3 = func_0x0001087c9084(uVar3,uVar10);
  FUN_1039455ec(&uStack_58);
  auVar26 = __Unwind_Resume(uVar3);
  uVar7 = auVar26._8_8_;
  uStack_68 = 0x10394e858;
  uVar8 = uVar7 - (uVar7 >> 1);
  if (0x5f45 < uVar7) {
    uVar7 = 0x5f46;
  }
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (uVar7 < 0x31) {
    uVar7 = 0x30;
  }
  lVar4 = uVar7 * 0x148;
  uStack_a0 = unaff_x24;
  uStack_98 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if (0x63e7063e7063e7 < uVar8) {
    auVar26 = func_0x0001087c9084(0,lVar4);
  }
  uVar8 = auVar26._8_8_;
  if (lVar4 == 0) {
    uVar7 = 0;
    lStack_b0 = 8;
LAB_10394e8f4:
    uStack_a8 = 0;
    uStack_b8 = uVar7;
    FUN_10395085c(auVar26._0_8_,uVar8,lStack_b0,uVar7,uVar8 < 0x41,lVar11);
    FUN_103942a64(&uStack_b8);
    return;
  }
  lVar12 = lVar11;
  lStack_b0 = _malloc(lVar4);
  if (lStack_b0 != 0) goto LAB_10394e8f4;
  uVar3 = func_0x0001087c9084(8,lVar4);
  FUN_103942a64(&uStack_b8);
  auVar27 = __Unwind_Resume(uVar3);
  uVar10 = auVar27._8_8_;
  uStack_c8 = 0x10394e950;
  uVar6 = uVar10 - (uVar10 >> 1);
  if (0x2aec < uVar10) {
    uVar10 = 0x2aed;
  }
  if (uVar10 <= uVar6) {
    uVar10 = uVar6;
  }
  if (uVar10 < 0x31) {
    uVar10 = 0x30;
  }
  lVar11 = uVar10 * 0x2d8;
  uStack_100 = unaff_x24;
  lStack_e8 = lVar4;
  uStack_e0 = uVar7;
  uStack_d8 = uVar3;
  ppuStack_d0 = &puStack_70;
  if (0x2d02d02d02d02d < uVar6) {
    uStack_f8 = uVar8;
    uStack_f0 = auVar26._0_8_;
    auVar27 = func_0x0001087c9084(0,lVar11);
    auVar26._8_8_ = uStack_f8;
    auVar26._0_8_ = uStack_f0;
  }
  uVar7 = auVar27._8_8_;
  uStack_f8 = auVar26._8_8_;
  uStack_f0 = auVar26._0_8_;
  if (lVar11 == 0) {
    uVar10 = 0;
    lStack_110 = 8;
LAB_10394e9ec:
    uStack_f8 = auVar26._8_8_;
    uStack_f0 = auVar26._0_8_;
    uStack_108 = 0;
    uStack_118 = uVar10;
    FUN_103951eb0(auVar27._0_8_,uVar7,lStack_110,uVar10,uVar7 < 0x41,lVar12);
    FUN_10392df6c(&uStack_118);
    return;
  }
  lVar4 = lVar12;
  lStack_110 = _malloc(lVar11);
  auVar26._8_8_ = uStack_f8;
  auVar26._0_8_ = uStack_f0;
  if (lStack_110 != 0) goto LAB_10394e9ec;
  uVar3 = func_0x0001087c9084(8,lVar11);
  FUN_10392df6c(&uStack_118);
  __Unwind_Resume(uVar3);
  auVar28 = func_0x000108a07bc4();
  uVar8 = auVar28._8_8_;
  uStack_128 = 0x10394ea4c;
  uVar6 = uVar8 - (uVar8 >> 1);
  if (0x1d96 < uVar8) {
    uVar8 = 0x1d97;
  }
  if (uVar8 <= uVar6) {
    uVar8 = uVar6;
  }
  if (uVar8 < 0x31) {
    uVar8 = 0x30;
  }
  lVar12 = uVar8 * 0x420;
  uStack_160 = unaff_x24;
  lStack_148 = lVar11;
  uStack_140 = uVar10;
  uStack_138 = uVar3;
  pppuStack_130 = &ppuStack_d0;
  if (0x1f07c1f07c1f07 < uVar6) {
    uStack_158 = uVar7;
    uStack_150 = auVar27._0_8_;
    auVar28 = func_0x0001087c9084(0,lVar12);
    auVar27._8_8_ = uStack_158;
    auVar27._0_8_ = uStack_150;
  }
  uVar7 = auVar28._8_8_;
  uStack_158 = auVar27._8_8_;
  uStack_150 = auVar27._0_8_;
  if (lVar12 == 0) {
    uVar8 = 0;
    lStack_170 = 8;
LAB_10394eae8:
    uStack_158 = auVar27._8_8_;
    uStack_150 = auVar27._0_8_;
    uStack_168 = 0;
    uStack_178 = uVar8;
    FUN_103950078(auVar28._0_8_,uVar7,lStack_170,uVar8,uVar7 < 0x41,lVar4);
    FUN_10393c1b0(&uStack_178);
    return;
  }
  lVar11 = lVar4;
  lStack_170 = _malloc(lVar12);
  auVar27._8_8_ = uStack_158;
  auVar27._0_8_ = uStack_150;
  if (lStack_170 != 0) goto LAB_10394eae8;
  uVar3 = func_0x0001087c9084(8,lVar12);
  FUN_10393c1b0(&uStack_178);
  __Unwind_Resume(uVar3);
  auVar26 = func_0x000108a07bc4();
  uVar10 = auVar26._8_8_;
  uStack_188 = 0x10394eb48;
  uVar6 = uVar10 - (uVar10 >> 1);
  if (0x2f0f < uVar10) {
    uVar10 = 0x2f10;
  }
  if (uVar10 <= uVar6) {
    uVar10 = uVar6;
  }
  if (uVar10 < 0x31) {
    uVar10 = 0x30;
  }
  lVar13 = uVar10 * 0x298;
  uStack_1c0 = unaff_x24;
  lStack_1a8 = lVar12;
  uStack_1a0 = uVar8;
  uStack_198 = uVar3;
  ppppuStack_190 = &pppuStack_130;
  if (0x3159721ed7e753 < uVar6) {
    uStack_1b8 = uVar7;
    uStack_1b0 = auVar28._0_8_;
    auVar26 = func_0x0001087c9084(0,lVar13);
    auVar28._8_8_ = uStack_1b8;
    auVar28._0_8_ = uStack_1b0;
  }
  uVar7 = auVar26._8_8_;
  uStack_1b8 = auVar28._8_8_;
  uStack_1b0 = auVar28._0_8_;
  if (lVar13 == 0) {
    uVar10 = 0;
    lVar4 = 8;
  }
  else {
    lVar25 = lVar11;
    lVar4 = _malloc(lVar13);
    auVar28._8_8_ = uStack_1b8;
    auVar28._0_8_ = uStack_1b0;
    if (lVar4 == 0) {
      uVar3 = func_0x0001087c9084(8,lVar13);
      FUN_103944d7c(&uStack_1d8);
      auVar27 = __Unwind_Resume(uVar3);
      uVar8 = auVar27._8_8_;
      uStack_220 = uVar7;
      uStack_218 = auVar26._0_8_;
      lStack_210 = lVar13;
      lStack_208 = lVar12;
      uStack_200 = uVar10;
      uStack_1f8 = uVar3;
      pppppuStack_1f0 = &ppppuStack_190;
      uStack_1e8 = 0x10394ec40;
      uVar7 = uVar8 - (uVar8 >> 1);
      if (0x291d < uVar8) {
        uVar8 = 0x291e;
      }
      if (uVar8 <= uVar7) {
        uVar8 = uVar7;
      }
      if (uVar8 < 0x31) {
        uVar8 = 0x30;
      }
      lVar11 = uVar8 * 0x2f8;
      if (0x2b1da46102b1da < uVar7) {
        auVar27 = func_0x0001087c9084(0,lVar11);
      }
      if (lVar11 == 0) {
        uVar8 = 0;
        lVar4 = 8;
      }
      else {
        lVar12 = lVar25;
        lVar4 = _malloc(lVar11);
        if (lVar4 == 0) {
          uVar3 = func_0x0001087c9084(8,lVar11);
          FUN_10392e030(&uStack_238);
          __Unwind_Resume(uVar3);
          auVar27 = func_0x000108a07bc4();
          goto SUB_10394ed3c;
        }
      }
      lVar12 = lVar4;
      param_4 = uVar8;
      uStack_238 = param_4;
      lStack_230 = lVar12;
      uStack_228 = 0;
      param_5 = (uint)(auVar27._8_8_ < 0x41);
      param_6 = lVar25;
SUB_10394ed3c:
      uVar7 = auVar27._8_8_;
      lVar11 = auVar27._0_8_;
      if (uVar7 < 2) {
        return;
      }
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = 0x4000000000000000 / uVar7;
      }
      if (uVar8 * uVar7 != 0x4000000000000000) {
        uVar8 = uVar8 + 1;
      }
      if (uVar7 < 0x1001) {
        uVar10 = uVar7 - (uVar7 >> 1);
        if (0x3f < uVar10) {
          uVar10 = 0x40;
        }
      }
      else {
        uVar5 = (uint)LZCOUNT(uVar7 | 1) ^ 0x3f;
        uVar10 = (ulong)((uVar5 & 1) + (uVar5 >> 1));
        uVar10 = (1L << (uVar10 & 0x3f)) + (uVar7 >> (uVar10 & 0x3f)) >> 1;
      }
      uVar6 = 0;
      uVar23 = 1;
      uStack_528 = 0;
      uVar9 = uVar7;
      if (uVar7 != 0) goto LAB_10394ee24;
LAB_10394ee10:
      lVar4 = 0;
      uVar9 = 1;
      uVar24 = uVar23;
      do {
        uVar23 = uVar9;
        if (1 < uVar6) {
          do {
            while( true ) {
              uVar9 = uVar6 - 1;
              if ((uint)abStack_2eb[uVar6] < (uint)lVar4) goto LAB_10394f2d0;
              uVar15 = auStack_500[uVar9];
              uVar18 = uVar15 >> 1;
              uVar22 = uVar24 >> 1;
              uVar14 = uVar18 + uVar22;
              uVar6 = uVar9;
              if (uVar14 <= param_4 && (((uint)uVar15 | (uint)uVar24) & 1) == 0) break;
              lVar13 = lVar11 + (uStack_528 - uVar14) * 0x2f8;
              if ((uVar15 & 1) == 0) {
                __ZN4core5slice4sort6stable9quicksort9quicksort17h197f8a5eb6c878cbE
                          (lVar13,uVar18,lVar12,param_4,(int)LZCOUNT(uVar18 | 1) << 1 ^ 0x7e,0,
                           param_6);
              }
              if ((uVar24 & 1) == 0) {
                __ZN4core5slice4sort6stable9quicksort9quicksort17h197f8a5eb6c878cbE
                          (lVar13 + uVar18 * 0x2f8,uVar22,lVar12,param_4,
                           (int)LZCOUNT(uVar22 | 1) << 1 ^ 0x7e,0,param_6);
              }
              if ((1 < uVar15) && (1 < uVar24)) {
                uVar24 = uVar22;
                if (uVar18 <= uVar22) {
                  uVar24 = uVar18;
                }
                if (uVar24 <= param_4) {
                  lVar16 = lVar13 + uVar18 * 0x2f8;
                  lVar25 = lVar16;
                  if (uVar18 <= uVar22) {
                    lVar25 = lVar13;
                  }
                  _memcpy(lVar12,lVar25,uVar24 * 0x2f8);
                  lVar25 = lVar12 + uVar24 * 0x2f8;
                  lVar20 = lVar12;
                  lVar19 = lVar11 + -0x2f8 + uStack_528 * 0x2f8;
                  if (uVar22 < uVar18) {
                    do {
                      uVar15 = *(ulong *)(lVar25 + -0x2e8);
                      uVar18 = *(ulong *)(lVar16 + -0x2e8);
                      uVar24 = uVar15;
                      if (uVar18 <= uVar15) {
                        uVar24 = uVar18;
                      }
                      iVar2 = _memcmp(*(undefined8 *)(lVar25 + -0x2f0),
                                      *(undefined8 *)(lVar16 + -0x2f0),uVar24);
                      uVar24 = uVar15 - uVar18;
                      if (iVar2 != 0) {
                        uVar24 = (long)iVar2;
                      }
                      lVar17 = lVar25 + -0x2f8;
                      if (0x7fffffffffffffff < uVar24) {
                        lVar17 = lVar16 + -0x2f8;
                      }
                      _memcpy(lVar19,lVar17,0x2f8);
                      uVar5 = (uint)(uVar24 >> 0x3f);
                      lVar17 = lVar16 + -0x2f8 + (ulong)(uVar5 ^ 1) * 0x2f8;
                      lVar25 = lVar25 + -0x2f8 + (ulong)uVar5 * 0x2f8;
                      lVar16 = lVar17;
                      lVar19 = lVar19 + -0x2f8;
                    } while (lVar17 != lVar13 && lVar25 != lVar12);
                  }
                  else {
                    do {
                      uVar15 = *(ulong *)(lVar16 + 0x10);
                      uVar18 = *(ulong *)(lVar20 + 0x10);
                      uVar24 = uVar15;
                      if (uVar18 <= uVar15) {
                        uVar24 = uVar18;
                      }
                      iVar2 = _memcmp(*(undefined8 *)(lVar16 + 8),*(undefined8 *)(lVar20 + 8),uVar24
                                     );
                      uVar24 = uVar15 - uVar18;
                      if (iVar2 != 0) {
                        uVar24 = (long)iVar2;
                      }
                      lVar19 = lVar20;
                      if (0x7fffffffffffffff < uVar24) {
                        lVar19 = lVar16;
                      }
                      _memcpy(lVar13,lVar19,0x2f8);
                      uVar5 = (uint)(uVar24 >> 0x3f);
                      lVar20 = lVar20 + (ulong)(uVar5 ^ 1) * 0x2f8;
                      lVar16 = lVar16 + (ulong)uVar5 * 0x2f8;
                      lVar17 = lVar13 + 0x2f8;
                      lVar13 = lVar17;
                    } while (lVar20 != lVar25 && lVar16 != lVar11 + uStack_528 * 0x2f8);
                  }
                  _memcpy(lVar17,lVar20,lVar25 - lVar20);
                }
              }
              uVar24 = uVar14 * 2 | 1;
              if (uVar9 < 2) goto LAB_10394f2c4;
            }
            uVar24 = uVar14 * 2;
          } while (1 < uVar9);
LAB_10394f2c4:
          uVar6 = 1;
        }
LAB_10394f2d0:
        auStack_500[uVar6] = uVar24;
        abStack_2eb[uVar6 + 1] = (byte)lVar4;
        if (uVar7 <= uStack_528) {
          if ((uVar24 & 1) != 0) {
            return;
          }
          __ZN4core5slice4sort6stable9quicksort9quicksort17h197f8a5eb6c878cbE(lVar11,uVar7,lVar12);
          return;
        }
        uVar6 = uVar6 + 1;
        uStack_528 = uStack_528 + (uVar23 >> 1);
        uVar9 = uVar7 - uStack_528;
        if (uVar7 < uStack_528 || uVar9 == 0) goto LAB_10394ee10;
LAB_10394ee24:
        lVar4 = lVar11 + uStack_528 * 0x2f8;
        if (uVar9 < uVar10) {
LAB_10394ee3c:
          if ((param_5 & 1) == 0) {
            if (uVar10 <= uVar9) {
              uVar9 = uVar10;
            }
            uVar9 = uVar9 << 1;
          }
          else {
            if (0x1f < uVar9) {
              uVar9 = 0x20;
            }
            __ZN4core5slice4sort6stable9quicksort9quicksort17h197f8a5eb6c878cbE
                      (lVar4,uVar9,lVar12,param_4,0,0,param_6);
            uVar9 = uVar9 << 1 | 1;
          }
        }
        else {
          uVar24 = uVar9;
          if (1 < uVar9) {
            uVar18 = *(ulong *)(lVar4 + 0x300);
            uVar22 = *(ulong *)(lVar4 + 0x308);
            uVar15 = *(ulong *)(lVar4 + 0x10);
            uVar14 = uVar22;
            if (uVar15 <= uVar22) {
              uVar14 = uVar15;
            }
            iVar2 = _memcmp(uVar18,*(undefined8 *)(lVar4 + 8),uVar14);
            lVar13 = uVar22 - uVar15;
            if (iVar2 != 0) {
              lVar13 = (long)iVar2;
            }
            if (lVar13 < 0) {
              if (uVar9 == 2) {
                uVar9 = 1;
                uVar24 = 2;
LAB_10394eef0:
                uVar14 = 0;
                lVar13 = lVar11 + -0x2f8 + uVar24 * 0x2f8 + uStack_528 * 0x2f8;
                do {
                  lVar25 = 0;
                  do {
                    uVar3 = *(undefined8 *)(lVar4 + lVar25);
                    *(undefined8 *)(lVar4 + lVar25) = *(undefined8 *)(lVar13 + lVar25);
                    *(undefined8 *)(lVar13 + lVar25) = uVar3;
                    lVar25 = lVar25 + 8;
                  } while (lVar25 != 0x2f8);
                  uVar14 = uVar14 + 1;
                  lVar13 = lVar13 + -0x2f8;
                  lVar4 = lVar4 + 0x2f8;
                } while (uVar14 != uVar9);
              }
              else {
                puVar21 = (ulong *)(lVar11 + 0x600 + uStack_528 * 0x2f8);
                uVar14 = 2;
                do {
                  uVar15 = puVar21[-1];
                  uVar1 = *puVar21;
                  uVar24 = uVar1;
                  if (uVar22 <= uVar1) {
                    uVar24 = uVar22;
                  }
                  iVar2 = _memcmp(uVar15,uVar18,uVar24);
                  lVar25 = uVar1 - uVar22;
                  if (iVar2 != 0) {
                    lVar25 = (long)iVar2;
                  }
                  uVar24 = uVar14;
                  if (-1 < lVar25) break;
                  puVar21 = puVar21 + 0x5f;
                  uVar14 = uVar14 + 1;
                  uVar18 = uVar15;
                  uVar22 = uVar1;
                  uVar24 = uVar9;
                } while (uVar9 != uVar14);
joined_r0x00010394f01c:
                if (uVar24 < uVar10) goto LAB_10394ee3c;
                if (lVar13 < 0) {
                  if (1 < uVar24) {
                    uVar9 = uVar24 >> 1;
                    goto LAB_10394eef0;
                  }
                  uVar24 = 1;
                }
              }
            }
            else if (uVar9 != 2) {
              puVar21 = (ulong *)(lVar11 + 0x600 + uStack_528 * 0x2f8);
              uVar14 = 2;
              do {
                uVar15 = puVar21[-1];
                uVar1 = *puVar21;
                uVar24 = uVar1;
                if (uVar22 <= uVar1) {
                  uVar24 = uVar22;
                }
                iVar2 = _memcmp(uVar15,uVar18,uVar24);
                lVar25 = uVar1 - uVar22;
                if (iVar2 != 0) {
                  lVar25 = (long)iVar2;
                }
                uVar24 = uVar14;
                if (lVar25 < 0) break;
                puVar21 = puVar21 + 0x5f;
                uVar14 = uVar14 + 1;
                uVar18 = uVar15;
                uVar22 = uVar1;
                uVar24 = uVar9;
              } while (uVar9 != uVar14);
              goto joined_r0x00010394f01c;
            }
          }
          uVar9 = uVar24 << 1 | 1;
        }
        lVar4 = LZCOUNT((uStack_528 * 2 + (uVar9 >> 1)) * uVar8 ^
                        (uStack_528 * 2 - (uVar23 >> 1)) * uVar8);
        uVar24 = uVar23;
      } while( true );
    }
  }
  uStack_1b8 = auVar28._8_8_;
  uStack_1b0 = auVar28._0_8_;
  uStack_1c8 = 0;
  uStack_1d8 = uVar10;
  lStack_1d0 = lVar4;
  FUN_1039510b0(auVar26._0_8_,uVar7,lVar4,uVar10,uVar7 < 0x41,lVar11);
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar4);
  return;
}

