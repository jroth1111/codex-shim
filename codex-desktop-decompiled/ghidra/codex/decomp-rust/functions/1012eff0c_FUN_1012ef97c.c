
/* WARNING: Type propagation algorithm not settling */

void FUN_1012ef97c(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  byte *unaff_x21;
  undefined *puVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
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
    puVar12 = *(undefined **)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    pbVar9 = unaff_x21 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar13 = unaff_x21;
    pbStack_f0 = unaff_x21;
    puStack_e0 = puVar12;
    pbStack_d8 = pbVar9;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_1012efd00:
      pbStack_e8 = pbVar13;
      pbVar8 = (byte *)FUN_1087e422c(0,&UNK_10b231fc8,&UNK_10b20a590);
    }
    else {
      pbVar13 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_1012efd00;
      uVar10 = *(undefined8 *)(unaff_x21 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 9);
      cStack_87 = (char)uVar10;
      uStack_86 = (undefined6)((ulong)uVar10 >> 8);
      uStack_80 = (undefined1)((ulong)uVar10 >> 0x38);
      lStack_70 = *(long *)(unaff_x21 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar13;
      bStack_88 = *unaff_x21;
      FUN_1004b62d4(&puStack_a0,&bStack_88);
      pbVar8 = pbStack_98;
      puVar5 = puStack_a0;
      if (puStack_a0 != (undefined *)0x8000000000000000) {
        *param_1 = puStack_a0;
        param_1[1] = pbStack_98;
        param_1[2] = uStack_90;
        lVar11 = FUN_100fbc738(&pbStack_f0);
        if (lVar11 == 0) goto LAB_1012efe68;
        *param_1 = 0x8000000000000000;
        param_1[1] = lVar11;
        unaff_x21 = pbVar8;
        puVar12 = puVar5;
        goto joined_r0x0001012efdb8;
      }
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar8;
    lVar11 = ((ulong)((long)pbVar9 - (long)pbVar13) >> 5) + 1;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      FUN_100e077ec(pbVar13);
      pbVar13 = pbVar13 + 0x20;
    }
joined_r0x0001012efdb8:
    if (puVar12 != (undefined *)0x0) {
      _free(unaff_x21);
    }
  }
  else {
    if (bVar2 != 0x15) {
      uVar10 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20c4e0);
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
      lVar16 = 0;
      puVar14 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar15 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      puVar12 = (undefined *)0x8000000000000000;
      pbVar13 = pbStack_d0;
      do {
        pbVar17 = pbVar13 + 0x40;
        bVar1 = *pbVar13;
        lVar18 = lVar16;
        pbVar8 = pbVar17;
        if (bVar1 == 0x16) break;
        uVar10 = *(undefined8 *)(pbVar13 + 0x10);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar10;
        uVar10 = *(undefined8 *)(pbVar13 + 1);
        puVar14[1] = *(undefined8 *)(pbVar13 + 9);
        *puVar14 = uVar10;
        pbStack_e8 = *(byte **)(pbVar13 + 0x28);
        pbStack_f0 = *(byte **)(pbVar13 + 0x20);
        pbStack_d8 = *(byte **)(pbVar13 + 0x38);
        puStack_e0 = *(undefined **)(pbVar13 + 0x30);
        plVar3 = (long *)CONCAT71(uStack_7f,uStack_80);
        plVar4 = (long *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar1;
        if (bVar1 < 0xd) {
          if (bVar1 == 1) {
            bVar7 = cStack_87 == '\0';
LAB_1012efbf0:
            bVar7 = !bVar7;
            goto LAB_1012efbfc;
          }
          if (bVar1 == 4) {
            bVar7 = plVar3 == (long *)0x0;
            goto LAB_1012efbf0;
          }
          if (bVar1 != 0xc) goto LAB_1012eff70;
          if (lStack_70 == 8) {
            lVar18 = *plVar4;
            if (plVar3 != (long *)0x0) {
              _free();
            }
            if (lVar18 != 0x6449646165726874) goto LAB_1012efc08;
            goto LAB_1012efc6c;
          }
          if (plVar3 != (long *)0x0) {
            _free();
          }
LAB_1012efc08:
          bVar1 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar1 == 0x16) {
            lStack_b0 = lVar16 + 1;
            pbStack_c8 = pbVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1012eff6c:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1012eff70);
            (*pcVar6)();
          }
          uVar10 = *puVar15;
          puVar14[1] = puVar15[1];
          *puVar14 = uVar10;
          uVar10 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar10;
          bStack_88 = bVar1;
          FUN_100e077ec(&bStack_88);
        }
        else {
          if (bVar1 != 0xd) {
            if (bVar1 == 0xe) {
              if (((((lStack_70 == 8) && ((char)*plVar4 == 't')) &&
                   (*(char *)((long)plVar4 + 1) == 'h')) &&
                  ((*(char *)((long)plVar4 + 2) == 'r' && (*(char *)((long)plVar4 + 3) == 'e')))) &&
                 ((*(char *)((long)plVar4 + 4) == 'a' &&
                  ((*(char *)((long)plVar4 + 5) == 'd' && (*(char *)((long)plVar4 + 6) == 'I'))))))
              {
                bVar7 = *(char *)((long)plVar4 + 7) != 'd';
              }
              else {
                bVar7 = true;
              }
              if (plVar3 != (long *)0x0) {
                _free();
              }
              goto joined_r0x0001012efc48;
            }
            if (bVar1 == 0xf) {
              if ((((plVar4 == (long *)0x8) && ((char)*plVar3 == 't')) &&
                  (*(char *)((long)plVar3 + 1) == 'h')) &&
                 (((*(char *)((long)plVar3 + 2) == 'r' && (*(char *)((long)plVar3 + 3) == 'e')) &&
                  ((*(char *)((long)plVar3 + 4) == 'a' &&
                   ((*(char *)((long)plVar3 + 5) == 'd' && (*(char *)((long)plVar3 + 6) == 'I'))))))
                 )) {
                bVar7 = *(char *)((long)plVar3 + 7) == 'd';
                goto LAB_1012efbf0;
              }
              goto LAB_1012efbf8;
            }
LAB_1012eff70:
            lStack_b0 = lVar16 + 1;
            pbStack_c8 = pbVar17;
            uVar10 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b20d0a0);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar10;
            puVar12 = (undefined *)((ulong)puVar12 & 0x7fffffffffffffff);
joined_r0x0001012effa8:
            if (puVar12 != (undefined *)0x0) {
              _free(unaff_x21);
            }
            goto LAB_1012efe28;
          }
          if (plVar4 == (long *)0x8) {
            bVar7 = *plVar3 == 0x6449646165726874;
            goto LAB_1012efbf0;
          }
LAB_1012efbf8:
          bVar7 = true;
LAB_1012efbfc:
          FUN_100e077ec(&bStack_88);
joined_r0x0001012efc48:
          if (bVar7) goto LAB_1012efc08;
LAB_1012efc6c:
          if (puVar12 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar16 + 1;
            puStack_a0 = &UNK_108c982f8;
            pbStack_98 = (byte *)0x8;
            bStack_88 = (byte)&puStack_a0;
            cStack_87 = (char)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar17;
            uVar10 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar10;
            goto joined_r0x0001012effa8;
          }
          bVar1 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar1 == 0x16) {
            lStack_b0 = lVar16 + 1;
            pbStack_c8 = pbVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1012eff6c;
          }
          uVar10 = *puVar15;
          puVar14[1] = puVar15[1];
          *puVar14 = uVar10;
          uVar10 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar14 + 0xf) = uVar10;
          bStack_88 = bVar1;
          FUN_1004b62d4(&puStack_a0,&bStack_88);
          if (puStack_a0 == (undefined *)0x8000000000000000) {
            lStack_b0 = lVar16 + 1;
            pbVar9 = pbStack_98;
            pbStack_c8 = pbVar17;
            goto LAB_1012efe20;
          }
          uStack_f8 = uStack_90;
          unaff_x21 = pbStack_98;
          puVar12 = puStack_a0;
        }
        lVar16 = lVar16 + 1;
        lVar18 = (lVar11 - 0x40U >> 6) + 1;
        pbVar8 = pbVar9;
        pbVar13 = pbVar17;
      } while (pbVar17 != pbVar9);
      pbStack_c8 = pbVar8;
      lStack_b0 = lVar18;
      if (puVar12 != (undefined *)0x8000000000000000) {
        *param_1 = puVar12;
        param_1[1] = unaff_x21;
        param_1[2] = uStack_f8;
        FUN_100d34830(&pbStack_d0);
        if (pbVar9 == pbVar8) goto LAB_1012efe68;
        bStack_88 = (byte)lVar18;
        cStack_87 = (char)((ulong)lVar18 >> 8);
        uStack_86 = (undefined6)((ulong)lVar18 >> 0x10);
        uVar10 = FUN_1087e422c(((ulong)((long)pbVar9 - (long)pbVar8) >> 6) + lVar18,&bStack_88,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar10;
        goto joined_r0x0001012efdb8;
      }
    }
    puStack_a0 = &UNK_108c982f8;
    pbStack_98 = (byte *)0x8;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_1012efe20:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar9;
LAB_1012efe28:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
  }
LAB_1012efe68:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

