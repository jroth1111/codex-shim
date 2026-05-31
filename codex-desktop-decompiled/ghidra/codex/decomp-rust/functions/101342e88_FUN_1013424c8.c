
/* WARNING: Removing unreachable block (ram,0x000101342d58) */

void FUN_1013424c8(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  code *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  char *pcVar21;
  char *pcVar23;
  char *pcVar24;
  undefined *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  long lVar28;
  undefined **ppuVar29;
  byte *pbVar30;
  undefined **ppuVar31;
  undefined *puVar32;
  undefined8 uVar33;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  ulong uStack_1a0;
  char *pcStack_198;
  long lStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
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
  char acStack_110 [8];
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
  undefined **ppuStack_b0;
  undefined *puStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  int *piStack_80;
  int *piStack_78;
  long lStack_70;
  char *pcVar22;
  
  if (*param_2 == '\x14') {
    uVar20 = *(ulong *)(param_2 + 8);
    pcVar2 = *(char **)(param_2 + 0x10);
    uVar10 = *(ulong *)(param_2 + 0x18);
    pcVar24 = pcVar2 + uVar10 * 0x20;
    lStack_190 = 0;
    uVar18 = uVar10;
    if (0x5554 < uVar10) {
      uVar18 = 0x5555;
    }
    pcStack_1b0 = pcVar2;
    pcStack_1a8 = pcVar2;
    uStack_1a0 = uVar20;
    pcStack_198 = pcVar24;
    if (uVar10 == 0) {
      uStack_188 = 0;
      uStack_180 = 8;
      uStack_178 = 0;
      pcVar23 = pcVar2;
    }
    else {
      uVar10 = _malloc(uVar18 * 0x30);
      if (uVar10 == 0) {
        func_0x0001087c9084(8,uVar18 * 0x30);
LAB_1013431a0:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1013431a4);
        (*pcVar7)();
      }
      lVar28 = 0;
      puVar11 = (undefined8 *)((ulong)acStack_110 | 1);
      uStack_178 = 0;
      puVar19 = (undefined8 *)((ulong)&uStack_88 | 1);
      puVar12 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      pcVar22 = pcVar2;
      uStack_188 = uVar18;
      uStack_180 = uVar10;
      do {
        lVar17 = lStack_f8;
        pbVar1 = pbStack_100;
        lVar16 = lStack_108;
        pcVar21 = pcVar22 + 0x20;
        cVar3 = *pcVar22;
        pcVar23 = pcVar21;
        pcStack_1a8 = pcVar21;
        if (cVar3 == '\x16') break;
        uVar33 = *(undefined8 *)(pcVar22 + 1);
        puVar11[1] = *(undefined8 *)(pcVar22 + 9);
        *puVar11 = uVar33;
        uVar33 = *(undefined8 *)(pcVar22 + 0x10);
        *(undefined8 *)((long)puVar11 + 0x17) = *(undefined8 *)(pcVar22 + 0x18);
        *(undefined8 *)((long)puVar11 + 0xf) = uVar33;
        lVar28 = lVar28 + 1;
        lStack_190 = lVar28;
        acStack_110[0] = cVar3;
        if (cVar3 != '\x14') {
          if (cVar3 == '\x15') {
            lVar16 = lStack_f8 * 0x40;
            pbVar1 = pbStack_100 + lVar16;
            pbStack_d0 = pbStack_100;
            pbStack_c8 = pbStack_100;
            lStack_c0 = lStack_108;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            ppuStack_b0 = (undefined **)0x0;
            pbStack_b8 = pbVar1;
            if (lStack_f8 == 0) {
              puVar32 = (undefined *)0x0;
LAB_101342be8:
              puStack_a0 = &UNK_108caaace;
              pbStack_98 = (byte *)0x6;
              puVar25 = (undefined *)0x0;
              uStack_88 = &puStack_a0;
              piStack_80 = (int *)&DAT_100c7b3a0;
              pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_88);
joined_r0x000101342d1c:
              puVar32 = (undefined *)((ulong)puVar32 & 0x7fffffffffffffff);
joined_r0x000101342ea4:
              puStack_140 = (undefined *)0x8000000000000000;
              pbStack_138 = pbVar9;
              if (puVar32 != (undefined *)0x0) {
                puStack_140 = (undefined *)0x8000000000000000;
                _free(pbStack_1d0);
              }
LAB_101342d20:
              puVar25 = (undefined *)((ulong)puVar25 & 0x7fffffffffffffff);
joined_r0x000101342c8c:
              if (puVar25 != (undefined *)0x0) {
                _free(pbStack_1c8);
              }
              FUN_100d34830(&pbStack_d0);
              if ((char)pbStack_f0 != '\x16') {
                FUN_100e077ec(&pbStack_f0);
              }
LAB_101342d48:
              puVar25 = (undefined *)0x8000000000000000;
            }
            else {
              ppuVar29 = (undefined **)0x0;
              puVar25 = (undefined *)0x8000000000000000;
              puVar32 = (undefined *)0x8000000000000000;
              pbVar9 = pbStack_100;
              do {
                ppuVar6 = uStack_88;
                pbVar26 = pbVar9 + 0x40;
                bVar4 = *pbVar9;
                pbVar30 = pbVar26;
                ppuVar31 = ppuVar29;
                if (bVar4 == 0x16) break;
                uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar4);
                ppuVar31 = uStack_88;
                uVar33 = *(undefined8 *)(pbVar9 + 0x10);
                *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbVar9 + 0x18);
                *(undefined8 *)((long)puVar19 + 0xf) = uVar33;
                uVar33 = *(undefined8 *)(pbVar9 + 1);
                puVar19[1] = *(undefined8 *)(pbVar9 + 9);
                *puVar19 = uVar33;
                pbStack_e8 = *(byte **)(pbVar9 + 0x28);
                pbStack_f0 = *(byte **)(pbVar9 + 0x20);
                pbStack_d8 = *(byte **)(pbVar9 + 0x38);
                lStack_e0 = *(long *)(pbVar9 + 0x30);
                if (bVar4 < 0xd) {
                  if (bVar4 == 1) {
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
                    if (bVar4 != 4) {
                      if (bVar4 == 0xc) {
                        if (lStack_70 == 5) {
                          iVar14 = 1;
                          if (*piStack_78 != 0x6f727265 || (char)piStack_78[1] != 'r') {
                            iVar14 = 2;
                          }
                        }
                        else if (lStack_70 == 6) {
                          iVar14 = 2;
                          if (*piStack_78 == 0x76726573 && (short)piStack_78[1] == 0x7265) {
                            iVar14 = 0;
                          }
                        }
                        else {
                          iVar14 = 2;
                        }
                        goto joined_r0x0001013428bc;
                      }
LAB_101342ef8:
                      ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                      pbStack_c8 = pbVar26;
                      pbVar9 = (byte *)FUN_108855b04(&uStack_88,&puStack_a0,&UNK_10b20fb20);
                      goto joined_r0x000101342d1c;
                    }
                    iVar15 = 1;
                    if (piStack_80 != (int *)0x1) {
                      iVar15 = 2;
                    }
                    iVar14 = 0;
                    if (piStack_80 != (int *)0x0) {
                      iVar14 = iVar15;
                    }
                  }
LAB_10134293c:
                  uStack_88 = ppuVar31;
                  FUN_100e077ec(&uStack_88);
                }
                else {
                  if (bVar4 == 0xd) {
                    if (piStack_78 == (int *)0x5) {
                      iVar14 = 1;
                      if (*piStack_80 != 0x6f727265 || (char)piStack_80[1] != 'r') {
                        iVar14 = 2;
                      }
                    }
                    else {
                      if (piStack_78 != (int *)0x6) goto LAB_101342908;
                      iVar14 = 2;
                      if (*piStack_80 == 0x76726573 && (short)piStack_80[1] == 0x7265) {
                        iVar14 = 0;
                      }
                    }
                    goto LAB_10134293c;
                  }
                  if (bVar4 != 0xe) {
                    if (bVar4 != 0xf) goto LAB_101342ef8;
                    if (piStack_78 == (int *)0x5) {
                      if (((((char)*piStack_80 != 'e') || (*(char *)((long)piStack_80 + 1) != 'r'))
                          || (*(char *)((long)piStack_80 + 2) != 'r')) ||
                         ((*(char *)((long)piStack_80 + 3) != 'o' || ((char)piStack_80[1] != 'r'))))
                      goto LAB_101342908;
                      iVar14 = 1;
                    }
                    else if (((piStack_78 == (int *)0x6) && ((char)*piStack_80 == 's')) &&
                            ((*(char *)((long)piStack_80 + 1) == 'e' &&
                             ((((*(char *)((long)piStack_80 + 2) == 'r' &&
                                (*(char *)((long)piStack_80 + 3) == 'v')) &&
                               ((char)piStack_80[1] == 'e')) &&
                              (*(char *)((long)piStack_80 + 5) == 'r')))))) {
                      iVar14 = 0;
                    }
                    else {
LAB_101342908:
                      iVar14 = 2;
                    }
                    goto LAB_10134293c;
                  }
                  if (lStack_70 == 5) {
                    if ((((char)*piStack_78 != 'e') || (*(char *)((long)piStack_78 + 1) != 'r')) ||
                       ((*(char *)((long)piStack_78 + 2) != 'r' ||
                        ((*(char *)((long)piStack_78 + 3) != 'o' || ((char)piStack_78[1] != 'r')))))
                       ) goto LAB_101342884;
                    iVar14 = 1;
                  }
                  else if ((((lStack_70 == 6) && ((char)*piStack_78 == 's')) &&
                           (*(char *)((long)piStack_78 + 1) == 'e')) &&
                          (((*(char *)((long)piStack_78 + 2) == 'r' &&
                            (*(char *)((long)piStack_78 + 3) == 'v')) &&
                           (((char)piStack_78[1] == 'e' && (*(char *)((long)piStack_78 + 5) == 'r'))
                           )))) {
                    iVar14 = 0;
                  }
                  else {
LAB_101342884:
                    iVar14 = 2;
                  }
joined_r0x0001013428bc:
                  if (piStack_80 != (int *)0x0) {
                    _free();
                  }
                }
                cVar3 = (char)pbStack_f0;
                if (iVar14 == 0) {
                  if (puVar25 != (undefined *)0x8000000000000000) {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    puStack_a0 = &UNK_108caaace;
                    pbStack_98 = (byte *)0x6;
                    uStack_88 = &puStack_a0;
                    piStack_80 = (int *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar26;
                    pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
                    goto joined_r0x000101342d1c;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar3 == '\x16') {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    pbStack_c8 = pbVar26;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_1013431a0;
                  }
                  uVar33 = *puVar12;
                  puVar19[1] = puVar12[1];
                  *puVar19 = uVar33;
                  uVar33 = *(undefined8 *)((long)puVar12 + 0xf);
                  *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
                  *(undefined8 *)((long)puVar19 + 0xf) = uVar33;
                  uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar3);
                  FUN_1004b62d4(&puStack_a0,&uStack_88);
                  if (puStack_a0 == (undefined *)0x8000000000000000) {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    puVar25 = (undefined *)0x0;
                    pbStack_c8 = pbVar26;
                    pbVar9 = pbStack_98;
                    goto joined_r0x000101342d1c;
                  }
                  pbStack_1c8 = pbStack_98;
                  pbStack_1d8 = pbStack_90;
                  puVar25 = puStack_a0;
                }
                else if (iVar14 == 1) {
                  if (puVar32 != (undefined *)0x8000000000000000) {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    puStack_a0 = &UNK_108ca33da;
                    pbStack_98 = (byte *)0x5;
                    uStack_88 = &puStack_a0;
                    piStack_80 = (int *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar26;
                    pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
                    goto joined_r0x000101342ea4;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar3 == '\x16') {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    pbStack_c8 = pbVar26;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_1013431a0;
                  }
                  uVar33 = *puVar12;
                  puVar19[1] = puVar12[1];
                  *puVar19 = uVar33;
                  uVar33 = *(undefined8 *)((long)puVar12 + 0xf);
                  *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
                  *(undefined8 *)((long)puVar19 + 0xf) = uVar33;
                  uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar3);
                  FUN_1004b62d4(&puStack_a0,&uStack_88);
                  if (puStack_a0 == (undefined *)0x8000000000000000) {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    puStack_140 = (undefined *)0x8000000000000000;
                    pbStack_138 = pbStack_98;
                    pbVar9 = pbStack_98;
                    pbStack_c8 = pbVar26;
                    goto LAB_101342d20;
                  }
                  pbStack_1d0 = pbStack_98;
                  pbStack_1e0 = pbStack_90;
                  puVar32 = puStack_a0;
                }
                else {
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar3 == '\x16') {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    pbStack_c8 = pbVar26;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_1013431a0;
                  }
                  uVar33 = *puVar12;
                  puVar19[1] = puVar12[1];
                  *puVar19 = uVar33;
                  uVar33 = *(undefined8 *)((long)puVar12 + 0xf);
                  *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
                  *(undefined8 *)((long)puVar19 + 0xf) = uVar33;
                  uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar3);
                  FUN_100e077ec(&uStack_88);
                }
                ppuVar29 = (undefined **)((long)ppuVar29 + 1);
                pbVar30 = pbVar1;
                ppuVar31 = (undefined **)((lVar16 - 0x40U >> 6) + 1);
                pbVar9 = pbVar26;
              } while (pbVar26 != pbVar1);
              pbStack_c8 = pbVar30;
              ppuStack_b0 = ppuVar31;
              if (puVar25 == (undefined *)0x8000000000000000) goto LAB_101342be8;
              if (puVar32 == (undefined *)0x8000000000000000) {
                puStack_a0 = &UNK_108ca33da;
                pbStack_98 = (byte *)0x5;
                uStack_88 = &puStack_a0;
                piStack_80 = (int *)&DAT_100c7b3a0;
                pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_88);
                puStack_140 = (undefined *)0x8000000000000000;
                pbStack_138 = pbVar9;
                goto joined_r0x000101342c8c;
              }
              pbStack_138 = pbStack_1c8;
              pbStack_130 = pbStack_1d8;
              pbStack_120 = pbStack_1d0;
              pbStack_118 = pbStack_1e0;
              puStack_140 = puVar25;
              puStack_128 = puVar32;
              FUN_100d34830(&pbStack_d0);
              pbVar9 = pbStack_1c8;
              if (pbVar1 != pbVar30) {
                uStack_88 = ppuVar31;
                pbVar9 = (byte *)FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar30) >> 6) +
                                               (long)ppuVar31,&uStack_88,&UNK_10b23a190);
                puStack_140 = (undefined *)0x8000000000000000;
                pbStack_138 = pbVar9;
                if (puVar25 != (undefined *)0x0) {
                  _free(pbStack_1c8);
                }
                if (puVar32 != (undefined *)0x0) {
                  _free(pbStack_1d0);
                  puVar25 = (undefined *)0x8000000000000000;
                  goto LAB_101342d60;
                }
                goto LAB_101342d48;
              }
            }
            goto LAB_101342d60;
          }
          pbVar9 = (byte *)FUN_108855b04(acStack_110,&puStack_a0,&UNK_10b20cb80);
LAB_1013430b8:
          uVar18 = uStack_180;
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar9;
          if (uStack_178 != 0) {
            puVar11 = (undefined8 *)(uStack_180 + 0x20);
            uVar10 = uStack_178;
            do {
              if (puVar11[-4] != 0) {
                _free(puVar11[-3]);
              }
              if (puVar11[-1] != 0) {
                _free(*puVar11);
              }
              puVar11 = puVar11 + 6;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          if (uStack_188 != 0) {
            _free(uVar18);
          }
          goto LAB_101343114;
        }
        pbVar26 = pbStack_100 + lStack_f8 * 0x20;
        pbStack_f0 = pbStack_100;
        lStack_e0 = lStack_108;
        pbStack_d0 = (byte *)0x0;
        pbVar30 = pbStack_100;
        pbStack_d8 = pbVar26;
        if (lStack_f8 == 0) {
LAB_101342a98:
          pbStack_e8 = pbVar30;
          pbVar8 = (byte *)FUN_1087e422c(0,&UNK_10b22d640,&UNK_10b20a590);
LAB_101342ab4:
          puStack_140 = (undefined *)0x8000000000000000;
          pbStack_138 = pbVar8;
LAB_101342ac0:
          lVar17 = ((ulong)((long)pbVar26 - (long)pbVar30) >> 5) + 1;
          while (lVar17 = lVar17 + -1, lVar17 != 0) {
            FUN_100e077ec(pbVar30);
            pbVar30 = pbVar30 + 0x20;
          }
          pbVar27 = pbVar1;
          if (lVar16 == 0) {
            puVar25 = (undefined *)0x8000000000000000;
            pbVar9 = pbVar8;
            goto LAB_101342d60;
          }
        }
        else {
          pbVar30 = pbStack_100 + 0x20;
          bVar4 = *pbStack_100;
          if (bVar4 == 0x16) goto LAB_101342a98;
          uVar33 = *(undefined8 *)(pbStack_100 + 1);
          puVar19[1] = *(undefined8 *)(pbStack_100 + 9);
          *puVar19 = uVar33;
          uVar33 = *(undefined8 *)(pbStack_100 + 0x10);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbStack_100 + 0x18);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar33;
          pbStack_d0 = (byte *)0x1;
          uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar4);
          pbStack_e8 = pbVar30;
          FUN_1004b62d4(&puStack_a0,&uStack_88);
          pbVar5 = pbStack_90;
          pbVar9 = pbStack_98;
          puVar25 = puStack_a0;
          pbVar8 = pbStack_98;
          if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_101342ab4;
          if (lVar17 == 1) {
LAB_101342b8c:
            pbVar8 = (byte *)FUN_1087e422c(1,&UNK_10b22d640,&UNK_10b20a590);
LAB_101342ba8:
            puStack_140 = (undefined *)0x8000000000000000;
            pbStack_138 = pbVar8;
            if (puVar25 != (undefined *)0x0) {
              _free(pbVar9);
            }
            goto LAB_101342ac0;
          }
          pbVar30 = pbVar1 + 0x40;
          bVar4 = pbVar1[0x20];
          pbStack_e8 = pbVar30;
          if (bVar4 == 0x16) goto LAB_101342b8c;
          pbStack_1c8 = pbStack_90;
          uVar33 = *(undefined8 *)(pbVar1 + 0x21);
          puVar19[1] = *(undefined8 *)(pbVar1 + 0x29);
          *puVar19 = uVar33;
          uVar33 = *(undefined8 *)(pbVar1 + 0x30);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbVar1 + 0x38);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar33;
          pbStack_d0 = (byte *)0x2;
          uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar4);
          FUN_1004b62d4(&puStack_a0,&uStack_88);
          pbVar27 = pbStack_98;
          puVar32 = puStack_a0;
          pbVar8 = pbStack_98;
          if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_101342ba8;
          puStack_140 = puVar25;
          pbStack_138 = pbVar9;
          pbStack_130 = pbVar5;
          puStack_128 = puStack_a0;
          pbStack_120 = pbStack_98;
          pbStack_118 = pbStack_90;
          pbVar8 = (byte *)FUN_100fbc738(&pbStack_f0);
          if (pbVar8 == (byte *)0x0) goto LAB_101342d60;
          puStack_140 = (undefined *)0x8000000000000000;
          pbStack_138 = pbVar8;
          if (puVar25 != (undefined *)0x0) {
            _free(pbVar9);
          }
          if (puVar32 == (undefined *)0x0) {
            puVar25 = (undefined *)0x8000000000000000;
            pbVar9 = pbVar8;
            goto LAB_101342d60;
          }
        }
        _free(pbVar27);
        puVar25 = (undefined *)0x8000000000000000;
        pbVar9 = pbVar8;
LAB_101342d60:
        uVar18 = uStack_178;
        if (puVar25 == (undefined *)0x8000000000000000) goto LAB_1013430b8;
        puStack_158 = puStack_128;
        pbStack_160 = pbStack_130;
        pbStack_148 = pbStack_118;
        pbStack_150 = pbStack_120;
        puStack_170 = puVar25;
        pbStack_168 = pbVar9;
        if (uStack_178 == uStack_188) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h816791db0ae322fdE(&uStack_188);
        }
        puVar13 = (undefined8 *)(uStack_180 + uVar18 * 0x30);
        puVar13[1] = pbStack_168;
        *puVar13 = puStack_170;
        puVar13[3] = puStack_158;
        puVar13[2] = pbStack_160;
        puVar13[5] = pbStack_148;
        puVar13[4] = pbStack_150;
        uStack_178 = uVar18 + 1;
        pcVar23 = pcVar24;
        pcVar22 = pcVar21;
      } while (pcVar21 != pcVar24);
    }
    param_1[1] = uStack_180;
    *param_1 = uStack_188;
    param_1[2] = uStack_178;
    uVar18 = *param_1;
    pcVar21 = pcVar23;
    if (uVar18 == 0x8000000000000000) {
LAB_101343114:
      lVar28 = ((ulong)((long)pcVar24 - (long)pcVar21) >> 5) + 1;
      while (lVar28 = lVar28 + -1, uVar18 = uVar20, lVar28 != 0) {
        FUN_100e077ec(pcVar21);
        pcVar21 = pcVar21 + 0x20;
      }
    }
    else {
      pcVar2 = (char *)param_1[1];
      uVar20 = param_1[2];
      uVar10 = FUN_100fbc738(&pcStack_1b0);
      if (uVar10 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar10;
      if (uVar20 != 0) {
        pcVar24 = pcVar2 + 0x20;
        do {
          if (*(long *)(pcVar24 + -0x20) != 0) {
            _free(*(undefined8 *)(pcVar24 + -0x18));
          }
          if (*(long *)(pcVar24 + -8) != 0) {
            _free(*(undefined8 *)pcVar24);
          }
          pcVar24 = pcVar24 + 0x30;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    if (uVar18 != 0) {
      _free(pcVar2);
    }
  }
  else {
    uVar18 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20a480);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar18;
  }
  return;
}

