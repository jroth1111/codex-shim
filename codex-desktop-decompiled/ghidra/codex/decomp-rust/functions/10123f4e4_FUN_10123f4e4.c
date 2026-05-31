
/* WARNING: Type propagation algorithm not settling */

void FUN_10123f4e4(ulong *param_1,byte *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  code *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  ulong unaff_x20;
  undefined8 *puVar20;
  byte *unaff_x21;
  long lVar21;
  byte *pbVar22;
  long lVar23;
  byte *pbVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uStack_180;
  ulong uStack_178;
  byte *pbStack_168;
  ulong uStack_160;
  ulong uStack_158;
  uint uStack_144;
  uint uStack_140;
  int iStack_138;
  ulong uStack_130;
  byte *pbStack_120;
  byte *pbStack_118;
  ulong uStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  byte bStack_d0;
  byte bStack_cf;
  undefined6 uStack_ce;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  byte bStack_b0;
  byte bStack_af;
  undefined2 uStack_ae;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined4 uStack_88;
  uint uStack_84;
  ulong uStack_80;
  
  bVar6 = *param_2;
  if (bVar6 == 0x14) {
    uStack_110 = *(ulong *)(param_2 + 8);
    pbVar4 = *(byte **)(param_2 + 0x10);
    lVar17 = *(long *)(param_2 + 0x18);
    pbVar19 = pbVar4 + lVar17 * 0x20;
    pbStack_100 = (byte *)0x0;
    pbVar22 = pbVar4;
    pbStack_120 = pbVar4;
    pbStack_108 = pbVar19;
    if (lVar17 == 0) {
LAB_10123fb64:
      pbStack_118 = pbVar22;
      uVar25 = FUN_1087e422c(0,&UNK_10b231fb8,&UNK_10b20a590);
LAB_10123fb80:
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar25;
    }
    else {
      pbVar22 = pbVar4 + 0x20;
      if (*pbVar4 == 0x16) goto LAB_10123fb64;
      uVar13 = *(undefined8 *)(pbVar4 + 1);
      uStack_a8._1_3_ = (undefined3)*(undefined8 *)(pbVar4 + 9);
      uStack_a4 = (undefined4)((ulong)*(undefined8 *)(pbVar4 + 9) >> 0x18);
      bStack_af = (byte)uVar13;
      uStack_ae = (undefined2)((ulong)uVar13 >> 8);
      uStack_ac = (uint)((ulong)uVar13 >> 0x18);
      uStack_a8._0_1_ = (undefined1)((ulong)uVar13 >> 0x38);
      uStack_98 = *(undefined8 *)(pbVar4 + 0x18);
      uStack_a0 = (undefined1)*(undefined8 *)(pbVar4 + 0x10);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x10) >> 8);
      pbStack_100 = (byte *)0x1;
      pbStack_118 = pbVar22;
      bStack_b0 = *pbVar4;
      FUN_1004b62d4(&bStack_d0,&bStack_b0);
      uVar14 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
      uVar25 = CONCAT71(uStack_c7,uStack_c8);
      if (uVar14 == 0x8000000000000000) goto LAB_10123fb80;
      if (lVar17 == 1) {
LAB_10123f638:
        pbStack_168 = (byte *)FUN_1087e422c(1,&UNK_10b231fb8,&UNK_10b20a590);
LAB_10123f654:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)pbStack_168;
      }
      else {
        uVar15 = CONCAT71(uStack_bf,uStack_c0);
        pbStack_118 = pbVar4 + 0x40;
        if (pbVar4[0x20] == 0x16) goto LAB_10123f638;
        uVar13 = *(undefined8 *)(pbVar4 + 0x21);
        uStack_a8._1_3_ = (undefined3)*(undefined8 *)(pbVar4 + 0x29);
        uStack_a4 = (undefined4)((ulong)*(undefined8 *)(pbVar4 + 0x29) >> 0x18);
        bStack_af = (byte)uVar13;
        uStack_ae = (undefined2)((ulong)uVar13 >> 8);
        uStack_ac = (uint)((ulong)uVar13 >> 0x18);
        uStack_a8._0_1_ = (undefined1)((ulong)uVar13 >> 0x38);
        uStack_98 = *(undefined8 *)(pbVar4 + 0x38);
        uStack_a0 = (undefined1)*(undefined8 *)(pbVar4 + 0x30);
        uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar4 + 0x30) >> 8);
        pbStack_100 = (byte *)0x2;
        bStack_b0 = pbVar4[0x20];
        FUN_1004b60cc(&bStack_d0,&bStack_b0);
        uVar7 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
        pbStack_168 = (byte *)CONCAT71(uStack_c7,uStack_c8);
        if (uVar7 == 0x8000000000000001) goto LAB_10123f654;
        uVar9 = CONCAT71(uStack_bf,uStack_c0);
        func_0x000100f2fea4(&bStack_b0,&pbStack_120);
        pbVar22 = pbStack_100;
        pbVar4 = pbStack_108;
        pbVar19 = pbStack_118;
        if (CONCAT22(uStack_ae,CONCAT11(bStack_af,bStack_b0)) == 1) {
          *param_1 = 0x8000000000000000;
          param_1[1] = CONCAT44(uStack_a4,uStack_a8);
        }
        else {
          if (uStack_ac == 2) {
            uVar13 = 2;
          }
          else {
            pbVar24 = pbStack_118;
            if (pbStack_118 != pbStack_108) {
              uVar10 = CONCAT44(uStack_a8,uStack_ac);
              pbVar24 = pbStack_118 + 0x20;
              bVar5 = *pbStack_118;
              if (bVar5 != 0x16) {
                uVar13 = *(undefined8 *)(pbStack_118 + 1);
                uStack_c7 = (undefined7)*(undefined8 *)(pbStack_118 + 9);
                bStack_cf = (byte)uVar13;
                uStack_ce = (undefined6)((ulong)uVar13 >> 8);
                uStack_c8 = (undefined1)((ulong)uVar13 >> 0x38);
                uStack_b8 = *(undefined8 *)(pbStack_118 + 0x18);
                uStack_c0 = (undefined1)*(undefined8 *)(pbStack_118 + 0x10);
                uStack_bf = (undefined7)((ulong)*(undefined8 *)(pbStack_118 + 0x10) >> 8);
                pbStack_100 = pbStack_100 + 1;
                pbStack_118 = pbVar24;
                bStack_d0 = bVar5;
                if (bVar5 == 0x10) {
LAB_10123ff40:
                  uStack_88 = CONCAT22(uStack_88._2_2_,0x200);
                  FUN_100e077ec(&bStack_d0);
                }
                else if (bVar5 == 0x11) {
                  puVar18 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
                  uVar13 = *puVar18;
                  uStack_a8 = (undefined4)puVar18[1];
                  uStack_a4 = (undefined4)((ulong)puVar18[1] >> 0x20);
                  bStack_b0 = (byte)uVar13;
                  bStack_af = (byte)((ulong)uVar13 >> 8);
                  uStack_ae = (undefined2)((ulong)uVar13 >> 0x10);
                  uStack_ac = (uint)((ulong)uVar13 >> 0x20);
                  uStack_98 = puVar18[3];
                  uStack_a0 = (undefined1)puVar18[2];
                  uStack_9f = (undefined7)((ulong)puVar18[2] >> 8);
                  func_0x000101468a18(&uStack_88,&bStack_b0);
                  _free(puVar18);
                }
                else {
                  if (bVar5 == 0x12) goto LAB_10123ff40;
                  func_0x000101468a18(&uStack_88,&bStack_d0);
                }
                if ((char)uStack_88 == '\x01') {
LAB_10123ffcc:
                  *param_1 = 0x8000000000000000;
                  param_1[1] = uStack_80;
                  goto joined_r0x00010123ffe0;
                }
                if (pbVar24 != pbVar4) {
                  uVar1 = uStack_88._1_1_;
                  pbStack_118 = pbVar19 + 0x40;
                  bVar5 = pbVar19[0x20];
                  if (bVar5 != 0x16) {
                    uVar13 = *(undefined8 *)(pbVar19 + 0x21);
                    uStack_c7 = (undefined7)*(undefined8 *)(pbVar19 + 0x29);
                    bStack_cf = (byte)uVar13;
                    uStack_ce = (undefined6)((ulong)uVar13 >> 8);
                    uStack_c8 = (undefined1)((ulong)uVar13 >> 0x38);
                    uStack_b8 = *(undefined8 *)(pbVar19 + 0x38);
                    uStack_c0 = (undefined1)*(undefined8 *)(pbVar19 + 0x30);
                    uStack_bf = (undefined7)((ulong)*(undefined8 *)(pbVar19 + 0x30) >> 8);
                    pbStack_100 = pbVar22 + 2;
                    bStack_d0 = bVar5;
                    if (bVar5 == 0x10) {
LAB_101240068:
                      uStack_88 = CONCAT22(uStack_88._2_2_,0x300);
                      FUN_100e077ec(&bStack_d0);
                    }
                    else if (bVar5 == 0x11) {
                      puVar18 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
                      uVar13 = *puVar18;
                      uStack_a8 = (undefined4)puVar18[1];
                      uStack_a4 = (undefined4)((ulong)puVar18[1] >> 0x20);
                      bStack_b0 = (byte)uVar13;
                      bStack_af = (byte)((ulong)uVar13 >> 8);
                      uStack_ae = (undefined2)((ulong)uVar13 >> 0x10);
                      uStack_ac = (uint)((ulong)uVar13 >> 0x20);
                      uStack_98 = puVar18[3];
                      uStack_a0 = (undefined1)puVar18[2];
                      uStack_9f = (undefined7)((ulong)puVar18[2] >> 8);
                      func_0x00010142c57c(&uStack_88,&bStack_b0);
                      _free(puVar18);
                    }
                    else {
                      if (bVar5 == 0x12) goto LAB_101240068;
                      func_0x00010142c57c(&uStack_88,&bStack_d0);
                    }
                    if ((char)uStack_88 != '\x01') {
                      *param_1 = uVar14;
                      param_1[1] = uVar25;
                      param_1[2] = uVar15;
                      param_1[3] = uVar7;
                      param_1[4] = (ulong)pbStack_168;
                      param_1[5] = uVar9;
                      param_1[6] = uVar10;
                      *(undefined1 *)(param_1 + 7) = uVar1;
                      *(undefined1 *)((long)param_1 + 0x39) = uStack_88._1_1_;
                      uVar15 = FUN_100fbc738(&pbStack_120);
                      if (uVar15 == 0) goto LAB_10123fd80;
                      *param_1 = 0x8000000000000000;
                      param_1[1] = uVar15;
                      if (uVar14 != 0) {
                        _free(uVar25);
                      }
                      uVar25 = uVar7 & 0x7fffffffffffffff;
                      goto joined_r0x000101240310;
                    }
                    goto LAB_10123ffcc;
                  }
                }
                uVar13 = 4;
                goto LAB_10123fed0;
              }
            }
            pbStack_118 = pbVar24;
            uVar13 = 3;
          }
LAB_10123fed0:
          uVar15 = FUN_1087e422c(uVar13,&UNK_10b231fb8,&UNK_10b20a590);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar15;
        }
joined_r0x00010123ffe0:
        if ((uVar7 & 0x7fffffffffffffff) != 0) {
          _free(pbStack_168);
        }
      }
      pbVar19 = pbStack_108;
      pbVar22 = pbStack_118;
      if (uVar14 != 0) {
        _free(uVar25);
        pbVar19 = pbStack_108;
        pbVar22 = pbStack_118;
      }
    }
    lVar17 = ((ulong)((long)pbVar19 - (long)pbVar22) >> 5) + 1;
    while (lVar17 = lVar17 + -1, pbStack_168 = pbStack_120, uVar25 = uStack_110, lVar17 != 0) {
      FUN_100e077ec(pbVar22);
      pbVar22 = pbVar22 + 0x20;
    }
joined_r0x000101240310:
    if (uVar25 != 0) {
      _free(pbStack_168);
    }
  }
  else {
    if (bVar6 != 0x15) {
      uVar25 = FUN_108855b04(param_2,&uStack_88,&UNK_10b20a960);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar25;
      return;
    }
    uStack_f0 = *(undefined8 *)(param_2 + 8);
    pbStack_100 = *(byte **)(param_2 + 0x10);
    lVar17 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar19 = pbStack_100 + lVar17;
    pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
    lStack_e0 = 0;
    pbStack_e8 = pbVar19;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar25 = 0x8000000000000001;
      uStack_160 = unaff_x20;
      pbStack_168 = unaff_x21;
      pbStack_f8 = pbStack_100;
    }
    else {
      lVar21 = 0;
      puVar20 = (undefined8 *)((ulong)&bStack_b0 | 1);
      puVar26 = (undefined8 *)((ulong)&pbStack_120 | 1);
      puVar18 = (undefined8 *)((ulong)&bStack_d0 | 1);
      iStack_138 = 2;
      uStack_144 = 3;
      uStack_140 = 4;
      uStack_158 = 4;
      uStack_130 = 0x8000000000000000;
      uVar25 = 0x8000000000000001;
      pbVar4 = pbStack_100;
      pbStack_f8 = pbStack_100;
      do {
        pbVar24 = pbVar4 + 0x40;
        bVar5 = *pbVar4;
        lVar23 = lVar21;
        pbVar22 = pbVar24;
        if (bVar5 == 0x16) break;
        uVar13 = *(undefined8 *)(pbVar4 + 0x10);
        *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar4 + 0x18);
        *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
        uVar13 = *(undefined8 *)(pbVar4 + 1);
        puVar20[1] = *(undefined8 *)(pbVar4 + 9);
        *puVar20 = uVar13;
        pbStack_118 = *(byte **)(pbVar4 + 0x28);
        pbStack_120 = *(byte **)(pbVar4 + 0x20);
        pbStack_108 = *(byte **)(pbVar4 + 0x38);
        uStack_110 = *(ulong *)(pbVar4 + 0x30);
        uVar14 = CONCAT44(uStack_a4,uStack_a8);
        uVar13 = CONCAT71(uStack_9f,uStack_a0);
        bStack_b0 = bVar5;
        if (0xc < bVar5) {
          if (bVar5 == 0xd) {
            FUN_100bb3654(&bStack_d0,uVar14,uVar13);
            goto LAB_10123f790;
          }
          if (bVar5 != 0xe) {
            if (bVar5 != 0xf) goto LAB_10123fb24;
            FUN_100bb33d8(&bStack_d0,uVar14,uVar13);
            goto LAB_10123f790;
          }
          FUN_100bb33d8(&bStack_d0,uVar13,uStack_98);
          if (uVar14 != 0) goto LAB_10123f750;
LAB_10123f798:
          if ((bStack_d0 & 1) == 0) goto LAB_10123f7a0;
LAB_10123fb4c:
          uVar14 = CONCAT71(uStack_c7,uStack_c8);
          goto LAB_10123fd28;
        }
        if (bVar5 == 1) {
          bStack_cf = bStack_af;
          if (4 < bStack_af) {
            bStack_cf = 5;
          }
          bStack_d0 = 0;
LAB_10123f790:
          FUN_100e077ec(&bStack_b0);
          goto LAB_10123f798;
        }
        if (bVar5 == 4) {
          if (4 < uVar14) {
            uVar14 = 5;
          }
          bStack_cf = (byte)uVar14;
          bStack_d0 = 0;
          goto LAB_10123f790;
        }
        if (bVar5 != 0xc) {
LAB_10123fb24:
          uVar13 = FUN_108855b04(&bStack_b0,&uStack_88,&UNK_10b211c00);
          uStack_c8 = (undefined1)uVar13;
          uStack_c7 = (undefined7)((ulong)uVar13 >> 8);
          bStack_d0 = 1;
          goto LAB_10123fb4c;
        }
        FUN_100bb3654(&bStack_d0,uVar13);
        if (uVar14 == 0) goto LAB_10123f798;
LAB_10123f750:
        _free(uVar13);
        if ((bStack_d0 & 1) != 0) goto LAB_10123fb4c;
LAB_10123f7a0:
        bVar5 = (byte)pbStack_120;
        if (bStack_cf < 3) {
          if (bStack_cf == 0) {
            if (uStack_130 != 0x8000000000000000) {
              lStack_e0 = lVar21 + 1;
              bStack_d0 = 0xf8;
              bStack_cf = 0x82;
              uStack_ce = 0x108c9;
              uStack_c8 = 8;
              uStack_c7 = 0;
              bStack_b0 = (byte)&bStack_d0;
              bStack_af = (byte)((ulong)&bStack_d0 >> 8);
              uStack_ae = (undefined2)((ulong)&bStack_d0 >> 0x10);
              uStack_ac = (uint)((ulong)&bStack_d0 >> 0x20);
              uStack_a8 = 0xc7b3a0;
              uStack_a4 = 1;
              pbStack_f8 = pbVar24;
              uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
              goto LAB_10123fc30;
            }
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            if (bVar5 == 0x16) {
              lStack_e0 = lVar21 + 1;
              pbStack_f8 = pbVar24;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10124027c;
            }
            uVar13 = *puVar26;
            puVar20[1] = puVar26[1];
            *puVar20 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
            *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
            *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
            bStack_b0 = bVar5;
            FUN_1004b62d4(&bStack_d0,&bStack_b0);
            uStack_130 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
            if (uStack_130 == 0x8000000000000000) {
              uVar14 = CONCAT71(uStack_c7,uStack_c8);
              uStack_130 = 0;
              goto LAB_10123fd28;
            }
            uStack_160 = CONCAT71(uStack_c7,uStack_c8);
            uStack_180 = CONCAT71(uStack_bf,uStack_c0);
          }
          else if (bStack_cf == 1) {
            if (uVar25 != 0x8000000000000001) {
              lStack_e0 = lVar21 + 1;
              bStack_d0 = 0xa9;
              bStack_cf = 199;
              uStack_ce = 0x108ca;
              uStack_c8 = 6;
              uStack_c7 = 0;
              bStack_b0 = (byte)&bStack_d0;
              bStack_af = (byte)((ulong)&bStack_d0 >> 8);
              uStack_ae = (undefined2)((ulong)&bStack_d0 >> 0x10);
              uStack_ac = (uint)((ulong)&bStack_d0 >> 0x20);
              uStack_a8 = 0xc7b3a0;
              uStack_a4 = 1;
              pbStack_f8 = pbVar24;
              uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
              *param_1 = 0x8000000000000000;
              param_1[1] = uVar14;
              uVar25 = uVar25 & 0x7fffffffffffffff;
              goto joined_r0x0001012401c4;
            }
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            if (bVar5 == 0x16) {
              lStack_e0 = lVar21 + 1;
              pbStack_f8 = pbVar24;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10124027c;
            }
            uVar13 = *puVar26;
            puVar20[1] = puVar26[1];
            *puVar20 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
            *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
            *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
            bStack_b0 = bVar5;
            FUN_1004b60cc(&bStack_d0,&bStack_b0);
            uVar25 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
            if (uVar25 == 0x8000000000000001) {
              lStack_e0 = lVar21 + 1;
              *param_1 = 0x8000000000000000;
              param_1[1] = CONCAT71(uStack_c7,uStack_c8);
              pbStack_f8 = pbVar24;
              goto LAB_10123fd50;
            }
            pbStack_168 = (byte *)CONCAT71(uStack_c7,uStack_c8);
            uStack_178 = CONCAT71(uStack_bf,uStack_c0);
          }
          else {
            if (iStack_138 != 2) {
              lStack_e0 = lVar21 + 1;
              bStack_d0 = 0x21;
              bStack_cf = 0xdc;
              uStack_ce = 0x108ca;
              uStack_c8 = 5;
              uStack_c7 = 0;
              bStack_b0 = (byte)&bStack_d0;
              bStack_af = (byte)((ulong)&bStack_d0 >> 8);
              uStack_ae = (undefined2)((ulong)&bStack_d0 >> 0x10);
              uStack_ac = (uint)((ulong)&bStack_d0 >> 0x20);
              uStack_a8 = 0xc7b3a0;
              uStack_a4 = 1;
              pbStack_f8 = pbVar24;
              uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
              goto LAB_10123fc30;
            }
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            if (bVar5 == 0x16) goto LAB_10123ff54;
            uVar13 = *puVar26;
            puVar18[1] = puVar26[1];
            *puVar18 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
            *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
            *(undefined8 *)((long)puVar18 + 0xf) = uVar13;
            bStack_d0 = bVar5;
            if (bVar5 == 0x10) {
LAB_10123f99c:
              FUN_100e077ec(&bStack_d0);
              iStack_138 = 0;
            }
            else if (bVar5 == 0x11) {
              puVar8 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
              uVar13 = *puVar8;
              uStack_a8 = (undefined4)puVar8[1];
              uStack_a4 = (undefined4)((ulong)puVar8[1] >> 0x20);
              bStack_b0 = (byte)uVar13;
              bStack_af = (byte)((ulong)uVar13 >> 8);
              uStack_ae = (undefined2)((ulong)uVar13 >> 0x10);
              uStack_ac = (uint)((ulong)uVar13 >> 0x20);
              uStack_98 = puVar8[3];
              uStack_a0 = (undefined1)puVar8[2];
              uStack_9f = (undefined7)((ulong)puVar8[2] >> 8);
              FUN_100615890(&uStack_88,&bStack_b0);
              uVar11 = uStack_88;
              uVar14 = uStack_80;
              if (uStack_88 == 0) {
                iStack_138 = 1;
                uVar14 = uStack_158 & 0xffffffff00000000 | (ulong)uStack_84;
              }
              _free(puVar8);
              uStack_158 = uVar14;
              if (uVar11 != 0) goto LAB_10123fd28;
            }
            else {
              if (bVar5 == 0x12) goto LAB_10123f99c;
              FUN_100615890(&bStack_b0,&bStack_d0);
              uVar14 = CONCAT44(uStack_a4,uStack_a8);
              if (CONCAT22(uStack_ae,CONCAT11(bStack_af,bStack_b0)) != 0) goto LAB_10123fd28;
              iStack_138 = 1;
              uStack_158 = uStack_158 & 0xffffffff00000000 | (ulong)uStack_ac;
            }
          }
        }
        else {
          if (bStack_cf != 3) {
            if (bStack_cf == 4) {
              if (uStack_140 != 4) {
                lStack_e0 = lVar21 + 1;
                bStack_d0 = 0x5f;
                bStack_cf = 0xfe;
                uStack_ce = 0x108cb;
                uStack_c8 = 9;
                uStack_c7 = 0;
                bStack_b0 = (byte)&bStack_d0;
                bStack_af = (byte)((ulong)&bStack_d0 >> 8);
                uStack_ae = (undefined2)((ulong)&bStack_d0 >> 0x10);
                uStack_ac = (uint)((ulong)&bStack_d0 >> 0x20);
                uStack_a8 = 0xc7b3a0;
                uStack_a4 = 1;
                pbStack_f8 = pbVar24;
                uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
                goto LAB_10123fc30;
              }
              pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
              if (bVar5 != 0x16) {
                uVar13 = *puVar26;
                puVar18[1] = puVar26[1];
                *puVar18 = uVar13;
                uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
                *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
                *(undefined8 *)((long)puVar18 + 0xf) = uVar13;
                bStack_d0 = bVar5;
                if (bVar5 == 0x10) {
LAB_10123f878:
                  uStack_88 = CONCAT22(uStack_88._2_2_,0x300);
                  FUN_100e077ec(&bStack_d0);
                  uVar14 = uStack_80;
                }
                else if (bVar5 == 0x11) {
                  puVar8 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
                  uVar13 = *puVar8;
                  uStack_a8 = (undefined4)puVar8[1];
                  uStack_a4 = (undefined4)((ulong)puVar8[1] >> 0x20);
                  bStack_b0 = (byte)uVar13;
                  bStack_af = (byte)((ulong)uVar13 >> 8);
                  uStack_ae = (undefined2)((ulong)uVar13 >> 0x10);
                  uStack_ac = (uint)((ulong)uVar13 >> 0x20);
                  uStack_98 = puVar8[3];
                  uStack_a0 = (undefined1)puVar8[2];
                  uStack_9f = (undefined7)((ulong)puVar8[2] >> 8);
                  func_0x00010142c57c(&uStack_88,&bStack_b0);
                  _free(puVar8);
                  uVar14 = uStack_80;
                }
                else {
                  if (bVar5 == 0x12) goto LAB_10123f878;
                  func_0x00010142c57c(&uStack_88,&bStack_d0);
                  uVar14 = uStack_80;
                }
                if ((uStack_88 & 1) == 0) {
                  uStack_140 = uStack_88 >> 8 & 0xff;
                  uStack_80 = uVar14;
                  goto LAB_10123f680;
                }
                goto LAB_10123fd28;
              }
            }
            else {
              pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
              if (bVar5 != 0x16) {
                uVar13 = *puVar26;
                puVar20[1] = puVar26[1];
                *puVar20 = uVar13;
                uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
                *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
                *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
                bStack_b0 = bVar5;
                FUN_100e077ec(&bStack_b0);
                goto LAB_10123f680;
              }
            }
LAB_10123ff54:
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            lStack_e0 = lVar21 + 1;
            pbStack_f8 = pbVar24;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10124027c:
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x101240280);
            (*pcVar12)();
          }
          if (uStack_144 != 3) {
            lStack_e0 = lVar21 + 1;
            bStack_d0 = 0x7d;
            bStack_cf = 1;
            uStack_ce = 0x108cc;
            uStack_c8 = 0xd;
            uStack_c7 = 0;
            bStack_b0 = (byte)&bStack_d0;
            bStack_af = (byte)((ulong)&bStack_d0 >> 8);
            uStack_ae = (undefined2)((ulong)&bStack_d0 >> 0x10);
            uStack_ac = (uint)((ulong)&bStack_d0 >> 0x20);
            uStack_a8 = 0xc7b3a0;
            uStack_a4 = 1;
            pbStack_f8 = pbVar24;
            uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
            goto LAB_10123fc30;
          }
          pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
          if (bVar5 == 0x16) goto LAB_10123ff54;
          uVar13 = *puVar26;
          puVar18[1] = puVar26[1];
          *puVar18 = uVar13;
          uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
          *(undefined8 *)((long)puVar18 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
          *(undefined8 *)((long)puVar18 + 0xf) = uVar13;
          bStack_d0 = bVar5;
          if (bVar5 == 0x10) {
LAB_10123f93c:
            uStack_88 = CONCAT22(uStack_88._2_2_,0x200);
            FUN_100e077ec(&bStack_d0);
            uVar14 = uStack_80;
          }
          else if (bVar5 == 0x11) {
            puVar8 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
            uVar13 = *puVar8;
            uStack_a8 = (undefined4)puVar8[1];
            uStack_a4 = (undefined4)((ulong)puVar8[1] >> 0x20);
            bStack_b0 = (byte)uVar13;
            bStack_af = (byte)((ulong)uVar13 >> 8);
            uStack_ae = (undefined2)((ulong)uVar13 >> 0x10);
            uStack_ac = (uint)((ulong)uVar13 >> 0x20);
            uStack_98 = puVar8[3];
            uStack_a0 = (undefined1)puVar8[2];
            uStack_9f = (undefined7)((ulong)puVar8[2] >> 8);
            func_0x000101468a18(&uStack_88,&bStack_b0);
            _free(puVar8);
            uVar14 = uStack_80;
          }
          else {
            if (bVar5 == 0x12) goto LAB_10123f93c;
            func_0x000101468a18(&uStack_88,&bStack_d0);
            uVar14 = uStack_80;
          }
          if ((uStack_88 & 1) != 0) {
LAB_10123fd28:
            lStack_e0 = lVar21 + 1;
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar14;
            pbStack_f8 = pbVar24;
            goto joined_r0x00010123fd40;
          }
          uStack_144 = uStack_88 >> 8 & 0xff;
          uStack_80 = uVar14;
        }
LAB_10123f680:
        lVar21 = lVar21 + 1;
        lVar23 = (lVar17 - 0x40U >> 6) + 1;
        pbVar22 = pbVar19;
        pbVar4 = pbVar24;
      } while (pbVar24 != pbVar19);
      pbStack_f8 = pbVar22;
      lStack_e0 = lVar23;
      if (uStack_130 != 0x8000000000000000) {
        uVar14 = 0x8000000000000000;
        if (uVar25 != 0x8000000000000001) {
          uVar14 = uVar25;
        }
        *param_1 = uStack_130;
        param_1[1] = uStack_160;
        iVar3 = 0;
        if (iStack_138 != 2) {
          iVar3 = iStack_138;
        }
        uVar16 = 0;
        if (iStack_138 != 2) {
          uVar16 = (undefined4)uStack_158;
        }
        param_1[2] = uStack_180;
        param_1[3] = uVar14;
        uVar1 = 2;
        if (uStack_144 != 3) {
          uVar1 = (undefined1)uStack_144;
        }
        param_1[4] = (ulong)pbStack_168;
        param_1[5] = uStack_178;
        uVar2 = 3;
        if (uStack_140 != 4) {
          uVar2 = (undefined1)uStack_140;
        }
        *(int *)(param_1 + 6) = iVar3;
        *(undefined4 *)((long)param_1 + 0x34) = uVar16;
        *(undefined1 *)(param_1 + 7) = uVar1;
        *(undefined1 *)((long)param_1 + 0x39) = uVar2;
        FUN_100d34830(&pbStack_100);
        if (pbVar19 == pbVar22) goto LAB_10123fd80;
        bStack_b0 = (byte)lVar23;
        bStack_af = (byte)((ulong)lVar23 >> 8);
        uStack_ae = (undefined2)((ulong)lVar23 >> 0x10);
        uStack_ac = (uint)((ulong)lVar23 >> 0x20);
        uVar25 = FUN_1087e422c(((ulong)((long)pbVar19 - (long)pbVar22) >> 6) + lVar23,&bStack_b0,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar25;
        if (uStack_130 != 0) {
          _free(uStack_160);
        }
        uVar25 = uVar14 & 0x7fffffffffffffff;
        goto joined_r0x000101240310;
      }
    }
    bStack_d0 = 0xf8;
    bStack_cf = 0x82;
    uStack_ce = 0x108c9;
    uStack_c8 = 8;
    uStack_c7 = 0;
    bStack_b0 = (byte)&bStack_d0;
    bStack_af = (byte)((ulong)&bStack_d0 >> 8);
    uStack_ae = (undefined2)((ulong)&bStack_d0 >> 0x10);
    uStack_ac = (uint)((ulong)&bStack_d0 >> 0x20);
    uStack_a8 = 0xc7b3a0;
    uStack_a4 = 1;
    uStack_130 = 0;
    uVar14 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_b0);
LAB_10123fc30:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar14;
joined_r0x00010123fd40:
    if (-0x7fffffffffffffff < (long)uVar25) {
joined_r0x0001012401c4:
      if (uVar25 != 0) {
        _free(pbStack_168);
      }
    }
LAB_10123fd50:
    if ((uStack_130 & 0x7fffffffffffffff) != 0) {
      _free(uStack_160);
    }
    FUN_100d34830(&pbStack_100);
    if ((byte)pbStack_120 != '\x16') {
      FUN_100e077ec(&pbStack_120);
    }
  }
LAB_10123fd80:
  if ((bVar6 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

