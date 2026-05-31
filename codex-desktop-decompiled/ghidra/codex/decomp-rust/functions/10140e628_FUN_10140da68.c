
void FUN_10140da68(undefined8 *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  code *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *unaff_x22;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  byte *pbVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  byte *pbStack_2b0;
  byte *pbStack_2a8;
  byte *pbStack_298;
  byte *pbStack_288;
  byte *pbStack_280;
  byte *pbStack_250;
  byte *pbStack_248;
  byte *pbStack_240;
  byte *pbStack_238;
  long lStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  byte *pbStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte abStack_140 [8];
  byte *pbStack_138;
  byte *pbStack_130;
  long lStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  long lStack_78;
  
  if (*param_2 == '\x14') {
    pbVar1 = *(byte **)(param_2 + 8);
    pbVar2 = *(byte **)(param_2 + 0x10);
    pbVar10 = *(byte **)(param_2 + 0x18);
    pbVar8 = pbVar2 + (long)pbVar10 * 0x20;
    lStack_230 = 0;
    pbVar23 = pbVar10;
    if ((byte *)0x38e2 < pbVar10) {
      pbVar23 = (byte *)0x38e3;
    }
    pbStack_250 = pbVar2;
    pbStack_248 = pbVar2;
    pbStack_240 = pbVar1;
    pbStack_238 = pbVar8;
    if (pbVar10 == (byte *)0x0) {
      pbStack_228 = (byte *)0x0;
      pbStack_220 = (byte *)0x8;
      pbStack_218 = (byte *)0x0;
      pbVar23 = pbVar2;
    }
    else {
      pbVar10 = (byte *)_malloc((long)pbVar23 * 0x48);
      if (pbVar10 == (byte *)0x0) {
        func_0x0001087c9084(8,(long)pbVar23 * 0x48);
LAB_10140ea54:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10140ea58);
        (*pcVar6)();
      }
      lVar22 = 0;
      pbStack_218 = (byte *)0x0;
      puVar11 = (undefined8 *)((ulong)abStack_140 | 1);
      puVar14 = (undefined8 *)((ulong)&uStack_90 | 1);
      puVar12 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      puVar13 = (undefined8 *)((ulong)&pbStack_120 | 1);
      pbVar25 = pbVar2;
      pbStack_228 = pbVar23;
      pbStack_220 = pbVar10;
      do {
        lVar18 = lStack_128;
        pbVar10 = pbStack_130;
        pbVar16 = pbVar25 + 0x20;
        bVar3 = *pbVar25;
        pbVar23 = pbVar16;
        pbStack_248 = pbVar16;
        if (bVar3 == 0x16) break;
        uVar26 = *(undefined8 *)(pbVar25 + 1);
        puVar11[1] = *(undefined8 *)(pbVar25 + 9);
        *puVar11 = uVar26;
        uVar26 = *(undefined8 *)(pbVar25 + 0x10);
        *(undefined8 *)((long)puVar11 + 0x17) = *(undefined8 *)(pbVar25 + 0x18);
        *(undefined8 *)((long)puVar11 + 0xf) = uVar26;
        lVar22 = lVar22 + 1;
        lStack_230 = lVar22;
        abStack_140[0] = bVar3;
        if (bVar3 != 0x14) {
          if (bVar3 == 0x15) {
            pbStack_b8 = pbStack_130 + lStack_128 * 0x40;
            pbStack_d0 = pbStack_130;
            pbStack_c8 = pbStack_130;
            pbStack_c0 = pbStack_138;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            pbStack_b0 = (byte *)0x0;
            pbStack_a8 = (byte *)0x8000000000000001;
            if (lStack_128 == 0) {
              pbVar10 = (byte *)0x8000000000000001;
              pbStack_a8 = (byte *)0x8000000000000001;
              pbVar23 = (byte *)0x8000000000000001;
              pbVar25 = pbStack_b8;
LAB_10140e28c:
              uStack_90 = &UNK_108cb16c3;
              pbStack_88 = (byte *)0x3;
              pbVar21 = (byte *)0x0;
              pbStack_120 = (byte *)&uStack_90;
              pbStack_118 = &DAT_100c7b3a0;
              pbStack_180 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&pbStack_120);
joined_r0x00010140e3ec:
              pbStack_188 = (byte *)0x8000000000000000;
              if (-0x7fffffffffffffff < (long)pbVar10) {
LAB_10140e2d8:
                pbStack_188 = (byte *)0x8000000000000000;
                if (unaff_x22 != (byte *)0x0) {
                  pbVar19 = pbVar25 + 8;
                  do {
                    if (*(long *)(pbVar19 + -8) != 0) {
                      _free(*(undefined8 *)pbVar19);
                    }
                    pbVar19 = pbVar19 + 0x18;
                    unaff_x22 = unaff_x22 + -1;
                  } while (unaff_x22 != (byte *)0x0);
                }
                if (pbVar10 != (byte *)0x0) {
                  _free(pbVar25);
                }
              }
LAB_10140e3f0:
              if ((-0x7fffffffffffffff < (long)pbVar23) && (pbVar23 != (byte *)0x0)) {
                _free(pbStack_298);
              }
              if (((ulong)pbVar21 & 0x7fffffffffffffff) != 0) {
                _free(pbStack_288);
              }
              FUN_100d34830(&pbStack_d0);
              if ((char)pbStack_f0 != '\x16') {
                FUN_100e077ec(&pbStack_f0);
              }
            }
            else {
              pbVar21 = (byte *)0x8000000000000000;
              pbVar10 = (byte *)0x8000000000000001;
              pbVar23 = (byte *)0x8000000000000001;
              pbVar19 = (byte *)0x8000000000000001;
              pbVar25 = pbStack_130;
              pbVar7 = pbStack_b8;
              do {
                pbVar15 = pbVar7;
                pbVar20 = pbVar25 + 0x40;
                bVar4 = *pbVar25;
                pbStack_c8 = pbVar20;
                if (bVar4 == 0x16) break;
                pbStack_b0 = pbStack_b0 + 1;
                uStack_90 = (byte *)CONCAT71(uStack_90._1_7_,bVar4);
                uVar26 = *(undefined8 *)(pbVar25 + 1);
                uVar28 = *(undefined8 *)(pbVar25 + 0x18);
                uVar27 = *(undefined8 *)(pbVar25 + 0x10);
                pbStack_118 = *(byte **)(pbVar25 + 0x28);
                pbStack_120 = *(byte **)(pbVar25 + 0x20);
                puVar14[1] = *(undefined8 *)(pbVar25 + 9);
                *puVar14 = uVar26;
                *(undefined8 *)((long)puVar14 + 0x17) = uVar28;
                *(undefined8 *)((long)puVar14 + 0xf) = uVar27;
                pbStack_108 = *(byte **)(pbVar25 + 0x38);
                pbStack_110 = *(byte **)(pbVar25 + 0x30);
                if ((char)pbStack_f0 != '\x16') {
                  FUN_100e077ec(&pbStack_f0);
                }
                pbStack_e8 = pbStack_118;
                pbStack_f0 = pbStack_120;
                pbStack_d8 = pbStack_108;
                pbStack_e0 = pbStack_110;
                pbVar25 = pbStack_280;
                if (bVar4 < 0xd) {
                  if (bVar4 == 1) {
                    uVar9 = (uint)uStack_90._1_1_;
                    if (2 < uVar9) {
                      uVar9 = 3;
                    }
                  }
                  else {
                    if (bVar4 != 4) {
                      if (bVar4 == 0xc) {
                        if (lStack_78 == 8) {
                          if (*(long *)pbStack_80 != 0x65707954656d696d) goto LAB_10140defc;
                          uVar9 = 1;
                        }
                        else if (lStack_78 == 5) {
                          if (*(int *)pbStack_80 != 0x657a6973 || pbStack_80[4] != 0x73)
                          goto LAB_10140defc;
                          uVar9 = 2;
                        }
                        else if ((lStack_78 == 3) &&
                                (*(short *)pbStack_80 == 0x7273 && pbStack_80[2] == 99)) {
                          uVar9 = 0;
                        }
                        else {
LAB_10140defc:
                          uVar9 = 3;
                        }
                        goto joined_r0x00010140e124;
                      }
LAB_10140e6d8:
                      pbStack_a0 = pbStack_280;
                      pbStack_a8 = pbVar19;
                      pbStack_98 = unaff_x22;
                      pbStack_180 = (byte *)FUN_108855b04(&uStack_90,&pbStack_120,&UNK_10b20d5a0);
                      goto joined_r0x00010140e3ec;
                    }
                    pbVar7 = pbStack_88;
                    if ((byte *)0x2 < pbStack_88) {
                      pbVar7 = (byte *)0x3;
                    }
                    uVar9 = (uint)pbVar7;
                  }
LAB_10140dfb8:
                  FUN_100e077ec(&uStack_90);
                }
                else {
                  if (bVar4 == 0xd) {
                    if (pbStack_80 == (byte *)0x8) {
                      if (*(long *)pbStack_88 != 0x65707954656d696d) goto LAB_10140dfb4;
LAB_10140e118:
                      uVar9 = 1;
                    }
                    else if (pbStack_80 == (byte *)0x5) {
                      if (*(int *)pbStack_88 != 0x657a6973 || pbStack_88[4] != 0x73)
                      goto LAB_10140dfb4;
LAB_10140df90:
                      uVar9 = 2;
                    }
                    else if ((pbStack_80 == (byte *)0x3) &&
                            (*(short *)pbStack_88 == 0x7273 && pbStack_88[2] == 99)) {
LAB_10140ddb4:
                      uVar9 = 0;
                    }
                    else {
LAB_10140dfb4:
                      uVar9 = 3;
                    }
                    goto LAB_10140dfb8;
                  }
                  if (bVar4 != 0xe) {
                    if (bVar4 != 0xf) goto LAB_10140e6d8;
                    if (pbStack_80 == (byte *)0x8) {
                      if (((((*pbStack_88 == 0x6d) && (pbStack_88[1] == 0x69)) &&
                           (pbStack_88[2] == 0x6d)) &&
                          ((pbStack_88[3] == 0x65 && (pbStack_88[4] == 0x54)))) &&
                         ((pbStack_88[5] == 0x79 &&
                          ((pbStack_88[6] == 0x70 && (pbStack_88[7] == 0x65))))))
                      goto LAB_10140e118;
                    }
                    else if (pbStack_80 == (byte *)0x5) {
                      if ((((*pbStack_88 == 0x73) && (pbStack_88[1] == 0x69)) &&
                          (pbStack_88[2] == 0x7a)) &&
                         ((pbStack_88[3] == 0x65 && (pbStack_88[4] == 0x73)))) goto LAB_10140df90;
                    }
                    else if (((pbStack_80 == (byte *)0x3) && (*pbStack_88 == 0x73)) &&
                            ((pbStack_88[1] == 0x72 && (pbStack_88[2] == 99)))) goto LAB_10140ddb4;
                    goto LAB_10140dfb4;
                  }
                  if (lStack_78 == 8) {
                    if ((((*pbStack_80 != 0x6d) || (pbStack_80[1] != 0x69)) ||
                        (pbStack_80[2] != 0x6d)) ||
                       (((pbStack_80[3] != 0x65 || (pbStack_80[4] != 0x54)) ||
                        ((pbStack_80[5] != 0x79 ||
                         ((pbStack_80[6] != 0x70 || (pbStack_80[7] != 0x65))))))))
                    goto LAB_10140ded4;
                    uVar9 = 1;
                  }
                  else if (lStack_78 == 5) {
                    if ((((*pbStack_80 != 0x73) || (pbStack_80[1] != 0x69)) ||
                        (pbStack_80[2] != 0x7a)) ||
                       ((pbStack_80[3] != 0x65 || (pbStack_80[4] != 0x73)))) goto LAB_10140ded4;
                    uVar9 = 2;
                  }
                  else if (((lStack_78 == 3) && (*pbStack_80 == 0x73)) &&
                          ((pbStack_80[1] == 0x72 && (pbStack_80[2] == 99)))) {
                    uVar9 = 0;
                  }
                  else {
LAB_10140ded4:
                    uVar9 = 3;
                  }
joined_r0x00010140e124:
                  if (pbStack_88 != (byte *)0x0) {
                    _free();
                  }
                }
                uVar9 = uVar9 & 0xff;
                cVar5 = (char)pbStack_f0;
                pbVar17 = unaff_x22;
                pbVar7 = pbVar15;
                if (uVar9 < 2) {
                  if (uVar9 == 0) {
                    if (pbVar21 != (byte *)0x8000000000000000) {
                      pbStack_a0 = pbStack_280;
                      uStack_90 = &UNK_108cb16c3;
                      pbStack_88 = (byte *)0x3;
                      pbStack_120 = (byte *)&uStack_90;
                      pbStack_118 = &DAT_100c7b3a0;
                      pbStack_a8 = pbVar19;
                      pbStack_98 = unaff_x22;
                      pbStack_180 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,
                                                          &pbStack_120);
                      goto joined_r0x00010140e3ec;
                    }
                    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                    if (cVar5 == '\x16') {
                      pbStack_a0 = pbStack_280;
                      pbStack_a8 = pbVar19;
                      pbStack_98 = unaff_x22;
                      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_10140ea54;
                    }
                    uVar26 = *puVar12;
                    puVar13[1] = puVar12[1];
                    *puVar13 = uVar26;
                    uVar26 = *(undefined8 *)((long)puVar12 + 0xf);
                    *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
                    *(undefined8 *)((long)puVar13 + 0xf) = uVar26;
                    pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,cVar5);
                    FUN_1004b62d4(&uStack_90,&pbStack_120);
                    if (uStack_90 == (byte *)0x8000000000000000) {
                      pbVar21 = (byte *)0x0;
                      pbStack_180 = pbStack_88;
                      pbStack_98 = unaff_x22;
                      pbStack_a8 = pbVar19;
                      pbStack_a0 = pbStack_280;
                      goto joined_r0x00010140e3ec;
                    }
                    pbStack_288 = pbStack_88;
                    pbStack_2a8 = pbStack_80;
                    pbVar21 = uStack_90;
                  }
                  else {
                    if (pbVar23 != (byte *)0x8000000000000001) {
                      pbStack_a0 = pbStack_280;
                      uStack_90 = &UNK_108c98350;
                      pbStack_88 = (byte *)0x8;
                      pbStack_120 = (byte *)&uStack_90;
                      pbStack_118 = &DAT_100c7b3a0;
                      pbStack_a8 = pbVar19;
                      pbStack_98 = unaff_x22;
                      pbStack_180 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,
                                                          &pbStack_120);
                      goto joined_r0x00010140e3ec;
                    }
                    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                    if (cVar5 == '\x16') {
                      pbStack_a0 = pbStack_280;
                      pbStack_a8 = pbVar19;
                      pbStack_98 = unaff_x22;
                      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                      goto LAB_10140ea54;
                    }
                    uVar26 = *puVar12;
                    puVar13[1] = puVar12[1];
                    *puVar13 = uVar26;
                    uVar26 = *(undefined8 *)((long)puVar12 + 0xf);
                    *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
                    *(undefined8 *)((long)puVar13 + 0xf) = uVar26;
                    pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,cVar5);
                    FUN_1004b60cc(&uStack_90,&pbStack_120);
                    if (uStack_90 == (byte *)0x8000000000000001) {
                      pbVar23 = (byte *)0x8000000000000001;
                      pbStack_180 = pbStack_88;
                      pbStack_98 = unaff_x22;
                      pbStack_a8 = pbVar19;
                      pbStack_a0 = pbStack_280;
                      goto joined_r0x00010140e3ec;
                    }
                    pbStack_298 = pbStack_88;
                    pbStack_2b0 = pbStack_80;
                    pbVar23 = uStack_90;
                  }
                }
                else if (uVar9 == 2) {
                  if (pbVar10 != (byte *)0x8000000000000001) {
                    pbStack_a0 = pbStack_280;
                    uStack_90 = &UNK_108cb16c6;
                    pbStack_88 = (byte *)0x5;
                    pbStack_120 = (byte *)&uStack_90;
                    pbStack_118 = &DAT_100c7b3a0;
                    pbStack_a8 = pbVar19;
                    pbStack_98 = unaff_x22;
                    pbStack_180 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&pbStack_120
                                                       );
                    pbStack_188 = (byte *)0x8000000000000000;
                    if (pbVar10 != (byte *)0x8000000000000000) goto LAB_10140e2d8;
                    goto LAB_10140e3f0;
                  }
                  FUN_100f21028(&pbStack_120,&pbStack_f0);
                  pbVar17 = pbStack_110;
                  pbVar19 = pbStack_120;
                  pbVar20 = pbStack_c8;
                  pbVar10 = pbStack_120;
                  pbVar7 = pbStack_b8;
                  pbVar25 = pbStack_118;
                  if (pbStack_120 == (byte *)0x8000000000000001) {
                    pbStack_188 = (byte *)0x8000000000000000;
                    pbStack_180 = pbStack_118;
                    goto LAB_10140e3f0;
                  }
                }
                else {
                  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
                  if (cVar5 == '\x16') {
                    pbStack_a0 = pbStack_280;
                    pbStack_a8 = pbVar19;
                    pbStack_98 = unaff_x22;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_10140ea54;
                  }
                  uVar26 = *puVar12;
                  puVar13[1] = puVar12[1];
                  *puVar13 = uVar26;
                  uVar26 = *(undefined8 *)((long)puVar12 + 0xf);
                  *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar12 + 0x17);
                  *(undefined8 *)((long)puVar13 + 0xf) = uVar26;
                  pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,cVar5);
                  FUN_100e077ec(&pbStack_120);
                }
                pbStack_280 = pbVar25;
                pbVar15 = pbVar20;
                unaff_x22 = pbVar17;
                pbVar25 = pbVar15;
                pbVar20 = pbVar15;
              } while (pbVar15 != pbVar7);
              pbStack_a0 = pbStack_280;
              pbVar25 = pbStack_280;
              pbStack_a8 = pbVar19;
              pbStack_98 = unaff_x22;
              if (pbVar21 == (byte *)0x8000000000000000) goto LAB_10140e28c;
              pbVar25 = (byte *)0x8000000000000000;
              if (pbVar23 != (byte *)0x8000000000000001) {
                pbVar25 = pbVar23;
              }
              pbStack_180 = pbStack_288;
              pbVar23 = (byte *)0x8000000000000000;
              if (pbVar10 != (byte *)0x8000000000000001) {
                pbVar23 = pbVar10;
              }
              pbStack_178 = pbStack_2a8;
              pbStack_168 = pbStack_298;
              pbStack_160 = pbStack_2b0;
              pbStack_150 = pbStack_280;
              pbStack_188 = pbVar21;
              pbStack_170 = pbVar25;
              pbStack_158 = pbVar23;
              pbStack_148 = unaff_x22;
              FUN_100d34830(&pbStack_d0);
              if (pbVar15 == pbVar20) {
                pbVar10 = (byte *)0x0;
              }
              else {
                pbStack_120 = pbStack_b0;
                pbVar10 = (byte *)FUN_1087e422c(pbStack_b0 +
                                                ((ulong)((long)pbVar15 - (long)pbVar20) >> 6),
                                                &pbStack_120,&UNK_10b23a190);
              }
              if ((char)pbStack_f0 != '\x16') {
                FUN_100e077ec(&pbStack_f0);
              }
              if (pbVar10 != (byte *)0x0) {
                pbStack_188 = (byte *)0x8000000000000000;
                pbStack_180 = pbVar10;
                if (pbVar21 != (byte *)0x0) {
                  _free(pbStack_288);
                }
                if (((ulong)pbVar25 & 0x7fffffffffffffff) != 0) {
                  _free(pbStack_298);
                }
                if (pbVar23 != (byte *)0x8000000000000000) {
                  if (unaff_x22 != (byte *)0x0) {
                    pbVar10 = pbStack_280 + 8;
                    do {
                      if (*(long *)(pbVar10 + -8) != 0) {
                        _free(*(undefined8 *)pbVar10);
                      }
                      pbVar10 = pbVar10 + 0x18;
                      unaff_x22 = unaff_x22 + -1;
                    } while (unaff_x22 != (byte *)0x0);
                  }
                  if (pbVar23 != (byte *)0x0) {
                    _free(pbStack_280);
                  }
                }
              }
            }
            goto LAB_10140e444;
          }
          pbVar23 = (byte *)FUN_108855b04(abStack_140,&pbStack_120,&UNK_10b20b4c0);
LAB_10140e900:
          pbVar25 = pbStack_218;
          pbVar10 = pbStack_220;
          pbStack_e8 = pbVar23;
          if (pbStack_218 != (byte *)0x0) {
            pbVar23 = (byte *)0x0;
            do {
              pbVar21 = pbVar10 + (long)pbVar23 * 0x48;
              if (*(long *)pbVar21 != 0) {
                _free(*(undefined8 *)(pbVar21 + 8));
              }
              if (*(long *)(pbVar21 + 0x18) == -0x8000000000000000 || *(long *)(pbVar21 + 0x18) == 0
                 ) {
                lVar22 = *(long *)(pbVar21 + 0x30);
              }
              else {
                _free(*(undefined8 *)(pbVar21 + 0x20));
                lVar22 = *(long *)(pbVar21 + 0x30);
              }
              if (lVar22 != -0x8000000000000000) {
                lVar18 = *(long *)(pbVar21 + 0x38);
                lVar24 = *(long *)(pbVar21 + 0x40);
                if (lVar24 != 0) {
                  puVar11 = (undefined8 *)(lVar18 + 8);
                  do {
                    if (puVar11[-1] != 0) {
                      _free(*puVar11);
                    }
                    puVar11 = puVar11 + 3;
                    lVar24 = lVar24 + -1;
                  } while (lVar24 != 0);
                }
                if (lVar22 != 0) {
                  _free(lVar18);
                }
              }
              pbVar23 = pbVar23 + 1;
            } while (pbVar23 != pbVar25);
          }
          if (pbStack_228 != (byte *)0x0) {
            _free(pbVar10);
          }
          goto LAB_10140e9c4;
        }
        pbVar23 = pbStack_130 + lStack_128 * 0x20;
        pbStack_120 = pbStack_130;
        pbStack_110 = pbStack_138;
        uStack_100 = 0;
        pbVar25 = pbStack_130;
        pbStack_108 = pbVar23;
        if (lStack_128 == 0) {
LAB_10140e1fc:
          pbStack_118 = pbVar25;
          pbVar21 = (byte *)FUN_1087e422c(0,&UNK_10b2237d8,&UNK_10b20a590);
LAB_10140e218:
          pbStack_188 = (byte *)0x8000000000000000;
          pbStack_180 = pbVar21;
        }
        else {
          pbVar25 = pbStack_130 + 0x20;
          bVar4 = *pbStack_130;
          if (bVar4 == 0x16) goto LAB_10140e1fc;
          uVar26 = *(undefined8 *)(pbStack_130 + 1);
          puVar14[1] = *(undefined8 *)(pbStack_130 + 9);
          *puVar14 = uVar26;
          uVar26 = *(undefined8 *)(pbStack_130 + 0x10);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)(pbStack_130 + 0x18);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar26;
          uStack_100 = 1;
          uStack_90 = (byte *)CONCAT71(uStack_90._1_7_,bVar4);
          pbStack_118 = pbVar25;
          FUN_1004b62d4(&pbStack_a8,&uStack_90);
          pbVar19 = pbStack_98;
          pbVar21 = pbStack_a0;
          unaff_x22 = pbStack_a8;
          if (pbStack_a8 == (byte *)0x8000000000000000) goto LAB_10140e218;
          if (lVar18 == 1) {
LAB_10140e1bc:
            pbVar10 = (byte *)FUN_1087e422c(1,&UNK_10b2237d8,&UNK_10b20a590);
LAB_10140e1dc:
            pbStack_188 = (byte *)0x8000000000000000;
            pbStack_180 = pbVar10;
          }
          else {
            pbStack_118 = pbVar10 + 0x40;
            bVar4 = pbVar10[0x20];
            if (bVar4 == 0x16) goto LAB_10140e1bc;
            uVar26 = *(undefined8 *)(pbVar10 + 0x21);
            puVar14[1] = *(undefined8 *)(pbVar10 + 0x29);
            *puVar14 = uVar26;
            uVar26 = *(undefined8 *)(pbVar10 + 0x30);
            *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)(pbVar10 + 0x38);
            *(undefined8 *)((long)puVar14 + 0xf) = uVar26;
            uStack_100 = 2;
            uStack_90 = (byte *)CONCAT71(uStack_90._1_7_,bVar4);
            FUN_1004b60cc(&pbStack_a8,&uStack_90);
            pbVar25 = pbStack_98;
            pbVar10 = pbStack_a0;
            pbVar23 = pbStack_a8;
            if (pbStack_a8 == (byte *)0x8000000000000001) goto LAB_10140e1dc;
            FUN_100f26234(&uStack_90,&pbStack_120);
            pbVar7 = pbStack_88;
            if (uStack_90 != (byte *)0x8000000000000002) {
              if (uStack_90 != (byte *)0x8000000000000001) {
                pbStack_188 = unaff_x22;
                pbStack_180 = pbVar21;
                pbStack_178 = pbVar19;
                pbStack_170 = pbVar23;
                pbStack_168 = pbVar10;
                pbStack_160 = pbVar25;
                pbStack_158 = uStack_90;
                pbStack_150 = pbStack_88;
                pbStack_148 = pbStack_80;
                pbStack_b0 = pbStack_80;
                pbStack_c8 = pbVar25;
                pbStack_d0 = pbVar10;
                pbStack_b8 = pbStack_88;
                pbStack_c0 = uStack_90;
                pbStack_e8 = pbVar21;
                pbStack_f0 = unaff_x22;
                pbStack_d8 = pbVar23;
                pbStack_e0 = pbVar19;
                pbVar23 = (byte *)FUN_100fbc738(&pbStack_120);
                if (pbVar23 != (byte *)0x0) {
                  pbStack_188 = (byte *)0x8000000000000000;
                  pbStack_180 = pbVar23;
                  FUN_100dda168(&pbStack_f0);
                }
                goto LAB_10140e444;
              }
              pbVar7 = (byte *)FUN_1087e422c(2,&UNK_10b2237d8,&UNK_10b20a590);
            }
            pbStack_188 = (byte *)0x8000000000000000;
            pbStack_180 = pbVar7;
            if (((ulong)pbVar23 & 0x7fffffffffffffff) != 0) {
              _free(pbVar10);
            }
          }
          pbVar23 = pbStack_108;
          pbVar25 = pbStack_118;
          if (unaff_x22 != (byte *)0x0) {
            _free(pbVar21);
            pbVar23 = pbStack_108;
            pbVar25 = pbStack_118;
          }
        }
        lVar18 = ((ulong)((long)pbVar23 - (long)pbVar25) >> 5) + 1;
        while (lVar18 = lVar18 + -1, lVar18 != 0) {
          FUN_100e077ec(pbVar25);
          pbVar25 = pbVar25 + 0x20;
        }
        unaff_x22 = (byte *)0x0;
        if (pbStack_110 != (byte *)0x0) {
          _free(pbStack_120);
        }
LAB_10140e444:
        if ((bVar3 & 0x1e) != 0x14) {
          FUN_100e077ec(abStack_140);
        }
        pbVar10 = pbStack_218;
        pbVar23 = pbStack_180;
        if (pbStack_188 == (byte *)0x8000000000000000) goto LAB_10140e900;
        pbStack_208 = pbStack_170;
        pbStack_210 = pbStack_178;
        pbStack_1f8 = pbStack_160;
        pbStack_200 = pbStack_168;
        pbStack_1e8 = pbStack_150;
        pbStack_1f0 = pbStack_158;
        pbStack_1e0 = pbStack_148;
        if (pbStack_188 == (byte *)0x8000000000000001) goto LAB_10140e900;
        pbStack_1d0 = pbStack_188;
        pbStack_1c8 = pbStack_180;
        pbStack_1b8 = pbStack_170;
        pbStack_1c0 = pbStack_178;
        pbStack_1a8 = pbStack_160;
        pbStack_1b0 = pbStack_168;
        pbStack_198 = pbStack_150;
        pbStack_1a0 = pbStack_158;
        pbStack_190 = pbStack_148;
        if (pbStack_218 == pbStack_228) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17he0f273de780c5358E(&pbStack_228);
        }
        pbVar23 = pbStack_220 + (long)pbVar10 * 0x48;
        *(byte **)(pbVar23 + 8) = pbStack_1c8;
        *(byte **)pbVar23 = pbStack_1d0;
        *(byte **)(pbVar23 + 0x18) = pbStack_1b8;
        *(byte **)(pbVar23 + 0x10) = pbStack_1c0;
        *(byte **)(pbVar23 + 0x28) = pbStack_1a8;
        *(byte **)(pbVar23 + 0x20) = pbStack_1b0;
        *(byte **)(pbVar23 + 0x38) = pbStack_198;
        *(byte **)(pbVar23 + 0x30) = pbStack_1a0;
        *(byte **)(pbVar23 + 0x40) = pbStack_190;
        pbStack_218 = pbVar10 + 1;
        pbVar23 = pbVar8;
        pbVar25 = pbVar16;
      } while (pbVar16 != pbVar8);
    }
    pbVar21 = pbStack_218;
    pbVar10 = pbStack_220;
    pbVar25 = pbStack_228;
    pbStack_e8 = pbStack_220;
    pbStack_f0 = pbStack_228;
    pbStack_e0 = pbStack_218;
    pbVar16 = pbVar23;
    if (pbStack_228 == (byte *)0x8000000000000000) {
LAB_10140e9c4:
      lVar22 = ((ulong)((long)pbVar8 - (long)pbVar16) >> 5) + 1;
      while (lVar22 = lVar22 + -1, pbVar10 = pbVar2, pbVar25 = pbVar1, lVar22 != 0) {
        FUN_100e077ec(pbVar16);
        pbVar16 = pbVar16 + 0x20;
      }
    }
    else {
      pbVar8 = (byte *)FUN_100fbc738(&pbStack_250);
      if (pbVar8 == (byte *)0x0) {
        param_1[1] = pbStack_e8;
        *param_1 = pbStack_f0;
        param_1[2] = pbStack_e0;
        return;
      }
      pbStack_e8 = pbVar8;
      if (pbVar21 != (byte *)0x0) {
        pbVar8 = (byte *)0x0;
        do {
          pbVar23 = pbVar10 + (long)pbVar8 * 0x48;
          if (*(long *)pbVar23 != 0) {
            _free(*(undefined8 *)(pbVar23 + 8));
          }
          if (*(long *)(pbVar23 + 0x18) == -0x8000000000000000 || *(long *)(pbVar23 + 0x18) == 0) {
            lVar22 = *(long *)(pbVar23 + 0x30);
          }
          else {
            _free(*(undefined8 *)(pbVar23 + 0x20));
            lVar22 = *(long *)(pbVar23 + 0x30);
          }
          if (lVar22 != -0x8000000000000000) {
            lVar18 = *(long *)(pbVar23 + 0x38);
            lVar24 = *(long *)(pbVar23 + 0x40);
            if (lVar24 != 0) {
              puVar11 = (undefined8 *)(lVar18 + 8);
              do {
                if (puVar11[-1] != 0) {
                  _free(*puVar11);
                }
                puVar11 = puVar11 + 3;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
            }
            if (lVar22 != 0) {
              _free(lVar18);
            }
          }
          pbVar8 = pbVar8 + 1;
        } while (pbVar8 != pbVar21);
      }
    }
    if (pbVar25 != (byte *)0x0) {
      _free(pbVar10);
    }
  }
  else {
    pbStack_e8 = (byte *)FUN_108855b04(param_2,&pbStack_120,&UNK_10b209fe0);
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = pbStack_e8;
  return;
}

