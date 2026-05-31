
/* WARNING: Type propagation algorithm not settling */

void FUN_1012ebbd4(ulong *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  code *pcVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte bVar13;
  ulong unaff_x20;
  undefined *puVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  bool bVar17;
  bool bVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  byte *pbStack_378;
  ulong uStack_370;
  byte *pbStack_368;
  ulong uStack_358;
  undefined *puStack_350;
  ulong uStack_348;
  ulong uStack_340;
  undefined *puStack_338;
  ulong uStack_330;
  byte *pbStack_328;
  byte *pbStack_320;
  byte *pbStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  long lStack_2f0;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  byte *pbStack_210;
  ulong uStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  ulong uStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte bStack_170;
  byte bStack_16f;
  undefined6 uStack_16e;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_71 [17];
  
  bVar1 = *param_2;
  if (bVar1 == 0x14) {
    pbStack_110 = *(byte **)(param_2 + 8);
    pbVar11 = *(byte **)(param_2 + 0x10);
    lVar20 = *(long *)(param_2 + 0x18);
    pbVar7 = pbVar11 + lVar20 * 0x20;
    pbStack_100 = (byte *)0x0;
    pbVar15 = pbVar11;
    pbStack_120 = pbVar11;
    pbStack_108 = pbVar7;
    if (lVar20 == 0) {
LAB_1012ebd9c:
      pbStack_118 = pbVar15;
      pbVar8 = (byte *)FUN_1087e422c(0,&UNK_10b231988,&UNK_10b20a590);
LAB_1012ebdb8:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)pbVar8;
    }
    else {
      pbVar15 = pbVar11 + 0x20;
      if (*pbVar11 == 0x16) goto LAB_1012ebd9c;
      uVar9 = *(undefined8 *)(pbVar11 + 1);
      uStack_167 = (undefined7)*(undefined8 *)(pbVar11 + 9);
      bStack_16f = (byte)uVar9;
      uStack_16e = (undefined6)((ulong)uVar9 >> 8);
      uStack_168 = (undefined1)((ulong)uVar9 >> 0x38);
      pbStack_158 = *(byte **)(pbVar11 + 0x18);
      uStack_160 = (undefined1)*(undefined8 *)(pbVar11 + 0x10);
      uStack_15f = (undefined7)((ulong)*(undefined8 *)(pbVar11 + 0x10) >> 8);
      pbStack_100 = (byte *)0x1;
      bStack_170 = *pbVar11;
      pbStack_118 = pbVar15;
      FUN_1004b62d4(&uStack_1b8,&bStack_170);
      pbVar3 = pbStack_1a8;
      pbVar8 = pbStack_1b0;
      uVar19 = uStack_1b8;
      if (uStack_1b8 == 0x8000000000000000) goto LAB_1012ebdb8;
      if (lVar20 == 1) {
LAB_1012ebd5c:
        pbVar7 = (byte *)FUN_1087e422c(1,&UNK_10b231988,&UNK_10b20a590);
LAB_1012ebd78:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)pbVar7;
      }
      else {
        pbStack_118 = pbVar11 + 0x40;
        if (pbVar11[0x20] == 0x16) goto LAB_1012ebd5c;
        uVar9 = *(undefined8 *)(pbVar11 + 0x21);
        uStack_167 = (undefined7)*(undefined8 *)(pbVar11 + 0x29);
        bStack_16f = (byte)uVar9;
        uStack_16e = (undefined6)((ulong)uVar9 >> 8);
        uStack_168 = (undefined1)((ulong)uVar9 >> 0x38);
        pbStack_158 = *(byte **)(pbVar11 + 0x38);
        uStack_160 = (undefined1)*(undefined8 *)(pbVar11 + 0x30);
        uStack_15f = (undefined7)((ulong)*(undefined8 *)(pbVar11 + 0x30) >> 8);
        pbStack_100 = (byte *)0x2;
        bStack_170 = pbVar11[0x20];
        FUN_1004b62d4(&uStack_1b8,&bStack_170);
        pbVar15 = pbStack_1a8;
        pbVar7 = pbStack_1b0;
        uVar10 = uStack_1b8;
        if (uStack_1b8 == 0x8000000000000000) goto LAB_1012ebd78;
        if (lVar20 == 2) {
LAB_1012ec620:
          pbVar11 = (byte *)FUN_1087e422c(2,&UNK_10b231988,&UNK_10b20a590);
LAB_1012ec638:
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar11;
        }
        else {
          pbStack_118 = pbVar11 + 0x60;
          if (pbVar11[0x40] == 0x16) goto LAB_1012ec620;
          uVar9 = *(undefined8 *)(pbVar11 + 0x41);
          uStack_167 = (undefined7)*(undefined8 *)(pbVar11 + 0x49);
          bStack_16f = (byte)uVar9;
          uStack_16e = (undefined6)((ulong)uVar9 >> 8);
          uStack_168 = (undefined1)((ulong)uVar9 >> 0x38);
          pbStack_158 = *(byte **)(pbVar11 + 0x58);
          uStack_160 = (undefined1)*(undefined8 *)(pbVar11 + 0x50);
          uStack_15f = (undefined7)((ulong)*(undefined8 *)(pbVar11 + 0x50) >> 8);
          pbStack_100 = (byte *)0x3;
          bStack_170 = pbVar11[0x40];
          FUN_1004b62d4(&uStack_1b8,&bStack_170);
          pbVar4 = pbStack_1a8;
          pbVar11 = pbStack_1b0;
          uVar2 = uStack_1b8;
          if (uStack_1b8 == 0x8000000000000000) goto LAB_1012ec638;
          FUN_100f30180(&bStack_170,&pbStack_120);
          uVar12 = CONCAT62(uStack_16e,CONCAT11(bStack_16f,bStack_170));
          if (uVar12 == 0x8000000000000007) {
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_167,uStack_168);
          }
          else {
            pbStack_e0 = (byte *)CONCAT71(uStack_15f,uStack_160);
            pbStack_d8 = pbStack_158;
            pbStack_c8 = pbStack_148;
            pbStack_d0 = pbStack_150;
            pbStack_b8 = pbStack_138;
            pbStack_c0 = pbStack_140;
            pbStack_b0 = pbStack_130;
            uVar21 = 0x8000000000000005;
            if (uVar12 != 0x8000000000000006) {
              pbStack_1a0 = pbStack_158;
              pbStack_190 = pbStack_148;
              pbStack_198 = pbStack_150;
              pbStack_180 = pbStack_138;
              pbStack_188 = pbStack_140;
              pbStack_178 = pbStack_130;
              uVar21 = uVar12;
              pbStack_1b0 = (byte *)CONCAT71(uStack_167,uStack_168);
              pbStack_1a8 = pbStack_e0;
            }
            uStack_1b8 = uVar21;
            FUN_100f30180(&bStack_170,&pbStack_120);
            uVar12 = CONCAT62(uStack_16e,CONCAT11(bStack_16f,bStack_170));
            if (uVar12 != 0x8000000000000007) {
              uStack_330 = CONCAT71(uStack_15f,uStack_160);
              pbStack_328 = pbStack_158;
              pbStack_318 = pbStack_148;
              pbStack_320 = pbStack_150;
              pbStack_308 = pbStack_138;
              pbStack_310 = pbStack_140;
              pbStack_300 = pbStack_130;
              if (uVar12 == 0x8000000000000006) {
                uVar12 = 0x8000000000000005;
              }
              else {
                pbStack_1f8 = pbStack_158;
                pbStack_1e8 = pbStack_148;
                pbStack_1f0 = pbStack_150;
                pbStack_1d8 = pbStack_138;
                pbStack_1e0 = pbStack_140;
                pbStack_1d0 = pbStack_130;
                uStack_200 = uStack_330;
              }
              param_1[0xc] = (ulong)pbStack_1a0;
              param_1[0xb] = (ulong)pbStack_1a8;
              param_1[0xe] = (ulong)pbStack_190;
              param_1[0xd] = (ulong)pbStack_198;
              param_1[0x10] = (ulong)pbStack_180;
              param_1[0xf] = (ulong)pbStack_188;
              param_1[10] = (ulong)pbStack_1b0;
              param_1[9] = uStack_1b8;
              *param_1 = uVar19;
              param_1[1] = (ulong)pbVar8;
              param_1[2] = (ulong)pbVar3;
              param_1[3] = uVar10;
              param_1[4] = (ulong)pbVar7;
              param_1[5] = (ulong)pbVar15;
              param_1[6] = uVar2;
              param_1[7] = (ulong)pbVar11;
              param_1[8] = (ulong)pbVar4;
              param_1[0x11] = (ulong)pbStack_178;
              param_1[0x12] = uVar12;
              param_1[0x13] = CONCAT71(uStack_167,uStack_168);
              param_1[0x1a] = (ulong)pbStack_1d0;
              param_1[0x17] = (ulong)pbStack_1e8;
              param_1[0x16] = (ulong)pbStack_1f0;
              param_1[0x19] = (ulong)pbStack_1d8;
              param_1[0x18] = (ulong)pbStack_1e0;
              param_1[0x15] = (ulong)pbStack_1f8;
              param_1[0x14] = uStack_200;
              pbStack_210 = pbStack_1d0;
              uStack_228 = param_1[0x17];
              uStack_230 = param_1[0x16];
              uStack_218 = param_1[0x19];
              uStack_220 = param_1[0x18];
              uStack_248 = param_1[0x13];
              uStack_250 = param_1[0x12];
              uStack_238 = param_1[0x15];
              uStack_240 = param_1[0x14];
              uStack_268 = param_1[0xf];
              uStack_270 = param_1[0xe];
              uStack_258 = param_1[0x11];
              uStack_260 = param_1[0x10];
              uStack_288 = param_1[0xb];
              uStack_290 = param_1[10];
              uStack_278 = param_1[0xd];
              uStack_280 = param_1[0xc];
              uStack_2a8 = param_1[7];
              uStack_2b0 = param_1[6];
              uStack_298 = param_1[9];
              uStack_2a0 = param_1[8];
              uStack_2c8 = param_1[3];
              uStack_2d0 = param_1[2];
              uStack_2b8 = param_1[5];
              uStack_2c0 = param_1[4];
              uStack_2d8 = param_1[1];
              uStack_2e0 = *param_1;
              uVar19 = FUN_100fbc738(&pbStack_120);
              if (uVar19 != 0) {
                *param_1 = 0x8000000000000000;
                param_1[1] = uVar19;
                FUN_100e6867c(&uStack_2e0);
              }
              goto LAB_1012ec454;
            }
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_167,uStack_168);
            if (uVar21 != 0x8000000000000005) {
              FUN_100de6690(&uStack_1b8);
            }
          }
          if (uVar2 != 0) {
            _free(pbVar11);
          }
        }
        if (uVar10 != 0) {
          _free(pbVar7);
        }
      }
      pbVar15 = pbStack_118;
      pbVar7 = pbStack_108;
      if (uVar19 != 0) {
        _free(pbVar8);
        pbVar15 = pbStack_118;
        pbVar7 = pbStack_108;
      }
    }
    lVar20 = ((ulong)((long)pbVar7 - (long)pbVar15) >> 5) + 1;
    while (lVar20 = lVar20 + -1, lVar20 != 0) {
      FUN_100e077ec(pbVar15);
      pbVar15 = pbVar15 + 0x20;
    }
    if (pbStack_110 != (byte *)0x0) {
      _free(pbStack_120);
    }
    goto LAB_1012ec454;
  }
  if (bVar1 != 0x15) {
    uVar19 = FUN_108855b04(param_2,auStack_71,&UNK_10b20ad00);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar19;
    return;
  }
  pbStack_300 = *(byte **)(param_2 + 8);
  pbStack_310 = *(byte **)(param_2 + 0x10);
  pbStack_2f8 = pbStack_310 + *(long *)(param_2 + 0x18) * 0x40;
  uStack_330 = CONCAT71(uStack_330._1_7_,0x16);
  lStack_2f0 = 0;
  uStack_200 = 0x8000000000000006;
  uStack_1b8 = 0x8000000000000006;
  if (*(long *)(param_2 + 0x18) == 0) {
    uStack_1b8 = 0x8000000000000006;
    uStack_200 = 0x8000000000000006;
    puStack_350 = (undefined *)0x0;
    uStack_348 = 0x8000000000000006;
    uStack_340 = 0x8000000000000006;
    puStack_338 = (undefined *)0x0;
    uStack_370 = unaff_x20;
    pbStack_308 = pbStack_310;
LAB_1012ebe18:
    uStack_98 = &UNK_108c982f8;
    uStack_90 = 8;
    bStack_170 = (byte)&uStack_98;
    bStack_16f = (byte)((ulong)&uStack_98 >> 8);
    uStack_16e = (undefined6)((ulong)&uStack_98 >> 0x10);
    uStack_168 = 0xa0;
    uStack_167 = 0x100c7b3;
    puVar14 = (undefined *)0x0;
    uVar19 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_170);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar19;
LAB_1012ebe54:
    bVar6 = true;
    bVar18 = true;
    bVar17 = true;
  }
  else {
    bVar13 = *pbStack_310;
    pbStack_308 = pbStack_310 + 0x40;
    if (bVar13 == 0x16) {
      uStack_348 = 0x8000000000000006;
      uStack_340 = 0x8000000000000006;
      puVar14 = (undefined *)0x8000000000000000;
      puStack_338 = (undefined *)0x8000000000000000;
      uVar19 = 0x8000000000000006;
      uStack_358 = 0x8000000000000006;
      puStack_350 = (undefined *)0x8000000000000000;
      pbVar7 = pbStack_310;
    }
    else {
      puVar22 = (undefined8 *)((ulong)&uStack_98 | 1);
      puVar16 = (undefined8 *)((ulong)&uStack_330 | 1);
      puVar23 = (undefined8 *)((ulong)&bStack_170 | 1);
      uStack_358 = 0x8000000000000006;
      uVar19 = 0x8000000000000006;
      puVar14 = (undefined *)0x8000000000000000;
      puStack_350 = (undefined *)0x8000000000000000;
      uStack_348 = 0x8000000000000006;
      uStack_340 = 0x8000000000000006;
      puStack_338 = (undefined *)0x8000000000000000;
      pbVar7 = pbStack_310;
      do {
        lStack_2f0 = lStack_2f0 + 1;
        uStack_98 = (undefined *)CONCAT71(uStack_98._1_7_,bVar13);
        uVar9 = *(undefined8 *)(pbVar7 + 1);
        puVar22[1] = *(undefined8 *)(pbVar7 + 9);
        *puVar22 = uVar9;
        uVar9 = *(undefined8 *)(pbVar7 + 0x10);
        uVar25 = *(undefined8 *)(pbVar7 + 0x28);
        uVar24 = *(undefined8 *)(pbVar7 + 0x20);
        *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)(pbVar7 + 0x18);
        *(undefined8 *)((long)puVar22 + 0xf) = uVar9;
        pbStack_158 = *(byte **)(pbVar7 + 0x38);
        uStack_168 = (undefined1)uVar25;
        uStack_167 = (undefined7)((ulong)uVar25 >> 8);
        bStack_170 = (byte)uVar24;
        bStack_16f = (byte)((ulong)uVar24 >> 8);
        uStack_16e = (undefined6)((ulong)uVar24 >> 0x10);
        uStack_160 = (undefined1)*(undefined8 *)(pbVar7 + 0x30);
        uStack_15f = (undefined7)((ulong)*(undefined8 *)(pbVar7 + 0x30) >> 8);
        if ((byte)uStack_330 != '\x16') {
          FUN_100e077ec(&uStack_330);
        }
        uVar2 = uStack_88;
        uVar10 = uStack_90;
        pbStack_328 = (byte *)CONCAT71(uStack_167,uStack_168);
        uStack_330 = CONCAT62(uStack_16e,CONCAT11(bStack_16f,bStack_170));
        pbStack_320 = (byte *)CONCAT71(uStack_15f,uStack_160);
        pbStack_318 = pbStack_158;
        pbStack_1f8 = pbStack_368;
        if (0xc < bVar13) {
          if (bVar13 == 0xd) {
            FUN_100bad890(&bStack_170,uStack_90,uStack_88);
            goto LAB_1012ebfcc;
          }
          if (bVar13 != 0xe) {
            if (bVar13 != 0xf) goto LAB_1012ec270;
            FUN_100bad680(&bStack_170,uStack_90,uStack_88);
            goto LAB_1012ebfcc;
          }
          FUN_100bad680(&bStack_170,uStack_88,uStack_80);
          if (uVar10 != 0) goto LAB_1012ebf8c;
LAB_1012ebfd4:
          if ((bStack_170 & 1) == 0) goto LAB_1012ebfdc;
LAB_1012ec298:
          *param_1 = 0x8000000000000000;
          param_1[1] = CONCAT71(uStack_167,uStack_168);
LAB_1012ec2cc:
          bVar18 = true;
          bVar17 = true;
          bVar6 = true;
          uStack_1b8 = uVar19;
          uStack_200 = uStack_358;
          pbStack_1b0 = pbStack_378;
          goto joined_r0x0001012ec2e8;
        }
        if (bVar13 == 1) {
          bStack_16f = uStack_98._1_1_;
          if (4 < uStack_98._1_1_) {
            bStack_16f = 5;
          }
          bStack_170 = 0;
LAB_1012ebfcc:
          FUN_100e077ec(&uStack_98);
          goto LAB_1012ebfd4;
        }
        if (bVar13 == 4) {
          if (4 < uStack_90) {
            uVar10 = 5;
          }
          bStack_16f = (byte)uVar10;
          bStack_170 = 0;
          goto LAB_1012ebfcc;
        }
        if (bVar13 != 0xc) {
LAB_1012ec270:
          uVar9 = FUN_108855b04(&uStack_98,auStack_71,&UNK_10b212660);
          uStack_168 = (undefined1)uVar9;
          uStack_167 = (undefined7)((ulong)uVar9 >> 8);
          bStack_170 = 1;
          goto LAB_1012ec298;
        }
        FUN_100bad890(&bStack_170,uStack_88);
        if (uVar10 == 0) goto LAB_1012ebfd4;
LAB_1012ebf8c:
        _free(uVar2);
        if ((bStack_170 & 1) != 0) goto LAB_1012ec298;
LAB_1012ebfdc:
        bVar13 = (byte)uStack_330;
        if (bStack_16f < 3) {
          if (bStack_16f == 0) {
            if (puVar14 != (undefined *)0x8000000000000000) {
              pbStack_1b0 = pbStack_378;
              uStack_200 = uStack_358;
              uStack_98 = &UNK_108c982f8;
              uStack_90 = 8;
              bStack_170 = (byte)&uStack_98;
              bStack_16f = (byte)((ulong)&uStack_98 >> 8);
              uStack_16e = (undefined6)((ulong)&uStack_98 >> 0x10);
              uStack_168 = 0xa0;
              uStack_167 = 0x100c7b3;
              uStack_1b8 = uVar19;
              uVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_170);
              goto LAB_1012ecb98;
            }
            uStack_330 = CONCAT71(uStack_330._1_7_,0x16);
            if (bVar13 == 0x16) {
              pbStack_1b0 = pbStack_378;
              uStack_200 = uStack_358;
              uStack_1b8 = uVar19;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_1012ecc60;
            }
            uVar9 = *puVar16;
            puVar23[1] = puVar16[1];
            *puVar23 = uVar9;
            uVar9 = *(undefined8 *)((long)puVar16 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar9;
            bStack_170 = bVar13;
            FUN_1004b62d4(&uStack_98,&bStack_170);
            if (uStack_98 == (undefined *)0x8000000000000000) {
              puVar14 = (undefined *)0x0;
              *param_1 = 0x8000000000000000;
              param_1[1] = uStack_90;
              goto LAB_1012ec2cc;
            }
            uStack_370 = uStack_90;
            uStack_3a0 = uStack_88;
            puVar14 = uStack_98;
          }
          else if (bStack_16f == 1) {
            if (puStack_350 != (undefined *)0x8000000000000000) {
              pbStack_1b0 = pbStack_378;
              uStack_200 = uStack_358;
              uStack_98 = &UNK_108caaace;
              uStack_90 = 6;
              bStack_170 = (byte)&uStack_98;
              bStack_16f = (byte)((ulong)&uStack_98 >> 8);
              uStack_16e = (undefined6)((ulong)&uStack_98 >> 0x10);
              uStack_168 = 0xa0;
              uStack_167 = 0x100c7b3;
              uStack_1b8 = uVar19;
              uVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_170);
LAB_1012ecb98:
              *param_1 = 0x8000000000000000;
              param_1[1] = uVar19;
              goto LAB_1012ebe54;
            }
            uStack_330 = CONCAT71(uStack_330._1_7_,0x16);
            if (bVar13 == 0x16) {
              pbStack_1b0 = pbStack_378;
              uStack_200 = uStack_358;
              uStack_1b8 = uVar19;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012ecc60:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1012ecc64);
              (*pcVar5)();
            }
            uVar9 = *puVar16;
            puVar23[1] = puVar16[1];
            *puVar23 = uVar9;
            uVar9 = *(undefined8 *)((long)puVar16 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar9;
            bStack_170 = bVar13;
            FUN_1004b62d4(&uStack_98,&bStack_170);
            puStack_350 = uStack_98;
            if (uStack_98 == (undefined *)0x8000000000000000) {
              puStack_350 = (undefined *)0x0;
              *param_1 = 0x8000000000000000;
              param_1[1] = uStack_90;
              goto LAB_1012ec2cc;
            }
            uStack_380 = uStack_90;
            uStack_398 = uStack_88;
          }
          else {
            if (puStack_338 != (undefined *)0x8000000000000000) {
              pbStack_1b0 = pbStack_378;
              uStack_200 = uStack_358;
              uStack_98 = &UNK_108cde3ec;
              uStack_90 = 4;
              bStack_170 = (byte)&uStack_98;
              bStack_16f = (byte)((ulong)&uStack_98 >> 8);
              uStack_16e = (undefined6)((ulong)&uStack_98 >> 0x10);
              uStack_168 = 0xa0;
              uStack_167 = 0x100c7b3;
              uStack_1b8 = uVar19;
              uVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_170);
              goto LAB_1012ecb98;
            }
            uStack_330 = CONCAT71(uStack_330._1_7_,0x16);
            if (bVar13 == 0x16) {
              pbStack_1b0 = pbStack_378;
              uStack_200 = uStack_358;
              uStack_1b8 = uVar19;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_1012ecc60;
            }
            uVar9 = *puVar16;
            puVar23[1] = puVar16[1];
            *puVar23 = uVar9;
            uVar9 = *(undefined8 *)((long)puVar16 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar9;
            bStack_170 = bVar13;
            FUN_1004b62d4(&uStack_98,&bStack_170);
            if (uStack_98 == (undefined *)0x8000000000000000) {
              puStack_338 = (undefined *)0x0;
              *param_1 = 0x8000000000000000;
              param_1[1] = uStack_90;
              bVar6 = true;
              bVar18 = true;
              bVar17 = true;
              uStack_1b8 = uVar19;
              uStack_200 = uStack_358;
              pbStack_1b0 = pbStack_378;
              goto joined_r0x0001012ec2e8;
            }
            puStack_338 = uStack_98;
            uStack_390 = uStack_88;
            uStack_388 = uStack_90;
          }
        }
        else if (bStack_16f == 3) {
          if (uStack_340 != 0x8000000000000006) {
            pbStack_1b0 = pbStack_378;
            uStack_200 = uStack_358;
            uStack_98 = &UNK_108cadb54;
            uStack_90 = 9;
            bStack_170 = (byte)&uStack_98;
            bStack_16f = (byte)((ulong)&uStack_98 >> 8);
            uStack_16e = (undefined6)((ulong)&uStack_98 >> 0x10);
            uStack_168 = 0xa0;
            uStack_167 = 0x100c7b3;
            uStack_1b8 = uVar19;
            uVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_170);
            goto LAB_1012ecb98;
          }
          func_0x000100f1e618(&bStack_170,&uStack_330);
          uStack_340 = CONCAT62(uStack_16e,CONCAT11(bStack_16f,bStack_170));
          if (uStack_340 == 0x8000000000000006) {
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_167,uStack_168);
            uStack_340 = 0x8000000000000006;
            goto LAB_1012ec2cc;
          }
          pbStack_368 = (byte *)CONCAT71(uStack_167,uStack_168);
          pbStack_1f0 = (byte *)CONCAT71(uStack_15f,uStack_160);
          pbStack_1e8 = pbStack_158;
          pbStack_1d8 = pbStack_148;
          pbStack_1e0 = pbStack_150;
          pbStack_1c8 = pbStack_138;
          pbStack_1d0 = pbStack_140;
          pbStack_1c0 = pbStack_130;
          uStack_358 = uStack_340;
        }
        else if (bStack_16f == 4) {
          if (uStack_348 != 0x8000000000000006) {
            pbStack_1b0 = pbStack_378;
            uStack_200 = uStack_358;
            uStack_98 = &UNK_108cadf95;
            uStack_90 = 5;
            bStack_170 = (byte)&uStack_98;
            bStack_16f = (byte)((ulong)&uStack_98 >> 8);
            uStack_16e = (undefined6)((ulong)&uStack_98 >> 0x10);
            uStack_168 = 0xa0;
            uStack_167 = 0x100c7b3;
            uStack_1b8 = uVar19;
            uVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_170);
            goto LAB_1012ecb98;
          }
          func_0x000100f1e618(&bStack_170,&uStack_330);
          uVar19 = CONCAT62(uStack_16e,CONCAT11(bStack_16f,bStack_170));
          if (uVar19 == 0x8000000000000006) {
            uStack_200 = uStack_358;
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_167,uStack_168);
            bVar17 = true;
            bVar6 = true;
            goto LAB_1012ec3c4;
          }
          pbStack_378 = (byte *)CONCAT71(uStack_167,uStack_168);
          pbStack_1a8 = (byte *)CONCAT71(uStack_15f,uStack_160);
          pbStack_1a0 = pbStack_158;
          pbStack_190 = pbStack_148;
          pbStack_198 = pbStack_150;
          pbStack_180 = pbStack_138;
          pbStack_188 = pbStack_140;
          pbStack_178 = pbStack_130;
          uStack_348 = uVar19;
        }
        else {
          uStack_330 = CONCAT71(uStack_330._1_7_,0x16);
          if (bVar13 == 0x16) {
            pbStack_1b0 = pbStack_378;
            uStack_200 = uStack_358;
            uStack_1b8 = uVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012ecc60;
          }
          uVar9 = *puVar16;
          puVar23[1] = puVar16[1];
          *puVar23 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar23 + 0xf) = uVar9;
          bStack_170 = bVar13;
          FUN_100e077ec(&bStack_170);
        }
        pbVar7 = pbStack_2f8;
        if (pbStack_308 == pbStack_2f8) goto LAB_1012ebc94;
        pbVar11 = pbStack_308 + 0x40;
        bVar13 = *pbStack_308;
        pbVar7 = pbStack_308;
        pbStack_308 = pbVar11;
      } while (bVar13 != 0x16);
    }
    pbVar7 = pbVar7 + 0x40;
LAB_1012ebc94:
    pbVar11 = pbStack_2f8;
    pbStack_1b0 = pbStack_378;
    uStack_200 = uStack_358;
    pbStack_1f8 = pbStack_368;
    uStack_1b8 = uVar19;
    if (puVar14 == (undefined *)0x8000000000000000) goto LAB_1012ebe18;
    bVar6 = puStack_350 == (undefined *)0x8000000000000000;
    if (bVar6) {
      uStack_98 = &UNK_108caaace;
      uStack_90 = 6;
      bStack_170 = (byte)&uStack_98;
      bStack_16f = (byte)((ulong)&uStack_98 >> 8);
      uStack_16e = (undefined6)((ulong)&uStack_98 >> 0x10);
      uStack_168 = 0xa0;
      uStack_167 = 0x100c7b3;
      uVar19 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_170);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar19;
    }
    else {
      if (puStack_338 != (undefined *)0x8000000000000000) {
        uVar19 = 0x8000000000000005;
        if (uStack_340 != 0x8000000000000006) {
          pbStack_118 = pbStack_1f0;
          pbStack_120 = pbStack_368;
          pbStack_108 = pbStack_1e0;
          pbStack_110 = pbStack_1e8;
          pbStack_f8 = pbStack_1d0;
          pbStack_100 = pbStack_1d8;
          pbStack_e8 = pbStack_1c0;
          pbStack_f0 = pbStack_1c8;
          uVar19 = uStack_340;
        }
        uVar10 = 0x8000000000000005;
        if (uStack_348 != 0x8000000000000006) {
          pbStack_d8 = pbStack_1a8;
          pbStack_e0 = pbStack_378;
          pbStack_c8 = pbStack_198;
          pbStack_d0 = pbStack_1a0;
          pbStack_b8 = pbStack_188;
          pbStack_c0 = pbStack_190;
          pbStack_a8 = pbStack_178;
          pbStack_b0 = pbStack_180;
          uVar10 = uStack_348;
        }
        *param_1 = (ulong)puVar14;
        param_1[1] = uStack_370;
        param_1[2] = uStack_3a0;
        param_1[3] = (ulong)puStack_350;
        param_1[4] = uStack_380;
        param_1[5] = uStack_398;
        param_1[6] = (ulong)puStack_338;
        param_1[7] = uStack_388;
        param_1[8] = uStack_390;
        param_1[9] = uVar19;
        param_1[0xb] = (ulong)pbStack_118;
        param_1[10] = (ulong)pbStack_120;
        param_1[0xd] = (ulong)pbStack_108;
        param_1[0xc] = (ulong)pbStack_110;
        param_1[0xf] = (ulong)pbStack_f8;
        param_1[0xe] = (ulong)pbStack_100;
        param_1[0x11] = (ulong)pbStack_e8;
        param_1[0x10] = (ulong)pbStack_f0;
        param_1[0x12] = uVar10;
        param_1[0x1a] = (ulong)pbStack_a8;
        param_1[0x19] = (ulong)pbStack_b0;
        param_1[0x18] = (ulong)pbStack_b8;
        param_1[0x17] = (ulong)pbStack_c0;
        param_1[0x16] = (ulong)pbStack_c8;
        param_1[0x15] = (ulong)pbStack_d0;
        param_1[0x14] = (ulong)pbStack_d8;
        param_1[0x13] = (ulong)pbStack_e0;
        uStack_2d8 = param_1[1];
        uStack_2e0 = *param_1;
        uStack_2c8 = param_1[3];
        uStack_2d0 = param_1[2];
        uStack_2b8 = param_1[5];
        uStack_2c0 = param_1[4];
        uStack_2a8 = param_1[7];
        uStack_2b0 = param_1[6];
        uStack_298 = param_1[9];
        uStack_2a0 = param_1[8];
        uStack_288 = param_1[0xb];
        uStack_290 = param_1[10];
        uStack_278 = param_1[0xd];
        uStack_280 = param_1[0xc];
        uStack_268 = param_1[0xf];
        uStack_270 = param_1[0xe];
        uStack_258 = param_1[0x11];
        uStack_260 = param_1[0x10];
        uStack_248 = param_1[0x13];
        uStack_250 = param_1[0x12];
        uStack_238 = param_1[0x15];
        uStack_240 = param_1[0x14];
        uStack_228 = param_1[0x17];
        uStack_230 = param_1[0x16];
        uStack_218 = param_1[0x19];
        uStack_220 = param_1[0x18];
        pbStack_210 = (byte *)param_1[0x1a];
        FUN_100d34830(&pbStack_310);
        if (pbVar11 == pbVar7) {
          uVar19 = 0;
        }
        else {
          bStack_170 = (byte)lStack_2f0;
          bStack_16f = (byte)((ulong)lStack_2f0 >> 8);
          uStack_16e = (undefined6)((ulong)lStack_2f0 >> 0x10);
          uVar19 = FUN_1087e422c(lStack_2f0 + ((ulong)((long)pbVar11 - (long)pbVar7) >> 6),
                                 &bStack_170,&UNK_10b23a190);
        }
        if ((byte)uStack_330 != '\x16') {
          FUN_100e077ec(&uStack_330);
        }
        if (uVar19 != 0) {
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar19;
          FUN_100e6867c(&uStack_2e0);
        }
        goto LAB_1012ec454;
      }
      uStack_98 = &UNK_108cde3ec;
      uStack_90 = 4;
      bStack_170 = (byte)&uStack_98;
      bStack_16f = (byte)((ulong)&uStack_98 >> 8);
      uStack_16e = (undefined6)((ulong)&uStack_98 >> 0x10);
      uStack_168 = 0xa0;
      uStack_167 = 0x100c7b3;
      uVar19 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_170);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar19;
      if (puStack_350 != (undefined *)0x0) {
        _free(uStack_380);
      }
    }
    if (puVar14 != (undefined *)0x0) {
      _free(uStack_370);
    }
    bVar18 = false;
    bVar17 = false;
  }
joined_r0x0001012ec2e8:
  if (1 < uStack_348 + 0x7ffffffffffffffb) {
    FUN_100de6690(&uStack_1b8);
    bVar17 = bVar18;
  }
LAB_1012ec3c4:
  if (1 < uStack_340 + 0x7ffffffffffffffb) {
    FUN_100de6690(&uStack_200);
  }
  if (((ulong)puStack_338 & 0x7fffffffffffffff) == 0) {
    bVar18 = false;
    if (((ulong)puStack_350 & 0x7fffffffffffffff) != 0) {
      bVar18 = bVar6;
    }
    if (bVar18) goto LAB_1012ec3f4;
LAB_1012ec420:
    bVar6 = false;
    if (((ulong)puVar14 & 0x7fffffffffffffff) != 0) {
      bVar6 = bVar17;
    }
    if (bVar6) goto LAB_1012ec42c;
  }
  else {
    _free(uStack_388);
    bVar18 = false;
    if (((ulong)puStack_350 & 0x7fffffffffffffff) != 0) {
      bVar18 = bVar6;
    }
    if (!bVar18) goto LAB_1012ec420;
LAB_1012ec3f4:
    _free(uStack_380);
    bVar6 = false;
    if (((ulong)puVar14 & 0x7fffffffffffffff) != 0) {
      bVar6 = bVar17;
    }
    if (bVar6) {
LAB_1012ec42c:
      _free(uStack_370);
    }
  }
  FUN_100d34830(&pbStack_310);
  if ((byte)uStack_330 != '\x16') {
    FUN_100e077ec(&uStack_330);
  }
LAB_1012ec454:
  if ((bVar1 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

