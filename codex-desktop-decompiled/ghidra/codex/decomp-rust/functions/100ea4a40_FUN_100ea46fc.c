
/* WARNING: Removing unreachable block (ram,0x000100ea4a84) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100ea46fc(undefined8 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  char *pcVar6;
  ulong extraout_x9;
  ulong uVar7;
  undefined **unaff_x20;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuStack_3d0;
  undefined *puStack_3c8;
  undefined **ppuStack_3c0;
  undefined *puStack_3b8;
  undefined **ppuStack_3b0;
  undefined *puStack_3a8;
  undefined **ppuStack_3a0;
  undefined *puStack_398;
  undefined **ppuStack_390;
  undefined *puStack_388;
  undefined **ppuStack_380;
  undefined *puStack_378;
  undefined **ppuStack_370;
  undefined *puStack_368;
  undefined **ppuStack_360;
  undefined *puStack_358;
  undefined **ppuStack_350;
  undefined *puStack_348;
  undefined **ppuStack_340;
  undefined *puStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined *puStack_320;
  undefined **ppuStack_318;
  undefined *puStack_310;
  undefined **ppuStack_308;
  undefined *puStack_300;
  undefined **ppuStack_2f8;
  undefined *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined *puStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined **ppuStack_2c0;
  long lStack_2b0;
  long lStack_2a8;
  char *pcStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined *puStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
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
  undefined *puStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_71 [17];
  
  if (*param_2 != '\x14') {
    if (*param_2 == '\x15') {
      bVar2 = false;
      lStack_2b0 = *(long *)(param_2 + 0x10);
      lStack_2a8 = lStack_2b0 + *(long *)(param_2 + 0x18) * 0x40;
      pcStack_2a0 = (char *)0x0;
      ppuStack_298 = (undefined **)0x0;
      ppuVar10 = (undefined **)0x8000000000000003;
LAB_100ea4774:
      do {
        while( true ) {
          func_0x000100f246a8(&uStack_1e0,&lStack_2b0);
          pcVar6 = pcStack_2a0;
          ppuVar5 = ppuStack_1d8;
          ppuStack_290 = ppuVar10;
          if ((char)uStack_1e0 == '\x01') goto joined_r0x000100ea488c;
          if (uStack_1e0._1_1_ != '\x02') break;
          pcStack_2a0 = (char *)0x0;
          if (pcVar6 == (char *)0x0) {
LAB_100ea4d20:
            pcStack_2a0 = (char *)0x0;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100ea4d40);
            (*pcVar3)();
          }
        }
        if (uStack_1e0._1_1_ != '\0') {
          if (uStack_1e0._1_1_ == '\x01') {
            if (ppuVar10 != (undefined **)0x8000000000000003) {
              puStack_88 = &UNK_108cb9606;
              uStack_80 = 6;
              uStack_1e0 = &puStack_88;
              ppuStack_1d8 = (undefined **)&DAT_100c7b3a0;
              ppuVar5 = (undefined **)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_1e0);
              goto joined_r0x000100ea4de8;
            }
            pcStack_2a0 = (char *)0x0;
            if (pcVar6 != (char *)0x0) {
              cVar1 = *pcVar6;
              if (cVar1 == '\x10' || cVar1 == '\x12') {
                ppuVar10 = (undefined **)0x8000000000000002;
              }
              else {
                if (cVar1 == '\x11') {
                  pcVar6 = *(char **)(pcVar6 + 8);
                }
                FUN_101444d34(&uStack_1e0,pcVar6);
                ppuVar5 = ppuStack_1d8;
                ppuVar10 = uStack_1e0;
                if (uStack_1e0 == (undefined **)0x8000000000000003) goto LAB_100ea4b34;
              }
              puStack_218 = puStack_168;
              ppuStack_220 = ppuStack_170;
              puStack_208 = puStack_158;
              ppuStack_210 = ppuStack_160;
              puStack_1f8 = puStack_148;
              ppuStack_200 = ppuStack_150;
              ppuStack_1f0 = ppuStack_140;
              puStack_258 = (undefined *)ppuStack_1a8;
              ppuStack_260 = ppuStack_1b0;
              puStack_248 = (undefined *)ppuStack_198;
              ppuStack_250 = ppuStack_1a0;
              puStack_238 = (undefined *)ppuStack_188;
              ppuStack_240 = ppuStack_190;
              puStack_228 = puStack_178;
              ppuStack_230 = ppuStack_180;
              puStack_278 = (undefined *)ppuStack_1c8;
              ppuStack_280 = ppuStack_1d0;
              puStack_268 = (undefined *)ppuStack_1b8;
              ppuStack_270 = ppuStack_1c0;
              unaff_x20 = ppuStack_1d8;
              goto LAB_100ea4774;
            }
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
            uVar7 = extraout_x9;
          }
          else {
            if (!bVar2) {
              puStack_88 = &UNK_108cb495d;
              uStack_80 = 6;
              uStack_1e0 = &puStack_88;
              ppuStack_1d8 = (undefined **)&DAT_100c7b3a0;
              ppuVar5 = (undefined **)FUN_108856088(s_missing_field_____108ac28f7,&uStack_1e0);
              goto LAB_100ea4a50;
            }
            ppuStack_3d0 = (undefined **)0x8000000000000002;
            if (ppuVar10 != (undefined **)0x8000000000000003) {
              ppuStack_c8 = ppuStack_220;
              puStack_d0 = puStack_228;
              ppuStack_b8 = ppuStack_210;
              puStack_c0 = puStack_218;
              ppuStack_a8 = ppuStack_200;
              puStack_b0 = puStack_208;
              ppuStack_98 = ppuStack_1f0;
              puStack_a0 = puStack_1f8;
              ppuStack_108 = ppuStack_260;
              puStack_110 = puStack_268;
              ppuStack_f8 = ppuStack_250;
              puStack_100 = puStack_258;
              ppuStack_e8 = ppuStack_240;
              puStack_f0 = puStack_248;
              ppuStack_d8 = ppuStack_230;
              puStack_e0 = puStack_238;
              ppuStack_128 = ppuStack_280;
              ppuStack_118 = ppuStack_270;
              puStack_120 = puStack_278;
              ppuStack_3d0 = ppuVar10;
              puStack_130 = (undefined *)unaff_x20;
            }
            ppuStack_390 = ppuStack_f8;
            puStack_398 = puStack_100;
            ppuStack_3a0 = ppuStack_108;
            puStack_3a8 = puStack_110;
            ppuStack_360 = ppuStack_c8;
            puStack_368 = puStack_d0;
            ppuStack_350 = ppuStack_b8;
            puStack_358 = puStack_c0;
            ppuStack_340 = ppuStack_a8;
            puStack_348 = puStack_b0;
            ppuStack_330 = ppuStack_98;
            puStack_338 = puStack_a0;
            ppuStack_380 = ppuStack_e8;
            puStack_388 = puStack_f0;
            ppuStack_370 = ppuStack_d8;
            puStack_378 = puStack_e0;
            ppuStack_3c0 = ppuStack_128;
            puStack_3c8 = puStack_130;
            ppuStack_3b0 = ppuStack_118;
            puStack_3b8 = puStack_120;
            puStack_158 = puStack_b0;
            ppuStack_160 = ppuStack_b8;
            puStack_148 = puStack_a0;
            ppuStack_150 = ppuStack_a8;
            ppuStack_140 = ppuStack_98;
            ppuStack_198 = (undefined **)puStack_f0;
            ppuStack_1a0 = ppuStack_f8;
            ppuStack_188 = (undefined **)puStack_e0;
            ppuStack_190 = ppuStack_e8;
            puStack_178 = puStack_d0;
            ppuStack_180 = ppuStack_d8;
            puStack_168 = puStack_c0;
            ppuStack_170 = ppuStack_c8;
            ppuStack_1d8 = (undefined **)puStack_130;
            ppuStack_1c8 = (undefined **)puStack_120;
            ppuStack_1d0 = ppuStack_128;
            ppuStack_1b8 = (undefined **)puStack_110;
            ppuStack_1c0 = ppuStack_118;
            ppuStack_1a8 = (undefined **)puStack_100;
            ppuStack_1b0 = ppuStack_108;
            uVar7 = lStack_2a8 - lStack_2b0;
            uStack_1e0 = ppuStack_3d0;
            puStack_288 = (undefined *)unaff_x20;
            ppuStack_2e8 = ppuStack_f8;
            puStack_2f0 = puStack_100;
            puVar9 = puStack_f0;
            unaff_x20 = (undefined **)puStack_130;
            if (uVar7 == 0) goto joined_r0x000100ea4978;
          }
          ppuStack_290 = ppuStack_298;
          ppuVar5 = (undefined **)
                    FUN_1087e422c((long)ppuStack_298 + (uVar7 >> 6),&ppuStack_290,&UNK_10b23a190);
          puStack_3c8 = (undefined *)ppuVar5;
          goto LAB_100ea4e5c;
        }
        if (bVar2) {
          puStack_88 = &UNK_108cb495d;
          uStack_80 = 6;
          uStack_1e0 = &puStack_88;
          ppuStack_1d8 = (undefined **)&DAT_100c7b3a0;
          ppuVar5 = (undefined **)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_1e0);
LAB_100ea4a50:
          ppuVar10 = (undefined **)((ulong)ppuVar10 & 0xfffffffffffffffe);
          goto joined_r0x000100ea4de8;
        }
        pcStack_2a0 = (char *)0x0;
        if (pcVar6 == (char *)0x0) goto LAB_100ea4d20;
        ppuVar5 = (undefined **)FUN_1012d8070();
        bVar2 = true;
      } while (ppuVar5 == (undefined **)0x0);
joined_r0x000100ea488c:
      ppuVar10 = (undefined **)((ulong)ppuVar10 & 0xfffffffffffffffe);
joined_r0x000100ea4de8:
      if (ppuVar10 != (undefined **)0x8000000000000002) {
        puStack_3c8 = (undefined *)ppuVar5;
        FUN_100cf8fb4(&ppuStack_290);
      }
    }
    else {
      ppuVar5 = (undefined **)FUN_108855c40(param_2,auStack_71,&UNK_10b213888);
    }
    goto LAB_100ea4b34;
  }
  lVar11 = *(long *)(param_2 + 0x18);
  if (lVar11 == 0) {
    uVar4 = 0;
LAB_100ea4b1c:
    ppuVar5 = (undefined **)FUN_1087e422c(uVar4,&UNK_10b22f388,&UNK_10b20a590);
LAB_100ea4b34:
    *param_1 = 0x8000000000000002;
    param_1[1] = ppuVar5;
    return;
  }
  lVar8 = *(long *)(param_2 + 0x10);
  ppuVar5 = (undefined **)FUN_1012d8070(lVar8);
  if (ppuVar5 != (undefined **)0x0) goto LAB_100ea4b34;
  if (lVar11 == 1) {
    uVar4 = 1;
    goto LAB_100ea4b1c;
  }
  pcVar6 = (char *)(lVar8 + 0x20);
  cVar1 = *pcVar6;
  if (cVar1 == '\x10' || cVar1 == '\x12') {
    uStack_1e0 = (undefined **)0x8000000000000002;
  }
  else {
    if (cVar1 == '\x11') {
      pcVar6 = *(char **)(lVar8 + 0x28);
    }
    FUN_101444d34(&uStack_1e0,pcVar6);
    ppuVar5 = ppuStack_1d8;
    if (uStack_1e0 == (undefined **)0x8000000000000003) goto LAB_100ea4b34;
    puStack_228 = puStack_168;
    ppuStack_230 = ppuStack_170;
    puStack_218 = puStack_158;
    ppuStack_220 = ppuStack_160;
    puStack_208 = puStack_148;
    ppuStack_210 = ppuStack_150;
    ppuStack_200 = ppuStack_140;
    puStack_268 = (undefined *)ppuStack_1a8;
    ppuStack_270 = ppuStack_1b0;
    puStack_258 = (undefined *)ppuStack_198;
    ppuStack_260 = ppuStack_1a0;
    puStack_248 = (undefined *)ppuStack_188;
    ppuStack_250 = ppuStack_190;
    puStack_238 = puStack_178;
    ppuStack_240 = ppuStack_180;
    puStack_288 = (undefined *)ppuStack_1c8;
    ppuStack_290 = ppuStack_1d0;
    puStack_278 = (undefined *)ppuStack_1b8;
    ppuStack_280 = ppuStack_1c0;
    unaff_x20 = ppuStack_1d8;
    if (uStack_1e0 == (undefined **)0x8000000000000004) goto LAB_100ea4b34;
  }
  puStack_358 = puStack_228;
  ppuStack_360 = ppuStack_230;
  puStack_348 = puStack_218;
  ppuStack_350 = ppuStack_220;
  puStack_338 = puStack_208;
  ppuStack_340 = ppuStack_210;
  puStack_398 = puStack_268;
  ppuStack_3a0 = ppuStack_270;
  puStack_388 = puStack_258;
  ppuStack_390 = ppuStack_260;
  puStack_378 = puStack_248;
  ppuStack_380 = ppuStack_250;
  puStack_368 = puStack_238;
  ppuStack_370 = ppuStack_240;
  puStack_3b8 = puStack_288;
  ppuStack_3c0 = ppuStack_290;
  puStack_3a8 = puStack_278;
  ppuStack_3b0 = ppuStack_280;
  puStack_158 = puStack_218;
  ppuStack_160 = ppuStack_220;
  puStack_148 = puStack_208;
  ppuStack_150 = ppuStack_210;
  ppuStack_198 = (undefined **)puStack_258;
  ppuStack_1a0 = ppuStack_260;
  ppuStack_188 = (undefined **)puStack_248;
  ppuStack_190 = ppuStack_250;
  ppuStack_330 = ppuStack_200;
  ppuStack_140 = ppuStack_200;
  puStack_178 = puStack_238;
  ppuStack_180 = ppuStack_240;
  puStack_168 = puStack_228;
  ppuStack_170 = ppuStack_230;
  ppuStack_1b8 = (undefined **)puStack_278;
  ppuStack_1c0 = ppuStack_280;
  ppuStack_1a8 = (undefined **)puStack_268;
  ppuStack_1b0 = ppuStack_270;
  ppuStack_1c8 = (undefined **)puStack_288;
  ppuStack_1d0 = ppuStack_290;
  ppuStack_3d0 = uStack_1e0;
  ppuStack_2e8 = ppuStack_260;
  puStack_2f0 = puStack_268;
  puVar9 = puStack_258;
  if (lVar11 != 2) {
    ppuStack_290 = (undefined **)0x2;
    puStack_3c8 = (undefined *)unaff_x20;
    ppuStack_1d8 = unaff_x20;
    ppuVar5 = (undefined **)
              FUN_1087e422c((lVar11 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,&ppuStack_290,
                            &UNK_10b23a1b0);
LAB_100ea4e5c:
    if (uStack_1e0 != (undefined **)0x8000000000000002) {
      FUN_100cf8fb4(&uStack_1e0);
    }
    goto LAB_100ea4b34;
  }
joined_r0x000100ea4978:
  ppuVar5 = unaff_x20;
  if (ppuStack_3d0 == (undefined **)0x8000000000000003) goto LAB_100ea4b34;
  if (ppuStack_3d0 == (undefined **)0x8000000000000002) {
    puStack_130 = (undefined *)0x0;
    puVar9 = (undefined *)0x8000000000000001;
    goto LAB_100ea4cb8;
  }
  puStack_398 = puStack_2f0;
  ppuStack_390 = ppuStack_2e8;
  puStack_388 = puVar9;
  ppuStack_290 = ppuStack_380;
  puStack_288 = puStack_378;
  ppuStack_280 = ppuStack_370;
  puStack_278 = puStack_368;
  ppuStack_270 = ppuStack_360;
  puStack_268 = puStack_358;
  ppuStack_260 = ppuStack_350;
  puStack_258 = puStack_348;
  ppuStack_250 = ppuStack_340;
  puStack_248 = puStack_338;
  ppuStack_240 = ppuStack_330;
  uStack_1e0 = (undefined **)puVar9;
  ppuStack_1d8 = ppuStack_380;
  ppuStack_1d0 = (undefined **)puStack_378;
  ppuStack_1c8 = ppuStack_370;
  ppuStack_1c0 = (undefined **)puStack_368;
  ppuStack_1b8 = ppuStack_360;
  ppuStack_1b0 = (undefined **)puStack_358;
  ppuStack_1a8 = ppuStack_350;
  ppuStack_1a0 = (undefined **)puStack_348;
  ppuStack_198 = ppuStack_340;
  ppuStack_190 = (undefined **)puStack_338;
  ppuStack_188 = ppuStack_330;
  ppuStack_180 = ppuStack_370;
  puStack_178 = puStack_368;
  ppuStack_170 = ppuStack_360;
  puStack_168 = puStack_358;
  ppuStack_160 = ppuStack_350;
  puStack_158 = puStack_348;
  ppuStack_150 = ppuStack_340;
  puStack_148 = puStack_338;
  ppuStack_140 = ppuStack_330;
  if (ppuStack_3d0 == (undefined **)0x8000000000000000) {
    ppuStack_3b0 = (undefined **)0x0;
    puStack_3b8 = &UNK_108c56c70;
    ppuStack_3a0 = (undefined **)0x0;
    puStack_3a8 = (undefined *)0x0;
    ppuStack_3d0 = (undefined **)0x0;
    puStack_3c8 = (undefined *)0x8;
    ppuStack_3c0 = (undefined **)0x0;
    FUN_1011a27dc(&ppuStack_3d0,unaff_x20);
    ppuStack_2e8 = *(undefined ***)((long)unaff_x20 + 0x40);
    puStack_2f0 = *(undefined **)((long)unaff_x20 + 0x38);
LAB_100ea4c2c:
    ppuStack_2c0 = ppuStack_3a0;
    ppuStack_328 = ppuStack_3d0;
    ppuStack_2e0 = ppuStack_3c0;
    puStack_2d8 = puStack_3b8;
    ppuStack_2d0 = ppuStack_3b0;
    puStack_2c8 = puStack_3a8;
  }
  else {
    puStack_3c8 = (undefined *)unaff_x20;
    if (ppuStack_3d0 != (undefined **)0x8000000000000001) goto LAB_100ea4c2c;
    ppuStack_328 = (undefined **)0x8000000000000000;
  }
  puStack_310 = puStack_2d8;
  ppuStack_318 = ppuStack_2e0;
  puStack_300 = puStack_2c8;
  ppuStack_308 = ppuStack_2d0;
  ppuStack_2f8 = ppuStack_2c0;
  puStack_130 = (undefined *)0x0;
  if (ppuStack_328 == (undefined **)0x8000000000000000) {
    puStack_130 = (undefined *)0x0;
  }
  else {
    puStack_320 = puStack_3c8;
    FUN_100ecd2fc(&ppuStack_3d0,&puStack_130,&ppuStack_328);
    if (ppuStack_3d0 != (undefined **)0x8000000000000000) {
      if ((ppuStack_3b0 != (undefined **)0x0) && ((long)ppuStack_3b0 * 9 != -0x11)) {
        _free(puStack_3b8 + (long)ppuStack_3b0 * -8 + -8);
      }
      func_0x000100cd7284(&ppuStack_3d0);
    }
  }
LAB_100ea4cb8:
  *param_1 = puVar9;
  param_1[6] = puStack_268;
  param_1[5] = ppuStack_270;
  param_1[8] = puStack_258;
  param_1[7] = ppuStack_260;
  param_1[10] = puStack_248;
  param_1[9] = ppuStack_250;
  param_1[2] = puStack_288;
  param_1[1] = ppuStack_290;
  param_1[4] = puStack_278;
  param_1[3] = ppuStack_280;
  param_1[0xb] = ppuStack_240;
  param_1[0xc] = puStack_130;
  return;
}

