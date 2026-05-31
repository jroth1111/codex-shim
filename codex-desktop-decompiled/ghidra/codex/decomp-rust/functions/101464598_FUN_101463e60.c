
void FUN_101463e60(undefined8 *param_1,byte *param_2)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte bVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong *unaff_x22;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong uStack_1e0;
  ulong *puStack_1d8;
  ulong *puStack_1d0;
  ulong uStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  undefined8 uStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_190;
  ulong *puStack_188;
  ulong uStack_180;
  ulong *puStack_178;
  ulong *puStack_170;
  undefined8 uStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong uStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  byte bStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  char acStack_b0 [8];
  undefined8 *puStack_a8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  bVar2 = *param_2;
  if (bVar2 == 0x14) {
    uVar12 = *(ulong *)(param_2 + 8);
    puVar20 = *(ulong **)(param_2 + 0x10);
    puVar1 = puVar20 + *(long *)(param_2 + 0x18) * 4;
    puStack_170 = (ulong *)0x0;
    puVar16 = puVar20;
    puStack_190 = puVar20;
    uStack_180 = uVar12;
    puStack_178 = puVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_101464280:
      puStack_188 = puVar16;
      puStack_1f8 = (ulong *)FUN_1087e422c(0,&UNK_10b229cf0,&UNK_10b20a590);
    }
    else {
      puVar16 = puVar20 + 4;
      bVar13 = (byte)*puVar20;
      if (bVar13 == 0x16) goto LAB_101464280;
      uStack_d7 = (undefined7)*(undefined8 *)((long)puVar20 + 9);
      uStack_df = (undefined7)*(undefined8 *)((long)puVar20 + 1);
      uStack_d8 = (undefined1)((ulong)*(undefined8 *)((long)puVar20 + 1) >> 0x38);
      puStack_c8 = (ulong *)puVar20[3];
      uStack_d0 = (undefined1)puVar20[2];
      uStack_cf = (undefined7)(puVar20[2] >> 8);
      puStack_170 = (ulong *)0x1;
      puStack_188 = puVar16;
      bStack_e0 = bVar13;
      if (bVar13 == 0x10) {
LAB_101464328:
        uStack_1e0 = 0;
        puStack_1d8 = (ulong *)0x0;
        FUN_100e077ec(&bStack_e0);
LAB_1014644b8:
        puStack_1f8 = puStack_1d8;
      }
      else {
        if (bVar13 != 0x11) {
          if (bVar13 == 0x12) goto LAB_101464328;
          FUN_10144fde0(&uStack_1e0,&bStack_e0);
          goto LAB_1014644b8;
        }
        puVar11 = (undefined8 *)CONCAT71(uStack_d7,uStack_d8);
        puStack_118 = (ulong *)puVar11[1];
        uStack_120 = (undefined **)*puVar11;
        uStack_108 = puVar11[3];
        puStack_110 = (ulong *)puVar11[2];
        FUN_10144fde0(&uStack_1e0,&uStack_120);
        _free(puVar11);
        puStack_1f8 = puStack_1d8;
      }
      puStack_1d8 = puStack_1f8;
      if ((int)uStack_1e0 != 1) {
        uStack_120 = (undefined **)0x0;
        puStack_160 = puStack_1f8;
        puStack_158 = puStack_1d0;
        puStack_118 = puStack_1f8;
        puStack_110 = puStack_1d0;
        uStack_108 = uStack_1c8;
        puStack_100 = puStack_1c0;
        puStack_f8 = puStack_1b8;
        uStack_f0 = uStack_1b0;
        unaff_x22 = (ulong *)FUN_100fbc738(&puStack_190);
        if (unaff_x22 == (ulong *)0x0) {
          bVar9 = false;
        }
        else {
          puStack_118 = unaff_x22;
          if (puStack_160 != (ulong *)0x0) {
            FUN_100cb56bc(&puStack_160);
          }
LAB_101464518:
          bVar9 = true;
          puStack_1f8 = unaff_x22;
        }
        goto LAB_1014643c8;
      }
    }
    lVar14 = ((ulong)((long)puVar1 - (long)puVar16) >> 5) + 1;
    puStack_118 = puStack_1f8;
    while (lVar14 = lVar14 + -1, lVar14 != 0) {
      FUN_100e077ec(puVar16);
      puVar16 = puVar16 + 4;
    }
    if (uVar12 != 0) {
      _free(puVar20);
    }
    bVar9 = true;
LAB_1014643c8:
    if ((bVar2 & 0x1e) != 0x14) {
      FUN_100e077ec(param_2);
    }
    if (!bVar9) {
      param_1[2] = puStack_110;
      param_1[1] = puStack_118;
      param_1[4] = puStack_100;
      param_1[3] = uStack_108;
      param_1[6] = uStack_f0;
      param_1[5] = puStack_f8;
      uVar10 = 1;
      goto LAB_101464408;
    }
  }
  else {
    if (bVar2 == 0x15) {
      uStack_1b0 = *(undefined8 *)(param_2 + 8);
      puStack_1c0 = *(ulong **)(param_2 + 0x10);
      lVar14 = *(long *)(param_2 + 0x18);
      puVar1 = puStack_1c0 + lVar14 * 8;
      uStack_1e0 = CONCAT71(uStack_1e0._1_7_,0x16);
      puStack_1a0 = (ulong *)0x0;
      puStack_1b8 = puStack_1c0;
      puStack_1a8 = puVar1;
      if (lVar14 == 0) {
        puStack_1f8 = (ulong *)0x0;
      }
      else {
        puVar20 = (ulong *)0x0;
        bVar9 = false;
        puVar19 = (undefined8 *)((ulong)&uStack_120 | 1);
        puVar15 = (undefined8 *)((ulong)&uStack_1e0 | 1);
        puVar11 = (undefined8 *)((ulong)acStack_b0 | 1);
        puStack_1f0 = (ulong *)0x0;
        puVar16 = puStack_1c0;
        do {
          ppuVar4 = uStack_120;
          puVar17 = puVar16 + 8;
          bVar13 = (byte)*puVar16;
          puVar18 = puVar17;
          puVar21 = puVar20;
          if (bVar13 == 0x16) break;
          uStack_120 = (undefined **)CONCAT71(uStack_120._1_7_,bVar13);
          ppuVar5 = uStack_120;
          uVar12 = puVar16[2];
          *(ulong *)((long)puVar19 + 0x17) = puVar16[3];
          *(ulong *)((long)puVar19 + 0xf) = uVar12;
          uVar10 = *(undefined8 *)((long)puVar16 + 1);
          puVar19[1] = *(undefined8 *)((long)puVar16 + 9);
          *puVar19 = uVar10;
          puStack_1d8 = (ulong *)puVar16[5];
          uStack_1e0 = puVar16[4];
          uStack_1c8 = puVar16[7];
          puStack_1d0 = (ulong *)puVar16[6];
          if (0xc < bVar13) {
            if (bVar13 == 0xd) {
              if (puStack_110 == (ulong *)0x9) {
                bVar8 = false;
                if (*puStack_118 == 0x746e656d75677261) {
                  bVar8 = (char)puStack_118[1] == 's';
                }
                goto LAB_101464104;
              }
LAB_10146410c:
              bVar8 = true;
              goto LAB_101464110;
            }
            if (bVar13 != 0xe) {
              if (bVar13 != 0xf) goto LAB_1014645e0;
              if (((((puStack_110 != (ulong *)0x9) || ((char)*puStack_118 != 'a')) ||
                   (*(char *)((long)puStack_118 + 1) != 'r')) ||
                  ((*(char *)((long)puStack_118 + 2) != 'g' ||
                   (*(char *)((long)puStack_118 + 3) != 'u')))) ||
                 (((*(char *)((long)puStack_118 + 4) != 'm' ||
                   ((*(char *)((long)puStack_118 + 5) != 'e' ||
                    (*(char *)((long)puStack_118 + 6) != 'n')))) ||
                  (*(char *)((long)puStack_118 + 7) != 't')))) goto LAB_10146410c;
              bVar8 = (char)puStack_118[1] == 's';
              goto LAB_101464104;
            }
            if (((((uStack_108 == 9) && ((char)*puStack_110 == 'a')) &&
                 (*(char *)((long)puStack_110 + 1) == 'r')) &&
                (((*(char *)((long)puStack_110 + 2) == 'g' &&
                  (*(char *)((long)puStack_110 + 3) == 'u')) &&
                 ((*(char *)((long)puStack_110 + 4) == 'm' &&
                  ((*(char *)((long)puStack_110 + 5) == 'e' &&
                   (*(char *)((long)puStack_110 + 6) == 'n')))))))) &&
               (*(char *)((long)puStack_110 + 7) == 't')) {
              bVar8 = (char)puStack_110[1] != 's';
            }
            else {
              bVar8 = true;
            }
            if (puStack_118 == (ulong *)0x0) goto LAB_101464118;
            _free();
            if (bVar8) goto LAB_10146411c;
LAB_101464160:
            puVar6 = puStack_a8;
            if (bVar9) {
              puStack_1a0 = (ulong *)((long)puVar20 + 1);
              puStack_160 = puStack_1f0;
              puStack_90 = &UNK_108cadb54;
              uStack_88 = 9;
              uStack_120 = &puStack_90;
              puStack_118 = (ulong *)&DAT_100c7b3a0;
              puStack_1b8 = puVar17;
              puStack_158 = unaff_x22;
              unaff_x22 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_120);
LAB_10146460c:
              puStack_118 = unaff_x22;
              if ((bVar9) && (puStack_1f8 != (ulong *)0x0)) {
                FUN_100cb56bc(&puStack_158);
              }
            }
            else {
              cVar3 = (char)uStack_1e0;
              uStack_1e0 = CONCAT71(uStack_1e0._1_7_,0x16);
              if (cVar3 == '\x16') {
                puStack_1a0 = (ulong *)((long)puVar20 + 1);
                puStack_160 = puStack_1f0;
                puStack_1b8 = puVar17;
                puStack_158 = unaff_x22;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1014645dc:
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1014645e0);
                (*pcVar7)();
              }
              uVar10 = *puVar15;
              puVar11[1] = puVar15[1];
              *puVar11 = uVar10;
              uVar10 = *(undefined8 *)((long)puVar15 + 0xf);
              *(undefined8 *)((long)puVar11 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
              *(undefined8 *)((long)puVar11 + 0xf) = uVar10;
              acStack_b0[0] = cVar3;
              if (cVar3 == '\x10') {
LAB_1014641a8:
                uStack_120 = (undefined **)0x0;
                puStack_118 = (ulong *)0x0;
                FUN_100e077ec(acStack_b0);
LAB_101464208:
                unaff_x22 = puStack_118;
                puStack_150 = puStack_110;
                uStack_148 = uStack_108;
                puStack_140 = puStack_100;
                puStack_138 = puStack_f8;
                uStack_130 = uStack_f0;
              }
              else {
                if (cVar3 != '\x11') {
                  if (cVar3 == '\x12') goto LAB_1014641a8;
                  FUN_10144fde0(&uStack_120,acStack_b0);
                  goto LAB_101464208;
                }
                uStack_88 = puStack_a8[1];
                puStack_90 = (undefined *)*puStack_a8;
                uStack_78 = puStack_a8[3];
                uStack_80 = puStack_a8[2];
                FUN_10144fde0(&uStack_120,&puStack_90);
                _free(puVar6);
                unaff_x22 = puStack_118;
                puStack_150 = puStack_110;
                uStack_148 = uStack_108;
                puStack_140 = puStack_100;
                puStack_138 = puStack_f8;
                uStack_130 = uStack_f0;
              }
              puStack_118 = unaff_x22;
              puStack_110 = puStack_150;
              uStack_108 = uStack_148;
              puStack_100 = puStack_140;
              puStack_f8 = puStack_138;
              uStack_f0 = uStack_130;
              if ((int)uStack_120 != 1) {
                puStack_1f0 = (ulong *)0x1;
                bVar9 = true;
                puStack_1f8 = unaff_x22;
                goto LAB_101463f10;
              }
              puStack_1a0 = (ulong *)((long)puVar20 + 1);
              puStack_1b8 = puVar17;
            }
            FUN_100d34830(&puStack_1c0);
            if ((char)uStack_1e0 != '\x16') {
              FUN_100e077ec(&uStack_1e0);
            }
            goto LAB_101464518;
          }
          if (bVar13 != 1) {
            if (bVar13 == 4) {
              bVar8 = puStack_118 == (ulong *)0x0;
              goto LAB_101464104;
            }
            if (bVar13 == 0xc) {
              if (uStack_108 == 9) {
                uVar12 = *puStack_110;
                bVar13 = (byte)puStack_110[1] ^ 0x73;
                bVar8 = (uVar12 ^ 0x746e656d75677261) != 0 || bVar13 != 0;
                if (puStack_118 == (ulong *)0x0) goto LAB_101464118;
                _free();
                if ((uVar12 ^ 0x746e656d75677261) == 0 && bVar13 == 0) goto LAB_101464160;
              }
              else if (puStack_118 != (ulong *)0x0) {
                _free();
              }
              goto LAB_10146411c;
            }
LAB_1014645e0:
            puStack_1a0 = (ulong *)((long)puVar20 + 1);
            puStack_160 = puStack_1f0;
            puStack_1b8 = puVar17;
            puStack_158 = unaff_x22;
            unaff_x22 = (ulong *)FUN_108855b04(&uStack_120,&puStack_90,&UNK_10b2114e0);
            goto LAB_10146460c;
          }
          uStack_120._1_1_ = SUB81(ppuVar4,1);
          bVar8 = uStack_120._1_1_ == '\0';
LAB_101464104:
          bVar8 = !bVar8;
LAB_101464110:
          uStack_120 = ppuVar5;
          FUN_100e077ec(&uStack_120);
LAB_101464118:
          if (!bVar8) goto LAB_101464160;
LAB_10146411c:
          cVar3 = (char)uStack_1e0;
          uStack_1e0 = CONCAT71(uStack_1e0._1_7_,0x16);
          if (cVar3 == '\x16') {
            puStack_1a0 = (ulong *)((long)puVar20 + 1);
            puStack_160 = puStack_1f0;
            puStack_1b8 = puVar17;
            puStack_158 = unaff_x22;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_1014645dc;
          }
          uVar10 = *puVar15;
          puVar19[1] = puVar15[1];
          *puVar19 = uVar10;
          uVar10 = *(undefined8 *)((long)puVar15 + 0xf);
          *(undefined8 *)((long)puVar19 + 0x17) = *(undefined8 *)((long)puVar15 + 0x17);
          *(undefined8 *)((long)puVar19 + 0xf) = uVar10;
          uStack_120 = (undefined **)CONCAT71(uStack_120._1_7_,cVar3);
          FUN_100e077ec(&uStack_120);
LAB_101463f10:
          puVar20 = (ulong *)((long)puVar20 + 1);
          puVar18 = puVar1;
          puVar21 = (ulong *)((lVar14 * 0x40 - 0x40U >> 6) + 1);
          puVar16 = puVar17;
        } while (puVar17 != puVar1);
        puStack_1b8 = puVar18;
        puStack_1a0 = puVar21;
        if (bVar9) {
          uStack_d8 = (undefined1)uStack_148;
          uStack_d7 = (undefined7)(uStack_148 >> 8);
          bStack_e0 = (byte)puStack_150;
          uStack_df = (undefined7)((ulong)puStack_150 >> 8);
          puStack_c8 = puStack_138;
          uStack_d0 = SUB81(puStack_140,0);
          uStack_cf = (undefined7)((ulong)puStack_140 >> 8);
          uStack_c0 = uStack_130;
        }
        else {
          puStack_1f8 = (ulong *)0x0;
        }
      }
      puVar16 = puStack_1a0;
      puVar20 = puStack_1b8;
      uStack_f0 = uStack_c0;
      uStack_180 = CONCAT71(uStack_d7,uStack_d8);
      puStack_188 = (ulong *)CONCAT71(uStack_df,bStack_e0);
      puStack_178 = (ulong *)CONCAT71(uStack_cf,uStack_d0);
      puStack_f8 = puStack_c8;
      uStack_120 = (undefined **)0x0;
      uStack_168 = uStack_c0;
      puStack_170 = puStack_c8;
      puStack_190 = puStack_1f8;
      puStack_118 = puStack_1f8;
      puStack_110 = puStack_188;
      uStack_108 = uStack_180;
      puStack_100 = puStack_178;
      FUN_100d34830(&puStack_1c0);
      bVar9 = puVar1 != puVar20;
      if ((bVar9) &&
         (puStack_160 = puVar16,
         puStack_1f8 = (ulong *)FUN_1087e422c((char *)(((ulong)((long)puVar1 - (long)puVar20) >> 6)
                                                      + (long)puVar16),&puStack_160,&UNK_10b23a190),
         puStack_118 = puStack_1f8, puStack_190 != (ulong *)0x0)) {
        FUN_100cb56bc(&puStack_190);
      }
      goto LAB_1014643c8;
    }
    puStack_1f8 = (ulong *)FUN_108855b04(param_2,&puStack_90,&UNK_10b20c7a0);
  }
  param_1[1] = puStack_1f8;
  uVar10 = 2;
LAB_101464408:
  *param_1 = uVar10;
  return;
}

