
/* WARNING: Type propagation algorithm not settling */

void FUN_10138086c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  code *pcVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  long lVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined *puStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long lStack_78;
  undefined1 auStack_69 [9];
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    puVar17 = *(undefined **)(param_2 + 8);
    pbVar16 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar16 + lVar12 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar15 = pbVar16;
    pbStack_f0 = pbVar16;
    puStack_e0 = puVar17;
    pbStack_d8 = pbVar1;
    if (lVar12 == 0) {
LAB_101380cd4:
      pbStack_e8 = pbVar15;
      pbVar14 = (byte *)FUN_1087e422c(0,&UNK_10b2324a0,&UNK_10b20a590);
LAB_101380cf0:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar14;
LAB_101380cf8:
      lVar12 = ((ulong)((long)pbVar1 - (long)pbVar15) >> 5) + 1;
      while (lVar12 = lVar12 + -1, pbVar8 = pbVar16, puVar6 = puVar17, lVar12 != 0) {
        FUN_100e077ec(pbVar15);
        pbVar15 = pbVar15 + 0x20;
      }
    }
    else {
      pbVar15 = pbVar16 + 0x20;
      if (*pbVar16 == 0x16) goto LAB_101380cd4;
      uVar9 = *(undefined8 *)(pbVar16 + 1);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar16 + 9);
      cStack_8f = (char)uVar9;
      uStack_8e = (undefined6)((ulong)uVar9 >> 8);
      uStack_88 = (undefined1)((ulong)uVar9 >> 0x38);
      lStack_78 = *(long *)(pbVar16 + 0x18);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar16 + 0x10);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar16 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar15;
      bStack_90 = *pbVar16;
      FUN_1004b62d4(&uStack_a8,&bStack_90);
      uVar9 = uStack_98;
      pbVar14 = pbStack_a0;
      puVar19 = uStack_a8;
      if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_101380cf0;
      if (lVar12 == 1) {
LAB_101380d9c:
        pbVar8 = (byte *)FUN_1087e422c(1,&UNK_10b2324a0,&UNK_10b20a590);
LAB_101380db4:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar8;
        if (puVar19 != (undefined *)0x0) {
          _free(pbVar14);
        }
        goto LAB_101380cf8;
      }
      pbVar15 = pbVar16 + 0x40;
      pbStack_e8 = pbVar15;
      if (pbVar16[0x20] == 0x16) goto LAB_101380d9c;
      uVar22 = *(undefined8 *)(pbVar16 + 0x21);
      uStack_87 = (undefined7)*(undefined8 *)(pbVar16 + 0x29);
      cStack_8f = (char)uVar22;
      uStack_8e = (undefined6)((ulong)uVar22 >> 8);
      uStack_88 = (undefined1)((ulong)uVar22 >> 0x38);
      lStack_78 = *(long *)(pbVar16 + 0x38);
      uStack_80 = (undefined1)*(undefined8 *)(pbVar16 + 0x30);
      uStack_7f = (undefined7)((ulong)*(undefined8 *)(pbVar16 + 0x30) >> 8);
      pbStack_d0 = (byte *)0x2;
      bStack_90 = pbVar16[0x20];
      FUN_1004b62d4(&uStack_a8,&bStack_90);
      pbVar8 = pbStack_a0;
      puVar6 = uStack_a8;
      if (uStack_a8 == (undefined *)0x8000000000000000) goto LAB_101380db4;
      *param_1 = puVar19;
      param_1[1] = pbVar14;
      param_1[2] = uVar9;
      param_1[3] = uStack_a8;
      param_1[4] = pbStack_a0;
      param_1[5] = uStack_98;
      lVar12 = FUN_100fbc738(&pbStack_f0);
      if (lVar12 == 0) goto LAB_101380f7c;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar12;
      if (puVar19 != (undefined *)0x0) {
        _free(pbVar14);
      }
    }
    if (puVar6 != (undefined *)0x0) {
      _free(pbVar8);
    }
    goto LAB_101380f7c;
  }
  if (bVar3 != 0x15) {
    uVar9 = FUN_108855b04(param_2,auStack_69,&UNK_10b20af80);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    return;
  }
  uStack_c0 = *(undefined8 *)(param_2 + 8);
  pbStack_d0 = *(byte **)(param_2 + 0x10);
  lVar12 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar15 = pbStack_d0 + lVar12;
  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
  lStack_b0 = 0;
  pbStack_b8 = pbVar15;
  if (*(long *)(param_2 + 0x18) == 0) {
    puVar17 = (undefined *)0x0;
    pbStack_c8 = pbStack_d0;
LAB_101380dfc:
    uStack_a8 = &UNK_108cc057b;
    pbStack_a0 = (byte *)0xd;
    bStack_90 = (byte)&uStack_a8;
    cStack_8f = (char)((ulong)&uStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    puVar19 = (undefined *)0x0;
    uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
LAB_101380e30:
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
    puVar17 = (undefined *)((ulong)puVar17 & 0x7fffffffffffffff);
joined_r0x000101380f44:
    if (puVar17 != (undefined *)0x0) {
      _free(pbStack_108);
    }
LAB_101380f50:
    puVar19 = (undefined *)((ulong)puVar19 & 0x7fffffffffffffff);
  }
  else {
    lVar20 = 0;
    puVar13 = (undefined8 *)((ulong)&bStack_90 | 1);
    puVar18 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    puVar19 = (undefined *)0x8000000000000000;
    puVar17 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_d0;
    pbStack_c8 = pbStack_d0;
    do {
      pbVar14 = pbVar1 + 0x40;
      bVar2 = *pbVar1;
      pbVar16 = pbVar14;
      lVar21 = lVar20;
      if (bVar2 == 0x16) break;
      uVar9 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar13 + 0xf) = uVar9;
      uVar9 = *(undefined8 *)(pbVar1 + 1);
      puVar13[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar13 = uVar9;
      pbStack_e8 = *(byte **)(pbVar1 + 0x28);
      pbStack_f0 = *(byte **)(pbVar1 + 0x20);
      pbStack_d8 = *(byte **)(pbVar1 + 0x38);
      puStack_e0 = *(undefined **)(pbVar1 + 0x30);
      plVar4 = (long *)CONCAT71(uStack_87,uStack_88);
      plVar5 = (long *)CONCAT71(uStack_7f,uStack_80);
      bStack_90 = bVar2;
      if (bVar2 < 0xd) {
        if (bVar2 == 1) {
          uVar11 = 1;
          if (cStack_8f != '\x01') {
            uVar11 = 2;
          }
          uVar10 = 0;
          if (cStack_8f != '\0') {
            uVar10 = uVar11;
          }
LAB_101380b3c:
          uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar10) << 8);
LAB_101380b44:
          FUN_100e077ec(&bStack_90);
          pbVar1 = pbStack_f0;
          puVar6 = uStack_a8;
          goto joined_r0x000101380b50;
        }
        if (bVar2 == 4) {
          uVar11 = 1;
          if (plVar4 != (long *)0x1) {
            uVar11 = 2;
          }
          uVar10 = 0;
          if (plVar4 != (long *)0x0) {
            uVar10 = uVar11;
          }
          goto LAB_101380b3c;
        }
        if (bVar2 == 0xc) {
          if (lStack_78 == 0xd) {
            if (*plVar5 == 0x6d6e6f7269766e65 && *(long *)((long)plVar5 + 5) == 0x6449746e656d6e6f)
            {
              uStack_a8 = (undefined *)((ulong)uStack_a8._2_6_ << 0x10);
            }
            else {
              uVar10 = 1;
              if (*plVar5 != 0x7672655363657865 || *(long *)((long)plVar5 + 5) != 0x6c72557265767265
                 ) {
                uVar10 = 2;
              }
              uStack_a8 = (undefined *)((ulong)CONCAT61(uStack_a8._2_6_,uVar10) << 8);
            }
          }
          else {
            uStack_a8 = (undefined *)CONCAT62(uStack_a8._2_6_,0x200);
          }
          goto joined_r0x000101380b04;
        }
LAB_101380c60:
        pbStack_a0 = (byte *)FUN_108855b04(&bStack_90,auStack_69,&UNK_10b20ff20);
        uStack_a8 = (undefined *)CONCAT71(uStack_a8._1_7_,1);
LAB_101380f28:
        lStack_b0 = lVar20 + 1;
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_a0;
        puVar17 = (undefined *)((ulong)puVar17 & 0x7fffffffffffffff);
        pbStack_c8 = pbVar14;
        goto joined_r0x000101380f44;
      }
      if (bVar2 == 0xd) {
        if (plVar5 == (long *)0xd) {
          if (*plVar4 == 0x6d6e6f7269766e65 && *(long *)((long)plVar4 + 5) == 0x6449746e656d6e6f) {
            uVar10 = 0;
          }
          else {
            uVar10 = 1;
            if (*plVar4 != 0x7672655363657865 || *(long *)((long)plVar4 + 5) != 0x6c72557265767265)
            {
              uVar10 = 2;
            }
          }
        }
        else {
          uVar10 = 2;
        }
        goto LAB_101380b3c;
      }
      if (bVar2 != 0xe) {
        if (bVar2 != 0xf) goto LAB_101380c60;
        func_0x000100bdd900(&uStack_a8,plVar4,plVar5);
        goto LAB_101380b44;
      }
      func_0x000100bdd900(&uStack_a8,plVar5);
joined_r0x000101380b04:
      pbVar1 = pbStack_f0;
      puVar6 = uStack_a8;
      if (plVar4 != (long *)0x0) {
        _free(plVar5);
        pbVar1 = pbStack_f0;
        puVar6 = uStack_a8;
      }
joined_r0x000101380b50:
      pbStack_f0 = pbVar1;
      uStack_a8 = puVar6;
      if (((ulong)puVar6 & 1) != 0) goto LAB_101380f28;
      uStack_a8._1_1_ = (char)((ulong)puVar6 >> 8);
      pbStack_f0._0_1_ = (byte)pbVar1;
      bVar2 = (byte)pbStack_f0;
      pbStack_f0._1_7_ = (undefined7)((ulong)pbVar1 >> 8);
      if (uStack_a8._1_1_ == '\0') {
        if (puVar19 != (undefined *)0x8000000000000000) {
          lStack_b0 = lVar20 + 1;
          uStack_a8 = &UNK_108cc057b;
          pbStack_a0 = (byte *)0xd;
          bStack_90 = (byte)&uStack_a8;
          cStack_8f = (char)((ulong)&uStack_a8 >> 8);
          uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
          uStack_88 = 0xa0;
          uStack_87 = 0x100c7b3;
          pbStack_c8 = pbVar14;
          uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
          goto LAB_101380e30;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_b0 = lVar20 + 1;
          pbStack_c8 = pbVar14;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013811a8;
        }
        uVar9 = *puVar18;
        puVar13[1] = puVar18[1];
        *puVar13 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar18 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar9;
        bStack_90 = bVar2;
        FUN_1004b62d4(&uStack_a8,&bStack_90);
        if (uStack_a8 == (undefined *)0x8000000000000000) {
          puVar19 = (undefined *)0x0;
          goto LAB_101380f28;
        }
        pbStack_100 = pbStack_a0;
        uStack_110 = uStack_98;
        puVar19 = uStack_a8;
      }
      else if (uStack_a8._1_1_ == '\x01') {
        if (puVar17 != (undefined *)0x8000000000000000) {
          lStack_b0 = lVar20 + 1;
          uStack_a8 = &UNK_108cc1960;
          pbStack_a0 = (byte *)0xd;
          bStack_90 = (byte)&uStack_a8;
          cStack_8f = (char)((ulong)&uStack_a8 >> 8);
          uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
          uStack_88 = 0xa0;
          uStack_87 = 0x100c7b3;
          pbStack_c8 = pbVar14;
          uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_90);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar9;
          goto joined_r0x000101380f44;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_b0 = lVar20 + 1;
          pbStack_c8 = pbVar14;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013811a8;
        }
        uVar9 = *puVar18;
        puVar13[1] = puVar18[1];
        *puVar13 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar18 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar9;
        bStack_90 = bVar2;
        FUN_1004b62d4(&uStack_a8,&bStack_90);
        if (uStack_a8 == (undefined *)0x8000000000000000) {
          lStack_b0 = lVar20 + 1;
          *param_1 = 0x8000000000000000;
          param_1[1] = pbStack_a0;
          pbStack_c8 = pbVar14;
          goto LAB_101380f50;
        }
        pbStack_108 = pbStack_a0;
        uStack_118 = uStack_98;
        puVar17 = uStack_a8;
      }
      else {
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_b0 = lVar20 + 1;
          pbStack_c8 = pbVar14;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013811a8:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1013811ac);
          (*pcVar7)();
        }
        uVar9 = *puVar18;
        puVar13[1] = puVar18[1];
        *puVar13 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar18 + 0xf);
        *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
        *(undefined8 *)((long)puVar13 + 0xf) = uVar9;
        bStack_90 = bVar2;
        FUN_100e077ec(&bStack_90);
      }
      lVar20 = lVar20 + 1;
      pbVar16 = pbVar15;
      lVar21 = (lVar12 - 0x40U >> 6) + 1;
      pbVar1 = pbVar14;
    } while (pbVar14 != pbVar15);
    pbStack_c8 = pbVar16;
    lStack_b0 = lVar21;
    if (puVar19 == (undefined *)0x8000000000000000) goto LAB_101380dfc;
    if (puVar17 != (undefined *)0x8000000000000000) {
      *param_1 = puVar19;
      param_1[1] = pbStack_100;
      param_1[2] = uStack_110;
      param_1[3] = puVar17;
      param_1[4] = pbStack_108;
      param_1[5] = uStack_118;
      FUN_100d34830(&pbStack_d0);
      if (pbVar15 != pbVar16) {
        bStack_90 = (byte)lVar21;
        cStack_8f = (char)((ulong)lVar21 >> 8);
        uStack_8e = (undefined6)((ulong)lVar21 >> 0x10);
        uVar9 = FUN_1087e422c(((ulong)((long)pbVar15 - (long)pbVar16) >> 6) + lVar21,&bStack_90,
                              &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar9;
        if (puVar19 != (undefined *)0x0) {
          _free(pbStack_100);
        }
        if (puVar17 != (undefined *)0x0) {
          _free(pbStack_108);
        }
      }
      goto LAB_101380f7c;
    }
    uStack_a8 = &UNK_108cc1960;
    pbStack_a0 = (byte *)0xd;
    bStack_90 = (byte)&uStack_a8;
    cStack_8f = (char)((ulong)&uStack_a8 >> 8);
    uStack_8e = (undefined6)((ulong)&uStack_a8 >> 0x10);
    uStack_88 = 0xa0;
    uStack_87 = 0x100c7b3;
    uVar9 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_90);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar9;
  }
  if (puVar19 != (undefined *)0x0) {
    _free(pbStack_100);
  }
  FUN_100d34830(&pbStack_d0);
  if ((byte)pbStack_f0 != '\x16') {
    FUN_100e077ec(&pbStack_f0);
  }
LAB_101380f7c:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

