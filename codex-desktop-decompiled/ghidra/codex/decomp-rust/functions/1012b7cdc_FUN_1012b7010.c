
void FUN_1012b7010(ulong *param_1,ulong *param_2,undefined **param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **extraout_x9;
  undefined **in_x11;
  undefined **extraout_x11;
  undefined **in_x12;
  undefined **extraout_x12;
  undefined **in_x13;
  undefined **extraout_x13;
  undefined **in_x16;
  undefined **extraout_x16;
  uint uVar11;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined **ppuVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined1 auVar21 [16];
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_218;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
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
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  uint uVar12;
  
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = param_1;
  ppuVar14 = (undefined **)*param_2;
  if (ppuVar14 == (undefined **)0x8000000000000000) {
    *param_1 = 0x8000000000000001;
    uVar9 = *param_2 ^ 0x8000000000000000;
    if (-1 < (long)*param_2) {
      uVar9 = 5;
    }
    if (uVar9 < 3) {
      return;
    }
    if (uVar9 == 3) {
      if (param_2[1] == 0) {
        return;
      }
      plVar5 = (long *)param_2[2];
    }
    else if (uVar9 == 4) {
      plVar5 = (long *)param_2[2];
      lVar15 = param_2[3] + 1;
      plVar4 = plVar5;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        FUN_100de6690(plVar4);
        plVar4 = plVar4 + 9;
      }
      if (param_2[1] == 0) {
        return;
      }
    }
    else {
      uVar9 = param_2[4];
      if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
        _free(param_2[3] + uVar9 * -8 + -8);
      }
      plVar5 = (long *)param_2[1];
      lVar15 = param_2[2] + 1;
      plVar4 = plVar5;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        if (*plVar4 != 0) {
          _free(plVar4[1]);
        }
        FUN_100de6690(plVar4 + 3);
        plVar4 = plVar4 + 0xd;
      }
      if (*param_2 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar5);
    return;
  }
  uVar9 = (ulong)ppuVar14 ^ 0x8000000000000000;
  if (-1 < (long)ppuVar14) {
    uVar9 = 5;
  }
  if (uVar9 != 4) {
    if (uVar9 == 5) {
      uVar17 = param_2[6];
      ppuVar13 = (undefined **)param_2[1];
      uVar9 = param_2[2];
      uVar10 = param_2[4];
      if ((uVar10 != 0) && (auVar21 = auVar2, uVar10 * 9 != -0x11)) {
        auVar21 = _free(param_2[3] + uVar10 * -8 + -8);
        in_x11 = extraout_x11;
        in_x12 = extraout_x12;
        in_x13 = extraout_x13;
        in_x16 = extraout_x16;
      }
      ppuVar18 = ppuVar13 + uVar9 * 0xd;
      ppuStack_150 = (undefined **)0x8000000000000005;
      ppuStack_108 = ppuVar13;
      ppuStack_f8 = ppuVar14;
      ppuStack_f0 = ppuVar18;
      if (uVar9 == 0) {
        ppuVar19 = (undefined **)0x8000000000000001;
        ppuStack_1c8 = (undefined **)0x8000000000000001;
        ppuStack_1c0 = (undefined **)0x8000000000000001;
        ppuStack_1b8 = (undefined **)0x8000000000000001;
        ppuStack_238 = param_3;
        ppuStack_240 = param_4;
        ppuVar8 = ppuVar18;
        ppuStack_1d8 = in_x11;
        ppuStack_200 = in_x12;
        ppuStack_208 = in_x13;
        ppuStack_1f0 = in_x16;
      }
      else {
        ppuStack_1c0 = (undefined **)0x8000000000000001;
        ppuStack_1b8 = (undefined **)0x8000000000000001;
        ppuStack_1c8 = (undefined **)0x8000000000000001;
        ppuVar19 = (undefined **)0x8000000000000001;
        ppuVar7 = ppuVar13;
        ppuStack_100 = ppuVar13;
        do {
          auVar21._8_8_ = ppuStack_230;
          auVar21._0_8_ = ppuStack_228;
          ppuVar13 = ppuVar7 + 0xd;
          ppuVar8 = ppuVar13;
          if (*ppuVar7 == (undefined *)0x8000000000000000) break;
          plVar5 = (long *)ppuVar7[1];
          puVar1 = ppuVar7[2];
          ppuStack_138 = (undefined **)ppuVar7[6];
          ppuStack_140 = (undefined **)ppuVar7[5];
          ppuStack_128 = (undefined **)ppuVar7[8];
          ppuStack_130 = (undefined **)ppuVar7[7];
          ppuStack_118 = (undefined **)ppuVar7[10];
          ppuStack_120 = (undefined **)ppuVar7[9];
          ppuStack_110 = (undefined **)ppuVar7[0xb];
          ppuStack_148 = (undefined **)ppuVar7[4];
          ppuStack_150 = (undefined **)ppuVar7[3];
          if ((long)puVar1 < 7) {
            if (puVar1 == (undefined *)0x4) {
              if ((int)*plVar5 != 0x79746963) goto LAB_1012b7300;
              uVar12 = 2;
              uVar11 = 2;
            }
            else if ((puVar1 == (undefined *)0x6) &&
                    ((int)*plVar5 == 0x69676572 && *(short *)((long)plVar5 + 4) == 0x6e6f)) {
              uVar12 = 1;
              uVar11 = 1;
            }
            else {
LAB_1012b7300:
              uVar12 = 4;
              uVar11 = 4;
            }
          }
          else if (puVar1 == (undefined *)0x8) {
            if (*plVar5 != 0x656e6f7a656d6974) goto LAB_1012b7300;
            uVar12 = 3;
            uVar11 = 3;
          }
          else {
            if ((puVar1 != (undefined *)0x7) ||
               ((int)*plVar5 != 0x6e756f63 || *(int *)((long)plVar5 + 3) != 0x7972746e))
            goto LAB_1012b7300;
            uVar12 = 0;
            uVar11 = 0;
          }
          if (*ppuVar7 != (undefined *)0x0) {
            _free();
            uVar11 = uVar12;
          }
          ppuVar8 = ppuStack_150;
          ppuVar7 = ppuStack_140;
          if (uVar11 < 2) {
            if (uVar11 == 0) {
              if (ppuStack_1b8 == (undefined **)0x8000000000000001) {
                ppuStack_150 = (undefined **)0x8000000000000005;
                if (ppuVar8 == (undefined **)0x8000000000000005) {
                  ppuStack_100 = ppuVar13;
                  ppuVar7 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
                  ppuVar13 = ppuStack_100;
                }
                else {
                  ppuStack_1b0 = ppuVar8;
                  ppuStack_1a0 = ppuStack_140;
                  ppuStack_1a8 = ppuStack_148;
                  ppuStack_190 = ppuStack_130;
                  ppuStack_198 = ppuStack_138;
                  ppuStack_180 = ppuStack_120;
                  ppuStack_188 = ppuStack_128;
                  ppuStack_170 = ppuStack_110;
                  ppuStack_178 = ppuStack_118;
                  if (ppuVar8 == (undefined **)0x8000000000000000) {
                    FUN_100de6690(&ppuStack_1b0);
                    ppuStack_1b8 = (undefined **)0x8000000000000000;
LAB_1012b75dc:
                    ppuStack_1d8 = ppuStack_1f8;
                    goto LAB_1012b71f0;
                  }
                  if (ppuVar8 == (undefined **)0x8000000000000003) {
                    ppuStack_1f8 = ppuStack_140;
                    if (ppuStack_148 != (undefined **)0x8000000000000000) {
                      ppuStack_1b8 = ppuStack_148;
                      if (ppuStack_148 == (undefined **)0x8000000000000001) {
                        ppuStack_1b8 = (undefined **)0x8000000000000001;
LAB_1012b7b7c:
                        ppuStack_150 = (undefined **)0x8000000000000005;
                        ppuStack_170 = ppuStack_110;
                        ppuStack_178 = ppuStack_118;
                        ppuStack_180 = ppuStack_120;
                        ppuStack_188 = ppuStack_128;
                        ppuStack_190 = ppuStack_130;
                        ppuStack_198 = ppuStack_138;
                        ppuStack_1a0 = ppuStack_140;
                        ppuStack_100 = ppuVar13;
                        goto LAB_1012b7b80;
                      }
                      ppuStack_240 = ppuStack_138;
                      goto LAB_1012b75dc;
                    }
                  }
                  else {
                    ppuStack_100 = ppuVar13;
                    ppuVar7 = (undefined **)FUN_108832ea0(&ppuStack_1b0,&puStack_80,&UNK_10b20a5e0);
                    FUN_100de6690(&ppuStack_1b0);
                    ppuVar13 = ppuStack_100;
                  }
                }
                ppuStack_100 = ppuVar13;
                ppuStack_1b8 = (undefined **)0x8000000000000001;
              }
              else {
                puStack_80 = &UNK_108cada2e;
                uStack_78 = 7;
                ppuStack_1b0 = &puStack_80;
                ppuStack_1a8 = (undefined **)&DAT_100c7b3a0;
                ppuStack_100 = ppuVar13;
                ppuVar7 = (undefined **)FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_1b0)
                ;
              }
            }
            else if (ppuStack_1c0 == (undefined **)0x8000000000000001) {
              ppuStack_150 = (undefined **)0x8000000000000005;
              if (ppuVar8 == (undefined **)0x8000000000000005) {
                ppuStack_100 = ppuVar13;
                ppuStack_1e0 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
                ppuVar13 = ppuStack_100;
              }
              else {
                ppuStack_1b0 = ppuVar8;
                ppuStack_1a0 = ppuStack_140;
                ppuStack_1a8 = ppuStack_148;
                ppuStack_190 = ppuStack_130;
                ppuStack_198 = ppuStack_138;
                ppuStack_180 = ppuStack_120;
                ppuStack_188 = ppuStack_128;
                ppuStack_170 = ppuStack_110;
                ppuStack_178 = ppuStack_118;
                if (ppuVar8 == (undefined **)0x8000000000000000) {
                  FUN_100de6690(&ppuStack_1b0);
                  ppuStack_1c0 = (undefined **)0x8000000000000000;
LAB_1012b761c:
                  ppuStack_200 = ppuStack_1e0;
                  goto LAB_1012b71f0;
                }
                if (ppuVar8 == (undefined **)0x8000000000000003) {
                  ppuStack_1e0 = ppuStack_140;
                  if (ppuStack_148 != (undefined **)0x8000000000000000) {
                    ppuStack_1c0 = ppuStack_148;
                    if (ppuStack_148 == (undefined **)0x8000000000000001) {
                      ppuStack_1c0 = (undefined **)0x8000000000000001;
                      goto LAB_1012b7b7c;
                    }
                    ppuStack_238 = ppuStack_138;
                    goto LAB_1012b761c;
                  }
                }
                else {
                  ppuStack_100 = ppuVar13;
                  ppuStack_1e0 = (undefined **)
                                 FUN_108832ea0(&ppuStack_1b0,&puStack_80,&UNK_10b20a5e0);
                  FUN_100de6690(&ppuStack_1b0);
                  ppuVar13 = ppuStack_100;
                }
              }
              ppuStack_100 = ppuVar13;
              ppuStack_1c0 = (undefined **)0x8000000000000001;
              ppuVar7 = ppuStack_1e0;
            }
            else {
              puStack_80 = &UNK_108cada35;
              uStack_78 = 6;
              ppuStack_1b0 = &puStack_80;
              ppuStack_1a8 = (undefined **)&DAT_100c7b3a0;
              ppuStack_100 = ppuVar13;
              ppuVar7 = (undefined **)FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_1b0);
            }
LAB_1012b7b80:
            ppuStack_1b0 = (undefined **)0x8000000000000001;
            ppuStack_1a8 = ppuVar7;
            if (-0x7fffffffffffffff < (long)ppuVar19) {
joined_r0x0001012b7dbc:
              ppuStack_1b0 = (undefined **)0x8000000000000001;
              if (ppuVar19 != (undefined **)0x0) {
                ppuStack_1b0 = (undefined **)0x8000000000000001;
                _free(ppuStack_1f0);
              }
            }
LAB_1012b7bc4:
            if ((-0x7fffffffffffffff < (long)ppuStack_1c8) && (ppuStack_1c8 != (undefined **)0x0)) {
              _free(ppuStack_208);
            }
            if ((-0x7fffffffffffffff < (long)ppuStack_1c0) && (ppuStack_1c0 != (undefined **)0x0)) {
              _free(ppuStack_200);
            }
            if ((-0x7fffffffffffffff < (long)ppuStack_1b8) && (ppuStack_1b8 != (undefined **)0x0)) {
              _free(ppuStack_1d8);
            }
            FUN_100de8910(&ppuStack_108);
            if (ppuStack_150 != (undefined **)0x8000000000000005) {
              FUN_100de6690(&ppuStack_150);
            }
            goto LAB_1012b78cc;
          }
          if (uVar11 != 2) {
            if (uVar11 != 3) {
              ppuStack_150 = (undefined **)0x8000000000000005;
              if (ppuVar8 != (undefined **)0x8000000000000005) {
                ppuStack_1b0 = ppuVar8;
                ppuStack_1a0 = ppuStack_140;
                ppuStack_1a8 = ppuStack_148;
                ppuStack_190 = ppuStack_130;
                ppuStack_198 = ppuStack_138;
                ppuStack_180 = ppuStack_120;
                ppuStack_188 = ppuStack_128;
                ppuStack_170 = ppuStack_110;
                ppuStack_178 = ppuStack_118;
                FUN_100de6690(&ppuStack_1b0);
                goto LAB_1012b71f0;
              }
              ppuStack_100 = ppuVar13;
              ppuVar7 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
              goto LAB_1012b7b80;
            }
            if (ppuVar19 != (undefined **)0x8000000000000001) {
              puStack_80 = &UNK_108c98268;
              uStack_78 = 8;
              ppuStack_1b0 = &puStack_80;
              ppuStack_1a8 = (undefined **)&DAT_100c7b3a0;
              ppuStack_100 = ppuVar13;
              ppuStack_1a8 = (undefined **)
                             FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_1b0);
              ppuVar19 = (undefined **)((ulong)ppuVar19 & 0x7fffffffffffffff);
              goto joined_r0x0001012b7dbc;
            }
            ppuStack_150 = (undefined **)0x8000000000000005;
            if (ppuVar8 == (undefined **)0x8000000000000005) {
              ppuStack_100 = ppuVar13;
              ppuVar19 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
              ppuVar13 = ppuStack_100;
            }
            else {
              ppuStack_1b0 = ppuVar8;
              ppuStack_1a0 = ppuStack_140;
              ppuStack_1a8 = ppuStack_148;
              ppuStack_190 = ppuStack_130;
              ppuStack_198 = ppuStack_138;
              ppuStack_180 = ppuStack_120;
              ppuStack_188 = ppuStack_128;
              ppuStack_170 = ppuStack_110;
              ppuStack_178 = ppuStack_118;
              if (ppuVar8 == (undefined **)0x8000000000000000) {
                FUN_100de6690(&ppuStack_1b0);
                ppuStack_1f0 = ppuStack_218;
                ppuVar19 = (undefined **)0x8000000000000000;
                goto LAB_1012b71f0;
              }
              if (ppuVar8 == (undefined **)0x8000000000000003) {
                ppuStack_218 = ppuStack_140;
                ppuVar19 = ppuStack_140;
                if ((ppuStack_148 != (undefined **)0x8000000000000000) &&
                   (ppuStack_148 != (undefined **)0x8000000000000001)) {
                  ppuStack_228 = ppuStack_138;
                  ppuStack_1f0 = ppuStack_140;
                  ppuVar19 = ppuStack_148;
                  ppuStack_1b0 = ppuVar8;
                  goto LAB_1012b71f0;
                }
              }
              else {
                ppuStack_100 = ppuVar13;
                ppuVar19 = (undefined **)FUN_108832ea0(&ppuStack_1b0,&puStack_80,&UNK_10b20a5e0);
                FUN_100de6690(&ppuStack_1b0);
                ppuVar13 = ppuStack_100;
              }
            }
            ppuStack_100 = ppuVar13;
            ppuStack_1b0 = (undefined **)0x8000000000000001;
            ppuStack_1a8 = ppuVar19;
            goto LAB_1012b7bc4;
          }
          if (ppuStack_1c8 != (undefined **)0x8000000000000001) {
            puStack_80 = &UNK_108cde3dc;
            uStack_78 = 4;
            ppuStack_1b0 = &puStack_80;
            ppuStack_1a8 = (undefined **)&DAT_100c7b3a0;
            ppuStack_100 = ppuVar13;
            ppuVar7 = (undefined **)FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_1b0);
            goto LAB_1012b7b80;
          }
          ppuStack_150 = (undefined **)0x8000000000000005;
          if (ppuVar8 == (undefined **)0x8000000000000005) {
            ppuStack_100 = ppuVar13;
            ppuStack_1e8 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
            ppuVar13 = ppuStack_100;
LAB_1012b7b04:
            ppuStack_100 = ppuVar13;
            ppuStack_1c8 = (undefined **)0x8000000000000001;
            ppuVar7 = ppuStack_1e8;
            goto LAB_1012b7b80;
          }
          ppuStack_1b0 = ppuVar8;
          ppuStack_1a0 = ppuStack_140;
          ppuStack_1a8 = ppuStack_148;
          ppuStack_190 = ppuStack_130;
          ppuStack_198 = ppuStack_138;
          ppuStack_180 = ppuStack_120;
          ppuStack_188 = ppuStack_128;
          ppuStack_170 = ppuStack_110;
          ppuStack_178 = ppuStack_118;
          if (ppuVar8 != (undefined **)0x8000000000000000) {
            if (ppuVar8 == (undefined **)0x8000000000000003) {
              ppuStack_1c8 = ppuStack_148;
              ppuStack_1e8 = ppuStack_140;
              if (ppuStack_148 != (undefined **)0x8000000000000000) {
                if (ppuStack_148 == (undefined **)0x8000000000000001) {
                  ppuStack_1c8 = (undefined **)0x8000000000000001;
                  goto LAB_1012b7b7c;
                }
                ppuStack_230 = ppuStack_138;
                goto LAB_1012b71e8;
              }
            }
            else {
              ppuStack_100 = ppuVar13;
              ppuStack_1e8 = (undefined **)FUN_108832ea0(&ppuStack_1b0,&puStack_80,&UNK_10b20a5e0);
              FUN_100de6690(&ppuStack_1b0);
              ppuVar13 = ppuStack_100;
            }
            goto LAB_1012b7b04;
          }
          FUN_100de6690(&ppuStack_1b0);
          ppuStack_1c8 = (undefined **)0x8000000000000000;
LAB_1012b71e8:
          ppuStack_208 = ppuStack_1e8;
LAB_1012b71f0:
          auVar21._8_8_ = ppuStack_230;
          auVar21._0_8_ = ppuStack_228;
          ppuVar8 = ppuVar18;
          ppuVar7 = ppuVar13;
        } while (ppuVar13 != ppuVar18);
      }
      ppuStack_100 = ppuVar13;
      ppuStack_170 = auVar21._8_8_;
      ppuStack_158 = auVar21._0_8_;
      ppuStack_1b0 = (undefined **)0x8000000000000000;
      if (ppuStack_1b8 != (undefined **)0x8000000000000001) {
        ppuStack_1b0 = ppuStack_1b8;
      }
      ppuStack_198 = (undefined **)0x8000000000000000;
      if (ppuStack_1c0 != (undefined **)0x8000000000000001) {
        ppuStack_198 = ppuStack_1c0;
      }
      ppuStack_180 = (undefined **)0x8000000000000000;
      if (ppuStack_1c8 != (undefined **)0x8000000000000001) {
        ppuStack_180 = ppuStack_1c8;
      }
      ppuStack_168 = (undefined **)0x8000000000000000;
      if (ppuVar19 != (undefined **)0x8000000000000001) {
        ppuStack_168 = ppuVar19;
      }
      ppuStack_1a8 = ppuStack_1d8;
      ppuStack_1a0 = ppuStack_240;
      ppuStack_190 = ppuStack_200;
      ppuStack_188 = ppuStack_238;
      ppuStack_178 = ppuStack_208;
      ppuStack_160 = ppuStack_1f0;
      ppuStack_e0 = ppuStack_1b0;
      ppuStack_d8 = ppuStack_1d8;
      ppuStack_d0 = ppuStack_240;
      ppuStack_c8 = ppuStack_198;
      ppuStack_c0 = ppuStack_200;
      ppuStack_b8 = ppuStack_238;
      ppuStack_b0 = ppuStack_180;
      ppuStack_a8 = ppuStack_208;
      ppuStack_98 = ppuStack_168;
      ppuStack_90 = ppuStack_1f0;
      auVar3 = auVar21;
      if (ppuVar18 != ppuVar8) {
        uStack_a0 = ppuStack_170;
        uStack_88 = ppuStack_158;
        ppuStack_1a8 = (undefined **)FUN_1087e422c(uVar17,&UNK_10b21cb90,&UNK_10b20a590);
        ppuStack_1b0 = (undefined **)0x8000000000000001;
        FUN_100e1589c(&ppuStack_e0);
        auVar3._8_8_ = uStack_a0;
        auVar3._0_8_ = uStack_88;
        auVar21._8_8_ = ppuStack_170;
        auVar21._0_8_ = ppuStack_158;
      }
      uStack_a0 = auVar3._8_8_;
      uStack_88 = auVar3._0_8_;
      ppuStack_170 = auVar21._8_8_;
      ppuStack_158 = auVar21._0_8_;
      FUN_100de8910(&ppuStack_108);
    }
    else {
      ppuStack_1a8 = (undefined **)FUN_108832ea0(param_2,&puStack_80,&UNK_10b213e48);
      ppuStack_1b0 = (undefined **)0x8000000000000001;
    }
    goto LAB_1012b78cc;
  }
  ppuVar18 = (undefined **)param_2[1];
  ppuVar19 = (undefined **)param_2[2];
  uVar9 = param_2[3];
  ppuVar8 = ppuVar19 + uVar9 * 9;
  ppuVar13 = ppuVar19;
  ppuStack_e0 = ppuVar19;
  ppuStack_d0 = ppuVar18;
  ppuStack_c8 = ppuVar8;
  if (uVar9 == 0) {
LAB_1012b7154:
    ppuStack_d8 = ppuVar13;
    ppuVar6 = (undefined **)FUN_1087e422c(0,&UNK_10b22e568,&UNK_10b20a590);
LAB_1012b7170:
    ppuStack_1b0 = (undefined **)0x8000000000000001;
    ppuStack_1a8 = ppuVar6;
    ppuVar7 = ppuStack_148;
  }
  else {
    ppuVar13 = ppuVar19 + 9;
    ppuVar7 = (undefined **)*ppuVar19;
    if (ppuVar7 == (undefined **)0x8000000000000005) goto LAB_1012b7154;
    ppuVar6 = (undefined **)ppuVar19[2];
    ppuVar16 = (undefined **)ppuVar19[1];
    ppuStack_130 = (undefined **)ppuVar19[4];
    ppuStack_138 = (undefined **)ppuVar19[3];
    ppuStack_120 = (undefined **)ppuVar19[6];
    ppuStack_128 = (undefined **)ppuVar19[5];
    ppuStack_110 = (undefined **)ppuVar19[8];
    ppuStack_118 = (undefined **)ppuVar19[7];
    ppuStack_150 = ppuVar7;
    ppuStack_148 = ppuVar16;
    ppuStack_140 = ppuVar6;
    ppuStack_d8 = ppuVar13;
    if (ppuVar7 != (undefined **)0x8000000000000000) {
      if (ppuVar7 == (undefined **)0x8000000000000003) {
        if ((-0x7fffffffffffffff < (long)ppuVar16) && (ppuVar16 != (undefined **)0x8000000000000002)
           ) {
          ppuStack_1d8 = ppuStack_138;
          if (uVar9 != 1) goto LAB_1012b769c;
          goto LAB_1012b7984;
        }
      }
      else {
        ppuVar6 = (undefined **)FUN_108832ea0(&ppuStack_150,&puStack_80,&UNK_10b20a5e0);
        FUN_100de6690(&ppuStack_150);
      }
      goto LAB_1012b7170;
    }
    FUN_100de6690(&ppuStack_150);
    ppuVar16 = (undefined **)0x8000000000000000;
    ppuVar6 = ppuVar14;
    if (uVar9 == 1) {
LAB_1012b7984:
      ppuStack_1b8 = (undefined **)FUN_1087e422c(1,&UNK_10b22e568,&UNK_10b20a590);
LAB_1012b79a0:
      ppuStack_1b0 = (undefined **)0x8000000000000001;
      ppuStack_1a8 = ppuStack_1b8;
LAB_1012b79ac:
      ppuVar7 = ppuStack_148;
      if (((ulong)ppuVar16 & 0x7fffffffffffffff) != 0) {
        _free(ppuVar6);
        ppuVar7 = ppuStack_148;
      }
    }
    else {
LAB_1012b769c:
      ppuVar13 = ppuVar19 + 0x12;
      ppuVar7 = (undefined **)ppuVar19[9];
      ppuStack_d8 = ppuVar13;
      if (ppuVar7 == (undefined **)0x8000000000000005) goto LAB_1012b7984;
      ppuStack_140 = (undefined **)ppuVar19[0xb];
      ppuStack_1c0 = (undefined **)ppuVar19[10];
      ppuStack_130 = (undefined **)ppuVar19[0xd];
      ppuStack_138 = (undefined **)ppuVar19[0xc];
      ppuStack_120 = (undefined **)ppuVar19[0xf];
      ppuStack_128 = (undefined **)ppuVar19[0xe];
      ppuStack_110 = (undefined **)ppuVar19[0x11];
      ppuStack_118 = (undefined **)ppuVar19[0x10];
      ppuStack_150 = ppuVar7;
      ppuStack_148 = ppuStack_1c0;
      if (ppuVar7 != (undefined **)0x8000000000000000) {
        if (ppuVar7 == (undefined **)0x8000000000000003) {
          ppuStack_1b8 = ppuStack_140;
          if ((-0x7fffffffffffffff < (long)ppuStack_1c0) &&
             (ppuStack_1c0 != (undefined **)0x8000000000000002)) {
            ppuStack_1e8 = ppuStack_138;
            if (uVar9 != 2) goto LAB_1012b76f8;
            goto LAB_1012b7abc;
          }
        }
        else {
          ppuStack_1b8 = (undefined **)FUN_108832ea0(&ppuStack_150,&puStack_80,&UNK_10b20a5e0);
          FUN_100de6690(&ppuStack_150);
        }
        goto LAB_1012b79a0;
      }
      FUN_100de6690(&ppuStack_150);
      ppuStack_1c0 = (undefined **)0x8000000000000000;
      if (uVar9 == 2) {
LAB_1012b7abc:
        ppuStack_1c8 = (undefined **)FUN_1087e422c(2,&UNK_10b22e568,&UNK_10b20a590);
LAB_1012b7ad8:
        ppuStack_1b0 = (undefined **)0x8000000000000001;
        ppuStack_1a8 = ppuStack_1c8;
LAB_1012b7ae4:
        if (((ulong)ppuStack_1c0 & 0x7fffffffffffffff) != 0) {
          _free(ppuStack_1b8);
        }
        goto LAB_1012b79ac;
      }
LAB_1012b76f8:
      ppuVar13 = ppuVar19 + 0x1b;
      ppuVar7 = (undefined **)ppuVar19[0x12];
      ppuStack_d8 = ppuVar13;
      if (ppuVar7 == (undefined **)0x8000000000000005) goto LAB_1012b7abc;
      ppuStack_140 = (undefined **)ppuVar19[0x14];
      ppuStack_1e0 = (undefined **)ppuVar19[0x13];
      ppuStack_130 = (undefined **)ppuVar19[0x16];
      ppuStack_138 = (undefined **)ppuVar19[0x15];
      ppuStack_120 = (undefined **)ppuVar19[0x18];
      ppuStack_128 = (undefined **)ppuVar19[0x17];
      ppuStack_110 = (undefined **)ppuVar19[0x1a];
      ppuStack_118 = (undefined **)ppuVar19[0x19];
      ppuStack_150 = ppuVar7;
      ppuStack_148 = ppuStack_1e0;
      if (ppuVar7 != (undefined **)0x8000000000000000) {
        if (ppuVar7 == (undefined **)0x8000000000000003) {
          ppuStack_1c8 = ppuStack_140;
          if ((-0x7fffffffffffffff < (long)ppuStack_1e0) &&
             (ppuStack_1e0 != (undefined **)0x8000000000000002)) {
            ppuStack_1f8 = ppuStack_138;
            if (uVar9 != 3) goto LAB_1012b775c;
            goto LAB_1012b7c80;
          }
        }
        else {
          ppuStack_1c8 = (undefined **)FUN_108832ea0(&ppuStack_150,&puStack_80,&UNK_10b20a5e0);
          FUN_100de6690(&ppuStack_150);
        }
        goto LAB_1012b7ad8;
      }
      FUN_100de6690(&ppuStack_150);
      ppuStack_1e0 = (undefined **)0x8000000000000000;
      if (uVar9 == 3) {
LAB_1012b7c80:
        ppuStack_1a8 = (undefined **)FUN_1087e422c(3,&UNK_10b22e568,&UNK_10b20a590);
joined_r0x0001012b7ca8:
        ppuStack_1b0 = (undefined **)0x8000000000000001;
        if (((ulong)ppuStack_1e0 & 0x7fffffffffffffff) != 0) {
          ppuStack_1b0 = (undefined **)0x8000000000000001;
          _free(ppuStack_1c8);
        }
        goto LAB_1012b7ae4;
      }
LAB_1012b775c:
      ppuVar13 = ppuVar19 + 0x24;
      ppuVar7 = (undefined **)ppuVar19[0x1b];
      ppuStack_d8 = ppuVar13;
      if (ppuVar7 == (undefined **)0x8000000000000005) goto LAB_1012b7c80;
      ppuStack_140 = (undefined **)ppuVar19[0x1d];
      ppuStack_148 = (undefined **)ppuVar19[0x1c];
      ppuStack_130 = (undefined **)ppuVar19[0x1f];
      ppuVar20 = (undefined **)ppuVar19[0x1e];
      ppuStack_120 = (undefined **)ppuVar19[0x21];
      ppuStack_128 = (undefined **)ppuVar19[0x20];
      ppuStack_110 = (undefined **)ppuVar19[0x23];
      ppuStack_118 = (undefined **)ppuVar19[0x22];
      ppuStack_150 = ppuVar7;
      ppuStack_138 = ppuVar20;
      if (ppuVar7 != (undefined **)0x8000000000000000) {
        if (ppuVar7 == (undefined **)0x8000000000000003) {
          ppuStack_1a8 = ppuStack_140;
          if ((-0x7fffffffffffffff < (long)ppuStack_148) &&
             (ppuStack_1f0 = ppuStack_140, ppuStack_1a8 = ppuStack_140,
             ppuStack_148 != (undefined **)0x8000000000000002)) goto LAB_1012b77ac;
        }
        else {
          ppuVar7 = (undefined **)FUN_108832ea0(&ppuStack_150,&puStack_80,&UNK_10b20a5e0);
          FUN_100de6690(&ppuStack_150);
          ppuStack_1a8 = ppuVar7;
        }
        goto joined_r0x0001012b7ca8;
      }
      FUN_100de6690(&ppuStack_150);
      ppuStack_148 = (undefined **)0x8000000000000000;
      ppuVar20 = extraout_x9;
LAB_1012b77ac:
      ppuStack_1a0 = ppuStack_1d8;
      ppuStack_198 = ppuStack_1c0;
      ppuStack_190 = ppuStack_1b8;
      ppuStack_188 = ppuStack_1e8;
      ppuStack_180 = ppuStack_1e0;
      ppuStack_178 = ppuStack_1c8;
      ppuStack_170 = ppuStack_1f8;
      ppuStack_160 = ppuStack_1f0;
      ppuStack_128 = ppuStack_1e8;
      ppuStack_130 = ppuStack_1b8;
      ppuStack_118 = ppuStack_1c8;
      ppuStack_120 = ppuStack_1e0;
      ppuStack_110 = ppuStack_1f8;
      ppuStack_100 = ppuStack_1f0;
      ppuStack_138 = ppuStack_1c0;
      ppuStack_140 = ppuStack_1d8;
      ppuStack_1b0 = ppuVar16;
      ppuStack_1a8 = ppuVar6;
      ppuStack_168 = ppuStack_148;
      ppuStack_158 = ppuVar20;
      ppuStack_150 = ppuVar16;
      ppuVar7 = ppuVar6;
      ppuStack_108 = ppuStack_148;
      ppuStack_f8 = ppuVar20;
      if (uVar9 != 4) {
        ppuStack_148 = ppuVar6;
        ppuStack_1a8 = (undefined **)FUN_1087e422c(uVar9,&UNK_10b21cb80,&UNK_10b20a590);
        ppuStack_1b0 = (undefined **)0x8000000000000001;
        FUN_100e1589c(&ppuStack_150);
        ppuVar7 = ppuStack_148;
      }
    }
  }
  ppuStack_148 = ppuVar7;
  lVar15 = ((ulong)((long)ppuVar8 - (long)ppuVar13) >> 3) * -0x71c71c71c71c71c7 + 1;
  while (lVar15 = lVar15 + -1, lVar15 != 0) {
    FUN_100de6690(ppuVar13);
    ppuVar13 = ppuVar13 + 9;
  }
  if (ppuVar18 != (undefined **)0x0) {
    _free(ppuVar19);
  }
LAB_1012b78cc:
  if (((long)ppuVar14 < 0) && (((ulong)ppuVar14 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(param_2);
  }
  if (ppuStack_1b0 == (undefined **)0x8000000000000001) {
    *param_1 = 0x8000000000000002;
    param_1[1] = (ulong)ppuStack_1a8;
  }
  else {
    param_1[5] = (ulong)ppuStack_188;
    param_1[4] = (ulong)ppuStack_190;
    param_1[7] = (ulong)ppuStack_178;
    param_1[6] = (ulong)ppuStack_180;
    param_1[9] = (ulong)ppuStack_168;
    param_1[8] = (ulong)ppuStack_170;
    param_1[0xb] = (ulong)ppuStack_158;
    param_1[10] = (ulong)ppuStack_160;
    param_1[1] = (ulong)ppuStack_1a8;
    *param_1 = (ulong)ppuStack_1b0;
    param_1[3] = (ulong)ppuStack_198;
    param_1[2] = (ulong)ppuStack_1a0;
  }
  return;
}

