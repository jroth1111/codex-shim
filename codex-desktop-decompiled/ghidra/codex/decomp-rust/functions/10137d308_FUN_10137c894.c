
void FUN_10137c894(undefined8 *param_1,byte *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  bool bVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  ulong uStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined *puStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  long *plStack_a0;
  long lStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  byte *pbStack_78;
  undefined1 auStack_69 [9];
  
  bVar4 = *param_2;
  if (bVar4 != 0x14) {
    if (bVar4 != 0x15) {
      uVar10 = FUN_108855b04(param_2,auStack_69,&UNK_10b20be00);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar10;
      return;
    }
    uStack_d0 = *(undefined8 *)(param_2 + 8);
    pbVar20 = *(byte **)(param_2 + 0x10);
    pbVar11 = pbVar20 + *(long *)(param_2 + 0x18) * 0x40;
    pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
    lStack_c0 = 0;
    pbStack_e0 = pbVar20;
    pbStack_c8 = pbVar11;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar13 = (undefined *)0x8000000000000000;
      puVar17 = (undefined *)0x8000000000000001;
      uStack_108 = 0x8000000000000001;
      pbVar19 = pbVar11;
      pbStack_d8 = pbVar20;
    }
    else {
      puVar16 = (undefined8 *)((ulong)&uStack_b0 | 1);
      puVar14 = (undefined8 *)((ulong)&pbStack_100 | 1);
      puVar12 = (undefined8 *)((ulong)&bStack_90 | 1);
      uStack_108 = 0x8000000000000001;
      puVar17 = (undefined *)0x8000000000000001;
      puVar13 = (undefined *)0x8000000000000000;
      pbVar15 = pbVar20;
      do {
        pbVar20 = pbVar15 + 0x40;
        bVar3 = *pbVar15;
        pbVar19 = pbVar11;
        pbStack_d8 = pbVar20;
        if (bVar3 == 0x16) break;
        lStack_c0 = lStack_c0 + 1;
        uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,bVar3);
        uVar10 = *(undefined8 *)(pbVar15 + 1);
        uVar21 = *(undefined8 *)(pbVar15 + 0x18);
        uVar22 = *(undefined8 *)(pbVar15 + 0x10);
        uVar24 = *(undefined8 *)(pbVar15 + 0x28);
        uVar23 = *(undefined8 *)(pbVar15 + 0x20);
        puVar16[1] = *(undefined8 *)(pbVar15 + 9);
        *puVar16 = uVar10;
        *(undefined8 *)((long)puVar16 + 0x17) = uVar21;
        *(undefined8 *)((long)puVar16 + 0xf) = uVar22;
        pbStack_78 = *(byte **)(pbVar15 + 0x38);
        uStack_88 = (undefined1)uVar24;
        uStack_87 = (undefined7)((ulong)uVar24 >> 8);
        bStack_90 = (byte)uVar23;
        bStack_8f = (byte)((ulong)uVar23 >> 8);
        uStack_8e = (undefined6)((ulong)uVar23 >> 0x10);
        uStack_80 = (undefined1)*(undefined8 *)(pbVar15 + 0x30);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar15 + 0x30) >> 8);
        if ((byte)pbStack_100 != '\x16') {
          FUN_100e077ec(&pbStack_100);
        }
        plVar6 = plStack_a0;
        pbVar19 = pbStack_a8;
        pbStack_f8 = (byte *)CONCAT71(uStack_87,uStack_88);
        pbStack_100 = (byte *)CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
        puStack_f0 = (undefined *)CONCAT71(uStack_7f,uStack_80);
        pbStack_e8 = pbStack_78;
        if (bVar3 < 0xd) {
          if (bVar3 == 1) {
            bStack_8f = uStack_b0._1_1_;
            if (2 < uStack_b0._1_1_) {
              bStack_8f = 3;
            }
LAB_10137cc00:
            bStack_90 = 0;
            goto LAB_10137cc04;
          }
          if (bVar3 == 4) {
            if ((byte *)0x2 < pbStack_a8) {
              pbVar19 = (byte *)0x3;
            }
            bStack_8f = (byte)pbVar19;
            goto LAB_10137cc00;
          }
          if (bVar3 == 0xc) {
            if (lStack_98 == 10) {
              if (*plStack_a0 != 0x614e6e6967756c70 || (short)plStack_a0[1] != 0x656d)
              goto LAB_10137cb64;
              bStack_8f = 2;
joined_r0x00010137cd7c:
              bStack_90 = 0;
            }
            else if (lStack_98 == 0x15) {
              if ((*plStack_a0 != 0x614d65746f6d6572 || plStack_a0[1] != 0x63616c7074656b72) ||
                  *(long *)((long)plStack_a0 + 0xd) != 0x656d614e6563616c) goto LAB_10137cb64;
              bStack_8f = 1;
              bStack_90 = 0;
            }
            else {
              if ((lStack_98 != 0xf) ||
                 (*plStack_a0 != 0x6c7074656b72616d ||
                  *(long *)((long)plStack_a0 + 7) != 0x687461506563616c)) {
LAB_10137cb64:
                bStack_8f = 3;
                goto joined_r0x00010137cd7c;
              }
              bStack_8f = 0;
              bStack_90 = 0;
            }
joined_r0x00010137cb34:
            if (pbVar19 != (byte *)0x0) {
              _free(plVar6);
            }
          }
          else {
LAB_10137cd8c:
            uVar10 = FUN_108855b04(&uStack_b0,auStack_69,&UNK_10b210f40);
            uStack_88 = (undefined1)uVar10;
            uStack_87 = (undefined7)((ulong)uVar10 >> 8);
            bStack_90 = 1;
          }
        }
        else {
          if (bVar3 == 0xd) {
            if (plStack_a0 == (long *)0xa) {
              if (*(long *)pbStack_a8 != 0x614e6e6967756c70 || *(short *)(pbStack_a8 + 8) != 0x656d)
              goto LAB_10137cbf8;
              bStack_8f = 2;
            }
            else if (plStack_a0 == (long *)0x15) {
              if ((*(long *)pbStack_a8 != 0x614d65746f6d6572 ||
                  *(long *)(pbStack_a8 + 8) != 0x63616c7074656b72) ||
                  *(long *)(pbStack_a8 + 0xd) != 0x656d614e6563616c) goto LAB_10137cbf8;
              bStack_8f = 1;
            }
            else if ((plStack_a0 == (long *)0xf) &&
                    (*(long *)pbStack_a8 == 0x6c7074656b72616d &&
                     *(long *)(pbStack_a8 + 7) == 0x687461506563616c)) {
              bStack_8f = 0;
            }
            else {
LAB_10137cbf8:
              bStack_8f = 3;
            }
            goto LAB_10137cc00;
          }
          if (bVar3 == 0xe) {
            FUN_100baaca0(&bStack_90,plStack_a0);
            goto joined_r0x00010137cb34;
          }
          if (bVar3 != 0xf) goto LAB_10137cd8c;
          FUN_100baaca0(&bStack_90,pbStack_a8,plStack_a0);
LAB_10137cc04:
          FUN_100e077ec(&uStack_b0);
        }
        if ((bStack_90 & 1) != 0) {
          pbVar11 = (byte *)CONCAT71(uStack_87,uStack_88);
LAB_10137d00c:
          *param_1 = 0x8000000000000000;
          param_1[1] = pbVar11;
          puVar13 = (undefined *)((ulong)puVar13 & 0x7fffffffffffffff);
joined_r0x00010137d020:
          if (puVar13 != (undefined *)0x0) {
            _free(pbStack_128);
          }
          bVar8 = true;
          if (puVar17 == (undefined *)0x8000000000000001) goto LAB_10137d07c;
LAB_10137d074:
          bVar8 = true;
          if (((ulong)puVar17 & 0x7fffffffffffffff) == 0) goto LAB_10137d07c;
          _free(pbStack_138);
          bVar5 = uStack_108 != 0x8000000000000001;
          goto joined_r0x00010137d0bc;
        }
        bVar3 = (byte)pbStack_100;
        if (bStack_8f < 2) {
          if (bStack_8f == 0) {
            if (uStack_108 == 0x8000000000000001) {
              func_0x000100f21808(&bStack_90,&pbStack_100);
              uStack_108 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
              if (uStack_108 != 0x8000000000000001) {
                uStack_140 = CONCAT71(uStack_7f,uStack_80);
                pbVar11 = pbStack_c8;
                pbVar20 = pbStack_d8;
                pbStack_130 = (byte *)CONCAT71(uStack_87,uStack_88);
                goto LAB_10137c938;
              }
              uStack_108 = 0x8000000000000001;
              pbVar11 = (byte *)CONCAT71(uStack_87,uStack_88);
            }
            else {
              uStack_b0 = &UNK_108cc009e;
              pbStack_a8 = (byte *)0xf;
              bStack_90 = (byte)&uStack_b0;
              bStack_8f = (byte)((ulong)&uStack_b0 >> 8);
              uStack_8e = (undefined6)((ulong)&uStack_b0 >> 0x10);
              uStack_88 = 0xa0;
              uStack_87 = 0x100c7b3;
              pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            }
          }
          else if (puVar17 == (undefined *)0x8000000000000001) {
            pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
            if (bVar3 == 0x16) {
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10137d3a8;
            }
            uVar10 = *puVar14;
            puVar12[1] = puVar14[1];
            *puVar12 = uVar10;
            uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)((long)puVar12 + 0xf) = uVar10;
            bStack_90 = bVar3;
            FUN_1004b60cc(&uStack_b0,&bStack_90);
            if (uStack_b0 != (undefined *)0x8000000000000001) {
              plStack_148 = plStack_a0;
              puVar17 = uStack_b0;
              pbStack_138 = pbStack_a8;
              goto LAB_10137c938;
            }
            puVar17 = (undefined *)0x8000000000000001;
            pbVar11 = pbStack_a8;
          }
          else {
            uStack_b0 = &UNK_108cc00ad;
            pbStack_a8 = (byte *)0x15;
            bStack_90 = (byte)&uStack_b0;
            bStack_8f = (byte)((ulong)&uStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbVar11 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
          }
          goto LAB_10137d00c;
        }
        if (bStack_8f == 2) {
          if (puVar13 != (undefined *)0x8000000000000000) {
            uStack_b0 = &UNK_108cc00c2;
            pbStack_a8 = (byte *)0xa;
            bStack_90 = (byte)&uStack_b0;
            bStack_8f = (byte)((ulong)&uStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar10;
            goto joined_r0x00010137d020;
          }
          pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
          if (bVar3 == 0x16) {
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10137d3a8;
          }
          uVar10 = *puVar14;
          puVar12[1] = puVar14[1];
          *puVar12 = uVar10;
          uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
          *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
          *(undefined8 *)((long)puVar12 + 0xf) = uVar10;
          bStack_90 = bVar3;
          FUN_1004b62d4(&uStack_b0,&bStack_90);
          pbStack_128 = pbStack_a8;
          if (uStack_b0 != (undefined *)0x8000000000000000) {
            plStack_150 = plStack_a0;
            puVar13 = uStack_b0;
            goto LAB_10137c938;
          }
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_a8;
          bVar8 = true;
          if (puVar17 != (undefined *)0x8000000000000001) goto LAB_10137d074;
          goto LAB_10137d07c;
        }
        pbStack_100 = (byte *)CONCAT71(pbStack_100._1_7_,0x16);
        if (bVar3 == 0x16) {
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10137d3a8:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10137d3ac);
          (*pcVar7)();
        }
        uVar10 = *puVar14;
        puVar12[1] = puVar14[1];
        *puVar12 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar12 + 0xf) = uVar10;
        bStack_90 = bVar3;
        FUN_100e077ec(&bStack_90);
LAB_10137c938:
        pbVar19 = pbVar20;
        pbVar15 = pbVar20;
      } while (pbVar20 != pbVar11);
    }
    bVar8 = uStack_108 == 0x8000000000000001;
    uVar1 = 0x8000000000000000;
    if (!bVar8) {
      uVar1 = uStack_108;
    }
    puVar2 = (undefined *)0x8000000000000000;
    if (puVar17 != (undefined *)0x8000000000000001) {
      puVar2 = puVar17;
    }
    if (puVar13 == (undefined *)0x8000000000000000) {
      uStack_b0 = &UNK_108cc00c2;
      pbStack_a8 = (byte *)0xa;
      bStack_90 = (byte)&uStack_b0;
      bStack_8f = (byte)((ulong)&uStack_b0 >> 8);
      uStack_8e = (undefined6)((ulong)&uStack_b0 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      uVar10 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar10;
      if (((ulong)puVar2 & 0x7fffffffffffffff) != 0) {
        _free(pbStack_138);
      }
      if ((uVar1 & 0x7fffffffffffffff) != 0) {
        _free(pbStack_130);
      }
LAB_10137d07c:
      bVar5 = false;
      if (uStack_108 != 0x8000000000000001) {
        bVar5 = bVar8;
      }
joined_r0x00010137d0bc:
      if ((bVar5) && ((uStack_108 & 0x7fffffffffffffff) != 0)) {
        _free(pbStack_130);
      }
      FUN_100d34830(&pbStack_e0);
      if ((byte)pbStack_100 != '\x16') {
        FUN_100e077ec(&pbStack_100);
      }
    }
    else {
      *param_1 = puVar13;
      param_1[1] = pbStack_128;
      param_1[2] = plStack_150;
      param_1[3] = uVar1;
      param_1[4] = pbStack_130;
      param_1[5] = uStack_140;
      param_1[6] = puVar2;
      param_1[7] = pbStack_138;
      param_1[8] = plStack_148;
      FUN_100d34830(&pbStack_e0);
      if (pbVar19 == pbVar20) {
        lVar18 = 0;
      }
      else {
        bStack_90 = (byte)lStack_c0;
        bStack_8f = (byte)((ulong)lStack_c0 >> 8);
        uStack_8e = (undefined6)((ulong)lStack_c0 >> 0x10);
        lVar18 = FUN_1087e422c(lStack_c0 + ((ulong)((long)pbVar19 - (long)pbVar20) >> 6),&bStack_90,
                               &UNK_10b23a190);
      }
      if ((byte)pbStack_100 != '\x16') {
        FUN_100e077ec(&pbStack_100);
      }
      if (lVar18 != 0) {
        *param_1 = 0x8000000000000000;
        param_1[1] = lVar18;
        if ((uVar1 & 0x7fffffffffffffff) != 0) {
          _free(pbStack_130);
        }
        if (((ulong)puVar2 & 0x7fffffffffffffff) != 0) {
          _free(pbStack_138);
        }
        if (puVar13 != (undefined *)0x0) {
          _free(pbStack_128);
        }
      }
    }
    goto LAB_10137d15c;
  }
  puStack_f0 = *(undefined **)(param_2 + 8);
  pbStack_100 = *(byte **)(param_2 + 0x10);
  pbStack_e8 = pbStack_100 + *(long *)(param_2 + 0x18) * 0x20;
  pbStack_e0 = (byte *)0x0;
  pbStack_f8 = pbStack_100;
  FUN_100f25bc4(&bStack_90,&pbStack_100);
  pbVar19 = pbStack_e0;
  pbVar20 = pbStack_e8;
  pbVar11 = pbStack_f8;
  uVar1 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
  uVar10 = CONCAT71(uStack_87,uStack_88);
  if (uVar1 == 0x8000000000000002) {
LAB_10137cde8:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
    pbVar20 = pbStack_e8;
    pbVar15 = pbStack_f8;
LAB_10137cecc:
    lVar18 = ((ulong)((long)pbVar20 - (long)pbVar15) >> 5) + 1;
    while (lVar18 = lVar18 + -1, pbVar11 = pbStack_100, puVar17 = puStack_f0, lVar18 != 0) {
      FUN_100e077ec(pbVar15);
      pbVar15 = pbVar15 + 0x20;
    }
  }
  else {
    if (uVar1 == 0x8000000000000001) {
      uVar10 = FUN_1087e422c(0,&UNK_10b231888,&UNK_10b20a590);
      goto LAB_10137cde8;
    }
    pbVar15 = pbStack_f8;
    if (pbStack_f8 == pbStack_e8) {
LAB_10137ce98:
      pbStack_f8 = pbVar15;
      pbVar15 = pbStack_f8;
      pbVar9 = (byte *)FUN_1087e422c(1,&UNK_10b231888,&UNK_10b20a590);
LAB_10137ceb4:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar9;
LAB_10137cebc:
      if ((uVar1 & 0x7fffffffffffffff) != 0) {
        _free(uVar10);
      }
      goto LAB_10137cecc;
    }
    uVar22 = CONCAT71(uStack_7f,uStack_80);
    pbVar15 = pbStack_f8 + 0x20;
    bVar3 = *pbStack_f8;
    if (bVar3 == 0x16) goto LAB_10137ce98;
    uVar21 = *(undefined8 *)(pbStack_f8 + 1);
    uStack_87 = (undefined7)*(undefined8 *)(pbStack_f8 + 9);
    bStack_8f = (byte)uVar21;
    uStack_8e = (undefined6)((ulong)uVar21 >> 8);
    uStack_88 = (undefined1)((ulong)uVar21 >> 0x38);
    pbStack_78 = *(byte **)(pbStack_f8 + 0x18);
    uStack_80 = (undefined1)*(long *)(pbStack_f8 + 0x10);
    uStack_7f = (undefined7)((ulong)*(long *)(pbStack_f8 + 0x10) >> 8);
    pbStack_e0 = pbStack_e0 + 1;
    pbStack_f8 = pbVar15;
    bStack_90 = bVar3;
    FUN_1004b60cc(&uStack_b0,&bStack_90);
    plVar6 = plStack_a0;
    pbVar9 = pbStack_a8;
    puVar13 = uStack_b0;
    if (uStack_b0 == (undefined *)0x8000000000000001) goto LAB_10137ceb4;
    if (pbVar15 == pbVar20) {
LAB_10137d100:
      pbVar11 = (byte *)FUN_1087e422c(2,&UNK_10b231888,&UNK_10b20a590);
LAB_10137d118:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar11;
      if (((ulong)puVar13 & 0x7fffffffffffffff) != 0) {
        _free(pbVar9);
      }
      goto LAB_10137cebc;
    }
    pbVar15 = pbVar11 + 0x40;
    pbStack_f8 = pbVar15;
    if (pbVar11[0x20] == 0x16) goto LAB_10137d100;
    uVar21 = *(undefined8 *)(pbVar11 + 0x21);
    uStack_87 = (undefined7)*(undefined8 *)(pbVar11 + 0x29);
    bStack_8f = (byte)uVar21;
    uStack_8e = (undefined6)((ulong)uVar21 >> 8);
    uStack_88 = (undefined1)((ulong)uVar21 >> 0x38);
    pbStack_78 = *(byte **)(pbVar11 + 0x38);
    uStack_80 = (undefined1)*(long *)(pbVar11 + 0x30);
    uStack_7f = (undefined7)((ulong)*(long *)(pbVar11 + 0x30) >> 8);
    pbStack_e0 = pbVar19 + 2;
    bStack_90 = pbVar11[0x20];
    FUN_1004b62d4(&uStack_b0,&bStack_90);
    pbVar11 = pbStack_a8;
    puVar17 = uStack_b0;
    if (uStack_b0 == (undefined *)0x8000000000000000) goto LAB_10137d118;
    *param_1 = uStack_b0;
    param_1[1] = pbStack_a8;
    param_1[2] = plStack_a0;
    param_1[3] = uVar1;
    param_1[4] = uVar10;
    param_1[5] = uVar22;
    param_1[6] = puVar13;
    param_1[7] = pbVar9;
    param_1[8] = plVar6;
    lVar18 = FUN_100fbc738(&pbStack_100);
    if (lVar18 == 0) goto LAB_10137d15c;
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar18;
    if ((uVar1 & 0x7fffffffffffffff) != 0) {
      _free(uVar10);
    }
    if (((ulong)puVar13 & 0x7fffffffffffffff) != 0) {
      _free(pbVar9);
    }
  }
  if (puVar17 != (undefined *)0x0) {
    _free(pbVar11);
  }
LAB_10137d15c:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

