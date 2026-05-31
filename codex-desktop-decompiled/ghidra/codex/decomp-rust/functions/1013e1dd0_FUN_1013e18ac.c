
/* WARNING: Type propagation algorithm not settling */

void FUN_1013e18ac(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  ulong *puVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
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
  
  bVar2 = *param_2;
  if (bVar2 == 0x14) {
    puVar14 = *(undefined **)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    pbVar9 = unaff_x21 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar15 = unaff_x21;
    pbStack_f0 = unaff_x21;
    puStack_e0 = puVar14;
    pbStack_d8 = pbVar9;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_1013e1cbc:
      pbStack_e8 = pbVar15;
      pbVar8 = (byte *)FUN_1087e422c(0,&UNK_10b231c08,&UNK_10b20a590);
    }
    else {
      pbVar15 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_1013e1cbc;
      uVar10 = *(undefined8 *)(unaff_x21 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 9);
      cStack_87 = (char)uVar10;
      uStack_86 = (undefined6)((ulong)uVar10 >> 8);
      uStack_80 = (undefined1)((ulong)uVar10 >> 0x38);
      lStack_70 = *(long *)(unaff_x21 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar15;
      bStack_88 = *unaff_x21;
      FUN_1004b62d4(&puStack_a0,&bStack_88);
      pbVar8 = pbStack_98;
      puVar5 = puStack_a0;
      if (puStack_a0 != (undefined *)0x8000000000000000) {
        *param_1 = puStack_a0;
        param_1[1] = pbStack_98;
        param_1[2] = uStack_90;
        lVar11 = FUN_100fbc738(&pbStack_f0);
        if (lVar11 == 0) goto LAB_1013e1e34;
        *param_1 = 0x8000000000000000;
        param_1[1] = lVar11;
        unaff_x21 = pbVar8;
        puVar14 = puVar5;
        goto joined_r0x0001013e1d74;
      }
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar8;
    lVar11 = ((ulong)((long)pbVar9 - (long)pbVar15) >> 5) + 1;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      FUN_100e077ec(pbVar15);
      pbVar15 = pbVar15 + 0x20;
    }
joined_r0x0001013e1d74:
    if (puVar14 != (undefined *)0x0) {
      _free(unaff_x21);
    }
  }
  else {
    if (bVar2 != 0x15) {
      uVar10 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20c260);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar10;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar11 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar9 = pbStack_d0 + lVar11;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_c8 = pbStack_d0;
    pbStack_b8 = pbVar9;
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar18 = 0;
      puVar16 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar17 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      puVar14 = (undefined *)0x8000000000000000;
      pbVar15 = pbStack_d0;
      do {
        pbVar20 = pbVar15 + 0x40;
        bVar1 = *pbVar15;
        lVar19 = lVar18;
        pbVar8 = pbVar20;
        if (bVar1 == 0x16) break;
        uVar10 = *(undefined8 *)(pbVar15 + 0x10);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pbVar15 + 0x18);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar10;
        uVar10 = *(undefined8 *)(pbVar15 + 1);
        puVar16[1] = *(undefined8 *)(pbVar15 + 9);
        *puVar16 = uVar10;
        pbStack_e8 = *(byte **)(pbVar15 + 0x28);
        pbStack_f0 = *(byte **)(pbVar15 + 0x20);
        pbStack_d8 = *(byte **)(pbVar15 + 0x38);
        puStack_e0 = *(undefined **)(pbVar15 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_7f,uStack_80);
        puVar4 = (ulong *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar1;
        if (0xc < bVar1) {
          if (bVar1 == 0xd) {
            if (puVar4 == (ulong *)0xd) {
              bVar7 = false;
              if (*plVar3 == 0x48737365636f7270) {
                bVar7 = *(long *)((long)plVar3 + 5) == 0x656c646e61487373;
              }
              goto LAB_1013e1bc0;
            }
LAB_1013e1bc8:
            bVar7 = true;
LAB_1013e1bcc:
            FUN_100e077ec(&bStack_88);
LAB_1013e1bd4:
            if (bVar7) goto LAB_1013e1bd8;
LAB_1013e1c1c:
            if (puVar14 == (undefined *)0x8000000000000000) {
              bVar1 = (byte)pbStack_f0;
              pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
              if (bVar1 == 0x16) {
                lStack_b0 = lVar18 + 1;
                pbStack_c8 = pbVar20;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1013e1f4c:
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1013e1f50);
                (*pcVar6)();
              }
              uVar10 = *puVar17;
              puVar16[1] = puVar17[1];
              *puVar16 = uVar10;
              uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
              *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
              *(undefined8 *)((long)puVar16 + 0xf) = uVar10;
              bStack_88 = bVar1;
              FUN_1004b62d4(&puStack_a0,&bStack_88);
              if (puStack_a0 != (undefined *)0x8000000000000000) {
                uStack_f8 = uStack_90;
                unaff_x21 = pbStack_98;
                puVar14 = puStack_a0;
                goto LAB_1013e194c;
              }
              lStack_b0 = lVar18 + 1;
              pbVar9 = pbStack_98;
              pbStack_c8 = pbVar20;
              goto LAB_1013e1de4;
            }
            lStack_b0 = lVar18 + 1;
            puStack_a0 = &UNK_108cc0902;
            pbStack_98 = (byte *)0xd;
            bStack_88 = (byte)&puStack_a0;
            cStack_87 = (char)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar20;
            uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar10;
          }
          else {
            if (bVar1 == 0xe) {
              if (((lStack_70 == 0xd) && ((char)*puVar4 == 'p')) &&
                 (((*(char *)((long)puVar4 + 1) == 'r' &&
                   ((*(char *)((long)puVar4 + 2) == 'o' && (*(char *)((long)puVar4 + 3) == 'c'))))
                  && (*(char *)((long)puVar4 + 4) == 'e')))) {
                bVar7 = true;
                if ((((*(char *)((long)puVar4 + 5) == 's') && (*(char *)((long)puVar4 + 6) == 's'))
                    && (*(char *)((long)puVar4 + 7) == 'H')) &&
                   ((((char)puVar4[1] == 'a' && (*(char *)((long)puVar4 + 9) == 'n')) &&
                    ((*(char *)((long)puVar4 + 10) == 'd' && (*(char *)((long)puVar4 + 0xb) == 'l'))
                    )))) {
                  bVar7 = *(char *)((long)puVar4 + 0xc) != 'e';
                }
              }
              else {
                bVar7 = true;
              }
              if (plVar3 == (long *)0x0) goto LAB_1013e1bd4;
              _free();
              if (bVar7) goto LAB_1013e1bd8;
              goto LAB_1013e1c1c;
            }
            if (bVar1 == 0xf) {
              if ((((puVar4 != (ulong *)0xd) || ((char)*plVar3 != 'p')) ||
                  (*(char *)((long)plVar3 + 1) != 'r')) ||
                 (((*(char *)((long)plVar3 + 2) != 'o' || (*(char *)((long)plVar3 + 3) != 'c')) ||
                  (*(char *)((long)plVar3 + 4) != 'e')))) goto LAB_1013e1bc8;
              bVar7 = true;
              if (((*(char *)((long)plVar3 + 5) == 's') && (*(char *)((long)plVar3 + 6) == 's')) &&
                 ((*(char *)((long)plVar3 + 7) == 'H' &&
                  (((((char)plVar3[1] == 'a' && (*(char *)((long)plVar3 + 9) == 'n')) &&
                    (*(char *)((long)plVar3 + 10) == 'd')) && (*(char *)((long)plVar3 + 0xb) == 'l')
                   ))))) {
                bVar7 = *(char *)((long)plVar3 + 0xc) == 'e';
                goto LAB_1013e1bc0;
              }
              goto LAB_1013e1bcc;
            }
LAB_1013e1f50:
            lStack_b0 = lVar18 + 1;
            pbStack_c8 = pbVar20;
            uVar10 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b211200);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar10;
            puVar14 = (undefined *)((ulong)puVar14 & 0x7fffffffffffffff);
          }
          if (puVar14 != (undefined *)0x0) {
            _free(unaff_x21);
          }
          goto LAB_1013e1dec;
        }
        if (bVar1 == 1) {
          bVar7 = cStack_87 == '\0';
LAB_1013e1bc0:
          bVar7 = !bVar7;
          goto LAB_1013e1bcc;
        }
        if (bVar1 == 4) {
          bVar7 = plVar3 == (long *)0x0;
          goto LAB_1013e1bc0;
        }
        if (bVar1 != 0xc) goto LAB_1013e1f50;
        if (lStack_70 == 0xd) {
          uVar12 = *puVar4;
          uVar13 = *(ulong *)((long)puVar4 + 5) ^ 0x656c646e61487373;
          bVar7 = (uVar12 ^ 0x48737365636f7270) != 0 || uVar13 != 0;
          if (plVar3 == (long *)0x0) goto LAB_1013e1bd4;
          _free();
          if ((uVar12 ^ 0x48737365636f7270) == 0 && uVar13 == 0) goto LAB_1013e1c1c;
        }
        else if (plVar3 != (long *)0x0) {
          _free();
        }
LAB_1013e1bd8:
        bVar1 = (byte)pbStack_f0;
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar1 == 0x16) {
          lStack_b0 = lVar18 + 1;
          pbStack_c8 = pbVar20;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1013e1f4c;
        }
        uVar10 = *puVar17;
        puVar16[1] = puVar17[1];
        *puVar16 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar10;
        bStack_88 = bVar1;
        FUN_100e077ec(&bStack_88);
LAB_1013e194c:
        lVar18 = lVar18 + 1;
        lVar19 = (lVar11 - 0x40U >> 6) + 1;
        pbVar8 = pbVar9;
        pbVar15 = pbVar20;
      } while (pbVar20 != pbVar9);
      pbStack_c8 = pbVar8;
      lStack_b0 = lVar19;
      if (puVar14 != (undefined *)0x8000000000000000) {
        *param_1 = puVar14;
        param_1[1] = unaff_x21;
        param_1[2] = uStack_f8;
        FUN_100d34830(&pbStack_d0);
        if (pbVar9 == pbVar8) goto LAB_1013e1e34;
        bStack_88 = (byte)lVar19;
        cStack_87 = (char)((ulong)lVar19 >> 8);
        uStack_86 = (undefined6)((ulong)lVar19 >> 0x10);
        uVar10 = FUN_1087e422c(((ulong)((long)pbVar9 - (long)pbVar8) >> 6) + lVar19,&bStack_88,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar10;
        goto joined_r0x0001013e1d74;
      }
    }
    puStack_a0 = &UNK_108cc0902;
    pbStack_98 = (byte *)0xd;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_1013e1de4:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar9;
LAB_1013e1dec:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
  }
LAB_1013e1e34:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

