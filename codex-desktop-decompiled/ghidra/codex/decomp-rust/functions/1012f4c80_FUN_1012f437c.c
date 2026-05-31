
/* WARNING: Type propagation algorithm not settling */

void FUN_1012f437c(undefined8 *param_1,char *param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  long lVar5;
  char *pcVar6;
  code *pcVar7;
  bool bVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  byte bVar13;
  undefined8 *puVar14;
  long *******ppppppplVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  long ******pppppplVar19;
  long *******ppppppplVar20;
  long *unaff_x28;
  long *******ppppppplVar21;
  undefined8 uStack_508;
  long *plStack_500;
  long *plStack_4f8;
  long *plStack_4e0;
  long *plStack_4d8;
  long *******ppppppplStack_4d0;
  long *******ppppppplStack_4c8;
  long *******ppppppplStack_4c0;
  long *******ppppppplStack_4b8;
  long lStack_4a0;
  long lStack_498;
  char *pcStack_490;
  long ******pppppplStack_488;
  undefined8 uStack_480;
  long *plStack_478;
  long *******ppppppplStack_470;
  long *plStack_468;
  undefined8 uStack_460;
  long *plStack_458;
  long *******ppppppplStack_450;
  long *plStack_448;
  long *******ppppppplStack_440;
  long alStack_390 [3];
  long lStack_378;
  long lStack_370;
  long *******ppppppplStack_340;
  long *plStack_338;
  long *******ppppppplStack_330;
  long *plStack_328;
  long *******ppppppplStack_320;
  long *plStack_318;
  long *******ppppppplStack_310;
  long *plStack_308;
  long *******ppppppplStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long *******ppppppplStack_2e0;
  long *plStack_2d8;
  undefined4 uStack_2c8;
  undefined3 uStack_2c4;
  long *******ppppppplStack_2c0;
  long *plStack_2b8;
  long *******ppppppplStack_2b0;
  long *plStack_2a8;
  long *******ppppppplStack_2a0;
  long *plStack_298;
  long *******ppppppplStack_290;
  long *plStack_288;
  long *******ppppppplStack_280;
  long *******ppppppplStack_270;
  long *plStack_268;
  long *******ppppppplStack_260;
  long *plStack_258;
  long *******ppppppplStack_250;
  long *plStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_230;
  long *plStack_228;
  long *******ppppppplStack_220;
  long *plStack_218;
  long lStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  long *******ppppppplStack_1f0;
  long *plStack_1e8;
  long *******ppppppplStack_1e0;
  long *plStack_1d8;
  long *******ppppppplStack_1d0;
  long *plStack_1c8;
  long *******ppppppplStack_1c0;
  long *plStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *plStack_1a0;
  long *******ppppppplStack_198;
  long *plStack_190;
  long *******ppppppplStack_188;
  long *plStack_180;
  long *******ppppppplStack_178;
  long *plStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *plStack_158;
  long *******ppppppplStack_150;
  long *plStack_148;
  long *******ppppppplStack_140;
  long *plStack_138;
  long *******ppppppplStack_130;
  long *plStack_128;
  long *******ppppppplStack_120;
  long *plStack_110;
  long *******ppppppplStack_108;
  long *plStack_100;
  long *******ppppppplStack_f8;
  long *plStack_f0;
  long *******ppppppplStack_e8;
  long *plStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *plStack_c8;
  long *******ppppppplStack_c0;
  long *plStack_b8;
  long *******ppppppplStack_b0;
  long *plStack_a8;
  long *******ppppppplStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *****ppppplStack_80;
  undefined8 uStack_78;
  
  if (*param_2 != '\x15') {
    uVar10 = FUN_108855c40(param_2,&ppppplStack_80,&UNK_10b2134e8);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar10;
    return;
  }
  lStack_4a0 = *(long *)(param_2 + 0x10);
  lStack_498 = lStack_4a0 + *(long *)(param_2 + 0x18) * 0x40;
  pcStack_490 = (char *)0x0;
  pppppplStack_488 = (long ******)0x0;
  lStack_2f8 = 0;
  lStack_2f0 = 8;
  lStack_2e8 = 0;
  ppppppplVar20 = (long *******)0x8000000000000002;
  while( true ) {
    FUN_100f24408(&uStack_480,&lStack_4a0);
    pcVar6 = pcStack_490;
    ppppppplStack_340 = ppppppplVar20;
    plStack_338 = unaff_x28;
    if ((byte)uStack_480 == '\x18') break;
    uVar2 = *(undefined4 *)((long)((ulong)&uStack_480 | 1) + 3);
    uStack_2c8._0_3_ = (undefined3)*(undefined4 *)((ulong)&uStack_480 | 1);
    uStack_2c8._3_1_ = (undefined1)uVar2;
    uStack_2c4 = (undefined3)((uint)uVar2 >> 8);
    plStack_2d8 = plStack_468;
    ppppppplStack_2e0 = ppppppplStack_470;
    if ((byte)uStack_480 == '\x16') {
      if (ppppppplVar20 != (long *******)0x8000000000000002) {
        ppppppplStack_160 = (long *******)&UNK_108cadf95;
        plStack_158 = (long *)0x5;
        uStack_480 = (long *******)&ppppppplStack_160;
        plStack_478 = (long *)&DAT_100c7b3a0;
        bVar8 = true;
        uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_480);
        *param_1 = 0x8000000000000001;
        param_1[1] = uVar10;
        goto LAB_1012f4f10;
      }
      pcStack_490 = (char *)0x0;
      if (pcVar6 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
        goto LAB_1012f52a0;
      }
      cVar3 = *pcVar6;
      ppppppplVar20 = (long *******)0x8000000000000001;
      if (cVar3 != '\x10') {
        if (cVar3 == '\x11') {
          FUN_1004de164(&uStack_480,*(undefined8 *)(pcVar6 + 8));
        }
        else {
          if (cVar3 == '\x12') goto LAB_1012f4580;
          FUN_1004de164(&uStack_480);
        }
        if (uStack_480 == (long *******)0x8000000000000000) {
          *param_1 = 0x8000000000000001;
          param_1[1] = plStack_478;
          bVar8 = true;
          goto LAB_1012f4f10;
        }
        plStack_158 = plStack_468;
        ppppppplStack_160 = ppppppplStack_470;
        plStack_148 = plStack_458;
        ppppppplStack_150 = uStack_460;
        plStack_138 = plStack_448;
        ppppppplStack_140 = ppppppplStack_450;
        ppppppplStack_130 = ppppppplStack_440;
        ppppppplVar20 = uStack_480;
        unaff_x28 = plStack_478;
      }
LAB_1012f4580:
      plStack_328 = plStack_158;
      ppppppplStack_330 = ppppppplStack_160;
      plStack_318 = plStack_148;
      ppppppplStack_320 = ppppppplStack_150;
      plStack_308 = plStack_138;
      ppppppplStack_310 = ppppppplStack_140;
      ppppppplStack_300 = ppppppplStack_130;
    }
    else {
      if ((byte)uStack_480 == '\x17') {
        bVar8 = ppppppplVar20 == (long *******)0x8000000000000002;
        if (bVar8) {
          ppppppplStack_2c0 = (long *******)0x8000000000000001;
        }
        else {
          plStack_298 = plStack_318;
          ppppppplStack_2a0 = ppppppplStack_320;
          plStack_288 = plStack_308;
          ppppppplStack_290 = ppppppplStack_310;
          ppppppplStack_280 = ppppppplStack_300;
          plStack_2a8 = plStack_328;
          ppppppplStack_2b0 = ppppppplStack_330;
          ppppppplStack_2c0 = ppppppplVar20;
          plStack_2b8 = unaff_x28;
        }
        lStack_208 = lStack_2f0 + lStack_2e8 * 0x40;
        lStack_210 = lStack_2f0;
        ppppppplStack_230 = (long *******)CONCAT71(ppppppplStack_230._1_7_,0x16);
        puStack_200 = &UNK_10b236540;
        uStack_1f8 = 4;
        ppppppplVar20 = (long *******)0x8000000000000001;
        ppppppplStack_1f0 = (long *******)0x8000000000000001;
        ppppppplStack_1a8 = (long *******)0x8000000000000001;
        ppppppplStack_160 = (long *******)0x8000000000000001;
        if (lStack_2e8 != 0) {
          puVar14 = (undefined8 *)((ulong)&ppppppplStack_230 | 1);
          puVar12 = (undefined8 *)((ulong)&uStack_480 | 1);
          ppppppplStack_4d0 = (long *******)0x8000000000000001;
          ppppppplStack_4c8 = (long *******)0x8000000000000001;
          ppppppplStack_4c0 = (long *******)0x8000000000000001;
          ppppppplStack_4b8 = (long *******)0x8000000000000001;
          lVar16 = lStack_2f0;
          uVar10 = uStack_1f8;
          puVar4 = puStack_200;
          lVar5 = lStack_208;
          ppppppplVar21 = (long *******)0x8000000000000001;
          pppppplVar19 = (long ******)0x8000000000000001;
          goto LAB_1012f46ac;
        }
        ppppppplStack_160 = (long *******)0x8000000000000001;
        ppppppplStack_1a8 = (long *******)0x8000000000000001;
        ppppppplVar21 = (long *******)0x8000000000000001;
        pppppplVar19 = (long ******)0x8000000000000001;
        ppppppplStack_1f0 = (long *******)0x8000000000000001;
        ppppppplStack_4c0 = ppppppplVar20;
        goto LAB_1012f4c44;
      }
      *(undefined4 *)((ulong)&ppppppplStack_1a8 | 1) = uStack_2c8;
      *(undefined4 *)((long)((ulong)&ppppppplStack_1a8 | 1) + 3) = uVar2;
      plStack_190 = plStack_468;
      ppppppplStack_198 = ppppppplStack_470;
      ppppppplStack_1a8 = (long *******)CONCAT71(ppppppplStack_1a8._1_7_,(byte)uStack_480);
      plStack_1a0 = plStack_478;
      pcStack_490 = (char *)0x0;
      if (pcVar6 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_1012f52a0:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1012f52a4);
        (*pcVar7)();
      }
      __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&ppppppplStack_160);
      lVar5 = lStack_2e8;
      if ((char)ppppppplStack_160 == '\x16') {
        *param_1 = 0x8000000000000001;
        param_1[1] = plStack_158;
        bVar8 = true;
        FUN_100e077ec(&ppppppplStack_1a8);
        goto LAB_1012f4f10;
      }
      uStack_460 = (long *******)
                   CONCAT44(*(undefined4 *)((long)((ulong)&ppppppplStack_160 | 1) + 3),
                            *(int *)((ulong)&ppppppplStack_160 | 1) << 8);
      plStack_458 = plStack_158;
      plStack_448 = plStack_148;
      ppppppplStack_450 = ppppppplStack_150;
      plStack_478 = plStack_1a0;
      uStack_480 = ppppppplStack_1a8;
      plStack_468 = plStack_190;
      ppppppplStack_470 = ppppppplStack_198;
      uStack_460 = (long *******)CONCAT71(uStack_460._1_7_,(char)ppppppplStack_160);
      if (lStack_2e8 == lStack_2f8) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_2f8);
      }
      puVar12 = (undefined8 *)(lStack_2f0 + lVar5 * 0x40);
      puVar12[1] = plStack_478;
      *puVar12 = uStack_480;
      puVar12[3] = plStack_468;
      puVar12[2] = ppppppplStack_470;
      puVar12[5] = plStack_458;
      puVar12[4] = uStack_460;
      puVar12[7] = plStack_448;
      puVar12[6] = ppppppplStack_450;
      lStack_2e8 = lVar5 + 1;
    }
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = plStack_478;
  bVar8 = true;
  goto LAB_1012f4f10;
LAB_1012f46ac:
  lVar1 = lVar16 + 0x40;
  __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E(&uStack_480,lVar16,puVar4,uVar10);
  bVar13 = (byte)uStack_480;
  if ((byte)uStack_480 == 0x16) {
    lVar16 = lVar1;
    if (lVar1 == lVar5) goto LAB_1012f4be8;
    goto LAB_1012f46ac;
  }
  lStack_210 = lVar16 + 0x40;
  if ((char)ppppppplStack_230 != '\x16') {
    FUN_100e077ec(&ppppppplStack_230);
  }
  ppppppplVar15 = ppppppplStack_470;
  plVar9 = plStack_478;
  plStack_228 = plStack_458;
  ppppppplStack_230 = uStack_460;
  plStack_218 = plStack_448;
  ppppppplStack_220 = ppppppplStack_450;
  if (0xc < bVar13) {
    if (bVar13 == 0xd) {
      if (ppppppplStack_470 == (long *******)0x4) {
        if ((int)*plStack_478 == 0x656d616e) {
          uVar11 = 1;
        }
        else {
          if ((int)*plStack_478 != 0x6b736174) goto LAB_1012f4908;
          uVar11 = 3;
        }
      }
      else if (ppppppplStack_470 == (long *******)0x9) {
        if (*plStack_478 != 0x746e656d75677261 || (char)plStack_478[1] != 's') goto LAB_1012f4908;
        uVar11 = 2;
      }
      else if ((ppppppplStack_470 == (long *******)0x5) &&
              ((int)*plStack_478 == 0x74656d5f && *(char *)((long)plStack_478 + 4) == 'a')) {
        uVar11 = 0;
      }
      else {
LAB_1012f4908:
        uVar11 = 4;
      }
      uStack_98 = (long ******)((ulong)CONCAT61(uStack_98._2_6_,uVar11) << 8);
      goto LAB_1012f4914;
    }
    if (bVar13 == 0xe) {
      FUN_100a52f64(&uStack_98,ppppppplStack_470);
joined_r0x0001012f47c4:
      if (plVar9 != (long *)0x0) {
        _free(ppppppplVar15);
      }
      goto joined_r0x0001012f48a4;
    }
    if (bVar13 == 0xf) {
      FUN_100a52f64(&uStack_98,plStack_478,ppppppplStack_470);
      goto LAB_1012f4914;
    }
LAB_1012f4b64:
    plStack_90 = (long *)FUN_108855b04(&uStack_480,&ppppplStack_80,&UNK_10b20e880);
    uStack_98 = (long ******)CONCAT71(uStack_98._1_7_,1);
LAB_1012f4bc4:
    ppppppplStack_1f0 = ppppppplStack_4b8;
    plVar9 = plStack_90;
LAB_1012f4bc8:
    plVar18 = (long *)0x1;
    ppppppplStack_4b8 = ppppppplStack_1f0;
    plStack_1e8 = plStack_4f8;
    ppppppplStack_1a8 = ppppppplStack_4c8;
    plStack_1a0 = plStack_500;
    ppppppplStack_160 = ppppppplStack_4d0;
    plStack_158 = plStack_4e0;
    ppppppplVar20 = ppppppplStack_4c0;
    goto joined_r0x0001012f4bd8;
  }
  if (bVar13 == 1) {
    bVar13 = uStack_480._1_1_;
    if (3 < uStack_480._1_1_) {
      bVar13 = 4;
    }
  }
  else {
    if (bVar13 != 4) {
      if (bVar13 != 0xc) goto LAB_1012f4b64;
      if (plStack_468 == (long *)0x4) {
        if (*(int *)ppppppplStack_470 == 0x656d616e) {
          uVar11 = 1;
        }
        else {
          if (*(int *)ppppppplStack_470 != 0x6b736174) goto LAB_1012f4888;
          uVar11 = 3;
        }
      }
      else if (plStack_468 == (long *)0x9) {
        if (*ppppppplStack_470 != (long ******)0x746e656d75677261 ||
            *(char *)(ppppppplStack_470 + 1) != 's') goto LAB_1012f4888;
        uVar11 = 2;
      }
      else if ((plStack_468 == (long *)0x5) &&
              (*(int *)ppppppplStack_470 == 0x74656d5f &&
               *(char *)((long)ppppppplStack_470 + 4) == 'a')) {
        uVar11 = 0;
      }
      else {
LAB_1012f4888:
        uVar11 = 4;
      }
      uStack_98 = (long ******)((ulong)CONCAT61(uStack_98._2_6_,uVar11) << 8);
      goto joined_r0x0001012f47c4;
    }
    if ((long *)0x3 < plStack_478) {
      plVar9 = (long *)0x4;
    }
    bVar13 = (byte)plVar9;
  }
  uStack_98._1_7_ = CONCAT61(uStack_98._2_6_,bVar13);
  uStack_98 = (long ******)((ulong)uStack_98._1_7_ << 8);
LAB_1012f4914:
  FUN_100e077ec(&uStack_480);
joined_r0x0001012f48a4:
  if (((ulong)uStack_98 & 1) != 0) goto LAB_1012f4bc4;
  uStack_98._1_1_ = (byte)((ulong)uStack_98 >> 8);
  cVar3 = (char)ppppppplStack_230;
  ppppppplStack_230._1_7_ = (undefined7)((ulong)ppppppplStack_230 >> 8);
  uStack_480._1_7_ = (undefined7)((ulong)uStack_480 >> 8);
  if (uStack_98._1_1_ < 2) {
    if (uStack_98._1_1_ == 0) {
      if (ppppppplStack_4b8 != (long *******)0x8000000000000001) {
        plStack_158 = plStack_4e0;
        ppppppplStack_160 = ppppppplStack_4d0;
        plStack_1a0 = plStack_500;
        ppppppplStack_1a8 = ppppppplStack_4c8;
        plStack_1e8 = plStack_4f8;
        ppppppplStack_1f0 = ppppppplStack_4b8;
        uStack_98 = (long ******)&UNK_108cadf95;
        plStack_90 = (long *)0x5;
        uStack_480 = (long *******)&uStack_98;
        plStack_478 = (long *)&DAT_100c7b3a0;
        plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_480);
        goto LAB_1012f5114;
      }
      FUN_100623670(&uStack_480,&ppppppplStack_230);
      ppppppplStack_4b8 = uStack_480;
      if (uStack_480 == (long *******)0x8000000000000001) {
        ppppppplStack_1f0 = (long *******)0x8000000000000001;
        plVar9 = plStack_478;
        goto LAB_1012f4bc8;
      }
      plStack_4f8 = plStack_478;
      plStack_1d8 = plStack_468;
      ppppppplStack_1e0 = ppppppplStack_470;
      plStack_1c8 = plStack_458;
      ppppppplStack_1d0 = uStack_460;
      plStack_1b8 = plStack_448;
      ppppppplStack_1c0 = ppppppplStack_450;
      ppppppplStack_1b0 = ppppppplStack_440;
      lVar16 = lStack_210;
      lVar1 = lStack_210;
      uVar10 = uStack_1f8;
      puVar4 = puStack_200;
      lVar5 = lStack_208;
      if (lStack_210 == lStack_208) goto LAB_1012f4be8;
      goto LAB_1012f46ac;
    }
    if (pppppplVar19 != (long ******)0x8000000000000001) {
      plStack_158 = plStack_4e0;
      ppppppplStack_160 = ppppppplStack_4d0;
      plStack_1a0 = plStack_500;
      ppppppplStack_1a8 = ppppppplStack_4c8;
      plStack_1e8 = plStack_4f8;
      ppppppplStack_1f0 = ppppppplStack_4b8;
      uStack_98 = (long ******)&UNK_108c61018;
      plStack_90 = (long *)0x4;
      uStack_480 = (long *******)&uStack_98;
      plStack_478 = (long *)&DAT_100c7b3a0;
      plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_480);
      goto LAB_1012f5114;
    }
    ppppppplStack_230 = (long *******)CONCAT71(ppppppplStack_230._1_7_,0x16);
    if (cVar3 != '\x16') {
      uVar10 = *puVar14;
      puVar12[1] = puVar14[1];
      *puVar12 = uVar10;
      uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
      *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
      *(undefined8 *)((long)puVar12 + 0xf) = uVar10;
      uStack_480 = (long *******)CONCAT71(uStack_480._1_7_,cVar3);
      FUN_1004b62d4(&uStack_98,&uStack_480);
      if (uStack_98 == (long ******)0x8000000000000000) {
        pppppplVar19 = (long ******)0x8000000000000001;
        goto LAB_1012f4bc4;
      }
      plStack_4d8 = plStack_90;
      uStack_508 = uStack_88;
      lVar16 = lStack_210;
      pppppplVar19 = uStack_98;
      lVar1 = lStack_210;
      uVar10 = uStack_1f8;
      puVar4 = puStack_200;
      lVar5 = lStack_208;
      if (lStack_210 == lStack_208) goto LAB_1012f4be8;
      goto LAB_1012f46ac;
    }
    plStack_158 = plStack_4e0;
    ppppppplStack_160 = ppppppplStack_4d0;
    plStack_1a0 = plStack_500;
    ppppppplStack_1a8 = ppppppplStack_4c8;
    pppppplVar19 = (long ******)0x8000000000000001;
    plStack_1e8 = plStack_4f8;
    ppppppplStack_1f0 = ppppppplStack_4b8;
    plVar9 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
  }
  else {
    if (uStack_98._1_1_ == 2) {
      if (ppppppplVar21 != (long *******)0x8000000000000001) {
        plStack_158 = plStack_4e0;
        ppppppplStack_160 = ppppppplStack_4d0;
        plStack_1a0 = plStack_500;
        ppppppplStack_1a8 = ppppppplStack_4c8;
        plStack_1e8 = plStack_4f8;
        ppppppplStack_1f0 = ppppppplStack_4b8;
        uStack_98 = (long ******)&UNK_108cadb54;
        plStack_90 = (long *)0x9;
        uStack_480 = (long *******)&uStack_98;
        plStack_478 = (long *)&DAT_100c7b3a0;
        plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_480);
        goto LAB_1012f5114;
      }
      FUN_100620d10(&uStack_480,&ppppppplStack_230);
      if (uStack_480 == (long *******)0x8000000000000001) {
        ppppppplStack_1f0 = ppppppplStack_4b8;
        ppppppplVar21 = (long *******)0x8000000000000001;
        plVar9 = plStack_478;
        goto LAB_1012f4bc8;
      }
      plStack_500 = plStack_478;
      plStack_190 = plStack_468;
      ppppppplStack_198 = ppppppplStack_470;
      plStack_180 = plStack_458;
      ppppppplStack_188 = uStack_460;
      plStack_170 = plStack_448;
      ppppppplStack_178 = ppppppplStack_450;
      ppppppplStack_168 = ppppppplStack_440;
      ppppppplStack_4c8 = uStack_480;
      lVar16 = lStack_210;
      ppppppplVar21 = uStack_480;
      lVar1 = lStack_210;
      uVar10 = uStack_1f8;
      puVar4 = puStack_200;
      lVar5 = lStack_208;
      if (lStack_210 == lStack_208) goto LAB_1012f4be8;
      goto LAB_1012f46ac;
    }
    if (uStack_98._1_1_ == 3) {
      if (ppppppplStack_4c0 != (long *******)0x8000000000000001) {
        plStack_158 = plStack_4e0;
        ppppppplStack_160 = ppppppplStack_4d0;
        plStack_1a0 = plStack_500;
        ppppppplStack_1a8 = ppppppplStack_4c8;
        plStack_1e8 = plStack_4f8;
        ppppppplStack_1f0 = ppppppplStack_4b8;
        uStack_98 = (long ******)&UNK_108cde44c;
        plStack_90 = (long *)0x4;
        uStack_480 = (long *******)&uStack_98;
        plVar18 = (long *)0x1;
        plStack_478 = (long *)&DAT_100c7b3a0;
        plVar9 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_480);
        ppppppplVar20 = ppppppplStack_4c0;
        goto joined_r0x0001012f539c;
      }
      FUN_100620d10(&uStack_480,&ppppppplStack_230);
      ppppppplStack_4c0 = uStack_480;
      if (uStack_480 == (long *******)0x8000000000000001) {
        plStack_1a0 = plStack_500;
        ppppppplStack_1a8 = ppppppplStack_4c8;
        plStack_1e8 = plStack_4f8;
        ppppppplStack_1f0 = ppppppplStack_4b8;
        plVar18 = (long *)0x1;
        plVar9 = plStack_478;
        goto LAB_1012f4d24;
      }
      plStack_4e0 = plStack_478;
      plStack_148 = plStack_468;
      ppppppplStack_150 = ppppppplStack_470;
      plStack_138 = plStack_458;
      ppppppplStack_140 = uStack_460;
      plStack_128 = plStack_448;
      ppppppplStack_130 = ppppppplStack_450;
      ppppppplStack_120 = ppppppplStack_440;
      ppppppplStack_4d0 = uStack_480;
      lVar16 = lStack_210;
      lVar1 = lStack_210;
      uVar10 = uStack_1f8;
      puVar4 = puStack_200;
      lVar5 = lStack_208;
      if (lStack_210 == lStack_208) goto LAB_1012f4be8;
      goto LAB_1012f46ac;
    }
    ppppppplStack_230 = (long *******)CONCAT71(ppppppplStack_230._1_7_,0x16);
    if (cVar3 != '\x16') {
      uVar10 = *puVar14;
      puVar12[1] = puVar14[1];
      *puVar12 = uVar10;
      uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
      *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
      *(undefined8 *)((long)puVar12 + 0xf) = uVar10;
      uStack_480 = (long *******)CONCAT71(uStack_480._1_7_,cVar3);
      FUN_100e077ec(&uStack_480);
      lVar16 = lStack_210;
      lVar1 = lStack_210;
      uVar10 = uStack_1f8;
      puVar4 = puStack_200;
      lVar5 = lStack_208;
      if (lStack_210 == lStack_208) goto LAB_1012f4be8;
      goto LAB_1012f46ac;
    }
    plStack_158 = plStack_4e0;
    ppppppplStack_160 = ppppppplStack_4d0;
    plStack_1a0 = plStack_500;
    ppppppplStack_1a8 = ppppppplStack_4c8;
    plStack_1e8 = plStack_4f8;
    ppppppplStack_1f0 = ppppppplStack_4b8;
    plVar9 = (long *)FUN_1088561c0(&UNK_108cde170,0x10);
  }
LAB_1012f5114:
  plVar18 = (long *)0x1;
  ppppppplVar20 = ppppppplStack_4c0;
  goto joined_r0x0001012f4bd8;
LAB_1012f4be8:
  lStack_210 = lVar1;
  plStack_158 = plStack_4e0;
  ppppppplStack_160 = ppppppplStack_4d0;
  plStack_1a0 = plStack_500;
  ppppppplStack_1a8 = ppppppplStack_4c8;
  plStack_1e8 = plStack_4f8;
  ppppppplStack_1f0 = ppppppplStack_4b8;
  if (ppppppplStack_4b8 == (long *******)0x8000000000000001) {
LAB_1012f4c44:
    uStack_480 = (long *******)0x8000000000000000;
    ppppppplStack_4b8 = (long *******)0x8000000000000001;
    plVar18 = (long *)0x1;
    if (pppppplVar19 == (long ******)0x8000000000000001) goto LAB_1012f4c60;
LAB_1012f4e24:
    if (ppppppplVar21 == (long *******)0x8000000000000001) {
      ppppppplVar21 = (long *******)0x8000000000000000;
      if (ppppppplStack_4c0 != (long *******)0x8000000000000001) goto LAB_1012f4e40;
LAB_1012f4e80:
      ppppppplStack_4c0 = (long *******)0x8000000000000000;
    }
    else {
      ppppppplStack_108 = ppppppplStack_198;
      plStack_110 = plStack_1a0;
      ppppppplStack_f8 = ppppppplStack_188;
      plStack_100 = plStack_190;
      ppppppplStack_e8 = ppppppplStack_178;
      plStack_f0 = plStack_180;
      ppppppplStack_d8 = ppppppplStack_168;
      plStack_e0 = plStack_170;
      if (ppppppplStack_4c0 == (long *******)0x8000000000000001) goto LAB_1012f4e80;
LAB_1012f4e40:
      plStack_c8 = plStack_148;
      ppppppplStack_d0 = ppppppplStack_150;
      plStack_b8 = plStack_138;
      ppppppplStack_c0 = ppppppplStack_140;
      plStack_a8 = plStack_128;
      ppppppplStack_b0 = ppppppplStack_130;
      ppppppplStack_a0 = ppppppplStack_120;
    }
    plStack_268 = plStack_468;
    ppppppplStack_270 = ppppppplStack_470;
    plStack_258 = plStack_458;
    ppppppplStack_260 = uStack_460;
    plStack_248 = plStack_448;
    ppppppplStack_250 = ppppppplStack_450;
    ppppppplStack_240 = ppppppplStack_440;
    ppppppplVar15 = uStack_480;
    plVar9 = plStack_478;
    if ((char)ppppppplStack_230 != '\x16') goto LAB_1012f4eac;
LAB_1012f4eb4:
    if (ppppppplVar15 != (long *******)0x8000000000000001) {
      param_1[3] = plStack_268;
      param_1[2] = ppppppplStack_270;
      param_1[5] = plStack_258;
      param_1[4] = ppppppplStack_260;
      param_1[7] = plStack_248;
      param_1[6] = ppppppplStack_250;
      param_1[0x1d] = ppppppplStack_a0;
      param_1[0x26] = ppppppplStack_280;
      param_1[0xe] = ppppppplStack_108;
      param_1[0xd] = plStack_110;
      param_1[0x10] = ppppppplStack_f8;
      param_1[0xf] = plStack_100;
      param_1[0x12] = ppppppplStack_e8;
      param_1[0x11] = plStack_f0;
      param_1[0x14] = ppppppplStack_d8;
      param_1[0x13] = plStack_e0;
      param_1[0x1c] = plStack_a8;
      param_1[0x1b] = ppppppplStack_b0;
      param_1[0x1a] = plStack_b8;
      param_1[0x19] = ppppppplStack_c0;
      param_1[0x18] = plStack_c8;
      param_1[0x17] = ppppppplStack_d0;
      param_1[0x23] = plStack_298;
      param_1[0x22] = ppppppplStack_2a0;
      param_1[0x25] = plStack_288;
      param_1[0x24] = ppppppplStack_290;
      param_1[0x1f] = plStack_2b8;
      param_1[0x1e] = ppppppplStack_2c0;
      param_1[0x21] = plStack_2a8;
      param_1[0x20] = ppppppplStack_2b0;
      *param_1 = ppppppplVar15;
      param_1[1] = plVar9;
      param_1[8] = ppppppplStack_240;
      param_1[9] = pppppplVar19;
      param_1[10] = plStack_4d8;
      param_1[0xb] = uStack_508;
      param_1[0xc] = ppppppplVar21;
      param_1[0x15] = ppppppplStack_4c0;
      param_1[0x16] = plStack_4e0;
      FUN_100d5c778(&lStack_2f8);
      _memcpy(&uStack_480,param_1,0x138);
      if (lStack_498 - lStack_4a0 == 0) {
        return;
      }
      ppppppplStack_160 = (long *******)pppppplStack_488;
      uVar10 = FUN_1087e422c((long)pppppplStack_488 + ((ulong)(lStack_498 - lStack_4a0) >> 6),
                             &ppppppplStack_160,&UNK_10b23a190);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar10;
      if ((alStack_390[0] != -0x7fffffffffffffff) && (alStack_390[0] != -0x8000000000000000)) {
        if ((lStack_370 != 0) && (lStack_370 * 9 != -0x11)) {
          _free(lStack_378 + lStack_370 * -8 + -8);
        }
        func_0x000100cd7284(alStack_390);
      }
      FUN_100dfdaa4(&uStack_480);
      return;
    }
  }
  else {
    plVar18 = (long *)0x0;
    plStack_458 = plStack_1c8;
    uStack_460 = ppppppplStack_1d0;
    plStack_448 = plStack_1b8;
    ppppppplStack_450 = ppppppplStack_1c0;
    ppppppplStack_440 = ppppppplStack_1b0;
    plStack_478 = plStack_4f8;
    uStack_480 = ppppppplStack_4b8;
    plStack_468 = plStack_1d8;
    ppppppplStack_470 = ppppppplStack_1e0;
    if (pppppplVar19 != (long ******)0x8000000000000001) goto LAB_1012f4e24;
LAB_1012f4c60:
    ppppplStack_80 = (long *****)&UNK_108c61018;
    uStack_78 = 4;
    uStack_98 = &ppppplStack_80;
    plStack_90 = (long *)&DAT_100c7b3a0;
    plVar9 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_98);
    if (uStack_480 != (long *******)0x8000000000000000) {
      if ((uStack_460 != (long *******)0x0) && ((long)uStack_460 * 9 != -0x11)) {
        _free(plStack_468 + (-1 - (long)uStack_460));
      }
      func_0x000100cd7284(&uStack_480);
    }
    pppppplVar19 = (long ******)0x8000000000000001;
    ppppppplVar20 = ppppppplStack_4c0;
joined_r0x0001012f4bd8:
    if (ppppppplVar20 != (long *******)0x8000000000000001) {
joined_r0x0001012f539c:
      if (ppppppplVar20 != (long *******)0x8000000000000000) {
        if ((ppppppplStack_140 != (long *******)0x0) && ((long)ppppppplStack_140 * 9 != -0x11)) {
          _free(plStack_148 + (-1 - (long)ppppppplStack_140));
        }
        func_0x000100cd7284(&ppppppplStack_160);
      }
    }
LAB_1012f4d24:
    if ((ppppppplVar21 != (long *******)0x8000000000000001) &&
       (ppppppplVar21 != (long *******)0x8000000000000000)) {
      if ((ppppppplStack_188 != (long *******)0x0) && ((long)ppppppplStack_188 * 9 != -0x11)) {
        _free(plStack_190 + (-1 - (long)ppppppplStack_188));
      }
      func_0x000100cd7284(&ppppppplStack_1a8);
    }
    if ((-0x7fffffffffffffff < (long)pppppplVar19) && (pppppplVar19 != (long ******)0x0)) {
      _free(plStack_4d8);
      ppppppplStack_4b8 = ppppppplStack_1f0;
    }
    iVar17 = 0;
    if (ppppppplStack_4b8 != (long *******)0x8000000000000001) {
      iVar17 = (int)plVar18;
    }
    if ((iVar17 != 0) && (ppppppplStack_4b8 != (long *******)0x8000000000000000)) {
      if ((ppppppplStack_1d0 != (long *******)0x0) && ((long)ppppppplStack_1d0 * 9 != -0x11)) {
        _free(plStack_1d8 + (-1 - (long)ppppppplStack_1d0));
      }
      func_0x000100cd7284(&ppppppplStack_1f0);
    }
    if ((char)ppppppplStack_230 != '\x16') {
      ppppppplVar15 = (long *******)0x8000000000000001;
      plStack_4d8 = plVar18;
      ppppppplStack_4c0 = ppppppplVar20;
LAB_1012f4eac:
      FUN_100e077ec(&ppppppplStack_230);
      goto LAB_1012f4eb4;
    }
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = plVar9;
  if ((ppppppplStack_2c0 != (long *******)0x8000000000000001) &&
     (ppppppplStack_2c0 != (long *******)0x8000000000000000)) {
    if ((ppppppplStack_2a0 != (long *******)0x0) && ((long)ppppppplStack_2a0 * 9 != -0x11)) {
      _free(plStack_2a8 + (-1 - (long)ppppppplStack_2a0));
    }
    func_0x000100cd7284(&ppppppplStack_2c0);
  }
LAB_1012f4f10:
  FUN_100d5c778(&lStack_2f8);
  bVar8 = (bool)(bVar8 ^ 1);
  if (ppppppplStack_340 == (long *******)0x8000000000000002) {
    bVar8 = true;
  }
  if (((!bVar8) && (ppppppplStack_340 != (long *******)0x8000000000000001)) &&
     (ppppppplStack_340 != (long *******)0x8000000000000000)) {
    if ((ppppppplStack_320 != (long *******)0x0) && ((long)ppppppplStack_320 * 9 != -0x11)) {
      _free(plStack_328 + (-1 - (long)ppppppplStack_320));
    }
    func_0x000100cd7284(&ppppppplStack_340);
  }
  return;
}

