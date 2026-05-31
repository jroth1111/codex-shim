
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1013d38a0(ulong *param_1,char *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  byte *pbVar9;
  code *pcVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte **ppbVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  long lVar30;
  byte *pbVar31;
  byte *unaff_x28;
  byte *pbVar32;
  undefined8 uVar33;
  byte *pbStack_278;
  byte *pbStack_270;
  long lStack_268;
  byte *pbStack_260;
  long lStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  byte *pbStack_220;
  byte *pbStack_218;
  byte *pbStack_210;
  byte *pbStack_208;
  undefined8 uStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  undefined8 uStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  char cStack_190;
  undefined7 uStack_18f;
  byte abStack_180 [8];
  byte *pbStack_178;
  byte *pbStack_170;
  long lStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  
  if (*param_2 == '\x14') {
    lVar3 = *(long *)(param_2 + 8);
    pbVar4 = *(byte **)(param_2 + 0x10);
    uVar14 = *(ulong *)(param_2 + 0x18);
    pbVar1 = pbVar4 + uVar14 * 0x20;
    lStack_258 = 0;
    uVar11 = uVar14;
    if (0x4923 < uVar14) {
      uVar11 = 0x4924;
    }
    pbStack_278 = pbVar4;
    pbStack_270 = pbVar4;
    lStack_268 = lVar3;
    pbStack_260 = pbVar1;
    if (uVar14 == 0) {
      uStack_238 = 0;
      uStack_230 = 8;
      uStack_228 = 0;
      pbVar12 = pbVar4;
    }
    else {
      uVar14 = _malloc(uVar11 * 0x38);
      if (uVar14 == 0) {
        func_0x0001087c9084(8,uVar11 * 0x38);
LAB_1013d4764:
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1013d4768);
        (*pcVar10)();
      }
      lVar30 = 0;
      uStack_228 = 0;
      puVar15 = (undefined8 *)((ulong)abStack_180 | 1);
      puVar24 = (undefined8 *)((ulong)&uStack_c0 | 1);
      puVar19 = (undefined8 *)((ulong)&pbStack_160 | 1);
      puVar20 = (undefined8 *)((ulong)&uStack_90 | 1);
      pbVar28 = pbVar4;
      uStack_238 = uVar11;
      uStack_230 = uVar14;
      do {
        lVar21 = lStack_168;
        pbVar27 = pbStack_170;
        pbVar2 = pbStack_178;
        pbVar25 = pbVar28 + 0x20;
        bVar5 = *pbVar28;
        pbVar12 = pbVar25;
        pbStack_270 = pbVar25;
        if (bVar5 == 0x16) break;
        uVar33 = *(undefined8 *)(pbVar28 + 1);
        puVar15[1] = *(undefined8 *)(pbVar28 + 9);
        *puVar15 = uVar33;
        uVar33 = *(undefined8 *)(pbVar28 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar28 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar33;
        lVar30 = lVar30 + 1;
        lStack_258 = lVar30;
        abStack_180[0] = bVar5;
        if (bVar5 != 0x14) {
          if (bVar5 == 0x15) {
            lVar21 = lStack_168 * 0x40;
            pbVar12 = pbStack_170 + lVar21;
            pbStack_140 = pbStack_170;
            pbStack_138 = pbStack_170;
            pbStack_130 = pbStack_178;
            pbStack_160 = (byte *)CONCAT71(pbStack_160._1_7_,0x16);
            pbStack_120 = (byte *)0x0;
            pbStack_110 = (byte *)0x8000000000000007;
            pbStack_128 = pbVar12;
            if (lStack_168 == 0) {
LAB_1013d3fe8:
              uStack_90 = &UNK_108c61038;
              pbStack_88 = (byte *)0x4;
              uStack_c0 = (byte *)&uStack_90;
              pbStack_b8 = &DAT_100c7b3a0;
              pbStack_1b8 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
              pbStack_1c0 = (byte *)0x8000000000000007;
LAB_1013d4024:
              FUN_100d34830(&pbStack_140);
              pbVar32 = unaff_x28;
              if ((char)pbStack_160 != '\x16') {
                FUN_100e077ec(&pbStack_160);
              }
            }
            else {
              pbVar28 = (byte *)0x0;
              cVar7 = '\x03';
              pbVar31 = (byte *)0x8000000000000007;
              pbVar27 = (byte *)0x8000000000000007;
              pbVar2 = pbStack_170;
              do {
                pbVar32 = uStack_c0;
                pbVar22 = pbVar2 + 0x40;
                bVar6 = *pbVar2;
                pbVar23 = pbVar22;
                pbVar26 = pbVar27;
                pbVar29 = pbVar28;
                if (bVar6 == 0x16) break;
                uStack_c0 = (byte *)CONCAT71(uStack_c0._1_7_,bVar6);
                pbVar23 = uStack_c0;
                uVar33 = *(undefined8 *)(pbVar2 + 0x10);
                *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)(pbVar2 + 0x18);
                *(undefined8 *)((long)puVar24 + 0xf) = uVar33;
                uVar33 = *(undefined8 *)(pbVar2 + 1);
                puVar24[1] = *(undefined8 *)(pbVar2 + 9);
                *puVar24 = uVar33;
                pbStack_158 = *(byte **)(pbVar2 + 0x28);
                pbStack_160 = *(byte **)(pbVar2 + 0x20);
                pbStack_148 = *(byte **)(pbVar2 + 0x38);
                pbStack_150 = *(byte **)(pbVar2 + 0x30);
                if (bVar6 < 0xd) {
                  if (bVar6 == 1) {
                    uStack_c0._1_1_ = SUB81(pbVar32,1);
                    iVar18 = 1;
                    if (uStack_c0._1_1_ != '\x01') {
                      iVar18 = 2;
                    }
                    iVar13 = 0;
                    if (uStack_c0._1_1_ != '\0') {
                      iVar13 = iVar18;
                    }
                    goto LAB_1013d3dd4;
                  }
                  if (bVar6 == 4) {
                    iVar18 = 1;
                    if (pbStack_b8 != (byte *)0x1) {
                      iVar18 = 2;
                    }
                    iVar13 = 0;
                    if (pbStack_b8 != (byte *)0x0) {
                      iVar13 = iVar18;
                    }
                    goto LAB_1013d3dd4;
                  }
                  if (bVar6 == 0xc) {
                    if (pbStack_a8 == (byte *)0x6) {
                      iVar13 = 1;
                      if (*(int *)pbStack_b0 != 0x65636361 || *(short *)(pbStack_b0 + 4) != 0x7373)
                      {
                        iVar13 = 2;
                      }
                    }
                    else if (pbStack_a8 == (byte *)0x4) {
                      iVar13 = 2;
                      if (*(int *)pbStack_b0 == 0x68746170) {
                        iVar13 = 0;
                      }
                    }
                    else {
                      iVar13 = 2;
                    }
                    goto joined_r0x0001013d3d14;
                  }
LAB_1013d4558:
                  pbStack_120 = pbVar28 + 1;
                  pbStack_138 = pbVar22;
                  pbStack_110 = pbVar27;
                  pbStack_1b8 = (byte *)FUN_108855b04(&uStack_c0,&uStack_90,&UNK_10b210b40);
LAB_1013d4290:
                  pbStack_1c0 = (byte *)0x8000000000000007;
                  if (pbVar31 == (byte *)0x8000000000000007) goto LAB_1013d4024;
LAB_1013d429c:
                  pbStack_1c0 = (byte *)0x8000000000000007;
                  pbVar12 = pbVar31 + 0x7ffffffffffffffb;
                  if (pbVar31 < (byte *)0x8000000000000005) {
                    pbVar12 = (byte *)0x2;
                  }
                  ppbVar17 = &pbStack_100;
                  pbVar28 = unaff_x28;
                  if ((pbVar12 != (byte *)0x0) && (pbVar12 != (byte *)0x1)) {
                    uVar11 = (ulong)pbVar31 ^ 0x8000000000000000;
                    if (-1 < (long)pbVar31) {
                      uVar11 = 5;
                    }
                    if (uVar11 < 5) {
                      if (uVar11 != 2) goto LAB_1013d4024;
                      pbVar28 = (byte *)((ulong)unaff_x28 & 0x7fffffffffffffff);
                    }
                    else {
                      if (pbVar31 != (byte *)0x0) {
                        _free(unaff_x28);
                      }
                      ppbVar17 = &pbStack_f0;
                      pbVar28 = (byte *)((ulong)pbStack_f8 & 0x7fffffffffffffff);
                    }
                  }
                  if (pbVar28 != (byte *)0x0) {
                    _free(*ppbVar17);
                  }
                  goto LAB_1013d4024;
                }
                if (bVar6 == 0xd) {
                  if (pbStack_b0 == (byte *)0x6) {
                    iVar13 = 1;
                    if (*(int *)pbStack_b8 != 0x65636361 || *(short *)(pbStack_b8 + 4) != 0x7373) {
                      iVar13 = 2;
                    }
                  }
                  else {
                    if (pbStack_b0 != (byte *)0x4) goto LAB_1013d3da0;
                    iVar13 = 2;
                    if (*(int *)pbStack_b8 == 0x68746170) {
                      iVar13 = 0;
                    }
                  }
LAB_1013d3dd4:
                  uStack_c0 = pbVar23;
                  FUN_100e077ec(&uStack_c0);
                }
                else {
                  if (bVar6 != 0xe) {
                    if (bVar6 != 0xf) goto LAB_1013d4558;
                    if (pbStack_b0 == (byte *)0x6) {
                      if (((((*pbStack_b8 != 0x61) || (pbStack_b8[1] != 99)) ||
                           (pbStack_b8[2] != 99)) ||
                          ((pbStack_b8[3] != 0x65 || (pbStack_b8[4] != 0x73)))) ||
                         (pbStack_b8[5] != 0x73)) goto LAB_1013d3da0;
                      iVar13 = 1;
                    }
                    else if (((pbStack_b0 == (byte *)0x4) && (*pbStack_b8 == 0x70)) &&
                            ((pbStack_b8[1] == 0x61 &&
                             ((pbStack_b8[2] == 0x74 && (pbStack_b8[3] == 0x68)))))) {
                      iVar13 = 0;
                    }
                    else {
LAB_1013d3da0:
                      iVar13 = 2;
                    }
                    goto LAB_1013d3dd4;
                  }
                  if (pbStack_a8 == (byte *)0x6) {
                    if (((((*pbStack_b0 != 0x61) || (pbStack_b0[1] != 99)) || (pbStack_b0[2] != 99))
                        || ((pbStack_b0[3] != 0x65 || (pbStack_b0[4] != 0x73)))) ||
                       (pbStack_b0[5] != 0x73)) goto LAB_1013d3d10;
                    iVar13 = 1;
                  }
                  else if (((pbStack_a8 == (byte *)0x4) && (*pbStack_b0 == 0x70)) &&
                          ((pbStack_b0[1] == 0x61 &&
                           ((pbStack_b0[2] == 0x74 && (pbStack_b0[3] == 0x68)))))) {
                    iVar13 = 0;
                  }
                  else {
LAB_1013d3d10:
                    iVar13 = 2;
                  }
joined_r0x0001013d3d14:
                  if (pbStack_b8 != (byte *)0x0) {
                    _free();
                  }
                }
                cVar8 = (char)pbStack_160;
                if (iVar13 == 0) {
                  if (pbVar31 != (byte *)0x8000000000000007) {
                    pbStack_120 = pbVar28 + 1;
                    uStack_90 = &UNK_108c61038;
                    pbStack_88 = (byte *)0x4;
                    uStack_c0 = (byte *)&uStack_90;
                    pbStack_b8 = &DAT_100c7b3a0;
                    pbStack_138 = pbVar22;
                    pbStack_110 = pbVar27;
                    pbStack_1b8 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0);
                    goto LAB_1013d429c;
                  }
                  pbStack_160 = (byte *)CONCAT71(pbStack_160._1_7_,0x16);
                  if (cVar8 == '\x16') {
                    pbStack_120 = pbVar28 + 1;
                    pbStack_138 = pbVar22;
                    pbStack_110 = pbVar27;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_1013d4764;
                  }
                  uVar33 = *puVar19;
                  puVar20[1] = puVar19[1];
                  *puVar20 = uVar33;
                  uVar33 = *(undefined8 *)((long)puVar19 + 0xf);
                  *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                  *(undefined8 *)((long)puVar20 + 0xf) = uVar33;
                  uStack_90 = (undefined *)CONCAT71(uStack_90._1_7_,cVar8);
                  FUN_10135a9a0(&uStack_c0,&uStack_90);
                  unaff_x28 = pbStack_b8;
                  pbVar26 = uStack_c0;
                  if (uStack_c0 == (byte *)0x8000000000000007) {
                    pbStack_120 = pbVar28 + 1;
                    pbStack_1c0 = (byte *)0x8000000000000007;
                    pbStack_1b8 = pbStack_b8;
                    pbStack_138 = pbVar22;
                    pbStack_110 = pbVar27;
                    goto LAB_1013d4024;
                  }
                  pbStack_d8 = pbStack_a8;
                  pbStack_e0 = pbStack_b0;
                  pbStack_c8 = pbStack_98;
                  pbStack_d0 = pbStack_a0;
                  if (pbVar27 != (byte *)0x8000000000000007) {
                    pbVar2 = pbVar27 + 0x7ffffffffffffffb;
                    if (pbVar27 < (byte *)0x8000000000000005) {
                      pbVar2 = (byte *)0x2;
                    }
                    ppbVar17 = &pbStack_100;
                    pbVar31 = pbStack_108;
                    if ((pbVar2 != (byte *)0x0) && (pbVar2 != (byte *)0x1)) {
                      uVar11 = (ulong)pbVar27 ^ 0x8000000000000000;
                      if (-1 < (long)pbVar27) {
                        uVar11 = 5;
                      }
                      if (uVar11 < 5) {
                        if (uVar11 != 2) goto LAB_1013d3b04;
                        pbVar31 = (byte *)((ulong)pbStack_108 & 0x7fffffffffffffff);
                      }
                      else {
                        if (pbVar27 != (byte *)0x0) {
                          _free(pbStack_108);
                        }
                        ppbVar17 = &pbStack_f0;
                        pbVar31 = (byte *)((ulong)pbStack_f8 & 0x7fffffffffffffff);
                      }
                    }
                    if (pbVar31 != (byte *)0x0) {
                      _free(*ppbVar17);
                    }
                  }
LAB_1013d3b04:
                  pbStack_108 = unaff_x28;
                  pbStack_f8 = pbStack_d8;
                  pbStack_100 = pbStack_e0;
                  pbStack_e8 = pbStack_c8;
                  pbStack_f0 = pbStack_d0;
                  pbVar31 = pbVar26;
                }
                else {
                  if (iVar13 == 1) {
                    if (cVar7 == '\x03') {
                      pbStack_160 = (byte *)CONCAT71(pbStack_160._1_7_,0x16);
                      if (cVar8 == '\x16') goto LAB_1013d4654;
                      uVar33 = *puVar19;
                      puVar24[1] = puVar19[1];
                      *puVar24 = uVar33;
                      uVar33 = *(undefined8 *)((long)puVar19 + 0xf);
                      *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                      *(undefined8 *)((long)puVar24 + 0xf) = uVar33;
                      uStack_c0 = (byte *)CONCAT71(uStack_c0._1_7_,cVar8);
                      FUN_10127a430(&uStack_90,&uStack_c0);
                      if ((byte)uStack_90 != 1) {
                        cVar7 = uStack_90._1_1_;
                        goto LAB_1013d3b1c;
                      }
                      pbStack_120 = pbVar28 + 1;
                      pbStack_1b8 = pbStack_88;
                      pbStack_138 = pbVar22;
                      pbStack_110 = pbVar27;
                    }
                    else {
                      pbStack_120 = pbVar28 + 1;
                      uStack_90 = &UNK_108cad9d8;
                      pbStack_88 = (byte *)0x6;
                      uStack_c0 = (byte *)&uStack_90;
                      pbStack_b8 = &DAT_100c7b3a0;
                      pbStack_138 = pbVar22;
                      pbStack_110 = pbVar27;
                      pbStack_1b8 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_c0
                                                         );
                    }
                    goto LAB_1013d4290;
                  }
                  pbStack_160 = (byte *)CONCAT71(pbStack_160._1_7_,0x16);
                  if (cVar8 == '\x16') {
LAB_1013d4654:
                    pbStack_160 = (byte *)CONCAT71(pbStack_160._1_7_,0x16);
                    pbStack_120 = pbVar28 + 1;
                    pbStack_138 = pbVar22;
                    pbStack_110 = pbVar27;
                    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    goto LAB_1013d4764;
                  }
                  uVar33 = *puVar19;
                  puVar24[1] = puVar19[1];
                  *puVar24 = uVar33;
                  uVar33 = *(undefined8 *)((long)puVar19 + 0xf);
                  *(undefined8 *)((long)puVar24 + 0x17) = *(undefined8 *)((long)puVar19 + 0x17);
                  *(undefined8 *)((long)puVar24 + 0xf) = uVar33;
                  uStack_c0 = (byte *)CONCAT71(uStack_c0._1_7_,cVar8);
                  FUN_100e077ec(&uStack_c0);
                }
LAB_1013d3b1c:
                pbVar28 = pbVar28 + 1;
                pbVar23 = pbVar12;
                pbVar27 = pbVar26;
                pbVar29 = (byte *)((lVar21 - 0x40U >> 6) + 1);
                pbVar2 = pbVar22;
              } while (pbVar22 != pbVar12);
              pbVar27 = pbStack_f0;
              pbVar2 = pbStack_f8;
              pbVar32 = pbStack_100;
              pbVar28 = pbStack_108;
              pbStack_138 = pbVar23;
              pbStack_120 = pbVar29;
              pbStack_110 = pbVar26;
              if (pbVar31 == (byte *)0x8000000000000007) goto LAB_1013d3fe8;
              if (cVar7 == '\x03') {
                uStack_90 = &UNK_108cad9d8;
                pbStack_88 = (byte *)0x6;
                uStack_c0 = (byte *)&uStack_90;
                pbStack_b8 = &DAT_100c7b3a0;
                pbStack_1b8 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_c0);
                pbStack_1c0 = (byte *)0x8000000000000007;
                pbVar12 = pbVar31 + 0x7ffffffffffffffb;
                if (pbVar31 < (byte *)0x8000000000000005) {
                  pbVar12 = (byte *)0x2;
                }
                pbVar28 = unaff_x28;
                if ((pbVar12 != (byte *)0x0) && (pbVar12 != (byte *)0x1)) {
                  uVar11 = (ulong)pbVar31 ^ 0x8000000000000000;
                  if (-1 < (long)pbVar31) {
                    uVar11 = 5;
                  }
                  if (uVar11 < 5) {
                    if (uVar11 != 2) goto LAB_1013d4024;
                    pbVar28 = (byte *)((ulong)unaff_x28 & 0x7fffffffffffffff);
                  }
                  else {
                    if (pbVar31 != (byte *)0x0) {
                      _free(unaff_x28);
                    }
                    pbVar32 = pbVar27;
                    pbVar28 = (byte *)((ulong)pbVar2 & 0x7fffffffffffffff);
                  }
                }
                if (pbVar28 != (byte *)0x0) {
                  _free(pbVar32);
                }
                goto LAB_1013d4024;
              }
              pbStack_1a8 = pbStack_f8;
              pbStack_1b0 = pbStack_100;
              pbStack_1b8 = pbStack_108;
              pbStack_198 = pbStack_e8;
              pbStack_1a0 = pbStack_f0;
              pbStack_1c0 = pbVar26;
              cStack_190 = cVar7;
              if (pbVar26 == (byte *)0x8000000000000007) goto LAB_1013d4024;
              FUN_100d34830(&pbStack_140);
              if (pbVar12 != pbVar23) {
                uStack_c0 = pbVar29;
                pbStack_1b8 = (byte *)FUN_1087e422c(pbVar29 + ((ulong)((long)pbVar12 - (long)pbVar23
                                                                      ) >> 6),&uStack_c0,
                                                    &UNK_10b23a190);
                pbStack_1c0 = (byte *)0x8000000000000007;
                pbVar12 = pbVar26 + 0x7ffffffffffffffb;
                if (pbVar26 < (byte *)0x8000000000000005) {
                  pbVar12 = (byte *)0x2;
                }
                pbVar31 = pbVar32;
                if ((pbVar12 != (byte *)0x0) && (pbVar12 != (byte *)0x1)) {
                  uVar11 = (ulong)pbVar26 ^ 0x8000000000000000;
                  if (-1 < (long)pbVar26) {
                    uVar11 = 5;
                  }
                  if (uVar11 < 5) {
                    if (uVar11 != 2) goto LAB_1013d404c;
                    pbVar28 = (byte *)((ulong)pbVar28 & 0x7fffffffffffffff);
                  }
                  else {
                    if (pbVar26 != (byte *)0x0) {
                      _free(pbVar28);
                    }
                    pbVar28 = (byte *)((ulong)pbVar2 & 0x7fffffffffffffff);
                    pbVar31 = pbVar27;
                  }
                }
                if (pbVar28 != (byte *)0x0) {
                  _free(pbVar31);
                  pbVar32 = pbVar31;
                }
              }
            }
            goto LAB_1013d404c;
          }
          pbVar12 = (byte *)FUN_108855b04(abStack_180,&uStack_90,&UNK_10b20bcc0);
LAB_1013d46c4:
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbVar12;
          FUN_100e79780(&uStack_238);
          goto LAB_1013d46d8;
        }
        pbVar12 = pbStack_170 + lStack_168 * 0x20;
        pbStack_110 = pbStack_170;
        pbStack_100 = pbStack_178;
        pbStack_f0 = (byte *)0x0;
        pbVar32 = pbStack_170;
        pbStack_f8 = pbVar12;
        if (lStack_168 == 0) {
LAB_1013d3a94:
          pbStack_108 = pbVar32;
          pbVar28 = (byte *)FUN_1087e422c(0,&UNK_10b22e828,&UNK_10b20a590);
LAB_1013d3ab0:
          pbStack_1c0 = (byte *)0x8000000000000007;
          pbStack_1b8 = pbVar28;
LAB_1013d3ab4:
          lVar21 = ((ulong)((long)pbVar12 - (long)pbVar32) >> 5) + 1;
          while (lVar21 = lVar21 + -1, pbVar23 = pbVar27, pbVar26 = pbVar2, lVar21 != 0) {
            FUN_100e077ec(pbVar32);
            pbVar32 = pbVar32 + 0x20;
          }
        }
        else {
          pbVar32 = pbStack_170 + 0x20;
          bVar6 = *pbStack_170;
          if (bVar6 == 0x16) goto LAB_1013d3a94;
          uVar33 = *(undefined8 *)(pbStack_170 + 1);
          puVar20[1] = *(undefined8 *)(pbStack_170 + 9);
          *puVar20 = uVar33;
          uVar33 = *(undefined8 *)(pbStack_170 + 0x10);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbStack_170 + 0x18);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar33;
          pbStack_f0 = (byte *)0x1;
          uStack_90 = (undefined *)CONCAT71(uStack_90._1_7_,bVar6);
          pbStack_108 = pbVar32;
          FUN_10135a9a0(&pbStack_160,&uStack_90);
          pbVar28 = pbStack_158;
          pbVar31 = pbStack_160;
          if (pbStack_160 == (byte *)0x8000000000000007) goto LAB_1013d3ab0;
          pbStack_a8 = pbStack_148;
          pbStack_b0 = pbStack_150;
          pbStack_98 = pbStack_138;
          pbStack_a0 = pbStack_140;
          uStack_c0 = pbStack_160;
          pbStack_b8 = pbStack_158;
          if (lVar21 == 1) {
LAB_1013d417c:
            pbStack_1b8 = (byte *)FUN_1087e422c(1,&UNK_10b22e828,&UNK_10b20a590);
LAB_1013d4194:
            pbStack_1c0 = (byte *)0x8000000000000007;
            pbVar26 = pbVar31 + 0x7ffffffffffffffb;
            if (pbVar31 < (byte *)0x8000000000000005) {
              pbVar26 = (byte *)0x2;
            }
            ppbVar17 = &pbStack_b0;
            if ((pbVar26 == (byte *)0x0) || (pbVar26 == (byte *)0x1)) {
joined_r0x0001013d41c8:
              if (pbVar28 != (byte *)0x0) goto LAB_1013d41cc;
            }
            else {
              uVar11 = (ulong)pbVar31 ^ 0x8000000000000000;
              if (-1 < (long)pbVar31) {
                uVar11 = 5;
              }
              if (4 < uVar11) {
                if (pbVar31 != (byte *)0x0) {
                  _free(pbVar28);
                }
                pbVar28 = (byte *)((ulong)pbStack_a8 & 0x7fffffffffffffff);
                ppbVar17 = &pbStack_a0;
                goto joined_r0x0001013d41c8;
              }
              if ((uVar11 != 2) || (((ulong)pbVar28 & 0x7fffffffffffffff) == 0)) goto LAB_1013d3ab4;
LAB_1013d41cc:
              _free(*ppbVar17);
            }
            goto LAB_1013d3ab4;
          }
          pbVar32 = pbVar27 + 0x40;
          bVar6 = pbVar27[0x20];
          pbStack_108 = pbVar32;
          if (bVar6 == 0x16) goto LAB_1013d417c;
          uVar33 = *(undefined8 *)(pbVar27 + 0x21);
          puVar19[1] = *(undefined8 *)(pbVar27 + 0x29);
          *puVar19 = uVar33;
          uVar33 = *(undefined8 *)(pbVar27 + 0x30);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)(pbVar27 + 0x38);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar33;
          pbStack_f0 = (byte *)0x2;
          pbStack_160 = (byte *)CONCAT71(pbStack_160._1_7_,bVar6);
          FUN_10127a430(&uStack_90,&pbStack_160);
          pbVar9 = pbStack_a0;
          pbVar22 = pbStack_a8;
          pbVar23 = pbStack_b0;
          pbVar26 = pbStack_b8;
          pbVar29 = uStack_c0;
          pbStack_1b8 = pbStack_88;
          if (((ulong)uStack_90 & 1) != 0) goto LAB_1013d4194;
          cStack_190 = uStack_90._1_1_;
          pbStack_1c0 = uStack_c0;
          pbStack_1a8 = pbStack_a8;
          pbStack_1b0 = pbStack_b0;
          pbStack_1b8 = pbStack_b8;
          pbStack_198 = pbStack_98;
          pbStack_1a0 = pbStack_a0;
          if (uStack_c0 == (byte *)0x8000000000000007) goto LAB_1013d3ab4;
          pbVar12 = (byte *)FUN_100fbc738(&pbStack_110);
          if (pbVar12 == (byte *)0x0) goto LAB_1013d404c;
          pbStack_1c0 = (byte *)0x8000000000000007;
          pbVar28 = pbVar29 + 0x7ffffffffffffffb;
          if (pbVar29 < (byte *)0x8000000000000005) {
            pbVar28 = (byte *)0x2;
          }
          pbStack_1b8 = pbVar12;
          if ((pbVar28 != (byte *)0x0) && (pbVar28 != (byte *)0x1)) {
            uVar11 = (ulong)pbVar29 ^ 0x8000000000000000;
            if (-1 < (long)pbVar29) {
              uVar11 = 5;
            }
            if (uVar11 < 5) {
              if (uVar11 != 2) goto LAB_1013d404c;
              pbVar26 = (byte *)((ulong)pbVar26 & 0x7fffffffffffffff);
            }
            else {
              if (pbVar29 != (byte *)0x0) {
                _free(pbVar26);
              }
              pbVar26 = (byte *)((ulong)pbVar22 & 0x7fffffffffffffff);
              pbVar23 = pbVar9;
            }
          }
        }
        if (pbVar26 != (byte *)0x0) {
          _free(pbVar23);
        }
LAB_1013d404c:
        if ((bVar5 & 0x1e) != 0x14) {
          FUN_100e077ec(abStack_180);
        }
        uVar11 = uStack_228;
        pbVar12 = pbStack_1b8;
        if (pbStack_1c0 == (byte *)0x8000000000000007) goto LAB_1013d46c4;
        pbStack_218 = pbStack_1a8;
        pbStack_220 = pbStack_1b0;
        pbStack_208 = pbStack_198;
        pbStack_210 = pbStack_1a0;
        uStack_200 = CONCAT71(uStack_18f,cStack_190);
        if (pbStack_1c0 == (byte *)0x8000000000000008) goto LAB_1013d46c4;
        pbStack_1f8 = pbStack_1c0;
        pbStack_1f0 = pbStack_1b8;
        pbStack_1e0 = pbStack_1a8;
        pbStack_1e8 = pbStack_1b0;
        pbStack_1d0 = pbStack_198;
        pbStack_1d8 = pbStack_1a0;
        uStack_1c8 = uStack_200;
        if (uStack_228 == uStack_238) {
          func_0x0001089a4d98(&uStack_238);
        }
        puVar16 = (undefined8 *)(uStack_230 + uVar11 * 0x38);
        puVar16[1] = pbStack_1f0;
        *puVar16 = pbStack_1f8;
        puVar16[3] = pbStack_1e0;
        puVar16[2] = pbStack_1e8;
        puVar16[5] = pbStack_1d0;
        puVar16[4] = pbStack_1d8;
        puVar16[6] = uStack_1c8;
        uStack_228 = uVar11 + 1;
        pbVar12 = pbVar1;
        pbVar28 = pbVar25;
        unaff_x28 = pbVar32;
      } while (pbVar25 != pbVar1);
    }
    param_1[1] = uStack_230;
    *param_1 = uStack_238;
    param_1[2] = uStack_228;
    pbVar25 = pbVar12;
    if (*param_1 == 0x8000000000000000) {
LAB_1013d46d8:
      lVar30 = ((ulong)((long)pbVar1 - (long)pbVar25) >> 5) + 1;
      while (lVar30 = lVar30 + -1, lVar30 != 0) {
        FUN_100e077ec(pbVar25);
        pbVar25 = pbVar25 + 0x20;
      }
      if (lVar3 != 0) {
        _free(pbVar4);
      }
    }
    else {
      uStack_248 = param_1[1];
      uStack_250 = *param_1;
      uStack_240 = param_1[2];
      uVar11 = FUN_100fbc738(&pbStack_278);
      if (uVar11 != 0) {
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        FUN_100e79780(&uStack_250);
      }
    }
  }
  else {
    uVar11 = FUN_108855b04(param_2,&uStack_90,&UNK_10b209e40);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
  }
  return;
}

