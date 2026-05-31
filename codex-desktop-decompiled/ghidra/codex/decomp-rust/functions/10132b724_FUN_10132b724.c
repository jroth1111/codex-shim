
/* WARNING: Type propagation algorithm not settling */

void FUN_10132b724(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  long *plVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  code *pcVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte bVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  long unaff_x23;
  undefined8 *puVar21;
  undefined *puVar22;
  long lStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  undefined *puStack_128;
  undefined *puStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined *puStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  byte *pbStack_c0;
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
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    puVar22 = *(undefined **)(param_2 + 8);
    pbVar19 = *(byte **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar19 + lVar14 * 0x20;
    pbStack_f0 = (byte *)0x0;
    pbVar20 = pbVar19;
    pbStack_110 = pbVar19;
    puStack_100 = puVar22;
    pbStack_f8 = pbVar1;
    if (lVar14 == 0) {
LAB_10132bc64:
      pbStack_108 = pbVar20;
      pbVar18 = (byte *)FUN_1087e422c(0,&UNK_10b2324f0,&UNK_10b20a590);
LAB_10132bc88:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar18;
LAB_10132bc90:
      lVar14 = ((ulong)((long)pbVar1 - (long)pbVar20) >> 5) + 1;
      while (lVar14 = lVar14 + -1, pbVar11 = pbVar19, puVar7 = puVar22, lVar14 != 0) {
        FUN_100e077ec(pbVar20);
        pbVar20 = pbVar20 + 0x20;
      }
    }
    else {
      pbVar20 = pbVar19 + 0x20;
      if (*pbVar19 == 0x16) goto LAB_10132bc64;
      uVar12 = *(undefined8 *)(pbVar19 + 1);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar19 + 9);
      bStack_97 = (byte)uVar12;
      uStack_96 = (undefined6)((ulong)uVar12 >> 8);
      uStack_90 = (undefined1)((ulong)uVar12 >> 0x38);
      lStack_80 = *(long *)(pbVar19 + 0x18);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar19 + 0x10);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 0x10) >> 8);
      pbStack_f0 = (byte *)0x1;
      pbStack_108 = pbVar20;
      bStack_98 = *pbVar19;
      FUN_1004b62d4(&uStack_b0,&bStack_98);
      lVar16 = lStack_a0;
      pbVar18 = pbStack_a8;
      puVar8 = uStack_b0;
      if (uStack_b0 == (undefined *)0x8000000000000000) goto LAB_10132bc88;
      if (lVar14 == 1) {
LAB_10132bd44:
        uVar12 = 1;
LAB_10132bd48:
        pbVar11 = (byte *)FUN_1087e422c(uVar12,&UNK_10b2324f0,&UNK_10b20a590);
LAB_10132bd5c:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar11;
        if (puVar8 != (undefined *)0x0) {
          _free(pbVar18);
        }
        goto LAB_10132bc90;
      }
      pbVar20 = pbVar19 + 0x40;
      pbStack_108 = pbVar20;
      if (pbVar19[0x20] == 0x16) goto LAB_10132bd44;
      uVar12 = *(undefined8 *)(pbVar19 + 0x21);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar19 + 0x29);
      bStack_97 = (byte)uVar12;
      uStack_96 = (undefined6)((ulong)uVar12 >> 8);
      uStack_90 = (undefined1)((ulong)uVar12 >> 0x38);
      lStack_80 = *(long *)(pbVar19 + 0x38);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar19 + 0x30);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 0x30) >> 8);
      pbStack_f0 = (byte *)0x2;
      bStack_98 = pbVar19[0x20];
      func_0x0001013a5aa0(&uStack_b0,&bStack_98);
      pbVar11 = pbStack_a8;
      if (((ulong)uStack_b0 & 1) != 0) goto LAB_10132bd5c;
      if (lVar14 == 2) {
LAB_10132c04c:
        uVar12 = 2;
        goto LAB_10132bd48;
      }
      uVar9 = uStack_b0._1_1_;
      pbVar20 = pbVar19 + 0x60;
      pbStack_108 = pbVar20;
      if (pbVar19[0x40] == 0x16) goto LAB_10132c04c;
      uVar12 = *(undefined8 *)(pbVar19 + 0x41);
      uStack_8f = (undefined7)*(undefined8 *)(pbVar19 + 0x49);
      bStack_97 = (byte)uVar12;
      uStack_96 = (undefined6)((ulong)uVar12 >> 8);
      uStack_90 = (undefined1)((ulong)uVar12 >> 0x38);
      lStack_80 = *(long *)(pbVar19 + 0x58);
      uStack_88 = (undefined1)*(undefined8 *)(pbVar19 + 0x50);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 0x50) >> 8);
      pbStack_f0 = (byte *)0x3;
      bStack_98 = pbVar19[0x40];
      FUN_100619ba4(&uStack_b0,&bStack_98);
      pbVar11 = pbStack_a8;
      puVar7 = uStack_b0;
      if (uStack_b0 == (undefined *)0x8000000000000000) goto LAB_10132bd5c;
      *param_1 = puVar8;
      param_1[1] = pbVar18;
      param_1[2] = lVar16;
      param_1[3] = uStack_b0;
      param_1[4] = pbStack_a8;
      param_1[5] = lStack_a0;
      *(undefined1 *)(param_1 + 6) = uVar9;
      lVar14 = FUN_100fbc738(&pbStack_110);
      if (lVar14 == 0) goto LAB_10132c1fc;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar14;
      if (puVar8 != (undefined *)0x0) {
        _free(pbVar18);
      }
      if (lStack_a0 != 0) {
        pbVar20 = pbVar11 + 8;
        lVar14 = lStack_a0;
        do {
          if (*(long *)(pbVar20 + -8) != 0) {
            _free(*(undefined8 *)pbVar20);
          }
          pbVar20 = pbVar20 + 0x20;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
    }
    if (puVar7 != (undefined *)0x0) {
      _free(pbVar11);
    }
    goto LAB_10132c1fc;
  }
  if (bVar3 != 0x15) {
    uVar12 = FUN_108855b04(param_2,auStack_71,&UNK_10b20c180);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar12;
    return;
  }
  uStack_e0 = *(undefined8 *)(param_2 + 8);
  pbStack_f0 = *(byte **)(param_2 + 0x10);
  lVar14 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar20 = pbStack_f0 + lVar14;
  pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
  lStack_d0 = 0;
  pbStack_d8 = pbVar20;
  if (*(long *)(param_2 + 0x18) == 0) {
    puStack_118 = (undefined *)0x8000000000000000;
    puStack_c8 = (undefined *)0x8000000000000000;
    pbStack_e8 = pbStack_f0;
LAB_10132bdf8:
    uStack_b0 = &UNK_108cc0df0;
    pbStack_a8 = (byte *)0xe;
    bStack_98 = (byte)&uStack_b0;
    bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
    uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
    uStack_90 = 0xa0;
    uStack_8f = 0x100c7b3;
    puVar22 = (undefined *)0x0;
    uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar12;
    bVar4 = true;
  }
  else {
    lVar16 = 0;
    puVar15 = (undefined8 *)((ulong)&bStack_98 | 1);
    puVar21 = (undefined8 *)((ulong)&pbStack_110 | 1);
    cVar6 = '\x02';
    puStack_118 = (undefined *)0x8000000000000000;
    puVar22 = (undefined *)0x8000000000000000;
    puStack_128 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_f0;
    pbStack_e8 = pbStack_f0;
    do {
      pbVar18 = pbVar1 + 0x40;
      bVar13 = *pbVar1;
      lVar17 = lVar16;
      pbVar19 = pbVar18;
      if (bVar13 == 0x16) break;
      uVar12 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
      uVar12 = *(undefined8 *)(pbVar1 + 1);
      puVar15[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar15 = uVar12;
      pbStack_108 = *(byte **)(pbVar1 + 0x28);
      pbStack_110 = *(byte **)(pbVar1 + 0x20);
      pbStack_f8 = *(byte **)(pbVar1 + 0x38);
      puStack_100 = *(undefined **)(pbVar1 + 0x30);
      plVar2 = (long *)CONCAT71(uStack_8f,uStack_90);
      plVar5 = (long *)CONCAT71(uStack_87,uStack_88);
      bStack_98 = bVar13;
      if (bVar13 < 0xd) {
        if (bVar13 == 1) {
          bVar13 = bStack_97;
          if (2 < bStack_97) {
            bVar13 = 3;
          }
LAB_10132ba60:
          uStack_b0._1_7_ = CONCAT61(uStack_b0._2_6_,bVar13);
          uStack_b0 = (undefined *)((ulong)uStack_b0._1_7_ << 8);
          goto LAB_10132ba64;
        }
        if (bVar13 == 4) {
          if ((long *)0x2 < plVar2) {
            plVar2 = (long *)0x3;
          }
          bVar13 = (byte)plVar2;
          goto LAB_10132ba60;
        }
        if (bVar13 == 0xc) {
          if (lStack_80 == 0xc) {
            if (*plVar5 != 0x7261546572616873 || (int)plVar5[1] != 0x73746567) goto LAB_10132b9d4;
            uStack_b0 = (undefined *)CONCAT62(uStack_b0._2_6_,0x200);
          }
          else if (lStack_80 == 0xf) {
            if (*plVar5 != 0x7265766f63736964 || *(long *)((long)plVar5 + 7) != 0x7974696c69626172)
            goto LAB_10132b9d4;
            uStack_b0 = (undefined *)CONCAT62(uStack_b0._2_6_,0x100);
          }
          else if ((lStack_80 == 0xe) &&
                  (*plVar5 == 0x6c5065746f6d6572 &&
                   *(long *)((long)plVar5 + 6) == 0x64496e6967756c50)) {
            uStack_b0 = (undefined *)((ulong)uStack_b0._2_6_ << 0x10);
          }
          else {
LAB_10132b9d4:
            uStack_b0 = (undefined *)CONCAT62(uStack_b0._2_6_,0x300);
          }
joined_r0x00010132b9a0:
          if (plVar2 != (long *)0x0) {
            _free(plVar5);
          }
        }
        else {
LAB_10132bc08:
          pbStack_a8 = (byte *)FUN_108855b04(&bStack_98,auStack_71,&UNK_10b211f80);
          uStack_b0 = (undefined *)CONCAT71(uStack_b0._1_7_,1);
        }
      }
      else {
        if (bVar13 == 0xd) {
          if (plVar5 == (long *)0xc) {
            if (*plVar2 != 0x7261546572616873 || (int)plVar2[1] != 0x73746567) goto LAB_10132ba58;
            bVar13 = 2;
          }
          else if (plVar5 == (long *)0xf) {
            if (*plVar2 != 0x7265766f63736964 || *(long *)((long)plVar2 + 7) != 0x7974696c69626172)
            goto LAB_10132ba58;
            bVar13 = 1;
          }
          else if ((plVar5 == (long *)0xe) &&
                  (*plVar2 == 0x6c5065746f6d6572 &&
                   *(long *)((long)plVar2 + 6) == 0x64496e6967756c50)) {
            bVar13 = 0;
          }
          else {
LAB_10132ba58:
            bVar13 = 3;
          }
          goto LAB_10132ba60;
        }
        if (bVar13 == 0xe) {
          func_0x000100bddbf8(&uStack_b0,plVar5);
          goto joined_r0x00010132b9a0;
        }
        if (bVar13 != 0xf) goto LAB_10132bc08;
        func_0x000100bddbf8(&uStack_b0,plVar2,plVar5);
LAB_10132ba64:
        FUN_100e077ec(&bStack_98);
      }
      if (((ulong)uStack_b0 & 1) != 0) {
LAB_10132bd74:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_a8;
LAB_10132bd98:
        lStack_d0 = lVar16 + 1;
        bVar4 = true;
        pbStack_e8 = pbVar18;
        puStack_c8 = puStack_128;
        pbStack_c0 = pbStack_130;
        goto joined_r0x00010132bdb4;
      }
      bVar13 = (byte)pbStack_110;
      if (uStack_b0._1_1_ < 2) {
        if (uStack_b0._1_1_ == 0) {
          if (puVar22 != (undefined *)0x8000000000000000) {
            lStack_d0 = lVar16 + 1;
            pbStack_c0 = pbStack_130;
            puStack_c8 = puStack_128;
            uStack_b0 = &UNK_108cc0df0;
            pbStack_a8 = (byte *)0xe;
            bStack_98 = (byte)&uStack_b0;
            bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
            uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pbStack_e8 = pbVar18;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
LAB_10132c2e4:
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar12;
            bVar4 = true;
            goto joined_r0x00010132bdb4;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar13 == 0x16) {
            lStack_d0 = lVar16 + 1;
            pbStack_c0 = pbStack_130;
            puStack_c8 = puStack_128;
            pbStack_e8 = pbVar18;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10132c378;
          }
          uVar12 = *puVar21;
          puVar15[1] = puVar21[1];
          *puVar15 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
          bStack_98 = bVar13;
          puVar22 = (undefined *)0x0;
          FUN_1004b62d4(&uStack_b0,&bStack_98);
          if (uStack_b0 == (undefined *)0x8000000000000000) {
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_a8;
            goto LAB_10132bd98;
          }
          pbStack_138 = pbStack_a8;
          lStack_140 = lStack_a0;
          puVar22 = uStack_b0;
        }
        else {
          if (cVar6 != '\x02') {
            lStack_d0 = lVar16 + 1;
            pbStack_c0 = pbStack_130;
            puStack_c8 = puStack_128;
            uStack_b0 = &UNK_108cb693f;
            pbStack_a8 = (byte *)0xf;
            bStack_98 = (byte)&uStack_b0;
            bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
            uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
            uStack_90 = 0xa0;
            uStack_8f = 0x100c7b3;
            pbStack_e8 = pbVar18;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
            goto LAB_10132c2e4;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar13 == 0x16) goto LAB_10132c11c;
          uVar12 = *puVar21;
          puVar15[1] = puVar21[1];
          *puVar15 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
          bStack_98 = bVar13;
          func_0x0001013a5aa0(&uStack_b0,&bStack_98);
          if ((char)uStack_b0 == '\x01') goto LAB_10132bd74;
          cVar6 = uStack_b0._1_1_;
        }
      }
      else if (uStack_b0._1_1_ == 2) {
        if (puStack_118 != (undefined *)0x8000000000000000) {
          lStack_d0 = lVar16 + 1;
          pbStack_c0 = pbStack_130;
          puStack_c8 = puStack_128;
          uStack_b0 = &UNK_108cc0dfe;
          pbStack_a8 = (byte *)0xc;
          bStack_98 = (byte)&uStack_b0;
          bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
          uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
          uStack_90 = 0xa0;
          uStack_8f = 0x100c7b3;
          pbStack_e8 = pbVar18;
          uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_98);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar12;
          bVar4 = true;
          goto joined_r0x00010132c1bc;
        }
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar13 == 0x16) {
          lStack_d0 = lVar16 + 1;
          pbStack_c0 = pbStack_130;
          puStack_c8 = puStack_128;
          pbStack_e8 = pbVar18;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10132c378;
        }
        uVar12 = *puVar21;
        puVar15[1] = puVar21[1];
        *puVar15 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar21 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
        bStack_98 = bVar13;
        FUN_100619ba4(&uStack_b0,&bStack_98);
        puStack_128 = uStack_b0;
        if (uStack_b0 == (undefined *)0x8000000000000000) {
          lStack_d0 = lVar16 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_a8;
          bVar4 = true;
          pbStack_e8 = pbVar18;
          goto LAB_10132c1cc;
        }
        pbStack_130 = pbStack_a8;
        unaff_x23 = lStack_a0;
        puStack_118 = puStack_128;
      }
      else {
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar13 == 0x16) {
LAB_10132c11c:
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          lStack_d0 = lVar16 + 1;
          pbStack_c0 = pbStack_130;
          puStack_c8 = puStack_128;
          pbStack_e8 = pbVar18;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10132c378:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10132c37c);
          (*pcVar10)();
        }
        uVar12 = *puVar21;
        puVar15[1] = puVar21[1];
        *puVar15 = uVar12;
        uVar12 = *(undefined8 *)((long)puVar21 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar12;
        bStack_98 = bVar13;
        FUN_100e077ec(&bStack_98);
      }
      lVar16 = lVar16 + 1;
      lVar17 = (lVar14 - 0x40U >> 6) + 1;
      pbVar19 = pbVar20;
      pbVar1 = pbVar18;
    } while (pbVar18 != pbVar20);
    pbStack_c0 = pbStack_130;
    puStack_c8 = puStack_128;
    pbStack_e8 = pbVar19;
    lStack_d0 = lVar17;
    if (puVar22 == (undefined *)0x8000000000000000) goto LAB_10132bdf8;
    if (cVar6 == '\x02') {
      uStack_b0 = &UNK_108cb693f;
      pbStack_a8 = (byte *)0xf;
      bStack_98 = (byte)&uStack_b0;
      bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
      uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
      uStack_90 = 0xa0;
      uStack_8f = 0x100c7b3;
      uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
    }
    else {
      if (puStack_118 != (undefined *)0x8000000000000000) {
        *param_1 = puVar22;
        param_1[1] = pbStack_138;
        param_1[2] = lStack_140;
        param_1[3] = puStack_118;
        param_1[4] = pbStack_130;
        param_1[5] = unaff_x23;
        *(char *)(param_1 + 6) = cVar6;
        FUN_100d34830(&pbStack_f0);
        if (pbVar20 != pbVar19) {
          bStack_98 = (byte)lVar17;
          bStack_97 = (byte)((ulong)lVar17 >> 8);
          uStack_96 = (undefined6)((ulong)lVar17 >> 0x10);
          uVar12 = FUN_1087e422c(((ulong)((long)pbVar20 - (long)pbVar19) >> 6) + lVar17,&bStack_98,
                                 &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar12;
          if (puVar22 != (undefined *)0x0) {
            _free(pbStack_138);
          }
          if (unaff_x23 != 0) {
            pbVar20 = pbStack_130 + 8;
            do {
              if (*(long *)(pbVar20 + -8) != 0) {
                _free(*(undefined8 *)pbVar20);
              }
              pbVar20 = pbVar20 + 0x20;
              unaff_x23 = unaff_x23 + -1;
            } while (unaff_x23 != 0);
          }
          if (puStack_118 != (undefined *)0x0) {
            _free(pbStack_130);
          }
        }
        goto LAB_10132c1fc;
      }
      uStack_b0 = &UNK_108cc0dfe;
      pbStack_a8 = (byte *)0xc;
      bStack_98 = (byte)&uStack_b0;
      bStack_97 = (byte)((ulong)&uStack_b0 >> 8);
      uStack_96 = (undefined6)((ulong)&uStack_b0 >> 0x10);
      uStack_90 = 0xa0;
      uStack_8f = 0x100c7b3;
      uVar12 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_98);
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar12;
    if (puVar22 != (undefined *)0x0) {
      _free(pbStack_138);
    }
    bVar4 = false;
  }
joined_r0x00010132bdb4:
  if (puStack_118 != (undefined *)0x8000000000000000) {
joined_r0x00010132c1bc:
    if (unaff_x23 != 0) {
      pbVar20 = pbStack_130 + 8;
      do {
        if (*(long *)(pbVar20 + -8) != 0) {
          _free(*(undefined8 *)pbVar20);
        }
        pbVar20 = pbVar20 + 0x20;
        unaff_x23 = unaff_x23 + -1;
      } while (unaff_x23 != 0);
    }
    if (puStack_118 != (undefined *)0x0) {
      _free(pbStack_130);
    }
  }
LAB_10132c1cc:
  if ((bVar4) && (((ulong)puVar22 & 0x7fffffffffffffff) != 0)) {
    _free(pbStack_138);
  }
  FUN_100d34830(&pbStack_f0);
  if ((byte)pbStack_110 != '\x16') {
    FUN_100e077ec(&pbStack_110);
  }
LAB_10132c1fc:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

