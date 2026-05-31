
/* WARNING: Type propagation algorithm not settling */

void FUN_10139d014(ulong *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  bool bVar15;
  undefined **ppuVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  undefined **ppuVar20;
  ulong *puVar21;
  uint uVar22;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  ulong uVar28;
  ulong uVar29;
  undefined **ppuVar30;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  ulong uStack_210;
  undefined **ppuStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
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
  ulong uStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
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
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  uint uVar23;
  
  if (*param_2 == -0x7ffffffffffffffc) {
    lVar1 = param_2[1];
    puVar3 = (ulong *)param_2[2];
    uVar12 = param_2[3];
    puVar21 = puVar3 + uVar12 * 9;
    uVar19 = uVar12;
    if (0x38e2 < uVar12) {
      uVar19 = 0x38e3;
    }
    if (uVar12 != 0) {
      uStack_268 = _malloc(uVar19 * 0x48);
      if (uStack_268 == 0) {
        func_0x0001087c9084(8,uVar19 * 0x48);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10139df20);
        (*pcVar5)();
      }
      uStack_260 = 0;
      puVar10 = puVar3;
      uStack_270 = uVar19;
LAB_10139d100:
      puVar17 = puVar10 + 9;
      uVar19 = *puVar10;
      if (uVar19 != 0x8000000000000005) {
        uVar28 = puVar10[2];
        ppuVar24 = (undefined **)puVar10[1];
        uStack_1f0 = puVar10[4];
        uStack_1f8 = puVar10[3];
        uVar29 = puVar10[6];
        uStack_1e8 = puVar10[5];
        uStack_1d0 = puVar10[8];
        uStack_1d8 = puVar10[7];
        uVar13 = uVar19 ^ 0x8000000000000000;
        if (-1 < (long)uVar19) {
          uVar13 = 5;
        }
        uStack_210 = uVar19;
        ppuStack_208 = ppuVar24;
        uStack_200 = uVar28;
        uStack_1e0 = uVar29;
        if (uVar13 == 4) {
          ppuVar16 = (undefined **)puVar10[1];
          ppuVar11 = (undefined **)puVar10[2];
          uVar13 = puVar10[3];
          ppuVar20 = ppuVar11 + uVar13 * 9;
          ppuVar24 = ppuVar11;
          ppuStack_c8 = ppuVar11;
          ppuStack_b8 = ppuVar16;
          ppuStack_b0 = ppuVar20;
          if (uVar13 == 0) {
LAB_10139d4e8:
            ppuStack_c0 = ppuVar24;
            ppuVar7 = (undefined **)FUN_1087e422c(0,&UNK_10b231698,&UNK_10b20a590);
LAB_10139d574:
            ppuStack_1c8 = (undefined **)0x8000000000000000;
            ppuStack_1c0 = ppuVar7;
            ppuVar8 = ppuStack_178;
            ppuVar26 = ppuStack_168;
          }
          else {
            ppuVar24 = ppuVar11 + 9;
            ppuVar8 = (undefined **)*ppuVar11;
            if (ppuVar8 == (undefined **)0x8000000000000005) goto LAB_10139d4e8;
            ppuVar7 = (undefined **)ppuVar11[2];
            ppuVar25 = (undefined **)ppuVar11[1];
            ppuStack_160 = (undefined **)ppuVar11[4];
            ppuStack_168 = (undefined **)ppuVar11[3];
            ppuStack_150 = (undefined **)ppuVar11[6];
            ppuStack_158 = (undefined **)ppuVar11[5];
            ppuStack_140 = (undefined **)ppuVar11[8];
            ppuStack_148 = (undefined **)ppuVar11[7];
            ppuStack_180 = ppuVar8;
            ppuStack_178 = ppuVar25;
            ppuStack_170 = ppuVar7;
            ppuStack_c0 = ppuVar24;
            if (ppuVar8 != (undefined **)0x8000000000000003) {
              ppuVar7 = (undefined **)FUN_108832ea0(&ppuStack_180,&puStack_80,&UNK_10b20a5e0);
              FUN_100de6690(&ppuStack_180);
              goto LAB_10139d574;
            }
            if ((ppuVar25 == (undefined **)0x8000000000000000) ||
               (ppuVar25 == (undefined **)0x8000000000000001)) goto LAB_10139d574;
            if (uVar13 == 1) {
LAB_10139d75c:
              ppuStack_180 = ppuVar8;
              ppuStack_c0 = ppuVar24;
              ppuStack_298 = (undefined **)FUN_1087e422c(1,&UNK_10b231698,&UNK_10b20a590);
              ppuVar30 = ppuStack_168;
LAB_10139d778:
              ppuStack_168 = ppuVar30;
              ppuStack_1c8 = (undefined **)0x8000000000000000;
              ppuStack_1c0 = ppuStack_298;
LAB_10139d784:
              ppuVar8 = ppuStack_178;
              ppuVar26 = ppuStack_168;
              if (ppuVar25 != (undefined **)0x0) {
                _free(ppuVar7);
                ppuVar8 = ppuStack_178;
                ppuVar26 = ppuStack_168;
              }
            }
            else {
              ppuVar24 = ppuVar11 + 0x12;
              ppuStack_180 = (undefined **)ppuVar11[9];
              if (ppuStack_180 == (undefined **)0x8000000000000005) goto LAB_10139d75c;
              ppuStack_298 = (undefined **)ppuVar11[0xb];
              ppuVar26 = (undefined **)ppuVar11[10];
              ppuStack_160 = (undefined **)ppuVar11[0xd];
              ppuVar30 = (undefined **)ppuVar11[0xc];
              ppuStack_150 = (undefined **)ppuVar11[0xf];
              ppuStack_158 = (undefined **)ppuVar11[0xe];
              ppuStack_140 = (undefined **)ppuVar11[0x11];
              ppuStack_148 = (undefined **)ppuVar11[0x10];
              ppuStack_178 = ppuVar26;
              ppuStack_170 = ppuStack_298;
              ppuStack_c0 = ppuVar24;
              if (ppuStack_180 != (undefined **)0x8000000000000003) {
                ppuStack_168 = ppuVar30;
                ppuStack_298 = (undefined **)FUN_108832ea0(&ppuStack_180,&puStack_80,&UNK_10b20a5e0)
                ;
                FUN_100de6690(&ppuStack_180);
                ppuVar30 = ppuStack_168;
                goto LAB_10139d778;
              }
              if ((ppuVar26 == (undefined **)0x8000000000000000) ||
                 (ppuVar26 == (undefined **)0x8000000000000001)) goto LAB_10139d778;
              if (uVar13 == 2) {
LAB_10139da28:
                ppuStack_168 = ppuVar30;
                ppuStack_c0 = ppuVar24;
                ppuStack_2a8 = (undefined **)FUN_1087e422c(2,&UNK_10b231698,&UNK_10b20a590);
                ppuVar27 = ppuStack_168;
LAB_10139da44:
                ppuStack_168 = ppuVar27;
                ppuStack_1c0 = ppuStack_2a8;
                ppuStack_1c8 = (undefined **)0x8000000000000000;
                if (ppuVar26 != (undefined **)0x0) {
                  _free(ppuStack_298);
                }
                goto LAB_10139d784;
              }
              ppuVar24 = ppuVar11 + 0x1b;
              ppuVar8 = (undefined **)ppuVar11[0x12];
              if (ppuVar8 == (undefined **)0x8000000000000005) goto LAB_10139da28;
              ppuStack_2a8 = (undefined **)ppuVar11[0x14];
              ppuStack_178 = (undefined **)ppuVar11[0x13];
              ppuStack_160 = (undefined **)ppuVar11[0x16];
              ppuVar27 = (undefined **)ppuVar11[0x15];
              ppuStack_150 = (undefined **)ppuVar11[0x18];
              ppuStack_158 = (undefined **)ppuVar11[0x17];
              ppuStack_140 = (undefined **)ppuVar11[0x1a];
              ppuStack_148 = (undefined **)ppuVar11[0x19];
              ppuStack_180 = ppuVar8;
              ppuStack_170 = ppuStack_2a8;
              ppuStack_c0 = ppuVar24;
              if (ppuVar8 != (undefined **)0x8000000000000003) {
                ppuStack_168 = ppuVar27;
                ppuStack_2a8 = (undefined **)FUN_108832ea0(&ppuStack_180,&puStack_80,&UNK_10b20a5e0)
                ;
                FUN_100de6690(&ppuStack_180);
                ppuVar27 = ppuStack_168;
                goto LAB_10139da44;
              }
              if ((ppuStack_178 == (undefined **)0x8000000000000000) ||
                 (ppuStack_178 == (undefined **)0x8000000000000001)) goto LAB_10139da44;
              ppuStack_1c8 = ppuVar25;
              ppuStack_1c0 = ppuVar7;
              ppuStack_1b8 = ppuStack_168;
              ppuStack_1b0 = ppuVar26;
              ppuStack_1a8 = ppuStack_298;
              ppuStack_1a0 = ppuVar30;
              ppuStack_198 = ppuStack_178;
              ppuStack_190 = ppuStack_2a8;
              ppuStack_188 = ppuVar27;
              ppuStack_180 = ppuVar25;
              ppuVar8 = ppuVar7;
              ppuStack_170 = ppuStack_168;
              ppuStack_160 = ppuStack_298;
              ppuStack_158 = ppuVar30;
              ppuStack_150 = ppuStack_178;
              ppuStack_148 = ppuStack_2a8;
              ppuStack_140 = ppuVar27;
              if (uVar13 != 3) {
                ppuStack_178 = ppuVar7;
                ppuStack_168 = ppuVar26;
                ppuStack_1c0 = (undefined **)FUN_1087e422c(uVar13,&UNK_10b21cb80,&UNK_10b20a590);
                ppuStack_1c8 = (undefined **)0x8000000000000000;
                FUN_100cc5ae4(&ppuStack_180);
                ppuVar8 = ppuStack_178;
                ppuVar26 = ppuStack_168;
              }
            }
          }
          ppuStack_168 = ppuVar26;
          ppuStack_178 = ppuVar8;
          lVar18 = ((ulong)((long)ppuVar20 - (long)ppuVar24) >> 3) * -0x71c71c71c71c71c7 + 1;
          while (lVar18 = lVar18 + -1, lVar18 != 0) {
            FUN_100de6690(ppuVar24);
            ppuVar24 = ppuVar24 + 9;
          }
          if (ppuVar16 != (undefined **)0x0) {
            _free(ppuVar11);
          }
        }
        else if (uVar13 == 5) {
          if ((uStack_1f0 != 0) && (uStack_1f0 * 9 != -0x11)) {
            _free(uStack_1f8 + uStack_1f0 * -8 + -8);
          }
          ppuVar16 = ppuVar24 + uVar28 * 0xd;
          ppuStack_180 = (undefined **)0x8000000000000005;
          ppuStack_138 = ppuVar24;
          ppuStack_130 = ppuVar24;
          uStack_128 = uVar19;
          ppuStack_120 = ppuVar16;
          if (uVar28 == 0) {
            ppuStack_2a0 = (undefined **)0x8000000000000000;
            ppuStack_298 = (undefined **)0x0;
LAB_10139d5ec:
            puStack_80 = &UNK_108ca26b0;
            uStack_78 = 2;
            ppuVar20 = (undefined **)0x0;
            ppuStack_c8 = &puStack_80;
            ppuStack_c0 = (undefined **)&DAT_100c7b3a0;
            ppuStack_1c0 = (undefined **)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_c8);
LAB_10139d628:
            ppuStack_1c8 = (undefined **)0x8000000000000000;
            bVar6 = true;
            bVar14 = true;
            bVar15 = true;
          }
          else {
            ppuVar20 = (undefined **)0x8000000000000000;
            ppuStack_2a0 = (undefined **)0x8000000000000000;
            ppuStack_298 = (undefined **)0x8000000000000000;
            ppuVar11 = ppuVar24;
            do {
              ppuVar7 = ppuVar11 + 0xd;
              ppuVar8 = ppuVar7;
              ppuVar24 = ppuStack_2b0;
              if (*ppuVar11 == (undefined *)0x8000000000000000) break;
              plVar2 = (long *)ppuVar11[1];
              puVar4 = ppuVar11[2];
              ppuStack_168 = (undefined **)ppuVar11[6];
              ppuStack_170 = (undefined **)ppuVar11[5];
              ppuStack_158 = (undefined **)ppuVar11[8];
              ppuStack_160 = (undefined **)ppuVar11[7];
              ppuStack_148 = (undefined **)ppuVar11[10];
              ppuStack_150 = (undefined **)ppuVar11[9];
              ppuStack_140 = (undefined **)ppuVar11[0xb];
              ppuStack_178 = (undefined **)ppuVar11[4];
              ppuStack_180 = (undefined **)ppuVar11[3];
              if (puVar4 == (undefined *)0xb) {
                if (*plVar2 != 0x7470697263736564 ||
                    *(long *)((long)plVar2 + 3) != 0x6e6f697470697263) goto LAB_10139d29c;
                uVar23 = 2;
                uVar22 = 2;
              }
              else if (puVar4 == (undefined *)0x4) {
                if ((int)*plVar2 != 0x656d616e) goto LAB_10139d29c;
                uVar23 = 1;
                uVar22 = 1;
              }
              else if ((puVar4 == (undefined *)0x2) && ((short)*plVar2 == 0x6469)) {
                uVar23 = 0;
                uVar22 = 0;
              }
              else {
LAB_10139d29c:
                uVar23 = 3;
                uVar22 = 3;
              }
              if (*ppuVar11 != (undefined *)0x0) {
                _free();
                uVar22 = uVar23;
              }
              ppuVar11 = ppuStack_180;
              if (uVar22 < 2) {
                ppuVar8 = ppuStack_170;
                if (uVar22 == 0) {
                  if (ppuVar20 != (undefined **)0x8000000000000000) {
                    puStack_80 = &UNK_108ca26b0;
                    uStack_78 = 2;
                    ppuStack_c8 = &puStack_80;
                    ppuStack_c0 = (undefined **)&DAT_100c7b3a0;
                    ppuStack_130 = ppuVar7;
                    ppuStack_1c0 = (undefined **)
                                   FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_c8);
                    goto LAB_10139d628;
                  }
                  ppuStack_180 = (undefined **)0x8000000000000005;
                  if (ppuVar11 == (undefined **)0x8000000000000005) {
                    ppuStack_130 = ppuVar7;
                    ppuVar8 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
                    ppuVar7 = ppuStack_130;
                  }
                  else {
                    ppuStack_c8 = ppuVar11;
                    ppuStack_b8 = ppuStack_170;
                    ppuStack_c0 = ppuStack_178;
                    ppuStack_a8 = ppuStack_160;
                    ppuStack_b0 = ppuStack_168;
                    ppuStack_98 = ppuStack_150;
                    ppuStack_a0 = ppuStack_158;
                    ppuStack_88 = ppuStack_140;
                    ppuStack_90 = ppuStack_148;
                    if (ppuVar11 == (undefined **)0x8000000000000003) {
                      if (ppuStack_178 != (undefined **)0x8000000000000000) {
                        ppuStack_2d0 = ppuStack_168;
                        ppuVar20 = ppuStack_178;
                        ppuStack_2b0 = ppuStack_170;
                        ppuStack_c8 = ppuVar11;
                        goto LAB_10139d1c0;
                      }
                    }
                    else {
                      ppuStack_130 = ppuVar7;
                      ppuVar8 = (undefined **)FUN_108832ea0(&ppuStack_c8,&puStack_80,&UNK_10b20a5e0)
                      ;
                      FUN_100de6690(&ppuStack_c8);
                      ppuVar7 = ppuStack_130;
                    }
                  }
                  ppuStack_130 = ppuVar7;
                  ppuVar20 = (undefined **)0x0;
                }
                else {
                  if (ppuStack_298 != (undefined **)0x8000000000000000) {
                    puStack_80 = &UNK_108c61018;
                    uStack_78 = 4;
                    ppuStack_c8 = &puStack_80;
                    ppuStack_c0 = (undefined **)&DAT_100c7b3a0;
                    ppuStack_130 = ppuVar7;
                    ppuStack_1c0 = (undefined **)
                                   FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_c8);
                    goto LAB_10139d628;
                  }
                  ppuStack_180 = (undefined **)0x8000000000000005;
                  if (ppuVar11 == (undefined **)0x8000000000000005) {
                    ppuStack_130 = ppuVar7;
                    ppuVar8 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
                    ppuVar7 = ppuStack_130;
                  }
                  else {
                    ppuStack_c8 = ppuVar11;
                    ppuStack_b8 = ppuStack_170;
                    ppuStack_c0 = ppuStack_178;
                    ppuStack_a8 = ppuStack_160;
                    ppuStack_b0 = ppuStack_168;
                    ppuStack_98 = ppuStack_150;
                    ppuStack_a0 = ppuStack_158;
                    ppuStack_88 = ppuStack_140;
                    ppuStack_90 = ppuStack_148;
                    if (ppuVar11 == (undefined **)0x8000000000000003) {
                      ppuStack_298 = ppuStack_178;
                      if (ppuStack_178 != (undefined **)0x8000000000000000) {
                        ppuStack_2d8 = ppuStack_168;
                        ppuStack_2b8 = ppuStack_170;
                        goto LAB_10139d1c0;
                      }
                    }
                    else {
                      ppuStack_130 = ppuVar7;
                      ppuVar8 = (undefined **)FUN_108832ea0(&ppuStack_c8,&puStack_80,&UNK_10b20a5e0)
                      ;
                      FUN_100de6690(&ppuStack_c8);
                      ppuVar7 = ppuStack_130;
                    }
                  }
                  ppuStack_130 = ppuVar7;
                  ppuStack_298 = (undefined **)0x0;
                }
                bVar14 = true;
                bVar15 = true;
                ppuStack_1c8 = (undefined **)0x8000000000000000;
                bVar6 = true;
                ppuStack_1c0 = ppuVar8;
                goto joined_r0x00010139d8b4;
              }
              if (uVar22 == 2) {
                if (ppuStack_2a0 != (undefined **)0x8000000000000000) {
                  puStack_80 = &UNK_108ca155d;
                  uStack_78 = 0xb;
                  ppuStack_c8 = &puStack_80;
                  ppuStack_c0 = (undefined **)&DAT_100c7b3a0;
                  ppuStack_130 = ppuVar7;
                  ppuStack_1c0 = (undefined **)
                                 FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_c8);
                  ppuStack_1c8 = (undefined **)0x8000000000000000;
                  bVar6 = true;
                  bVar14 = true;
                  goto joined_r0x00010139dc10;
                }
                ppuStack_180 = (undefined **)0x8000000000000005;
                if (ppuVar11 == (undefined **)0x8000000000000005) {
                  ppuStack_130 = ppuVar7;
                  ppuVar11 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
                  ppuVar7 = ppuStack_130;
                }
                else {
                  ppuStack_c8 = ppuVar11;
                  ppuStack_b8 = ppuStack_170;
                  ppuStack_c0 = ppuStack_178;
                  ppuStack_a8 = ppuStack_160;
                  ppuStack_b0 = ppuStack_168;
                  ppuStack_98 = ppuStack_150;
                  ppuStack_a0 = ppuStack_158;
                  ppuStack_88 = ppuStack_140;
                  ppuStack_90 = ppuStack_148;
                  if (ppuVar11 == (undefined **)0x8000000000000003) {
                    ppuStack_2a0 = ppuStack_178;
                    ppuVar11 = ppuStack_170;
                    if (ppuStack_178 != (undefined **)0x8000000000000000) {
                      ppuStack_2c8 = ppuStack_168;
                      ppuStack_2a8 = ppuStack_170;
                      goto LAB_10139d1c0;
                    }
                  }
                  else {
                    ppuStack_130 = ppuVar7;
                    ppuVar11 = (undefined **)FUN_108832ea0(&ppuStack_c8,&puStack_80,&UNK_10b20a5e0);
                    FUN_100de6690(&ppuStack_c8);
                    ppuVar7 = ppuStack_130;
                  }
                }
                ppuStack_130 = ppuVar7;
                ppuStack_1c8 = (undefined **)0x8000000000000000;
                bVar15 = true;
                bVar6 = true;
                ppuStack_1c0 = ppuVar11;
                goto LAB_10139d904;
              }
              ppuStack_180 = (undefined **)0x8000000000000005;
              if (ppuVar11 == (undefined **)0x8000000000000005) {
                ppuStack_130 = ppuVar7;
                ppuStack_1c0 = (undefined **)FUN_1088561c0(&UNK_108cde170,0x10);
                goto LAB_10139d628;
              }
              ppuStack_c8 = ppuVar11;
              ppuStack_b8 = ppuStack_170;
              ppuStack_c0 = ppuStack_178;
              ppuStack_a8 = ppuStack_160;
              ppuStack_b0 = ppuStack_168;
              ppuStack_98 = ppuStack_150;
              ppuStack_a0 = ppuStack_158;
              ppuStack_88 = ppuStack_140;
              ppuStack_90 = ppuStack_148;
              FUN_100de6690(&ppuStack_c8);
LAB_10139d1c0:
              ppuVar11 = ppuVar7;
              ppuVar8 = ppuVar16;
              ppuVar24 = ppuStack_2b0;
            } while (ppuVar7 != ppuVar16);
            ppuStack_2b0 = ppuVar24;
            ppuStack_130 = ppuVar7;
            if (ppuVar20 == (undefined **)0x8000000000000000) goto LAB_10139d5ec;
            bVar6 = ppuStack_298 == (undefined **)0x8000000000000000;
            if (bVar6) {
              puStack_80 = &UNK_108c61018;
              uStack_78 = 4;
              ppuStack_c8 = &puStack_80;
              ppuStack_c0 = (undefined **)&DAT_100c7b3a0;
              ppuStack_1c0 = (undefined **)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_c8)
              ;
              ppuStack_1c8 = (undefined **)0x8000000000000000;
            }
            else {
              if (ppuStack_2a0 != (undefined **)0x8000000000000000) {
                ppuStack_1c8 = ppuVar20;
                ppuStack_1c0 = ppuVar24;
                ppuStack_1b8 = ppuStack_2d0;
                ppuStack_1b0 = ppuStack_298;
                ppuStack_1a8 = ppuStack_2b8;
                ppuStack_1a0 = ppuStack_2d8;
                ppuStack_198 = ppuStack_2a0;
                ppuStack_190 = ppuStack_2a8;
                ppuStack_188 = ppuStack_2c8;
                ppuStack_110 = ppuVar20;
                ppuStack_108 = ppuVar24;
                ppuStack_100 = ppuStack_2d0;
                ppuStack_f8 = ppuStack_298;
                ppuStack_f0 = ppuStack_2b8;
                ppuStack_e8 = ppuStack_2d8;
                ppuStack_e0 = ppuStack_2a0;
                ppuStack_d8 = ppuStack_2a8;
                ppuStack_d0 = ppuStack_2c8;
                if (ppuVar16 != ppuVar8) {
                  ppuStack_1c0 = (undefined **)FUN_1087e422c(uVar29,&UNK_10b21cb90,&UNK_10b20a590);
                  ppuStack_1c8 = (undefined **)0x8000000000000000;
                  FUN_100cc5ae4(&ppuStack_110);
                }
                FUN_100de8910(&ppuStack_138);
                goto joined_r0x00010139dcdc;
              }
              puStack_80 = &UNK_108ca155d;
              uStack_78 = 0xb;
              ppuStack_c8 = &puStack_80;
              ppuStack_c0 = (undefined **)&DAT_100c7b3a0;
              ppuStack_1c0 = (undefined **)FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_c8)
              ;
              ppuStack_1c8 = (undefined **)0x8000000000000000;
              if (ppuStack_298 != (undefined **)0x0) {
                _free(ppuStack_2b8);
              }
            }
            if (ppuVar20 != (undefined **)0x0) {
              _free(ppuVar24);
            }
            bVar14 = false;
            bVar15 = false;
          }
joined_r0x00010139d8b4:
          if (ppuStack_2a0 != (undefined **)0x8000000000000000) {
joined_r0x00010139dc10:
            bVar15 = bVar14;
            if (ppuStack_2a0 != (undefined **)0x0) {
              _free(ppuStack_2a8);
            }
          }
LAB_10139d904:
          if ((((ulong)ppuStack_298 & 0x7fffffffffffffff) != 0) && (bVar6)) {
            _free(ppuStack_2b8);
          }
          bVar6 = false;
          if (((ulong)ppuVar20 & 0x7fffffffffffffff) != 0) {
            bVar6 = bVar15;
          }
          if (bVar6) {
            _free(ppuVar24);
          }
          FUN_100de8910(&ppuStack_138);
          if (ppuStack_180 != (undefined **)0x8000000000000005) {
            FUN_100de6690(&ppuStack_180);
          }
        }
        else {
          ppuStack_1c0 = (undefined **)FUN_108832ea0(&uStack_210,&puStack_80,&UNK_10b21d220);
          ppuStack_1c8 = (undefined **)0x8000000000000000;
        }
joined_r0x00010139dcdc:
        if (((long)uVar19 < 0) && ((uVar19 & 0xfffffffffffffffe) != 0x8000000000000004)) {
          FUN_100de6690(&uStack_210);
        }
        uVar13 = uStack_260;
        uVar19 = uStack_268;
        if (ppuStack_1c8 != (undefined **)0x8000000000000000) goto code_r0x00010139d974;
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)ppuStack_1c0;
        if (uStack_260 != 0) {
          puVar9 = (undefined8 *)(uStack_268 + 0x20);
          uVar12 = uStack_260;
          do {
            if (puVar9[-4] != 0) {
              _free(puVar9[-3]);
            }
            if (puVar9[-1] != 0) {
              _free(*puVar9);
            }
            if (puVar9[2] != 0) {
              _free(puVar9[3]);
            }
            puVar9 = puVar9 + 9;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar10 = puVar17;
        if (uStack_270 != 0) {
          _free(uVar19);
        }
        goto LAB_10139de50;
      }
      goto LAB_10139de0c;
    }
    uStack_270 = 0;
    uStack_268 = 8;
    uStack_260 = 0;
    puVar17 = puVar3;
LAB_10139de0c:
    param_1[1] = uStack_268;
    *param_1 = uStack_270;
    param_1[2] = uStack_260;
    puVar10 = puVar17;
    if (*param_1 != 0x8000000000000000) {
      ppuStack_178 = (undefined **)param_1[1];
      ppuStack_180 = (undefined **)*param_1;
      ppuStack_170 = (undefined **)param_1[2];
      puVar10 = puVar21;
      if (puVar21 != puVar17) {
        uVar19 = FUN_1087e422c(uVar12,&UNK_10b21cb80,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar19;
        FUN_100ca086c(&ppuStack_180);
        puVar10 = puVar17;
      }
    }
LAB_10139de50:
    lVar18 = ((ulong)((long)puVar21 - (long)puVar10) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar18 = lVar18 + -1, lVar18 != 0) {
      FUN_100de6690(puVar10);
      puVar10 = puVar10 + 9;
    }
    if (lVar1 != 0) {
      _free(puVar3);
    }
  }
  else {
    uVar19 = FUN_108832ea0(param_2,&puStack_80,&UNK_10b21cce0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar19;
    FUN_100de6690(param_2);
  }
  return;
code_r0x00010139d974:
  ppuStack_240 = ppuStack_1b0;
  ppuStack_248 = ppuStack_1b8;
  ppuStack_230 = ppuStack_1a0;
  ppuStack_238 = ppuStack_1a8;
  ppuStack_220 = ppuStack_190;
  ppuStack_228 = ppuStack_198;
  ppuStack_218 = ppuStack_188;
  ppuStack_258 = ppuStack_1c8;
  ppuStack_250 = ppuStack_1c0;
  if (uStack_260 == uStack_270) {
    func_0x0001089ecbb8(&uStack_270);
  }
  puVar9 = (undefined8 *)(uStack_268 + uVar13 * 0x48);
  puVar9[1] = ppuStack_250;
  *puVar9 = ppuStack_258;
  puVar9[3] = ppuStack_240;
  puVar9[2] = ppuStack_248;
  puVar9[5] = ppuStack_230;
  puVar9[4] = ppuStack_238;
  puVar9[7] = ppuStack_220;
  puVar9[6] = ppuStack_228;
  puVar9[8] = ppuStack_218;
  uStack_260 = uVar13 + 1;
  bVar6 = puVar17 == puVar21;
  puVar10 = puVar17;
  puVar17 = puVar21;
  if (bVar6) goto LAB_10139de0c;
  goto LAB_10139d100;
}

