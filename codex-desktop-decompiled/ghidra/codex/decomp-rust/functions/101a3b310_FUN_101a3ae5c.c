
void FUN_101a3ae5c(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long lVar12;
  bool bVar13;
  uint uVar14;
  ulong uVar16;
  undefined *puVar17;
  undefined *unaff_x25;
  undefined **ppuVar18;
  long *plVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_198;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  long *plStack_138;
  long *plStack_130;
  ulong uStack_128;
  long *plStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  uint uVar15;
  
  uVar16 = *param_2;
  uVar6 = uVar16 ^ 0x8000000000000000;
  if (-1 < (long)uVar16) {
    uVar6 = 5;
  }
  if (uVar6 != 4) {
    if (uVar6 != 5) {
      uVar6 = FUN_10889a648(param_2,&puStack_78,&UNK_10b25d630);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar6;
      goto LAB_101a3b530;
    }
    puVar17 = (undefined *)param_2[6];
    plVar1 = (long *)param_2[1];
    uVar6 = param_2[2];
    uVar10 = param_2[4];
    if ((uVar10 != 0) && (uVar10 * 9 != -0x11)) {
      _free(param_2[3] + uVar10 * -8 + -8);
    }
    plVar19 = plVar1 + uVar6 * 0xd;
    ppuStack_180 = (undefined **)0x8000000000000005;
    plStack_138 = plVar1;
    plStack_130 = plVar1;
    uStack_128 = uVar16;
    plStack_120 = plVar19;
    if (uVar6 == 0) {
      ppuStack_188 = (undefined **)0x8000000000000001;
      ppuVar18 = (undefined **)0x0;
      ppuVar8 = ppuStack_d0;
LAB_101a3b2ec:
      ppuStack_d0 = ppuVar8;
      puStack_78 = &UNK_108c61018;
      uStack_70 = 4;
      ppuStack_c0 = &puStack_78;
      ppuStack_b8 = (undefined **)&DAT_10192d9a4;
      ppuStack_198 = (undefined **)0x0;
      puVar5 = (undefined *)FUN_1088bbbb8(s_missing_field_____108ac28f7,&ppuStack_c0);
LAB_101a3b328:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)puVar5;
      if (((ulong)ppuVar18 & 0x7fffffffffffffff) != 0) {
LAB_101a3b400:
        _free(puStack_1b0);
LAB_101a3b404:
        bVar13 = false;
        if (ppuStack_188 != (undefined **)0x8000000000000001) goto LAB_101a3b4f4;
        goto LAB_101a3b4fc;
      }
LAB_101a3b340:
      bVar13 = false;
      if (ppuStack_188 == (undefined **)0x8000000000000001) goto LAB_101a3b4fc;
LAB_101a3b4f4:
      bVar13 = false;
      if (((ulong)ppuStack_188 & 0x7fffffffffffffff) == 0) goto LAB_101a3b4fc;
      _free(puStack_1b8);
      if (((ulong)ppuStack_198 & 0x7fffffffffffffff) != 0) goto LAB_101a3b50c;
    }
    else {
      ppuStack_198 = (undefined **)0x8000000000000000;
      ppuStack_188 = (undefined **)0x8000000000000001;
      ppuVar18 = (undefined **)0x8000000000000000;
      puVar4 = puVar17;
      do {
        plVar7 = plVar1 + 0xd;
        plVar3 = plVar7;
        ppuVar20 = ppuStack_1d8;
        ppuVar8 = ppuStack_d0;
        if (*plVar1 == -0x8000000000000000) break;
        piVar2 = (int *)plVar1[1];
        lVar12 = plVar1[2];
        ppuStack_168 = (undefined **)plVar1[6];
        puStack_170 = (undefined *)plVar1[5];
        puStack_158 = (undefined *)plVar1[8];
        puStack_160 = (undefined *)plVar1[7];
        puStack_148 = (undefined *)plVar1[10];
        puStack_150 = (undefined *)plVar1[9];
        ppuStack_140 = (undefined **)plVar1[0xb];
        ppuStack_178 = (undefined **)plVar1[4];
        ppuStack_180 = (undefined **)plVar1[3];
        if (lVar12 == 7) {
          if (*piVar2 != 0x73726576 || *(int *)((long)piVar2 + 3) != 0x6e6f6973) goto LAB_101a3b014;
          uVar15 = 2;
          uVar14 = 2;
        }
        else if (lVar12 == 5) {
          if (*piVar2 != 0x6c746974 || (char)piVar2[1] != 'e') goto LAB_101a3b014;
          uVar15 = 1;
          uVar14 = 1;
        }
        else if ((lVar12 == 4) && (*piVar2 == 0x656d616e)) {
          uVar15 = 0;
          uVar14 = 0;
        }
        else {
LAB_101a3b014:
          uVar15 = 3;
          uVar14 = 3;
        }
        if (*plVar1 != 0) {
          _free();
          uVar14 = uVar15;
        }
        ppuVar8 = ppuStack_180;
        if (uVar14 < 2) {
          puVar5 = puStack_170;
          if (uVar14 == 0) {
            if (ppuStack_198 != (undefined **)0x8000000000000000) {
              puStack_78 = &UNK_108c61018;
              uStack_70 = 4;
              ppuStack_c0 = &puStack_78;
              ppuStack_b8 = (undefined **)&DAT_10192d9a4;
              plStack_130 = plVar7;
              puVar5 = (undefined *)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&ppuStack_c0);
              goto LAB_101a3b328;
            }
            ppuStack_180 = (undefined **)0x8000000000000005;
            if (ppuVar8 == (undefined **)0x8000000000000005) {
              ppuStack_198 = (undefined **)0x0;
              plStack_130 = plVar7;
              puVar5 = (undefined *)FUN_1088bbd80(&UNK_108cde170,0x10);
              goto LAB_101a3b328;
            }
            ppuStack_c0 = ppuVar8;
            puStack_b0 = puStack_170;
            ppuStack_b8 = ppuStack_178;
            puStack_a0 = puStack_160;
            ppuStack_a8 = ppuStack_168;
            puStack_90 = puStack_150;
            puStack_98 = puStack_158;
            ppuStack_80 = ppuStack_140;
            puStack_88 = puStack_148;
            if (ppuVar8 != (undefined **)0x8000000000000003) {
              plStack_130 = plVar7;
              puVar5 = (undefined *)FUN_10889a648(&ppuStack_c0,&puStack_78,&UNK_10b25d5b0);
              ppuStack_198 = (undefined **)0x0;
              func_0x00010194dc28(&ppuStack_c0);
              goto LAB_101a3b328;
            }
            ppuStack_198 = ppuStack_178;
            if (ppuStack_178 == (undefined **)0x8000000000000000) {
              ppuStack_198 = (undefined **)0x0;
LAB_101a3b6cc:
              ppuStack_80 = ppuStack_140;
              puStack_88 = puStack_148;
              puStack_90 = puStack_150;
              puStack_98 = puStack_158;
              puStack_a0 = puStack_160;
              ppuStack_a8 = ppuStack_168;
              ppuStack_b8 = ppuStack_178;
              ppuStack_c0 = ppuVar8;
              ppuStack_180 = (undefined **)0x8000000000000005;
              puStack_b0 = puStack_170;
              plStack_130 = plVar7;
              goto LAB_101a3b328;
            }
            ppuStack_1c0 = ppuStack_168;
            puStack_1a8 = puStack_170;
            ppuStack_c0 = ppuVar8;
          }
          else {
            if (ppuStack_188 != (undefined **)0x8000000000000001) {
              puStack_78 = &UNK_108ce9dd1;
              uStack_70 = 5;
              ppuStack_c0 = &puStack_78;
              ppuStack_b8 = (undefined **)&DAT_10192d9a4;
              plStack_130 = plVar7;
              puVar5 = (undefined *)FUN_1088bbbb8(s_duplicate_field_____108ac2973,&ppuStack_c0);
              goto LAB_101a3b328;
            }
            ppuStack_180 = (undefined **)0x8000000000000005;
            if (ppuVar8 == (undefined **)0x8000000000000005) {
              plStack_130 = plVar7;
              puVar5 = (undefined *)FUN_1088bbd80(&UNK_108cde170,0x10);
              ppuStack_188 = (undefined **)0x8000000000000001;
              goto LAB_101a3b328;
            }
            ppuStack_c0 = ppuVar8;
            puStack_b0 = puStack_170;
            ppuStack_b8 = ppuStack_178;
            puStack_a0 = puStack_160;
            ppuStack_a8 = ppuStack_168;
            puStack_90 = puStack_150;
            puStack_98 = puStack_158;
            ppuStack_80 = ppuStack_140;
            puStack_88 = puStack_148;
            if (ppuVar8 != (undefined **)0x8000000000000000) {
              if (ppuVar8 == (undefined **)0x8000000000000003) {
                ppuStack_188 = ppuStack_178;
                if (ppuStack_178 != (undefined **)0x8000000000000000) {
                  if (ppuStack_178 == (undefined **)0x8000000000000001) {
                    ppuStack_188 = (undefined **)0x8000000000000001;
                    goto LAB_101a3b6cc;
                  }
                  ppuStack_1d8 = ppuStack_168;
                  puStack_1b8 = puStack_170;
                  puVar4 = puStack_170;
                  goto LAB_101a3af3c;
                }
              }
              else {
                plStack_130 = plVar7;
                puVar5 = (undefined *)FUN_10889a648(&ppuStack_c0,&puStack_78,&UNK_10b25d5b0);
                func_0x00010194dc28(&ppuStack_c0);
                plVar7 = plStack_130;
              }
              plStack_130 = plVar7;
              ppuStack_188 = (undefined **)0x8000000000000001;
              goto LAB_101a3b328;
            }
            func_0x00010194dc28(&ppuStack_c0);
            ppuStack_188 = (undefined **)0x8000000000000000;
            puStack_1b8 = puVar4;
          }
        }
        else {
          if (uVar14 == 2) {
            if (ppuVar18 != (undefined **)0x8000000000000000) {
              puStack_78 = &UNK_108ceb45b;
              uStack_70 = 7;
              ppuStack_c0 = &puStack_78;
              ppuStack_b8 = (undefined **)&DAT_10192d9a4;
              plStack_130 = plVar7;
              uVar6 = FUN_1088bbbb8(s_duplicate_field_____108ac2973,&ppuStack_c0);
              *param_1 = 0x8000000000000000;
              param_1[1] = uVar6;
              if (ppuVar18 != (undefined **)0x0) goto LAB_101a3b400;
              goto LAB_101a3b404;
            }
            ppuStack_180 = (undefined **)0x8000000000000005;
            if (ppuVar8 == (undefined **)0x8000000000000005) {
              plStack_130 = plVar7;
              puStack_1b0 = (undefined *)FUN_1088bbd80(&UNK_108cde170,0x10);
              plVar7 = plStack_130;
            }
            else {
              ppuStack_c0 = ppuVar8;
              puStack_b0 = puStack_170;
              ppuStack_b8 = ppuStack_178;
              puStack_a0 = puStack_160;
              ppuStack_a8 = ppuStack_168;
              puStack_90 = puStack_150;
              puStack_98 = puStack_158;
              ppuStack_80 = ppuStack_140;
              puStack_88 = puStack_148;
              if (ppuVar8 == (undefined **)0x8000000000000003) {
                puStack_1b0 = puStack_170;
                if (ppuStack_178 != (undefined **)0x8000000000000000) {
                  ppuStack_1c8 = ppuStack_168;
                  ppuVar18 = ppuStack_178;
                  goto LAB_101a3af3c;
                }
              }
              else {
                plStack_130 = plVar7;
                puStack_1b0 = (undefined *)FUN_10889a648(&ppuStack_c0,&puStack_78,&UNK_10b25d5b0);
                func_0x00010194dc28(&ppuStack_c0);
                plVar7 = plStack_130;
              }
            }
            plStack_130 = plVar7;
            *param_1 = 0x8000000000000000;
            param_1[1] = (ulong)puStack_1b0;
            goto LAB_101a3b340;
          }
          ppuStack_180 = (undefined **)0x8000000000000005;
          if (ppuVar8 == (undefined **)0x8000000000000005) {
            plStack_130 = plVar7;
            puVar5 = (undefined *)FUN_1088bbd80(&UNK_108cde170,0x10);
            goto LAB_101a3b328;
          }
          ppuStack_c0 = ppuVar8;
          puStack_b0 = puStack_170;
          ppuStack_b8 = ppuStack_178;
          puStack_a0 = puStack_160;
          ppuStack_a8 = ppuStack_168;
          puStack_90 = puStack_150;
          puStack_98 = puStack_158;
          ppuStack_80 = ppuStack_140;
          puStack_88 = puStack_148;
          func_0x00010194dc28(&ppuStack_c0);
        }
LAB_101a3af3c:
        plVar1 = plVar7;
        plVar3 = plVar19;
        ppuVar20 = ppuStack_1d8;
        ppuVar8 = ppuStack_d0;
      } while (plVar7 != plVar19);
      ppuStack_d0 = ppuVar20;
      plStack_130 = plVar7;
      if (ppuStack_198 == (undefined **)0x8000000000000000) goto LAB_101a3b2ec;
      ppuVar20 = (undefined **)0x8000000000000000;
      if (ppuStack_188 != (undefined **)0x8000000000000001) {
        ppuVar20 = ppuStack_188;
      }
      if (ppuVar18 != (undefined **)0x8000000000000000) {
        *param_1 = (ulong)ppuStack_198;
        param_1[1] = (ulong)puStack_1a8;
        param_1[2] = (ulong)ppuStack_1c0;
        param_1[3] = (ulong)ppuVar18;
        param_1[4] = (ulong)puStack_1b0;
        param_1[5] = (ulong)ppuStack_1c8;
        param_1[6] = (ulong)ppuVar20;
        param_1[7] = (ulong)puStack_1b8;
        param_1[8] = (ulong)ppuStack_d0;
        uStack_e8 = param_1[5];
        uStack_f0 = param_1[4];
        uStack_d8 = param_1[7];
        uStack_e0 = param_1[6];
        uStack_108 = param_1[1];
        uStack_110 = *param_1;
        uStack_f8 = param_1[3];
        uStack_100 = param_1[2];
        if (plVar19 != plVar3) {
          uVar6 = FUN_108880da4(puVar17,&UNK_10b25f968,&UNK_10b25d520);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar6;
          FUN_10195f2c8(&uStack_110);
        }
        FUN_10194df64(&plStack_138);
        goto LAB_101a3b530;
      }
      puStack_78 = &UNK_108ceb45b;
      uStack_70 = 7;
      ppuStack_c0 = &puStack_78;
      ppuStack_b8 = (undefined **)&DAT_10192d9a4;
      ppuStack_d0 = ppuVar8;
      uVar6 = FUN_1088bbbb8(s_missing_field_____108ac28f7,&ppuStack_c0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar6;
      if (((ulong)ppuVar20 & 0x7fffffffffffffff) != 0) {
        _free(puStack_1b8);
      }
      if (ppuStack_198 != (undefined **)0x0) {
        _free(puStack_1a8);
      }
      bVar13 = true;
LAB_101a3b4fc:
      if (((ulong)ppuStack_198 & 0x7fffffffffffffff) == 0) {
        bVar13 = true;
      }
      if (!bVar13) {
LAB_101a3b50c:
        _free(puStack_1a8);
      }
    }
    FUN_10194df64(&plStack_138);
    if (ppuStack_180 != (undefined **)0x8000000000000005) {
      func_0x00010194dc28(&ppuStack_180);
    }
    goto LAB_101a3b530;
  }
  puVar17 = (undefined *)param_2[1];
  ppuVar8 = (undefined **)param_2[2];
  uVar6 = param_2[3];
  ppuVar20 = ppuVar8 + uVar6 * 9;
  ppuVar18 = ppuVar8;
  ppuStack_c0 = ppuVar8;
  puStack_b0 = puVar17;
  ppuStack_a8 = ppuVar20;
  if (uVar6 == 0) {
LAB_101a3b268:
    ppuStack_b8 = ppuVar18;
    puVar4 = (undefined *)FUN_108880da4(0,&UNK_10b268978,&UNK_10b25d520);
LAB_101a3b284:
    *param_1 = 0x8000000000000000;
    param_1[1] = (ulong)puVar4;
  }
  else {
    ppuVar18 = ppuVar8 + 9;
    ppuVar9 = (undefined **)*ppuVar8;
    if (ppuVar9 == (undefined **)0x8000000000000005) goto LAB_101a3b268;
    puVar4 = ppuVar8[2];
    ppuVar21 = (undefined **)ppuVar8[1];
    puStack_160 = ppuVar8[4];
    ppuVar22 = (undefined **)ppuVar8[3];
    puStack_150 = ppuVar8[6];
    puStack_158 = ppuVar8[5];
    ppuStack_140 = (undefined **)ppuVar8[8];
    puStack_148 = ppuVar8[7];
    ppuStack_180 = ppuVar9;
    ppuStack_178 = ppuVar21;
    puStack_170 = puVar4;
    ppuStack_168 = ppuVar22;
    ppuStack_b8 = ppuVar18;
    if (ppuVar9 != (undefined **)0x8000000000000003) {
      puVar4 = (undefined *)FUN_10889a648(&ppuStack_180,&puStack_78,&UNK_10b25d5b0);
      func_0x00010194dc28(&ppuStack_180);
      goto LAB_101a3b284;
    }
    if ((ppuVar21 == (undefined **)0x8000000000000000) ||
       (ppuVar21 == (undefined **)0x8000000000000001)) goto LAB_101a3b284;
    if (uVar6 == 1) {
LAB_101a3b3c8:
      ppuStack_180 = ppuVar9;
      ppuStack_b8 = ppuVar18;
      puVar5 = (undefined *)FUN_108880da4(1,&UNK_10b268978,&UNK_10b25d520);
LAB_101a3b3e4:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)puVar5;
LAB_101a3b3ec:
      if (ppuVar21 != (undefined **)0x0) {
        _free(puVar4);
      }
    }
    else {
      ppuVar18 = ppuVar8 + 0x12;
      ppuStack_180 = (undefined **)ppuVar8[9];
      if (ppuStack_180 == (undefined **)0x8000000000000005) goto LAB_101a3b3c8;
      puVar5 = ppuVar8[0xb];
      ppuStack_188 = (undefined **)ppuVar8[10];
      puStack_160 = ppuVar8[0xd];
      ppuVar9 = (undefined **)ppuVar8[0xc];
      puStack_150 = ppuVar8[0xf];
      puStack_158 = ppuVar8[0xe];
      ppuStack_140 = (undefined **)ppuVar8[0x11];
      puStack_148 = ppuVar8[0x10];
      ppuStack_178 = ppuStack_188;
      puStack_170 = puVar5;
      ppuStack_168 = ppuVar9;
      ppuStack_b8 = ppuVar18;
      if (ppuStack_180 != (undefined **)0x8000000000000000) {
        if (ppuStack_180 == (undefined **)0x8000000000000003) {
          if ((-0x7fffffffffffffff < (long)ppuStack_188) &&
             (ppuStack_188 != (undefined **)0x8000000000000002)) {
            if (uVar6 != 2) goto LAB_101a3b720;
            goto LAB_101a3b7dc;
          }
        }
        else {
          puVar5 = (undefined *)FUN_10889a648(&ppuStack_180,&puStack_78,&UNK_10b25d5b0);
          func_0x00010194dc28(&ppuStack_180);
        }
        goto LAB_101a3b3e4;
      }
      func_0x00010194dc28(&ppuStack_180);
      ppuVar9 = (undefined **)0x8000000000000000;
      ppuStack_188 = (undefined **)0x8000000000000000;
      puVar5 = unaff_x25;
      if (uVar6 == 2) {
LAB_101a3b7dc:
        uVar6 = FUN_108880da4(2,&UNK_10b268978,&UNK_10b25d520);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar6;
joined_r0x000101a3b804:
        if (((ulong)ppuStack_188 & 0x7fffffffffffffff) != 0) {
          _free(puVar5);
        }
        goto LAB_101a3b3ec;
      }
LAB_101a3b720:
      ppuVar18 = ppuVar8 + 0x1b;
      ppuVar11 = (undefined **)ppuVar8[0x12];
      ppuStack_b8 = ppuVar18;
      if (ppuVar11 == (undefined **)0x8000000000000005) goto LAB_101a3b7dc;
      puStack_1a8 = ppuVar8[0x14];
      ppuStack_178 = (undefined **)ppuVar8[0x13];
      puStack_160 = ppuVar8[0x16];
      ppuStack_168 = (undefined **)ppuVar8[0x15];
      puStack_150 = ppuVar8[0x18];
      puStack_158 = ppuVar8[0x17];
      ppuStack_140 = (undefined **)ppuVar8[0x1a];
      puStack_148 = ppuVar8[0x19];
      ppuStack_180 = ppuVar11;
      puStack_170 = puStack_1a8;
      if (ppuVar11 != (undefined **)0x8000000000000003) {
        puStack_1a8 = (undefined *)FUN_10889a648(&ppuStack_180,&puStack_78,&UNK_10b25d5b0);
        func_0x00010194dc28(&ppuStack_180);
LAB_101a3b784:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)puStack_1a8;
        goto joined_r0x000101a3b804;
      }
      if ((ppuStack_178 == (undefined **)0x8000000000000000) ||
         (ppuStack_178 == (undefined **)0x8000000000000001)) goto LAB_101a3b784;
      *param_1 = (ulong)ppuVar21;
      param_1[1] = (ulong)puVar4;
      param_1[2] = (ulong)ppuVar22;
      param_1[3] = (ulong)ppuStack_178;
      param_1[4] = (ulong)puStack_1a8;
      param_1[5] = (ulong)ppuStack_168;
      param_1[6] = (ulong)ppuStack_188;
      param_1[7] = (ulong)puVar5;
      param_1[8] = (ulong)ppuVar9;
      puStack_158 = (undefined *)param_1[5];
      puStack_160 = (undefined *)param_1[4];
      puStack_148 = (undefined *)param_1[7];
      puStack_150 = (undefined *)param_1[6];
      ppuStack_178 = (undefined **)param_1[1];
      ppuStack_180 = (undefined **)*param_1;
      ppuStack_168 = (undefined **)param_1[3];
      puStack_170 = (undefined *)param_1[2];
      ppuStack_140 = ppuVar9;
      if (uVar6 != 3) {
        uVar6 = FUN_108880da4(uVar6,&UNK_10b25f958,&UNK_10b25d520);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar6;
        FUN_10195f2c8(&ppuStack_180);
      }
    }
  }
  lVar12 = ((ulong)((long)ppuVar20 - (long)ppuVar18) >> 3) * -0x71c71c71c71c71c7 + 1;
  while (lVar12 = lVar12 + -1, lVar12 != 0) {
    func_0x00010194dc28(ppuVar18);
    ppuVar18 = ppuVar18 + 9;
  }
  if (puVar17 != (undefined *)0x0) {
    _free(ppuVar8);
  }
LAB_101a3b530:
  if (((long)uVar16 < 0) && ((uVar16 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    func_0x00010194dc28(param_2);
  }
  return;
}

