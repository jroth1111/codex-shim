
void FUN_101397f30(ulong *param_1,byte *param_2)

{
  byte *pbVar1;
  bool bVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  code *pcVar10;
  bool bVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  bool bVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  ulong unaff_x23;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  long lVar25;
  long lVar26;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_220;
  ulong uStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  long lStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  undefined8 uStack_1e0;
  byte *pbStack_1d8;
  long lStack_1d0;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  byte bStack_e0;
  byte bStack_df;
  undefined6 uStack_de;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  byte bStack_98;
  byte bStack_97;
  undefined6 uStack_96;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined1 auStack_71 [17];
  
  bVar5 = *param_2;
  if (bVar5 == 0x14) {
    lVar15 = *(long *)(param_2 + 8);
    pbVar24 = *(byte **)(param_2 + 0x10);
    lVar25 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar24 + lVar25 * 0x20;
    pbStack_1f0 = (byte *)0x0;
    pbVar21 = pbVar24;
    pbStack_210 = pbVar24;
    lStack_200 = lVar15;
    pbStack_1f8 = pbVar1;
    if (lVar25 == 0) {
LAB_10139803c:
      pbStack_208 = pbVar21;
      uVar22 = FUN_1087e422c(0,&UNK_10b232058,&UNK_10b20a590);
LAB_101398058:
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar22;
    }
    else {
      pbVar21 = pbVar24 + 0x20;
      if (*pbVar24 == 0x16) goto LAB_10139803c;
      uVar12 = *(undefined8 *)(pbVar24 + 1);
      uStack_d7 = (undefined7)*(undefined8 *)(pbVar24 + 9);
      bStack_df = (byte)uVar12;
      uStack_de = (undefined6)((ulong)uVar12 >> 8);
      uStack_d8 = (undefined1)((ulong)uVar12 >> 0x38);
      uStack_c8 = *(ulong *)(pbVar24 + 0x18);
      uStack_d0 = (undefined1)*(undefined8 *)(pbVar24 + 0x10);
      uStack_cf = (undefined7)((ulong)*(undefined8 *)(pbVar24 + 0x10) >> 8);
      pbStack_1f0 = (byte *)0x1;
      pbStack_208 = pbVar21;
      bStack_e0 = *pbVar24;
      FUN_1004b62d4(&uStack_128,&bStack_e0);
      uVar3 = uStack_118;
      uVar22 = uStack_120;
      uVar19 = uStack_128;
      if (uStack_128 == 0x8000000000000000) goto LAB_101398058;
      if (lVar25 == 1) {
LAB_101398530:
        uVar13 = FUN_1087e422c(1,&UNK_10b232058,&UNK_10b20a590);
LAB_101398548:
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar13;
      }
      else {
        pbVar21 = pbVar24 + 0x40;
        pbStack_208 = pbVar21;
        if (pbVar24[0x20] == 0x16) goto LAB_101398530;
        uVar12 = *(undefined8 *)(pbVar24 + 0x21);
        uStack_8f = (undefined7)*(undefined8 *)(pbVar24 + 0x29);
        bStack_97 = (byte)uVar12;
        uStack_96 = (undefined6)((ulong)uVar12 >> 8);
        uStack_90 = (undefined1)((ulong)uVar12 >> 0x38);
        uStack_80 = *(undefined8 *)(pbVar24 + 0x38);
        uStack_88 = (undefined1)*(undefined8 *)(pbVar24 + 0x30);
        uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar24 + 0x30) >> 8);
        pbStack_1f0 = (byte *)0x2;
        bStack_98 = pbVar24[0x20];
        FUN_1004aa788(&bStack_e0,&bStack_98);
        uVar6 = CONCAT62(uStack_de,CONCAT11(bStack_df,bStack_e0));
        uVar13 = CONCAT71(uStack_d7,uStack_d8);
        if (uVar6 == 0x8000000000000005) goto LAB_101398548;
        uStack_118 = CONCAT71(uStack_cf,uStack_d0);
        uStack_110 = uStack_c8;
        uStack_100 = uStack_b8;
        uStack_108 = uStack_c0;
        uStack_f0 = uStack_a8;
        uStack_f8 = uStack_b0;
        uStack_e8 = uStack_a0;
        uStack_128 = uVar6;
        uStack_120 = uVar13;
        if (lVar25 == 2) {
LAB_1013988f8:
          uVar13 = FUN_1087e422c(2,&UNK_10b232058,&UNK_10b20a590);
LAB_101398910:
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar13;
        }
        else {
          pbVar21 = pbVar24 + 0x60;
          pbStack_208 = pbVar21;
          if (pbVar24[0x40] == 0x16) goto LAB_1013988f8;
          uVar12 = *(undefined8 *)(pbVar24 + 0x41);
          uStack_d7 = (undefined7)*(undefined8 *)(pbVar24 + 0x49);
          bStack_df = (byte)uVar12;
          uStack_de = (undefined6)((ulong)uVar12 >> 8);
          uStack_d8 = (undefined1)((ulong)uVar12 >> 0x38);
          uStack_c8 = *(ulong *)(pbVar24 + 0x58);
          uStack_d0 = (undefined1)*(undefined8 *)(pbVar24 + 0x50);
          uStack_cf = (undefined7)((ulong)*(undefined8 *)(pbVar24 + 0x50) >> 8);
          pbStack_1f0 = (byte *)0x3;
          bStack_e0 = pbVar24[0x40];
          FUN_10124e018(&bStack_98,&bStack_e0);
          bVar9 = bStack_97;
          if ((bStack_98 & 1) != 0) {
            uVar13 = CONCAT71(uStack_8f,uStack_90);
            goto LAB_101398910;
          }
          if (lVar25 == 3) {
LAB_101398a7c:
            uVar13 = FUN_1087e422c(3,&UNK_10b232058,&UNK_10b20a590);
            goto LAB_101398910;
          }
          pbVar21 = pbVar24 + 0x80;
          pbStack_208 = pbVar21;
          if (pbVar24[0x60] == 0x16) goto LAB_101398a7c;
          uVar12 = *(undefined8 *)(pbVar24 + 0x61);
          uStack_d7 = (undefined7)*(undefined8 *)(pbVar24 + 0x69);
          bStack_df = (byte)uVar12;
          uStack_de = (undefined6)((ulong)uVar12 >> 8);
          uStack_d8 = (undefined1)((ulong)uVar12 >> 0x38);
          uStack_c8 = *(ulong *)(pbVar24 + 0x78);
          uStack_d0 = (undefined1)*(undefined8 *)(pbVar24 + 0x70);
          uStack_cf = (undefined7)((ulong)*(undefined8 *)(pbVar24 + 0x70) >> 8);
          pbStack_1f0 = (byte *)0x4;
          bStack_e0 = pbVar24[0x60];
          FUN_1004b60cc(&bStack_98,&bStack_e0);
          uVar6 = CONCAT62(uStack_96,CONCAT11(bStack_97,bStack_98));
          uVar13 = CONCAT71(uStack_8f,uStack_90);
          if (uVar6 == 0x8000000000000001) goto LAB_101398910;
          if (lVar25 == 4) {
LAB_101398b00:
            uVar14 = FUN_1087e422c(4,&UNK_10b232058,&UNK_10b20a590);
          }
          else {
            uVar8 = CONCAT71(uStack_87,uStack_88);
            pbVar21 = pbVar24 + 0xa0;
            pbStack_208 = pbVar21;
            if (pbVar24[0x80] == 0x16) goto LAB_101398b00;
            uVar12 = *(undefined8 *)(pbVar24 + 0x81);
            uStack_d7 = (undefined7)*(undefined8 *)(pbVar24 + 0x89);
            bStack_df = (byte)uVar12;
            uStack_de = (undefined6)((ulong)uVar12 >> 8);
            uStack_d8 = (undefined1)((ulong)uVar12 >> 0x38);
            uStack_c8 = *(ulong *)(pbVar24 + 0x98);
            uStack_d0 = (undefined1)*(undefined8 *)(pbVar24 + 0x90);
            uStack_cf = (undefined7)((ulong)*(undefined8 *)(pbVar24 + 0x90) >> 8);
            pbStack_1f0 = (byte *)0x5;
            bStack_e0 = pbVar24[0x80];
            FUN_1004b60cc(&bStack_98,&bStack_e0);
            uVar7 = CONCAT62(uStack_96,CONCAT11(bStack_97,bStack_98));
            uVar14 = CONCAT71(uStack_8f,uStack_90);
            if (uVar7 != 0x8000000000000001) {
              param_1[0xc] = uStack_110;
              param_1[0xb] = uStack_118;
              param_1[0xe] = uStack_100;
              param_1[0xd] = uStack_108;
              param_1[0x10] = uStack_f0;
              param_1[0xf] = uStack_f8;
              param_1[0x11] = uStack_e8;
              param_1[10] = uStack_120;
              param_1[9] = uStack_128;
              *param_1 = uVar19;
              param_1[1] = uVar22;
              param_1[2] = uVar3;
              param_1[3] = uVar6;
              param_1[4] = uVar13;
              param_1[5] = uVar8;
              param_1[6] = uVar7;
              param_1[7] = uVar14;
              param_1[8] = CONCAT71(uStack_87,uStack_88);
              *(byte *)(param_1 + 0x12) = bVar9;
              uStack_130 = param_1[0x12];
              uStack_148 = param_1[0xf];
              uStack_150 = param_1[0xe];
              uStack_138 = param_1[0x11];
              uStack_140 = param_1[0x10];
              uStack_168 = param_1[0xb];
              uStack_170 = param_1[10];
              uStack_158 = param_1[0xd];
              uStack_160 = param_1[0xc];
              uStack_188 = param_1[7];
              uStack_190 = param_1[6];
              uStack_178 = param_1[9];
              uStack_180 = param_1[8];
              uStack_1a8 = param_1[3];
              uStack_1b0 = param_1[2];
              uStack_198 = param_1[5];
              uStack_1a0 = param_1[4];
              uStack_1b8 = param_1[1];
              uStack_1c0 = *param_1;
              uVar22 = FUN_100fbc738(&pbStack_210);
              if (uVar22 != 0) {
                *param_1 = 0x8000000000000000;
                param_1[1] = uVar22;
                FUN_100e6da8c(&uStack_1c0);
              }
              goto LAB_101398674;
            }
          }
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar14;
          if ((uVar6 & 0x7fffffffffffffff) != 0) {
            _free(uVar13);
          }
        }
        FUN_100de6690(&uStack_128);
      }
      if (uVar19 != 0) {
        _free(uVar22);
      }
    }
    lVar25 = ((ulong)((long)pbVar1 - (long)pbVar21) >> 5) + 1;
    while (lVar25 = lVar25 + -1, lVar25 != 0) {
      FUN_100e077ec(pbVar21);
      pbVar21 = pbVar21 + 0x20;
    }
    if (lVar15 != 0) {
      _free(pbVar24);
    }
    goto LAB_101398674;
  }
  if (bVar5 != 0x15) {
    uVar22 = FUN_108855b04(param_2,auStack_71,&UNK_10b20b560);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar22;
    return;
  }
  uStack_1e0 = *(undefined8 *)(param_2 + 8);
  pbStack_1f0 = *(byte **)(param_2 + 0x10);
  lVar15 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar21 = pbStack_1f0 + lVar15;
  pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
  lStack_1d0 = 0;
  pbStack_1d8 = pbVar21;
  if (*(long *)(param_2 + 0x18) == 0) {
    uStack_128 = 0x8000000000000005;
    uStack_220 = 0x8000000000000001;
    uVar22 = 0x8000000000000001;
    uStack_240 = unaff_x23;
    pbStack_1e8 = pbStack_1f0;
LAB_1013985a0:
    bStack_98 = 0xb9;
    bStack_97 = 0xed;
    uStack_96 = 0x108cb;
    uStack_90 = 7;
    uStack_8f = 0;
    bStack_e0 = (byte)&bStack_98;
    bStack_df = (byte)((ulong)&bStack_98 >> 8);
    uStack_de = (undefined6)((ulong)&bStack_98 >> 0x10);
    uStack_d8 = 0xa0;
    uStack_d7 = 0x100c7b3;
    uVar19 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_e0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar19;
    uStack_218 = 0;
LAB_1013985e0:
    bVar11 = true;
    bVar18 = true;
  }
  else {
    lVar25 = 0;
    puVar17 = (undefined8 *)((ulong)&bStack_e0 | 1);
    puVar20 = (undefined8 *)((ulong)&pbStack_210 | 1);
    puVar16 = (undefined8 *)((ulong)&bStack_98 | 1);
    bVar9 = 2;
    uStack_220 = 0x8000000000000001;
    uStack_218 = 0x8000000000000000;
    uVar22 = 0x8000000000000001;
    uVar19 = 0x8000000000000005;
    pbVar1 = pbStack_1f0;
    pbStack_1e8 = pbStack_1f0;
    do {
      pbVar23 = pbVar1 + 0x40;
      bVar4 = *pbVar1;
      pbVar24 = pbVar23;
      lVar26 = lVar25;
      if (bVar4 == 0x16) break;
      uVar12 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
      uVar12 = *(undefined8 *)(pbVar1 + 1);
      puVar17[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar17 = uVar12;
      pbStack_208 = *(byte **)(pbVar1 + 0x28);
      pbStack_210 = *(byte **)(pbVar1 + 0x20);
      pbStack_1f8 = *(byte **)(pbVar1 + 0x38);
      lStack_200 = *(long *)(pbVar1 + 0x30);
      uVar3 = CONCAT71(uStack_d7,uStack_d8);
      uVar12 = CONCAT71(uStack_cf,uStack_d0);
      uStack_128 = uVar19;
      bStack_e0 = bVar4;
      if (0xc < bVar4) {
        if (bVar4 == 0xd) {
          FUN_100bb3cf4(&bStack_98,uVar3,uVar12);
          goto LAB_1013981b8;
        }
        if (bVar4 != 0xe) {
          if (bVar4 != 0xf) goto LAB_101398444;
          FUN_100bb3a24(&bStack_98,uVar3,uVar12);
          goto LAB_1013981b8;
        }
        FUN_100bb3a24(&bStack_98,uVar12,uStack_c8);
        if (uVar3 != 0) goto LAB_101398178;
LAB_1013981c0:
        if ((bStack_98 & 1) == 0) goto LAB_1013981c8;
LAB_10139846c:
        uVar19 = CONCAT71(uStack_8f,uStack_90);
LAB_101398484:
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar19;
LAB_101398498:
        uStack_120 = uStack_248;
        lStack_1d0 = lVar25 + 1;
        bVar18 = true;
        bVar11 = true;
        pbStack_1e8 = pbVar23;
        goto LAB_1013985e8;
      }
      if (bVar4 == 1) {
        bStack_97 = bStack_df;
        if (4 < bStack_df) {
          bStack_97 = 5;
        }
        bStack_98 = 0;
LAB_1013981b8:
        FUN_100e077ec(&bStack_e0);
        goto LAB_1013981c0;
      }
      if (bVar4 == 4) {
        if (4 < uVar3) {
          uVar3 = 5;
        }
        bStack_97 = (byte)uVar3;
        bStack_98 = 0;
        goto LAB_1013981b8;
      }
      if (bVar4 != 0xc) {
LAB_101398444:
        uVar12 = FUN_108855b04(&bStack_e0,auStack_71,&UNK_10b2116c0);
        uStack_90 = (undefined1)uVar12;
        uStack_8f = (undefined7)((ulong)uVar12 >> 8);
        bStack_98 = 1;
        goto LAB_10139846c;
      }
      FUN_100bb3cf4(&bStack_98,uVar12);
      if (uVar3 == 0) goto LAB_1013981c0;
LAB_101398178:
      _free(uVar12);
      if ((bStack_98 & 1) != 0) goto LAB_10139846c;
LAB_1013981c8:
      bVar4 = (byte)pbStack_210;
      uStack_120 = uStack_248;
      if (bStack_97 < 3) {
        if (bStack_97 == 0) {
          if (uStack_218 != 0x8000000000000000) {
            lStack_1d0 = lVar25 + 1;
            bStack_98 = 0xb9;
            bStack_97 = 0xed;
            uStack_96 = 0x108cb;
            uStack_90 = 7;
            uStack_8f = 0;
            bStack_e0 = (byte)&bStack_98;
            bStack_df = (byte)((ulong)&bStack_98 >> 8);
            uStack_de = (undefined6)((ulong)&bStack_98 >> 0x10);
            uStack_d8 = 0xa0;
            uStack_d7 = 0x100c7b3;
            pbStack_1e8 = pbVar23;
            uVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_e0);
            goto LAB_101398d48;
          }
          pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
          if (bVar4 == 0x16) {
            lStack_1d0 = lVar25 + 1;
            pbStack_1e8 = pbVar23;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101398e44;
          }
          uVar12 = *puVar20;
          puVar17[1] = puVar20[1];
          *puVar17 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
          bStack_e0 = bVar4;
          FUN_1004b62d4(&bStack_98,&bStack_e0);
          uStack_218 = CONCAT62(uStack_96,CONCAT11(bStack_97,bStack_98));
          if (uStack_218 == 0x8000000000000000) {
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_8f,uStack_90);
            uStack_218 = 0;
            goto LAB_101398498;
          }
          uStack_240 = CONCAT71(uStack_8f,uStack_90);
          uStack_280 = CONCAT71(uStack_87,uStack_88);
        }
        else if (bStack_97 == 1) {
          if (uVar19 != 0x8000000000000005) {
            lStack_1d0 = lVar25 + 1;
            bStack_98 = 10;
            bStack_97 = 0xd9;
            uStack_96 = 0x108ca;
            uStack_90 = 5;
            uStack_8f = 0;
            bStack_e0 = (byte)&bStack_98;
            bStack_df = (byte)((ulong)&bStack_98 >> 8);
            uStack_de = (undefined6)((ulong)&bStack_98 >> 0x10);
            uStack_d8 = 0xa0;
            uStack_d7 = 0x100c7b3;
            pbStack_1e8 = pbVar23;
            uVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_e0);
LAB_101398d48:
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar19;
            goto LAB_1013985e0;
          }
          pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
          if (bVar4 == 0x16) {
            uVar19 = 0x8000000000000005;
LAB_101398e10:
            pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
            lStack_1d0 = lVar25 + 1;
            pbStack_1e8 = pbVar23;
            uStack_128 = uVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101398e44:
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101398e48);
            (*pcVar10)();
          }
          uVar12 = *puVar20;
          puVar16[1] = puVar20[1];
          *puVar16 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar12;
          bStack_98 = bVar4;
          FUN_1004aa788(&bStack_e0,&bStack_98);
          uVar19 = CONCAT62(uStack_de,CONCAT11(bStack_df,bStack_e0));
          if (uVar19 == 0x8000000000000005) {
            lStack_1d0 = lVar25 + 1;
            uStack_128 = 0x8000000000000005;
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_d7,uStack_d8);
            bVar11 = true;
            bVar18 = true;
            pbStack_1e8 = pbVar23;
            goto LAB_1013985e8;
          }
          uStack_248 = CONCAT71(uStack_d7,uStack_d8);
          uStack_110 = uStack_c8;
          uStack_118 = CONCAT71(uStack_cf,uStack_d0);
          uStack_100 = uStack_b8;
          uStack_108 = uStack_c0;
          uStack_f0 = uStack_a8;
          uStack_f8 = uStack_b0;
          uStack_e8 = uStack_a0;
        }
        else {
          if (bVar9 != 2) {
            lStack_1d0 = lVar25 + 1;
            bStack_98 = 0xc0;
            bStack_97 = 0xed;
            uStack_96 = 0x108cb;
            uStack_90 = 0xd;
            uStack_8f = 0;
            bStack_e0 = (byte)&bStack_98;
            bStack_df = (byte)((ulong)&bStack_98 >> 8);
            uStack_de = (undefined6)((ulong)&bStack_98 >> 0x10);
            uStack_d8 = 0xa0;
            uStack_d7 = 0x100c7b3;
            pbStack_1e8 = pbVar23;
            uVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_e0);
            goto LAB_101398d48;
          }
          pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
          if (bVar4 == 0x16) goto LAB_101398e10;
          uVar12 = *puVar20;
          puVar17[1] = puVar20[1];
          *puVar17 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
          bStack_e0 = bVar4;
          FUN_10124e018(&bStack_98,&bStack_e0);
          bVar9 = bStack_97;
          if (bStack_98 == 1) {
            uVar19 = CONCAT71(uStack_8f,uStack_90);
            goto LAB_101398484;
          }
        }
      }
      else if (bStack_97 == 3) {
        if (uStack_220 != 0x8000000000000001) {
          lStack_1d0 = lVar25 + 1;
          bStack_98 = 0xe8;
          bStack_97 = 0x84;
          uStack_96 = 0x108c9;
          uStack_90 = 8;
          uStack_8f = 0;
          bStack_e0 = (byte)&bStack_98;
          bStack_df = (byte)((ulong)&bStack_98 >> 8);
          uStack_de = (undefined6)((ulong)&bStack_98 >> 0x10);
          uStack_d8 = 0xa0;
          uStack_d7 = 0x100c7b3;
          pbStack_1e8 = pbVar23;
          uVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_e0);
          goto LAB_101398d48;
        }
        pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
        if (bVar4 == 0x16) {
          lStack_1d0 = lVar25 + 1;
          pbStack_1e8 = pbVar23;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101398e44;
        }
        uVar12 = *puVar20;
        puVar17[1] = puVar20[1];
        *puVar17 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar20 + 0xf);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
        bStack_e0 = bVar4;
        FUN_1004b60cc(&bStack_98,&bStack_e0);
        uStack_220 = CONCAT62(uStack_96,CONCAT11(bStack_97,bStack_98));
        if (uStack_220 == 0x8000000000000001) {
          uStack_220 = 0x8000000000000001;
          *param_1 = 0x8000000000000000;
          param_1[1] = CONCAT71(uStack_8f,uStack_90);
          goto LAB_101398498;
        }
        uStack_270 = CONCAT71(uStack_87,uStack_88);
        uStack_260 = CONCAT71(uStack_8f,uStack_90);
      }
      else if (bStack_97 == 4) {
        if (uVar22 != 0x8000000000000001) {
          lStack_1d0 = lVar25 + 1;
          bStack_98 = 6;
          bStack_97 = 0x10;
          uStack_96 = 0x108cc;
          uStack_90 = 0xf;
          uStack_8f = 0;
          bStack_e0 = (byte)&bStack_98;
          bStack_df = (byte)((ulong)&bStack_98 >> 8);
          uStack_de = (undefined6)((ulong)&bStack_98 >> 0x10);
          uStack_d8 = 0xa0;
          uStack_d7 = 0x100c7b3;
          pbStack_1e8 = pbVar23;
          uVar19 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_e0);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar19;
          bVar18 = true;
          bVar11 = true;
          goto joined_r0x000101398bc8;
        }
        pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
        if (bVar4 == 0x16) {
          lStack_1d0 = lVar25 + 1;
          pbStack_1e8 = pbVar23;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101398e44;
        }
        uVar12 = *puVar20;
        puVar17[1] = puVar20[1];
        *puVar17 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar20 + 0xf);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
        bStack_e0 = bVar4;
        FUN_1004b60cc(&bStack_98,&bStack_e0);
        uVar22 = CONCAT62(uStack_96,CONCAT11(bStack_97,bStack_98));
        uStack_268 = CONCAT71(uStack_8f,uStack_90);
        if (uVar22 == 0x8000000000000001) {
          lStack_1d0 = lVar25 + 1;
          bVar18 = true;
          bVar11 = true;
          *param_1 = 0x8000000000000000;
          param_1[1] = uStack_268;
          pbStack_1e8 = pbVar23;
          goto LAB_101398604;
        }
        uStack_278 = CONCAT71(uStack_87,uStack_88);
      }
      else {
        pbStack_210 = (byte *)CONCAT71(pbStack_210._1_7_,0x16);
        if (bVar4 == 0x16) goto LAB_101398e10;
        uVar12 = *puVar20;
        puVar17[1] = puVar20[1];
        *puVar17 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar20 + 0xf);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar12;
        bStack_e0 = bVar4;
        FUN_100e077ec(&bStack_e0);
      }
      lVar25 = lVar25 + 1;
      pbVar24 = pbVar21;
      lVar26 = (lVar15 - 0x40U >> 6) + 1;
      pbVar1 = pbVar23;
    } while (pbVar23 != pbVar21);
    uStack_120 = uStack_248;
    pbStack_1e8 = pbVar24;
    lStack_1d0 = lVar26;
    uStack_128 = uVar19;
    if (uStack_218 == 0x8000000000000000) goto LAB_1013985a0;
    bVar11 = uVar19 == 0x8000000000000005;
    if (bVar11) {
      bStack_98 = 10;
      bStack_97 = 0xd9;
      uStack_96 = 0x108ca;
      uStack_90 = 5;
      uStack_8f = 0;
      bStack_e0 = (byte)&bStack_98;
      bStack_df = (byte)((ulong)&bStack_98 >> 8);
      uStack_de = (undefined6)((ulong)&bStack_98 >> 0x10);
      uStack_d8 = 0xa0;
      uStack_d7 = 0x100c7b3;
      uVar19 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_e0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar19;
    }
    else {
      if (bVar9 != 2) {
        param_1[0xc] = uStack_110;
        param_1[0xb] = uStack_118;
        param_1[0xe] = uStack_100;
        param_1[0xd] = uStack_108;
        uVar3 = 0x8000000000000000;
        if (uStack_220 != 0x8000000000000001) {
          uVar3 = uStack_220;
        }
        uVar13 = 0x8000000000000000;
        if (uVar22 != 0x8000000000000001) {
          uVar13 = uVar22;
        }
        param_1[0x10] = uStack_f0;
        param_1[0xf] = uStack_f8;
        param_1[0x11] = uStack_e8;
        param_1[10] = uStack_248;
        param_1[9] = uVar19;
        *param_1 = uStack_218;
        param_1[1] = uStack_240;
        param_1[2] = uStack_280;
        param_1[3] = uVar3;
        param_1[4] = uStack_260;
        param_1[5] = uStack_270;
        param_1[6] = uVar13;
        param_1[7] = uStack_268;
        param_1[8] = uStack_278;
        *(byte *)(param_1 + 0x12) = bVar9;
        uStack_130 = param_1[0x12];
        uStack_148 = param_1[0xf];
        uStack_150 = param_1[0xe];
        uStack_138 = param_1[0x11];
        uStack_140 = param_1[0x10];
        uStack_168 = param_1[0xb];
        uStack_170 = param_1[10];
        uStack_158 = param_1[0xd];
        uStack_160 = param_1[0xc];
        uStack_188 = param_1[7];
        uStack_190 = param_1[6];
        uStack_178 = param_1[9];
        uStack_180 = param_1[8];
        uStack_1a8 = param_1[3];
        uStack_1b0 = param_1[2];
        uStack_198 = param_1[5];
        uStack_1a0 = param_1[4];
        uStack_1b8 = param_1[1];
        uStack_1c0 = *param_1;
        FUN_100d34830(&pbStack_1f0);
        if (pbVar21 != pbVar24) {
          bStack_e0 = (byte)lVar26;
          bStack_df = (byte)((ulong)lVar26 >> 8);
          uStack_de = (undefined6)((ulong)lVar26 >> 0x10);
          uVar22 = FUN_1087e422c(((ulong)((long)pbVar21 - (long)pbVar24) >> 6) + lVar26,&bStack_e0,
                                 &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar22;
          FUN_100e6da8c(&uStack_1c0);
        }
        goto LAB_101398674;
      }
      bStack_98 = 0xc0;
      bStack_97 = 0xed;
      uStack_96 = 0x108cb;
      uStack_90 = 0xd;
      uStack_8f = 0;
      bStack_e0 = (byte)&bStack_98;
      bStack_df = (byte)((ulong)&bStack_98 >> 8);
      uStack_de = (undefined6)((ulong)&bStack_98 >> 0x10);
      uStack_d8 = 0xa0;
      uStack_d7 = 0x100c7b3;
      uVar19 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_e0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar19;
      FUN_100de6690(&uStack_128);
    }
    if (uStack_218 == 0) {
      uStack_218 = 0;
    }
    else {
      _free(uStack_240);
    }
    bVar18 = false;
  }
LAB_1013985e8:
  if (uVar22 != 0x8000000000000001) {
joined_r0x000101398bc8:
    if ((uVar22 & 0x7fffffffffffffff) != 0) {
      _free(uStack_268);
    }
  }
LAB_101398604:
  if ((-0x7fffffffffffffff < (long)uStack_220) && (uStack_220 != 0)) {
    _free(uStack_260);
  }
  bVar2 = false;
  if (uStack_128 != 0x8000000000000005) {
    bVar2 = bVar11;
  }
  if (bVar2) {
    FUN_100de6690(&uStack_128);
  }
  bVar11 = false;
  if ((uStack_218 & 0x7fffffffffffffff) != 0) {
    bVar11 = bVar18;
  }
  if (bVar11) {
    _free(uStack_240);
  }
  FUN_100d34830(&pbStack_1f0);
  if ((byte)pbStack_210 != '\x16') {
    FUN_100e077ec(&pbStack_210);
  }
LAB_101398674:
  if ((bVar5 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

