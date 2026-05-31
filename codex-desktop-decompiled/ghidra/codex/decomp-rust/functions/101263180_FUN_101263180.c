
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_101263180(ulong *param_1,byte *param_2)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  int7 iVar8;
  byte *pbVar9;
  byte *pbVar10;
  ushort uVar11;
  code *pcVar12;
  undefined8 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined1 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong unaff_x23;
  byte **ppbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  ulong uVar28;
  ulong uStack_1d8;
  ulong uStack_1d0;
  byte *pbStack_1c8;
  byte **ppbStack_1c0;
  byte *pbStack_1a8;
  byte bStack_1a0;
  int7 iStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong auStack_138 [4];
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined2 uStack_a0;
  ulong uStack_98;
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
    pbVar2 = *(byte **)(param_2 + 8);
    pbVar27 = *(byte **)(param_2 + 0x10);
    lVar18 = *(long *)(param_2 + 0x18);
    pbVar22 = pbVar27 + lVar18 * 0x20;
    pbStack_e0 = (byte *)0x0;
    pbVar23 = pbVar27;
    pbStack_100 = pbVar27;
    pbStack_f0 = pbVar2;
    pbStack_e8 = pbVar22;
    if (lVar18 == 0) {
LAB_101263718:
      pbStack_f8 = pbVar23;
      pbVar14 = (byte *)FUN_1087e422c(0,&UNK_10b2319c8,&UNK_10b20a590);
LAB_101263734:
      *param_1 = 0x8000000000000000;
      param_1[1] = (ulong)pbVar14;
    }
    else {
      pbVar23 = pbVar27 + 0x20;
      if (*pbVar27 == 0x16) goto LAB_101263718;
      uStack_197 = (undefined7)*(undefined8 *)(pbVar27 + 9);
      iStack_19f = (int7)*(undefined8 *)(pbVar27 + 1);
      uStack_198 = (undefined1)((ulong)*(undefined8 *)(pbVar27 + 1) >> 0x38);
      pbStack_188 = *(byte **)(pbVar27 + 0x18);
      uStack_190 = (undefined1)*(undefined8 *)(pbVar27 + 0x10);
      uStack_18f = (undefined7)((ulong)*(undefined8 *)(pbVar27 + 0x10) >> 8);
      pbStack_e0 = (byte *)0x1;
      bStack_1a0 = *pbVar27;
      pbStack_f8 = pbVar23;
      FUN_1004b62d4(&uStack_d0,&bStack_1a0);
      pbVar10 = pbStack_c0;
      pbVar14 = pbStack_c8;
      pbVar9 = uStack_d0;
      if (uStack_d0 == (byte *)0x8000000000000000) goto LAB_101263734;
      if (lVar18 == 1) {
LAB_1012637e8:
        pbVar15 = (byte *)FUN_1087e422c(1,&UNK_10b2319c8,&UNK_10b20a590);
LAB_101263800:
        *param_1 = 0x8000000000000000;
        param_1[1] = (ulong)pbVar15;
      }
      else {
        pbVar23 = pbVar27 + 0x40;
        pbStack_f8 = pbVar23;
        if (pbVar27[0x20] == 0x16) goto LAB_1012637e8;
        uVar13 = *(undefined8 *)(pbVar27 + 0x21);
        uStack_87 = (undefined7)*(undefined8 *)(pbVar27 + 0x29);
        bStack_8f = (byte)uVar13;
        uStack_8e = (undefined6)((ulong)uVar13 >> 8);
        uStack_88 = (undefined1)((ulong)uVar13 >> 0x38);
        uStack_78 = *(undefined8 *)(pbVar27 + 0x38);
        uStack_80 = (undefined1)*(undefined8 *)(pbVar27 + 0x30);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar27 + 0x30) >> 8);
        pbStack_e0 = (byte *)0x2;
        bStack_90 = pbVar27[0x20];
        func_0x000101280158(&bStack_1a0,&bStack_90);
        iVar8 = iStack_19f;
        pbVar26 = (byte *)CONCAT71(iStack_19f,bStack_1a0);
        pbVar15 = (byte *)CONCAT71(uStack_197,uStack_198);
        if (pbVar26 == (byte *)0x8000000000000004) goto LAB_101263800;
        ppbVar24 = &pbStack_c0;
        pbStack_c0 = (byte *)CONCAT71(uStack_18f,uStack_190);
        pbStack_b8 = pbStack_188;
        pbStack_a8 = pbStack_178;
        pbStack_b0 = pbStack_180;
        uStack_d0 = pbVar26;
        pbStack_c8 = pbVar15;
        if (lVar18 == 2) {
LAB_101263b9c:
          uVar16 = 2;
LAB_101263ba0:
          param_1[4] = (ulong)pbStack_c8;
          param_1[3] = (ulong)uStack_d0;
          param_1[6] = (ulong)pbStack_b8;
          param_1[5] = (ulong)pbStack_c0;
          param_1[8] = (ulong)pbStack_a8;
          param_1[7] = (ulong)pbStack_b0;
          *param_1 = (ulong)pbVar9;
          param_1[1] = (ulong)pbVar14;
          param_1[2] = (ulong)pbVar10;
          *(undefined1 *)(param_1 + 9) = uVar16;
          auStack_138[2] = param_1[5];
          auStack_138[1] = param_1[4];
          uStack_118 = param_1[7];
          auStack_138[3] = param_1[6];
          uStack_108 = param_1[9];
          uStack_110 = param_1[8];
          uStack_148 = param_1[1];
          uStack_150 = *param_1;
          auStack_138[0] = param_1[3];
          uStack_140 = param_1[2];
          uVar28 = FUN_100fbc738(&pbStack_100);
          if (uVar28 != 0) {
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar28;
            func_0x000100e5d530(&uStack_150);
          }
          goto LAB_101263ac8;
        }
        pbVar23 = pbVar27 + 0x60;
        bVar3 = pbVar27[0x40];
        pbStack_f8 = pbVar23;
        if (bVar3 == 0x16) goto LAB_101263b9c;
        uVar13 = *(undefined8 *)(pbVar27 + 0x41);
        uStack_87 = (undefined7)*(undefined8 *)(pbVar27 + 0x49);
        bStack_8f = (byte)uVar13;
        uStack_8e = (undefined6)((ulong)uVar13 >> 8);
        uStack_88 = (undefined1)((ulong)uVar13 >> 0x38);
        uStack_78 = *(undefined8 *)(pbVar27 + 0x58);
        uStack_80 = (undefined1)*(undefined8 *)(pbVar27 + 0x50);
        uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar27 + 0x50) >> 8);
        pbStack_e0 = (byte *)0x3;
        bStack_90 = bVar3;
        if (bVar3 == 0x10) {
LAB_101263c40:
          uStack_a0 = 0x200;
          FUN_100e077ec(&bStack_90);
        }
        else if (bVar3 == 0x11) {
          puVar19 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
          uStack_198 = (undefined1)puVar19[1];
          uStack_197 = (undefined7)((ulong)puVar19[1] >> 8);
          bStack_1a0 = (byte)*puVar19;
          iStack_19f = (int7)((ulong)*puVar19 >> 8);
          pbStack_188 = (byte *)puVar19[3];
          uStack_190 = (undefined1)puVar19[2];
          uStack_18f = (undefined7)((ulong)puVar19[2] >> 8);
          func_0x0001014107e4(&uStack_a0,&bStack_1a0);
          _free(puVar19);
        }
        else {
          if (bVar3 == 0x12) goto LAB_101263c40;
          func_0x0001014107e4(&uStack_a0,&bStack_90);
        }
        if ((uStack_a0 & 1) == 0) {
          uVar16 = uStack_a0._1_1_;
          goto LAB_101263ba0;
        }
        *param_1 = 0x8000000000000000;
        param_1[1] = uStack_98;
        uVar28 = (ulong)pbVar26 ^ 0x8000000000000000;
        if (-1 < iVar8) {
          uVar28 = 2;
        }
        if (uVar28 != 0) {
          if ((uVar28 == 1) || (uVar28 != 2)) {
            if (pbVar15 != (byte *)0x0) goto LAB_101263f10;
          }
          else {
            if (pbVar26 != (byte *)0x0) {
              _free();
            }
            if (((ulong)pbStack_b8 & 0x7fffffffffffffff) != 0) {
              ppbVar24 = &pbStack_b0;
LAB_101263f10:
              _free(*ppbVar24);
            }
          }
        }
      }
      if (pbVar9 != (byte *)0x0) {
        _free(pbVar14);
      }
    }
    lVar18 = ((ulong)((long)pbVar22 - (long)pbVar23) >> 5) + 1;
    while (lVar18 = lVar18 + -1, lVar18 != 0) {
      FUN_100e077ec(pbVar23);
      pbVar23 = pbVar23 + 0x20;
    }
    if (pbVar2 != (byte *)0x0) {
      _free(pbVar27);
    }
    goto LAB_101263ac8;
  }
  if (bVar4 != 0x15) {
    uVar28 = FUN_108855b04(param_2,&uStack_a0,&UNK_10b20c9a0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar28;
    return;
  }
  uStack_170 = *(undefined8 *)(param_2 + 8);
  pbStack_180 = *(byte **)(param_2 + 0x10);
  lVar18 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar23 = pbStack_180 + lVar18;
  bStack_1a0 = 0x16;
  pbStack_160 = (byte *)0x0;
  ppbStack_1c0 = &pbStack_f0;
  pbStack_168 = pbVar23;
  if (*(long *)(param_2 + 0x18) == 0) {
    pbStack_100 = (byte *)0x8000000000000004;
    pbStack_1a8 = (byte *)0x8000000000000004;
    pbStack_178 = pbStack_180;
LAB_101263850:
    bStack_90 = 0xf8;
    bStack_8f = 0x82;
    uStack_8e = 0x108c9;
    uStack_88 = 8;
    uStack_87 = 0;
    uStack_d0 = &bStack_90;
    pbStack_c8 = &DAT_100c7b3a0;
    uVar28 = 0;
    uVar17 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar17;
    uStack_1d0 = unaff_x23;
joined_r0x0001012636d4:
    if (pbStack_1a8 != (byte *)0x8000000000000004) {
      uVar17 = (ulong)pbStack_1a8 ^ 0x8000000000000000;
      if (-1 < (long)pbStack_1a8) {
        uVar17 = 2;
      }
joined_r0x000101263e78:
      if (uVar17 != 0) {
        if ((uVar17 == 1) || (uVar17 != 2)) {
          if (pbStack_1c8 != (byte *)0x0) goto LAB_1012638ec;
        }
        else {
          if (pbStack_1a8 != (byte *)0x0) {
            _free(pbStack_1c8);
          }
          if (((ulong)pbStack_e8 & 0x7fffffffffffffff) != 0) {
            ppbStack_1c0 = &pbStack_e0;
LAB_1012638ec:
            _free(*ppbStack_1c0);
          }
        }
      }
    }
LAB_101263aa4:
    uVar28 = uVar28 & 0x7fffffffffffffff;
  }
  else {
    pbVar22 = (byte *)0x0;
    puVar20 = (undefined8 *)((ulong)&uStack_d0 | 1);
    puVar21 = (undefined8 *)((ulong)&bStack_1a0 | 1);
    puVar19 = (undefined8 *)((ulong)&bStack_90 | 1);
    cVar6 = '\x03';
    pbStack_1a8 = (byte *)0x8000000000000004;
    uVar28 = 0x8000000000000000;
    pbVar27 = (byte *)0x8000000000000004;
    pbVar2 = pbStack_180;
    pbStack_178 = pbStack_180;
    do {
      pbVar10 = pbStack_c0;
      pbVar9 = pbStack_c8;
      pbVar14 = uStack_d0;
      pbVar25 = pbVar2 + 0x40;
      bVar3 = *pbVar2;
      pbVar15 = pbVar22;
      pbVar26 = pbVar25;
      if (bVar3 == 0x16) break;
      uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar3);
      pbVar15 = uStack_d0;
      uVar13 = *(undefined8 *)(pbVar2 + 0x10);
      *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)(pbVar2 + 0x18);
      *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
      uVar13 = *(undefined8 *)(pbVar2 + 1);
      puVar20[1] = *(undefined8 *)(pbVar2 + 9);
      *puVar20 = uVar13;
      uStack_198 = (undefined1)*(undefined8 *)(pbVar2 + 0x28);
      uStack_197 = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x28) >> 8);
      bStack_1a0 = (byte)*(undefined8 *)(pbVar2 + 0x20);
      iStack_19f = (int7)((ulong)*(undefined8 *)(pbVar2 + 0x20) >> 8);
      pbStack_188 = *(byte **)(pbVar2 + 0x38);
      uStack_190 = (undefined1)*(undefined8 *)(pbVar2 + 0x30);
      uStack_18f = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x30) >> 8);
      if (0xc < bVar3) {
        if (bVar3 == 0xd) {
          if (pbStack_c0 == (byte *)0x6) {
            if (*(int *)pbStack_c8 == 0x67726174 && *(short *)(pbStack_c8 + 4) == 0x7465) {
              bStack_8f = 1;
              goto LAB_10126343c;
            }
          }
          else if (pbStack_c0 == (byte *)0x8) {
            if (*(long *)pbStack_c8 == 0x6449646165726874) {
              bStack_8f = 0;
            }
            else {
              if (*(long *)pbStack_c8 != 0x79726576696c6564) goto LAB_101263434;
              bStack_8f = 2;
            }
            goto LAB_10126343c;
          }
LAB_101263434:
          bStack_8f = 3;
          goto LAB_10126343c;
        }
        if (bVar3 != 0xe) {
          if (bVar3 != 0xf) goto LAB_101263668;
          func_0x000100badb60(&bStack_90,pbStack_c8,pbStack_c0);
          goto LAB_101263440;
        }
        func_0x000100badb60(&bStack_90,pbStack_c0);
        if (pbVar9 != (byte *)0x0) goto LAB_101263400;
LAB_101263448:
        if ((bStack_90 & 1) == 0) goto LAB_101263450;
LAB_101263690:
        uStack_98 = CONCAT71(uStack_87,uStack_88);
LAB_1012636a8:
        *param_1 = 0x8000000000000000;
        param_1[1] = uStack_98;
LAB_1012636b4:
        pbStack_160 = pbVar22 + 1;
        pbStack_178 = pbVar25;
        pbStack_100 = pbVar27;
        pbStack_f8 = pbStack_1c8;
        goto joined_r0x0001012636d4;
      }
      if (bVar3 == 1) {
        uStack_d0._1_1_ = SUB81(pbVar14,1);
        bStack_8f = uStack_d0._1_1_;
        if (2 < uStack_d0._1_1_) {
          bStack_8f = 3;
        }
LAB_10126343c:
        bStack_90 = 0;
        uStack_d0 = pbVar15;
LAB_101263440:
        FUN_100e077ec(&uStack_d0);
        goto LAB_101263448;
      }
      if (bVar3 == 4) {
        pbVar2 = pbStack_c8;
        if ((byte *)0x2 < pbStack_c8) {
          pbVar2 = (byte *)0x3;
        }
        bStack_8f = (byte)pbVar2;
        goto LAB_10126343c;
      }
      if (bVar3 != 0xc) {
LAB_101263668:
        uVar13 = FUN_108855b04(&uStack_d0,&uStack_a0,&UNK_10b20e7c0);
        uStack_88 = (undefined1)uVar13;
        uStack_87 = (undefined7)((ulong)uVar13 >> 8);
        bStack_90 = 1;
        goto LAB_101263690;
      }
      if (pbStack_b8 == (byte *)0x6) {
        if (*(int *)pbStack_c0 == 0x67726174 && *(short *)(pbStack_c0 + 4) == 0x7465) {
          bStack_8f = 1;
          goto LAB_1012633f4;
        }
LAB_1012633f0:
        bStack_8f = 3;
      }
      else {
        if (pbStack_b8 != (byte *)0x8) goto LAB_1012633f0;
        if (*(long *)pbStack_c0 == 0x6449646165726874) {
          bStack_8f = 0;
        }
        else {
          if (*(long *)pbStack_c0 != 0x79726576696c6564) goto LAB_1012633f0;
          bStack_8f = 2;
        }
      }
LAB_1012633f4:
      bStack_90 = 0;
      if (pbStack_c8 == (byte *)0x0) goto LAB_101263448;
LAB_101263400:
      _free(pbVar10);
      if ((bStack_90 & 1) != 0) goto LAB_101263690;
LAB_101263450:
      bVar3 = bStack_1a0;
      if (bStack_8f < 2) {
        if (bStack_8f == 0) {
          if (uVar28 == 0x8000000000000000) {
            bStack_1a0 = 0x16;
            if (bVar3 == 0x16) {
              pbStack_160 = pbVar22 + 1;
              pbStack_f8 = pbStack_1c8;
              pbStack_178 = pbVar25;
              pbStack_100 = pbVar27;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101263efc;
            }
            uVar13 = *puVar21;
            puVar20[1] = puVar21[1];
            *puVar20 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar21 + 0xf);
            *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
            *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
            uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar3);
            FUN_1004b62d4(&bStack_90,&uStack_d0);
            uVar28 = CONCAT62(uStack_8e,CONCAT11(bStack_8f,bStack_90));
            if (uVar28 != 0x8000000000000000) {
              uStack_1d0 = CONCAT71(uStack_87,uStack_88);
              uStack_1d8 = CONCAT71(uStack_7f,uStack_80);
              uVar11 = uStack_a0;
              goto LAB_101263258;
            }
            uVar28 = 0;
            *param_1 = 0x8000000000000000;
            param_1[1] = CONCAT71(uStack_87,uStack_88);
            goto LAB_1012636b4;
          }
          pbStack_160 = pbVar22 + 1;
          pbStack_f8 = pbStack_1c8;
          bStack_90 = 0xf8;
          bStack_8f = 0x82;
          uStack_8e = 0x108c9;
          uStack_88 = 8;
          uStack_87 = 0;
          uStack_d0 = &bStack_90;
          pbStack_c8 = &DAT_100c7b3a0;
          pbStack_178 = pbVar25;
          pbStack_100 = pbVar27;
          uVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
LAB_101263dec:
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar17;
          goto joined_r0x0001012636d4;
        }
        if (pbStack_1a8 != (byte *)0x8000000000000004) {
          pbStack_160 = pbVar22 + 1;
          pbStack_f8 = pbStack_1c8;
          bStack_90 = 0xad;
          bStack_8f = 0xab;
          uStack_8e = 0x108ca;
          uStack_88 = 6;
          uStack_87 = 0;
          uStack_d0 = &bStack_90;
          pbStack_c8 = &DAT_100c7b3a0;
          pbStack_178 = pbVar25;
          pbStack_100 = pbVar27;
          uVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar17;
          uVar17 = (ulong)pbStack_1a8 ^ 0x8000000000000000;
          if (-1 < (long)pbStack_1a8) {
            uVar17 = 2;
          }
          goto joined_r0x000101263e78;
        }
        bStack_1a0 = 0x16;
        if (bVar3 == 0x16) {
          pbStack_160 = pbVar22 + 1;
          pbStack_f8 = pbStack_1c8;
          pbStack_178 = pbVar25;
          pbStack_100 = pbVar27;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101263efc;
        }
        uVar13 = *puVar21;
        puVar19[1] = puVar21[1];
        *puVar19 = uVar13;
        uVar13 = *(undefined8 *)((long)puVar21 + 0xf);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar13;
        bStack_90 = bVar3;
        func_0x000101280158(&uStack_d0,&bStack_90);
        pbStack_1a8 = uStack_d0;
        if (uStack_d0 == (byte *)0x8000000000000004) {
          pbStack_160 = pbVar22 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = (ulong)pbStack_c8;
          pbStack_178 = pbVar25;
          goto LAB_101263aa4;
        }
        pbStack_1c8 = pbStack_c8;
        pbStack_e8 = pbStack_b8;
        pbStack_f0 = pbStack_c0;
        pbStack_d8 = pbStack_a8;
        pbStack_e0 = pbStack_b0;
        pbVar27 = uStack_d0;
        uVar11 = uStack_a0;
      }
      else {
        if (bStack_8f != 2) {
          bStack_1a0 = 0x16;
          if (bVar3 == 0x16) {
LAB_101263c54:
            bStack_1a0 = 0x16;
            pbStack_160 = pbVar22 + 1;
            pbStack_f8 = pbStack_1c8;
            pbStack_178 = pbVar25;
            pbStack_100 = pbVar27;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101263efc:
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x101263f00);
            (*pcVar12)();
          }
          uVar13 = *puVar21;
          puVar20[1] = puVar21[1];
          *puVar20 = uVar13;
          uVar13 = *(undefined8 *)((long)puVar21 + 0xf);
          *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
          *(undefined8 *)((long)puVar20 + 0xf) = uVar13;
          uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,bVar3);
          FUN_100e077ec(&uStack_d0);
          uVar11 = uStack_a0;
          goto LAB_101263258;
        }
        if (cVar6 != '\x03') {
          pbStack_160 = pbVar22 + 1;
          pbStack_f8 = pbStack_1c8;
          bStack_90 = 0xd8;
          bStack_8f = 0x84;
          uStack_8e = 0x108c9;
          uStack_88 = 8;
          uStack_87 = 0;
          uStack_d0 = &bStack_90;
          pbStack_c8 = &DAT_100c7b3a0;
          pbStack_178 = pbVar25;
          pbStack_100 = pbVar27;
          uVar17 = FUN_108856088(s_duplicate_field_____108ac2973,&uStack_d0);
          goto LAB_101263dec;
        }
        bStack_1a0 = 0x16;
        if (bVar3 == 0x16) goto LAB_101263c54;
        uVar13 = *puVar21;
        puVar19[1] = puVar21[1];
        *puVar19 = uVar13;
        uVar13 = *(undefined8 *)((long)puVar21 + 0xf);
        *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
        *(undefined8 *)((long)puVar19 + 0xf) = uVar13;
        bStack_90 = bVar3;
        if (bVar3 == 0x10) {
LAB_101263518:
          uStack_a0 = 0x200;
          FUN_100e077ec(&bStack_90);
LAB_101263630:
          uVar11 = uStack_a0;
        }
        else {
          if (bVar3 != 0x11) {
            if (bVar3 == 0x12) goto LAB_101263518;
            func_0x0001014107e4(&uStack_a0,&bStack_90);
            goto LAB_101263630;
          }
          puVar5 = (undefined8 *)CONCAT71(uStack_87,uStack_88);
          pbStack_c8 = (byte *)puVar5[1];
          uStack_d0 = (byte *)*puVar5;
          pbStack_b8 = (byte *)puVar5[3];
          pbStack_c0 = (byte *)puVar5[2];
          func_0x0001014107e4(&uStack_a0,&uStack_d0);
          _free(puVar5);
          uVar11 = uStack_a0;
        }
        bVar7 = (char)uStack_a0 == '\x01';
        uStack_a0 = uVar11;
        if (bVar7) goto LAB_1012636a8;
        uStack_a0._1_1_ = (char)(uVar11 >> 8);
        cVar6 = uStack_a0._1_1_;
      }
LAB_101263258:
      uStack_a0 = uVar11;
      pbVar22 = pbVar22 + 1;
      pbVar15 = (byte *)((lVar18 - 0x40U >> 6) + 1);
      pbVar26 = pbVar23;
      pbVar2 = pbVar25;
    } while (pbVar25 != pbVar23);
    pbStack_f8 = pbStack_1c8;
    unaff_x23 = uStack_1d0;
    pbStack_178 = pbVar26;
    pbStack_160 = pbVar15;
    pbStack_100 = pbVar27;
    if (uVar28 == 0x8000000000000000) goto LAB_101263850;
    if (pbStack_1a8 != (byte *)0x8000000000000004) {
      param_1[6] = (ulong)pbStack_e8;
      param_1[5] = (ulong)pbStack_f0;
      param_1[8] = (ulong)pbStack_d8;
      param_1[7] = (ulong)pbStack_e0;
      cVar1 = '\x02';
      if (cVar6 != '\x03') {
        cVar1 = cVar6;
      }
      *param_1 = uVar28;
      param_1[1] = uStack_1d0;
      param_1[2] = uStack_1d8;
      param_1[3] = (ulong)pbStack_1a8;
      param_1[4] = (ulong)pbStack_1c8;
      *(char *)(param_1 + 9) = cVar1;
      auStack_138[2] = param_1[5];
      auStack_138[1] = param_1[4];
      uStack_118 = param_1[7];
      auStack_138[3] = param_1[6];
      uStack_108 = param_1[9];
      uStack_110 = param_1[8];
      uStack_148 = param_1[1];
      uStack_150 = *param_1;
      auStack_138[0] = param_1[3];
      uStack_140 = param_1[2];
      FUN_100d34830(&pbStack_180);
      if (pbVar23 != pbVar26) {
        uStack_d0 = pbVar15;
        uVar28 = FUN_1087e422c(pbVar15 + ((ulong)((long)pbVar23 - (long)pbVar26) >> 6),&uStack_d0,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar28;
        if (uStack_150 != 0) {
          _free(uStack_148);
        }
        uVar28 = auStack_138[0] ^ 0x8000000000000000;
        if (-1 < (long)auStack_138[0]) {
          uVar28 = 2;
        }
        if (uVar28 != 0) {
          if ((uVar28 == 1) || (uVar28 != 2)) {
            if (auStack_138[1] == 0) goto LAB_101263ac8;
            lVar18 = 0x10;
          }
          else {
            if (auStack_138[0] != 0) {
              _free(auStack_138[1]);
            }
            if ((auStack_138[3] & 0x7fffffffffffffff) == 0) goto LAB_101263ac8;
            lVar18 = 0x20;
          }
          _free(*(undefined8 *)((long)auStack_138 + lVar18));
        }
      }
      goto LAB_101263ac8;
    }
    bStack_90 = 0xad;
    bStack_8f = 0xab;
    uStack_8e = 0x108ca;
    uStack_88 = 6;
    uStack_87 = 0;
    uStack_d0 = &bStack_90;
    pbStack_c8 = &DAT_100c7b3a0;
    uVar17 = FUN_108856088(s_missing_field_____108ac28f7,&uStack_d0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar17;
  }
  if (uVar28 != 0) {
    _free(uStack_1d0);
  }
  FUN_100d34830(&pbStack_180);
  if (bStack_1a0 != 0x16) {
    FUN_100e077ec(&bStack_1a0);
  }
LAB_101263ac8:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

