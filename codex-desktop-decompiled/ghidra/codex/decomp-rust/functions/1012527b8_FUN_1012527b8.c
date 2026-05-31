
void FUN_1012527b8(ulong *param_1,char *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined *puVar8;
  byte *pbVar9;
  undefined **ppuVar10;
  code *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  undefined *puVar25;
  byte *pbVar26;
  bool bVar27;
  undefined *puVar28;
  undefined **ppuVar29;
  byte *pbVar30;
  undefined **ppuVar31;
  long lVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  undefined *puVar36;
  undefined8 uVar37;
  byte *pbStack_238;
  byte *pbStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  byte *pbStack_208;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  ulong uStack_1d0;
  byte *pbStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined *puStack_1a0;
  byte *pbStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  byte *pbStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  byte *pbStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  byte *pbStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  byte *pbStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  byte *pbStack_120;
  undefined *puStack_118;
  byte abStack_110 [8];
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
  undefined *puStack_90;
  undefined8 uStack_88;
  int *piStack_80;
  int *piStack_78;
  long lStack_70;
  
  if (*param_2 == '\x14') {
    uVar23 = *(ulong *)(param_2 + 8);
    pbVar4 = *(byte **)(param_2 + 0x10);
    uVar15 = *(ulong *)(param_2 + 0x18);
    pbVar26 = pbVar4 + uVar15 * 0x20;
    lStack_1c0 = 0;
    uVar21 = uVar15;
    if (0x38e2 < uVar15) {
      uVar21 = 0x38e3;
    }
    pbStack_1e0 = pbVar4;
    pbStack_1d8 = pbVar4;
    uStack_1d0 = uVar23;
    pbStack_1c8 = pbVar26;
    if (uVar15 == 0) {
      uStack_1b8 = 0;
      uStack_1b0 = 8;
      uStack_1a8 = 0;
      pbVar34 = pbVar4;
    }
    else {
      uVar15 = _malloc(uVar21 * 0x48);
      if (uVar15 == 0) {
        func_0x0001087c9084(8,uVar21 * 0x48);
LAB_101253738:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10125373c);
        (*pcVar11)();
      }
      lVar32 = 0;
      puVar16 = (undefined8 *)((ulong)abStack_110 | 1);
      uStack_1a8 = 0;
      puVar20 = (undefined8 *)((ulong)&uStack_88 | 1);
      puVar17 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      pbVar13 = pbVar4;
      uStack_1b8 = uVar21;
      uStack_1b0 = uVar15;
      do {
        lVar22 = lStack_f8;
        pbVar35 = pbStack_100;
        lVar19 = lStack_108;
        pbVar24 = pbVar13 + 0x20;
        bVar5 = *pbVar13;
        pbVar34 = pbVar24;
        pbStack_1d8 = pbVar24;
        if (bVar5 == 0x16) break;
        uVar37 = *(undefined8 *)(pbVar13 + 1);
        puVar16[1] = *(undefined8 *)(pbVar13 + 9);
        *puVar16 = uVar37;
        uVar37 = *(undefined8 *)(pbVar13 + 0x10);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar37;
        lVar32 = lVar32 + 1;
        lStack_1c0 = lVar32;
        abStack_110[0] = bVar5;
        if (bVar5 != 0x14) {
          if (bVar5 == 0x15) {
            lVar19 = lStack_f8 * 0x40;
            pbVar34 = pbStack_100 + lVar19;
            pbStack_d0 = pbStack_100;
            pbStack_c8 = pbStack_100;
            lStack_c0 = lStack_108;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            ppuStack_b0 = (undefined **)0x0;
            pbStack_b8 = pbVar34;
            if (lStack_f8 == 0) {
              puVar36 = (undefined *)0x8000000000000001;
              puVar28 = (undefined *)0x0;
LAB_101252f8c:
              puStack_a0 = &UNK_108c61038;
              pbStack_98 = (byte *)0x4;
              puVar25 = (undefined *)0x0;
              uStack_88 = &puStack_a0;
              piStack_80 = (int *)&DAT_100c7b3a0;
              pbStack_150 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_88);
LAB_101252fcc:
              puStack_158 = (undefined *)0x8000000000000000;
              bVar27 = true;
              pbVar13 = pbStack_150;
LAB_101252fd0:
              if (puVar36 != (undefined *)0x8000000000000001) {
joined_r0x0001012533c0:
                if (((ulong)puVar36 & 0x7fffffffffffffff) != 0) {
                  _free(pbStack_238);
                }
              }
LAB_1012530c4:
              if (((ulong)puVar28 & 0x7fffffffffffffff) == 0) {
                bVar1 = false;
                if (((ulong)puVar25 & 0x7fffffffffffffff) != 0) {
                  bVar1 = bVar27;
                }
                if (bVar1) {
LAB_1012530d8:
                  _free(pbStack_208);
                }
              }
              else {
                _free(pbStack_230);
                bVar1 = false;
                if (((ulong)puVar25 & 0x7fffffffffffffff) != 0) {
                  bVar1 = bVar27;
                }
                if (bVar1) goto LAB_1012530d8;
              }
              FUN_100d34830(&pbStack_d0);
              if ((char)pbStack_f0 != '\x16') {
                FUN_100e077ec(&pbStack_f0);
              }
            }
            else {
              ppuVar29 = (undefined **)0x0;
              puVar36 = (undefined *)0x8000000000000001;
              puVar25 = (undefined *)0x8000000000000000;
              puVar28 = (undefined *)0x8000000000000000;
              pbVar13 = pbStack_100;
              do {
                ppuVar10 = uStack_88;
                pbVar33 = pbVar13 + 0x40;
                bVar6 = *pbVar13;
                ppuVar31 = ppuVar29;
                pbVar35 = pbVar33;
                if (bVar6 == 0x16) break;
                uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar6);
                ppuVar31 = uStack_88;
                uVar37 = *(undefined8 *)(pbVar13 + 0x10);
                *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
                *(undefined8 *)((long)puVar20 + 0xf) = uVar37;
                uVar37 = *(undefined8 *)(pbVar13 + 1);
                puVar20[1] = *(undefined8 *)(pbVar13 + 9);
                *puVar20 = uVar37;
                pbStack_e8 = *(byte **)(pbVar13 + 0x28);
                pbStack_f0 = *(byte **)(pbVar13 + 0x20);
                pbStack_d8 = *(byte **)(pbVar13 + 0x38);
                lStack_e0 = *(long *)(pbVar13 + 0x30);
                if (bVar6 < 0xd) {
                  if (bVar6 == 1) {
                    uStack_88._1_1_ = SUB81(ppuVar10,1);
                    uVar14 = (uint)uStack_88._1_1_;
                    if (2 < uVar14) {
                      uVar14 = 3;
                    }
                  }
                  else {
                    if (bVar6 != 4) {
                      if (bVar6 != 0xc) goto LAB_101253414;
                      if (lStack_70 == 3) {
                        if ((short)*piStack_78 != 0x7763 || *(char *)((long)piStack_78 + 2) != 'd')
                        goto LAB_101252bf4;
                        uVar14 = 1;
                      }
                      else if (lStack_70 == 5) {
                        if (*piStack_78 != 0x6c746974 || (char)piStack_78[1] != 'e')
                        goto LAB_101252bf4;
                        uVar14 = 2;
                      }
                      else if ((lStack_70 == 4) && (*piStack_78 == 0x68746170)) {
                        uVar14 = 0;
                      }
                      else {
LAB_101252bf4:
                        uVar14 = 3;
                      }
                      goto joined_r0x0001012529dc;
                    }
                    piVar2 = piStack_80;
                    if ((int *)0x2 < piStack_80) {
                      piVar2 = (int *)0x3;
                    }
                    uVar14 = (uint)piVar2;
                  }
LAB_101252c74:
                  uStack_88 = ppuVar31;
                  FUN_100e077ec(&uStack_88);
                }
                else {
                  if (bVar6 == 0xd) {
                    if (piStack_78 == (int *)0x3) {
                      if ((short)*piStack_80 != 0x7763 || *(char *)((long)piStack_80 + 2) != 'd')
                      goto LAB_101252c70;
LAB_101252e04:
                      uVar14 = 1;
                    }
                    else if (piStack_78 == (int *)0x5) {
                      if (*piStack_80 != 0x6c746974 || (char)piStack_80[1] != 'e')
                      goto LAB_101252c70;
LAB_101252c4c:
                      uVar14 = 2;
                    }
                    else if ((piStack_78 == (int *)0x4) && (*piStack_80 == 0x68746170)) {
LAB_101252ae8:
                      uVar14 = 0;
                    }
                    else {
LAB_101252c70:
                      uVar14 = 3;
                    }
                    goto LAB_101252c74;
                  }
                  if (bVar6 != 0xe) {
                    if (bVar6 == 0xf) {
                      if (piStack_78 == (int *)0x3) {
                        if ((((char)*piStack_80 == 'c') && (*(char *)((long)piStack_80 + 1) == 'w'))
                           && (*(char *)((long)piStack_80 + 2) == 'd')) goto LAB_101252e04;
                      }
                      else if (piStack_78 == (int *)0x5) {
                        if ((((char)*piStack_80 == 't') && (*(char *)((long)piStack_80 + 1) == 'i'))
                           && ((*(char *)((long)piStack_80 + 2) == 't' &&
                               ((*(char *)((long)piStack_80 + 3) == 'l' &&
                                ((char)piStack_80[1] == 'e')))))) goto LAB_101252c4c;
                      }
                      else if ((((piStack_78 == (int *)0x4) && ((char)*piStack_80 == 'p')) &&
                               (*(char *)((long)piStack_80 + 1) == 'a')) &&
                              ((*(char *)((long)piStack_80 + 2) == 't' &&
                               (*(char *)((long)piStack_80 + 3) == 'h')))) goto LAB_101252ae8;
                      goto LAB_101252c70;
                    }
LAB_101253414:
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    pbStack_c8 = pbVar33;
                    pbStack_150 = (byte *)FUN_108855b04(&uStack_88,&puStack_a0,&UNK_10b210c40);
                    goto LAB_101252fcc;
                  }
                  if (lStack_70 == 3) {
                    if ((((char)*piStack_78 != 'c') || (*(char *)((long)piStack_78 + 1) != 'w')) ||
                       (*(char *)((long)piStack_78 + 2) != 'd')) goto LAB_101252bcc;
                    uVar14 = 1;
                  }
                  else if (lStack_70 == 5) {
                    if (((((char)*piStack_78 != 't') || (*(char *)((long)piStack_78 + 1) != 'i')) ||
                        (*(char *)((long)piStack_78 + 2) != 't')) ||
                       ((*(char *)((long)piStack_78 + 3) != 'l' || ((char)piStack_78[1] != 'e'))))
                    goto LAB_101252bcc;
                    uVar14 = 2;
                  }
                  else if (((lStack_70 == 4) && ((char)*piStack_78 == 'p')) &&
                          ((*(char *)((long)piStack_78 + 1) == 'a' &&
                           ((*(char *)((long)piStack_78 + 2) == 't' &&
                            (*(char *)((long)piStack_78 + 3) == 'h')))))) {
                    uVar14 = 0;
                  }
                  else {
LAB_101252bcc:
                    uVar14 = 3;
                  }
joined_r0x0001012529dc:
                  if (piStack_80 != (int *)0x0) {
                    _free();
                  }
                }
                uVar14 = uVar14 & 0xff;
                cVar7 = (char)pbStack_f0;
                if (uVar14 < 2) {
                  if (uVar14 == 0) {
                    if (puVar25 != (undefined *)0x8000000000000000) {
                      ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                      puStack_a0 = &UNK_108c61038;
                      pbStack_98 = (byte *)0x4;
                      uStack_88 = &puStack_a0;
                      piStack_80 = (int *)&DAT_100c7b3a0;
                      pbStack_c8 = pbVar33;
                      pbStack_150 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88
                                                         );
                      goto LAB_101252fcc;
                    }
                    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                    if (cVar7 == '\x16') {
                      ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                      pbStack_c8 = pbVar33;
                      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_101253738;
                    }
                    uVar37 = *puVar17;
                    puVar20[1] = puVar17[1];
                    *puVar20 = uVar37;
                    uVar37 = *(undefined8 *)((long)puVar17 + 0xf);
                    *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                    *(undefined8 *)((long)puVar20 + 0xf) = uVar37;
                    uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar7);
                    FUN_1004b64d4(&puStack_a0,&uStack_88);
                    if (puStack_a0 == (undefined *)0x8000000000000000) {
                      puVar25 = (undefined *)0x0;
LAB_1012531b0:
                      ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                      puStack_158 = (undefined *)0x8000000000000000;
                      bVar27 = true;
                      pbVar13 = pbStack_98;
                      pbStack_150 = pbStack_98;
                      pbStack_c8 = pbVar33;
                      goto LAB_101252fd0;
                    }
                    pbStack_208 = pbStack_98;
                    puStack_218 = puStack_90;
                    puVar25 = puStack_a0;
                  }
                  else {
                    if (puVar28 != (undefined *)0x8000000000000000) {
                      ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                      puStack_a0 = &UNK_108ca1f1d;
                      pbStack_98 = (byte *)0x3;
                      uStack_88 = &puStack_a0;
                      piStack_80 = (int *)&DAT_100c7b3a0;
                      pbStack_c8 = pbVar33;
                      pbStack_150 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88
                                                         );
                      goto LAB_101252fcc;
                    }
                    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                    if (cVar7 == '\x16') {
                      ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                      pbStack_c8 = pbVar33;
                      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_101253738;
                    }
                    uVar37 = *puVar17;
                    puVar20[1] = puVar17[1];
                    *puVar20 = uVar37;
                    uVar37 = *(undefined8 *)((long)puVar17 + 0xf);
                    *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                    *(undefined8 *)((long)puVar20 + 0xf) = uVar37;
                    uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar7);
                    FUN_1004b64d4(&puStack_a0,&uStack_88);
                    if (puStack_a0 == (undefined *)0x8000000000000000) {
                      puVar28 = (undefined *)0x0;
                      goto LAB_1012531b0;
                    }
                    pbStack_230 = pbStack_98;
                    puStack_220 = puStack_90;
                    puVar28 = puStack_a0;
                  }
                }
                else if (uVar14 == 2) {
                  if (puVar36 != (undefined *)0x8000000000000001) {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    puStack_a0 = &UNK_108ca1558;
                    pbStack_98 = (byte *)0x5;
                    uStack_88 = &puStack_a0;
                    piStack_80 = (int *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar33;
                    pbVar13 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
                    puStack_158 = (undefined *)0x8000000000000000;
                    bVar27 = true;
                    pbStack_150 = pbVar13;
                    goto joined_r0x0001012533c0;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar7 == '\x16') {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    pbStack_c8 = pbVar33;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_101253738;
                  }
                  uVar37 = *puVar17;
                  puVar20[1] = puVar17[1];
                  *puVar20 = uVar37;
                  uVar37 = *(undefined8 *)((long)puVar17 + 0xf);
                  *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                  *(undefined8 *)((long)puVar20 + 0xf) = uVar37;
                  uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar7);
                  FUN_1004b60cc(&puStack_a0,&uStack_88);
                  if (puStack_a0 == (undefined *)0x8000000000000001) {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    puStack_158 = (undefined *)0x8000000000000000;
                    pbStack_150 = pbStack_98;
                    bVar27 = true;
                    pbVar13 = pbStack_98;
                    pbStack_c8 = pbVar33;
                    goto LAB_1012530c4;
                  }
                  pbStack_238 = pbStack_98;
                  puStack_228 = puStack_90;
                  puVar36 = puStack_a0;
                }
                else {
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar7 == '\x16') {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    pbStack_c8 = pbVar33;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_101253738;
                  }
                  uVar37 = *puVar17;
                  puVar20[1] = puVar17[1];
                  *puVar20 = uVar37;
                  uVar37 = *(undefined8 *)((long)puVar17 + 0xf);
                  *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
                  *(undefined8 *)((long)puVar20 + 0xf) = uVar37;
                  uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar7);
                  FUN_100e077ec(&uStack_88);
                }
                ppuVar29 = (undefined **)((long)ppuVar29 + 1);
                ppuVar31 = (undefined **)((lVar19 - 0x40U >> 6) + 1);
                pbVar35 = pbVar34;
                pbVar13 = pbVar33;
              } while (pbVar33 != pbVar34);
              pbStack_c8 = pbVar35;
              ppuStack_b0 = ppuVar31;
              if (puVar25 == (undefined *)0x8000000000000000) goto LAB_101252f8c;
              if (puVar28 == (undefined *)0x8000000000000000) {
                puStack_a0 = &UNK_108ca1f1d;
                pbStack_98 = (byte *)0x3;
                uStack_88 = &puStack_a0;
                piStack_80 = (int *)&DAT_100c7b3a0;
                pbVar13 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_88);
                puVar28 = (undefined *)0x0;
                puStack_158 = (undefined *)0x8000000000000000;
                pbStack_150 = pbVar13;
                if (puVar25 != (undefined *)0x0) {
                  _free(pbStack_208);
                }
                bVar27 = false;
                goto LAB_101252fd0;
              }
              puVar3 = (undefined *)0x8000000000000000;
              if (puVar36 != (undefined *)0x8000000000000001) {
                puVar3 = puVar36;
              }
              pbStack_150 = pbStack_208;
              puStack_148 = puStack_218;
              pbStack_138 = pbStack_230;
              puStack_130 = puStack_220;
              pbStack_120 = pbStack_238;
              puStack_118 = puStack_228;
              puStack_158 = puVar25;
              puStack_140 = puVar28;
              puStack_128 = puVar3;
              FUN_100d34830(&pbStack_d0);
              pbVar13 = pbStack_208;
              if (pbVar34 == pbVar35) goto LAB_101253108;
              uStack_88 = ppuVar31;
              pbVar13 = (byte *)FUN_1087e422c(((ulong)((long)pbVar34 - (long)pbVar35) >> 6) +
                                              (long)ppuVar31,&uStack_88,&UNK_10b23a190);
              puStack_158 = (undefined *)0x8000000000000000;
              pbStack_150 = pbVar13;
              if (puVar25 != (undefined *)0x0) {
                _free(pbStack_208);
              }
              if (puVar28 != (undefined *)0x0) {
                _free(pbStack_230);
              }
              if (((ulong)puVar3 & 0x7fffffffffffffff) != 0) {
                _free(pbStack_238);
              }
            }
            puVar25 = (undefined *)0x8000000000000000;
            goto LAB_101253108;
          }
          pbVar13 = (byte *)FUN_108855b04(abStack_110,&puStack_a0,&UNK_10b20bd00);
LAB_101253638:
          uVar21 = uStack_1b0;
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar13;
          if (uStack_1a8 != 0) {
            puVar16 = (undefined8 *)(uStack_1b0 + 0x20);
            uVar15 = uStack_1a8;
            do {
              if (puVar16[-4] != 0) {
                _free(puVar16[-3]);
              }
              if (puVar16[-1] != 0) {
                _free(*puVar16);
              }
              if (puVar16[2] != -0x8000000000000000 && puVar16[2] != 0) {
                _free(puVar16[3]);
              }
              puVar16 = puVar16 + 9;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          if (uStack_1b8 != 0) {
            _free(uVar21);
          }
          goto LAB_1012536ac;
        }
        pbVar33 = pbStack_100 + lStack_f8 * 0x20;
        pbStack_f0 = pbStack_100;
        lStack_e0 = lStack_108;
        pbStack_d0 = (byte *)0x0;
        pbVar34 = pbStack_100;
        pbStack_d8 = pbVar33;
        if (lStack_f8 == 0) {
LAB_101252e50:
          pbStack_e8 = pbVar34;
          pbVar12 = (byte *)FUN_1087e422c(0,&UNK_10b2317b8,&UNK_10b20a590);
LAB_101252e6c:
          puStack_158 = (undefined *)0x8000000000000000;
          pbStack_150 = pbVar12;
LAB_101252e78:
          lVar22 = ((ulong)((long)pbVar33 - (long)pbVar34) >> 5) + 1;
          while (lVar22 = lVar22 + -1, lVar22 != 0) {
            FUN_100e077ec(pbVar34);
            pbVar34 = pbVar34 + 0x20;
          }
          pbVar30 = pbVar35;
          if (lVar19 == 0) {
            puVar25 = (undefined *)0x8000000000000000;
            pbVar13 = pbVar12;
            goto LAB_101253108;
          }
        }
        else {
          pbVar34 = pbStack_100 + 0x20;
          bVar6 = *pbStack_100;
          if (bVar6 == 0x16) goto LAB_101252e50;
          uVar37 = *(undefined8 *)(pbStack_100 + 1);
          puVar20[1] = *(undefined8 *)(pbStack_100 + 9);
          *puVar20 = uVar37;
          uVar37 = *(undefined8 *)(pbStack_100 + 0x10);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbStack_100 + 0x18);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar37;
          pbStack_d0 = (byte *)0x1;
          uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar6);
          pbStack_e8 = pbVar34;
          FUN_1004b64d4(&puStack_a0,&uStack_88);
          puVar28 = puStack_90;
          pbVar13 = pbStack_98;
          puVar25 = puStack_a0;
          pbVar12 = pbStack_98;
          if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_101252e6c;
          if (lVar22 == 1) {
LAB_101252f2c:
            pbVar12 = (byte *)FUN_1087e422c(1,&UNK_10b2317b8,&UNK_10b20a590);
LAB_101252f48:
            puStack_158 = (undefined *)0x8000000000000000;
            pbStack_150 = pbVar12;
LAB_101252f50:
            if (puVar25 != (undefined *)0x0) {
              _free(pbVar13);
            }
            goto LAB_101252e78;
          }
          pbVar34 = pbVar35 + 0x40;
          bVar6 = pbVar35[0x20];
          pbStack_e8 = pbVar34;
          if (bVar6 == 0x16) goto LAB_101252f2c;
          uVar37 = *(undefined8 *)(pbVar35 + 0x21);
          puVar20[1] = *(undefined8 *)(pbVar35 + 0x29);
          *puVar20 = uVar37;
          uVar37 = *(undefined8 *)(pbVar35 + 0x30);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar35 + 0x38);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar37;
          pbStack_d0 = (byte *)0x2;
          uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar6);
          FUN_1004b64d4(&puStack_a0,&uStack_88);
          puVar3 = puStack_90;
          pbVar9 = pbStack_98;
          puVar36 = puStack_a0;
          puStack_218 = puStack_a0;
          pbStack_208 = pbStack_98;
          pbVar12 = pbStack_98;
          if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_101252f48;
          if (lVar22 == 2) {
LAB_101253228:
            pbVar12 = (byte *)FUN_1087e422c(2,&UNK_10b2317b8,&UNK_10b20a590);
LAB_101253244:
            puStack_158 = (undefined *)0x8000000000000000;
            pbStack_150 = pbVar12;
            if (puVar36 != (undefined *)0x0) {
              _free(pbVar9);
            }
            goto LAB_101252f50;
          }
          pbVar34 = pbVar35 + 0x60;
          bVar6 = pbVar35[0x40];
          pbStack_e8 = pbVar34;
          if (bVar6 == 0x16) goto LAB_101253228;
          puStack_220 = puStack_90;
          uVar37 = *(undefined8 *)(pbVar35 + 0x41);
          puVar20[1] = *(undefined8 *)(pbVar35 + 0x49);
          *puVar20 = uVar37;
          uVar37 = *(undefined8 *)(pbVar35 + 0x50);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar35 + 0x58);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar37;
          pbStack_d0 = (byte *)0x3;
          uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar6);
          FUN_1004b60cc(&puStack_a0,&uStack_88);
          pbVar30 = pbStack_98;
          puVar8 = puStack_a0;
          pbVar12 = pbStack_98;
          if (puStack_a0 == (undefined *)0x8000000000000001) goto LAB_101253244;
          puStack_158 = puVar25;
          pbStack_150 = pbVar13;
          puStack_148 = puVar28;
          puStack_140 = puVar36;
          pbStack_138 = pbVar9;
          puStack_130 = puVar3;
          puStack_128 = puStack_a0;
          pbStack_120 = pbStack_98;
          puStack_118 = puStack_90;
          pbVar12 = (byte *)FUN_100fbc738(&pbStack_f0);
          if (pbVar12 == (byte *)0x0) goto LAB_101253108;
          puStack_158 = (undefined *)0x8000000000000000;
          pbStack_150 = pbVar12;
          if (puVar25 != (undefined *)0x0) {
            _free(pbVar13);
          }
          if (puVar36 != (undefined *)0x0) {
            _free(pbVar9);
          }
          if (((ulong)puVar8 & 0x7fffffffffffffff) == 0) {
            puVar25 = (undefined *)0x8000000000000000;
            pbVar13 = pbVar12;
            goto LAB_101253108;
          }
        }
        _free(pbVar30);
        puVar25 = (undefined *)0x8000000000000000;
        pbVar13 = pbVar12;
LAB_101253108:
        if ((bVar5 & 0x1e) != 0x14) {
          FUN_100e077ec(abStack_110);
        }
        uVar21 = uStack_1a8;
        if (puVar25 == (undefined *)0x8000000000000000) goto LAB_101253638;
        puStack_188 = puStack_140;
        puStack_190 = puStack_148;
        puStack_178 = puStack_130;
        pbStack_180 = pbStack_138;
        pbStack_168 = pbStack_120;
        puStack_170 = puStack_128;
        puStack_160 = puStack_118;
        puStack_1a0 = puVar25;
        pbStack_198 = pbVar13;
        if (uStack_1a8 == uStack_1b8) {
          func_0x0001088baf4c(&uStack_1b8);
        }
        puVar18 = (undefined8 *)(uStack_1b0 + uVar21 * 0x48);
        puVar18[1] = pbStack_198;
        *puVar18 = puStack_1a0;
        puVar18[3] = puStack_188;
        puVar18[2] = puStack_190;
        puVar18[5] = puStack_178;
        puVar18[4] = pbStack_180;
        puVar18[7] = pbStack_168;
        puVar18[6] = puStack_170;
        puVar18[8] = puStack_160;
        uStack_1a8 = uVar21 + 1;
        pbVar34 = pbVar26;
        pbVar13 = pbVar24;
      } while (pbVar24 != pbVar26);
    }
    param_1[1] = uStack_1b0;
    *param_1 = uStack_1b8;
    param_1[2] = uStack_1a8;
    uVar21 = *param_1;
    pbVar24 = pbVar34;
    if (uVar21 == 0x8000000000000000) {
LAB_1012536ac:
      lVar32 = ((ulong)((long)pbVar26 - (long)pbVar24) >> 5) + 1;
      while (lVar32 = lVar32 + -1, uVar21 = uVar23, lVar32 != 0) {
        FUN_100e077ec(pbVar24);
        pbVar24 = pbVar24 + 0x20;
      }
    }
    else {
      pbVar4 = (byte *)param_1[1];
      uVar23 = param_1[2];
      uVar15 = FUN_100fbc738(&pbStack_1e0);
      if (uVar15 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar15;
      if (uVar23 != 0) {
        pbVar26 = pbVar4 + 0x20;
        do {
          if (*(long *)(pbVar26 + -0x20) != 0) {
            _free(*(undefined8 *)(pbVar26 + -0x18));
          }
          if (*(long *)(pbVar26 + -8) != 0) {
            _free(*(undefined8 *)pbVar26);
          }
          if (*(long *)(pbVar26 + 0x10) != -0x8000000000000000 && *(long *)(pbVar26 + 0x10) != 0) {
            _free(*(undefined8 *)(pbVar26 + 0x18));
          }
          pbVar26 = pbVar26 + 0x48;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    if (uVar21 != 0) {
      _free(pbVar4);
    }
  }
  else {
    uVar21 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20a400);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar21;
  }
  return;
}

