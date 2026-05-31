
/* WARNING: Type propagation algorithm not settling */

void FUN_1012a2f68(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  bool bVar2;
  int *piVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  int *piVar7;
  code *pcVar8;
  bool bVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  byte *unaff_x19;
  undefined8 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte *pbStack_108;
  byte *pbStack_100;
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
  
  bVar6 = *param_2;
  if (bVar6 == 0x14) {
    puVar25 = *(undefined **)(param_2 + 8);
    pbVar17 = *(byte **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar17 + lVar14 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar19 = pbVar17;
    pbStack_f0 = pbVar17;
    puStack_e0 = puVar25;
    pbStack_d8 = pbVar1;
    if (lVar14 == 0) {
LAB_1012a357c:
      pbStack_e8 = pbVar19;
      pbVar16 = (byte *)FUN_1087e422c(0,&UNK_10b22f248,&UNK_10b20a590);
LAB_1012a3598:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar16;
LAB_1012a35a0:
      lVar14 = ((ulong)((long)pbVar1 - (long)pbVar19) >> 5) + 1;
      while (lVar14 = lVar14 + -1, pbVar12 = pbVar17, puVar4 = puVar25, lVar14 != 0) {
        FUN_100e077ec(pbVar19);
        pbVar19 = pbVar19 + 0x20;
      }
    }
    else {
      pbVar19 = pbVar17 + 0x20;
      if (*pbVar17 == 0x16) goto LAB_1012a357c;
      uVar11 = *(undefined8 *)(pbVar17 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar17 + 9);
      bStack_87 = (byte)uVar11;
      uStack_86 = (undefined6)((ulong)uVar11 >> 8);
      uStack_80 = (undefined1)((ulong)uVar11 >> 0x38);
      lStack_70 = *(long *)(pbVar17 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar17 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar17 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar19;
      bStack_88 = *pbVar17;
      FUN_1004b62d4(&puStack_a0,&bStack_88);
      uVar11 = uStack_90;
      pbVar16 = pbStack_98;
      puVar22 = puStack_a0;
      if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_1012a3598;
      if (lVar14 == 1) {
LAB_1012a363c:
        pbVar10 = (byte *)FUN_1087e422c(1,&UNK_10b22f248,&UNK_10b20a590);
LAB_1012a3654:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar10;
LAB_1012a365c:
        if (puVar22 != (undefined *)0x0) {
          _free(pbVar16);
        }
        goto LAB_1012a35a0;
      }
      pbVar19 = pbVar17 + 0x40;
      pbStack_e8 = pbVar19;
      if (pbVar17[0x20] == 0x16) goto LAB_1012a363c;
      uVar26 = *(undefined8 *)(pbVar17 + 0x21);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar17 + 0x29);
      bStack_87 = (byte)uVar26;
      uStack_86 = (undefined6)((ulong)uVar26 >> 8);
      uStack_80 = (undefined1)((ulong)uVar26 >> 0x38);
      lStack_70 = *(long *)(pbVar17 + 0x38);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar17 + 0x30);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar17 + 0x30) >> 8);
      pbStack_d0 = (byte *)0x2;
      bStack_88 = pbVar17[0x20];
      FUN_1004b60cc(&puStack_a0,&bStack_88);
      uVar26 = uStack_90;
      pbVar10 = pbStack_98;
      puVar21 = puStack_a0;
      if (puStack_a0 == (undefined *)0x8000000000000001) goto LAB_1012a3654;
      if (lVar14 == 2) {
LAB_1012a3930:
        pbVar12 = (byte *)FUN_1087e422c(2,&UNK_10b22f248,&UNK_10b20a590);
LAB_1012a3948:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar12;
        if (((ulong)puVar21 & 0x7fffffffffffffff) != 0) {
          _free(pbVar10);
        }
        goto LAB_1012a365c;
      }
      pbVar19 = pbVar17 + 0x60;
      pbStack_e8 = pbVar19;
      if (pbVar17[0x40] == 0x16) goto LAB_1012a3930;
      uVar27 = *(undefined8 *)(pbVar17 + 0x41);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar17 + 0x49);
      bStack_87 = (byte)uVar27;
      uStack_86 = (undefined6)((ulong)uVar27 >> 8);
      uStack_80 = (undefined1)((ulong)uVar27 >> 0x38);
      lStack_70 = *(long *)(pbVar17 + 0x58);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar17 + 0x50);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar17 + 0x50) >> 8);
      pbStack_d0 = (byte *)0x3;
      bStack_88 = pbVar17[0x40];
      FUN_1004b62d4(&puStack_a0,&bStack_88);
      pbVar12 = pbStack_98;
      puVar4 = puStack_a0;
      if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_1012a3948;
      *param_1 = puVar22;
      param_1[1] = pbVar16;
      param_1[2] = uVar11;
      param_1[3] = puStack_a0;
      param_1[4] = pbStack_98;
      param_1[5] = uStack_90;
      param_1[6] = puVar21;
      param_1[7] = pbVar10;
      param_1[8] = uVar26;
      lVar14 = FUN_100fbc738(&pbStack_f0);
      if (lVar14 == 0) goto LAB_1012a380c;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar14;
      if (puVar22 != (undefined *)0x0) {
        _free(pbVar16);
      }
      if (((ulong)puVar21 & 0x7fffffffffffffff) != 0) {
        _free(pbVar10);
      }
    }
    if (puVar4 != (undefined *)0x0) {
      _free(pbVar12);
    }
    goto LAB_1012a380c;
  }
  if (bVar6 != 0x15) {
    uVar11 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20c3c0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
    return;
  }
  uStack_c0 = *(undefined8 *)(param_2 + 8);
  pbStack_d0 = *(byte **)(param_2 + 0x10);
  lVar14 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar19 = pbStack_d0 + lVar14;
  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
  lStack_b0 = 0;
  pbStack_b8 = pbVar19;
  if (*(long *)(param_2 + 0x18) == 0) {
    puVar22 = (undefined *)0x8000000000000001;
    puVar25 = (undefined *)0x0;
    pbStack_100 = unaff_x19;
    pbStack_c8 = pbStack_d0;
LAB_1012a3690:
    puStack_a0 = &UNK_108c61018;
    pbStack_98 = (byte *)0x4;
    bStack_88 = (byte)&puStack_a0;
    bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    puVar21 = (undefined *)0x0;
    uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_1012a36c8:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
joined_r0x0001012a38b0:
    puVar25 = (undefined *)((ulong)puVar25 & 0x7fffffffffffffff);
joined_r0x0001012a3aac:
    if (puVar25 != (undefined *)0x0) {
      _free(pbStack_100);
    }
    bVar18 = false;
    bVar9 = true;
  }
  else {
    lVar23 = 0;
    puVar20 = (undefined8 *)((ulong)&bStack_88 | 1);
    puVar15 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    puVar21 = (undefined *)0x8000000000000000;
    puVar22 = (undefined *)0x8000000000000001;
    puVar25 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_d0;
    pbStack_c8 = pbStack_d0;
    do {
      pbVar16 = pbVar1 + 0x40;
      bVar5 = *pbVar1;
      pbVar17 = pbVar16;
      lVar24 = lVar23;
      if (bVar5 == 0x16) break;
      uVar11 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar20 + 0xf) = uVar11;
      uVar11 = *(undefined8 *)(pbVar1 + 1);
      puVar20[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar20 = uVar11;
      pbStack_e8 = *(byte **)(pbVar1 + 0x28);
      pbStack_f0 = *(byte **)(pbVar1 + 0x20);
      pbStack_d8 = *(byte **)(pbVar1 + 0x38);
      puStack_e0 = *(undefined **)(pbVar1 + 0x30);
      piVar3 = (int *)CONCAT71(uStack_7f,uStack_80);
      piVar7 = (int *)CONCAT71(uStack_77,uStack_78);
      bStack_88 = bVar5;
      if (bVar5 < 0xd) {
        if (bVar5 == 1) {
          uVar13 = (uint)bStack_87;
          if (2 < uVar13) {
            uVar13 = 3;
          }
        }
        else {
          if (bVar5 != 4) {
            if (bVar5 == 0xc) {
              if (lStack_70 == 7) {
                if (*piVar7 != 0x73726576 || *(int *)((long)piVar7 + 3) != 0x6e6f6973)
                goto LAB_1012a32fc;
                uVar13 = 2;
              }
              else if (lStack_70 == 5) {
                if (*piVar7 != 0x6c746974 || (char)piVar7[1] != 'e') goto LAB_1012a32fc;
                uVar13 = 1;
              }
              else if ((lStack_70 == 4) && (*piVar7 == 0x656d616e)) {
                uVar13 = 0;
              }
              else {
LAB_1012a32fc:
                uVar13 = 3;
              }
              goto joined_r0x0001012a3540;
            }
LAB_1012a3bbc:
            lStack_b0 = lVar23 + 1;
            pbStack_c8 = pbVar16;
            uVar11 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20ece0);
            goto LAB_1012a36c8;
          }
          if ((int *)0x2 < piVar3) {
            piVar3 = (int *)0x3;
          }
          uVar13 = (uint)piVar3;
        }
LAB_1012a33b4:
        FUN_100e077ec(&bStack_88);
      }
      else {
        if (bVar5 == 0xd) {
          if (piVar7 == (int *)0x7) {
            if (*piVar3 != 0x73726576 || *(int *)((long)piVar3 + 3) != 0x6e6f6973)
            goto LAB_1012a33b0;
LAB_1012a3534:
            uVar13 = 2;
          }
          else if (piVar7 == (int *)0x5) {
            if (*piVar3 != 0x6c746974 || (char)piVar3[1] != 'e') goto LAB_1012a33b0;
LAB_1012a3384:
            uVar13 = 1;
          }
          else if ((piVar7 == (int *)0x4) && (*piVar3 == 0x656d616e)) {
LAB_1012a31b8:
            uVar13 = 0;
          }
          else {
LAB_1012a33b0:
            uVar13 = 3;
          }
          goto LAB_1012a33b4;
        }
        if (bVar5 != 0xe) {
          if (bVar5 != 0xf) goto LAB_1012a3bbc;
          if (piVar7 == (int *)0x7) {
            if ((((((char)*piVar3 == 'v') && (*(char *)((long)piVar3 + 1) == 'e')) &&
                 (*(char *)((long)piVar3 + 2) == 'r')) &&
                ((*(char *)((long)piVar3 + 3) == 's' && ((char)piVar3[1] == 'i')))) &&
               ((*(char *)((long)piVar3 + 5) == 'o' && (*(char *)((long)piVar3 + 6) == 'n'))))
            goto LAB_1012a3534;
          }
          else if (piVar7 == (int *)0x5) {
            if ((((char)*piVar3 == 't') && (*(char *)((long)piVar3 + 1) == 'i')) &&
               ((*(char *)((long)piVar3 + 2) == 't' &&
                ((*(char *)((long)piVar3 + 3) == 'l' && ((char)piVar3[1] == 'e'))))))
            goto LAB_1012a3384;
          }
          else if ((((piVar7 == (int *)0x4) && ((char)*piVar3 == 'n')) &&
                   (*(char *)((long)piVar3 + 1) == 'a')) &&
                  ((*(char *)((long)piVar3 + 2) == 'm' && (*(char *)((long)piVar3 + 3) == 'e'))))
          goto LAB_1012a31b8;
          goto LAB_1012a33b0;
        }
        if (lStack_70 == 7) {
          if (((((char)*piVar7 != 'v') || (*(char *)((long)piVar7 + 1) != 'e')) ||
              ((*(char *)((long)piVar7 + 2) != 'r' ||
               (((*(char *)((long)piVar7 + 3) != 's' || ((char)piVar7[1] != 'i')) ||
                (*(char *)((long)piVar7 + 5) != 'o')))))) || (*(char *)((long)piVar7 + 6) != 'n'))
          goto LAB_1012a32cc;
          uVar13 = 2;
        }
        else if (lStack_70 == 5) {
          if ((((char)*piVar7 != 't') || (*(char *)((long)piVar7 + 1) != 'i')) ||
             ((*(char *)((long)piVar7 + 2) != 't' ||
              ((*(char *)((long)piVar7 + 3) != 'l' || ((char)piVar7[1] != 'e'))))))
          goto LAB_1012a32cc;
          uVar13 = 1;
        }
        else if ((((lStack_70 == 4) && ((char)*piVar7 == 'n')) &&
                 (*(char *)((long)piVar7 + 1) == 'a')) &&
                ((*(char *)((long)piVar7 + 2) == 'm' && (*(char *)((long)piVar7 + 3) == 'e')))) {
          uVar13 = 0;
        }
        else {
LAB_1012a32cc:
          uVar13 = 3;
        }
joined_r0x0001012a3540:
        if (piVar3 != (int *)0x0) {
          _free();
        }
      }
      uVar13 = uVar13 & 0xff;
      bVar5 = (byte)pbStack_f0;
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          if (puVar21 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar23 + 1;
            puStack_a0 = &UNK_108c61018;
            pbStack_98 = (byte *)0x4;
            bStack_88 = (byte)&puStack_a0;
            bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar16;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            goto LAB_1012a36c8;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar5 == 0x16) {
            lStack_b0 = lVar23 + 1;
            pbStack_c8 = pbVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012a3bb8;
          }
          uVar11 = *puVar15;
          puVar20[1] = puVar15[1];
          *puVar20 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar11;
          bStack_88 = bVar5;
          FUN_1004b62d4(&puStack_a0,&bStack_88);
          if (puStack_a0 == (undefined *)0x8000000000000000) {
            puVar21 = (undefined *)0x0;
LAB_1012a3898:
            lStack_b0 = lVar23 + 1;
            *param_1 = 0x8000000000000000;
            param_1[1] = pbStack_98;
            pbStack_c8 = pbVar16;
            goto joined_r0x0001012a38b0;
          }
          pbStack_f8 = pbStack_98;
          uStack_130 = uStack_90;
          puVar21 = puStack_a0;
        }
        else {
          if (puVar22 != (undefined *)0x8000000000000001) {
            lStack_b0 = lVar23 + 1;
            puStack_a0 = &UNK_108ca1558;
            pbStack_98 = (byte *)0x5;
            bStack_88 = (byte)&puStack_a0;
            bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar16;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            goto LAB_1012a36c8;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar5 == 0x16) {
            lStack_b0 = lVar23 + 1;
            pbStack_c8 = pbVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012a3bb8;
          }
          uVar11 = *puVar15;
          puVar20[1] = puVar15[1];
          *puVar20 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar11;
          bStack_88 = bVar5;
          FUN_1004b60cc(&puStack_a0,&bStack_88);
          if (puStack_a0 == (undefined *)0x8000000000000001) {
            puVar22 = (undefined *)0x8000000000000001;
            goto LAB_1012a3898;
          }
          pbStack_108 = pbStack_98;
          uStack_128 = uStack_90;
          puVar22 = puStack_a0;
        }
      }
      else if (uVar13 == 2) {
        if (puVar25 != (undefined *)0x8000000000000000) {
          lStack_b0 = lVar23 + 1;
          puStack_a0 = &UNK_108cab76f;
          pbStack_98 = (byte *)0x7;
          bStack_88 = (byte)&puStack_a0;
          bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
          uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
          uStack_80 = 0xa0;
          uStack_7f = 0x100c7b3;
          pbStack_c8 = pbVar16;
          uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar11;
          goto joined_r0x0001012a3aac;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar5 == 0x16) {
          lStack_b0 = lVar23 + 1;
          pbStack_c8 = pbVar16;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1012a3bb8;
        }
        uVar11 = *puVar15;
        puVar20[1] = puVar15[1];
        *puVar20 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar11;
        bStack_88 = bVar5;
        FUN_1004b62d4(&puStack_a0,&bStack_88);
        if (puStack_a0 == (undefined *)0x8000000000000000) {
          bVar18 = false;
          lStack_b0 = lVar23 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_98;
          bVar9 = true;
          pbStack_c8 = pbVar16;
          goto LAB_1012a36e0;
        }
        pbStack_100 = pbStack_98;
        uStack_138 = uStack_90;
        puVar25 = puStack_a0;
      }
      else {
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar5 == 0x16) {
          lStack_b0 = lVar23 + 1;
          pbStack_c8 = pbVar16;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012a3bb8:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1012a3bbc);
          (*pcVar8)();
        }
        uVar11 = *puVar15;
        puVar20[1] = puVar15[1];
        *puVar20 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar11;
        bStack_88 = bVar5;
        FUN_100e077ec(&bStack_88);
      }
      lVar23 = lVar23 + 1;
      pbVar17 = pbVar19;
      lVar24 = (lVar14 - 0x40U >> 6) + 1;
      pbVar1 = pbVar16;
    } while (pbVar16 != pbVar19);
    pbStack_c8 = pbVar17;
    lStack_b0 = lVar24;
    if (puVar21 == (undefined *)0x8000000000000000) goto LAB_1012a3690;
    bVar9 = puVar22 == (undefined *)0x8000000000000001;
    puVar4 = (undefined *)0x8000000000000000;
    if (!bVar9) {
      puVar4 = puVar22;
    }
    if (puVar25 != (undefined *)0x8000000000000000) {
      *param_1 = puVar21;
      param_1[1] = pbStack_f8;
      param_1[2] = uStack_130;
      param_1[3] = puVar25;
      param_1[4] = pbStack_100;
      param_1[5] = uStack_138;
      param_1[6] = puVar4;
      param_1[7] = pbStack_108;
      param_1[8] = uStack_128;
      FUN_100d34830(&pbStack_d0);
      if (pbVar19 != pbVar17) {
        bStack_88 = (byte)lVar24;
        bStack_87 = (byte)((ulong)lVar24 >> 8);
        uStack_86 = (undefined6)((ulong)lVar24 >> 0x10);
        uVar11 = FUN_1087e422c(((ulong)((long)pbVar19 - (long)pbVar17) >> 6) + lVar24,&bStack_88,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        if (puVar21 != (undefined *)0x0) {
          _free(pbStack_f8);
        }
        if (((ulong)puVar4 & 0x7fffffffffffffff) != 0) {
          _free(pbStack_108);
        }
        if (puVar25 != (undefined *)0x0) {
          _free(pbStack_100);
        }
      }
      goto LAB_1012a380c;
    }
    puStack_a0 = &UNK_108cab76f;
    pbStack_98 = (byte *)0x7;
    bStack_88 = (byte)&puStack_a0;
    bStack_87 = (byte)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
    if (((ulong)puVar4 & 0x7fffffffffffffff) != 0) {
      _free(pbStack_108);
    }
    if (puVar21 == (undefined *)0x0) {
      bVar18 = true;
    }
    else {
      _free(pbStack_f8);
      bVar18 = true;
    }
  }
LAB_1012a36e0:
  bVar2 = false;
  if (puVar22 != (undefined *)0x8000000000000001) {
    bVar2 = bVar9;
  }
  if ((bVar2) && (((ulong)puVar22 & 0x7fffffffffffffff) != 0)) {
    _free(pbStack_108);
    if (((ulong)puVar21 & 0x7fffffffffffffff) == 0) {
      bVar18 = true;
    }
  }
  else if (((ulong)puVar21 & 0x7fffffffffffffff) == 0) {
    bVar18 = true;
  }
  if (!bVar18) {
    _free(pbStack_f8);
  }
  FUN_100d34830(&pbStack_d0);
  if ((byte)pbStack_f0 != '\x16') {
    FUN_100e077ec(&pbStack_f0);
  }
LAB_1012a380c:
  if ((bVar6 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

