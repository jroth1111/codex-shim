
void FUN_10124fe6c(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  code *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  char cVar15;
  byte *unaff_x21;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
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
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    puVar17 = *(undefined **)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18);
    pbVar1 = unaff_x21 + lVar14 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar10 = unaff_x21;
    pbStack_f0 = unaff_x21;
    puStack_e0 = puVar17;
    pbStack_d8 = pbVar1;
    if (lVar14 == 0) {
LAB_10125035c:
      pbStack_e8 = pbVar10;
      pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b2316f8,&UNK_10b20a590);
LAB_101250378:
      *param_1 = 0x8000000000000000;
      param_1[1] = pbVar9;
    }
    else {
      pbVar10 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_10125035c;
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
      FUN_1014a868c(&uStack_a0,&bStack_88);
      pbVar9 = pbStack_98;
      puVar7 = uStack_a0;
      if (uStack_a0 == (undefined *)0x8000000000000000) goto LAB_101250378;
      if (lVar14 == 1) {
LAB_10125051c:
        uVar11 = FUN_1087e422c(1,&UNK_10b2316f8,&UNK_10b20a590);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
      }
      else {
        pbVar10 = unaff_x21 + 0x40;
        pbStack_e8 = pbVar10;
        if (unaff_x21[0x20] == 0x16) goto LAB_10125051c;
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
        FUN_101226150(&uStack_a0,&bStack_88);
        if (((ulong)uStack_a0 & 1) == 0) {
          *param_1 = puVar7;
          param_1[1] = pbVar9;
          param_1[2] = uStack_90;
          *(char *)(param_1 + 3) = uStack_a0._1_1_;
          lVar14 = FUN_100fbc738(&pbStack_f0);
          if (lVar14 == 0) goto LAB_1012504c8;
          *param_1 = 0x8000000000000000;
          param_1[1] = lVar14;
          unaff_x21 = pbVar9;
          puVar17 = puVar7;
          goto joined_r0x000101250618;
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
joined_r0x000101250618:
    if (puVar17 != (undefined *)0x0) {
      _free(unaff_x21);
    }
  }
  else {
    if (bVar4 != 0x15) {
      uVar11 = FUN_108855b04(param_2,&uStack_a0,&UNK_10b20ac20);
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
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar19 = 0;
      puVar16 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar18 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      cVar15 = '\x03';
      puVar17 = (undefined *)0x8000000000000000;
      pbVar1 = pbStack_d0;
      do {
        pbVar21 = pbVar1 + 0x40;
        bVar3 = *pbVar1;
        lVar20 = lVar19;
        pbVar9 = pbVar21;
        if (bVar3 == 0x16) break;
        uVar11 = *(undefined8 *)(pbVar1 + 0x10);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar11;
        uVar11 = *(undefined8 *)(pbVar1 + 1);
        puVar16[1] = *(undefined8 *)(pbVar1 + 9);
        *puVar16 = uVar11;
        pbStack_e8 = *(byte **)(pbVar1 + 0x28);
        pbStack_f0 = *(byte **)(pbVar1 + 0x20);
        pbStack_d8 = *(byte **)(pbVar1 + 0x38);
        puStack_e0 = *(undefined **)(pbVar1 + 0x30);
        plVar5 = (long *)CONCAT71(uStack_7f,uStack_80);
        plVar6 = (long *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar3;
        if (bVar3 < 0xd) {
          if (bVar3 == 1) {
            iVar13 = 1;
            if (cStack_87 != '\x01') {
              iVar13 = 2;
            }
            iVar12 = 0;
            if (cStack_87 != '\0') {
              iVar12 = iVar13;
            }
            goto LAB_10125021c;
          }
          if (bVar3 == 4) {
            iVar13 = 1;
            if (plVar5 != (long *)0x1) {
              iVar13 = 2;
            }
            iVar12 = 0;
            if (plVar5 != (long *)0x0) {
              iVar12 = iVar13;
            }
            goto LAB_10125021c;
          }
          if (bVar3 == 0xc) {
            if (lStack_70 == 9) {
              iVar12 = 1;
              if (*plVar6 != 0x7669737275636572 || (char)plVar6[1] != 'e') {
                iVar12 = 2;
              }
            }
            else if (lStack_70 == 4) {
              iVar12 = 2;
              if ((int)*plVar6 == 0x68746170) {
                iVar12 = 0;
              }
            }
            else {
              iVar12 = 2;
            }
            goto joined_r0x000101250164;
          }
LAB_101250730:
          lStack_b0 = lVar19 + 1;
          pbStack_c8 = pbVar21;
          pbVar10 = (byte *)FUN_108855b04(&bStack_88,&uStack_a0,&UNK_10b20d700);
LAB_10125056c:
          *param_1 = 0x8000000000000000;
          param_1[1] = pbVar10;
          puVar17 = (undefined *)((ulong)puVar17 & 0x7fffffffffffffff);
joined_r0x0001012506a4:
          if (puVar17 != (undefined *)0x0) {
            _free(unaff_x21);
          }
          goto LAB_101250474;
        }
        if (bVar3 == 0xd) {
          if (plVar6 == (long *)0x9) {
            iVar12 = 1;
            if (*plVar5 != 0x7669737275636572 || (char)plVar5[1] != 'e') {
              iVar12 = 2;
            }
          }
          else {
            if (plVar6 != (long *)0x4) goto LAB_1012501e0;
            iVar12 = 2;
            if ((int)*plVar5 == 0x68746170) {
              iVar12 = 0;
            }
          }
LAB_10125021c:
          FUN_100e077ec(&bStack_88);
        }
        else {
          if (bVar3 != 0xe) {
            if (bVar3 != 0xf) goto LAB_101250730;
            if (plVar6 == (long *)0x9) {
              if (((((((char)*plVar5 != 'r') || (*(char *)((long)plVar5 + 1) != 'e')) ||
                    (*(char *)((long)plVar5 + 2) != 'c')) ||
                   ((*(char *)((long)plVar5 + 3) != 'u' || (*(char *)((long)plVar5 + 4) != 'r'))))
                  || (*(char *)((long)plVar5 + 5) != 's')) ||
                 (((*(char *)((long)plVar5 + 6) != 'i' || (*(char *)((long)plVar5 + 7) != 'v')) ||
                  ((char)plVar5[1] != 'e')))) goto LAB_1012501e0;
              iVar12 = 1;
            }
            else if ((((plVar6 == (long *)0x4) && ((char)*plVar5 == 'p')) &&
                     (*(char *)((long)plVar5 + 1) == 'a')) &&
                    ((*(char *)((long)plVar5 + 2) == 't' && (*(char *)((long)plVar5 + 3) == 'h'))))
            {
              iVar12 = 0;
            }
            else {
LAB_1012501e0:
              iVar12 = 2;
            }
            goto LAB_10125021c;
          }
          if (lStack_70 == 9) {
            if (((((char)*plVar6 != 'r') || (*(char *)((long)plVar6 + 1) != 'e')) ||
                ((*(char *)((long)plVar6 + 2) != 'c' ||
                 (((*(char *)((long)plVar6 + 3) != 'u' || (*(char *)((long)plVar6 + 4) != 'r')) ||
                  (*(char *)((long)plVar6 + 5) != 's')))))) ||
               (((*(char *)((long)plVar6 + 6) != 'i' || (*(char *)((long)plVar6 + 7) != 'v')) ||
                ((char)plVar6[1] != 'e')))) goto LAB_101250124;
            iVar12 = 1;
          }
          else if (((lStack_70 == 4) && ((char)*plVar6 == 'p')) &&
                  ((*(char *)((long)plVar6 + 1) == 'a' &&
                   ((*(char *)((long)plVar6 + 2) == 't' && (*(char *)((long)plVar6 + 3) == 'h'))))))
          {
            iVar12 = 0;
          }
          else {
LAB_101250124:
            iVar12 = 2;
          }
joined_r0x000101250164:
          if (plVar5 != (long *)0x0) {
            _free();
          }
        }
        bVar3 = (byte)pbStack_f0;
        if (iVar12 == 0) {
          if (puVar17 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar19 + 1;
            uStack_a0 = &UNK_108c61038;
            pbStack_98 = (byte *)0x4;
            bStack_88 = (byte)&uStack_a0;
            cStack_87 = (char)((ulong)&uStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar21;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar11;
            goto joined_r0x0001012506a4;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_b0 = lVar19 + 1;
            pbStack_c8 = pbVar21;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_10125072c;
          }
          uVar11 = *puVar18;
          puVar16[1] = puVar18[1];
          *puVar16 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar18 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar11;
          bStack_88 = bVar3;
          FUN_1014a868c(&uStack_a0,&bStack_88);
          if (uStack_a0 == (undefined *)0x8000000000000000) {
            lStack_b0 = lVar19 + 1;
            pbVar10 = pbStack_98;
            pbStack_c8 = pbVar21;
            goto LAB_10125046c;
          }
          uStack_f8 = uStack_90;
          unaff_x21 = pbStack_98;
          puVar17 = uStack_a0;
        }
        else {
          if (iVar12 == 1) {
            if (cVar15 == '\x03') {
              pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
              if (bVar3 == 0x16) goto LAB_101250620;
              uVar11 = *puVar18;
              puVar16[1] = puVar18[1];
              *puVar16 = uVar11;
              uVar11 = *(undefined8 *)((long)puVar18 + 0xf);
              *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
              *(undefined8 *)((long)puVar16 + 0xf) = uVar11;
              bStack_88 = bVar3;
              FUN_101226150(&uStack_a0,&bStack_88);
              if ((char)uStack_a0 != '\x01') {
                cVar15 = uStack_a0._1_1_;
                goto LAB_10124ff14;
              }
              lStack_b0 = lVar19 + 1;
              pbVar10 = pbStack_98;
              pbStack_c8 = pbVar21;
            }
            else {
              lStack_b0 = lVar19 + 1;
              uStack_a0 = &UNK_108cbc2d3;
              pbStack_98 = (byte *)0x9;
              bStack_88 = (byte)&uStack_a0;
              cStack_87 = (char)((ulong)&uStack_a0 >> 8);
              uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
              uStack_80 = 0xa0;
              uStack_7f = 0x100c7b3;
              pbStack_c8 = pbVar21;
              pbVar10 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            }
            goto LAB_10125056c;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar3 == 0x16) {
LAB_101250620:
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            lStack_b0 = lVar19 + 1;
            pbStack_c8 = pbVar21;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10125072c:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101250730);
            (*pcVar8)();
          }
          uVar11 = *puVar18;
          puVar16[1] = puVar18[1];
          *puVar16 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar18 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar11;
          bStack_88 = bVar3;
          FUN_100e077ec(&bStack_88);
        }
LAB_10124ff14:
        lVar19 = lVar19 + 1;
        lVar20 = (lVar14 - 0x40U >> 6) + 1;
        pbVar9 = pbVar10;
        pbVar1 = pbVar21;
      } while (pbVar21 != pbVar10);
      pbStack_c8 = pbVar9;
      lStack_b0 = lVar20;
      if (puVar17 != (undefined *)0x8000000000000000) {
        cVar2 = '\x02';
        if (cVar15 != '\x03') {
          cVar2 = cVar15;
        }
        *param_1 = puVar17;
        param_1[1] = unaff_x21;
        param_1[2] = uStack_f8;
        *(char *)(param_1 + 3) = cVar2;
        FUN_100d34830(&pbStack_d0);
        if (pbVar10 == pbVar9) goto LAB_1012504c8;
        bStack_88 = (byte)lVar20;
        cStack_87 = (char)((ulong)lVar20 >> 8);
        uStack_86 = (undefined6)((ulong)lVar20 >> 0x10);
        uVar11 = FUN_1087e422c(((ulong)((long)pbVar10 - (long)pbVar9) >> 6) + lVar20,&bStack_88,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        goto joined_r0x000101250618;
      }
    }
    uStack_a0 = &UNK_108c61038;
    pbStack_98 = (byte *)0x4;
    bStack_88 = (byte)&uStack_a0;
    cStack_87 = (char)((ulong)&uStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar10 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_10125046c:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar10;
LAB_101250474:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
  }
LAB_1012504c8:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

