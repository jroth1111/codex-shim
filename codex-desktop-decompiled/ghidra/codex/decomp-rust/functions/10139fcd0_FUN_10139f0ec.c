
/* WARNING: Type propagation algorithm not settling */

void FUN_10139f0ec(ulong *param_1,byte *param_2)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  code *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined4 uVar17;
  long lVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  bool bVar21;
  bool bVar22;
  undefined8 *puVar23;
  ulong uVar24;
  byte *pbVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  byte *pbVar29;
  ulong uVar30;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_150;
  ulong uStack_148;
  uint uStack_138;
  int iStack_130;
  ulong uStack_128;
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
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    uStack_110 = *(ulong *)(param_2 + 8);
    pbVar20 = *(byte **)(param_2 + 0x10);
    lVar18 = *(long *)(param_2 + 0x18);
    pbVar16 = pbVar20 + lVar18 * 0x20;
    pbStack_100 = (byte *)0x0;
    pbVar25 = pbVar20;
    pbStack_120 = pbVar20;
    pbStack_108 = pbVar16;
    if (lVar18 == 0) {
LAB_10139f714:
      pbStack_118 = pbVar25;
      uVar24 = FUN_1087e422c(0,&UNK_10b232380,&UNK_10b20a590);
LAB_10139f730:
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar24;
LAB_10139f738:
      lVar18 = ((ulong)((long)pbVar16 - (long)pbVar25) >> 5) + 1;
      while (lVar18 = lVar18 + -1, pbVar16 = pbStack_120, uVar24 = uStack_110, lVar18 != 0) {
        FUN_100e077ec(pbVar25);
        pbVar25 = pbVar25 + 0x20;
      }
    }
    else {
      pbVar25 = pbVar20 + 0x20;
      if (*pbVar20 == 0x16) goto LAB_10139f714;
      uVar13 = *(undefined8 *)(pbVar20 + 1);
      uStack_a8._1_3_ = (undefined3)*(undefined8 *)(pbVar20 + 9);
      uStack_a4 = (undefined4)((ulong)*(undefined8 *)(pbVar20 + 9) >> 0x18);
      bStack_af = (byte)uVar13;
      uStack_ae = (undefined2)((ulong)uVar13 >> 8);
      uStack_ac = (uint)((ulong)uVar13 >> 0x18);
      uStack_a8._0_1_ = (undefined1)((ulong)uVar13 >> 0x38);
      uStack_98 = *(undefined8 *)(pbVar20 + 0x18);
      uStack_a0 = (undefined1)*(undefined8 *)(pbVar20 + 0x10);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x10) >> 8);
      pbStack_100 = (byte *)0x1;
      pbStack_118 = pbVar25;
      bStack_b0 = *pbVar20;
      FUN_1004b62d4(&bStack_d0,&bStack_b0);
      uVar30 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
      uVar24 = CONCAT71(uStack_c7,uStack_c8);
      if (uVar30 == 0x8000000000000000) goto LAB_10139f730;
      if (lVar18 == 1) {
LAB_10139f89c:
        uVar15 = FUN_1087e422c(1,&UNK_10b232380,&UNK_10b20a590);
LAB_10139f8b8:
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar15;
LAB_10139f8c0:
        pbVar25 = pbStack_118;
        pbVar16 = pbStack_108;
        if (uVar30 != 0) {
          _free(uVar24);
          pbVar25 = pbStack_118;
          pbVar16 = pbStack_108;
        }
        goto LAB_10139f738;
      }
      uVar14 = CONCAT71(uStack_bf,uStack_c0);
      pbStack_118 = pbVar20 + 0x40;
      if (pbVar20[0x20] == 0x16) goto LAB_10139f89c;
      uVar13 = *(undefined8 *)(pbVar20 + 0x21);
      uStack_a8._1_3_ = (undefined3)*(undefined8 *)(pbVar20 + 0x29);
      uStack_a4 = (undefined4)((ulong)*(undefined8 *)(pbVar20 + 0x29) >> 0x18);
      bStack_af = (byte)uVar13;
      uStack_ae = (undefined2)((ulong)uVar13 >> 8);
      uStack_ac = (uint)((ulong)uVar13 >> 0x18);
      uStack_a8._0_1_ = (undefined1)((ulong)uVar13 >> 0x38);
      uStack_98 = *(undefined8 *)(pbVar20 + 0x38);
      uStack_a0 = (undefined1)*(undefined8 *)(pbVar20 + 0x30);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x30) >> 8);
      pbStack_100 = (byte *)0x2;
      bStack_b0 = pbVar20[0x20];
      FUN_1004b62d4(&bStack_d0,&bStack_b0);
      uVar5 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
      uVar15 = CONCAT71(uStack_c7,uStack_c8);
      if (uVar5 == 0x8000000000000000) goto LAB_10139f8b8;
      if (lVar18 == 2) {
LAB_10139fa18:
        pbVar16 = (byte *)FUN_1087e422c(2,&UNK_10b232380,&UNK_10b20a590);
LAB_10139fa30:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)pbVar16;
LAB_10139fa38:
        if (uVar5 != 0) {
          _free(uVar15);
        }
        goto LAB_10139f8c0;
      }
      uVar8 = CONCAT71(uStack_bf,uStack_c0);
      pbStack_118 = pbVar20 + 0x60;
      if (pbVar20[0x40] == 0x16) goto LAB_10139fa18;
      uVar13 = *(undefined8 *)(pbVar20 + 0x41);
      uStack_a8._1_3_ = (undefined3)*(undefined8 *)(pbVar20 + 0x49);
      uStack_a4 = (undefined4)((ulong)*(undefined8 *)(pbVar20 + 0x49) >> 0x18);
      bStack_af = (byte)uVar13;
      uStack_ae = (undefined2)((ulong)uVar13 >> 8);
      uStack_ac = (uint)((ulong)uVar13 >> 0x18);
      uStack_a8._0_1_ = (undefined1)((ulong)uVar13 >> 0x38);
      uStack_98 = *(undefined8 *)(pbVar20 + 0x58);
      uStack_a0 = (undefined1)*(undefined8 *)(pbVar20 + 0x50);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x50) >> 8);
      pbStack_100 = (byte *)0x3;
      bStack_b0 = pbVar20[0x40];
      FUN_1004b60cc(&bStack_d0,&bStack_b0);
      uVar6 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
      pbVar16 = (byte *)CONCAT71(uStack_c7,uStack_c8);
      if (uVar6 == 0x8000000000000001) goto LAB_10139fa30;
      uVar9 = CONCAT71(uStack_bf,uStack_c0);
      FUN_100f2fea4(&bStack_b0,&pbStack_120);
      if (CONCAT22(uStack_ae,CONCAT11(bStack_af,bStack_b0)) == 1) {
        *param_1 = 0x8000000000000000;
        param_1[1] = CONCAT44(uStack_a4,uStack_a8);
joined_r0x00010139fbdc:
        if ((uVar6 & 0x7fffffffffffffff) != 0) {
          _free(pbVar16);
        }
        goto LAB_10139fa38;
      }
      if (uStack_ac == 2) {
        uVar13 = 3;
LAB_10139fc50:
        uVar14 = FUN_1087e422c(uVar13,&UNK_10b232380,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar14;
        goto joined_r0x00010139fbdc;
      }
      pbVar20 = pbStack_118;
      if (pbStack_118 == pbStack_108) {
LAB_10139fc4c:
        pbStack_118 = pbVar20;
        uVar13 = 4;
        goto LAB_10139fc50;
      }
      uVar10 = CONCAT44(uStack_a8,uStack_ac);
      pbVar20 = pbStack_118 + 0x20;
      bVar3 = *pbStack_118;
      if (bVar3 == 0x16) goto LAB_10139fc4c;
      uVar13 = *(undefined8 *)(pbStack_118 + 1);
      uStack_c7 = (undefined7)*(undefined8 *)(pbStack_118 + 9);
      bStack_cf = (byte)uVar13;
      uStack_ce = (undefined6)((ulong)uVar13 >> 8);
      uStack_c8 = (undefined1)((ulong)uVar13 >> 0x38);
      uStack_b8 = *(undefined8 *)(pbStack_118 + 0x18);
      uStack_c0 = (undefined1)*(undefined8 *)(pbStack_118 + 0x10);
      uStack_bf = (undefined7)((ulong)*(undefined8 *)(pbStack_118 + 0x10) >> 8);
      pbStack_100 = pbStack_100 + 1;
      pbStack_118 = pbVar20;
      bStack_d0 = bVar3;
      if (bVar3 == 0x10) {
LAB_10139ff50:
        uStack_88 = CONCAT22(uStack_88._2_2_,0x200);
        FUN_100e077ec(&bStack_d0);
      }
      else if (bVar3 == 0x11) {
        puVar19 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
        uVar13 = *puVar19;
        uStack_a8 = (undefined4)puVar19[1];
        uStack_a4 = (undefined4)((ulong)puVar19[1] >> 0x20);
        bStack_b0 = (byte)uVar13;
        bStack_af = (byte)((ulong)uVar13 >> 8);
        uStack_ae = (undefined2)((ulong)uVar13 >> 0x10);
        uStack_ac = (uint)((ulong)uVar13 >> 0x20);
        uStack_98 = puVar19[3];
        uStack_a0 = (undefined1)puVar19[2];
        uStack_9f = (undefined7)((ulong)puVar19[2] >> 8);
        FUN_101468a18(&uStack_88,&bStack_b0);
        _free(puVar19);
      }
      else {
        if (bVar3 == 0x12) goto LAB_10139ff50;
        FUN_101468a18(&uStack_88,&bStack_d0);
      }
      if ((char)uStack_88 == '\x01') {
        *param_1 = 0x8000000000000000;
        param_1[1] = uStack_80;
        goto joined_r0x00010139fbdc;
      }
      *param_1 = uVar30;
      param_1[1] = uVar24;
      param_1[2] = uVar14;
      param_1[3] = uVar5;
      param_1[4] = uVar15;
      param_1[5] = uVar8;
      param_1[6] = uVar6;
      param_1[7] = (ulong)pbVar16;
      param_1[8] = uVar9;
      param_1[9] = uVar10;
      *(undefined1 *)(param_1 + 10) = uStack_88._1_1_;
      uVar14 = FUN_100fbc738(&pbStack_120);
      if (uVar14 == 0) goto LAB_10139fae8;
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar14;
      if (uVar30 != 0) {
        _free(uVar24);
      }
      if (uVar5 != 0) {
        _free(uVar15);
      }
      uVar24 = uVar6 & 0x7fffffffffffffff;
    }
    if (uVar24 != 0) {
      _free(pbVar16);
    }
    goto LAB_10139fae8;
  }
  if (bVar4 != 0x15) {
    uVar24 = FUN_108855b04(param_2,&uStack_88,&UNK_10b20ba00);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar24;
    return;
  }
  uStack_f0 = *(undefined8 *)(param_2 + 8);
  pbStack_100 = *(byte **)(param_2 + 0x10);
  lVar18 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar16 = pbStack_100 + lVar18;
  pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
  lStack_e0 = 0;
  pbStack_e8 = pbVar16;
  if (*(long *)(param_2 + 0x18) == 0) {
    uVar24 = 0;
    uStack_128 = 0x8000000000000001;
    pbStack_f8 = pbStack_100;
LAB_10139f7b8:
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
    uVar30 = 0;
    uVar14 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_b0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar14;
    bVar22 = true;
    bVar21 = true;
  }
  else {
    lVar27 = 0;
    puVar23 = (undefined8 *)((ulong)&bStack_b0 | 1);
    puVar26 = (undefined8 *)((ulong)&pbStack_120 | 1);
    puVar19 = (undefined8 *)((ulong)&bStack_d0 | 1);
    iStack_130 = 2;
    uStack_138 = 3;
    uStack_148 = 3;
    uVar30 = 0x8000000000000000;
    uVar24 = 0x8000000000000000;
    uStack_128 = 0x8000000000000001;
    pbVar20 = pbStack_100;
    pbStack_f8 = pbStack_100;
    do {
      pbVar29 = pbVar20 + 0x40;
      bVar3 = *pbVar20;
      lVar28 = lVar27;
      pbVar25 = pbVar29;
      if (bVar3 == 0x16) break;
      uVar13 = *(undefined8 *)(pbVar20 + 0x10);
      *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)(pbVar20 + 0x18);
      *(undefined8 *)((long)puVar23 + 0xf) = uVar13;
      uVar13 = *(undefined8 *)(pbVar20 + 1);
      puVar23[1] = *(undefined8 *)(pbVar20 + 9);
      *puVar23 = uVar13;
      pbStack_118 = *(byte **)(pbVar20 + 0x28);
      pbStack_120 = *(byte **)(pbVar20 + 0x20);
      pbStack_108 = *(byte **)(pbVar20 + 0x38);
      uStack_110 = *(ulong *)(pbVar20 + 0x30);
      uVar14 = CONCAT44(uStack_a4,uStack_a8);
      uVar13 = CONCAT71(uStack_9f,uStack_a0);
      bStack_b0 = bVar3;
      if (0xc < bVar3) {
        if (bVar3 == 0xd) {
          FUN_100bb6f9c(&bStack_d0,uVar14,uVar13);
          goto LAB_10139f354;
        }
        if (bVar3 != 0xe) {
          if (bVar3 != 0xf) goto LAB_10139f6a8;
          FUN_100bb6d50(&bStack_d0,uVar14,uVar13);
          goto LAB_10139f354;
        }
        FUN_100bb6d50(&bStack_d0,uVar13,uStack_98);
        if (uVar14 != 0) goto LAB_10139f314;
LAB_10139f35c:
        if ((bStack_d0 & 1) == 0) goto LAB_10139f364;
LAB_10139f6d0:
        uStack_80 = CONCAT71(uStack_c7,uStack_c8);
LAB_10139f6e0:
        *param_1 = 0x8000000000000000;
        param_1[1] = uStack_80;
LAB_10139f6ec:
        lStack_e0 = lVar27 + 1;
        bVar22 = true;
        bVar21 = true;
        pbStack_f8 = pbVar29;
        goto joined_r0x00010139fe04;
      }
      if (bVar3 == 1) {
        bStack_cf = bStack_af;
        if (4 < bStack_af) {
          bStack_cf = 5;
        }
        bStack_d0 = 0;
LAB_10139f354:
        FUN_100e077ec(&bStack_b0);
        goto LAB_10139f35c;
      }
      if (bVar3 == 4) {
        if (4 < uVar14) {
          uVar14 = 5;
        }
        bStack_cf = (byte)uVar14;
        bStack_d0 = 0;
        goto LAB_10139f354;
      }
      if (bVar3 != 0xc) {
LAB_10139f6a8:
        uVar13 = FUN_108855b04(&bStack_b0,&uStack_88,&UNK_10b20f240);
        uStack_c8 = (undefined1)uVar13;
        uStack_c7 = (undefined7)((ulong)uVar13 >> 8);
        bStack_d0 = 1;
        goto LAB_10139f6d0;
      }
      FUN_100bb6f9c(&bStack_d0,uVar13);
      if (uVar14 == 0) goto LAB_10139f35c;
LAB_10139f314:
      _free(uVar13);
      if ((bStack_d0 & 1) != 0) goto LAB_10139f6d0;
LAB_10139f364:
      bVar3 = (byte)pbStack_120;
      if (bStack_cf < 3) {
        if (bStack_cf == 0) {
          if (uVar30 == 0x8000000000000000) {
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            if (bVar3 == 0x16) {
              lStack_e0 = lVar27 + 1;
              pbStack_f8 = pbVar29;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10139ff14;
            }
            uVar13 = *puVar26;
            puVar23[1] = puVar26[1];
            *puVar23 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar13;
            bStack_b0 = bVar3;
            FUN_1004b62d4(&bStack_d0,&bStack_b0);
            uVar30 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
            if (uVar30 != 0x8000000000000000) {
              uStack_150 = CONCAT71(uStack_c7,uStack_c8);
              uStack_190 = CONCAT71(uStack_bf,uStack_c0);
              goto LAB_10139f244;
            }
            uVar30 = 0;
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_c7,uStack_c8);
            goto LAB_10139f6ec;
          }
          lStack_e0 = lVar27 + 1;
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
          pbStack_f8 = pbVar29;
          uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
LAB_10139fdf0:
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar14;
          bVar22 = true;
          bVar21 = true;
          goto joined_r0x00010139fe04;
        }
        if (bStack_cf != 1) {
          if (uStack_128 == 0x8000000000000001) {
            pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
            if (bVar3 == 0x16) {
              lStack_e0 = lVar27 + 1;
              pbStack_f8 = pbVar29;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_10139ff14;
            }
            uVar13 = *puVar26;
            puVar23[1] = puVar26[1];
            *puVar23 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar13;
            bStack_b0 = bVar3;
            FUN_1004b60cc(&bStack_d0,&bStack_b0);
            uStack_128 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
            uStack_178 = CONCAT71(uStack_c7,uStack_c8);
            if (uStack_128 != 0x8000000000000001) {
              uStack_180 = CONCAT71(uStack_bf,uStack_c0);
              goto LAB_10139f244;
            }
            lStack_e0 = lVar27 + 1;
            *param_1 = 0x8000000000000000;
            param_1[1] = uStack_178;
            bVar21 = true;
            pbStack_f8 = pbVar29;
            goto LAB_10139fab0;
          }
          lStack_e0 = lVar27 + 1;
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
          pbStack_f8 = pbVar29;
          uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar14;
          bVar22 = true;
          goto joined_r0x00010139f804;
        }
        if (uVar24 != 0x8000000000000000) {
          lStack_e0 = lVar27 + 1;
          bStack_d0 = 0x43;
          bStack_cf = 0xdb;
          uStack_ce = 0x108ca;
          uStack_c8 = 6;
          uStack_c7 = 0;
          bStack_b0 = (byte)&bStack_d0;
          bStack_af = (byte)((ulong)&bStack_d0 >> 8);
          uStack_ae = (undefined2)((ulong)&bStack_d0 >> 0x10);
          uStack_ac = (uint)((ulong)&bStack_d0 >> 0x20);
          uStack_a8 = 0xc7b3a0;
          uStack_a4 = 1;
          pbStack_f8 = pbVar29;
          uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
          goto LAB_10139fdf0;
        }
        pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
        if (bVar3 == 0x16) {
          lStack_e0 = lVar27 + 1;
          pbStack_f8 = pbVar29;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10139ff14;
        }
        uVar13 = *puVar26;
        puVar23[1] = puVar26[1];
        *puVar23 = uVar13;
        uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
        *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
        *(undefined8 *)((long)puVar23 + 0xf) = uVar13;
        bStack_b0 = bVar3;
        FUN_1004b62d4(&bStack_d0,&bStack_b0);
        uVar24 = CONCAT62(uStack_ce,CONCAT11(bStack_cf,bStack_d0));
        if (uVar24 == 0x8000000000000000) {
          *param_1 = 0x8000000000000000;
          param_1[1] = CONCAT71(uStack_c7,uStack_c8);
          uVar24 = 0;
          goto LAB_10139f6ec;
        }
        uStack_170 = CONCAT71(uStack_c7,uStack_c8);
        uStack_188 = CONCAT71(uStack_bf,uStack_c0);
      }
      else if (bStack_cf == 3) {
        if (iStack_130 != 2) {
          lStack_e0 = lVar27 + 1;
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
          pbStack_f8 = pbVar29;
          uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
          goto LAB_10139fdf0;
        }
        pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
        if (bVar3 == 0x16) goto LAB_10139fbe4;
        uVar13 = *puVar26;
        puVar19[1] = puVar26[1];
        *puVar19 = uVar13;
        uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar13;
        bStack_d0 = bVar3;
        if (bVar3 == 0x10) {
LAB_10139f4fc:
          FUN_100e077ec(&bStack_d0);
          iStack_130 = 0;
        }
        else if (bVar3 == 0x11) {
          puVar7 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
          uVar13 = *puVar7;
          uStack_a8 = (undefined4)puVar7[1];
          uStack_a4 = (undefined4)((ulong)puVar7[1] >> 0x20);
          bStack_b0 = (byte)uVar13;
          bStack_af = (byte)((ulong)uVar13 >> 8);
          uStack_ae = (undefined2)((ulong)uVar13 >> 0x10);
          uStack_ac = (uint)((ulong)uVar13 >> 0x20);
          uStack_98 = puVar7[3];
          uStack_a0 = (undefined1)puVar7[2];
          uStack_9f = (undefined7)((ulong)puVar7[2] >> 8);
          FUN_100615890(&uStack_88,&bStack_b0);
          uVar11 = uStack_88;
          uVar14 = uStack_148 & 0xffffffff00000000;
          uStack_148 = uStack_80;
          if (uStack_88 == 0) {
            iStack_130 = 1;
            uStack_148 = uVar14 | uStack_84;
          }
          _free(puVar7);
          uVar14 = uStack_148;
          if (uVar11 != 0) {
LAB_10139fb4c:
            uStack_148 = uVar14;
            *param_1 = 0x8000000000000000;
            param_1[1] = uStack_148;
            goto LAB_10139f6ec;
          }
        }
        else {
          if (bVar3 == 0x12) goto LAB_10139f4fc;
          FUN_100615890(&bStack_b0,&bStack_d0);
          uStack_148 = uStack_148 & 0xffffffff00000000 | (ulong)uStack_ac;
          uVar14 = CONCAT44(uStack_a4,uStack_a8);
          if (CONCAT22(uStack_ae,CONCAT11(bStack_af,bStack_b0)) != 0) goto LAB_10139fb4c;
          iStack_130 = 1;
        }
      }
      else {
        if (bStack_cf != 4) {
          pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
          if (bVar3 != 0x16) {
            uVar13 = *puVar26;
            puVar23[1] = puVar26[1];
            *puVar23 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
            *(undefined8 *)((long)puVar23 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
            *(undefined8 *)((long)puVar23 + 0xf) = uVar13;
            bStack_b0 = bVar3;
            FUN_100e077ec(&bStack_b0);
            goto LAB_10139f244;
          }
LAB_10139fbe4:
          pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
          lStack_e0 = lVar27 + 1;
          pbStack_f8 = pbVar29;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10139ff14:
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10139ff18);
          (*pcVar12)();
        }
        if (uStack_138 != 3) {
          lStack_e0 = lVar27 + 1;
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
          pbStack_f8 = pbVar29;
          uVar14 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_b0);
          goto LAB_10139fdf0;
        }
        pbStack_120 = (byte *)CONCAT71(pbStack_120._1_7_,0x16);
        if (bVar3 == 0x16) goto LAB_10139fbe4;
        uVar13 = *puVar26;
        puVar19[1] = puVar26[1];
        *puVar19 = uVar13;
        uVar13 = *(undefined8 *)((long)puVar26 + 0xf);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar26 + 0x17);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar13;
        bStack_d0 = bVar3;
        if (bVar3 == 0x10) {
LAB_10139f434:
          uStack_88 = CONCAT22(uStack_88._2_2_,0x200);
          FUN_100e077ec(&bStack_d0);
LAB_10139f690:
        }
        else {
          if (bVar3 != 0x11) {
            if (bVar3 == 0x12) goto LAB_10139f434;
            FUN_101468a18(&uStack_88,&bStack_d0);
            goto LAB_10139f690;
          }
          puVar7 = (undefined8 *)CONCAT71(uStack_c7,uStack_c8);
          uVar13 = *puVar7;
          uStack_a8 = (undefined4)puVar7[1];
          uStack_a4 = (undefined4)((ulong)puVar7[1] >> 0x20);
          bStack_b0 = (byte)uVar13;
          bStack_af = (byte)((ulong)uVar13 >> 8);
          uStack_ae = (undefined2)((ulong)uVar13 >> 0x10);
          uStack_ac = (uint)((ulong)uVar13 >> 0x20);
          uStack_98 = puVar7[3];
          uStack_a0 = (undefined1)puVar7[2];
          uStack_9f = (undefined7)((ulong)puVar7[2] >> 8);
          FUN_101468a18(&uStack_88,&bStack_b0);
          _free(puVar7);
        }
        if ((char)uStack_88 == '\x01') goto LAB_10139f6e0;
        uStack_138 = uStack_88 >> 8 & 0xff;
      }
LAB_10139f244:
      lVar27 = lVar27 + 1;
      lVar28 = (lVar18 - 0x40U >> 6) + 1;
      pbVar25 = pbVar16;
      pbVar20 = pbVar29;
    } while (pbVar29 != pbVar16);
    pbStack_f8 = pbVar25;
    lStack_e0 = lVar28;
    if (uVar30 == 0x8000000000000000) goto LAB_10139f7b8;
    if (uVar24 != 0x8000000000000000) {
      *param_1 = uVar30;
      param_1[1] = uStack_150;
      uVar14 = 0x8000000000000000;
      if (uStack_128 != 0x8000000000000001) {
        uVar14 = uStack_128;
      }
      iVar2 = 0;
      if (iStack_130 != 2) {
        iVar2 = iStack_130;
      }
      uVar17 = 0;
      if (iStack_130 != 2) {
        uVar17 = (undefined4)uStack_148;
      }
      param_1[2] = uStack_190;
      param_1[3] = uVar24;
      uVar1 = 2;
      if (uStack_138 != 3) {
        uVar1 = (undefined1)uStack_138;
      }
      param_1[4] = uStack_170;
      param_1[5] = uStack_188;
      param_1[6] = uVar14;
      param_1[7] = uStack_178;
      param_1[8] = uStack_180;
      *(int *)(param_1 + 9) = iVar2;
      *(undefined4 *)((long)param_1 + 0x4c) = uVar17;
      *(undefined1 *)(param_1 + 10) = uVar1;
      FUN_100d34830(&pbStack_100);
      if (pbVar16 != pbVar25) {
        bStack_b0 = (byte)lVar28;
        bStack_af = (byte)((ulong)lVar28 >> 8);
        uStack_ae = (undefined2)((ulong)lVar28 >> 0x10);
        uStack_ac = (uint)((ulong)lVar28 >> 0x20);
        uVar15 = FUN_1087e422c(((ulong)((long)pbVar16 - (long)pbVar25) >> 6) + lVar28,&bStack_b0,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar15;
        if (uVar30 != 0) {
          _free(uStack_150);
        }
        if (uVar24 != 0) {
          _free(uStack_170);
        }
        if ((uVar14 & 0x7fffffffffffffff) != 0) {
          _free(uStack_178);
        }
      }
      goto LAB_10139fae8;
    }
    bStack_d0 = 0x43;
    bStack_cf = 0xdb;
    uStack_ce = 0x108ca;
    uStack_c8 = 6;
    uStack_c7 = 0;
    bStack_b0 = (byte)&bStack_d0;
    bStack_af = (byte)((ulong)&bStack_d0 >> 8);
    uStack_ae = (undefined2)((ulong)&bStack_d0 >> 0x10);
    uStack_ac = (uint)((ulong)&bStack_d0 >> 0x20);
    uStack_a8 = 0xc7b3a0;
    uStack_a4 = 1;
    uVar14 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_b0);
    uVar24 = 0;
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar14;
    if (uVar30 != 0) {
      _free(uStack_150);
    }
    bVar22 = false;
    bVar21 = false;
  }
joined_r0x00010139fe04:
  if (uStack_128 != 0x8000000000000001) {
joined_r0x00010139f804:
    bVar21 = bVar22;
    if ((uStack_128 & 0x7fffffffffffffff) != 0) {
      _free(uStack_178);
    }
  }
LAB_10139fab0:
  if ((uVar24 & 0x7fffffffffffffff) == 0) {
    bVar22 = false;
    if ((uVar30 & 0x7fffffffffffffff) != 0) {
      bVar22 = bVar21;
    }
    if (bVar22) {
LAB_10139fac4:
      _free(uStack_150);
    }
  }
  else {
    _free(uStack_170);
    bVar22 = false;
    if ((uVar30 & 0x7fffffffffffffff) != 0) {
      bVar22 = bVar21;
    }
    if (bVar22) goto LAB_10139fac4;
  }
  FUN_100d34830(&pbStack_100);
  if ((byte)pbStack_120 != '\x16') {
    FUN_100e077ec(&pbStack_120);
  }
LAB_10139fae8:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

