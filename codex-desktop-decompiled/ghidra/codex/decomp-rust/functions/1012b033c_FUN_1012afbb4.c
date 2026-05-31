
/* WARNING: Type propagation algorithm not settling */

void FUN_1012afbb4(long *param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  byte *pbVar12;
  undefined *extraout_x8;
  long lVar13;
  int *piVar14;
  undefined *unaff_x21;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined ***pppuStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined ***pppuStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (*param_2 == '\x14') {
    lVar9 = *(long *)(param_2 + 0x18);
    if (lVar9 == 0) {
      lVar11 = FUN_1087e422c(0,&UNK_10b22f478,&UNK_10b20a590);
LAB_1012afc44:
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar11;
      return;
    }
    lVar18 = *(long *)(param_2 + 0x10);
    auVar19 = FUN_100fbc904(lVar18);
    lVar11 = auVar19._8_8_;
    if ((auVar19._0_8_ & 1) != 0) goto LAB_1012afc44;
    if (lVar9 == 1) {
      pppuStack_108 = (undefined ***)0x8000000000000005;
LAB_1012b0280:
      pppuVar17 = pppuStack_108;
      puVar10 = (undefined *)FUN_1087e422c(2,&UNK_10b22f478,&UNK_10b20a590);
    }
    else {
      cVar3 = *(char *)(lVar18 + 0x20);
      puStack_100 = extraout_x8;
      if (cVar3 == '\x10') {
        pppuVar17 = (undefined ***)0x8000000000000005;
      }
      else {
        if (cVar3 == '\x11') {
          FUN_1004db9e8(&pppuStack_170,*(undefined8 *)(lVar18 + 0x28));
          pppuVar17 = pppuStack_170;
          puStack_100 = puStack_168;
        }
        else {
          pppuVar17 = (undefined ***)0x8000000000000005;
          if (cVar3 == '\x12') goto LAB_1012b0250;
          FUN_1004db9e8(&pppuStack_170,lVar18 + 0x20);
          pppuVar17 = pppuStack_170;
          puStack_100 = puStack_168;
        }
        if ((pppuVar17 == (undefined ***)0x8000000000000005) ||
           (pppuStack_170 = pppuVar17, puStack_168 = puStack_100, ppuStack_c0 = ppuStack_160,
           puStack_b8 = puStack_158, lStack_b0 = lStack_150, lStack_a8 = lStack_148,
           lStack_a0 = lStack_140, lStack_98 = lStack_138, lStack_90 = lStack_130,
           pppuVar17 == (undefined ***)0x8000000000000006)) {
          *param_1 = -0x8000000000000000;
          param_1[1] = (long)puStack_100;
          return;
        }
      }
LAB_1012b0250:
      puStack_f0 = puStack_b8;
      ppuStack_f8 = ppuStack_c0;
      lStack_e0 = lStack_a8;
      lStack_e8 = lStack_b0;
      lStack_d0 = lStack_98;
      lStack_d8 = lStack_a0;
      lStack_c8 = lStack_90;
      lVar9 = lVar18 + lVar9 * 0x20;
      pppuStack_108 = pppuVar17;
      if (lVar18 + 0x40 == lVar9) goto LAB_1012b0280;
      FUN_1004e07f8(&pppuStack_170,lVar18 + 0x40);
      puVar10 = puStack_168;
      if (pppuStack_170 != (undefined ***)0x8000000000000000) {
        param_1[6] = (long)puStack_f0;
        param_1[5] = (long)ppuStack_f8;
        param_1[8] = lStack_e0;
        param_1[7] = lStack_e8;
        param_1[10] = lStack_d0;
        param_1[9] = lStack_d8;
        param_1[4] = (long)puStack_100;
        param_1[3] = (long)pppuStack_108;
        *param_1 = (long)pppuStack_170;
        param_1[1] = (long)puStack_168;
        param_1[2] = (long)ppuStack_160;
        param_1[0xb] = lStack_c8;
        param_1[0xc] = lVar11;
        puStack_168 = (undefined *)param_1[1];
        pppuStack_170 = (undefined ***)*param_1;
        puStack_158 = (undefined *)param_1[3];
        ppuStack_160 = (undefined **)param_1[2];
        lStack_148 = param_1[5];
        lStack_150 = param_1[4];
        lStack_138 = param_1[7];
        lStack_140 = param_1[6];
        lStack_128 = param_1[9];
        lStack_130 = param_1[8];
        lStack_118 = param_1[0xb];
        lStack_120 = param_1[10];
        uVar4 = lVar9 - (lVar18 + 0x60);
        if (uVar4 == 0) {
          return;
        }
        lStack_110 = lVar11;
        pppuStack_108 = (undefined ***)0x3;
        lVar9 = FUN_1087e422c((uVar4 >> 5) + 3,&pppuStack_108,&UNK_10b23a1b0);
        *param_1 = -0x8000000000000000;
        param_1[1] = lVar9;
        if (puStack_158 != (undefined *)0x8000000000000005) {
          FUN_100de6690(&puStack_158);
        }
        if (pppuStack_170 != (undefined ***)0x0) {
          _free(puStack_168);
          return;
        }
        return;
      }
    }
    *param_1 = -0x8000000000000000;
    param_1[1] = (long)puVar10;
    if (pppuVar17 == (undefined ***)0x8000000000000005) {
      return;
    }
    goto LAB_1012b03c4;
  }
  if (*param_2 != '\x15') {
    lVar9 = FUN_108855c40(param_2,&pppuStack_170,&UNK_10b2143a8);
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar9;
    return;
  }
  lVar9 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(param_2 + 0x18);
  pppuVar17 = (undefined ***)0x8000000000000006;
  pppuStack_108 = (undefined ***)0x8000000000000006;
  if (lVar11 == 0) {
    pppuStack_108 = (undefined ***)0x8000000000000006;
    pppuVar16 = (undefined ***)0x0;
LAB_1012b00a8:
    pppuVar17 = pppuStack_108;
    ppuStack_c0 = (undefined **)&UNK_108c520a8;
    puStack_b8 = (undefined *)0x4;
    pppuStack_170 = &ppuStack_c0;
    puStack_168 = &DAT_100c7b3a0;
    unaff_x21 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&pppuStack_170);
LAB_1012b00e0:
    *param_1 = -0x8000000000000000;
    param_1[1] = (long)unaff_x21;
    if (((ulong)pppuVar16 & 0x7fffffffffffffff) == 0) {
      bVar8 = true;
    }
    else {
LAB_1012b03a8:
      _free(puStack_188);
      bVar8 = true;
      pppuVar17 = pppuStack_108;
    }
  }
  else {
    lVar18 = 0;
    bVar8 = false;
    pppuVar16 = (undefined ***)0x8000000000000000;
    do {
      pbVar12 = (byte *)(lVar9 + lVar18) + 0x20;
      bVar2 = *(byte *)(lVar9 + lVar18);
      if (bVar2 < 0xd) {
        if (bVar2 == 1) {
          cVar3 = *(char *)(lVar9 + lVar18 + 1);
          if (cVar3 != '\0') {
            if (cVar3 != '\x01') {
              if (cVar3 == '\x02') goto LAB_1012afe44;
              goto LAB_1012afc84;
            }
LAB_1012afe78:
            if (pppuVar17 == (undefined ***)0x8000000000000006) {
              bVar2 = *pbVar12;
              if (bVar2 == 0x10) {
                pppuVar15 = (undefined ***)0x8000000000000005;
              }
              else {
                if (bVar2 == 0x11) {
                  FUN_1004db9e8(&pppuStack_170,*(undefined8 *)(lVar9 + lVar18 + 0x28));
                }
                else {
                  pppuVar15 = (undefined ***)0x8000000000000005;
                  if (bVar2 == 0x12) goto LAB_1012afc64;
                  FUN_1004db9e8(&pppuStack_170);
                }
                pppuVar15 = (undefined ***)0x8000000000000006;
                if (pppuStack_170 != (undefined ***)0x8000000000000005) {
                  puStack_b8 = puStack_158;
                  ppuStack_c0 = ppuStack_160;
                  lStack_a8 = lStack_148;
                  lStack_b0 = lStack_150;
                  lStack_98 = lStack_138;
                  lStack_a0 = lStack_140;
                  lStack_90 = lStack_130;
                  pppuVar15 = pppuStack_170;
                }
                puStack_178 = puStack_168;
                pppuVar17 = (undefined ***)0x8000000000000006;
                if (pppuVar15 == (undefined ***)0x8000000000000006) {
                  puStack_100 = puStack_180;
                  pppuStack_108 = (undefined ***)0x8000000000000006;
                  unaff_x21 = puStack_168;
                  goto LAB_1012b00e0;
                }
              }
LAB_1012afc64:
              puStack_f0 = puStack_b8;
              ppuStack_f8 = ppuStack_c0;
              lStack_e0 = lStack_a8;
              lStack_e8 = lStack_b0;
              lStack_d0 = lStack_98;
              lStack_d8 = lStack_a0;
              lStack_c8 = lStack_90;
              puStack_180 = puStack_178;
              pppuVar17 = pppuVar15;
              goto LAB_1012afc84;
            }
            puStack_100 = puStack_180;
            ppuStack_c0 = (undefined **)&UNK_108c61024;
            puStack_b8 = (undefined *)0x4;
            pppuStack_170 = &ppuStack_c0;
            puStack_168 = &DAT_100c7b3a0;
            pppuStack_108 = pppuVar17;
            unaff_x21 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&pppuStack_170);
            goto LAB_1012b00e0;
          }
LAB_1012afedc:
          if (bVar8) {
            puStack_100 = puStack_180;
            ppuStack_c0 = (undefined **)&UNK_108c520a8;
            puStack_b8 = (undefined *)0x4;
            pppuStack_170 = &ppuStack_c0;
            puStack_168 = &DAT_100c7b3a0;
            pppuStack_108 = pppuVar17;
            unaff_x21 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&pppuStack_170);
            goto LAB_1012b00e0;
          }
          auVar19 = FUN_100fbc904(pbVar12);
          unaff_x21 = auVar19._8_8_;
          if ((auVar19._0_8_ & 1) != 0) {
            puStack_100 = puStack_180;
            pppuStack_108 = pppuVar17;
            goto LAB_1012b00e0;
          }
          bVar8 = true;
        }
        else {
          if (bVar2 == 4) {
            lVar13 = *(long *)(lVar9 + lVar18 + 8);
            if (lVar13 != 0) {
              if (lVar13 == 1) goto LAB_1012afe78;
              if (lVar13 == 2) goto LAB_1012afe44;
              goto LAB_1012afc84;
            }
            goto LAB_1012afedc;
          }
          if (bVar2 != 0xc) {
LAB_1012b02e4:
            puStack_100 = puStack_180;
            pppuStack_108 = pppuVar17;
            unaff_x21 = (undefined *)FUN_108855c40(lVar9 + lVar18,&pppuStack_170,&UNK_10b215048);
            goto LAB_1012b00e0;
          }
          piVar14 = *(int **)(lVar9 + lVar18 + 0x10);
          lVar13 = *(long *)(lVar9 + lVar18 + 0x18);
          if (lVar13 == 7) goto LAB_1012afe20;
LAB_1012afcc8:
          if (lVar13 == 4) {
            if (*piVar14 == 0x65646f63) goto LAB_1012afedc;
            if (*piVar14 == 0x61746164) goto LAB_1012afe78;
          }
        }
      }
      else if (bVar2 == 0xd) {
        piVar14 = *(int **)(lVar9 + lVar18 + 8);
        lVar13 = *(long *)(lVar9 + lVar18 + 0x10);
        if (lVar13 != 7) goto LAB_1012afcc8;
LAB_1012afe20:
        if (*piVar14 == 0x7373656d && *(int *)((long)piVar14 + 3) == 0x65676173) {
LAB_1012afe44:
          if (pppuVar16 == (undefined ***)0x8000000000000000) {
            FUN_1004e07f8(&pppuStack_170);
            if (pppuStack_170 != (undefined ***)0x8000000000000000) {
              puStack_188 = puStack_168;
              ppuStack_190 = ppuStack_160;
              pppuVar16 = pppuStack_170;
              goto LAB_1012afc84;
            }
            puStack_100 = puStack_180;
            *param_1 = -0x8000000000000000;
            param_1[1] = (long)puStack_168;
            bVar8 = true;
            pppuStack_108 = pppuVar17;
            goto LAB_1012b03b8;
          }
          puStack_100 = puStack_180;
          ppuStack_c0 = (undefined **)&UNK_108ca1064;
          puStack_b8 = (undefined *)0x7;
          pppuStack_170 = &ppuStack_c0;
          puStack_168 = &DAT_100c7b3a0;
          bVar8 = true;
          pppuStack_108 = pppuVar17;
          lVar9 = FUN_108856088(s_duplicate_field_____108ac2973,&pppuStack_170);
          *param_1 = -0x8000000000000000;
          param_1[1] = lVar9;
          if (pppuVar16 != (undefined ***)0x0) goto LAB_1012b03a8;
          goto LAB_1012b03b8;
        }
      }
      else {
        if (bVar2 == 0xe) {
          pcVar1 = *(char **)(lVar9 + lVar18 + 0x10);
          lVar13 = *(long *)(lVar9 + lVar18 + 0x18);
        }
        else {
          if (bVar2 != 0xf) goto LAB_1012b02e4;
          pcVar1 = *(char **)(lVar9 + lVar18 + 8);
          lVar13 = *(long *)(lVar9 + lVar18 + 0x10);
        }
        if (lVar13 == 7) {
          if (((*pcVar1 == 'm') && (pcVar1[1] == 'e')) &&
             ((pcVar1[2] == 's' &&
              ((((pcVar1[3] == 's' && (pcVar1[4] == 'a')) && (pcVar1[5] == 'g')) &&
               (pcVar1[6] == 'e')))))) goto LAB_1012afe44;
        }
        else if (lVar13 == 4) {
          if (*pcVar1 == 'c') {
            if (((pcVar1[1] == 'o') && (pcVar1[2] == 'd')) && (pcVar1[3] == 'e'))
            goto LAB_1012afedc;
          }
          else if (((*pcVar1 == 'd') && (pcVar1[1] == 'a')) &&
                  ((pcVar1[2] == 't' && (pcVar1[3] == 'a')))) goto LAB_1012afe78;
        }
      }
LAB_1012afc84:
      lVar18 = lVar18 + 0x40;
    } while (lVar11 * 0x40 - lVar18 != 0);
    puStack_100 = puStack_180;
    pppuStack_108 = pppuVar17;
    if (!bVar8) goto LAB_1012b00a8;
    bVar8 = pppuVar17 == (undefined ***)0x8000000000000006;
    lVar9 = lStack_c8;
    lVar11 = lStack_e8;
    lVar18 = lStack_e0;
    ppuVar5 = ppuStack_f8;
    puVar10 = puStack_f0;
    lVar13 = lStack_d8;
    lVar6 = lStack_d0;
    puVar7 = puStack_180;
    pppuStack_170 = pppuVar17;
    if (bVar8) {
      pppuStack_170 = (undefined ***)0x8000000000000005;
      lVar9 = lStack_130;
      lVar11 = lStack_150;
      lVar18 = lStack_148;
      ppuVar5 = ppuStack_160;
      puVar10 = puStack_158;
      lVar13 = lStack_140;
      lVar6 = lStack_138;
      puVar7 = puStack_168;
    }
    puStack_168 = puVar7;
    lStack_138 = lVar6;
    lStack_140 = lVar13;
    puStack_158 = puVar10;
    ppuStack_160 = ppuVar5;
    lStack_148 = lVar18;
    lStack_150 = lVar11;
    lStack_130 = lVar9;
    if (pppuVar16 != (undefined ***)0x8000000000000000) {
      param_1[6] = (long)puStack_158;
      param_1[5] = (long)ppuStack_160;
      param_1[8] = lStack_148;
      param_1[7] = lStack_150;
      param_1[10] = lStack_138;
      param_1[9] = lStack_140;
      param_1[4] = (long)puStack_168;
      param_1[3] = (long)pppuStack_170;
      *param_1 = (long)pppuVar16;
      param_1[1] = (long)puStack_188;
      param_1[2] = (long)ppuStack_190;
      param_1[0xb] = lStack_130;
      param_1[0xc] = (long)unaff_x21;
      return;
    }
    puStack_80 = &UNK_108ca1064;
    uStack_78 = 7;
    ppuStack_c0 = &puStack_80;
    puStack_b8 = &DAT_100c7b3a0;
    lVar9 = FUN_108856088(s_missing_field_____108ac28f7,&ppuStack_c0);
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar9;
    if (pppuStack_170 != (undefined ***)0x8000000000000005) {
      FUN_100de6690(&pppuStack_170);
    }
  }
LAB_1012b03b8:
  if (!bVar8) {
    return;
  }
  if ((undefined ***)0x8000000000000004 < pppuVar17) {
    return;
  }
LAB_1012b03c4:
  FUN_100de6690(&pppuStack_108);
  return;
}

