
/* WARNING: Removing unreachable block (ram,0x00010127e2f8) */

void FUN_10127dd40(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  undefined **ppuVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined8 *puVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  undefined *puVar26;
  byte *unaff_x24;
  byte *pbVar27;
  undefined8 *puVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  byte *pbVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  byte *pbStack_160;
  byte *pbStack_158;
  char *pcStack_150;
  char *pcStack_148;
  ulong uStack_140;
  char *pcStack_138;
  byte *pbStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  char acStack_110 [8];
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
  int *piStack_80;
  int *piStack_78;
  long lStack_70;
  
  if (*param_2 == '\x14') {
    uVar13 = *(ulong *)(param_2 + 8);
    pcVar17 = *(char **)(param_2 + 0x10);
    uVar14 = *(ulong *)(param_2 + 0x18);
    pcVar25 = pcVar17 + uVar14 * 0x20;
    pbStack_130 = (byte *)0x0;
    uVar21 = uVar14;
    if (0xaaa9 < uVar14) {
      uVar21 = 0xaaaa;
    }
    pcStack_150 = pcVar17;
    uStack_140 = uVar13;
    pcStack_138 = pcVar25;
    if (uVar14 == 0) {
      uStack_128 = 0;
      uStack_120 = 8;
      uStack_118 = 0;
      pcVar16 = pcVar17;
      pbVar1 = pbStack_130;
    }
    else {
      pcStack_148 = pcVar17;
      uVar10 = _malloc(uVar21 * 0x18);
      if (uVar10 == 0) {
        func_0x0001087c9084(8,uVar21 * 0x18);
LAB_10127e640:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10127e644);
        (*pcVar8)();
      }
      uStack_118 = 0;
      uStack_128 = uVar21;
      uStack_120 = uVar10;
      if (*pcVar17 != '\x16') {
        pbVar20 = (byte *)0x0;
        puVar19 = (undefined8 *)((ulong)acStack_110 | 1);
        puVar22 = (undefined8 *)((ulong)&uStack_88 | 1);
        puVar28 = (undefined8 *)((ulong)&pbStack_f0 | 1);
        pcVar16 = pcVar17 + 0x20;
        pcVar23 = pcVar17;
        cVar7 = *pcVar17;
LAB_10127de28:
        acStack_110[0] = cVar7;
        pcVar24 = pcVar16;
        pbVar5 = pbStack_100;
        pbVar1 = pbStack_108;
        uVar33 = *(undefined8 *)(pcVar23 + 9);
        uVar32 = *(undefined8 *)(pcVar23 + 1);
        uVar34 = *(undefined8 *)(pcVar23 + 0x10);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pcVar23 + 0x18);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar34;
        puVar19[1] = uVar33;
        *puVar19 = uVar32;
        pbVar20 = pbVar20 + 1;
        if (acStack_110[0] != '\x14') {
          if (acStack_110[0] == '\x15') {
            lVar18 = lStack_f8 * 0x40;
            pbVar1 = pbStack_100 + lVar18;
            pbStack_d0 = pbStack_100;
            pbStack_c8 = pbStack_100;
            pbStack_c0 = pbStack_108;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            ppuStack_b0 = (undefined **)0x0;
            pbStack_b8 = pbVar1;
            if (lStack_f8 != 0) {
              ppuVar29 = (undefined **)0x0;
              puVar26 = (undefined *)0x8000000000000000;
              do {
                ppuVar6 = uStack_88;
                pbVar27 = pbVar5 + 0x40;
                bVar4 = *pbVar5;
                unaff_x24 = pbVar27;
                ppuVar30 = ppuVar29;
                if (bVar4 == 0x16) break;
                uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar4);
                ppuVar30 = uStack_88;
                uVar32 = *(undefined8 *)(pbVar5 + 0x10);
                *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)(pbVar5 + 0x18);
                *(undefined8 *)((long)puVar22 + 0xf) = uVar32;
                uVar32 = *(undefined8 *)(pbVar5 + 1);
                puVar22[1] = *(undefined8 *)(pbVar5 + 9);
                *puVar22 = uVar32;
                pbStack_e8 = *(byte **)(pbVar5 + 0x28);
                pbStack_f0 = *(byte **)(pbVar5 + 0x20);
                pbStack_d8 = *(byte **)(pbVar5 + 0x38);
                pbStack_e0 = *(byte **)(pbVar5 + 0x30);
                if (bVar4 < 0xd) {
                  if (bVar4 != 1) {
                    if (bVar4 == 4) {
                      bVar9 = piStack_80 == (int *)0x0;
                      goto LAB_10127e00c;
                    }
                    if (bVar4 == 0xc) {
                      if (lStack_70 == 4) {
                        iVar3 = *piStack_78;
                        if (piStack_80 != (int *)0x0) {
                          _free();
                        }
                        if (iVar3 == 0x656d616e) goto LAB_10127e084;
                      }
                      else if (piStack_80 != (int *)0x0) {
                        _free();
                      }
                      goto LAB_10127e024;
                    }
LAB_10127e3bc:
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    pbStack_c8 = pbVar27;
                    pbVar12 = (byte *)FUN_108855b04(&uStack_88,&puStack_a0,&UNK_10b20fec0);
                    puVar26 = (undefined *)((ulong)puVar26 & 0x7fffffffffffffff);
                    goto joined_r0x00010127e3e8;
                  }
                  uStack_88._1_1_ = SUB81(ppuVar6,1);
                  bVar9 = uStack_88._1_1_ == '\0';
LAB_10127e00c:
                  bVar9 = !bVar9;
LAB_10127e018:
                  uStack_88 = ppuVar30;
                  FUN_100e077ec(&uStack_88);
LAB_10127e020:
                  if (!bVar9) goto LAB_10127e084;
LAB_10127e024:
                  cVar7 = (char)pbStack_f0;
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar7 == '\x16') {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    pcStack_148 = pcVar24;
                    pbStack_130 = pbVar20;
                    pbStack_c8 = pbVar27;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_10127e640;
                  }
                  uVar32 = *puVar28;
                  puVar22[1] = puVar28[1];
                  *puVar22 = uVar32;
                  uVar32 = *(undefined8 *)((long)puVar28 + 0xf);
                  *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar28 + 0x17);
                  *(undefined8 *)((long)puVar22 + 0xf) = uVar32;
                  uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar7);
                  FUN_100e077ec(&uStack_88);
                }
                else {
                  if (bVar4 == 0xd) {
                    if (piStack_78 == (int *)0x4) {
                      bVar9 = *piStack_80 == 0x656d616e;
                      goto LAB_10127e00c;
                    }
LAB_10127e014:
                    bVar9 = true;
                    goto LAB_10127e018;
                  }
                  if (bVar4 != 0xe) {
                    if (bVar4 != 0xf) goto LAB_10127e3bc;
                    if ((((piStack_78 != (int *)0x4) || ((char)*piStack_80 != 'n')) ||
                        (*(char *)((long)piStack_80 + 1) != 'a')) ||
                       (*(char *)((long)piStack_80 + 2) != 'm')) goto LAB_10127e014;
                    bVar9 = *(char *)((long)piStack_80 + 3) == 'e';
                    goto LAB_10127e00c;
                  }
                  if (((lStack_70 == 4) && ((char)*piStack_78 == 'n')) &&
                     ((*(char *)((long)piStack_78 + 1) == 'a' &&
                      (*(char *)((long)piStack_78 + 2) == 'm')))) {
                    bVar9 = *(char *)((long)piStack_78 + 3) != 'e';
                  }
                  else {
                    bVar9 = true;
                  }
                  if (piStack_80 == (int *)0x0) goto LAB_10127e020;
                  _free();
                  if (bVar9) goto LAB_10127e024;
LAB_10127e084:
                  if (puVar26 != (undefined *)0x8000000000000000) {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    puStack_a0 = &UNK_108c61018;
                    pbStack_98 = (byte *)0x4;
                    uStack_88 = &puStack_a0;
                    piStack_80 = (int *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar27;
                    pbVar12 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
joined_r0x00010127e3e8:
                    if (puVar26 != (undefined *)0x0) {
                      _free(pbStack_158);
                    }
                    goto LAB_10127e26c;
                  }
                  cVar7 = (char)pbStack_f0;
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar7 == '\x16') {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    pcStack_148 = pcVar24;
                    pbStack_130 = pbVar20;
                    pbStack_c8 = pbVar27;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_10127e640;
                  }
                  uVar32 = *puVar28;
                  puVar22[1] = puVar28[1];
                  *puVar22 = uVar32;
                  uVar32 = *(undefined8 *)((long)puVar28 + 0xf);
                  *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)((long)puVar28 + 0x17);
                  *(undefined8 *)((long)puVar22 + 0xf) = uVar32;
                  uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,cVar7);
                  FUN_1004b62d4(&puStack_a0,&uStack_88);
                  pbStack_158 = pbStack_98;
                  if (puStack_a0 == (undefined *)0x8000000000000000) {
                    ppuStack_b0 = (undefined **)((long)ppuVar29 + 1);
                    pbVar12 = pbStack_98;
                    pbStack_c8 = pbVar27;
                    goto LAB_10127e26c;
                  }
                  pbStack_160 = pbStack_90;
                  puVar26 = puStack_a0;
                }
                ppuVar29 = (undefined **)((long)ppuVar29 + 1);
                unaff_x24 = pbVar1;
                ppuVar30 = (undefined **)((lVar18 - 0x40U >> 6) + 1);
                pbVar5 = pbVar27;
              } while (pbVar27 != pbVar1);
              pbStack_c8 = unaff_x24;
              ppuStack_b0 = ppuVar30;
              if (puVar26 != (undefined *)0x8000000000000000) {
                FUN_100d34830(&pbStack_d0);
                pbVar27 = pbStack_160;
                pbVar12 = pbStack_158;
                if (pbVar1 != unaff_x24) {
                  uStack_88 = ppuVar30;
                  pbVar12 = (byte *)FUN_1087e422c(((ulong)((long)pbVar1 - (long)unaff_x24) >> 6) +
                                                  (long)ppuVar30,&uStack_88,&UNK_10b23a190);
                  if (puVar26 != (undefined *)0x0) {
                    _free(pbStack_158);
                  }
                  puVar26 = (undefined *)0x8000000000000000;
                }
                goto LAB_10127e300;
              }
            }
            puStack_a0 = &UNK_108c61018;
            pbStack_98 = (byte *)0x4;
            uStack_88 = &puStack_a0;
            piStack_80 = (int *)&DAT_100c7b3a0;
            pbVar12 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_88);
            pbVar27 = unaff_x24;
LAB_10127e26c:
            FUN_100d34830(&pbStack_d0);
            if ((char)pbStack_f0 != '\x16') {
              FUN_100e077ec(&pbStack_f0);
            }
            puVar26 = (undefined *)0x8000000000000000;
            goto LAB_10127e300;
          }
          pcStack_148 = pcVar24;
          pbStack_130 = pbVar20;
          uVar21 = FUN_108855b04(acStack_110,&puStack_a0,&UNK_10b20c620);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar21;
          uVar14 = uStack_120;
          uVar21 = uStack_118;
joined_r0x00010127e450:
          uStack_120 = uVar14;
          uStack_118 = uVar21;
          if (uVar21 != 0) {
            puVar19 = (undefined8 *)(uVar14 + 8);
            do {
              if (puVar19[-1] != 0) {
                _free(*puVar19);
              }
              puVar19 = puVar19 + 3;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
          }
          if (uStack_128 != 0) {
            _free(uVar14);
          }
          goto LAB_10127e4b4;
        }
        pbVar2 = pbStack_100 + lStack_f8 * 0x20;
        pbStack_f0 = pbStack_100;
        pbStack_e0 = pbStack_108;
        pbStack_d0 = (byte *)0x0;
        pbVar31 = pbStack_100;
        pbStack_158 = pbVar20;
        pbStack_d8 = pbVar2;
        if (lStack_f8 == 0) {
LAB_10127e124:
          pbStack_e8 = pbVar31;
          pbVar11 = (byte *)FUN_1087e422c(0,&UNK_10b231a38,&UNK_10b20a590);
LAB_10127e140:
          lVar18 = ((ulong)((long)pbVar2 - (long)pbVar31) >> 5) + 1;
          while (lVar18 = lVar18 + -1, lVar18 != 0) {
            FUN_100e077ec(pbVar31);
            pbVar31 = pbVar31 + 0x20;
          }
          pbVar27 = pbVar1;
          pbVar12 = pbVar5;
          if (pbVar1 == (byte *)0x0) {
            puVar26 = (undefined *)0x8000000000000000;
            pbVar12 = pbVar11;
          }
          else {
LAB_10127e170:
            _free(pbVar12);
            puVar26 = (undefined *)0x8000000000000000;
            pbVar12 = pbVar11;
          }
        }
        else {
          pbVar31 = pbStack_100 + 0x20;
          bVar4 = *pbStack_100;
          if (bVar4 == 0x16) goto LAB_10127e124;
          uVar32 = *(undefined8 *)(pbStack_100 + 1);
          puVar22[1] = *(undefined8 *)(pbStack_100 + 9);
          *puVar22 = uVar32;
          uVar32 = *(undefined8 *)(pbStack_100 + 0x10);
          *(undefined8 *)((long)puVar22 + 0x17) = *(undefined8 *)(pbStack_100 + 0x18);
          *(undefined8 *)((long)puVar22 + 0xf) = uVar32;
          pbStack_d0 = (byte *)0x1;
          uStack_88 = (undefined **)CONCAT71(uStack_88._1_7_,bVar4);
          pbStack_e8 = pbVar31;
          FUN_1004b62d4(&puStack_a0,&uStack_88);
          pbVar27 = pbStack_90;
          pbVar12 = pbStack_98;
          puVar26 = puStack_a0;
          pbVar11 = pbStack_98;
          if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_10127e140;
          pbVar11 = (byte *)FUN_100fbc738(&pbStack_f0);
          if (pbVar11 != (byte *)0x0) {
            if (puVar26 == (undefined *)0x0) {
              puVar26 = (undefined *)0x8000000000000000;
              pbVar12 = pbVar11;
              goto LAB_10127e300;
            }
            goto LAB_10127e170;
          }
        }
LAB_10127e300:
        uVar21 = uStack_118;
        if ((long)puVar26 < -0x7ffffffffffffffe) {
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar12;
          pbStack_130 = pbVar20;
          pcStack_148 = pcVar24;
          uVar14 = uStack_120;
          goto joined_r0x00010127e450;
        }
        if (uStack_118 == uStack_128) {
          func_0x0001088bac74(&uStack_128);
        }
        puVar15 = (undefined8 *)(uStack_120 + uVar21 * 0x18);
        *puVar15 = puVar26;
        puVar15[1] = pbVar12;
        puVar15[2] = pbVar27;
        uStack_118 = uVar21 + 1;
        pcVar16 = pcVar25;
        pbVar1 = (byte *)((uVar14 * 0x20 - 0x20 >> 5) + 1);
        if (pcVar24 != pcVar25) goto code_r0x00010127e350;
        goto LAB_10127e490;
      }
      pcVar16 = pcVar17 + 0x20;
      pbVar1 = (byte *)0x0;
    }
LAB_10127e490:
    pbStack_130 = pbVar1;
    param_1[1] = uStack_120;
    *param_1 = uStack_128;
    param_1[2] = uStack_118;
    uVar21 = *param_1;
    pcVar24 = pcVar16;
    pcStack_148 = pcVar16;
    if (uVar21 == 0x8000000000000000) {
LAB_10127e4b4:
      lVar18 = ((ulong)((long)pcVar25 - (long)pcVar24) >> 5) + 1;
      while (lVar18 = lVar18 + -1, lVar18 != 0) {
        FUN_100e077ec(pcVar24);
        pcVar24 = pcVar24 + 0x20;
      }
    }
    else {
      pcVar17 = (char *)param_1[1];
      uVar14 = param_1[2];
      uVar13 = FUN_100fbc738(&pcStack_150);
      if (uVar13 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar13;
      uVar13 = uVar21;
      if (uVar14 != 0) {
        pcVar25 = pcVar17 + 8;
        do {
          if (*(long *)(pcVar25 + -8) != 0) {
            _free(*(undefined8 *)pcVar25);
          }
          pcVar25 = pcVar25 + 0x18;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    if (uVar13 != 0) {
      _free(pcVar17);
    }
  }
  else {
    uVar21 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b209d20);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar21;
  }
  return;
code_r0x00010127e350:
  pcVar16 = pcVar24 + 0x20;
  pcVar23 = pcVar24;
  unaff_x24 = pbVar27;
  pbVar1 = pbVar20;
  cVar7 = *pcVar24;
  if (*pcVar24 == '\x16') goto LAB_10127e490;
  goto LAB_10127de28;
}

