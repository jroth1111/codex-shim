
void FUN_100eab49c(undefined8 *param_1,char *param_2)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined **ppuStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  if (*param_2 != '\x14') {
    if (*param_2 == '\x15') {
      lStack_1c0 = *(long *)(param_2 + 0x10);
      lStack_1b8 = lStack_1c0 + *(long *)(param_2 + 0x18) * 0x40;
      lStack_1b0 = 0;
      ppuStack_1a8 = (undefined **)0x0;
      ppuStack_1a0 = (undefined **)0x8000000000000001;
      do {
        while( true ) {
          FUN_100f23138(&uStack_c8,&lStack_1c0);
          lVar7 = lStack_1b0;
          puVar5 = puStack_c0;
          if ((char)uStack_c8 == '\x01') goto joined_r0x000100eab918;
          if (1 < uStack_c8._1_1_) break;
          if (uStack_c8._1_1_ != 1) {
            lStack_1b0 = 0;
            if (lVar7 != 0) {
              puVar5 = (undefined *)FUN_101312c54();
              if (puVar5 != (undefined *)0x0) goto joined_r0x000100eab918;
              goto LAB_100eab6ac;
            }
            goto LAB_100eab5ac;
          }
          if (ppuStack_1a0 != (undefined **)0x8000000000000001) goto LAB_100eaba28;
          lStack_1b0 = 0;
          if (lVar7 == 0) goto LAB_100eab5ac;
          FUN_10126a9d4(&uStack_c8);
          puVar5 = puStack_c0;
          ppuVar1 = uStack_c8;
          if (uStack_c8 == (undefined **)0x8000000000000001) goto joined_r0x000100eab918;
          puStack_108 = puStack_90;
          puStack_110 = puStack_98;
          lStack_f8 = lStack_80;
          puStack_100 = puStack_88;
          puStack_e8 = puStack_70;
          ppuStack_f0 = ppuStack_78;
          uStack_d8 = uStack_60;
          uStack_e0 = uStack_68;
          puStack_128 = puStack_b0;
          puStack_130 = puStack_b8;
          ppuStack_118 = ppuStack_a0;
          lStack_120 = lStack_a8;
          if (ppuStack_1a0 != (undefined **)0x8000000000000001) {
            FUN_100c9f0ac(&ppuStack_1a0);
          }
          ppuStack_1a0 = ppuVar1;
          puStack_198 = puVar5;
          puStack_168 = puStack_108;
          puStack_170 = puStack_110;
          lStack_158 = lStack_f8;
          puStack_160 = puStack_100;
          puStack_148 = puStack_e8;
          ppuStack_150 = ppuStack_f0;
          uStack_138 = uStack_d8;
          uStack_140 = uStack_e0;
          puStack_188 = puStack_128;
          puStack_190 = puStack_130;
          ppuStack_178 = ppuStack_118;
          lStack_180 = lStack_120;
        }
        if (uStack_c8._1_1_ != 2) {
          puStack_130 = &UNK_108cb495d;
          puStack_128 = (undefined *)0x6;
          uStack_c8 = &puStack_130;
          puStack_c0 = &DAT_100c7b3a0;
          puVar5 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_c8);
          goto joined_r0x000100eab918;
        }
        lStack_1b0 = 0;
      } while (lVar7 != 0);
      goto LAB_100eab5ac;
    }
    puStack_c0 = (undefined *)FUN_108855c40(param_2,&uStack_51,&UNK_10b213bc8);
    goto LAB_100eab770;
  }
  lVar7 = *(long *)(param_2 + 0x18);
  if (lVar7 == 0) {
    uVar4 = 0;
LAB_100eab94c:
    puVar5 = (undefined *)FUN_1087e422c(uVar4,&UNK_10b22e8f8,&UNK_10b20a590);
LAB_100eab760:
    uStack_c8 = (undefined **)0x8000000000000001;
    puStack_c0 = puVar5;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x10);
    puVar5 = (undefined *)FUN_101312c54(lVar6);
    if (puVar5 != (undefined *)0x0) goto LAB_100eab760;
    if (lVar7 == 1) {
      uVar4 = 1;
      goto LAB_100eab94c;
    }
    FUN_10126a9d4(&uStack_c8,lVar6 + 0x20);
    puVar5 = puStack_c0;
    if (uStack_c8 == (undefined **)0x8000000000000001) goto LAB_100eab760;
    puStack_248 = puStack_90;
    puStack_250 = puStack_98;
    lStack_238 = lStack_80;
    puStack_240 = puStack_88;
    puStack_228 = puStack_70;
    ppuStack_230 = ppuStack_78;
    uStack_218 = uStack_60;
    uStack_220 = uStack_68;
    puStack_268 = puStack_b0;
    puStack_270 = puStack_b8;
    ppuStack_258 = ppuStack_a0;
    lStack_260 = lStack_a8;
    if (lVar7 != 2) {
      ppuStack_1a0 = (undefined **)0x2;
      puVar5 = (undefined *)
               FUN_1087e422c((lVar7 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,&ppuStack_1a0,
                             &UNK_10b23a1b0);
LAB_100eab664:
      pppuVar3 = (undefined ***)&uStack_c8;
      goto LAB_100eab75c;
    }
  }
LAB_100eab764:
  puVar5 = puStack_250;
  if (uStack_c8 == (undefined **)0x8000000000000001) {
LAB_100eab770:
    *param_1 = 0x8000000000000001;
    param_1[1] = puStack_c0;
    return;
  }
  puStack_90 = puStack_248;
  puStack_98 = puStack_250;
  lStack_80 = lStack_238;
  puStack_88 = puStack_240;
  puStack_70 = puStack_228;
  ppuStack_78 = ppuStack_230;
  uStack_60 = uStack_218;
  uStack_68 = uStack_220;
  puStack_b0 = puStack_268;
  puStack_b8 = puStack_270;
  ppuStack_a0 = ppuStack_258;
  lStack_a8 = lStack_260;
  if (ppuStack_258 == (undefined **)0x8000000000000000) {
    lStack_180 = 0;
    puStack_188 = &UNK_108c56c70;
    puStack_170 = (undefined *)0x0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_1a0 = (undefined **)0x0;
    puStack_198 = (undefined *)0x8;
    puStack_190 = (undefined *)0x0;
    FUN_1011a27dc(&ppuStack_1a0,puStack_250);
    puStack_270 = (undefined *)0x0;
    puStack_128 = puStack_188;
    puStack_130 = puStack_190;
    ppuStack_118 = ppuStack_178;
    lStack_120 = lStack_180;
    puStack_110 = puStack_170;
    uStack_1c8 = *(undefined8 *)(puVar5 + 0x40);
    uStack_1d0 = *(undefined8 *)(puVar5 + 0x38);
    ppuStack_208 = ppuStack_1a0;
    puStack_200 = puStack_198;
    if (ppuStack_1a0 == (undefined **)0x8000000000000000) goto LAB_100eab8ac;
  }
  else {
    if (ppuStack_258 == (undefined **)0x8000000000000001) {
      puStack_270 = (undefined *)0x0;
      goto LAB_100eab8ac;
    }
    puStack_128 = puStack_240;
    puStack_130 = puStack_248;
    ppuStack_118 = ppuStack_230;
    lStack_120 = lStack_238;
    puStack_110 = puStack_228;
    ppuStack_208 = ppuStack_258;
    puStack_200 = puStack_250;
    uStack_1d0 = uStack_220;
    uStack_1c8 = uStack_218;
  }
  puStack_270 = (undefined *)0x0;
  puStack_1f0 = puStack_128;
  puStack_1f8 = puStack_130;
  ppuStack_1e0 = ppuStack_118;
  lStack_1e8 = lStack_120;
  puStack_1d8 = puStack_110;
  FUN_100ecd2fc(&ppuStack_1a0,&puStack_270,&ppuStack_208);
  if (ppuStack_1a0 != (undefined **)0x8000000000000000) {
    if ((lStack_180 != 0) && (lStack_180 * 9 != -0x11)) {
      _free(puStack_188 + lStack_180 * -8 + -8);
    }
    func_0x000100cd7284(&ppuStack_1a0);
  }
LAB_100eab8ac:
  param_1[1] = puStack_c0;
  *param_1 = uStack_c8;
  param_1[3] = puStack_b0;
  param_1[2] = puStack_b8;
  param_1[4] = lStack_a8;
  param_1[5] = puStack_270;
  return;
LAB_100eaba28:
  puStack_130 = &UNK_108cb9606;
  puStack_128 = (undefined *)0x6;
  uStack_c8 = &puStack_130;
  puStack_c0 = &DAT_100c7b3a0;
  puVar5 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c8);
joined_r0x000100eab918:
  if (ppuStack_1a0 != (undefined **)0x8000000000000001) {
    pppuVar3 = &ppuStack_1a0;
LAB_100eab75c:
    FUN_100c9f0ac(pppuVar3);
  }
  goto LAB_100eab760;
  while( true ) {
    if (uStack_c8._1_1_ != 2) {
      if (ppuStack_1a0 == (undefined **)0x8000000000000001) {
        puStack_130 = &UNK_108cb9606;
        puStack_128 = (undefined *)0x6;
        uStack_c8 = &puStack_130;
        puStack_c0 = &DAT_100c7b3a0;
        puVar5 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_c8);
        goto joined_r0x000100eab918;
      }
      puStack_248 = puStack_168;
      puStack_250 = puStack_170;
      lStack_238 = lStack_158;
      puStack_240 = puStack_160;
      puStack_228 = puStack_148;
      ppuStack_230 = ppuStack_150;
      uStack_218 = uStack_138;
      uStack_220 = uStack_140;
      puStack_268 = puStack_188;
      puStack_270 = puStack_190;
      ppuStack_258 = ppuStack_178;
      lStack_260 = lStack_180;
      uStack_c8 = ppuStack_1a0;
      puStack_c0 = puStack_198;
      puStack_b0 = puStack_188;
      puStack_b8 = puStack_190;
      ppuStack_a0 = ppuStack_178;
      lStack_a8 = lStack_180;
      puStack_90 = puStack_168;
      puStack_98 = puStack_170;
      lStack_80 = lStack_158;
      puStack_88 = puStack_160;
      puStack_70 = puStack_148;
      ppuStack_78 = ppuStack_150;
      uStack_60 = uStack_138;
      uStack_68 = uStack_140;
      if (lStack_1b8 - lStack_1c0 == 0) goto LAB_100eab764;
      ppuStack_1a0 = ppuStack_1a8;
      puVar5 = (undefined *)
               FUN_1087e422c((long)ppuStack_1a8 + ((ulong)(lStack_1b8 - lStack_1c0) >> 6),
                             &ppuStack_1a0,&UNK_10b23a190);
      goto LAB_100eab664;
    }
    lStack_1b0 = 0;
    if (lVar7 == 0) break;
LAB_100eab6ac:
    FUN_100f23138(&uStack_c8,&lStack_1c0);
    lVar7 = lStack_1b0;
    puVar5 = puStack_c0;
    if (((ulong)uStack_c8 & 1) != 0) goto joined_r0x000100eab918;
    if (uStack_c8._1_1_ < 2) {
      if (uStack_c8._1_1_ != 1) {
        puStack_130 = &UNK_108cb495d;
        puStack_128 = (undefined *)0x6;
        uStack_c8 = &puStack_130;
        puStack_c0 = &DAT_100c7b3a0;
        puVar5 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c8);
        goto joined_r0x000100eab918;
      }
      if (ppuStack_1a0 != (undefined **)0x8000000000000001) goto LAB_100eaba28;
      lStack_1b0 = 0;
      if (lVar7 == 0) break;
      FUN_10126a9d4(&uStack_c8);
      puVar5 = puStack_c0;
      ppuVar1 = uStack_c8;
      if (uStack_c8 == (undefined **)0x8000000000000001) goto joined_r0x000100eab918;
      puStack_108 = puStack_90;
      puStack_110 = puStack_98;
      lStack_f8 = lStack_80;
      puStack_100 = puStack_88;
      puStack_e8 = puStack_70;
      ppuStack_f0 = ppuStack_78;
      uStack_d8 = uStack_60;
      uStack_e0 = uStack_68;
      puStack_128 = puStack_b0;
      puStack_130 = puStack_b8;
      ppuStack_118 = ppuStack_a0;
      lStack_120 = lStack_a8;
      if (ppuStack_1a0 != (undefined **)0x8000000000000001) {
        FUN_100c9f0ac(&ppuStack_1a0);
      }
      ppuStack_1a0 = ppuVar1;
      puStack_198 = puVar5;
      puStack_168 = puStack_108;
      puStack_170 = puStack_110;
      lStack_158 = lStack_f8;
      puStack_160 = puStack_100;
      puStack_148 = puStack_e8;
      ppuStack_150 = ppuStack_f0;
      uStack_138 = uStack_d8;
      uStack_140 = uStack_e0;
      puStack_188 = puStack_128;
      puStack_190 = puStack_130;
      ppuStack_178 = ppuStack_118;
      lStack_180 = lStack_120;
      goto LAB_100eab6ac;
    }
  }
LAB_100eab5ac:
  lStack_1b0 = 0;
  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100eab5c8);
  (*pcVar2)();
}

