
/* WARNING: Removing unreachable block (ram,0x000101418b7c) */

void FUN_10141824c(undefined8 *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  code *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  undefined **ppuVar24;
  byte *pbVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  undefined8 uVar28;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  long lStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  undefined *puStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  undefined *puStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  undefined *puStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  undefined *puStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte abStack_110 [8];
  byte *pbStack_108;
  byte *pbStack_100;
  long lStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  
  if (*param_2 == '\x14') {
    pbVar1 = *(byte **)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    pbVar11 = *(byte **)(param_2 + 0x18);
    pbVar10 = pbVar2 + (long)pbVar11 * 0x20;
    lStack_190 = 0;
    pbVar25 = pbVar11;
    if ((byte *)0x5554 < pbVar11) {
      pbVar25 = (byte *)0x5555;
    }
    pbStack_1b0 = pbVar2;
    pbStack_1a8 = pbVar2;
    pbStack_1a0 = pbVar1;
    pbStack_198 = pbVar10;
    if (pbVar11 == (byte *)0x0) {
      pbStack_188 = (byte *)0x0;
      pbStack_180 = (byte *)0x8;
      pbStack_178 = (byte *)0x0;
      pbVar25 = pbVar2;
    }
    else {
      pbVar11 = (byte *)_malloc((long)pbVar25 * 0x30);
      if (pbVar11 == (byte *)0x0) {
        func_0x0001087c9084(8,(long)pbVar25 * 0x30);
LAB_101418fcc:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101418fd0);
        (*pcVar7)();
      }
      lVar23 = 0;
      puVar12 = (undefined8 *)((ulong)abStack_110 | 1);
      pbStack_178 = (byte *)0x0;
      puVar17 = (undefined8 *)((ulong)&uStack_88 | 1);
      puVar13 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      pbVar18 = pbVar2;
      pbStack_188 = pbVar25;
      pbStack_180 = pbVar11;
      do {
        lVar16 = lStack_f8;
        pbVar21 = pbStack_100;
        pbVar11 = pbStack_108;
        pbVar19 = pbVar18 + 0x20;
        bVar3 = *pbVar18;
        pbVar25 = pbVar19;
        pbStack_1a8 = pbVar19;
        if (bVar3 == 0x16) break;
        uVar28 = *(undefined8 *)(pbVar18 + 1);
        puVar12[1] = *(undefined8 *)(pbVar18 + 9);
        *puVar12 = uVar28;
        uVar28 = *(undefined8 *)(pbVar18 + 0x10);
        *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)(pbVar18 + 0x18);
        *(undefined8 *)((long)puVar12 + 0xf) = uVar28;
        lVar23 = lVar23 + 1;
        lStack_190 = lVar23;
        abStack_110[0] = bVar3;
        if (bVar3 != 0x14) {
          if (bVar3 == 0x15) {
            lVar16 = lStack_f8 * 0x40;
            pbVar25 = pbStack_100 + lVar16;
            pbStack_d0 = pbStack_100;
            pbStack_c8 = pbStack_100;
            pbStack_c0 = pbStack_108;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            ppuStack_b0 = (undefined **)0x0;
            pbStack_b8 = pbVar25;
            if (lStack_f8 == 0) {
              puVar27 = (undefined *)0x0;
LAB_101418a0c:
              puStack_a0 = &UNK_108cc057b;
              pbStack_98 = (byte *)0xd;
              puVar20 = (undefined *)0x0;
              uStack_88 = &puStack_a0;
              plStack_80 = (long *)&DAT_100c7b3a0;
              pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_88);
joined_r0x000101418b40:
              puVar27 = (undefined *)((ulong)puVar27 & 0x7fffffffffffffff);
joined_r0x000101418cc8:
              puStack_140 = (undefined *)0x8000000000000000;
              pbStack_138 = pbVar9;
              if (puVar27 != (undefined *)0x0) {
                puStack_140 = (undefined *)0x8000000000000000;
                _free(pbStack_1d0);
              }
LAB_101418b44:
              puVar20 = (undefined *)((ulong)puVar20 & 0x7fffffffffffffff);
joined_r0x000101418ab0:
              if (puVar20 != (undefined *)0x0) {
                _free(pbStack_1c8);
              }
              FUN_100d34830(&pbStack_d0);
              if ((char)pbStack_f0 != '\x16') {
                FUN_100e077ec(&pbStack_f0);
              }
LAB_101418b6c:
              puVar20 = (undefined *)0x8000000000000000;
            }
            else {
              ppuVar24 = (undefined **)0x0;
              puVar20 = (undefined *)0x8000000000000000;
              puVar27 = (undefined *)0x8000000000000000;
              pbVar11 = pbStack_100;
              do {
                ppuVar6 = uStack_88;
                pbVar21 = pbVar11 + 0x40;
                bVar3 = *pbVar11;
                pbVar18 = pbVar21;
                ppuVar26 = ppuVar24;
                if (bVar3 == 0x16) break;
                uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar3);
                ppuVar26 = uStack_88;
                uVar28 = *(undefined8 *)(pbVar11 + 0x10);
                *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar11 + 0x18);
                *(undefined8 *)((long)puVar17 + 0xf) = uVar28;
                uVar28 = *(undefined8 *)(pbVar11 + 1);
                puVar17[1] = *(undefined8 *)(pbVar11 + 9);
                *puVar17 = uVar28;
                pbStack_e8 = *(byte **)(pbVar11 + 0x28);
                pbStack_f0 = *(byte **)(pbVar11 + 0x20);
                pbStack_d8 = *(byte **)(pbVar11 + 0x38);
                pbStack_e0 = *(byte **)(pbVar11 + 0x30);
                if (bVar3 < 0xd) {
                  if (bVar3 == 1) {
                    uStack_88._1_1_ = SUB81(ppuVar6,1);
                    iVar15 = 1;
                    if (uStack_88._1_1_ != '\x01') {
                      iVar15 = 2;
                    }
                    iVar14 = 0;
                    if (uStack_88._1_1_ != '\0') {
                      iVar14 = iVar15;
                    }
                  }
                  else {
                    if (bVar3 != 4) {
                      if (bVar3 == 0xc) {
                        if (lStack_70 == 3) {
                          iVar14 = 1;
                          if ((short)*plStack_78 != 0x7763 || *(char *)((long)plStack_78 + 2) != 'd'
                             ) {
                            iVar14 = 2;
                          }
                        }
                        else {
                          if (lStack_70 != 0xd) goto LAB_1014186d4;
                          iVar14 = 2;
                          if (*plStack_78 == 0x6d6e6f7269766e65 &&
                              *(long *)((long)plStack_78 + 5) == 0x6449746e656d6e6f) {
                            iVar14 = 0;
                          }
                        }
                        goto joined_r0x0001014186cc;
                      }
LAB_101418d1c:
                      ppuStack_b0 = (undefined **)((long)ppuVar24 + 1);
                      pbStack_c8 = pbVar21;
                      pbVar9 = (byte *)FUN_108855b04(&uStack_88,&puStack_a0,&UNK_10b210ba0);
                      goto joined_r0x000101418b40;
                    }
                    iVar15 = 1;
                    if (plStack_80 != (long *)0x1) {
                      iVar15 = 2;
                    }
                    iVar14 = 0;
                    if (plStack_80 != (long *)0x0) {
                      iVar14 = iVar15;
                    }
                  }
LAB_101418770:
                  uStack_88 = ppuVar26;
                  FUN_100e077ec(&uStack_88);
                }
                else {
                  if (bVar3 == 0xd) {
                    if (plStack_78 == (long *)0x3) {
                      iVar14 = 1;
                      if ((short)*plStack_80 != 0x7763 || *(char *)((long)plStack_80 + 2) != 'd') {
                        iVar14 = 2;
                      }
                    }
                    else {
                      if (plStack_78 != (long *)0xd) goto LAB_101418740;
                      iVar14 = 2;
                      if (*plStack_80 == 0x6d6e6f7269766e65 &&
                          *(long *)((long)plStack_80 + 5) == 0x6449746e656d6e6f) {
                        iVar14 = 0;
                      }
                    }
                    goto LAB_101418770;
                  }
                  if (bVar3 != 0xe) {
                    if (bVar3 != 0xf) goto LAB_101418d1c;
                    if (plStack_78 == (long *)0x3) {
                      if ((((char)*plStack_80 != 'c') || (*(char *)((long)plStack_80 + 1) != 'w'))
                         || (*(char *)((long)plStack_80 + 2) != 'd')) goto LAB_101418740;
                      iVar14 = 1;
                    }
                    else if ((((((plStack_78 == (long *)0xd) && ((char)*plStack_80 == 'e')) &&
                               ((*(char *)((long)plStack_80 + 1) == 'n' &&
                                ((*(char *)((long)plStack_80 + 2) == 'v' &&
                                 (*(char *)((long)plStack_80 + 3) == 'i')))))) &&
                              (*(char *)((long)plStack_80 + 4) == 'r')) &&
                             (((((*(char *)((long)plStack_80 + 5) == 'o' &&
                                 (*(char *)((long)plStack_80 + 6) == 'n')) &&
                                (*(char *)((long)plStack_80 + 7) == 'm')) &&
                               (((char)plStack_80[1] == 'e' &&
                                (*(char *)((long)plStack_80 + 9) == 'n')))) &&
                              (*(char *)((long)plStack_80 + 10) == 't')))) &&
                            ((*(char *)((long)plStack_80 + 0xb) == 'I' &&
                             (*(char *)((long)plStack_80 + 0xc) == 'd')))) {
                      iVar14 = 0;
                    }
                    else {
LAB_101418740:
                      iVar14 = 2;
                    }
                    goto LAB_101418770;
                  }
                  if (lStack_70 == 3) {
                    if ((((char)*plStack_78 != 'c') || (*(char *)((long)plStack_78 + 1) != 'w')) ||
                       (*(char *)((long)plStack_78 + 2) != 'd')) goto LAB_1014186d4;
                    iVar14 = 1;
                  }
                  else if (((((lStack_70 == 0xd) && ((char)*plStack_78 == 'e')) &&
                            ((*(char *)((long)plStack_78 + 1) == 'n' &&
                             ((*(char *)((long)plStack_78 + 2) == 'v' &&
                              (*(char *)((long)plStack_78 + 3) == 'i')))))) &&
                           ((*(char *)((long)plStack_78 + 4) == 'r' &&
                            ((((*(char *)((long)plStack_78 + 5) == 'o' &&
                               (*(char *)((long)plStack_78 + 6) == 'n')) &&
                              (*(char *)((long)plStack_78 + 7) == 'm')) &&
                             (((char)plStack_78[1] == 'e' &&
                              (*(char *)((long)plStack_78 + 9) == 'n')))))))) &&
                          ((*(char *)((long)plStack_78 + 10) == 't' &&
                           ((*(char *)((long)plStack_78 + 0xb) == 'I' &&
                            (*(char *)((long)plStack_78 + 0xc) == 'd')))))) {
                    iVar14 = 0;
                  }
                  else {
LAB_1014186d4:
                    iVar14 = 2;
                  }
joined_r0x0001014186cc:
                  if (plStack_80 != (long *)0x0) {
                    _free();
                  }
                }
                cVar4 = (char)pbStack_f0;
                if (iVar14 == 0) {
                  if (puVar20 != (undefined *)0x8000000000000000) {
                    ppuStack_b0 = (undefined **)((long)ppuVar24 + 1);
                    puStack_a0 = &UNK_108cc057b;
                    pbStack_98 = (byte *)0xd;
                    uStack_88 = &puStack_a0;
                    plStack_80 = (long *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar21;
                    pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
                    goto joined_r0x000101418b40;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar4 == '\x16') {
                    ppuStack_b0 = (undefined **)((long)ppuVar24 + 1);
                    pbStack_c8 = pbVar21;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_101418fcc;
                  }
                  uVar28 = *puVar13;
                  puVar17[1] = puVar13[1];
                  *puVar17 = uVar28;
                  uVar28 = *(undefined8 *)((long)puVar13 + 0xf);
                  *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
                  *(undefined8 *)((long)puVar17 + 0xf) = uVar28;
                  uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar4);
                  FUN_1004b62d4(&puStack_a0,&uStack_88);
                  if (puStack_a0 == (undefined *)0x8000000000000000) {
                    ppuStack_b0 = (undefined **)((long)ppuVar24 + 1);
                    puVar20 = (undefined *)0x0;
                    pbStack_c8 = pbVar21;
                    pbVar9 = pbStack_98;
                    goto joined_r0x000101418b40;
                  }
                  pbStack_1c8 = pbStack_98;
                  pbStack_1d8 = pbStack_90;
                  puVar20 = puStack_a0;
                }
                else if (iVar14 == 1) {
                  if (puVar27 != (undefined *)0x8000000000000000) {
                    ppuStack_b0 = (undefined **)((long)ppuVar24 + 1);
                    puStack_a0 = &UNK_108ca1f1d;
                    pbStack_98 = (byte *)0x3;
                    uStack_88 = &puStack_a0;
                    plStack_80 = (long *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar21;
                    pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
                    goto joined_r0x000101418cc8;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar4 == '\x16') {
                    ppuStack_b0 = (undefined **)((long)ppuVar24 + 1);
                    pbStack_c8 = pbVar21;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_101418fcc;
                  }
                  uVar28 = *puVar13;
                  puVar17[1] = puVar13[1];
                  *puVar17 = uVar28;
                  uVar28 = *(undefined8 *)((long)puVar13 + 0xf);
                  *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
                  *(undefined8 *)((long)puVar17 + 0xf) = uVar28;
                  uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar4);
                  FUN_1014a868c(&puStack_a0,&uStack_88);
                  if (puStack_a0 == (undefined *)0x8000000000000000) {
                    ppuStack_b0 = (undefined **)((long)ppuVar24 + 1);
                    puStack_140 = (undefined *)0x8000000000000000;
                    pbStack_138 = pbStack_98;
                    pbVar9 = pbStack_98;
                    pbStack_c8 = pbVar21;
                    goto LAB_101418b44;
                  }
                  pbStack_1d0 = pbStack_98;
                  pbStack_1e0 = pbStack_90;
                  puVar27 = puStack_a0;
                }
                else {
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar4 == '\x16') {
                    ppuStack_b0 = (undefined **)((long)ppuVar24 + 1);
                    pbStack_c8 = pbVar21;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_101418fcc;
                  }
                  uVar28 = *puVar13;
                  puVar17[1] = puVar13[1];
                  *puVar17 = uVar28;
                  uVar28 = *(undefined8 *)((long)puVar13 + 0xf);
                  *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar13 + 0x17);
                  *(undefined8 *)((long)puVar17 + 0xf) = uVar28;
                  uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar4);
                  FUN_100e077ec(&uStack_88);
                }
                ppuVar24 = (undefined **)((long)ppuVar24 + 1);
                pbVar18 = pbVar25;
                ppuVar26 = (undefined **)((lVar16 - 0x40U >> 6) + 1);
                pbVar11 = pbVar21;
              } while (pbVar21 != pbVar25);
              pbStack_c8 = pbVar18;
              ppuStack_b0 = ppuVar26;
              if (puVar20 == (undefined *)0x8000000000000000) goto LAB_101418a0c;
              if (puVar27 == (undefined *)0x8000000000000000) {
                puStack_a0 = &UNK_108ca1f1d;
                pbStack_98 = (byte *)0x3;
                uStack_88 = &puStack_a0;
                plStack_80 = (long *)&DAT_100c7b3a0;
                pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_88);
                puStack_140 = (undefined *)0x8000000000000000;
                pbStack_138 = pbVar9;
                goto joined_r0x000101418ab0;
              }
              pbStack_138 = pbStack_1c8;
              pbStack_130 = pbStack_1d8;
              pbStack_120 = pbStack_1d0;
              pbStack_118 = pbStack_1e0;
              puStack_140 = puVar20;
              puStack_128 = puVar27;
              FUN_100d34830(&pbStack_d0);
              pbVar9 = pbStack_1c8;
              if (pbVar25 != pbVar18) {
                uStack_88 = ppuVar26;
                pbVar9 = (byte *)FUN_1087e422c(((ulong)((long)pbVar25 - (long)pbVar18) >> 6) +
                                               (long)ppuVar26,&uStack_88,&UNK_10b23a190);
                puStack_140 = (undefined *)0x8000000000000000;
                pbStack_138 = pbVar9;
                if (puVar20 != (undefined *)0x0) {
                  _free(pbStack_1c8);
                }
                if (puVar27 != (undefined *)0x0) {
                  _free(pbStack_1d0);
                  puVar20 = (undefined *)0x8000000000000000;
                  goto LAB_101418b84;
                }
                goto LAB_101418b6c;
              }
            }
            goto LAB_101418b84;
          }
          pbVar9 = (byte *)FUN_108855b04(abStack_110,&puStack_a0,&UNK_10b20bc40);
LAB_101418ee8:
          pbVar25 = pbStack_180;
          pbStack_e8 = pbVar9;
          if (pbStack_178 != (byte *)0x0) {
            pbVar11 = pbStack_180 + 0x20;
            pbVar18 = pbStack_178;
            do {
              if (*(long *)(pbVar11 + -0x20) != 0) {
                _free(*(undefined8 *)(pbVar11 + -0x18));
              }
              if (*(long *)(pbVar11 + -8) != 0) {
                _free(*(undefined8 *)pbVar11);
              }
              pbVar11 = pbVar11 + 0x30;
              pbVar18 = pbVar18 + -1;
            } while (pbVar18 != (byte *)0x0);
          }
          if (pbStack_188 != (byte *)0x0) {
            _free(pbVar25);
          }
          goto LAB_101418f3c;
        }
        pbVar18 = pbStack_100 + lStack_f8 * 0x20;
        pbStack_f0 = pbStack_100;
        pbStack_e0 = pbStack_108;
        pbStack_d0 = (byte *)0x0;
        pbVar25 = pbStack_100;
        pbStack_d8 = pbVar18;
        if (lStack_f8 == 0) {
LAB_1014188bc:
          pbStack_e8 = pbVar25;
          pbVar8 = (byte *)FUN_1087e422c(0,&UNK_10b231a28,&UNK_10b20a590);
LAB_1014188d8:
          puStack_140 = (undefined *)0x8000000000000000;
          pbStack_138 = pbVar8;
LAB_1014188e4:
          lVar16 = ((ulong)((long)pbVar18 - (long)pbVar25) >> 5) + 1;
          while (lVar16 = lVar16 + -1, lVar16 != 0) {
            FUN_100e077ec(pbVar25);
            pbVar25 = pbVar25 + 0x20;
          }
          pbVar22 = pbVar21;
          if (pbVar11 == (byte *)0x0) {
            puVar20 = (undefined *)0x8000000000000000;
            pbVar9 = pbVar8;
            goto LAB_101418b84;
          }
        }
        else {
          pbVar25 = pbStack_100 + 0x20;
          bVar3 = *pbStack_100;
          if (bVar3 == 0x16) goto LAB_1014188bc;
          uVar28 = *(undefined8 *)(pbStack_100 + 1);
          puVar17[1] = *(undefined8 *)(pbStack_100 + 9);
          *puVar17 = uVar28;
          uVar28 = *(undefined8 *)(pbStack_100 + 0x10);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbStack_100 + 0x18);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar28;
          pbStack_d0 = (byte *)0x1;
          uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar3);
          pbStack_e8 = pbVar25;
          FUN_1004b62d4(&puStack_a0,&uStack_88);
          pbVar5 = pbStack_90;
          pbVar9 = pbStack_98;
          puVar20 = puStack_a0;
          pbVar8 = pbStack_98;
          if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_1014188d8;
          if (lVar16 == 1) {
LAB_1014189b0:
            pbVar8 = (byte *)FUN_1087e422c(1,&UNK_10b231a28,&UNK_10b20a590);
LAB_1014189cc:
            puStack_140 = (undefined *)0x8000000000000000;
            pbStack_138 = pbVar8;
            if (puVar20 != (undefined *)0x0) {
              _free(pbVar9);
            }
            goto LAB_1014188e4;
          }
          pbVar25 = pbVar21 + 0x40;
          bVar3 = pbVar21[0x20];
          pbStack_e8 = pbVar25;
          if (bVar3 == 0x16) goto LAB_1014189b0;
          pbStack_1c8 = pbStack_90;
          uVar28 = *(undefined8 *)(pbVar21 + 0x21);
          puVar17[1] = *(undefined8 *)(pbVar21 + 0x29);
          *puVar17 = uVar28;
          uVar28 = *(undefined8 *)(pbVar21 + 0x30);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar21 + 0x38);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar28;
          pbStack_d0 = (byte *)0x2;
          uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar3);
          FUN_1014a868c(&puStack_a0,&uStack_88);
          pbVar22 = pbStack_98;
          puVar27 = puStack_a0;
          pbVar8 = pbStack_98;
          if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_1014189cc;
          puStack_140 = puVar20;
          pbStack_138 = pbVar9;
          pbStack_130 = pbVar5;
          puStack_128 = puStack_a0;
          pbStack_120 = pbStack_98;
          pbStack_118 = pbStack_90;
          pbVar8 = (byte *)FUN_100fbc738(&pbStack_f0);
          if (pbVar8 == (byte *)0x0) goto LAB_101418b84;
          puStack_140 = (undefined *)0x8000000000000000;
          pbStack_138 = pbVar8;
          if (puVar20 != (undefined *)0x0) {
            _free(pbVar9);
          }
          if (puVar27 == (undefined *)0x0) {
            puVar20 = (undefined *)0x8000000000000000;
            pbVar9 = pbVar8;
            goto LAB_101418b84;
          }
        }
        _free(pbVar22);
        puVar20 = (undefined *)0x8000000000000000;
        pbVar9 = pbVar8;
LAB_101418b84:
        pbVar25 = pbStack_178;
        if (puVar20 == (undefined *)0x8000000000000000) goto LAB_101418ee8;
        puStack_158 = puStack_128;
        pbStack_160 = pbStack_130;
        pbStack_148 = pbStack_118;
        pbStack_150 = pbStack_120;
        puStack_170 = puVar20;
        pbStack_168 = pbVar9;
        if (pbStack_178 == pbStack_188) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h20812506ba72c632E(&pbStack_188);
        }
        pbVar11 = pbStack_180 + (long)pbVar25 * 0x30;
        *(byte **)(pbVar11 + 8) = pbStack_168;
        *(undefined **)pbVar11 = puStack_170;
        *(undefined **)(pbVar11 + 0x18) = puStack_158;
        *(byte **)(pbVar11 + 0x10) = pbStack_160;
        *(byte **)(pbVar11 + 0x28) = pbStack_148;
        *(byte **)(pbVar11 + 0x20) = pbStack_150;
        pbStack_178 = pbVar25 + 1;
        pbVar25 = pbVar10;
        pbVar18 = pbVar19;
      } while (pbVar19 != pbVar10);
    }
    pbVar11 = pbStack_178;
    pbVar18 = pbStack_180;
    pbVar21 = pbStack_188;
    pbStack_e8 = pbStack_180;
    pbStack_f0 = pbStack_188;
    pbStack_e0 = pbStack_178;
    pbVar19 = pbVar25;
    if (pbStack_188 == (byte *)0x8000000000000000) {
LAB_101418f3c:
      lVar23 = ((ulong)((long)pbVar10 - (long)pbVar19) >> 5) + 1;
      while (lVar23 = lVar23 + -1, pbVar18 = pbVar2, pbVar21 = pbVar1, lVar23 != 0) {
        FUN_100e077ec(pbVar19);
        pbVar19 = pbVar19 + 0x20;
      }
    }
    else {
      pbVar10 = (byte *)FUN_100fbc738(&pbStack_1b0);
      if (pbVar10 == (byte *)0x0) {
        param_1[1] = pbStack_e8;
        *param_1 = pbStack_f0;
        param_1[2] = pbStack_e0;
        return;
      }
      pbStack_e8 = pbVar10;
      if (pbVar11 != (byte *)0x0) {
        pbVar10 = pbVar18 + 0x20;
        do {
          if (*(long *)(pbVar10 + -0x20) != 0) {
            _free(*(undefined8 *)(pbVar10 + -0x18));
          }
          if (*(long *)(pbVar10 + -8) != 0) {
            _free(*(undefined8 *)pbVar10);
          }
          pbVar10 = pbVar10 + 0x30;
          pbVar11 = pbVar11 + -1;
        } while (pbVar11 != (byte *)0x0);
      }
    }
    if (pbVar21 != (byte *)0x0) {
      _free(pbVar18);
    }
  }
  else {
    pbStack_e8 = (byte *)FUN_108855b04(param_2,&puStack_a0,&UNK_10b209f00);
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = pbStack_e8;
  return;
}

