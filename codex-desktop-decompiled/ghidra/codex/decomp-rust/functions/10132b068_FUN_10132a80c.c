
/* WARNING: Type propagation algorithm not settling */

void FUN_10132a80c(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined *puVar24;
  long lVar25;
  undefined *puVar26;
  byte *unaff_x24;
  byte *pbVar27;
  long lVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  byte *pbVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  byte *pbStack_190;
  byte *pbStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte *pbStack_150;
  byte *pbStack_148;
  ulong uStack_140;
  byte *pbStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
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
  
  if (*param_2 == '\x14') {
    uVar12 = *(ulong *)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    uVar15 = *(ulong *)(param_2 + 0x18);
    pbVar23 = pbVar1 + uVar15 * 0x20;
    lStack_130 = 0;
    uVar20 = uVar15;
    if (0x6665 < uVar15) {
      uVar20 = 0x6666;
    }
    pbStack_150 = pbVar1;
    uStack_140 = uVar12;
    pbStack_138 = pbVar23;
    if (uVar15 == 0) {
      uStack_128 = 0;
      uStack_120 = 8;
      uStack_118 = 0;
      pbVar16 = pbVar1;
      lVar19 = lStack_130;
    }
    else {
      pbStack_148 = pbVar1;
      uVar10 = _malloc(uVar20 * 0x28);
      if (uVar10 == 0) {
        func_0x0001087c9084(8,uVar20 * 0x28);
LAB_10132b338:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10132b33c);
        (*pcVar9)();
      }
      uStack_118 = 0;
      bVar2 = *pbVar1;
      uStack_128 = uVar20;
      uStack_120 = uVar10;
      if (bVar2 != 0x16) {
        lVar28 = 0;
        puVar17 = (undefined8 *)((ulong)abStack_110 | 1);
        puVar21 = (undefined8 *)((ulong)&uStack_90 | 1);
        puVar18 = (undefined8 *)((ulong)&pbStack_f0 | 1);
        pbVar16 = pbVar1 + 0x20;
        pbVar32 = pbVar1;
LAB_10132a8f4:
        pbVar22 = pbVar16;
        lVar25 = lStack_f8;
        pbVar16 = pbStack_100;
        lVar19 = lStack_108;
        uVar34 = *(undefined8 *)(pbVar32 + 9);
        uVar33 = *(undefined8 *)(pbVar32 + 1);
        uVar35 = *(undefined8 *)(pbVar32 + 0x10);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar32 + 0x18);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar35;
        puVar17[1] = uVar34;
        *puVar17 = uVar33;
        lVar28 = lVar28 + 1;
        abStack_110[0] = bVar2;
        if (bVar2 != 0x14) {
          if (bVar2 == 0x15) {
            lVar19 = lStack_f8 * 0x40;
            pbVar16 = pbStack_100 + lVar19;
            pbStack_d0 = pbStack_100;
            pbStack_c8 = pbStack_100;
            lStack_c0 = lStack_108;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            puStack_b0 = (undefined8 *)0x0;
            pbStack_b8 = pbVar16;
            if (lStack_f8 == 0) {
              puVar24 = (undefined *)0x8000000000000001;
            }
            else {
              puVar30 = (undefined8 *)0x0;
              bVar4 = false;
              puVar24 = (undefined *)0x8000000000000001;
              unaff_x24 = pbStack_100;
              do {
                plVar8 = plStack_80;
                plVar7 = plStack_88;
                puVar6 = uStack_90;
                pbVar29 = unaff_x24 + 0x40;
                bVar3 = *unaff_x24;
                pbVar32 = pbVar29;
                puVar31 = puVar30;
                if (bVar3 == 0x16) break;
                uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar3);
                puVar31 = uStack_90;
                uVar33 = *(undefined8 *)(unaff_x24 + 0x10);
                *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)(unaff_x24 + 0x18);
                *(undefined8 *)((long)puVar21 + 0xf) = uVar33;
                uVar33 = *(undefined8 *)(unaff_x24 + 1);
                puVar21[1] = *(undefined8 *)(unaff_x24 + 9);
                *puVar21 = uVar33;
                pbStack_e8 = *(byte **)(unaff_x24 + 0x28);
                pbStack_f0 = *(byte **)(unaff_x24 + 0x20);
                pbStack_d8 = *(byte **)(unaff_x24 + 0x38);
                lStack_e0 = *(long *)(unaff_x24 + 0x30);
                if (0xc < bVar3) {
                  if (bVar3 == 0xd) {
                    if (plStack_80 == (long *)0xb) {
                      uVar14 = 1;
                      if (*plStack_88 != 0x6c6f686563616c70 ||
                          *(long *)((long)plStack_88 + 3) != 0x7265646c6f686563) {
                        uVar14 = 2;
                      }
                    }
                    else if (plStack_80 == (long *)0x9) {
                      uVar14 = 2;
                      if (*plStack_88 == 0x676e615265747962 && (char)plStack_88[1] == 'e') {
                        uVar14 = 0;
                      }
                    }
                    else {
                      uVar14 = 2;
                    }
                    goto LAB_10132aba8;
                  }
                  if (bVar3 == 0xe) {
                    FUN_100b7568c(&uStack_a8,plStack_80);
joined_r0x00010132aa28:
                    if (plVar7 != (long *)0x0) {
                      _free(plVar8);
                    }
                    goto joined_r0x00010132ab9c;
                  }
                  if (bVar3 == 0xf) {
                    FUN_100b7568c(&uStack_a8,plStack_88,plStack_80);
                    goto LAB_10132abb0;
                  }
LAB_10132acd4:
                  pbStack_a0 = (byte *)FUN_108855b04(&uStack_90,auStack_69,&UNK_10b20ce40);
                  uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
LAB_10132acfc:
                  puStack_b0 = (undefined8 *)((long)puVar30 + 1);
                  pbStack_c8 = pbVar29;
                  unaff_x24 = pbStack_180;
                  pbVar11 = pbStack_a0;
                  goto joined_r0x00010132ad20;
                }
                if (bVar3 == 1) {
                  uStack_90._1_1_ = SUB81(puVar6,1);
                  uVar13 = 1;
                  if (uStack_90._1_1_ != '\x01') {
                    uVar13 = 2;
                  }
                  uVar14 = 0;
                  if (uStack_90._1_1_ != '\0') {
                    uVar14 = uVar13;
                  }
                }
                else {
                  if (bVar3 != 4) {
                    if (bVar3 != 0xc) goto LAB_10132acd4;
                    if (lStack_78 == 0xb) {
                      uVar13 = 1;
                      if (*plStack_80 != 0x6c6f686563616c70 ||
                          *(long *)((long)plStack_80 + 3) != 0x7265646c6f686563) {
                        uVar13 = 2;
                      }
                      uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar13) << 8);
                    }
                    else if (lStack_78 == 9) {
                      uVar13 = 2;
                      if (*plStack_80 == 0x676e615265747962 && (char)plStack_80[1] == 'e') {
                        uVar13 = 0;
                      }
                      uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar13) << 8);
                    }
                    else {
                      uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x200);
                    }
                    goto joined_r0x00010132aa28;
                  }
                  uVar13 = 1;
                  if (plStack_88 != (long *)0x1) {
                    uVar13 = 2;
                  }
                  uVar14 = 0;
                  if (plStack_88 != (long *)0x0) {
                    uVar14 = uVar13;
                  }
                }
LAB_10132aba8:
                uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar14) << 8);
                uStack_90 = puVar31;
LAB_10132abb0:
                FUN_100e077ec(&uStack_90);
joined_r0x00010132ab9c:
                if (((ulong)uStack_a8 & 1) != 0) goto LAB_10132acfc;
                uStack_a8._1_1_ = (char)((ulong)uStack_a8 >> 8);
                cVar5 = (char)pbStack_f0;
                pbStack_f0._1_7_ = (undefined7)((ulong)pbStack_f0 >> 8);
                uStack_90._1_7_ = (undefined7)((ulong)uStack_90 >> 8);
                if (uStack_a8._1_1_ == '\0') {
                  if (bVar4) {
                    puStack_b0 = (undefined8 *)((long)puVar30 + 1);
                    uStack_a8 = &UNK_108cbe46f;
                    pbStack_a0 = (byte *)0x9;
                    uStack_90 = &uStack_a8;
                    plStack_88 = (long *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar29;
                    pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
                    unaff_x24 = pbStack_180;
                    goto joined_r0x00010132ad20;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar5 == '\x16') goto LAB_10132b250;
                  uVar33 = *puVar18;
                  puVar21[1] = puVar18[1];
                  *puVar21 = uVar33;
                  uVar33 = *(undefined8 *)((long)puVar18 + 0xf);
                  *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
                  *(undefined8 *)((long)puVar21 + 0xf) = uVar33;
                  uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar5);
                  FUN_101251ec4(&uStack_a8,&uStack_90);
                  if ((int)uStack_a8 == 1) goto LAB_10132acfc;
                  pbStack_190 = pbStack_a0;
                  uStack_168 = uStack_98;
                  bVar4 = true;
                }
                else if (uStack_a8._1_1_ == '\x01') {
                  if (puVar24 != (undefined *)0x8000000000000001) {
                    puStack_b0 = (undefined8 *)((long)puVar30 + 1);
                    uStack_a8 = &UNK_108cad8de;
                    pbStack_a0 = (byte *)0xb;
                    uStack_90 = &uStack_a8;
                    plStack_88 = (long *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar29;
                    pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_90);
                    puVar24 = (undefined *)((ulong)puVar24 & 0x7fffffffffffffff);
                    unaff_x24 = pbStack_180;
                    goto joined_r0x00010132b0d0;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar5 == '\x16') {
                    puStack_b0 = (undefined8 *)((long)puVar30 + 1);
                    pbStack_148 = pbVar22;
                    lStack_130 = lVar28;
                    pbStack_c8 = pbVar29;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_10132b338;
                  }
                  uVar33 = *puVar18;
                  puVar21[1] = puVar18[1];
                  *puVar21 = uVar33;
                  uVar33 = *(undefined8 *)((long)puVar18 + 0xf);
                  *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
                  *(undefined8 *)((long)puVar21 + 0xf) = uVar33;
                  uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar5);
                  FUN_1004b60cc(&uStack_a8,&uStack_90);
                  pbStack_180 = pbStack_a0;
                  if (uStack_a8 == (undefined *)0x8000000000000001) {
                    puStack_b0 = (undefined8 *)((long)puVar30 + 1);
                    pbVar11 = pbStack_a0;
                    pbStack_c8 = pbVar29;
                    goto LAB_10132af18;
                  }
                  uStack_170 = uStack_98;
                  puVar24 = uStack_a8;
                }
                else {
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar5 == '\x16') {
LAB_10132b250:
                    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                    puStack_b0 = (undefined8 *)((long)puVar30 + 1);
                    pbStack_148 = pbVar22;
                    lStack_130 = lVar28;
                    pbStack_c8 = pbVar29;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_10132b338;
                  }
                  uVar33 = *puVar18;
                  puVar21[1] = puVar18[1];
                  *puVar21 = uVar33;
                  uVar33 = *(undefined8 *)((long)puVar18 + 0xf);
                  *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
                  *(undefined8 *)((long)puVar21 + 0xf) = uVar33;
                  uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,cVar5);
                  FUN_100e077ec(&uStack_90);
                }
                puVar30 = (undefined8 *)((long)puVar30 + 1);
                pbVar32 = pbVar16;
                puVar31 = (undefined8 *)((lVar19 - 0x40U >> 6) + 1);
                unaff_x24 = pbVar29;
              } while (pbVar29 != pbVar16);
              unaff_x24 = pbStack_180;
              pbStack_c8 = pbVar32;
              puStack_b0 = puVar31;
              if (bVar4) {
                puVar26 = (undefined *)0x8000000000000000;
                if (puVar24 != (undefined *)0x8000000000000001) {
                  puVar26 = puVar24;
                }
                FUN_100d34830(&pbStack_d0);
                unaff_x24 = pbStack_190;
                pbVar11 = pbStack_180;
                if (pbVar16 != pbVar32) {
                  uStack_90 = puVar31;
                  pbVar11 = (byte *)FUN_1087e422c(((ulong)((long)pbVar16 - (long)pbVar32) >> 6) +
                                                  (long)puVar31,&uStack_90,&UNK_10b23a190);
                  if (((ulong)puVar26 & 0x7fffffffffffffff) != 0) {
                    _free(pbStack_180);
                  }
                  puVar26 = (undefined *)0x8000000000000001;
                }
                goto LAB_10132af3c;
              }
            }
            uStack_a8 = &UNK_108cbe46f;
            pbStack_a0 = (byte *)0x9;
            uStack_90 = &uStack_a8;
            plStack_88 = (long *)&DAT_100c7b3a0;
            pbVar11 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_90);
joined_r0x00010132ad20:
            if (-0x7fffffffffffffff < (long)puVar24) {
joined_r0x00010132b0d0:
              if (puVar24 != (undefined *)0x0) {
                _free(unaff_x24);
              }
            }
LAB_10132af18:
            FUN_100d34830(&pbStack_d0);
            if ((char)pbStack_f0 != '\x16') {
              FUN_100e077ec(&pbStack_f0);
            }
            puVar26 = (undefined *)0x8000000000000001;
            goto LAB_10132af3c;
          }
          pbStack_148 = pbVar22;
          lStack_130 = lVar28;
          uVar20 = FUN_108855b04(abStack_110,auStack_69,&UNK_10b20b620);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar20;
          uVar15 = uStack_120;
          uVar20 = uStack_118;
joined_r0x00010132b12c:
          uStack_120 = uVar15;
          uStack_118 = uVar20;
          if (uVar20 != 0) {
            puVar17 = (undefined8 *)(uVar15 + 8);
            do {
              if ((puVar17[-1] & 0x7fffffffffffffff) != 0) {
                _free(*puVar17);
              }
              puVar17 = puVar17 + 5;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          if (uStack_128 != 0) {
            _free(uVar15);
          }
          goto LAB_10132b194;
        }
        unaff_x24 = pbStack_100 + lStack_f8 * 0x20;
        pbStack_f0 = pbStack_100;
        lStack_e0 = lStack_108;
        pbStack_d0 = (byte *)0x0;
        pbVar32 = pbStack_100;
        pbStack_d8 = unaff_x24;
        if (lStack_f8 == 0) {
LAB_10132ad60:
          pbStack_e8 = pbVar32;
          pbVar29 = (byte *)FUN_1087e422c(0,&UNK_10b22d470,&UNK_10b20a590);
LAB_10132ad80:
          lVar25 = ((ulong)((long)unaff_x24 - (long)pbVar32) >> 5) + 1;
          while (lVar25 = lVar25 + -1, lVar25 != 0) {
            FUN_100e077ec(pbVar32);
            pbVar32 = pbVar32 + 0x20;
          }
          pbVar27 = unaff_x24;
          pbVar11 = pbVar16;
          if (lVar19 == 0) {
            puVar26 = (undefined *)0x8000000000000001;
            pbVar11 = pbVar29;
          }
          else {
LAB_10132adb4:
            _free(pbVar11);
            puVar26 = (undefined *)0x8000000000000001;
            unaff_x24 = pbVar27;
            pbVar11 = pbVar29;
          }
        }
        else {
          pbVar32 = pbStack_100 + 0x20;
          bVar3 = *pbStack_100;
          if (bVar3 == 0x16) goto LAB_10132ad60;
          uVar33 = *(undefined8 *)(pbStack_100 + 1);
          puVar21[1] = *(undefined8 *)(pbStack_100 + 9);
          *puVar21 = uVar33;
          uVar33 = *(undefined8 *)(pbStack_100 + 0x10);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)(pbStack_100 + 0x18);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar33;
          pbStack_d0 = (byte *)0x1;
          uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar3);
          pbStack_e8 = pbVar32;
          FUN_101251ec4(&uStack_a8,&uStack_90);
          pbVar27 = pbStack_a0;
          pbVar29 = pbStack_a0;
          if ((int)uStack_a8 == 1) goto LAB_10132ad80;
          if (lVar25 == 1) {
LAB_10132aee8:
            pbVar29 = (byte *)FUN_1087e422c(1,&UNK_10b22d470,&UNK_10b20a590);
            goto LAB_10132ad80;
          }
          pbVar32 = pbVar16 + 0x40;
          bVar3 = pbVar16[0x20];
          pbStack_e8 = pbVar32;
          if (bVar3 == 0x16) goto LAB_10132aee8;
          uStack_168 = uStack_98;
          uVar33 = *(undefined8 *)(pbVar16 + 0x21);
          puVar21[1] = *(undefined8 *)(pbVar16 + 0x29);
          *puVar21 = uVar33;
          uVar33 = *(undefined8 *)(pbVar16 + 0x30);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)(pbVar16 + 0x38);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar33;
          pbStack_d0 = (byte *)0x2;
          uStack_90 = (undefined8 *)CONCAT71(uStack_90._1_7_,bVar3);
          FUN_1004b60cc(&uStack_a8,&uStack_90);
          pbVar11 = pbStack_a0;
          puVar26 = uStack_a8;
          pbVar29 = pbStack_a0;
          if (uStack_a8 == (undefined *)0x8000000000000001) goto LAB_10132ad80;
          uStack_170 = uStack_98;
          pbVar29 = (byte *)FUN_100fbc738(&pbStack_f0);
          unaff_x24 = pbVar27;
          if (pbVar29 != (byte *)0x0) {
            if (((ulong)puVar26 & 0x7fffffffffffffff) == 0) {
              puVar26 = (undefined *)0x8000000000000001;
              pbVar11 = pbVar29;
              goto LAB_10132af3c;
            }
            goto LAB_10132adb4;
          }
        }
LAB_10132af3c:
        if ((bVar2 & 0x1e) != 0x14) {
          FUN_100e077ec(abStack_110);
        }
        uVar20 = uStack_118;
        if (puVar26 + 0x7fffffffffffffff < (undefined *)0x2) {
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar11;
          lStack_130 = lVar28;
          pbStack_148 = pbVar22;
          uVar15 = uStack_120;
          goto joined_r0x00010132b12c;
        }
        if (uStack_118 == uStack_128) {
          func_0x0001088db568(&uStack_128);
        }
        puVar30 = (undefined8 *)(uStack_120 + uVar20 * 0x28);
        *puVar30 = puVar26;
        puVar30[1] = pbVar11;
        puVar30[2] = uStack_170;
        puVar30[3] = unaff_x24;
        puVar30[4] = uStack_168;
        uStack_118 = uVar20 + 1;
        pbVar16 = pbVar23;
        lVar19 = (uVar15 * 0x20 - 0x20 >> 5) + 1;
        if (pbVar22 != pbVar23) goto code_r0x00010132afa8;
        goto LAB_10132b170;
      }
      pbVar16 = pbVar1 + 0x20;
      lVar19 = 0;
    }
LAB_10132b170:
    lStack_130 = lVar19;
    param_1[1] = uStack_120;
    *param_1 = uStack_128;
    param_1[2] = uStack_118;
    uVar20 = *param_1;
    pbVar22 = pbVar16;
    pbStack_148 = pbVar16;
    if (uVar20 == 0x8000000000000000) {
LAB_10132b194:
      lVar28 = ((ulong)((long)pbVar23 - (long)pbVar22) >> 5) + 1;
      while (lVar28 = lVar28 + -1, lVar28 != 0) {
        FUN_100e077ec(pbVar22);
        pbVar22 = pbVar22 + 0x20;
      }
    }
    else {
      pbVar1 = (byte *)param_1[1];
      uVar15 = param_1[2];
      uVar12 = FUN_100fbc738(&pbStack_150);
      if (uVar12 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar12;
      uVar12 = uVar20;
      if (uVar15 != 0) {
        pbVar23 = pbVar1 + 8;
        do {
          if ((*(ulong *)(pbVar23 + -8) & 0x7fffffffffffffff) != 0) {
            _free(*(undefined8 *)pbVar23);
          }
          pbVar23 = pbVar23 + 0x28;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    if (uVar12 != 0) {
      _free(pbVar1);
    }
  }
  else {
    uVar20 = FUN_108855b04(param_2,auStack_69,&UNK_10b209e20);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar20;
  }
  return;
code_r0x00010132afa8:
  bVar2 = *pbVar22;
  pbVar16 = pbVar22 + 0x20;
  pbVar32 = pbVar22;
  lVar19 = lVar28;
  if (bVar2 == 0x16) goto LAB_10132b170;
  goto LAB_10132a8f4;
}

