
void FUN_1017d9d84(long *param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **extraout_x1;
  ulong uVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined *puVar13;
  undefined **in_x14;
  undefined **extraout_x14;
  undefined **in_x15;
  undefined **extraout_x15;
  undefined **in_x16;
  undefined **extraout_x16;
  undefined **in_x17;
  undefined **extraout_x17;
  long *plVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  undefined **ppuVar19;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined *puStack_148;
  long *plStack_140;
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
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  puVar15 = *param_2;
  uVar8 = (ulong)puVar15 ^ 0x8000000000000000;
  if (-1 < (long)puVar15) {
    uVar8 = 5;
  }
  if (uVar8 != 4) {
    if (uVar8 == 5) {
      puVar17 = param_2[6];
      plVar9 = (long *)param_2[1];
      puVar16 = param_2[2];
      puVar13 = param_2[4];
      ppuVar11 = param_2;
      if ((puVar13 != (undefined *)0x0) && ((long)puVar13 * 9 != -0x11)) {
        _free(param_2[3] + (long)puVar13 * -8 + -8);
        ppuVar11 = extraout_x1;
        in_x14 = extraout_x14;
        in_x15 = extraout_x15;
        in_x16 = extraout_x16;
        in_x17 = extraout_x17;
      }
      plVar14 = plVar9 + (long)puVar16 * 0xd;
      ppuStack_1a0 = (undefined **)0x8000000000000005;
      plStack_158 = plVar9;
      puStack_148 = puVar15;
      plStack_140 = plVar14;
      if (puVar16 == (undefined *)0x0) {
        puVar16 = (undefined *)0x2;
        ppuStack_1c0 = (undefined **)0x8000000000000001;
        ppuStack_1b8 = (undefined **)0x8000000000000001;
        ppuStack_1d0 = (undefined **)0x8000000000000001;
        ppuStack_1c8 = (undefined **)0x8000000000000001;
        ppuStack_228 = ppuVar11;
        ppuStack_230 = param_3;
        ppuStack_238 = param_4;
        ppuStack_240 = param_5;
        ppuStack_218 = param_6;
        plVar12 = plVar14;
        ppuStack_1d8 = in_x14;
        ppuStack_200 = in_x15;
        ppuStack_208 = in_x16;
        ppuStack_210 = in_x17;
      }
      else {
        puVar16 = (undefined *)0x2;
        ppuStack_1d0 = (undefined **)0x8000000000000001;
        ppuStack_1c8 = (undefined **)0x8000000000000001;
        ppuStack_1c0 = (undefined **)0x8000000000000001;
        ppuStack_1b8 = (undefined **)0x8000000000000001;
        plVar3 = plVar9;
        plStack_150 = plVar9;
        do {
          plVar9 = plVar3 + 0xd;
          plVar12 = plVar9;
          if (*plVar3 == -0x8000000000000000) break;
          plVar12 = (long *)plVar3[1];
          lVar6 = plVar3[2];
          ppuStack_188 = (undefined **)plVar3[6];
          ppuStack_190 = (undefined **)plVar3[5];
          puStack_178 = (undefined *)plVar3[8];
          puStack_180 = (undefined *)plVar3[7];
          puStack_168 = (undefined *)plVar3[10];
          puStack_170 = (undefined *)plVar3[9];
          puStack_160 = (undefined *)plVar3[0xb];
          ppuStack_198 = (undefined **)plVar3[4];
          ppuStack_1a0 = (undefined **)plVar3[3];
          if (lVar6 == 9) {
            if (*plVar12 == 0x7079745f6e616c70 && (char)plVar12[1] == 'e') {
              uVar18 = 3;
            }
            else {
              if (*plVar12 != 0x615f737465736572 || (char)plVar12[1] != 't') goto LAB_1017da024;
              uVar18 = 4;
            }
          }
          else if (lVar6 == 7) {
            if ((int)*plVar12 != 0x7373656d || *(int *)((long)plVar12 + 3) != 0x65676173)
            goto LAB_1017da024;
            uVar18 = 2;
          }
          else if (lVar6 == 4) {
            if ((int)*plVar12 == 0x65707974) {
              uVar18 = 0;
            }
            else {
              if ((int)*plVar12 != 0x65646f63) goto LAB_1017da024;
              uVar18 = 1;
            }
          }
          else {
LAB_1017da024:
            uVar18 = 5;
          }
          if (*plVar3 != 0) {
            _free();
          }
          ppuVar11 = ppuStack_1a0;
          if (uVar18 < 3) {
            ppuVar5 = ppuStack_190;
            if (uVar18 != 0) {
              if (uVar18 == 1) {
                if (ppuStack_1d0 == (undefined **)0x8000000000000001) {
                  ppuStack_1a0 = (undefined **)0x8000000000000005;
                  if (ppuVar11 == (undefined **)0x8000000000000005) {
                    plStack_150 = plVar9;
                    ppuStack_1e8 = (undefined **)FUN_108880728(&UNK_108cde170,0x10);
                    plVar9 = plStack_150;
                  }
                  else {
                    ppuStack_c0 = ppuVar11;
                    ppuStack_b0 = ppuStack_190;
                    ppuStack_b8 = ppuStack_198;
                    puStack_a0 = puStack_180;
                    ppuStack_a8 = ppuStack_188;
                    puStack_90 = puStack_170;
                    puStack_98 = puStack_178;
                    puStack_80 = puStack_160;
                    puStack_88 = puStack_168;
                    if (ppuVar11 == (undefined **)0x8000000000000000) {
                      FUN_1017a4698(&ppuStack_c0);
                      ppuStack_1d0 = (undefined **)0x8000000000000000;
LAB_1017da390:
                      ppuStack_200 = ppuStack_1e8;
                      goto LAB_1017d9f10;
                    }
                    if (ppuVar11 == (undefined **)0x8000000000000003) {
                      ppuStack_1e8 = ppuStack_190;
                      if (ppuStack_198 != (undefined **)0x8000000000000000) {
                        ppuStack_1d0 = ppuStack_198;
                        if (ppuStack_198 == (undefined **)0x8000000000000001) {
                          ppuStack_1d0 = (undefined **)0x8000000000000001;
                          goto LAB_1017da9ac;
                        }
                        ppuStack_238 = ppuStack_188;
                        goto LAB_1017da390;
                      }
                    }
                    else {
                      plStack_150 = plVar9;
                      ppuStack_1e8 = (undefined **)
                                     FUN_10887f604(&ppuStack_c0,&puStack_78,&UNK_10b2589d0);
                      FUN_1017a4698(&ppuStack_c0);
                      plVar9 = plStack_150;
                    }
                  }
                  plStack_150 = plVar9;
                  ppuStack_1d0 = (undefined **)0x8000000000000001;
                  ppuVar5 = ppuStack_1e8;
                  plVar9 = plStack_150;
                }
                else {
                  puStack_78 = &UNK_108c520a8;
                  ppuStack_70 = (undefined **)0x4;
                  ppuStack_c0 = &puStack_78;
                  ppuStack_b8 = (undefined **)&DAT_10179e9f8;
                  plStack_150 = plVar9;
                  ppuVar5 = (undefined **)
                            FUN_108880790(s_duplicate_field_____108ac2973,&ppuStack_c0);
                  plVar9 = plStack_150;
                }
              }
              else if (ppuStack_1b8 == (undefined **)0x8000000000000001) {
                ppuStack_1a0 = (undefined **)0x8000000000000005;
                if (ppuVar11 == (undefined **)0x8000000000000005) {
                  plStack_150 = plVar9;
                  ppuStack_1f8 = (undefined **)FUN_108880728(&UNK_108cde170,0x10);
                  plVar9 = plStack_150;
                }
                else {
                  ppuStack_c0 = ppuVar11;
                  ppuStack_b0 = ppuStack_190;
                  ppuStack_b8 = ppuStack_198;
                  puStack_a0 = puStack_180;
                  ppuStack_a8 = ppuStack_188;
                  puStack_90 = puStack_170;
                  puStack_98 = puStack_178;
                  puStack_80 = puStack_160;
                  puStack_88 = puStack_168;
                  if (ppuVar11 == (undefined **)0x8000000000000000) {
                    FUN_1017a4698(&ppuStack_c0);
                    ppuStack_1b8 = (undefined **)0x8000000000000000;
LAB_1017da3d0:
                    ppuStack_208 = ppuStack_1f8;
                    goto LAB_1017d9f10;
                  }
                  if (ppuVar11 == (undefined **)0x8000000000000003) {
                    ppuStack_1f8 = ppuStack_190;
                    if (ppuStack_198 != (undefined **)0x8000000000000000) {
                      ppuStack_1b8 = ppuStack_198;
                      if (ppuStack_198 == (undefined **)0x8000000000000001) {
                        ppuStack_1b8 = (undefined **)0x8000000000000001;
                        goto LAB_1017da9ac;
                      }
                      ppuStack_230 = ppuStack_188;
                      goto LAB_1017da3d0;
                    }
                  }
                  else {
                    plStack_150 = plVar9;
                    ppuStack_1f8 = (undefined **)
                                   FUN_10887f604(&ppuStack_c0,&puStack_78,&UNK_10b2589d0);
                    FUN_1017a4698(&ppuStack_c0);
                    plVar9 = plStack_150;
                  }
                }
                plStack_150 = plVar9;
                ppuStack_1b8 = (undefined **)0x8000000000000001;
                ppuVar5 = ppuStack_1f8;
                plVar9 = plStack_150;
              }
              else {
                puStack_78 = &UNK_108ce35f6;
                ppuStack_70 = (undefined **)0x7;
                ppuStack_c0 = &puStack_78;
                ppuStack_b8 = (undefined **)&DAT_10179e9f8;
                plStack_150 = plVar9;
                ppuVar5 = (undefined **)FUN_108880790(s_duplicate_field_____108ac2973,&ppuStack_c0);
                plVar9 = plStack_150;
              }
              goto LAB_1017da9ac;
            }
            if (ppuStack_1c8 != (undefined **)0x8000000000000001) {
              puStack_78 = &UNK_108cde34c;
              ppuStack_70 = (undefined **)0x4;
              ppuStack_c0 = &puStack_78;
              ppuStack_b8 = (undefined **)&DAT_10179e9f8;
              plStack_150 = plVar9;
              ppuVar5 = (undefined **)FUN_108880790(s_duplicate_field_____108ac2973,&ppuStack_c0);
              plVar9 = plStack_150;
              goto LAB_1017da9ac;
            }
            ppuStack_1a0 = (undefined **)0x8000000000000005;
            if (ppuVar11 == (undefined **)0x8000000000000005) {
              plStack_150 = plVar9;
              ppuVar5 = (undefined **)FUN_108880728(&UNK_108cde170,0x10);
              plVar9 = plStack_150;
            }
            else {
              ppuStack_c0 = ppuVar11;
              ppuStack_b0 = ppuStack_190;
              ppuStack_b8 = ppuStack_198;
              puStack_a0 = puStack_180;
              ppuStack_a8 = ppuStack_188;
              puStack_90 = puStack_170;
              puStack_98 = puStack_178;
              puStack_80 = puStack_160;
              puStack_88 = puStack_168;
              if (ppuVar11 == (undefined **)0x8000000000000000) {
                FUN_1017a4698(&ppuStack_c0);
                ppuStack_1c8 = (undefined **)0x8000000000000000;
LAB_1017d9f08:
                ppuStack_1d8 = ppuStack_1e0;
                goto LAB_1017d9f10;
              }
              if (ppuVar11 == (undefined **)0x8000000000000003) {
                ppuStack_1c8 = ppuStack_198;
                ppuStack_1e0 = ppuStack_190;
                if (ppuStack_198 != (undefined **)0x8000000000000000) {
                  if (ppuStack_198 == (undefined **)0x8000000000000001) {
                    ppuStack_1c8 = (undefined **)0x8000000000000001;
                    goto LAB_1017da9ac;
                  }
                  ppuStack_240 = ppuStack_188;
                  goto LAB_1017d9f08;
                }
              }
              else {
                plStack_150 = plVar9;
                ppuVar5 = (undefined **)FUN_10887f604(&ppuStack_c0,&puStack_78,&UNK_10b2589d0);
                FUN_1017a4698(&ppuStack_c0);
                plVar9 = plStack_150;
              }
            }
            plStack_150 = plVar9;
            ppuStack_1c8 = (undefined **)0x8000000000000001;
            plVar9 = plStack_150;
            goto LAB_1017da9ac;
          }
          if (uVar18 == 3) {
            if (ppuStack_1c0 == (undefined **)0x8000000000000001) {
              ppuStack_1a0 = (undefined **)0x8000000000000005;
              if (ppuVar11 == (undefined **)0x8000000000000005) {
                plStack_150 = plVar9;
                ppuStack_1f0 = (undefined **)FUN_108880728(&UNK_108cde170,0x10);
                plVar9 = plStack_150;
              }
              else {
                ppuStack_c0 = ppuVar11;
                ppuStack_b0 = ppuStack_190;
                ppuStack_b8 = ppuStack_198;
                puStack_a0 = puStack_180;
                ppuStack_a8 = ppuStack_188;
                puStack_90 = puStack_170;
                puStack_98 = puStack_178;
                puStack_80 = puStack_160;
                puStack_88 = puStack_168;
                if (ppuVar11 == (undefined **)0x8000000000000000) {
                  FUN_1017a4698(&ppuStack_c0);
                  ppuStack_1c0 = (undefined **)0x8000000000000000;
LAB_1017da350:
                  ppuStack_210 = ppuStack_1f0;
                  goto LAB_1017d9f10;
                }
                if (ppuVar11 == (undefined **)0x8000000000000003) {
                  ppuStack_1f0 = ppuStack_190;
                  if ((ppuStack_198 != (undefined **)0x8000000000000000) &&
                     (ppuStack_1c0 = ppuStack_198, ppuStack_198 != (undefined **)0x8000000000000001)
                     ) {
                    ppuStack_228 = ppuStack_188;
                    goto LAB_1017da350;
                  }
                }
                else {
                  plStack_150 = plVar9;
                  ppuStack_1f0 = (undefined **)
                                 FUN_10887f604(&ppuStack_c0,&puStack_78,&UNK_10b2589d0);
                  FUN_1017a4698(&ppuStack_c0);
                  plVar9 = plStack_150;
                }
              }
              plStack_150 = plVar9;
              *param_1 = 2;
              param_1[1] = (long)ppuStack_1f0;
            }
            else {
              puStack_78 = &UNK_108ce35fd;
              ppuStack_70 = (undefined **)0x9;
              ppuStack_c0 = &puStack_78;
              ppuStack_b8 = (undefined **)&DAT_10179e9f8;
              plStack_150 = plVar9;
              lVar6 = FUN_108880790(s_duplicate_field_____108ac2973,&ppuStack_c0);
              *param_1 = 2;
              param_1[1] = lVar6;
              ppuStack_1c0 = (undefined **)((ulong)ppuStack_1c0 & 0x7fffffffffffffff);
joined_r0x0001017dac44:
              if (ppuStack_1c0 != (undefined **)0x0) {
                _free(ppuStack_210);
              }
            }
LAB_1017da9d4:
            if ((-0x7fffffffffffffff < (long)ppuStack_1b8) && (ppuStack_1b8 != (undefined **)0x0)) {
              _free(ppuStack_208);
            }
            if ((-0x7fffffffffffffff < (long)ppuStack_1d0) && (ppuStack_1d0 != (undefined **)0x0)) {
              _free(ppuStack_200);
            }
            if ((-0x7fffffffffffffff < (long)ppuStack_1c8) && (ppuStack_1c8 != (undefined **)0x0)) {
              _free(ppuStack_1d8);
            }
            FUN_1017a4824(&plStack_158);
            if (ppuStack_1a0 != (undefined **)0x8000000000000005) {
              FUN_1017a4698(&ppuStack_1a0);
            }
            goto LAB_1017da738;
          }
          if (uVar18 == 4) {
            if (puVar16 == (undefined *)0x2) {
              ppuStack_1a0 = (undefined **)0x8000000000000005;
              if (ppuVar11 == (undefined **)0x8000000000000005) {
                plStack_150 = plVar9;
                ppuVar5 = (undefined **)FUN_108880728(&UNK_108cde170,0x10);
                plVar9 = plStack_150;
              }
              else {
                ppuStack_c0 = ppuVar11;
                ppuStack_b0 = ppuStack_190;
                ppuStack_b8 = ppuStack_198;
                puStack_a0 = puStack_180;
                ppuStack_a8 = ppuStack_188;
                puStack_90 = puStack_170;
                puStack_98 = puStack_178;
                puStack_80 = puStack_160;
                puStack_88 = puStack_168;
                FUN_1017ba738(&puStack_78,&ppuStack_c0);
                ppuStack_218 = ppuStack_70;
                ppuVar5 = ppuStack_70;
                puVar16 = puStack_78;
                if (puStack_78 != (undefined *)0x2) goto LAB_1017d9f10;
              }
            }
            else {
              puStack_78 = &UNK_108ce3606;
              ppuStack_70 = (undefined **)0x9;
              ppuStack_c0 = &puStack_78;
              ppuStack_b8 = (undefined **)&DAT_10179e9f8;
              plStack_150 = plVar9;
              ppuVar5 = (undefined **)FUN_108880790(s_duplicate_field_____108ac2973,&ppuStack_c0);
              plVar9 = plStack_150;
            }
LAB_1017da9ac:
            plStack_150 = plVar9;
            *param_1 = 2;
            param_1[1] = (long)ppuVar5;
            if (-0x7fffffffffffffff < (long)ppuStack_1c0) goto joined_r0x0001017dac44;
            goto LAB_1017da9d4;
          }
          ppuStack_1a0 = (undefined **)0x8000000000000005;
          if (ppuVar11 == (undefined **)0x8000000000000005) {
            plStack_150 = plVar9;
            ppuVar5 = (undefined **)FUN_108880728(&UNK_108cde170,0x10);
            plVar9 = plStack_150;
            goto LAB_1017da9ac;
          }
          ppuStack_c0 = ppuVar11;
          ppuStack_b0 = ppuStack_190;
          ppuStack_b8 = ppuStack_198;
          puStack_a0 = puStack_180;
          ppuStack_a8 = ppuStack_188;
          puStack_90 = puStack_170;
          puStack_98 = puStack_178;
          puStack_80 = puStack_160;
          puStack_88 = puStack_168;
          FUN_1017a4698(&ppuStack_c0);
LAB_1017d9f10:
          plVar12 = plVar14;
          plVar3 = plVar9;
        } while (plVar9 != plVar14);
      }
      plStack_150 = plVar9;
      ppuVar11 = (undefined **)0x8000000000000000;
      if (ppuStack_1c8 != (undefined **)0x8000000000000001) {
        ppuVar11 = ppuStack_1c8;
      }
      ppuVar5 = (undefined **)0x8000000000000000;
      if (ppuStack_1d0 != (undefined **)0x8000000000000001) {
        ppuVar5 = ppuStack_1d0;
      }
      ppuVar1 = (undefined **)0x8000000000000000;
      if (ppuStack_1b8 != (undefined **)0x8000000000000001) {
        ppuVar1 = ppuStack_1b8;
      }
      ppuVar2 = (undefined **)0x8000000000000000;
      if (ppuStack_1c0 != (undefined **)0x8000000000000001) {
        ppuVar2 = ppuStack_1c0;
      }
      puVar13 = (undefined *)0x0;
      if (puVar16 != (undefined *)0x2) {
        puVar13 = puVar16;
      }
      *param_1 = (long)puVar13;
      param_1[1] = (long)ppuStack_218;
      param_1[2] = (long)ppuVar11;
      param_1[3] = (long)ppuStack_1d8;
      param_1[4] = (long)ppuStack_240;
      param_1[5] = (long)ppuVar5;
      param_1[6] = (long)ppuStack_200;
      param_1[7] = (long)ppuStack_238;
      param_1[8] = (long)ppuVar1;
      param_1[9] = (long)ppuStack_208;
      param_1[10] = (long)ppuStack_230;
      param_1[0xb] = (long)ppuVar2;
      param_1[0xc] = (long)ppuStack_210;
      param_1[0xd] = (long)ppuStack_228;
      lStack_128 = param_1[1];
      lStack_130 = *param_1;
      lStack_118 = param_1[3];
      lStack_120 = param_1[2];
      lStack_108 = param_1[5];
      lStack_110 = param_1[4];
      lStack_f8 = param_1[7];
      lStack_100 = param_1[6];
      lStack_d8 = param_1[0xb];
      lStack_e0 = param_1[10];
      lStack_c8 = param_1[0xd];
      lStack_d0 = param_1[0xc];
      lStack_e8 = param_1[9];
      lStack_f0 = param_1[8];
      if (plVar14 != plVar12) {
        lVar6 = FUN_108878f3c(puVar17,&UNK_10b2593e0,&UNK_10b258940);
        *param_1 = 2;
        param_1[1] = lVar6;
        FUN_1017a58ec(&lStack_130);
      }
      FUN_1017a4824(&plStack_158);
    }
    else {
      lVar6 = FUN_10887f604(param_2,&puStack_78,&UNK_10b2594b0);
      *param_1 = 2;
      param_1[1] = lVar6;
    }
    goto LAB_1017da738;
  }
  ppuVar1 = (undefined **)param_2[1];
  ppuVar2 = (undefined **)param_2[2];
  puVar16 = param_2[3];
  ppuVar5 = ppuVar2 + (long)puVar16 * 9;
  ppuVar11 = ppuVar2;
  ppuStack_c0 = ppuVar2;
  ppuStack_b0 = ppuVar1;
  ppuStack_a8 = ppuVar5;
  if (puVar16 == (undefined *)0x0) {
LAB_1017d9e94:
    ppuStack_b8 = ppuVar11;
    ppuVar4 = (undefined **)FUN_108878f3c(0,&UNK_10b2598c8,&UNK_10b258940);
LAB_1017d9eb0:
    *param_1 = 2;
    param_1[1] = (long)ppuVar4;
LAB_1017d9eb8:
    FUN_1017a5c10(ppuVar11,((ulong)((long)ppuVar5 - (long)ppuVar11) >> 3) * -0x71c71c71c71c71c7);
  }
  else {
    ppuVar11 = ppuVar2 + 9;
    ppuVar10 = (undefined **)*ppuVar2;
    if (ppuVar10 == (undefined **)0x8000000000000005) goto LAB_1017d9e94;
    ppuVar4 = (undefined **)ppuVar2[2];
    ppuVar19 = (undefined **)ppuVar2[1];
    puStack_180 = ppuVar2[4];
    ppuStack_188 = (undefined **)ppuVar2[3];
    puStack_170 = ppuVar2[6];
    puStack_178 = ppuVar2[5];
    puStack_160 = ppuVar2[8];
    puStack_168 = ppuVar2[7];
    ppuStack_1a0 = ppuVar10;
    ppuStack_198 = ppuVar19;
    ppuStack_190 = ppuVar4;
    ppuStack_b8 = ppuVar11;
    if (ppuVar10 != (undefined **)0x8000000000000000) {
      if (ppuVar10 == (undefined **)0x8000000000000003) {
        if ((-0x7fffffffffffffff < (long)ppuVar19) && (ppuVar19 != (undefined **)0x8000000000000002)
           ) {
          ppuStack_1d0 = ppuStack_188;
          if (puVar16 != (undefined *)0x1) goto LAB_1017da444;
          goto LAB_1017da654;
        }
      }
      else {
        ppuVar4 = (undefined **)FUN_10887f604(&ppuStack_1a0,&puStack_78,&UNK_10b2589d0);
        FUN_1017a4698(&ppuStack_1a0);
      }
      goto LAB_1017d9eb0;
    }
    FUN_1017a4698(&ppuStack_1a0);
    ppuVar19 = (undefined **)0x8000000000000000;
    ppuVar4 = param_2;
    if (puVar16 == (undefined *)0x1) {
LAB_1017da654:
      ppuStack_1b8 = (undefined **)FUN_108878f3c(1,&UNK_10b2598c8,&UNK_10b258940);
LAB_1017da670:
      *param_1 = 2;
      param_1[1] = (long)ppuStack_1b8;
LAB_1017da67c:
      if (((ulong)ppuVar19 & 0x7fffffffffffffff) != 0) {
        _free(ppuVar4);
      }
      goto LAB_1017d9eb8;
    }
LAB_1017da444:
    ppuVar11 = ppuVar2 + 0x12;
    ppuVar10 = (undefined **)ppuVar2[9];
    ppuStack_b8 = ppuVar11;
    if (ppuVar10 == (undefined **)0x8000000000000005) goto LAB_1017da654;
    ppuStack_190 = (undefined **)ppuVar2[0xb];
    ppuStack_1c0 = (undefined **)ppuVar2[10];
    puStack_180 = ppuVar2[0xd];
    ppuStack_188 = (undefined **)ppuVar2[0xc];
    puStack_170 = ppuVar2[0xf];
    puStack_178 = ppuVar2[0xe];
    puStack_160 = ppuVar2[0x11];
    puStack_168 = ppuVar2[0x10];
    ppuStack_1a0 = ppuVar10;
    ppuStack_198 = ppuStack_1c0;
    if (ppuVar10 != (undefined **)0x8000000000000000) {
      if (ppuVar10 == (undefined **)0x8000000000000003) {
        ppuStack_1b8 = ppuStack_190;
        if ((-0x7fffffffffffffff < (long)ppuStack_1c0) &&
           (ppuStack_1c0 != (undefined **)0x8000000000000002)) {
          ppuStack_1e0 = ppuStack_188;
          if (puVar16 != (undefined *)0x2) goto LAB_1017da498;
          goto LAB_1017da8b4;
        }
      }
      else {
        ppuStack_1b8 = (undefined **)FUN_10887f604(&ppuStack_1a0,&puStack_78,&UNK_10b2589d0);
        FUN_1017a4698(&ppuStack_1a0);
      }
      goto LAB_1017da670;
    }
    FUN_1017a4698(&ppuStack_1a0);
    ppuStack_1c0 = (undefined **)0x8000000000000000;
    if (puVar16 == (undefined *)0x2) {
LAB_1017da8b4:
      ppuStack_1c8 = (undefined **)FUN_108878f3c(2,&UNK_10b2598c8,&UNK_10b258940);
LAB_1017da8d0:
      *param_1 = 2;
      param_1[1] = (long)ppuStack_1c8;
LAB_1017da8e0:
      if (((ulong)ppuStack_1c0 & 0x7fffffffffffffff) != 0) {
        _free(ppuStack_1b8);
      }
      goto LAB_1017da67c;
    }
LAB_1017da498:
    ppuVar11 = ppuVar2 + 0x1b;
    ppuVar10 = (undefined **)ppuVar2[0x12];
    ppuStack_b8 = ppuVar11;
    if (ppuVar10 == (undefined **)0x8000000000000005) goto LAB_1017da8b4;
    ppuStack_190 = (undefined **)ppuVar2[0x14];
    ppuStack_1d8 = (undefined **)ppuVar2[0x13];
    puStack_180 = ppuVar2[0x16];
    ppuStack_188 = (undefined **)ppuVar2[0x15];
    puStack_170 = ppuVar2[0x18];
    puStack_178 = ppuVar2[0x17];
    puStack_160 = ppuVar2[0x1a];
    puStack_168 = ppuVar2[0x19];
    ppuStack_1a0 = ppuVar10;
    ppuStack_198 = ppuStack_1d8;
    if (ppuVar10 != (undefined **)0x8000000000000000) {
      if (ppuVar10 == (undefined **)0x8000000000000003) {
        ppuStack_1c8 = ppuStack_190;
        if ((-0x7fffffffffffffff < (long)ppuStack_1d8) &&
           (ppuStack_1d8 != (undefined **)0x8000000000000002)) {
          ppuStack_1f8 = ppuStack_188;
          if (puVar16 != (undefined *)0x3) goto LAB_1017da4f4;
          goto LAB_1017daa9c;
        }
      }
      else {
        ppuStack_1c8 = (undefined **)FUN_10887f604(&ppuStack_1a0,&puStack_78,&UNK_10b2589d0);
        FUN_1017a4698(&ppuStack_1a0);
      }
      goto LAB_1017da8d0;
    }
    FUN_1017a4698(&ppuStack_1a0);
    ppuStack_1d8 = (undefined **)0x8000000000000000;
    if (puVar16 == (undefined *)0x3) {
LAB_1017daa9c:
      ppuVar7 = (undefined **)FUN_108878f3c(3,&UNK_10b2598c8,&UNK_10b258940);
LAB_1017daab4:
      *param_1 = 2;
      param_1[1] = (long)ppuVar7;
LAB_1017daabc:
      if (((ulong)ppuStack_1d8 & 0x7fffffffffffffff) != 0) {
        _free(ppuStack_1c8);
      }
      goto LAB_1017da8e0;
    }
LAB_1017da4f4:
    ppuVar11 = ppuVar2 + 0x24;
    ppuVar10 = (undefined **)ppuVar2[0x1b];
    ppuStack_b8 = ppuVar11;
    if (ppuVar10 == (undefined **)0x8000000000000005) goto LAB_1017daa9c;
    ppuVar7 = (undefined **)ppuVar2[0x1d];
    ppuStack_1e8 = (undefined **)ppuVar2[0x1c];
    puStack_180 = ppuVar2[0x1f];
    ppuStack_188 = (undefined **)ppuVar2[0x1e];
    puStack_170 = ppuVar2[0x21];
    puStack_178 = ppuVar2[0x20];
    puStack_160 = ppuVar2[0x23];
    puStack_168 = ppuVar2[0x22];
    ppuStack_1a0 = ppuVar10;
    ppuStack_198 = ppuStack_1e8;
    ppuStack_190 = ppuVar7;
    if (ppuVar10 != (undefined **)0x8000000000000000) {
      if (ppuVar10 == (undefined **)0x8000000000000003) {
        if ((-0x7fffffffffffffff < (long)ppuStack_1e8) &&
           (ppuStack_1e8 != (undefined **)0x8000000000000002)) {
          ppuStack_200 = ppuStack_188;
          ppuStack_1f0 = ppuVar7;
          if (puVar16 != (undefined *)0x4) goto LAB_1017da548;
          goto LAB_1017dadbc;
        }
      }
      else {
        ppuVar7 = (undefined **)FUN_10887f604(&ppuStack_1a0,&puStack_78,&UNK_10b2589d0);
        FUN_1017a4698(&ppuStack_1a0);
      }
      goto LAB_1017daab4;
    }
    FUN_1017a4698(&ppuStack_1a0);
    ppuStack_1e8 = (undefined **)0x8000000000000000;
    if (puVar16 == (undefined *)0x4) {
LAB_1017dadbc:
      ppuVar10 = (undefined **)FUN_108878f3c(4,&UNK_10b2598c8,&UNK_10b258940);
LAB_1017dadd4:
      *param_1 = 2;
      param_1[1] = (long)ppuVar10;
      if (((ulong)ppuStack_1e8 & 0x7fffffffffffffff) != 0) {
        _free(ppuStack_1f0);
      }
      goto LAB_1017daabc;
    }
LAB_1017da548:
    ppuVar11 = ppuVar2 + 0x2d;
    ppuStack_b8 = ppuVar11;
    if ((undefined **)ppuVar2[0x24] == (undefined **)0x8000000000000005) goto LAB_1017dadbc;
    ppuStack_190 = (undefined **)ppuVar2[0x26];
    ppuStack_198 = (undefined **)ppuVar2[0x25];
    puStack_180 = ppuVar2[0x28];
    ppuStack_188 = (undefined **)ppuVar2[0x27];
    puStack_170 = ppuVar2[0x2a];
    puStack_178 = ppuVar2[0x29];
    puStack_160 = ppuVar2[0x2c];
    puStack_168 = ppuVar2[0x2b];
    ppuStack_1a0 = (undefined **)ppuVar2[0x24];
    FUN_1017ba738(&puStack_78,&ppuStack_1a0);
    ppuVar10 = ppuStack_70;
    if (puStack_78 == (undefined *)0x2) goto LAB_1017dadd4;
    *param_1 = (long)puStack_78;
    param_1[1] = (long)ppuStack_70;
    param_1[2] = (long)ppuVar19;
    param_1[3] = (long)ppuVar4;
    param_1[4] = (long)ppuStack_1d0;
    param_1[5] = (long)ppuStack_1c0;
    param_1[6] = (long)ppuStack_1b8;
    param_1[7] = (long)ppuStack_1e0;
    param_1[8] = (long)ppuStack_1d8;
    param_1[9] = (long)ppuStack_1c8;
    param_1[10] = (long)ppuStack_1f8;
    param_1[0xb] = (long)ppuStack_1e8;
    param_1[0xc] = (long)ppuStack_1f0;
    param_1[0xd] = (long)ppuStack_200;
    lStack_128 = param_1[1];
    lStack_130 = *param_1;
    lStack_118 = param_1[3];
    lStack_120 = param_1[2];
    lStack_108 = param_1[5];
    lStack_110 = param_1[4];
    lStack_f8 = param_1[7];
    lStack_100 = param_1[6];
    lStack_d8 = param_1[0xb];
    lStack_e0 = param_1[10];
    lStack_c8 = param_1[0xd];
    lStack_d0 = param_1[0xc];
    lStack_e8 = param_1[9];
    lStack_f0 = param_1[8];
    if (puVar16 != (undefined *)0x5) {
      lVar6 = FUN_108878f3c(puVar16,&UNK_10b2593d0,&UNK_10b258940);
      *param_1 = 2;
      param_1[1] = lVar6;
      FUN_1017a58ec(&lStack_130);
    }
    FUN_1017a5c10(ppuVar11,((long)puVar16 * 0x48 - 0x168U >> 3) * -0x71c71c71c71c71c7);
  }
  if (ppuVar1 != (undefined **)0x0) {
    _free(ppuVar2);
  }
LAB_1017da738:
  if (((long)puVar15 < 0) && (((ulong)puVar15 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_1017a4698(param_2);
  }
  return;
}

