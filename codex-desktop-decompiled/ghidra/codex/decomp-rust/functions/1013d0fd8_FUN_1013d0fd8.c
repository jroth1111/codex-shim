
void FUN_1013d0fd8(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  byte *pbVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined *puVar18;
  undefined *puVar19;
  long unaff_x27;
  long lVar20;
  long lVar21;
  long lStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined *puStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  undefined *puStack_c0;
  byte *pbStack_b8;
  undefined *puStack_a8;
  byte *pbStack_a0;
  long lStack_98;
  byte bStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    puVar14 = *(undefined **)(param_2 + 8);
    pbVar17 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar17 + lVar11 * 0x20;
    pbStack_f0 = (byte *)0x0;
    pbVar16 = pbVar17;
    pbStack_110 = pbVar17;
    puStack_100 = puVar14;
    pbStack_f8 = pbVar1;
    if (lVar11 == 0) {
LAB_1013d1524:
      pbStack_108 = pbVar16;
      pbVar15 = (byte *)FUN_1087e422c(0,&UNK_10b232260,&UNK_10b20a590);
LAB_1013d1544:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar15;
LAB_1013d1550:
      lVar11 = ((ulong)((long)pbVar1 - (long)pbVar16) >> 5) + 1;
      while (lVar11 = lVar11 + -1, pbVar7 = pbVar17, puVar19 = puVar14, lVar11 != 0) {
        FUN_100e077ec(pbVar16);
        pbVar16 = pbVar16 + 0x20;
      }
    }
    else {
      pbVar16 = pbVar17 + 0x20;
      if (*pbVar17 == 0x16) goto LAB_1013d1524;
      uVar8 = *(undefined8 *)(pbVar17 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar17 + 9);
      cStack_8f = (char)uVar8;
      uStack_8e = (undefined6)((ulong)uVar8 >> 8);
      uStack_88 = (undefined1)((ulong)uVar8 >> 0x38);
      lStack_78 = *(long *)(pbVar17 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar17 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar17 + 0x10) >> 8);
      pbStack_f0 = (byte *)0x1;
      pbStack_108 = pbVar16;
      bStack_90 = *pbVar17;
      FUN_1004b62d4(&puStack_a8,&bStack_90);
      lVar20 = lStack_98;
      pbVar15 = pbStack_a0;
      puVar18 = puStack_a8;
      if (puStack_a8 == (undefined *)0x8000000000000000) goto LAB_1013d1544;
      if (lVar11 == 1) {
LAB_1013d15fc:
        pbVar7 = (byte *)FUN_1087e422c(1,&UNK_10b232260,&UNK_10b20a590);
LAB_1013d1618:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar7;
        if (puVar18 != (undefined *)0x0) {
          _free(pbVar15);
        }
        goto LAB_1013d1550;
      }
      pbVar16 = pbVar17 + 0x40;
      pbStack_108 = pbVar16;
      if (pbVar17[0x20] == 0x16) goto LAB_1013d15fc;
      uVar8 = *(undefined8 *)(pbVar17 + 0x21);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar17 + 0x29);
      cStack_8f = (char)uVar8;
      uStack_8e = (undefined6)((ulong)uVar8 >> 8);
      uStack_88 = (undefined1)((ulong)uVar8 >> 0x38);
      lStack_78 = *(long *)(pbVar17 + 0x38);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar17 + 0x30);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar17 + 0x30) >> 8);
      pbStack_f0 = (byte *)0x2;
      bStack_90 = pbVar17[0x20];
      FUN_1004b5b34(&puStack_a8,&bStack_90);
      pbVar7 = pbStack_a0;
      puVar19 = puStack_a8;
      if (puStack_a8 == (undefined *)0x8000000000000000) goto LAB_1013d1618;
      *param_1 = puVar18;
      param_1[1] = pbVar15;
      param_1[2] = lVar20;
      param_1[3] = puStack_a8;
      param_1[4] = pbStack_a0;
      param_1[5] = lStack_98;
      lVar11 = FUN_100fbc738(&pbStack_110);
      if (lVar11 == 0) goto LAB_1013d1984;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar11;
      if (puVar18 != (undefined *)0x0) {
        _free(pbVar15);
      }
      if (lStack_98 != 0) {
        pbVar16 = pbVar7 + 8;
        lVar11 = lStack_98;
        do {
          if (*(long *)(pbVar16 + -8) != 0) {
            _free(*(undefined8 *)pbVar16);
          }
          pbVar16 = pbVar16 + 0x18;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    if (puVar19 != (undefined *)0x0) {
      _free(pbVar7);
    }
    goto LAB_1013d1984;
  }
  if (bVar3 != 0x15) {
    uVar8 = FUN_108855b04(param_2,&puStack_a8,&UNK_10b20a760);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar8;
    return;
  }
  uStack_e0 = *(undefined8 *)(param_2 + 8);
  pbStack_f0 = *(byte **)(param_2 + 0x10);
  lVar11 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar16 = pbStack_f0 + lVar11;
  pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
  lStack_d0 = 0;
  pbStack_d8 = pbVar16;
  if (*(long *)(param_2 + 0x18) == 0) {
    puVar14 = (undefined *)0x8000000000000000;
    puStack_c0 = (undefined *)0x8000000000000000;
    pbStack_e8 = pbStack_f0;
LAB_1013d166c:
    puStack_a8 = &UNK_108cc0216;
    pbStack_a0 = (byte *)0x9;
    bStack_90 = (byte)&puStack_a8;
    cStack_8f = (char)((ulong)&puStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&puStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    puVar18 = (undefined *)0x0;
    uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
LAB_1013d16a0:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar8;
joined_r0x0001013d1820:
    if (puVar14 != (undefined *)0x8000000000000000) {
joined_r0x0001013d194c:
      if (unaff_x27 != 0) {
        pbVar16 = pbStack_120 + 8;
        do {
          if (*(long *)(pbVar16 + -8) != 0) {
            _free(*(undefined8 *)pbVar16);
          }
          pbVar16 = pbVar16 + 0x18;
          unaff_x27 = unaff_x27 + -1;
        } while (unaff_x27 != 0);
      }
      if (puVar14 == (undefined *)0x0) {
        puVar18 = (undefined *)((ulong)puVar18 & 0x7fffffffffffffff);
        goto joined_r0x0001013d17dc;
      }
      _free(pbStack_120);
    }
    puVar18 = (undefined *)((ulong)puVar18 & 0x7fffffffffffffff);
  }
  else {
    lVar20 = 0;
    puVar13 = (undefined8 *)((ulong)&bStack_90 | 1);
    puVar12 = (undefined8 *)((ulong)&pbStack_110 | 1);
    puVar14 = (undefined *)0x8000000000000000;
    puVar18 = (undefined *)0x8000000000000000;
    puVar19 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_f0;
    pbStack_e8 = pbStack_f0;
    do {
      pbVar15 = pbVar1 + 0x40;
      bVar2 = *pbVar1;
      pbVar17 = pbVar15;
      lVar21 = lVar20;
      if (bVar2 == 0x16) break;
      uVar8 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar13 + 0xf) = uVar8;
      uVar8 = *(undefined8 *)(pbVar1 + 1);
      puVar13[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar13 = uVar8;
      pbStack_108 = *(byte **)(pbVar1 + 0x28);
      pbStack_110 = *(byte **)(pbVar1 + 0x20);
      pbStack_f8 = *(byte **)(pbVar1 + 0x38);
      puStack_100 = *(undefined **)(pbVar1 + 0x30);
      plVar4 = (long *)CONCAT71(uStack_87,uStack_88);
      plVar5 = (long *)CONCAT71(uStack_7f,uStack_80);
      bStack_90 = bVar2;
      if (bVar2 < 0xd) {
        if (bVar2 == 1) {
          iVar10 = 1;
          if (cStack_8f != '\x01') {
            iVar10 = 2;
          }
          iVar9 = 0;
          if (cStack_8f != '\0') {
            iVar9 = iVar10;
          }
        }
        else {
          if (bVar2 != 4) {
            if (bVar2 == 0xc) {
              if (lStack_78 == 5) {
                iVar9 = 1;
                if ((int)*plVar5 != 0x746f6f72 || *(char *)((long)plVar5 + 4) != 's') {
                  iVar9 = 2;
                }
              }
              else if (lStack_78 == 9) {
                iVar9 = 2;
                if (*plVar5 == 0x496e6f6973736573 && (char)plVar5[1] == 'd') {
                  iVar9 = 0;
                }
              }
              else {
                iVar9 = 2;
              }
              goto joined_r0x0001013d1324;
            }
LAB_1013d1b00:
            lStack_d0 = lVar20 + 1;
            pbStack_b8 = pbStack_120;
            pbStack_e8 = pbVar15;
            puStack_c0 = puVar19;
            uVar8 = FUN_108855b04(&bStack_90,&puStack_a8,&UNK_10b211ac0);
            goto LAB_1013d16a0;
          }
          iVar10 = 1;
          if (plVar4 != (long *)0x1) {
            iVar10 = 2;
          }
          iVar9 = 0;
          if (plVar4 != (long *)0x0) {
            iVar9 = iVar10;
          }
        }
LAB_1013d13d8:
        FUN_100e077ec(&bStack_90);
      }
      else {
        if (bVar2 == 0xd) {
          if (plVar5 == (long *)0x5) {
            iVar9 = 1;
            if ((int)*plVar4 != 0x746f6f72 || *(char *)((long)plVar4 + 4) != 's') {
              iVar9 = 2;
            }
          }
          else {
            if (plVar5 != (long *)0x9) goto LAB_1013d13a4;
            iVar9 = 2;
            if (*plVar4 == 0x496e6f6973736573 && (char)plVar4[1] == 'd') {
              iVar9 = 0;
            }
          }
          goto LAB_1013d13d8;
        }
        if (bVar2 != 0xe) {
          if (bVar2 != 0xf) goto LAB_1013d1b00;
          if (plVar5 == (long *)0x5) {
            if (((((char)*plVar4 != 'r') || (*(char *)((long)plVar4 + 1) != 'o')) ||
                (*(char *)((long)plVar4 + 2) != 'o')) ||
               ((*(char *)((long)plVar4 + 3) != 't' || (*(char *)((long)plVar4 + 4) != 's'))))
            goto LAB_1013d13a4;
            iVar9 = 1;
          }
          else if ((((((plVar5 == (long *)0x9) && ((char)*plVar4 == 's')) &&
                     ((*(char *)((long)plVar4 + 1) == 'e' &&
                      (((*(char *)((long)plVar4 + 2) == 's' && (*(char *)((long)plVar4 + 3) == 's'))
                       && (*(char *)((long)plVar4 + 4) == 'i')))))) &&
                    ((*(char *)((long)plVar4 + 5) == 'o' && (*(char *)((long)plVar4 + 6) == 'n'))))
                   && (*(char *)((long)plVar4 + 7) == 'I')) && ((char)plVar4[1] == 'd')) {
            iVar9 = 0;
          }
          else {
LAB_1013d13a4:
            iVar9 = 2;
          }
          goto LAB_1013d13d8;
        }
        if (lStack_78 == 5) {
          if ((((char)*plVar5 != 'r') || (*(char *)((long)plVar5 + 1) != 'o')) ||
             ((*(char *)((long)plVar5 + 2) != 'o' ||
              ((*(char *)((long)plVar5 + 3) != 't' || (*(char *)((long)plVar5 + 4) != 's'))))))
          goto LAB_1013d1320;
          iVar9 = 1;
        }
        else if (((((lStack_78 == 9) && ((char)*plVar5 == 's')) &&
                  (*(char *)((long)plVar5 + 1) == 'e')) &&
                 ((*(char *)((long)plVar5 + 2) == 's' && (*(char *)((long)plVar5 + 3) == 's')))) &&
                (((*(char *)((long)plVar5 + 4) == 'i' &&
                  ((*(char *)((long)plVar5 + 5) == 'o' && (*(char *)((long)plVar5 + 6) == 'n')))) &&
                 ((*(char *)((long)plVar5 + 7) == 'I' && ((char)plVar5[1] == 'd')))))) {
          iVar9 = 0;
        }
        else {
LAB_1013d1320:
          iVar9 = 2;
        }
joined_r0x0001013d1324:
        if (plVar4 != (long *)0x0) {
          _free();
        }
      }
      bVar2 = (byte)pbStack_110;
      if (iVar9 == 0) {
        if (puVar18 != (undefined *)0x8000000000000000) {
          lStack_d0 = lVar20 + 1;
          pbStack_b8 = pbStack_120;
          puStack_a8 = &UNK_108cc0216;
          pbStack_a0 = (byte *)0x9;
          bStack_90 = (byte)&puStack_a8;
          cStack_8f = (char)((ulong)&puStack_a8 >> 8);
          uStack_8e = (undefined6)((ulong)&puStack_a8 >> 0x10);
          uStack_88 = 0xa0;
          uStack_87 = 0x100c7b3;
          pbStack_e8 = pbVar15;
          puStack_c0 = puVar19;
          uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
          goto LAB_1013d16a0;
        }
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_d0 = lVar20 + 1;
          pbStack_b8 = pbStack_120;
          pbStack_e8 = pbVar15;
          puStack_c0 = puVar19;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013d1adc;
        }
        uVar8 = *puVar12;
        puVar13[1] = puVar12[1];
        *puVar13 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar12 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar8;
        bStack_90 = bVar2;
        FUN_1004b62d4(&puStack_a8,&bStack_90);
        if (puStack_a8 == (undefined *)0x8000000000000000) {
          lStack_d0 = lVar20 + 1;
          puVar18 = (undefined *)0x0;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_a0;
          pbStack_e8 = pbVar15;
          puStack_c0 = puVar19;
          pbStack_b8 = pbStack_120;
          goto joined_r0x0001013d1820;
        }
        pbStack_128 = pbStack_a0;
        lStack_130 = lStack_98;
        puVar18 = puStack_a8;
      }
      else if (iVar9 == 1) {
        if (puVar14 != (undefined *)0x8000000000000000) {
          lStack_d0 = lVar20 + 1;
          pbStack_b8 = pbStack_120;
          puStack_a8 = &UNK_108cb9324;
          pbStack_a0 = (byte *)0x5;
          bStack_90 = (byte)&puStack_a8;
          cStack_8f = (char)((ulong)&puStack_a8 >> 8);
          uStack_8e = (undefined6)((ulong)&puStack_a8 >> 0x10);
          uStack_88 = 0xa0;
          uStack_87 = 0x100c7b3;
          pbStack_e8 = pbVar15;
          puStack_c0 = puVar19;
          uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar8;
          goto joined_r0x0001013d194c;
        }
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_d0 = lVar20 + 1;
          pbStack_b8 = pbStack_120;
          pbStack_e8 = pbVar15;
          puStack_c0 = puVar19;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013d1adc;
        }
        uVar8 = *puVar12;
        puVar13[1] = puVar12[1];
        *puVar13 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar12 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar8;
        bStack_90 = bVar2;
        FUN_1004b5b34(&puStack_a8,&bStack_90);
        if (puStack_a8 == (undefined *)0x8000000000000000) {
          lStack_d0 = lVar20 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_a0;
          puVar18 = (undefined *)((ulong)puVar18 & 0x7fffffffffffffff);
          pbStack_e8 = pbVar15;
          goto joined_r0x0001013d17dc;
        }
        pbStack_120 = pbStack_a0;
        puVar14 = puStack_a8;
        puVar19 = puStack_a8;
        unaff_x27 = lStack_98;
      }
      else {
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_d0 = lVar20 + 1;
          pbStack_b8 = pbStack_120;
          pbStack_e8 = pbVar15;
          puStack_c0 = puVar19;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013d1adc:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1013d1ae0);
          (*pcVar6)();
        }
        uVar8 = *puVar12;
        puVar13[1] = puVar12[1];
        *puVar13 = uVar8;
        uVar8 = *(undefined8 *)((long)puVar12 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar8;
        bStack_90 = bVar2;
        FUN_100e077ec(&bStack_90);
      }
      lVar20 = lVar20 + 1;
      pbVar17 = pbVar16;
      lVar21 = (lVar11 - 0x40U >> 6) + 1;
      pbVar1 = pbVar15;
    } while (pbVar15 != pbVar16);
    pbStack_b8 = pbStack_120;
    pbStack_e8 = pbVar17;
    lStack_d0 = lVar21;
    puStack_c0 = puVar19;
    if (puVar18 == (undefined *)0x8000000000000000) goto LAB_1013d166c;
    if (puVar14 != (undefined *)0x8000000000000000) {
      *param_1 = puVar18;
      param_1[1] = pbStack_128;
      param_1[2] = lStack_130;
      param_1[3] = puVar14;
      param_1[4] = pbStack_120;
      param_1[5] = unaff_x27;
      FUN_100d34830(&pbStack_f0);
      if (pbVar16 != pbVar17) {
        bStack_90 = (byte)lVar21;
        cStack_8f = (char)((ulong)lVar21 >> 8);
        uStack_8e = (undefined6)((ulong)lVar21 >> 0x10);
        uVar8 = FUN_1087e422c(((ulong)((long)pbVar16 - (long)pbVar17) >> 6) + lVar21,&bStack_90,
                              &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar8;
        if (puVar18 != (undefined *)0x0) {
          _free(pbStack_128);
        }
        if (unaff_x27 != 0) {
          pbVar16 = pbStack_120 + 8;
          do {
            if (*(long *)(pbVar16 + -8) != 0) {
              _free(*(undefined8 *)pbVar16);
            }
            pbVar16 = pbVar16 + 0x18;
            unaff_x27 = unaff_x27 + -1;
          } while (unaff_x27 != 0);
        }
        if (puVar14 != (undefined *)0x0) {
          _free(pbStack_120);
        }
      }
      goto LAB_1013d1984;
    }
    puStack_a8 = &UNK_108cb9324;
    pbStack_a0 = (byte *)0x5;
    bStack_90 = (byte)&puStack_a8;
    cStack_8f = (char)((ulong)&puStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&puStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar8;
  }
joined_r0x0001013d17dc:
  if (puVar18 != (undefined *)0x0) {
    _free(pbStack_128);
  }
  FUN_100d34830(&pbStack_f0);
  if ((byte)pbStack_110 != '\x16') {
    FUN_100e077ec(&pbStack_110);
  }
LAB_1013d1984:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

