
void FUN_10128ec98(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  char cVar20;
  ulong *puVar21;
  long *plVar22;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long *plStack_1b8;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long *plStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  
  if (*param_2 == -0x7ffffffffffffffc) {
    lVar1 = param_2[1];
    puVar2 = (ulong *)param_2[2];
    uVar13 = param_2[3];
    puVar21 = puVar2 + uVar13 * 9;
    uVar19 = uVar13;
    if (0x7fff < uVar13) {
      uVar19 = 0x8000;
    }
    if (uVar13 != 0) {
      uStack_188 = _malloc(uVar19 << 5);
      if (uStack_188 == 0) {
        func_0x0001087c9084(8,uVar19 << 5);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10128f6d4);
        (*pcVar5)();
      }
      uStack_180 = 0;
      puVar9 = puVar2;
      uStack_190 = uVar19;
LAB_10128ed60:
      puVar18 = puVar9 + 9;
      uVar19 = *puVar9;
      puVar16 = puVar18;
      if (uVar19 != 0x8000000000000005) {
        uVar24 = puVar9[2];
        plVar23 = (long *)puVar9[1];
        uStack_158 = puVar9[4];
        uStack_160 = puVar9[3];
        uVar25 = puVar9[6];
        uStack_150 = puVar9[5];
        uStack_138 = puVar9[8];
        uStack_140 = puVar9[7];
        uVar14 = uVar19 ^ 0x8000000000000000;
        if (-1 < (long)uVar19) {
          uVar14 = 5;
        }
        uStack_178 = uVar19;
        plStack_170 = plVar23;
        uStack_168 = uVar24;
        uStack_148 = uVar25;
        if (uVar14 == 4) {
          puVar11 = (undefined8 *)puVar9[1];
          puVar3 = (undefined8 *)puVar9[2];
          uVar14 = puVar9[3];
          plVar23 = puVar3 + uVar14 * 9;
          unaff_x28 = puVar3;
          puStack_c0 = puVar3;
          puStack_b0 = puVar11;
          plStack_a8 = plVar23;
          if (uVar14 == 0) {
LAB_10128f0a0:
            uVar6 = 0;
            puStack_b8 = unaff_x28;
LAB_10128f0a4:
            puVar7 = (undefined8 *)FUN_1087e422c(uVar6,&UNK_10b231bd8,&UNK_10b20a590);
LAB_10128f0c0:
            cVar20 = '\0';
            puVar15 = (undefined8 *)0x8000000000000000;
            puVar8 = puVar7;
          }
          else {
            unaff_x28 = puVar3 + 9;
            if ((undefined8 *)*puVar3 == (undefined8 *)0x8000000000000005) goto LAB_10128f0a0;
            puStack_120 = (undefined8 *)puVar3[2];
            puStack_128 = (undefined8 *)puVar3[1];
            lStack_110 = puVar3[4];
            plStack_118 = (long *)puVar3[3];
            lStack_100 = puVar3[6];
            lStack_108 = puVar3[5];
            lStack_f0 = puVar3[8];
            lStack_f8 = puVar3[7];
            puStack_130 = (undefined8 *)*puVar3;
            puStack_b8 = unaff_x28;
            FUN_100791aa0(&uStack_78,&puStack_130);
            puVar7 = puStack_70;
            if ((char)uStack_78 == '\x01') goto LAB_10128f0c0;
            if (uVar14 == 1) {
LAB_10128f258:
              uVar6 = 1;
              goto LAB_10128f0a4;
            }
            cVar20 = uStack_78._1_1_;
            unaff_x28 = puVar3 + 0x12;
            puVar8 = (undefined8 *)puVar3[9];
            puStack_b8 = unaff_x28;
            if (puVar8 == (undefined8 *)0x8000000000000005) goto LAB_10128f258;
            puVar7 = (undefined8 *)puVar3[0xb];
            puVar15 = (undefined8 *)puVar3[10];
            lStack_110 = puVar3[0xd];
            plStack_118 = (long *)puVar3[0xc];
            lStack_100 = puVar3[0xf];
            lStack_108 = puVar3[0xe];
            lStack_f0 = puVar3[0x11];
            lStack_f8 = puVar3[0x10];
            puStack_130 = puVar8;
            puStack_128 = puVar15;
            puStack_120 = puVar7;
            if (puVar8 != (undefined8 *)0x8000000000000003) {
              puVar7 = (undefined8 *)FUN_108832ea0(&puStack_130,&uStack_78,&UNK_10b20a5e0);
              FUN_100de6690(&puStack_130);
              goto LAB_10128f0c0;
            }
            if ((puVar15 == (undefined8 *)0x8000000000000000) ||
               (puVar15 == (undefined8 *)0x8000000000000001)) goto LAB_10128f0c0;
            puVar8 = puVar7;
            plStack_1b8 = plStack_118;
            if (uVar14 != 2) {
              puVar8 = (undefined8 *)FUN_1087e422c(uVar14,&UNK_10b21cb80,&UNK_10b20a590);
              if (puVar15 != (undefined8 *)0x0) {
                _free(puVar7);
              }
              puVar15 = (undefined8 *)0x8000000000000000;
            }
          }
          lVar17 = ((ulong)((long)plVar23 - (long)unaff_x28) >> 3) * -0x71c71c71c71c71c7 + 1;
          while (lVar17 = lVar17 + -1, lVar17 != 0) {
            FUN_100de6690(unaff_x28);
            unaff_x28 = unaff_x28 + 9;
          }
          unaff_x27 = plStack_1b8;
          if (puVar11 != (undefined8 *)0x0) {
            _free(puVar3);
          }
        }
        else if (uVar14 == 5) {
          if ((uStack_158 != 0) && (uStack_158 * 9 != -0x11)) {
            _free(uStack_160 + uStack_158 * -8 + -8);
          }
          plVar22 = plVar23 + uVar24 * 0xd;
          puStack_130 = (undefined8 *)0x8000000000000005;
          plStack_e8 = plVar23;
          plStack_e0 = plVar23;
          uStack_d8 = uVar19;
          plStack_d0 = plVar22;
          if (uVar24 == 0) {
            puVar15 = (undefined8 *)0x0;
LAB_10128f18c:
            uStack_78 = &UNK_108cbdf8d;
            puStack_70 = (undefined8 *)0xf;
            puStack_c0 = &uStack_78;
            puStack_b8 = (undefined8 *)&DAT_100c7b3a0;
            puVar8 = (undefined8 *)FUN_108856088(s_missing_field_____108ac28f7,&puStack_c0);
            plVar10 = plStack_e0;
LAB_10128f1c4:
            plStack_e0 = plVar10;
            puVar15 = (undefined8 *)((ulong)puVar15 & 0x7fffffffffffffff);
joined_r0x00010128f48c:
            plVar10 = plStack_e0;
            if (puVar15 != (undefined8 *)0x0) {
              _free(unaff_x28);
              plVar10 = plStack_e0;
            }
LAB_10128f308:
            plStack_e0 = plVar10;
            FUN_100de8910(&plStack_e8);
            cVar20 = '\0';
            puVar15 = (undefined8 *)0x8000000000000000;
          }
          else {
            puVar15 = (undefined8 *)0x8000000000000000;
            cVar20 = '\x06';
            unaff_x27 = plVar23;
            do {
              plVar10 = unaff_x27 + 0xd;
              plVar23 = plVar10;
              plVar4 = plStack_1b8;
              if (*unaff_x27 == -0x8000000000000000) break;
              plVar23 = (long *)unaff_x27[1];
              plStack_118 = (long *)unaff_x27[6];
              puStack_120 = (undefined8 *)unaff_x27[5];
              lStack_108 = unaff_x27[8];
              lStack_110 = unaff_x27[7];
              lStack_f8 = unaff_x27[10];
              lStack_100 = unaff_x27[9];
              lStack_f0 = unaff_x27[0xb];
              puStack_128 = (undefined8 *)unaff_x27[4];
              puStack_130 = (undefined8 *)unaff_x27[3];
              if (unaff_x27[2] == 0xb) {
                iVar12 = 1;
                if (*plVar23 != 0x7470697263736564 ||
                    *(long *)((long)plVar23 + 3) != 0x6e6f697470697263) {
                  iVar12 = 2;
                }
              }
              else if (unaff_x27[2] == 0xf) {
                iVar12 = 2;
                if (*plVar23 == 0x6e696e6f73616572 &&
                    *(long *)((long)plVar23 + 7) == 0x74726f666645676e) {
                  iVar12 = 0;
                }
              }
              else {
                iVar12 = 2;
              }
              if (*unaff_x27 != 0) {
                _free();
              }
              puVar11 = puStack_130;
              if (iVar12 == 0) {
                if (cVar20 != '\x06') {
                  uStack_78 = &UNK_108cbdf8d;
                  puStack_70 = (undefined8 *)0xf;
                  puStack_c0 = &uStack_78;
                  puStack_b8 = (undefined8 *)&DAT_100c7b3a0;
                  plStack_e0 = plVar10;
                  puVar8 = (undefined8 *)FUN_108856088(s_duplicate_field_____108ac2973,&puStack_c0);
                  plVar10 = plStack_e0;
                  goto LAB_10128f1c4;
                }
                puStack_130 = (undefined8 *)0x8000000000000005;
                if (puVar11 == (undefined8 *)0x8000000000000005) {
                  plStack_e0 = plVar10;
                  puVar8 = (undefined8 *)FUN_1088561c0(&UNK_108cde170,0x10);
                  plVar10 = plStack_e0;
                  goto LAB_10128f1c4;
                }
                puStack_c0 = puVar11;
                puStack_b0 = puStack_120;
                puStack_b8 = puStack_128;
                lStack_a0 = lStack_110;
                plStack_a8 = plStack_118;
                lStack_90 = lStack_100;
                lStack_98 = lStack_108;
                lStack_80 = lStack_f0;
                lStack_88 = lStack_f8;
                FUN_100791aa0(&uStack_78,&puStack_c0);
                puVar8 = puStack_70;
                if ((char)uStack_78 == '\x01') goto LAB_10128f1c4;
                cVar20 = uStack_78._1_1_;
              }
              else if (iVar12 == 1) {
                if (puVar15 != (undefined8 *)0x8000000000000000) {
                  uStack_78 = &UNK_108ca155d;
                  puStack_70 = (undefined8 *)0xb;
                  puStack_c0 = &uStack_78;
                  puStack_b8 = (undefined8 *)&DAT_100c7b3a0;
                  plStack_e0 = plVar10;
                  puVar8 = (undefined8 *)FUN_108856088(s_duplicate_field_____108ac2973,&puStack_c0);
                  goto joined_r0x00010128f48c;
                }
                puStack_130 = (undefined8 *)0x8000000000000005;
                if (puVar11 == (undefined8 *)0x8000000000000005) {
                  plStack_e0 = plVar10;
                  puVar8 = (undefined8 *)FUN_1088561c0(&UNK_108cde170,0x10);
                  plVar10 = plStack_e0;
                  goto LAB_10128f308;
                }
                puStack_c0 = puVar11;
                puStack_b0 = puStack_120;
                puStack_b8 = puStack_128;
                lStack_a0 = lStack_110;
                plStack_a8 = plStack_118;
                lStack_90 = lStack_100;
                lStack_98 = lStack_108;
                lStack_80 = lStack_f0;
                lStack_88 = lStack_f8;
                if (puVar11 != (undefined8 *)0x8000000000000003) {
                  plStack_e0 = plVar10;
                  puVar8 = (undefined8 *)FUN_108832ea0(&puStack_c0,&uStack_78,&UNK_10b20a5e0);
                  FUN_100de6690(&puStack_c0);
                  plVar10 = plStack_e0;
                  goto LAB_10128f308;
                }
                puVar8 = puStack_120;
                unaff_x28 = puStack_120;
                if (puStack_128 == (undefined8 *)0x8000000000000000) goto LAB_10128f308;
                plStack_1b8 = plStack_118;
                puVar15 = puStack_128;
                puStack_c0 = puVar11;
              }
              else {
                puStack_130 = (undefined8 *)0x8000000000000005;
                if (puVar11 == (undefined8 *)0x8000000000000005) {
                  plStack_e0 = plVar10;
                  puVar8 = (undefined8 *)FUN_1088561c0(&UNK_108cde170,0x10);
                  plVar10 = plStack_e0;
                  goto LAB_10128f1c4;
                }
                puStack_c0 = puVar11;
                puStack_b0 = puStack_120;
                puStack_b8 = puStack_128;
                lStack_a0 = lStack_110;
                plStack_a8 = plStack_118;
                lStack_90 = lStack_100;
                lStack_98 = lStack_108;
                lStack_80 = lStack_f0;
                lStack_88 = lStack_f8;
                FUN_100de6690(&puStack_c0);
              }
              unaff_x27 = plVar10;
              plVar23 = plVar22;
              plVar4 = plStack_1b8;
            } while (plVar10 != plVar22);
            unaff_x27 = plVar4;
            plStack_1b8 = unaff_x27;
            plStack_e0 = plVar10;
            if (cVar20 == '\x06') goto LAB_10128f18c;
            if (puVar15 == (undefined8 *)0x8000000000000000) {
              uStack_78 = &UNK_108ca155d;
              puStack_70 = (undefined8 *)0xb;
              puStack_c0 = &uStack_78;
              puStack_b8 = (undefined8 *)&DAT_100c7b3a0;
              puVar8 = (undefined8 *)FUN_108856088(s_missing_field_____108ac28f7,&puStack_c0);
              plVar10 = plStack_e0;
              goto LAB_10128f308;
            }
            puVar8 = unaff_x28;
            if (plVar22 != plVar23) {
              puVar8 = (undefined8 *)FUN_1087e422c(uVar25,&UNK_10b21cb90,&UNK_10b20a590);
              if (puVar15 != (undefined8 *)0x0) {
                _free(unaff_x28);
              }
              puVar15 = (undefined8 *)0x8000000000000000;
            }
            FUN_100de8910(&plStack_e8);
          }
          if (puStack_130 != (undefined8 *)0x8000000000000005) {
            FUN_100de6690(&puStack_130);
          }
        }
        else {
          puVar8 = (undefined8 *)FUN_108832ea0(&uStack_178,&uStack_78,&UNK_10b21cf60);
          cVar20 = '\0';
          puVar15 = (undefined8 *)0x8000000000000000;
        }
        if (((long)uVar19 < 0) && ((uVar19 & 0xfffffffffffffffe) != 0x8000000000000004)) {
          FUN_100de6690(&uStack_178);
        }
        uVar14 = uStack_180;
        uVar19 = uStack_188;
        if ((puVar15 != (undefined8 *)0x8000000000000000) &&
           (puVar15 != (undefined8 *)0x8000000000000001)) goto code_r0x00010128f364;
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)puVar8;
        if (uStack_180 != 0) {
          puVar11 = (undefined8 *)(uStack_188 + 8);
          uVar13 = uStack_180;
          do {
            if (puVar11[-1] != 0) {
              _free(*puVar11);
            }
            puVar11 = puVar11 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (uStack_190 != 0) {
          _free(uVar19);
        }
        goto LAB_10128f604;
      }
      goto LAB_10128f5c0;
    }
    uStack_190 = 0;
    uStack_188 = 8;
    uStack_180 = 0;
    puVar16 = puVar2;
LAB_10128f5c0:
    param_1[1] = uStack_188;
    *param_1 = uStack_190;
    param_1[2] = uStack_180;
    puVar18 = puVar16;
    if (*param_1 != 0x8000000000000000) {
      puStack_128 = (undefined8 *)param_1[1];
      puStack_130 = (undefined8 *)*param_1;
      puStack_120 = (undefined8 *)param_1[2];
      puVar18 = puVar21;
      if (puVar21 != puVar16) {
        uVar19 = FUN_1087e422c(uVar13,&UNK_10b21cb80,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar19;
        FUN_100c99aa0(&puStack_130);
        puVar18 = puVar16;
      }
    }
LAB_10128f604:
    lVar17 = ((ulong)((long)puVar21 - (long)puVar18) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar17 = lVar17 + -1, lVar17 != 0) {
      FUN_100de6690(puVar18);
      puVar18 = puVar18 + 9;
    }
    if (lVar1 != 0) {
      _free(puVar2);
    }
  }
  else {
    uVar19 = FUN_108832ea0(param_2,&uStack_78,&UNK_10b21cd40);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar19;
    FUN_100de6690(param_2);
  }
  return;
code_r0x00010128f364:
  if (uStack_180 == uStack_190) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h19c3afd8cf01ef11E(&uStack_190);
  }
  puVar11 = (undefined8 *)(uStack_188 + uVar14 * 0x20);
  *puVar11 = puVar15;
  puVar11[1] = puVar8;
  puVar11[2] = unaff_x27;
  *(char *)(puVar11 + 3) = cVar20;
  uStack_180 = uVar14 + 1;
  puVar9 = puVar18;
  puVar16 = puVar21;
  if (puVar18 == puVar21) goto LAB_10128f5c0;
  goto LAB_10128ed60;
}

