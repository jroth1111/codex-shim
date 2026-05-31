
/* WARNING: Type propagation algorithm not settling */

void FUN_1012913a0(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
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
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    puVar13 = *(undefined **)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    pbVar10 = unaff_x21 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar14 = unaff_x21;
    pbStack_f0 = unaff_x21;
    puStack_e0 = puVar13;
    pbStack_d8 = pbVar10;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_1012916c0:
      pbStack_e8 = pbVar14;
      pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b22b888,&UNK_10b20a590);
    }
    else {
      pbVar14 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_1012916c0;
      uVar11 = *(undefined8 *)(unaff_x21 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 9);
      cStack_87 = (char)uVar11;
      uStack_86 = (undefined6)((ulong)uVar11 >> 8);
      uStack_80 = (undefined1)((ulong)uVar11 >> 0x38);
      lStack_70 = *(long *)(unaff_x21 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar14;
      bStack_88 = *unaff_x21;
      FUN_1004b62d4(&puStack_a0,&bStack_88);
      pbVar9 = pbStack_98;
      puVar6 = puStack_a0;
      if (puStack_a0 != (undefined *)0x8000000000000000) {
        *param_1 = puStack_a0;
        param_1[1] = pbStack_98;
        param_1[2] = uStack_90;
        lVar12 = FUN_100fbc738(&pbStack_f0);
        if (lVar12 == 0) goto LAB_10129182c;
        *param_1 = 0x8000000000000000;
        param_1[1] = lVar12;
        unaff_x21 = pbVar9;
        puVar13 = puVar6;
        goto joined_r0x000101291778;
      }
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar9;
    lVar12 = ((ulong)((long)pbVar10 - (long)pbVar14) >> 5) + 1;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100e077ec(pbVar14);
      pbVar14 = pbVar14 + 0x20;
    }
joined_r0x000101291778:
    if (puVar13 != (undefined *)0x0) {
      _free(unaff_x21);
    }
  }
  else {
    if (bVar3 != 0x15) {
      uVar11 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20b240);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar11;
      return;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar10 = pbStack_d0 + lVar12;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_c8 = pbStack_d0;
    pbStack_b8 = pbVar10;
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar17 = 0;
      puVar15 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar16 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      puVar13 = (undefined *)0x8000000000000000;
      pbVar14 = pbStack_d0;
      do {
        pbVar19 = pbVar14 + 0x40;
        bVar2 = *pbVar14;
        lVar18 = lVar17;
        pbVar9 = pbVar19;
        if (bVar2 == 0x16) break;
        uVar11 = *(undefined8 *)(pbVar14 + 0x10);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar14 + 0x18);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar11;
        uVar11 = *(undefined8 *)(pbVar14 + 1);
        puVar15[1] = *(undefined8 *)(pbVar14 + 9);
        *puVar15 = uVar11;
        pbStack_e8 = *(byte **)(pbVar14 + 0x28);
        pbStack_f0 = *(byte **)(pbVar14 + 0x20);
        pbStack_d8 = *(byte **)(pbVar14 + 0x38);
        puStack_e0 = *(undefined **)(pbVar14 + 0x30);
        piVar4 = (int *)CONCAT71(uStack_7f,uStack_80);
        piVar5 = (int *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar2;
        if (bVar2 < 0xd) {
          if (bVar2 != 1) {
            if (bVar2 == 4) {
              bVar8 = piVar4 == (int *)0x0;
              goto LAB_1012915b0;
            }
            if (bVar2 == 0xc) {
              if (lStack_70 == 4) {
                iVar1 = *piVar5;
                if (piVar4 != (int *)0x0) {
                  _free();
                }
                if (iVar1 == 0x66666964) goto LAB_10129162c;
              }
              else if (piVar4 != (int *)0x0) {
                _free();
              }
              goto LAB_1012915c8;
            }
LAB_101291934:
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar19;
            uVar11 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20df40);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar11;
            puVar13 = (undefined *)((ulong)puVar13 & 0x7fffffffffffffff);
            goto joined_r0x00010129196c;
          }
          bVar8 = cStack_87 == '\0';
LAB_1012915b0:
          bVar8 = !bVar8;
LAB_1012915bc:
          FUN_100e077ec(&bStack_88);
LAB_1012915c4:
          if (!bVar8) goto LAB_10129162c;
LAB_1012915c8:
          bVar2 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar2 == 0x16) {
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101291930;
          }
          uVar11 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar11;
          bStack_88 = bVar2;
          FUN_100e077ec(&bStack_88);
        }
        else {
          if (bVar2 == 0xd) {
            if (piVar5 == (int *)0x4) {
              bVar8 = *piVar4 == 0x66666964;
              goto LAB_1012915b0;
            }
LAB_1012915b8:
            bVar8 = true;
            goto LAB_1012915bc;
          }
          if (bVar2 != 0xe) {
            if (bVar2 != 0xf) goto LAB_101291934;
            if (((piVar5 != (int *)0x4) || ((char)*piVar4 != 'd')) ||
               (*(char *)((long)piVar4 + 1) != 'i')) goto LAB_1012915b8;
            bVar8 = *(char *)((long)piVar4 + 2) == 'f' && *(char *)((long)piVar4 + 3) == 'f';
            goto LAB_1012915b0;
          }
          if (((lStack_70 == 4) && ((char)*piVar5 == 'd')) && (*(char *)((long)piVar5 + 1) == 'i'))
          {
            bVar8 = *(char *)((long)piVar5 + 2) != 'f' || *(char *)((long)piVar5 + 3) != 'f';
          }
          else {
            bVar8 = true;
          }
          if (piVar4 == (int *)0x0) goto LAB_1012915c4;
          _free();
          if (bVar8) goto LAB_1012915c8;
LAB_10129162c:
          if (puVar13 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar17 + 1;
            puStack_a0 = &UNK_108cde330;
            pbStack_98 = (byte *)0x4;
            bStack_88 = (byte)&puStack_a0;
            cStack_87 = (char)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar19;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar11;
joined_r0x00010129196c:
            if (puVar13 != (undefined *)0x0) {
              _free(unaff_x21);
            }
            goto LAB_1012917ec;
          }
          bVar2 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar2 == 0x16) {
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101291930:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101291934);
            (*pcVar7)();
          }
          uVar11 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar11;
          bStack_88 = bVar2;
          FUN_1004b62d4(&puStack_a0,&bStack_88);
          if (puStack_a0 == (undefined *)0x8000000000000000) {
            lStack_b0 = lVar17 + 1;
            pbVar10 = pbStack_98;
            pbStack_c8 = pbVar19;
            goto LAB_1012917e4;
          }
          uStack_f8 = uStack_90;
          unaff_x21 = pbStack_98;
          puVar13 = puStack_a0;
        }
        lVar17 = lVar17 + 1;
        lVar18 = (lVar12 - 0x40U >> 6) + 1;
        pbVar9 = pbVar10;
        pbVar14 = pbVar19;
      } while (pbVar19 != pbVar10);
      pbStack_c8 = pbVar9;
      lStack_b0 = lVar18;
      if (puVar13 != (undefined *)0x8000000000000000) {
        *param_1 = puVar13;
        param_1[1] = unaff_x21;
        param_1[2] = uStack_f8;
        FUN_100d34830(&pbStack_d0);
        if (pbVar10 == pbVar9) goto LAB_10129182c;
        bStack_88 = (byte)lVar18;
        cStack_87 = (char)((ulong)lVar18 >> 8);
        uStack_86 = (undefined6)((ulong)lVar18 >> 0x10);
        uVar11 = FUN_1087e422c(((ulong)((long)pbVar10 - (long)pbVar9) >> 6) + lVar18,&bStack_88,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        goto joined_r0x000101291778;
      }
    }
    puStack_a0 = &UNK_108cde330;
    pbStack_98 = (byte *)0x4;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar10 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_1012917e4:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar10;
LAB_1012917ec:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
  }
LAB_10129182c:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

