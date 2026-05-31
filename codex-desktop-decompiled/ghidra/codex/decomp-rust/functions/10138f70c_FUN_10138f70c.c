
/* WARNING: Type propagation algorithm not settling */

void FUN_10138f70c(undefined8 *param_1,ulong *param_2)

{
  long ******pppppplVar1;
  long ******pppppplVar2;
  long *******ppppppplVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  uint uVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  ulong uVar12;
  ulong uVar13;
  long *******extraout_x9;
  long lVar14;
  long *******ppppppplVar15;
  long ******pppppplVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long *******unaff_x23;
  long *******ppppppplVar20;
  long *******ppppppplVar21;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *****ppppplStack_80;
  undefined8 uStack_78;
  
  ppppppplVar17 = (long *******)*param_2;
  if (ppppppplVar17 == (long *******)0x8000000000000000) {
    *param_1 = 0x8000000000000000;
    uVar12 = *param_2 ^ 0x8000000000000000;
    if (-1 < (long)*param_2) {
      uVar12 = 5;
    }
    if (uVar12 < 3) {
      return;
    }
    if (uVar12 == 3) {
      if (param_2[1] == 0) {
        return;
      }
      plVar6 = (long *)param_2[2];
    }
    else if (uVar12 == 4) {
      plVar6 = (long *)param_2[2];
      lVar14 = param_2[3] + 1;
      plVar5 = plVar6;
      while (lVar14 = lVar14 + -1, lVar14 != 0) {
        FUN_100de6690(plVar5);
        plVar5 = plVar5 + 9;
      }
      if (param_2[1] == 0) {
        return;
      }
    }
    else {
      uVar12 = param_2[4];
      if ((uVar12 != 0) && (uVar12 * 9 != -0x11)) {
        _free(param_2[3] + uVar12 * -8 + -8);
      }
      plVar6 = (long *)param_2[1];
      lVar14 = param_2[2] + 1;
      plVar5 = plVar6;
      while (lVar14 = lVar14 + -1, lVar14 != 0) {
        if (*plVar5 != 0) {
          _free(plVar5[1]);
        }
        FUN_100de6690(plVar5 + 3);
        plVar5 = plVar5 + 0xd;
      }
      if (*param_2 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(plVar6);
    return;
  }
  uVar12 = (ulong)ppppppplVar17 ^ 0x8000000000000000;
  if (-1 < (long)ppppppplVar17) {
    uVar12 = 5;
  }
  if (uVar12 != 4) {
    if (uVar12 == 5) {
      ppppppplVar19 = (long *******)param_2[6];
      ppppppplVar11 = (long *******)param_2[1];
      uVar12 = param_2[2];
      uVar13 = param_2[4];
      if ((uVar13 != 0) && (uVar13 * 9 != -0x11)) {
        _free(param_2[3] + uVar13 * -8 + -8);
      }
      ppppppplVar18 = ppppppplVar11 + uVar12 * 0xd;
      ppppppplStack_150 = (long *******)0x8000000000000005;
      ppppppplStack_108 = ppppppplVar11;
      ppppppplStack_f8 = ppppppplVar17;
      ppppppplStack_100 = ppppppplVar11;
      ppppppplStack_f0 = ppppppplVar18;
      if (uVar12 == 0) {
        ppppppplStack_1c0 = (long *******)0x8000000000000001;
        ppppppplStack_1b8 = (long *******)0x8000000000000001;
        ppppppplStack_1d8 = (long *******)0x8000000000000001;
        ppppppplStack_208 = (long *******)0x0;
        ppppppplStack_1f8 = ppppppplVar19;
        ppppppplStack_200 = unaff_x23;
      }
      else {
        ppppppplStack_1e0 = (long *******)0x8000000000000000;
        ppppppplStack_1d8 = (long *******)0x8000000000000001;
        ppppppplStack_1c0 = (long *******)0x8000000000000001;
        ppppppplStack_1b8 = (long *******)0x8000000000000001;
        do {
          ppppppplVar10 = ppppppplVar11 + 0xd;
          pppppplVar16 = *ppppppplVar11;
          ppppppplVar8 = ppppppplVar10;
          if (pppppplVar16 == (long ******)0x8000000000000000) break;
          pppppplVar1 = ppppppplVar11[1];
          pppppplVar2 = ppppppplVar11[2];
          ppppppplStack_138 = (long *******)ppppppplVar11[6];
          ppppppplStack_140 = (long *******)ppppppplVar11[5];
          ppppppplStack_128 = (long *******)ppppppplVar11[8];
          ppppppplStack_130 = (long *******)ppppppplVar11[7];
          ppppppplStack_118 = (long *******)ppppppplVar11[10];
          ppppppplStack_120 = (long *******)ppppppplVar11[9];
          ppppppplStack_110 = (long *******)ppppppplVar11[0xb];
          ppppppplStack_148 = (long *******)ppppppplVar11[4];
          ppppppplStack_150 = (long *******)ppppppplVar11[3];
          uVar12 = (long)pppppplVar2 - 5U >> 1 | (long)pppppplVar2 - 5U << 0x3f;
          uVar9 = 4;
          if ((long)uVar12 < 3) {
            if (uVar12 == 0) {
              iVar4 = _memcmp(pppppplVar1,&UNK_108ca1efe,pppppplVar2);
              if (iVar4 == 0) {
                uVar9 = 0;
              }
              else {
                if (pppppplVar2 == (long ******)0x9) goto LAB_10138f8f4;
                if (pppppplVar2 == (long ******)0x11) goto LAB_10138f928;
                if (pppppplVar2 == (long ******)0xb) goto LAB_10138f980;
              }
            }
            else if (uVar12 == 2) {
LAB_10138f8f4:
              iVar4 = _memcmp(pppppplVar1,&UNK_108cbfd72,pppppplVar2);
              if (iVar4 == 0) {
                uVar9 = 2;
              }
              else if (pppppplVar2 == (long ******)0x11) goto LAB_10138f928;
            }
          }
          else if (uVar12 == 3) {
LAB_10138f980:
            iVar4 = _memcmp(pppppplVar1,&UNK_108cbfd67,pppppplVar2);
            if (iVar4 == 0) {
              uVar9 = 1;
            }
            else {
              if (pppppplVar2 == (long ******)0x11) goto LAB_10138f928;
              if (pppppplVar2 == (long ******)0x9) goto LAB_10138f8f4;
            }
          }
          else if (uVar12 == 6) {
LAB_10138f928:
            iVar4 = _memcmp(pppppplVar1,&UNK_108cbfd7b,pppppplVar2);
            uVar9 = 3;
            if (iVar4 != 0) {
              uVar9 = 4;
            }
          }
          if (pppppplVar16 != (long ******)0x0) {
            _free(pppppplVar1);
          }
          ppppppplVar11 = ppppppplStack_150;
          ppppppplVar8 = ppppppplStack_140;
          if (uVar9 < 2) {
            if (uVar9 == 0) {
              if (ppppppplStack_1e0 == (long *******)0x8000000000000000) {
                ppppppplStack_150 = (long *******)0x8000000000000005;
                if (ppppppplVar11 == (long *******)0x8000000000000005) {
                  ppppppplStack_1e0 = (long *******)0x0;
                  ppppppplStack_100 = ppppppplVar10;
                  ppppppplVar8 = (long *******)FUN_1088561c0(&UNK_108cde170,0x10);
                }
                else {
                  ppppppplStack_1b0 = ppppppplVar11;
                  ppppppplStack_1a0 = ppppppplStack_140;
                  ppppppplStack_1a8 = ppppppplStack_148;
                  ppppppplStack_190 = ppppppplStack_130;
                  ppppppplStack_198 = ppppppplStack_138;
                  ppppppplStack_180 = ppppppplStack_120;
                  ppppppplStack_188 = ppppppplStack_128;
                  ppppppplStack_170 = ppppppplStack_110;
                  ppppppplStack_178 = ppppppplStack_118;
                  if (ppppppplVar11 == (long *******)0x8000000000000003) {
                    ppppppplStack_1e0 = ppppppplStack_148;
                    if (ppppppplStack_148 != (long *******)0x8000000000000000) {
                      ppppppplStack_220 = ppppppplStack_138;
                      ppppppplStack_208 = ppppppplStack_140;
                      goto LAB_10138f884;
                    }
                    ppppppplStack_1e0 = (long *******)0x0;
LAB_1013902e0:
                    ppppppplStack_150 = (long *******)0x8000000000000005;
                    ppppppplStack_170 = ppppppplStack_110;
                    ppppppplStack_178 = ppppppplStack_118;
                    ppppppplStack_180 = ppppppplStack_120;
                    ppppppplStack_188 = ppppppplStack_128;
                    ppppppplStack_190 = ppppppplStack_130;
                    ppppppplStack_198 = ppppppplStack_138;
                    ppppppplStack_1a0 = ppppppplStack_140;
                    ppppppplStack_100 = ppppppplVar10;
                  }
                  else {
                    ppppppplStack_100 = ppppppplVar10;
                    ppppppplVar8 = (long *******)
                                   FUN_108832ea0(&ppppppplStack_1b0,&ppppplStack_80,&UNK_10b20a5e0);
                    ppppppplStack_1e0 = (long *******)0x0;
                    FUN_100de6690(&ppppppplStack_1b0);
                  }
                }
              }
              else {
                ppppplStack_80 = (long *****)&UNK_108ca1efe;
                uStack_78 = 5;
                ppppppplStack_1b0 = (long *******)&ppppplStack_80;
                ppppppplStack_1a8 = (long *******)&DAT_100c7b3a0;
                ppppppplStack_100 = ppppppplVar10;
                ppppppplVar8 = (long *******)
                               FUN_108856088(s_duplicate_field_____108ac2973,&ppppppplStack_1b0);
              }
            }
            else if (ppppppplStack_1b8 == (long *******)0x8000000000000001) {
              ppppppplStack_150 = (long *******)0x8000000000000005;
              if (ppppppplVar11 == (long *******)0x8000000000000005) {
                ppppppplStack_100 = ppppppplVar10;
                ppppppplVar8 = (long *******)FUN_1088561c0(&UNK_108cde170,0x10);
                ppppppplVar10 = ppppppplStack_100;
              }
              else {
                ppppppplStack_1b0 = ppppppplVar11;
                ppppppplStack_1a0 = ppppppplStack_140;
                ppppppplStack_1a8 = ppppppplStack_148;
                ppppppplStack_190 = ppppppplStack_130;
                ppppppplStack_198 = ppppppplStack_138;
                ppppppplStack_180 = ppppppplStack_120;
                ppppppplStack_188 = ppppppplStack_128;
                ppppppplStack_170 = ppppppplStack_110;
                ppppppplStack_178 = ppppppplStack_118;
                if (ppppppplVar11 == (long *******)0x8000000000000000) {
                  FUN_100de6690(&ppppppplStack_1b0);
                  ppppppplStack_1b8 = (long *******)0x8000000000000000;
LAB_10138fcc8:
                  ppppppplStack_1f8 = ppppppplStack_218;
                  goto LAB_10138f884;
                }
                if (ppppppplVar11 == (long *******)0x8000000000000003) {
                  if (ppppppplStack_148 != (long *******)0x8000000000000000) {
                    ppppppplStack_218 = ppppppplStack_140;
                    ppppppplStack_1b8 = ppppppplStack_148;
                    if (ppppppplStack_148 == (long *******)0x8000000000000001) {
                      ppppppplStack_1b8 = (long *******)0x8000000000000001;
                      goto LAB_1013902e0;
                    }
                    ppppppplStack_238 = ppppppplStack_138;
                    goto LAB_10138fcc8;
                  }
                }
                else {
                  ppppppplStack_100 = ppppppplVar10;
                  ppppppplVar8 = (long *******)
                                 FUN_108832ea0(&ppppppplStack_1b0,&ppppplStack_80,&UNK_10b20a5e0);
                  FUN_100de6690(&ppppppplStack_1b0);
                  ppppppplVar10 = ppppppplStack_100;
                }
              }
              ppppppplStack_100 = ppppppplVar10;
              ppppppplStack_1b8 = (long *******)0x8000000000000001;
            }
            else {
              ppppplStack_80 = (long *****)&UNK_108cbfd67;
              uStack_78 = 0xb;
              ppppppplStack_1b0 = (long *******)&ppppplStack_80;
              ppppppplStack_1a8 = (long *******)&DAT_100c7b3a0;
              ppppppplStack_100 = ppppppplVar10;
              ppppppplVar8 = (long *******)
                             FUN_108856088(s_duplicate_field_____108ac2973,&ppppppplStack_1b0);
            }
            goto LAB_10138fe14;
          }
          if (uVar9 != 2) {
            if (uVar9 != 3) {
              ppppppplStack_150 = (long *******)0x8000000000000005;
              if (ppppppplVar11 != (long *******)0x8000000000000005) {
                ppppppplStack_1b0 = ppppppplVar11;
                ppppppplStack_1a0 = ppppppplStack_140;
                ppppppplStack_1a8 = ppppppplStack_148;
                ppppppplStack_190 = ppppppplStack_130;
                ppppppplStack_198 = ppppppplStack_138;
                ppppppplStack_180 = ppppppplStack_120;
                ppppppplStack_188 = ppppppplStack_128;
                ppppppplStack_170 = ppppppplStack_110;
                ppppppplStack_178 = ppppppplStack_118;
                FUN_100de6690(&ppppppplStack_1b0);
                goto LAB_10138f884;
              }
              ppppppplStack_100 = ppppppplVar10;
              ppppppplVar8 = (long *******)FUN_1088561c0(&UNK_108cde170,0x10);
              goto LAB_10138fe14;
            }
            if (ppppppplStack_1c0 != (long *******)0x8000000000000001) {
              ppppplStack_80 = (long *****)&UNK_108cbfd7b;
              uStack_78 = 0x11;
              ppppppplStack_1b0 = (long *******)&ppppplStack_80;
              ppppppplStack_1a8 = (long *******)&DAT_100c7b3a0;
              ppppppplStack_100 = ppppppplVar10;
              ppppppplStack_1a8 =
                   (long *******)FUN_108856088(s_duplicate_field_____108ac2973,&ppppppplStack_1b0);
              ppppppplStack_1c0 = (long *******)((ulong)ppppppplStack_1c0 & 0x7fffffffffffffff);
              goto joined_r0x0001013904c4;
            }
            ppppppplStack_150 = (long *******)0x8000000000000005;
            if (ppppppplVar11 == (long *******)0x8000000000000005) {
              ppppppplStack_100 = ppppppplVar10;
              ppppppplVar8 = (long *******)FUN_1088561c0(&UNK_108cde170,0x10);
              ppppppplVar10 = ppppppplStack_100;
            }
            else {
              ppppppplStack_1b0 = ppppppplVar11;
              ppppppplStack_1a0 = ppppppplStack_140;
              ppppppplStack_1a8 = ppppppplStack_148;
              ppppppplStack_190 = ppppppplStack_130;
              ppppppplStack_198 = ppppppplStack_138;
              ppppppplStack_180 = ppppppplStack_120;
              ppppppplStack_188 = ppppppplStack_128;
              ppppppplStack_170 = ppppppplStack_110;
              ppppppplStack_178 = ppppppplStack_118;
              if (ppppppplVar11 == (long *******)0x8000000000000000) {
                FUN_100de6690(&ppppppplStack_1b0);
                ppppppplStack_1c0 = (long *******)0x8000000000000000;
                ppppppplStack_1e8 = ppppppplStack_228;
                goto LAB_10138f884;
              }
              if (ppppppplVar11 == (long *******)0x8000000000000003) {
                ppppppplStack_1c0 = ppppppplStack_148;
                ppppppplStack_228 = ppppppplStack_140;
                if ((ppppppplStack_148 != (long *******)0x8000000000000000) &&
                   (ppppppplStack_148 != (long *******)0x8000000000000001)) {
                  ppppppplStack_230 = ppppppplStack_138;
                  ppppppplStack_1e8 = ppppppplStack_140;
                  ppppppplStack_1b0 = ppppppplVar11;
                  goto LAB_10138f884;
                }
              }
              else {
                ppppppplStack_100 = ppppppplVar10;
                ppppppplVar8 = (long *******)
                               FUN_108832ea0(&ppppppplStack_1b0,&ppppplStack_80,&UNK_10b20a5e0);
                FUN_100de6690(&ppppppplStack_1b0);
                ppppppplVar10 = ppppppplStack_100;
              }
            }
            ppppppplStack_100 = ppppppplVar10;
            ppppppplStack_1b0 = (long *******)0x8000000000000000;
            ppppppplStack_1a8 = ppppppplVar8;
            goto LAB_101390020;
          }
          if (ppppppplStack_1d8 != (long *******)0x8000000000000001) {
            ppppplStack_80 = (long *****)&UNK_108cbfd72;
            uStack_78 = 9;
            ppppppplStack_1b0 = (long *******)&ppppplStack_80;
            ppppppplStack_1a8 = (long *******)&DAT_100c7b3a0;
            ppppppplStack_100 = ppppppplVar10;
            ppppppplVar8 = (long *******)
                           FUN_108856088(s_duplicate_field_____108ac2973,&ppppppplStack_1b0);
            goto LAB_10138fe14;
          }
          ppppppplStack_150 = (long *******)0x8000000000000005;
          if (ppppppplVar11 == (long *******)0x8000000000000005) {
            ppppppplStack_100 = ppppppplVar10;
            ppppppplStack_210 = (long *******)FUN_1088561c0(&UNK_108cde170,0x10);
            ppppppplVar10 = ppppppplStack_100;
LAB_101390290:
            ppppppplStack_100 = ppppppplVar10;
            ppppppplStack_1d8 = (long *******)0x8000000000000001;
            ppppppplVar8 = ppppppplStack_210;
            goto LAB_10138fe14;
          }
          ppppppplStack_1b0 = ppppppplVar11;
          ppppppplStack_1a0 = ppppppplStack_140;
          ppppppplStack_1a8 = ppppppplStack_148;
          ppppppplStack_190 = ppppppplStack_130;
          ppppppplStack_198 = ppppppplStack_138;
          ppppppplStack_180 = ppppppplStack_120;
          ppppppplStack_188 = ppppppplStack_128;
          ppppppplStack_170 = ppppppplStack_110;
          ppppppplStack_178 = ppppppplStack_118;
          if (ppppppplVar11 != (long *******)0x8000000000000000) {
            if (ppppppplVar11 == (long *******)0x8000000000000003) {
              ppppppplStack_1d8 = ppppppplStack_148;
              ppppppplStack_210 = ppppppplStack_140;
              if (ppppppplStack_148 != (long *******)0x8000000000000000) {
                if (ppppppplStack_148 == (long *******)0x8000000000000001) {
                  ppppppplStack_1d8 = (long *******)0x8000000000000001;
                  goto LAB_1013902e0;
                }
                ppppppplStack_240 = ppppppplStack_138;
                goto LAB_10138f87c;
              }
            }
            else {
              ppppppplStack_100 = ppppppplVar10;
              ppppppplStack_210 =
                   (long *******)FUN_108832ea0(&ppppppplStack_1b0,&ppppplStack_80,&UNK_10b20a5e0);
              FUN_100de6690(&ppppppplStack_1b0);
              ppppppplVar10 = ppppppplStack_100;
            }
            goto LAB_101390290;
          }
          FUN_100de6690(&ppppppplStack_1b0);
          ppppppplStack_1d8 = (long *******)0x8000000000000000;
LAB_10138f87c:
          ppppppplStack_200 = ppppppplStack_210;
LAB_10138f884:
          ppppppplVar8 = ppppppplVar18;
          ppppppplVar11 = ppppppplVar10;
        } while (ppppppplVar10 != ppppppplVar18);
        ppppppplStack_100 = ppppppplVar10;
        if (ppppppplStack_1e0 != (long *******)0x8000000000000000) {
          ppppppplStack_198 = (long *******)0x8000000000000000;
          if (ppppppplStack_1b8 != (long *******)0x8000000000000001) {
            ppppppplStack_198 = ppppppplStack_1b8;
          }
          ppppppplStack_1b0 = ppppppplStack_1e0;
          ppppppplStack_1a8 = ppppppplStack_208;
          ppppppplStack_180 = (long *******)0x8000000000000000;
          if (ppppppplStack_1d8 != (long *******)0x8000000000000001) {
            ppppppplStack_180 = ppppppplStack_1d8;
          }
          ppppppplStack_168 = (long *******)0x8000000000000000;
          if (ppppppplStack_1c0 != (long *******)0x8000000000000001) {
            ppppppplStack_168 = ppppppplStack_1c0;
          }
          ppppppplStack_1a0 = ppppppplStack_220;
          ppppppplStack_190 = ppppppplStack_1f8;
          ppppppplStack_188 = ppppppplStack_238;
          ppppppplStack_178 = ppppppplStack_200;
          ppppppplStack_170 = ppppppplStack_240;
          ppppppplStack_160 = ppppppplStack_1e8;
          ppppppplStack_158 = ppppppplStack_230;
          ppppppplStack_b8 = ppppppplStack_238;
          ppppppplStack_c0 = ppppppplStack_1f8;
          ppppppplStack_a8 = ppppppplStack_200;
          ppppppplStack_a0 = ppppppplStack_240;
          ppppppplStack_88 = ppppppplStack_230;
          ppppppplStack_90 = ppppppplStack_1e8;
          ppppppplStack_d8 = ppppppplStack_208;
          ppppppplStack_e0 = ppppppplStack_1e0;
          ppppppplStack_d0 = ppppppplStack_220;
          ppppppplStack_c8 = ppppppplStack_198;
          ppppppplStack_b0 = ppppppplStack_180;
          ppppppplStack_98 = ppppppplStack_168;
          if (ppppppplVar18 != ppppppplVar8) {
            ppppppplStack_1a8 =
                 (long *******)FUN_1087e422c(ppppppplVar19,&UNK_10b21cb90,&UNK_10b20a590);
            ppppppplStack_1b0 = (long *******)0x8000000000000000;
            FUN_100e4d1c8(&ppppppplStack_e0);
          }
          FUN_100de8910(&ppppppplStack_108);
          goto joined_r0x000101390524;
        }
      }
      ppppplStack_80 = (long *****)&UNK_108ca1efe;
      uStack_78 = 5;
      ppppppplStack_1b0 = (long *******)&ppppplStack_80;
      ppppppplStack_1a8 = (long *******)&DAT_100c7b3a0;
      ppppppplStack_1e0 = (long *******)0x0;
      ppppppplVar8 = (long *******)FUN_108856088(s_missing_field_____108ac28f7,&ppppppplStack_1b0);
LAB_10138fe14:
      ppppppplStack_1b0 = (long *******)0x8000000000000000;
      ppppppplStack_1a8 = ppppppplVar8;
      if (-0x7fffffffffffffff < (long)ppppppplStack_1c0) {
joined_r0x0001013904c4:
        ppppppplStack_1b0 = (long *******)0x8000000000000000;
        if (ppppppplStack_1c0 != (long *******)0x0) {
          ppppppplStack_1b0 = (long *******)0x8000000000000000;
          _free(ppppppplStack_1e8);
        }
      }
LAB_101390020:
      if ((-0x7fffffffffffffff < (long)ppppppplStack_1d8) &&
         (ppppppplStack_1d8 != (long *******)0x0)) {
        _free(ppppppplStack_200);
      }
      if ((-0x7fffffffffffffff < (long)ppppppplStack_1b8) &&
         (ppppppplStack_1b8 != (long *******)0x0)) {
        _free(ppppppplStack_1f8);
      }
      if (((ulong)ppppppplStack_1e0 & 0x7fffffffffffffff) != 0) {
        _free(ppppppplStack_208);
      }
      FUN_100de8910(&ppppppplStack_108);
      if (ppppppplStack_150 != (long *******)0x8000000000000005) {
        FUN_100de6690(&ppppppplStack_150);
      }
    }
    else {
      ppppppplStack_1a8 = (long *******)FUN_108832ea0(param_2,&ppppplStack_80,&UNK_10b21d5c0);
      ppppppplStack_1b0 = (long *******)0x8000000000000000;
    }
    goto joined_r0x000101390524;
  }
  ppppppplVar19 = (long *******)param_2[1];
  ppppppplVar18 = (long *******)param_2[2];
  uVar12 = param_2[3];
  ppppppplVar8 = ppppppplVar18 + uVar12 * 9;
  ppppppplVar11 = ppppppplVar18;
  ppppppplStack_e0 = ppppppplVar18;
  ppppppplStack_d0 = ppppppplVar19;
  ppppppplStack_c8 = ppppppplVar8;
  if (uVar12 == 0) {
LAB_10138f844:
    ppppppplStack_d8 = ppppppplVar11;
    ppppppplVar7 = (long *******)FUN_1087e422c(0,&UNK_10b2316a8,&UNK_10b20a590);
LAB_10138fd50:
    ppppppplStack_1b0 = (long *******)0x8000000000000000;
    ppppppplVar10 = ppppppplVar7;
    ppppppplVar3 = ppppppplStack_148;
    ppppppplVar15 = ppppppplStack_138;
  }
  else {
    ppppppplVar11 = ppppppplVar18 + 9;
    ppppppplVar10 = (long *******)*ppppppplVar18;
    if (ppppppplVar10 == (long *******)0x8000000000000005) goto LAB_10138f844;
    ppppppplVar7 = (long *******)ppppppplVar18[2];
    ppppppplVar20 = (long *******)ppppppplVar18[1];
    ppppppplStack_130 = (long *******)ppppppplVar18[4];
    ppppppplVar21 = (long *******)ppppppplVar18[3];
    ppppppplStack_120 = (long *******)ppppppplVar18[6];
    ppppppplStack_128 = (long *******)ppppppplVar18[5];
    ppppppplStack_110 = (long *******)ppppppplVar18[8];
    ppppppplStack_118 = (long *******)ppppppplVar18[7];
    ppppppplStack_138 = ppppppplVar21;
    ppppppplStack_150 = ppppppplVar10;
    ppppppplStack_148 = ppppppplVar20;
    ppppppplStack_140 = ppppppplVar7;
    ppppppplStack_d8 = ppppppplVar11;
    if (ppppppplVar10 != (long *******)0x8000000000000003) {
      ppppppplVar7 = (long *******)FUN_108832ea0(&ppppppplStack_150,&ppppplStack_80,&UNK_10b20a5e0);
      FUN_100de6690(&ppppppplStack_150);
      goto LAB_10138fd50;
    }
    if ((ppppppplVar20 == (long *******)0x8000000000000000) ||
       (ppppppplVar20 == (long *******)0x8000000000000001)) goto LAB_10138fd50;
    if (uVar12 == 1) {
LAB_10138fedc:
      ppppppplStack_150 = ppppppplVar10;
      ppppppplStack_d8 = ppppppplVar11;
      ppppppplStack_1b8 = (long *******)FUN_1087e422c(1,&UNK_10b2316a8,&UNK_10b20a590);
LAB_10138fef8:
      ppppppplStack_1b0 = (long *******)0x8000000000000000;
      ppppppplStack_1a8 = ppppppplStack_1b8;
LAB_10138ff04:
      ppppppplVar10 = ppppppplStack_1a8;
      ppppppplVar3 = ppppppplStack_148;
      ppppppplVar15 = ppppppplStack_138;
      if (ppppppplVar20 != (long *******)0x0) {
        _free(ppppppplVar7);
        ppppppplVar10 = ppppppplStack_1a8;
        ppppppplVar3 = ppppppplStack_148;
        ppppppplVar15 = ppppppplStack_138;
      }
    }
    else {
      ppppppplVar11 = ppppppplVar18 + 0x12;
      ppppppplStack_150 = (long *******)ppppppplVar18[9];
      if (ppppppplStack_150 == (long *******)0x8000000000000005) goto LAB_10138fedc;
      ppppppplStack_140 = (long *******)ppppppplVar18[0xb];
      ppppppplVar15 = (long *******)ppppppplVar18[10];
      ppppppplStack_130 = (long *******)ppppppplVar18[0xd];
      ppppppplStack_138 = (long *******)ppppppplVar18[0xc];
      ppppppplStack_120 = (long *******)ppppppplVar18[0xf];
      ppppppplStack_128 = (long *******)ppppppplVar18[0xe];
      ppppppplStack_110 = (long *******)ppppppplVar18[0x11];
      ppppppplStack_118 = (long *******)ppppppplVar18[0x10];
      ppppppplStack_148 = ppppppplVar15;
      ppppppplStack_d8 = ppppppplVar11;
      if (ppppppplStack_150 != (long *******)0x8000000000000000) {
        if (ppppppplStack_150 == (long *******)0x8000000000000003) {
          ppppppplStack_1b8 = ppppppplStack_140;
          if ((-0x7fffffffffffffff < (long)ppppppplVar15) &&
             (ppppppplVar15 != (long *******)0x8000000000000002)) {
            ppppppplStack_1e8 = ppppppplStack_138;
            if (uVar12 != 2) goto LAB_101390148;
            goto LAB_101390334;
          }
        }
        else {
          ppppppplStack_1b8 =
               (long *******)FUN_108832ea0(&ppppppplStack_150,&ppppplStack_80,&UNK_10b20a5e0);
          FUN_100de6690(&ppppppplStack_150);
        }
        goto LAB_10138fef8;
      }
      FUN_100de6690(&ppppppplStack_150);
      ppppppplVar15 = (long *******)0x8000000000000000;
      if (uVar12 == 2) {
LAB_101390334:
        ppppppplStack_1a8 = (long *******)FUN_1087e422c(2,&UNK_10b2316a8,&UNK_10b20a590);
LAB_10139034c:
        ppppppplStack_1b0 = (long *******)0x8000000000000000;
LAB_101390354:
        if (((ulong)ppppppplVar15 & 0x7fffffffffffffff) != 0) {
          _free(ppppppplStack_1b8);
        }
        goto LAB_10138ff04;
      }
LAB_101390148:
      ppppppplVar11 = ppppppplVar18 + 0x1b;
      ppppppplVar10 = (long *******)ppppppplVar18[0x12];
      ppppppplStack_d8 = ppppppplVar11;
      if (ppppppplVar10 == (long *******)0x8000000000000005) goto LAB_101390334;
      ppppppplStack_1a8 = (long *******)ppppppplVar18[0x14];
      ppppppplStack_1d8 = (long *******)ppppppplVar18[0x13];
      ppppppplStack_130 = (long *******)ppppppplVar18[0x16];
      ppppppplStack_138 = (long *******)ppppppplVar18[0x15];
      ppppppplStack_120 = (long *******)ppppppplVar18[0x18];
      ppppppplStack_128 = (long *******)ppppppplVar18[0x17];
      ppppppplStack_110 = (long *******)ppppppplVar18[0x1a];
      ppppppplStack_118 = (long *******)ppppppplVar18[0x19];
      ppppppplStack_150 = ppppppplVar10;
      ppppppplStack_148 = ppppppplStack_1d8;
      ppppppplStack_140 = ppppppplStack_1a8;
      if (ppppppplVar10 != (long *******)0x8000000000000000) {
        if (ppppppplVar10 == (long *******)0x8000000000000003) {
          if ((-0x7fffffffffffffff < (long)ppppppplStack_1d8) &&
             (ppppppplStack_1d8 != (long *******)0x8000000000000002)) {
            ppppppplStack_1f8 = ppppppplStack_138;
            ppppppplStack_1e0 = ppppppplStack_1a8;
            if (uVar12 != 3) goto LAB_1013901ac;
            goto LAB_10139054c;
          }
        }
        else {
          ppppppplStack_1a8 =
               (long *******)FUN_108832ea0(&ppppppplStack_150,&ppppplStack_80,&UNK_10b20a5e0);
          FUN_100de6690(&ppppppplStack_150);
        }
        goto LAB_10139034c;
      }
      FUN_100de6690(&ppppppplStack_150);
      ppppppplStack_1d8 = (long *******)0x8000000000000000;
      if (uVar12 == 3) {
LAB_10139054c:
        ppppppplStack_1a8 = (long *******)FUN_1087e422c(3,&UNK_10b2316a8,&UNK_10b20a590);
LAB_101390568:
        ppppppplStack_1b0 = (long *******)0x8000000000000000;
        if (((ulong)ppppppplStack_1d8 & 0x7fffffffffffffff) != 0) {
          _free(ppppppplStack_1e0);
        }
        goto LAB_101390354;
      }
LAB_1013901ac:
      ppppppplVar11 = ppppppplVar18 + 0x24;
      ppppppplVar10 = (long *******)ppppppplVar18[0x1b];
      ppppppplStack_d8 = ppppppplVar11;
      if (ppppppplVar10 == (long *******)0x8000000000000005) goto LAB_10139054c;
      ppppppplStack_1a8 = (long *******)ppppppplVar18[0x1d];
      ppppppplStack_148 = (long *******)ppppppplVar18[0x1c];
      ppppppplStack_130 = (long *******)ppppppplVar18[0x1f];
      ppppppplStack_138 = (long *******)ppppppplVar18[0x1e];
      ppppppplStack_120 = (long *******)ppppppplVar18[0x21];
      ppppppplStack_128 = (long *******)ppppppplVar18[0x20];
      ppppppplStack_110 = (long *******)ppppppplVar18[0x23];
      ppppppplStack_118 = (long *******)ppppppplVar18[0x22];
      ppppppplStack_150 = ppppppplVar10;
      ppppppplStack_140 = ppppppplStack_1a8;
      if (ppppppplVar10 != (long *******)0x8000000000000000) {
        if (ppppppplVar10 == (long *******)0x8000000000000003) {
          if ((-0x7fffffffffffffff < (long)ppppppplStack_148) &&
             (ppppppplStack_148 != (long *******)0x8000000000000002)) goto LAB_1013901fc;
        }
        else {
          ppppppplStack_1a8 =
               (long *******)FUN_108832ea0(&ppppppplStack_150,&ppppplStack_80,&UNK_10b20a5e0);
          FUN_100de6690(&ppppppplStack_150);
        }
        goto LAB_101390568;
      }
      FUN_100de6690(&ppppppplStack_150);
      ppppppplStack_148 = (long *******)0x8000000000000000;
      ppppppplStack_138 = extraout_x9;
      ppppppplStack_1a8 = (long *******)&ppppppplStack_150;
LAB_1013901fc:
      ppppppplStack_190 = ppppppplStack_1b8;
      ppppppplStack_188 = ppppppplStack_1e8;
      ppppppplStack_180 = ppppppplStack_1d8;
      ppppppplStack_178 = ppppppplStack_1e0;
      ppppppplStack_170 = ppppppplStack_1f8;
      ppppppplStack_128 = ppppppplStack_1e8;
      ppppppplStack_130 = ppppppplStack_1b8;
      ppppppplStack_118 = ppppppplStack_1e0;
      ppppppplStack_120 = ppppppplStack_1d8;
      ppppppplStack_110 = ppppppplStack_1f8;
      ppppppplStack_1b0 = ppppppplVar20;
      ppppppplVar10 = ppppppplVar7;
      ppppppplStack_1a0 = ppppppplVar21;
      ppppppplStack_198 = ppppppplVar15;
      ppppppplStack_168 = ppppppplStack_148;
      ppppppplStack_160 = ppppppplStack_1a8;
      ppppppplStack_158 = ppppppplStack_138;
      ppppppplStack_150 = ppppppplVar20;
      ppppppplVar3 = ppppppplVar7;
      ppppppplStack_140 = ppppppplVar21;
      ppppppplStack_108 = ppppppplStack_148;
      ppppppplStack_100 = ppppppplStack_1a8;
      ppppppplStack_f8 = ppppppplStack_138;
      if (uVar12 != 4) {
        ppppppplStack_1a8 = ppppppplVar7;
        ppppppplStack_148 = ppppppplVar7;
        ppppppplStack_138 = ppppppplVar15;
        ppppppplStack_100 = ppppppplStack_160;
        ppppppplStack_1a8 = (long *******)FUN_1087e422c(uVar12,&UNK_10b21cb80,&UNK_10b20a590);
        ppppppplStack_1b0 = (long *******)0x8000000000000000;
        FUN_100e4d1c8(&ppppppplStack_150);
        ppppppplVar10 = ppppppplStack_1a8;
        ppppppplVar3 = ppppppplStack_148;
        ppppppplVar15 = ppppppplStack_138;
      }
    }
  }
  ppppppplStack_138 = ppppppplVar15;
  ppppppplStack_148 = ppppppplVar3;
  ppppppplStack_1a8 = ppppppplVar10;
  lVar14 = ((ulong)((long)ppppppplVar8 - (long)ppppppplVar11) >> 3) * -0x71c71c71c71c71c7 + 1;
  while (lVar14 = lVar14 + -1, lVar14 != 0) {
    FUN_100de6690(ppppppplVar11);
    ppppppplVar11 = ppppppplVar11 + 9;
  }
  if (ppppppplVar19 != (long *******)0x0) {
    _free(ppppppplVar18);
  }
joined_r0x000101390524:
  if (((long)ppppppplVar17 < 0) &&
     (((ulong)ppppppplVar17 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(param_2);
  }
  if (ppppppplStack_1b0 == (long *******)0x8000000000000000) {
    *param_1 = 0x8000000000000001;
    param_1[1] = ppppppplStack_1a8;
  }
  else {
    param_1[5] = ppppppplStack_188;
    param_1[4] = ppppppplStack_190;
    param_1[7] = ppppppplStack_178;
    param_1[6] = ppppppplStack_180;
    param_1[9] = ppppppplStack_168;
    param_1[8] = ppppppplStack_170;
    param_1[0xb] = ppppppplStack_158;
    param_1[10] = ppppppplStack_160;
    param_1[1] = ppppppplStack_1a8;
    *param_1 = ppppppplStack_1b0;
    param_1[3] = ppppppplStack_198;
    param_1[2] = ppppppplStack_1a0;
  }
  return;
}

