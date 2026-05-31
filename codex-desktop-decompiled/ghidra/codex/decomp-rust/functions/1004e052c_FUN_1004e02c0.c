
void FUN_1004e02c0(ulong *param_1,char *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte bVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long unaff_x27;
  long unaff_x28;
  undefined1 auVar21 [16];
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined1 auStack_2c0 [8];
  ulong uStack_2b8;
  undefined1 uStack_2a1;
  long lStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 *puStack_288;
  undefined1 ****ppppuStack_280;
  undefined8 uStack_278;
  int aiStack_268 [2];
  undefined8 uStack_260;
  long lStack_258;
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_231;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long *plStack_218;
  undefined1 ***pppuStack_210;
  undefined8 uStack_208;
  int aiStack_1f8 [2];
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c1;
  long lStack_1c0;
  ulong *puStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  ulong uStack_188;
  long lStack_180;
  ulong uStack_178;
  long lStack_170;
  ulong uStack_168;
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
  undefined1 uStack_101;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  if (*param_2 != '\x14') {
    uVar15 = thunk_FUN_108855c40(param_2,&uStack_61,&UNK_10b20a3c0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar15;
    return;
  }
  lVar5 = *(long *)(param_2 + 0x10);
  uVar18 = *(ulong *)(param_2 + 0x18);
  lVar19 = uVar18 * 0x20;
  lVar17 = lVar5 + lVar19;
  uVar15 = uVar18;
  if (0xaaa9 < uVar18) {
    uVar15 = 0xaaaa;
  }
  if (uVar18 == 0) {
    uStack_98 = 0;
    uStack_90 = 8;
    uStack_88 = 0;
    lVar14 = 0;
    lVar20 = lVar5;
LAB_1004e0408:
    param_1[1] = uStack_90;
    *param_1 = uStack_98;
    param_1[2] = uStack_88;
    uVar15 = *param_1;
    if ((uVar15 != 0x8000000000000000) && (lVar17 - lVar20 != 0)) {
      uVar18 = param_1[1];
      uVar16 = param_1[2];
      lStack_80 = lVar14;
      uVar3 = thunk_FUN_1087e422c(lVar14 + ((ulong)(lVar17 - lVar20) >> 5),&lStack_80,&UNK_10b23a1b0
                                 );
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar3;
      if (uVar16 != 0) {
        puVar12 = (undefined8 *)(uVar18 + 8);
        do {
          if (puVar12[-1] != 0) {
            _free(*puVar12);
          }
          puVar12 = puVar12 + 3;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (uVar15 != 0) {
        _free(uVar18);
      }
    }
    return;
  }
  lVar14 = uVar15 * 0x18;
  uStack_90 = _malloc(lVar14);
  if (uStack_90 != 0) {
    uStack_88 = 0;
    lStack_a0 = (lVar19 - 0x20U >> 5) + 1;
    uStack_98 = uVar15;
    do {
      FUN_1004e07f8(&lStack_80,lVar5);
      lVar20 = lStack_70;
      uVar16 = uStack_78;
      lVar14 = lStack_80;
      uVar18 = uStack_88;
      uVar15 = uStack_90;
      if (lStack_80 == -0x8000000000000000) {
        *param_1 = 0x8000000000000000;
        param_1[1] = uStack_78;
        if (uStack_88 != 0) {
          puVar12 = (undefined8 *)(uStack_90 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (uStack_98 == 0) {
          return;
        }
        _free(uVar15);
        return;
      }
      if (uStack_88 == uStack_98) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&uStack_98);
      }
      lVar5 = lVar5 + 0x20;
      plVar10 = (long *)(uStack_90 + uVar18 * 0x18);
      *plVar10 = lVar14;
      plVar10[1] = uVar16;
      plVar10[2] = lVar20;
      uStack_88 = uVar18 + 1;
      lVar19 = lVar19 + -0x20;
      lVar14 = lStack_a0;
      lVar20 = lVar17;
    } while (lVar19 != 0);
    goto LAB_1004e0408;
  }
  uVar4 = FUN_107c03c64(8,lVar14);
  FUN_100e1ad68(param_1);
  uVar4 = __Unwind_Resume(uVar4);
  if (unaff_x27 != 0) {
    _free(lVar14);
    FUN_100e1ad68(&uStack_98);
    uVar4 = __Unwind_Resume(uVar4);
  }
  FUN_100e1ad68(&uStack_98);
  auVar21 = __Unwind_Resume(uVar4);
  pcVar6 = auVar21._8_8_;
  plVar10 = auVar21._0_8_;
  uStack_a8 = 0x1004e052c;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (*pcVar6 != '\x14') {
    thunk_FUN_108855bf0(plVar10,pcVar6,&uStack_101,&UNK_10b2136e8);
    return;
  }
  lVar5 = *(long *)(pcVar6 + 0x10);
  uVar18 = *(ulong *)(pcVar6 + 0x18);
  lVar19 = uVar18 * 0x20;
  uVar15 = uVar18;
  if (0xaaa9 < uVar18) {
    uVar15 = 0xaaaa;
  }
  if (uVar18 == 0) {
    uStack_178 = 0;
    lStack_170 = 8;
    uStack_168 = 0;
    lVar17 = lVar5 + lVar19;
    lVar14 = lVar5;
    uVar15 = 0;
LAB_1004e06ac:
    plVar10[2] = lStack_170;
    plVar10[1] = uStack_178;
    plVar10[3] = uStack_168;
    *plVar10 = 2;
    if (lVar17 - lVar14 != 0) {
      lVar5 = plVar10[1];
      lVar19 = plVar10[2];
      lVar20 = plVar10[3];
      uStack_178 = uVar15;
      thunk_FUN_1087e427c(&lStack_160,uVar15 + ((ulong)(lVar17 - lVar14) >> 5),&uStack_178,
                          &UNK_10b23a1b0);
      if (lStack_160 != 2) {
        plVar10[5] = lStack_138;
        plVar10[4] = lStack_140;
        plVar10[7] = lStack_128;
        plVar10[6] = lStack_130;
        plVar10[9] = lStack_118;
        plVar10[8] = lStack_120;
        plVar10[10] = lStack_110;
        plVar10[1] = lStack_158;
        *plVar10 = lStack_160;
        plVar10[3] = lStack_148;
        plVar10[2] = lStack_150;
        if (lVar20 != 0) {
          puVar12 = (undefined8 *)(lVar19 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (lVar5 == 0) {
          return;
        }
        _free(lVar19);
        return;
      }
    }
    *plVar10 = 2;
    return;
  }
  lVar14 = uVar15 * 0x18;
  lStack_180 = lVar5 + lVar19;
  lStack_170 = _malloc(lVar14);
  if (lStack_170 != 0) {
    uStack_168 = 0;
    uStack_188 = (lVar19 - 0x20U >> 5) + 1;
    uVar18 = 1;
    uStack_178 = uVar15;
    do {
      FUN_1013f91dc(&lStack_160,lVar5);
      lVar2 = lStack_148;
      lVar20 = lStack_150;
      lVar14 = lStack_158;
      uVar15 = uStack_168;
      lVar17 = lStack_170;
      if (lStack_160 != 2) {
        plVar10[5] = lStack_138;
        plVar10[4] = lStack_140;
        plVar10[7] = lStack_128;
        plVar10[6] = lStack_130;
        plVar10[9] = lStack_118;
        plVar10[8] = lStack_120;
        plVar10[10] = lStack_110;
        *plVar10 = lStack_160;
        plVar10[1] = lStack_158;
        plVar10[2] = lStack_150;
        plVar10[3] = lStack_148;
        if (uStack_168 != 0) {
          puVar12 = (undefined8 *)(lStack_170 + 8);
          do {
            if (puVar12[-1] != 0) {
              _free(*puVar12);
            }
            puVar12 = puVar12 + 3;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if (uStack_178 == 0) {
          return;
        }
        _free(lVar17);
        return;
      }
      if (lStack_158 == -0x8000000000000000) {
        lVar17 = lStack_180;
        lVar14 = lVar5 + 0x20;
        uVar15 = uVar18;
        break;
      }
      if (uStack_168 == uStack_178) {
        FUN_107c05aec(&uStack_178);
      }
      lVar5 = lVar5 + 0x20;
      plVar11 = (long *)(lStack_170 + uVar15 * 0x18);
      *plVar11 = lVar14;
      plVar11[1] = lVar20;
      plVar11[2] = lVar2;
      uStack_168 = uVar15 + 1;
      uVar18 = uVar18 + 1;
      lVar19 = lVar19 + -0x20;
      lVar17 = lStack_180;
      lVar14 = lStack_180;
      uVar15 = uStack_188;
    } while (lVar19 != 0);
    goto LAB_1004e06ac;
  }
  uVar4 = FUN_107c03c64(8,lVar14);
  FUN_100ca9cd4(lVar14);
  uVar4 = __Unwind_Resume(uVar4);
  if (unaff_x28 != 0) {
    _free(lVar14);
    FUN_100ca9cd4(&uStack_178);
    uVar4 = __Unwind_Resume(uVar4);
  }
  FUN_100ca9cd4(&uStack_178);
  auVar21 = __Unwind_Resume(uVar4);
  pbVar7 = auVar21._8_8_;
  plVar10 = auVar21._0_8_;
  pcStack_198 = FUN_1004e07f8;
  bVar9 = *pbVar7;
  lStack_1c0 = lVar17;
  puStack_1b8 = &uStack_178;
  lStack_1b0 = lVar5;
  uStack_1a8 = uVar4;
  ppuStack_1a0 = &puStack_b0;
  if (bVar9 < 0xe) {
    if (bVar9 == 0xc) {
      uVar1 = *(undefined8 *)(pbVar7 + 0x10);
      lVar5 = *(long *)(pbVar7 + 0x18);
    }
    else {
      if (bVar9 != 0xd) {
LAB_1004e08e8:
        lVar5 = thunk_FUN_108855c40(pbVar7,&uStack_1c1,&UNK_10b20a5e0);
        goto LAB_1004e08fc;
      }
      uVar1 = *(undefined8 *)(pbVar7 + 8);
      lVar5 = *(long *)(pbVar7 + 0x10);
    }
  }
  else {
    if (bVar9 == 0xe) {
      uVar4 = *(undefined8 *)(pbVar7 + 0x10);
      uVar8 = *(undefined8 *)(pbVar7 + 0x18);
    }
    else {
      if (bVar9 != 0xf) goto LAB_1004e08e8;
      uVar4 = *(undefined8 *)(pbVar7 + 8);
      uVar8 = *(undefined8 *)(pbVar7 + 0x10);
    }
    func_0x0001055bf348(aiStack_1f8,uVar4,uVar8);
    uVar1 = uStack_1f0;
    lVar5 = lStack_1e8;
    if (aiStack_1f8[0] == 1) {
      auStack_1e0[0] = 6;
      uStack_1d8 = uVar4;
      uStack_1d0 = uVar8;
      lVar5 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (auStack_1e0,&uStack_1c1,&UNK_10b20a5e0);
LAB_1004e08fc:
      *plVar10 = -0x8000000000000000;
      plVar10[1] = lVar5;
      return;
    }
  }
  if (lVar5 == 0) {
    lVar17 = 1;
LAB_1004e0898:
    _memcpy(lVar17,uVar1,lVar5);
    *plVar10 = lVar5;
    plVar10[1] = lVar17;
    plVar10[2] = lVar5;
    return;
  }
  lVar17 = _malloc(lVar5);
  if (lVar17 != 0) goto LAB_1004e0898;
  auVar21 = FUN_107c03c64(1,lVar5);
  pbVar7 = auVar21._8_8_;
  puVar12 = auVar21._0_8_;
  uStack_208 = 0x1004e0914;
  bVar9 = *pbVar7;
  lStack_230 = lVar17;
  uStack_228 = uVar1;
  lStack_220 = lVar5;
  plStack_218 = plVar10;
  pppuStack_210 = &ppuStack_1a0;
  if (bVar9 < 0xe) {
    if (bVar9 == 0xc) {
      uVar1 = *(undefined8 *)(pbVar7 + 0x10);
      lVar5 = *(long *)(pbVar7 + 0x18);
    }
    else {
      if (bVar9 != 0xd) {
LAB_1004e0a0c:
        thunk_FUN_108855bf0(puVar12,pbVar7,&uStack_231,&UNK_10b20a5e0);
        return;
      }
      uVar1 = *(undefined8 *)(pbVar7 + 8);
      lVar5 = *(long *)(pbVar7 + 0x10);
    }
  }
  else {
    if (bVar9 == 0xe) {
      uVar4 = *(undefined8 *)(pbVar7 + 0x10);
      uVar8 = *(undefined8 *)(pbVar7 + 0x18);
    }
    else {
      if (bVar9 != 0xf) goto LAB_1004e0a0c;
      uVar4 = *(undefined8 *)(pbVar7 + 8);
      uVar8 = *(undefined8 *)(pbVar7 + 0x10);
    }
    func_0x0001055bf348(aiStack_268,uVar4,uVar8);
    uVar1 = uStack_260;
    lVar5 = lStack_258;
    if (aiStack_268[0] == 1) {
      auStack_250[0] = 6;
      uStack_248 = uVar4;
      uStack_240 = uVar8;
      thunk_FUN_1087e3ee8(puVar12,auStack_250,&uStack_231,&UNK_10b20a5e0);
      return;
    }
  }
  if (lVar5 == 0) {
    lVar17 = 1;
LAB_1004e09b4:
    _memcpy(lVar17,uVar1,lVar5);
    puVar12[2] = lVar17;
    puVar12[3] = lVar5;
    *puVar12 = 2;
    puVar12[1] = lVar5;
    return;
  }
  lVar17 = _malloc(lVar5);
  if (lVar17 != 0) goto LAB_1004e09b4;
  auVar21 = FUN_107c03c64(1,lVar5);
  pbVar7 = auVar21._8_8_;
  plVar10 = auVar21._0_8_;
  uStack_278 = 0x1004e0a30;
  bVar9 = *pbVar7;
  lStack_2a0 = lVar17;
  uStack_298 = uVar1;
  lStack_290 = lVar5;
  puStack_288 = puVar12;
  ppppuStack_280 = &pppuStack_210;
  if (bVar9 - 0xc < 2) {
    pbVar13 = (byte *)0x0;
    if (bVar9 < 0xd) goto LAB_1004e0a64;
LAB_1004e0aac:
    if (bVar9 == 0xd) {
      uVar4 = *(undefined8 *)(pbVar7 + 8);
      uVar8 = *(undefined8 *)(pbVar7 + 0x10);
LAB_1004e0b84:
      FUN_100b40be0(&uStack_318,uVar4,uVar8);
      lVar5 = CONCAT71(uStack_317,uStack_318);
    }
    else {
      if (bVar9 != 0xe) {
        if (bVar9 == 0xf) {
          uVar4 = *(undefined8 *)(pbVar7 + 8);
          uVar8 = *(undefined8 *)(pbVar7 + 0x10);
          goto LAB_1004e0ae0;
        }
        goto LAB_1004e0c78;
      }
      uVar4 = *(undefined8 *)(pbVar7 + 0x10);
      uVar8 = *(undefined8 *)(pbVar7 + 0x18);
LAB_1004e0ae0:
      FUN_100b40a2c(&uStack_318,uVar4,uVar8);
      lVar5 = CONCAT71(uStack_317,uStack_318);
    }
  }
  else {
    if (bVar9 != 0x15) {
      thunk_FUN_1088556a8(&uStack_318);
      thunk_FUN_1087e3db0(plVar10,&uStack_318,&UNK_10b20a5b0,&UNK_10b20a590);
      return;
    }
    if (*(long *)(pbVar7 + 0x18) != 1) {
      uStack_318 = 0xb;
      thunk_FUN_1087e3ee8(plVar10,&uStack_318,&UNK_10b20a580,&UNK_10b20a590);
      return;
    }
    pbVar7 = *(byte **)(pbVar7 + 0x10);
    pbVar13 = pbVar7 + 0x20;
    bVar9 = *pbVar7;
    if (0xc < bVar9) goto LAB_1004e0aac;
LAB_1004e0a64:
    if (bVar9 == 1) {
      uVar15 = (ulong)pbVar7[1];
      if (pbVar7[1] < 3) goto LAB_1004e0ba0;
    }
    else {
      if (bVar9 != 4) {
        if (bVar9 == 0xc) {
          uVar4 = *(undefined8 *)(pbVar7 + 0x10);
          uVar8 = *(undefined8 *)(pbVar7 + 0x18);
          goto LAB_1004e0b84;
        }
LAB_1004e0c78:
        thunk_FUN_108855bf0(&uStack_318,pbVar7,&uStack_2a1,&UNK_10b20dbe0);
        lVar5 = CONCAT71(uStack_317,uStack_318);
        goto joined_r0x0001004e0c98;
      }
      uVar15 = *(ulong *)(pbVar7 + 8);
      if (uVar15 < 3) goto LAB_1004e0ba0;
    }
    auStack_2c0[0] = 1;
    uStack_2b8 = uVar15;
    thunk_FUN_1087e3ee8(&uStack_318,auStack_2c0,&UNK_10b229e80,&UNK_10b20a590);
    lVar5 = CONCAT71(uStack_317,uStack_318);
  }
joined_r0x0001004e0c98:
  uVar15 = (ulong)(byte)uStack_310;
  if (lVar5 != 2) {
    uStack_310._1_3_ = (undefined3)((uint)uStack_310 >> 8);
    *(uint *)((long)plVar10 + 9) = CONCAT13((undefined1)uStack_30c,uStack_310._1_3_);
    *(undefined4 *)((long)plVar10 + 0xc) = uStack_30c;
    plVar10[4] = lStack_2f8;
    plVar10[3] = lStack_300;
    plVar10[6] = lStack_2e8;
    plVar10[5] = lStack_2f0;
    plVar10[8] = lStack_2d8;
    plVar10[7] = lStack_2e0;
    plVar10[10] = lStack_2c8;
    plVar10[9] = lStack_2d0;
    *plVar10 = lVar5;
    *(byte *)(plVar10 + 1) = (byte)uStack_310;
    plVar10[2] = lStack_308;
    return;
  }
LAB_1004e0ba0:
  if (((pbVar13 == (byte *)0x0) || (*pbVar13 == 0x12)) ||
     (thunk_FUN_108855bf0(&uStack_318,pbVar13,&uStack_2a1,&UNK_10b20a5c0),
     CONCAT71(uStack_317,uStack_318) == 2)) {
    *(char *)(plVar10 + 1) = (char)uVar15;
    *plVar10 = 2;
  }
  else {
    plVar10[5] = lStack_2f0;
    plVar10[4] = lStack_2f8;
    plVar10[7] = lStack_2e0;
    plVar10[6] = lStack_2e8;
    plVar10[9] = lStack_2d0;
    plVar10[8] = lStack_2d8;
    plVar10[10] = lStack_2c8;
    plVar10[1] = CONCAT44(uStack_30c,uStack_310);
    *plVar10 = CONCAT71(uStack_317,uStack_318);
    plVar10[3] = lStack_300;
    plVar10[2] = lStack_308;
  }
  return;
}

