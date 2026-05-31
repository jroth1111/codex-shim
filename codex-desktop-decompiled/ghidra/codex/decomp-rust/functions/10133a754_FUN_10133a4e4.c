
/* WARNING: Removing unreachable block (ram,0x00010133acb8) */

void FUN_10133a4e4(ulong *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  ulong *puVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  ulong uVar17;
  byte bVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_2d0;
  char *pcStack_2c8;
  undefined8 uStack_2c0;
  char *pcStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined7 uStack_288;
  undefined1 uStack_281;
  undefined7 uStack_280;
  long lStack_279;
  undefined8 uStack_270;
  long *plStack_268;
  long *plStack_260;
  long lStack_258;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  long lStack_238;
  char cStack_230;
  undefined7 uStack_22f;
  char cStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 uStack_1e1;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if (*param_2 != '\x14') {
    uVar8 = FUN_108855c40(param_2,&uStack_f0,&UNK_10b2137a8);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar8;
    return;
  }
  lVar14 = *(long *)(param_2 + 0x10);
  uVar17 = *(ulong *)(param_2 + 0x18);
  lVar19 = uVar17 * 0x20;
  lVar1 = lVar14 + lVar19;
  uVar8 = uVar17;
  if (0x1e1d < uVar17) {
    uVar8 = 0x1e1e;
  }
  if (uVar17 == 0) {
    uVar17 = 0;
    uStack_190 = 0;
    uStack_188 = 8;
    uStack_180 = 0;
    lVar15 = lVar14;
LAB_10133a658:
    param_1[1] = uStack_188;
    *param_1 = uStack_190;
    param_1[2] = uStack_180;
    if (*param_1 != 0x8000000000000000) {
      uStack_e8 = param_1[1];
      uStack_f0 = *param_1;
      uStack_e0 = param_1[2];
      uVar8 = lVar1 - lVar15;
      if (uVar8 != 0) {
        uStack_178 = uVar17;
        uVar8 = FUN_1087e422c(uVar17 + (uVar8 >> 5),&uStack_178,&UNK_10b23a1b0);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar8;
        FUN_100e2043c(&uStack_f0);
      }
    }
    return;
  }
  uStack_188 = _malloc(uVar8 * 0x88);
  if (uStack_188 != 0) {
    uStack_180 = 0;
    uVar17 = (lVar19 - 0x20U >> 5) + 1;
    uStack_190 = uVar8;
    do {
      FUN_100ec7314(&uStack_f0,lVar14);
      uVar8 = uStack_180;
      if (uStack_f0 == 2) {
        *param_1 = 0x8000000000000000;
        param_1[1] = uStack_e8;
        FUN_100e2043c(&uStack_190);
        return;
      }
      uStack_120 = uStack_98;
      uStack_128 = uStack_a0;
      uStack_110 = uStack_88;
      uStack_118 = uStack_90;
      uStack_100 = uStack_78;
      uStack_108 = uStack_80;
      uStack_f8 = uStack_70;
      uStack_160 = uStack_d8;
      uStack_168 = uStack_e0;
      uStack_150 = uStack_c8;
      uStack_158 = uStack_d0;
      uStack_140 = uStack_b8;
      uStack_148 = uStack_c0;
      uStack_130 = uStack_a8;
      uStack_138 = uStack_b0;
      uStack_178 = uStack_f0;
      uStack_170 = uStack_e8;
      if (uStack_180 == uStack_190) {
        func_0x000108a4258c(&uStack_190);
      }
      lVar14 = lVar14 + 0x20;
      puVar12 = (ulong *)(uStack_188 + uVar8 * 0x88);
      puVar12[0xb] = uStack_120;
      puVar12[10] = uStack_128;
      puVar12[0xd] = uStack_110;
      puVar12[0xc] = uStack_118;
      puVar12[0xf] = uStack_100;
      puVar12[0xe] = uStack_108;
      puVar12[0x10] = uStack_f8;
      puVar12[3] = uStack_160;
      puVar12[2] = uStack_168;
      puVar12[5] = uStack_150;
      puVar12[4] = uStack_158;
      puVar12[7] = uStack_140;
      puVar12[6] = uStack_148;
      puVar12[9] = uStack_130;
      puVar12[8] = uStack_138;
      puVar12[1] = uStack_170;
      *puVar12 = uStack_178;
      uStack_180 = uVar8 + 1;
      lVar19 = lVar19 + -0x20;
      lVar15 = lVar1;
    } while (lVar19 != 0);
    goto LAB_10133a658;
  }
  uVar9 = func_0x0001087c9084(8,uVar8 * 0x88);
  FUN_100e2043c(param_1);
  uVar9 = __Unwind_Resume(uVar9);
  FUN_100de5508(&uStack_178);
  FUN_100e2043c(&uStack_190);
  uVar9 = __Unwind_Resume(uVar9);
  FUN_100e2043c(&uStack_190);
  auVar20 = __Unwind_Resume(uVar9);
  pcVar11 = auVar20._8_8_;
  puVar10 = auVar20._0_8_;
  cVar4 = *pcVar11;
  if ((cVar4 != '\f') && (cVar4 != '\r')) {
    if (cVar4 != '\x15') {
      FUN_1088556a8(&uStack_270,pcVar11);
      uVar9 = func_0x000108a4a50c(&uStack_270,&UNK_10b20a5b0,&UNK_10b20a590);
      *(undefined8 *)(puVar10 + 8) = uVar9;
      *puVar10 = 1;
      FUN_100e077ec(pcVar11);
      return;
    }
    uStack_2c0 = *(undefined8 *)(pcVar11 + 8);
    uStack_2d0 = *(char **)(pcVar11 + 0x10);
    lVar14 = *(long *)(pcVar11 + 0x18);
    pcStack_2b8 = uStack_2d0 + lVar14 * 0x40;
    pcStack_2c8 = uStack_2d0;
    if (lVar14 != 0) {
      pcVar13 = uStack_2d0 + 0x40;
      cVar3 = *uStack_2d0;
      pcStack_2c8 = pcVar13;
      if (cVar3 != '\x16') {
        uStack_227 = (undefined7)*(undefined8 *)(uStack_2d0 + 9);
        uStack_22f = (undefined7)*(undefined8 *)(uStack_2d0 + 1);
        cStack_228 = (char)((ulong)*(undefined8 *)(uStack_2d0 + 1) >> 0x38);
        lStack_298 = *(long *)(uStack_2d0 + 0x18);
        plStack_2a0 = *(long **)(uStack_2d0 + 0x10);
        uStack_208 = *(undefined8 *)(uStack_2d0 + 0x28);
        uStack_210 = *(undefined8 *)(uStack_2d0 + 0x20);
        uStack_220 = SUB81(plStack_2a0,0);
        uStack_21f = (undefined7)((ulong)plStack_2a0 >> 8);
        lStack_1f8 = *(long *)(uStack_2d0 + 0x38);
        uStack_200 = *(undefined8 *)(uStack_2d0 + 0x30);
        cStack_230 = cVar3;
        lStack_218 = lStack_298;
        if (lVar14 != 1) {
          pcStack_2c8 = uStack_2d0 + 0x80;
          plStack_268 = *(long **)(uStack_2d0 + 0x48);
          uStack_270 = *(undefined8 *)pcVar13;
          lStack_258 = *(long *)(uStack_2d0 + 0x58);
          plStack_260 = *(long **)(uStack_2d0 + 0x50);
          lStack_238 = *(long *)(uStack_2d0 + 0x78);
          uStack_248 = (undefined1)*(undefined8 *)(uStack_2d0 + 0x68);
          uStack_247 = (undefined7)((ulong)*(undefined8 *)(uStack_2d0 + 0x68) >> 8);
          uStack_250 = (undefined1)*(undefined8 *)(uStack_2d0 + 0x60);
          uStack_24f = (undefined7)((ulong)*(undefined8 *)(uStack_2d0 + 0x60) >> 8);
          uStack_240 = (undefined1)*(undefined8 *)(uStack_2d0 + 0x70);
          uStack_23f = (undefined7)((ulong)*(undefined8 *)(uStack_2d0 + 0x70) >> 8);
          if ((byte)uStack_270 != '\x16') {
            FUN_100e077ec(&uStack_270);
            FUN_100e077ec(&uStack_250);
            uStack_270 = CONCAT71(uStack_270._1_7_,0xb);
            uVar9 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (&uStack_270,&UNK_10b20a580,&UNK_10b20a590);
            *(undefined8 *)(puVar10 + 8) = uVar9;
            *puVar10 = 1;
            FUN_100e077ec(&uStack_210);
            FUN_100e077ec(&cStack_230);
            goto LAB_10133aaf4;
          }
        }
        plStack_2a8 = (long *)CONCAT71(uStack_227,cStack_228);
        uStack_2b0 = CONCAT71(uStack_22f,cVar3);
        uVar16 = (char)uStack_210;
        uStack_290 = *(undefined8 *)(uStack_2d0 + 0x21);
        uStack_288 = (undefined7)*(undefined8 *)(uStack_2d0 + 0x29);
        lStack_279 = *(long *)(uStack_2d0 + 0x38);
        uStack_281 = (undefined1)*(undefined8 *)(uStack_2d0 + 0x30);
        uStack_280 = (undefined7)((ulong)*(undefined8 *)(uStack_2d0 + 0x30) >> 8);
        bVar18 = 1;
        FUN_100d34830(&uStack_2d0);
        goto LAB_10133a848;
      }
    }
    uStack_270 = CONCAT71(uStack_270._1_7_,0xb);
    uVar9 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                      (&uStack_270,&UNK_10b20a580,&UNK_10b20a590);
    *(undefined8 *)(puVar10 + 8) = uVar9;
    *puVar10 = 1;
LAB_10133aaf4:
    FUN_100d34830(&uStack_2d0);
    return;
  }
  bVar18 = 0;
  plStack_2a8 = *(long **)(pcVar11 + 8);
  uStack_2b0 = *(undefined8 *)pcVar11;
  lStack_298 = *(long *)(pcVar11 + 0x18);
  plStack_2a0 = *(long **)(pcVar11 + 0x10);
  uVar16 = 0x16;
LAB_10133a848:
  plVar7 = plStack_2a0;
  plVar6 = plStack_2a8;
  plStack_268 = plStack_2a8;
  uStack_270 = uStack_2b0;
  uVar9 = uStack_270;
  lStack_258 = lStack_298;
  plStack_260 = plStack_2a0;
  uStack_247 = uStack_288;
  uStack_24f = (undefined7)uStack_290;
  uStack_248 = (undefined1)((ulong)uStack_290 >> 0x38);
  lStack_238 = lStack_279;
  uStack_240 = uStack_281;
  uStack_23f = uStack_280;
  uStack_208 = CONCAT71(uStack_288,uStack_248);
  uStack_210 = CONCAT71(uStack_24f,uVar16);
  uStack_200 = CONCAT71(uStack_280,uStack_281);
  lStack_1f8 = lStack_279;
  uStack_270._0_1_ = (byte)uStack_2b0;
  uStack_270 = uVar9;
  uStack_250 = uVar16;
  if ((byte)uStack_270 < 0xd) {
    if ((byte)uStack_270 == 1) {
      uStack_270._1_1_ = (char)((ulong)uStack_2b0 >> 8);
      if (uStack_270._1_1_ != '\0') {
        if (uStack_270._1_1_ != '\x01') {
          cStack_228 = uStack_270._1_1_;
          uStack_227 = 0;
          cStack_230 = '\x01';
          pcStack_2c8 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&cStack_230,&UNK_10b2242c0,&UNK_10b20a590);
          goto LAB_10133a9d8;
        }
LAB_10133aa94:
        uStack_2d0 = (char *)CONCAT62(uStack_2d0._2_6_,0x100);
        goto LAB_10133abe0;
      }
LAB_10133abd8:
      uVar16 = 0;
      uStack_2d0 = (char *)((ulong)uStack_2d0._2_6_ << 0x10);
LAB_10133abdc:
      uStack_2d0 = (char *)CONCAT71(uStack_2d0._1_7_,uVar16);
      goto LAB_10133abe0;
    }
    if ((byte)uStack_270 == 4) {
      if (plStack_2a8 != (long *)0x0) {
        if (plStack_2a8 == (long *)0x1) goto LAB_10133aa94;
        cStack_228 = (char)plStack_2a8;
        uStack_227 = (undefined7)((ulong)plStack_2a8 >> 8);
        cStack_230 = '\x01';
        pcStack_2c8 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&cStack_230,&UNK_10b2242c0,&UNK_10b20a590);
        goto LAB_10133a9d8;
      }
      goto LAB_10133abd8;
    }
    if ((byte)uStack_270 == 0xc) {
      if (lStack_298 == 5) {
        if ((int)*plStack_2a0 != 0x6c656873 || *(char *)((long)plStack_2a0 + 4) != 'l')
        goto LAB_10133a8c0;
        uStack_2d0 = (char *)((ulong)uStack_2d0._2_6_ << 0x10);
      }
      else if ((lStack_298 == 0xc) &&
              (*plStack_2a0 == 0x5f64656966696e75 && (int)plStack_2a0[1] == 0x63657865)) {
        uStack_2d0 = (char *)CONCAT62(uStack_2d0._2_6_,0x100);
      }
      else {
LAB_10133a8c0:
        pcStack_2c8 = (char *)FUN_1087e4494(plStack_2a0,lStack_298,&UNK_10b223078,2);
        uStack_2d0 = (char *)CONCAT71(uStack_2d0._1_7_,1);
      }
joined_r0x00010133aa58:
      if (plVar6 == (long *)0x0) goto LAB_10133abe8;
      _free(plVar7);
      pcVar13 = uStack_2d0;
      lVar14 = lStack_218;
      lStack_218 = lStack_1f8;
      goto joined_r0x00010133ab24;
    }
LAB_10133ac8c:
    pcStack_2c8 = (char *)FUN_108855b04(&uStack_270,&uStack_1e1,&UNK_10b210440);
    uStack_2d0 = (char *)CONCAT71(uStack_2d0._1_7_,1);
    lVar14 = lStack_218;
LAB_10133abf4:
    lStack_218 = lVar14;
    pcVar13 = pcStack_2c8;
    if ((char)uStack_210 != '\x16') {
      FUN_100e077ec(&uStack_210);
    }
  }
  else {
    if ((byte)uStack_270 == 0xd) {
      if (plStack_2a0 == (long *)0x5) {
        if ((int)*plStack_2a8 == 0x6c656873 && *(char *)((long)plStack_2a8 + 4) == 'l')
        goto LAB_10133abd8;
      }
      else if ((plStack_2a0 == (long *)0xc) &&
              (*plStack_2a8 == 0x5f64656966696e75 && (int)plStack_2a8[1] == 0x63657865))
      goto LAB_10133aa94;
      pcStack_2c8 = (char *)FUN_1087e4494(plStack_2a8,plStack_2a0,&UNK_10b223078,2);
LAB_10133a9d8:
      uVar16 = 1;
      goto LAB_10133abdc;
    }
    if ((byte)uStack_270 == 0xe) {
      FUN_100b32bc4(&uStack_2d0,plStack_2a0,lStack_298);
      goto joined_r0x00010133aa58;
    }
    if ((byte)uStack_270 != 0xf) goto LAB_10133ac8c;
    FUN_100b32bc4(&uStack_2d0,plStack_2a8,plStack_2a0);
LAB_10133abe0:
    FUN_100e077ec(&uStack_270);
LAB_10133abe8:
    pcVar13 = uStack_2d0;
    lVar14 = lStack_218;
    lStack_218 = lStack_1f8;
joined_r0x00010133ab24:
    bVar5 = (char)uStack_2d0 == '\x01';
    uStack_2d0 = pcVar13;
    lStack_1f8 = lStack_218;
    if (bVar5) goto LAB_10133abf4;
    uStack_2d0._1_1_ = (char)((ulong)pcVar13 >> 8);
    uStack_220 = (undefined1)uStack_200;
    uStack_21f = (undefined7)((ulong)uStack_200 >> 8);
    cStack_228 = (char)uStack_208;
    uStack_227 = (undefined7)((ulong)uStack_208 >> 8);
    cStack_230 = (char)uStack_210;
    uStack_22f = (undefined7)((ulong)uStack_210 >> 8);
    uVar2 = (uint)uStack_210 & 0xff;
    if (uStack_2d0._1_1_ != '\x01') {
      if (uVar2 == 0x16) {
        uVar16 = 0;
      }
      else {
        if ((uVar2 != 0x12) && ((uVar2 != 0x15 || (lStack_218 != 0)))) {
          pcVar13 = (char *)FUN_108855b04(&cStack_230,&uStack_1e1,&UNK_10b20a5c0);
          goto LAB_10133ac0c;
        }
        uVar16 = 0;
LAB_10133abac:
        FUN_100e077ec(&cStack_230);
      }
LAB_10133abb4:
      puVar10[1] = uVar16;
      *puVar10 = 0;
      bVar5 = (bool)(bVar18 ^ 1);
      if (cVar4 == '\x15') {
        bVar5 = true;
      }
      if (bVar5) {
        return;
      }
      goto LAB_10133ac28;
    }
    if (uVar2 == 0x16) {
      uVar16 = 1;
      goto LAB_10133abb4;
    }
    if ((uVar2 == 0x12) || ((uVar2 == 0x15 && (lStack_218 == 0)))) {
      uVar16 = 1;
      goto LAB_10133abac;
    }
    pcVar13 = (char *)FUN_108855b04(&cStack_230,&uStack_1e1,&UNK_10b20a5c0);
  }
LAB_10133ac0c:
  *(char **)(puVar10 + 8) = pcVar13;
  *puVar10 = 1;
  bVar5 = (bool)(bVar18 ^ 1);
  if (cVar4 == '\x15') {
    bVar5 = true;
  }
  if (bVar5) {
    return;
  }
LAB_10133ac28:
  FUN_100e077ec(pcVar11);
  return;
}

