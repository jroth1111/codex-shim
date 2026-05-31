
void FUN_100ea9b3c(undefined8 *param_1,char *param_2)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *unaff_x21;
  long lVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined **ppuStack_2e0;
  undefined *puStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  if (*param_2 != '\x14') {
    if (*param_2 == '\x15') {
      bVar1 = false;
      lStack_1e8 = *(long *)(param_2 + 0x10);
      lStack_1e0 = lStack_1e8 + *(long *)(param_2 + 0x18) * 0x40;
      lStack_1d8 = 0;
      ppuStack_1d0 = (undefined **)0x0;
      pppuVar8 = &ppuStack_1c8;
      ppuVar7 = (undefined **)0x8000000000000000;
LAB_100ea9ba8:
      do {
        while( true ) {
          FUN_100f23138(&uStack_120,&lStack_1e8);
          lVar6 = lStack_1d8;
          ppuStack_1c8 = ppuVar7;
          puVar5 = puStack_118;
          if ((char)uStack_120 == '\x01') goto joined_r0x000100ea9c98;
          if (uStack_120._1_1_ != '\x02') break;
          lStack_1d8 = 0;
          if (lVar6 == 0) {
LAB_100eaa11c:
            lStack_1d8 = 0;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100eaa13c);
            (*pcVar3)();
          }
        }
        if (uStack_120._1_1_ != '\0') {
          if (uStack_120._1_1_ != '\x01') {
            if (bVar1) {
              if (ppuVar7 == (undefined **)0x8000000000000000) {
                puStack_78 = &UNK_108cb9606;
                uStack_70 = 6;
                uStack_120 = &puStack_78;
                puStack_118 = &DAT_100c7b3a0;
                puVar5 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_120);
                goto LAB_100ea9f20;
              }
              puStack_268 = puStack_150;
              ppuStack_270 = ppuStack_158;
              uStack_258 = uStack_140;
              lStack_260 = lStack_148;
              uStack_248 = uStack_130;
              lStack_250 = lStack_138;
              lStack_2a8 = lStack_190;
              lStack_2b0 = lStack_198;
              uStack_298 = uStack_180;
              uStack_2a0 = uStack_188;
              uStack_288 = uStack_170;
              uStack_290 = uStack_178;
              puStack_278 = puStack_160;
              ppuStack_280 = ppuStack_168;
              puStack_2c8 = puStack_1b0;
              ppuStack_2d0 = ppuStack_1b8;
              uStack_2b8 = uStack_1a0;
              lStack_2c0 = lStack_1a8;
              uStack_98 = uStack_140;
              lStack_a0 = lStack_148;
              uStack_88 = uStack_130;
              lStack_90 = lStack_138;
              uStack_d8 = uStack_180;
              uStack_e0 = uStack_188;
              uStack_c8 = uStack_170;
              uStack_d0 = uStack_178;
              uStack_240 = uStack_128;
              uStack_80 = uStack_128;
              puStack_b8 = puStack_160;
              ppuStack_c0 = ppuStack_168;
              puStack_a8 = puStack_150;
              ppuStack_b0 = ppuStack_158;
              uStack_f8 = uStack_1a0;
              lStack_100 = lStack_1a8;
              lStack_e8 = lStack_190;
              lStack_f0 = lStack_198;
              puStack_108 = puStack_1b0;
              ppuStack_110 = ppuStack_1b8;
              puStack_118 = unaff_x21;
              uStack_120 = ppuVar7;
              puStack_1c0 = unaff_x21;
              if (lStack_1e0 - lStack_1e8 == 0) goto LAB_100ea9e24;
              ppuStack_1c8 = ppuStack_1d0;
              ppuStack_2e0 = ppuVar7;
              puStack_2d8 = unaff_x21;
              puVar5 = (undefined *)
                       FUN_1087e422c((long)ppuStack_1d0 + ((ulong)(lStack_1e0 - lStack_1e8) >> 6),
                                     &ppuStack_1c8,&UNK_10b23a190);
              if ((ppuStack_c0 != (undefined **)0x8000000000000001) &&
                 (ppuStack_c0 != (undefined **)0x8000000000000000)) {
                if ((lStack_a0 != 0) && (lStack_a0 * 9 != -0x11)) {
                  _free(puStack_a8 + lStack_a0 * -8 + -8);
                }
                func_0x000100cd7284(&ppuStack_c0);
              }
              goto LAB_100eaa274;
            }
            puStack_78 = &UNK_108cb495d;
            uStack_70 = 6;
            uStack_120 = &puStack_78;
            puStack_118 = &DAT_100c7b3a0;
            puVar5 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_120);
            break;
          }
          if (ppuVar7 != (undefined **)0x8000000000000000) {
            puStack_78 = &UNK_108cb9606;
            uStack_70 = 6;
            uStack_120 = &puStack_78;
            puStack_118 = &DAT_100c7b3a0;
            puVar5 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_120);
            goto joined_r0x000100eaa1d8;
          }
          lStack_1d8 = 0;
          if (lVar6 == 0) {
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
            goto LAB_100eaa1f8;
          }
          FUN_1012e09c8(&uStack_120);
          puVar5 = puStack_118;
          if (uStack_120 == (undefined **)0x8000000000000000) goto LAB_100ea9f20;
          puStack_150 = puStack_a8;
          ppuStack_158 = ppuStack_b0;
          uStack_140 = uStack_98;
          lStack_148 = lStack_a0;
          uStack_130 = uStack_88;
          lStack_138 = lStack_90;
          uStack_128 = uStack_80;
          lStack_190 = lStack_e8;
          lStack_198 = lStack_f0;
          uStack_180 = uStack_d8;
          uStack_188 = uStack_e0;
          uStack_170 = uStack_c8;
          uStack_178 = uStack_d0;
          puStack_160 = puStack_b8;
          ppuStack_168 = ppuStack_c0;
          puStack_1b0 = puStack_108;
          ppuStack_1b8 = ppuStack_110;
          uStack_1a0 = uStack_f8;
          lStack_1a8 = lStack_100;
          unaff_x21 = puStack_118;
          ppuVar7 = uStack_120;
          goto LAB_100ea9ba8;
        }
        if (bVar1) {
          puStack_78 = &UNK_108cb495d;
          uStack_70 = 6;
          uStack_120 = &puStack_78;
          puStack_118 = &DAT_100c7b3a0;
          puVar5 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_120);
          break;
        }
        lStack_1d8 = 0;
        if (lVar6 == 0) goto LAB_100eaa11c;
        puVar5 = (undefined *)FUN_10129e664();
        bVar1 = true;
      } while (puVar5 == (undefined *)0x0);
joined_r0x000100ea9c98:
      if (ppuVar7 != (undefined **)0x8000000000000000) {
joined_r0x000100eaa1d8:
        if ((ppuStack_168 != (undefined **)0x8000000000000001) &&
           (ppuStack_168 != (undefined **)0x8000000000000000)) {
          if ((lStack_148 != 0) && (lStack_148 * 9 != -0x11)) {
            _free(puStack_150 + lStack_148 * -8 + -8);
          }
          func_0x000100cd7284(&ppuStack_168);
        }
        if (puStack_1b0 != (undefined *)0x8000000000000000) {
          if ((lStack_190 != 0) && (lStack_190 * 9 != -0x11)) {
            _free(lStack_198 + lStack_190 * -8 + -8);
          }
          func_0x000100cd7284(&puStack_1b0);
        }
        if (ppuVar7 != (undefined **)0x0) {
          _free(unaff_x21);
        }
      }
    }
    else {
      puVar5 = (undefined *)FUN_108855c40(param_2,&uStack_61,&UNK_10b213c28);
    }
    goto LAB_100ea9f20;
  }
  pppuVar8 = *(undefined ****)(param_2 + 0x18);
  if (pppuVar8 == (undefined ***)0x0) {
    uVar4 = 0;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x10);
    puVar5 = (undefined *)FUN_10129e664(lVar6);
    if (puVar5 != (undefined *)0x0) goto LAB_100ea9f20;
    if (pppuVar8 != (undefined ***)0x1) {
      FUN_1012e09c8(&uStack_120,lVar6 + 0x20);
      puVar5 = puStack_118;
      if (uStack_120 != (undefined **)0x8000000000000000) {
        puStack_268 = puStack_a8;
        ppuStack_270 = ppuStack_b0;
        uStack_258 = uStack_98;
        lStack_260 = lStack_a0;
        uStack_248 = uStack_88;
        lStack_250 = lStack_90;
        lStack_2a8 = lStack_e8;
        lStack_2b0 = lStack_f0;
        uStack_298 = uStack_d8;
        uStack_2a0 = uStack_e0;
        uStack_288 = uStack_c8;
        uStack_290 = uStack_d0;
        puStack_278 = puStack_b8;
        ppuStack_280 = ppuStack_c0;
        puStack_2c8 = puStack_108;
        ppuStack_2d0 = ppuStack_110;
        uStack_2b8 = uStack_f8;
        lStack_2c0 = lStack_100;
        uStack_240 = uStack_80;
        ppuStack_2e0 = uStack_120;
        puStack_2d8 = puStack_118;
        if (pppuVar8 != (undefined ***)0x2) {
LAB_100eaa1f8:
          ppuStack_1c8 = (undefined **)0x2;
          puVar5 = (undefined *)
                   FUN_1087e422c(((long)pppuVar8 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                                 &ppuStack_1c8,&UNK_10b23a1b0);
          if ((ppuStack_c0 != (undefined **)0x8000000000000001) &&
             (ppuStack_c0 != (undefined **)0x8000000000000000)) {
            if ((lStack_a0 != 0) && (lStack_a0 * 9 != -0x11)) {
              _free(puStack_a8 + lStack_a0 * -8 + -8);
            }
            func_0x000100cd7284(&ppuStack_c0);
          }
LAB_100eaa274:
          FUN_100df1aa4(&ppuStack_2e0);
          goto LAB_100ea9f20;
        }
LAB_100ea9e24:
        puVar2 = puStack_278;
        puVar5 = puStack_118;
        if (uStack_120 == (undefined **)0x8000000000000000) goto LAB_100ea9f20;
        puStack_a8 = puStack_268;
        ppuStack_b0 = ppuStack_270;
        uStack_98 = uStack_258;
        lStack_a0 = lStack_260;
        uStack_88 = uStack_248;
        lStack_90 = lStack_250;
        uStack_80 = uStack_240;
        lStack_e8 = lStack_2a8;
        lStack_f0 = lStack_2b0;
        uStack_d8 = uStack_298;
        uStack_e0 = uStack_2a0;
        uStack_c8 = uStack_288;
        uStack_d0 = uStack_290;
        puStack_b8 = puStack_278;
        ppuStack_c0 = ppuStack_280;
        puStack_108 = puStack_2c8;
        ppuStack_110 = ppuStack_2d0;
        uStack_f8 = uStack_2b8;
        lStack_100 = lStack_2c0;
        if (ppuStack_280 == (undefined **)0x8000000000000000) {
          lStack_1a8 = 0;
          puStack_1b0 = &UNK_108c56c70;
          lStack_198 = 0;
          uStack_1a0 = 0;
          ppuStack_1c8 = (undefined **)0x0;
          puStack_1c0 = (undefined *)0x8;
          ppuStack_1b8 = (undefined **)0x0;
          ppuStack_2e0 = uStack_120;
          FUN_1011a27dc(&ppuStack_1c8,puStack_278);
          lStack_1e8 = 0;
          puStack_2d8 = puStack_1b0;
          ppuStack_2e0 = ppuStack_1b8;
          puStack_2c8 = (undefined *)uStack_1a0;
          ppuStack_2d0 = (undefined **)lStack_1a8;
          lStack_2c0 = lStack_198;
          uStack_1f0 = *(undefined8 *)(puVar2 + 0x40);
          uStack_1f8 = *(undefined8 *)(puVar2 + 0x38);
          ppuStack_230 = ppuStack_1c8;
          puStack_228 = puStack_1c0;
          if (ppuStack_1c8 == (undefined **)0x8000000000000000) goto LAB_100eaa070;
        }
        else {
          if (ppuStack_280 == (undefined **)0x8000000000000001) {
            lStack_1e8 = 0;
            goto LAB_100eaa070;
          }
          puStack_2d8 = puStack_268;
          ppuStack_2e0 = ppuStack_270;
          puStack_2c8 = (undefined *)uStack_258;
          ppuStack_2d0 = (undefined **)lStack_260;
          lStack_2c0 = lStack_250;
          ppuStack_230 = ppuStack_280;
          puStack_228 = puStack_278;
          uStack_1f8 = uStack_248;
          uStack_1f0 = uStack_240;
        }
        lStack_1e8 = 0;
        puStack_218 = puStack_2d8;
        ppuStack_220 = ppuStack_2e0;
        uStack_208 = puStack_2c8;
        lStack_210 = (long)ppuStack_2d0;
        lStack_200 = lStack_2c0;
        FUN_100ecd2fc(&ppuStack_1c8,&lStack_1e8,&ppuStack_230);
        if (ppuStack_1c8 != (undefined **)0x8000000000000000) {
          if ((lStack_1a8 != 0) && (lStack_1a8 * 9 != -0x11)) {
            _free(puStack_1b0 + lStack_1a8 * -8 + -8);
          }
          func_0x000100cd7284(&ppuStack_1c8);
        }
LAB_100eaa070:
        param_1[5] = uStack_f8;
        param_1[4] = lStack_100;
        param_1[7] = lStack_e8;
        param_1[6] = lStack_f0;
        param_1[9] = uStack_d8;
        param_1[8] = uStack_e0;
        param_1[0xb] = uStack_c8;
        param_1[10] = uStack_d0;
        param_1[1] = puStack_118;
        *param_1 = uStack_120;
        param_1[3] = puStack_108;
        param_1[2] = ppuStack_110;
        param_1[0xc] = lStack_1e8;
        return;
      }
      goto LAB_100ea9f20;
    }
    uVar4 = 1;
  }
  puVar5 = (undefined *)FUN_1087e422c(uVar4,&UNK_10b22e8f8,&UNK_10b20a590);
LAB_100ea9f20:
  *param_1 = 0x8000000000000000;
  param_1[1] = puVar5;
  return;
}

