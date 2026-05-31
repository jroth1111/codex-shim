
/* WARNING: Type propagation algorithm not settling */

void FUN_10139e1cc(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  bool bVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *unaff_x22;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte *pbStack_118;
  undefined *puStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined *puStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined *puStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  byte bStack_87;
  undefined6 uStack_86;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    puVar22 = *(undefined **)(param_2 + 8);
    pbVar20 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar20 + lVar13 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar19 = pbVar20;
    pbStack_f0 = pbVar20;
    puStack_e0 = puVar22;
    pbStack_d8 = pbVar1;
    if (lVar13 == 0) {
LAB_10139e800:
      pbStack_e8 = pbVar19;
      pbVar18 = (byte *)FUN_1087e422c(0,&UNK_10b231708,&UNK_10b20a590);
LAB_10139e81c:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar18;
LAB_10139e828:
      lVar13 = ((ulong)((long)pbVar1 - (long)pbVar19) >> 5) + 1;
      while (lVar13 = lVar13 + -1, pbVar11 = pbVar20, puVar6 = puVar22, lVar13 != 0) {
        FUN_100e077ec(pbVar19);
        pbVar19 = pbVar19 + 0x20;
      }
    }
    else {
      pbVar19 = pbVar20 + 0x20;
      if (*pbVar20 == 0x16) goto LAB_10139e800;
      uVar10 = *(undefined8 *)(pbVar20 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar20 + 9);
      bStack_87 = (byte)uVar10;
      uStack_86 = (undefined6)((ulong)uVar10 >> 8);
      uStack_80 = (undefined1)((ulong)uVar10 >> 0x38);
      lStack_70 = *(long *)(pbVar20 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar20 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar19;
      bStack_88 = *pbVar20;
      FUN_1004b60cc(&puStack_a0,&bStack_88);
      uVar10 = uStack_90;
      pbVar18 = pbStack_98;
      puVar24 = puStack_a0;
      if (puStack_a0 == (undefined *)0x8000000000000001) goto LAB_10139e81c;
      if (lVar13 == 1) {
LAB_10139e8c8:
        pbVar9 = (byte *)FUN_1087e422c(1,&UNK_10b231708,&UNK_10b20a590);
LAB_10139e8e4:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar9;
LAB_10139e8f0:
        if (((ulong)puVar24 & 0x7fffffffffffffff) != 0) {
          _free(pbVar18);
        }
        goto LAB_10139e828;
      }
      pbVar19 = pbVar20 + 0x40;
      pbStack_e8 = pbVar19;
      if (pbVar20[0x20] == 0x16) goto LAB_10139e8c8;
      uVar25 = *(undefined8 *)(pbVar20 + 0x21);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar20 + 0x29);
      bStack_87 = (byte)uVar25;
      uStack_86 = (undefined6)((ulong)uVar25 >> 8);
      uStack_80 = (undefined1)((ulong)uVar25 >> 0x38);
      lStack_70 = *(long *)(pbVar20 + 0x38);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar20 + 0x30);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x30) >> 8);
      pbStack_d0 = (byte *)0x2;
      bStack_88 = pbVar20[0x20];
      FUN_1004b62d4(&puStack_a0,&bStack_88);
      uVar25 = uStack_90;
      pbVar9 = pbStack_98;
      puVar23 = puStack_a0;
      if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_10139e8e4;
      if (lVar13 == 2) {
LAB_10139ec3c:
        pbVar11 = (byte *)FUN_1087e422c(2,&UNK_10b231708,&UNK_10b20a590);
LAB_10139ec54:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar11;
        if (puVar23 != (undefined *)0x0) {
          _free(pbVar9);
        }
        goto LAB_10139e8f0;
      }
      pbVar19 = pbVar20 + 0x60;
      pbStack_e8 = pbVar19;
      if (pbVar20[0x40] == 0x16) goto LAB_10139ec3c;
      uVar26 = *(undefined8 *)(pbVar20 + 0x41);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar20 + 0x49);
      bStack_87 = (byte)uVar26;
      uStack_86 = (undefined6)((ulong)uVar26 >> 8);
      uStack_80 = (undefined1)((ulong)uVar26 >> 0x38);
      lStack_70 = *(long *)(pbVar20 + 0x58);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar20 + 0x50);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x50) >> 8);
      pbStack_d0 = (byte *)0x3;
      bStack_88 = pbVar20[0x40];
      FUN_1004b62d4(&puStack_a0,&bStack_88);
      pbVar11 = pbStack_98;
      puVar6 = puStack_a0;
      if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_10139ec54;
      *param_1 = puVar23;
      param_1[1] = pbVar9;
      param_1[2] = uVar25;
      param_1[3] = puStack_a0;
      param_1[4] = pbStack_98;
      param_1[5] = uStack_90;
      param_1[6] = puVar24;
      param_1[7] = pbVar18;
      param_1[8] = uVar10;
      lVar13 = FUN_100fbc738(&pbStack_f0);
      if (lVar13 == 0) goto LAB_10139eb9c;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar13;
      if (((ulong)puVar24 & 0x7fffffffffffffff) != 0) {
        _free(pbVar18);
      }
      if (puVar23 != (undefined *)0x0) {
        _free(pbVar9);
      }
    }
    if (puVar6 != (undefined *)0x0) {
      _free(pbVar11);
    }
    goto LAB_10139eb9c;
  }
  if (bVar4 != 0x15) {
    uVar10 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20c0e0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
    return;
  }
  uStack_c0 = *(undefined8 *)(param_2 + 8);
  pbStack_d0 = *(byte **)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar19 = pbStack_d0 + lVar13;
  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
  lStack_b0 = 0;
  puStack_110 = (undefined *)0x0;
  pbStack_b8 = pbVar19;
  if (*(long *)(param_2 + 0x18) == 0) {
    bVar8 = true;
    puVar22 = (undefined *)0x8000000000000001;
    puVar24 = (undefined *)0x8000000000000000;
    pbStack_108 = unaff_x22;
    pbStack_c8 = pbStack_d0;
LAB_10139e93c:
    puStack_a0 = &UNK_108caaace;
    pbStack_98 = (byte *)0x6;
    bStack_88 = (byte)&puStack_a0;
    bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    uVar10 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
    puVar23 = (undefined *)0x0;
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
    bVar15 = true;
  }
  else {
    lVar16 = 0;
    puVar21 = (undefined8 *)((ulong)&bStack_88 | 1);
    puVar14 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    puVar22 = (undefined *)0x8000000000000001;
    puVar23 = (undefined *)0x8000000000000000;
    puVar24 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_d0;
    pbStack_c8 = pbStack_d0;
    do {
      pbVar18 = pbVar1 + 0x40;
      bVar3 = *pbVar1;
      lVar17 = lVar16;
      pbVar20 = pbVar18;
      if (bVar3 == 0x16) break;
      uVar10 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar21 + 0xf) = uVar10;
      uVar10 = *(undefined8 *)(pbVar1 + 1);
      puVar21[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar21 = uVar10;
      pbStack_e8 = *(byte **)(pbVar1 + 0x28);
      pbStack_f0 = *(byte **)(pbVar1 + 0x20);
      pbStack_d8 = *(byte **)(pbVar1 + 0x38);
      puStack_e0 = *(undefined **)(pbVar1 + 0x30);
      plVar2 = (long *)CONCAT71(uStack_7f,uStack_80);
      plVar5 = (long *)CONCAT71(uStack_77,uStack_78);
      bStack_88 = bVar3;
      if (bVar3 < 0xd) {
        if (bVar3 == 1) {
          uVar12 = (uint)bStack_87;
          if (2 < uVar12) {
            uVar12 = 3;
          }
LAB_10139e634:
          FUN_100e077ec(&bStack_88);
          goto LAB_10139e63c;
        }
        if (bVar3 == 4) {
          if ((long *)0x2 < plVar2) {
            plVar2 = (long *)0x3;
          }
          uVar12 = (uint)plVar2;
          goto LAB_10139e634;
        }
        if (bVar3 == 0xc) {
          if (lStack_70 == 3) {
            if ((short)*plVar5 != 0x7275 || *(char *)((long)plVar5 + 2) != 'i') goto LAB_10139e5b4;
            uVar12 = 2;
          }
          else if (lStack_70 == 6) {
            if ((int)*plVar5 != 0x76726573 || *(short *)((long)plVar5 + 4) != 0x7265)
            goto LAB_10139e5b4;
            uVar12 = 1;
          }
          else if ((lStack_70 == 8) && (*plVar5 == 0x6449646165726874)) {
            uVar12 = 0;
          }
          else {
LAB_10139e5b4:
            uVar12 = 3;
          }
          goto joined_r0x00010139e7c0;
        }
LAB_10139eeac:
        lStack_b0 = lVar16 + 1;
        pbStack_c8 = pbVar18;
        uVar10 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20e000);
        goto LAB_10139eecc;
      }
      if (bVar3 == 0xd) {
        if (plVar5 == (long *)0x3) {
          if ((short)*plVar2 != 0x7275 || *(char *)((long)plVar2 + 2) != 'i') goto LAB_10139e630;
LAB_10139e7b4:
          uVar12 = 2;
        }
        else if (plVar5 == (long *)0x6) {
          if ((int)*plVar2 != 0x76726573 || *(short *)((long)plVar2 + 4) != 0x7265)
          goto LAB_10139e630;
LAB_10139e60c:
          uVar12 = 1;
        }
        else if ((plVar5 == (long *)0x8) && (*plVar2 == 0x6449646165726874)) {
LAB_10139e490:
          uVar12 = 0;
        }
        else {
LAB_10139e630:
          uVar12 = 3;
        }
        goto LAB_10139e634;
      }
      if (bVar3 != 0xe) {
        if (bVar3 != 0xf) goto LAB_10139eeac;
        if (plVar5 == (long *)0x3) {
          if ((((char)*plVar2 == 'u') && (*(char *)((long)plVar2 + 1) == 'r')) &&
             (*(char *)((long)plVar2 + 2) == 'i')) goto LAB_10139e7b4;
        }
        else if (plVar5 == (long *)0x6) {
          if (((((char)*plVar2 == 's') && (*(char *)((long)plVar2 + 1) == 'e')) &&
              ((*(char *)((long)plVar2 + 2) == 'r' &&
               ((*(char *)((long)plVar2 + 3) == 'v' && (*(char *)((long)plVar2 + 4) == 'e')))))) &&
             (*(char *)((long)plVar2 + 5) == 'r')) goto LAB_10139e60c;
        }
        else if (((((plVar5 == (long *)0x8) && ((char)*plVar2 == 't')) &&
                  (*(char *)((long)plVar2 + 1) == 'h')) &&
                 ((*(char *)((long)plVar2 + 2) == 'r' && (*(char *)((long)plVar2 + 3) == 'e')))) &&
                (((*(char *)((long)plVar2 + 4) == 'a' &&
                  ((*(char *)((long)plVar2 + 5) == 'd' && (*(char *)((long)plVar2 + 6) == 'I')))) &&
                 (*(char *)((long)plVar2 + 7) == 'd')))) goto LAB_10139e490;
        goto LAB_10139e630;
      }
      if (lStack_70 == 3) {
        if ((((char)*plVar5 != 'u') || (*(char *)((long)plVar5 + 1) != 'r')) ||
           (*(char *)((long)plVar5 + 2) != 'i')) goto LAB_10139e58c;
        uVar12 = 2;
      }
      else if (lStack_70 == 6) {
        if (((((char)*plVar5 != 's') || (*(char *)((long)plVar5 + 1) != 'e')) ||
            ((*(char *)((long)plVar5 + 2) != 'r' ||
             ((*(char *)((long)plVar5 + 3) != 'v' || (*(char *)((long)plVar5 + 4) != 'e')))))) ||
           (*(char *)((long)plVar5 + 5) != 'r')) goto LAB_10139e58c;
        uVar12 = 1;
      }
      else if ((((((lStack_70 == 8) && ((char)*plVar5 == 't')) &&
                 (*(char *)((long)plVar5 + 1) == 'h')) &&
                ((*(char *)((long)plVar5 + 2) == 'r' && (*(char *)((long)plVar5 + 3) == 'e')))) &&
               (*(char *)((long)plVar5 + 4) == 'a')) &&
              (((*(char *)((long)plVar5 + 5) == 'd' && (*(char *)((long)plVar5 + 6) == 'I')) &&
               (*(char *)((long)plVar5 + 7) == 'd')))) {
        uVar12 = 0;
      }
      else {
LAB_10139e58c:
        uVar12 = 3;
      }
joined_r0x00010139e7c0:
      if (plVar2 != (long *)0x0) {
        _free();
      }
LAB_10139e63c:
      uVar12 = uVar12 & 0xff;
      bVar3 = (byte)pbStack_f0;
      if (uVar12 < 2) {
        if (uVar12 != 0) {
          if (puVar23 == (undefined *)0x8000000000000000) {
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar3 == 0x16) {
              lStack_b0 = lVar16 + 1;
              pbStack_c8 = pbVar18;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10139eea8;
            }
            uVar10 = *puVar14;
            puVar21[1] = puVar14[1];
            *puVar21 = uVar10;
            uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)((long)puVar21 + 0xf) = uVar10;
            bStack_88 = bVar3;
            FUN_1004b62d4(&puStack_a0,&bStack_88);
            if (puStack_a0 != (undefined *)0x8000000000000000) {
              pbStack_100 = pbStack_98;
              uStack_138 = uStack_90;
              puVar23 = puStack_a0;
              goto LAB_10139e274;
            }
            lStack_b0 = lVar16 + 1;
            puVar23 = (undefined *)0x0;
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_98;
            pbStack_c8 = pbVar18;
          }
          else {
            lStack_b0 = lVar16 + 1;
            puStack_a0 = &UNK_108caaace;
            pbStack_98 = (byte *)0x6;
            bStack_88 = (byte)&puStack_a0;
            bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar18;
            uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
LAB_10139eecc:
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar10;
          }
LAB_10139eb20:
          bVar15 = true;
          bVar8 = true;
          goto joined_r0x00010139eb34;
        }
        if (puVar22 != (undefined *)0x8000000000000001) {
          lStack_b0 = lVar16 + 1;
          puStack_a0 = &UNK_108c982f8;
          pbStack_98 = (byte *)0x8;
          bStack_88 = (byte)&puStack_a0;
          bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
          uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
          uStack_80 = 0xa0;
          uStack_7f = 0x100c7b3;
          pbStack_c8 = pbVar18;
          uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          goto LAB_10139eecc;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar3 == 0x16) {
          lStack_b0 = lVar16 + 1;
          pbStack_c8 = pbVar18;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10139eea8;
        }
        uVar10 = *puVar14;
        puVar21[1] = puVar14[1];
        *puVar21 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar21 + 0xf) = uVar10;
        bStack_88 = bVar3;
        FUN_1004b60cc(&puStack_a0,&bStack_88);
        if (puStack_a0 == (undefined *)0x8000000000000001) {
          lStack_b0 = lVar16 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_98;
          puVar22 = (undefined *)0x8000000000000001;
          pbStack_c8 = pbVar18;
          goto LAB_10139eb20;
        }
        pbStack_108 = pbStack_98;
        uStack_130 = uStack_90;
        puVar22 = puStack_a0;
      }
      else if (uVar12 == 2) {
        if (puVar24 != (undefined *)0x8000000000000000) {
          lStack_b0 = lVar16 + 1;
          puStack_a0 = &UNK_108cb4cd2;
          pbStack_98 = (byte *)0x3;
          bStack_88 = (byte)&puStack_a0;
          bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
          uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
          uStack_80 = 0xa0;
          uStack_7f = 0x100c7b3;
          pbStack_c8 = pbVar18;
          uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar10;
          bVar8 = true;
          bVar15 = true;
          goto joined_r0x00010139edb8;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar3 == 0x16) {
          lStack_b0 = lVar16 + 1;
          pbStack_c8 = pbVar18;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10139eea8;
        }
        uVar10 = *puVar14;
        puVar21[1] = puVar14[1];
        *puVar21 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar21 + 0xf) = uVar10;
        bStack_88 = bVar3;
        FUN_1004b62d4(&puStack_a0,&bStack_88);
        if (puStack_a0 == (undefined *)0x8000000000000000) {
          lStack_b0 = lVar16 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_98;
          bVar8 = true;
          bVar15 = true;
          pbStack_c8 = pbVar18;
          goto LAB_10139eb44;
        }
        pbStack_118 = pbStack_98;
        uStack_140 = uStack_90;
        puVar24 = puStack_a0;
      }
      else {
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar3 == 0x16) {
          lStack_b0 = lVar16 + 1;
          pbStack_c8 = pbVar18;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10139eea8:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10139eeac);
          (*pcVar7)();
        }
        uVar10 = *puVar14;
        puVar21[1] = puVar14[1];
        *puVar21 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar21 + 0xf) = uVar10;
        bStack_88 = bVar3;
        FUN_100e077ec(&bStack_88);
      }
LAB_10139e274:
      lVar16 = lVar16 + 1;
      lVar17 = (lVar13 - 0x40U >> 6) + 1;
      pbVar20 = pbVar19;
      pbVar1 = pbVar18;
    } while (pbVar18 != pbVar19);
    bVar8 = puVar22 == (undefined *)0x8000000000000001;
    puStack_110 = (undefined *)0x8000000000000000;
    if (!bVar8) {
      puStack_110 = puVar22;
    }
    pbStack_c8 = pbVar20;
    lStack_b0 = lVar17;
    if (puVar23 == (undefined *)0x8000000000000000) goto LAB_10139e93c;
    if (puVar24 != (undefined *)0x8000000000000000) {
      *param_1 = puVar23;
      param_1[1] = pbStack_100;
      param_1[2] = uStack_138;
      param_1[3] = puVar24;
      param_1[4] = pbStack_118;
      param_1[5] = uStack_140;
      param_1[6] = puStack_110;
      param_1[7] = pbStack_108;
      param_1[8] = uStack_130;
      FUN_100d34830(&pbStack_d0);
      if (pbVar19 != pbVar20) {
        bStack_88 = (byte)lVar17;
        bStack_87 = (byte)((ulong)lVar17 >> 8);
        uStack_86 = (undefined6)((ulong)lVar17 >> 0x10);
        uVar10 = FUN_1087e422c(((ulong)((long)pbVar19 - (long)pbVar20) >> 6) + lVar17,&bStack_88,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar10;
        if (((ulong)puStack_110 & 0x7fffffffffffffff) != 0) {
          _free(pbStack_108);
        }
        if (puVar23 != (undefined *)0x0) {
          _free(pbStack_100);
        }
        if (puVar24 != (undefined *)0x0) {
          _free(pbStack_118);
        }
      }
      goto LAB_10139eb9c;
    }
    puStack_a0 = &UNK_108cb4cd2;
    pbStack_98 = (byte *)0x3;
    bStack_88 = (byte)&puStack_a0;
    bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    uVar10 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
    puVar24 = (undefined *)0x8000000000000000;
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
    if (puVar23 == (undefined *)0x0) {
      bVar15 = false;
    }
    else {
      _free(pbStack_100);
      bVar15 = false;
    }
  }
  if (((ulong)puStack_110 & 0x7fffffffffffffff) != 0) {
    _free(pbStack_108);
  }
joined_r0x00010139eb34:
  if (puVar24 != (undefined *)0x8000000000000000) {
joined_r0x00010139edb8:
    if (puVar24 != (undefined *)0x0) {
      _free(pbStack_118);
    }
  }
LAB_10139eb44:
  if ((((ulong)puVar23 & 0x7fffffffffffffff) != 0) && (bVar15)) {
    _free(pbStack_100);
  }
  bVar15 = false;
  if (puVar22 != (undefined *)0x8000000000000001) {
    bVar15 = bVar8;
  }
  if ((bVar15) && (((ulong)puVar22 & 0x7fffffffffffffff) != 0)) {
    _free(pbStack_108);
  }
  FUN_100d34830(&pbStack_d0);
  if ((byte)pbStack_f0 != '\x16') {
    FUN_100e077ec(&pbStack_f0);
  }
LAB_10139eb9c:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

