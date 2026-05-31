
void FUN_100eaad84(undefined8 *param_1,char *param_2)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined **ppuStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  if (*param_2 != '\x14') {
    if (*param_2 == '\x15') {
      lStack_1f8 = *(long *)(param_2 + 0x10);
      lStack_1f0 = lStack_1f8 + *(long *)(param_2 + 0x18) * 0x40;
      lStack_1e8 = 0;
      ppuStack_1e0 = (undefined **)0x0;
      ppuStack_1d8 = (undefined **)0x2;
      do {
        while( true ) {
          FUN_100f23138(&uStack_d0,&lStack_1f8);
          lVar7 = lStack_1e8;
          puVar5 = puStack_c8;
          if ((char)uStack_d0 == '\x01') goto joined_r0x000100eab254;
          if (1 < uStack_d0._1_1_) break;
          if (uStack_d0._1_1_ != 1) {
            lStack_1e8 = 0;
            if (lVar7 != 0) {
              puVar5 = (undefined *)FUN_1012bb268();
              if (puVar5 != (undefined *)0x0) goto joined_r0x000100eab254;
              goto LAB_100eaafdc;
            }
            goto LAB_100eaaeac;
          }
          if (ppuStack_1d8 != (undefined **)0x2) goto LAB_100eab388;
          lStack_1e8 = 0;
          if (lVar7 == 0) goto LAB_100eaaeac;
          FUN_10121cf60(&uStack_d0);
          puVar5 = puStack_c8;
          ppuVar1 = uStack_d0;
          if (uStack_d0 == (undefined **)0x2) goto joined_r0x000100eab254;
          puStack_108 = puStack_78;
          puStack_110 = puStack_80;
          uStack_f8 = uStack_68;
          lStack_100 = lStack_70;
          uStack_e8 = uStack_58;
          uStack_f0 = uStack_60;
          uStack_e0 = uStack_50;
          puStack_148 = puStack_b8;
          puStack_150 = puStack_c0;
          uStack_138 = uStack_a8;
          lStack_140 = lStack_b0;
          uStack_128 = uStack_98;
          uStack_130 = uStack_a0;
          puStack_118 = puStack_88;
          ppuStack_120 = ppuStack_90;
          if (ppuStack_1d8 != (undefined **)0x2) {
            FUN_100c98688(&ppuStack_1d8);
          }
          ppuStack_1d8 = ppuVar1;
          puStack_1d0 = puVar5;
          puStack_180 = puStack_108;
          puStack_188 = puStack_110;
          uStack_170 = uStack_f8;
          lStack_178 = lStack_100;
          uStack_160 = uStack_e8;
          uStack_168 = uStack_f0;
          uStack_158 = uStack_e0;
          puStack_1c0 = puStack_148;
          puStack_1c8 = puStack_150;
          uStack_1b0 = uStack_138;
          lStack_1b8 = lStack_140;
          uStack_1a0 = uStack_128;
          uStack_1a8 = uStack_130;
          puStack_190 = puStack_118;
          ppuStack_198 = ppuStack_120;
        }
        if (uStack_d0._1_1_ != 2) {
          puStack_150 = &UNK_108cb495d;
          puStack_148 = (undefined *)0x6;
          uStack_d0 = &puStack_150;
          puStack_c8 = &DAT_100c7b3a0;
          puVar5 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
          goto joined_r0x000100eab254;
        }
        lStack_1e8 = 0;
      } while (lVar7 != 0);
      goto LAB_100eaaeac;
    }
    puStack_c8 = (undefined *)FUN_108855c40(param_2,&uStack_41,&UNK_10b213c08);
    goto LAB_100eab0a8;
  }
  lVar7 = *(long *)(param_2 + 0x18);
  if (lVar7 == 0) {
    uVar4 = 0;
LAB_100eab288:
    puVar5 = (undefined *)FUN_1087e422c(uVar4,&UNK_10b22e8f8,&UNK_10b20a590);
    goto LAB_100eab09c;
  }
  lVar6 = *(long *)(param_2 + 0x10);
  puVar5 = (undefined *)FUN_1012bb268(lVar6);
  if (puVar5 != (undefined *)0x0) goto LAB_100eab09c;
  if (lVar7 == 1) {
    uVar4 = 1;
    goto LAB_100eab288;
  }
  FUN_10121cf60(&uStack_d0,lVar6 + 0x20);
  if (uStack_d0 != (undefined **)0x2) {
    puStack_278 = puStack_78;
    puStack_280 = puStack_80;
    uStack_268 = uStack_68;
    lStack_270 = lStack_70;
    uStack_258 = uStack_58;
    uStack_260 = uStack_60;
    uStack_250 = uStack_50;
    puStack_2b8 = puStack_b8;
    puStack_2c0 = puStack_c0;
    uStack_2a8 = uStack_a8;
    lStack_2b0 = lStack_b0;
    uStack_298 = uStack_98;
    uStack_2a0 = uStack_a0;
    puStack_288 = puStack_88;
    ppuStack_290 = ppuStack_90;
    if (lVar7 != 2) {
      ppuStack_1d8 = (undefined **)0x2;
      puVar5 = (undefined *)
               FUN_1087e422c((lVar7 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,&ppuStack_1d8,
                             &UNK_10b23a1b0);
LAB_100eaaf88:
      pppuVar3 = (undefined ***)&uStack_d0;
      goto LAB_100eab098;
    }
  }
  goto LAB_100eab0a0;
  while( true ) {
    if (uStack_d0._1_1_ != 2) {
      if (ppuStack_1d8 == (undefined **)0x2) {
        puStack_150 = &UNK_108cb9606;
        puStack_148 = (undefined *)0x6;
        uStack_d0 = &puStack_150;
        puStack_c8 = &DAT_100c7b3a0;
        puVar5 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
        goto joined_r0x000100eab254;
      }
      puStack_278 = puStack_180;
      puStack_280 = puStack_188;
      uStack_268 = uStack_170;
      lStack_270 = lStack_178;
      uStack_258 = uStack_160;
      uStack_260 = uStack_168;
      uStack_250 = uStack_158;
      puStack_2b8 = puStack_1c0;
      puStack_2c0 = puStack_1c8;
      uStack_2a8 = uStack_1b0;
      lStack_2b0 = lStack_1b8;
      uStack_298 = uStack_1a0;
      uStack_2a0 = uStack_1a8;
      puStack_288 = puStack_190;
      ppuStack_290 = ppuStack_198;
      uStack_d0 = ppuStack_1d8;
      puStack_c8 = puStack_1d0;
      uStack_98 = uStack_1a0;
      uStack_a0 = uStack_1a8;
      puStack_88 = puStack_190;
      ppuStack_90 = ppuStack_198;
      puStack_b8 = puStack_1c0;
      puStack_c0 = puStack_1c8;
      uStack_a8 = uStack_1b0;
      lStack_b0 = lStack_1b8;
      uStack_50 = uStack_158;
      uStack_68 = uStack_170;
      lStack_70 = lStack_178;
      uStack_58 = uStack_160;
      uStack_60 = uStack_168;
      puStack_78 = puStack_180;
      puStack_80 = puStack_188;
      if (lStack_1f0 - lStack_1f8 == 0) goto LAB_100eab0a0;
      ppuStack_1d8 = ppuStack_1e0;
      puVar5 = (undefined *)
               FUN_1087e422c((long)ppuStack_1e0 + ((ulong)(lStack_1f0 - lStack_1f8) >> 6),
                             &ppuStack_1d8,&UNK_10b23a190);
      goto LAB_100eaaf88;
    }
    lStack_1e8 = 0;
    if (lVar7 == 0) break;
LAB_100eaafdc:
    FUN_100f23138(&uStack_d0,&lStack_1f8);
    lVar7 = lStack_1e8;
    puVar5 = puStack_c8;
    if (((ulong)uStack_d0 & 1) != 0) goto joined_r0x000100eab254;
    if (uStack_d0._1_1_ < 2) {
      if (uStack_d0._1_1_ != 1) {
        puStack_150 = &UNK_108cb495d;
        puStack_148 = (undefined *)0x6;
        uStack_d0 = &puStack_150;
        puStack_c8 = &DAT_100c7b3a0;
        puVar5 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
        goto joined_r0x000100eab254;
      }
      if (ppuStack_1d8 != (undefined **)0x2) goto LAB_100eab388;
      lStack_1e8 = 0;
      if (lVar7 == 0) break;
      FUN_10121cf60(&uStack_d0);
      puVar5 = puStack_c8;
      ppuVar1 = uStack_d0;
      if (uStack_d0 == (undefined **)0x2) goto joined_r0x000100eab254;
      puStack_108 = puStack_78;
      puStack_110 = puStack_80;
      uStack_f8 = uStack_68;
      lStack_100 = lStack_70;
      uStack_e8 = uStack_58;
      uStack_f0 = uStack_60;
      uStack_e0 = uStack_50;
      puStack_148 = puStack_b8;
      puStack_150 = puStack_c0;
      uStack_138 = uStack_a8;
      lStack_140 = lStack_b0;
      uStack_128 = uStack_98;
      uStack_130 = uStack_a0;
      puStack_118 = puStack_88;
      ppuStack_120 = ppuStack_90;
      if (ppuStack_1d8 != (undefined **)0x2) {
        FUN_100c98688(&ppuStack_1d8);
      }
      ppuStack_1d8 = ppuVar1;
      puStack_1d0 = puVar5;
      puStack_180 = puStack_108;
      puStack_188 = puStack_110;
      uStack_170 = uStack_f8;
      lStack_178 = lStack_100;
      uStack_160 = uStack_e8;
      uStack_168 = uStack_f0;
      uStack_158 = uStack_e0;
      puStack_1c0 = puStack_148;
      puStack_1c8 = puStack_150;
      uStack_1b0 = uStack_138;
      lStack_1b8 = lStack_140;
      uStack_1a0 = uStack_128;
      uStack_1a8 = uStack_130;
      puStack_190 = puStack_118;
      ppuStack_198 = ppuStack_120;
      goto LAB_100eaafdc;
    }
  }
LAB_100eaaeac:
  lStack_1e8 = 0;
  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100eaaec8);
  (*pcVar2)();
LAB_100eab388:
  puStack_150 = &UNK_108cb9606;
  puStack_148 = (undefined *)0x6;
  uStack_d0 = &puStack_150;
  puStack_c8 = &DAT_100c7b3a0;
  puVar5 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
joined_r0x000100eab254:
  if (ppuStack_1d8 != (undefined **)0x2) {
    pppuVar3 = &ppuStack_1d8;
LAB_100eab098:
    FUN_100c98688(pppuVar3);
  }
LAB_100eab09c:
  uStack_d0 = (undefined **)0x2;
  puStack_c8 = puVar5;
LAB_100eab0a0:
  puVar5 = puStack_288;
  if (uStack_d0 == (undefined **)0x2) {
LAB_100eab0a8:
    *param_1 = 2;
    param_1[1] = puStack_c8;
    return;
  }
  puStack_78 = puStack_278;
  puStack_80 = puStack_280;
  uStack_68 = uStack_268;
  lStack_70 = lStack_270;
  uStack_58 = uStack_258;
  uStack_60 = uStack_260;
  uStack_50 = uStack_250;
  puStack_b8 = puStack_2b8;
  puStack_c0 = puStack_2c0;
  uStack_a8 = uStack_2a8;
  lStack_b0 = lStack_2b0;
  uStack_98 = uStack_298;
  uStack_a0 = uStack_2a0;
  puStack_88 = puStack_288;
  ppuStack_90 = ppuStack_290;
  if (ppuStack_290 == (undefined **)0x8000000000000000) {
    lStack_1b8 = 0;
    puStack_1c0 = &UNK_108c56c70;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    ppuStack_1d8 = (undefined **)0x0;
    puStack_1d0 = (undefined *)0x8;
    puStack_1c8 = (undefined *)0x0;
    FUN_1011a27dc(&ppuStack_1d8,puStack_288);
    puStack_2c0 = (undefined *)0x0;
    puStack_148 = puStack_1c0;
    puStack_150 = puStack_1c8;
    uStack_138 = uStack_1b0;
    lStack_140 = lStack_1b8;
    uStack_130 = uStack_1a8;
    uStack_200 = *(undefined8 *)(puVar5 + 0x40);
    uStack_208 = *(undefined8 *)(puVar5 + 0x38);
    ppuStack_240 = ppuStack_1d8;
    puStack_238 = puStack_1d0;
    if (ppuStack_1d8 == (undefined **)0x8000000000000000) goto LAB_100eab1ec;
  }
  else {
    if (ppuStack_290 == (undefined **)0x8000000000000001) {
      puStack_2c0 = (undefined *)0x0;
      goto LAB_100eab1ec;
    }
    puStack_148 = puStack_278;
    puStack_150 = puStack_280;
    uStack_138 = uStack_268;
    lStack_140 = lStack_270;
    uStack_130 = uStack_260;
    ppuStack_240 = ppuStack_290;
    puStack_238 = puStack_288;
    uStack_208 = uStack_258;
    uStack_200 = uStack_250;
  }
  puStack_2c0 = (undefined *)0x0;
  puStack_228 = puStack_148;
  puStack_230 = puStack_150;
  uStack_218 = uStack_138;
  lStack_220 = lStack_140;
  uStack_210 = uStack_130;
  FUN_100ecd2fc(&ppuStack_1d8,&puStack_2c0,&ppuStack_240);
  if (ppuStack_1d8 != (undefined **)0x8000000000000000) {
    if ((lStack_1b8 != 0) && (lStack_1b8 * 9 != -0x11)) {
      _free(puStack_1c0 + lStack_1b8 * -8 + -8);
    }
    func_0x000100cd7284(&ppuStack_1d8);
  }
LAB_100eab1ec:
  param_1[1] = puStack_c8;
  *param_1 = uStack_d0;
  param_1[3] = puStack_b8;
  param_1[2] = puStack_c0;
  param_1[5] = uStack_a8;
  param_1[4] = lStack_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[8] = puStack_2c0;
  return;
}

