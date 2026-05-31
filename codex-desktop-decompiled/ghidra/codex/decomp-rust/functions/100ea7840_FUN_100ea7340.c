
void FUN_100ea7340(undefined8 *param_1,char *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *unaff_x20;
  undefined **ppuVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined **ppuStack_480;
  undefined *puStack_478;
  long lStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined **ppuStack_340;
  undefined *puStack_338;
  undefined **ppuStack_330;
  undefined *puStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined *puStack_2d0;
  undefined **ppuStack_2c8;
  undefined *puStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long alStack_1e8 [3];
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  ppuStack_480 = (undefined **)0x0;
  if (*param_2 == '\x14') {
    pppuVar7 = *(undefined ****)(param_2 + 0x18);
    if (pppuVar7 == (undefined ***)0x0) {
      uVar3 = 0;
    }
    else {
      lVar6 = *(long *)(param_2 + 0x10);
      puVar4 = (undefined *)FUN_1012ecf3c(lVar6);
      if (puVar4 != (undefined *)0x0) goto LAB_100ea7640;
      if (pppuVar7 != (undefined ***)0x1) {
        FUN_1012f437c(&uStack_1a0,lVar6 + 0x20);
        unaff_x20 = puStack_198;
        ppuVar5 = uStack_1a0;
        puVar4 = puStack_198;
        if (uStack_1a0 == (undefined **)0x8000000000000001) goto LAB_100ea7640;
        _memcpy(&lStack_470,&uStack_190,0x128);
        ppuStack_480 = ppuVar5;
        puStack_478 = unaff_x20;
        _memcpy(&uStack_1a0,&ppuStack_480,0x138);
        if (pppuVar7 == (undefined ***)0x2) {
LAB_100ea7584:
          puVar4 = unaff_x20;
          if (ppuVar5 == (undefined **)0x8000000000000001) goto LAB_100ea7640;
          _memcpy(&uStack_190,&lStack_470,0x128);
          uStack_1a0 = ppuVar5;
          puStack_198 = unaff_x20;
          if (ppuStack_b0 == (undefined **)0x8000000000000000) {
            lStack_2b8 = 0;
            puStack_2c0 = &UNK_108c56c70;
            uStack_2a8 = 0;
            uStack_2b0 = 0;
            ppuStack_2d8 = (undefined **)0x0;
            puStack_2d0 = (undefined *)0x8;
            ppuStack_2c8 = (undefined **)0x0;
            FUN_1011a27dc(&ppuStack_2d8,puStack_a8);
            lStack_2f8 = 0;
            puStack_478 = puStack_2c0;
            ppuStack_480 = ppuStack_2c8;
            uStack_468 = uStack_2b0;
            lStack_470 = lStack_2b8;
            uStack_460 = uStack_2a8;
            uStack_70 = *(undefined8 *)(puStack_a8 + 0x40);
            uStack_78 = *(undefined8 *)(puStack_a8 + 0x38);
            ppuStack_b0 = ppuStack_2d8;
            puStack_a8 = puStack_2d0;
            if (ppuStack_2d8 == (undefined **)0x8000000000000000) goto LAB_100ea7784;
          }
          else {
            if (ppuStack_b0 == (undefined **)0x8000000000000001) {
              lStack_2f8 = 0;
              goto LAB_100ea7784;
            }
            puStack_478 = puStack_98;
            ppuStack_480 = ppuStack_a0;
            uStack_468 = uStack_88;
            lStack_470 = lStack_90;
            uStack_460 = uStack_80;
          }
          lStack_2f8 = 0;
          puStack_328 = puStack_478;
          ppuStack_330 = ppuStack_480;
          uStack_318 = uStack_468;
          lStack_320 = lStack_470;
          uStack_310 = uStack_460;
          ppuStack_340 = ppuStack_b0;
          puStack_338 = puStack_a8;
          uStack_308 = uStack_78;
          uStack_300 = uStack_70;
          FUN_100ecd2fc(&ppuStack_2d8,&lStack_2f8,&ppuStack_340);
          if (ppuStack_2d8 != (undefined **)0x8000000000000000) {
            if ((lStack_2b8 != 0) && (lStack_2b8 * 9 != -0x11)) {
              _free(puStack_2c0 + lStack_2b8 * -8 + -8);
            }
            func_0x000100cd7284(&ppuStack_2d8);
          }
LAB_100ea7784:
          param_1[0x19] = uStack_d8;
          param_1[0x18] = uStack_e0;
          param_1[0x1b] = uStack_c8;
          param_1[0x1a] = uStack_d0;
          param_1[0x1d] = uStack_b8;
          param_1[0x1c] = uStack_c0;
          param_1[0x11] = uStack_118;
          param_1[0x10] = uStack_120;
          param_1[0x13] = uStack_108;
          param_1[0x12] = uStack_110;
          param_1[0x15] = uStack_f8;
          param_1[0x14] = uStack_100;
          param_1[0x17] = uStack_e8;
          param_1[0x16] = uStack_f0;
          param_1[9] = uStack_158;
          param_1[8] = uStack_160;
          param_1[0xb] = uStack_148;
          param_1[10] = uStack_150;
          param_1[0xd] = uStack_138;
          param_1[0xc] = uStack_140;
          param_1[0xf] = uStack_128;
          param_1[0xe] = uStack_130;
          param_1[1] = puStack_198;
          *param_1 = uStack_1a0;
          param_1[3] = uStack_188;
          param_1[2] = uStack_190;
          param_1[5] = uStack_178;
          param_1[4] = uStack_180;
          param_1[7] = uStack_168;
          param_1[6] = uStack_170;
          param_1[0x1e] = lStack_2f8;
          return;
        }
LAB_100ea7938:
        ppuStack_2d8 = (undefined **)0x2;
        puVar4 = (undefined *)
                 FUN_1087e422c(((long)pppuVar7 + 0x7fffffffffffffeU & 0x7ffffffffffffff) + 2,
                               &ppuStack_2d8,&UNK_10b23a1b0);
        pppuVar7 = &ppuStack_480;
        if ((ppuStack_b0 != (undefined **)0x8000000000000001) &&
           (pppuVar7 = &ppuStack_480, ppuStack_b0 != (undefined **)0x8000000000000000)) {
          if ((lStack_90 != 0) && (lStack_90 * 9 != -0x11)) {
            _free(puStack_98 + lStack_90 * -8 + -8);
          }
          func_0x000100cd7284(&ppuStack_b0);
          pppuVar7 = &ppuStack_480;
        }
        goto LAB_100ea762c;
      }
      uVar3 = 1;
    }
    puVar4 = (undefined *)FUN_1087e422c(uVar3,&UNK_10b22e8f8,&UNK_10b20a590);
  }
  else {
    if (*param_2 != '\x15') {
      puVar4 = (undefined *)FUN_108855c40(param_2,&uStack_51,&UNK_10b214208);
      goto LAB_100ea7640;
    }
    bVar1 = false;
    lStack_2f8 = *(long *)(param_2 + 0x10);
    lStack_2f0 = lStack_2f8 + *(long *)(param_2 + 0x18) * 0x40;
    lStack_2e8 = 0;
    ppuStack_2e0 = (undefined **)0x0;
    pppuVar7 = &ppuStack_2d8;
    ppuVar5 = (undefined **)0x8000000000000001;
LAB_100ea73ac:
    do {
      while( true ) {
        FUN_100f23138(&uStack_1a0,&lStack_2f8);
        lVar6 = lStack_2e8;
        puVar4 = puStack_198;
        ppuStack_2d8 = ppuVar5;
        if ((char)uStack_1a0 == '\x01') goto LAB_100ea75c8;
        if (uStack_1a0._1_1_ != '\x02') break;
        lStack_2e8 = 0;
        if (lVar6 == 0) {
LAB_100ea7858:
          lStack_2e8 = 0;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ea7878);
          (*pcVar2)();
        }
      }
      if (uStack_1a0._1_1_ != '\0') {
        if (uStack_1a0._1_1_ != '\x01') {
          if (bVar1) {
            if (ppuVar5 == (undefined **)0x8000000000000001) {
              puStack_68 = &UNK_108cb9606;
              uStack_60 = 6;
              uStack_1a0 = &puStack_68;
              puStack_198 = &DAT_100c7b3a0;
              puVar4 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_1a0);
              goto LAB_100ea7640;
            }
            puStack_2d0 = unaff_x20;
            _memcpy(&lStack_470,&ppuStack_2c8,0x128);
            ppuStack_480 = ppuVar5;
            puStack_478 = unaff_x20;
            _memcpy(&uStack_1a0,&ppuStack_480,0x138);
            if (lStack_2f0 - lStack_2f8 == 0) goto LAB_100ea7584;
            ppuStack_2d8 = ppuStack_2e0;
            puVar4 = (undefined *)
                     FUN_1087e422c((long)ppuStack_2e0 + ((ulong)(lStack_2f0 - lStack_2f8) >> 6),
                                   &ppuStack_2d8,&UNK_10b23a190);
            pppuVar7 = &ppuStack_480;
            if ((ppuStack_b0 != (undefined **)0x8000000000000001) &&
               (pppuVar7 = &ppuStack_480, ppuStack_b0 != (undefined **)0x8000000000000000)) {
              if ((lStack_90 != 0) && (lStack_90 * 9 != -0x11)) {
                _free(puStack_98 + lStack_90 * -8 + -8);
              }
              func_0x000100cd7284(&ppuStack_b0);
              pppuVar7 = &ppuStack_480;
            }
            goto LAB_100ea762c;
          }
          puStack_68 = &UNK_108cb495d;
          uStack_60 = 6;
          uStack_1a0 = &puStack_68;
          puStack_198 = &DAT_100c7b3a0;
          puVar4 = (undefined *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_1a0);
          break;
        }
        if (ppuVar5 != (undefined **)0x8000000000000001) {
          puStack_68 = &UNK_108cb9606;
          uStack_60 = 6;
          uStack_1a0 = &puStack_68;
          puStack_198 = &DAT_100c7b3a0;
          puVar4 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_1a0);
          goto joined_r0x000100ea7918;
        }
        lStack_2e8 = 0;
        if (lVar6 == 0) {
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
          goto LAB_100ea7938;
        }
        FUN_1012f437c(&uStack_1a0);
        unaff_x20 = puStack_198;
        ppuVar5 = uStack_1a0;
        puVar4 = puStack_198;
        if (uStack_1a0 == (undefined **)0x8000000000000001) goto LAB_100ea7640;
        _memcpy(&ppuStack_2c8,&uStack_190,0x128);
        goto LAB_100ea73ac;
      }
      if (bVar1) {
        puStack_68 = &UNK_108cb495d;
        uStack_60 = 6;
        uStack_1a0 = &puStack_68;
        puStack_198 = &DAT_100c7b3a0;
        puVar4 = (undefined *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_1a0);
        break;
      }
      lStack_2e8 = 0;
      if (lVar6 == 0) goto LAB_100ea7858;
      puVar4 = (undefined *)FUN_1012ecf3c();
      bVar1 = true;
    } while (puVar4 == (undefined *)0x0);
LAB_100ea75c8:
    if (ppuVar5 == (undefined **)0x8000000000000001) goto LAB_100ea7640;
joined_r0x000100ea7918:
    if ((alStack_1e8[0] != -0x7fffffffffffffff) && (alStack_1e8[0] != -0x8000000000000000)) {
      if ((lStack_1c8 != 0) && (lStack_1c8 * 9 != -0x11)) {
        _free(lStack_1d0 + lStack_1c8 * -8 + -8);
      }
      func_0x000100cd7284(alStack_1e8);
    }
    pppuVar7 = &ppuStack_2d8;
LAB_100ea762c:
    FUN_100dfdaa4(pppuVar7);
  }
LAB_100ea7640:
  *param_1 = 0x8000000000000001;
  param_1[1] = puVar4;
  return;
}

