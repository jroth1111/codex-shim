
void FUN_10127e7f8(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  ulong uVar5;
  byte bVar6;
  long *plVar7;
  undefined *puVar8;
  code *pcVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 uVar14;
  byte bVar15;
  long lVar16;
  bool bVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  long unaff_x21;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  long lStack_158;
  long lStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  undefined *puStack_130;
  byte *pbStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  byte *pbStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  long lStack_a0;
  byte bStack_98;
  byte bStack_97;
  undefined6 uStack_96;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined1 auStack_71 [17];
  
  bVar6 = *param_2;
  if (bVar6 == 0x14) {
    uVar5 = *(ulong *)(param_2 + 8);
    pbVar22 = *(byte **)(param_2 + 0x10);
    lVar16 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar22 + lVar16 * 0x20;
    pbStack_f0 = (byte *)0x0;
    pbVar20 = pbVar22;
    pbStack_110 = pbVar22;
    uStack_100 = uVar5;
    pbStack_f8 = pbVar1;
    if (lVar16 == 0) {
LAB_10127ed28:
      pbStack_108 = pbVar20;
      pbVar21 = (byte *)FUN_1087e422c(0,&UNK_10b230868,&UNK_10b20a590);
LAB_10127ed44:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar21;
LAB_10127ed50:
      lVar16 = ((ulong)((long)pbVar1 - (long)pbVar20) >> 5) + 1;
      while (lVar16 = lVar16 + -1, lVar16 != 0) {
        FUN_100e077ec(pbVar20);
        pbVar20 = pbVar20 + 0x20;
      }
    }
    else {
      pbVar20 = pbVar22 + 0x20;
      if (*pbVar22 == 0x16) goto LAB_10127ed28;
      uVar11 = *(undefined8 *)(pbVar22 + 1);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar22 + 9);
      bStack_97 = (byte)uVar11;
      uStack_96 = (undefined6)((ulong)uVar11 >> 8);
      uStack_90 = (undefined1)((ulong)uVar11 >> 0x38);
      lStack_80 = *(long *)(pbVar22 + 0x18);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar22 + 0x10);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x10) >> 8);
      pbStack_f0 = (byte *)0x1;
      pbStack_108 = pbVar20;
      bStack_98 = *pbVar22;
      FUN_1004b62d4(&uStack_b0,&bStack_98);
      lVar23 = lStack_a0;
      pbVar21 = pbStack_a8;
      puVar19 = uStack_b0;
      if (uStack_b0 == (undefined *)0x8000000000000000) goto LAB_10127ed44;
      if (lVar16 == 1) {
LAB_10127edfc:
        pbVar10 = (byte *)FUN_1087e422c(1,&UNK_10b230868,&UNK_10b20a590);
LAB_10127ee14:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar10;
joined_r0x00010127ee24:
        if (puVar19 != (undefined *)0x0) {
          _free(pbVar21);
        }
        goto LAB_10127ed50;
      }
      pbVar20 = pbVar22 + 0x40;
      pbStack_108 = pbVar20;
      if (pbVar22[0x20] == 0x16) goto LAB_10127edfc;
      uVar11 = *(undefined8 *)(pbVar22 + 0x21);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar22 + 0x29);
      bStack_97 = (byte)uVar11;
      uStack_96 = (undefined6)((ulong)uVar11 >> 8);
      uStack_90 = (undefined1)((ulong)uVar11 >> 0x38);
      lStack_80 = *(long *)(pbVar22 + 0x38);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar22 + 0x30);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x30) >> 8);
      pbStack_f0 = (byte *)0x2;
      bStack_98 = pbVar22[0x20];
      FUN_1004b5b34(&uStack_b0,&bStack_98);
      lVar24 = lStack_a0;
      pbVar10 = pbStack_a8;
      puVar4 = uStack_b0;
      if (uStack_b0 == (undefined *)0x8000000000000000) goto LAB_10127ee14;
      puStack_c8 = uStack_b0;
      pbStack_c0 = pbStack_a8;
      lStack_b8 = lStack_a0;
      if (lVar16 == 2) {
LAB_10127f178:
        pbVar12 = (byte *)FUN_1087e422c(2,&UNK_10b230868,&UNK_10b20a590);
LAB_10127f190:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar12;
        if (lVar24 != 0) {
          pbVar12 = pbVar10 + 8;
          do {
            if (*(long *)(pbVar12 + -8) != 0) {
              _free(*(undefined8 *)pbVar12);
            }
            pbVar12 = pbVar12 + 0x18;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        if (puVar4 != (undefined *)0x0) {
          _free(pbVar10);
        }
        goto joined_r0x00010127ee24;
      }
      pbVar20 = pbVar22 + 0x60;
      pbStack_108 = pbVar20;
      if (pbVar22[0x40] == 0x16) goto LAB_10127f178;
      uVar11 = *(undefined8 *)(pbVar22 + 0x41);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar22 + 0x49);
      bStack_97 = (byte)uVar11;
      uStack_96 = (undefined6)((ulong)uVar11 >> 8);
      uStack_90 = (undefined1)((ulong)uVar11 >> 0x38);
      lStack_80 = *(long *)(pbVar22 + 0x58);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar22 + 0x50);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x50) >> 8);
      pbStack_f0 = (byte *)0x3;
      bStack_98 = pbVar22[0x40];
      FUN_1004b60cc(&uStack_b0,&bStack_98);
      pbVar12 = pbStack_a8;
      puVar8 = uStack_b0;
      lVar16 = lStack_b8;
      if (uStack_b0 == (undefined *)0x8000000000000001) goto LAB_10127f190;
      param_1[4] = pbStack_c0;
      param_1[3] = puStack_c8;
      *param_1 = puVar19;
      param_1[1] = pbVar21;
      param_1[2] = lVar23;
      param_1[5] = lStack_b8;
      param_1[6] = uStack_b0;
      param_1[7] = pbStack_a8;
      param_1[8] = lStack_a0;
      lVar23 = param_1[3];
      lVar24 = param_1[4];
      lVar13 = FUN_100fbc738(&pbStack_110);
      if (lVar13 == 0) goto LAB_10127f0a0;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar13;
      if (puVar19 != (undefined *)0x0) {
        _free(pbVar21);
      }
      if (lVar16 != 0) {
        puVar18 = (undefined8 *)(lVar24 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      if (lVar23 != 0) {
        _free(lVar24);
      }
      uVar5 = (ulong)puVar8 & 0x7fffffffffffffff;
      pbVar22 = pbVar12;
    }
    if (uVar5 != 0) {
      _free(pbVar22);
    }
    goto LAB_10127f0a0;
  }
  if (bVar6 != 0x15) {
    uVar11 = FUN_108855b04(param_2,auStack_71,&UNK_10b20aac0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
    return;
  }
  uStack_e0 = *(undefined8 *)(param_2 + 8);
  pbStack_f0 = *(byte **)(param_2 + 0x10);
  lVar16 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar20 = pbStack_f0 + lVar16;
  pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
  lStack_d0 = 0;
  pbStack_d8 = pbVar20;
  if (*(long *)(param_2 + 0x18) == 0) {
    puStack_120 = (undefined *)0x8000000000000000;
    puStack_c8 = (undefined *)0x8000000000000000;
    puStack_118 = (undefined *)0x8000000000000001;
    pbStack_e8 = pbStack_f0;
LAB_10127ee64:
    uStack_b0 = &UNK_108cabfee;
    pbStack_a8 = (byte *)0x5;
    bStack_98 = (byte)&uStack_b0;
    bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
    uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
    uStack_90 = 0xa0;
    uStack_8f = 0x100c7b3;
    puVar19 = (undefined *)0x0;
    uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
LAB_10127ee9c:
    bVar17 = true;
  }
  else {
    lVar23 = 0;
    puVar18 = (undefined8 *)((ulong)&bStack_98 | 1);
    puVar25 = (undefined8 *)((ulong)&pbStack_110 | 1);
    puVar19 = (undefined *)0x8000000000000000;
    puStack_120 = (undefined *)0x8000000000000000;
    puStack_118 = (undefined *)0x8000000000000001;
    puStack_130 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_f0;
    pbStack_e8 = pbStack_f0;
    do {
      pbVar21 = pbVar1 + 0x40;
      bVar15 = *pbVar1;
      pbVar22 = pbVar21;
      lVar24 = lVar23;
      if (bVar15 == 0x16) break;
      uVar11 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
      uVar11 = *(undefined8 *)(pbVar1 + 1);
      puVar18[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar18 = uVar11;
      pbStack_108 = *(byte **)(pbVar1 + 0x28);
      pbStack_110 = *(byte **)(pbVar1 + 0x20);
      pbStack_f8 = *(byte **)(pbVar1 + 0x38);
      uStack_100 = *(ulong *)(pbVar1 + 0x30);
      plVar3 = (long *)CONCAT71(uStack_8f,uStack_90);
      plVar7 = (long *)CONCAT71(uStack_87,uStack_88);
      lStack_b8 = unaff_x21;
      bStack_98 = bVar15;
      if (0xc < bVar15) {
        if (bVar15 == 0xd) {
          if (plVar7 == (long *)0x11) {
            if ((*plVar3 == 0x616c6c65636e6163 && plVar3[1] == 0x656b6f546e6f6974) &&
                (char)plVar3[2] == 'n') {
              bVar15 = 2;
              goto LAB_10127ead4;
            }
          }
          else if (plVar7 == (long *)0x5) {
            if ((int)*plVar3 == 0x72657571 && *(char *)((long)plVar3 + 4) == 'y') {
              bVar15 = 0;
            }
            else {
              if ((int)*plVar3 != 0x746f6f72 || *(char *)((long)plVar3 + 4) != 's')
              goto LAB_10127eacc;
              bVar15 = 1;
            }
            goto LAB_10127ead4;
          }
LAB_10127eacc:
          bVar15 = 3;
          goto LAB_10127ead4;
        }
        if (bVar15 != 0xe) {
          if (bVar15 != 0xf) goto LAB_10127ec94;
          func_0x000100ba9004(&uStack_b0,plVar3,plVar7);
          goto LAB_10127ead8;
        }
        func_0x000100ba9004(&uStack_b0,plVar7);
        if (plVar3 != (long *)0x0) goto LAB_10127ea7c;
LAB_10127eae0:
        if (((ulong)uStack_b0 & 1) == 0) goto LAB_10127eae8;
LAB_10127ecbc:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_a8;
LAB_10127ece8:
        lStack_d0 = lVar23 + 1;
        pbStack_c0 = pbStack_128;
        puStack_c8 = puStack_130;
        bVar17 = true;
        pbStack_e8 = pbVar21;
        goto LAB_10127eea0;
      }
      if (bVar15 == 1) {
        bVar15 = bStack_97;
        if (2 < bStack_97) {
          bVar15 = 3;
        }
LAB_10127ead4:
        uStack_b0._1_7_ = CONCAT61(uStack_b0._2_6_,bVar15);
        uStack_b0 = (undefined *)((ulong)uStack_b0._1_7_ << 8);
LAB_10127ead8:
        FUN_100e077ec(&bStack_98);
        goto LAB_10127eae0;
      }
      if (bVar15 == 4) {
        if ((long *)0x2 < plVar3) {
          plVar3 = (long *)0x3;
        }
        bVar15 = (byte)plVar3;
        goto LAB_10127ead4;
      }
      if (bVar15 != 0xc) {
LAB_10127ec94:
        pbStack_a8 = (byte *)FUN_108855b04(&bStack_98,auStack_71,&UNK_10b2124e0);
        uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,1);
        goto LAB_10127ecbc;
      }
      if (lStack_80 == 0x11) {
        if ((*plVar7 == 0x616c6c65636e6163 && plVar7[1] == 0x656b6f546e6f6974) &&
            (char)plVar7[2] == 'n') {
          uVar14 = 2;
          goto LAB_10127ea70;
        }
LAB_10127ea6c:
        uVar14 = 3;
      }
      else {
        if (lStack_80 != 5) goto LAB_10127ea6c;
        if ((int)*plVar7 == 0x72657571 && *(char *)((long)plVar7 + 4) == 'y') {
          uVar14 = 0;
        }
        else {
          if ((int)*plVar7 != 0x746f6f72 || *(char *)((long)plVar7 + 4) != 's') goto LAB_10127ea6c;
          uVar14 = 1;
        }
      }
LAB_10127ea70:
      uStack_b0 = (undefined *)((ulong)CONCAT61(uStack_b0._2_6_,uVar14) << 8);
      if (plVar3 == (long *)0x0) goto LAB_10127eae0;
LAB_10127ea7c:
      _free(plVar7);
      if (((ulong)uStack_b0 & 1) != 0) goto LAB_10127ecbc;
LAB_10127eae8:
      bVar15 = (byte)pbStack_110;
      if (uStack_b0._1_1_ < 2) {
        if (uStack_b0._1_1_ == 0) {
          if (puVar19 != (undefined *)0x8000000000000000) {
            lStack_d0 = lVar23 + 1;
            pbStack_c0 = pbStack_128;
            puStack_c8 = puStack_130;
            uStack_b0 = &UNK_108cabfee;
            pbStack_a8 = (byte *)0x5;
            bStack_98 = (byte)&uStack_b0;
            bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
            uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pbStack_e8 = pbVar21;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
LAB_10127f44c:
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar11;
            goto LAB_10127ee9c;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar15 == 0x16) {
            lStack_d0 = lVar23 + 1;
            pbStack_c0 = pbStack_128;
            puStack_c8 = puStack_130;
            pbStack_e8 = pbVar21;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10127f510;
          }
          uVar11 = *puVar25;
          puVar18[1] = puVar25[1];
          *puVar18 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar25 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
          bStack_98 = bVar15;
          FUN_1004b62d4(&uStack_b0,&bStack_98);
          if (uStack_b0 == (undefined *)0x8000000000000000) {
            puVar19 = (undefined *)0x0;
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_a8;
            goto LAB_10127ece8;
          }
          pbStack_140 = pbStack_a8;
          lStack_158 = lStack_a0;
          puVar19 = uStack_b0;
        }
        else {
          if (puStack_120 != (undefined *)0x8000000000000000) {
            lStack_d0 = lVar23 + 1;
            pbStack_c0 = pbStack_128;
            puStack_c8 = puStack_130;
            uStack_b0 = &UNK_108cb9324;
            pbStack_a8 = (byte *)0x5;
            bStack_98 = (byte)&uStack_b0;
            bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
            uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pbStack_e8 = pbVar21;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
            goto LAB_10127f44c;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar15 == 0x16) {
            lStack_d0 = lVar23 + 1;
            pbStack_c0 = pbStack_128;
            puStack_c8 = puStack_130;
            pbStack_e8 = pbVar21;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10127f510;
          }
          uVar11 = *puVar25;
          puVar18[1] = puVar25[1];
          *puVar18 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar25 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
          bStack_98 = bVar15;
          FUN_1004b5b34(&uStack_b0,&bStack_98);
          puStack_120 = uStack_b0;
          if (uStack_b0 == (undefined *)0x8000000000000000) {
            lStack_d0 = lVar23 + 1;
            puStack_c8 = puStack_130;
            pbStack_c0 = pbStack_128;
            puStack_120 = (undefined *)0x8000000000000000;
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_a8;
            bVar17 = true;
            pbStack_e8 = pbVar21;
            goto LAB_10127eea0;
          }
          pbStack_128 = pbStack_a8;
          unaff_x21 = lStack_a0;
          puStack_130 = puStack_120;
        }
      }
      else if (uStack_b0._1_1_ == 2) {
        if (puStack_118 != (undefined *)0x8000000000000001) {
          lStack_d0 = lVar23 + 1;
          pbStack_c0 = pbStack_128;
          puStack_c8 = puStack_130;
          uStack_b0 = &UNK_108cbf271;
          pbStack_a8 = (byte *)0x11;
          bStack_98 = (byte)&uStack_b0;
          bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
          uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
          uStack_90 = 0xa0;
          uStack_8f = 0x100c7b3;
          pbStack_e8 = pbVar21;
          uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar11;
          bVar17 = true;
          goto joined_r0x00010127f3ec;
        }
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar15 == 0x16) {
          lStack_d0 = lVar23 + 1;
          pbStack_c0 = pbStack_128;
          puStack_c8 = puStack_130;
          pbStack_e8 = pbVar21;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10127f510;
        }
        uVar11 = *puVar25;
        puVar18[1] = puVar25[1];
        *puVar18 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar25 + 0xf);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
        bStack_98 = bVar15;
        FUN_1004b60cc(&uStack_b0,&bStack_98);
        puStack_118 = uStack_b0;
        if (uStack_b0 == (undefined *)0x8000000000000001) {
          lStack_d0 = lVar23 + 1;
          pbStack_c0 = pbStack_128;
          puStack_c8 = puStack_130;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_a8;
          bVar17 = true;
          pbStack_e8 = pbVar21;
          goto LAB_10127f024;
        }
        pbStack_148 = pbStack_a8;
        lStack_150 = lStack_a0;
      }
      else {
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar15 == 0x16) {
          lStack_d0 = lVar23 + 1;
          pbStack_c0 = pbStack_128;
          puStack_c8 = puStack_130;
          pbStack_e8 = pbVar21;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10127f510:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10127f514);
          (*pcVar9)();
        }
        uVar11 = *puVar25;
        puVar18[1] = puVar25[1];
        *puVar18 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar25 + 0xf);
        *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar25 + 0x17);
        *(undefined8 *)((long)puVar18 + 0xf) = uVar11;
        bStack_98 = bVar15;
        FUN_100e077ec(&bStack_98);
      }
      lVar23 = lVar23 + 1;
      pbVar22 = pbVar20;
      lVar24 = (lVar16 - 0x40U >> 6) + 1;
      pbVar1 = pbVar21;
    } while (pbVar21 != pbVar20);
    pbStack_c0 = pbStack_128;
    puStack_c8 = puStack_130;
    pbStack_e8 = pbVar22;
    lStack_d0 = lVar24;
    lStack_b8 = unaff_x21;
    if (puVar19 == (undefined *)0x8000000000000000) goto LAB_10127ee64;
    if (puStack_120 != (undefined *)0x8000000000000000) {
      *param_1 = puVar19;
      param_1[1] = pbStack_140;
      puVar4 = (undefined *)0x8000000000000000;
      if (puStack_118 != (undefined *)0x8000000000000001) {
        puVar4 = puStack_118;
      }
      param_1[2] = lStack_158;
      param_1[3] = puStack_120;
      param_1[4] = pbStack_128;
      param_1[5] = unaff_x21;
      param_1[6] = puVar4;
      param_1[7] = pbStack_148;
      param_1[8] = lStack_150;
      FUN_100d34830(&pbStack_f0);
      if (pbVar20 != pbVar22) {
        bStack_98 = (byte)lVar24;
        bStack_97 = (byte)((ulong)lVar24 >> 8);
        uStack_96 = (undefined6)((ulong)lVar24 >> 0x10);
        uVar11 = FUN_1087e422c(((ulong)((long)pbVar20 - (long)pbVar22) >> 6) + lVar24,&bStack_98,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        if (puVar19 != (undefined *)0x0) {
          _free(pbStack_140);
        }
        if (unaff_x21 != 0) {
          pbVar20 = pbStack_128 + 8;
          do {
            if (*(long *)(pbVar20 + -8) != 0) {
              _free(*(undefined8 *)pbVar20);
            }
            pbVar20 = pbVar20 + 0x18;
            unaff_x21 = unaff_x21 + -1;
          } while (unaff_x21 != 0);
        }
        if (puStack_120 != (undefined *)0x0) {
          _free(pbStack_128);
        }
        if (((ulong)puVar4 & 0x7fffffffffffffff) != 0) {
          _free(pbStack_148);
        }
      }
      goto LAB_10127f0a0;
    }
    uStack_b0 = &UNK_108cb9324;
    pbStack_a8 = (byte *)0x5;
    bStack_98 = (byte)&uStack_b0;
    bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
    uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
    uStack_90 = 0xa0;
    uStack_8f = 0x100c7b3;
    uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
    puStack_120 = (undefined *)0x8000000000000000;
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
    if (puVar19 != (undefined *)0x0) {
      _free(pbStack_140);
    }
    bVar17 = false;
  }
LAB_10127eea0:
  if (puStack_118 != (undefined *)0x8000000000000001) {
joined_r0x00010127f3ec:
    if (((ulong)puStack_118 & 0x7fffffffffffffff) != 0) {
      _free(pbStack_148);
    }
  }
LAB_10127f024:
  if (puStack_120 != (undefined *)0x8000000000000000) {
    if (unaff_x21 != 0) {
      pbVar20 = pbStack_128 + 8;
      do {
        if (*(long *)(pbVar20 + -8) != 0) {
          _free(*(undefined8 *)pbVar20);
        }
        pbVar20 = pbVar20 + 0x18;
        unaff_x21 = unaff_x21 + -1;
      } while (unaff_x21 != 0);
    }
    if (puStack_120 != (undefined *)0x0) {
      _free(pbStack_128);
    }
  }
  bVar2 = false;
  if (((ulong)puVar19 & 0x7fffffffffffffff) != 0) {
    bVar2 = bVar17;
  }
  if (bVar2) {
    _free(pbStack_140);
  }
  FUN_100d34830(&pbStack_f0);
  if ((byte)pbStack_110 != '\x16') {
    FUN_100e077ec(&pbStack_110);
  }
LAB_10127f0a0:
  if ((bVar6 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

