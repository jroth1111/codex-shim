
/* WARNING: Type propagation algorithm not settling */

void FUN_1013652f8(undefined8 *param_1,byte *param_2)

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
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  byte *unaff_x21;
  undefined *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  byte *pbVar19;
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
    puVar15 = *(undefined **)(param_2 + 8);
    pbVar20 = *(byte **)(param_2 + 0x10);
    lVar13 = *(long *)(param_2 + 0x18);
    pbVar1 = pbVar20 + lVar13 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar9 = pbVar20;
    pbStack_f0 = pbVar20;
    puStack_e0 = puVar15;
    pbStack_d8 = pbVar1;
    if (lVar13 == 0) {
LAB_101365870:
      pbStack_e8 = pbVar9;
      pbVar19 = (byte *)FUN_1087e422c(0,&UNK_10b232220,&UNK_10b20a590);
LAB_10136588c:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar19;
LAB_101365894:
      lVar13 = ((ulong)((long)pbVar1 - (long)pbVar9) >> 5) + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100e077ec(pbVar9);
        pbVar9 = pbVar9 + 0x20;
      }
    }
    else {
      pbVar9 = pbVar20 + 0x20;
      if (*pbVar20 == 0x16) goto LAB_101365870;
      uVar10 = *(undefined8 *)(pbVar20 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar20 + 9);
      cStack_87 = (char)uVar10;
      uStack_86 = (undefined6)((ulong)uVar10 >> 8);
      uStack_80 = (undefined1)((ulong)uVar10 >> 0x38);
      lStack_70 = *(long *)(pbVar20 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar20 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar9;
      bStack_88 = *pbVar20;
      FUN_1004b62d4(&uStack_a0,&bStack_88);
      pbVar19 = pbStack_98;
      puVar7 = uStack_a0;
      if (uStack_a0 == (undefined *)0x8000000000000000) goto LAB_10136588c;
      if (lVar13 == 1) {
LAB_101365a30:
        uVar10 = FUN_1087e422c(1,&UNK_10b232220,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar10;
joined_r0x000101365a50:
        if (puVar7 != (undefined *)0x0) {
          _free(pbVar19);
        }
        goto LAB_101365894;
      }
      pbVar9 = pbVar20 + 0x40;
      pbStack_e8 = pbVar9;
      if (pbVar20[0x20] == 0x16) goto LAB_101365a30;
      uVar10 = *(undefined8 *)(pbVar20 + 0x21);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar20 + 0x29);
      cStack_87 = (char)uVar10;
      uStack_86 = (undefined6)((ulong)uVar10 >> 8);
      uStack_80 = (undefined1)((ulong)uVar10 >> 0x38);
      lStack_70 = *(long *)(pbVar20 + 0x38);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar20 + 0x30);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar20 + 0x30) >> 8);
      pbStack_d0 = (byte *)0x2;
      bStack_88 = pbVar20[0x20];
      func_0x000100bda2e8(&uStack_a0,&bStack_88);
      if (((ulong)uStack_a0 & 1) != 0) {
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_98;
        goto joined_r0x000101365a50;
      }
      *param_1 = puVar7;
      param_1[1] = pbVar19;
      param_1[2] = uStack_90;
      *(undefined4 *)(param_1 + 3) = uStack_a0._2_4_;
      lVar13 = FUN_100fbc738(&pbStack_f0);
      if (lVar13 == 0) goto LAB_1013659dc;
      *param_1 = 0x8000000000000000;
      param_1[1] = lVar13;
      pbVar20 = pbVar19;
      puVar15 = puVar7;
    }
    if (puVar15 != (undefined *)0x0) {
      _free(pbVar20);
    }
    goto LAB_1013659dc;
  }
  if (bVar3 != 0x15) {
    uVar10 = FUN_108855b04(param_2,&uStack_a0,&UNK_10b20bfa0);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
    return;
  }
  uStack_c0 = *(undefined8 *)(param_2 + 8);
  pbStack_d0 = *(byte **)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar9 = pbStack_d0 + lVar13;
  pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
  lStack_b0 = 0;
  pbStack_c8 = pbStack_d0;
  pbStack_b8 = pbVar9;
  if (*(long *)(param_2 + 0x18) == 0) {
LAB_101365944:
    uStack_a0 = &UNK_108cc0902;
    pbStack_98 = (byte *)0xd;
    bStack_88 = (byte)&uStack_a0;
    cStack_87 = (char)((ulong)&uStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_10136597c:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar9;
  }
  else {
    lVar17 = 0;
    bVar6 = false;
    puVar16 = (undefined8 *)((ulong)&bStack_88 | 1);
    puVar14 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    puVar15 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_d0;
    pbStack_c8 = pbStack_d0;
    do {
      pbVar19 = pbVar1 + 0x40;
      bVar2 = *pbVar1;
      lVar18 = lVar17;
      pbVar20 = pbVar19;
      if (bVar2 == 0x16) break;
      uVar10 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar16 + 0xf) = uVar10;
      uVar10 = *(undefined8 *)(pbVar1 + 1);
      puVar16[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar16 = uVar10;
      pbStack_e8 = *(byte **)(pbVar1 + 0x28);
      pbStack_f0 = *(byte **)(pbVar1 + 0x20);
      pbStack_d8 = *(byte **)(pbVar1 + 0x38);
      puStack_e0 = *(undefined **)(pbVar1 + 0x30);
      plVar4 = (long *)CONCAT71(uStack_7f,uStack_80);
      plVar5 = (long *)CONCAT71(uStack_77,uStack_78);
      bStack_88 = bVar2;
      if (bVar2 < 0xd) {
        if (bVar2 == 1) {
          iVar12 = 1;
          if (cStack_87 != '\x01') {
            iVar12 = 2;
          }
          iVar11 = 0;
          if (cStack_87 != '\0') {
            iVar11 = iVar12;
          }
          goto LAB_10136572c;
        }
        if (bVar2 == 4) {
          iVar12 = 1;
          if (plVar4 != (long *)0x1) {
            iVar12 = 2;
          }
          iVar11 = 0;
          if (plVar4 != (long *)0x0) {
            iVar11 = iVar12;
          }
          goto LAB_10136572c;
        }
        if (bVar2 == 0xc) {
          if (lStack_70 == 4) {
            iVar11 = 1;
            if ((int)*plVar5 != 0x657a6973) {
              iVar11 = 2;
            }
          }
          else if (lStack_70 == 0xd) {
            iVar11 = 2;
            if (*plVar5 == 0x48737365636f7270 && *(long *)((long)plVar5 + 5) == 0x656c646e61487373)
            {
              iVar11 = 0;
            }
          }
          else {
            iVar11 = 2;
          }
          goto joined_r0x0001013656cc;
        }
LAB_101365c7c:
        lStack_b0 = lVar17 + 1;
        pbStack_c8 = pbVar19;
        pbVar9 = (byte *)FUN_108855b04(&bStack_88,&uStack_a0,&UNK_10b20e0c0);
LAB_101365ac8:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar9;
        puVar15 = (undefined *)((ulong)puVar15 & 0x7fffffffffffffff);
        goto joined_r0x000101365ad4;
      }
      if (bVar2 == 0xd) {
        if (plVar5 == (long *)0x4) {
          iVar11 = 1;
          if ((int)*plVar4 != 0x657a6973) {
            iVar11 = 2;
          }
        }
        else {
          if (plVar5 != (long *)0xd) goto LAB_10136570c;
          iVar11 = 2;
          if (*plVar4 == 0x48737365636f7270 && *(long *)((long)plVar4 + 5) == 0x656c646e61487373) {
            iVar11 = 0;
          }
        }
LAB_10136572c:
        FUN_100e077ec(&bStack_88);
      }
      else {
        if (bVar2 != 0xe) {
          if (bVar2 != 0xf) goto LAB_101365c7c;
          if (plVar5 == (long *)0x4) {
            if (((((char)*plVar4 != 's') || (*(char *)((long)plVar4 + 1) != 'i')) ||
                (*(char *)((long)plVar4 + 2) != 'z')) || (*(char *)((long)plVar4 + 3) != 'e'))
            goto LAB_10136570c;
            iVar11 = 1;
          }
          else if ((((((plVar5 == (long *)0xd) && ((char)*plVar4 == 'p')) &&
                     ((*(char *)((long)plVar4 + 1) == 'r' &&
                      ((*(char *)((long)plVar4 + 2) == 'o' && (*(char *)((long)plVar4 + 3) == 'c')))
                      ))) && (*(char *)((long)plVar4 + 4) == 'e')) &&
                   (((*(char *)((long)plVar4 + 5) == 's' && (*(char *)((long)plVar4 + 6) == 's')) &&
                    (*(char *)((long)plVar4 + 7) == 'H')))) &&
                  ((((char)plVar4[1] == 'a' && (*(char *)((long)plVar4 + 9) == 'n')) &&
                   ((*(char *)((long)plVar4 + 10) == 'd' &&
                    ((*(char *)((long)plVar4 + 0xb) == 'l' && (*(char *)((long)plVar4 + 0xc) == 'e')
                     ))))))) {
            iVar11 = 0;
          }
          else {
LAB_10136570c:
            iVar11 = 2;
          }
          goto LAB_10136572c;
        }
        if (lStack_70 == 4) {
          if (((((char)*plVar5 != 's') || (*(char *)((long)plVar5 + 1) != 'i')) ||
              (*(char *)((long)plVar5 + 2) != 'z')) || (*(char *)((long)plVar5 + 3) != 'e'))
          goto LAB_1013656a8;
          iVar11 = 1;
        }
        else if (((((lStack_70 == 0xd) && ((char)*plVar5 == 'p')) &&
                  ((*(char *)((long)plVar5 + 1) == 'r' &&
                   ((*(char *)((long)plVar5 + 2) == 'o' && (*(char *)((long)plVar5 + 3) == 'c'))))))
                 && ((*(char *)((long)plVar5 + 4) == 'e' &&
                     ((((*(char *)((long)plVar5 + 5) == 's' && (*(char *)((long)plVar5 + 6) == 's'))
                       && (*(char *)((long)plVar5 + 7) == 'H')) &&
                      (((char)plVar5[1] == 'a' && (*(char *)((long)plVar5 + 9) == 'n')))))))) &&
                ((*(char *)((long)plVar5 + 10) == 'd' &&
                 ((*(char *)((long)plVar5 + 0xb) == 'l' && (*(char *)((long)plVar5 + 0xc) == 'e'))))
                )) {
          iVar11 = 0;
        }
        else {
LAB_1013656a8:
          iVar11 = 2;
        }
joined_r0x0001013656cc:
        if (plVar4 != (long *)0x0) {
          _free();
        }
      }
      bVar2 = (byte)pbStack_f0;
      if (iVar11 == 0) {
        if (puVar15 != (undefined *)0x8000000000000000) {
          lStack_b0 = lVar17 + 1;
          uStack_a0 = &UNK_108cc0902;
          pbStack_98 = (byte *)0xd;
          bStack_88 = (byte)&uStack_a0;
          cStack_87 = (char)((ulong)&uStack_a0 >> 8);
          uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
          uStack_80 = 0xa0;
          uStack_7f = 0x100c7b3;
          pbStack_c8 = pbVar19;
          pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          goto LAB_101365ac8;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_b0 = lVar17 + 1;
          pbStack_c8 = pbVar19;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101365c78;
        }
        uVar10 = *puVar14;
        puVar16[1] = puVar14[1];
        *puVar16 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar10;
        bStack_88 = bVar2;
        FUN_1004b62d4(&uStack_a0,&bStack_88);
        if (uStack_a0 == (undefined *)0x8000000000000000) {
          lStack_b0 = lVar17 + 1;
          pbVar9 = pbStack_98;
          pbStack_c8 = pbVar19;
          goto LAB_10136597c;
        }
        uStack_100 = uStack_90;
        unaff_x21 = pbStack_98;
        puVar15 = uStack_a0;
      }
      else {
        if (iVar11 == 1) {
          if (bVar6) {
            lStack_b0 = lVar17 + 1;
            uStack_a0 = &UNK_108c520ac;
            pbStack_98 = (byte *)0x4;
            bStack_88 = (byte)&uStack_a0;
            cStack_87 = (char)((ulong)&uStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar19;
            pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          }
          else {
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar2 == 0x16) goto LAB_101365b78;
            uVar10 = *puVar14;
            puVar16[1] = puVar14[1];
            *puVar16 = uVar10;
            uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
            *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
            *(undefined8 *)((long)puVar16 + 0xf) = uVar10;
            bStack_88 = bVar2;
            func_0x000100bda2e8(&uStack_a0,&bStack_88);
            if ((short)uStack_a0 != 1) {
              bVar6 = true;
              uStack_f4 = uStack_a0._4_2_;
              uStack_f8 = uStack_a0._2_2_;
              goto LAB_1013653ac;
            }
            lStack_b0 = lVar17 + 1;
            pbVar9 = pbStack_98;
            pbStack_c8 = pbVar19;
          }
          goto LAB_101365ac8;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
LAB_101365b78:
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          lStack_b0 = lVar17 + 1;
          pbStack_c8 = pbVar19;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101365c78:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101365c7c);
          (*pcVar8)();
        }
        uVar10 = *puVar14;
        puVar16[1] = puVar14[1];
        *puVar16 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar14 + 0xf);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar14 + 0x17);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar10;
        bStack_88 = bVar2;
        FUN_100e077ec(&bStack_88);
      }
LAB_1013653ac:
      lVar17 = lVar17 + 1;
      lVar18 = (lVar13 - 0x40U >> 6) + 1;
      pbVar20 = pbVar9;
      pbVar1 = pbVar19;
    } while (pbVar19 != pbVar9);
    pbStack_c8 = pbVar20;
    lStack_b0 = lVar18;
    if (puVar15 == (undefined *)0x8000000000000000) goto LAB_101365944;
    if (bVar6) {
      *param_1 = puVar15;
      param_1[1] = unaff_x21;
      param_1[2] = uStack_100;
      *(undefined2 *)(param_1 + 3) = uStack_f8;
      *(undefined2 *)((long)param_1 + 0x1a) = uStack_f4;
      FUN_100d34830(&pbStack_d0);
      if (pbVar9 != pbVar20) {
        bStack_88 = (byte)lVar18;
        cStack_87 = (char)((ulong)lVar18 >> 8);
        uStack_86 = (undefined6)((ulong)lVar18 >> 0x10);
        uVar10 = FUN_1087e422c(((ulong)((long)pbVar9 - (long)pbVar20) >> 6) + lVar18,&bStack_88,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar10;
        if (puVar15 != (undefined *)0x0) {
          _free(unaff_x21);
        }
      }
      goto LAB_1013659dc;
    }
    uStack_a0 = &UNK_108c520ac;
    pbStack_98 = (byte *)0x4;
    bStack_88 = (byte)&uStack_a0;
    cStack_87 = (char)((ulong)&uStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    uVar10 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
joined_r0x000101365ad4:
    if (puVar15 != (undefined *)0x0) {
      _free(unaff_x21);
    }
  }
  FUN_100d34830(&pbStack_d0);
  if ((byte)pbStack_f0 != '\x16') {
    FUN_100e077ec(&pbStack_f0);
  }
LAB_1013659dc:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

