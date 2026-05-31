
void FUN_10129e764(long *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  byte *pbVar19;
  bool bVar20;
  byte *pbVar21;
  undefined8 *puVar23;
  long unaff_x22;
  undefined8 *puVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  char cVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_288;
  byte *pbStack_280;
  long lStack_278;
  long lStack_270;
  byte *pbStack_268;
  long lStack_260;
  byte *pbStack_250;
  long lStack_248;
  ulong uStack_240;
  ulong uStack_238;
  byte bStack_230;
  undefined1 uStack_22f;
  undefined6 uStack_22e;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  byte *pbStack_150;
  byte *pbStack_148;
  long lStack_140;
  long lStack_130;
  long lStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  long lStack_110;
  long lStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte bStack_d0;
  byte bStack_cf;
  undefined6 uStack_ce;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  long lStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbVar22;
  
  bVar2 = *param_2;
  if (bVar2 != 0x14) {
    if (bVar2 != 0x15) {
      lVar15 = FUN_108855b04(param_2,&lStack_110,&UNK_10b20b220);
      *param_1 = 2;
      param_1[1] = lVar15;
      return;
    }
    uStack_200 = *(undefined8 *)(param_2 + 8);
    pbStack_210 = *(byte **)(param_2 + 0x10);
    pbVar19 = pbStack_210 + *(long *)(param_2 + 0x18) * 0x40;
    bStack_230 = 0x16;
    pbStack_1f0 = (byte *)0x0;
    pbStack_150 = (byte *)0x8000000000000001;
    lStack_130 = 2;
    pbStack_1f8 = pbVar19;
    if (*(long *)(param_2 + 0x18) == 0) {
      lStack_248 = 2;
      lStack_130 = 2;
      pbStack_150 = (byte *)0x8000000000000001;
      pbStack_250 = (byte *)0x8000000000000001;
      uVar28 = 0x8000000000000001;
      uStack_240 = 0x8000000000000001;
      lStack_270 = unaff_x22;
      pbStack_208 = pbStack_210;
LAB_10129ee4c:
      bStack_d0 = 0x1f;
      bStack_cf = 0x13;
      uStack_ce = 0x108cc;
      uStack_c8 = 0xe;
      uStack_c7 = 0;
      uStack_b0 = &bStack_d0;
      pbStack_a8 = &DAT_100c7b3a0;
      lVar15 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_b0);
      *param_1 = 2;
      param_1[1] = lVar15;
      uStack_238 = 0;
LAB_10129ee94:
      bVar13 = true;
      bVar12 = true;
      bVar20 = true;
    }
    else {
      puVar25 = (undefined8 *)((ulong)&bStack_d0 | 1);
      puVar24 = (undefined8 *)((ulong)&bStack_230 | 1);
      puVar23 = (undefined8 *)((ulong)&uStack_b0 | 1);
      cVar27 = '\x02';
      lStack_248 = 2;
      pbStack_250 = (byte *)0x8000000000000001;
      uVar28 = 0x8000000000000001;
      uStack_240 = 0x8000000000000001;
      uStack_238 = 0x8000000000000000;
      lStack_260 = 2;
      pbStack_268 = (byte *)0x8000000000000001;
      pbVar22 = pbStack_210;
      do {
        pbVar21 = pbVar22 + 0x40;
        bVar18 = *pbVar22;
        pbVar26 = pbVar19;
        pbStack_208 = pbVar21;
        if (bVar18 == 0x16) break;
        pbStack_1f0 = pbStack_1f0 + 1;
        uVar30 = *(undefined8 *)(pbVar22 + 1);
        uVar32 = *(undefined8 *)(pbVar22 + 0x18);
        uVar31 = *(undefined8 *)(pbVar22 + 0x10);
        pbStack_a8 = *(byte **)(pbVar22 + 0x28);
        uStack_b0 = *(byte **)(pbVar22 + 0x20);
        puVar25[1] = *(undefined8 *)(pbVar22 + 9);
        *puVar25 = uVar30;
        *(undefined8 *)((long)puVar25 + 0x17) = uVar32;
        *(undefined8 *)((long)puVar25 + 0xf) = uVar31;
        pbStack_98 = *(byte **)(pbVar22 + 0x38);
        lStack_a0 = *(long *)(pbVar22 + 0x30);
        bStack_d0 = bVar18;
        if (bStack_230 != 0x16) {
          FUN_100e077ec(&bStack_230);
        }
        uStack_228 = SUB81(pbStack_a8,0);
        uStack_227 = (undefined7)((ulong)pbStack_a8 >> 8);
        bStack_230 = (byte)uStack_b0;
        uStack_22f = (undefined1)((ulong)uStack_b0 >> 8);
        uStack_22e = (undefined6)((ulong)uStack_b0 >> 0x10);
        pbStack_218 = pbStack_98;
        uStack_220 = (undefined1)lStack_a0;
        uStack_21f = (undefined7)((ulong)lStack_a0 >> 8);
        uVar29 = CONCAT71(uStack_c7,uStack_c8);
        uVar30 = CONCAT71(uStack_bf,uStack_c0);
        if (0xc < bVar18) {
          if (bVar18 == 0xd) {
            func_0x000100bb5b54(&uStack_b0,uVar29,uVar30);
            goto LAB_10129eab0;
          }
          if (bVar18 != 0xe) {
            if (bVar18 != 0xf) goto LAB_10129eda8;
            func_0x000100bb580c(&uStack_b0,uVar29,uVar30);
            goto LAB_10129eab0;
          }
          func_0x000100bb580c(&uStack_b0,uVar30,uStack_b8);
          if (uVar29 != 0) goto LAB_10129ea70;
LAB_10129eab8:
          if (((ulong)uStack_b0 & 1) == 0) goto LAB_10129eac0;
LAB_10129edd0:
          *param_1 = 2;
          param_1[1] = (long)pbStack_a8;
LAB_10129ee08:
          lStack_130 = lStack_260;
          lStack_140 = lStack_288;
          pbStack_148 = pbStack_280;
          pbStack_150 = pbStack_268;
          lStack_128 = lStack_270;
          bVar12 = true;
          bVar13 = true;
          bVar20 = true;
          goto LAB_10129ee9c;
        }
        if (bVar18 == 1) {
          bVar18 = bStack_cf;
          if (5 < bStack_cf) {
            bVar18 = 6;
          }
          uStack_b0 = (byte *)((ulong)CONCAT61(uStack_22e,bVar18) << 8);
LAB_10129eab0:
          FUN_100e077ec(&bStack_d0);
          goto LAB_10129eab8;
        }
        if (bVar18 == 4) {
          if (5 < uVar29) {
            uVar29 = 6;
          }
          uStack_b0 = (byte *)((ulong)CONCAT61(uStack_22e,(char)uVar29) << 8);
          goto LAB_10129eab0;
        }
        if (bVar18 != 0xc) {
LAB_10129eda8:
          pbStack_a8 = (byte *)FUN_108855b04(&bStack_d0,&lStack_110,&UNK_10b20ed00);
          uStack_b0 = (byte *)CONCAT71(uStack_b0._1_7_,1);
          goto LAB_10129edd0;
        }
        func_0x000100bb5b54(&uStack_b0,uVar30);
        if (uVar29 == 0) goto LAB_10129eab8;
LAB_10129ea70:
        _free(uVar30);
        if (((ulong)uStack_b0 & 1) != 0) goto LAB_10129edd0;
LAB_10129eac0:
        bVar18 = bStack_230;
        bVar10 = uStack_b0._1_1_;
        bVar13 = 2 < uStack_b0._1_1_;
        if (bVar13) {
          if (4 < bVar10) {
            if (bVar10 != 5) {
              bStack_230 = 0x16;
              if (bVar18 == 0x16) {
LAB_10129f4c0:
                bStack_230 = 0x16;
                lStack_130 = lStack_260;
                lStack_128 = lStack_270;
                pbStack_148 = pbStack_280;
                lStack_140 = lStack_288;
                pbStack_150 = pbStack_268;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10129f95c:
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x10129f960);
                (*pcVar11)();
              }
              uVar30 = *puVar24;
              puVar23[1] = puVar24[1];
              *puVar23 = uVar30;
              uVar30 = *(undefined8 *)((long)puVar24 + 0xf);
              *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar24 + 0x17);
              *(undefined8 *)((long)puVar23 + 0xf) = uVar30;
              uStack_b0 = (byte *)CONCAT71(uStack_b0._1_7_,bVar18);
              FUN_100e077ec(&uStack_b0);
              goto LAB_10129e97c;
            }
            if (lStack_248 == 2) {
              bStack_230 = 0x16;
              if (bVar18 == 0x16) {
                lStack_130 = lStack_260;
                lStack_128 = lStack_270;
                pbStack_148 = pbStack_280;
                lStack_140 = lStack_288;
                pbStack_150 = pbStack_268;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_10129f95c;
              }
              uVar30 = *puVar24;
              puVar25[1] = puVar24[1];
              *puVar25 = uVar30;
              uVar30 = *(undefined8 *)((long)puVar24 + 0xf);
              *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)puVar24 + 0x17);
              *(undefined8 *)((long)puVar25 + 0xf) = uVar30;
              bStack_d0 = bVar18;
              if (bVar18 == 0x10) {
LAB_10129ebe8:
                lStack_110 = 0;
                FUN_100e077ec(&bStack_d0);
                lStack_260 = 0;
              }
              else {
                if (bVar18 == 0x11) {
                  puVar5 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
                  pbStack_a8 = (byte *)puVar5[1];
                  uStack_b0 = (byte *)*puVar5;
                  pbStack_98 = (byte *)puVar5[3];
                  lStack_a0 = puVar5[2];
                  func_0x00010140f658(&lStack_110,&uStack_b0);
                  _free(puVar5);
                  lStack_260 = lStack_110;
                }
                else {
                  if (bVar18 == 0x12) goto LAB_10129ebe8;
                  bStack_d0 = bVar18;
                  func_0x00010140f658(&lStack_110,&bStack_d0);
                  lStack_260 = lStack_110;
                }
                lStack_110 = lStack_260;
                if (lStack_260 == 2) {
                  pbStack_148 = pbStack_280;
                  lStack_140 = lStack_288;
                  *param_1 = 2;
                  param_1[1] = lStack_108;
                  bVar20 = true;
                  bVar12 = true;
                  bVar13 = true;
                  goto LAB_10129f2ec;
                }
              }
              pbStack_118 = pbStack_f8;
              pbStack_120 = pbStack_100;
              lStack_270 = lStack_108;
              lStack_248 = lStack_260;
              goto LAB_10129e97c;
            }
            lStack_130 = lStack_260;
            lStack_128 = lStack_270;
            pbStack_148 = pbStack_280;
            lStack_140 = lStack_288;
            pbStack_150 = pbStack_268;
            bStack_d0 = 0xe0;
            bStack_cf = 0xf;
            uStack_ce = 0x108c6;
            uStack_c8 = 4;
            uStack_c7 = 0;
            uStack_b0 = &bStack_d0;
            pbStack_a8 = &DAT_100c7b3a0;
            lVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
            *param_1 = 2;
            param_1[1] = lVar15;
            bVar20 = true;
            bVar12 = true;
            bVar13 = true;
            goto joined_r0x00010129f834;
          }
          if (bVar10 == 3) {
            if (cVar27 == '\x02') {
              bStack_230 = 0x16;
              if (bVar18 == 0x16) goto LAB_10129f4c0;
              uVar30 = *puVar24;
              puVar23[1] = puVar24[1];
              *puVar23 = uVar30;
              uVar30 = *(undefined8 *)((long)puVar24 + 0xf);
              *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar24 + 0x17);
              *(undefined8 *)((long)puVar23 + 0xf) = uVar30;
              uStack_b0 = (byte *)CONCAT71(uStack_b0._1_7_,bVar18);
              if (bVar18 == 0) {
                FUN_100e077ec(&uStack_b0);
                cVar27 = '\x03';
                goto LAB_10129e97c;
              }
              lStack_130 = lStack_260;
              lStack_128 = lStack_270;
              pbStack_148 = pbStack_280;
              lStack_140 = lStack_288;
              pbStack_150 = pbStack_268;
              lVar15 = FUN_108855b04(&uStack_b0,&lStack_110,&UNK_10b20a560);
            }
            else {
              lStack_130 = lStack_260;
              lStack_128 = lStack_270;
              pbStack_148 = pbStack_280;
              lStack_140 = lStack_288;
              pbStack_150 = pbStack_268;
              bStack_d0 = 0x2d;
              bStack_cf = 0x13;
              uStack_ce = 0x108cc;
              uStack_c8 = 0xb;
              uStack_c7 = 0;
              uStack_b0 = &bStack_d0;
              pbStack_a8 = &DAT_100c7b3a0;
              lVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
            }
          }
          else {
            if (pbStack_250 == (byte *)0x8000000000000001) {
              func_0x000100f1ef50(&uStack_b0,&bStack_230);
              pbStack_250 = uStack_b0;
              if (uStack_b0 != (byte *)0x8000000000000001) {
                lStack_288 = lStack_a0;
                pbVar21 = pbStack_208;
                pbVar19 = pbStack_1f8;
                pbStack_280 = pbStack_a8;
                pbStack_268 = pbStack_250;
                goto LAB_10129e97c;
              }
              lStack_140 = lStack_288;
              lStack_128 = lStack_270;
              lStack_130 = lStack_260;
              pbStack_148 = pbStack_280;
              pbStack_150 = pbStack_268;
              bVar13 = true;
              pbStack_250 = (byte *)0x8000000000000001;
              bVar12 = true;
              bVar20 = true;
              *param_1 = 2;
              param_1[1] = (long)pbStack_a8;
              goto LAB_10129ee9c;
            }
            lStack_130 = lStack_260;
            lStack_128 = lStack_270;
            pbStack_148 = pbStack_280;
            lStack_140 = lStack_288;
            pbStack_150 = pbStack_268;
            bStack_d0 = 0x38;
            bStack_cf = 0x13;
            uStack_ce = 0x108cc;
            uStack_c8 = 0xd;
            uStack_c7 = 0;
            uStack_b0 = &bStack_d0;
            pbStack_a8 = &DAT_100c7b3a0;
            lVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
          }
LAB_10129f9a0:
          *param_1 = 2;
          param_1[1] = lVar15;
          goto LAB_10129ee94;
        }
        if (bVar10 == 0) {
          if (uStack_238 == 0x8000000000000000) {
            bStack_230 = 0x16;
            if (bVar18 == 0x16) {
              lStack_130 = lStack_260;
              lStack_128 = lStack_270;
              pbStack_148 = pbStack_280;
              lStack_140 = lStack_288;
              pbStack_150 = pbStack_268;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10129f95c;
            }
            uVar30 = *puVar24;
            puVar23[1] = puVar24[1];
            *puVar23 = uVar30;
            uVar30 = *(undefined8 *)((long)puVar24 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar24 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar30;
            uStack_b0 = (byte *)CONCAT71(uStack_b0._1_7_,bVar18);
            FUN_1004b62d4(&bStack_d0,&uStack_b0);
            uStack_238 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
            if (uStack_238 != 0x8000000000000000) {
              lStack_278 = CONCAT71(uStack_c7,uStack_c8);
              lStack_2c0 = CONCAT71(uStack_bf,uStack_c0);
              goto LAB_10129e97c;
            }
            *param_1 = 2;
            param_1[1] = CONCAT71(uStack_c7,uStack_c8);
            uStack_238 = 0;
            goto LAB_10129ee08;
          }
          lStack_130 = lStack_260;
          lStack_128 = lStack_270;
          pbStack_148 = pbStack_280;
          lStack_140 = lStack_288;
          pbStack_150 = pbStack_268;
          bStack_d0 = 0x1f;
          bStack_cf = 0x13;
          uStack_ce = 0x108cc;
          uStack_c8 = 0xe;
          uStack_c7 = 0;
          uStack_b0 = &bStack_d0;
          pbStack_a8 = &DAT_100c7b3a0;
          lVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
          goto LAB_10129f9a0;
        }
        if (bVar10 != 1) {
          if (uStack_240 == 0x8000000000000001) {
            bStack_230 = 0x16;
            if (bVar18 == 0x16) {
              lStack_130 = lStack_260;
              lStack_128 = lStack_270;
              pbStack_148 = pbStack_280;
              lStack_140 = lStack_288;
              pbStack_150 = pbStack_268;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10129f95c;
            }
            uVar30 = *puVar24;
            puVar23[1] = puVar24[1];
            *puVar23 = uVar30;
            uVar30 = *(undefined8 *)((long)puVar24 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar24 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar30;
            uStack_b0 = (byte *)CONCAT71(uStack_b0._1_7_,bVar18);
            FUN_1004b60cc(&bStack_d0,&uStack_b0);
            uStack_240 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
            lVar15 = CONCAT71(uStack_c7,uStack_c8);
            if (uStack_240 == 0x8000000000000001) {
              uStack_240 = 0x8000000000000001;
              uVar29 = uVar28;
              goto LAB_10129f250;
            }
            lStack_2b8 = CONCAT71(uStack_bf,uStack_c0);
            lStack_2a8 = lVar15;
            goto LAB_10129e97c;
          }
          lStack_130 = lStack_260;
          lStack_128 = lStack_270;
          pbStack_148 = pbStack_280;
          lStack_140 = lStack_288;
          pbStack_150 = pbStack_268;
          bStack_d0 = 0xf8;
          bStack_cf = 0x82;
          uStack_ce = 0x108c9;
          uStack_c8 = 8;
          uStack_c7 = 0;
          uStack_b0 = &bStack_d0;
          pbStack_a8 = &DAT_100c7b3a0;
          lVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
          goto LAB_10129f9a0;
        }
        if (uVar28 != 0x8000000000000001) {
          lStack_130 = lStack_260;
          lStack_128 = lStack_270;
          pbStack_148 = pbStack_280;
          lStack_140 = lStack_288;
          pbStack_150 = pbStack_268;
          bStack_d0 = 0xd;
          bStack_cf = 0xdf;
          uStack_ce = 0x108ca;
          uStack_c8 = 6;
          uStack_c7 = 0;
          uStack_b0 = &bStack_d0;
          pbStack_a8 = &DAT_100c7b3a0;
          lVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
          goto LAB_10129f9a0;
        }
        bStack_230 = 0x16;
        if (bVar18 == 0x16) {
          lStack_130 = lStack_260;
          lStack_128 = lStack_270;
          pbStack_148 = pbStack_280;
          lStack_140 = lStack_288;
          pbStack_150 = pbStack_268;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10129f95c;
        }
        uVar30 = *puVar24;
        puVar23[1] = puVar24[1];
        *puVar23 = uVar30;
        uVar30 = *(undefined8 *)((long)puVar24 + 0xf);
        *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar24 + 0x17);
        *(undefined8 *)((long)puVar23 + 0xf) = uVar30;
        uStack_b0 = (byte *)CONCAT71(uStack_b0._1_7_,bVar18);
        uVar29 = 0x8000000000000001;
        FUN_1004b60cc(&bStack_d0,&uStack_b0);
        uVar28 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
        lVar15 = CONCAT71(uStack_c7,uStack_c8);
        if (uVar28 == 0x8000000000000001) {
LAB_10129f250:
          *param_1 = 2;
          param_1[1] = lVar15;
          uVar28 = uVar29;
          goto LAB_10129ee08;
        }
        lStack_2b0 = CONCAT71(uStack_bf,uStack_c0);
        lStack_2a0 = lVar15;
LAB_10129e97c:
        pbVar22 = pbVar21;
        pbVar26 = pbVar21;
      } while (pbVar21 != pbVar19);
      lStack_130 = lStack_260;
      lStack_128 = lStack_270;
      pbStack_148 = pbStack_280;
      lStack_140 = lStack_288;
      pbStack_150 = pbStack_268;
      if (uStack_238 == 0x8000000000000000) goto LAB_10129ee4c;
      bVar12 = uVar28 == 0x8000000000000001;
      uVar29 = 0x8000000000000000;
      if (!bVar12) {
        uVar29 = uVar28;
      }
      bVar13 = uStack_240 == 0x8000000000000001;
      uVar1 = 0x8000000000000000;
      if (!bVar13) {
        uVar1 = uStack_240;
      }
      if (cVar27 != '\x02') {
        if (pbStack_250 == (byte *)0x8000000000000001) {
          pbStack_250 = (byte *)0x8000000000000000;
        }
        else {
          lStack_e8 = lStack_288;
          pbStack_f0 = pbStack_280;
        }
        if (lStack_248 == 2) {
          lStack_248 = 0;
        }
        else {
          pbStack_d8 = pbStack_118;
          pbStack_e0 = pbStack_120;
        }
        *param_1 = lStack_248;
        param_1[1] = lStack_270;
        param_1[3] = (long)pbStack_d8;
        param_1[2] = (long)pbStack_e0;
        param_1[4] = uStack_238;
        param_1[5] = lStack_278;
        param_1[6] = lStack_2c0;
        param_1[7] = uVar29;
        param_1[8] = lStack_2a0;
        param_1[9] = lStack_2b0;
        param_1[10] = uVar1;
        param_1[0xb] = lStack_2a8;
        param_1[0xc] = lStack_2b8;
        param_1[0xd] = (long)pbStack_250;
        param_1[0xf] = lStack_e8;
        param_1[0xe] = (long)pbStack_f0;
        *(char *)(param_1 + 0x10) = cVar27;
        lStack_160 = param_1[0x10];
        lStack_178 = param_1[0xd];
        lStack_180 = param_1[0xc];
        lStack_168 = param_1[0xf];
        lStack_170 = param_1[0xe];
        lStack_198 = param_1[9];
        lStack_1a0 = param_1[8];
        lStack_188 = param_1[0xb];
        lStack_190 = param_1[10];
        lStack_1b8 = param_1[5];
        lStack_1c0 = param_1[4];
        lStack_1a8 = param_1[7];
        lStack_1b0 = param_1[6];
        lStack_1d8 = param_1[1];
        lStack_1e0 = *param_1;
        lStack_1c8 = param_1[3];
        lStack_1d0 = param_1[2];
        FUN_100d34830(&pbStack_210);
        if (pbVar26 == pbVar21) {
          lVar15 = 0;
        }
        else {
          uStack_b0 = pbStack_1f0;
          lVar15 = FUN_1087e422c(pbStack_1f0 + ((ulong)((long)pbVar26 - (long)pbVar21) >> 6),
                                 &uStack_b0,&UNK_10b23a190);
        }
        if (bStack_230 != 0x16) {
          FUN_100e077ec(&bStack_230);
        }
        if (lVar15 != 0) {
          *param_1 = 2;
          param_1[1] = lVar15;
          FUN_100e6db70(&lStack_1e0);
        }
        goto LAB_10129f3e8;
      }
      bStack_d0 = 0x2d;
      bStack_cf = 0x13;
      uStack_ce = 0x108cc;
      uStack_c8 = 0xb;
      uStack_c7 = 0;
      uStack_b0 = &bStack_d0;
      pbStack_a8 = &DAT_100c7b3a0;
      lVar15 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_b0);
      *param_1 = 2;
      param_1[1] = lVar15;
      if ((uVar1 & 0x7fffffffffffffff) != 0) {
        _free(lStack_2a8);
      }
      if ((uVar29 & 0x7fffffffffffffff) != 0) {
        _free(lStack_2a0);
      }
      if (uStack_238 == 0) {
        uStack_238 = 0;
        bVar20 = false;
      }
      else {
        _free(lStack_278);
        bVar20 = false;
      }
    }
LAB_10129ee9c:
    if (lStack_248 != 2) {
joined_r0x00010129f834:
      if (lStack_248 != 0) {
        if (lStack_270 == 0) {
          pbStack_70 = (byte *)0x0;
        }
        else {
          pbStack_a8 = (byte *)0x0;
          uStack_88 = 0;
          pbStack_70 = pbStack_118;
          lStack_a0 = lStack_270;
          pbStack_98 = pbStack_120;
          pbStack_78 = pbStack_120;
        }
        uStack_b0 = (byte *)(ulong)(lStack_270 != 0);
        pbStack_90 = uStack_b0;
        while( true ) {
          FUN_100f3a3c8(&bStack_d0,&uStack_b0);
          lVar15 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
          if (lVar15 == 0) break;
          lVar15 = lVar15 + CONCAT71(uStack_bf,uStack_c0) * 0x18;
          if (*(long *)(lVar15 + 8) != 0) {
            _free(*(undefined8 *)(lVar15 + 0x10));
          }
          if (*(long *)(lVar15 + 0x110) != 0) {
            _free(*(undefined8 *)(lVar15 + 0x118));
          }
        }
      }
    }
LAB_10129f2ec:
    pbVar19 = pbStack_148;
    if ((pbStack_250 != (byte *)0x8000000000000001) && (pbStack_250 != (byte *)0x8000000000000000))
    {
      if (lStack_140 != 0) {
        pbVar22 = pbStack_148 + 8;
        lVar15 = lStack_140;
        do {
          if (*(long *)(pbVar22 + -8) != 0) {
            _free(*(undefined8 *)pbVar22);
          }
          pbVar22 = pbVar22 + 0x18;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (pbStack_250 != (byte *)0x0) {
        _free(pbVar19);
      }
    }
    bVar8 = false;
    if (uStack_240 != 0x8000000000000001) {
      bVar8 = bVar13;
    }
    if ((bVar8) && ((uStack_240 & 0x7fffffffffffffff) != 0)) {
      _free(lStack_2a8);
      bVar13 = false;
      if (uVar28 != 0x8000000000000001) {
        bVar13 = bVar12;
      }
    }
    else {
      bVar13 = false;
      if (uVar28 != 0x8000000000000001) {
        bVar13 = bVar12;
      }
    }
    if ((bVar13) && ((uVar28 & 0x7fffffffffffffff) != 0)) {
      _free(lStack_2a0);
    }
    bVar13 = false;
    if ((uStack_238 & 0x7fffffffffffffff) != 0) {
      bVar13 = bVar20;
    }
    if (bVar13) {
      _free(lStack_278);
    }
    FUN_100d34830(&pbStack_210);
    if (bStack_230 != 0x16) {
      FUN_100e077ec(&bStack_230);
    }
    goto LAB_10129f3e8;
  }
  lStack_a0 = *(long *)(param_2 + 8);
  pbVar22 = *(byte **)(param_2 + 0x10);
  lVar15 = *(long *)(param_2 + 0x18);
  pbVar19 = pbVar22 + lVar15 * 0x20;
  pbStack_90 = (byte *)0x0;
  pbVar21 = pbVar22;
  uStack_b0 = pbVar22;
  pbStack_98 = pbVar19;
  if (lVar15 == 0) {
LAB_10129e8a8:
    pbStack_a8 = pbVar21;
    lVar14 = FUN_1087e422c(0,&UNK_10b2321c0,&UNK_10b20a590);
LAB_10129e8c4:
    *param_1 = 2;
    param_1[1] = lVar14;
  }
  else {
    pbVar21 = pbVar22 + 0x20;
    if (*pbVar22 == 0x16) goto LAB_10129e8a8;
    uVar30 = *(undefined8 *)(pbVar22 + 1);
    uStack_227 = (undefined7)*(undefined8 *)(pbVar22 + 9);
    uStack_22f = (undefined1)uVar30;
    uStack_22e = (undefined6)((ulong)uVar30 >> 8);
    uStack_228 = (undefined1)((ulong)uVar30 >> 0x38);
    pbStack_218 = *(byte **)(pbVar22 + 0x18);
    uStack_220 = (undefined1)*(undefined8 *)(pbVar22 + 0x10);
    uStack_21f = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x10) >> 8);
    pbStack_90 = (byte *)0x1;
    bStack_230 = *pbVar22;
    pbStack_a8 = pbVar21;
    FUN_1004b62d4(&bStack_d0,&bStack_230);
    lVar4 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
    lVar14 = CONCAT71(uStack_c7,uStack_c8);
    if (lVar4 == -0x8000000000000000) goto LAB_10129e8c4;
    if (lVar15 == 1) {
LAB_10129ef98:
      lVar16 = FUN_1087e422c(1,&UNK_10b2321c0,&UNK_10b20a590);
LAB_10129efb4:
      *param_1 = 2;
      param_1[1] = lVar16;
    }
    else {
      lVar6 = CONCAT71(uStack_bf,uStack_c0);
      pbStack_a8 = pbVar22 + 0x40;
      if (pbVar22[0x20] == 0x16) goto LAB_10129ef98;
      uVar30 = *(undefined8 *)(pbVar22 + 0x21);
      uStack_227 = (undefined7)*(undefined8 *)(pbVar22 + 0x29);
      uStack_22f = (undefined1)uVar30;
      uStack_22e = (undefined6)((ulong)uVar30 >> 8);
      uStack_228 = (undefined1)((ulong)uVar30 >> 0x38);
      pbStack_218 = *(byte **)(pbVar22 + 0x38);
      uStack_220 = (undefined1)*(undefined8 *)(pbVar22 + 0x30);
      uStack_21f = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x30) >> 8);
      pbStack_90 = (byte *)0x2;
      bStack_230 = pbVar22[0x20];
      FUN_1004b60cc(&bStack_d0,&bStack_230);
      uVar28 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
      lVar16 = CONCAT71(uStack_c7,uStack_c8);
      if (uVar28 == 0x8000000000000001) goto LAB_10129efb4;
      if (lVar15 == 2) {
LAB_10129f284:
        uStack_238 = FUN_1087e422c(2,&UNK_10b2321c0,&UNK_10b20a590);
LAB_10129f2a0:
        *param_1 = 2;
        param_1[1] = uStack_238;
      }
      else {
        lVar7 = CONCAT71(uStack_bf,uStack_c0);
        pbStack_a8 = pbVar22 + 0x60;
        if (pbVar22[0x40] == 0x16) goto LAB_10129f284;
        uVar30 = *(undefined8 *)(pbVar22 + 0x41);
        uStack_227 = (undefined7)*(undefined8 *)(pbVar22 + 0x49);
        uStack_22f = (undefined1)uVar30;
        uStack_22e = (undefined6)((ulong)uVar30 >> 8);
        uStack_228 = (undefined1)((ulong)uVar30 >> 0x38);
        pbStack_218 = *(byte **)(pbVar22 + 0x58);
        uStack_220 = (undefined1)*(undefined8 *)(pbVar22 + 0x50);
        uStack_21f = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x50) >> 8);
        pbStack_90 = (byte *)0x3;
        bStack_230 = pbVar22[0x40];
        FUN_1004b60cc(&bStack_d0,&bStack_230);
        uVar29 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
        uStack_238 = CONCAT71(uStack_c7,uStack_c8);
        if (uVar29 == 0x8000000000000001) goto LAB_10129f2a0;
        if (lVar15 == 3) {
LAB_10129f488:
          lVar17 = FUN_1087e422c(3,&UNK_10b2321c0,&UNK_10b20a590);
LAB_10129f4a0:
          *param_1 = 2;
          param_1[1] = lVar17;
        }
        else {
          lVar15 = CONCAT71(uStack_bf,uStack_c0);
          pbStack_a8 = pbVar22 + 0x80;
          bVar18 = pbVar22[0x60];
          if (bVar18 == 0x16) goto LAB_10129f488;
          uVar30 = *(undefined8 *)(pbVar22 + 0x61);
          uStack_227 = (undefined7)*(undefined8 *)(pbVar22 + 0x69);
          uStack_22f = (undefined1)uVar30;
          uVar9 = uStack_22f;
          uStack_22e = (undefined6)((ulong)uVar30 >> 8);
          uStack_228 = (undefined1)((ulong)uVar30 >> 0x38);
          pbStack_218 = *(byte **)(pbVar22 + 0x78);
          uStack_220 = (undefined1)*(undefined8 *)(pbVar22 + 0x70);
          uStack_21f = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x70) >> 8);
          pbStack_90 = (byte *)0x4;
          bStack_230 = bVar18;
          if (bVar18 != 0) {
            lVar17 = FUN_108855b04(&bStack_230,&lStack_110,&UNK_10b20a560);
            goto LAB_10129f4a0;
          }
          FUN_100e077ec(&bStack_230);
          FUN_100f2ea54(&bStack_230,&uStack_b0);
          lVar3 = CONCAT62(uStack_22e,CONCAT11(uStack_22f,bStack_230));
          lVar17 = CONCAT71(uStack_227,uStack_228);
          if (lVar3 == -0x7ffffffffffffffe) goto LAB_10129f4a0;
          if (lVar3 == -0x7fffffffffffffff) {
            lVar17 = FUN_1087e422c(4,&UNK_10b2321c0,&UNK_10b20a590);
            goto LAB_10129f4a0;
          }
          pbStack_120 = (byte *)CONCAT71(uStack_21f,uStack_220);
          pbVar19 = pbStack_a8;
          lStack_130 = lVar3;
          lStack_128 = lVar17;
          if (pbStack_a8 == pbStack_98) {
LAB_10129f58c:
            pbStack_a8 = pbVar19;
            lStack_108 = FUN_1087e422c(5,&UNK_10b2321c0,&UNK_10b20a590);
          }
          else {
            pbVar19 = pbStack_a8 + 0x20;
            bVar18 = *pbStack_a8;
            if (bVar18 == 0x16) goto LAB_10129f58c;
            uVar30 = *(undefined8 *)(pbStack_a8 + 1);
            uStack_c7 = (undefined7)*(undefined8 *)(pbStack_a8 + 9);
            bStack_cf = (byte)uVar30;
            uStack_ce = (undefined6)((ulong)uVar30 >> 8);
            uStack_c8 = (undefined1)((ulong)uVar30 >> 0x38);
            uStack_b8 = *(undefined8 *)(pbStack_a8 + 0x18);
            uStack_c0 = (undefined1)*(undefined8 *)(pbStack_a8 + 0x10);
            uStack_bf = (undefined7)((ulong)*(undefined8 *)(pbStack_a8 + 0x10) >> 8);
            pbStack_90 = pbStack_90 + 1;
            bStack_d0 = bVar18;
            pbStack_a8 = pbVar19;
            if (bVar18 == 0x10) {
LAB_10129f9e8:
              lStack_108 = FUN_100e077ec(&bStack_d0);
              lVar17 = 0;
LAB_10129f9f4:
              param_1[3] = (long)pbStack_148;
              param_1[2] = (long)pbStack_150;
              param_1[0xe] = lStack_128;
              param_1[0xd] = lStack_130;
              param_1[0xf] = (long)pbStack_120;
              *param_1 = lVar17;
              param_1[1] = lStack_108;
              param_1[4] = lVar4;
              param_1[5] = lVar14;
              param_1[6] = lVar6;
              param_1[7] = uVar28;
              param_1[8] = lVar16;
              param_1[9] = lVar7;
              param_1[10] = uVar29;
              param_1[0xb] = uStack_238;
              param_1[0xc] = lVar15;
              *(undefined1 *)(param_1 + 0x10) = uVar9;
              lStack_1d8 = param_1[1];
              lStack_1e0 = *param_1;
              lStack_1c8 = param_1[3];
              lStack_1d0 = param_1[2];
              lStack_1b8 = param_1[5];
              lStack_1c0 = param_1[4];
              lStack_1a8 = param_1[7];
              lStack_1b0 = param_1[6];
              lStack_198 = param_1[9];
              lStack_1a0 = param_1[8];
              lStack_188 = param_1[0xb];
              lStack_190 = param_1[10];
              lStack_178 = param_1[0xd];
              lStack_180 = param_1[0xc];
              lStack_168 = param_1[0xf];
              lStack_170 = param_1[0xe];
              lStack_160 = param_1[0x10];
              lVar15 = FUN_100fbc738(&uStack_b0);
              if (lVar15 == 0) {
                return;
              }
              *param_1 = 2;
              param_1[1] = lVar15;
              FUN_100e6db70(&lStack_1e0);
              goto LAB_10129f3e8;
            }
            if (bVar18 == 0x11) {
              puVar23 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
              uVar30 = *puVar23;
              pbStack_218 = (byte *)puVar23[3];
              uStack_228 = (undefined1)puVar23[1];
              uStack_227 = (undefined7)((ulong)puVar23[1] >> 8);
              bStack_230 = (byte)uVar30;
              uStack_22f = (undefined1)((ulong)uVar30 >> 8);
              uStack_22e = (undefined6)((ulong)uVar30 >> 0x10);
              uStack_220 = (undefined1)puVar23[2];
              uStack_21f = (undefined7)((ulong)puVar23[2] >> 8);
              func_0x00010140f658(&lStack_110,&bStack_230);
              _free(puVar23);
            }
            else {
              if (bVar18 == 0x12) goto LAB_10129f9e8;
              func_0x00010140f658(&lStack_110,&bStack_d0);
            }
            if (lStack_110 != 2) {
              pbStack_148 = pbStack_f8;
              pbStack_150 = pbStack_100;
              lVar17 = lStack_110;
              if (lStack_110 != 3) goto LAB_10129f9f4;
            }
          }
          *param_1 = 2;
          param_1[1] = lStack_108;
          FUN_100e68ed0(&lStack_130);
        }
        if ((uVar29 & 0x7fffffffffffffff) != 0) {
          _free(uStack_238);
        }
      }
      if ((uVar28 & 0x7fffffffffffffff) != 0) {
        _free(lVar16);
      }
    }
    pbVar21 = pbStack_a8;
    pbVar19 = pbStack_98;
    if (lVar4 != 0) {
      _free(lVar14);
      pbVar21 = pbStack_a8;
      pbVar19 = pbStack_98;
    }
  }
  lVar15 = ((ulong)((long)pbVar19 - (long)pbVar21) >> 5) + 1;
  while (lVar15 = lVar15 + -1, lVar15 != 0) {
    FUN_100e077ec(pbVar21);
    pbVar21 = pbVar21 + 0x20;
  }
  if (lStack_a0 != 0) {
    _free(uStack_b0);
    return;
  }
LAB_10129f3e8:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

