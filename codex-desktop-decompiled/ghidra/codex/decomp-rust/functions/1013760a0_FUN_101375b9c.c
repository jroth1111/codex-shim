
void FUN_101375b9c(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short *psVar4;
  ushort *puVar5;
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
  
  bVar2 = *param_2;
  if (bVar2 == 0x14) {
    puVar13 = *(undefined **)(param_2 + 8);
    unaff_x21 = *(byte **)(param_2 + 0x10);
    pbVar10 = unaff_x21 + *(long *)(param_2 + 0x18) * 0x20;
    pbStack_d0 = (byte *)0x0;
    pbVar14 = unaff_x21;
    pbStack_f0 = unaff_x21;
    puStack_e0 = puVar13;
    pbStack_d8 = pbVar10;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_101375e84:
      pbStack_e8 = pbVar14;
      pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b22fc18,&UNK_10b20a590);
    }
    else {
      pbVar14 = unaff_x21 + 0x20;
      if (*unaff_x21 == 0x16) goto LAB_101375e84;
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
      FUN_1004b64d4(&puStack_a0,&bStack_88);
      pbVar9 = pbStack_98;
      puVar6 = puStack_a0;
      if (puStack_a0 != (undefined *)0x8000000000000000) {
        *param_1 = puStack_a0;
        param_1[1] = pbStack_98;
        param_1[2] = uStack_90;
        lVar12 = FUN_100fbc738(&pbStack_f0);
        if (lVar12 == 0) goto LAB_101375ff8;
        *param_1 = 0x8000000000000000;
        param_1[1] = lVar12;
        unaff_x21 = pbVar9;
        puVar13 = puVar6;
        goto joined_r0x000101375f44;
      }
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar9;
    lVar12 = ((ulong)((long)pbVar10 - (long)pbVar14) >> 5) + 1;
    while (lVar12 = lVar12 + -1, lVar12 != 0) {
      FUN_100e077ec(pbVar14);
      pbVar14 = pbVar14 + 0x20;
    }
joined_r0x000101375f44:
    if (puVar13 != (undefined *)0x0) {
      _free(unaff_x21);
    }
  }
  else {
    if (bVar2 != 0x15) {
      uVar11 = FUN_108855b04(param_2,&puStack_a0,&UNK_10b20bda0);
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
        bVar1 = *pbVar14;
        lVar18 = lVar17;
        pbVar9 = pbVar19;
        if (bVar1 == 0x16) break;
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
        psVar4 = (short *)CONCAT71(uStack_7f,uStack_80);
        puVar5 = (ushort *)CONCAT71(uStack_77,uStack_78);
        bStack_88 = bVar1;
        if (bVar1 < 0xd) {
          if (bVar1 != 1) {
            if (bVar1 == 4) {
              bVar8 = psVar4 == (short *)0x0;
              goto LAB_101375d88;
            }
            if (bVar1 == 0xc) {
              if (lStack_70 == 3) {
                uVar3 = *puVar5;
                bVar1 = (byte)puVar5[1] ^ 100;
                bVar8 = (uVar3 ^ 0x7763) != 0 || bVar1 != 0;
                if (psVar4 == (short *)0x0) goto LAB_101375d9c;
                _free();
                if ((uVar3 ^ 0x7763) == 0 && bVar1 == 0) goto LAB_101375de4;
              }
              else if (psVar4 != (short *)0x0) {
                _free();
              }
              goto LAB_101375da0;
            }
LAB_101376108:
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar19;
            uVar11 = FUN_108855b04(&bStack_88,&puStack_a0,&UNK_10b210e80);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar11;
            puVar13 = (undefined *)((ulong)puVar13 & 0x7fffffffffffffff);
            goto joined_r0x000101376140;
          }
          bVar8 = cStack_87 == '\0';
LAB_101375d88:
          bVar8 = !bVar8;
LAB_101375d94:
          FUN_100e077ec(&bStack_88);
LAB_101375d9c:
          if (!bVar8) goto LAB_101375de4;
LAB_101375da0:
          bVar1 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar1 == 0x16) {
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101376104;
          }
          uVar11 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar11;
          bStack_88 = bVar1;
          FUN_100e077ec(&bStack_88);
        }
        else {
          if (bVar1 == 0xd) {
            if (puVar5 == (ushort *)0x3) {
              bVar8 = false;
              if (*psVar4 == 0x7763) {
                bVar8 = (char)psVar4[1] == 'd';
              }
              goto LAB_101375d88;
            }
LAB_101375d90:
            bVar8 = true;
            goto LAB_101375d94;
          }
          if (bVar1 != 0xe) {
            if (bVar1 != 0xf) goto LAB_101376108;
            if (((puVar5 != (ushort *)0x3) || ((char)*psVar4 != 'c')) ||
               (*(char *)((long)psVar4 + 1) != 'w')) goto LAB_101375d90;
            bVar8 = (char)psVar4[1] == 'd';
            goto LAB_101375d88;
          }
          if (((lStack_70 == 3) && ((char)*puVar5 == 'c')) && (*(char *)((long)puVar5 + 1) == 'w'))
          {
            bVar8 = (char)puVar5[1] != 'd';
          }
          else {
            bVar8 = true;
          }
          if (psVar4 == (short *)0x0) goto LAB_101375d9c;
          _free();
          if (bVar8) goto LAB_101375da0;
LAB_101375de4:
          if (puVar13 != (undefined *)0x8000000000000000) {
            lStack_b0 = lVar17 + 1;
            puStack_a0 = &UNK_108ca1f1d;
            pbStack_98 = (byte *)0x3;
            bStack_88 = (byte)&puStack_a0;
            cStack_87 = (char)((ulong)&puStack_a0 >> 8);
            uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
            uStack_80 = 0xa0;
            uStack_7f = 0x100c7b3;
            pbStack_c8 = pbVar19;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_88);
            *param_1 = 0x8000000000000000;
            param_1[1] = uVar11;
joined_r0x000101376140:
            if (puVar13 != (undefined *)0x0) {
              _free(unaff_x21);
            }
            goto LAB_101375fb4;
          }
          bVar1 = (byte)pbStack_f0;
          pbStack_f0 = (byte *)CONCAT71(pbStack_f0._1_7_,0x16);
          if (bVar1 == 0x16) {
            lStack_b0 = lVar17 + 1;
            pbStack_c8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101376104:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101376108);
            (*pcVar7)();
          }
          uVar11 = *puVar16;
          puVar15[1] = puVar16[1];
          *puVar15 = uVar11;
          uVar11 = *(undefined8 *)((long)puVar16 + 0xf);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar11;
          bStack_88 = bVar1;
          FUN_1004b64d4(&puStack_a0,&bStack_88);
          if (puStack_a0 == (undefined *)0x8000000000000000) {
            lStack_b0 = lVar17 + 1;
            pbVar10 = pbStack_98;
            pbStack_c8 = pbVar19;
            goto LAB_101375fac;
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
        if (pbVar10 == pbVar9) goto LAB_101375ff8;
        bStack_88 = (byte)lVar18;
        cStack_87 = (char)((ulong)lVar18 >> 8);
        uStack_86 = (undefined6)((ulong)lVar18 >> 0x10);
        uVar11 = FUN_1087e422c(((ulong)((long)pbVar10 - (long)pbVar9) >> 6) + lVar18,&bStack_88,
                               &UNK_10b23a190);
        *param_1 = 0x8000000000000000;
        param_1[1] = uVar11;
        goto joined_r0x000101375f44;
      }
    }
    puStack_a0 = &UNK_108ca1f1d;
    pbStack_98 = (byte *)0x3;
    bStack_88 = (byte)&puStack_a0;
    cStack_87 = (char)((ulong)&puStack_a0 >> 8);
    uStack_86 = (undefined6)((ulong)&puStack_a0 >> 0x10);
    uStack_80 = 0xa0;
    uStack_7f = 0x100c7b3;
    pbVar10 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,&bStack_88);
LAB_101375fac:
    *param_1 = 0x8000000000000000;
    param_1[1] = pbVar10;
LAB_101375fb4:
    FUN_100d34830(&pbStack_d0);
    if ((byte)pbStack_f0 != '\x16') {
      FUN_100e077ec(&pbStack_f0);
    }
  }
LAB_101375ff8:
  if ((bVar2 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

