
void FUN_10141cda4(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined *puVar8;
  code *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  byte bVar16;
  byte *in_x12;
  byte *in_x13;
  byte *in_x14;
  byte *in_x16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 unaff_x22;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  byte *pbStack_270;
  byte *pbStack_268;
  byte *pbStack_250;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  byte bStack_200;
  byte bStack_1ff;
  undefined6 uStack_1fe;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined *puStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  byte *pbStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  byte *pbStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  byte *pbStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  long lStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  undefined8 uStack_140;
  byte *pbStack_138;
  undefined *puStack_130;
  undefined *puStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined1 auStack_69 [9];
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    lVar15 = *(long *)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    lVar23 = *(long *)(param_2 + 0x18);
    pbVar18 = pbVar2 + lVar23 * 0x20;
    pbStack_150 = (byte *)0x0;
    pbVar13 = pbVar2;
    pbStack_170 = pbVar2;
    lStack_160 = lVar15;
    pbStack_158 = pbVar18;
    if (lVar23 == 0) {
LAB_10141cea0:
      pbStack_168 = pbVar13;
      pbVar17 = (byte *)FUN_1087e422c(0,&UNK_10b22f078,&UNK_10b20a590);
LAB_10141cebc:
      bStack_200 = 1;
      bStack_1ff = 0;
      uStack_1fe = 0x800000000000;
      uStack_1f8 = SUB81(pbVar17,0);
      uStack_1f7 = (undefined7)((ulong)pbVar17 >> 8);
    }
    else {
      pbVar13 = pbVar2 + 0x20;
      bStack_200 = *pbVar2;
      if (bStack_200 == 0x16) goto LAB_10141cea0;
      uVar12 = *(undefined8 *)(pbVar2 + 1);
      uStack_1f7 = (undefined7)*(undefined8 *)(pbVar2 + 9);
      bStack_1ff = (byte)uVar12;
      uStack_1fe = (undefined6)((ulong)uVar12 >> 8);
      uStack_1f8 = (undefined1)((ulong)uVar12 >> 0x38);
      puStack_1e8 = *(undefined **)(pbVar2 + 0x18);
      uStack_1f0 = (undefined1)*(undefined8 *)(pbVar2 + 0x10);
      uStack_1ef = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x10) >> 8);
      pbStack_150 = (byte *)0x1;
      pbStack_168 = pbVar13;
      FUN_1004b60cc(&uStack_88,&bStack_200);
      uVar12 = uStack_78;
      pbVar17 = pbStack_80;
      puVar21 = uStack_88;
      if (uStack_88 == (undefined *)0x8000000000000001) goto LAB_10141cebc;
      if (lVar23 == 1) {
LAB_10141d3a8:
        pbVar10 = (byte *)FUN_1087e422c(1,&UNK_10b22f078,&UNK_10b20a590);
LAB_10141d3c0:
        bStack_200 = 1;
        bStack_1ff = 0;
        uStack_1fe = 0x800000000000;
        uStack_1f8 = SUB81(pbVar10,0);
        uStack_1f7 = (undefined7)((ulong)pbVar10 >> 8);
      }
      else {
        pbVar13 = pbVar2 + 0x40;
        pbStack_168 = pbVar13;
        if (pbVar2[0x20] == 0x16) goto LAB_10141d3a8;
        uVar24 = *(undefined8 *)(pbVar2 + 0x21);
        uStack_1f7 = (undefined7)*(undefined8 *)(pbVar2 + 0x29);
        bStack_1ff = (byte)uVar24;
        uStack_1fe = (undefined6)((ulong)uVar24 >> 8);
        uStack_1f8 = (undefined1)((ulong)uVar24 >> 0x38);
        puStack_1e8 = *(undefined **)(pbVar2 + 0x38);
        uStack_1f0 = (undefined1)*(undefined8 *)(pbVar2 + 0x30);
        uStack_1ef = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x30) >> 8);
        pbStack_150 = (byte *)0x2;
        bStack_200 = pbVar2[0x20];
        FUN_1004b60cc(&uStack_88,&bStack_200);
        uVar24 = uStack_78;
        pbVar10 = pbStack_80;
        puVar8 = uStack_88;
        if (uStack_88 == (undefined *)0x8000000000000001) goto LAB_10141d3c0;
        if (lVar23 == 2) {
LAB_10141d6d0:
          pbVar11 = (byte *)FUN_1087e422c(2,&UNK_10b22f078,&UNK_10b20a590);
LAB_10141d6e8:
          bStack_200 = 1;
          bStack_1ff = 0;
          uStack_1fe = 0x800000000000;
          uStack_1f8 = SUB81(pbVar11,0);
          uStack_1f7 = (undefined7)((ulong)pbVar11 >> 8);
        }
        else {
          pbVar13 = pbVar2 + 0x60;
          pbStack_168 = pbVar13;
          if (pbVar2[0x40] == 0x16) goto LAB_10141d6d0;
          uVar25 = *(undefined8 *)(pbVar2 + 0x41);
          uStack_1f7 = (undefined7)*(undefined8 *)(pbVar2 + 0x49);
          bStack_1ff = (byte)uVar25;
          uStack_1fe = (undefined6)((ulong)uVar25 >> 8);
          uStack_1f8 = (undefined1)((ulong)uVar25 >> 0x38);
          puStack_1e8 = *(undefined **)(pbVar2 + 0x58);
          uStack_1f0 = (undefined1)*(undefined8 *)(pbVar2 + 0x50);
          uStack_1ef = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x50) >> 8);
          pbStack_150 = (byte *)0x3;
          bStack_200 = pbVar2[0x40];
          FUN_1004b60cc(&uStack_88,&bStack_200);
          uVar25 = uStack_78;
          pbVar11 = pbStack_80;
          puVar20 = uStack_88;
          if (uStack_88 == (undefined *)0x8000000000000001) goto LAB_10141d6e8;
          if (lVar23 == 3) {
LAB_10141d770:
            uVar12 = FUN_1087e422c(3,&UNK_10b22f078,&UNK_10b20a590);
            bStack_200 = 1;
            bStack_1ff = 0;
            uStack_1fe = 0x800000000000;
            uStack_1f8 = (undefined1)uVar12;
            uStack_1f7 = (undefined7)((ulong)uVar12 >> 8);
          }
          else {
            pbVar13 = pbVar2 + 0x80;
            pbStack_168 = pbVar13;
            if (pbVar2[0x60] == 0x16) goto LAB_10141d770;
            uVar26 = *(undefined8 *)(pbVar2 + 0x61);
            uStack_1f7 = (undefined7)*(undefined8 *)(pbVar2 + 0x69);
            bStack_1ff = (byte)uVar26;
            uStack_1fe = (undefined6)((ulong)uVar26 >> 8);
            uStack_1f8 = (undefined1)((ulong)uVar26 >> 0x38);
            puStack_1e8 = *(undefined **)(pbVar2 + 0x78);
            uStack_1f0 = (undefined1)*(undefined8 *)(pbVar2 + 0x70);
            uStack_1ef = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x70) >> 8);
            pbStack_150 = (byte *)0x4;
            bStack_200 = pbVar2[0x60];
            FUN_1004b60cc(&uStack_88,&bStack_200);
            uVar26 = uStack_78;
            pbVar6 = pbStack_80;
            puVar4 = uStack_88;
            if (uStack_88 == (undefined *)0x8000000000000001) {
              bStack_200 = 1;
              bStack_1ff = 0;
              uStack_1fe = 0x800000000000;
              uStack_1f8 = SUB81(pbStack_80,0);
              uStack_1f7 = (undefined7)((ulong)pbStack_80 >> 8);
            }
            else {
              if (lVar23 == 4) {
LAB_10141db90:
                uVar12 = FUN_1087e422c(4,&UNK_10b22f078,&UNK_10b20a590);
                uStack_1f8 = (undefined1)uVar12;
                uStack_1f7 = (undefined7)((ulong)uVar12 >> 8);
joined_r0x00010141dbbc:
                uStack_1fe = 0x800000000000;
                bStack_1ff = 0;
                bStack_200 = 1;
              }
              else {
                pbVar13 = pbVar2 + 0xa0;
                pbStack_168 = pbVar13;
                if (pbVar2[0x80] == 0x16) goto LAB_10141db90;
                uVar27 = *(undefined8 *)(pbVar2 + 0x81);
                uStack_1f7 = (undefined7)*(undefined8 *)(pbVar2 + 0x89);
                bStack_1ff = (byte)uVar27;
                uStack_1fe = (undefined6)((ulong)uVar27 >> 8);
                uStack_1f8 = (undefined1)((ulong)uVar27 >> 0x38);
                puStack_1e8 = *(undefined **)(pbVar2 + 0x98);
                uStack_1f0 = (undefined1)*(undefined8 *)(pbVar2 + 0x90);
                uStack_1ef = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x90) >> 8);
                pbStack_150 = (byte *)0x5;
                bStack_200 = pbVar2[0x80];
                FUN_1004b60cc(&uStack_88,&bStack_200);
                uVar27 = uStack_78;
                pbVar7 = pbStack_80;
                puVar5 = uStack_88;
                if (uStack_88 == (undefined *)0x8000000000000001) {
                  uStack_1f8 = SUB81(pbStack_80,0);
                  uStack_1f7 = (undefined7)((ulong)pbStack_80 >> 8);
                  goto joined_r0x00010141dbbc;
                }
                if (lVar23 == 5) {
LAB_10141dc68:
                  pbVar14 = (byte *)FUN_1087e422c(5,&UNK_10b22f078,&UNK_10b20a590);
                }
                else {
                  pbVar13 = pbVar2 + 0xc0;
                  pbStack_168 = pbVar13;
                  if (pbVar2[0xa0] == 0x16) goto LAB_10141dc68;
                  uVar28 = *(undefined8 *)(pbVar2 + 0xa1);
                  uStack_1f7 = (undefined7)*(undefined8 *)(pbVar2 + 0xa9);
                  bStack_1ff = (byte)uVar28;
                  uStack_1fe = (undefined6)((ulong)uVar28 >> 8);
                  uStack_1f8 = (undefined1)((ulong)uVar28 >> 0x38);
                  puStack_1e8 = *(undefined **)(pbVar2 + 0xb8);
                  uStack_1f0 = (undefined1)*(undefined8 *)(pbVar2 + 0xb0);
                  uStack_1ef = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0xb0) >> 8);
                  pbStack_150 = (byte *)0x6;
                  bStack_200 = pbVar2[0xa0];
                  FUN_1004b60cc(&uStack_88,&bStack_200);
                  pbVar14 = pbStack_80;
                  if (uStack_88 != (undefined *)0x8000000000000001) {
                    bStack_200 = (byte)puVar21;
                    bStack_1ff = (byte)((ulong)puVar21 >> 8);
                    uStack_1fe = (undefined6)((ulong)puVar21 >> 0x10);
                    uStack_1f8 = SUB81(pbVar17,0);
                    uStack_1f7 = (undefined7)((ulong)pbVar17 >> 8);
                    uStack_1f0 = (undefined1)uVar12;
                    uStack_1ef = (undefined7)((ulong)uVar12 >> 8);
                    puStack_1e8 = puVar8;
                    pbStack_1e0 = pbVar10;
                    uStack_1d8 = uVar24;
                    puStack_1d0 = puVar20;
                    pbStack_1c8 = pbVar11;
                    uStack_1c0 = uVar25;
                    puStack_1b8 = puVar4;
                    pbStack_1b0 = pbVar6;
                    uStack_1a8 = uVar26;
                    puStack_1a0 = puVar5;
                    pbStack_198 = pbVar7;
                    uStack_190 = uVar27;
                    puStack_188 = uStack_88;
                    pbStack_180 = pbStack_80;
                    uStack_178 = uStack_78;
                    pbStack_118 = pbVar17;
                    puStack_120 = puVar21;
                    uStack_110 = uVar12;
                    puStack_108 = puVar8;
                    puStack_a8 = uStack_88;
                    uStack_b0 = uVar27;
                    uStack_98 = uStack_78;
                    pbStack_a0 = pbStack_80;
                    uStack_c8 = uVar26;
                    pbStack_d0 = pbVar6;
                    pbStack_b8 = pbVar7;
                    puStack_c0 = puVar5;
                    pbStack_e8 = pbVar11;
                    puStack_f0 = puVar20;
                    puStack_d8 = puVar4;
                    uStack_e0 = uVar25;
                    uStack_f8 = uVar24;
                    pbStack_100 = pbVar10;
                    lVar15 = FUN_100fbc738(&pbStack_170);
                    if (lVar15 != 0) goto LAB_10141db58;
                    goto LAB_10141d4b4;
                  }
                }
                bStack_200 = 1;
                bStack_1ff = 0;
                uStack_1fe = 0x800000000000;
                uStack_1f8 = SUB81(pbVar14,0);
                uStack_1f7 = (undefined7)((ulong)pbVar14 >> 8);
                if (((ulong)puVar5 & 0x7fffffffffffffff) != 0) {
                  _free(pbVar7);
                }
              }
              if (((ulong)puVar4 & 0x7fffffffffffffff) != 0) {
                _free(pbVar6);
              }
            }
          }
          if (((ulong)puVar20 & 0x7fffffffffffffff) != 0) {
            _free(pbVar11);
          }
        }
        if (((ulong)puVar8 & 0x7fffffffffffffff) != 0) {
          _free(pbVar10);
        }
      }
      if (((ulong)puVar21 & 0x7fffffffffffffff) != 0) {
        _free(pbVar17);
      }
    }
    lVar23 = ((ulong)((long)pbVar18 - (long)pbVar13) >> 5) + 1;
    while (lVar23 = lVar23 + -1, lVar23 != 0) {
      FUN_100e077ec(pbVar13);
      pbVar13 = pbVar13 + 0x20;
    }
    if (lVar15 != 0) {
      _free(pbVar2);
    }
  }
  else {
    if (bVar3 != 0x15) {
      uVar12 = FUN_108855b04(param_2,auStack_69,&UNK_10b20b0e0);
      goto LAB_10141d4dc;
    }
    uStack_140 = *(undefined8 *)(param_2 + 8);
    pbStack_150 = *(byte **)(param_2 + 0x10);
    lVar15 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar13 = pbStack_150 + lVar15;
    pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
    puStack_130 = (undefined *)0x0;
    pbStack_138 = pbVar13;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar21 = (undefined *)0x8000000000000001;
      puStack_220 = (undefined *)0x8000000000000001;
      puStack_218 = (undefined *)0x8000000000000001;
      puStack_210 = (undefined *)0x8000000000000001;
      puStack_208 = (undefined *)0x8000000000000001;
      puStack_228 = (undefined *)0x8000000000000001;
      pbStack_248 = (byte *)0x0;
      pbStack_238 = param_2;
      pbVar18 = pbStack_150;
      puVar8 = puStack_130;
    }
    else {
      puVar20 = (undefined *)0x0;
      puVar22 = (undefined8 *)((ulong)&bStack_200 | 1);
      puVar19 = (undefined8 *)((ulong)&pbStack_170 | 1);
      puStack_210 = (undefined *)0x8000000000000001;
      puStack_208 = (undefined *)0x8000000000000001;
      puStack_218 = (undefined *)0x8000000000000001;
      puStack_228 = (undefined *)0x8000000000000001;
      puStack_220 = (undefined *)0x8000000000000001;
      puVar21 = (undefined *)0x8000000000000001;
      pbVar2 = pbStack_150;
      pbStack_148 = pbStack_150;
      do {
        pbVar17 = pbVar2 + 0x40;
        bStack_200 = *pbVar2;
        param_4 = uStack_278;
        param_5 = uStack_280;
        param_6 = uStack_288;
        param_7 = uStack_290;
        param_8 = uStack_298;
        in_x12 = pbStack_240;
        in_x13 = pbStack_250;
        in_x14 = pbStack_268;
        in_x16 = pbStack_270;
        pbVar18 = pbVar17;
        unaff_x22 = uStack_2a0;
        puVar8 = puVar20;
        if (bStack_200 == 0x16) break;
        uVar12 = *(undefined8 *)(pbVar2 + 0x10);
        *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)(pbVar2 + 0x18);
        *(undefined8 *)((long)puVar22 + 0xf) = uVar12;
        uVar12 = *(undefined8 *)(pbVar2 + 1);
        puVar22[1] = *(undefined8 *)(pbVar2 + 9);
        *puVar22 = uVar12;
        pbStack_168 = *(byte **)(pbVar2 + 0x28);
        pbStack_170 = *(byte **)(pbVar2 + 0x20);
        pbStack_158 = *(byte **)(pbVar2 + 0x38);
        lStack_160 = *(long *)(pbVar2 + 0x30);
        uVar1 = CONCAT71(uStack_1f7,uStack_1f8);
        uVar12 = CONCAT71(uStack_1ef,uStack_1f0);
        if (bStack_200 < 0xd) {
          if (bStack_200 == 1) {
            bVar16 = bStack_1ff;
            if (5 < bStack_1ff) {
              bVar16 = 6;
            }
            uStack_88 = (undefined *)((ulong)CONCAT61(uStack_88._2_6_,bVar16) << 8);
LAB_10141d018:
            FUN_100e077ec(&bStack_200);
            pbVar18 = pbStack_170;
            puVar8 = uStack_88;
            goto joined_r0x00010141cfe4;
          }
          if (bStack_200 == 4) {
            if (5 < uVar1) {
              uVar1 = 6;
            }
            uStack_88 = (undefined *)((ulong)CONCAT61(uStack_88._2_6_,(char)uVar1) << 8);
            goto LAB_10141d018;
          }
          if (bStack_200 == 0xc) {
            FUN_100b63358(&uStack_88,uVar12);
            goto joined_r0x00010141cfd4;
          }
LAB_10141d2f4:
          pbStack_80 = (byte *)FUN_108855b04(&bStack_200,auStack_69,&UNK_10b20f880);
          uStack_88 = (undefined *)CONCAT71(uStack_88._1_7_,1);
LAB_10141d540:
          puStack_130 = puVar20 + 1;
          pbVar13 = pbStack_80;
          pbStack_148 = pbVar17;
LAB_10141d544:
          bStack_200 = 1;
          bStack_1ff = 0;
          uStack_1fe = 0x800000000000;
          uStack_1f8 = SUB81(pbVar13,0);
          uStack_1f7 = (undefined7)((ulong)pbVar13 >> 8);
          if (-0x7fffffffffffffff < (long)puVar21) {
joined_r0x00010141d884:
            uStack_1fe = 0x800000000000;
            bStack_1ff = 0;
            bStack_200 = 1;
            if (puVar21 != (undefined *)0x0) {
              uStack_1fe = 0x800000000000;
              bStack_1ff = 0;
              bStack_200 = 1;
              _free(pbStack_238);
            }
          }
LAB_10141d600:
          if ((-0x7fffffffffffffff < (long)puStack_220) && (puStack_220 != (undefined *)0x0)) {
            _free(pbStack_270);
          }
          if ((-0x7fffffffffffffff < (long)puStack_218) && (puStack_218 != (undefined *)0x0)) {
            _free(pbStack_268);
          }
          if ((-0x7fffffffffffffff < (long)puStack_210) && (puStack_210 != (undefined *)0x0)) {
            _free(pbStack_250);
          }
          if ((-0x7fffffffffffffff < (long)puStack_208) && (puStack_208 != (undefined *)0x0)) {
            _free(pbStack_240);
          }
          if ((-0x7fffffffffffffff < (long)puStack_228) && (puStack_228 != (undefined *)0x0)) {
            _free(pbStack_248);
          }
          FUN_100d34830(&pbStack_150);
          if ((byte)pbStack_170 != '\x16') {
            FUN_100e077ec(&pbStack_170);
          }
          goto LAB_10141d4b4;
        }
        if (bStack_200 == 0xd) {
          FUN_100b63358(&uStack_88,uVar1,uVar12);
          goto LAB_10141d018;
        }
        if (bStack_200 != 0xe) {
          if (bStack_200 != 0xf) goto LAB_10141d2f4;
          FUN_100b62f2c(&uStack_88,uVar1,uVar12);
          goto LAB_10141d018;
        }
        FUN_100b62f2c(&uStack_88,uVar12,puStack_1e8);
joined_r0x00010141cfd4:
        pbVar18 = pbStack_170;
        puVar8 = uStack_88;
        if (uVar1 != 0) {
          _free(uVar12);
          pbVar18 = pbStack_170;
          puVar8 = uStack_88;
        }
joined_r0x00010141cfe4:
        pbStack_170 = pbVar18;
        uStack_88 = puVar8;
        if (((ulong)puVar8 & 1) != 0) goto LAB_10141d540;
        uStack_88._1_1_ = (byte)((ulong)puVar8 >> 8);
        pbStack_170._0_1_ = (byte)pbVar18;
        bVar16 = (byte)pbStack_170;
        pbStack_170._1_7_ = (undefined7)((ulong)pbVar18 >> 8);
        if (uStack_88._1_1_ < 3) {
          if (uStack_88._1_1_ == 0) {
            if (puStack_228 == (undefined *)0x8000000000000001) {
              pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
              if (bVar16 == 0x16) {
                puStack_130 = puVar20 + 1;
                pbStack_148 = pbVar17;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_10141db34;
              }
              uVar12 = *puVar19;
              puVar22[1] = puVar19[1];
              *puVar22 = uVar12;
              uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
              *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
              *(undefined8 *)((long)puVar22 + 0xf) = uVar12;
              bStack_200 = bVar16;
              FUN_1004b60cc(&uStack_88,&bStack_200);
              puStack_228 = uStack_88;
              if (uStack_88 != (undefined *)0x8000000000000001) {
                pbStack_248 = pbStack_80;
                uStack_2a0 = uStack_78;
                goto LAB_10141cf08;
              }
              puStack_130 = puVar20 + 1;
              puStack_228 = (undefined *)0x8000000000000001;
              pbVar13 = pbStack_80;
              pbStack_148 = pbVar17;
            }
            else {
              puStack_130 = puVar20 + 1;
              uStack_88 = &UNK_108cadc62;
              pbStack_80 = (byte *)0xc;
              bStack_200 = (byte)&uStack_88;
              bStack_1ff = (byte)((ulong)&uStack_88 >> 8);
              uStack_1fe = (undefined6)((ulong)&uStack_88 >> 0x10);
              uStack_1f8 = 0xa0;
              uStack_1f7 = 0x100c7b3;
              pbStack_148 = pbVar17;
              pbVar13 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_200);
            }
            goto LAB_10141d544;
          }
          if (uStack_88._1_1_ == 1) {
            if (puStack_208 != (undefined *)0x8000000000000001) {
              puStack_130 = puVar20 + 1;
              uStack_88 = &UNK_108cb52de;
              pbStack_80 = (byte *)0x11;
              bStack_200 = (byte)&uStack_88;
              bStack_1ff = (byte)((ulong)&uStack_88 >> 8);
              uStack_1fe = (undefined6)((ulong)&uStack_88 >> 0x10);
              uStack_1f8 = 0xa0;
              uStack_1f7 = 0x100c7b3;
              pbStack_148 = pbVar17;
              pbVar13 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_200);
              goto LAB_10141d544;
            }
            pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
            if (bVar16 == 0x16) {
              puStack_130 = puVar20 + 1;
              pbStack_148 = pbVar17;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10141db34;
            }
            uVar12 = *puVar19;
            puVar22[1] = puVar19[1];
            *puVar22 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar22 + 0xf) = uVar12;
            bStack_200 = bVar16;
            puStack_208 = (undefined *)0x8000000000000001;
            FUN_1004b60cc(&uStack_88,&bStack_200);
            if (uStack_88 == (undefined *)0x8000000000000001) goto LAB_10141d540;
            uStack_298 = uStack_78;
            pbStack_240 = pbStack_80;
            puStack_208 = uStack_88;
          }
          else {
            if (puStack_210 != (undefined *)0x8000000000000001) {
              puStack_130 = puVar20 + 1;
              uStack_88 = &UNK_108cb5303;
              pbStack_80 = (byte *)0xb;
              bStack_200 = (byte)&uStack_88;
              bStack_1ff = (byte)((ulong)&uStack_88 >> 8);
              uStack_1fe = (undefined6)((ulong)&uStack_88 >> 0x10);
              uStack_1f8 = 0xa0;
              uStack_1f7 = 0x100c7b3;
              pbStack_148 = pbVar17;
              pbVar13 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_200);
              goto LAB_10141d544;
            }
            pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
            if (bVar16 == 0x16) {
              puStack_130 = puVar20 + 1;
              pbStack_148 = pbVar17;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10141db34;
            }
            uVar12 = *puVar19;
            puVar22[1] = puVar19[1];
            *puVar22 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar22 + 0xf) = uVar12;
            bStack_200 = bVar16;
            puStack_210 = (undefined *)0x8000000000000001;
            FUN_1004b60cc(&uStack_88,&bStack_200);
            if (uStack_88 == (undefined *)0x8000000000000001) goto LAB_10141d540;
            uStack_290 = uStack_78;
            pbStack_250 = pbStack_80;
            puStack_210 = uStack_88;
          }
          goto LAB_10141cf08;
        }
        if (4 < uStack_88._1_1_) {
          if (uStack_88._1_1_ != 5) {
            pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
            if (bVar16 == 0x16) {
              puStack_130 = puVar20 + 1;
              pbStack_148 = pbVar17;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10141db34:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10141db38);
              (*pcVar9)();
            }
            uVar12 = *puVar19;
            puVar22[1] = puVar19[1];
            *puVar22 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar22 + 0xf) = uVar12;
            bStack_200 = bVar16;
            FUN_100e077ec(&bStack_200);
            goto LAB_10141cf08;
          }
          if (puVar21 != (undefined *)0x8000000000000001) {
            puStack_130 = puVar20 + 1;
            uStack_88 = &UNK_108cb69ee;
            pbStack_80 = (byte *)0xe;
            bStack_200 = (byte)&uStack_88;
            bStack_1ff = (byte)((ulong)&uStack_88 >> 8);
            uStack_1fe = (undefined6)((ulong)&uStack_88 >> 0x10);
            uStack_1f8 = 0xa0;
            uStack_1f7 = 0x100c7b3;
            pbStack_148 = pbVar17;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_200);
            uStack_1f8 = (undefined1)uVar12;
            uStack_1f7 = (undefined7)((ulong)uVar12 >> 8);
            puVar21 = (undefined *)((ulong)puVar21 & 0x7fffffffffffffff);
            goto joined_r0x00010141d884;
          }
          pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
          if (bVar16 == 0x16) {
            puStack_130 = puVar20 + 1;
            pbStack_148 = pbVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10141db34;
          }
          uVar12 = *puVar19;
          puVar22[1] = puVar19[1];
          *puVar22 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
          *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
          *(undefined8 *)((long)puVar22 + 0xf) = uVar12;
          bStack_200 = bVar16;
          FUN_1004b60cc(&uStack_88,&bStack_200);
          pbStack_238 = pbStack_80;
          if (uStack_88 != (undefined *)0x8000000000000001) {
            uStack_278 = uStack_78;
            puVar21 = uStack_88;
            goto LAB_10141cf08;
          }
          puStack_130 = puVar20 + 1;
          bStack_200 = 1;
          bStack_1ff = 0;
          uStack_1fe = 0x800000000000;
          uStack_1f8 = SUB81(pbStack_80,0);
          uStack_1f7 = (undefined7)((ulong)pbStack_80 >> 8);
          pbStack_148 = pbVar17;
          goto LAB_10141d600;
        }
        if (uStack_88._1_1_ == 3) {
          if (puStack_218 == (undefined *)0x8000000000000001) {
            pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
            if (bVar16 == 0x16) {
              puStack_130 = puVar20 + 1;
              pbStack_148 = pbVar17;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10141db34;
            }
            uVar12 = *puVar19;
            puVar22[1] = puVar19[1];
            *puVar22 = uVar12;
            uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar22 + 0xf) = uVar12;
            bStack_200 = bVar16;
            puStack_218 = (undefined *)0x8000000000000001;
            FUN_1004b60cc(&uStack_88,&bStack_200);
            if (uStack_88 == (undefined *)0x8000000000000001) goto LAB_10141d540;
            uStack_288 = uStack_78;
            pbStack_268 = pbStack_80;
            puStack_218 = uStack_88;
            goto LAB_10141cf08;
          }
          puStack_130 = puVar20 + 1;
          uStack_88 = &UNK_108cb530e;
          pbStack_80 = (byte *)0xe;
          bStack_200 = (byte)&uStack_88;
          bStack_1ff = (byte)((ulong)&uStack_88 >> 8);
          uStack_1fe = (undefined6)((ulong)&uStack_88 >> 0x10);
          uStack_1f8 = 0xa0;
          uStack_1f7 = 0x100c7b3;
          pbStack_148 = pbVar17;
          pbVar13 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_200);
          goto LAB_10141d544;
        }
        if (puStack_220 != (undefined *)0x8000000000000001) {
          puStack_130 = puVar20 + 1;
          uStack_88 = &UNK_108cb69e0;
          pbStack_80 = (byte *)0xe;
          bStack_200 = (byte)&uStack_88;
          bStack_1ff = (byte)((ulong)&uStack_88 >> 8);
          uStack_1fe = (undefined6)((ulong)&uStack_88 >> 0x10);
          uStack_1f8 = 0xa0;
          uStack_1f7 = 0x100c7b3;
          pbStack_148 = pbVar17;
          pbVar13 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_200);
          goto LAB_10141d544;
        }
        pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,0x16);
        if (bVar16 == 0x16) {
          puStack_130 = puVar20 + 1;
          pbStack_148 = pbVar17;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10141db34;
        }
        uVar12 = *puVar19;
        puVar22[1] = puVar19[1];
        *puVar22 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar19 + 0xf);
        *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
        *(undefined8 *)((long)puVar22 + 0xf) = uVar12;
        bStack_200 = bVar16;
        puStack_220 = (undefined *)0x8000000000000001;
        FUN_1004b60cc(&uStack_88,&bStack_200);
        if (uStack_88 == (undefined *)0x8000000000000001) goto LAB_10141d540;
        uStack_280 = uStack_78;
        pbStack_270 = pbStack_80;
        puStack_220 = uStack_88;
LAB_10141cf08:
        puVar20 = puVar20 + 1;
        param_4 = uStack_278;
        param_5 = uStack_280;
        param_6 = uStack_288;
        param_7 = uStack_290;
        param_8 = uStack_298;
        in_x12 = pbStack_240;
        in_x13 = pbStack_250;
        in_x14 = pbStack_268;
        in_x16 = pbStack_270;
        pbVar18 = pbVar13;
        unaff_x22 = uStack_2a0;
        pbVar2 = pbVar17;
        puVar8 = (undefined *)((lVar15 - 0x40U >> 6) + 1);
      } while (pbVar17 != pbVar13);
    }
    puStack_130 = puVar8;
    puVar8 = puStack_130;
    puStack_120 = (undefined *)0x8000000000000000;
    if (puStack_228 != (undefined *)0x8000000000000001) {
      puStack_120 = puStack_228;
    }
    bStack_200 = (byte)puStack_120;
    bStack_1ff = (byte)((ulong)puStack_120 >> 8);
    uStack_1fe = (undefined6)((ulong)puStack_120 >> 0x10);
    uStack_1f8 = SUB81(pbStack_248,0);
    uStack_1f7 = (undefined7)((ulong)pbStack_248 >> 8);
    puStack_1e8 = (undefined *)0x8000000000000000;
    if (puStack_208 != (undefined *)0x8000000000000001) {
      puStack_1e8 = puStack_208;
    }
    puStack_1d0 = (undefined *)0x8000000000000000;
    if (puStack_210 != (undefined *)0x8000000000000001) {
      puStack_1d0 = puStack_210;
    }
    uStack_1f0 = (undefined1)unaff_x22;
    uStack_1ef = (undefined7)((ulong)unaff_x22 >> 8);
    puStack_1b8 = (undefined *)0x8000000000000000;
    if (puStack_218 != (undefined *)0x8000000000000001) {
      puStack_1b8 = puStack_218;
    }
    puStack_1a0 = (undefined *)0x8000000000000000;
    if (puStack_220 != (undefined *)0x8000000000000001) {
      puStack_1a0 = puStack_220;
    }
    puStack_188 = (undefined *)0x8000000000000000;
    if (puVar21 != (undefined *)0x8000000000000001) {
      puStack_188 = puVar21;
    }
    pbStack_1e0 = in_x12;
    uStack_1d8 = param_8;
    pbStack_1c8 = in_x13;
    uStack_1c0 = param_7;
    pbStack_1b0 = in_x14;
    uStack_1a8 = param_6;
    pbStack_198 = in_x16;
    uStack_190 = param_5;
    pbStack_180 = pbStack_238;
    uStack_178 = param_4;
    pbStack_148 = pbVar18;
    pbStack_118 = pbStack_248;
    uStack_110 = unaff_x22;
    puStack_108 = puStack_1e8;
    pbStack_100 = in_x12;
    uStack_f8 = param_8;
    puStack_f0 = puStack_1d0;
    pbStack_e8 = in_x13;
    uStack_e0 = param_7;
    puStack_d8 = puStack_1b8;
    pbStack_d0 = in_x14;
    uStack_c8 = param_6;
    puStack_c0 = puStack_1a0;
    pbStack_b8 = in_x16;
    uStack_b0 = param_5;
    puStack_a8 = puStack_188;
    pbStack_a0 = pbStack_238;
    uStack_98 = param_4;
    FUN_100d34830(&pbStack_150);
    if (pbVar13 != pbVar18) {
      uStack_88 = puVar8;
      lVar15 = FUN_1087e422c(puVar8 + ((ulong)((long)pbVar13 - (long)pbVar18) >> 6),&uStack_88,
                             &UNK_10b23a190);
LAB_10141db58:
      bStack_200 = 1;
      bStack_1ff = 0;
      uStack_1fe = 0x800000000000;
      uStack_1f8 = (undefined1)lVar15;
      uStack_1f7 = (undefined7)((ulong)lVar15 >> 8);
      FUN_100e133d4(&puStack_120);
    }
  }
LAB_10141d4b4:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (CONCAT62(uStack_1fe,CONCAT11(bStack_1ff,bStack_200)) != -0x7fffffffffffffff) {
    param_1[0xd] = pbStack_198;
    param_1[0xc] = puStack_1a0;
    param_1[0xf] = puStack_188;
    param_1[0xe] = uStack_190;
    param_1[0x11] = uStack_178;
    param_1[0x10] = pbStack_180;
    param_1[5] = uStack_1d8;
    param_1[4] = pbStack_1e0;
    param_1[7] = pbStack_1c8;
    param_1[6] = puStack_1d0;
    param_1[9] = puStack_1b8;
    param_1[8] = uStack_1c0;
    param_1[0xb] = uStack_1a8;
    param_1[10] = pbStack_1b0;
    param_1[1] = CONCAT71(uStack_1f7,uStack_1f8);
    *param_1 = CONCAT62(uStack_1fe,CONCAT11(bStack_1ff,bStack_200));
    param_1[3] = puStack_1e8;
    param_1[2] = CONCAT71(uStack_1ef,uStack_1f0);
    return;
  }
  uVar12 = CONCAT71(uStack_1f7,uStack_1f8);
LAB_10141d4dc:
  *param_1 = 0x8000000000000002;
  param_1[1] = uVar12;
  return;
}

