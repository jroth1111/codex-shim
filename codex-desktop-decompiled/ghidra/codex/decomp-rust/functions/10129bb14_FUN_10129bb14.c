
/* WARNING: Type propagation algorithm not settling */

void FUN_10129bb14(ulong *param_1,char *param_2)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  byte *pbVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  code *pcVar12;
  bool bVar13;
  undefined8 uVar14;
  byte *pbVar15;
  undefined1 uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined *puVar28;
  long lVar29;
  byte *unaff_x23;
  undefined *puVar30;
  byte *pbVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  ulong uStack_1b0;
  byte *pbStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  byte *pbStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  byte abStack_110 [8];
  long lStack_108;
  byte *pbStack_100;
  long lStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  byte *pbStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  if (*param_2 != '\x14') {
    uVar23 = FUN_108855b04(param_2,auStack_69,&UNK_10b209de0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar23;
    return;
  }
  uVar25 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  uVar17 = *(ulong *)(param_2 + 0x18);
  pbVar27 = pbVar2 + uVar17 * 0x20;
  lStack_1a0 = 0;
  uVar23 = uVar17;
  if (0x4923 < uVar17) {
    uVar23 = 0x4924;
  }
  pbStack_1c0 = pbVar2;
  pbStack_1b8 = pbVar2;
  uStack_1b0 = uVar25;
  pbStack_1a8 = pbVar27;
  if (uVar17 != 0) {
    uVar17 = _malloc(uVar23 * 0x38);
    if (uVar17 == 0) {
      func_0x0001087c9084(8,uVar23 * 0x38);
LAB_10129cae8:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10129caec);
      (*pcVar12)();
    }
    lVar32 = 0;
    uStack_188 = 0;
    puVar18 = (undefined8 *)((ulong)abStack_110 | 1);
    puVar24 = (undefined8 *)((ulong)&uStack_90 | 1);
    puVar19 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    pbVar31 = pbVar2;
    uStack_198 = uVar23;
    uStack_190 = uVar17;
LAB_10129bc00:
    lVar29 = lStack_f8;
    pbVar6 = pbStack_100;
    lVar20 = lStack_108;
    pbVar26 = pbVar31 + 0x20;
    bVar3 = *pbVar31;
    pbVar22 = pbVar26;
    pbStack_1b8 = pbVar26;
    if (bVar3 != 0x16) {
      uVar14 = *(undefined8 *)(pbVar31 + 1);
      puVar18[1] = *(undefined8 *)(pbVar31 + 9);
      *puVar18 = uVar14;
      uVar14 = *(undefined8 *)(pbVar31 + 0x10);
      *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar31 + 0x18);
      *(undefined8 *)((long)puVar18 + 0xf) = uVar14;
      lVar32 = lVar32 + 1;
      lStack_1a0 = lVar32;
      abStack_110[0] = bVar3;
      if (bVar3 == 0x14) {
        pbVar22 = pbStack_100 + lStack_f8 * 0x20;
        pbStack_f0 = pbStack_100;
        lStack_e0 = lStack_108;
        pbStack_d0 = (byte *)0x0;
        pbVar31 = pbStack_100;
        pbStack_d8 = pbVar22;
        if (lStack_f8 == 0) {
LAB_10129bcd4:
          pbStack_e8 = pbVar31;
          pbVar15 = (byte *)FUN_1087e422c(0,&UNK_10b22edb8,&UNK_10b20a590);
LAB_10129bcf0:
          puStack_148 = (undefined *)0x8000000000000000;
          pbStack_140 = pbVar15;
LAB_10129bd00:
          lVar29 = ((ulong)((long)pbVar22 - (long)pbVar31) >> 5) + 1;
          while (lVar29 = lVar29 + -1, lVar29 != 0) {
            FUN_100e077ec(pbVar31);
            pbVar31 = pbVar31 + 0x20;
          }
          pbVar21 = pbVar6;
          if (lVar20 != 0) {
LAB_10129bd30:
            _free(pbVar21);
          }
          goto LAB_10129c47c;
        }
        pbVar31 = pbStack_100 + 0x20;
        bVar4 = *pbStack_100;
        if (bVar4 == 0x16) goto LAB_10129bcd4;
        uVar14 = *(undefined8 *)(pbStack_100 + 1);
        puVar24[1] = *(undefined8 *)(pbStack_100 + 9);
        *puVar24 = uVar14;
        uVar14 = *(undefined8 *)(pbStack_100 + 0x10);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)(pbStack_100 + 0x18);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar14;
        pbStack_d0 = (byte *)0x1;
        uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar4);
        pbStack_e8 = pbVar31;
        FUN_1004b62d4(&uStack_a8,&uStack_90);
        uVar14 = uStack_98;
        unaff_x23 = pbStack_a0;
        puVar28 = uStack_a8;
        pbVar15 = pbStack_a0;
        if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_10129bcf0;
        if (lVar29 == 1) {
LAB_10129c264:
          uVar14 = 1;
LAB_10129c268:
          pbVar15 = (byte *)FUN_1087e422c(uVar14,&UNK_10b22edb8,&UNK_10b20a590);
LAB_10129c280:
          puStack_148 = (undefined *)0x8000000000000000;
          pbStack_140 = pbVar15;
          if (puVar28 != (undefined *)0x0) {
            _free(unaff_x23);
          }
          goto LAB_10129bd00;
        }
        pbVar31 = pbVar6 + 0x40;
        bVar4 = pbVar6[0x20];
        pbStack_e8 = pbVar31;
        if (bVar4 == 0x16) goto LAB_10129c264;
        uVar35 = *(undefined8 *)(pbVar6 + 0x21);
        puVar24[1] = *(undefined8 *)(pbVar6 + 0x29);
        *puVar24 = uVar35;
        uVar35 = *(undefined8 *)(pbVar6 + 0x30);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)(pbVar6 + 0x38);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar35;
        pbStack_d0 = (byte *)0x2;
        uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar4);
        FUN_100615890(&uStack_a8,&uStack_90);
        pbVar15 = pbStack_a0;
        if (((ulong)uStack_a8 & 1) != 0) goto LAB_10129c280;
        if (lVar29 == 2) {
LAB_10129c5d4:
          uVar14 = 2;
          goto LAB_10129c268;
        }
        uVar8 = uStack_a8._4_4_;
        pbVar31 = pbVar6 + 0x60;
        bVar4 = pbVar6[0x40];
        pbStack_e8 = pbVar31;
        if (bVar4 == 0x16) goto LAB_10129c5d4;
        uVar35 = *(undefined8 *)(pbVar6 + 0x41);
        puVar24[1] = *(undefined8 *)(pbVar6 + 0x49);
        *puVar24 = uVar35;
        uVar35 = *(undefined8 *)(pbVar6 + 0x50);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)(pbVar6 + 0x58);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar35;
        pbStack_d0 = (byte *)0x3;
        uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar4);
        FUN_100615890(&uStack_a8,&uStack_90);
        pbVar15 = pbStack_a0;
        if ((int)uStack_a8 == 1) goto LAB_10129c280;
        if (lVar29 == 3) {
LAB_10129c634:
          uVar14 = 3;
          goto LAB_10129c268;
        }
        uVar9 = uStack_a8._4_4_;
        pbVar31 = pbVar6 + 0x80;
        bVar4 = pbVar6[0x60];
        pbStack_e8 = pbVar31;
        if (bVar4 == 0x16) goto LAB_10129c634;
        uVar35 = *(undefined8 *)(pbVar6 + 0x61);
        puVar24[1] = *(undefined8 *)(pbVar6 + 0x69);
        *puVar24 = uVar35;
        uVar35 = *(undefined8 *)(pbVar6 + 0x70);
        *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)(pbVar6 + 0x78);
        *(undefined8 *)((long)puVar24 + 0xf) = uVar35;
        pbStack_d0 = (byte *)0x4;
        uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar4);
        FUN_1004b62d4(&uStack_a8,&uStack_90);
        pbVar21 = pbStack_a0;
        puVar30 = uStack_a8;
        pbVar15 = pbStack_a0;
        if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_10129c280;
        puStack_148 = puVar28;
        pbStack_140 = unaff_x23;
        uStack_138 = uVar14;
        puStack_130 = uStack_a8;
        pbStack_128 = pbStack_a0;
        uStack_120 = uStack_98;
        uStack_118 = uVar8;
        uStack_114 = uVar9;
        pbVar15 = (byte *)FUN_100fbc738(&pbStack_f0);
        if (pbVar15 != (byte *)0x0) {
          puStack_148 = (undefined *)0x8000000000000000;
          pbStack_140 = pbVar15;
          if (puVar28 != (undefined *)0x0) {
            _free(unaff_x23);
          }
          if (puVar30 == (undefined *)0x0) {
            puVar28 = (undefined *)0x8000000000000000;
            unaff_x23 = pbVar15;
            goto LAB_10129c494;
          }
          goto LAB_10129bd30;
        }
        goto LAB_10129c494;
      }
      if (bVar3 == 0x15) {
        lVar20 = lStack_f8 * 0x40;
        pbVar31 = pbStack_100 + lVar20;
        pbStack_d0 = pbStack_100;
        pbStack_c8 = pbStack_100;
        lStack_c0 = lStack_108;
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        puStack_b0 = (undefined8 *)0x0;
        pbStack_b8 = pbVar31;
        if (lStack_f8 != 0) {
          puVar33 = (undefined8 *)0x0;
          bVar5 = false;
          bVar13 = false;
          puVar28 = (undefined *)0x8000000000000000;
          puVar30 = (undefined *)0x8000000000000000;
LAB_10129bd60:
          plVar11 = plStack_80;
          plVar1 = plStack_88;
          puVar10 = uStack_90;
          pbVar21 = pbVar6 + 0x40;
          bVar4 = *pbVar6;
          pbVar22 = pbVar21;
          puVar34 = puVar33;
          if (bVar4 == 0x16) goto LAB_10129c2a4;
          uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar4);
          puVar34 = uStack_90;
          uVar14 = *(undefined8 *)(pbVar6 + 0x10);
          *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)(pbVar6 + 0x18);
          *(undefined8 *)((long)puVar24 + 0xf) = uVar14;
          uVar14 = *(undefined8 *)(pbVar6 + 1);
          puVar24[1] = *(undefined8 *)(pbVar6 + 9);
          *puVar24 = uVar14;
          pbStack_e8 = *(byte **)(pbVar6 + 0x28);
          pbStack_f0 = *(byte **)(pbVar6 + 0x20);
          pbStack_d8 = *(byte **)(pbVar6 + 0x38);
          lStack_e0 = *(long *)(pbVar6 + 0x30);
          unaff_x23 = pbStack_200;
          if (bVar4 < 0xd) {
            if (bVar4 == 1) {
              uStack_90._1_1_ = SUB81(puVar10,1);
              if (3 < uStack_90._1_1_) {
                uStack_90._1_1_ = 4;
              }
            }
            else {
              if (bVar4 != 4) {
                if (bVar4 != 0xc) goto LAB_10129c1a0;
                if (lStack_78 == 9) {
                  if (*plStack_80 == 0x72617453656e696c && (char)plStack_80[1] == 't') {
                    uVar16 = 1;
                    goto LAB_10129bf0c;
                  }
LAB_10129bf08:
                  uVar16 = 4;
                }
                else {
                  if (lStack_78 == 7) {
                    if ((int)*plStack_80 == 0x656e696c &&
                        *(int *)((long)plStack_80 + 3) == 0x646e4565) {
                      uVar16 = 2;
                      goto LAB_10129bf0c;
                    }
                    goto LAB_10129bf08;
                  }
                  if (lStack_78 != 4) goto LAB_10129bf08;
                  if ((int)*plStack_80 == 0x68746170) {
                    uVar16 = 0;
                  }
                  else {
                    if ((int)*plStack_80 != 0x65746f6e) goto LAB_10129bf08;
                    uVar16 = 3;
                  }
                }
LAB_10129bf0c:
                uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar16) << 8);
                goto joined_r0x00010129bf14;
              }
              if ((long *)0x3 < plStack_88) {
                plVar1 = (long *)0x4;
              }
              uStack_90._1_1_ = (byte)plVar1;
            }
LAB_10129bf88:
            uStack_a8._1_7_ = CONCAT61(uStack_a8._2_6_,uStack_90._1_1_);
            uStack_a8 = (undefined *)((ulong)uStack_a8._1_7_ << 8);
            uStack_90 = puVar34;
LAB_10129bf8c:
            FUN_100e077ec(&uStack_90);
joined_r0x00010129bf24:
            if (((ulong)uStack_a8 & 1) != 0) goto LAB_10129c1e0;
            uStack_a8._1_1_ = (byte)((ulong)uStack_a8 >> 8);
            cVar7 = (char)pbStack_f0;
            pbStack_f0._1_7_ = (undefined7)((ulong)pbStack_f0 >> 8);
            uStack_90._1_7_ = (undefined7)((ulong)uStack_90 >> 8);
            if (1 < uStack_a8._1_1_) {
              if (uStack_a8._1_1_ == 2) {
                if (bVar5) {
                  puStack_b0 = (undefined8 *)((long)puVar33 + 1);
                  uStack_a8 = &UNK_108cade98;
                  pbStack_a0 = (byte *)0x7;
                  uStack_90 = &uStack_a8;
                  plStack_88 = (long *)&DAT_100c7b3a0;
                  pbStack_c8 = pbVar21;
                  pbVar15 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
                  goto LAB_10129c814;
                }
                pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                if (cVar7 == '\x16') goto LAB_10129c960;
                uVar14 = *puVar19;
                puVar24[1] = puVar19[1];
                *puVar24 = uVar14;
                uVar14 = *(undefined8 *)((long)puVar19 + 0xf);
                *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                *(undefined8 *)((long)puVar24 + 0xf) = uVar14;
                uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar7);
                FUN_100615890(&uStack_a8,&uStack_90);
                if ((int)uStack_a8 == 1) goto LAB_10129c1e0;
                uStack_210 = uStack_a8._4_4_;
                bVar5 = true;
              }
              else if (uStack_a8._1_1_ == 3) {
                if (puVar30 != (undefined *)0x8000000000000000) {
                  puStack_b0 = (undefined8 *)((long)puVar33 + 1);
                  uStack_a8 = &UNK_108c51c0c;
                  pbStack_a0 = (byte *)0x4;
                  uStack_90 = &uStack_a8;
                  plStack_88 = (long *)&DAT_100c7b3a0;
                  pbStack_c8 = pbVar21;
                  pbVar15 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
                  puStack_148 = (undefined *)0x8000000000000000;
                  bVar5 = true;
                  pbStack_140 = pbVar15;
                  goto joined_r0x00010129c72c;
                }
                pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                if (cVar7 == '\x16') {
                  puStack_b0 = (undefined8 *)((long)puVar33 + 1);
                  pbStack_c8 = pbVar21;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_10129cae8;
                }
                uVar14 = *puVar19;
                puVar24[1] = puVar19[1];
                *puVar24 = uVar14;
                uVar14 = *(undefined8 *)((long)puVar19 + 0xf);
                *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                *(undefined8 *)((long)puVar24 + 0xf) = uVar14;
                uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar7);
                FUN_1004b62d4(&uStack_a8,&uStack_90);
                pbStack_200 = pbStack_a0;
                if (uStack_a8 == (undefined *)0x8000000000000000) {
                  puStack_b0 = (undefined8 *)((long)puVar33 + 1);
                  puStack_148 = (undefined *)0x8000000000000000;
                  pbStack_140 = pbStack_a0;
                  bVar5 = true;
                  pbVar15 = pbStack_a0;
                  pbStack_c8 = pbVar21;
                  goto LAB_10129c444;
                }
                uStack_218 = uStack_98;
                puVar30 = uStack_a8;
              }
              else {
                pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                if (cVar7 == '\x16') {
LAB_10129c960:
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  puStack_b0 = (undefined8 *)((long)puVar33 + 1);
                  pbStack_c8 = pbVar21;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_10129cae8;
                }
                uVar14 = *puVar19;
                puVar24[1] = puVar19[1];
                *puVar24 = uVar14;
                uVar14 = *(undefined8 *)((long)puVar19 + 0xf);
                *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                *(undefined8 *)((long)puVar24 + 0xf) = uVar14;
                uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar7);
                FUN_100e077ec(&uStack_90);
              }
LAB_10129bd4c:
              puVar33 = (undefined8 *)((long)puVar33 + 1);
              pbVar22 = pbVar31;
              puVar34 = (undefined8 *)((lVar20 - 0x40U >> 6) + 1);
              pbVar6 = pbVar21;
              if (pbVar21 == pbVar31) goto LAB_10129c2a4;
              goto LAB_10129bd60;
            }
            if (uStack_a8._1_1_ == 0) {
              if (puVar28 == (undefined *)0x8000000000000000) {
                pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                if (cVar7 != '\x16') {
                  uVar14 = *puVar19;
                  puVar24[1] = puVar19[1];
                  *puVar24 = uVar14;
                  uVar14 = *(undefined8 *)((long)puVar19 + 0xf);
                  *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                  *(undefined8 *)((long)puVar24 + 0xf) = uVar14;
                  uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar7);
                  FUN_1004b62d4(&uStack_a8,&uStack_90);
                  if (uStack_a8 != (undefined *)0x8000000000000000) {
                    pbStack_208 = pbStack_a0;
                    uStack_220 = uStack_98;
                    puVar28 = uStack_a8;
                    goto LAB_10129bd4c;
                  }
                  puVar28 = (undefined *)0x0;
                  goto LAB_10129c1e0;
                }
                puStack_b0 = (undefined8 *)((long)puVar33 + 1);
                pbStack_c8 = pbVar21;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_10129cae8;
              }
              puStack_b0 = (undefined8 *)((long)puVar33 + 1);
              uStack_a8 = &UNK_108c61038;
              pbStack_a0 = (byte *)0x4;
              uStack_90 = &uStack_a8;
              plStack_88 = (long *)&DAT_100c7b3a0;
              pbStack_c8 = pbVar21;
              pbVar15 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
LAB_10129c814:
              puStack_148 = (undefined *)0x8000000000000000;
              bVar5 = true;
              pbStack_140 = pbVar15;
              goto joined_r0x00010129c834;
            }
            if (bVar13) {
              puStack_b0 = (undefined8 *)((long)puVar33 + 1);
              uStack_a8 = &UNK_108cade8f;
              pbStack_a0 = (byte *)0x9;
              uStack_90 = &uStack_a8;
              plStack_88 = (long *)&DAT_100c7b3a0;
              pbStack_c8 = pbVar21;
              pbVar15 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
              goto LAB_10129c814;
            }
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (cVar7 == '\x16') goto LAB_10129c960;
            uVar14 = *puVar19;
            puVar24[1] = puVar19[1];
            *puVar24 = uVar14;
            uVar14 = *(undefined8 *)((long)puVar19 + 0xf);
            *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
            *(undefined8 *)((long)puVar24 + 0xf) = uVar14;
            uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar7);
            FUN_100615890(&uStack_a8,&uStack_90);
            bVar13 = (int)uStack_a8 != 1;
            if (bVar13) {
              uStack_20c = uStack_a8._4_4_;
              bVar13 = true;
              goto LAB_10129bd4c;
            }
          }
          else {
            if (bVar4 == 0xd) {
              if (plStack_80 == (long *)0x9) {
                if (*plStack_88 == 0x72617453656e696c && (char)plStack_88[1] == 't') {
                  uStack_90._1_1_ = 1;
                  goto LAB_10129bf88;
                }
              }
              else if (plStack_80 == (long *)0x7) {
                if ((int)*plStack_88 == 0x656e696c && *(int *)((long)plStack_88 + 3) == 0x646e4565)
                {
                  uStack_90._1_1_ = 2;
                  goto LAB_10129bf88;
                }
              }
              else if (plStack_80 == (long *)0x4) {
                if ((int)*plStack_88 == 0x68746170) {
                  uStack_90._1_1_ = 0;
                }
                else {
                  if ((int)*plStack_88 != 0x65746f6e) goto LAB_10129bf80;
                  uStack_90._1_1_ = 3;
                }
                goto LAB_10129bf88;
              }
LAB_10129bf80:
              uStack_90._1_1_ = 4;
              goto LAB_10129bf88;
            }
            if (bVar4 == 0xe) {
              FUN_100b4c4b0(&uStack_a8,plStack_80);
joined_r0x00010129bf14:
              if (plVar1 != (long *)0x0) {
                _free(plVar11);
              }
              goto joined_r0x00010129bf24;
            }
            if (bVar4 == 0xf) {
              FUN_100b4c4b0(&uStack_a8,plStack_88,plStack_80);
              goto LAB_10129bf8c;
            }
LAB_10129c1a0:
            pbStack_a0 = (byte *)FUN_108855b04(&uStack_90,auStack_69,&UNK_10b20d4e0);
            uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
          }
LAB_10129c1e0:
          puStack_b0 = (undefined8 *)((long)puVar33 + 1);
          puStack_148 = (undefined *)0x8000000000000000;
          bVar5 = true;
          pbVar15 = pbStack_a0;
          pbStack_140 = pbStack_a0;
          pbStack_c8 = pbVar21;
          goto joined_r0x00010129c834;
        }
        puVar30 = (undefined *)0x8000000000000000;
        goto LAB_10129c2c0;
      }
      unaff_x23 = (byte *)FUN_108855b04(abStack_110,auStack_69,&UNK_10b20c920);
      goto LAB_10129ca00;
    }
    goto LAB_10129c8d8;
  }
  uStack_198 = 0;
  uStack_190 = 8;
  uStack_188 = 0;
  pbVar22 = pbVar2;
LAB_10129c8d8:
  param_1[1] = uStack_190;
  *param_1 = uStack_198;
  param_1[2] = uStack_188;
  uVar23 = *param_1;
  pbVar26 = pbVar22;
  if (uVar23 != 0x8000000000000000) {
    pbVar2 = (byte *)param_1[1];
    uVar25 = param_1[2];
    uVar17 = FUN_100fbc738(&pbStack_1c0);
    if (uVar17 == 0) {
      return;
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar17;
    if (uVar25 != 0) {
      pbVar27 = pbVar2 + 0x20;
      do {
        if (*(long *)(pbVar27 + -0x20) != 0) {
          _free(*(undefined8 *)(pbVar27 + -0x18));
        }
        if (*(long *)(pbVar27 + -8) != 0) {
          _free(*(undefined8 *)pbVar27);
        }
        pbVar27 = pbVar27 + 0x38;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
    goto joined_r0x00010129ca8c;
  }
LAB_10129ca5c:
  lVar32 = ((ulong)((long)pbVar27 - (long)pbVar26) >> 5) + 1;
  while (lVar32 = lVar32 + -1, uVar23 = uVar25, lVar32 != 0) {
    FUN_100e077ec(pbVar26);
    pbVar26 = pbVar26 + 0x20;
  }
joined_r0x00010129ca8c:
  if (uVar23 != 0) {
    _free(pbVar2);
  }
  return;
LAB_10129c2a4:
  unaff_x23 = pbStack_200;
  pbStack_c8 = pbVar22;
  puStack_b0 = puVar34;
  if (puVar28 == (undefined *)0x8000000000000000) {
LAB_10129c2c0:
    uStack_a8 = &UNK_108c61038;
    pbStack_a0 = (byte *)0x4;
    puVar28 = (undefined *)0x0;
    uStack_90 = &uStack_a8;
    plStack_88 = (long *)&DAT_100c7b3a0;
    pbVar15 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
    puStack_148 = (undefined *)0x8000000000000000;
    bVar5 = true;
    pbStack_140 = pbVar15;
joined_r0x00010129c834:
    if (puVar30 != (undefined *)0x8000000000000000) {
joined_r0x00010129c72c:
      if (puVar30 != (undefined *)0x0) {
        _free(unaff_x23);
      }
    }
LAB_10129c444:
    if ((bVar5) && (((ulong)puVar28 & 0x7fffffffffffffff) != 0)) {
      _free(pbStack_208);
    }
    FUN_100d34830(&pbStack_d0);
    if ((char)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
LAB_10129c47c:
    puVar28 = (undefined *)0x8000000000000000;
    unaff_x23 = pbVar15;
    if ((bVar3 & 0x1e) != 0x14) {
      puVar28 = (undefined *)0x8000000000000000;
      FUN_100e077ec(abStack_110);
    }
  }
  else {
    if (!bVar13) {
      uStack_a8 = &UNK_108cade8f;
      pbStack_a0 = (byte *)0x9;
      uStack_90 = &uStack_a8;
      plStack_88 = (long *)&DAT_100c7b3a0;
      pbVar15 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
joined_r0x00010129c414:
      puStack_148 = (undefined *)0x8000000000000000;
      pbStack_140 = pbVar15;
      if (puVar28 != (undefined *)0x0) {
        puStack_148 = (undefined *)0x8000000000000000;
        _free(pbStack_208);
      }
      bVar5 = false;
      goto joined_r0x00010129c834;
    }
    if (!bVar5) {
      uStack_a8 = &UNK_108cade98;
      pbStack_a0 = (byte *)0x7;
      uStack_90 = &uStack_a8;
      plStack_88 = (long *)&DAT_100c7b3a0;
      pbVar15 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      goto joined_r0x00010129c414;
    }
    if (puVar30 == (undefined *)0x8000000000000000) {
      uStack_a8 = &UNK_108c51c0c;
      pbStack_a0 = (byte *)0x4;
      uStack_90 = &uStack_a8;
      plStack_88 = (long *)&DAT_100c7b3a0;
      pbVar15 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
      goto joined_r0x00010129c414;
    }
    pbStack_140 = pbStack_208;
    uStack_138 = uStack_220;
    pbStack_128 = pbStack_200;
    uStack_120 = uStack_218;
    uStack_118 = uStack_20c;
    uStack_114 = uStack_210;
    puStack_148 = puVar28;
    puStack_130 = puVar30;
    FUN_100d34830(&pbStack_d0);
    unaff_x23 = pbStack_208;
    if (pbVar31 != pbVar22) {
      uStack_90 = puVar34;
      unaff_x23 = (byte *)FUN_1087e422c(((ulong)((long)pbVar31 - (long)pbVar22) >> 6) +
                                        (long)puVar34,&uStack_90,&UNK_10b23a190);
      puStack_148 = (undefined *)0x8000000000000000;
      pbStack_140 = unaff_x23;
      if (puVar28 != (undefined *)0x0) {
        _free(pbStack_208);
      }
      if (puVar30 != (undefined *)0x0) {
        _free(pbStack_200);
      }
      puVar28 = (undefined *)0x8000000000000000;
    }
  }
LAB_10129c494:
  uVar23 = uStack_188;
  if (puVar28 != (undefined *)0x8000000000000000) {
    puStack_168 = puStack_130;
    uStack_170 = uStack_138;
    uStack_158 = uStack_120;
    pbStack_160 = pbStack_128;
    uStack_150 = CONCAT44(uStack_114,uStack_118);
    puStack_180 = puVar28;
    pbStack_178 = unaff_x23;
    if (uStack_188 == uStack_198) {
      func_0x0001089beb68(&uStack_198);
    }
    puVar33 = (undefined8 *)(uStack_190 + uVar23 * 0x38);
    puVar33[1] = pbStack_178;
    *puVar33 = puStack_180;
    puVar33[3] = puStack_168;
    puVar33[2] = uStack_170;
    puVar33[5] = uStack_158;
    puVar33[4] = pbStack_160;
    puVar33[6] = uStack_150;
    uStack_188 = uVar23 + 1;
    pbVar22 = pbVar27;
    pbVar31 = pbVar26;
    if (pbVar26 == pbVar27) goto LAB_10129c8d8;
    goto LAB_10129bc00;
  }
LAB_10129ca00:
  uVar23 = uStack_190;
  *param_1 = 0x8000000000000000;
  param_1[1] = (ulong)unaff_x23;
  if (uStack_188 != 0) {
    puVar18 = (undefined8 *)(uStack_190 + 0x20);
    uVar17 = uStack_188;
    do {
      if (puVar18[-4] != 0) {
        _free(puVar18[-3]);
      }
      if (puVar18[-1] != 0) {
        _free(*puVar18);
      }
      puVar18 = puVar18 + 7;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (uStack_198 != 0) {
    _free(uVar23);
  }
  goto LAB_10129ca5c;
}

