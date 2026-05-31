
void FUN_1012508d0(ulong *param_1,byte *param_2)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  char cVar9;
  ulong uVar10;
  code *pcVar11;
  bool bVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong unaff_x20;
  undefined8 *puVar21;
  ulong unaff_x21;
  byte *pbVar22;
  byte *pbVar23;
  ulong unaff_x22;
  byte *pbVar24;
  byte *pbVar25;
  byte bVar26;
  long lVar27;
  long lVar28;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  byte *pbStack_170;
  ulong uStack_168;
  ulong uStack_160;
  byte *pbStack_158;
  ulong uStack_150;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  ulong uStack_b8;
  byte bStack_b0;
  byte bStack_af;
  undefined6 uStack_ae;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    uVar15 = *(ulong *)(param_2 + 8);
    pbVar23 = *(byte **)(param_2 + 0x10);
    lVar18 = *(long *)(param_2 + 0x18);
    pbVar25 = pbVar23 + lVar18 * 0x20;
    pbStack_f0 = (byte *)0x0;
    pbVar24 = pbVar23;
    pbStack_110 = pbVar23;
    uStack_100 = uVar15;
    pbStack_f8 = pbVar25;
    if (lVar18 == 0) {
LAB_1012509e0:
      pbStack_108 = pbVar24;
      uVar13 = FUN_1087e422c(0,&UNK_10b232490,&UNK_10b20a590);
LAB_1012509fc:
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar13;
LAB_101250a04:
      lVar18 = ((ulong)((long)pbVar25 - (long)pbVar24) >> 5) + 1;
      while (lVar18 = lVar18 + -1, pbStack_170 = pbVar23, pbStack_158 = (byte *)uVar15, lVar18 != 0)
      {
        FUN_100e077ec(pbVar24);
        pbVar24 = pbVar24 + 0x20;
      }
    }
    else {
      pbVar24 = pbVar23 + 0x20;
      if (*pbVar23 == 0x16) goto LAB_1012509e0;
      uVar14 = *(undefined8 *)(pbVar23 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar23 + 9);
      bStack_8f = (byte)uVar14;
      uStack_8e = (undefined6)((ulong)uVar14 >> 8);
      uStack_88 = (undefined1)((ulong)uVar14 >> 0x38);
      uStack_78 = *(undefined8 *)(pbVar23 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar23 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar23 + 0x10) >> 8);
      pbStack_f0 = (byte *)0x1;
      pbStack_108 = pbVar24;
      bStack_90 = *pbVar23;
      FUN_1004b62d4(&bStack_b0,&bStack_90);
      uVar2 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
      uVar13 = CONCAT71(uStack_a7,uStack_a8);
      if (uVar2 == 0x8000000000000000) goto LAB_1012509fc;
      if (lVar18 == 1) {
LAB_101251024:
        uVar16 = FUN_1087e422c(1,&UNK_10b232490,&UNK_10b20a590);
LAB_10125103c:
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar16;
LAB_101251044:
        if (uVar2 != 0) {
          _free(uVar13);
        }
        goto LAB_101250a04;
      }
      uVar16 = CONCAT71(uStack_9f,uStack_a0);
      pbVar24 = pbVar23 + 0x40;
      pbStack_108 = pbVar24;
      if (pbVar23[0x20] == 0x16) goto LAB_101251024;
      uVar14 = *(undefined8 *)(pbVar23 + 0x21);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar23 + 0x29);
      bStack_8f = (byte)uVar14;
      uStack_8e = (undefined6)((ulong)uVar14 >> 8);
      uStack_88 = (undefined1)((ulong)uVar14 >> 0x38);
      uStack_78 = *(undefined8 *)(pbVar23 + 0x38);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar23 + 0x30);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar23 + 0x30) >> 8);
      pbStack_f0 = (byte *)0x2;
      bStack_90 = pbVar23[0x20];
      func_0x0001013e4eb8(&bStack_b0,&bStack_90);
      bVar8 = bStack_af;
      if ((bStack_b0 & 1) != 0) {
        uVar16 = CONCAT71(uStack_a7,uStack_a8);
        goto LAB_10125103c;
      }
      if (lVar18 != 2) {
        pbVar24 = pbVar23 + 0x60;
        pbStack_108 = pbVar24;
        if (pbVar23[0x40] == 0x16) goto LAB_101251414;
        uVar14 = *(undefined8 *)(pbVar23 + 0x41);
        uStack_87 = (undefined7)*(undefined8 *)(pbVar23 + 0x49);
        bStack_8f = (byte)uVar14;
        uStack_8e = (undefined6)((ulong)uVar14 >> 8);
        uStack_88 = (undefined1)((ulong)uVar14 >> 0x38);
        uStack_78 = *(undefined8 *)(pbVar23 + 0x58);
        uStack_80 = (undefined1)*(undefined8 *)(pbVar23 + 0x50);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar23 + 0x50) >> 8);
        pbStack_f0 = (byte *)0x3;
        bStack_90 = pbVar23[0x40];
        FUN_1004b60cc(&bStack_b0,&bStack_90);
        uStack_128 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
        uStack_138 = CONCAT71(uStack_a7,uStack_a8);
        if (uStack_128 != 0x8000000000000001) {
          uStack_150 = CONCAT71(uStack_9f,uStack_a0);
          uStack_130 = 3;
          pbVar22 = pbVar24;
          goto joined_r0x000101251614;
        }
        *param_1 = 0x8000000000000000;
        param_1[1] = uStack_138;
        goto LAB_101251044;
      }
LAB_101251414:
      uStack_130 = 2;
      uStack_128 = 0x8000000000000001;
      uStack_138 = 0x8000000000000001;
      pbVar22 = pbVar24;
joined_r0x000101251614:
      pbVar24 = pbVar25;
      if (pbVar22 == pbVar25) {
LAB_10125161c:
        uVar17 = FUN_1087e422c(3,&UNK_10b232490,&UNK_10b20a590);
LAB_101251638:
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar17;
LAB_101251644:
        if ((-0x7fffffffffffffff < (long)uStack_128) && (uStack_128 != 0)) {
          _free(uStack_138);
        }
        goto LAB_101251044;
      }
      pbVar24 = pbVar22 + 0x20;
      pbStack_108 = pbVar24;
      if (*pbVar22 == 0x16) goto LAB_10125161c;
      uVar14 = *(undefined8 *)(pbVar22 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar22 + 9);
      bStack_8f = (byte)uVar14;
      uStack_8e = (undefined6)((ulong)uVar14 >> 8);
      uStack_88 = (undefined1)((ulong)uVar14 >> 0x38);
      uStack_78 = *(undefined8 *)(pbVar22 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar22 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x10) >> 8);
      pbStack_f0 = (byte *)(uStack_130 + 1);
      bStack_90 = *pbVar22;
      FUN_1004b60cc(&bStack_b0,&bStack_90);
      uVar5 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
      uVar17 = CONCAT71(uStack_a7,uStack_a8);
      if (uVar5 == 0x8000000000000001) goto LAB_101251638;
      bVar12 = pbVar24 == pbVar25;
      pbVar24 = pbVar25;
      if (bVar12) {
LAB_1012516a4:
        pbStack_c0 = (byte *)FUN_1087e422c(4,&UNK_10b232490,&UNK_10b20a590);
LAB_1012516bc:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)pbStack_c0;
LAB_1012516c4:
        if ((uVar5 & 0x7fffffffffffffff) != 0) {
          _free(uVar17);
        }
        goto LAB_101251644;
      }
      uVar7 = CONCAT71(uStack_9f,uStack_a0);
      pbVar24 = pbVar22 + 0x40;
      bVar26 = pbVar22[0x20];
      pbStack_108 = pbVar24;
      if (bVar26 == 0x16) goto LAB_1012516a4;
      uVar14 = *(undefined8 *)(pbVar22 + 0x21);
      uStack_a7 = (undefined7)*(undefined8 *)(pbVar22 + 0x29);
      bStack_af = (byte)uVar14;
      uStack_ae = (undefined6)((ulong)uVar14 >> 8);
      uStack_a8 = (undefined1)((ulong)uVar14 >> 0x38);
      uStack_98 = *(undefined8 *)(pbVar22 + 0x38);
      uStack_a0 = (undefined1)*(undefined8 *)(pbVar22 + 0x30);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x30) >> 8);
      pbStack_f0 = (byte *)(uStack_130 + 2);
      bStack_b0 = bVar26;
      if (bVar26 != 0x10) {
        if (bVar26 == 0x11) {
          puVar19 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
          uVar14 = *puVar19;
          uStack_88 = (undefined1)puVar19[1];
          uStack_87 = (undefined7)((ulong)puVar19[1] >> 8);
          bStack_90 = (byte)uVar14;
          bStack_8f = (byte)((ulong)uVar14 >> 8);
          uStack_8e = (undefined6)((ulong)uVar14 >> 0x10);
          uStack_78 = puVar19[3];
          uStack_80 = (undefined1)puVar19[2];
          uStack_7f = (undefined7)((ulong)puVar19[2] >> 8);
          func_0x000101459ca0(&uStack_c8,&bStack_90);
          _free(puVar19);
        }
        else {
          if (bVar26 == 0x12) goto LAB_1012514e0;
          func_0x000101459ca0(&uStack_c8,&bStack_b0);
        }
        pbStack_158 = (byte *)uStack_c8;
        pbStack_170 = pbStack_c0;
        if ((uStack_c8 != 0x8000000000000002) && (uStack_c8 != 0x8000000000000003)) {
          uStack_178 = uStack_b8;
          bVar12 = pbVar24 != pbVar25;
          pbVar24 = pbVar25;
          if (bVar12) goto LAB_1012514fc;
          goto LAB_101251510;
        }
        goto LAB_1012516bc;
      }
LAB_1012514e0:
      FUN_100e077ec(&bStack_b0);
      pbStack_158 = (byte *)0x8000000000000001;
      bVar12 = pbVar24 == pbVar25;
      pbVar24 = pbVar25;
      if (bVar12) {
LAB_101251510:
        pbStack_c0 = (byte *)FUN_1087e422c(5,&UNK_10b232490,&UNK_10b20a590);
LAB_101251528:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)pbStack_c0;
        if ((-0x7fffffffffffffff < (long)pbStack_158) && (pbStack_158 != (byte *)0x0)) {
          _free(pbStack_170);
        }
        goto LAB_1012516c4;
      }
LAB_1012514fc:
      pbVar24 = pbVar22 + 0x60;
      bVar26 = pbVar22[0x40];
      pbStack_108 = pbVar24;
      if (bVar26 == 0x16) goto LAB_101251510;
      uVar14 = *(undefined8 *)(pbVar22 + 0x41);
      uStack_a7 = (undefined7)*(undefined8 *)(pbVar22 + 0x49);
      bStack_af = (byte)uVar14;
      uStack_ae = (undefined6)((ulong)uVar14 >> 8);
      uStack_a8 = (undefined1)((ulong)uVar14 >> 0x38);
      uStack_98 = *(undefined8 *)(pbVar22 + 0x58);
      uStack_a0 = (undefined1)*(undefined8 *)(pbVar22 + 0x50);
      uStack_9f = (undefined7)((ulong)*(undefined8 *)(pbVar22 + 0x50) >> 8);
      pbStack_f0 = (byte *)(uStack_130 + 3);
      bStack_b0 = bVar26;
      if (bVar26 != 0x10) {
        if (bVar26 != 0x11) {
          if (bVar26 == 0x12) goto LAB_101251adc;
          FUN_1007dd600(&bStack_90,&bStack_b0);
          bVar26 = bStack_8f;
          if ((bStack_90 & 1) != 0) {
            pbStack_c0 = (byte *)CONCAT71(uStack_87,uStack_88);
            goto LAB_101251528;
          }
          goto LAB_101251ae8;
        }
        puVar19 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
        uVar14 = *puVar19;
        uStack_88 = (undefined1)puVar19[1];
        uStack_87 = (undefined7)((ulong)puVar19[1] >> 8);
        bStack_90 = (byte)uVar14;
        bStack_8f = (byte)((ulong)uVar14 >> 8);
        uStack_8e = (undefined6)((ulong)uVar14 >> 0x10);
        uStack_78 = puVar19[3];
        uStack_80 = (undefined1)puVar19[2];
        uStack_7f = (undefined7)((ulong)puVar19[2] >> 8);
        FUN_1007dd600(&uStack_c8,&bStack_90);
        uVar10 = uStack_c8;
        bVar26 = uStack_c8._1_1_;
        _free(puVar19);
        if ((uVar10 & 1) == 0) goto LAB_101251ae8;
        goto LAB_101251528;
      }
LAB_101251adc:
      FUN_100e077ec(&bStack_b0);
      bVar26 = 0x13;
LAB_101251ae8:
      *param_1 = uVar2;
      param_1[1] = uVar13;
      param_1[2] = uVar16;
      param_1[3] = uVar5;
      param_1[4] = uVar17;
      param_1[5] = uVar7;
      param_1[6] = uStack_128;
      param_1[7] = uStack_138;
      param_1[8] = uStack_150;
      param_1[9] = (ulong)pbStack_158;
      param_1[10] = (ulong)pbStack_170;
      param_1[0xb] = uStack_178;
      *(byte *)(param_1 + 0xc) = bVar8;
      *(byte *)((long)param_1 + 0x61) = bVar26;
      uVar15 = FUN_100fbc738(&pbStack_110);
      if (uVar15 == 0) goto LAB_10125116c;
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar15;
      if (uVar2 != 0) {
        _free(uVar13);
      }
      if ((-0x7fffffffffffffff < (long)uStack_128) && (uStack_128 != 0)) {
        _free(uStack_138);
      }
      if ((uVar5 & 0x7fffffffffffffff) != 0) {
        _free(uVar17);
      }
      if ((long)pbStack_158 < -0x7ffffffffffffffe) goto LAB_10125116c;
    }
    if (pbStack_158 != (byte *)0x0) {
      _free(pbStack_170);
    }
    goto LAB_10125116c;
  }
  if (bVar4 != 0x15) {
    uVar15 = FUN_108855b04(param_2,&uStack_c8,&UNK_10b20c2e0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar15;
    return;
  }
  uStack_e0 = *(undefined8 *)(param_2 + 8);
  pbStack_f0 = *(byte **)(param_2 + 0x10);
  lVar18 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar24 = pbStack_f0 + lVar18;
  pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
  lStack_d0 = 0;
  pbStack_d8 = pbVar24;
  if (*(long *)(param_2 + 0x18) == 0) {
    uStack_120 = 0x8000000000000002;
    uStack_118 = 0x8000000000000001;
    uStack_128 = 0x8000000000000002;
    uStack_168 = unaff_x20;
    uStack_160 = unaff_x21;
    pbStack_158 = pbVar24;
    pbStack_e8 = pbStack_f0;
LAB_10125108c:
    bStack_b0 = 0xf8;
    bStack_af = 0x82;
    uStack_ae = 0x108c9;
    uStack_a8 = 8;
    uStack_a7 = 0;
    bStack_90 = (byte)&bStack_b0;
    bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
    uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    uStack_130 = 0;
    uVar15 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar15;
LAB_1012510c4:
    bVar12 = true;
  }
  else {
    lVar27 = 0;
    puVar21 = (undefined8 *)((ulong)&bStack_90 | 1);
    puVar20 = (undefined8 *)((ulong)&pbStack_110 | 1);
    puVar19 = (undefined8 *)((ulong)&bStack_b0 | 1);
    bVar26 = 0x14;
    bVar8 = 2;
    uStack_120 = 0x8000000000000002;
    uStack_118 = 0x8000000000000001;
    uStack_130 = 0x8000000000000000;
    uStack_128 = 0x8000000000000002;
    pbVar25 = pbStack_f0;
    pbStack_e8 = pbStack_f0;
    do {
      pbVar22 = pbVar25 + 0x40;
      bVar3 = *pbVar25;
      pbVar23 = pbVar22;
      lVar28 = lVar27;
      if (bVar3 == 0x16) break;
      uVar14 = *(undefined8 *)(pbVar25 + 0x10);
      *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)(pbVar25 + 0x18);
      *(undefined8 *)((long)puVar21 + 0xf) = uVar14;
      uVar14 = *(undefined8 *)(pbVar25 + 1);
      puVar21[1] = *(undefined8 *)(pbVar25 + 9);
      *puVar21 = uVar14;
      pbStack_108 = *(byte **)(pbVar25 + 0x28);
      pbStack_110 = *(byte **)(pbVar25 + 0x20);
      pbStack_f8 = *(byte **)(pbVar25 + 0x38);
      uStack_100 = *(ulong *)(pbVar25 + 0x30);
      uVar15 = CONCAT71(uStack_87,uStack_88);
      uVar14 = CONCAT71(uStack_7f,uStack_80);
      bStack_90 = bVar3;
      if (0xc < bVar3) {
        if (bVar3 == 0xd) {
          FUN_100bdd764(&bStack_b0,uVar15,uVar14);
          goto LAB_101250b58;
        }
        if (bVar3 != 0xe) {
          if (bVar3 != 0xf) goto LAB_101250f44;
          FUN_100bdd3f8(&bStack_b0,uVar15,uVar14);
          goto LAB_101250b58;
        }
        FUN_100bdd3f8(&bStack_b0,uVar14,uStack_78);
        if (uVar15 != 0) goto LAB_101250b18;
LAB_101250b60:
        if ((bStack_b0 & 1) == 0) goto LAB_101250b68;
LAB_101250f6c:
        uVar15 = CONCAT71(uStack_a7,uStack_a8);
LAB_101250f7c:
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar15;
LAB_101250f8c:
        lStack_d0 = lVar27 + 1;
        bVar12 = true;
        pbStack_e8 = pbVar22;
        goto LAB_1012510c8;
      }
      if (bVar3 == 1) {
        bStack_af = bStack_8f;
        if (5 < bStack_8f) {
          bStack_af = 6;
        }
        bStack_b0 = 0;
LAB_101250b58:
        FUN_100e077ec(&bStack_90);
        goto LAB_101250b60;
      }
      if (bVar3 == 4) {
        if (5 < uVar15) {
          uVar15 = 6;
        }
        bStack_af = (byte)uVar15;
        bStack_b0 = 0;
        goto LAB_101250b58;
      }
      if (bVar3 != 0xc) {
LAB_101250f44:
        uVar14 = FUN_108855b04(&bStack_90,&uStack_c8,&UNK_10b210ae0);
        uStack_a8 = (undefined1)uVar14;
        uStack_a7 = (undefined7)((ulong)uVar14 >> 8);
        bStack_b0 = 1;
        goto LAB_101250f6c;
      }
      FUN_100bdd764(&bStack_b0,uVar14);
      if (uVar15 == 0) goto LAB_101250b60;
LAB_101250b18:
      _free(uVar14);
      if ((bStack_b0 & 1) != 0) goto LAB_101250f6c;
LAB_101250b68:
      bVar3 = (byte)pbStack_110;
      if (bStack_af < 3) {
        if (bStack_af == 0) {
          if (uStack_130 != 0x8000000000000000) {
            lStack_d0 = lVar27 + 1;
            bStack_b0 = 0xf8;
            bStack_af = 0x82;
            uStack_ae = 0x108c9;
            uStack_a8 = 8;
            uStack_a7 = 0;
            bStack_90 = (byte)&bStack_b0;
            bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_e8 = pbVar22;
            uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_101251918;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_d0 = lVar27 + 1;
            pbStack_e8 = pbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101251a20;
          }
          uVar14 = *puVar20;
          puVar21[1] = puVar20[1];
          *puVar21 = uVar14;
          uVar14 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar14;
          bStack_90 = bVar3;
          FUN_1004b62d4(&bStack_b0,&bStack_90);
          uStack_130 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
          if (uStack_130 == 0x8000000000000000) {
            lStack_d0 = lVar27 + 1;
            uStack_130 = 0;
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_a7,uStack_a8);
            bVar12 = true;
            pbStack_e8 = pbVar22;
            goto LAB_1012510c8;
          }
          uStack_198 = CONCAT71(uStack_9f,uStack_a0);
          unaff_x22 = CONCAT71(uStack_a7,uStack_a8);
        }
        else if (bStack_af == 1) {
          if (bVar8 != 2) {
            lStack_d0 = lVar27 + 1;
            bStack_b0 = 0x11;
            bStack_af = 0x19;
            uStack_ae = 0x108cc;
            uStack_a8 = 0xe;
            uStack_a7 = 0;
            bStack_90 = (byte)&bStack_b0;
            bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_e8 = pbVar22;
            uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
LAB_101251918:
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar15;
            goto LAB_1012510c4;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar3 == 0x16) goto LAB_101251668;
          uVar14 = *puVar20;
          puVar21[1] = puVar20[1];
          *puVar21 = uVar14;
          uVar14 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar14;
          bStack_90 = bVar3;
          func_0x0001013e4eb8(&bStack_b0,&bStack_90);
          bVar8 = bStack_af;
          if (bStack_b0 == 1) {
            uVar15 = CONCAT71(uStack_a7,uStack_a8);
            goto LAB_101250f7c;
          }
        }
        else {
          if (uStack_120 != 0x8000000000000002) {
            lStack_d0 = lVar27 + 1;
            bStack_b0 = 0xd1;
            bStack_af = 0x7b;
            uStack_ae = 0x108ca;
            uStack_a8 = 6;
            uStack_a7 = 0;
            bStack_90 = (byte)&bStack_b0;
            bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_e8 = pbVar22;
            uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_101251918;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_d0 = lVar27 + 1;
            pbStack_e8 = pbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101251a20;
          }
          uVar14 = *puVar20;
          puVar21[1] = puVar20[1];
          *puVar21 = uVar14;
          uVar14 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar14;
          bStack_90 = bVar3;
          FUN_1004b60cc(&bStack_b0,&bStack_90);
          uStack_120 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
          if (uStack_120 == 0x8000000000000001) {
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_a7,uStack_a8);
            uStack_120 = 0x8000000000000002;
            goto LAB_101250f8c;
          }
          uStack_188 = CONCAT71(uStack_9f,uStack_a0);
          uStack_168 = CONCAT71(uStack_a7,uStack_a8);
        }
      }
      else if (bStack_af < 5) {
        if (bStack_af == 3) {
          if (uStack_118 != 0x8000000000000001) {
            lStack_d0 = lVar27 + 1;
            bStack_b0 = 0x1f;
            bStack_af = 0x19;
            uStack_ae = 0x108cc;
            uStack_a8 = 0x11;
            uStack_a7 = 0;
            bStack_90 = (byte)&bStack_b0;
            bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_e8 = pbVar22;
            uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            goto LAB_101251918;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_d0 = lVar27 + 1;
            pbStack_e8 = pbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101251a20;
          }
          uVar14 = *puVar20;
          puVar21[1] = puVar20[1];
          *puVar21 = uVar14;
          uVar14 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar21 + 0xf) = uVar14;
          bStack_90 = bVar3;
          FUN_1004b60cc(&bStack_b0,&bStack_90);
          uStack_118 = CONCAT62(uStack_ae,CONCAT11(bStack_af,bStack_b0));
          if (uStack_118 == 0x8000000000000001) {
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_a7,uStack_a8);
            uStack_118 = 0x8000000000000001;
            goto LAB_101250f8c;
          }
          uStack_190 = CONCAT71(uStack_9f,uStack_a0);
          uStack_160 = CONCAT71(uStack_a7,uStack_a8);
        }
        else {
          if (uStack_128 != 0x8000000000000002) {
            lStack_d0 = lVar27 + 1;
            bStack_b0 = 0x67;
            bStack_af = 0xbe;
            uStack_ae = 0x108ca;
            uStack_a8 = 9;
            uStack_a7 = 0;
            bStack_90 = (byte)&bStack_b0;
            bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pbStack_e8 = pbVar22;
            uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar15;
            bVar12 = true;
            goto joined_r0x000101251818;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_d0 = lVar27 + 1;
            pbStack_e8 = pbVar22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101251a20;
          }
          uVar14 = *puVar20;
          puVar19[1] = puVar20[1];
          *puVar19 = uVar14;
          uVar14 = *(undefined8 *)((long)puVar20 + 0xf);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar14;
          bStack_b0 = bVar3;
          if (bVar3 == 0x10) {
LAB_101250df8:
            uStack_c8 = 0x8000000000000001;
            FUN_100e077ec(&bStack_b0);
            pbStack_158 = pbStack_c0;
            uStack_180 = uStack_b8;
            uStack_128 = 0x8000000000000001;
          }
          else {
            if (bVar3 == 0x11) {
              puVar6 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
              uVar14 = *puVar6;
              uStack_88 = (undefined1)puVar6[1];
              uStack_87 = (undefined7)((ulong)puVar6[1] >> 8);
              bStack_90 = (byte)uVar14;
              bStack_8f = (byte)((ulong)uVar14 >> 8);
              uStack_8e = (undefined6)((ulong)uVar14 >> 0x10);
              uStack_78 = puVar6[3];
              uStack_80 = (undefined1)puVar6[2];
              uStack_7f = (undefined7)((ulong)puVar6[2] >> 8);
              func_0x000101459ca0(&uStack_c8,&bStack_90);
              _free(puVar6);
            }
            else {
              if (bVar3 == 0x12) goto LAB_101250df8;
              func_0x000101459ca0(&uStack_c8,&bStack_b0);
            }
            uStack_128 = uStack_c8;
            pbStack_158 = pbStack_c0;
            if (uStack_c8 == 0x8000000000000002) {
              lStack_d0 = lVar27 + 1;
              *param_1 = 0x8000000000000000;
              param_1[1] = (ulong)pbStack_c0;
              bVar12 = true;
              pbStack_e8 = pbVar22;
              goto LAB_1012510fc;
            }
            uStack_180 = uStack_b8;
          }
        }
      }
      else if (bStack_af == 5) {
        if (bVar26 != 0x14) {
          lStack_d0 = lVar27 + 1;
          bStack_b0 = 0x32;
          bStack_af = 0x21;
          uStack_ae = 0x108ca;
          uStack_a8 = 5;
          uStack_a7 = 0;
          bStack_90 = (byte)&bStack_b0;
          bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
          uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
          uStack_88 = 0xa0;
          uStack_87 = 0x100c7b3;
          pbStack_e8 = pbVar22;
          uVar15 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
          goto LAB_101251918;
        }
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar3 == 0x16) goto LAB_101251668;
        uVar14 = *puVar20;
        puVar19[1] = puVar20[1];
        *puVar19 = uVar14;
        uVar14 = *(undefined8 *)((long)puVar20 + 0xf);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar14;
        bStack_b0 = bVar3;
        if (bVar3 == 0x10) {
LAB_101250cb0:
          FUN_100e077ec(&bStack_b0);
          bVar26 = 0x13;
        }
        else if (bVar3 == 0x11) {
          puVar6 = (undefined8 *)CONCAT71(uStack_a7,uStack_a8);
          uVar14 = *puVar6;
          uStack_88 = (undefined1)puVar6[1];
          uStack_87 = (undefined7)((ulong)puVar6[1] >> 8);
          bStack_90 = (byte)uVar14;
          bStack_8f = (byte)((ulong)uVar14 >> 8);
          uStack_8e = (undefined6)((ulong)uVar14 >> 0x10);
          uStack_78 = puVar6[3];
          uStack_80 = (undefined1)puVar6[2];
          uStack_7f = (undefined7)((ulong)puVar6[2] >> 8);
          FUN_1007dd600(&uStack_c8,&bStack_90);
          pbVar25 = pbStack_c0;
          cVar9 = (char)uStack_c8;
          bVar26 = uStack_c8._1_1_;
          _free(puVar6);
          if (cVar9 == '\x01') {
LAB_101251594:
            *param_1 = 0x8000000000000000;
            param_1[1] = (ulong)pbVar25;
            goto LAB_101250f8c;
          }
        }
        else {
          if (bVar3 == 0x12) goto LAB_101250cb0;
          FUN_1007dd600(&bStack_90,&bStack_b0);
          bVar26 = bStack_8f;
          if ((bStack_90 & 1) != 0) {
            pbVar25 = (byte *)CONCAT71(uStack_87,uStack_88);
            goto LAB_101251594;
          }
        }
      }
      else {
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar3 == 0x16) {
LAB_101251668:
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          lStack_d0 = lVar27 + 1;
          pbStack_e8 = pbVar22;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101251a20:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101251a24);
          (*pcVar11)();
        }
        uVar14 = *puVar20;
        puVar21[1] = puVar20[1];
        *puVar21 = uVar14;
        uVar14 = *(undefined8 *)((long)puVar20 + 0xf);
        *(undefined8 *)((long)puVar21 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
        *(undefined8 *)((long)puVar21 + 0xf) = uVar14;
        bStack_90 = bVar3;
        FUN_100e077ec(&bStack_90);
      }
      lVar27 = lVar27 + 1;
      pbVar23 = pbVar24;
      lVar28 = (lVar18 - 0x40U >> 6) + 1;
      pbVar25 = pbVar22;
    } while (pbVar22 != pbVar24);
    pbStack_e8 = pbVar23;
    lStack_d0 = lVar28;
    if (uStack_130 == 0x8000000000000000) goto LAB_10125108c;
    if (bVar8 != 2) {
      uVar15 = 0x8000000000000001;
      if (uStack_120 != 0x8000000000000002) {
        uVar15 = uStack_120;
      }
      *param_1 = uStack_130;
      param_1[1] = unaff_x22;
      uVar13 = 0x8000000000000000;
      if (uStack_118 != 0x8000000000000001) {
        uVar13 = uStack_118;
      }
      param_1[2] = uStack_198;
      param_1[3] = uVar13;
      uVar2 = 0x8000000000000001;
      if (uStack_128 != 0x8000000000000002) {
        uVar2 = uStack_128;
      }
      bVar3 = 0x13;
      if (bVar26 != 0x14) {
        bVar3 = bVar26;
      }
      param_1[4] = uStack_160;
      param_1[5] = uStack_190;
      param_1[6] = uVar15;
      param_1[7] = uStack_168;
      param_1[8] = uStack_188;
      param_1[9] = uVar2;
      param_1[10] = (ulong)pbStack_158;
      param_1[0xb] = uStack_180;
      *(byte *)(param_1 + 0xc) = bVar8;
      *(byte *)((long)param_1 + 0x61) = bVar3;
      FUN_100d34830(&pbStack_f0);
      if (pbVar24 != pbVar23) {
        bStack_90 = (byte)lVar28;
        bStack_8f = (byte)((ulong)lVar28 >> 8);
        uStack_8e = (undefined6)((ulong)lVar28 >> 0x10);
        uVar16 = FUN_1087e422c(((ulong)((long)pbVar24 - (long)pbVar23) >> 6) + lVar28,&bStack_90,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar16;
        if (uStack_130 != 0) {
          _free(unaff_x22);
        }
        if ((-0x7fffffffffffffff < (long)uVar15) && (uVar15 != 0)) {
          _free(uStack_168);
        }
        if ((uVar13 & 0x7fffffffffffffff) != 0) {
          _free(uStack_160);
        }
        if ((-0x7fffffffffffffff < (long)uVar2) && (uVar2 != 0)) {
          _free(pbStack_158);
        }
      }
      goto LAB_10125116c;
    }
    bStack_b0 = 0x11;
    bStack_af = 0x19;
    uStack_ae = 0x108cc;
    uStack_a8 = 0xe;
    uStack_a7 = 0;
    bStack_90 = (byte)&bStack_b0;
    bStack_8f = (byte)((ulong)&bStack_b0 >> 8);
    uStack_8e = (undefined6)((ulong)&bStack_b0 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    uVar15 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar15;
    if (uStack_130 != 0) {
      _free(unaff_x22);
    }
    bVar12 = false;
  }
LAB_1012510c8:
  if (uStack_128 != 0x8000000000000002) {
joined_r0x000101251818:
    if ((-0x7fffffffffffffff < (long)uStack_128) && (uStack_128 != 0)) {
      _free(pbStack_158);
    }
  }
LAB_1012510fc:
  if ((-0x7fffffffffffffff < (long)uStack_118) && (uStack_118 != 0)) {
    _free(uStack_160);
  }
  if ((-0x7ffffffffffffffe < (long)uStack_120) && (uStack_120 != 0)) {
    _free(uStack_168);
  }
  bVar1 = false;
  if ((uStack_130 & 0x7fffffffffffffff) != 0) {
    bVar1 = bVar12;
  }
  if (bVar1) {
    _free(unaff_x22);
  }
  FUN_100d34830(&pbStack_f0);
  if ((byte)pbStack_110 != '\x16') {
    FUN_100e077ec(&pbStack_110);
  }
LAB_10125116c:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

