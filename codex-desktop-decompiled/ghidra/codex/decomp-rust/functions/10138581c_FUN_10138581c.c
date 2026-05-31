
/* WARNING: Type propagation algorithm not settling */

void FUN_10138581c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  bool bVar5;
  undefined2 uVar6;
  code *pcVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  byte *unaff_x23;
  undefined8 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  undefined4 uStack_15c;
  byte *pbStack_158;
  byte *pbStack_140;
  ulong uStack_130;
  int iStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte bStack_a0;
  byte bStack_9f;
  undefined2 uStack_9e;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  int iStack_78;
  uint uStack_74;
  ulong uStack_70;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    uStack_100 = *(ulong *)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18);
    pbStack_f8 = pbVar1 + lVar14 * 0x20;
    pbStack_f0 = (byte *)0x0;
    pbStack_108 = pbVar1;
    pbStack_110 = pbVar1;
    if (lVar14 == 0) {
LAB_101385904:
      pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b2323d0,&UNK_10b20a590);
LAB_101385920:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar9;
LAB_101385928:
      lVar14 = ((ulong)((long)pbStack_f8 - (long)pbStack_108) >> 5) + 1;
      pbVar9 = pbStack_108;
      while (lVar14 = lVar14 + -1, pbVar1 = pbStack_110, uVar16 = uStack_100, lVar14 != 0) {
        FUN_100e077ec(pbVar9);
        pbVar9 = pbVar9 + 0x20;
      }
    }
    else {
      pbStack_108 = pbVar1 + 0x20;
      if (*pbVar1 == 0x16) goto LAB_101385904;
      uVar11 = *(undefined8 *)(pbVar1 + 1);
      uStack_98._1_3_ = (undefined3)*(undefined8 *)(pbVar1 + 9);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(pbVar1 + 9) >> 0x18);
      bStack_9f = (byte)uVar11;
      uStack_9e = (undefined2)((ulong)uVar11 >> 8);
      uStack_9c = (uint)((ulong)uVar11 >> 0x18);
      uStack_98._0_1_ = (undefined1)((ulong)uVar11 >> 0x38);
      uStack_88 = *(undefined8 *)(pbVar1 + 0x18);
      uStack_90 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
      uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x10) >> 8);
      pbStack_f0 = (byte *)0x1;
      bStack_a0 = *pbVar1;
      FUN_1004b62d4(&uStack_c0,&bStack_a0);
      uVar11 = uStack_b0;
      pbVar9 = pbStack_b8;
      puVar23 = uStack_c0;
      if (uStack_c0 == (undefined *)0x8000000000000000) goto LAB_101385920;
      if (lVar14 == 1) {
LAB_101385e30:
        uVar11 = 1;
LAB_101385e34:
        pbVar10 = (byte *)FUN_1087e422c(uVar11,&UNK_10b2323d0,&UNK_10b20a590);
LAB_101385e48:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar10;
        if (puVar23 != (undefined *)0x0) {
          _free(pbVar9);
        }
        goto LAB_101385928;
      }
      pbStack_108 = pbVar1 + 0x40;
      if (pbVar1[0x20] == 0x16) goto LAB_101385e30;
      uVar24 = *(undefined8 *)(pbVar1 + 0x21);
      uStack_98._1_3_ = (undefined3)*(undefined8 *)(pbVar1 + 0x29);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(pbVar1 + 0x29) >> 0x18);
      bStack_9f = (byte)uVar24;
      uStack_9e = (undefined2)((ulong)uVar24 >> 8);
      uStack_9c = (uint)((ulong)uVar24 >> 0x18);
      uStack_98._0_1_ = (undefined1)((ulong)uVar24 >> 0x38);
      uStack_88 = *(undefined8 *)(pbVar1 + 0x38);
      uStack_90 = (undefined1)*(undefined8 *)(pbVar1 + 0x30);
      uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x30) >> 8);
      pbStack_f0 = (byte *)0x2;
      bStack_a0 = pbVar1[0x20];
      FUN_100615890(&uStack_c0,&bStack_a0);
      pbVar10 = pbStack_b8;
      if (((ulong)uStack_c0 & 1) != 0) goto LAB_101385e48;
      if (lVar14 == 2) {
LAB_101386154:
        uVar11 = 2;
        goto LAB_101385e34;
      }
      uVar13 = uStack_c0._4_4_;
      pbStack_108 = pbVar1 + 0x60;
      if (pbVar1[0x40] == 0x16) goto LAB_101386154;
      uVar24 = *(undefined8 *)(pbVar1 + 0x41);
      uStack_98._1_3_ = (undefined3)*(undefined8 *)(pbVar1 + 0x49);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(pbVar1 + 0x49) >> 0x18);
      bStack_9f = (byte)uVar24;
      uStack_9e = (undefined2)((ulong)uVar24 >> 8);
      uStack_9c = (uint)((ulong)uVar24 >> 0x18);
      uStack_98._0_1_ = (undefined1)((ulong)uVar24 >> 0x38);
      uStack_88 = *(undefined8 *)(pbVar1 + 0x58);
      uStack_90 = (undefined1)*(undefined8 *)(pbVar1 + 0x50);
      uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x50) >> 8);
      pbStack_f0 = (byte *)0x3;
      bStack_a0 = pbVar1[0x40];
      FUN_100615630(&uStack_c0,&bStack_a0);
      pbVar10 = pbStack_b8;
      if ((short)uStack_c0 == 1) goto LAB_101385e48;
      uVar6 = uStack_c0._2_2_;
      FUN_100f2fea4(&bStack_a0,&pbStack_110);
      if (CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0)) == 1) {
        pbVar10 = (byte *)CONCAT44(uStack_94,uStack_98);
        goto LAB_101385e48;
      }
      if (uStack_9c == 2) {
        uVar11 = 3;
        goto LAB_101385e34;
      }
      pbVar1 = pbStack_108;
      if (pbStack_108 == pbStack_f8) {
LAB_101386234:
        pbStack_108 = pbVar1;
        uVar11 = 4;
        goto LAB_101385e34;
      }
      uVar24 = CONCAT44(uStack_98,uStack_9c);
      bVar12 = *pbStack_108;
      pbVar1 = pbStack_108 + 0x20;
      if (bVar12 == 0x16) goto LAB_101386234;
      uVar25 = *(undefined8 *)(pbStack_108 + 1);
      uStack_98._1_3_ = (undefined3)*(undefined8 *)(pbStack_108 + 9);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(pbStack_108 + 9) >> 0x18);
      bStack_9f = (byte)uVar25;
      uStack_9e = (undefined2)((ulong)uVar25 >> 8);
      uStack_9c = (uint)((ulong)uVar25 >> 0x18);
      uStack_98._0_1_ = (undefined1)((ulong)uVar25 >> 0x38);
      uStack_88 = *(undefined8 *)(pbStack_108 + 0x18);
      uStack_90 = (undefined1)*(undefined8 *)(pbStack_108 + 0x10);
      uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbStack_108 + 0x10) >> 8);
      pbStack_f0 = pbStack_f0 + 1;
      pbStack_108 = pbStack_108 + 0x20;
      bStack_a0 = bVar12;
      FUN_1004b60cc(&uStack_c0,&bStack_a0);
      pbVar1 = pbStack_b8;
      puVar22 = uStack_c0;
      pbVar10 = pbStack_b8;
      if (uStack_c0 == (undefined *)0x8000000000000001) goto LAB_101385e48;
      *param_1 = puVar23;
      param_1[1] = pbVar9;
      param_1[2] = uVar11;
      param_1[3] = uStack_c0;
      param_1[4] = pbStack_b8;
      param_1[5] = uStack_b0;
      param_1[6] = uVar24;
      *(undefined4 *)(param_1 + 7) = uVar13;
      *(undefined2 *)((long)param_1 + 0x3c) = uVar6;
      lVar14 = FUN_100fbc738(&pbStack_110);
      if (lVar14 == 0) goto LAB_1013860ec;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar14;
      if (puVar23 != (undefined *)0x0) {
        _free(pbVar9);
      }
      uVar16 = (ulong)puVar22 & 0x7fffffffffffffff;
    }
    if (uVar16 != 0) {
      _free(pbVar1);
    }
    goto LAB_1013860ec;
  }
  if (bVar4 != 0x15) {
    uVar11 = FUN_108855b04(param_2,&iStack_78,&UNK_10b20c320);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
    return;
  }
  uStack_e0 = *(undefined8 *)(param_2 + 8);
  pbStack_f0 = *(byte **)(param_2 + 0x10);
  lVar14 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar1 = pbStack_f0 + lVar14;
  pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
  lStack_d0 = 0;
  pbStack_d8 = pbVar1;
  if (*(long *)(param_2 + 0x18) == 0) {
    puVar23 = (undefined *)0x8000000000000001;
    pbStack_e8 = pbStack_f0;
LAB_101385e88:
    uStack_c0 = &UNK_108c61024;
    pbStack_b8 = (byte *)0x4;
    bStack_a0 = (byte)&uStack_c0;
    bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
    uStack_9e = (undefined2)((ulong)&uStack_c0 >> 0x10);
    uStack_9c = (uint)((ulong)&uStack_c0 >> 0x20);
    uStack_98 = 0xc7b3a0;
    uStack_94 = 1;
    puVar22 = (undefined *)0x0;
    uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
    bVar5 = true;
    pbStack_140 = unaff_x23;
  }
  else {
    lVar18 = 0;
    bVar8 = false;
    bVar5 = false;
    puVar17 = (undefined8 *)((ulong)&bStack_a0 | 1);
    puVar21 = (undefined8 *)((ulong)&pbStack_110 | 1);
    puVar15 = (undefined8 *)((ulong)&uStack_c0 | 1);
    iStack_118 = 2;
    uStack_130 = 2;
    puVar22 = (undefined *)0x8000000000000000;
    puVar23 = (undefined *)0x8000000000000001;
    pbVar9 = pbStack_f0;
    pbStack_e8 = pbStack_f0;
    do {
      pbVar20 = pbVar9 + 0x40;
      bVar12 = *pbVar9;
      lVar19 = lVar18;
      pbVar10 = pbVar20;
      if (bVar12 == 0x16) break;
      uVar11 = *(undefined8 *)(pbVar9 + 0x10);
      *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar9 + 0x18);
      *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
      uVar11 = *(undefined8 *)(pbVar9 + 1);
      puVar17[1] = *(undefined8 *)(pbVar9 + 9);
      *puVar17 = uVar11;
      pbStack_108 = *(byte **)(pbVar9 + 0x28);
      pbStack_110 = *(byte **)(pbVar9 + 0x20);
      pbStack_f8 = *(byte **)(pbVar9 + 0x38);
      uStack_100 = *(ulong *)(pbVar9 + 0x30);
      uVar16 = CONCAT44(uStack_94,uStack_98);
      uVar11 = CONCAT71(uStack_8f,uStack_90);
      bStack_a0 = bVar12;
      if (0xc < bVar12) {
        if (bVar12 == 0xd) {
          FUN_100bb7530(&uStack_c0,uVar16,uVar11);
          goto LAB_101385a88;
        }
        if (bVar12 == 0xe) {
          FUN_100bb7260(&uStack_c0,uVar11,uStack_88);
joined_r0x0001013859ec:
          pbVar9 = pbStack_110;
          puVar3 = uStack_c0;
          pbVar10 = pbStack_b8;
          if (uVar16 != 0) {
            _free(uVar11);
            pbVar9 = pbStack_110;
            puVar3 = uStack_c0;
            pbVar10 = pbStack_b8;
          }
          goto joined_r0x000101385a54;
        }
        if (bVar12 == 0xf) {
          FUN_100bb7260(&uStack_c0,uVar16,uVar11);
          goto LAB_101385a88;
        }
LAB_101385d6c:
        pbStack_b8 = (byte *)FUN_108855b04(&bStack_a0,&iStack_78,&UNK_10b20cda0);
        uStack_c0 = (undefined *)CONCAT71(uStack_c0._1_7_,1);
LAB_101385da4:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_b8;
LAB_101385db0:
        lStack_d0 = lVar18 + 1;
        bVar5 = true;
        pbStack_e8 = pbVar20;
        goto joined_r0x000101385dc4;
      }
      if (bVar12 == 1) {
        bVar12 = bStack_9f;
        if (4 < bStack_9f) {
          bVar12 = 5;
        }
        uStack_c0 = (undefined *)((ulong)CONCAT61(uStack_c0._2_6_,bVar12) << 8);
      }
      else {
        if (bVar12 != 4) {
          if (bVar12 != 0xc) goto LAB_101385d6c;
          FUN_100bb7530(&uStack_c0,uVar11);
          goto joined_r0x0001013859ec;
        }
        if (4 < uVar16) {
          uVar16 = 5;
        }
        uStack_c0 = (undefined *)((ulong)CONCAT61(uStack_c0._2_6_,(char)uVar16) << 8);
      }
LAB_101385a88:
      FUN_100e077ec(&bStack_a0);
      pbVar9 = pbStack_110;
      puVar3 = uStack_c0;
      pbVar10 = pbStack_b8;
joined_r0x000101385a54:
      pbStack_110 = pbVar9;
      uStack_c0 = puVar3;
      pbStack_b8 = pbVar10;
      if (((ulong)puVar3 & 1) != 0) goto LAB_101385da4;
      uStack_c0._1_1_ = (byte)((ulong)puVar3 >> 8);
      pbStack_110._0_1_ = (byte)pbVar9;
      bVar12 = (byte)pbStack_110;
      pbStack_110._1_7_ = (undefined7)((ulong)pbVar9 >> 8);
      if (uStack_c0._1_1_ < 3) {
        if (uStack_c0._1_1_ == 0) {
          if (puVar22 != (undefined *)0x8000000000000000) {
            lStack_d0 = lVar18 + 1;
            uStack_c0 = &UNK_108c61024;
            pbStack_b8 = (byte *)0x4;
            bStack_a0 = (byte)&uStack_c0;
            bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&uStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&uStack_c0 >> 0x20);
            uStack_98 = 0xc7b3a0;
            uStack_94 = 1;
            pbStack_e8 = pbVar20;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            goto LAB_1013863e8;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar12 == 0x16) {
            lStack_d0 = lVar18 + 1;
            pbStack_e8 = pbVar20;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101386460;
          }
          uVar11 = *puVar21;
          puVar17[1] = puVar21[1];
          *puVar17 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
          bStack_a0 = bVar12;
          FUN_1004b62d4(&uStack_c0,&bStack_a0);
          if (uStack_c0 != (undefined *)0x8000000000000000) {
            pbStack_140 = pbStack_b8;
            uStack_170 = uStack_b0;
            puVar22 = uStack_c0;
            goto LAB_101385978;
          }
          puVar22 = (undefined *)0x0;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_b8;
          goto LAB_101385db0;
        }
        if (uStack_c0._1_1_ == 1) {
          if (bVar5) {
            lStack_d0 = lVar18 + 1;
            uStack_c0 = &UNK_108cc178c;
            pbStack_b8 = (byte *)0xa;
            bStack_a0 = (byte)&uStack_c0;
            bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&uStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&uStack_c0 >> 0x20);
            uStack_98 = 0xc7b3a0;
            uStack_94 = 1;
            pbStack_e8 = pbVar20;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
LAB_1013863e8:
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar11;
            bVar5 = true;
            goto joined_r0x000101385dc4;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar12 == 0x16) goto LAB_1013861d4;
          uVar11 = *puVar21;
          puVar17[1] = puVar21[1];
          *puVar17 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
          bStack_a0 = bVar12;
          FUN_100615890(&uStack_c0,&bStack_a0);
          if ((int)uStack_c0 == 1) goto LAB_101385da4;
          uStack_15c = uStack_c0._4_4_;
          bVar5 = true;
        }
        else {
          if (bVar8) {
            lStack_d0 = lVar18 + 1;
            uStack_c0 = &UNK_108cc1796;
            pbStack_b8 = (byte *)0xb;
            bStack_a0 = (byte)&uStack_c0;
            bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&uStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&uStack_c0 >> 0x20);
            uStack_98 = 0xc7b3a0;
            uStack_94 = 1;
            pbStack_e8 = pbVar20;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            goto LAB_1013863e8;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar12 == 0x16) goto LAB_1013861d4;
          uVar11 = *puVar21;
          puVar17[1] = puVar21[1];
          *puVar17 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
          bStack_a0 = bVar12;
          FUN_100615630(&uStack_c0,&bStack_a0);
          bVar8 = (short)uStack_c0 == 1;
          if (bVar8) goto LAB_101385da4;
          bVar8 = true;
          uStack_160 = uStack_c0._2_2_;
        }
      }
      else {
        if (uStack_c0._1_1_ == 3) {
          if (iStack_118 != 2) {
            lStack_d0 = lVar18 + 1;
            uStack_c0 = &UNK_108cc17a1;
            pbStack_b8 = (byte *)0x11;
            bStack_a0 = (byte)&uStack_c0;
            bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&uStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&uStack_c0 >> 0x20);
            uStack_98 = 0xc7b3a0;
            uStack_94 = 1;
            pbStack_e8 = pbVar20;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            goto LAB_1013863e8;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar12 == 0x16) goto LAB_1013861d4;
          uVar11 = *puVar21;
          puVar15[1] = puVar21[1];
          *puVar15 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar11;
          uStack_c0._1_7_ = (undefined7)((ulong)puVar3 >> 8);
          uStack_c0 = (undefined *)CONCAT71(uStack_c0._1_7_,bVar12);
          if (bVar12 == 0x10) {
LAB_101385c28:
            FUN_100e077ec(&uStack_c0);
            iStack_118 = 0;
          }
          else if (bVar12 == 0x11) {
            uVar11 = *(undefined8 *)pbVar10;
            uStack_98 = (undefined4)*(undefined8 *)(pbVar10 + 8);
            uStack_94 = (undefined4)((ulong)*(undefined8 *)(pbVar10 + 8) >> 0x20);
            bStack_a0 = (byte)uVar11;
            bStack_9f = (byte)((ulong)uVar11 >> 8);
            uStack_9e = (undefined2)((ulong)uVar11 >> 0x10);
            uStack_9c = (uint)((ulong)uVar11 >> 0x20);
            uStack_88 = *(undefined8 *)(pbVar10 + 0x18);
            uStack_90 = (undefined1)*(undefined8 *)(pbVar10 + 0x10);
            uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbVar10 + 0x10) >> 8);
            FUN_100615890(&iStack_78,&bStack_a0);
            iVar2 = iStack_78;
            uVar16 = uStack_130 & 0xffffffff00000000;
            uStack_130 = uStack_70;
            if (iStack_78 == 0) {
              iStack_118 = 1;
              uStack_130 = uVar16 | uStack_74;
            }
            _free(pbVar10);
            uVar16 = uStack_130;
            if (iVar2 != 0) {
LAB_10138615c:
              uStack_130 = uVar16;
              *param_1 = 0x8000000000000000;
              param_1[1] = uStack_130;
              goto LAB_101385db0;
            }
          }
          else {
            if (bVar12 == 0x12) goto LAB_101385c28;
            FUN_100615890(&bStack_a0,&uStack_c0);
            uStack_130 = uStack_130 & 0xffffffff00000000 | (ulong)uStack_9c;
            uVar16 = CONCAT44(uStack_94,uStack_98);
            if (CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0)) != 0) goto LAB_10138615c;
            iStack_118 = 1;
          }
          goto LAB_101385978;
        }
        if (uStack_c0._1_1_ != 4) {
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar12 == 0x16) {
LAB_1013861d4:
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            lStack_d0 = lVar18 + 1;
            pbStack_e8 = pbVar20;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101386460:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101386464);
            (*pcVar7)();
          }
          uVar11 = *puVar21;
          puVar17[1] = puVar21[1];
          *puVar17 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
          bStack_a0 = bVar12;
          FUN_100e077ec(&bStack_a0);
          goto LAB_101385978;
        }
        if (puVar23 != (undefined *)0x8000000000000001) {
          lStack_d0 = lVar18 + 1;
          uStack_c0 = &UNK_108cc17b2;
          pbStack_b8 = (byte *)0x6;
          bStack_a0 = (byte)&uStack_c0;
          bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
          uStack_9e = (undefined2)((ulong)&uStack_c0 >> 0x10);
          uStack_9c = (uint)((ulong)&uStack_c0 >> 0x20);
          uStack_98 = 0xc7b3a0;
          uStack_94 = 1;
          pbStack_e8 = pbVar20;
          uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar11;
          bVar5 = true;
          goto joined_r0x0001013862b4;
        }
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar12 == 0x16) {
          lStack_d0 = lVar18 + 1;
          pbStack_e8 = pbVar20;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101386460;
        }
        uVar11 = *puVar21;
        puVar17[1] = puVar21[1];
        *puVar17 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar21 + 0xf);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
        bStack_a0 = bVar12;
        FUN_1004b60cc(&uStack_c0,&bStack_a0);
        pbStack_158 = pbStack_b8;
        if (uStack_c0 == (undefined *)0x8000000000000001) {
          lStack_d0 = lVar18 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_b8;
          bVar5 = true;
          pbStack_e8 = pbVar20;
          goto LAB_1013860b8;
        }
        uStack_168 = uStack_b0;
        puVar23 = uStack_c0;
      }
LAB_101385978:
      lVar18 = lVar18 + 1;
      lVar19 = (lVar14 - 0x40U >> 6) + 1;
      pbVar10 = pbVar1;
      pbVar9 = pbVar20;
    } while (pbVar20 != pbVar1);
    unaff_x23 = pbStack_140;
    pbStack_e8 = pbVar10;
    lStack_d0 = lVar19;
    if (puVar22 == (undefined *)0x8000000000000000) goto LAB_101385e88;
    if (bVar5) {
      if (bVar8) {
        iVar2 = 0;
        if (iStack_118 != 2) {
          iVar2 = iStack_118;
        }
        uVar13 = 0;
        if (iStack_118 != 2) {
          uVar13 = (undefined4)uStack_130;
        }
        *param_1 = puVar22;
        param_1[1] = pbStack_140;
        puVar3 = (undefined *)0x8000000000000000;
        if (puVar23 != (undefined *)0x8000000000000001) {
          puVar3 = puVar23;
        }
        param_1[2] = uStack_170;
        param_1[3] = puVar3;
        param_1[4] = pbStack_158;
        param_1[5] = uStack_168;
        *(int *)(param_1 + 6) = iVar2;
        *(undefined4 *)((long)param_1 + 0x34) = uVar13;
        *(undefined4 *)(param_1 + 7) = uStack_15c;
        *(undefined2 *)((long)param_1 + 0x3c) = uStack_160;
        FUN_100d34830(&pbStack_f0);
        if (pbVar1 != pbVar10) {
          bStack_a0 = (byte)lVar19;
          bStack_9f = (byte)((ulong)lVar19 >> 8);
          uStack_9e = (undefined2)((ulong)lVar19 >> 0x10);
          uStack_9c = (uint)((ulong)lVar19 >> 0x20);
          uVar11 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar10) >> 6) + lVar19,&bStack_a0,
                                 &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar11;
          if (puVar22 != (undefined *)0x0) {
            _free(pbStack_140);
          }
          if (((ulong)puVar3 & 0x7fffffffffffffff) != 0) {
            _free(pbStack_158);
          }
        }
        goto LAB_1013860ec;
      }
      uStack_c0 = &UNK_108cc1796;
      pbStack_b8 = (byte *)0xb;
      bStack_a0 = (byte)&uStack_c0;
      bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
      uStack_9e = (undefined2)((ulong)&uStack_c0 >> 0x10);
      uStack_9c = (uint)((ulong)&uStack_c0 >> 0x20);
      uStack_98 = 0xc7b3a0;
      uStack_94 = 1;
      uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
    }
    else {
      uStack_c0 = &UNK_108cc178c;
      pbStack_b8 = (byte *)0xa;
      bStack_a0 = (byte)&uStack_c0;
      bStack_9f = (byte)((ulong)&uStack_c0 >> 8);
      uStack_9e = (undefined2)((ulong)&uStack_c0 >> 0x10);
      uStack_9c = (uint)((ulong)&uStack_c0 >> 0x20);
      uStack_98 = 0xc7b3a0;
      uStack_94 = 1;
      uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_a0);
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
    if (puVar22 != (undefined *)0x0) {
      _free(pbStack_140);
    }
    bVar5 = false;
  }
joined_r0x000101385dc4:
  if (puVar23 != (undefined *)0x8000000000000001) {
joined_r0x0001013862b4:
    if (((ulong)puVar23 & 0x7fffffffffffffff) != 0) {
      _free(pbStack_158);
    }
  }
LAB_1013860b8:
  if ((bVar5) && (((ulong)puVar22 & 0x7fffffffffffffff) != 0)) {
    _free(pbStack_140);
  }
  FUN_100d34830(&pbStack_f0);
  if ((byte)pbStack_110 != '\x16') {
    FUN_100e077ec(&pbStack_110);
  }
LAB_1013860ec:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

