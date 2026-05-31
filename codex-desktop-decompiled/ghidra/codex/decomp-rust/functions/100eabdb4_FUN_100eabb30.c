
undefined * FUN_100eabb30(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  long *plVar10;
  long lVar11;
  undefined *unaff_x20;
  long lVar12;
  undefined **ppuVar13;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  ulong uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined *puStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  if (*param_2 == '\x14') {
    lVar11 = *(long *)(param_2 + 0x18);
    if (lVar11 == 0) {
      puVar6 = (undefined *)FUN_1087e422c(0,&UNK_10b22e8f8,&UNK_10b20a590);
    }
    else {
      lVar12 = *(long *)(param_2 + 0x10);
      puVar6 = (undefined *)FUN_1012bb124(lVar12);
      if (puVar6 == (undefined *)0x0) {
        if (lVar11 != 1) {
          puVar6 = (undefined *)FUN_101305804(&uStack_e0,lVar12 + 0x20);
          puVar7 = puStack_d8;
          if (uStack_e0 == (undefined **)0x8000000000000000) {
            ppuVar13 = (undefined **)0x8000000000000000;
          }
          else {
            puStack_1f8 = puStack_a8;
            ppuStack_200 = ppuStack_b0;
            ppuStack_1e8 = ppuStack_98;
            ppuStack_1f0 = ppuStack_a0;
            uStack_1d8 = uStack_88;
            uStack_1e0 = uStack_90;
            ppuStack_218 = ppuStack_c8;
            ppuStack_220 = ppuStack_d0;
            ppuStack_208 = ppuStack_b8;
            puStack_210 = puStack_c0;
            ppuStack_230 = uStack_e0;
            puStack_228 = puStack_d8;
            ppuVar13 = uStack_e0;
            if (lVar11 != 2) {
              ppuStack_140 = (undefined **)0x2;
              puVar7 = (undefined *)
                       FUN_1087e422c((lVar11 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                                     &ppuStack_140,&UNK_10b23a1b0);
              puVar6 = (undefined *)FUN_100cbb248(&uStack_e0);
              ppuVar13 = (undefined **)0x8000000000000000;
            }
          }
          goto LAB_100eabde0;
        }
        puVar6 = (undefined *)FUN_1087e422c(1,&UNK_10b22e8f8,&UNK_10b20a590);
      }
    }
    puVar7 = puVar6;
    ppuVar13 = (undefined **)0x8000000000000000;
  }
  else {
    if (*param_2 != '\x15') {
      puVar6 = (undefined *)FUN_108855c40(param_2,&uStack_61,&UNK_10b214148);
      puVar7 = puVar6;
      goto LAB_100eabdec;
    }
    bVar2 = false;
    lStack_160 = *(long *)(param_2 + 0x10);
    lStack_158 = lStack_160 + *(long *)(param_2 + 0x18) * 0x40;
    lStack_150 = 0;
    ppuStack_148 = (undefined **)0x0;
    ppuVar13 = (undefined **)0x8000000000000000;
LAB_100eabb9c:
    do {
      while( true ) {
        puVar6 = (undefined *)FUN_100f23138(&uStack_e0,&lStack_160);
        lVar11 = lStack_150;
        puVar7 = puStack_d8;
        ppuVar4 = ppuVar13;
        if ((char)uStack_e0 == '\x01') goto joined_r0x000100eabc40;
        if (uStack_e0._1_1_ != '\x02') break;
        lStack_150 = 0;
        if (lVar11 == 0) {
LAB_100eac02c:
          lStack_150 = 0;
          ppuStack_140 = ppuVar13;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100eac04c);
          (*pcVar5)();
        }
      }
      if (uStack_e0._1_1_ != '\0') {
        if (uStack_e0._1_1_ == '\x01') {
          if (ppuVar13 != (undefined **)0x8000000000000000) {
            puStack_78 = &UNK_108cb9606;
            uStack_70 = 6;
            uStack_e0 = &puStack_78;
            puStack_d8 = &DAT_100c7b3a0;
            ppuStack_140 = ppuVar13;
            puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
            puVar7 = puVar6;
            goto joined_r0x000100eac0ec;
          }
          lStack_150 = 0;
          if (lVar11 == 0) {
            uVar8 = func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
            FUN_100cbb248(&ppuStack_230);
            __Unwind_Resume(uVar8);
            pcVar9 = (char *)func_0x000108a07bc4();
            plVar10 = &lStack_290;
            pcStack_238 = FUN_100eac1b4;
            uStack_248 = uVar8;
            puStack_240 = &stack0xfffffffffffffff0;
            if (*pcVar9 != '\x14') {
              if (*pcVar9 != '\x15') {
                puVar6 = (undefined *)FUN_108855c40(pcVar9,&lStack_290,&UNK_10b213b28);
                goto LAB_100eac2e4;
              }
              lStack_290 = *(long *)(pcVar9 + 0x10);
              lStack_288 = lStack_290 + *(long *)(pcVar9 + 0x18) * 0x40;
              lStack_280 = 0;
              uStack_278 = 0;
              FUN_100f23ae4(&uStack_260,&lStack_290);
              puVar6 = puStack_258;
              if (((ulong)uStack_260 & 1) != 0) goto LAB_100eac2e4;
              bVar2 = false;
              goto LAB_100eac26c;
            }
            lVar11 = *(long *)(pcVar9 + 0x18);
            if (lVar11 == 0) {
              plVar10 = (long *)&UNK_10b22e858;
              puVar6 = &UNK_10b20a590;
              lVar11 = 0;
              goto LAB_100eac2dc;
            }
            puVar6 = (undefined *)FUN_10124ded4(*(undefined8 *)(pcVar9 + 0x10));
            if (puVar6 != (undefined *)0x0) goto LAB_100eac2e4;
            uVar1 = lVar11 - 1;
            if (uVar1 == 0) goto LAB_100eac2c0;
            lStack_290 = 1;
            puVar6 = &UNK_10b23a1b0;
            lVar11 = (uVar1 & 0x7ffffffffffffff) + 1;
            goto LAB_100eac2dc;
          }
          puVar6 = (undefined *)FUN_101305804(&uStack_e0);
          puVar7 = puStack_d8;
          if (uStack_e0 != (undefined **)0x8000000000000000) {
            puStack_108 = puStack_a8;
            ppuStack_110 = ppuStack_b0;
            ppuStack_f8 = ppuStack_98;
            ppuStack_100 = ppuStack_a0;
            uStack_e8 = uStack_88;
            uStack_f0 = uStack_90;
            ppuStack_128 = ppuStack_c8;
            ppuStack_130 = ppuStack_d0;
            ppuStack_118 = ppuStack_b8;
            ppuStack_120 = (undefined **)puStack_c0;
            unaff_x20 = puStack_d8;
            ppuVar13 = uStack_e0;
            goto LAB_100eabb9c;
          }
        }
        else {
          if (!bVar2) {
            puStack_78 = &UNK_108cb495d;
            uStack_70 = 6;
            uStack_e0 = &puStack_78;
            puStack_d8 = &DAT_100c7b3a0;
            ppuStack_140 = ppuVar13;
            puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_e0);
            puVar7 = puVar6;
            ppuVar4 = ppuStack_140;
            break;
          }
          if (ppuVar13 != (undefined **)0x8000000000000000) {
            puStack_1f8 = puStack_108;
            ppuStack_200 = ppuStack_110;
            ppuStack_1e8 = ppuStack_f8;
            ppuStack_1f0 = ppuStack_100;
            uStack_1d8 = uStack_e8;
            uStack_1e0 = uStack_f0;
            ppuStack_218 = ppuStack_128;
            ppuStack_220 = ppuStack_130;
            ppuStack_208 = ppuStack_118;
            puStack_210 = (undefined *)ppuStack_120;
            ppuStack_98 = ppuStack_f8;
            ppuStack_a0 = ppuStack_100;
            uStack_88 = uStack_e8;
            uStack_90 = uStack_f0;
            ppuStack_b8 = ppuStack_118;
            puStack_c0 = (undefined *)ppuStack_120;
            puStack_a8 = puStack_108;
            ppuStack_b0 = ppuStack_110;
            ppuStack_c8 = ppuStack_128;
            ppuStack_d0 = ppuStack_130;
            puVar7 = unaff_x20;
            ppuStack_230 = ppuVar13;
            puStack_228 = unaff_x20;
            ppuStack_140 = ppuVar13;
            uStack_e0 = ppuVar13;
            puStack_d8 = unaff_x20;
            if (lStack_158 - lStack_160 != 0) {
              ppuStack_140 = ppuStack_148;
              puVar7 = (undefined *)
                       FUN_1087e422c((undefined *)
                                     ((long)ppuStack_148 + ((ulong)(lStack_158 - lStack_160) >> 6)),
                                     &ppuStack_140,&UNK_10b23a190);
              ppuVar13 = (undefined **)0x8000000000000000;
              ppuStack_230 = (undefined **)0x8000000000000000;
              puStack_228 = puVar7;
              puVar6 = (undefined *)FUN_100cbb248(&uStack_e0);
            }
            goto LAB_100eabde0;
          }
          puStack_78 = &UNK_108cb9606;
          uStack_70 = 6;
          uStack_e0 = &puStack_78;
          puStack_d8 = &DAT_100c7b3a0;
          ppuStack_140 = ppuVar13;
          puVar6 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_e0);
          puVar7 = puVar6;
        }
        ppuStack_230 = (undefined **)0x8000000000000000;
        puStack_228 = puVar7;
        goto LAB_100eabdd8;
      }
      if (bVar2) {
        puStack_78 = &UNK_108cb495d;
        uStack_70 = 6;
        uStack_e0 = &puStack_78;
        puStack_d8 = &DAT_100c7b3a0;
        ppuStack_140 = ppuVar13;
        puVar6 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_e0);
        puVar7 = puVar6;
        ppuVar4 = ppuStack_140;
        break;
      }
      lStack_150 = 0;
      if (lVar11 == 0) goto LAB_100eac02c;
      puVar6 = (undefined *)FUN_1012bb124();
      bVar2 = true;
      puVar7 = puVar6;
    } while (puVar6 == (undefined *)0x0);
joined_r0x000100eabc40:
    ppuStack_140 = ppuVar4;
    ppuStack_230 = (undefined **)0x8000000000000000;
    puStack_228 = puVar7;
    if (ppuVar13 != (undefined **)0x8000000000000000) {
joined_r0x000100eac0ec:
      ppuStack_230 = (undefined **)0x8000000000000000;
      puStack_228 = puVar7;
      if ((ppuStack_128 != (undefined **)0x8000000000000001) &&
         (ppuStack_230 = (undefined **)0x8000000000000000,
         ppuStack_128 != (undefined **)0x8000000000000000)) {
        if ((puStack_108 != (undefined *)0x0) && ((long)puStack_108 * 9 != -0x11)) {
          _free(ppuStack_110 + (-1 - (long)puStack_108));
        }
        puVar6 = (undefined *)func_0x000100cd7284(&ppuStack_128);
      }
      if (ppuVar13 != (undefined **)0x0) {
        puVar6 = (undefined *)_free(unaff_x20);
      }
    }
LAB_100eabdd8:
    ppuVar13 = (undefined **)0x8000000000000000;
  }
LAB_100eabde0:
  puVar3 = puStack_210;
  ppuVar4 = ppuStack_220;
  if (ppuVar13 == (undefined **)0x8000000000000000) {
LAB_100eabdec:
    *param_1 = 0x8000000000000000;
    param_1[1] = puVar7;
    return puVar6;
  }
  ppuStack_1c8 = ppuStack_200;
  ppuStack_1d0 = ppuStack_208;
  ppuStack_1b8 = ppuStack_1f0;
  puStack_1c0 = puStack_1f8;
  ppuStack_1b0 = ppuStack_1e8;
  if (ppuStack_218 == (undefined **)0x8000000000000000) {
    puStack_c0 = (undefined *)0x0;
    ppuStack_c8 = (undefined **)&UNK_108c56c70;
    ppuStack_b0 = (undefined **)0x0;
    ppuStack_b8 = (undefined **)0x0;
    uStack_e0 = (undefined **)0x0;
    puStack_d8 = (undefined *)0x8;
    ppuStack_d0 = (undefined **)0x0;
    puVar6 = (undefined *)FUN_1011a27dc(&uStack_e0,puStack_210);
    ppuStack_230 = (undefined **)0x0;
    ppuStack_138 = ppuStack_c8;
    ppuStack_140 = ppuStack_d0;
    ppuStack_128 = ppuStack_b8;
    ppuStack_130 = (undefined **)puStack_c0;
    ppuStack_120 = ppuStack_b0;
    uStack_168 = *(undefined8 *)(puVar3 + 0x40);
    uStack_170 = *(undefined8 *)(puVar3 + 0x38);
    ppuStack_1a8 = uStack_e0;
    puStack_1a0 = puStack_d8;
    if (uStack_e0 == (undefined **)0x8000000000000000) goto LAB_100eabf18;
  }
  else {
    if (ppuStack_218 == (undefined **)0x8000000000000001) {
      ppuStack_230 = (undefined **)0x0;
      goto LAB_100eabf18;
    }
    ppuStack_138 = ppuStack_200;
    ppuStack_140 = ppuStack_208;
    ppuStack_128 = ppuStack_1f0;
    ppuStack_130 = (undefined **)puStack_1f8;
    ppuStack_120 = ppuStack_1e8;
    ppuStack_1a8 = ppuStack_218;
    puStack_1a0 = puStack_210;
    uStack_170 = uStack_1e0;
    uStack_168 = uStack_1d8;
  }
  ppuStack_230 = (undefined **)0x0;
  ppuStack_190 = ppuStack_138;
  ppuStack_198 = ppuStack_140;
  ppuStack_180 = ppuStack_128;
  puStack_188 = (undefined *)ppuStack_130;
  ppuStack_178 = ppuStack_120;
  puVar6 = (undefined *)FUN_100ecd2fc(&uStack_e0,&ppuStack_230,&ppuStack_1a8);
  if (uStack_e0 != (undefined **)0x8000000000000000) {
    if ((puStack_c0 != (undefined *)0x0) && ((long)puStack_c0 * 9 != -0x11)) {
      _free(ppuStack_c8 + (-1 - (long)puStack_c0));
    }
    puVar6 = (undefined *)func_0x000100cd7284(&uStack_e0);
  }
LAB_100eabf18:
  *param_1 = ppuVar13;
  param_1[1] = puVar7;
  param_1[2] = ppuVar4;
  param_1[3] = ppuStack_230;
  return puVar6;
LAB_100eac26c:
  do {
    lVar11 = lStack_280;
    if (uStack_260._1_1_ == '\x02') {
      if (bVar2) {
        if (lStack_288 - lStack_290 == 0) {
LAB_100eac2c0:
          puVar6 = (undefined *)0;
        }
        else {
          uStack_260 = (undefined **)uStack_278;
          lVar11 = uStack_278 + ((ulong)(lStack_288 - lStack_290) >> 6);
          puVar6 = &UNK_10b23a190;
          plVar10 = &uStack_260;
LAB_100eac2dc:
          puVar6 = (undefined *)FUN_1087e422c(lVar11,plVar10,puVar6);
        }
      }
      else {
        pcVar9 = s_missing_field_____108ac28f7;
LAB_100eac324:
        uStack_260 = &puStack_270;
        puStack_258 = &DAT_100c7b3a0;
        uStack_268 = 6;
        puStack_270 = &UNK_108cb495d;
        puVar6 = (undefined *)FUN_108856088(pcVar9,&uStack_260);
      }
      break;
    }
    if (((ulong)uStack_260 & 0x100) == 0) {
      if (bVar2) goto LAB_100eac348;
      lStack_280 = 0;
      if (lVar11 == 0) goto LAB_100eac330;
      puVar6 = (undefined *)FUN_10124ded4();
      if (puVar6 != (undefined *)0x0) break;
      bVar2 = true;
      FUN_100f23ae4(&uStack_260,&lStack_290);
      puVar6 = puStack_258;
    }
    else {
      lStack_280 = 0;
      if (lVar11 == 0) {
LAB_100eac330:
        lStack_280 = 0;
        func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_100eac348:
        pcVar9 = s_duplicate_field_____108ac2973;
        goto LAB_100eac324;
      }
      FUN_100f23ae4(&uStack_260,&lStack_290);
      puVar6 = puStack_258;
    }
    puStack_258 = puVar6;
  } while (((ulong)uStack_260 & 1) == 0);
LAB_100eac2e4:
  return (undefined *)(ulong)(puVar6 != (undefined *)0x0);
}

