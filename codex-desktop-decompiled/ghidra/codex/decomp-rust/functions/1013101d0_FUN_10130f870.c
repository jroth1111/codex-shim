
void FUN_10130f870(long *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  undefined8 uVar24;
  long lStack_1f0;
  long lStack_1e8;
  byte *pbStack_1e0;
  byte bStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined8 uStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  undefined8 uStack_1a0;
  byte *pbStack_198;
  long lStack_190;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  long lStack_110;
  byte *pbStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  byte bStack_d8;
  char cStack_d7;
  undefined6 uStack_d6;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  byte *pbStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  bVar3 = *param_2;
  if (bVar3 == 0x14) {
    lVar13 = *(long *)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    lVar23 = *(long *)(param_2 + 0x18);
    pbVar21 = pbVar1 + lVar23 * 0x20;
    lStack_100 = 0;
    pbVar18 = pbVar1;
    pbStack_120 = pbVar1;
    lStack_110 = lVar13;
    pbStack_108 = pbVar21;
    if (lVar23 == 0) {
LAB_10130fdc8:
      pbStack_118 = pbVar18;
      lVar9 = FUN_1087e422c(0,&UNK_10b2329e0,&UNK_10b20a590);
LAB_10130fde4:
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar9;
    }
    else {
      pbVar18 = pbVar1 + 0x20;
      if (*pbVar1 == 0x16) goto LAB_10130fdc8;
      uVar24 = *(undefined8 *)(pbVar1 + 1);
      uStack_cf = (undefined7)*(undefined8 *)(pbVar1 + 9);
      cStack_d7 = (char)uVar24;
      uStack_d6 = (undefined6)((ulong)uVar24 >> 8);
      uStack_d0 = (undefined1)((ulong)uVar24 >> 0x38);
      pbStack_c0 = *(byte **)(pbVar1 + 0x18);
      uStack_c8 = (undefined1)*(undefined8 *)(pbVar1 + 0x10);
      uStack_c7 = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x10) >> 8);
      lStack_100 = 1;
      pbStack_118 = pbVar18;
      bStack_d8 = *pbVar1;
      FUN_1004b62d4(&bStack_1d0,&bStack_d8);
      lVar4 = CONCAT71(uStack_1cf,bStack_1d0);
      lVar9 = CONCAT71(uStack_1c7,uStack_1c8);
      if (lVar4 == -0x8000000000000000) goto LAB_10130fde4;
      if (lVar23 == 1) {
LAB_10130fe94:
        lVar10 = FUN_1087e422c(1,&UNK_10b2329e0,&UNK_10b20a590);
      }
      else {
        lVar23 = CONCAT71(uStack_1bf,uStack_1c0);
        pbVar18 = pbVar1 + 0x40;
        pbStack_118 = pbVar18;
        if (pbVar1[0x20] == 0x16) goto LAB_10130fe94;
        uStack_1c7 = (undefined7)*(undefined8 *)(pbVar1 + 0x29);
        uStack_1cf = (undefined7)*(undefined8 *)(pbVar1 + 0x21);
        uStack_1c8 = (undefined1)((ulong)*(undefined8 *)(pbVar1 + 0x21) >> 0x38);
        uStack_1b8 = *(undefined8 *)(pbVar1 + 0x38);
        uStack_1c0 = (undefined1)*(undefined8 *)(pbVar1 + 0x30);
        uStack_1bf = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x30) >> 8);
        lStack_100 = 2;
        bStack_1d0 = pbVar1[0x20];
        FUN_1004aa788(&bStack_d8,&bStack_1d0);
        lVar5 = CONCAT62(uStack_d6,CONCAT11(cStack_d7,bStack_d8));
        lVar10 = CONCAT71(uStack_cf,uStack_d0);
        if (lVar5 != -0x7ffffffffffffffb) {
          param_1[6] = (long)pbStack_c0;
          param_1[5] = CONCAT71(uStack_c7,uStack_c8);
          param_1[8] = lStack_b0;
          param_1[7] = lStack_b8;
          param_1[10] = lStack_a0;
          param_1[9] = lStack_a8;
          param_1[0xb] = lStack_98;
          *param_1 = lVar4;
          param_1[1] = lVar9;
          param_1[2] = lVar23;
          param_1[3] = lVar5;
          param_1[4] = lVar10;
          lStack_178 = param_1[1];
          lStack_180 = *param_1;
          uStack_168 = param_1[3];
          lStack_170 = param_1[2];
          lStack_158 = param_1[5];
          lStack_160 = param_1[4];
          lStack_148 = param_1[7];
          lStack_150 = param_1[6];
          lStack_138 = param_1[9];
          lStack_140 = param_1[8];
          lStack_128 = param_1[0xb];
          lStack_130 = param_1[10];
          lVar13 = FUN_100fbc738(&pbStack_120);
          if (lVar13 != 0) {
            *param_1 = -0x8000000000000000;
            param_1[1] = lVar13;
            if (lStack_180 != 0) {
              _free(lStack_178);
            }
            FUN_100de6690(&uStack_168);
          }
          goto LAB_101310034;
        }
      }
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar10;
      if (lVar4 != 0) {
        _free(lVar9);
      }
    }
    lVar23 = ((ulong)((long)pbVar21 - (long)pbVar18) >> 5) + 1;
    while (lVar23 = lVar23 + -1, lVar23 != 0) {
      FUN_100e077ec(pbVar18);
      pbVar18 = pbVar18 + 0x20;
    }
    if (lVar13 != 0) {
      _free(pbVar1);
    }
    goto LAB_101310034;
  }
  if (bVar3 != 0x15) {
    lVar13 = FUN_108855b04(param_2,&puStack_90,&UNK_10b20ada0);
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar13;
    return;
  }
  uStack_1a0 = *(undefined8 *)(param_2 + 8);
  pbStack_1b0 = *(byte **)(param_2 + 0x10);
  lVar13 = *(long *)(param_2 + 0x18) * 0x40;
  pbVar18 = pbStack_1b0 + lVar13;
  bStack_1d0 = 0x16;
  lStack_190 = 0;
  pbStack_198 = pbVar18;
  if (*(long *)(param_2 + 0x18) == 0) {
    pbStack_120 = (byte *)0x8000000000000005;
    pbVar21 = (byte *)0x8000000000000005;
    pbStack_1a8 = pbStack_1b0;
LAB_10130fef8:
    puStack_90 = &UNK_108c982f8;
    lStack_88 = 8;
    bStack_d8 = (byte)&puStack_90;
    cStack_d7 = (char)((ulong)&puStack_90 >> 8);
    uStack_d6 = (undefined6)((ulong)&puStack_90 >> 0x10);
    uStack_d0 = 0xa0;
    uStack_cf = 0x100c7b3;
    puVar17 = (undefined *)0x0;
    lVar13 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_d8);
LAB_10130ff2c:
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar13;
joined_r0x0001013100dc:
    if (pbVar21 != (byte *)0x8000000000000005) {
LAB_10130ff44:
      FUN_100de6690(&pbStack_120);
    }
    puVar17 = (undefined *)((ulong)puVar17 & 0x7fffffffffffffff);
  }
  else {
    lVar23 = 0;
    puVar15 = (undefined8 *)((ulong)&bStack_d8 | 1);
    puVar16 = (undefined8 *)((ulong)&bStack_1d0 | 1);
    puVar14 = (undefined8 *)((ulong)&puStack_90 | 1);
    pbVar21 = (byte *)0x8000000000000005;
    puVar17 = (undefined *)0x8000000000000000;
    pbVar22 = (byte *)0x8000000000000005;
    pbVar1 = pbStack_1b0;
    pbStack_1a8 = pbStack_1b0;
    do {
      pbVar19 = pbVar1 + 0x40;
      bVar2 = *pbVar1;
      pbVar20 = pbVar19;
      lVar9 = lVar23;
      if (bVar2 == 0x16) break;
      uVar24 = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)((long)puVar15 + 0xf) = uVar24;
      uVar24 = *(undefined8 *)(pbVar1 + 1);
      puVar15[1] = *(undefined8 *)(pbVar1 + 9);
      *puVar15 = uVar24;
      uStack_1b8 = *(undefined8 *)(pbVar1 + 0x38);
      uStack_1c8 = (undefined1)*(undefined8 *)(pbVar1 + 0x28);
      uStack_1c7 = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x28) >> 8);
      bStack_1d0 = (byte)*(undefined8 *)(pbVar1 + 0x20);
      uStack_1cf = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x20) >> 8);
      uStack_1c0 = (undefined1)*(undefined8 *)(pbVar1 + 0x30);
      uStack_1bf = (undefined7)((ulong)*(undefined8 *)(pbVar1 + 0x30) >> 8);
      plVar6 = (long *)CONCAT71(uStack_cf,uStack_d0);
      plVar7 = (long *)CONCAT71(uStack_c7,uStack_c8);
      bStack_d8 = bVar2;
      if (bVar2 < 0xd) {
        if (bVar2 == 1) {
          iVar12 = 1;
          if (cStack_d7 != '\x01') {
            iVar12 = 2;
          }
          iVar11 = 0;
          if (cStack_d7 != '\0') {
            iVar11 = iVar12;
          }
        }
        else {
          if (bVar2 != 4) {
            if (bVar2 == 0xc) {
              if (pbStack_c0 == (byte *)0x5) {
                iVar11 = 1;
                if ((int)*plVar7 != 0x6e657665 || *(char *)((long)plVar7 + 4) != 't') {
                  iVar11 = 2;
                }
              }
              else if (pbStack_c0 == (byte *)0x8) {
                iVar11 = 2;
                if (*plVar7 == 0x6449646165726874) {
                  iVar11 = 0;
                }
              }
              else {
                iVar11 = 2;
              }
              goto joined_r0x00010130fbe8;
            }
LAB_101310308:
            lStack_190 = lVar23 + 1;
            pbStack_118 = pbStack_1e0;
            pbStack_1a8 = pbVar19;
            pbStack_120 = pbVar22;
            lVar13 = FUN_108855b04(&bStack_d8,&puStack_90,&UNK_10b20e960);
            goto LAB_10130ff2c;
          }
          iVar12 = 1;
          if (plVar6 != (long *)0x1) {
            iVar12 = 2;
          }
          iVar11 = 0;
          if (plVar6 != (long *)0x0) {
            iVar11 = iVar12;
          }
        }
LAB_10130fc68:
        FUN_100e077ec(&bStack_d8);
      }
      else {
        if (bVar2 == 0xd) {
          if (plVar7 == (long *)0x5) {
            iVar11 = 1;
            if ((int)*plVar6 != 0x6e657665 || *(char *)((long)plVar6 + 4) != 't') {
              iVar11 = 2;
            }
          }
          else {
            if (plVar7 != (long *)0x8) goto LAB_10130fc34;
            iVar11 = 2;
            if (*plVar6 == 0x6449646165726874) {
              iVar11 = 0;
            }
          }
          goto LAB_10130fc68;
        }
        if (bVar2 != 0xe) {
          if (bVar2 != 0xf) goto LAB_101310308;
          if (plVar7 == (long *)0x5) {
            if (((((char)*plVar6 != 'e') || (*(char *)((long)plVar6 + 1) != 'v')) ||
                (*(char *)((long)plVar6 + 2) != 'e')) ||
               ((*(char *)((long)plVar6 + 3) != 'n' || (*(char *)((long)plVar6 + 4) != 't'))))
            goto LAB_10130fc34;
            iVar11 = 1;
          }
          else if (((((plVar7 == (long *)0x8) && ((char)*plVar6 == 't')) &&
                    ((*(char *)((long)plVar6 + 1) == 'h' &&
                     (((*(char *)((long)plVar6 + 2) == 'r' && (*(char *)((long)plVar6 + 3) == 'e'))
                      && (*(char *)((long)plVar6 + 4) == 'a')))))) &&
                   ((*(char *)((long)plVar6 + 5) == 'd' && (*(char *)((long)plVar6 + 6) == 'I'))))
                  && (*(char *)((long)plVar6 + 7) == 'd')) {
            iVar11 = 0;
          }
          else {
LAB_10130fc34:
            iVar11 = 2;
          }
          goto LAB_10130fc68;
        }
        if (pbStack_c0 == (byte *)0x5) {
          if ((((char)*plVar7 != 'e') || (*(char *)((long)plVar7 + 1) != 'v')) ||
             ((*(char *)((long)plVar7 + 2) != 'e' ||
              ((*(char *)((long)plVar7 + 3) != 'n' || (*(char *)((long)plVar7 + 4) != 't'))))))
          goto LAB_10130fbb0;
          iVar11 = 1;
        }
        else if (((((pbStack_c0 == (byte *)0x8) && ((char)*plVar7 == 't')) &&
                  (*(char *)((long)plVar7 + 1) == 'h')) &&
                 ((*(char *)((long)plVar7 + 2) == 'r' && (*(char *)((long)plVar7 + 3) == 'e')))) &&
                (((*(char *)((long)plVar7 + 4) == 'a' &&
                  ((*(char *)((long)plVar7 + 5) == 'd' && (*(char *)((long)plVar7 + 6) == 'I')))) &&
                 (*(char *)((long)plVar7 + 7) == 'd')))) {
          iVar11 = 0;
        }
        else {
LAB_10130fbb0:
          iVar11 = 2;
        }
joined_r0x00010130fbe8:
        if (plVar6 != (long *)0x0) {
          _free();
        }
      }
      bVar2 = bStack_1d0;
      if (iVar11 == 0) {
        if (puVar17 != (undefined *)0x8000000000000000) {
          lStack_190 = lVar23 + 1;
          pbStack_118 = pbStack_1e0;
          puStack_90 = &UNK_108c982f8;
          lStack_88 = 8;
          bStack_d8 = (byte)&puStack_90;
          cStack_d7 = (char)((ulong)&puStack_90 >> 8);
          uStack_d6 = (undefined6)((ulong)&puStack_90 >> 0x10);
          uStack_d0 = 0xa0;
          uStack_cf = 0x100c7b3;
          pbStack_1a8 = pbVar19;
          pbStack_120 = pbVar22;
          lVar13 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_d8);
          goto LAB_10130ff2c;
        }
        bStack_1d0 = 0x16;
        if (bVar2 == 0x16) {
          lStack_190 = lVar23 + 1;
          pbStack_118 = pbStack_1e0;
          pbStack_1a8 = pbVar19;
          pbStack_120 = pbVar22;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101310304;
        }
        uVar24 = *puVar16;
        puVar15[1] = puVar16[1];
        *puVar15 = uVar24;
        uVar24 = *(undefined8 *)((long)puVar16 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar24;
        bStack_d8 = bVar2;
        FUN_1004b62d4(&puStack_90,&bStack_d8);
        if (puStack_90 == (undefined *)0x8000000000000000) {
          lStack_190 = lVar23 + 1;
          puVar17 = (undefined *)0x0;
          *param_1 = -0x8000000000000000;
          param_1[1] = lStack_88;
          pbStack_118 = pbStack_1e0;
          pbStack_1a8 = pbVar19;
          pbStack_120 = pbVar22;
          goto joined_r0x0001013100dc;
        }
        lStack_1e8 = lStack_88;
        lStack_1f0 = lStack_80;
        puVar17 = puStack_90;
      }
      else if (iVar11 == 1) {
        if (pbVar21 != (byte *)0x8000000000000005) {
          lStack_190 = lVar23 + 1;
          pbStack_118 = pbStack_1e0;
          puStack_90 = &UNK_108cc2399;
          lStack_88 = 5;
          bStack_d8 = (byte)&puStack_90;
          cStack_d7 = (char)((ulong)&puStack_90 >> 8);
          uStack_d6 = (undefined6)((ulong)&puStack_90 >> 0x10);
          uStack_d0 = 0xa0;
          uStack_cf = 0x100c7b3;
          pbStack_1a8 = pbVar19;
          pbStack_120 = pbVar22;
          lVar13 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_d8);
          *param_1 = -0x8000000000000000;
          param_1[1] = lVar13;
          goto LAB_10130ff44;
        }
        bStack_1d0 = 0x16;
        if (bVar2 == 0x16) {
          lStack_190 = lVar23 + 1;
          pbStack_118 = pbStack_1e0;
          pbStack_1a8 = pbVar19;
          pbStack_120 = pbVar22;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_101310304;
        }
        uVar24 = *puVar16;
        puVar14[1] = puVar16[1];
        *puVar14 = uVar24;
        uVar24 = *(undefined8 *)((long)puVar16 + 0xf);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar24;
        puStack_90 = (undefined *)CONCAT71(puStack_90._1_7_,bVar2);
        FUN_1004aa788(&bStack_d8,&puStack_90);
        pbVar21 = (byte *)CONCAT62(uStack_d6,CONCAT11(cStack_d7,bStack_d8));
        if (pbVar21 == (byte *)0x8000000000000005) {
          lStack_190 = lVar23 + 1;
          *param_1 = -0x8000000000000000;
          param_1[1] = CONCAT71(uStack_cf,uStack_d0);
          puVar17 = (undefined *)((ulong)puVar17 & 0x7fffffffffffffff);
          pbStack_1a8 = pbVar19;
          goto joined_r0x000101310094;
        }
        pbStack_1e0 = (byte *)CONCAT71(uStack_cf,uStack_d0);
        lStack_110 = CONCAT71(uStack_c7,uStack_c8);
        pbStack_108 = pbStack_c0;
        lStack_f8 = lStack_b0;
        lStack_100 = lStack_b8;
        lStack_e8 = lStack_a0;
        lStack_f0 = lStack_a8;
        lStack_e0 = lStack_98;
        pbVar22 = pbVar21;
      }
      else {
        bStack_1d0 = 0x16;
        if (bVar2 == 0x16) {
          lStack_190 = lVar23 + 1;
          pbStack_118 = pbStack_1e0;
          pbStack_1a8 = pbVar19;
          pbStack_120 = pbVar22;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101310304:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101310308);
          (*pcVar8)();
        }
        uVar24 = *puVar16;
        puVar15[1] = puVar16[1];
        *puVar15 = uVar24;
        uVar24 = *(undefined8 *)((long)puVar16 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar16 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar24;
        bStack_d8 = bVar2;
        FUN_100e077ec(&bStack_d8);
      }
      lVar23 = lVar23 + 1;
      pbVar20 = pbVar18;
      lVar9 = (lVar13 - 0x40U >> 6) + 1;
      pbVar1 = pbVar19;
    } while (pbVar19 != pbVar18);
    pbStack_118 = pbStack_1e0;
    pbStack_1a8 = pbVar20;
    lStack_190 = lVar9;
    pbStack_120 = pbVar22;
    if (puVar17 == (undefined *)0x8000000000000000) goto LAB_10130fef8;
    if (pbVar21 != (byte *)0x8000000000000005) {
      param_1[6] = (long)pbStack_108;
      param_1[5] = lStack_110;
      param_1[8] = lStack_f8;
      param_1[7] = lStack_100;
      param_1[10] = lStack_e8;
      param_1[9] = lStack_f0;
      param_1[0xb] = lStack_e0;
      *param_1 = (long)puVar17;
      param_1[1] = lStack_1e8;
      param_1[2] = lStack_1f0;
      param_1[3] = (long)pbVar21;
      param_1[4] = (long)pbStack_1e0;
      lStack_178 = param_1[1];
      lStack_180 = *param_1;
      uStack_168 = param_1[3];
      lStack_170 = param_1[2];
      lStack_158 = param_1[5];
      lStack_160 = param_1[4];
      lStack_148 = param_1[7];
      lStack_150 = param_1[6];
      lStack_138 = param_1[9];
      lStack_140 = param_1[8];
      lStack_128 = param_1[0xb];
      lStack_130 = param_1[10];
      FUN_100d34830(&pbStack_1b0);
      if (pbVar18 != pbVar20) {
        bStack_d8 = (byte)lVar9;
        cStack_d7 = (char)((ulong)lVar9 >> 8);
        uStack_d6 = (undefined6)((ulong)lVar9 >> 0x10);
        lVar13 = FUN_1087e422c(((ulong)((long)pbVar18 - (long)pbVar20) >> 6) + lVar9,&bStack_d8,
                               &UNK_10b23a190);
        *param_1 = -0x8000000000000000;
        param_1[1] = lVar13;
        if (lStack_180 != 0) {
          _free(lStack_178);
        }
        FUN_100de6690(&uStack_168);
      }
      goto LAB_101310034;
    }
    puStack_90 = &UNK_108cc2399;
    lStack_88 = 5;
    bStack_d8 = (byte)&puStack_90;
    cStack_d7 = (char)((ulong)&puStack_90 >> 8);
    uStack_d6 = (undefined6)((ulong)&puStack_90 >> 0x10);
    uStack_d0 = 0xa0;
    uStack_cf = 0x100c7b3;
    lVar13 = FUN_108856088(s_missing_field_____108ac28f7,&bStack_d8);
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar13;
  }
joined_r0x000101310094:
  if (puVar17 != (undefined *)0x0) {
    _free(lStack_1e8);
  }
  FUN_100d34830(&pbStack_1b0);
  if (bStack_1d0 != 0x16) {
    FUN_100e077ec(&bStack_1d0);
  }
LAB_101310034:
  if ((bVar3 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

