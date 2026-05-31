
/* WARNING: Type propagation algorithm not settling */

void FUN_1012ee530(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  byte *pbVar6;
  undefined *puVar7;
  byte bVar8;
  code *pcVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
  byte bVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  byte *unaff_x21;
  byte *pbVar16;
  byte *pbVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uStack_120;
  undefined8 uStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
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
    puVar18 = *(undefined **)(param_2 + 8);
    pbVar17 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar17 + lVar12 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar10 = pbVar17;
    pbStack_f0 = pbVar17;
    puStack_e0 = puVar18;
    pbStack_d8 = pbVar1;
    if (lVar12 == 0) {
LAB_1012eea38:
      pbStack_e8 = pbVar10;
      pbVar16 = (byte *)FUN_1087e422c(0,&UNK_10b22f518,&UNK_10b20a590);
LAB_1012eea54:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar16;
LAB_1012eea5c:
      lVar12 = ((ulong)((long)pbVar1 - (long)pbVar10) >> 5) + 1;
      while (lVar12 = lVar12 + -1, pbVar6 = pbVar17, puVar7 = puVar18, lVar12 != 0) {
        FUN_100e077ec(pbVar10);
        pbVar10 = pbVar10 + 0x20;
      }
    }
    else {
      pbVar10 = pbVar17 + 0x20;
      if (*pbVar17 == 0x16) goto LAB_1012eea38;
      uVar11 = *(undefined8 *)(pbVar17 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar17 + 9);
      bStack_8f = (byte)uVar11;
      uStack_8e = (undefined6)((ulong)uVar11 >> 8);
      uStack_88 = (undefined1)((ulong)uVar11 >> 0x38);
      lStack_78 = *(long *)(pbVar17 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar17 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar17 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar10;
      bStack_90 = *pbVar17;
      FUN_1014a868c(&uStack_a8,&bStack_90);
      uVar11 = uStack_98;
      pbVar16 = pbStack_a0;
      puVar19 = uStack_a8;
      if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_1012eea54;
      if (lVar12 == 1) {
LAB_1012eeafc:
        pbStack_f8 = (byte *)FUN_1087e422c(1,&UNK_10b22f518,&UNK_10b20a590);
LAB_1012eeb18:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_f8;
LAB_1012eeb24:
        if (puVar19 != (undefined *)0x0) {
          _free(pbVar16);
        }
        goto LAB_1012eea5c;
      }
      pbVar10 = pbVar17 + 0x40;
      pbStack_e8 = pbVar10;
      if (pbVar17[0x20] == 0x16) goto LAB_1012eeafc;
      uVar22 = *(undefined8 *)(pbVar17 + 0x21);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar17 + 0x29);
      bStack_8f = (byte)uVar22;
      uStack_8e = (undefined6)((ulong)uVar22 >> 8);
      uStack_88 = (undefined1)((ulong)uVar22 >> 0x38);
      lStack_78 = *(long *)(pbVar17 + 0x38);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar17 + 0x30);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar17 + 0x30) >> 8);
      pbStack_d0 = (byte *)0x2;
      bStack_90 = pbVar17[0x20];
      FUN_1014a868c(&uStack_a8,&bStack_90);
      pbVar6 = pbStack_a0;
      puVar7 = uStack_a8;
      pbStack_f8 = pbStack_a0;
      if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_1012eeb18;
      if (lVar12 != 2) {
        pbVar10 = pbVar17 + 0x60;
        bVar4 = pbVar17[0x40];
        pbStack_e8 = pbVar10;
        if (bVar4 == 0x16) goto LAB_1012eedb8;
        uVar22 = *(undefined8 *)(pbVar17 + 0x41);
        uStack_87 = (undefined7)*(undefined8 *)(pbVar17 + 0x49);
        bStack_8f = (byte)uVar22;
        bVar13 = bStack_8f;
        uStack_8e = (undefined6)((ulong)uVar22 >> 8);
        uStack_88 = (undefined1)((ulong)uVar22 >> 0x38);
        lStack_78 = *(long *)(pbVar17 + 0x58);
        uStack_80 = (undefined1)*(undefined8 *)(pbVar17 + 0x50);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar17 + 0x50) >> 8);
        pbStack_d0 = (byte *)0x3;
        bStack_90 = bVar4;
        if (bVar4 == 0) {
          FUN_100e077ec(&bStack_90);
          goto LAB_1012eedfc;
        }
        uVar11 = FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20a560);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        if (puVar7 != (undefined *)0x0) {
          _free(pbVar6);
        }
        goto LAB_1012eeb24;
      }
LAB_1012eedb8:
      bVar13 = 0;
LAB_1012eedfc:
      *param_1 = puVar19;
      param_1[1] = pbVar16;
      param_1[2] = uVar11;
      param_1[3] = puVar7;
      param_1[4] = pbVar6;
      param_1[5] = uStack_98;
      *(byte *)(param_1 + 6) = bVar13;
      lVar12 = FUN_100fbc738(&pbStack_f0);
      if (lVar12 == 0) goto LAB_1012eec00;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar12;
      if (puVar19 != (undefined *)0x0) {
        _free(pbVar16);
      }
    }
    if (puVar7 != (undefined *)0x0) {
      _free(pbVar6);
    }
    goto LAB_1012eec00;
  }
  if (bVar3 != 0x15) {
    uVar11 = FUN_108855b04(param_2,auStack_69,&UNK_10b20c120);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
    return;
  }
  uStack_c0 = *(undefined8 *)(param_2 + 8);
  pbStack_d0 = *(byte **)(param_2 + 0x10);
  lVar12 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar10 = pbStack_d0 + lVar12;
  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
  lStack_b0 = 0;
  pbStack_b8 = pbVar10;
  if (*(long *)(param_2 + 0x18) == 0) {
    puVar18 = (undefined *)0x0;
    pbStack_108 = unaff_x21;
    pbStack_c8 = pbStack_d0;
LAB_1012eeb84:
    uStack_a8 = &UNK_108cbc2ba;
    pbStack_a0 = (byte *)0xa;
    bStack_90 = (byte)&uStack_a8;
    bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    puVar19 = (undefined *)0x0;
    pbVar10 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
LAB_1012eebbc:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar10;
    puVar18 = (undefined *)((ulong)puVar18 & 0x7fffffffffffffff);
joined_r0x0001012eeecc:
    if (puVar18 != (undefined *)0x0) {
      _free(pbStack_110);
    }
LAB_1012eebd4:
    puVar19 = (undefined *)((ulong)puVar19 & 0x7fffffffffffffff);
  }
  else {
    lVar20 = 0;
    puVar14 = (undefined8 *)((ulong)&bStack_90 | 1);
    puVar15 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    bVar4 = 2;
    puVar19 = (undefined *)0x8000000000000000;
    puVar18 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_d0;
    pbStack_c8 = pbStack_d0;
    do {
      pbVar16 = pbVar1 + 0x40;
      bVar13 = *pbVar1;
      pbVar17 = pbVar16;
      lVar21 = lVar20;
      if (bVar13 == 0x16) break;
      uVar11 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar14 + 0xf) = uVar11;
      uVar11 = *(undefined8 *)(pbVar1 + 1);
      puVar14[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar14 = uVar11;
      pbStack_e8 = *(byte **)(pbVar1 + 0x28);
      pbStack_f0 = *(byte **)(pbVar1 + 0x20);
      pbStack_d8 = *(byte **)(pbVar1 + 0x38);
      puStack_e0 = *(undefined **)(pbVar1 + 0x30);
      plVar2 = (long *)CONCAT71(uStack_87,uStack_88);
      plVar5 = (long *)CONCAT71(uStack_7f,uStack_80);
      bStack_90 = bVar13;
      if (bVar13 < 0xd) {
        if (bVar13 == 1) {
          bVar13 = bStack_8f;
          if (2 < bStack_8f) {
            bVar13 = 3;
          }
LAB_1012ee848:
          uStack_a8._1_7_ = CONCAT61(uStack_a8._2_6_,bVar13);
          uStack_a8 = (undefined *)((ulong)uStack_a8._1_7_ << 8);
          goto LAB_1012ee84c;
        }
        if (bVar13 == 4) {
          if ((long *)0x2 < plVar2) {
            plVar2 = (long *)0x3;
          }
          bVar13 = (byte)plVar2;
          goto LAB_1012ee848;
        }
        if (bVar13 == 0xc) {
          if (lStack_78 == 9) {
            if (*plVar5 != 0x7669737275636572 || (char)plVar5[1] != 'e') goto LAB_1012ee7c0;
            uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x200);
          }
          else if (lStack_78 == 0xf) {
            if (*plVar5 != 0x74616e6974736564 || *(long *)((long)plVar5 + 7) != 0x687461506e6f6974)
            goto LAB_1012ee7c0;
            uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x100);
          }
          else if ((lStack_78 == 10) &&
                  (*plVar5 == 0x6150656372756f73 && (short)plVar5[1] == 0x6874)) {
            uStack_a8 = (undefined *)((ulong)uStack_a8._2_6_ << 0x10);
          }
          else {
LAB_1012ee7c0:
            uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x300);
          }
joined_r0x0001012ee790:
          if (plVar2 != (long *)0x0) {
            _free(plVar5);
          }
        }
        else {
LAB_1012ee9d8:
          pbStack_a0 = (byte *)FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20f2c0);
          uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
        }
      }
      else {
        if (bVar13 == 0xd) {
          if (plVar5 == (long *)0x9) {
            if (*plVar2 != 0x7669737275636572 || (char)plVar2[1] != 'e') goto LAB_1012ee840;
            bVar13 = 2;
          }
          else if (plVar5 == (long *)0xf) {
            if (*plVar2 != 0x74616e6974736564 || *(long *)((long)plVar2 + 7) != 0x687461506e6f6974)
            goto LAB_1012ee840;
            bVar13 = 1;
          }
          else if ((plVar5 == (long *)0xa) &&
                  (*plVar2 == 0x6150656372756f73 && (short)plVar2[1] == 0x6874)) {
            bVar13 = 0;
          }
          else {
LAB_1012ee840:
            bVar13 = 3;
          }
          goto LAB_1012ee848;
        }
        if (bVar13 == 0xe) {
          func_0x000100b71c58(&uStack_a8,plVar5);
          goto joined_r0x0001012ee790;
        }
        if (bVar13 != 0xf) goto LAB_1012ee9d8;
        func_0x000100b71c58(&uStack_a8,plVar2,plVar5);
LAB_1012ee84c:
        FUN_100e077ec(&bStack_90);
      }
      bVar13 = bStack_8f;
      if (((ulong)uStack_a8 & 1) != 0) {
LAB_1012eeb44:
        lStack_b0 = lVar20 + 1;
        pbVar10 = pbStack_a0;
        pbStack_c8 = pbVar16;
        goto LAB_1012eebbc;
      }
      bVar8 = (byte)pbStack_f0;
      if (uStack_a8._1_1_ < 2) {
        if (uStack_a8._1_1_ == 0) {
          if (puVar19 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar20 + 1;
            uStack_a8 = &UNK_108cbc2ba;
            pbStack_a0 = (byte *)0xa;
            bStack_90 = (byte)&uStack_a8;
            bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_c8 = pbVar16;
            pbVar10 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_1012eebbc;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar8 == 0x16) {
            lStack_b0 = lVar20 + 1;
            pbStack_c8 = pbVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012eefe8;
          }
          uVar11 = *puVar15;
          puVar14[1] = puVar15[1];
          *puVar14 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar11;
          bStack_90 = bVar8;
          FUN_1014a868c(&uStack_a8,&bStack_90);
          if (uStack_a8 == (undefined *)0x8000000000000000) {
            puVar19 = (undefined *)0x0;
            goto LAB_1012eeb44;
          }
          pbStack_108 = pbStack_a0;
          uStack_118 = uStack_98;
          puVar19 = uStack_a8;
        }
        else {
          if (puVar18 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar20 + 1;
            uStack_a8 = &UNK_108cbc2c4;
            pbStack_a0 = (byte *)0xf;
            bStack_90 = (byte)&uStack_a8;
            bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
            uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_c8 = pbVar16;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar11;
            goto joined_r0x0001012eeecc;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar8 == 0x16) {
            lStack_b0 = lVar20 + 1;
            pbStack_c8 = pbVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012eefe8;
          }
          uVar11 = *puVar15;
          puVar14[1] = puVar15[1];
          *puVar14 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar11;
          bStack_90 = bVar8;
          FUN_1014a868c(&uStack_a8,&bStack_90);
          if (uStack_a8 == (undefined *)0x8000000000000000) {
            lStack_b0 = lVar20 + 1;
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_a0;
            pbStack_c8 = pbVar16;
            goto LAB_1012eebd4;
          }
          pbStack_110 = pbStack_a0;
          uStack_120 = uStack_98;
          puVar18 = uStack_a8;
        }
      }
      else if (uStack_a8._1_1_ == 2) {
        if (bVar4 != 2) {
          lStack_b0 = lVar20 + 1;
          uStack_a8 = &UNK_108cbc2d3;
          pbStack_a0 = (byte *)0x9;
          bStack_90 = (byte)&uStack_a8;
          bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
          uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
          uStack_88 = 0xa0;
          uStack_87 = 0x100c7b3;
          pbStack_c8 = pbVar16;
          pbVar10 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
          goto LAB_1012eebbc;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar8 == 0x16) goto LAB_1012eee40;
        uVar11 = *puVar15;
        puVar14[1] = puVar15[1];
        *puVar14 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar11;
        bStack_90 = bVar8;
        if (bVar8 != 0) {
          lStack_b0 = lVar20 + 1;
          pbStack_c8 = pbVar16;
          pbVar10 = (byte *)FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20a560);
          goto LAB_1012eebbc;
        }
        FUN_100e077ec(&bStack_90);
        bVar4 = bVar13;
      }
      else {
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar8 == 0x16) {
LAB_1012eee40:
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          lStack_b0 = lVar20 + 1;
          pbStack_c8 = pbVar16;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012eefe8:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1012eefec);
          (*pcVar9)();
        }
        uVar11 = *puVar15;
        puVar14[1] = puVar15[1];
        *puVar14 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar11;
        bStack_90 = bVar8;
        FUN_100e077ec(&bStack_90);
      }
      lVar20 = lVar20 + 1;
      pbVar17 = pbVar10;
      lVar21 = (lVar12 - 0x40U >> 6) + 1;
      pbVar1 = pbVar16;
    } while (pbVar16 != pbVar10);
    pbStack_c8 = pbVar17;
    lStack_b0 = lVar21;
    if (puVar19 == (undefined *)0x8000000000000000) goto LAB_1012eeb84;
    if (puVar18 != (undefined *)0x8000000000000000) {
      *param_1 = puVar19;
      param_1[1] = pbStack_108;
      param_1[2] = uStack_118;
      param_1[3] = puVar18;
      param_1[4] = pbStack_110;
      param_1[5] = uStack_120;
      *(byte *)(param_1 + 6) = bVar4 & 1;
      FUN_100d34830(&pbStack_d0);
      if (pbVar10 != pbVar17) {
        bStack_90 = (byte)lVar21;
        bStack_8f = (byte)((ulong)lVar21 >> 8);
        uStack_8e = (undefined6)((ulong)lVar21 >> 0x10);
        uVar11 = FUN_1087e422c(((ulong)((long)pbVar10 - (long)pbVar17) >> 6) + lVar21,&bStack_90,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        if (puVar19 != (undefined *)0x0) {
          _free(pbStack_108);
        }
        if (puVar18 != (undefined *)0x0) {
          _free(pbStack_110);
        }
      }
      goto LAB_1012eec00;
    }
    uStack_a8 = &UNK_108cbc2c4;
    pbStack_a0 = (byte *)0xf;
    bStack_90 = (byte)&uStack_a8;
    bStack_8f = (byte)((ulong)&uStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
  }
  if (puVar19 != (undefined *)0x0) {
    _free(pbStack_108);
  }
  FUN_100d34830(&pbStack_d0);
  if ((byte)pbStack_f0 != '\x16') {
    FUN_100e077ec(&pbStack_f0);
  }
LAB_1012eec00:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

