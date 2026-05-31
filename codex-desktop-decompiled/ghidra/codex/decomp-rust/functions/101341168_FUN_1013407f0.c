
void FUN_1013407f0(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long *plVar9;
  code *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  byte *pbVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  byte *unaff_x25;
  long *plVar32;
  undefined *puVar33;
  byte *pbVar34;
  undefined8 uVar35;
  byte *pbStack_220;
  byte *pbStack_210;
  byte *pbStack_200;
  undefined *puStack_1e0;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  ulong uStack_1c0;
  byte *pbStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined *puStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  undefined *puStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  undefined *puStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  undefined *puStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte abStack_130 [8];
  long lStack_128;
  byte *pbStack_120;
  long lStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  long lStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  byte *pbStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  if (*param_2 == '\x14') {
    uVar2 = *(ulong *)(param_2 + 8);
    pbVar3 = *(byte **)(param_2 + 0x10);
    uVar16 = *(ulong *)(param_2 + 0x18);
    pbVar31 = pbVar3 + uVar16 * 0x20;
    lStack_1b0 = 0;
    uVar23 = uVar16;
    if (0x5554 < uVar16) {
      uVar23 = 0x5555;
    }
    pbStack_1d0 = pbVar3;
    pbStack_1c8 = pbVar3;
    uStack_1c0 = uVar2;
    pbStack_1b8 = pbVar31;
    if (uVar16 == 0) {
      uStack_1a8 = 0;
      uStack_1a0 = 8;
      uStack_198 = 0;
      pbVar12 = pbVar3;
    }
    else {
      uVar16 = _malloc(uVar23 * 0x30);
      if (uVar16 == 0) {
        func_0x0001087c9084(8,uVar23 * 0x30);
LAB_1013415a8:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1013415ac);
        (*pcVar10)();
      }
      lVar27 = 0;
      uStack_198 = 0;
      puVar17 = (undefined8 *)((ulong)abStack_130 | 1);
      puVar18 = (undefined8 *)((ulong)&uStack_90 | 1);
      puVar19 = (undefined8 *)((ulong)&pbStack_110 | 1);
      pbVar13 = pbVar3;
      uStack_1a8 = uVar23;
      uStack_1a0 = uVar16;
      do {
        lVar26 = lStack_118;
        pbVar21 = pbStack_120;
        lVar20 = lStack_128;
        pbVar24 = pbVar13 + 0x20;
        bVar4 = *pbVar13;
        pbVar12 = pbVar24;
        pbStack_1c8 = pbVar24;
        if (bVar4 == 0x16) break;
        uVar35 = *(undefined8 *)(pbVar13 + 1);
        puVar17[1] = *(undefined8 *)(pbVar13 + 9);
        *puVar17 = uVar35;
        uVar35 = *(undefined8 *)(pbVar13 + 0x10);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar35;
        lVar27 = lVar27 + 1;
        lStack_1b0 = lVar27;
        abStack_130[0] = bVar4;
        if (bVar4 != 0x14) {
          if (bVar4 == 0x15) {
            lVar20 = lStack_118 * 0x40;
            pbVar12 = pbStack_120 + lVar20;
            pbStack_f0 = pbStack_120;
            pbStack_e8 = pbStack_120;
            lStack_e0 = lStack_128;
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            puStack_d0 = (undefined8 *)0x0;
            pbStack_d8 = pbVar12;
            if (lStack_118 == 0) {
              puStack_1e0 = (undefined *)0x8000000000000000;
              puStack_c0 = (undefined *)0x8000000000000000;
LAB_101340ee4:
              uStack_a8 = &UNK_108cbffd1;
              pbStack_a0 = (byte *)0xf;
              puVar25 = (undefined *)0x0;
              uStack_90 = &uStack_a8;
              plStack_88 = (long *)&DAT_100c7b3a0;
              pbStack_158 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
joined_r0x000101341010:
              puStack_160 = (undefined *)0x8000000000000000;
              pbVar12 = pbStack_158;
              if (puStack_1e0 != (undefined *)0x8000000000000000) {
joined_r0x00010134118c:
                puStack_160 = (undefined *)0x8000000000000000;
                pbStack_158 = pbVar12;
                if (unaff_x25 != (byte *)0x0) {
                  puStack_160 = (undefined *)0x8000000000000000;
                  pbVar13 = pbStack_200 + 8;
                  do {
                    if (*(long *)(pbVar13 + -8) != 0) {
                      _free(*(undefined8 *)pbVar13);
                    }
                    pbVar13 = pbVar13 + 0x18;
                    unaff_x25 = unaff_x25 + -1;
                  } while (unaff_x25 != (byte *)0x0);
                }
                if (puStack_1e0 != (undefined *)0x0) {
                  _free(pbStack_200);
                }
              }
LAB_10134119c:
              puVar25 = (undefined *)((ulong)puVar25 & 0x7fffffffffffffff);
joined_r0x0001013411a0:
              if (puVar25 != (undefined *)0x0) {
                _free(pbStack_210);
              }
              FUN_100d34830(&pbStack_f0);
              if ((char)pbStack_110 != '\x16') {
                FUN_100e077ec(&pbStack_110);
              }
              goto LAB_1013411cc;
            }
            puVar29 = (undefined8 *)0x0;
            puStack_1e0 = (undefined *)0x8000000000000000;
            puVar25 = (undefined *)0x8000000000000000;
            puVar33 = (undefined *)0x8000000000000000;
            pbVar13 = pbStack_120;
            do {
              plVar9 = plStack_80;
              plVar32 = plStack_88;
              puVar8 = uStack_90;
              pbVar21 = pbVar13 + 0x40;
              bVar5 = *pbVar13;
              pbVar11 = pbVar21;
              puVar30 = puVar29;
              if (bVar5 == 0x16) break;
              uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar5);
              puVar30 = uStack_90;
              uVar35 = *(undefined8 *)(pbVar13 + 0x10);
              *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
              *(undefined8 *)((long)puVar18 + 0xf) = uVar35;
              uVar35 = *(undefined8 *)(pbVar13 + 1);
              puVar18[1] = *(undefined8 *)(pbVar13 + 9);
              *puVar18 = uVar35;
              pbStack_108 = *(byte **)(pbVar13 + 0x28);
              pbStack_110 = *(byte **)(pbVar13 + 0x20);
              pbStack_f8 = *(byte **)(pbVar13 + 0x38);
              lStack_100 = *(long *)(pbVar13 + 0x30);
              if (0xc < bVar5) {
                if (bVar5 == 0xd) {
                  if (plStack_80 == (long *)0xb) {
                    uVar15 = 1;
                    if (*plStack_88 != 0x614e6e6967756c70 ||
                        *(long *)((long)plStack_88 + 3) != 0x73656d614e6e6967) {
                      uVar15 = 2;
                    }
                  }
                  else if (plStack_80 == (long *)0xf) {
                    uVar15 = 2;
                    if (*plStack_88 == 0x6c7074656b72616d &&
                        *(long *)((long)plStack_88 + 7) == 0x656d614e6563616c) {
                      uVar15 = 0;
                    }
                  }
                  else {
                    uVar15 = 2;
                  }
                  goto LAB_101340bc4;
                }
                if (bVar5 == 0xe) {
                  FUN_100baa884(&uStack_a8,plStack_80);
joined_r0x000101340a90:
                  if (plVar32 != (long *)0x0) {
                    _free(plVar9);
                  }
                  goto joined_r0x000101340bb8;
                }
                if (bVar5 == 0xf) {
                  FUN_100baa884(&uStack_a8,plStack_88,plStack_80);
                  goto LAB_101340bcc;
                }
LAB_101340d08:
                pbStack_a0 = (byte *)FUN_108855b04(&uStack_90,auStack_69,&UNK_10b20f100);
                uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
LAB_101340ff4:
                puStack_d0 = (undefined8 *)((long)puVar29 + 1);
                pbStack_e8 = pbVar21;
                pbStack_b0 = unaff_x25;
                puStack_c0 = puVar33;
                pbStack_158 = pbStack_a0;
                pbStack_b8 = pbStack_200;
                goto joined_r0x000101341010;
              }
              if (bVar5 == 1) {
                uStack_90._1_1_ = SUB81(puVar8,1);
                uVar14 = 1;
                if (uStack_90._1_1_ != '\x01') {
                  uVar14 = 2;
                }
                uVar15 = 0;
                if (uStack_90._1_1_ != '\0') {
                  uVar15 = uVar14;
                }
              }
              else {
                if (bVar5 != 4) {
                  if (bVar5 != 0xc) goto LAB_101340d08;
                  if (lStack_78 == 0xb) {
                    uVar14 = 1;
                    if (*plStack_80 != 0x614e6e6967756c70 ||
                        *(long *)((long)plStack_80 + 3) != 0x73656d614e6e6967) {
                      uVar14 = 2;
                    }
                    uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar14) << 8);
                  }
                  else if (lStack_78 == 0xf) {
                    uVar14 = 2;
                    if (*plStack_80 == 0x6c7074656b72616d &&
                        *(long *)((long)plStack_80 + 7) == 0x656d614e6563616c) {
                      uVar14 = 0;
                    }
                    uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar14) << 8);
                  }
                  else {
                    uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x200);
                  }
                  goto joined_r0x000101340a90;
                }
                uVar14 = 1;
                if (plStack_88 != (long *)0x1) {
                  uVar14 = 2;
                }
                uVar15 = 0;
                if (plStack_88 != (long *)0x0) {
                  uVar15 = uVar14;
                }
              }
LAB_101340bc4:
              uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar15) << 8);
              uStack_90 = puVar30;
LAB_101340bcc:
              FUN_100e077ec(&uStack_90);
joined_r0x000101340bb8:
              if (((ulong)uStack_a8 & 1) != 0) goto LAB_101340ff4;
              uStack_a8._1_1_ = (char)((ulong)uStack_a8 >> 8);
              cVar6 = (char)pbStack_110;
              pbStack_110._1_7_ = (undefined7)((ulong)pbStack_110 >> 8);
              uStack_90._1_7_ = (undefined7)((ulong)uStack_90 >> 8);
              if (uStack_a8._1_1_ == '\0') {
                if (puVar25 != (undefined *)0x8000000000000000) {
                  puStack_d0 = (undefined8 *)((long)puVar29 + 1);
                  pbStack_b8 = pbStack_200;
                  uStack_a8 = &UNK_108cbffd1;
                  pbStack_a0 = (byte *)0xf;
                  uStack_90 = &uStack_a8;
                  plStack_88 = (long *)&DAT_100c7b3a0;
                  pbStack_e8 = pbVar21;
                  puStack_c0 = puVar33;
                  pbStack_b0 = unaff_x25;
                  pbStack_158 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
                  goto joined_r0x000101341010;
                }
                pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
                if (cVar6 == '\x16') {
                  puStack_d0 = (undefined8 *)((long)puVar29 + 1);
                  pbStack_b8 = pbStack_200;
                  pbStack_e8 = pbVar21;
                  puStack_c0 = puVar33;
                  pbStack_b0 = unaff_x25;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_1013415a8;
                }
                uVar35 = *puVar19;
                puVar18[1] = puVar19[1];
                *puVar18 = uVar35;
                uVar35 = *(undefined8 *)((long)puVar19 + 0xf);
                *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                *(undefined8 *)((long)puVar18 + 0xf) = uVar35;
                uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar6);
                FUN_1004b62d4(&uStack_a8,&uStack_90);
                if (uStack_a8 == (undefined *)0x8000000000000000) {
                  puVar25 = (undefined *)0x0;
                  goto LAB_101340ff4;
                }
                pbStack_210 = pbStack_a0;
                pbStack_220 = pbStack_98;
                puVar25 = uStack_a8;
              }
              else if (uStack_a8._1_1_ == '\x01') {
                if (puStack_1e0 != (undefined *)0x8000000000000000) {
                  puStack_d0 = (undefined8 *)((long)puVar29 + 1);
                  pbStack_b8 = pbStack_200;
                  uStack_a8 = &UNK_108cbffe0;
                  pbStack_a0 = (byte *)0xb;
                  uStack_90 = &uStack_a8;
                  plStack_88 = (long *)&DAT_100c7b3a0;
                  pbStack_e8 = pbVar21;
                  puStack_c0 = puVar33;
                  pbStack_b0 = unaff_x25;
                  pbVar12 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
                  goto joined_r0x00010134118c;
                }
                pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
                if (cVar6 == '\x16') {
                  puStack_d0 = (undefined8 *)((long)puVar29 + 1);
                  pbStack_b8 = pbStack_200;
                  pbStack_e8 = pbVar21;
                  puStack_c0 = puVar33;
                  pbStack_b0 = unaff_x25;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_1013415a8;
                }
                uVar35 = *puVar19;
                puVar18[1] = puVar19[1];
                *puVar18 = uVar35;
                uVar35 = *(undefined8 *)((long)puVar19 + 0xf);
                *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                *(undefined8 *)((long)puVar18 + 0xf) = uVar35;
                uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar6);
                FUN_1004b5b34(&uStack_a8,&uStack_90);
                puStack_1e0 = uStack_a8;
                if (uStack_a8 == (undefined *)0x8000000000000000) {
                  puStack_d0 = (undefined8 *)((long)puVar29 + 1);
                  puStack_160 = (undefined *)0x8000000000000000;
                  pbStack_158 = pbStack_a0;
                  pbVar12 = pbStack_a0;
                  pbStack_e8 = pbVar21;
                  goto LAB_10134119c;
                }
                pbStack_200 = pbStack_a0;
                unaff_x25 = pbStack_98;
                puVar33 = uStack_a8;
              }
              else {
                pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
                if (cVar6 == '\x16') {
                  puStack_d0 = (undefined8 *)((long)puVar29 + 1);
                  pbStack_b8 = pbStack_200;
                  pbStack_e8 = pbVar21;
                  puStack_c0 = puVar33;
                  pbStack_b0 = unaff_x25;
                  func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                  goto LAB_1013415a8;
                }
                uVar35 = *puVar19;
                puVar18[1] = puVar19[1];
                *puVar18 = uVar35;
                uVar35 = *(undefined8 *)((long)puVar19 + 0xf);
                *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                *(undefined8 *)((long)puVar18 + 0xf) = uVar35;
                uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar6);
                FUN_100e077ec(&uStack_90);
              }
              puVar29 = (undefined8 *)((long)puVar29 + 1);
              pbVar11 = pbVar12;
              puVar30 = (undefined8 *)((lVar20 - 0x40U >> 6) + 1);
              pbVar13 = pbVar21;
            } while (pbVar21 != pbVar12);
            pbStack_b8 = pbStack_200;
            pbStack_e8 = pbVar11;
            puStack_d0 = puVar30;
            puStack_c0 = puVar33;
            pbStack_b0 = unaff_x25;
            if (puVar25 == (undefined *)0x8000000000000000) goto LAB_101340ee4;
            if (puStack_1e0 == (undefined *)0x8000000000000000) {
              uStack_a8 = &UNK_108cbffe0;
              pbStack_a0 = (byte *)0xb;
              uStack_90 = &uStack_a8;
              plStack_88 = (long *)&DAT_100c7b3a0;
              pbVar12 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
              puStack_160 = (undefined *)0x8000000000000000;
              pbStack_158 = pbVar12;
              goto joined_r0x0001013411a0;
            }
            pbStack_158 = pbStack_210;
            pbStack_150 = pbStack_220;
            puStack_148 = puStack_1e0;
            pbStack_140 = pbStack_200;
            puStack_160 = puVar25;
            pbStack_138 = unaff_x25;
            FUN_100d34830(&pbStack_f0);
            pbVar21 = unaff_x25;
            pbVar13 = pbStack_210;
            if (pbVar12 != pbVar11) {
              uStack_90 = puVar30;
              pbVar12 = (byte *)FUN_1087e422c(((ulong)((long)pbVar12 - (long)pbVar11) >> 6) +
                                              (long)puVar30,&uStack_90,&UNK_10b23a190);
              puStack_160 = (undefined *)0x8000000000000000;
              pbStack_158 = pbVar12;
              if (puVar25 != (undefined *)0x0) {
                _free(pbStack_210);
              }
              if (unaff_x25 != (byte *)0x0) {
                pbVar13 = pbStack_200 + 8;
                do {
                  if (*(long *)(pbVar13 + -8) != 0) {
                    _free(*(undefined8 *)pbVar13);
                  }
                  pbVar13 = pbVar13 + 0x18;
                  unaff_x25 = unaff_x25 + -1;
                } while (unaff_x25 != (byte *)0x0);
              }
              pbVar11 = pbStack_200;
              if (puStack_1e0 == (undefined *)0x0) goto LAB_1013411cc;
              goto LAB_101340de8;
            }
            goto LAB_1013411e4;
          }
          pbVar13 = (byte *)FUN_108855b04(abStack_130,auStack_69,&UNK_10b20bb40);
LAB_101341488:
          uVar16 = uStack_198;
          uVar23 = uStack_1a0;
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar13;
          if (uStack_198 != 0) {
            uVar28 = 0;
            do {
              plVar32 = (long *)(uVar23 + uVar28 * 0x30);
              if (*plVar32 != 0) {
                _free(plVar32[1]);
              }
              lVar27 = plVar32[4];
              lVar20 = plVar32[5];
              if (lVar20 != 0) {
                puVar17 = (undefined8 *)(lVar27 + 8);
                do {
                  if (puVar17[-1] != 0) {
                    _free(*puVar17);
                  }
                  puVar17 = puVar17 + 3;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
              }
              if (plVar32[3] != 0) {
                _free(lVar27);
              }
              uVar28 = uVar28 + 1;
            } while (uVar28 != uVar16);
          }
          if (uStack_1a8 != 0) {
            _free(uVar23);
          }
          goto LAB_10134151c;
        }
        pbVar1 = pbStack_120 + lStack_118 * 0x20;
        pbStack_110 = pbStack_120;
        lStack_100 = lStack_128;
        pbStack_f0 = (byte *)0x0;
        pbVar34 = pbStack_120;
        pbStack_f8 = pbVar1;
        if (lStack_118 == 0) {
LAB_101340d88:
          pbStack_108 = pbVar34;
          pbVar12 = (byte *)FUN_1087e422c(0,&UNK_10b2317a8,&UNK_10b20a590);
LAB_101340da4:
          puStack_160 = (undefined *)0x8000000000000000;
          pbStack_158 = pbVar12;
        }
        else {
          pbVar34 = pbStack_120 + 0x20;
          bVar5 = *pbStack_120;
          if (bVar5 == 0x16) goto LAB_101340d88;
          uVar35 = *(undefined8 *)(pbStack_120 + 1);
          puVar18[1] = *(undefined8 *)(pbStack_120 + 9);
          *puVar18 = uVar35;
          uVar35 = *(undefined8 *)(pbStack_120 + 0x10);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbStack_120 + 0x18);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar35;
          pbStack_f0 = (byte *)0x1;
          uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar5);
          pbStack_108 = pbVar34;
          FUN_1004b62d4(&uStack_a8,&uStack_90);
          pbVar7 = pbStack_98;
          pbVar13 = pbStack_a0;
          puVar25 = uStack_a8;
          pbVar12 = pbStack_a0;
          if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_101340da4;
          if (lVar26 == 1) {
LAB_101340e7c:
            pbVar12 = (byte *)FUN_1087e422c(1,&UNK_10b2317a8,&UNK_10b20a590);
          }
          else {
            pbVar34 = pbVar21 + 0x40;
            bVar5 = pbVar21[0x20];
            pbStack_108 = pbVar34;
            if (bVar5 == 0x16) goto LAB_101340e7c;
            uVar35 = *(undefined8 *)(pbVar21 + 0x21);
            puVar18[1] = *(undefined8 *)(pbVar21 + 0x29);
            *puVar18 = uVar35;
            uVar35 = *(undefined8 *)(pbVar21 + 0x30);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar21 + 0x38);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar35;
            pbStack_f0 = (byte *)0x2;
            uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar5);
            FUN_1004b5b34(&uStack_a8,&uStack_90);
            pbVar22 = pbStack_98;
            pbVar11 = pbStack_a0;
            puVar33 = uStack_a8;
            pbVar12 = pbStack_a0;
            if (uStack_a8 != (undefined *)0x8000000000000000) {
              puStack_160 = puVar25;
              pbStack_158 = pbVar13;
              pbStack_150 = pbVar7;
              puStack_148 = uStack_a8;
              pbStack_140 = pbStack_a0;
              pbStack_138 = pbStack_98;
              pbVar12 = (byte *)FUN_100fbc738(&pbStack_110);
              if (pbVar12 != (byte *)0x0) {
                puStack_160 = (undefined *)0x8000000000000000;
                pbStack_158 = pbVar12;
                if (puVar25 != (undefined *)0x0) {
                  _free(pbVar13);
                }
                if (pbVar22 != (byte *)0x0) {
                  pbVar13 = pbVar11 + 8;
                  do {
                    if (*(long *)(pbVar13 + -8) != 0) {
                      _free(*(undefined8 *)pbVar13);
                    }
                    pbVar13 = pbVar13 + 0x18;
                    pbVar22 = pbVar22 + -1;
                  } while (pbVar22 != (byte *)0x0);
                }
                unaff_x25 = pbVar11;
                if (puVar33 != (undefined *)0x0) goto LAB_101340de8;
                puVar25 = (undefined *)0x8000000000000000;
                pbVar13 = pbVar12;
              }
              goto LAB_1013411e4;
            }
          }
          puStack_160 = (undefined *)0x8000000000000000;
          pbStack_158 = pbVar12;
          if (puVar25 != (undefined *)0x0) {
            _free(pbVar13);
          }
        }
        lVar26 = ((ulong)((long)pbVar1 - (long)pbVar34) >> 5) + 1;
        while (lVar26 = lVar26 + -1, lVar26 != 0) {
          FUN_100e077ec(pbVar34);
          pbVar34 = pbVar34 + 0x20;
        }
        pbVar11 = pbVar21;
        unaff_x25 = pbVar21;
        if (lVar20 == 0) {
          puVar25 = (undefined *)0x8000000000000000;
          pbVar13 = pbVar12;
        }
        else {
LAB_101340de8:
          _free(pbVar11);
LAB_1013411cc:
          puVar25 = (undefined *)0x8000000000000000;
          pbVar21 = unaff_x25;
          pbVar13 = pbVar12;
          if ((bVar4 & 0x1e) != 0x14) {
            puVar25 = (undefined *)0x8000000000000000;
            FUN_100e077ec(abStack_130);
          }
        }
LAB_1013411e4:
        uVar23 = uStack_198;
        if (puVar25 == (undefined *)0x8000000000000000) goto LAB_101341488;
        puStack_178 = puStack_148;
        pbStack_180 = pbStack_150;
        pbStack_168 = pbStack_138;
        pbStack_170 = pbStack_140;
        puStack_190 = puVar25;
        pbStack_188 = pbVar13;
        if (uStack_198 == uStack_1a8) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h20812506ba72c632E(&uStack_1a8);
        }
        puVar29 = (undefined8 *)(uStack_1a0 + uVar23 * 0x30);
        puVar29[1] = pbStack_188;
        *puVar29 = puStack_190;
        puVar29[3] = puStack_178;
        puVar29[2] = pbStack_180;
        puVar29[5] = pbStack_168;
        puVar29[4] = pbStack_170;
        uStack_198 = uVar23 + 1;
        pbVar12 = pbVar31;
        pbVar13 = pbVar24;
        unaff_x25 = pbVar21;
      } while (pbVar24 != pbVar31);
    }
    param_1[1] = uStack_1a0;
    *param_1 = uStack_1a8;
    param_1[2] = uStack_198;
    uVar23 = *param_1;
    pbVar24 = pbVar12;
    if (uVar23 == 0x8000000000000000) {
LAB_10134151c:
      lVar27 = ((ulong)((long)pbVar31 - (long)pbVar24) >> 5) + 1;
      while (lVar27 = lVar27 + -1, uVar23 = uVar2, lVar27 != 0) {
        FUN_100e077ec(pbVar24);
        pbVar24 = pbVar24 + 0x20;
      }
    }
    else {
      pbVar3 = (byte *)param_1[1];
      uVar2 = param_1[2];
      uVar16 = FUN_100fbc738(&pbStack_1d0);
      if (uVar16 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar16;
      if (uVar2 != 0) {
        uVar16 = 0;
        do {
          pbVar31 = pbVar3 + uVar16 * 0x30;
          if (*(long *)pbVar31 != 0) {
            _free(*(undefined8 *)(pbVar31 + 8));
          }
          lVar27 = *(long *)(pbVar31 + 0x20);
          lVar20 = *(long *)(pbVar31 + 0x28);
          if (lVar20 != 0) {
            puVar17 = (undefined8 *)(lVar27 + 8);
            do {
              if (puVar17[-1] != 0) {
                _free(*puVar17);
              }
              puVar17 = puVar17 + 3;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          if (*(long *)(pbVar31 + 0x18) != 0) {
            _free(lVar27);
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar2);
      }
    }
    if (uVar23 != 0) {
      _free(pbVar3);
    }
  }
  else {
    uVar23 = FUN_108855b04(param_2,auStack_69,&UNK_10b209e60);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar23;
  }
  return;
}

