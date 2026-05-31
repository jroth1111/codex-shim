
void FUN_10143dd00(undefined8 *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined7 uVar8;
  code *pcVar9;
  undefined1 extraout_w0;
  byte *pbVar10;
  byte *pbVar11;
  undefined7 extraout_var;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  byte *pbStack_2c8;
  byte *pbStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  long lStack_298;
  byte *pbStack_290;
  byte *pbStack_280;
  ulong uStack_278;
  ulong uStack_270;
  long lStack_260;
  long lStack_258;
  byte bStack_250;
  byte bStack_24f;
  undefined6 uStack_24e;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  byte *pbStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  byte *pbStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  byte *pbStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  byte bStack_1af;
  undefined6 uStack_1ae;
  byte *pbStack_1a0;
  byte *pbStack_198;
  long lStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  byte *pbStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  byte bStack_af;
  undefined6 uStack_ae;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    lStack_190 = *(long *)(param_2 + 8);
    pbVar21 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18);
    pbVar10 = pbVar21 + lVar13 * 0x20;
    pbStack_180 = (byte *)0x0;
    pbVar20 = pbVar21;
    pbStack_1a0 = pbVar21;
    pbStack_188 = pbVar10;
    if (lVar13 == 0) {
LAB_10143e5dc:
      pbStack_198 = pbVar20;
      pbVar22 = (byte *)FUN_1087e422c(0,&UNK_10b22d660,&UNK_10b20a590);
LAB_10143e5f8:
      bStack_250 = 3;
      bStack_24f = 0;
      uStack_24e = 0;
      uStack_248 = SUB81(pbVar22,0);
      uStack_247 = (undefined7)((ulong)pbVar22 >> 8);
LAB_10143e600:
      lVar13 = ((ulong)((long)pbVar10 - (long)pbVar20) >> 5) + 1;
      while (lVar13 = lVar13 + -1, pbStack_280 = pbStack_1a0, uStack_270 = lStack_190, lVar13 != 0)
      {
        FUN_100e077ec(pbVar20);
        pbVar20 = pbVar20 + 0x20;
      }
    }
    else {
      pbVar20 = pbVar21 + 0x20;
      bStack_250 = *pbVar21;
      if (bStack_250 == 0x16) goto LAB_10143e5dc;
      uVar12 = *(undefined8 *)(pbVar21 + 1);
      uStack_247 = (undefined7)*(undefined8 *)(pbVar21 + 9);
      bStack_24f = (byte)uVar12;
      uStack_24e = (undefined6)((ulong)uVar12 >> 8);
      uStack_248 = (undefined1)((ulong)uVar12 >> 0x38);
      uStack_238 = *(undefined8 *)(pbVar21 + 0x18);
      uStack_240 = (undefined1)*(undefined8 *)(pbVar21 + 0x10);
      uStack_23f = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0x10) >> 8);
      pbStack_180 = (byte *)0x1;
      pbStack_198 = pbVar20;
      FUN_1004b60cc(&bStack_90,&bStack_250);
      uVar1 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
      pbVar22 = (byte *)CONCAT71(uStack_87,uStack_88);
      if (uVar1 == 0x8000000000000001) goto LAB_10143e5f8;
      if (lVar13 == 1) {
LAB_10143de78:
        pbVar20 = (byte *)FUN_1087e422c(1,&UNK_10b22d660,&UNK_10b20a590);
LAB_10143de94:
        bStack_250 = 3;
        bStack_24f = 0;
        uStack_24e = 0;
        uStack_248 = SUB81(pbVar20,0);
        uStack_247 = (undefined7)((ulong)pbVar20 >> 8);
LAB_10143de9c:
        pbVar20 = pbStack_198;
        pbVar10 = pbStack_188;
        if ((uVar1 & 0x7fffffffffffffff) != 0) {
          _free(pbVar22);
          pbVar20 = pbStack_198;
          pbVar10 = pbStack_188;
        }
        goto LAB_10143e600;
      }
      uVar12 = CONCAT71(uStack_7f,uStack_80);
      pbStack_198 = pbVar21 + 0x40;
      if (pbVar21[0x20] == 0x16) goto LAB_10143de78;
      uVar24 = *(undefined8 *)(pbVar21 + 0x21);
      uStack_247 = (undefined7)*(undefined8 *)(pbVar21 + 0x29);
      bStack_24f = (byte)uVar24;
      uStack_24e = (undefined6)((ulong)uVar24 >> 8);
      uStack_248 = (undefined1)((ulong)uVar24 >> 0x38);
      uStack_238 = *(undefined8 *)(pbVar21 + 0x38);
      uStack_240 = (undefined1)*(undefined8 *)(pbVar21 + 0x30);
      uStack_23f = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0x30) >> 8);
      pbStack_180 = (byte *)0x2;
      bStack_250 = pbVar21[0x20];
      FUN_1004b60cc(&bStack_90,&bStack_250);
      uVar2 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
      pbVar20 = (byte *)CONCAT71(uStack_87,uStack_88);
      if (uVar2 == 0x8000000000000001) goto LAB_10143de94;
      if (lVar13 == 2) {
LAB_10143e8b0:
        pbVar10 = (byte *)FUN_1087e422c(2,&UNK_10b22d660,&UNK_10b20a590);
LAB_10143e8cc:
        bStack_250 = 3;
        bStack_24f = 0;
        uStack_24e = 0;
        uStack_248 = SUB81(pbVar10,0);
        uStack_247 = (undefined7)((ulong)pbVar10 >> 8);
LAB_10143e8d4:
        if ((uVar2 & 0x7fffffffffffffff) != 0) {
          _free(pbVar20);
        }
        goto LAB_10143de9c;
      }
      uVar24 = CONCAT71(uStack_7f,uStack_80);
      pbStack_198 = pbVar21 + 0x60;
      bVar18 = pbVar21[0x40];
      if (bVar18 == 0x16) goto LAB_10143e8b0;
      uVar25 = *(undefined8 *)(pbVar21 + 0x41);
      uStack_a7 = (undefined7)*(undefined8 *)(pbVar21 + 0x49);
      bStack_af = (byte)uVar25;
      uStack_ae = (undefined6)((ulong)uVar25 >> 8);
      uStack_a8 = (undefined1)((ulong)uVar25 >> 0x38);
      uStack_98 = *(undefined8 *)(pbVar21 + 0x58);
      uStack_a0 = (undefined1)*(undefined8 *)(pbVar21 + 0x50);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0x50) >> 8);
      pbStack_180 = (byte *)0x3;
      bStack_b0 = bVar18;
      if (bVar18 != 0x10) {
        if (bVar18 == 0x11) {
          puVar14 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
          uVar25 = *puVar14;
          uStack_88 = (undefined1)puVar14[1];
          uStack_87 = (undefined7)((ulong)puVar14[1] >> 8);
          bStack_90 = (byte)uVar25;
          bStack_8f = (byte)((ulong)uVar25 >> 8);
          uStack_8e = (undefined6)((ulong)uVar25 >> 0x10);
          uStack_78 = puVar14[3];
          uStack_80 = (undefined1)puVar14[2];
          uStack_7f = (undefined7)((ulong)puVar14[2] >> 8);
          FUN_10141f850(&bStack_250,&bStack_90);
          _free(puVar14);
        }
        else {
          if (bVar18 == 0x12) goto LAB_10143ea98;
          FUN_10141f850(&bStack_250,&bStack_b0);
        }
        lVar15 = CONCAT62(uStack_24e,CONCAT11(bStack_24f,bStack_250));
        pbVar10 = (byte *)CONCAT71(uStack_247,uStack_248);
        if (lVar15 != 3) {
          uStack_d8 = uStack_238;
          uStack_e0 = CONCAT71(uStack_23f,uStack_240);
          uStack_d0 = uStack_230;
          if (lVar15 != 4) goto LAB_10143eaa4;
        }
        goto LAB_10143e8cc;
      }
LAB_10143ea98:
      FUN_100e077ec(&bStack_b0);
      lVar15 = 2;
LAB_10143eaa4:
      uStack_118 = uStack_d8;
      uStack_120 = uStack_e0;
      uStack_110 = uStack_d0;
      if (lVar13 == 3) {
LAB_10143ead0:
        pbVar11 = (byte *)FUN_1087e422c(3,&UNK_10b22d660,&UNK_10b20a590);
LAB_10143eae8:
        bStack_250 = 3;
        bStack_24f = 0;
        uStack_24e = 0;
        uStack_248 = SUB81(pbVar11,0);
        uStack_247 = (undefined7)((ulong)pbVar11 >> 8);
        goto LAB_10143e8d4;
      }
      pbStack_198 = pbVar21 + 0x80;
      bVar18 = pbVar21[0x60];
      if (bVar18 == 0x16) goto LAB_10143ead0;
      uVar25 = *(undefined8 *)(pbVar21 + 0x61);
      uStack_a7 = (undefined7)*(undefined8 *)(pbVar21 + 0x69);
      bStack_af = (byte)uVar25;
      uStack_ae = (undefined6)((ulong)uVar25 >> 8);
      uStack_a8 = (undefined1)((ulong)uVar25 >> 0x38);
      uStack_98 = *(undefined8 *)(pbVar21 + 0x78);
      uStack_a0 = (undefined1)*(undefined8 *)(pbVar21 + 0x70);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0x70) >> 8);
      pbStack_180 = (byte *)0x4;
      bStack_b0 = bVar18;
      if (bVar18 != 0x10) {
        if (bVar18 == 0x11) {
          puVar14 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
          uVar25 = *puVar14;
          uStack_88 = (undefined1)puVar14[1];
          uStack_87 = (undefined7)((ulong)puVar14[1] >> 8);
          bStack_90 = (byte)uVar25;
          bStack_8f = (byte)((ulong)uVar25 >> 8);
          uStack_8e = (undefined6)((ulong)uVar25 >> 0x10);
          uStack_78 = puVar14[3];
          uStack_80 = (undefined1)puVar14[2];
          uStack_7f = (undefined7)((ulong)puVar14[2] >> 8);
          FUN_10141f850(&bStack_250,&bStack_90);
          _free(puVar14);
        }
        else {
          if (bVar18 == 0x12) goto LAB_10143ebc0;
          FUN_10141f850(&bStack_250,&bStack_b0);
        }
        lVar23 = CONCAT62(uStack_24e,CONCAT11(bStack_24f,bStack_250));
        pbVar11 = (byte *)CONCAT71(uStack_247,uStack_248);
        if (lVar23 != 3) {
          uStack_f8 = uStack_238;
          uStack_100 = CONCAT71(uStack_23f,uStack_240);
          uStack_f0 = uStack_230;
          if (lVar23 != 4) {
            uStack_d8 = uStack_238;
            uStack_d0 = uStack_230;
            pbStack_290 = pbVar11;
            uStack_e0 = uStack_100;
            if (lVar13 != 4) goto LAB_10143ebe4;
            goto LAB_10143f058;
          }
        }
        goto LAB_10143eae8;
      }
LAB_10143ebc0:
      FUN_100e077ec(&bStack_b0);
      lVar23 = 2;
      uStack_d8 = uStack_f8;
      uStack_e0 = uStack_100;
      uStack_d0 = uStack_f0;
      if (lVar13 == 4) {
LAB_10143f058:
        uStack_100 = uStack_e0;
        uStack_f8 = uStack_d8;
        uStack_f0 = uStack_d0;
        pbVar11 = (byte *)FUN_1087e422c(4,&UNK_10b22d660,&UNK_10b20a590);
        goto LAB_10143eae8;
      }
LAB_10143ebe4:
      pbStack_198 = pbVar21 + 0xa0;
      bVar18 = pbVar21[0x80];
      uStack_e0 = uStack_100;
      if (bVar18 == 0x16) goto LAB_10143f058;
      uVar25 = *(undefined8 *)(pbVar21 + 0x81);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar21 + 0x89);
      bStack_8f = (byte)uVar25;
      uStack_8e = (undefined6)((ulong)uVar25 >> 8);
      uStack_88 = (undefined1)((ulong)uVar25 >> 0x38);
      uStack_78 = *(undefined8 *)(pbVar21 + 0x98);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar21 + 0x90);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0x90) >> 8);
      pbStack_180 = (byte *)0x5;
      uStack_f8 = uStack_d8;
      uStack_f0 = uStack_d0;
      bStack_90 = bVar18;
      if (bVar18 != 0x10) {
        if (bVar18 == 0x11) {
          puVar14 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
          uVar25 = *puVar14;
          uStack_248 = (undefined1)puVar14[1];
          uStack_247 = (undefined7)((ulong)puVar14[1] >> 8);
          bStack_250 = (byte)uVar25;
          bStack_24f = (byte)((ulong)uVar25 >> 8);
          uStack_24e = (undefined6)((ulong)uVar25 >> 0x10);
          uStack_238 = puVar14[3];
          uStack_240 = (undefined1)puVar14[2];
          uStack_23f = (undefined7)((ulong)puVar14[2] >> 8);
          FUN_10142cca8(&bStack_b0,&bStack_250);
          _free(puVar14);
        }
        else {
          if (bVar18 == 0x12) goto LAB_10143ec38;
          FUN_10142cca8(&bStack_b0,&bStack_90);
        }
        uStack_270 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
        pbVar11 = (byte *)CONCAT71(uStack_a7,uStack_a8);
        if (uStack_270 != -0x7ffffffffffffffe) {
          uStack_f8 = uStack_98;
          uStack_100 = CONCAT71(uStack_9f,uStack_a0);
          pbStack_280 = pbVar11;
          if (uStack_270 != -0x7ffffffffffffffd) goto LAB_10143ec48;
        }
        goto LAB_10143eae8;
      }
LAB_10143ec38:
      FUN_100e077ec(&bStack_90);
      uStack_270 = -0x7fffffffffffffff;
LAB_10143ec48:
      uStack_138 = uStack_f8;
      uStack_140 = uStack_100;
      if (lVar13 == 5) {
LAB_10143ec6c:
        uVar12 = 5;
LAB_10143ec70:
        FUN_1087e422c(uVar12,&UNK_10b22d660,&UNK_10b20a590);
        uVar7 = extraout_w0;
        uVar8 = extraout_var;
LAB_10143ec88:
        uStack_247 = uVar8;
        uStack_248 = uVar7;
        bStack_250 = 3;
        bStack_24f = 0;
        uStack_24e = 0;
        if ((-0x7fffffffffffffff < (long)uStack_270) && (uStack_270 != 0)) {
          _free(pbStack_280);
        }
        goto LAB_10143e8d4;
      }
      pbStack_198 = pbVar21 + 0xc0;
      bVar18 = pbVar21[0xa0];
      if (bVar18 == 0x16) goto LAB_10143ec6c;
      uVar25 = *(undefined8 *)(pbVar21 + 0xa1);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar21 + 0xa9);
      bStack_8f = (byte)uVar25;
      uStack_8e = (undefined6)((ulong)uVar25 >> 8);
      uStack_88 = (undefined1)((ulong)uVar25 >> 0x38);
      uStack_78 = *(undefined8 *)(pbVar21 + 0xb8);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar21 + 0xb0);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar21 + 0xb0) >> 8);
      pbStack_180 = (byte *)0x6;
      bStack_90 = bVar18;
      if (bVar18 != 0x10) {
        if (bVar18 == 0x11) {
          puVar14 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
          uVar25 = *puVar14;
          uStack_248 = (undefined1)puVar14[1];
          uStack_247 = (undefined7)((ulong)puVar14[1] >> 8);
          bStack_250 = (byte)uVar25;
          bStack_24f = (byte)((ulong)uVar25 >> 8);
          uStack_24e = (undefined6)((ulong)uVar25 >> 0x10);
          uStack_238 = puVar14[3];
          uStack_240 = (undefined1)puVar14[2];
          uStack_23f = (undefined7)((ulong)puVar14[2] >> 8);
          FUN_1007a47d4(&bStack_b0,&bStack_250);
          uVar8 = uStack_a7;
          uVar7 = uStack_a8;
          bVar18 = bStack_af;
          bVar5 = bStack_b0;
          _free(puVar14);
        }
        else {
          if (bVar18 == 0x12) goto LAB_10143f124;
          FUN_1007a47d4(&bStack_250,&bStack_90);
          bVar18 = bStack_24f;
          uVar7 = uStack_248;
          uVar8 = uStack_247;
          bVar5 = bStack_250;
        }
        if ((bVar5 & 1) == 0) goto LAB_10143f130;
        goto LAB_10143ec88;
      }
LAB_10143f124:
      FUN_100e077ec(&bStack_90);
      bVar18 = 0xc;
LAB_10143f130:
      func_0x000100f26ea4(&bStack_250,&pbStack_1a0);
      bVar5 = bStack_24f;
      uVar7 = uStack_248;
      uVar8 = uStack_247;
      if ((bStack_250 & 1) != 0) goto LAB_10143ec88;
      if (bStack_24f == 6) {
        uVar12 = 6;
        goto LAB_10143ec70;
      }
      pbStack_1c8 = pbStack_280;
      uStack_1b8 = uStack_138;
      uStack_1c0 = uStack_140;
      uStack_238 = uStack_118;
      uStack_240 = (undefined1)uStack_120;
      uStack_23f = (undefined7)((ulong)uStack_120 >> 8);
      uStack_210 = uStack_d8;
      uStack_218 = uStack_e0;
      bStack_250 = (byte)lVar15;
      bStack_24f = (byte)((ulong)lVar15 >> 8);
      uStack_24e = (undefined6)((ulong)lVar15 >> 0x10);
      uStack_248 = SUB81(pbVar10,0);
      uStack_247 = (undefined7)((ulong)pbVar10 >> 8);
      uStack_230 = uStack_110;
      pbStack_220 = pbStack_290;
      uStack_208 = uStack_d0;
      lStack_1d0 = uStack_270;
      bStack_1b0 = bVar5;
      lStack_228 = lVar23;
      uStack_200 = uVar1;
      pbStack_1f8 = pbVar22;
      uStack_1f0 = uVar12;
      uStack_1e8 = uVar2;
      pbStack_1e0 = pbVar20;
      uStack_1d8 = uVar24;
      bStack_1af = bVar18;
      lVar13 = FUN_100fbc738(&pbStack_1a0);
      if (lVar13 == 0) goto LAB_10143e9a8;
      bStack_250 = 3;
      bStack_24f = 0;
      uStack_24e = 0;
      uStack_248 = (undefined1)lVar13;
      uStack_247 = (undefined7)((ulong)lVar13 >> 8);
      if ((uVar1 & 0x7fffffffffffffff) != 0) {
        _free(pbVar22);
      }
      if ((uVar2 & 0x7fffffffffffffff) != 0) {
        _free(pbVar20);
      }
      if ((long)uStack_270 < -0x7ffffffffffffffe) goto LAB_10143e9a8;
    }
    if (uStack_270 != 0) {
      _free(pbStack_280);
    }
  }
  else {
    if (bVar3 != 0x15) {
      uVar12 = FUN_108855b04(param_2,&bStack_b0,&UNK_10b20b3e0);
      goto LAB_10143e9d0;
    }
    uStack_170 = *(undefined8 *)(param_2 + 8);
    pbStack_180 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar10 = pbStack_180 + lVar13;
    pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,0x16);
    lStack_160 = 0;
    pbStack_168 = pbVar10;
    if (*(long *)(param_2 + 0x18) == 0) {
      bVar5 = 6;
      bVar18 = 0xd;
      lStack_260 = 3;
      uStack_270 = 0x8000000000000001;
      uStack_278 = 0x8000000000000001;
      lStack_258 = -0x7ffffffffffffffe;
      lStack_298 = 3;
      pbVar21 = pbStack_180;
      lVar15 = lStack_160;
    }
    else {
      lVar23 = 0;
      puVar17 = (undefined8 *)((ulong)&bStack_250 | 1);
      puVar19 = (undefined8 *)((ulong)&pbStack_1a0 | 1);
      puVar16 = (undefined8 *)((ulong)&bStack_90 | 1);
      puVar14 = (undefined8 *)((ulong)&bStack_b0 | 1);
      bVar18 = 0xd;
      bVar5 = 6;
      lStack_298 = 3;
      lStack_260 = 3;
      lStack_258 = -0x7ffffffffffffffe;
      uStack_278 = 0x8000000000000001;
      uStack_270 = 0x8000000000000001;
      pbVar20 = pbStack_180;
      pbStack_178 = pbStack_180;
      do {
        pbVar22 = pbVar20 + 0x40;
        bStack_250 = *pbVar20;
        pbVar21 = pbVar22;
        lVar15 = lVar23;
        if (bStack_250 == 0x16) break;
        uVar12 = *(undefined8 *)(pbVar20 + 0x10);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar20 + 0x18);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
        uVar12 = *(undefined8 *)(pbVar20 + 1);
        puVar17[1] = *(undefined8 *)(pbVar20 + 9);
        *puVar17 = uVar12;
        pbStack_198 = *(byte **)(pbVar20 + 0x28);
        pbStack_1a0 = *(byte **)(pbVar20 + 0x20);
        pbStack_188 = *(byte **)(pbVar20 + 0x38);
        lStack_190 = *(long *)(pbVar20 + 0x30);
        uVar1 = CONCAT71(uStack_247,uStack_248);
        uVar12 = CONCAT71(uStack_23f,uStack_240);
        if (0xc < bStack_250) {
          if (bStack_250 == 0xd) {
            FUN_100b21d98(&bStack_90,uVar1,uVar12);
            goto LAB_10143dfdc;
          }
          if (bStack_250 != 0xe) {
            if (bStack_250 != 0xf) goto LAB_10143e55c;
            FUN_100b21984(&bStack_90,uVar1,uVar12);
            goto LAB_10143dfdc;
          }
          FUN_100b21984(&bStack_90,uVar12,uStack_238);
          if (uVar1 != 0) goto LAB_10143df9c;
LAB_10143dfe4:
          if ((bStack_90 & 1) == 0) goto LAB_10143dfec;
LAB_10143e584:
          pbVar21 = (byte *)CONCAT71(uStack_87,uStack_88);
          goto LAB_10143e5a0;
        }
        if (bStack_250 == 1) {
          bStack_8f = bStack_24f;
          if (6 < bStack_24f) {
            bStack_8f = 7;
          }
          bStack_90 = 0;
LAB_10143dfdc:
          FUN_100e077ec(&bStack_250);
          goto LAB_10143dfe4;
        }
        if (bStack_250 == 4) {
          if (6 < uVar1) {
            uVar1 = 7;
          }
          bStack_8f = (byte)uVar1;
          bStack_90 = 0;
          goto LAB_10143dfdc;
        }
        if (bStack_250 != 0xc) {
LAB_10143e55c:
          uVar12 = FUN_108855b04(&bStack_250,&bStack_b0,&UNK_10b2117e0);
          uStack_88 = (undefined1)uVar12;
          uStack_87 = (undefined7)((ulong)uVar12 >> 8);
          bStack_90 = 1;
          goto LAB_10143e584;
        }
        FUN_100b21d98(&bStack_90,uVar12);
        if (uVar1 == 0) goto LAB_10143dfe4;
LAB_10143df9c:
        _free(uVar12);
        if ((bStack_90 & 1) != 0) goto LAB_10143e584;
LAB_10143dfec:
        bVar6 = (byte)pbStack_1a0;
        if (bStack_8f < 4) {
          if (1 < bStack_8f) {
            if (bStack_8f == 2) {
              if (lStack_298 == 3) {
                pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,0x16);
                if (bVar6 == 0x16) goto LAB_10143eaf4;
                uVar12 = *puVar19;
                puVar14[1] = puVar19[1];
                *puVar14 = uVar12;
                uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
                *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                *(undefined8 *)((long)puVar14 + 0xf) = uVar12;
                bStack_b0 = bVar6;
                if (bVar6 == 0x10) {
LAB_10143e160:
                  bStack_250 = 2;
                  bStack_24f = 0;
                  uStack_24e = 0;
                  FUN_100e077ec(&bStack_b0);
                  lStack_298 = 2;
                  pbStack_2c8 = (byte *)CONCAT71(uStack_247,uStack_248);
                }
                else {
                  if (bVar6 == 0x11) {
                    puVar4 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
                    uVar12 = *puVar4;
                    uStack_88 = (undefined1)puVar4[1];
                    uStack_87 = (undefined7)((ulong)puVar4[1] >> 8);
                    bStack_90 = (byte)uVar12;
                    bStack_8f = (byte)((ulong)uVar12 >> 8);
                    uStack_8e = (undefined6)((ulong)uVar12 >> 0x10);
                    uStack_78 = puVar4[3];
                    uStack_80 = (undefined1)puVar4[2];
                    uStack_7f = (undefined7)((ulong)puVar4[2] >> 8);
                    FUN_10141f850(&bStack_250,&bStack_90);
                    _free(puVar4);
                  }
                  else {
                    if (bVar6 == 0x12) goto LAB_10143e160;
                    FUN_10141f850(&bStack_250,&bStack_b0);
                  }
                  lStack_298 = CONCAT62(uStack_24e,CONCAT11(bStack_24f,bStack_250));
                  pbVar21 = (byte *)CONCAT71(uStack_247,uStack_248);
                  pbStack_2c8 = pbVar21;
                  if (lStack_298 == 3) goto LAB_10143e5a0;
                }
                uStack_138 = uStack_238;
                uStack_140 = CONCAT71(uStack_23f,uStack_240);
                uStack_130 = uStack_230;
                goto LAB_10143decc;
              }
              lStack_160 = lVar23 + 1;
              bStack_90 = 0xcf;
              bStack_8f = 0xe7;
              uStack_8e = 0x108ca;
              uStack_88 = 7;
              uStack_87 = 0;
              bStack_250 = (byte)&bStack_90;
              bStack_24f = (byte)((ulong)&bStack_90 >> 8);
              uStack_24e = (undefined6)((ulong)&bStack_90 >> 0x10);
              uStack_248 = 0xa0;
              uStack_247 = 0x100c7b3;
              pbStack_178 = pbVar22;
              uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_250);
            }
            else {
              if (lStack_260 == 3) {
                pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,0x16);
                if (bVar6 == 0x16) goto LAB_10143eaf4;
                uVar12 = *puVar19;
                puVar14[1] = puVar19[1];
                *puVar14 = uVar12;
                uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
                *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                *(undefined8 *)((long)puVar14 + 0xf) = uVar12;
                bStack_b0 = bVar6;
                if (bVar6 == 0x10) {
LAB_10143e310:
                  bStack_250 = 2;
                  bStack_24f = 0;
                  uStack_24e = 0;
                  FUN_100e077ec(&bStack_b0);
                  lStack_260 = 2;
                  pbStack_2c0 = (byte *)CONCAT71(uStack_247,uStack_248);
                }
                else {
                  if (bVar6 == 0x11) {
                    puVar4 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
                    uVar12 = *puVar4;
                    uStack_88 = (undefined1)puVar4[1];
                    uStack_87 = (undefined7)((ulong)puVar4[1] >> 8);
                    bStack_90 = (byte)uVar12;
                    bStack_8f = (byte)((ulong)uVar12 >> 8);
                    uStack_8e = (undefined6)((ulong)uVar12 >> 0x10);
                    uStack_78 = puVar4[3];
                    uStack_80 = (undefined1)puVar4[2];
                    uStack_7f = (undefined7)((ulong)puVar4[2] >> 8);
                    FUN_10141f850(&bStack_250,&bStack_90);
                    _free(puVar4);
                  }
                  else {
                    if (bVar6 == 0x12) goto LAB_10143e310;
                    FUN_10141f850(&bStack_250,&bStack_b0);
                  }
                  lStack_260 = CONCAT62(uStack_24e,CONCAT11(bStack_24f,bStack_250));
                  pbVar21 = (byte *)CONCAT71(uStack_247,uStack_248);
                  pbStack_2c0 = pbVar21;
                  if (lStack_260 == 3) goto LAB_10143e5a0;
                }
                uStack_118 = uStack_238;
                uStack_120 = CONCAT71(uStack_23f,uStack_240);
                uStack_110 = uStack_230;
                goto LAB_10143decc;
              }
              lStack_160 = lVar23 + 1;
              bStack_90 = 0xd6;
              bStack_8f = 0xe7;
              uStack_8e = 0x108ca;
              uStack_88 = 9;
              uStack_87 = 0;
              bStack_250 = (byte)&bStack_90;
              bStack_24f = (byte)((ulong)&bStack_90 >> 8);
              uStack_24e = (undefined6)((ulong)&bStack_90 >> 0x10);
              uStack_248 = 0xa0;
              uStack_247 = 0x100c7b3;
              pbStack_178 = pbVar22;
              uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_250);
            }
LAB_10143ef18:
            uStack_248 = (undefined1)uVar12;
            uStack_247 = (undefined7)((ulong)uVar12 >> 8);
            pbVar22 = pbStack_178;
joined_r0x00010143ef38:
            uStack_24e = 0;
            bStack_24f = 0;
            bStack_250 = 3;
            pbStack_178 = pbVar22;
            if (lStack_258 != -0x7ffffffffffffffe) {
joined_r0x00010143eecc:
              uStack_24e = 0;
              bStack_24f = 0;
              bStack_250 = 3;
              if (-0x7fffffffffffffff < lStack_258) {
                uStack_24e = 0;
                bStack_24f = 0;
                bStack_250 = 3;
                if (lStack_258 != 0) {
                  _free(pbStack_2a8);
                }
              }
            }
LAB_10143e958:
            if ((-0x7fffffffffffffff < (long)uStack_270) && (uStack_270 != 0)) {
              _free(pbStack_2b0);
            }
            if ((-0x7fffffffffffffff < (long)uStack_278) && (uStack_278 != 0)) {
              _free(pbStack_2b8);
            }
            FUN_100d34830(&pbStack_180);
            if ((byte)pbStack_1a0 != '\x16') {
              FUN_100e077ec(&pbStack_1a0);
            }
            goto LAB_10143e9a8;
          }
          if (bStack_8f == 0) {
            if (uStack_278 != 0x8000000000000001) {
              lStack_160 = lVar23 + 1;
              bStack_90 = 0xe0;
              bStack_8f = 0x82;
              uStack_8e = 0x108c9;
              uStack_88 = 8;
              uStack_87 = 0;
              bStack_250 = (byte)&bStack_90;
              bStack_24f = (byte)((ulong)&bStack_90 >> 8);
              uStack_24e = (undefined6)((ulong)&bStack_90 >> 0x10);
              uStack_248 = 0xa0;
              uStack_247 = 0x100c7b3;
              pbStack_178 = pbVar22;
              uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_250);
              goto LAB_10143ef18;
            }
            pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,0x16);
            if (bVar6 == 0x16) {
              lStack_160 = lVar23 + 1;
              pbStack_178 = pbVar22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10143efd8;
            }
            uVar12 = *puVar19;
            puVar17[1] = puVar19[1];
            *puVar17 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
            bStack_250 = bVar6;
            FUN_1004b60cc(&bStack_90,&bStack_250);
            uStack_278 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
            pbVar21 = (byte *)CONCAT71(uStack_87,uStack_88);
            if (uStack_278 == 0x8000000000000001) {
              uStack_278 = 0x8000000000000001;
              goto LAB_10143e5a0;
            }
            uStack_2d8 = CONCAT71(uStack_7f,uStack_80);
            pbStack_2b8 = pbVar21;
          }
          else {
            if (uStack_270 != 0x8000000000000001) {
              lStack_160 = lVar23 + 1;
              bStack_90 = 0xc5;
              bStack_8f = 0xe7;
              uStack_8e = 0x108ca;
              uStack_88 = 10;
              uStack_87 = 0;
              bStack_250 = (byte)&bStack_90;
              bStack_24f = (byte)((ulong)&bStack_90 >> 8);
              uStack_24e = (undefined6)((ulong)&bStack_90 >> 0x10);
              uStack_248 = 0xa0;
              uStack_247 = 0x100c7b3;
              pbStack_178 = pbVar22;
              uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_250);
              goto LAB_10143ef18;
            }
            pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,0x16);
            if (bVar6 == 0x16) {
              lStack_160 = lVar23 + 1;
              pbStack_178 = pbVar22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10143efd8;
            }
            uVar12 = *puVar19;
            puVar17[1] = puVar19[1];
            *puVar17 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
            bStack_250 = bVar6;
            FUN_1004b60cc(&bStack_90,&bStack_250);
            uStack_270 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
            pbVar21 = (byte *)CONCAT71(uStack_87,uStack_88);
            if (uStack_270 == 0x8000000000000001) {
              uStack_270 = 0x8000000000000001;
              goto LAB_10143e5a0;
            }
            uStack_2d0 = CONCAT71(uStack_7f,uStack_80);
            pbStack_2b0 = pbVar21;
          }
        }
        else {
          if (5 < bStack_8f) {
            if (bStack_8f != 6) {
              pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,0x16);
              if (bVar6 != 0x16) {
                uVar12 = *puVar19;
                puVar17[1] = puVar19[1];
                *puVar17 = uVar12;
                uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
                *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
                bStack_250 = bVar6;
                FUN_100e077ec(&bStack_250);
                goto LAB_10143decc;
              }
LAB_10143eaf4:
              pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,0x16);
              lStack_160 = lVar23 + 1;
              pbStack_178 = pbVar22;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10143efd8:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10143efdc);
              (*pcVar9)();
            }
            if (bVar5 != 6) {
              lStack_160 = lVar23 + 1;
              bStack_90 = 0xef;
              bStack_8f = 0xe7;
              uStack_8e = 0x108ca;
              uStack_88 = 0x17;
              uStack_87 = 0;
              bStack_250 = (byte)&bStack_90;
              bStack_24f = (byte)((ulong)&bStack_90 >> 8);
              uStack_24e = (undefined6)((ulong)&bStack_90 >> 0x10);
              uStack_248 = 0xa0;
              uStack_247 = 0x100c7b3;
              pbStack_178 = pbVar22;
              uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_250);
              goto LAB_10143ef18;
            }
            pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,0x16);
            if (bVar6 == 0x16) goto LAB_10143eaf4;
            uVar12 = *puVar19;
            puVar16[1] = puVar19[1];
            *puVar16 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar16 + 0xf) = uVar12;
            bStack_90 = bVar6;
            if (bVar6 == 0x10) {
LAB_10143e1d8:
              bStack_b0 = 0;
              bStack_af = 5;
              FUN_100e077ec(&bStack_90);
            }
            else if (bVar6 == 0x11) {
              puVar4 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
              uVar12 = *puVar4;
              uStack_248 = (undefined1)puVar4[1];
              uStack_247 = (undefined7)((ulong)puVar4[1] >> 8);
              bStack_250 = (byte)uVar12;
              bStack_24f = (byte)((ulong)uVar12 >> 8);
              uStack_24e = (undefined6)((ulong)uVar12 >> 0x10);
              uStack_238 = puVar4[3];
              uStack_240 = (undefined1)puVar4[2];
              uStack_23f = (undefined7)((ulong)puVar4[2] >> 8);
              FUN_101434244(&bStack_b0,&bStack_250);
              _free(puVar4);
            }
            else {
              if (bVar6 == 0x12) goto LAB_10143e1d8;
              FUN_101434244(&bStack_b0,&bStack_90);
            }
            bVar5 = bStack_af;
            if (bStack_b0 != 1) goto LAB_10143decc;
            pbVar21 = (byte *)CONCAT71(uStack_a7,uStack_a8);
LAB_10143e5a0:
            lStack_160 = lVar23 + 1;
            uStack_248 = SUB81(pbVar21,0);
            uStack_247 = (undefined7)((ulong)pbVar21 >> 8);
            goto joined_r0x00010143ef38;
          }
          if (bStack_8f != 4) {
            if (bVar18 != 0xd) {
              lStack_160 = lVar23 + 1;
              bStack_90 = 0xe6;
              bStack_8f = 0xe7;
              uStack_8e = 0x108ca;
              uStack_88 = 9;
              uStack_87 = 0;
              bStack_250 = (byte)&bStack_90;
              bStack_24f = (byte)((ulong)&bStack_90 >> 8);
              uStack_24e = (undefined6)((ulong)&bStack_90 >> 0x10);
              uStack_248 = 0xa0;
              uStack_247 = 0x100c7b3;
              pbStack_178 = pbVar22;
              uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_250);
              goto LAB_10143ef18;
            }
            pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,0x16);
            if (bVar6 == 0x16) goto LAB_10143eaf4;
            uVar12 = *puVar19;
            puVar16[1] = puVar19[1];
            *puVar16 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar16 + 0xf) = uVar12;
            bStack_90 = bVar6;
            if (bVar6 == 0x10) {
LAB_10143e2ac:
              FUN_100e077ec(&bStack_90);
              bVar18 = 0xc;
            }
            else if (bVar6 == 0x11) {
              puVar4 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
              uVar12 = *puVar4;
              uStack_248 = (undefined1)puVar4[1];
              uStack_247 = (undefined7)((ulong)puVar4[1] >> 8);
              bStack_250 = (byte)uVar12;
              bStack_24f = (byte)((ulong)uVar12 >> 8);
              uStack_24e = (undefined6)((ulong)uVar12 >> 0x10);
              uStack_238 = puVar4[3];
              uStack_240 = (undefined1)puVar4[2];
              uStack_23f = (undefined7)((ulong)puVar4[2] >> 8);
              FUN_1007a47d4(&bStack_b0,&bStack_250);
              bVar18 = bStack_af;
              bVar6 = bStack_b0;
              pbVar21 = (byte *)CONCAT71(uStack_a7,uStack_a8);
              _free(puVar4);
              if (bVar6 == 1) goto LAB_10143e5a0;
            }
            else {
              if (bVar6 == 0x12) goto LAB_10143e2ac;
              FUN_1007a47d4(&bStack_250,&bStack_90);
              bVar18 = bStack_24f;
              if ((bStack_250 & 1) != 0) {
                pbVar21 = (byte *)CONCAT71(uStack_247,uStack_248);
                goto LAB_10143e5a0;
              }
            }
            goto LAB_10143decc;
          }
          if (lStack_258 != -0x7ffffffffffffffe) {
            lStack_160 = lVar23 + 1;
            bStack_90 = 0xdf;
            bStack_8f = 0xe7;
            uStack_8e = 0x108ca;
            uStack_88 = 7;
            uStack_87 = 0;
            bStack_250 = (byte)&bStack_90;
            bStack_24f = (byte)((ulong)&bStack_90 >> 8);
            uStack_24e = (undefined6)((ulong)&bStack_90 >> 0x10);
            uStack_248 = 0xa0;
            uStack_247 = 0x100c7b3;
            pbStack_178 = pbVar22;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_250);
            uStack_248 = (undefined1)uVar12;
            uStack_247 = (undefined7)((ulong)uVar12 >> 8);
            goto joined_r0x00010143eecc;
          }
          pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,0x16);
          if (bVar6 == 0x16) {
            lStack_160 = lVar23 + 1;
            pbStack_178 = pbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10143efd8;
          }
          uVar12 = *puVar19;
          puVar16[1] = puVar19[1];
          *puVar16 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar12;
          bStack_90 = bVar6;
          if (bVar6 == 0x10) {
LAB_10143e0dc:
            bStack_b0 = 1;
            bStack_af = 0;
            uStack_ae = 0x800000000000;
            FUN_100e077ec(&bStack_90);
            lStack_258 = -0x7fffffffffffffff;
            pbStack_2a8 = (byte *)CONCAT71(uStack_a7,uStack_a8);
          }
          else {
            if (bVar6 == 0x11) {
              puVar4 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
              uVar12 = *puVar4;
              uStack_248 = (undefined1)puVar4[1];
              uStack_247 = (undefined7)((ulong)puVar4[1] >> 8);
              bStack_250 = (byte)uVar12;
              bStack_24f = (byte)((ulong)uVar12 >> 8);
              uStack_24e = (undefined6)((ulong)uVar12 >> 0x10);
              uStack_238 = puVar4[3];
              uStack_240 = (undefined1)puVar4[2];
              uStack_23f = (undefined7)((ulong)puVar4[2] >> 8);
              FUN_10142cca8(&bStack_b0,&bStack_250);
              _free(puVar4);
            }
            else {
              if (bVar6 == 0x12) goto LAB_10143e0dc;
              FUN_10142cca8(&bStack_b0,&bStack_90);
            }
            lStack_258 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
            pbStack_2a8 = (byte *)CONCAT71(uStack_a7,uStack_a8);
            if (lStack_258 == -0x7ffffffffffffffe) {
              lStack_160 = lVar23 + 1;
              bStack_250 = 3;
              bStack_24f = 0;
              uStack_24e = 0;
              uStack_248 = uStack_a8;
              uStack_247 = uStack_a7;
              pbStack_178 = pbVar22;
              goto LAB_10143e958;
            }
          }
          uStack_150 = CONCAT71(uStack_9f,uStack_a0);
          uStack_148 = uStack_98;
        }
LAB_10143decc:
        lVar23 = lVar23 + 1;
        pbVar21 = pbVar10;
        pbVar20 = pbVar22;
        lVar15 = (lVar13 - 0x40U >> 6) + 1;
      } while (pbVar22 != pbVar10);
    }
    lStack_160 = lVar15;
    lVar13 = lStack_160;
    uVar1 = 0x8000000000000000;
    if (uStack_278 != 0x8000000000000001) {
      uVar1 = uStack_278;
    }
    uVar2 = 0x8000000000000000;
    if (uStack_270 != 0x8000000000000001) {
      uVar2 = uStack_270;
    }
    uStack_238 = uStack_138;
    uVar12 = uStack_140;
    uStack_230 = uStack_130;
    if (lStack_298 == 3) {
      lStack_298 = 2;
      uStack_238 = uStack_f8;
      uVar12 = uStack_100;
      uStack_230 = uStack_f0;
    }
    uStack_100 = uVar12;
    uStack_210 = uStack_118;
    uStack_218 = uStack_120;
    uStack_208 = uStack_110;
    lStack_228 = lStack_260;
    if (lStack_260 == 3) {
      lStack_260 = 2;
      uStack_210 = uStack_d8;
      uStack_218 = uStack_e0;
      uStack_208 = uStack_d0;
      lStack_228 = lStack_260;
    }
    lVar15 = -0x7fffffffffffffff;
    if (lStack_258 != -0x7ffffffffffffffe) {
      uStack_b8 = uStack_148;
      uStack_c0 = uStack_150;
      lVar15 = lStack_258;
    }
    bStack_1af = 0xc;
    if (bVar18 != 0xd) {
      bStack_1af = bVar18;
    }
    bStack_250 = (byte)lStack_298;
    bStack_24f = (byte)((ulong)lStack_298 >> 8);
    uStack_24e = (undefined6)((ulong)lStack_298 >> 0x10);
    uStack_248 = SUB81(pbStack_2c8,0);
    uStack_247 = (undefined7)((ulong)pbStack_2c8 >> 8);
    bStack_1b0 = 5;
    if (bVar5 != 6) {
      bStack_1b0 = bVar5;
    }
    uStack_240 = (undefined1)uStack_100;
    uStack_23f = (undefined7)((ulong)uStack_100 >> 8);
    pbStack_220 = pbStack_2c0;
    pbStack_1f8 = pbStack_2b8;
    uStack_1f0 = uStack_2d8;
    pbStack_1e0 = pbStack_2b0;
    uStack_1d8 = uStack_2d0;
    pbStack_1c8 = pbStack_2a8;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_200 = uVar1;
    uStack_1e8 = uVar2;
    lStack_1d0 = lVar15;
    pbStack_178 = pbVar21;
    uStack_f8 = uStack_238;
    uStack_f0 = uStack_230;
    uStack_e0 = uStack_218;
    uStack_d8 = uStack_210;
    uStack_d0 = uStack_208;
    FUN_100d34830(&pbStack_180);
    if (pbVar10 == pbVar21) {
      lVar13 = 0;
    }
    else {
      bStack_90 = (byte)lVar13;
      bStack_8f = (byte)((ulong)lVar13 >> 8);
      uStack_8e = (undefined6)((ulong)lVar13 >> 0x10);
      lVar13 = FUN_1087e422c(((ulong)((long)pbVar10 - (long)pbVar21) >> 6) + lVar13,&bStack_90,
                             &UNK_10b23a190);
    }
    if ((byte)pbStack_1a0 != '\x16') {
      FUN_100e077ec(&pbStack_1a0);
    }
    if (lVar13 == 0) goto LAB_10143e9a8;
    bStack_250 = 3;
    bStack_24f = 0;
    uStack_24e = 0;
    uStack_248 = (undefined1)lVar13;
    uStack_247 = (undefined7)((ulong)lVar13 >> 8);
    if ((uVar1 & 0x7fffffffffffffff) == 0) {
      if ((uVar2 & 0x7fffffffffffffff) == 0) goto LAB_10143e80c;
LAB_10143e830:
      _free(pbStack_2b0);
      if (lVar15 < -0x7ffffffffffffffe) goto LAB_10143e9a8;
LAB_10143e848:
      if (lVar15 != 0) {
        _free(pbStack_2a8);
      }
    }
    else {
      _free(pbStack_2b8);
      if ((uVar2 & 0x7fffffffffffffff) != 0) goto LAB_10143e830;
LAB_10143e80c:
      if (-0x7fffffffffffffff < lVar15) goto LAB_10143e848;
    }
  }
LAB_10143e9a8:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (CONCAT62(uStack_24e,CONCAT11(bStack_24f,bStack_250)) != 3) {
    param_1[0x11] = pbStack_1c8;
    param_1[0x10] = lStack_1d0;
    param_1[0x13] = uStack_1b8;
    param_1[0x12] = uStack_1c0;
    param_1[0x14] = CONCAT62(uStack_1ae,CONCAT11(bStack_1af,bStack_1b0));
    param_1[9] = uStack_208;
    param_1[8] = uStack_210;
    param_1[0xb] = pbStack_1f8;
    param_1[10] = uStack_200;
    param_1[0xd] = uStack_1e8;
    param_1[0xc] = uStack_1f0;
    param_1[0xf] = uStack_1d8;
    param_1[0xe] = pbStack_1e0;
    param_1[1] = CONCAT71(uStack_247,uStack_248);
    *param_1 = CONCAT62(uStack_24e,CONCAT11(bStack_24f,bStack_250));
    param_1[3] = uStack_238;
    param_1[2] = CONCAT71(uStack_23f,uStack_240);
    param_1[5] = lStack_228;
    param_1[4] = uStack_230;
    param_1[7] = uStack_218;
    param_1[6] = pbStack_220;
    return;
  }
  uVar12 = CONCAT71(uStack_247,uStack_248);
LAB_10143e9d0:
  *param_1 = 4;
  param_1[1] = uVar12;
  return;
}

