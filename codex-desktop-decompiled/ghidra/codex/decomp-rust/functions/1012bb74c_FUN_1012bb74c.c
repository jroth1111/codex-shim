
/* WARNING: Type propagation algorithm not settling */

void FUN_1012bb74c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  code *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  char cVar14;
  byte *unaff_x21;
  undefined8 *puVar15;
  undefined *puVar16;
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
    lVar13 = *(long *)(param_2 + 0x18);
    pbVar1 = unaff_x21 + lVar13 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar9 = unaff_x21;
    pbStack_f0 = unaff_x21;
    puStack_e0 = puVar16;
    pbStack_d8 = pbVar1;
    if (lVar13 == 0) {
LAB_1012bbbfc:
      pbStack_e8 = pbVar9;
      pbVar8 = (byte *)FUN_1087e422c(0,&UNK_10b2322e0,&UNK_10b20a590);
LAB_1012bbc18:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar8;
    }
    else {
      pbVar9 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_1012bbbfc;
      uVar10 = *(undefined8 *)(unaff_x21 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 9);
      cStack_87 = (char)uVar10;
      uStack_86 = (undefined6)((ulong)uVar10 >> 8);
      uStack_80 = (undefined1)((ulong)uVar10 >> 0x38);
      lStack_70 = *(long *)(unaff_x21 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar9;
      bStack_88 = *unaff_x21;
      FUN_1004b62d4(&uStack_a0,&bStack_88);
      pbVar8 = pbStack_98;
      puVar6 = uStack_a0;
      if (uStack_a0 == (undefined *)0x8000000000000000) goto LAB_1012bbc18;
      if (lVar13 == 1) {
LAB_1012bbda0:
        uVar10 = FUN_1087e422c(1,&UNK_10b2322e0,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar10;
      }
      else {
        pbVar9 = unaff_x21 + 0x40;
        pbStack_e8 = pbVar9;
        if (unaff_x21[0x20] == 0x16) goto LAB_1012bbda0;
        uVar10 = *(undefined8 *)(unaff_x21 + 0x21);
        uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 0x29);
        cStack_87 = (char)uVar10;
        uStack_86 = (undefined6)((ulong)uVar10 >> 8);
        uStack_80 = (undefined1)((ulong)uVar10 >> 0x38);
        lStack_70 = *(long *)(unaff_x21 + 0x38);
        uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x30);
        uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x30) >> 8);
        pbStack_d0 = (byte *)0x2;
        bStack_88 = unaff_x21[0x20];
        func_0x0001013d1dec(&uStack_a0,&bStack_88);
        if (((ulong)uStack_a0 & 1) == 0) {
          *param_1 = puVar6;
          param_1[1] = pbVar8;
          param_1[2] = uStack_90;
          *(char *)(param_1 + 3) = uStack_a0._1_1_;
          lVar13 = FUN_100fbc738(&pbStack_f0);
          if (lVar13 == 0) goto LAB_1012bbdf4;
          *param_1 = 0x8000000000000000;
          param_1[1] = lVar13;
          unaff_x21 = pbVar8;
          puVar16 = puVar6;
          goto joined_r0x0001012bbef4;
        }
        *param_1 = 0x8000000000000000;
        param_1[1] = pbStack_98;
      }
      if (puVar6 != (undefined *)0x0) {
        _free(pbVar8);
      }
    }
    lVar13 = ((ulong)((long)pbVar1 - (long)pbVar9) >> 5) + 1;
    while (lVar13 = lVar13 + -1, lVar13 != 0) {
      FUN_100e077ec(pbVar9);
      pbVar9 = pbVar9 + 0x20;
    }
joined_r0x0001012bbef4:
    if (puVar16 != (undefined *)0x0) {
      _free(unaff_x21);
    }
    goto LAB_1012bbdf4;
  }
  if (bVar3 != 0x15) {
    uVar10 = FUN_108855b04(param_2,&uStack_a0,&UNK_10b20adc0);
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
LAB_1012bbcd0:
    uStack_a0 = &UNK_108c982f8;
    pbStack_98 = (byte *)0x8;
    bStack_88 = (byte)&uStack_a0;
    cStack_87 = (char)((ulong)&uStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_1012bbd08:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar9;
  }
  else {
    lVar18 = 0;
    puVar15 = (undefined8 *)((ulong)&bStack_88 | 1);
    puVar17 = (undefined8 *)((ulong)&pbStack_f0 | 1);
    cVar14 = '\x02';
    puVar16 = (undefined *)0x8000000000000000;
    pbVar1 = pbStack_d0;
    do {
      pbVar20 = pbVar1 + 0x40;
      bVar2 = *pbVar1;
      lVar19 = lVar18;
      pbVar8 = pbVar20;
      if (bVar2 == 0x16) break;
      uVar10 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar15 + 0xf) = uVar10;
      uVar10 = *(undefined8 *)(pbVar1 + 1);
      puVar15[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar15 = uVar10;
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
          goto LAB_1012bbabc;
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
          goto LAB_1012bbabc;
        }
        if (bVar2 == 0xc) {
          if (lStack_70 == 4) {
            iVar11 = 1;
            if ((int)*plVar5 != 0x65646f6d) {
              iVar11 = 2;
            }
          }
          else if (lStack_70 == 8) {
            iVar11 = 2;
            if (*plVar5 == 0x6449646165726874) {
              iVar11 = 0;
            }
          }
          else {
            iVar11 = 2;
          }
          goto joined_r0x0001012bba5c;
        }
LAB_1012bc000:
        lStack_b0 = lVar18 + 1;
        pbStack_c8 = pbVar20;
        pbVar9 = (byte *)FUN_108855b04(&bStack_88,&uStack_a0,&UNK_10b212a00);
LAB_1012bbe48:
        *param_1 = 0x8000000000000000;
        param_1[1] = pbVar9;
        puVar16 = (undefined *)((ulong)puVar16 & 0x7fffffffffffffff);
        goto joined_r0x0001012bbe54;
      }
      if (bVar2 == 0xd) {
        if (plVar5 == (long *)0x4) {
          iVar11 = 1;
          if ((int)*plVar4 != 0x65646f6d) {
            iVar11 = 2;
          }
        }
        else {
          if (plVar5 != (long *)0x8) goto LAB_1012bba9c;
          iVar11 = 2;
          if (*plVar4 == 0x6449646165726874) {
            iVar11 = 0;
          }
        }
LAB_1012bbabc:
        FUN_100e077ec(&bStack_88);
      }
      else {
        if (bVar2 != 0xe) {
          if (bVar2 != 0xf) goto LAB_1012bc000;
          if (plVar5 == (long *)0x4) {
            if (((((char)*plVar4 != 'm') || (*(char *)((long)plVar4 + 1) != 'o')) ||
                (*(char *)((long)plVar4 + 2) != 'd')) || (*(char *)((long)plVar4 + 3) != 'e'))
            goto LAB_1012bba9c;
            iVar11 = 1;
          }
          else if (((((plVar5 == (long *)0x8) && ((char)*plVar4 == 't')) &&
                    ((*(char *)((long)plVar4 + 1) == 'h' &&
                     ((*(char *)((long)plVar4 + 2) == 'r' && (*(char *)((long)plVar4 + 3) == 'e'))))
                    )) && (*(char *)((long)plVar4 + 4) == 'a')) &&
                  (((*(char *)((long)plVar4 + 5) == 'd' && (*(char *)((long)plVar4 + 6) == 'I')) &&
                   (*(char *)((long)plVar4 + 7) == 'd')))) {
            iVar11 = 0;
          }
          else {
LAB_1012bba9c:
            iVar11 = 2;
          }
          goto LAB_1012bbabc;
        }
        if (lStack_70 == 4) {
          if ((((char)*plVar5 != 'm') || (*(char *)((long)plVar5 + 1) != 'o')) ||
             ((*(char *)((long)plVar5 + 2) != 'd' || (*(char *)((long)plVar5 + 3) != 'e'))))
          goto LAB_1012bba38;
          iVar11 = 1;
        }
        else if ((((lStack_70 == 8) && ((char)*plVar5 == 't')) &&
                 ((*(char *)((long)plVar5 + 1) == 'h' &&
                  ((((*(char *)((long)plVar5 + 2) == 'r' && (*(char *)((long)plVar5 + 3) == 'e')) &&
                    (*(char *)((long)plVar5 + 4) == 'a')) &&
                   ((*(char *)((long)plVar5 + 5) == 'd' && (*(char *)((long)plVar5 + 6) == 'I'))))))
                 )) && (*(char *)((long)plVar5 + 7) == 'd')) {
          iVar11 = 0;
        }
        else {
LAB_1012bba38:
          iVar11 = 2;
        }
joined_r0x0001012bba5c:
        if (plVar4 != (long *)0x0) {
          _free();
        }
      }
      bVar2 = (byte)pbStack_f0;
      if (iVar11 == 0) {
        if (puVar16 != (undefined *)0x8000000000000000) {
          lStack_b0 = lVar18 + 1;
          uStack_a0 = &UNK_108c982f8;
          pbStack_98 = (byte *)0x8;
          bStack_88 = (byte)&uStack_a0;
          cStack_87 = (char)((ulong)&uStack_a0 >> 8);
          uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
          uStack_80 = 0xa0;
          uStack_7f = 0x100c7b3;
          pbStack_c8 = pbVar20;
          pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          goto LAB_1012bbe48;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
          lStack_b0 = lVar18 + 1;
          pbStack_c8 = pbVar20;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_1012bbffc;
        }
        uVar10 = *puVar17;
        puVar15[1] = puVar17[1];
        *puVar15 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar10;
        bStack_88 = bVar2;
        FUN_1004b62d4(&uStack_a0,&bStack_88);
        if (uStack_a0 == (undefined *)0x8000000000000000) {
          lStack_b0 = lVar18 + 1;
          pbVar9 = pbStack_98;
          pbStack_c8 = pbVar20;
          goto LAB_1012bbd08;
        }
        uStack_f8 = uStack_90;
        unaff_x21 = pbStack_98;
        puVar16 = uStack_a0;
      }
      else {
        if (iVar11 == 1) {
          if (cVar14 == '\x02') {
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            if (bVar2 == 0x16) goto LAB_1012bbefc;
            uVar10 = *puVar17;
            puVar15[1] = puVar17[1];
            *puVar15 = uVar10;
            uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
            *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
            *(undefined8 *)((long)puVar15 + 0xf) = uVar10;
            bStack_88 = bVar2;
            func_0x0001013d1dec(&uStack_a0,&bStack_88);
            if ((char)uStack_a0 != '\x01') {
              cVar14 = uStack_a0._1_1_;
              goto LAB_1012bb7f4;
            }
            lStack_b0 = lVar18 + 1;
            pbVar9 = pbStack_98;
            pbStack_c8 = pbVar20;
          }
          else {
            lStack_b0 = lVar18 + 1;
            uStack_a0 = &UNK_108c60ff4;
            pbStack_98 = (byte *)0x4;
            bStack_88 = (byte)&uStack_a0;
            cStack_87 = (char)((ulong)&uStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar20;
            pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
          }
          goto LAB_1012bbe48;
        }
        pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
        if (bVar2 == 0x16) {
LAB_1012bbefc:
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          lStack_b0 = lVar18 + 1;
          pbStack_c8 = pbVar20;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012bbffc:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1012bc000);
          (*pcVar7)();
        }
        uVar10 = *puVar17;
        puVar15[1] = puVar17[1];
        *puVar15 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar17 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar17 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar10;
        bStack_88 = bVar2;
        FUN_100e077ec(&bStack_88);
      }
LAB_1012bb7f4:
      lVar18 = lVar18 + 1;
      lVar19 = (lVar13 - 0x40U >> 6) + 1;
      pbVar8 = pbVar9;
      pbVar1 = pbVar20;
    } while (pbVar20 != pbVar9);
    pbStack_c8 = pbVar8;
    lStack_b0 = lVar19;
    if (puVar16 == (undefined *)0x8000000000000000) goto LAB_1012bbcd0;
    if (cVar14 != '\x02') {
      *param_1 = puVar16;
      param_1[1] = unaff_x21;
      param_1[2] = uStack_f8;
      *(char *)(param_1 + 3) = cVar14;
      FUN_100d34830(&pbStack_d0);
      if (pbVar9 == pbVar8) goto LAB_1012bbdf4;
      bStack_88 = (byte)lVar19;
      cStack_87 = (char)((ulong)lVar19 >> 8);
      uStack_86 = (undefined6)((ulong)lVar19 >> 0x10);
      uVar10 = FUN_1087e422c(((ulong)((long)pbVar9 - (long)pbVar8) >> 6) + lVar19,&bStack_88,
                             &UNK_10b23a190);
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar10;
      goto joined_r0x0001012bbef4;
    }
    uStack_a0 = &UNK_108c60ff4;
    pbStack_98 = (byte *)0x4;
    bStack_88 = (byte)&uStack_a0;
    cStack_87 = (char)((ulong)&uStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    uVar10 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar10;
joined_r0x0001012bbe54:
    if (puVar16 != (undefined *)0x0) {
      _free(unaff_x21);
    }
  }
  FUN_100d34830(&pbStack_d0);
  if ((byte)pbStack_f0 != '\x16') {
    FUN_100e077ec(&pbStack_f0);
  }
LAB_1012bbdf4:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

