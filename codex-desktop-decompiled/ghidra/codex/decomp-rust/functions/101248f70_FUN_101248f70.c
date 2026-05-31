
/* WARNING: Type propagation algorithm not settling */

void FUN_101248f70(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  undefined *puVar7;
  code *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  byte *unaff_x21;
  undefined *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined2 uStack_f4;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined *puStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
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
    puVar16 = *(undefined **)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18);
    pbVar1 = unaff_x21 + lVar14 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar10 = unaff_x21;
    pbStack_f0 = unaff_x21;
    puStack_e0 = puVar16;
    pbStack_d8 = pbVar1;
    if (lVar14 == 0) {
LAB_10124946c:
      pbStack_e8 = pbVar10;
      pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b2328f0,&UNK_10b20a590);
LAB_101249488:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar9;
    }
    else {
      pbVar10 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_10124946c;
      uVar11 = *(undefined8 *)(unaff_x21 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 9);
      cStack_87 = (char)uVar11;
      uStack_86 = (undefined6)((ulong)uVar11 >> 8);
      uStack_80 = (undefined1)((ulong)uVar11 >> 0x38);
      lStack_70 = *(long *)(unaff_x21 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar10;
      bStack_88 = *unaff_x21;
      FUN_1004b62d4(&uStack_a0,&bStack_88);
      pbVar9 = pbStack_98;
      puVar7 = uStack_a0;
      if (uStack_a0 == (undefined *)0x8000000000000000) goto LAB_101249488;
      if (lVar14 == 1) {
LAB_10124962c:
        uVar11 = FUN_1087e422c(1,&UNK_10b2328f0,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
      }
      else {
        pbVar10 = unaff_x21 + 0x40;
        pbStack_e8 = pbVar10;
        if (unaff_x21[0x20] == 0x16) goto LAB_10124962c;
        uVar11 = *(undefined8 *)(unaff_x21 + 0x21);
        uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 0x29);
        cStack_87 = (char)uVar11;
        uStack_86 = (undefined6)((ulong)uVar11 >> 8);
        uStack_80 = (undefined1)((ulong)uVar11 >> 0x38);
        lStack_70 = *(long *)(unaff_x21 + 0x38);
        uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x30);
        uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x30) >> 8);
        pbStack_d0 = (byte *)0x2;
        bStack_88 = unaff_x21[0x20];
        FUN_100bb8b08(&uStack_a0,&bStack_88);
        if (((ulong)uStack_a0 & 1) == 0) {
          *param_1 = puVar7;
          param_1[1] = pbVar9;
          param_1[2] = uStack_90;
          *(undefined4 *)(param_1 + 3) = uStack_a0._2_4_;
          lVar14 = FUN_100fbc738(&pbStack_f0);
          if (lVar14 == 0) goto LAB_1012495d8;
          *param_1 = 0x8000000000000000;
          param_1[1] = lVar14;
          unaff_x21 = pbVar9;
          puVar16 = puVar7;
          goto joined_r0x000101249768;
        }
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_98;
      }
      if (puVar7 != (undefined *)0x0) {
        _free(pbVar9);
      }
    }
    lVar14 = ((ulong)((long)pbVar1 - (long)pbVar10) >> 5) + 1;
    while (lVar14 = lVar14 + -1, lVar14 != 0) {
      FUN_100e077ec(pbVar10);
      pbVar10 = pbVar10 + 0x20;
    }
joined_r0x000101249768:
    if (puVar16 != (undefined *)0x0) {
      _free(unaff_x21);
    }
    goto LAB_1012495d8;
  }
  if (bVar3 != 0x15) {
    uVar11 = FUN_108855b04(param_2,&uStack_a0,&UNK_10b20cca0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
    return;
  }
  uStack_c0 = *(undefined8 *)(param_2 + 8);
  pbStack_d0 = *(byte **)(param_2 + 0x10);
  lVar14 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar10 = pbStack_d0 + lVar14;
  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
  lStack_b0 = 0;
  pbStack_c8 = pbStack_d0;
  pbStack_b8 = pbVar10;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_101249540:
    uStack_a0 = &UNK_108cbdf41;
    pbStack_98 = (byte *)0x9;
    bStack_88 = (byte)&uStack_a0;
    cStack_87 = (char)((ulong)&uStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar10 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_101249578:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar10;
  }
  else {
    lVar18 = 0;
    bVar6 = false;
    puVar17 = (undefined8 *)((ulong)&bStack_88 | 1);
    puVar15 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    puVar16 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_d0;
    do {
      pbVar20 = pbVar1 + 0x40;
      bVar2 = *pbVar1;
      lVar19 = lVar18;
      pbVar9 = pbVar20;
      if (bVar2 == 0x16) break;
      uVar11 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
      uVar11 = *(undefined8 *)(pbVar1 + 1);
      puVar17[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar17 = uVar11;
      pbStack_e8 = *(byte **)(pbVar1 + 0x28);
      pbStack_f0 = *(byte **)(pbVar1 + 0x20);
      pbStack_d8 = *(byte **)(pbVar1 + 0x38);
      puStack_e0 = *(undefined **)(pbVar1 + 0x30);
      plVar4 = (long *)CONCAT71(uStack_7f,uStack_80);
      plVar5 = (long *)CONCAT71(uStack_77,uStack_78);
      bStack_88 = bVar2;
      if (bVar2 < 0xd) {
        if (bVar2 == 1) {
          iVar13 = 1;
          if (cStack_87 != '\x01') {
            iVar13 = 2;
          }
          iVar12 = 0;
          if (cStack_87 != '\0') {
            iVar12 = iVar13;
          }
          goto LAB_101249328;
        }
        if (bVar2 == 4) {
          iVar13 = 1;
          if (plVar4 != (long *)0x1) {
            iVar13 = 2;
          }
          iVar12 = 0;
          if (plVar4 != (long *)0x0) {
            iVar12 = iVar13;
          }
          goto LAB_101249328;
        }
        if (bVar2 == 0xc) {
          if (lStack_70 == 4) {
            iVar12 = 1;
            if ((int)*plVar5 != 0x657a6973) {
              iVar12 = 2;
            }
          }
          else if (lStack_70 == 9) {
            iVar12 = 2;
            if (*plVar5 == 0x49737365636f7270 && (char)plVar5[1] == 'd') {
              iVar12 = 0;
            }
          }
          else {
            iVar12 = 2;
          }
          goto joined_r0x0001012492c8;
        }
LAB_101249874:
        lStack_b0 = lVar18 + 1;
        pbStack_c8 = pbVar20;
        pbVar10 = (byte *)FUN_108855b04(&bStack_88,&uStack_a0,&UNK_10b2100a0);
LAB_1012496c0:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar10;
        puVar16 = (undefined *)((ulong)puVar16 & 0x7fffffffffffffff);
        goto joined_r0x0001012496cc;
      }
      if (bVar2 == 0xd) {
        if (plVar5 == (long *)0x4) {
          iVar12 = 1;
          if ((int)*plVar4 != 0x657a6973) {
            iVar12 = 2;
          }
        }
        else {
          if (plVar5 != (long *)0x9) goto LAB_101249308;
          iVar12 = 2;
          if (*plVar4 == 0x49737365636f7270 && (char)plVar4[1] == 'd') {
            iVar12 = 0;
          }
        }
LAB_101249328:
        FUN_100e077ec(&bStack_88);
      }
      else {
        if (bVar2 != 0xe) {
          if (bVar2 != 0xf) goto LAB_101249874;
          if (plVar5 == (long *)0x4) {
            if (((((char)*plVar4 != 's') || (*(char *)((long)plVar4 + 1) != 'i')) ||
                (*(char *)((long)plVar4 + 2) != 'z')) || (*(char *)((long)plVar4 + 3) != 'e'))
            goto LAB_101249308;
            iVar12 = 1;
          }
          else if (((((plVar5 == (long *)0x9) && ((char)*plVar4 == 'p')) &&
                    ((*(char *)((long)plVar4 + 1) == 'r' &&
                     ((*(char *)((long)plVar4 + 2) == 'o' && (*(char *)((long)plVar4 + 3) == 'c'))))
                    )) && (*(char *)((long)plVar4 + 4) == 'e')) &&
                  ((((*(char *)((long)plVar4 + 5) == 's' && (*(char *)((long)plVar4 + 6) == 's')) &&
                    (*(char *)((long)plVar4 + 7) == 'I')) && ((char)plVar4[1] == 'd')))) {
            iVar12 = 0;
          }
          else {
LAB_101249308:
            iVar12 = 2;
          }
          goto LAB_101249328;
        }
        if (lStack_70 == 4) {
          if ((((char)*plVar5 != 's') || (*(char *)((long)plVar5 + 1) != 'i')) ||
             ((*(char *)((long)plVar5 + 2) != 'z' || (*(char *)((long)plVar5 + 3) != 'e'))))
          goto LAB_1012492a4;
          iVar12 = 1;
        }
        else if (((((lStack_70 == 9) && ((char)*plVar5 == 'p')) &&
                  ((*(char *)((long)plVar5 + 1) == 'r' &&
                   (((*(char *)((long)plVar5 + 2) == 'o' && (*(char *)((long)plVar5 + 3) == 'c')) &&
                    (*(char *)((long)plVar5 + 4) == 'e')))))) &&
                 ((*(char *)((long)plVar5 + 5) == 's' && (*(char *)((long)plVar5 + 6) == 's')))) &&
                ((*(char *)((long)plVar5 + 7) == 'I' && ((char)plVar5[1] == 'd')))) {
          iVar12 = 0;
        }
        else {
LAB_1012492a4:
          iVar12 = 2;
        }
joined_r0x0001012492c8:
        if (plVar4 != (long *)0x0) {
          _free();
        }
      }
      bVar2 = (byte)pbStack_f0;
      if (iVar12 == 0) {
        if (puVar16 != (undefined *)0x8000000000000000) {
          lStack_b0 = lVar18 + 1;
          uStack_a0 = &UNK_108cbdf41;
          pbStack_98 = (byte *)0x9;
          bStack_88 = (byte)&uStack_a0;
          cStack_87 = (char)((ulong)&uStack_a0 >> 8);
          uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
          uStack_80 = 0xa0;
          uStack_7f = 0x100c7b3;
          pbStack_c8 = pbVar20;
          pbVar10 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          goto LAB_1012496c0;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_b0 = lVar18 + 1;
          pbStack_c8 = pbVar20;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101249870;
        }
        uVar11 = *puVar15;
        puVar17[1] = puVar15[1];
        *puVar17 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
        bStack_88 = bVar2;
        FUN_1004b62d4(&uStack_a0,&bStack_88);
        if (uStack_a0 == (undefined *)0x8000000000000000) {
          lStack_b0 = lVar18 + 1;
          pbVar10 = pbStack_98;
          pbStack_c8 = pbVar20;
          goto LAB_101249578;
        }
        uStack_100 = uStack_90;
        unaff_x21 = pbStack_98;
        puVar16 = uStack_a0;
      }
      else {
        if (iVar12 == 1) {
          if (bVar6) {
            lStack_b0 = lVar18 + 1;
            uStack_a0 = &UNK_108c520ac;
            pbStack_98 = (byte *)0x4;
            bStack_88 = (byte)&uStack_a0;
            cStack_87 = (char)((ulong)&uStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar20;
            pbVar10 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          }
          else {
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar2 == 0x16) goto LAB_101249770;
            uVar11 = *puVar15;
            puVar17[1] = puVar15[1];
            *puVar17 = uVar11;
            uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
            bStack_88 = bVar2;
            FUN_100bb8b08(&uStack_a0,&bStack_88);
            if ((short)uStack_a0 != 1) {
              bVar6 = true;
              uStack_f4 = uStack_a0._4_2_;
              uStack_f8 = uStack_a0._2_2_;
              goto LAB_101249020;
            }
            lStack_b0 = lVar18 + 1;
            pbVar10 = pbStack_98;
            pbStack_c8 = pbVar20;
          }
          goto LAB_1012496c0;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
LAB_101249770:
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          lStack_b0 = lVar18 + 1;
          pbStack_c8 = pbVar20;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101249870:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101249874);
          (*pcVar8)();
        }
        uVar11 = *puVar15;
        puVar17[1] = puVar15[1];
        *puVar17 = uVar11;
        uVar11 = *(undefined8 *)((long)puVar15 + 0xf);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar11;
        bStack_88 = bVar2;
        FUN_100e077ec(&bStack_88);
      }
LAB_101249020:
      lVar18 = lVar18 + 1;
      lVar19 = (lVar14 - 0x40U >> 6) + 1;
      pbVar9 = pbVar10;
      pbVar1 = pbVar20;
    } while (pbVar20 != pbVar10);
    pbStack_c8 = pbVar9;
    lStack_b0 = lVar19;
    if (puVar16 == (undefined *)0x8000000000000000) goto LAB_101249540;
    if (bVar6) {
      *param_1 = puVar16;
      param_1[1] = unaff_x21;
      param_1[2] = uStack_100;
      *(undefined2 *)(param_1 + 3) = uStack_f8;
      *(undefined2 *)((long)param_1 + 0x1a) = uStack_f4;
      FUN_100d34830(&pbStack_d0);
      if (pbVar10 == pbVar9) goto LAB_1012495d8;
      bStack_88 = (byte)lVar19;
      cStack_87 = (char)((ulong)lVar19 >> 8);
      uStack_86 = (undefined6)((ulong)lVar19 >> 0x10);
      uVar11 = FUN_1087e422c(((ulong)((long)pbVar10 - (long)pbVar9) >> 6) + lVar19,&bStack_88,
                             &UNK_10b23a190);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar11;
      goto joined_r0x000101249768;
    }
    uStack_a0 = &UNK_108c520ac;
    pbStack_98 = (byte *)0x4;
    bStack_88 = (byte)&uStack_a0;
    cStack_87 = (char)((ulong)&uStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    uVar11 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar11;
joined_r0x0001012496cc:
    if (puVar16 != (undefined *)0x0) {
      _free(unaff_x21);
    }
  }
  FUN_100d34830(&pbStack_d0);
  if ((byte)pbStack_f0 != '\x16') {
    FUN_100e077ec(&pbStack_f0);
  }
LAB_1012495d8:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

