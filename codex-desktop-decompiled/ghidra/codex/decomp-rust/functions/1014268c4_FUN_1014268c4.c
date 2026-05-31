
void FUN_1014268c4(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  byte *unaff_x21;
  byte *pbVar12;
  char cVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  byte *pbStack_100;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
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
    pbStack_100 = *(byte **)(param_2 + 8);
    pbVar12 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 0x18);
    pbVar6 = pbVar12 + lVar10 * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar7 = pbVar12;
    pbStack_f0 = pbVar12;
    pbStack_e0 = pbStack_100;
    pbStack_d8 = pbVar6;
    if (lVar10 == 0) {
LAB_101426d70:
      pbStack_e8 = pbVar7;
      pbVar16 = (byte *)FUN_1087e422c(0,&UNK_10b22e428,&UNK_10b20a590);
LAB_101426d90:
      lVar10 = ((ulong)((long)pbVar6 - (long)pbVar7) >> 5) + 1;
      while (lVar10 = lVar10 + -1, lVar10 != 0) {
        FUN_100e077ec(pbVar7);
        pbVar7 = pbVar7 + 0x20;
      }
      cVar13 = '\0';
      if (pbStack_100 == (byte *)0x0) {
        puVar15 = (undefined *)0x8000000000000000;
        unaff_x21 = pbVar16;
        goto LAB_101426f08;
      }
    }
    else {
      pbVar7 = pbVar12 + 0x20;
      if (*pbVar12 == 0x16) goto LAB_101426d70;
      uVar19 = *(undefined8 *)(pbVar12 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar12 + 9);
      cStack_87 = (char)uVar19;
      uStack_86 = (undefined6)((ulong)uVar19 >> 8);
      uStack_80 = (undefined1)((ulong)uVar19 >> 0x38);
      lStack_70 = *(long *)(pbVar12 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar12 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar12 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar7;
      bStack_88 = *pbVar12;
      FUN_1004b62d4(&uStack_a0,&bStack_88);
      unaff_x21 = pbStack_98;
      puVar15 = uStack_a0;
      pbVar16 = pbStack_98;
      if (uStack_a0 == (undefined *)0x8000000000000000) goto LAB_101426d90;
      if (lVar10 == 1) {
LAB_101426e44:
        pbVar16 = (byte *)FUN_1087e422c(1,&UNK_10b22e428,&UNK_10b20a590);
        if (puVar15 != (undefined *)0x0) {
LAB_101426e68:
          _free(unaff_x21);
        }
        goto LAB_101426d90;
      }
      pbVar7 = pbVar12 + 0x40;
      pbStack_e8 = pbVar7;
      if (pbVar12[0x20] == 0x16) goto LAB_101426e44;
      uVar19 = *(undefined8 *)(pbVar12 + 0x21);
      uStack_7f = (undefined7)*(undefined8 *)(pbVar12 + 0x29);
      cStack_87 = (char)uVar19;
      uStack_86 = (undefined6)((ulong)uVar19 >> 8);
      uStack_80 = (undefined1)((ulong)uVar19 >> 0x38);
      lStack_70 = *(long *)(pbVar12 + 0x38);
      uStack_78 = (undefined1)*(undefined8 *)(pbVar12 + 0x30);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(pbVar12 + 0x30) >> 8);
      pbStack_d0 = (byte *)0x2;
      bStack_88 = pbVar12[0x20];
      FUN_1012cdc0c(&uStack_a0,&bStack_88);
      if (((ulong)uStack_a0 & 1) != 0) {
        pbVar16 = pbStack_98;
        if (puVar15 == (undefined *)0x0) goto LAB_101426d90;
        goto LAB_101426e68;
      }
      cVar13 = uStack_a0._1_1_;
      pbVar16 = (byte *)FUN_100fbc738(&pbStack_f0);
      pbStack_100 = pbStack_90;
      if (pbVar16 == (byte *)0x0) goto LAB_101426f08;
      pbVar12 = unaff_x21;
      if (puVar15 == (undefined *)0x0) {
        puVar15 = (undefined *)0x8000000000000000;
        unaff_x21 = pbVar16;
        goto LAB_101426f08;
      }
    }
    _free(pbVar12);
    puVar15 = (undefined *)0x8000000000000000;
    unaff_x21 = pbVar16;
  }
  else {
    if (bVar2 != 0x15) {
      unaff_x21 = (byte *)FUN_108855b04(param_2,&uStack_a0,&UNK_10b20c240);
      goto LAB_101426f28;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar7 = pbStack_d0 + lVar10;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_c8 = pbStack_d0;
    pbStack_b8 = pbVar7;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_101426ea8:
      uStack_a0 = &UNK_108c73770;
      pbStack_98 = (byte *)0x4;
      bStack_88 = (byte)&uStack_a0;
      cStack_87 = (char)((ulong)&uStack_a0 >> 8);
      uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
      uStack_80 = 0xa0;
      uStack_7f = 0x100c7b3;
      pbVar6 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
    }
    else {
      lVar17 = 0;
      puVar14 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar11 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      cVar13 = '\x04';
      puVar15 = (undefined *)0x8000000000000000;
      pbVar6 = pbStack_d0;
      pbStack_c8 = pbStack_d0;
      do {
        pbVar16 = pbVar6 + 0x40;
        bVar1 = *pbVar6;
        pbVar12 = pbVar16;
        lVar18 = lVar17;
        if (bVar1 == 0x16) break;
        uVar19 = *(undefined8 *)(pbVar6 + 0x10);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)(pbVar6 + 0x18);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar19;
        uVar19 = *(undefined8 *)(pbVar6 + 1);
        puVar14[1] = *(undefined8 *)(pbVar6 + 9);
        *puVar14 = uVar19;
        pbStack_e8 = *(byte **)(pbVar6 + 0x28);
        pbStack_f0 = *(byte **)(pbVar6 + 0x20);
        pbStack_d8 = *(byte **)(pbVar6 + 0x38);
        pbStack_e0 = *(byte **)(pbVar6 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_7f,uStack_80);
        plVar4 = (long *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar1;
        if (bVar1 < 0xd) {
          if (bVar1 == 1) {
            iVar9 = 1;
            if (cStack_87 != '\x01') {
              iVar9 = 2;
            }
            iVar8 = 0;
            if (cStack_87 != '\0') {
              iVar8 = iVar9;
            }
            goto LAB_101426c30;
          }
          if (bVar1 == 4) {
            iVar9 = 1;
            if (plVar3 != (long *)0x1) {
              iVar9 = 2;
            }
            iVar8 = 0;
            if (plVar3 != (long *)0x0) {
              iVar8 = iVar9;
            }
            goto LAB_101426c30;
          }
          if (bVar1 == 0xc) {
            if (lStack_70 == 8) {
              iVar8 = 1;
              if (*plVar4 != 0x6c6f636f746f7270) {
                iVar8 = 2;
              }
            }
            else if (lStack_70 == 4) {
              iVar8 = 2;
              if ((int)*plVar4 == 0x74736f68) {
                iVar8 = 0;
              }
            }
            else {
              iVar8 = 2;
            }
            goto joined_r0x000101426b70;
          }
LAB_1014271a4:
          lStack_b0 = lVar17 + 1;
          pbStack_c8 = pbVar16;
          pbVar6 = (byte *)FUN_108855b04(&bStack_88,&uStack_a0,&UNK_10b211ec0);
joined_r0x0001014271d8:
          if (((ulong)puVar15 & 0x7fffffffffffffff) != 0) {
            _free(unaff_x21);
          }
          goto LAB_101426ee4;
        }
        if (bVar1 == 0xd) {
          if (plVar4 == (long *)0x8) {
            iVar8 = 1;
            if (*plVar3 != 0x6c6f636f746f7270) {
              iVar8 = 2;
            }
          }
          else {
            if (plVar4 != (long *)0x4) goto LAB_101426c08;
            iVar8 = 2;
            if ((int)*plVar3 == 0x74736f68) {
              iVar8 = 0;
            }
          }
LAB_101426c30:
          FUN_100e077ec(&bStack_88);
        }
        else {
          if (bVar1 != 0xe) {
            if (bVar1 != 0xf) goto LAB_1014271a4;
            if (plVar4 == (long *)0x8) {
              if (((((((char)*plVar3 != 'p') || (*(char *)((long)plVar3 + 1) != 'r')) ||
                    (*(char *)((long)plVar3 + 2) != 'o')) ||
                   ((*(char *)((long)plVar3 + 3) != 't' || (*(char *)((long)plVar3 + 4) != 'o'))))
                  || (*(char *)((long)plVar3 + 5) != 'c')) ||
                 ((*(char *)((long)plVar3 + 6) != 'o' || (*(char *)((long)plVar3 + 7) != 'l'))))
              goto LAB_101426c08;
              iVar8 = 1;
            }
            else if ((((plVar4 == (long *)0x4) && ((char)*plVar3 == 'h')) &&
                     (*(char *)((long)plVar3 + 1) == 'o')) &&
                    ((*(char *)((long)plVar3 + 2) == 's' && (*(char *)((long)plVar3 + 3) == 't'))))
            {
              iVar8 = 0;
            }
            else {
LAB_101426c08:
              iVar8 = 2;
            }
            goto LAB_101426c30;
          }
          if (lStack_70 == 8) {
            if (((((char)*plVar4 != 'p') || (*(char *)((long)plVar4 + 1) != 'r')) ||
                ((*(char *)((long)plVar4 + 2) != 'o' ||
                 (((*(char *)((long)plVar4 + 3) != 't' || (*(char *)((long)plVar4 + 4) != 'o')) ||
                  (*(char *)((long)plVar4 + 5) != 'c')))))) ||
               ((*(char *)((long)plVar4 + 6) != 'o' || (*(char *)((long)plVar4 + 7) != 'l'))))
            goto LAB_101426b6c;
            iVar8 = 1;
          }
          else if (((lStack_70 == 4) && ((char)*plVar4 == 'h')) &&
                  ((*(char *)((long)plVar4 + 1) == 'o' &&
                   ((*(char *)((long)plVar4 + 2) == 's' && (*(char *)((long)plVar4 + 3) == 't'))))))
          {
            iVar8 = 0;
          }
          else {
LAB_101426b6c:
            iVar8 = 2;
          }
joined_r0x000101426b70:
          if (plVar3 != (long *)0x0) {
            _free();
          }
        }
        bVar1 = (byte)pbStack_f0;
        if (iVar8 == 0) {
          if (puVar15 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar17 + 1;
            uStack_a0 = &UNK_108c73770;
            pbStack_98 = (byte *)0x4;
            bStack_88 = (byte)&uStack_a0;
            cStack_87 = (char)((ulong)&uStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar16;
            pbVar6 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            goto joined_r0x0001014271d8;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar1 == 0x16) {
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1014271a0;
          }
          uVar19 = *puVar11;
          puVar14[1] = puVar11[1];
          *puVar14 = uVar19;
          uVar19 = *(undefined8 *)((long)puVar11 + 0xf);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar19;
          bStack_88 = bVar1;
          FUN_1004b62d4(&uStack_a0,&bStack_88);
          if (uStack_a0 == (undefined *)0x8000000000000000) {
            lStack_b0 = lVar17 + 1;
            pbVar6 = pbStack_98;
            pbStack_c8 = pbVar16;
            goto LAB_101426ee4;
          }
          pbStack_100 = pbStack_90;
          unaff_x21 = pbStack_98;
          puVar15 = uStack_a0;
        }
        else {
          if (iVar8 == 1) {
            if (cVar13 == '\x04') {
              pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
              if (bVar1 == 0x16) goto LAB_1014270a8;
              uVar19 = *puVar11;
              puVar14[1] = puVar11[1];
              *puVar14 = uVar19;
              uVar19 = *(undefined8 *)((long)puVar11 + 0xf);
              *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
              *(undefined8 *)((long)puVar14 + 0xf) = uVar19;
              bStack_88 = bVar1;
              FUN_1012cdc0c(&uStack_a0,&bStack_88);
              if ((char)uStack_a0 != '\x01') {
                cVar13 = uStack_a0._1_1_;
                goto LAB_101426968;
              }
              lStack_b0 = lVar17 + 1;
              pbVar6 = pbStack_98;
              pbStack_c8 = pbVar16;
            }
            else {
              lStack_b0 = lVar17 + 1;
              uStack_a0 = &UNK_108c981f8;
              pbStack_98 = (byte *)0x8;
              bStack_88 = (byte)&uStack_a0;
              cStack_87 = (char)((ulong)&uStack_a0 >> 8);
              uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
              uStack_80 = 0xa0;
              uStack_7f = 0x100c7b3;
              pbStack_c8 = pbVar16;
              pbVar6 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            }
            goto joined_r0x0001014271d8;
          }
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar1 == 0x16) {
LAB_1014270a8:
            pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar16;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1014271a0:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1014271a4);
            (*pcVar5)();
          }
          uVar19 = *puVar11;
          puVar14[1] = puVar11[1];
          *puVar14 = uVar19;
          uVar19 = *(undefined8 *)((long)puVar11 + 0xf);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar19;
          bStack_88 = bVar1;
          FUN_100e077ec(&bStack_88);
        }
LAB_101426968:
        lVar17 = lVar17 + 1;
        pbVar12 = pbVar7;
        lVar18 = (lVar10 - 0x40U >> 6) + 1;
        pbVar6 = pbVar16;
      } while (pbVar16 != pbVar7);
      pbStack_c8 = pbVar12;
      lStack_b0 = lVar18;
      if (puVar15 == (undefined *)0x8000000000000000) goto LAB_101426ea8;
      if (cVar13 != '\x04') {
        FUN_100d34830(&pbStack_d0);
        if (pbVar7 != pbVar12) {
          bStack_88 = (byte)lVar18;
          cStack_87 = (char)((ulong)lVar18 >> 8);
          uStack_86 = (undefined6)((ulong)lVar18 >> 0x10);
          pbVar7 = (byte *)FUN_1087e422c(((ulong)((long)pbVar7 - (long)pbVar12) >> 6) + lVar18,
                                         &bStack_88,&UNK_10b23a190);
          if (puVar15 != (undefined *)0x0) {
            _free(unaff_x21);
          }
          puVar15 = (undefined *)0x8000000000000000;
          unaff_x21 = pbVar7;
        }
        goto LAB_101426f08;
      }
      uStack_a0 = &UNK_108c981f8;
      pbStack_98 = (byte *)0x8;
      bStack_88 = (byte)&uStack_a0;
      cStack_87 = (char)((ulong)&uStack_a0 >> 8);
      uStack_86 = (undefined6)((ulong)&uStack_a0 >> 0x10);
      uStack_80 = 0xa0;
      uStack_7f = 0x100c7b3;
      pbVar6 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
      if (puVar15 != (undefined *)0x0) {
        _free(unaff_x21);
      }
    }
LAB_101426ee4:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
    cVar13 = '\0';
    puVar15 = (undefined *)0x8000000000000000;
    pbStack_100 = pbVar7;
    unaff_x21 = pbVar6;
  }
LAB_101426f08:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  if (puVar15 != (undefined *)0x8000000000000000) {
    *param_1 = puVar15;
    param_1[1] = unaff_x21;
    param_1[2] = pbStack_100;
    *(char *)(param_1 + 3) = cVar13;
    return;
  }
LAB_101426f28:
  *param_1 = 0x8000000000000001;
  param_1[1] = unaff_x21;
  return;
}

