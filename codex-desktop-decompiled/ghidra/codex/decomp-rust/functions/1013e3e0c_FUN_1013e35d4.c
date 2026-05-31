
void FUN_1013e35d4(ulong *param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  ulong *puVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  ulong uVar21;
  ulong uVar22;
  undefined **ppuVar23;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_250;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  ulong uStack_1d8;
  undefined **ppuStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  ulong uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  if (*param_2 == -0x7ffffffffffffffc) {
    lVar1 = param_2[1];
    puVar3 = (ulong *)param_2[2];
    uVar11 = param_2[3];
    puVar16 = puVar3 + uVar11 * 9;
    uVar15 = uVar11;
    if (0x5554 < uVar11) {
      uVar15 = 0x5555;
    }
    if (uVar11 != 0) {
      uStack_218 = _malloc(uVar15 * 0x30);
      if (uStack_218 == 0) {
        func_0x0001087c9084(8,uVar15 * 0x30);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1013e4118);
        (*pcVar4)();
      }
      uStack_210 = 0;
      puVar7 = puVar3;
      uStack_220 = uVar15;
LAB_1013e36b8:
      puVar14 = puVar7 + 9;
      uVar15 = *puVar7;
      puVar12 = puVar14;
      if (uVar15 != 0x8000000000000005) {
        uVar21 = puVar7[2];
        ppuVar19 = (undefined **)puVar7[1];
        uStack_1b8 = puVar7[4];
        uStack_1c0 = puVar7[3];
        uVar22 = puVar7[6];
        uStack_1b0 = puVar7[5];
        uStack_198 = puVar7[8];
        uStack_1a0 = puVar7[7];
        uVar10 = uVar15 ^ 0x8000000000000000;
        if (-1 < (long)uVar15) {
          uVar10 = 5;
        }
        uStack_1d8 = uVar15;
        ppuStack_1d0 = ppuVar19;
        uStack_1c8 = uVar21;
        uStack_1a8 = uVar22;
        if (uVar10 == 4) {
          ppuVar5 = (undefined **)puVar7[1];
          ppuVar18 = (undefined **)puVar7[2];
          uVar10 = puVar7[3];
          ppuVar17 = ppuVar18 + uVar10 * 9;
          ppuVar19 = ppuVar18;
          ppuStack_c0 = ppuVar18;
          ppuStack_b0 = ppuVar5;
          ppuStack_a8 = ppuVar17;
          if (uVar10 == 0) {
LAB_1013e39e0:
            ppuStack_b8 = ppuVar19;
            unaff_x27 = (undefined **)FUN_1087e422c(0,&UNK_10b2316c8,&UNK_10b20a590);
LAB_1013e39fc:
            ppuStack_190 = (undefined **)0x8000000000000000;
            ppuStack_188 = unaff_x27;
            ppuVar8 = ppuStack_158;
          }
          else {
            ppuVar19 = ppuVar18 + 9;
            ppuVar8 = (undefined **)*ppuVar18;
            if (ppuVar8 == (undefined **)0x8000000000000005) goto LAB_1013e39e0;
            unaff_x27 = (undefined **)ppuVar18[2];
            ppuVar20 = (undefined **)ppuVar18[1];
            ppuStack_140 = (undefined **)ppuVar18[4];
            ppuStack_148 = (undefined **)ppuVar18[3];
            puStack_130 = ppuVar18[6];
            ppuStack_138 = (undefined **)ppuVar18[5];
            puStack_120 = ppuVar18[8];
            puStack_128 = ppuVar18[7];
            ppuStack_160 = ppuVar8;
            ppuStack_158 = ppuVar20;
            ppuStack_150 = unaff_x27;
            ppuStack_b8 = ppuVar19;
            if (ppuVar8 != (undefined **)0x8000000000000003) {
              unaff_x27 = (undefined **)FUN_108832ea0(&ppuStack_160,&puStack_78,&UNK_10b20a620);
              FUN_100de6690(&ppuStack_160);
              goto LAB_1013e39fc;
            }
            if ((ppuVar20 == (undefined **)0x8000000000000000) ||
               (ppuVar20 == (undefined **)0x8000000000000001)) goto LAB_1013e39fc;
            if (uVar10 == 1) {
LAB_1013e3b34:
              ppuStack_160 = ppuVar8;
              ppuStack_b8 = ppuVar19;
              ppuStack_250 = (undefined **)FUN_1087e422c(1,&UNK_10b2316c8,&UNK_10b20a590);
              ppuVar23 = ppuStack_148;
LAB_1013e3b50:
              ppuStack_148 = ppuVar23;
              ppuStack_190 = (undefined **)0x8000000000000000;
              ppuStack_188 = ppuStack_250;
              ppuVar8 = ppuStack_158;
              if (ppuVar20 != (undefined **)0x0) {
                _free(unaff_x27);
                ppuVar8 = ppuStack_158;
              }
            }
            else {
              ppuVar19 = ppuVar18 + 0x12;
              ppuStack_160 = (undefined **)ppuVar18[9];
              if (ppuStack_160 == (undefined **)0x8000000000000005) goto LAB_1013e3b34;
              ppuStack_250 = (undefined **)ppuVar18[0xb];
              ppuStack_158 = (undefined **)ppuVar18[10];
              ppuStack_140 = (undefined **)ppuVar18[0xd];
              ppuVar23 = (undefined **)ppuVar18[0xc];
              puStack_130 = ppuVar18[0xf];
              ppuStack_138 = (undefined **)ppuVar18[0xe];
              puStack_120 = ppuVar18[0x11];
              puStack_128 = ppuVar18[0x10];
              ppuStack_150 = ppuStack_250;
              ppuStack_b8 = ppuVar19;
              if (ppuStack_160 != (undefined **)0x8000000000000003) {
                ppuStack_148 = ppuVar23;
                ppuStack_250 = (undefined **)FUN_108832ea0(&ppuStack_160,&puStack_78,&UNK_10b20a5e0)
                ;
                FUN_100de6690(&ppuStack_160);
                ppuVar23 = ppuStack_148;
                goto LAB_1013e3b50;
              }
              if ((ppuStack_158 == (undefined **)0x8000000000000000) ||
                 (ppuStack_158 == (undefined **)0x8000000000000001)) goto LAB_1013e3b50;
              ppuStack_190 = ppuVar20;
              ppuStack_188 = unaff_x27;
              ppuStack_180 = ppuStack_148;
              ppuStack_178 = ppuStack_158;
              ppuStack_170 = ppuStack_250;
              ppuStack_168 = ppuVar23;
              ppuStack_160 = ppuVar20;
              ppuVar8 = unaff_x27;
              ppuStack_150 = ppuStack_148;
              ppuStack_148 = ppuStack_158;
              ppuStack_140 = ppuStack_250;
              ppuStack_138 = ppuVar23;
              if (uVar10 != 2) {
                ppuStack_148 = ppuStack_158;
                ppuStack_158 = unaff_x27;
                ppuStack_188 = (undefined **)FUN_1087e422c(uVar10,&UNK_10b21cb80,&UNK_10b20a590);
                ppuStack_190 = (undefined **)0x8000000000000000;
                FUN_100e295a0(&ppuStack_160);
                ppuVar8 = ppuStack_158;
              }
            }
          }
          ppuStack_158 = ppuVar8;
          lVar13 = ((ulong)((long)ppuVar17 - (long)ppuVar19) >> 3) * -0x71c71c71c71c71c7 + 1;
          while (lVar13 = lVar13 + -1, lVar13 != 0) {
            unaff_x27 = ppuVar19 + 9;
            FUN_100de6690(ppuVar19);
            ppuVar19 = unaff_x27;
          }
          if (ppuVar5 != (undefined **)0x0) {
            _free(ppuVar18);
          }
        }
        else if (uVar10 == 5) {
          if ((uStack_1b8 != 0) && (uStack_1b8 * 9 != -0x11)) {
            _free(uStack_1c0 + uStack_1b8 * -8 + -8);
          }
          ppuVar5 = ppuVar19 + uVar21 * 0xd;
          ppuStack_160 = (undefined **)0x8000000000000005;
          ppuStack_118 = ppuVar19;
          ppuStack_110 = ppuVar19;
          uStack_108 = uVar15;
          ppuStack_100 = ppuVar5;
          if (uVar21 == 0) {
            ppuVar18 = (undefined **)0x0;
LAB_1013e3a60:
            puStack_78 = &UNK_108c61038;
            uStack_70 = 4;
            ppuVar17 = (undefined **)0x0;
            ppuStack_c0 = &puStack_78;
            ppuStack_b8 = (undefined **)&DAT_100c7b3a0;
            ppuVar5 = (undefined **)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_c0);
LAB_1013e3aa0:
            ppuVar18 = (undefined **)((ulong)ppuVar18 & 0x7fffffffffffffff);
            ppuStack_188 = ppuVar5;
joined_r0x0001013e3e24:
            ppuStack_190 = (undefined **)0x8000000000000000;
            if (ppuVar18 != (undefined **)0x0) {
              ppuStack_190 = (undefined **)0x8000000000000000;
              _free(unaff_x27);
            }
LAB_1013e3cb0:
            ppuVar17 = (undefined **)((ulong)ppuVar17 & 0x7fffffffffffffff);
          }
          else {
            ppuVar17 = (undefined **)0x8000000000000000;
            ppuVar18 = (undefined **)0x8000000000000000;
            ppuVar8 = ppuVar19;
            do {
              ppuVar23 = ppuVar8 + 0xd;
              ppuVar20 = ppuVar23;
              ppuVar19 = ppuStack_250;
              if (*ppuVar8 == (undefined *)0x8000000000000000) break;
              piVar2 = (int *)ppuVar8[1];
              ppuStack_148 = (undefined **)ppuVar8[6];
              ppuStack_150 = (undefined **)ppuVar8[5];
              ppuStack_138 = (undefined **)ppuVar8[8];
              ppuStack_140 = (undefined **)ppuVar8[7];
              puStack_128 = ppuVar8[10];
              puStack_130 = ppuVar8[9];
              puStack_120 = ppuVar8[0xb];
              ppuStack_158 = (undefined **)ppuVar8[4];
              ppuStack_160 = (undefined **)ppuVar8[3];
              if (ppuVar8[2] == (undefined *)0x7) {
                iVar9 = 1;
                if (*piVar2 != 0x7373656d || *(int *)((long)piVar2 + 3) != 0x65676173) {
                  iVar9 = 2;
                }
              }
              else if (ppuVar8[2] == (undefined *)0x4) {
                iVar9 = 2;
                if (*piVar2 == 0x68746170) {
                  iVar9 = 0;
                }
              }
              else {
                iVar9 = 2;
              }
              if (*ppuVar8 != (undefined *)0x0) {
                _free();
              }
              ppuVar8 = ppuStack_160;
              if (iVar9 == 0) {
                if (ppuVar17 != (undefined **)0x8000000000000000) {
                  puStack_78 = &UNK_108c61038;
                  uStack_70 = 4;
                  ppuStack_c0 = &puStack_78;
                  ppuStack_b8 = (undefined **)&DAT_100c7b3a0;
                  ppuStack_110 = ppuVar23;
                  ppuVar5 = (undefined **)
                            FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_c0);
                  goto LAB_1013e3aa0;
                }
                ppuStack_160 = (undefined **)0x8000000000000005;
                if (ppuVar8 == (undefined **)0x8000000000000005) {
                  ppuVar17 = (undefined **)0x0;
                  ppuStack_110 = ppuVar23;
                  ppuVar5 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
                  goto LAB_1013e3aa0;
                }
                ppuStack_c0 = ppuVar8;
                ppuStack_b0 = ppuStack_150;
                ppuStack_b8 = ppuStack_158;
                ppuStack_a0 = ppuStack_140;
                ppuStack_a8 = ppuStack_148;
                puStack_90 = puStack_130;
                ppuStack_98 = ppuStack_138;
                puStack_80 = puStack_120;
                puStack_88 = puStack_128;
                if (ppuVar8 != (undefined **)0x8000000000000003) {
                  ppuStack_110 = ppuVar23;
                  ppuVar5 = (undefined **)FUN_108832ea0(&ppuStack_c0,&puStack_78,&UNK_10b20a620);
                  ppuVar17 = (undefined **)0x0;
                  FUN_100de6690(&ppuStack_c0);
                  goto LAB_1013e3aa0;
                }
                if (ppuStack_158 == (undefined **)0x8000000000000000) {
                  ppuVar17 = (undefined **)0x0;
                  ppuVar5 = ppuStack_150;
                  ppuStack_110 = ppuVar23;
                  goto LAB_1013e3aa0;
                }
                ppuStack_260 = ppuStack_148;
                ppuVar17 = ppuStack_158;
                ppuStack_250 = ppuStack_150;
              }
              else {
                if (iVar9 == 1) {
                  if (ppuVar18 != (undefined **)0x8000000000000000) {
                    puStack_78 = &UNK_108ca1064;
                    uStack_70 = 7;
                    ppuStack_c0 = &puStack_78;
                    ppuStack_b8 = (undefined **)&DAT_100c7b3a0;
                    ppuStack_110 = ppuVar23;
                    ppuStack_188 = (undefined **)
                                   FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_c0);
                    goto joined_r0x0001013e3e24;
                  }
                  ppuStack_160 = (undefined **)0x8000000000000005;
                  if (ppuVar8 == (undefined **)0x8000000000000005) {
                    ppuStack_110 = ppuVar23;
                    unaff_x27 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
                    ppuVar23 = ppuStack_110;
                  }
                  else {
                    ppuStack_c0 = ppuVar8;
                    ppuStack_b0 = ppuStack_150;
                    ppuStack_b8 = ppuStack_158;
                    ppuStack_a0 = ppuStack_140;
                    ppuStack_a8 = ppuStack_148;
                    puStack_90 = puStack_130;
                    ppuStack_98 = ppuStack_138;
                    puStack_80 = puStack_120;
                    puStack_88 = puStack_128;
                    if (ppuVar8 == (undefined **)0x8000000000000003) {
                      unaff_x27 = ppuStack_150;
                      if (ppuStack_158 != (undefined **)0x8000000000000000) {
                        ppuStack_268 = ppuStack_148;
                        ppuVar18 = ppuStack_158;
                        ppuStack_c0 = ppuVar8;
                        goto LAB_1013e3778;
                      }
                    }
                    else {
                      ppuStack_110 = ppuVar23;
                      unaff_x27 = (undefined **)
                                  FUN_108832ea0(&ppuStack_c0,&puStack_78,&UNK_10b20a5e0);
                      FUN_100de6690(&ppuStack_c0);
                      ppuVar23 = ppuStack_110;
                    }
                  }
                  ppuStack_110 = ppuVar23;
                  ppuStack_190 = (undefined **)0x8000000000000000;
                  ppuStack_188 = unaff_x27;
                  goto LAB_1013e3cb0;
                }
                ppuStack_160 = (undefined **)0x8000000000000005;
                if (ppuVar8 == (undefined **)0x8000000000000005) {
                  ppuStack_110 = ppuVar23;
                  ppuVar5 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
                  goto LAB_1013e3aa0;
                }
                ppuStack_c0 = ppuVar8;
                ppuStack_b0 = ppuStack_150;
                ppuStack_b8 = ppuStack_158;
                ppuStack_a0 = ppuStack_140;
                ppuStack_a8 = ppuStack_148;
                puStack_90 = puStack_130;
                ppuStack_98 = ppuStack_138;
                puStack_80 = puStack_120;
                puStack_88 = puStack_128;
                FUN_100de6690(&ppuStack_c0);
              }
LAB_1013e3778:
              ppuVar8 = ppuVar23;
              ppuVar20 = ppuVar5;
              ppuVar19 = ppuStack_250;
            } while (ppuVar23 != ppuVar5);
            ppuStack_250 = ppuVar19;
            ppuStack_110 = ppuVar23;
            if (ppuVar17 == (undefined **)0x8000000000000000) goto LAB_1013e3a60;
            if (ppuVar18 != (undefined **)0x8000000000000000) {
              ppuStack_190 = ppuVar17;
              ppuStack_188 = ppuVar19;
              ppuStack_180 = ppuStack_260;
              ppuStack_178 = ppuVar18;
              ppuStack_170 = unaff_x27;
              ppuStack_168 = ppuStack_268;
              ppuStack_f0 = ppuVar17;
              ppuStack_e8 = ppuVar19;
              ppuStack_e0 = ppuStack_260;
              ppuStack_d8 = ppuVar18;
              ppuStack_d0 = unaff_x27;
              ppuStack_c8 = ppuStack_268;
              if (ppuVar5 != ppuVar20) {
                ppuStack_188 = (undefined **)FUN_1087e422c(uVar22,&UNK_10b21cb90,&UNK_10b20a590);
                ppuStack_190 = (undefined **)0x8000000000000000;
                FUN_100e295a0(&ppuStack_f0);
              }
              FUN_100de8910(&ppuStack_118);
              goto joined_r0x0001013e3ef8;
            }
            puStack_78 = &UNK_108ca1064;
            uStack_70 = 7;
            ppuStack_c0 = &puStack_78;
            ppuStack_b8 = (undefined **)&DAT_100c7b3a0;
            ppuStack_188 = (undefined **)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_c0);
            ppuStack_190 = (undefined **)0x8000000000000000;
          }
          if (ppuVar17 != (undefined **)0x0) {
            _free(ppuVar19);
          }
          FUN_100de8910(&ppuStack_118);
          if (ppuStack_160 != (undefined **)0x8000000000000005) {
            FUN_100de6690(&ppuStack_160);
          }
        }
        else {
          ppuStack_188 = (undefined **)FUN_108832ea0(&uStack_1d8,&puStack_78,&UNK_10b21d660);
          ppuStack_190 = (undefined **)0x8000000000000000;
        }
joined_r0x0001013e3ef8:
        if (((long)uVar15 < 0) && ((uVar15 & 0xfffffffffffffffe) != 0x8000000000000004)) {
          FUN_100de6690(&uStack_1d8);
        }
        uVar10 = uStack_210;
        uVar15 = uStack_218;
        if (ppuStack_190 != (undefined **)0x8000000000000000) goto code_r0x0001013e3d08;
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)ppuStack_188;
        if (uStack_210 != 0) {
          puVar6 = (undefined8 *)(uStack_218 + 0x20);
          uVar11 = uStack_210;
          do {
            if (puVar6[-4] != 0) {
              _free(puVar6[-3]);
            }
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 6;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (uStack_220 != 0) {
          _free(uVar15);
        }
        goto LAB_1013e4044;
      }
      goto LAB_1013e4000;
    }
    uStack_220 = 0;
    uStack_218 = 8;
    uStack_210 = 0;
    puVar12 = puVar3;
LAB_1013e4000:
    param_1[1] = uStack_218;
    *param_1 = uStack_220;
    param_1[2] = uStack_210;
    puVar14 = puVar12;
    if (*param_1 != 0x8000000000000000) {
      ppuStack_158 = (undefined **)param_1[1];
      ppuStack_160 = (undefined **)*param_1;
      ppuStack_150 = (undefined **)param_1[2];
      puVar14 = puVar16;
      if (puVar16 != puVar12) {
        uVar15 = FUN_1087e422c(uVar11,&UNK_10b21cb80,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar15;
        FUN_100cb05f4(&ppuStack_160);
        puVar14 = puVar12;
      }
    }
LAB_1013e4044:
    lVar13 = ((ulong)((long)puVar16 - (long)puVar14) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar13 = lVar13 + -1, lVar13 != 0) {
      FUN_100de6690(puVar14);
      puVar14 = puVar14 + 9;
    }
    if (lVar1 != 0) {
      _free(puVar3);
    }
  }
  else {
    uVar15 = FUN_108832ea0(param_2,&puStack_78,&UNK_10b21cd00);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar15;
    FUN_100de6690(param_2);
  }
  return;
code_r0x0001013e3d08:
  ppuStack_1f0 = ppuStack_178;
  ppuStack_1f8 = ppuStack_180;
  ppuStack_1e0 = ppuStack_168;
  ppuStack_1e8 = ppuStack_170;
  ppuStack_208 = ppuStack_190;
  ppuStack_200 = ppuStack_188;
  if (uStack_210 == uStack_220) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h015533f47028d6daE(&uStack_220);
  }
  puVar6 = (undefined8 *)(uStack_218 + uVar10 * 0x30);
  puVar6[1] = ppuStack_200;
  *puVar6 = ppuStack_208;
  puVar6[3] = ppuStack_1f0;
  puVar6[2] = ppuStack_1f8;
  puVar6[5] = ppuStack_1e0;
  puVar6[4] = ppuStack_1e8;
  uStack_210 = uVar10 + 1;
  puVar7 = puVar14;
  puVar12 = puVar16;
  if (puVar14 == puVar16) goto LAB_1013e4000;
  goto LAB_1013e36b8;
}

