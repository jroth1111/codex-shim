
/* WARNING: Type propagation algorithm not settling */

void FUN_1012f089c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long *plVar3;
  ulong *puVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  byte *unaff_x21;
  undefined *puVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined *puStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined *puStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  char cStack_87;
  undefined6 uStack_86;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  
  bVar2 = *param_2;
  if (bVar2 != 0x14) {
    if (bVar2 != 0x15) {
      uVar9 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20ab80);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar9;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar8 = pbStack_d0 + lVar10;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_c8 = pbStack_d0;
    pbStack_b8 = pbVar8;
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar17 = 0;
      puVar15 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar16 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      puVar13 = (undefined *)0x8000000000000000;
      pbVar1 = pbStack_d0;
      pbStack_c8 = pbStack_d0;
      do {
        pbVar19 = pbVar1 + 0x40;
        bVar12 = *pbVar1;
        lVar18 = lVar17;
        pbVar14 = pbVar19;
        if (bVar12 == 0x16) break;
        uVar9 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 1);
        puVar15[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar15 = uVar9;
        pbStack_e8 = *(byte **)(pbVar1 + 0x28);
        pbStack_f0 = *(byte **)(pbVar1 + 0x20);
        pbStack_d8 = *(byte **)(pbVar1 + 0x38);
        puStack_e0 = *(undefined **)(pbVar1 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_7f,uStack_80);
        puVar4 = (ulong *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar12;
        if (0xc < bVar12) {
          if (bVar12 == 0xd) {
            if (puVar4 == (ulong *)0x9) {
              bVar7 = false;
              if (*plVar3 == 0x49737365636f7270) {
                bVar7 = (char)plVar3[1] == 'd';
              }
              goto LAB_1012f0b38;
            }
LAB_1012f0b40:
            bVar7 = true;
LAB_1012f0b44:
            FUN_100e077ec(&bStack_88);
LAB_1012f0b4c:
            if (bVar7) goto LAB_1012f0b50;
LAB_1012f0b94:
            if (puVar13 == (undefined *)0x8000000000000000) {
              bVar12 = (byte)pbStack_f0;
              pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
              if (bVar12 == 0x16) {
                lStack_b0 = lVar17 + 1;
                pbStack_c8 = pbVar19;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012f0eb8:
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1012f0ebc);
                (*pcVar6)();
              }
              uVar9 = *puVar16;
              puVar15[1] = puVar16[1];
              *puVar15 = uVar9;
              uVar9 = *(undefined8 *)((long)puVar16 + 0xf);
              *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
              *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
              bStack_88 = bVar12;
              FUN_1004b62d4(&puStack_a0,&bStack_88);
              if (puStack_a0 != (undefined *)0x8000000000000000) {
                uStack_f8 = uStack_90;
                unaff_x21 = pbStack_98;
                puVar13 = puStack_a0;
                goto LAB_1012f093c;
              }
              lStack_b0 = lVar17 + 1;
              pbVar8 = pbStack_98;
              pbStack_c8 = pbVar19;
              goto LAB_1012f0d60;
            }
            lStack_b0 = lVar17 + 1;
            puStack_a0 = &UNK_108cbdf41;
            pbStack_98 = (byte *)0x9;
            bStack_88 = (byte)&puStack_a0;
            cStack_87 = (char)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar19;
            uVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar9;
          }
          else {
            if (bVar12 == 0xe) {
              if (((((lStack_70 == 9) && ((char)*puVar4 == 'p')) &&
                   (*(char *)((long)puVar4 + 1) == 'r')) &&
                  ((*(char *)((long)puVar4 + 2) == 'o' && (*(char *)((long)puVar4 + 3) == 'c')))) &&
                 (*(char *)((long)puVar4 + 4) == 'e')) {
                bVar7 = true;
                if (((*(char *)((long)puVar4 + 5) == 's') && (*(char *)((long)puVar4 + 6) == 's'))
                   && (*(char *)((long)puVar4 + 7) == 'I')) {
                  bVar7 = (char)puVar4[1] != 'd';
                }
              }
              else {
                bVar7 = true;
              }
              if (plVar3 == (long *)0x0) goto LAB_1012f0b4c;
              _free();
              if (bVar7) goto LAB_1012f0b50;
              goto LAB_1012f0b94;
            }
            if (bVar12 == 0xf) {
              if (((((puVar4 != (ulong *)0x9) || ((char)*plVar3 != 'p')) ||
                   (*(char *)((long)plVar3 + 1) != 'r')) ||
                  ((*(char *)((long)plVar3 + 2) != 'o' || (*(char *)((long)plVar3 + 3) != 'c')))) ||
                 (*(char *)((long)plVar3 + 4) != 'e')) goto LAB_1012f0b40;
              bVar7 = true;
              if (((*(char *)((long)plVar3 + 5) == 's') && (*(char *)((long)plVar3 + 6) == 's')) &&
                 (*(char *)((long)plVar3 + 7) == 'I')) {
                bVar7 = (char)plVar3[1] == 'd';
                goto LAB_1012f0b38;
              }
              goto LAB_1012f0b44;
            }
LAB_1012f0ebc:
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar19;
            uVar9 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b211640);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar9;
            puVar13 = (undefined *)((ulong)puVar13 & 0x7fffffffffffffff);
          }
          if (puVar13 != (undefined *)0x0) {
            _free(unaff_x21);
          }
          goto LAB_1012f0d68;
        }
        if (bVar12 == 1) {
          bVar7 = cStack_87 == '\0';
LAB_1012f0b38:
          bVar7 = !bVar7;
          goto LAB_1012f0b44;
        }
        if (bVar12 == 4) {
          bVar7 = plVar3 == (long *)0x0;
          goto LAB_1012f0b38;
        }
        if (bVar12 != 0xc) goto LAB_1012f0ebc;
        if (lStack_70 == 9) {
          uVar11 = *puVar4;
          bVar12 = (byte)puVar4[1] ^ 100;
          bVar7 = (uVar11 ^ 0x49737365636f7270) != 0 || bVar12 != 0;
          if (plVar3 == (long *)0x0) goto LAB_1012f0b4c;
          _free();
          if ((uVar11 ^ 0x49737365636f7270) == 0 && bVar12 == 0) goto LAB_1012f0b94;
        }
        else if (plVar3 != (long *)0x0) {
          _free();
        }
LAB_1012f0b50:
        bVar12 = (byte)pbStack_f0;
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar12 == 0x16) {
          lStack_b0 = lVar17 + 1;
          pbStack_c8 = pbVar19;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1012f0eb8;
        }
        uVar9 = *puVar16;
        puVar15[1] = puVar16[1];
        *puVar15 = uVar9;
        uVar9 = *(undefined8 *)((long)puVar16 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
        bStack_88 = bVar12;
        FUN_100e077ec(&bStack_88);
LAB_1012f093c:
        lVar17 = lVar17 + 1;
        lVar18 = (lVar10 - 0x40U >> 6) + 1;
        pbVar14 = pbVar8;
        pbVar1 = pbVar19;
      } while (pbVar19 != pbVar8);
      pbStack_c8 = pbVar14;
      lStack_b0 = lVar18;
      if (puVar13 != (undefined *)0x8000000000000000) {
        *param_1 = puVar13;
        param_1[1] = unaff_x21;
        param_1[2] = uStack_f8;
        FUN_100d34830(&pbStack_d0);
        if (pbVar8 != pbVar14) {
          bStack_88 = (byte)lVar18;
          cStack_87 = (char)((ulong)lVar18 >> 8);
          uStack_86 = (undefined6)((ulong)lVar18 >> 0x10);
          uVar9 = FUN_1087e422c(((ulong)((long)pbVar8 - (long)pbVar14) >> 6) + lVar18,&bStack_88,
                                &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar9;
          if (puVar13 != (undefined *)0x0) {
            _free(unaff_x21);
          }
        }
        goto LAB_1012f0da4;
      }
    }
    puStack_a0 = &UNK_108cbdf41;
    pbStack_98 = (byte *)0x9;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar8 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_1012f0d60:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar8;
LAB_1012f0d68:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
    goto LAB_1012f0da4;
  }
  puVar13 = *(undefined **)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  pbVar8 = pbVar1 + *(long *)(param_2 + 0x18) * 0x20;
  pbStack_d0 = (byte *)0x0;
  pbVar14 = pbVar1;
  pbStack_f0 = pbVar1;
  puStack_e0 = puVar13;
  pbStack_d8 = pbVar8;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_1012f0c38:
    pbStack_e8 = pbVar14;
    pbVar19 = (byte *)FUN_1087e422c(0,&UNK_10b232990,&UNK_10b20a590);
LAB_1012f0c50:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar19;
    lVar10 = ((ulong)((long)pbVar8 - (long)pbVar14) >> 5) + 1;
    while (lVar10 = lVar10 + -1, lVar10 != 0) {
      FUN_100e077ec(pbVar14);
      pbVar14 = pbVar14 + 0x20;
    }
  }
  else {
    pbVar14 = pbVar1 + 0x20;
    if (*pbVar1 == 0x16) goto LAB_1012f0c38;
    uVar9 = *(undefined8 *)(pbVar1 + 1);
    uStack_7f = (undefined7)*(undefined8 *)(pbVar1 + 9);
    cStack_87 = (char)uVar9;
    uStack_86 = (undefined6)((ulong)uVar9 >> 8);
    uStack_80 = (undefined1)((ulong)uVar9 >> 0x38);
    lStack_70 = *(long *)(pbVar1 + 0x18);
    uStack_78 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
    uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x10) >> 8);
    pbStack_d0 = (byte *)0x1;
    pbStack_e8 = pbVar14;
    bStack_88 = *pbVar1;
    FUN_1004b62d4(&puStack_a0,&bStack_88);
    pbVar19 = pbStack_98;
    puVar5 = puStack_a0;
    if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_1012f0c50;
    *param_1 = puStack_a0;
    param_1[1] = pbStack_98;
    param_1[2] = uStack_90;
    lVar10 = FUN_100fbc738(&pbStack_f0);
    if (lVar10 == 0) goto LAB_1012f0da4;
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar10;
    pbVar1 = pbVar19;
    puVar13 = puVar5;
  }
  if (puVar13 != (undefined *)0x0) {
    _free(pbVar1);
  }
LAB_1012f0da4:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

