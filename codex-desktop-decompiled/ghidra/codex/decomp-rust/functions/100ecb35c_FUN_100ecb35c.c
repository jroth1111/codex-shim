
/* WARNING: Type propagation algorithm not settling */

void FUN_100ecb35c(undefined8 *param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  int iStack_1e4;
  undefined8 *puStack_1e0;
  ulong uStack_1d8;
  undefined *puStack_1d0;
  ulong uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  ulong uStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  
  lStack_178 = param_2 + param_3 * 0x40;
  puStack_1a0 = (undefined8 *)CONCAT71(puStack_1a0._1_7_,0x16);
  puStack_170 = &UNK_10b236800;
  uStack_168 = 8;
  uStack_158 = 0x8000000000000001;
  puStack_140 = (undefined8 *)0x8000000000000001;
  if (param_3 != 0) {
    puVar21 = (undefined8 *)((ulong)&puStack_1a0 | 1);
    puVar16 = (undefined8 *)((ulong)&uStack_90 | 1);
    puVar20 = (undefined8 *)((ulong)&puStack_e0 | 1);
    iStack_1e4 = 2;
    puStack_208 = (undefined *)0x2;
    puStack_1d0 = (undefined *)0x8000000000000000;
    uStack_1c8 = 0x8000000000000001;
    puStack_1c0 = (undefined *)0x8000000000000000;
    puStack_1b8 = (undefined *)0x8000000000000001;
    puStack_1b0 = (undefined *)0x8000000000000001;
    puStack_1a8 = (undefined *)0x8000000000000001;
    puStack_1e0 = (undefined8 *)0x8000000000000001;
    uStack_1d8 = 0x8000000000000001;
    lVar24 = param_2;
    uVar15 = uStack_168;
    puVar2 = puStack_170;
    puVar23 = (undefined8 *)0x8000000000000001;
    lVar22 = lStack_178;
LAB_100ecb414:
    lStack_180 = lVar24;
    __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E
              (&puStack_e0,param_2,puVar2,uVar15);
    puVar9 = puStack_228;
    puVar10 = puStack_230;
    puVar11 = puStack_210;
    puVar12 = puStack_220;
    puVar13 = puStack_238;
    lVar27 = param_2 + 0x40;
    lVar24 = lStack_180;
    uVar19 = uStack_1d8;
    puVar3 = puStack_1f0;
    puVar14 = puStack_1f8;
    if ((char)puStack_e0 == '\x16') goto joined_r0x000100ecb9a4;
    lStack_180 = param_2 + 0x40;
    if ((char)puStack_1a0 != '\x16') {
      FUN_100e077ec(&puStack_1a0);
    }
    puStack_198 = puStack_b8;
    puStack_1a0 = puStack_c0;
    puStack_188 = puStack_a8;
    puStack_190 = puStack_b0;
    FUN_101383dcc(&uStack_90,&puStack_e0);
    puVar8 = puStack_88;
    if (((ulong)uStack_90 & 1) != 0) {
      puStack_138 = puStack_200;
      puStack_148 = puStack_1f8;
      puStack_140 = puStack_1e0;
      puStack_150 = puStack_1f0;
      uStack_158 = uStack_1d8;
      *param_1 = 0x8000000000000000;
      param_1[1] = puStack_88;
      bVar1 = true;
      goto LAB_100ecba48;
    }
    bVar7 = uStack_90._1_1_;
    cVar6 = (char)puStack_1a0;
    if (uStack_90._1_1_ < 4) {
      if (uStack_90._1_1_ < 2) {
        if (uStack_90._1_1_ == 0) {
          if (puStack_1d0 == (undefined *)0x8000000000000000) {
            puStack_1a0 = (undefined8 *)CONCAT71(puStack_1a0._1_7_,0x16);
            if (cVar6 == '\x16') {
              puStack_138 = puStack_200;
              puStack_148 = puStack_1f8;
              puStack_140 = puStack_1e0;
              uStack_158 = uStack_1d8;
              puStack_150 = puStack_1f0;
              puVar16 = (undefined8 *)FUN_1088561c0(&UNK_108cde170,0x10);
            }
            else {
              uVar15 = *puVar21;
              puVar20[1] = puVar21[1];
              *puVar20 = uVar15;
              uVar15 = *(undefined8 *)((long)puVar21 + 0xf);
              *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
              *(undefined8 *)((long)puVar20 + 0xf) = uVar15;
              puStack_e0 = (undefined8 *)CONCAT71(puStack_e0._1_7_,cVar6);
              FUN_1004b62d4(&uStack_90,&puStack_e0);
              puStack_1d0 = uStack_90;
              puVar11 = puStack_88;
              uStack_240 = uStack_80;
              lVar27 = lStack_180;
              lVar24 = lStack_180;
              puVar2 = puStack_170;
              uVar15 = uStack_168;
              if (uStack_90 != (undefined *)0x8000000000000000) goto joined_r0x000100ecb9a4;
              puStack_138 = puStack_200;
              puStack_148 = puStack_1f8;
              puStack_140 = puStack_1e0;
              uStack_158 = uStack_1d8;
              puStack_150 = puStack_1f0;
              puVar16 = puStack_88;
            }
            goto LAB_100ecba40;
          }
          puStack_138 = puStack_200;
          puStack_148 = puStack_1f8;
          puStack_140 = puStack_1e0;
          uStack_158 = uStack_1d8;
          puStack_150 = puStack_1f0;
          uStack_90 = &UNK_108cb4cd2;
          puStack_88 = (undefined8 *)0x3;
          puStack_e0 = &uStack_90;
          puStack_d8 = &DAT_100c7b3a0;
          uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_e0);
        }
        else {
          if (puStack_1c0 == (undefined *)0x8000000000000000) {
            puStack_1a0 = (undefined8 *)CONCAT71(puStack_1a0._1_7_,0x16);
            if (cVar6 == '\x16') {
              puStack_138 = puStack_200;
              puStack_148 = puStack_1f8;
              puStack_140 = puStack_1e0;
              uStack_158 = uStack_1d8;
              puStack_150 = puStack_1f0;
              puVar16 = (undefined8 *)FUN_1088561c0(&UNK_108cde170,0x10);
            }
            else {
              uVar15 = *puVar21;
              puVar20[1] = puVar21[1];
              *puVar20 = uVar15;
              uVar15 = *(undefined8 *)((long)puVar21 + 0xf);
              *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
              *(undefined8 *)((long)puVar20 + 0xf) = uVar15;
              puStack_e0 = (undefined8 *)CONCAT71(puStack_e0._1_7_,cVar6);
              FUN_1004b62d4(&uStack_90,&puStack_e0);
              puStack_1c0 = uStack_90;
              puVar12 = puStack_88;
              uStack_248 = uStack_80;
              lVar27 = lStack_180;
              lVar24 = lStack_180;
              puVar2 = puStack_170;
              uVar15 = uStack_168;
              if (uStack_90 != (undefined *)0x8000000000000000) goto joined_r0x000100ecb9a4;
              puStack_138 = puStack_200;
              puStack_148 = puStack_1f8;
              puStack_140 = puStack_1e0;
              uStack_158 = uStack_1d8;
              puStack_150 = puStack_1f0;
              puVar16 = puStack_88;
            }
            puStack_1c0 = (undefined *)0x0;
            *param_1 = 0x8000000000000000;
            param_1[1] = puVar16;
            goto LAB_100ecba44;
          }
          puStack_138 = puStack_200;
          puStack_148 = puStack_1f8;
          puStack_140 = puStack_1e0;
          uStack_158 = uStack_1d8;
          puStack_150 = puStack_1f0;
          uStack_90 = &UNK_108c61018;
          puStack_88 = (undefined8 *)0x4;
          puStack_e0 = &uStack_90;
          puStack_d8 = &DAT_100c7b3a0;
          uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_e0);
        }
      }
      else {
        if (uStack_90._1_1_ != 2) {
          if (puStack_1a8 != (undefined *)0x8000000000000001) {
            puStack_138 = puStack_200;
            puStack_148 = puStack_1f8;
            puStack_140 = puStack_1e0;
            uStack_158 = uStack_1d8;
            puStack_150 = puStack_1f0;
            uStack_90 = &UNK_108ca155d;
            puStack_88 = (undefined8 *)0xb;
            puStack_e0 = &uStack_90;
            puStack_d8 = &DAT_100c7b3a0;
            uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_e0);
            goto LAB_100ecbe10;
          }
          puStack_1a0 = (undefined8 *)CONCAT71(puStack_1a0._1_7_,0x16);
          if (cVar6 == '\x16') {
            puStack_138 = puStack_200;
            puStack_148 = puStack_1f8;
            puStack_140 = puStack_1e0;
            uStack_158 = uStack_1d8;
            puStack_150 = puStack_1f0;
            puVar16 = (undefined8 *)FUN_1088561c0(&UNK_108cde170,0x10);
          }
          else {
            uVar15 = *puVar21;
            puVar20[1] = puVar21[1];
            *puVar20 = uVar15;
            uVar15 = *(undefined8 *)((long)puVar21 + 0xf);
            *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
            *(undefined8 *)((long)puVar20 + 0xf) = uVar15;
            puStack_e0 = (undefined8 *)CONCAT71(puStack_e0._1_7_,cVar6);
            FUN_1004b60cc(&uStack_90,&puStack_e0);
            puStack_1a8 = uStack_90;
            puVar10 = puStack_88;
            uStack_258 = uStack_80;
            lVar27 = lStack_180;
            lVar24 = lStack_180;
            puVar2 = puStack_170;
            uVar15 = uStack_168;
            if (uStack_90 != (undefined *)0x8000000000000001) goto joined_r0x000100ecb9a4;
            puStack_138 = puStack_200;
            puStack_148 = puStack_1f8;
            puStack_140 = puStack_1e0;
            uStack_158 = uStack_1d8;
            puStack_150 = puStack_1f0;
            puVar16 = puStack_88;
          }
          *param_1 = 0x8000000000000000;
          param_1[1] = puVar16;
          bVar1 = true;
          puStack_1a8 = (undefined *)0x8000000000000001;
          goto LAB_100ecba48;
        }
        if (puStack_1b8 == (undefined *)0x8000000000000001) {
          puStack_1a0 = (undefined8 *)CONCAT71(puStack_1a0._1_7_,0x16);
          if (cVar6 == '\x16') {
            puStack_138 = puStack_200;
            puStack_148 = puStack_1f8;
            puStack_140 = puStack_1e0;
            uStack_158 = uStack_1d8;
            puStack_150 = puStack_1f0;
            puVar16 = (undefined8 *)FUN_1088561c0(&UNK_108cde170,0x10);
          }
          else {
            uVar15 = *puVar21;
            puVar20[1] = puVar21[1];
            *puVar20 = uVar15;
            uVar15 = *(undefined8 *)((long)puVar21 + 0xf);
            *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
            *(undefined8 *)((long)puVar20 + 0xf) = uVar15;
            puStack_e0 = (undefined8 *)CONCAT71(puStack_e0._1_7_,cVar6);
            FUN_1004b60cc(&uStack_90,&puStack_e0);
            puStack_1b8 = uStack_90;
            puVar9 = puStack_88;
            uStack_250 = uStack_80;
            lVar27 = lStack_180;
            lVar24 = lStack_180;
            puVar2 = puStack_170;
            uVar15 = uStack_168;
            if (uStack_90 != (undefined *)0x8000000000000001) goto joined_r0x000100ecb9a4;
            puStack_138 = puStack_200;
            puStack_148 = puStack_1f8;
            puStack_140 = puStack_1e0;
            uStack_158 = uStack_1d8;
            puStack_150 = puStack_1f0;
            puVar16 = puStack_88;
          }
          *param_1 = 0x8000000000000000;
          param_1[1] = puVar16;
          bVar1 = true;
          puStack_1b8 = (undefined *)0x8000000000000001;
          goto LAB_100ecba48;
        }
        puStack_138 = puStack_200;
        puStack_148 = puStack_1f8;
        puStack_140 = puStack_1e0;
        uStack_158 = uStack_1d8;
        puStack_150 = puStack_1f0;
        uStack_90 = &UNK_108ca1558;
        puStack_88 = (undefined8 *)0x5;
        puStack_e0 = &uStack_90;
        puStack_d8 = &DAT_100c7b3a0;
        uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_e0);
      }
    }
    else {
      bVar1 = 5 < uStack_90._1_1_;
      if (bVar1) {
        if (bVar7 == 6) {
          if (uStack_1c8 != 0x8000000000000001) {
            puStack_138 = puStack_200;
            puStack_148 = puStack_1f8;
            puStack_140 = puStack_1e0;
            uStack_158 = uStack_1d8;
            puStack_150 = puStack_1f0;
            uStack_90 = &UNK_108cb1c3d;
            puStack_88 = (undefined8 *)0x5;
            puStack_e0 = &uStack_90;
            puStack_d8 = &DAT_100c7b3a0;
            uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_e0);
            goto LAB_100ecbe10;
          }
          puStack_1a0 = (undefined8 *)CONCAT71(puStack_1a0._1_7_,0x16);
          if (cVar6 != '\x16') {
            uVar15 = *puVar21;
            puVar16[1] = puVar21[1];
            *puVar16 = uVar15;
            uVar15 = *(undefined8 *)((long)puVar21 + 0xf);
            *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
            *(undefined8 *)((long)puVar16 + 0xf) = uVar15;
            uStack_90 = (undefined *)CONCAT71(uStack_90._1_7_,cVar6);
            if (cVar6 == '\x10') {
LAB_100ecb6d8:
              uStack_f8 = 0x8000000000000000;
              FUN_100e077ec(&uStack_90);
              uStack_1d8 = 0x8000000000000000;
              uStack_1c8 = 0x8000000000000000;
              lVar27 = lStack_180;
              lVar24 = lStack_180;
              puVar2 = puStack_170;
              uVar15 = uStack_168;
              uVar19 = uStack_1d8;
              puVar3 = puStack_f0;
              puVar14 = puStack_e8;
            }
            else {
              if (cVar6 == '\x11') {
                puStack_d8 = (undefined *)puStack_88[1];
                puStack_e0 = (undefined8 *)*puStack_88;
                puStack_c8 = (undefined *)puStack_88[3];
                puStack_d0 = (undefined8 *)puStack_88[2];
                FUN_10140da68(&uStack_f8,&puStack_e0);
                _free(puVar8);
              }
              else {
                if (cVar6 == '\x12') goto LAB_100ecb6d8;
                FUN_10140da68(&uStack_f8,&uStack_90);
              }
              lVar27 = lStack_180;
              lVar24 = lStack_180;
              puVar2 = puStack_170;
              uVar15 = uStack_168;
              uStack_1c8 = uStack_f8;
              uVar19 = uStack_f8;
              puVar3 = puStack_f0;
              puVar14 = puStack_e8;
              if (uStack_f8 == 0x8000000000000001) {
                puStack_138 = puStack_200;
                puStack_148 = puStack_1f8;
                puStack_140 = puStack_1e0;
                uStack_158 = uStack_1d8;
                puStack_150 = puStack_1f0;
                goto LAB_100ecc0ec;
              }
            }
            goto joined_r0x000100ecb9a4;
          }
          puStack_138 = puStack_200;
          puStack_148 = puStack_1f8;
          puStack_140 = puStack_1e0;
          uStack_158 = uStack_1d8;
          puStack_150 = puStack_1f0;
          puStack_f0 = (undefined *)FUN_1088561c0(&UNK_108cde170,0x10);
LAB_100ecc0ec:
          *param_1 = 0x8000000000000000;
          param_1[1] = puStack_f0;
          bVar1 = true;
          uStack_1c8 = 0x8000000000000001;
          goto LAB_100ecba48;
        }
        if (bVar7 != 7) {
          puStack_1a0 = (undefined8 *)CONCAT71(puStack_1a0._1_7_,0x16);
          if (cVar6 != '\x16') {
            uVar15 = *puVar21;
            puVar20[1] = puVar21[1];
            *puVar20 = uVar15;
            uVar15 = *(undefined8 *)((long)puVar21 + 0xf);
            *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
            *(undefined8 *)((long)puVar20 + 0xf) = uVar15;
            puStack_e0 = (undefined8 *)CONCAT71(puStack_e0._1_7_,cVar6);
            FUN_100e077ec(&puStack_e0);
            lVar27 = lStack_180;
            lVar24 = lStack_180;
            puVar2 = puStack_170;
            uVar15 = uStack_168;
            goto joined_r0x000100ecb9a4;
          }
          puStack_138 = puStack_200;
          puStack_148 = puStack_1f8;
          puStack_140 = puStack_1e0;
          uStack_158 = uStack_1d8;
          puStack_150 = puStack_1f0;
          uVar15 = FUN_1088561c0(&UNK_108cde170,0x10);
          goto LAB_100ecbe10;
        }
        if (puVar23 != (undefined8 *)0x8000000000000001) {
          puStack_138 = puStack_200;
          puStack_148 = puStack_1f8;
          puStack_140 = puStack_1e0;
          uStack_158 = uStack_1d8;
          puStack_150 = puStack_1f0;
          uStack_90 = &UNK_108cadf95;
          puStack_88 = (undefined8 *)0x5;
          puStack_e0 = &uStack_90;
          puStack_d8 = &DAT_100c7b3a0;
          uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_e0);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar15;
          bVar1 = true;
          goto joined_r0x000100ecc3e8;
        }
        FUN_100623670(&puStack_e0,&puStack_1a0);
        puStack_1e0 = puStack_e0;
        if (puStack_e0 == (undefined8 *)0x8000000000000001) {
          puStack_148 = puStack_1f8;
          puStack_150 = puStack_1f0;
          uStack_158 = uStack_1d8;
          *param_1 = 0x8000000000000000;
          param_1[1] = puStack_d8;
          bVar1 = true;
          goto LAB_100ecba90;
        }
        puStack_200 = puStack_d8;
        puStack_128 = puStack_c8;
        puStack_130 = puStack_d0;
        puStack_118 = puStack_b8;
        puStack_120 = puStack_c0;
        puStack_108 = puStack_a8;
        puStack_110 = puStack_b0;
        puStack_100 = puStack_a0;
        param_2 = lStack_180;
        puVar23 = puStack_e0;
        lVar24 = lStack_180;
        uVar15 = uStack_168;
        puVar2 = puStack_170;
        lVar22 = lStack_178;
        if (lStack_180 == lStack_178) goto LAB_100ecb9b4;
        goto LAB_100ecb414;
      }
      if (bVar7 != 4) {
        if (iStack_1e4 != 2) {
          puStack_138 = puStack_200;
          puStack_148 = puStack_1f8;
          puStack_140 = puStack_1e0;
          uStack_158 = uStack_1d8;
          puStack_150 = puStack_1f0;
          uStack_90 = &UNK_108c520ac;
          puStack_88 = (undefined8 *)0x4;
          puStack_e0 = &uStack_90;
          puStack_d8 = &DAT_100c7b3a0;
          uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_e0);
          goto LAB_100ecbe10;
        }
        puStack_1a0 = (undefined8 *)CONCAT71(puStack_1a0._1_7_,0x16);
        if (cVar6 != '\x16') {
          uVar15 = *puVar21;
          puVar16[1] = puVar21[1];
          *puVar16 = uVar15;
          uVar15 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar15;
          uStack_90 = (undefined *)CONCAT71(uStack_90._1_7_,cVar6);
          if (cVar6 == '\x10') {
LAB_100ecb88c:
            FUN_100e077ec(&uStack_90);
            iStack_1e4 = 0;
            lVar27 = lStack_180;
            lVar24 = lStack_180;
            puVar2 = puStack_170;
            uVar15 = uStack_168;
          }
          else {
            if (cVar6 == '\x11') {
              puStack_d8 = (undefined *)puStack_88[1];
              puStack_e0 = (undefined8 *)*puStack_88;
              puStack_c8 = (undefined *)puStack_88[3];
              puStack_d0 = (undefined8 *)puStack_88[2];
              FUN_100615890(&uStack_f8,&puStack_e0);
              iVar25 = (int)uStack_f8;
              puVar2 = puStack_f0;
              if ((int)uStack_f8 == 0) {
                iStack_1e4 = 1;
                puVar2 = (undefined *)((ulong)puStack_208 & 0xffffffff00000000 | uStack_f8 >> 0x20);
              }
              _free(puVar8);
              puStack_208 = puVar2;
            }
            else {
              if (cVar6 == '\x12') goto LAB_100ecb88c;
              FUN_100615890(&puStack_e0,&uStack_90);
              uVar18 = (ulong)puStack_208 & 0xffffffff00000000;
              puStack_208 = puStack_d8;
              iVar25 = (int)puStack_e0;
              if ((int)puStack_e0 == 0) {
                iStack_1e4 = 1;
                puStack_208 = (undefined *)(uVar18 | (ulong)puStack_e0 >> 0x20);
              }
            }
            lVar27 = lStack_180;
            lVar24 = lStack_180;
            puVar2 = puStack_170;
            uVar15 = uStack_168;
            if (iVar25 != 0) {
              puStack_138 = puStack_200;
              puStack_148 = puStack_1f8;
              puStack_140 = puStack_1e0;
              uStack_158 = uStack_1d8;
              puStack_150 = puStack_1f0;
              goto LAB_100ecc124;
            }
          }
joined_r0x000100ecb9a4:
          puStack_1f8 = puVar14;
          puStack_1f0 = puVar3;
          uStack_1d8 = uVar19;
          lStack_180 = lVar27;
          puStack_238 = puVar13;
          puStack_220 = puVar12;
          puStack_210 = puVar11;
          puStack_230 = puVar10;
          puStack_228 = puVar9;
          param_2 = param_2 + 0x40;
          if (param_2 == lVar22) goto LAB_100ecb9b4;
          goto LAB_100ecb414;
        }
        puStack_138 = puStack_200;
        puStack_148 = puStack_1f8;
        puStack_140 = puStack_1e0;
        uStack_158 = uStack_1d8;
        puStack_150 = puStack_1f0;
        puStack_208 = (undefined *)FUN_1088561c0(&UNK_108cde170,0x10);
LAB_100ecc124:
        param_1[1] = puStack_208;
        goto LAB_100ecc12c;
      }
      if (puStack_1b0 == (undefined *)0x8000000000000001) {
        puStack_1a0 = (undefined8 *)CONCAT71(puStack_1a0._1_7_,0x16);
        if (cVar6 == '\x16') {
          puStack_138 = puStack_200;
          puStack_148 = puStack_1f8;
          puStack_140 = puStack_1e0;
          uStack_158 = uStack_1d8;
          puStack_150 = puStack_1f0;
          puVar16 = (undefined8 *)FUN_1088561c0(&UNK_108cde170,0x10);
        }
        else {
          uVar15 = *puVar21;
          puVar20[1] = puVar21[1];
          *puVar20 = uVar15;
          uVar15 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar15;
          puStack_e0 = (undefined8 *)CONCAT71(puStack_e0._1_7_,cVar6);
          FUN_1004b60cc(&uStack_90,&puStack_e0);
          puStack_1b0 = uStack_90;
          puVar13 = puStack_88;
          uStack_260 = uStack_80;
          lVar27 = lStack_180;
          lVar24 = lStack_180;
          puVar2 = puStack_170;
          uVar15 = uStack_168;
          if (uStack_90 != (undefined *)0x8000000000000001) goto joined_r0x000100ecb9a4;
          puStack_138 = puStack_200;
          puStack_148 = puStack_1f8;
          puStack_140 = puStack_1e0;
          uStack_158 = uStack_1d8;
          puStack_150 = puStack_1f0;
          puVar16 = puStack_88;
        }
        *param_1 = 0x8000000000000000;
        param_1[1] = puVar16;
        bVar1 = true;
        puStack_1b0 = (undefined *)0x8000000000000001;
        goto LAB_100ecba48;
      }
      puStack_138 = puStack_200;
      puStack_148 = puStack_1f8;
      puStack_140 = puStack_1e0;
      uStack_158 = uStack_1d8;
      puStack_150 = puStack_1f0;
      uStack_90 = &UNK_108c98350;
      puStack_88 = (undefined8 *)0x8;
      puStack_e0 = &uStack_90;
      puStack_d8 = &DAT_100c7b3a0;
      uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&puStack_e0);
    }
LAB_100ecbe10:
    param_1[1] = uVar15;
LAB_100ecc12c:
    *param_1 = 0x8000000000000000;
    goto LAB_100ecba44;
  }
  puStack_1c0 = (undefined *)0x0;
  puVar23 = (undefined8 *)0x8000000000000001;
  puStack_140 = (undefined8 *)0x8000000000000001;
  uStack_158 = 0x8000000000000001;
  uStack_1c8 = 0x8000000000000001;
  puStack_1b8 = (undefined *)0x8000000000000001;
  puStack_1b0 = (undefined *)0x8000000000000001;
  puStack_1a8 = (undefined *)0x8000000000000001;
  lStack_180 = param_2;
LAB_100ecba0c:
  uStack_90 = &UNK_108cb4cd2;
  puStack_88 = (undefined8 *)0x3;
  puStack_e0 = &uStack_90;
  puStack_d8 = &DAT_100c7b3a0;
  puVar16 = (undefined8 *)FUN_108856088(s_missing_field_____108ac28f7,&puStack_e0);
LAB_100ecba40:
  puStack_1d0 = (undefined *)0x0;
  *param_1 = 0x8000000000000000;
  param_1[1] = puVar16;
LAB_100ecba44:
  bVar1 = true;
  goto LAB_100ecba48;
LAB_100ecb9b4:
  puStack_138 = puStack_200;
  puStack_148 = puStack_1f8;
  puStack_140 = puStack_1e0;
  uStack_158 = uStack_1d8;
  puStack_150 = puStack_1f0;
  if (puStack_1d0 == (undefined *)0x8000000000000000) goto LAB_100ecba0c;
  if (puStack_1c0 != (undefined *)0x8000000000000000) {
    puVar2 = (undefined *)0x8000000000000000;
    if (puStack_1b8 != (undefined *)0x8000000000000001) {
      puVar2 = puStack_1b8;
    }
    puVar3 = (undefined *)0x8000000000000000;
    if (puStack_1a8 != (undefined *)0x8000000000000001) {
      puVar3 = puStack_1a8;
    }
    puVar4 = (undefined *)0x8000000000000000;
    if (puStack_1b0 != (undefined *)0x8000000000000001) {
      puVar4 = puStack_1b0;
    }
    iVar25 = 0;
    if (iStack_1e4 != 2) {
      iVar25 = iStack_1e4;
    }
    uVar17 = 0;
    if (iStack_1e4 != 2) {
      uVar17 = SUB84(puStack_208,0);
    }
    uVar19 = 0x8000000000000000;
    if (uStack_1c8 != 0x8000000000000001) {
      puStack_88 = puStack_1f8;
      uStack_90 = puStack_1f0;
      uVar19 = uStack_1c8;
    }
    if (puVar23 == (undefined8 *)0x8000000000000001) {
      puVar23 = (undefined8 *)0x8000000000000000;
    }
    else {
      puStack_d8 = puStack_128;
      puStack_e0 = puStack_130;
      puStack_c8 = puStack_118;
      puStack_d0 = puStack_120;
      puStack_b8 = puStack_108;
      puStack_c0 = puStack_110;
      puStack_b0 = puStack_100;
    }
    *param_1 = puStack_1d0;
    param_1[1] = puStack_210;
    param_1[2] = uStack_240;
    param_1[3] = puStack_1c0;
    param_1[4] = puStack_220;
    param_1[5] = uStack_248;
    param_1[6] = puVar2;
    param_1[7] = puStack_228;
    param_1[8] = uStack_250;
    param_1[9] = puVar3;
    param_1[10] = puStack_230;
    param_1[0xb] = uStack_258;
    param_1[0xc] = puVar4;
    param_1[0xd] = puStack_238;
    param_1[0xe] = uStack_260;
    param_1[0xf] = uVar19;
    param_1[0x11] = puStack_88;
    param_1[0x10] = uStack_90;
    param_1[0x12] = puVar23;
    param_1[0x13] = puStack_200;
    param_1[0x15] = puStack_d8;
    param_1[0x14] = puStack_e0;
    param_1[0x17] = puStack_c8;
    param_1[0x16] = puStack_d0;
    param_1[0x19] = puStack_b8;
    param_1[0x18] = puStack_c0;
    param_1[0x1a] = puStack_b0;
    *(int *)(param_1 + 0x1b) = iVar25;
    *(undefined4 *)((long)param_1 + 0xdc) = uVar17;
    goto joined_r0x000100ecbd9c;
  }
  uStack_90 = &UNK_108c61018;
  puStack_88 = (undefined8 *)0x4;
  puStack_e0 = &uStack_90;
  puStack_d8 = &DAT_100c7b3a0;
  uVar15 = FUN_108856088(s_missing_field_____108ac28f7,&puStack_e0);
  puStack_1c0 = (undefined *)0x0;
  *param_1 = 0x8000000000000000;
  param_1[1] = uVar15;
  if (puStack_1d0 != (undefined *)0x0) {
    _free(puStack_210);
  }
  bVar1 = false;
LAB_100ecba48:
  if (puVar23 != (undefined8 *)0x8000000000000001) {
joined_r0x000100ecc3e8:
    if (puVar23 != (undefined8 *)0x8000000000000000) {
      if ((puStack_120 != (undefined8 *)0x0) && ((long)puStack_120 * 9 != -0x11)) {
        _free(puStack_128 + (long)puStack_120 * -8 + -8);
      }
      func_0x000100cd7284(&puStack_140);
    }
  }
LAB_100ecba90:
  puVar23 = puStack_148;
  puVar2 = puStack_150;
  if ((uStack_1c8 != 0x8000000000000001) && (uStack_1c8 != 0x8000000000000000)) {
    if (puStack_148 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)0x0;
      do {
        plVar26 = (long *)(puVar2 + (long)puVar16 * 0x48);
        if (*plVar26 != 0) {
          _free(plVar26[1]);
        }
        if (plVar26[3] == -0x8000000000000000 || plVar26[3] == 0) {
          lVar24 = plVar26[6];
        }
        else {
          _free(plVar26[4]);
          lVar24 = plVar26[6];
        }
        if (lVar24 != -0x8000000000000000) {
          lVar22 = plVar26[7];
          lVar27 = plVar26[8];
          if (lVar27 != 0) {
            puVar20 = (undefined8 *)(lVar22 + 8);
            do {
              if (puVar20[-1] != 0) {
                _free(*puVar20);
              }
              puVar20 = puVar20 + 3;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
          if (lVar24 != 0) {
            _free(lVar22);
          }
        }
        puVar16 = (undefined8 *)((long)puVar16 + 1);
      } while (puVar16 != puVar23);
    }
    if (uStack_1c8 != 0) {
      _free(puVar2);
    }
  }
  if ((-0x7fffffffffffffff < (long)puStack_1b0) && (puStack_1b0 != (undefined *)0x0)) {
    _free(puStack_238);
  }
  if ((-0x7fffffffffffffff < (long)puStack_1a8) && (puStack_1a8 != (undefined *)0x0)) {
    _free(puStack_230);
  }
  if ((-0x7fffffffffffffff < (long)puStack_1b8) && (puStack_1b8 != (undefined *)0x0)) {
    _free(puStack_228);
  }
  if (((ulong)puStack_1c0 & 0x7fffffffffffffff) == 0) {
    bVar5 = false;
    if (((ulong)puStack_1d0 & 0x7fffffffffffffff) != 0) {
      bVar5 = bVar1;
    }
  }
  else {
    _free(puStack_220);
    bVar5 = false;
    if (((ulong)puStack_1d0 & 0x7fffffffffffffff) != 0) {
      bVar5 = bVar1;
    }
  }
  if (bVar5) {
    _free(puStack_210);
  }
  else {
  }
joined_r0x000100ecbd9c:
  if ((char)puStack_1a0 != '\x16') {
    FUN_100e077ec(&puStack_1a0);
  }
  return;
}

