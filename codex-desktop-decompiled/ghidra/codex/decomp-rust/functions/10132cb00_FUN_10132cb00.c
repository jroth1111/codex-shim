
/* WARNING: Type propagation algorithm not settling */

void FUN_10132cb00(ulong *param_1,byte *param_2)

{
  bool bVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  long lVar22;
  byte *pbVar23;
  undefined *puVar24;
  byte *pbVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  byte *pbStack_270;
  long *plStack_268;
  ulong uStack_250;
  ulong uStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  long lStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  undefined8 uStack_210;
  byte *pbStack_208;
  long lStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  byte *pbStack_168;
  ulong uStack_160;
  byte *pbStack_158;
  ulong uStack_150;
  byte *pbStack_148;
  ulong uStack_140;
  byte *pbStack_138;
  ulong uStack_130;
  byte bStack_120;
  byte bStack_11f;
  undefined6 uStack_11e;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  byte *pbStack_108;
  ulong uStack_100;
  byte *pbStack_f8;
  ulong uStack_f0;
  byte *pbStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  byte *pbStack_c8;
  ulong uStack_c0;
  byte *pbStack_b8;
  ulong uStack_b0;
  byte *pbStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  undefined1 auStack_71 [17];
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    lStack_230 = *(long *)(param_2 + 8);
    pbVar25 = *(byte **)(param_2 + 0x10);
    lVar22 = *(long *)(param_2 + 0x18);
    pbVar12 = pbVar25 + lVar22 * 0x20;
    pbStack_220 = (byte *)0x0;
    pbVar23 = pbVar25;
    pbStack_240 = pbVar25;
    pbStack_228 = pbVar12;
    if (lVar22 == 0) {
LAB_10132d098:
      pbStack_238 = pbVar23;
      pbVar13 = (byte *)FUN_1087e422c(0,&UNK_10b22d130,&UNK_10b20a590);
LAB_10132d0b4:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)pbVar13;
    }
    else {
      pbVar23 = pbVar25 + 0x20;
      if (*pbVar25 == 0x16) goto LAB_10132d098;
      uVar11 = *(undefined8 *)(pbVar25 + 1);
      uStack_117 = (undefined7)*(undefined8 *)(pbVar25 + 9);
      bStack_11f = (byte)uVar11;
      uStack_11e = (undefined6)((ulong)uVar11 >> 8);
      uStack_118 = (undefined1)((ulong)uVar11 >> 0x38);
      pbStack_108 = *(byte **)(pbVar25 + 0x18);
      uStack_110 = (undefined1)*(undefined8 *)(pbVar25 + 0x10);
      uStack_10f = (undefined7)((ulong)*(undefined8 *)(pbVar25 + 0x10) >> 8);
      pbStack_220 = (byte *)0x1;
      pbStack_238 = pbVar23;
      bStack_120 = *pbVar25;
      FUN_1004b62d4(&uStack_d0,&bStack_120);
      uVar7 = uStack_c0;
      pbVar13 = pbStack_c8;
      uVar14 = uStack_d0;
      if (uStack_d0 == 0x8000000000000000) goto LAB_10132d0b4;
      if (lVar22 == 1) {
LAB_10132d058:
        pbVar12 = (byte *)FUN_1087e422c(1,&UNK_10b22d130,&UNK_10b20a590);
LAB_10132d074:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)pbVar12;
      }
      else {
        pbStack_238 = pbVar25 + 0x40;
        if (pbVar25[0x20] == 0x16) goto LAB_10132d058;
        uVar11 = *(undefined8 *)(pbVar25 + 0x21);
        uStack_117 = (undefined7)*(undefined8 *)(pbVar25 + 0x29);
        bStack_11f = (byte)uVar11;
        uStack_11e = (undefined6)((ulong)uVar11 >> 8);
        uStack_118 = (undefined1)((ulong)uVar11 >> 0x38);
        pbStack_108 = *(byte **)(pbVar25 + 0x38);
        uStack_110 = (undefined1)*(undefined8 *)(pbVar25 + 0x30);
        uStack_10f = (undefined7)((ulong)*(undefined8 *)(pbVar25 + 0x30) >> 8);
        pbStack_220 = (byte *)0x2;
        bStack_120 = pbVar25[0x20];
        FUN_1004b62d4(&uStack_d0,&bStack_120);
        uVar8 = uStack_c0;
        pbVar12 = pbStack_c8;
        uVar6 = uStack_d0;
        if (uStack_d0 == 0x8000000000000000) goto LAB_10132d074;
        FUN_100f30180(&bStack_120,&pbStack_240);
        uVar5 = CONCAT62(uStack_11e,CONCAT11(bStack_11f,bStack_120));
        uVar15 = CONCAT71(uStack_117,uStack_118);
        if (uVar5 != 0x8000000000000007) {
          uStack_170 = CONCAT71(uStack_10f,uStack_110);
          pbStack_168 = pbStack_108;
          pbStack_158 = pbStack_f8;
          uStack_160 = uStack_100;
          pbStack_148 = pbStack_e8;
          uStack_150 = uStack_f0;
          uStack_140 = uStack_e0;
          if (uVar5 != 0x8000000000000006) {
            param_1[9] = (ulong)pbStack_108;
            param_1[8] = uStack_170;
            param_1[0xb] = (ulong)pbStack_f8;
            param_1[10] = uStack_100;
            param_1[0xd] = (ulong)pbStack_e8;
            param_1[0xc] = uStack_f0;
            param_1[0xe] = uStack_e0;
            *param_1 = uVar14;
            param_1[1] = (ulong)pbVar13;
            param_1[2] = uVar7;
            param_1[3] = uVar6;
            param_1[4] = (ulong)pbVar12;
            param_1[5] = uVar8;
            param_1[6] = uVar5;
            param_1[7] = uVar15;
            uStack_1e8 = param_1[1];
            uStack_1f0 = *param_1;
            uStack_1d8 = param_1[3];
            uStack_1e0 = param_1[2];
            uStack_1c8 = param_1[5];
            uStack_1d0 = param_1[4];
            uStack_1b8 = param_1[7];
            uStack_1c0 = param_1[6];
            uStack_1a8 = param_1[9];
            uStack_1b0 = param_1[8];
            uStack_198 = param_1[0xb];
            uStack_1a0 = param_1[10];
            uStack_188 = param_1[0xd];
            uStack_190 = param_1[0xc];
            uStack_180 = uStack_e0;
            uVar14 = FUN_100fbc738(&pbStack_240);
            if (uVar14 != 0) {
              *param_1 = 0x8000000000000000;
              param_1[1] = uVar14;
              if (uStack_1f0 != 0) {
                _free(uStack_1e8);
              }
              if (uStack_1d8 != 0) {
                _free(uStack_1d0);
              }
              if (uStack_1c0 != 0x8000000000000005) {
                FUN_100de6690(&uStack_1c0);
              }
            }
            goto LAB_10132d430;
          }
          uVar15 = FUN_1087e422c(2,&UNK_10b22d130,&UNK_10b20a590);
        }
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar15;
        if (uVar6 != 0) {
          _free(pbVar12);
        }
      }
      pbVar12 = pbStack_228;
      pbVar23 = pbStack_238;
      if (uVar14 != 0) {
        _free(pbVar13);
        pbVar12 = pbStack_228;
        pbVar23 = pbStack_238;
      }
    }
    lVar22 = ((ulong)((long)pbVar12 - (long)pbVar23) >> 5) + 1;
    while (lVar22 = lVar22 + -1, lVar22 != 0) {
      FUN_100e077ec(pbVar23);
      pbVar23 = pbVar23 + 0x20;
    }
    if (lStack_230 != 0) {
      _free(pbStack_240);
    }
    goto LAB_10132d430;
  }
  if (bVar4 != 0x15) {
    uVar14 = FUN_108855b04(param_2,auStack_71,&UNK_10b20c740);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar14;
    return;
  }
  uStack_210 = *(undefined8 *)(param_2 + 8);
  pbStack_220 = *(byte **)(param_2 + 0x10);
  pbStack_208 = pbStack_220 + *(long *)(param_2 + 0x18) * 0x40;
  pbStack_240 = (byte *)CONCAT71(pbStack_240._1_7_,0x16);
  lStack_200 = 0;
  uStack_170 = 0x8000000000000006;
  if (*(long *)(param_2 + 0x18) == 0) {
    uStack_170 = 0x8000000000000006;
    puVar24 = (undefined *)0x0;
    uStack_248 = 0x8000000000000006;
    pbStack_218 = pbStack_220;
LAB_10132d144:
    uStack_98 = &UNK_108caaace;
    plStack_90 = (long *)0x6;
    bStack_120 = (byte)&uStack_98;
    bStack_11f = (byte)((ulong)&uStack_98 >> 8);
    uStack_11e = (undefined6)((ulong)&uStack_98 >> 0x10);
    uStack_118 = 0xa0;
    uStack_117 = 0x100c7b3;
    puVar21 = (undefined *)0x0;
    uVar14 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_120);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar14;
    uVar16 = true;
    uVar17 = true;
  }
  else {
    puVar18 = (undefined8 *)((ulong)&uStack_98 | 1);
    puVar19 = (undefined8 *)((ulong)&pbStack_240 | 1);
    puVar20 = (undefined8 *)((ulong)&bStack_120 | 1);
    uStack_248 = 0x8000000000000006;
    puVar21 = (undefined *)0x8000000000000000;
    puVar24 = (undefined *)0x8000000000000000;
    uStack_250 = 0x8000000000000006;
    pbVar12 = pbStack_220;
    pbVar25 = pbStack_208;
    do {
      pbVar13 = pbVar25;
      pbVar23 = pbVar12 + 0x40;
      bVar3 = *pbVar12;
      pbStack_218 = pbVar23;
      if (bVar3 == 0x16) break;
      lStack_200 = lStack_200 + 1;
      uStack_98 = (undefined *)CONCAT71(uStack_98._1_7_,bVar3);
      uVar11 = *(undefined8 *)(pbVar12 + 1);
      uVar27 = *(undefined8 *)(pbVar12 + 0x18);
      uVar26 = *(undefined8 *)(pbVar12 + 0x10);
      uVar29 = *(undefined8 *)(pbVar12 + 0x28);
      uVar28 = *(undefined8 *)(pbVar12 + 0x20);
      puVar18[1] = *(undefined8 *)(pbVar12 + 9);
      *puVar18 = uVar11;
      *(undefined8 *)((long)puVar18 + 0x17) = uVar27;
      *(undefined8 *)((long)puVar18 + 0xf) = uVar26;
      pbStack_108 = *(byte **)(pbVar12 + 0x38);
      uStack_118 = (undefined1)uVar29;
      uStack_117 = (undefined7)((ulong)uVar29 >> 8);
      bStack_120 = (byte)uVar28;
      bStack_11f = (byte)((ulong)uVar28 >> 8);
      uStack_11e = (undefined6)((ulong)uVar28 >> 0x10);
      uStack_110 = (undefined1)*(undefined8 *)(pbVar12 + 0x30);
      uStack_10f = (undefined7)((ulong)*(undefined8 *)(pbVar12 + 0x30) >> 8);
      if ((byte)pbStack_240 != '\x16') {
        FUN_100e077ec(&pbStack_240);
      }
      plVar9 = plStack_88;
      plVar2 = plStack_90;
      pbStack_238 = (byte *)CONCAT71(uStack_117,uStack_118);
      pbStack_240 = (byte *)CONCAT62(uStack_11e,CONCAT11(bStack_11f,bStack_120));
      lStack_230 = CONCAT71(uStack_10f,uStack_110);
      pbStack_228 = pbStack_108;
      if (bVar3 < 0xd) {
        if (bVar3 == 1) {
          bStack_11f = uStack_98._1_1_;
          if (2 < uStack_98._1_1_) {
            bStack_11f = 3;
          }
LAB_10132ce20:
          bStack_120 = 0;
          goto LAB_10132ce24;
        }
        if (bVar3 == 4) {
          if ((long *)0x2 < plStack_90) {
            plVar2 = (long *)0x3;
          }
          bStack_11f = (byte)plVar2;
          goto LAB_10132ce20;
        }
        if (bVar3 == 0xc) {
          if (lStack_80 == 4) {
            if ((int)*plStack_88 != 0x6c6f6f74) goto LAB_10132cdb8;
            bStack_11f = 1;
joined_r0x00010132cf98:
            bStack_120 = 0;
          }
          else if (lStack_80 == 9) {
            if (*plStack_88 != 0x746e656d75677261 || (char)plStack_88[1] != 's') goto LAB_10132cdb8;
            bStack_11f = 2;
            bStack_120 = 0;
          }
          else {
            if ((lStack_80 != 6) ||
               ((int)*plStack_88 != 0x76726573 || *(short *)((long)plStack_88 + 4) != 0x7265)) {
LAB_10132cdb8:
              bStack_11f = 3;
              goto joined_r0x00010132cf98;
            }
            bStack_11f = 0;
            bStack_120 = 0;
          }
joined_r0x00010132cd9c:
          if (plVar2 != (long *)0x0) {
            _free(plVar9);
          }
        }
        else {
LAB_10132cfa8:
          uVar11 = FUN_108855b04(&uStack_98,auStack_71,&UNK_10b211bc0);
          uStack_118 = (undefined1)uVar11;
          uStack_117 = (undefined7)((ulong)uVar11 >> 8);
          bStack_120 = 1;
        }
      }
      else {
        if (bVar3 == 0xd) {
          if (plStack_88 == (long *)0x4) {
            if ((int)*plStack_90 != 0x6c6f6f74) goto LAB_10132ce18;
            bStack_11f = 1;
          }
          else if (plStack_88 == (long *)0x9) {
            if (*plStack_90 != 0x746e656d75677261 || (char)plStack_90[1] != 's') goto LAB_10132ce18;
            bStack_11f = 2;
          }
          else if ((plStack_88 == (long *)0x6) &&
                  ((int)*plStack_90 == 0x76726573 && *(short *)((long)plStack_90 + 4) == 0x7265)) {
            bStack_11f = 0;
          }
          else {
LAB_10132ce18:
            bStack_11f = 3;
          }
          goto LAB_10132ce20;
        }
        if (bVar3 == 0xe) {
          FUN_100ae4fb0(&bStack_120,plStack_88);
          goto joined_r0x00010132cd9c;
        }
        if (bVar3 != 0xf) goto LAB_10132cfa8;
        FUN_100ae4fb0(&bStack_120,plStack_90,plStack_88);
LAB_10132ce24:
        FUN_100e077ec(&uStack_98);
      }
      if ((bStack_120 & 1) != 0) {
        *param_1 = 0x8000000000000000;
        param_1[1] = CONCAT71(uStack_117,uStack_118);
LAB_10132d1ac:
        uVar16 = true;
        uVar17 = true;
        uStack_170 = uStack_250;
        pbStack_168 = pbStack_270;
        goto joined_r0x00010132d3d8;
      }
      bVar3 = (byte)pbStack_240;
      pbVar25 = pbVar13;
      if (bStack_11f < 2) {
        if (bStack_11f == 0) {
          if (puVar21 != (undefined *)0x8000000000000000) {
            uStack_170 = uStack_250;
            pbStack_168 = pbStack_270;
            uStack_98 = &UNK_108caaace;
            plStack_90 = (long *)0x6;
            bStack_120 = (byte)&uStack_98;
            bStack_11f = (byte)((ulong)&uStack_98 >> 8);
            uStack_11e = (undefined6)((ulong)&uStack_98 >> 0x10);
            uStack_118 = 0xa0;
            uStack_117 = 0x100c7b3;
            uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_120);
LAB_10132d698:
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar14;
            uVar16 = true;
            uVar17 = true;
            goto joined_r0x00010132d3d8;
          }
          pbStack_240 = (byte *)CONCAT71(pbStack_240._1_7_,0x16);
          if (bVar3 == 0x16) {
            uStack_170 = uStack_250;
            pbStack_168 = pbStack_270;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10132d79c:
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10132d7a0);
            (*pcVar10)();
          }
          uVar11 = *puVar19;
          puVar20[1] = puVar19[1];
          *puVar20 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar19 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar11;
          bStack_120 = bVar3;
          FUN_1004b62d4(&uStack_98,&bStack_120);
          if (uStack_98 == (undefined *)0x8000000000000000) {
            puVar21 = (undefined *)0x0;
            *param_1 = 0x8000000000000000;
            param_1[1] = (ulong)plStack_90;
            uVar16 = true;
            uVar17 = true;
            uStack_170 = uStack_250;
            pbStack_168 = pbStack_270;
            goto joined_r0x00010132d3d8;
          }
          plStack_268 = plStack_90;
          plStack_280 = plStack_88;
          puVar21 = uStack_98;
        }
        else {
          if (puVar24 != (undefined *)0x8000000000000000) {
            uStack_170 = uStack_250;
            pbStack_168 = pbStack_270;
            uStack_98 = &UNK_108cde3ec;
            plStack_90 = (long *)0x4;
            bStack_120 = (byte)&uStack_98;
            bStack_11f = (byte)((ulong)&uStack_98 >> 8);
            uStack_11e = (undefined6)((ulong)&uStack_98 >> 0x10);
            uStack_118 = 0xa0;
            uStack_117 = 0x100c7b3;
            uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_120);
            goto LAB_10132d698;
          }
          pbStack_240 = (byte *)CONCAT71(pbStack_240._1_7_,0x16);
          if (bVar3 == 0x16) {
            uStack_170 = uStack_250;
            pbStack_168 = pbStack_270;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10132d79c;
          }
          uVar11 = *puVar19;
          puVar20[1] = puVar19[1];
          *puVar20 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar19 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar11;
          bStack_120 = bVar3;
          puVar24 = (undefined *)0x0;
          FUN_1004b62d4(&uStack_98,&bStack_120);
          if (uStack_98 == (undefined *)0x8000000000000000) {
            *param_1 = 0x8000000000000000;
            param_1[1] = (ulong)plStack_90;
            goto LAB_10132d1ac;
          }
          plStack_278 = plStack_90;
          plStack_288 = plStack_88;
          puVar24 = uStack_98;
        }
      }
      else if (bStack_11f == 2) {
        if (uStack_248 != 0x8000000000000006) {
          uStack_170 = uStack_250;
          pbStack_168 = pbStack_270;
          uStack_98 = &UNK_108cadb54;
          plStack_90 = (long *)0x9;
          bStack_120 = (byte)&uStack_98;
          bStack_11f = (byte)((ulong)&uStack_98 >> 8);
          uStack_11e = (undefined6)((ulong)&uStack_98 >> 0x10);
          uStack_118 = 0xa0;
          uStack_117 = 0x100c7b3;
          uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_120);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar14;
          uVar16 = true;
          goto joined_r0x00010132d724;
        }
        func_0x000100f1e618(&bStack_120,&pbStack_240);
        uStack_250 = CONCAT62(uStack_11e,CONCAT11(bStack_11f,bStack_120));
        pbStack_270 = (byte *)CONCAT71(uStack_117,uStack_118);
        if (uStack_250 == 0x8000000000000006) {
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbStack_270;
          uVar17 = true;
          goto LAB_10132d3f4;
        }
        uStack_160 = CONCAT71(uStack_10f,uStack_110);
        pbStack_158 = pbStack_108;
        pbStack_148 = pbStack_f8;
        uStack_150 = uStack_100;
        pbStack_138 = pbStack_e8;
        uStack_140 = uStack_f0;
        uStack_130 = uStack_e0;
        pbVar23 = pbStack_218;
        pbVar25 = pbStack_208;
        uStack_248 = uStack_250;
      }
      else {
        pbStack_240 = (byte *)CONCAT71(pbStack_240._1_7_,0x16);
        if (bVar3 == 0x16) {
          uStack_170 = uStack_250;
          pbStack_168 = pbStack_270;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10132d79c;
        }
        uVar11 = *puVar19;
        puVar20[1] = puVar19[1];
        *puVar20 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar19 + 0xf);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar11;
        bStack_120 = bVar3;
        FUN_100e077ec(&bStack_120);
      }
      pbVar13 = pbVar23;
      pbVar12 = pbVar13;
      pbVar23 = pbVar13;
    } while (pbVar13 != pbVar25);
    uStack_170 = uStack_250;
    pbStack_168 = pbStack_270;
    if (puVar21 == (undefined *)0x8000000000000000) goto LAB_10132d144;
    if (puVar24 != (undefined *)0x8000000000000000) {
      uVar14 = 0x8000000000000005;
      if (uStack_248 != 0x8000000000000006) {
        pbStack_c8 = pbStack_158;
        uStack_d0 = uStack_160;
        pbStack_b8 = pbStack_148;
        uStack_c0 = uStack_150;
        pbStack_a8 = pbStack_138;
        uStack_b0 = uStack_140;
        uStack_a0 = uStack_130;
        uVar14 = uStack_248;
      }
      *param_1 = (ulong)puVar21;
      param_1[1] = (ulong)plStack_268;
      param_1[2] = (ulong)plStack_280;
      param_1[3] = (ulong)puVar24;
      param_1[4] = (ulong)plStack_278;
      param_1[5] = (ulong)plStack_288;
      param_1[6] = uVar14;
      param_1[7] = (ulong)pbStack_270;
      param_1[9] = (ulong)pbStack_c8;
      param_1[8] = uStack_d0;
      param_1[0xb] = (ulong)pbStack_b8;
      param_1[10] = uStack_c0;
      param_1[0xd] = (ulong)pbStack_a8;
      param_1[0xc] = uStack_b0;
      param_1[0xe] = uStack_a0;
      uStack_1e8 = param_1[1];
      uStack_1f0 = *param_1;
      uStack_1d8 = param_1[3];
      uStack_1e0 = param_1[2];
      uStack_1c8 = param_1[5];
      uStack_1d0 = param_1[4];
      uStack_1b8 = param_1[7];
      uStack_1c0 = param_1[6];
      uStack_1a8 = param_1[9];
      uStack_1b0 = param_1[8];
      uStack_198 = param_1[0xb];
      uStack_1a0 = param_1[10];
      uStack_188 = param_1[0xd];
      uStack_190 = param_1[0xc];
      uStack_180 = uStack_a0;
      FUN_100d34830(&pbStack_220);
      if (pbVar13 == pbVar23) {
        uVar14 = 0;
      }
      else {
        bStack_120 = (byte)lStack_200;
        bStack_11f = (byte)((ulong)lStack_200 >> 8);
        uStack_11e = (undefined6)((ulong)lStack_200 >> 0x10);
        uVar14 = FUN_1087e422c(lStack_200 + ((ulong)((long)pbVar13 - (long)pbVar23) >> 6),
                               &bStack_120,&UNK_10b23a190);
      }
      if ((byte)pbStack_240 != '\x16') {
        FUN_100e077ec(&pbStack_240);
      }
      if (uVar14 != 0) {
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar14;
        if (uStack_1f0 != 0) {
          _free(uStack_1e8);
        }
        if (uStack_1d8 != 0) {
          _free(uStack_1d0);
        }
        if (uStack_1c0 != 0x8000000000000005) {
          FUN_100de6690(&uStack_1c0);
        }
      }
      goto LAB_10132d430;
    }
    uStack_98 = &UNK_108cde3ec;
    plStack_90 = (long *)0x4;
    bStack_120 = (byte)&uStack_98;
    bStack_11f = (byte)((ulong)&uStack_98 >> 8);
    uStack_11e = (undefined6)((ulong)&uStack_98 >> 0x10);
    uStack_118 = 0xa0;
    uStack_117 = 0x100c7b3;
    uVar14 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_120);
    puVar24 = (undefined *)0x0;
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar14;
    if (puVar21 != (undefined *)0x0) {
      _free(plStack_268);
    }
    uVar16 = false;
    uVar17 = false;
  }
joined_r0x00010132d3d8:
  if (uStack_248 != 0x8000000000000006) {
joined_r0x00010132d724:
    uVar17 = uVar16;
    if (uStack_248 != 0x8000000000000005) {
      FUN_100de6690(&uStack_170);
    }
  }
LAB_10132d3f4:
  if (((ulong)puVar24 & 0x7fffffffffffffff) == 0) {
    bVar1 = false;
    if (((ulong)puVar21 & 0x7fffffffffffffff) != 0) {
      bVar1 = (bool)uVar17;
    }
    if (bVar1) {
LAB_10132d408:
      _free(plStack_268);
    }
  }
  else {
    _free(plStack_278);
    bVar1 = false;
    if (((ulong)puVar21 & 0x7fffffffffffffff) != 0) {
      bVar1 = (bool)uVar17;
    }
    if (bVar1) goto LAB_10132d408;
  }
  FUN_100d34830(&pbStack_220);
  if ((byte)pbStack_240 != '\x16') {
    FUN_100e077ec(&pbStack_240);
  }
LAB_10132d430:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

