
void FUN_1012d816c(undefined8 *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int *piVar6;
  uint *puVar7;
  undefined *puVar8;
  code *pcVar9;
  bool bVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long lVar13;
  byte *unaff_x21;
  undefined *puVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
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
  
  bVar5 = *param_2;
  if (bVar5 != 0x14) {
    if (bVar5 != 0x15) {
      uVar12 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20b2e0);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar12;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar11 = pbStack_d0 + lVar13;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_c8 = pbStack_d0;
    pbStack_b8 = pbVar11;
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar18 = 0;
      puVar16 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar17 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      puVar14 = (undefined *)0x8000000000000000;
      pbVar2 = pbStack_d0;
      pbStack_c8 = pbStack_d0;
      do {
        pbVar20 = pbVar2 + 0x40;
        bVar4 = *pbVar2;
        lVar19 = lVar18;
        pbVar15 = pbVar20;
        if (bVar4 == 0x16) break;
        uVar12 = *(undefined8 *)(pbVar2 + 0x10);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pbVar2 + 0x18);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar12;
        uVar12 = *(undefined8 *)(pbVar2 + 1);
        puVar16[1] = *(undefined8 *)(pbVar2 + 9);
        *puVar16 = uVar12;
        pbStack_e8 = *(byte **)(pbVar2 + 0x28);
        pbStack_f0 = *(byte **)(pbVar2 + 0x20);
        pbStack_d8 = *(byte **)(pbVar2 + 0x38);
        puStack_e0 = *(undefined **)(pbVar2 + 0x30);
        piVar6 = (int *)CONCAT71(uStack_7f,uStack_80);
        puVar7 = (uint *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar4;
        if (bVar4 < 0xd) {
          if (bVar4 != 1) {
            if (bVar4 == 4) {
              bVar10 = piVar6 == (int *)0x0;
              goto LAB_1012d83c8;
            }
            if (bVar4 == 0xc) {
              if (lStack_70 == 7) {
                uVar3 = *puVar7;
                uVar1 = *(uint *)((long)puVar7 + 3) ^ 0x64496e69;
                bVar10 = (uVar3 ^ 0x69676f6c) != 0 || uVar1 != 0;
                if (piVar6 == (int *)0x0) goto LAB_1012d83dc;
                _free();
                if ((uVar3 ^ 0x69676f6c) == 0 && uVar1 == 0) goto LAB_1012d8424;
              }
              else if (piVar6 != (int *)0x0) {
                _free();
              }
              goto LAB_1012d83e0;
            }
LAB_1012d874c:
            lStack_b0 = lVar18 + 1;
            pbStack_c8 = pbVar20;
            uVar12 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20cf20);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar12;
            puVar14 = (undefined *)((ulong)puVar14 & 0x7fffffffffffffff);
            goto joined_r0x0001012d8788;
          }
          bVar10 = cStack_87 == '\0';
LAB_1012d83c8:
          bVar10 = !bVar10;
LAB_1012d83d4:
          FUN_100e077ec(&bStack_88);
LAB_1012d83dc:
          if (!bVar10) goto LAB_1012d8424;
LAB_1012d83e0:
          bVar4 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar4 == 0x16) {
            lStack_b0 = lVar18 + 1;
            pbStack_c8 = pbVar20;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012d8748;
          }
          uVar12 = *puVar17;
          puVar16[1] = puVar17[1];
          *puVar16 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar17 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar12;
          bStack_88 = bVar4;
          FUN_100e077ec(&bStack_88);
        }
        else {
          if (bVar4 == 0xd) {
            if (puVar7 == (uint *)0x7) {
              bVar10 = false;
              if (*piVar6 == 0x69676f6c) {
                bVar10 = *(int *)((long)piVar6 + 3) == 0x64496e69;
              }
              goto LAB_1012d83c8;
            }
LAB_1012d83d0:
            bVar10 = true;
            goto LAB_1012d83d4;
          }
          if (bVar4 != 0xe) {
            if (bVar4 != 0xf) goto LAB_1012d874c;
            if ((((puVar7 != (uint *)0x7) || ((char)*piVar6 != 'l')) ||
                (*(char *)((long)piVar6 + 1) != 'o')) ||
               (((*(char *)((long)piVar6 + 2) != 'g' || (*(char *)((long)piVar6 + 3) != 'i')) ||
                (((char)piVar6[1] != 'n' || (*(char *)((long)piVar6 + 5) != 'I'))))))
            goto LAB_1012d83d0;
            bVar10 = *(char *)((long)piVar6 + 6) == 'd';
            goto LAB_1012d83c8;
          }
          if ((((lStack_70 == 7) && ((char)*puVar7 == 'l')) &&
              ((*(char *)((long)puVar7 + 1) == 'o' &&
               (((*(char *)((long)puVar7 + 2) == 'g' && (*(char *)((long)puVar7 + 3) == 'i')) &&
                ((char)puVar7[1] == 'n')))))) && (*(char *)((long)puVar7 + 5) == 'I')) {
            bVar10 = *(char *)((long)puVar7 + 6) != 'd';
          }
          else {
            bVar10 = true;
          }
          if (piVar6 == (int *)0x0) goto LAB_1012d83dc;
          _free();
          if (bVar10) goto LAB_1012d83e0;
LAB_1012d8424:
          if (puVar14 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar18 + 1;
            puStack_a0 = &UNK_108cc16af;
            pbStack_98 = (byte *)0x7;
            bStack_88 = (byte)&puStack_a0;
            cStack_87 = (char)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar20;
            uVar12 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar12;
joined_r0x0001012d8788:
            if (puVar14 != (undefined *)0x0) {
              _free(unaff_x21);
            }
            goto LAB_1012d85f8;
          }
          bVar4 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar4 == 0x16) {
            lStack_b0 = lVar18 + 1;
            pbStack_c8 = pbVar20;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012d8748:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1012d874c);
            (*pcVar9)();
          }
          uVar12 = *puVar17;
          puVar16[1] = puVar17[1];
          *puVar16 = uVar12;
          uVar12 = *(undefined8 *)((long)puVar17 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar12;
          bStack_88 = bVar4;
          FUN_1004b62d4(&puStack_a0,&bStack_88);
          if (puStack_a0 == (undefined *)0x8000000000000000) {
            lStack_b0 = lVar18 + 1;
            pbVar11 = pbStack_98;
            pbStack_c8 = pbVar20;
            goto LAB_1012d85f0;
          }
          uStack_f8 = uStack_90;
          unaff_x21 = pbStack_98;
          puVar14 = puStack_a0;
        }
        lVar18 = lVar18 + 1;
        lVar19 = (lVar13 - 0x40U >> 6) + 1;
        pbVar15 = pbVar11;
        pbVar2 = pbVar20;
      } while (pbVar20 != pbVar11);
      pbStack_c8 = pbVar15;
      lStack_b0 = lVar19;
      if (puVar14 != (undefined *)0x8000000000000000) {
        *param_1 = puVar14;
        param_1[1] = unaff_x21;
        param_1[2] = uStack_f8;
        FUN_100d34830(&pbStack_d0);
        if (pbVar11 != pbVar15) {
          bStack_88 = (byte)lVar19;
          cStack_87 = (char)((ulong)lVar19 >> 8);
          uStack_86 = (undefined6)((ulong)lVar19 >> 0x10);
          uVar12 = FUN_1087e422c(((ulong)((long)pbVar11 - (long)pbVar15) >> 6) + lVar19,&bStack_88,
                                 &UNK_10b23a190);
          *param_1 = 0x8000000000000000;
          param_1[1] = uVar12;
          if (puVar14 != (undefined *)0x0) {
            _free(unaff_x21);
          }
        }
        goto LAB_1012d8634;
      }
    }
    puStack_a0 = &UNK_108cc16af;
    pbStack_98 = (byte *)0x7;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar11 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_1012d85f0:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar11;
LAB_1012d85f8:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
    goto LAB_1012d8634;
  }
  puVar14 = *(undefined **)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  pbVar11 = pbVar2 + *(long *)(param_2 + 0x18) * 0x20;
  pbStack_d0 = (byte *)0x0;
  pbVar15 = pbVar2;
  pbStack_f0 = pbVar2;
  puStack_e0 = puVar14;
  pbStack_d8 = pbVar11;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_1012d84c8:
    pbStack_e8 = pbVar15;
    pbVar20 = (byte *)FUN_1087e422c(0,&UNK_10b232330,&UNK_10b20a590);
LAB_1012d84e0:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar20;
    lVar13 = ((ulong)((long)pbVar11 - (long)pbVar15) >> 5) + 1;
    while (lVar13 = lVar13 + -1, lVar13 != 0) {
      FUN_100e077ec(pbVar15);
      pbVar15 = pbVar15 + 0x20;
    }
  }
  else {
    pbVar15 = pbVar2 + 0x20;
    if (*pbVar2 == 0x16) goto LAB_1012d84c8;
    uVar12 = *(undefined8 *)(pbVar2 + 1);
    uStack_7f = (undefined7)*(undefined8 *)(pbVar2 + 9);
    cStack_87 = (char)uVar12;
    uStack_86 = (undefined6)((ulong)uVar12 >> 8);
    uStack_80 = (undefined1)((ulong)uVar12 >> 0x38);
    lStack_70 = *(long *)(pbVar2 + 0x18);
    uStack_78 = (undefined1)*(undefined8 *)(pbVar2 + 0x10);
    uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar2 + 0x10) >> 8);
    pbStack_d0 = (byte *)0x1;
    pbStack_e8 = pbVar15;
    bStack_88 = *pbVar2;
    FUN_1004b62d4(&puStack_a0,&bStack_88);
    pbVar20 = pbStack_98;
    puVar8 = puStack_a0;
    if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_1012d84e0;
    *param_1 = puStack_a0;
    param_1[1] = pbStack_98;
    param_1[2] = uStack_90;
    lVar13 = FUN_100fbc738(&pbStack_f0);
    if (lVar13 == 0) goto LAB_1012d8634;
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar13;
    pbVar2 = pbVar20;
    puVar14 = puVar8;
  }
  if (puVar14 != (undefined *)0x0) {
    _free(pbVar2);
  }
LAB_1012d8634:
  if ((bVar5 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

