
/* WARNING: Type propagation algorithm not settling */

void FUN_10122ae84(undefined8 *param_1,byte *param_2)

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
      uVar9 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20b780);
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
        if (bVar12 < 0xd) {
          if (bVar12 == 1) {
            bVar7 = cStack_87 == '\0';
LAB_10122b124:
            bVar7 = !bVar7;
            goto LAB_10122b130;
          }
          if (bVar12 == 4) {
            bVar7 = plVar3 == (long *)0x0;
            goto LAB_10122b124;
          }
          if (bVar12 != 0xc) goto LAB_10122b4b4;
          if (lStack_70 != 9) {
            if (plVar3 != (long *)0x0) {
              _free();
            }
            goto LAB_10122b13c;
          }
          uVar11 = *puVar4;
          bVar12 = (byte)puVar4[1] ^ 100;
          bVar7 = (uVar11 ^ 0x496e6f6973736573) != 0 || bVar12 != 0;
          if (plVar3 != (long *)0x0) {
            _free();
            if ((uVar11 ^ 0x496e6f6973736573) != 0 || bVar12 != 0) goto LAB_10122b13c;
            goto LAB_10122b198;
          }
LAB_10122b138:
          if (bVar7) goto LAB_10122b13c;
LAB_10122b198:
          if (puVar13 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar17 + 1;
            puStack_a0 = &UNK_108cc0216;
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
joined_r0x00010122b4f0:
            if (puVar13 != (undefined *)0x0) {
              _free(unaff_x21);
            }
            goto LAB_10122b360;
          }
          bVar12 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar12 == 0x16) {
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10122b4b0;
          }
          uVar9 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
          bStack_88 = bVar12;
          FUN_1004b62d4(&puStack_a0,&bStack_88);
          if (puStack_a0 == (undefined *)0x8000000000000000) {
            lStack_b0 = lVar17 + 1;
            pbVar8 = pbStack_98;
            pbStack_c8 = pbVar19;
            goto LAB_10122b358;
          }
          uStack_f8 = uStack_90;
          unaff_x21 = pbStack_98;
          puVar13 = puStack_a0;
        }
        else {
          if (bVar12 == 0xd) {
            if (puVar4 == (ulong *)0x9) {
              bVar7 = false;
              if (*plVar3 == 0x496e6f6973736573) {
                bVar7 = (char)plVar3[1] == 'd';
              }
              goto LAB_10122b124;
            }
LAB_10122b12c:
            bVar7 = true;
LAB_10122b130:
            FUN_100e077ec(&bStack_88);
            goto LAB_10122b138;
          }
          if (bVar12 != 0xe) {
            if (bVar12 == 0xf) {
              if (((puVar4 != (ulong *)0x9) || ((char)*plVar3 != 's')) ||
                 (*(char *)((long)plVar3 + 1) != 'e')) goto LAB_10122b12c;
              bVar7 = true;
              if ((((*(char *)((long)plVar3 + 2) == 's') && (*(char *)((long)plVar3 + 3) == 's')) &&
                  ((*(char *)((long)plVar3 + 4) == 'i' &&
                   ((*(char *)((long)plVar3 + 5) == 'o' && (*(char *)((long)plVar3 + 6) == 'n'))))))
                 && (*(char *)((long)plVar3 + 7) == 'I')) {
                bVar7 = (char)plVar3[1] == 'd';
                goto LAB_10122b124;
              }
              goto LAB_10122b130;
            }
LAB_10122b4b4:
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar19;
            uVar9 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20cf60);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar9;
            puVar13 = (undefined *)((ulong)puVar13 & 0x7fffffffffffffff);
            goto joined_r0x00010122b4f0;
          }
          if (lStack_70 == 9) {
            if ((char)*puVar4 == 's') {
              if (*(char *)((long)puVar4 + 1) != 'e') goto LAB_10122b170;
              if (((((*(char *)((long)puVar4 + 2) != 's') || (*(char *)((long)puVar4 + 3) != 's'))
                   || (*(char *)((long)puVar4 + 4) != 'i')) ||
                  ((*(char *)((long)puVar4 + 5) != 'o' || (*(char *)((long)puVar4 + 6) != 'n')))) ||
                 (*(char *)((long)puVar4 + 7) != 'I')) goto LAB_10122b18c;
              bVar7 = (char)puVar4[1] != 'd';
            }
            else {
LAB_10122b18c:
              bVar7 = true;
            }
          }
          else {
LAB_10122b170:
            bVar7 = true;
          }
          if (plVar3 == (long *)0x0) goto LAB_10122b138;
          _free();
          if (!bVar7) goto LAB_10122b198;
LAB_10122b13c:
          bVar12 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar12 == 0x16) {
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10122b4b0:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10122b4b4);
            (*pcVar6)();
          }
          uVar9 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar9;
          uVar9 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar9;
          bStack_88 = bVar12;
          FUN_100e077ec(&bStack_88);
        }
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
        goto LAB_10122b39c;
      }
    }
    puStack_a0 = &UNK_108cc0216;
    pbStack_98 = (byte *)0x9;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar8 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_10122b358:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar8;
LAB_10122b360:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
    goto LAB_10122b39c;
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
LAB_10122b230:
    pbStack_e8 = pbVar14;
    pbVar19 = (byte *)FUN_1087e422c(0,&UNK_10b2321b0,&UNK_10b20a590);
LAB_10122b248:
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
    if (*pbVar1 == 0x16) goto LAB_10122b230;
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
    if (puStack_a0 == (undefined *)0x8000000000000000) goto LAB_10122b248;
    *param_1 = puStack_a0;
    param_1[1] = pbStack_98;
    param_1[2] = uStack_90;
    lVar10 = FUN_100fbc738(&pbStack_f0);
    if (lVar10 == 0) goto LAB_10122b39c;
    *param_1 = 0x8000000000000000;
    param_1[1] = lVar10;
    pbVar1 = pbVar19;
    puVar13 = puVar5;
  }
  if (puVar13 != (undefined *)0x0) {
    _free(pbVar1);
  }
LAB_10122b39c:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

