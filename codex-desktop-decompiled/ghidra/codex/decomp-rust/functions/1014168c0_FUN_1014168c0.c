
void FUN_1014168c0(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  int *piVar6;
  code *pcVar7;
  bool bVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 *puVar11;
  byte *unaff_x21;
  long lVar12;
  long lVar13;
  byte *unaff_x23;
  byte *pbVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte *pbStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined *puStack_a0;
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
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    lVar10 = *(long *)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    pbVar1 = unaff_x21 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar14 = unaff_x21;
    pbStack_f0 = unaff_x21;
    lStack_e0 = lVar10;
    pbStack_d8 = pbVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_101416bdc:
      pbStack_e8 = pbVar14;
      pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b22cb40,&UNK_10b20a590);
    }
    else {
      pbVar14 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_101416bdc;
      uVar19 = *(undefined8 *)(unaff_x21 + 1);
      uStack_7f = (undefined7)*(undefined8 *)(unaff_x21 + 9);
      cStack_87 = (char)uVar19;
      uStack_86 = (undefined6)((ulong)uVar19 >> 8);
      uStack_80 = (undefined1)((ulong)uVar19 >> 0x38);
      lStack_70 = *(long *)(unaff_x21 + 0x18);
      uStack_78 = (undefined1)*(undefined8 *)(unaff_x21 + 0x10);
      uStack_77 = (undefined7)((ulong)*(undefined8 *)(unaff_x21 + 0x10) >> 8);
      pbStack_d0 = (byte *)0x1;
      pbStack_e8 = pbVar14;
      bStack_88 = *unaff_x21;
      FUN_1004b62d4(&puStack_a0,&bStack_88);
      pbVar9 = pbStack_98;
      if (puStack_a0 != (undefined *)0x8000000000000000) {
        pbVar9 = (byte *)FUN_100fbc738(&pbStack_f0);
        pbVar14 = pbStack_90;
        puVar15 = puStack_a0;
        if (pbVar9 == (byte *)0x0) goto LAB_101416d6c;
        unaff_x21 = pbStack_98;
        if (puStack_a0 != (undefined *)0x0) goto LAB_101416c2c;
        puVar15 = (undefined *)0x8000000000000000;
        goto LAB_101416d80;
      }
    }
    lVar12 = ((ulong)((long)pbVar1 - (long)pbVar14) >> 5) + 1;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100e077ec(pbVar14);
      pbVar14 = pbVar14 + 0x20;
    }
    if (lVar10 == 0) {
      puVar15 = (undefined *)0x8000000000000000;
    }
    else {
LAB_101416c2c:
      _free(unaff_x21);
LAB_101416c34:
      puVar15 = (undefined *)0x8000000000000000;
      if ((bVar4 & 0x1e) != 0x14) {
LAB_101416d78:
        FUN_100e077ec(param_2);
      }
    }
  }
  else {
    if (bVar4 != 0x15) {
      pbVar9 = (byte *)FUN_108855b04(param_2,&puStack_a0,&UNK_10b20ad40);
      goto LAB_101416d8c;
    }
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    pbStack_d0 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar1 = pbStack_d0 + lVar10;
    pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
    lStack_b0 = 0;
    pbStack_c8 = pbStack_d0;
    pbStack_b8 = pbVar1;
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar12 = 0;
      puVar16 = (undefined8 *)((ulong)&bStack_88 | 1);
      puVar11 = (undefined8 *)((ulong)&pbStack_f0 | 1);
      puVar15 = (undefined *)0x8000000000000000;
      pbVar9 = pbStack_d0;
      do {
        pbVar17 = pbVar9 + 0x40;
        bVar3 = *pbVar9;
        lVar13 = lVar12;
        pbVar14 = unaff_x23;
        pbVar18 = pbVar17;
        if (bVar3 == 0x16) break;
        uVar19 = *(undefined8 *)(pbVar9 + 0x10);
        *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)(pbVar9 + 0x18);
        *(undefined8 *)((long)puVar16 + 0xf) = uVar19;
        uVar19 = *(undefined8 *)(pbVar9 + 1);
        puVar16[1] = *(undefined8 *)(pbVar9 + 9);
        *puVar16 = uVar19;
        pbStack_e8 = *(byte **)(pbVar9 + 0x28);
        pbStack_f0 = *(byte **)(pbVar9 + 0x20);
        pbStack_d8 = *(byte **)(pbVar9 + 0x38);
        lStack_e0 = *(long *)(pbVar9 + 0x30);
        piVar5 = (int *)CONCAT71(uStack_7f,uStack_80);
        piVar6 = (int *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar3;
        if (bVar3 < 0xd) {
          if (bVar3 != 1) {
            if (bVar3 == 4) {
              bVar8 = piVar5 == (int *)0x0;
              goto LAB_101416ad0;
            }
            if (bVar3 == 0xc) {
              if (lStack_70 == 4) {
                iVar2 = *piVar6;
                if (piVar5 != (int *)0x0) {
                  _free();
                }
                if (iVar2 == 0x74786574) goto LAB_101416b4c;
              }
              else if (piVar5 != (int *)0x0) {
                _free();
              }
              goto LAB_101416ae8;
            }
LAB_101416ec0:
            lStack_b0 = lVar12 + 1;
            pbStack_c8 = pbVar17;
            pbVar9 = (byte *)FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b212a20);
            puVar15 = (undefined *)((ulong)puVar15 & 0x7fffffffffffffff);
            goto joined_r0x000101416ef8;
          }
          bVar8 = cStack_87 == '\0';
LAB_101416ad0:
          bVar8 = !bVar8;
LAB_101416adc:
          FUN_100e077ec(&bStack_88);
LAB_101416ae4:
          if (!bVar8) goto LAB_101416b4c;
LAB_101416ae8:
          bVar3 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_b0 = lVar12 + 1;
            pbStack_c8 = pbVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101416ebc;
          }
          uVar19 = *puVar11;
          puVar16[1] = puVar11[1];
          *puVar16 = uVar19;
          uVar19 = *(undefined8 *)((long)puVar11 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar19;
          bStack_88 = bVar3;
          FUN_100e077ec(&bStack_88);
        }
        else {
          if (bVar3 == 0xd) {
            if (piVar6 == (int *)0x4) {
              bVar8 = *piVar5 == 0x74786574;
              goto LAB_101416ad0;
            }
LAB_101416ad8:
            bVar8 = true;
            goto LAB_101416adc;
          }
          if (bVar3 != 0xe) {
            if (bVar3 != 0xf) goto LAB_101416ec0;
            if ((((piVar6 != (int *)0x4) || ((char)*piVar5 != 't')) ||
                (*(char *)((long)piVar5 + 1) != 'e')) || (*(char *)((long)piVar5 + 2) != 'x'))
            goto LAB_101416ad8;
            bVar8 = *(char *)((long)piVar5 + 3) == 't';
            goto LAB_101416ad0;
          }
          if (((lStack_70 == 4) && ((char)*piVar6 == 't')) &&
             ((*(char *)((long)piVar6 + 1) == 'e' && (*(char *)((long)piVar6 + 2) == 'x')))) {
            bVar8 = *(char *)((long)piVar6 + 3) != 't';
          }
          else {
            bVar8 = true;
          }
          if (piVar5 == (int *)0x0) goto LAB_101416ae4;
          _free();
          if (bVar8) goto LAB_101416ae8;
LAB_101416b4c:
          if (puVar15 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar12 + 1;
            puStack_a0 = &UNK_108c72520;
            pbStack_98 = (byte *)0x4;
            bStack_88 = (byte)&puStack_a0;
            cStack_87 = (char)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar17;
            pbVar9 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
joined_r0x000101416ef8:
            if (puVar15 != (undefined *)0x0) {
              _free(unaff_x21);
            }
            goto LAB_101416d20;
          }
          bVar3 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_b0 = lVar12 + 1;
            pbStack_c8 = pbVar17;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101416ebc:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101416ec0);
            (*pcVar7)();
          }
          uVar19 = *puVar11;
          puVar16[1] = puVar11[1];
          *puVar16 = uVar19;
          uVar19 = *(undefined8 *)((long)puVar11 + 0xf);
          *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar11 + 0x17);
          *(undefined8 *)((long)puVar16 + 0xf) = uVar19;
          bStack_88 = bVar3;
          FUN_1004b62d4(&puStack_a0,&bStack_88);
          unaff_x21 = pbStack_98;
          pbVar14 = pbStack_90;
          puVar15 = puStack_a0;
          if (puStack_a0 == (undefined *)0x8000000000000000) {
            lStack_b0 = lVar12 + 1;
            pbVar9 = pbStack_98;
            pbStack_c8 = pbVar17;
            goto LAB_101416d20;
          }
        }
        lVar12 = lVar12 + 1;
        lVar13 = (lVar10 - 0x40U >> 6) + 1;
        unaff_x23 = pbVar14;
        pbVar18 = pbVar1;
        pbVar9 = pbVar17;
      } while (pbVar17 != pbVar1);
      unaff_x23 = pbVar14;
      pbStack_c8 = pbVar18;
      lStack_b0 = lVar13;
      if (puVar15 == (undefined *)0x8000000000000000) goto LAB_101416ce8;
      FUN_100d34830(&pbStack_d0);
      pbStack_98 = unaff_x21;
      if (pbVar1 != pbVar18) {
        bStack_88 = (byte)lVar13;
        cStack_87 = (char)((ulong)lVar13 >> 8);
        uStack_86 = (undefined6)((ulong)lVar13 >> 0x10);
        pbVar9 = (byte *)FUN_1087e422c(((ulong)((long)pbVar1 - (long)pbVar18) >> 6) + lVar13,
                                       &bStack_88,&UNK_10b23a190);
        if (puVar15 != (undefined *)0x0) goto LAB_101416c2c;
        goto LAB_101416c34;
      }
LAB_101416d6c:
      pbVar9 = pbStack_98;
      if ((bVar4 & 0x1e) == 0x14) goto LAB_101416d80;
      goto LAB_101416d78;
    }
LAB_101416ce8:
    puStack_a0 = &UNK_108c72520;
    pbStack_98 = (byte *)0x4;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar9 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_101416d20:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
    puVar15 = (undefined *)0x8000000000000000;
    pbVar14 = unaff_x23;
  }
LAB_101416d80:
  if (puVar15 != (undefined *)0x8000000000000000) {
    *param_1 = puVar15;
    param_1[1] = pbVar9;
    param_1[2] = pbVar14;
    return;
  }
LAB_101416d8c:
  *param_1 = 0x8000000000000001;
  param_1[1] = pbVar9;
  return;
}

