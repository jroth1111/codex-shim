
/* WARNING: Type propagation algorithm not settling */

void FUN_1013da708(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  undefined *puVar5;
  byte *pbVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte bVar11;
  long lVar12;
  undefined8 *puVar13;
  bool bVar14;
  bool bVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  byte *pbStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined *puStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    puVar19 = *(undefined **)(param_2 + 8);
    pbVar23 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar23 + lVar12 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar17 = pbVar23;
    pbStack_f0 = pbVar23;
    puStack_e0 = puVar19;
    pbStack_d8 = pbVar1;
    if (lVar12 == 0) {
LAB_1013dac84:
      pbStack_e8 = pbVar17;
      pbVar22 = (byte *)FUN_1087e422c(0,&UNK_10b231e78,&UNK_10b20a590);
LAB_1013daca0:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar22;
LAB_1013daca8:
      lVar12 = ((ulong)((long)pbVar1 - (long)pbVar17) >> 5) + 1;
      while (lVar12 = lVar12 + -1, pbVar10 = pbVar23, puVar5 = puVar19, lVar12 != 0) {
        FUN_100e077ec(pbVar17);
        pbVar17 = pbVar17 + 0x20;
      }
    }
    else {
      pbVar17 = pbVar23 + 0x20;
      if (*pbVar23 == 0x16) goto LAB_1013dac84;
      uVar9 = *(undefined8 *)(pbVar23 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar23 + 9);
      bStack_8f = (byte)uVar9;
      uStack_8e = (undefined6)((ulong)uVar9 >> 8);
      uStack_88 = (undefined1)((ulong)uVar9 >> 0x38);
      lStack_78 = *(long *)(pbVar23 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar23 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar23 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar17;
      bStack_90 = *pbVar23;
      FUN_1004b62d4(&uStack_a8,&bStack_90);
      uVar9 = uStack_98;
      pbVar22 = pbStack_a0;
      puVar21 = uStack_a8;
      if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_1013daca0;
      if (lVar12 == 1) {
LAB_1013dad48:
        pbStack_f8 = (byte *)FUN_1087e422c(1,&UNK_10b231e78,&UNK_10b20a590);
LAB_1013dad64:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_f8;
LAB_1013dad70:
        if (puVar21 != (undefined *)0x0) {
          _free(pbVar22);
        }
        goto LAB_1013daca8;
      }
      pbVar17 = pbVar23 + 0x40;
      pbStack_e8 = pbVar17;
      if (pbVar23[0x20] == 0x16) goto LAB_1013dad48;
      uVar25 = *(undefined8 *)(pbVar23 + 0x21);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar23 + 0x29);
      bStack_8f = (byte)uVar25;
      uStack_8e = (undefined6)((ulong)uVar25 >> 8);
      uStack_88 = (undefined1)((ulong)uVar25 >> 0x38);
      lStack_78 = *(long *)(pbVar23 + 0x38);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar23 + 0x30);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar23 + 0x30) >> 8);
      pbStack_d0 = (byte *)0x2;
      bStack_90 = pbVar23[0x20];
      FUN_1004b62d4(&uStack_a8,&bStack_90);
      uVar25 = uStack_98;
      pbVar6 = pbStack_a0;
      puVar24 = uStack_a8;
      pbStack_f8 = pbStack_a0;
      if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_1013dad64;
      if (lVar12 == 2) {
LAB_1013db0d4:
        pbVar10 = (byte *)FUN_1087e422c(2,&UNK_10b231e78,&UNK_10b20a590);
LAB_1013db0ec:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar10;
        if (puVar24 != (undefined *)0x0) {
          _free(pbVar6);
        }
        goto LAB_1013dad70;
      }
      pbVar17 = pbVar23 + 0x60;
      pbStack_e8 = pbVar17;
      if (pbVar23[0x40] == 0x16) goto LAB_1013db0d4;
      uVar26 = *(undefined8 *)(pbVar23 + 0x41);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar23 + 0x49);
      bStack_8f = (byte)uVar26;
      uStack_8e = (undefined6)((ulong)uVar26 >> 8);
      uStack_88 = (undefined1)((ulong)uVar26 >> 0x38);
      lStack_78 = *(long *)(pbVar23 + 0x58);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar23 + 0x50);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar23 + 0x50) >> 8);
      pbStack_d0 = (byte *)0x3;
      bStack_90 = pbVar23[0x40];
      FUN_1004b62d4(&uStack_a8,&bStack_90);
      pbVar10 = pbStack_a0;
      puVar5 = uStack_a8;
      if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_1013db0ec;
      *param_1 = puVar21;
      param_1[1] = pbVar22;
      param_1[2] = uVar9;
      param_1[3] = puVar24;
      param_1[4] = pbVar6;
      param_1[5] = uVar25;
      param_1[6] = uStack_a8;
      param_1[7] = pbStack_a0;
      param_1[8] = uStack_98;
      lVar12 = FUN_100fbc738(&pbStack_f0);
      if (lVar12 == 0) goto LAB_1013dae90;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar12;
      if (puVar21 != (undefined *)0x0) {
        _free(pbVar22);
      }
      if (puVar24 != (undefined *)0x0) {
        _free(pbVar6);
      }
    }
    if (puVar5 != (undefined *)0x0) {
      _free(pbVar10);
    }
    goto LAB_1013dae90;
  }
  if (bVar3 != 0x15) {
    uVar9 = FUN_108855b04(param_2,auStack_69,&UNK_10b20ad80);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    return;
  }
  uStack_c0 = *(undefined8 *)(param_2 + 8);
  pbStack_d0 = *(byte **)(param_2 + 0x10);
  lVar12 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar17 = pbStack_d0 + lVar12;
  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
  lStack_b0 = 0;
  pbStack_b8 = pbVar17;
  if (*(long *)(param_2 + 0x18) == 0) {
    puVar19 = (undefined *)0x0;
    puVar21 = (undefined *)0x8000000000000000;
    pbStack_c8 = pbStack_d0;
LAB_1013dade8:
    uStack_a8 = &UNK_108cc00ad;
    pbStack_a0 = (byte *)0x15;
    bStack_90 = (byte)&uStack_a8;
    bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    puVar24 = (undefined *)0x0;
    uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    bVar8 = true;
    bVar15 = true;
    bVar14 = true;
  }
  else {
    lVar16 = 0;
    puVar20 = (undefined8 *)((ulong)&bStack_90 | 1);
    puVar13 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    puVar24 = (undefined *)0x8000000000000000;
    puVar19 = (undefined *)0x8000000000000000;
    puVar21 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_d0;
    pbStack_c8 = pbStack_d0;
    do {
      pbVar22 = pbVar1 + 0x40;
      bVar11 = *pbVar1;
      lVar18 = lVar16;
      pbVar23 = pbVar22;
      if (bVar11 == 0x16) break;
      uVar9 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar20 + 0xf) = uVar9;
      uVar9 = *(undefined8 *)(pbVar1 + 1);
      puVar20[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar20 = uVar9;
      pbStack_e8 = *(byte **)(pbVar1 + 0x28);
      pbStack_f0 = *(byte **)(pbVar1 + 0x20);
      pbStack_d8 = *(byte **)(pbVar1 + 0x38);
      puStack_e0 = *(undefined **)(pbVar1 + 0x30);
      plVar2 = (long *)CONCAT71(uStack_87,uStack_88);
      plVar4 = (long *)CONCAT71(uStack_7f,uStack_80);
      bStack_90 = bVar11;
      if (bVar11 < 0xd) {
        if (bVar11 == 1) {
          bVar11 = bStack_8f;
          if (2 < bStack_8f) {
            bVar11 = 3;
          }
LAB_1013daa68:
          uStack_a8._1_7_ = CONCAT61(uStack_a8._2_6_,bVar11);
          uStack_a8 = (undefined *)((ulong)uStack_a8._1_7_ << 8);
          goto LAB_1013daa6c;
        }
        if (bVar11 == 4) {
          if ((long *)0x2 < plVar2) {
            plVar2 = (long *)0x3;
          }
          bVar11 = (byte)plVar2;
          goto LAB_1013daa68;
        }
        if (bVar11 == 0xc) {
          if (lStack_78 == 9) {
            if (*plVar4 != 0x6d614e6c6c696b73 || (char)plVar4[1] != 'e') goto LAB_1013da9e0;
            uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x200);
          }
          else if (lStack_78 == 0xe) {
            if (*plVar4 != 0x6c5065746f6d6572 || *(long *)((long)plVar4 + 6) != 0x64496e6967756c50)
            goto LAB_1013da9e0;
            uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x100);
          }
          else if ((lStack_78 == 0x15) &&
                  ((*plVar4 == 0x614d65746f6d6572 && plVar4[1] == 0x63616c7074656b72) &&
                   *(long *)((long)plVar4 + 0xd) == 0x656d614e6563616c)) {
            uStack_a8 = (undefined *)((ulong)uStack_a8._2_6_ << 0x10);
          }
          else {
LAB_1013da9e0:
            uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x300);
          }
joined_r0x0001013da9b0:
          if (plVar2 != (long *)0x0) {
            _free(plVar4);
          }
        }
        else {
LAB_1013dac28:
          pbStack_a0 = (byte *)FUN_108855b04(&bStack_90,auStack_69,&UNK_10b211300);
          uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
        }
      }
      else {
        if (bVar11 == 0xd) {
          if (plVar4 == (long *)0x9) {
            if (*plVar2 != 0x6d614e6c6c696b73 || (char)plVar2[1] != 'e') goto LAB_1013daa60;
            bVar11 = 2;
          }
          else if (plVar4 == (long *)0xe) {
            if (*plVar2 != 0x6c5065746f6d6572 || *(long *)((long)plVar2 + 6) != 0x64496e6967756c50)
            goto LAB_1013daa60;
            bVar11 = 1;
          }
          else if ((plVar4 == (long *)0x15) &&
                  ((*plVar2 == 0x614d65746f6d6572 && plVar2[1] == 0x63616c7074656b72) &&
                   *(long *)((long)plVar2 + 0xd) == 0x656d614e6563616c)) {
            bVar11 = 0;
          }
          else {
LAB_1013daa60:
            bVar11 = 3;
          }
          goto LAB_1013daa68;
        }
        if (bVar11 == 0xe) {
          func_0x000100bb3170(&uStack_a8,plVar4);
          goto joined_r0x0001013da9b0;
        }
        if (bVar11 != 0xf) goto LAB_1013dac28;
        func_0x000100bb3170(&uStack_a8,plVar2,plVar4);
LAB_1013daa6c:
        FUN_100e077ec(&bStack_90);
      }
      if (((ulong)uStack_a8 & 1) != 0) {
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_a0;
LAB_1013dad9c:
        lStack_b0 = lVar16 + 1;
        bVar8 = true;
        bVar15 = true;
        bVar14 = true;
        pbStack_c8 = pbVar22;
        goto joined_r0x0001013dadb4;
      }
      bVar11 = (byte)pbStack_f0;
      if (uStack_a8._1_1_ < 2) {
        if (uStack_a8._1_1_ == 0) {
          if (puVar24 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar16 + 1;
            uStack_a8 = &UNK_108cc00ad;
            pbStack_a0 = (byte *)0x15;
            bStack_90 = (byte)&uStack_a8;
            bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_c8 = pbVar22;
            uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
LAB_1013db2d8:
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar9;
            bVar8 = true;
            bVar15 = true;
            bVar14 = true;
            goto joined_r0x0001013dadb4;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar11 == 0x16) {
            lStack_b0 = lVar16 + 1;
            pbStack_c8 = pbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1013db394;
          }
          uVar9 = *puVar13;
          puVar20[1] = puVar13[1];
          *puVar20 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar9;
          bStack_90 = bVar11;
          puVar24 = (undefined *)0x0;
          FUN_1004b62d4(&uStack_a8,&bStack_90);
          if (uStack_a8 == (undefined *)0x8000000000000000) {
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_a0;
            goto LAB_1013dad9c;
          }
          pbStack_110 = pbStack_a0;
          uStack_120 = uStack_98;
          puVar24 = uStack_a8;
        }
        else {
          if (puVar19 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar16 + 1;
            uStack_a8 = &UNK_108cc0df0;
            pbStack_a0 = (byte *)0xe;
            bStack_90 = (byte)&uStack_a8;
            bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_c8 = pbVar22;
            uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_1013db2d8;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar11 == 0x16) {
            lStack_b0 = lVar16 + 1;
            pbStack_c8 = pbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1013db394;
          }
          uVar9 = *puVar13;
          puVar20[1] = puVar13[1];
          *puVar20 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar9;
          bStack_90 = bVar11;
          puVar19 = (undefined *)0x0;
          FUN_1004b62d4(&uStack_a8,&bStack_90);
          if (uStack_a8 == (undefined *)0x8000000000000000) {
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_a0;
            goto LAB_1013dad9c;
          }
          pbStack_118 = pbStack_a0;
          uStack_128 = uStack_98;
          puVar19 = uStack_a8;
        }
      }
      else if (uStack_a8._1_1_ == 2) {
        if (puVar21 != (undefined *)0x8000000000000000) {
          lStack_b0 = lVar16 + 1;
          uStack_a8 = &UNK_108cc0e36;
          pbStack_a0 = (byte *)0x9;
          bStack_90 = (byte)&uStack_a8;
          bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
          uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
          uStack_88 = 0xa0;
          uStack_87 = 0x100c7b3;
          pbStack_c8 = pbVar22;
          uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar9;
          bVar8 = true;
          bVar15 = true;
          goto joined_r0x0001013db288;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar11 == 0x16) {
          lStack_b0 = lVar16 + 1;
          pbStack_c8 = pbVar22;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013db394;
        }
        uVar9 = *puVar13;
        puVar20[1] = puVar13[1];
        *puVar20 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar9;
        bStack_90 = bVar11;
        FUN_1004b62d4(&uStack_a8,&bStack_90);
        if (uStack_a8 == (undefined *)0x8000000000000000) {
          lStack_b0 = lVar16 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_a0;
          bVar14 = true;
          bVar8 = true;
          pbStack_c8 = pbVar22;
          goto LAB_1013dae48;
        }
        pbStack_138 = pbStack_a0;
        uStack_130 = uStack_98;
        puVar21 = uStack_a8;
      }
      else {
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar11 == 0x16) {
          lStack_b0 = lVar16 + 1;
          pbStack_c8 = pbVar22;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013db394:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1013db398);
          (*pcVar7)();
        }
        uVar9 = *puVar13;
        puVar20[1] = puVar13[1];
        *puVar20 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar13 + 0xf);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar9;
        bStack_90 = bVar11;
        FUN_100e077ec(&bStack_90);
      }
      lVar16 = lVar16 + 1;
      lVar18 = (lVar12 - 0x40U >> 6) + 1;
      pbVar23 = pbVar17;
      pbVar1 = pbVar22;
    } while (pbVar22 != pbVar17);
    pbStack_c8 = pbVar23;
    lStack_b0 = lVar18;
    if (puVar24 == (undefined *)0x8000000000000000) goto LAB_1013dade8;
    bVar8 = puVar19 == (undefined *)0x8000000000000000;
    if (bVar8) {
      uStack_a8 = &UNK_108cc0df0;
      pbStack_a0 = (byte *)0xe;
      bStack_90 = (byte)&uStack_a8;
      bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
      uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar9;
    }
    else {
      if (puVar21 != (undefined *)0x8000000000000000) {
        *param_1 = puVar24;
        param_1[1] = pbStack_110;
        param_1[2] = uStack_120;
        param_1[3] = puVar19;
        param_1[4] = pbStack_118;
        param_1[5] = uStack_128;
        param_1[6] = puVar21;
        param_1[7] = pbStack_138;
        param_1[8] = uStack_130;
        FUN_100d34830(&pbStack_d0);
        if (pbVar17 != pbVar23) {
          bStack_90 = (byte)lVar18;
          bStack_8f = (byte)((ulong)lVar18 >> 8);
          uStack_8e = (undefined6)((ulong)lVar18 >> 0x10);
          uVar9 = FUN_1087e422c(((ulong)((long)pbVar17 - (long)pbVar23) >> 6) + lVar18,&bStack_90,
                                &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar9;
          if (puVar24 != (undefined *)0x0) {
            _free(pbStack_110);
          }
          if (puVar19 != (undefined *)0x0) {
            _free(pbStack_118);
          }
          if (puVar21 != (undefined *)0x0) {
            _free(pbStack_138);
          }
        }
        goto LAB_1013dae90;
      }
      uStack_a8 = &UNK_108cc0e36;
      pbStack_a0 = (byte *)0x9;
      bStack_90 = (byte)&uStack_a8;
      bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
      uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar9;
      if (puVar19 != (undefined *)0x0) {
        _free(pbStack_118);
      }
    }
    if (puVar24 != (undefined *)0x0) {
      _free(pbStack_110);
    }
    bVar15 = false;
    bVar14 = false;
  }
joined_r0x0001013dadb4:
  if (puVar21 != (undefined *)0x8000000000000000) {
joined_r0x0001013db288:
    bVar14 = bVar15;
    if (puVar21 != (undefined *)0x0) {
      _free(pbStack_138);
    }
  }
LAB_1013dae48:
  if ((((ulong)puVar19 & 0x7fffffffffffffff) != 0) && (bVar8)) {
    _free(pbStack_118);
  }
  bVar8 = false;
  if (((ulong)puVar24 & 0x7fffffffffffffff) != 0) {
    bVar8 = bVar14;
  }
  if (bVar8) {
    _free(pbStack_110);
  }
  FUN_100d34830(&pbStack_d0);
  if ((byte)pbStack_f0 != '\x16') {
    FUN_100e077ec(&pbStack_f0);
  }
LAB_1013dae90:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

