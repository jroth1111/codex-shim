
void FUN_101350000(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  long lVar9;
  code *pcVar10;
  bool bVar11;
  byte *pbVar12;
  undefined8 uVar13;
  long lVar14;
  byte *unaff_x21;
  byte *pbVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  ulong uStack_e0;
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
  if (bVar5 == 0x14) {
    uVar6 = *(ulong *)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    pbVar1 = unaff_x21 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar15 = unaff_x21;
    pbStack_f0 = unaff_x21;
    uStack_e0 = uVar6;
    pbStack_d8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_101350324:
      pbStack_e8 = pbVar15;
      pbVar12 = (byte *)FUN_1087e422c(0,&UNK_10b2323f0,&UNK_10b20a590);
    }
    else {
      pbVar15 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_101350324;
      uVar13 = *(undefined8 *)(unaff_x21 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 9);
      cStack_87 = (char)uVar13;
      uStack_86 = (undefined6)((ulong)uVar13 >> 8);
      uStack_80 = (undefined1)((ulong)uVar13 >> 0x38);
      lStack_70 = *(long *)(unaff_x21 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar15;
      bStack_88 = *unaff_x21;
      FUN_1004b60cc(&puStack_a0,&bStack_88);
      pbVar12 = pbStack_98;
      puVar16 = puStack_a0;
      if (puStack_a0 != (undefined *)0x8000000000000001) {
        *param_1 = puStack_a0;
        param_1[1] = pbStack_98;
        param_1[2] = uStack_90;
        lVar14 = FUN_100fbc738(&pbStack_f0);
        if (lVar14 == 0) goto LAB_10135043c;
        *param_1 = 0x8000000000000001;
        param_1[1] = lVar14;
        uVar6 = (ulong)puVar16 & 0x7fffffffffffffff;
        unaff_x21 = pbVar12;
        goto joined_r0x0001013503e8;
      }
    }
    *param_1 = 0x8000000000000001;
    param_1[1] = pbVar12;
    lVar14 = ((ulong)((long)pbVar1 - (long)pbVar15) >> 5) + 1;
    while (lVar14 = lVar14 + -1, lVar14 != 0) {
      FUN_100e077ec(pbVar15);
      pbVar15 = pbVar15 + 0x20;
    }
  }
  else {
    if (bVar5 != 0x15) {
      uVar13 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20b060);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar13;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbStack_d0 + lVar14;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_b8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      puVar16 = (undefined *)0x8000000000000001;
      pbVar15 = pbStack_d0;
      lVar9 = lStack_b0;
    }
    else {
      lVar19 = 0;
      puVar17 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar20 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      puVar16 = (undefined *)0x8000000000000001;
      pbVar12 = pbStack_d0;
      pbStack_c8 = pbStack_d0;
      do {
        pbVar18 = pbVar12 + 0x40;
        bVar4 = *pbVar12;
        pbVar15 = pbVar18;
        lVar9 = lVar19;
        if (bVar4 == 0x16) break;
        uVar13 = *(undefined8 *)(pbVar12 + 0x10);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar12 + 0x18);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar13;
        uVar13 = *(undefined8 *)(pbVar12 + 1);
        puVar17[1] = *(undefined8 *)(pbVar12 + 9);
        *puVar17 = uVar13;
        pbStack_e8 = *(byte **)(pbVar12 + 0x28);
        pbStack_f0 = *(byte **)(pbVar12 + 0x20);
        pbStack_d8 = *(byte **)(pbVar12 + 0x38);
        uStack_e0 = *(ulong *)(pbVar12 + 0x30);
        piVar7 = (int *)CONCAT71(uStack_7f,uStack_80);
        puVar8 = (uint *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar4;
        if (0xc < bVar4) {
          if (bVar4 == 0xd) {
            if (puVar8 == (uint *)0x5) {
              bVar11 = false;
              if (*piVar7 == 0x756c6176) {
                bVar11 = (char)piVar7[1] == 'e';
              }
              goto LAB_101350228;
            }
LAB_101350230:
            bVar11 = true;
            goto LAB_101350234;
          }
          if (bVar4 != 0xe) {
            if (bVar4 != 0xf) goto LAB_101350564;
            if ((((puVar8 != (uint *)0x5) || ((char)*piVar7 != 'v')) ||
                (*(char *)((long)piVar7 + 1) != 'a')) ||
               ((*(char *)((long)piVar7 + 2) != 'l' || (*(char *)((long)piVar7 + 3) != 'u'))))
            goto LAB_101350230;
            bVar11 = (char)piVar7[1] == 'e';
            goto LAB_101350228;
          }
          if (((lStack_70 == 5) && ((char)*puVar8 == 'v')) &&
             ((*(char *)((long)puVar8 + 1) == 'a' &&
              ((*(char *)((long)puVar8 + 2) == 'l' && (*(char *)((long)puVar8 + 3) == 'u')))))) {
            bVar11 = (char)puVar8[1] != 'e';
          }
          else {
            bVar11 = true;
          }
          if (piVar7 == (int *)0x0) goto LAB_10135023c;
          _free();
          if (bVar11) goto LAB_101350240;
LAB_101350284:
          if (puVar16 == (undefined *)0x8000000000000001) {
            bVar4 = (byte)pbStack_f0;
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar4 == 0x16) {
              lStack_b0 = lVar19 + 1;
              pbStack_c8 = pbVar18;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101350560:
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x101350564);
              (*pcVar10)();
            }
            uVar13 = *puVar20;
            puVar17[1] = puVar20[1];
            *puVar17 = uVar13;
            uVar13 = *(undefined8 *)((long)puVar20 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar13;
            bStack_88 = bVar4;
            FUN_1004b60cc(&puStack_a0,&bStack_88);
            if (puStack_a0 != (undefined *)0x8000000000000001) {
              uStack_f8 = uStack_90;
              unaff_x21 = pbStack_98;
              puVar16 = puStack_a0;
              goto LAB_1013500a0;
            }
            lStack_b0 = lVar19 + 1;
            *param_1 = 0x8000000000000001;
            param_1[1] = pbStack_98;
            pbStack_c8 = pbVar18;
          }
          else {
            lStack_b0 = lVar19 + 1;
            puStack_a0 = &UNK_108cad90a;
            pbStack_98 = (byte *)0x5;
            bStack_88 = (byte)&puStack_a0;
            cStack_87 = (char)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar18;
            uVar13 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar13;
            puVar16 = (undefined *)((ulong)puVar16 & 0x7fffffffffffffff);
joined_r0x0001013505a8:
            if (puVar16 != (undefined *)0x0) {
              _free(unaff_x21);
            }
          }
LAB_101350490:
          FUN_100d34830(&pbStack_d0);
          if ((byte)pbStack_f0 != '\x16') {
            FUN_100e077ec(&pbStack_f0);
          }
          goto LAB_10135043c;
        }
        if (bVar4 != 1) {
          if (bVar4 == 4) {
            bVar11 = piVar7 == (int *)0x0;
            goto LAB_101350228;
          }
          if (bVar4 == 0xc) {
            if (lStack_70 == 5) {
              uVar3 = *puVar8;
              bVar4 = (byte)puVar8[1] ^ 0x65;
              bVar11 = (uVar3 ^ 0x756c6176) != 0 || bVar4 != 0;
              if (piVar7 == (int *)0x0) goto LAB_10135023c;
              _free();
              if ((uVar3 ^ 0x756c6176) == 0 && bVar4 == 0) goto LAB_101350284;
            }
            else if (piVar7 != (int *)0x0) {
              _free();
            }
            goto LAB_101350240;
          }
LAB_101350564:
          lStack_b0 = lVar19 + 1;
          pbStack_c8 = pbVar18;
          uVar13 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20d8a0);
          *param_1 = 0x8000000000000001;
          param_1[1] = uVar13;
          if ((long)puVar16 < -0x7ffffffffffffffe) goto LAB_101350490;
          goto joined_r0x0001013505a8;
        }
        bVar11 = cStack_87 == '\0';
LAB_101350228:
        bVar11 = !bVar11;
LAB_101350234:
        FUN_100e077ec(&bStack_88);
LAB_10135023c:
        if (!bVar11) goto LAB_101350284;
LAB_101350240:
        bVar4 = (byte)pbStack_f0;
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar4 == 0x16) {
          lStack_b0 = lVar19 + 1;
          pbStack_c8 = pbVar18;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101350560;
        }
        uVar13 = *puVar20;
        puVar17[1] = puVar20[1];
        *puVar17 = uVar13;
        uVar13 = *(undefined8 *)((long)puVar20 + 0xf);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar20 + 0x17);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar13;
        bStack_88 = bVar4;
        FUN_100e077ec(&bStack_88);
LAB_1013500a0:
        lVar19 = lVar19 + 1;
        pbVar15 = pbVar1;
        pbVar12 = pbVar18;
        lVar9 = (lVar14 - 0x40U >> 6) + 1;
      } while (pbVar18 != pbVar1);
    }
    lStack_b0 = lVar9;
    lVar14 = lStack_b0;
    puVar2 = (undefined *)0x8000000000000000;
    if (puVar16 != (undefined *)0x8000000000000001) {
      puVar2 = puVar16;
    }
    *param_1 = puVar2;
    param_1[1] = unaff_x21;
    param_1[2] = uStack_f8;
    pbStack_c8 = pbVar15;
    FUN_100d34830(&pbStack_d0);
    if (pbVar1 == pbVar15) goto LAB_10135043c;
    bStack_88 = (byte)lVar14;
    cStack_87 = (char)((ulong)lVar14 >> 8);
    uStack_86 = (undefined6)((ulong)lVar14 >> 0x10);
    uVar13 = FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar15) >> 6) + lVar14,&bStack_88,
                           &UNK_10b23a190);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar13;
    uVar6 = (ulong)puVar2 & 0x7fffffffffffffff;
  }
joined_r0x0001013503e8:
  if (uVar6 != 0) {
    _free(unaff_x21);
  }
LAB_10135043c:
  if ((bVar5 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

