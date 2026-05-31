
void FUN_1013b64c8(long *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined *puVar23;
  long lVar24;
  char cVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  byte *pbStack_178;
  byte *pbStack_168;
  byte *pbStack_150;
  byte *pbStack_148;
  long lStack_140;
  byte *pbStack_138;
  long lStack_130;
  byte *pbStack_128;
  long lStack_120;
  byte *pbStack_118;
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
  undefined8 *puStack_b0;
  undefined8 uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  int *piStack_80;
  int *piStack_78;
  long lStack_70;
  
  if (*param_2 == '\x14') {
    lVar10 = *(long *)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    pbVar11 = *(byte **)(param_2 + 0x18);
    pbVar19 = (byte *)((long)pbVar11 * 0x20);
    pbVar22 = pbVar1 + (long)pbVar19;
    lStack_130 = 0;
    pbVar12 = pbVar11;
    if ((byte *)0x7fff < pbVar11) {
      pbVar12 = (byte *)0x8000;
    }
    pbStack_150 = pbVar1;
    lStack_140 = lVar10;
    pbStack_138 = pbVar22;
    if (pbVar11 == (byte *)0x0) {
      pbStack_128 = (byte *)0x0;
      lStack_120 = 8;
      pbStack_118 = (byte *)0x0;
      pbVar12 = pbVar1;
      lVar18 = lStack_130;
    }
    else {
      pbStack_148 = pbVar1;
      lVar7 = _malloc((long)pbVar12 << 5);
      if (lVar7 == 0) {
        func_0x0001087c9084(8,(long)pbVar12 << 5);
LAB_1013b6fbc:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1013b6fc0);
        (*pcVar6)();
      }
      pbStack_118 = (byte *)0x0;
      bVar2 = *pbVar1;
      pbStack_128 = pbVar12;
      lStack_120 = lVar7;
      if (bVar2 != 0x16) {
        lVar7 = 0;
        puVar15 = (undefined8 *)((ulong)abStack_110 | 1);
        puVar20 = (undefined8 *)((ulong)&uStack_88 | 1);
        puVar16 = (undefined8 *)((ulong)&pbStack_f0 | 1);
        pbVar17 = pbVar19 + -0x20;
        pbVar12 = pbVar1 + 0x20;
        pbVar11 = pbVar1;
LAB_1013b65a8:
        pbVar21 = pbVar12;
        lVar24 = lStack_f8;
        pbVar12 = pbStack_100;
        lVar18 = lStack_108;
        uVar30 = *(undefined8 *)(pbVar11 + 9);
        uVar29 = *(undefined8 *)(pbVar11 + 1);
        uVar31 = *(undefined8 *)(pbVar11 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar11 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar31;
        puVar15[1] = uVar30;
        *puVar15 = uVar29;
        lVar7 = lVar7 + 1;
        abStack_110[0] = bVar2;
        if (bVar2 != 0x14) {
          if (bVar2 == 0x15) {
            lVar18 = lStack_f8 * 0x40;
            pbVar12 = pbStack_100 + lVar18;
            pbStack_d0 = pbStack_100;
            pbStack_c8 = pbStack_100;
            lStack_c0 = lStack_108;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            puStack_b0 = (undefined8 *)0x0;
            pbStack_b8 = pbVar12;
            if (lStack_f8 == 0) {
              puVar23 = (undefined *)0x0;
LAB_1013b6a7c:
              uStack_a0 = &UNK_108c51874;
              pbStack_98 = (byte *)0x4;
              uStack_88 = &uStack_a0;
              piStack_80 = (int *)&DAT_100c7b3a0;
              pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_88);
joined_r0x0001013b6ba4:
              puVar23 = (undefined *)((ulong)puVar23 & 0x7fffffffffffffff);
joined_r0x0001013b6d40:
              if (puVar23 != (undefined *)0x0) {
                _free(pbVar19);
              }
            }
            else {
              puVar26 = (undefined8 *)0x0;
              puVar23 = (undefined *)0x8000000000000000;
              cVar25 = '\x05';
              pbVar19 = pbStack_100;
              do {
                puVar5 = uStack_88;
                pbVar28 = pbVar19 + 0x40;
                bVar3 = *pbVar19;
                puVar27 = puVar26;
                pbVar11 = pbVar28;
                if (bVar3 == 0x16) break;
                uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,bVar3);
                puVar27 = uStack_88;
                uVar29 = *(undefined8 *)(pbVar19 + 0x10);
                *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar19 + 0x18);
                *(undefined8 *)((long)puVar20 + 0xf) = uVar29;
                uVar29 = *(undefined8 *)(pbVar19 + 1);
                puVar20[1] = *(undefined8 *)(pbVar19 + 9);
                *puVar20 = uVar29;
                pbStack_e8 = *(byte **)(pbVar19 + 0x28);
                pbStack_f0 = *(byte **)(pbVar19 + 0x20);
                pbStack_d8 = *(byte **)(pbVar19 + 0x38);
                lStack_e0 = *(long *)(pbVar19 + 0x30);
                pbVar19 = pbStack_168;
                if (bVar3 < 0xd) {
                  if (bVar3 == 1) {
                    uStack_88._1_1_ = SUB81(puVar5,1);
                    iVar14 = 1;
                    if (uStack_88._1_1_ != '\x01') {
                      iVar14 = 2;
                    }
                    iVar13 = 0;
                    if (uStack_88._1_1_ != '\0') {
                      iVar13 = iVar14;
                    }
                  }
                  else {
                    if (bVar3 != 4) {
                      if (bVar3 == 0xc) {
                        if (lStack_70 == 4) {
                          if (*piStack_78 == 0x646e696b) {
                            iVar13 = 0;
                          }
                          else {
                            iVar13 = 1;
                            if (*piStack_78 != 0x74786574) {
                              iVar13 = 2;
                            }
                          }
                        }
                        else {
                          iVar13 = 2;
                        }
                        goto joined_r0x0001013b67e8;
                      }
LAB_1013b6d48:
                      puStack_b0 = (undefined8 *)((long)puVar26 + 1);
                      pbStack_c8 = pbVar28;
                      pbVar9 = (byte *)FUN_108855b04(&uStack_88,&uStack_a0,&UNK_10b20f6a0);
                      goto joined_r0x0001013b6ba4;
                    }
                    iVar14 = 1;
                    if (piStack_80 != (int *)0x1) {
                      iVar14 = 2;
                    }
                    iVar13 = 0;
                    if (piStack_80 != (int *)0x0) {
                      iVar13 = iVar14;
                    }
                  }
LAB_1013b6870:
                  uStack_88 = puVar27;
                  FUN_100e077ec(&uStack_88);
                }
                else {
                  if (bVar3 == 0xd) {
                    if (piStack_78 != (int *)0x4) goto LAB_1013b686c;
                    if (*piStack_80 == 0x646e696b) {
LAB_1013b67f0:
                      iVar13 = 0;
                    }
                    else {
                      iVar13 = 1;
                      if (*piStack_80 != 0x74786574) {
                        iVar13 = 2;
                      }
                    }
                    goto LAB_1013b6870;
                  }
                  if (bVar3 != 0xe) {
                    if (bVar3 != 0xf) goto LAB_1013b6d48;
                    if (piStack_78 == (int *)0x4) {
                      if ((char)*piStack_80 == 't') {
                        if (((*(char *)((long)piStack_80 + 1) == 'e') &&
                            (*(char *)((long)piStack_80 + 2) == 'x')) &&
                           (*(char *)((long)piStack_80 + 3) == 't')) {
                          iVar13 = 1;
                          goto LAB_1013b6870;
                        }
                      }
                      else if ((((char)*piStack_80 == 'k') &&
                               (*(char *)((long)piStack_80 + 1) == 'i')) &&
                              ((*(char *)((long)piStack_80 + 2) == 'n' &&
                               (*(char *)((long)piStack_80 + 3) == 'd')))) goto LAB_1013b67f0;
                    }
LAB_1013b686c:
                    iVar13 = 2;
                    goto LAB_1013b6870;
                  }
                  if (lStack_70 == 4) {
                    if ((char)*piStack_78 == 't') {
                      if (((*(char *)((long)piStack_78 + 1) != 'e') ||
                          (*(char *)((long)piStack_78 + 2) != 'x')) ||
                         (*(char *)((long)piStack_78 + 3) != 't')) goto LAB_1013b6830;
                      iVar13 = 1;
                    }
                    else {
                      if (((((char)*piStack_78 != 'k') || (*(char *)((long)piStack_78 + 1) != 'i'))
                          || (*(char *)((long)piStack_78 + 2) != 'n')) ||
                         (*(char *)((long)piStack_78 + 3) != 'd')) goto LAB_1013b6830;
                      iVar13 = 0;
                    }
                  }
                  else {
LAB_1013b6830:
                    iVar13 = 2;
                  }
joined_r0x0001013b67e8:
                  if (piStack_80 != (int *)0x0) {
                    _free();
                  }
                }
                cVar4 = (char)pbStack_f0;
                if (iVar13 == 0) {
                  if (cVar25 != '\x05') {
                    puStack_b0 = (undefined8 *)((long)puVar26 + 1);
                    uStack_a0 = &UNK_108c51874;
                    pbStack_98 = (byte *)0x4;
                    uStack_88 = &uStack_a0;
                    piStack_80 = (int *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar28;
                    pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
                    goto joined_r0x0001013b6ba4;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar4 == '\x16') goto LAB_1013b6edc;
                  uVar29 = *puVar16;
                  puVar20[1] = puVar16[1];
                  *puVar20 = uVar29;
                  uVar29 = *(undefined8 *)((long)puVar16 + 0xf);
                  *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
                  *(undefined8 *)((long)puVar20 + 0xf) = uVar29;
                  uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,cVar4);
                  FUN_10124f5b4(&uStack_a0,&uStack_88);
                  if ((char)uStack_a0 == '\x01') {
                    puStack_b0 = (undefined8 *)((long)puVar26 + 1);
                    pbStack_c8 = pbVar28;
                    pbVar9 = pbStack_98;
                    goto joined_r0x0001013b6ba4;
                  }
                  cVar25 = uStack_a0._1_1_;
                }
                else if (iVar13 == 1) {
                  if (puVar23 != (undefined *)0x8000000000000000) {
                    puStack_b0 = (undefined8 *)((long)puVar26 + 1);
                    uStack_a0 = &UNK_108c72520;
                    pbStack_98 = (byte *)0x4;
                    uStack_88 = &uStack_a0;
                    piStack_80 = (int *)&DAT_100c7b3a0;
                    pbStack_c8 = pbVar28;
                    pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_88);
                    goto joined_r0x0001013b6d40;
                  }
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar4 == '\x16') {
                    puStack_b0 = (undefined8 *)((long)puVar26 + 1);
                    pbStack_148 = pbVar21;
                    lStack_130 = lVar7;
                    pbStack_c8 = pbVar28;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_1013b6fbc;
                  }
                  uVar29 = *puVar16;
                  puVar20[1] = puVar16[1];
                  *puVar20 = uVar29;
                  uVar29 = *(undefined8 *)((long)puVar16 + 0xf);
                  *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
                  *(undefined8 *)((long)puVar20 + 0xf) = uVar29;
                  uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,cVar4);
                  FUN_1004b62d4(&uStack_a0,&uStack_88);
                  pbStack_168 = pbStack_98;
                  if (uStack_a0 == (undefined *)0x8000000000000000) {
                    puStack_b0 = (undefined8 *)((long)puVar26 + 1);
                    pbVar9 = pbStack_98;
                    pbStack_c8 = pbVar28;
                    goto LAB_1013b6ba8;
                  }
                  pbStack_178 = pbStack_90;
                  puVar23 = uStack_a0;
                }
                else {
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar4 == '\x16') {
LAB_1013b6edc:
                    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                    puStack_b0 = (undefined8 *)((long)puVar26 + 1);
                    pbStack_148 = pbVar21;
                    lStack_130 = lVar7;
                    pbStack_c8 = pbVar28;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_1013b6fbc;
                  }
                  uVar29 = *puVar16;
                  puVar20[1] = puVar16[1];
                  *puVar20 = uVar29;
                  uVar29 = *(undefined8 *)((long)puVar16 + 0xf);
                  *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
                  *(undefined8 *)((long)puVar20 + 0xf) = uVar29;
                  uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,cVar4);
                  FUN_100e077ec(&uStack_88);
                }
                puVar26 = (undefined8 *)((long)puVar26 + 1);
                puVar27 = (undefined8 *)((lVar18 - 0x40U >> 6) + 1);
                pbVar11 = pbVar12;
                pbVar19 = pbVar28;
              } while (pbVar28 != pbVar12);
              pbVar19 = pbStack_168;
              pbStack_c8 = pbVar11;
              puStack_b0 = puVar27;
              if (cVar25 == '\x05') goto LAB_1013b6a7c;
              if (puVar23 != (undefined *)0x8000000000000000) {
                FUN_100d34830(&pbStack_d0);
                pbVar28 = pbStack_178;
                pbVar9 = pbStack_168;
                if (pbVar12 != pbVar11) {
                  uStack_88 = puVar27;
                  pbVar9 = (byte *)FUN_1087e422c(((ulong)((long)pbVar12 - (long)pbVar11) >> 6) +
                                                 (long)puVar27,&uStack_88,&UNK_10b23a190);
                  if (puVar23 != (undefined *)0x0) {
                    _free(pbStack_168);
                  }
                  puVar23 = (undefined *)0x8000000000000000;
                }
                goto LAB_1013b6bd0;
              }
              uStack_a0 = &UNK_108c72520;
              pbStack_98 = (byte *)0x4;
              uStack_88 = &uStack_a0;
              piStack_80 = (int *)&DAT_100c7b3a0;
              pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_88);
            }
LAB_1013b6ba8:
            FUN_100d34830(&pbStack_d0);
            if ((char)pbStack_f0 != '\x16') {
              FUN_100e077ec(&pbStack_f0);
            }
            cVar25 = '\0';
            puVar23 = (undefined *)0x8000000000000000;
            pbVar28 = pbVar12;
            goto LAB_1013b6bd0;
          }
          pbStack_148 = pbVar21;
          lStack_130 = lVar7;
          lVar7 = FUN_108855b04(abStack_110,&uStack_a0,&UNK_10b20cd00);
          *param_1 = -0x8000000000000000;
          param_1[1] = lVar7;
          lVar7 = lStack_120;
          pbVar12 = pbStack_118;
joined_r0x0001013b6f74:
          lStack_120 = lVar7;
          pbStack_118 = pbVar12;
          if (pbVar12 != (byte *)0x0) {
            puVar15 = (undefined8 *)(lVar7 + 8);
            do {
              if (puVar15[-1] != 0) {
                _free(*puVar15);
              }
              puVar15 = puVar15 + 4;
              pbVar12 = pbVar12 + -1;
            } while (pbVar12 != (byte *)0x0);
          }
          if (pbStack_128 != (byte *)0x0) {
            _free(lVar7);
          }
          goto LAB_1013b6e24;
        }
        pbVar11 = pbStack_100 + lStack_f8 * 0x20;
        pbStack_f0 = pbStack_100;
        lStack_e0 = lStack_108;
        pbStack_d0 = (byte *)0x0;
        pbVar19 = pbStack_100;
        pbStack_d8 = pbVar11;
        if (lStack_f8 == 0) {
LAB_1013b69ac:
          pbStack_e8 = pbVar19;
          pbVar8 = (byte *)FUN_1087e422c(0,&UNK_10b22d310,&UNK_10b20a590);
LAB_1013b69c8:
          lVar24 = ((ulong)((long)pbVar11 - (long)pbVar19) >> 5) + 1;
          pbVar28 = pbVar11;
          while (lVar24 = lVar24 + -1, lVar24 != 0) {
            pbVar28 = pbVar19 + 0x20;
            FUN_100e077ec(pbVar19);
            pbVar19 = pbVar28;
          }
          cVar25 = '\0';
          pbVar9 = pbVar12;
          if (lVar18 == 0) {
            puVar23 = (undefined *)0x8000000000000000;
            pbVar9 = pbVar8;
            goto LAB_1013b6bd0;
          }
        }
        else {
          pbVar19 = pbStack_100 + 0x20;
          bVar3 = *pbStack_100;
          if (bVar3 == 0x16) goto LAB_1013b69ac;
          uVar29 = *(undefined8 *)(pbStack_100 + 1);
          puVar20[1] = *(undefined8 *)(pbStack_100 + 9);
          *puVar20 = uVar29;
          uVar29 = *(undefined8 *)(pbStack_100 + 0x10);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbStack_100 + 0x18);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar29;
          pbStack_d0 = (byte *)0x1;
          uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,bVar3);
          pbStack_e8 = pbVar19;
          FUN_10124f5b4(&uStack_a0,&uStack_88);
          pbVar8 = pbStack_98;
          if ((char)uStack_a0 == '\x01') goto LAB_1013b69c8;
          if (lVar24 == 1) {
LAB_1013b6b38:
            pbVar8 = (byte *)FUN_1087e422c(1,&UNK_10b22d310,&UNK_10b20a590);
            goto LAB_1013b69c8;
          }
          cVar25 = uStack_a0._1_1_;
          pbVar19 = pbVar12 + 0x40;
          bVar3 = pbVar12[0x20];
          pbStack_e8 = pbVar19;
          if (bVar3 == 0x16) goto LAB_1013b6b38;
          uVar29 = *(undefined8 *)(pbVar12 + 0x21);
          puVar20[1] = *(undefined8 *)(pbVar12 + 0x29);
          *puVar20 = uVar29;
          uVar29 = *(undefined8 *)(pbVar12 + 0x30);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar12 + 0x38);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar29;
          pbStack_d0 = (byte *)0x2;
          uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,bVar3);
          FUN_1004b62d4(&uStack_a0,&uStack_88);
          pbVar28 = pbStack_90;
          pbVar9 = pbStack_98;
          puVar23 = uStack_a0;
          pbVar8 = pbStack_98;
          if (uStack_a0 == (undefined *)0x8000000000000000) goto LAB_1013b69c8;
          pbVar8 = (byte *)FUN_100fbc738(&pbStack_f0);
          if (pbVar8 == (byte *)0x0) goto LAB_1013b6bd0;
          if (puVar23 == (undefined *)0x0) {
            puVar23 = (undefined *)0x8000000000000000;
            pbVar9 = pbVar8;
            goto LAB_1013b6bd0;
          }
        }
        _free(pbVar9);
        puVar23 = (undefined *)0x8000000000000000;
        pbVar9 = pbVar8;
LAB_1013b6bd0:
        if ((bVar2 & 0x1e) != 0x14) {
          FUN_100e077ec(abStack_110);
        }
        pbVar19 = pbStack_118;
        if ((long)puVar23 < -0x7ffffffffffffffe) {
          *param_1 = -0x8000000000000000;
          param_1[1] = (long)pbVar9;
          pbStack_148 = pbVar21;
          lStack_130 = lVar7;
          lVar7 = lStack_120;
          pbVar12 = pbStack_118;
          goto joined_r0x0001013b6f74;
        }
        if (pbStack_118 == pbStack_128) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h6005d1f5f381c002E(&pbStack_128);
        }
        puVar26 = (undefined8 *)(lStack_120 + (long)pbVar19 * 0x20);
        *puVar26 = puVar23;
        puVar26[1] = pbVar9;
        puVar26[2] = pbVar28;
        *(char *)(puVar26 + 3) = cVar25;
        pbStack_118 = pbVar19 + 1;
        pbVar12 = pbVar22;
        lVar18 = ((ulong)pbVar17 >> 5) + 1;
        if (pbVar21 != pbVar22) goto code_r0x0001013b6c34;
        goto LAB_1013b6e00;
      }
      pbVar12 = pbVar1 + 0x20;
      lVar18 = 0;
    }
LAB_1013b6e00:
    lStack_130 = lVar18;
    param_1[1] = lStack_120;
    *param_1 = (long)pbStack_128;
    param_1[2] = (long)pbStack_118;
    lVar7 = *param_1;
    pbVar21 = pbVar12;
    pbStack_148 = pbVar12;
    if (lVar7 == -0x8000000000000000) {
LAB_1013b6e24:
      lVar7 = ((ulong)((long)pbVar22 - (long)pbVar21) >> 5) + 1;
      while (lVar7 = lVar7 + -1, lVar7 != 0) {
        FUN_100e077ec(pbVar21);
        pbVar21 = pbVar21 + 0x20;
      }
    }
    else {
      pbVar1 = (byte *)param_1[1];
      lVar18 = param_1[2];
      lVar10 = FUN_100fbc738(&pbStack_150);
      if (lVar10 == 0) {
        return;
      }
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar10;
      lVar10 = lVar7;
      if (lVar18 != 0) {
        pbVar22 = pbVar1 + 8;
        do {
          if (*(long *)(pbVar22 + -8) != 0) {
            _free(*(undefined8 *)pbVar22);
          }
          pbVar22 = pbVar22 + 0x20;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
    }
    if (lVar10 != 0) {
      _free(pbVar1);
    }
  }
  else {
    lVar10 = FUN_108855b04(param_2,&uStack_a0,&UNK_10b20a040);
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar10;
  }
  return;
code_r0x0001013b6c34:
  bVar2 = *pbVar21;
  pbVar12 = pbVar21 + 0x20;
  pbVar11 = pbVar21;
  lVar18 = lVar7;
  if (bVar2 == 0x16) goto LAB_1013b6e00;
  goto LAB_1013b65a8;
}

