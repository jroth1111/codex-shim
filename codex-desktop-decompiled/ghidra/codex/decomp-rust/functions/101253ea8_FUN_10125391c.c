
/* WARNING: Removing unreachable block (ram,0x000101254614) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10125391c(ulong *param_1,char *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  char *pcVar13;
  char *pcVar14;
  undefined **ppuVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined1 uVar21;
  undefined *puVar22;
  long lVar23;
  byte bVar24;
  char *pcVar25;
  long unaff_x24;
  undefined **ppuVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_5c0;
  char *pcStack_5b8;
  undefined8 uStack_5b0;
  char *pcStack_5a8;
  undefined8 uStack_5a0;
  long *plStack_598;
  long *plStack_590;
  long lStack_588;
  undefined8 uStack_580;
  undefined7 uStack_578;
  undefined1 uStack_571;
  undefined7 uStack_570;
  long lStack_569;
  undefined8 uStack_560;
  long *plStack_558;
  long *plStack_550;
  long lStack_548;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined7 uStack_52f;
  long lStack_528;
  char cStack_520;
  undefined7 uStack_51f;
  char cStack_518;
  undefined7 uStack_517;
  undefined1 uStack_510;
  undefined7 uStack_50f;
  long lStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  undefined1 uStack_4d1;
  uint uStack_474;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined *puStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  undefined **ppuStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  long lStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  long lStack_320;
  undefined *puStack_318;
  undefined **ppuStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined4 uStack_1a8;
  undefined3 uStack_1a4;
  char cStack_1a0;
  undefined7 uStack_19f;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_71 [17];
  
  if (*param_2 != '\x14') {
    uVar10 = FUN_108855c40(param_2,auStack_71,&UNK_10b213688);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
    return;
  }
  pcVar16 = *(char **)(param_2 + 0x10);
  uVar18 = *(ulong *)(param_2 + 0x18);
  pcVar14 = pcVar16 + uVar18 * 0x20;
  uVar10 = uVar18;
  if (0xf0e < uVar18) {
    uVar10 = 0xf0f;
  }
  if (uVar18 == 0) {
    ppuVar15 = (undefined **)0x0;
    uStack_438 = 0;
    uStack_430 = 8;
    uStack_428 = 0;
LAB_101253d30:
    param_1[1] = uStack_430;
    *param_1 = uStack_438;
    param_1[2] = uStack_428;
    uVar18 = *param_1;
    if ((uVar18 != 0x8000000000000000) && ((long)pcVar14 - (long)pcVar16 != 0)) {
      uVar10 = param_1[1];
      uVar3 = param_1[2];
      ppuStack_310 = ppuVar15;
      uVar9 = FUN_1087e422c((long)ppuVar15 + ((ulong)((long)pcVar14 - (long)pcVar16) >> 5),
                            &ppuStack_310,&UNK_10b23a1b0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar9;
      FUN_100cb0400(uVar10,uVar3);
joined_r0x000101253e08:
      if (uVar18 != 0) {
        _free(uVar10);
      }
    }
    return;
  }
  uStack_430 = _malloc(uVar10 * 0x110);
  if (uStack_430 != 0) {
    uStack_428 = 0;
    ppuVar15 = (undefined **)((uVar18 * 0x20 - 0x20 >> 5) + 1);
    pcVar13 = pcVar16;
    uStack_438 = uVar10;
    do {
      pcVar25 = pcVar13 + 0x20;
      if (*pcVar13 != '\x15') {
        puVar22 = (undefined *)FUN_108855c40(pcVar13,auStack_71,&UNK_10b2133a8);
LAB_101253df0:
        uVar10 = uStack_430;
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)puVar22;
        FUN_100cb0400(uStack_430,uStack_428);
        uVar18 = uStack_438;
        goto joined_r0x000101253e08;
      }
      lVar23 = *(long *)(pcVar13 + 0x10);
      lVar19 = *(long *)(pcVar13 + 0x18) * 0x40;
      lVar17 = lVar23 + lVar19;
      lStack_1d8 = 0;
      lStack_1d0 = 8;
      lStack_1c8 = 0;
      if (*(long *)(pcVar13 + 0x18) == 0) {
        ppuStack_468 = (undefined **)0x0;
        ppuStack_460 = (undefined **)0x8000000000000001;
        bVar24 = 1;
        ppuVar26 = (undefined **)0x8000000000000002;
      }
      else {
        ppuStack_468 = (undefined **)((lVar19 - 0x40U >> 6) + 1);
        pcVar16 = (char *)(lVar23 + 0x20);
        ppuVar26 = (undefined **)0x8000000000000002;
LAB_101253a84:
        do {
          FUN_1013a6da0(&ppuStack_160,pcVar16 + -0x20);
          puVar22 = puStack_158;
          if ((char)ppuStack_160 == '\x17') {
LAB_101253db0:
            bVar24 = 1;
            goto LAB_101253db4;
          }
          uVar4 = *(undefined4 *)((long)((ulong)&ppuStack_160 | 1) + 3);
          uStack_1a8._0_3_ = (undefined3)*(undefined4 *)((ulong)&ppuStack_160 | 1);
          uStack_1a8._3_1_ = (undefined1)uVar4;
          uStack_1a4 = (undefined3)((uint)uVar4 >> 8);
          puStack_1b8 = puStack_148;
          puStack_1c0 = puStack_150;
          if ((char)ppuStack_160 == '\x16') {
            if (ppuVar26 != (undefined **)0x8000000000000002) {
              puStack_180 = &UNK_108cb4be5;
              puStack_178 = (undefined *)0xb;
              ppuStack_160 = &puStack_180;
              puStack_158 = &DAT_100c7b3a0;
              puVar22 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_160);
              goto LAB_101253db0;
            }
            cVar6 = *pcVar16;
            if (cVar6 == '\x10') {
LAB_101253aec:
              ppuVar26 = (undefined **)0x8000000000000001;
            }
            else {
              if (cVar6 == '\x11') {
                pcVar13 = *(char **)(pcVar16 + 8);
              }
              else {
                pcVar13 = pcVar16;
                if (cVar6 == '\x12') goto LAB_101253aec;
              }
              FUN_1014161d4(&ppuStack_160,pcVar13);
              ppuVar26 = ppuStack_160;
              if (ppuStack_160 == (undefined **)0x8000000000000002) {
                ppuVar26 = (undefined **)0x8000000000000002;
                puVar22 = puStack_158;
                goto LAB_101253db0;
              }
            }
            puStack_1f8 = puStack_148;
            puStack_200 = puStack_150;
            puStack_1e8 = puStack_138;
            lStack_1f0 = CONCAT44(uStack_13c,uStack_140);
            puStack_440 = puStack_158;
            pcVar16 = pcVar16 + 0x40;
            lVar19 = lVar19 + -0x40;
            if (lVar19 == 0) break;
            goto LAB_101253a84;
          }
          *(undefined4 *)((ulong)&cStack_1a0 | 1) = uStack_1a8;
          *(undefined4 *)((long)((ulong)&cStack_1a0 | 1) + 3) = uVar4;
          puStack_188 = puStack_148;
          puStack_190 = puStack_150;
          cStack_1a0 = (char)ppuStack_160;
          puStack_198 = puStack_158;
          __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&puStack_180,pcVar16);
          puVar22 = puStack_178;
          lVar23 = lStack_1c8;
          if ((char)puStack_180 == '\x16') {
            FUN_100e077ec(&cStack_1a0);
            goto LAB_101253db0;
          }
          uStack_13c = *(undefined4 *)((long)((ulong)&puStack_180 | 1) + 3);
          puStack_138 = puStack_178;
          puStack_128 = puStack_168;
          lStack_130 = lStack_170;
          puStack_158 = puStack_198;
          ppuStack_160 = (undefined **)CONCAT71(uStack_19f,cStack_1a0);
          puStack_148 = puStack_188;
          puStack_150 = puStack_190;
          uStack_140 = CONCAT31((int3)*(undefined4 *)((ulong)&puStack_180 | 1),(char)puStack_180);
          if (lStack_1c8 == lStack_1d8) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_1d8);
          }
          plVar1 = (long *)(lStack_1d0 + lVar23 * 0x40);
          plVar1[1] = (long)puStack_158;
          *plVar1 = (long)ppuStack_160;
          plVar1[3] = (long)puStack_148;
          plVar1[2] = (long)puStack_150;
          plVar1[5] = (long)puStack_138;
          plVar1[4] = CONCAT44(uStack_13c,uStack_140);
          plVar1[7] = (long)puStack_128;
          plVar1[6] = lStack_130;
          lStack_1c8 = lVar23 + 1;
          pcVar16 = pcVar16 + 0x40;
          lVar19 = lVar19 + -0x40;
        } while (lVar19 != 0);
        lVar23 = lVar17;
        if (ppuVar26 == (undefined **)0x8000000000000002) {
          ppuStack_460 = (undefined **)0x8000000000000001;
          bVar24 = 1;
          ppuVar26 = (undefined **)0x8000000000000002;
        }
        else {
          bVar24 = 0;
          puStack_178 = puStack_1f8;
          puStack_180 = puStack_200;
          puStack_168 = puStack_1e8;
          lStack_170 = lStack_1f0;
          ppuStack_460 = ppuVar26;
        }
      }
      FUN_100ecb35c(&ppuStack_160,lStack_1d0,lStack_1c8);
      puVar22 = puStack_158;
      ppuVar20 = ppuStack_160;
      if (ppuStack_160 == (undefined **)0x8000000000000000) {
        if ((-0x7fffffffffffffff < (long)ppuStack_460) && (ppuStack_460 != (undefined **)0x0)) {
          _free(puStack_440);
        }
LAB_101253db4:
        FUN_100d5c778(&lStack_1d8);
        bVar7 = (bool)(bVar24 ^ 1);
        if (ppuVar26 == (undefined **)0x8000000000000002) {
          bVar7 = true;
        }
        if (!bVar7) goto joined_r0x000101253de0;
        goto LAB_101253df0;
      }
      uStack_258 = uStack_a8;
      uStack_260 = uStack_b0;
      uStack_248 = uStack_98;
      uStack_250 = uStack_a0;
      uStack_238 = uStack_88;
      uStack_240 = uStack_90;
      uStack_298 = uStack_e8;
      uStack_2a0 = uStack_f0;
      uStack_288 = uStack_d8;
      uStack_290 = uStack_e0;
      uStack_278 = uStack_c8;
      uStack_280 = uStack_d0;
      uStack_268 = uStack_b8;
      uStack_270 = uStack_c0;
      puStack_2d8 = puStack_128;
      lStack_2e0 = lStack_130;
      uStack_2c8 = uStack_118;
      uStack_2d0 = uStack_120;
      uStack_2b8 = uStack_108;
      uStack_2c0 = uStack_110;
      uStack_2a8 = uStack_f8;
      uStack_2b0 = uStack_100;
      uStack_2f0 = CONCAT44(uStack_13c,uStack_140);
      puStack_2f8 = puStack_148;
      puStack_300 = puStack_150;
      puStack_2e8 = puStack_138;
      puStack_218 = puStack_178;
      puStack_220 = puStack_180;
      puStack_208 = puStack_168;
      lStack_210 = lStack_170;
      ppuStack_310 = ppuStack_160;
      puStack_308 = puStack_158;
      ppuStack_230 = ppuStack_460;
      puStack_228 = puStack_440;
      FUN_100d5c778(&lStack_1d8);
      uVar10 = uStack_428;
      if (lVar17 - lVar23 != 0) {
        ppuStack_160 = ppuStack_468;
        puVar22 = (undefined *)
                  FUN_1087e422c((long)ppuStack_468 + ((ulong)(lVar17 - lVar23) >> 6),&ppuStack_160,
                                &UNK_10b23a190);
        func_0x000100dfdd9c(&ppuStack_310);
        ppuVar26 = ppuStack_460;
joined_r0x000101253de0:
        if ((-0x7fffffffffffffff < (long)ppuVar26) && (ppuVar26 != (undefined **)0x0)) {
          _free(puStack_440);
        }
        goto LAB_101253df0;
      }
      uStack_348 = uStack_238;
      uStack_350 = uStack_240;
      puStack_338 = puStack_228;
      ppuStack_340 = ppuStack_230;
      puStack_328 = puStack_218;
      puStack_330 = puStack_220;
      puStack_318 = puStack_208;
      lStack_320 = lStack_210;
      uStack_388 = uStack_278;
      uStack_390 = uStack_280;
      uStack_378 = uStack_268;
      uStack_380 = uStack_270;
      uStack_368 = uStack_258;
      uStack_370 = uStack_260;
      uStack_358 = uStack_248;
      uStack_360 = uStack_250;
      uStack_3c8 = uStack_2b8;
      uStack_3d0 = uStack_2c0;
      uStack_3b8 = uStack_2a8;
      uStack_3c0 = uStack_2b0;
      uStack_3a8 = uStack_298;
      uStack_3b0 = uStack_2a0;
      uStack_398 = uStack_288;
      uStack_3a0 = uStack_290;
      puStack_408 = puStack_2f8;
      puStack_410 = puStack_300;
      puStack_3f8 = puStack_2e8;
      uStack_400 = uStack_2f0;
      puStack_3e8 = puStack_2d8;
      lStack_3f0 = lStack_2e0;
      uStack_3d8 = uStack_2c8;
      uStack_3e0 = uStack_2d0;
      ppuStack_420 = ppuVar20;
      puStack_418 = puVar22;
      if (uStack_428 == uStack_438) {
        func_0x000108a424bc(&uStack_438);
      }
      _memcpy(uStack_430 + uVar10 * 0x110,&ppuStack_420,0x110);
      uStack_428 = uVar10 + 1;
      pcVar16 = pcVar14;
      pcVar13 = pcVar25;
    } while (pcVar25 != pcVar14);
    goto LAB_101253d30;
  }
  uVar11 = func_0x0001087c9084(8,uVar10 * 0x110);
  if (uVar10 != 0) {
    _free(pcVar16);
    uVar11 = __Unwind_Resume(uVar11);
    if ((((unaff_x24 != -0x7ffffffffffffffe) && ((uStack_474 & 1) != 0)) &&
        (-0x7fffffffffffffff < unaff_x24)) && (unaff_x24 != 0)) {
      _free(puStack_440);
    }
    FUN_100ce094c(&uStack_438);
  }
  __Unwind_Resume(uVar11);
  func_0x000108a07bc4();
  auVar27 = func_0x000108a07bc4();
  pcVar14 = auVar27._8_8_;
  puVar12 = auVar27._0_8_;
  cVar6 = *pcVar14;
  if ((cVar6 != '\f') && (cVar6 != '\r')) {
    if (cVar6 != '\x15') {
      FUN_1088556a8(&uStack_560,pcVar14);
      uVar11 = func_0x000108a4a50c(&uStack_560,&UNK_10b20a5b0,&UNK_10b20a590);
      *(undefined8 *)(puVar12 + 8) = uVar11;
      *puVar12 = 1;
      FUN_100e077ec(pcVar14);
      return;
    }
    uStack_5b0 = *(undefined8 *)(pcVar14 + 8);
    uStack_5c0 = *(char **)(pcVar14 + 0x10);
    lVar17 = *(long *)(pcVar14 + 0x18);
    pcStack_5a8 = uStack_5c0 + lVar17 * 0x40;
    pcStack_5b8 = uStack_5c0;
    if (lVar17 != 0) {
      pcVar16 = uStack_5c0 + 0x40;
      cVar5 = *uStack_5c0;
      pcStack_5b8 = pcVar16;
      if (cVar5 != '\x16') {
        uStack_517 = (undefined7)*(undefined8 *)(uStack_5c0 + 9);
        uStack_51f = (undefined7)*(undefined8 *)(uStack_5c0 + 1);
        cStack_518 = (char)((ulong)*(undefined8 *)(uStack_5c0 + 1) >> 0x38);
        lStack_588 = *(long *)(uStack_5c0 + 0x18);
        plStack_590 = *(long **)(uStack_5c0 + 0x10);
        uStack_4f8 = *(undefined8 *)(uStack_5c0 + 0x28);
        uStack_500 = *(undefined8 *)(uStack_5c0 + 0x20);
        uStack_510 = SUB81(plStack_590,0);
        uStack_50f = (undefined7)((ulong)plStack_590 >> 8);
        lStack_4e8 = *(long *)(uStack_5c0 + 0x38);
        uStack_4f0 = *(undefined8 *)(uStack_5c0 + 0x30);
        cStack_520 = cVar5;
        lStack_508 = lStack_588;
        if (lVar17 != 1) {
          pcStack_5b8 = uStack_5c0 + 0x80;
          plStack_558 = *(long **)(uStack_5c0 + 0x48);
          uStack_560 = *(undefined8 *)pcVar16;
          lStack_548 = *(long *)(uStack_5c0 + 0x58);
          plStack_550 = *(long **)(uStack_5c0 + 0x50);
          lStack_528 = *(long *)(uStack_5c0 + 0x78);
          uStack_538 = (undefined1)*(undefined8 *)(uStack_5c0 + 0x68);
          uStack_537 = (undefined7)((ulong)*(undefined8 *)(uStack_5c0 + 0x68) >> 8);
          uStack_540 = (undefined1)*(undefined8 *)(uStack_5c0 + 0x60);
          uStack_53f = (undefined7)((ulong)*(undefined8 *)(uStack_5c0 + 0x60) >> 8);
          uStack_530 = (undefined1)*(undefined8 *)(uStack_5c0 + 0x70);
          uStack_52f = (undefined7)((ulong)*(undefined8 *)(uStack_5c0 + 0x70) >> 8);
          if ((byte)uStack_560 != '\x16') {
            FUN_100e077ec(&uStack_560);
            FUN_100e077ec(&uStack_540);
            uStack_560 = CONCAT71(uStack_560._1_7_,0xb);
            uVar11 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                               (&uStack_560,&UNK_10b20a580,&UNK_10b20a590);
            *(undefined8 *)(puVar12 + 8) = uVar11;
            *puVar12 = 1;
            FUN_100e077ec(&uStack_500);
            FUN_100e077ec(&cStack_520);
            goto LAB_101254450;
          }
        }
        plStack_598 = (long *)CONCAT71(uStack_517,cStack_518);
        uStack_5a0 = CONCAT71(uStack_51f,cVar5);
        uVar21 = (char)uStack_500;
        uStack_580 = *(undefined8 *)(uStack_5c0 + 0x21);
        uStack_578 = (undefined7)*(undefined8 *)(uStack_5c0 + 0x29);
        lStack_569 = *(long *)(uStack_5c0 + 0x38);
        uStack_571 = (undefined1)*(undefined8 *)(uStack_5c0 + 0x30);
        uStack_570 = (undefined7)((ulong)*(undefined8 *)(uStack_5c0 + 0x30) >> 8);
        bVar24 = 1;
        FUN_100d34830(&uStack_5c0);
        goto LAB_1012541a4;
      }
    }
    uStack_560 = CONCAT71(uStack_560._1_7_,0xb);
    uVar11 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                       (&uStack_560,&UNK_10b20a580,&UNK_10b20a590);
    *(undefined8 *)(puVar12 + 8) = uVar11;
    *puVar12 = 1;
LAB_101254450:
    FUN_100d34830(&uStack_5c0);
    return;
  }
  bVar24 = 0;
  plStack_598 = *(long **)(pcVar14 + 8);
  uStack_5a0 = *(undefined8 *)pcVar14;
  lStack_588 = *(long *)(pcVar14 + 0x18);
  plStack_590 = *(long **)(pcVar14 + 0x10);
  uVar21 = 0x16;
LAB_1012541a4:
  plVar8 = plStack_590;
  plVar1 = plStack_598;
  plStack_558 = plStack_598;
  uStack_560 = uStack_5a0;
  uVar11 = uStack_560;
  lStack_548 = lStack_588;
  plStack_550 = plStack_590;
  uStack_537 = uStack_578;
  uStack_53f = (undefined7)uStack_580;
  uStack_538 = (undefined1)((ulong)uStack_580 >> 0x38);
  lStack_528 = lStack_569;
  uStack_530 = uStack_571;
  uStack_52f = uStack_570;
  uStack_4f8 = CONCAT71(uStack_578,uStack_538);
  uStack_500 = CONCAT71(uStack_53f,uVar21);
  uStack_4f0 = CONCAT71(uStack_570,uStack_571);
  lStack_4e8 = lStack_569;
  uStack_560._0_1_ = (byte)uStack_5a0;
  uStack_560 = uVar11;
  uStack_540 = uVar21;
  if ((byte)uStack_560 < 0xd) {
    if ((byte)uStack_560 == 1) {
      uStack_560._1_1_ = (char)((ulong)uStack_5a0 >> 8);
      if (uStack_560._1_1_ != '\0') {
        if (uStack_560._1_1_ != '\x01') {
          cStack_518 = uStack_560._1_1_;
          uStack_517 = 0;
          cStack_520 = '\x01';
          pcStack_5b8 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                          (&cStack_520,&UNK_10b2242c0,&UNK_10b20a590);
          goto LAB_101254344;
        }
LAB_1012543f0:
        uStack_5c0 = (char *)CONCAT62(uStack_5c0._2_6_,0x100);
        goto LAB_10125453c;
      }
LAB_101254534:
      uVar21 = 0;
      uStack_5c0 = (char *)((ulong)uStack_5c0._2_6_ << 0x10);
LAB_101254538:
      uStack_5c0 = (char *)CONCAT71(uStack_5c0._1_7_,uVar21);
      goto LAB_10125453c;
    }
    if ((byte)uStack_560 == 4) {
      if (plStack_598 != (long *)0x0) {
        if (plStack_598 == (long *)0x1) goto LAB_1012543f0;
        cStack_518 = (char)plStack_598;
        uStack_517 = (undefined7)((ulong)plStack_598 >> 8);
        cStack_520 = '\x01';
        pcStack_5b8 = (char *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                        (&cStack_520,&UNK_10b2242c0,&UNK_10b20a590);
        goto LAB_101254344;
      }
      goto LAB_101254534;
    }
    if ((byte)uStack_560 == 0xc) {
      if (lStack_588 == 10) {
        if (*plStack_590 != 0x7463697274736572 || (short)plStack_590[1] != 0x6465)
        goto LAB_101254224;
        uStack_5c0 = (char *)((ulong)uStack_5c0._2_6_ << 0x10);
      }
      else if ((lStack_588 == 7) &&
              ((int)*plStack_590 == 0x62616e65 && *(int *)((long)plStack_590 + 3) == 0x64656c62)) {
        uStack_5c0 = (char *)CONCAT62(uStack_5c0._2_6_,0x100);
      }
      else {
LAB_101254224:
        pcStack_5b8 = (char *)FUN_1087e4494(plStack_590,lStack_588,&UNK_10b222208,2);
        uStack_5c0 = (char *)CONCAT71(uStack_5c0._1_7_,1);
      }
joined_r0x0001012543bc:
      if (plVar1 == (long *)0x0) goto LAB_101254544;
      _free(plVar8);
      pcVar16 = uStack_5c0;
      lVar17 = lStack_508;
      lStack_508 = lStack_4e8;
      goto joined_r0x000101254480;
    }
LAB_1012545e8:
    pcStack_5b8 = (char *)FUN_108855b04(&uStack_560,&uStack_4d1,&UNK_10b212a40);
    uStack_5c0 = (char *)CONCAT71(uStack_5c0._1_7_,1);
    lVar17 = lStack_508;
LAB_101254550:
    lStack_508 = lVar17;
    pcVar16 = pcStack_5b8;
    if ((char)uStack_500 != '\x16') {
      FUN_100e077ec(&uStack_500);
    }
  }
  else {
    if ((byte)uStack_560 == 0xd) {
      if (plStack_590 == (long *)0xa) {
        if (*plStack_598 == 0x7463697274736572 && (short)plStack_598[1] == 0x6465)
        goto LAB_101254534;
      }
      else if ((plStack_590 == (long *)0x7) &&
              ((int)*plStack_598 == 0x62616e65 && *(int *)((long)plStack_598 + 3) == 0x64656c62))
      goto LAB_1012543f0;
      pcStack_5b8 = (char *)FUN_1087e4494(plStack_598,plStack_590,&UNK_10b222208,2);
LAB_101254344:
      uVar21 = 1;
      goto LAB_101254538;
    }
    if ((byte)uStack_560 == 0xe) {
      FUN_100ae50ec(&uStack_5c0,plStack_590,lStack_588);
      goto joined_r0x0001012543bc;
    }
    if ((byte)uStack_560 != 0xf) goto LAB_1012545e8;
    FUN_100ae50ec(&uStack_5c0,plStack_598,plStack_590);
LAB_10125453c:
    FUN_100e077ec(&uStack_560);
LAB_101254544:
    pcVar16 = uStack_5c0;
    lVar17 = lStack_508;
    lStack_508 = lStack_4e8;
joined_r0x000101254480:
    bVar7 = (char)uStack_5c0 == '\x01';
    uStack_5c0 = pcVar16;
    lStack_4e8 = lStack_508;
    if (bVar7) goto LAB_101254550;
    uStack_5c0._1_1_ = (char)((ulong)pcVar16 >> 8);
    uStack_510 = (undefined1)uStack_4f0;
    uStack_50f = (undefined7)((ulong)uStack_4f0 >> 8);
    cStack_518 = (char)uStack_4f8;
    uStack_517 = (undefined7)((ulong)uStack_4f8 >> 8);
    cStack_520 = (char)uStack_500;
    uStack_51f = (undefined7)((ulong)uStack_500 >> 8);
    uVar2 = (uint)uStack_500 & 0xff;
    if (uStack_5c0._1_1_ != '\x01') {
      if (uVar2 == 0x16) {
        uVar21 = 0;
      }
      else {
        if ((uVar2 != 0x12) && ((uVar2 != 0x15 || (lStack_508 != 0)))) {
          pcVar16 = (char *)FUN_108855b04(&cStack_520,&uStack_4d1,&UNK_10b20a5c0);
          goto LAB_101254568;
        }
        uVar21 = 0;
LAB_101254508:
        FUN_100e077ec(&cStack_520);
      }
LAB_101254510:
      puVar12[1] = uVar21;
      *puVar12 = 0;
      bVar7 = (bool)(bVar24 ^ 1);
      if (cVar6 == '\x15') {
        bVar7 = true;
      }
      if (bVar7) {
        return;
      }
      goto LAB_101254584;
    }
    if (uVar2 == 0x16) {
      uVar21 = 1;
      goto LAB_101254510;
    }
    if ((uVar2 == 0x12) || ((uVar2 == 0x15 && (lStack_508 == 0)))) {
      uVar21 = 1;
      goto LAB_101254508;
    }
    pcVar16 = (char *)FUN_108855b04(&cStack_520,&uStack_4d1,&UNK_10b20a5c0);
  }
LAB_101254568:
  *(char **)(puVar12 + 8) = pcVar16;
  *puVar12 = 1;
  bVar7 = (bool)(bVar24 ^ 1);
  if (cVar6 == '\x15') {
    bVar7 = true;
  }
  if (bVar7) {
    return;
  }
LAB_101254584:
  FUN_100e077ec(pcVar14);
  return;
}

