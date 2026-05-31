
void FUN_100ec0d14(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  char *pcVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *in_x10;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined *puStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  ulong uStack_248;
  long lStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  if (*param_2 != '\x14') {
    if (*param_2 == '\x15') {
      lVar16 = *(long *)(param_2 + 0x10);
      lVar20 = *(long *)(param_2 + 0x18) * 0x40;
      lVar15 = lVar16 + lVar20;
      if (*(long *)(param_2 + 0x18) == 0) {
        ppuVar19 = (undefined **)0x0;
        ppuVar18 = (undefined **)0x2;
      }
      else {
        lVar17 = 0;
        ppuVar19 = (undefined **)((lVar20 - 0x40U >> 6) + 1);
        ppuVar18 = (undefined **)0x3;
        do {
          bVar5 = *(byte *)(lVar16 + lVar17);
          if (bVar5 < 0xd) {
            if (bVar5 == 1) {
              puVar13 = (undefined8 *)(ulong)*(byte *)(lVar16 + lVar17 + 1);
              if (puVar13 == (undefined8 *)0x0) goto LAB_100ec0eac;
              ppuStack_f8 = (undefined **)CONCAT71(ppuStack_f8._1_7_,1);
              puStack_f0 = puVar13;
              uVar11 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&ppuStack_f8,&UNK_10b229f20,&UNK_10b20a590);
            }
            else if (bVar5 == 4) {
              puVar13 = *(undefined8 **)(lVar16 + lVar17 + 8);
              if (puVar13 == (undefined8 *)0x0) goto LAB_100ec0eac;
              ppuStack_f8 = (undefined **)CONCAT71(ppuStack_f8._1_7_,1);
              puStack_f0 = puVar13;
              uVar11 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&ppuStack_f8,&UNK_10b229f20,&UNK_10b20a590);
            }
            else {
              if (bVar5 == 0xc) {
                piVar9 = *(int **)(lVar16 + lVar17 + 0x10);
                lVar12 = *(long *)(lVar16 + lVar17 + 0x18);
                goto LAB_100ec0e98;
              }
LAB_100ec127c:
              uVar11 = FUN_108855c40(lVar16 + lVar17,&puStack_200,&UNK_10b214c68);
            }
LAB_100ec12ec:
            *param_1 = 3;
            param_1[1] = uVar11;
            if (ppuVar18 == (undefined **)0x3) {
              return;
            }
LAB_100ec12fc:
            if (ppuVar18 == (undefined **)0x2) {
              return;
            }
            if (lStack_270 != 0) {
              _free(lStack_268);
            }
            if ((lStack_240 != -0x8000000000000000) && (lStack_240 != 0)) {
              _free(uStack_238);
            }
            if (lStack_258 != 0) {
              _free(lStack_250);
            }
            if (uStack_228 == 0x8000000000000000) {
              return;
            }
            goto joined_r0x000100ec118c;
          }
          if (bVar5 == 0xd) {
            piVar9 = *(int **)(lVar16 + lVar17 + 8);
            lVar12 = *(long *)(lVar16 + lVar17 + 0x10);
LAB_100ec0e98:
            if ((lVar12 != 4) || (*piVar9 != 0x6b736174)) {
              uVar11 = FUN_1087e41dc(piVar9,lVar12,&UNK_10b229f10,1);
              goto LAB_100ec12ec;
            }
          }
          else {
            if (bVar5 == 0xe) {
              lVar14 = 0x10;
              lVar12 = 0x18;
            }
            else {
              if (bVar5 != 0xf) goto LAB_100ec127c;
              lVar14 = 8;
              lVar12 = 0x10;
            }
            pcVar8 = *(char **)(lVar16 + lVar14 + lVar17);
            lVar12 = *(long *)(lVar16 + lVar12 + lVar17);
            if ((((lVar12 != 4) || (*pcVar8 != 't')) || (pcVar8[1] != 'a')) ||
               ((pcVar8[2] != 's' || (pcVar8[3] != 'k')))) {
              __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                        (&ppuStack_f8,pcVar8,lVar12);
              puVar13 = puStack_f0;
              ppuVar19 = ppuStack_f8;
              uVar11 = FUN_1087e41dc(puStack_f0,puStack_e8,&UNK_10b229f10,1);
              if (((ulong)ppuVar19 & 0x7fffffffffffffff) != 0) {
                _free(puVar13);
              }
              goto LAB_100ec12ec;
            }
          }
LAB_100ec0eac:
          if (ppuVar18 != (undefined **)0x3) {
            puStack_200 = &UNK_108cde44c;
            uStack_1f8 = 4;
            ppuStack_f8 = &puStack_200;
            puStack_f0 = (undefined8 *)&DAT_100c7b3a0;
            uVar11 = FUN_108856088(s_duplicate_field_____108ac2973,&ppuStack_f8);
            *param_1 = 3;
            param_1[1] = uVar11;
            goto LAB_100ec12fc;
          }
          bVar5 = ((byte *)(lVar16 + lVar17))[0x20];
          if (bVar5 == 0x10) {
            ppuVar18 = (undefined **)0x2;
          }
          else {
            if (bVar5 == 0x11) {
              FUN_100ec7314(&ppuStack_f8,*(undefined8 *)(lVar16 + lVar17 + 0x28));
              ppuVar18 = ppuStack_f8;
              in_x10 = puStack_f0;
              puStack_200 = puStack_e8;
              uStack_1f8 = uStack_e0;
              lStack_1f0 = lStack_d8;
              lStack_1e8 = lStack_d0;
              lStack_1e0 = lStack_c8;
              lStack_1d8 = lStack_c0;
              lStack_1d0 = lStack_b8;
              lStack_1c8 = lStack_b0;
              lStack_1c0 = lStack_a8;
              uStack_1b8 = uStack_a0;
              lStack_1b0 = lStack_98;
              uStack_1a8 = uStack_90;
              uStack_1a0 = uStack_88;
              uStack_198 = uStack_80;
              uStack_190 = uStack_78;
            }
            else {
              ppuVar18 = (undefined **)0x2;
              if (bVar5 == 0x12) goto LAB_100ec0d90;
              FUN_100ec7314(&ppuStack_f8);
              ppuVar18 = ppuStack_f8;
              in_x10 = puStack_f0;
              puStack_200 = puStack_e8;
              uStack_1f8 = uStack_e0;
              lStack_1f0 = lStack_d8;
              lStack_1e8 = lStack_d0;
              lStack_1e0 = lStack_c8;
              lStack_1d8 = lStack_c0;
              lStack_1d0 = lStack_b8;
              lStack_1c8 = lStack_b0;
              lStack_1c0 = lStack_a8;
              uStack_1b8 = uStack_a0;
              lStack_1b0 = lStack_98;
              uStack_1a8 = uStack_90;
              uStack_1a0 = uStack_88;
              uStack_198 = uStack_80;
              uStack_190 = uStack_78;
            }
            if ((ppuVar18 == (undefined **)0x2) ||
               (ppuStack_f8 = ppuVar18, puStack_f0 = in_x10, puStack_e8 = puStack_200,
               uStack_e0 = uStack_1f8, lStack_d8 = lStack_1f0, lStack_d0 = lStack_1e8,
               lStack_c8 = lStack_1e0, lStack_c0 = lStack_1d8, lStack_b8 = lStack_1d0,
               lStack_b0 = lStack_1c8, lStack_a8 = lStack_1c0, uStack_a0 = uStack_1b8,
               lStack_98 = lStack_1b0, uStack_90 = uStack_1a8, uStack_88 = uStack_1a0,
               uStack_80 = uStack_198, uStack_78 = uStack_190, ppuVar18 == (undefined **)0x3)) {
              *param_1 = 3;
              param_1[1] = in_x10;
              return;
            }
          }
LAB_100ec0d90:
          uStack_238 = uStack_1b8;
          lStack_240 = lStack_1c0;
          uStack_228 = uStack_1a8;
          uStack_220 = uStack_1a0;
          lStack_268 = lStack_1e8;
          lStack_270 = lStack_1f0;
          lVar17 = lVar17 + 0x40;
          lStack_258 = lStack_1d8;
          lStack_250 = lStack_1d0;
        } while (lVar20 - lVar17 != 0);
        lStack_138 = lStack_1c0;
        lStack_140 = lStack_1c8;
        lStack_128 = lStack_1b0;
        uStack_130 = uStack_1b8;
        uStack_118 = uStack_1a0;
        uStack_120 = uStack_1a8;
        uStack_108 = uStack_190;
        uStack_110 = uStack_198;
        puStack_178 = puStack_200;
        lStack_168 = lStack_1f0;
        uStack_170 = uStack_1f8;
        lStack_158 = lStack_1e0;
        lStack_160 = lStack_1e8;
        lStack_148 = lStack_1d0;
        lStack_150 = lStack_1d8;
        lVar16 = lVar15;
        puStack_180 = in_x10;
      }
      param_1[10] = lStack_138;
      param_1[9] = lStack_140;
      param_1[0xc] = lStack_128;
      param_1[0xb] = uStack_130;
      param_1[0xe] = uStack_118;
      param_1[0xd] = uStack_120;
      param_1[0x10] = uStack_108;
      param_1[0xf] = uStack_110;
      param_1[2] = puStack_178;
      param_1[1] = puStack_180;
      param_1[4] = lStack_168;
      param_1[3] = uStack_170;
      param_1[6] = lStack_158;
      param_1[5] = lStack_160;
      *param_1 = ppuVar18;
      param_1[8] = lStack_148;
      param_1[7] = lStack_150;
      uVar7 = lVar15 - lVar16;
      if (uVar7 == 0) {
        return;
      }
      lVar15 = param_1[4];
      uVar11 = param_1[5];
      lVar16 = param_1[7];
      uVar3 = param_1[8];
      uVar1 = param_1[10];
      uVar4 = param_1[0xb];
      uVar2 = param_1[0xd];
      uStack_220 = param_1[0xe];
      ppuStack_f8 = ppuVar19;
      uVar10 = FUN_1087e422c((long)ppuVar19 + (uVar7 >> 6),&ppuStack_f8,&UNK_10b23a190);
      *param_1 = 3;
      param_1[1] = uVar10;
      if (ppuVar18 == (undefined **)0x2) {
        return;
      }
      if (lVar15 != 0) {
        _free(uVar11);
      }
      if ((uVar1 & 0x7fffffffffffffff) != 0) {
        _free(uVar4);
      }
      if (lVar16 != 0) {
        _free(uVar3);
      }
      uStack_228 = uVar2 & 0x7fffffffffffffff;
      goto joined_r0x000100ec118c;
    }
    puVar13 = (undefined8 *)FUN_108855c40(param_2,&puStack_200,&UNK_10b213ee8);
    goto LAB_100ec11b0;
  }
  lVar15 = *(long *)(param_2 + 0x18);
  if (lVar15 == 0) {
    puVar13 = (undefined8 *)FUN_1087e422c(0,&UNK_10b229d00,&UNK_10b20a590);
    goto LAB_100ec11b0;
  }
  cVar6 = **(char **)(param_2 + 0x10);
  ppuVar19 = (undefined **)0x2;
  puVar13 = param_1;
  if (cVar6 != '\x10') {
    if (cVar6 == '\x11') {
      FUN_100ec7314(&ppuStack_f8,*(undefined8 *)(*(char **)(param_2 + 0x10) + 8));
      ppuVar19 = ppuStack_f8;
      puVar13 = puStack_f0;
      puStack_290 = puStack_e8;
      uStack_288 = uStack_e0;
      lStack_280 = lStack_d8;
      lStack_278 = lStack_d0;
      lStack_270 = lStack_c8;
      lStack_268 = lStack_c0;
      lStack_260 = lStack_b8;
      lStack_258 = lStack_b0;
      lStack_250 = lStack_a8;
      uStack_248 = uStack_a0;
      lStack_240 = lStack_98;
      uStack_238 = uStack_90;
      uStack_230 = uStack_88;
      uStack_228 = uStack_80;
      uStack_220 = uStack_78;
    }
    else {
      if (cVar6 == '\x12') goto LAB_100ec10ec;
      FUN_100ec7314(&ppuStack_f8);
      ppuVar19 = ppuStack_f8;
      puVar13 = puStack_f0;
      puStack_290 = puStack_e8;
      uStack_288 = uStack_e0;
      lStack_280 = lStack_d8;
      lStack_278 = lStack_d0;
      lStack_270 = lStack_c8;
      lStack_268 = lStack_c0;
      lStack_260 = lStack_b8;
      lStack_258 = lStack_b0;
      lStack_250 = lStack_a8;
      uStack_248 = uStack_a0;
      lStack_240 = lStack_98;
      uStack_238 = uStack_90;
      uStack_230 = uStack_88;
      uStack_228 = uStack_80;
      uStack_220 = uStack_78;
    }
    if ((ppuVar19 == (undefined **)0x2) || (puStack_f0 = puVar13, ppuVar19 == (undefined **)0x3)) {
LAB_100ec11b0:
      *param_1 = 3;
      param_1[1] = puVar13;
      return;
    }
  }
LAB_100ec10ec:
  param_1[0xb] = uStack_248;
  param_1[10] = lStack_250;
  param_1[0xd] = uStack_238;
  param_1[0xc] = lStack_240;
  param_1[0xf] = uStack_228;
  param_1[0xe] = uStack_230;
  param_1[0x10] = uStack_220;
  param_1[3] = uStack_288;
  param_1[2] = puStack_290;
  param_1[5] = lStack_278;
  param_1[4] = lStack_280;
  param_1[7] = lStack_268;
  param_1[6] = lStack_270;
  param_1[9] = lStack_258;
  param_1[8] = lStack_260;
  *param_1 = ppuVar19;
  param_1[1] = puVar13;
  uVar7 = lVar15 - 1;
  if (uVar7 == 0) {
    return;
  }
  lVar15 = param_1[4];
  uVar11 = param_1[5];
  lVar16 = param_1[7];
  uVar3 = param_1[8];
  uVar1 = param_1[10];
  uVar4 = param_1[0xb];
  uVar2 = param_1[0xd];
  uStack_220 = param_1[0xe];
  ppuStack_f8 = (undefined **)0x1;
  uVar10 = FUN_1087e422c((uVar7 & 0x7ffffffffffffff) + 1,&ppuStack_f8,&UNK_10b23a1b0);
  *param_1 = 3;
  param_1[1] = uVar10;
  if (ppuVar19 == (undefined **)0x2) {
    return;
  }
  if (lVar15 != 0) {
    _free(uVar11);
  }
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    _free(uVar4);
  }
  if (lVar16 != 0) {
    _free(uVar3);
  }
  uStack_228 = uVar2 & 0x7fffffffffffffff;
joined_r0x000100ec118c:
  if (uStack_228 == 0) {
    return;
  }
  _free(uStack_220);
  return;
}

