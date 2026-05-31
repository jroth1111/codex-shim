
/* WARNING: Type propagation algorithm not settling */

void FUN_1012e91d8(undefined8 *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  long *******ppppppplVar8;
  code *pcVar9;
  bool bVar10;
  long *******ppppppplVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  byte bVar14;
  undefined8 *puVar15;
  long *******ppppppplVar16;
  undefined8 uVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long ******pppppplVar20;
  long *******unaff_x28;
  long lVar21;
  undefined8 uStack_428;
  long *******ppppppplStack_420;
  long *******ppppppplStack_408;
  long *******ppppppplStack_400;
  long *******ppppppplStack_3f8;
  long lStack_3e0;
  long lStack_3d8;
  char *pcStack_3d0;
  long ******pppppplStack_3c8;
  undefined8 uStack_3c0;
  long *******ppppppplStack_3b8;
  long *******ppppppplStack_3b0;
  long *******ppppppplStack_3a8;
  undefined8 uStack_3a0;
  long *******ppppppplStack_398;
  long *******ppppppplStack_390;
  long *******ppppppplStack_388;
  long *******ppppppplStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *******ppppppplStack_2d0;
  long *******ppppppplStack_2c8;
  long *******ppppppplStack_2c0;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  long *******ppppppplStack_2a8;
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  long *******ppppppplStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  undefined4 uStack_258;
  undefined3 uStack_254;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  undefined8 uStack_d8;
  long *******ppppppplStack_d0;
  undefined8 uStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *****ppppplStack_80;
  undefined8 uStack_78;
  
  if (*param_2 != '\x15') {
    uVar17 = FUN_108855c40(param_2,&ppppplStack_80,&UNK_10b213308);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar17;
    return;
  }
  lStack_3e0 = *(long *)(param_2 + 0x10);
  lStack_3d8 = lStack_3e0 + *(long *)(param_2 + 0x18) * 0x40;
  pcStack_3d0 = (char *)0x0;
  ppppppplVar16 = (long *******)&uStack_3c0;
  pppppplStack_3c8 = (long ******)0x0;
  lStack_288 = 0;
  lStack_280 = 8;
  lStack_278 = 0;
  ppppppplVar19 = (long *******)0x8000000000000002;
  while( true ) {
    FUN_100f24408(&uStack_3c0,&lStack_3e0);
    pcVar7 = pcStack_3d0;
    ppppppplStack_2d0 = ppppppplVar19;
    ppppppplStack_2c8 = unaff_x28;
    if ((byte)uStack_3c0 == '\x18') break;
    uVar3 = *(undefined4 *)((long)((ulong)ppppppplVar16 | 1) + 3);
    uStack_258._0_3_ = (undefined3)*(undefined4 *)((ulong)ppppppplVar16 | 1);
    uStack_258._3_1_ = (undefined1)uVar3;
    uStack_254 = (undefined3)((uint)uVar3 >> 8);
    ppppppplStack_268 = ppppppplStack_3a8;
    ppppppplStack_270 = ppppppplStack_3b0;
    if ((byte)uStack_3c0 == '\x16') {
      if (ppppppplVar19 != (long *******)0x8000000000000002) {
        ppppppplStack_120 = (long *******)&UNK_108cadf95;
        ppppppplStack_118 = (long *******)0x5;
        uStack_3c0 = (long *******)&ppppppplStack_120;
        ppppppplStack_3b8 = (long *******)&DAT_100c7b3a0;
        bVar10 = true;
        uVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_3c0);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar17;
        goto LAB_1012e9be0;
      }
      pcStack_3d0 = (char *)0x0;
      if (pcVar7 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
        goto LAB_1012e9f04;
      }
      cVar4 = *pcVar7;
      ppppppplVar19 = (long *******)0x8000000000000001;
      if (cVar4 != '\x10') {
        if (cVar4 == '\x11') {
          FUN_1004de164(&uStack_3c0,*(undefined8 *)(pcVar7 + 8));
        }
        else {
          if (cVar4 == '\x12') goto LAB_1012e93d4;
          FUN_1004de164(&uStack_3c0);
        }
        if (uStack_3c0 == (long *******)0x8000000000000000) {
          *param_1 = 0x8000000000000000;
          param_1[1] = ppppppplStack_3b8;
          bVar10 = true;
          goto LAB_1012e9be0;
        }
        ppppppplStack_118 = ppppppplStack_3a8;
        ppppppplStack_120 = ppppppplStack_3b0;
        ppppppplStack_108 = ppppppplStack_398;
        ppppppplStack_110 = uStack_3a0;
        ppppppplStack_f8 = ppppppplStack_388;
        ppppppplStack_100 = ppppppplStack_390;
        ppppppplStack_f0 = ppppppplStack_380;
        ppppppplVar19 = uStack_3c0;
        unaff_x28 = ppppppplStack_3b8;
      }
LAB_1012e93d4:
      ppppppplStack_2b8 = ppppppplStack_118;
      ppppppplStack_2c0 = ppppppplStack_120;
      ppppppplStack_2a8 = ppppppplStack_108;
      ppppppplStack_2b0 = ppppppplStack_110;
      ppppppplStack_298 = ppppppplStack_f8;
      ppppppplStack_2a0 = ppppppplStack_100;
      ppppppplStack_290 = ppppppplStack_f0;
    }
    else {
      if ((byte)uStack_3c0 == '\x17') {
        bVar10 = ppppppplVar19 == (long *******)0x8000000000000002;
        if (bVar10) {
          ppppppplStack_250 = (long *******)0x8000000000000001;
        }
        else {
          ppppppplStack_228 = ppppppplStack_2a8;
          ppppppplStack_230 = ppppppplStack_2b0;
          ppppppplStack_218 = ppppppplStack_298;
          ppppppplStack_220 = ppppppplStack_2a0;
          ppppppplStack_210 = ppppppplStack_290;
          ppppppplStack_238 = ppppppplStack_2b8;
          ppppppplStack_240 = ppppppplStack_2c0;
          ppppppplStack_250 = ppppppplVar19;
          ppppppplStack_248 = unaff_x28;
        }
        lStack_188 = lStack_280 + lStack_278 * 0x40;
        lStack_190 = lStack_280;
        ppppppplStack_1b0 = (long *******)CONCAT71(ppppppplStack_1b0._1_7_,0x16);
        puStack_180 = &UNK_10b2365e0;
        uStack_178 = 3;
        if (lStack_278 == 0) {
          ppppppplVar18 = (long *******)0x8000000000000001;
          ppppppplStack_120 = (long *******)0x8000000000000001;
          ppppppplStack_168 = (long *******)0x8000000000000001;
          pppppplVar20 = (long ******)0x8000000000000000;
          goto LAB_1012e99b0;
        }
        puVar15 = (undefined8 *)((ulong)&ppppppplStack_1b0 | 1);
        puVar13 = (undefined8 *)((ulong)&uStack_3c0 | 1);
        pppppplVar20 = (long ******)0x8000000000000000;
        ppppppplStack_3f8 = (long *******)0x8000000000000001;
        ppppppplVar19 = (long *******)0x8000000000000001;
        lVar21 = lStack_280;
        uVar17 = uStack_178;
        puVar5 = puStack_180;
        lVar6 = lStack_188;
        ppppppplVar18 = (long *******)0x8000000000000001;
        goto LAB_1012e94e8;
      }
      *(undefined4 *)((ulong)&ppppppplStack_168 | 1) = uStack_258;
      *(undefined4 *)((long)((ulong)&ppppppplStack_168 | 1) + 3) = uVar3;
      ppppppplStack_150 = ppppppplStack_3a8;
      ppppppplStack_158 = ppppppplStack_3b0;
      ppppppplStack_168 = (long *******)CONCAT71(ppppppplStack_168._1_7_,(byte)uStack_3c0);
      ppppppplStack_160 = ppppppplStack_3b8;
      pcStack_3d0 = (char *)0x0;
      if (pcVar7 == (char *)0x0) {
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_1012e9f04:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1012e9f08);
        (*pcVar9)();
      }
      __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&ppppppplStack_120);
      lVar6 = lStack_278;
      if ((char)ppppppplStack_120 == '\x16') {
        *param_1 = 0x8000000000000000;
        param_1[1] = ppppppplStack_118;
        bVar10 = true;
        FUN_100e077ec(&ppppppplStack_168);
        goto LAB_1012e9be0;
      }
      uStack_3a0 = (long *******)
                   CONCAT44(*(undefined4 *)((long)((ulong)&ppppppplStack_120 | 1) + 3),
                            *(int *)((ulong)&ppppppplStack_120 | 1) << 8);
      ppppppplStack_398 = ppppppplStack_118;
      ppppppplStack_388 = ppppppplStack_108;
      ppppppplStack_390 = ppppppplStack_110;
      ppppppplStack_3b8 = ppppppplStack_160;
      uStack_3c0 = ppppppplStack_168;
      ppppppplStack_3a8 = ppppppplStack_150;
      ppppppplStack_3b0 = ppppppplStack_158;
      uStack_3a0 = (long *******)CONCAT71(uStack_3a0._1_7_,(char)ppppppplStack_120);
      if (lStack_278 == lStack_288) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_288);
      }
      puVar13 = (undefined8 *)(lStack_280 + lVar6 * 0x40);
      puVar13[1] = ppppppplStack_3b8;
      *puVar13 = uStack_3c0;
      puVar13[3] = ppppppplStack_3a8;
      puVar13[2] = ppppppplStack_3b0;
      puVar13[5] = ppppppplStack_398;
      puVar13[4] = uStack_3a0;
      puVar13[7] = ppppppplStack_388;
      puVar13[6] = ppppppplStack_390;
      lStack_278 = lVar6 + 1;
    }
  }
  *param_1 = 0x8000000000000000;
  param_1[1] = ppppppplStack_3b8;
  bVar10 = true;
  goto LAB_1012e9be0;
LAB_1012e94e8:
  do {
    ppppppplVar16 = ppppppplVar18;
    lVar1 = lVar21 + 0x40;
    __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E(&uStack_3c0,lVar21,puVar5,uVar17)
    ;
    bVar14 = (byte)uStack_3c0;
    ppppppplVar18 = ppppppplVar16;
    if ((byte)uStack_3c0 == 0x16) {
      lVar21 = lVar1;
      if (lVar1 == lVar6) break;
      goto LAB_1012e94e8;
    }
    lStack_190 = lVar21 + 0x40;
    if ((char)ppppppplStack_1b0 != '\x16') {
      FUN_100e077ec(&ppppppplStack_1b0);
    }
    ppppppplVar8 = ppppppplStack_3b0;
    ppppppplVar11 = ppppppplStack_3b8;
    ppppppplStack_1a8 = ppppppplStack_398;
    ppppppplStack_1b0 = uStack_3a0;
    ppppppplStack_198 = ppppppplStack_388;
    ppppppplStack_1a0 = ppppppplStack_390;
    if (bVar14 < 0xd) {
      if (bVar14 == 1) {
        bVar14 = uStack_3c0._1_1_;
        if (2 < uStack_3c0._1_1_) {
          bVar14 = 3;
        }
LAB_1012e9630:
        uStack_d8._1_7_ = CONCAT61(uStack_d8._2_6_,bVar14);
        uStack_d8 = (long ******)((ulong)uStack_d8._1_7_ << 8);
        goto LAB_1012e9754;
      }
      if (bVar14 == 4) {
        if ((long *******)0x2 < ppppppplStack_3b8) {
          ppppppplVar11 = (long *******)0x3;
        }
        bVar14 = (byte)ppppppplVar11;
        goto LAB_1012e9630;
      }
      if (bVar14 == 0xc) {
        if (ppppppplStack_3a8 == (long *******)0x4) {
          if (*(int *)ppppppplStack_3b0 != 0x656d616e) goto LAB_1012e96e0;
          uStack_d8 = (long ******)CONCAT62(uStack_d8._2_6_,0x100);
        }
        else if (ppppppplStack_3a8 == (long *******)0x9) {
          if (*ppppppplStack_3b0 != (long ******)0x746e656d75677261 ||
              *(char *)(ppppppplStack_3b0 + 1) != 's') goto LAB_1012e96e0;
          uStack_d8 = (long ******)CONCAT62(uStack_d8._2_6_,0x200);
        }
        else if ((ppppppplStack_3a8 == (long *******)0x5) &&
                (*(int *)ppppppplStack_3b0 == 0x74656d5f &&
                 *(char *)((long)ppppppplStack_3b0 + 4) == 'a')) {
          uStack_d8 = (long ******)((ulong)uStack_d8._2_6_ << 0x10);
        }
        else {
LAB_1012e96e0:
          uStack_d8 = (long ******)CONCAT62(uStack_d8._2_6_,0x300);
        }
joined_r0x0001012e96bc:
        if (ppppppplVar11 != (long *******)0x0) {
          _free(ppppppplVar8);
        }
      }
      else {
LAB_1012e98fc:
        ppppppplStack_d0 = (long *******)FUN_108855b04(&uStack_3c0,&ppppplStack_80,&UNK_10b211720);
        uStack_d8 = (long ******)CONCAT71(uStack_d8._1_7_,1);
      }
    }
    else {
      if (bVar14 == 0xd) {
        if (ppppppplStack_3b0 == (long *******)0x4) {
          if (*(int *)ppppppplStack_3b8 != 0x656d616e) goto LAB_1012e9748;
          uVar12 = 1;
        }
        else if (ppppppplStack_3b0 == (long *******)0x9) {
          if (*ppppppplStack_3b8 != (long ******)0x746e656d75677261 ||
              *(char *)(ppppppplStack_3b8 + 1) != 's') goto LAB_1012e9748;
          uVar12 = 2;
        }
        else if ((ppppppplStack_3b0 == (long *******)0x5) &&
                (*(int *)ppppppplStack_3b8 == 0x74656d5f &&
                 *(char *)((long)ppppppplStack_3b8 + 4) == 'a')) {
          uVar12 = 0;
        }
        else {
LAB_1012e9748:
          uVar12 = 3;
        }
        uStack_d8 = (long ******)((ulong)CONCAT61(uStack_d8._2_6_,uVar12) << 8);
      }
      else {
        if (bVar14 == 0xe) {
          FUN_100a58264(&uStack_d8,ppppppplStack_3b0);
          goto joined_r0x0001012e96bc;
        }
        if (bVar14 != 0xf) goto LAB_1012e98fc;
        FUN_100a58264(&uStack_d8,ppppppplStack_3b8,ppppppplStack_3b0);
      }
LAB_1012e9754:
      FUN_100e077ec(&uStack_3c0);
    }
    if (((ulong)uStack_d8 & 1) != 0) {
      ppppppplStack_118 = ppppppplStack_408;
      ppppppplStack_120 = ppppppplStack_3f8;
      ppppppplStack_160 = ppppppplStack_420;
      uVar17 = 1;
      ppppppplVar11 = ppppppplStack_d0;
      ppppppplStack_168 = ppppppplVar19;
      goto LAB_1012e9a4c;
    }
    cVar4 = (char)ppppppplStack_1b0;
    if (uStack_d8._1_1_ < 2) {
      if (uStack_d8._1_1_ == 0) {
        if (ppppppplVar19 == (long *******)0x8000000000000001) {
          FUN_100623670(&uStack_3c0,&ppppppplStack_1b0);
          if (uStack_3c0 != (long *******)0x8000000000000001) {
            ppppppplStack_420 = ppppppplStack_3b8;
            ppppppplStack_150 = ppppppplStack_3a8;
            ppppppplStack_158 = ppppppplStack_3b0;
            ppppppplStack_140 = ppppppplStack_398;
            ppppppplStack_148 = uStack_3a0;
            ppppppplStack_130 = ppppppplStack_388;
            ppppppplStack_138 = ppppppplStack_390;
            ppppppplStack_128 = ppppppplStack_380;
            ppppppplVar19 = uStack_3c0;
            goto LAB_1012e98cc;
          }
          ppppppplStack_118 = ppppppplStack_408;
          ppppppplStack_120 = ppppppplStack_3f8;
          ppppppplVar19 = (long *******)0x8000000000000001;
          ppppppplStack_160 = ppppppplStack_420;
          ppppppplStack_168 = (long *******)0x8000000000000001;
          uVar17 = 1;
          ppppppplVar11 = ppppppplStack_3b8;
          goto LAB_1012e9a4c;
        }
        ppppppplStack_118 = ppppppplStack_408;
        ppppppplStack_120 = ppppppplStack_3f8;
        ppppppplStack_160 = ppppppplStack_420;
        uStack_d8 = (long ******)&UNK_108cadf95;
        ppppppplStack_d0 = (long *******)0x5;
        uStack_3c0 = (long *******)&uStack_d8;
        ppppppplStack_3b8 = (long *******)&DAT_100c7b3a0;
        ppppppplStack_168 = ppppppplVar19;
        ppppppplVar11 = (long *******)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_3c0);
      }
      else {
        if (pppppplVar20 == (long ******)0x8000000000000000) {
          ppppppplStack_1b0 = (long *******)CONCAT71(ppppppplStack_1b0._1_7_,0x16);
          if (cVar4 == '\x16') {
            ppppppplStack_118 = ppppppplStack_408;
            ppppppplStack_120 = ppppppplStack_3f8;
            ppppppplStack_160 = ppppppplStack_420;
            ppppppplStack_168 = ppppppplVar19;
            ppppppplVar11 = (long *******)FUN_1088561c0(&UNK_108cde170,0x10);
          }
          else {
            uVar17 = *puVar15;
            puVar13[1] = puVar15[1];
            *puVar13 = uVar17;
            uVar17 = *(undefined8 *)((long)puVar15 + 0xf);
            *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
            *(undefined8 *)((long)puVar13 + 0xf) = uVar17;
            uStack_3c0 = (long *******)CONCAT71(uStack_3c0._1_7_,cVar4);
            FUN_1004b62d4(&uStack_d8,&uStack_3c0);
            if (uStack_d8 != (long ******)0x8000000000000000) {
              ppppppplStack_400 = ppppppplStack_d0;
              uStack_428 = uStack_c8;
              pppppplVar20 = uStack_d8;
              goto LAB_1012e98cc;
            }
            ppppppplStack_118 = ppppppplStack_408;
            ppppppplStack_120 = ppppppplStack_3f8;
            ppppppplStack_160 = ppppppplStack_420;
            ppppppplVar11 = ppppppplStack_d0;
            ppppppplStack_168 = ppppppplVar19;
          }
          uVar17 = 1;
          goto LAB_1012e9a48;
        }
        ppppppplStack_118 = ppppppplStack_408;
        ppppppplStack_120 = ppppppplStack_3f8;
        ppppppplStack_160 = ppppppplStack_420;
        uStack_d8 = (long ******)&UNK_108c61018;
        ppppppplStack_d0 = (long *******)0x4;
        uStack_3c0 = (long *******)&uStack_d8;
        ppppppplStack_3b8 = (long *******)&DAT_100c7b3a0;
        ppppppplStack_168 = ppppppplVar19;
        ppppppplVar11 = (long *******)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_3c0);
      }
LAB_1012e9dc0:
      uVar17 = 1;
      goto LAB_1012e9a4c;
    }
    if (uStack_d8._1_1_ == 2) {
      if (ppppppplVar16 != (long *******)0x8000000000000001) {
        ppppppplStack_118 = ppppppplStack_408;
        ppppppplStack_120 = ppppppplStack_3f8;
        ppppppplStack_160 = ppppppplStack_420;
        uStack_d8 = (long ******)&UNK_108cadb54;
        ppppppplStack_d0 = (long *******)0x9;
        uStack_3c0 = (long *******)&uStack_d8;
        uVar17 = 1;
        ppppppplStack_3b8 = (long *******)&DAT_100c7b3a0;
        ppppppplStack_168 = ppppppplVar19;
        ppppppplVar11 = (long *******)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_3c0);
        goto joined_r0x0001012ea034;
      }
      FUN_100620d10(&uStack_3c0,&ppppppplStack_1b0);
      ppppppplVar18 = uStack_3c0;
      if (uStack_3c0 == (long *******)0x8000000000000001) {
        ppppppplStack_160 = ppppppplStack_420;
        uVar17 = 1;
        ppppppplStack_408 = ppppppplVar16;
        ppppppplVar11 = ppppppplStack_3b8;
        ppppppplStack_168 = ppppppplVar19;
        goto LAB_1012e9a94;
      }
      ppppppplStack_408 = ppppppplStack_3b8;
      ppppppplStack_108 = ppppppplStack_3a8;
      ppppppplStack_110 = ppppppplStack_3b0;
      ppppppplStack_f8 = ppppppplStack_398;
      ppppppplStack_100 = uStack_3a0;
      ppppppplStack_e8 = ppppppplStack_388;
      ppppppplStack_f0 = ppppppplStack_390;
      ppppppplStack_e0 = ppppppplStack_380;
      ppppppplStack_3f8 = uStack_3c0;
    }
    else {
      ppppppplStack_1b0 = (long *******)CONCAT71(ppppppplStack_1b0._1_7_,0x16);
      if (cVar4 == '\x16') {
        ppppppplStack_118 = ppppppplStack_408;
        ppppppplStack_120 = ppppppplStack_3f8;
        ppppppplStack_160 = ppppppplStack_420;
        ppppppplStack_168 = ppppppplVar19;
        ppppppplVar11 = (long *******)FUN_1088561c0(&UNK_108cde170,0x10);
        goto LAB_1012e9dc0;
      }
      uVar17 = *puVar15;
      puVar13[1] = puVar15[1];
      *puVar13 = uVar17;
      uVar17 = *(undefined8 *)((long)puVar15 + 0xf);
      *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
      *(undefined8 *)((long)puVar13 + 0xf) = uVar17;
      uStack_3c0 = (long *******)CONCAT71(uStack_3c0._1_7_,cVar4);
      FUN_100e077ec(&uStack_3c0);
    }
LAB_1012e98cc:
    lVar21 = lStack_190;
    lVar1 = lStack_190;
    uVar17 = uStack_178;
    puVar5 = puStack_180;
    lVar6 = lStack_188;
  } while (lStack_190 != lStack_188);
  lStack_190 = lVar1;
  ppppppplStack_118 = ppppppplStack_408;
  ppppppplStack_120 = ppppppplStack_3f8;
  ppppppplStack_160 = ppppppplStack_420;
  ppppppplStack_168 = ppppppplVar19;
  if (ppppppplVar19 == (long *******)0x8000000000000001) {
LAB_1012e99b0:
    uStack_3c0 = (long *******)0x8000000000000000;
    ppppppplVar19 = (long *******)0x8000000000000001;
    uVar17 = 1;
    if (pppppplVar20 != (long ******)0x8000000000000000) goto LAB_1012e9988;
LAB_1012e99d0:
    ppppplStack_80 = (long *****)&UNK_108c61018;
    uStack_78 = 4;
    uStack_d8 = &ppppplStack_80;
    ppppppplStack_d0 = (long *******)&DAT_100c7b3a0;
    ppppppplVar11 = (long *******)FUN_108856088(s_missing_field_____108ac28f7,&uStack_d8);
    if (uStack_3c0 != (long *******)0x8000000000000000) {
      if ((uStack_3a0 != (long *******)0x0) && ((long)uStack_3a0 * 9 != -0x11)) {
        _free(ppppppplStack_3a8 + (-1 - (long)uStack_3a0));
      }
      func_0x000100cd7284(&uStack_3c0);
    }
LAB_1012e9a48:
    pppppplVar20 = (long ******)0x0;
LAB_1012e9a4c:
    ppppppplStack_408 = ppppppplVar16;
    if (ppppppplVar18 != (long *******)0x8000000000000001) {
joined_r0x0001012ea034:
      ppppppplStack_408 = ppppppplVar16;
      if (ppppppplVar18 != (long *******)0x8000000000000000) {
        if ((ppppppplStack_100 != (long *******)0x0) && ((long)ppppppplStack_100 * 9 != -0x11)) {
          _free(ppppppplStack_108 + (-1 - (long)ppppppplStack_100));
        }
        func_0x000100cd7284(&ppppppplStack_120);
      }
    }
LAB_1012e9a94:
    if (((ulong)pppppplVar20 & 0x7fffffffffffffff) == 0) {
      iVar2 = 0;
      if (ppppppplVar19 != (long *******)0x8000000000000001) {
        iVar2 = (int)uVar17;
      }
    }
    else {
      _free(ppppppplStack_400);
      ppppppplVar19 = ppppppplStack_168;
      iVar2 = 0;
      if (ppppppplStack_168 != (long *******)0x8000000000000001) {
        iVar2 = (int)uVar17;
      }
    }
    if ((iVar2 != 0) && (ppppppplVar19 != (long *******)0x8000000000000000)) {
      if ((ppppppplStack_148 != (long *******)0x0) && ((long)ppppppplStack_148 * 9 != -0x11)) {
        _free(ppppppplStack_150 + (-1 - (long)ppppppplStack_148));
      }
      func_0x000100cd7284(&ppppppplStack_168);
    }
    if ((char)ppppppplStack_1b0 != '\x16') {
      pppppplVar20 = (long ******)0x8000000000000000;
      goto LAB_1012e9b78;
    }
  }
  else {
    uVar17 = 0;
    ppppppplStack_398 = ppppppplStack_140;
    uStack_3a0 = ppppppplStack_148;
    ppppppplStack_388 = ppppppplStack_130;
    ppppppplStack_390 = ppppppplStack_138;
    ppppppplStack_380 = ppppppplStack_128;
    ppppppplStack_3b8 = ppppppplStack_420;
    ppppppplStack_3a8 = ppppppplStack_150;
    ppppppplStack_3b0 = ppppppplStack_158;
    uStack_3c0 = ppppppplVar19;
    if (pppppplVar20 == (long ******)0x8000000000000000) goto LAB_1012e99d0;
LAB_1012e9988:
    if (ppppppplVar18 == (long *******)0x8000000000000001) {
      ppppppplVar18 = (long *******)0x8000000000000000;
      ppppppplStack_408 = ppppppplVar16;
    }
    else {
      ppppppplStack_b8 = ppppppplStack_108;
      ppppppplStack_c0 = ppppppplStack_110;
      ppppppplStack_a8 = ppppppplStack_f8;
      ppppppplStack_b0 = ppppppplStack_100;
      ppppppplStack_98 = ppppppplStack_e8;
      ppppppplStack_a0 = ppppppplStack_f0;
      ppppppplStack_90 = ppppppplStack_e0;
    }
    ppppppplStack_1d8 = ppppppplStack_398;
    ppppppplStack_1e0 = uStack_3a0;
    ppppppplStack_1c8 = ppppppplStack_388;
    ppppppplStack_1d0 = ppppppplStack_390;
    ppppppplStack_1c0 = ppppppplStack_380;
    ppppppplStack_1f8 = ppppppplStack_3b8;
    ppppppplStack_200 = uStack_3c0;
    ppppppplStack_1e8 = ppppppplStack_3a8;
    ppppppplStack_1f0 = ppppppplStack_3b0;
    uVar17 = uStack_428;
    ppppppplVar11 = ppppppplStack_400;
    if ((char)ppppppplStack_1b0 == '\x16') goto LAB_1012e9c54;
LAB_1012e9b78:
    FUN_100e077ec(&ppppppplStack_1b0);
    uStack_428 = uVar17;
    ppppppplStack_400 = ppppppplVar11;
    if (pppppplVar20 != (long ******)0x8000000000000000) {
LAB_1012e9c54:
      param_1[6] = ppppppplStack_1e8;
      param_1[5] = ppppppplStack_1f0;
      param_1[8] = ppppppplStack_1d8;
      param_1[7] = ppppppplStack_1e0;
      param_1[10] = ppppppplStack_1c8;
      param_1[9] = ppppppplStack_1d0;
      param_1[4] = ppppppplStack_1f8;
      param_1[3] = ppppppplStack_200;
      param_1[0xf] = ppppppplStack_b8;
      param_1[0xe] = ppppppplStack_c0;
      param_1[0x11] = ppppppplStack_a8;
      param_1[0x10] = ppppppplStack_b0;
      param_1[0x13] = ppppppplStack_98;
      param_1[0x12] = ppppppplStack_a0;
      param_1[0x18] = ppppppplStack_238;
      param_1[0x17] = ppppppplStack_240;
      param_1[0x1a] = ppppppplStack_228;
      param_1[0x19] = ppppppplStack_230;
      param_1[0x1c] = ppppppplStack_218;
      param_1[0x1b] = ppppppplStack_220;
      param_1[0x14] = ppppppplStack_90;
      param_1[0x1d] = ppppppplStack_210;
      param_1[0x16] = ppppppplStack_248;
      param_1[0x15] = ppppppplStack_250;
      *param_1 = pppppplVar20;
      param_1[1] = ppppppplStack_400;
      param_1[2] = uStack_428;
      param_1[0xb] = ppppppplStack_1c0;
      param_1[0xc] = ppppppplVar18;
      param_1[0xd] = ppppppplStack_408;
      FUN_100d5c778(&lStack_288);
      lStack_2f8 = param_1[0x19];
      lStack_300 = param_1[0x18];
      uStack_2e8 = param_1[0x1b];
      uStack_2f0 = param_1[0x1a];
      uStack_2d8 = param_1[0x1d];
      uStack_2e0 = param_1[0x1c];
      uStack_338 = param_1[0x11];
      uStack_340 = param_1[0x10];
      uStack_328 = param_1[0x13];
      uStack_330 = param_1[0x12];
      lStack_318 = param_1[0x15];
      uStack_320 = param_1[0x14];
      uStack_308 = param_1[0x17];
      uStack_310 = param_1[0x16];
      uStack_378 = param_1[9];
      ppppppplStack_380 = (long *******)param_1[8];
      uStack_368 = param_1[0xb];
      uStack_370 = param_1[10];
      uStack_358 = param_1[0xd];
      uStack_360 = param_1[0xc];
      uStack_348 = param_1[0xf];
      uStack_350 = param_1[0xe];
      ppppppplStack_3b8 = (long *******)param_1[1];
      uStack_3c0 = (long *******)*param_1;
      ppppppplStack_3a8 = (long *******)param_1[3];
      ppppppplStack_3b0 = (long *******)param_1[2];
      ppppppplStack_398 = (long *******)param_1[5];
      uStack_3a0 = (long *******)param_1[4];
      ppppppplStack_388 = (long *******)param_1[7];
      ppppppplStack_390 = (long *******)param_1[6];
      if (lStack_3d8 - lStack_3e0 == 0) {
        return;
      }
      ppppppplStack_120 = (long *******)pppppplStack_3c8;
      uVar17 = FUN_1087e422c((long)pppppplStack_3c8 + ((ulong)(lStack_3d8 - lStack_3e0) >> 6),
                             &ppppppplStack_120,&UNK_10b23a190);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar17;
      if ((lStack_318 != -0x7fffffffffffffff) && (lStack_318 != -0x8000000000000000)) {
        if ((lStack_2f8 != 0) && (lStack_2f8 * 9 != -0x11)) {
          _free(lStack_300 + lStack_2f8 * -8 + -8);
        }
        func_0x000100cd7284(&lStack_318);
      }
      FUN_100e00e28(&uStack_3c0);
      return;
    }
  }
  *param_1 = 0x8000000000000000;
  param_1[1] = ppppppplVar11;
  if ((ppppppplStack_250 != (long *******)0x8000000000000001) &&
     (ppppppplStack_250 != (long *******)0x8000000000000000)) {
    if ((ppppppplStack_230 != (long *******)0x0) && ((long)ppppppplStack_230 * 9 != -0x11)) {
      _free(ppppppplStack_238 + (-1 - (long)ppppppplStack_230));
    }
    func_0x000100cd7284(&ppppppplStack_250);
  }
LAB_1012e9be0:
  FUN_100d5c778(&lStack_288);
  bVar10 = (bool)(bVar10 ^ 1);
  if (ppppppplStack_2d0 == (long *******)0x8000000000000002) {
    bVar10 = true;
  }
  if (((!bVar10) && (ppppppplStack_2d0 != (long *******)0x8000000000000001)) &&
     (ppppppplStack_2d0 != (long *******)0x8000000000000000)) {
    if ((ppppppplStack_2b0 != (long *******)0x0) && ((long)ppppppplStack_2b0 * 9 != -0x11)) {
      _free(ppppppplStack_2b8 + (-1 - (long)ppppppplStack_2b0));
    }
    func_0x000100cd7284(&ppppppplStack_2d0);
  }
  return;
}

