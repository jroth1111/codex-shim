
/* WARNING: Type propagation algorithm not settling */

void FUN_1013800e4(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *******pppppppuVar9;
  undefined *puStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  char *pcStack_2c0;
  undefined8 ******ppppppuStack_2b8;
  undefined8 *******pppppppuStack_2b0;
  undefined *puStack_2a8;
  undefined8 *******pppppppuStack_2a0;
  undefined *puStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined *puStack_288;
  undefined8 *******pppppppuStack_280;
  undefined *puStack_278;
  undefined8 *******pppppppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long alStack_1d0 [3];
  long lStack_1b8;
  long lStack_1b0;
  undefined8 *******pppppppuStack_180;
  undefined *puStack_178;
  undefined8 *******pppppppuStack_170;
  undefined *puStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined8 *******pppppppuStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 *******pppppppuStack_120;
  undefined *puStack_118;
  undefined4 uStack_108;
  undefined3 uStack_104;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_c0;
  char cStack_b0;
  undefined7 uStack_af;
  undefined *puStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (*param_2 == '\x15') {
    lStack_2d0 = *(long *)(param_2 + 0x10);
    lStack_2c8 = lStack_2d0 + *(long *)(param_2 + 0x18) * 0x40;
    pcStack_2c0 = (char *)0x0;
    ppppppuStack_2b8 = (undefined8 ******)0x0;
    lStack_138 = 0;
    lStack_130 = 8;
    lStack_128 = 0;
    pppppppuVar9 = (undefined8 *******)0x8000000000000002;
    while( true ) {
      FUN_100f24408(&pppppppuStack_2b0,&lStack_2d0);
      pcVar4 = pcStack_2c0;
      pppppppuStack_180 = pppppppuVar9;
      if ((char)pppppppuStack_2b0 == '\x18') break;
      uVar2 = *(undefined4 *)((long)((ulong)&pppppppuStack_2b0 | 1) + 3);
      uStack_108._0_3_ = (undefined3)*(undefined4 *)((ulong)&pppppppuStack_2b0 | 1);
      uStack_108._3_1_ = (undefined1)uVar2;
      uStack_104 = (undefined3)((uint)uVar2 >> 8);
      puStack_118 = puStack_298;
      pppppppuStack_120 = pppppppuStack_2a0;
      if ((char)pppppppuStack_2b0 == '\x16') {
        if (pppppppuVar9 != (undefined8 *******)0x8000000000000002) {
          puStack_178 = puStack_2d8;
          pppppppuStack_100 = (undefined8 *******)&UNK_108cadf95;
          puStack_f8 = (undefined *)0x5;
          pppppppuStack_2b0 = &pppppppuStack_100;
          puStack_2a8 = &DAT_100c7b3a0;
          bVar7 = true;
          uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,&pppppppuStack_2b0);
          *param_1 = 2;
          param_1[1] = uVar8;
          goto LAB_10138040c;
        }
        pcStack_2c0 = (char *)0x0;
        if (pcVar4 == (char *)0x0) {
          puStack_178 = puStack_2d8;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
          goto LAB_1013805dc;
        }
        cVar3 = *pcVar4;
        pppppppuVar9 = (undefined8 *******)0x8000000000000001;
        if (cVar3 != '\x10') {
          if (cVar3 == '\x11') {
            FUN_1004de164(&pppppppuStack_2b0,*(undefined8 *)(pcVar4 + 8));
          }
          else {
            if (cVar3 == '\x12') goto LAB_1013802d8;
            FUN_1004de164(&pppppppuStack_2b0);
          }
          if (pppppppuStack_2b0 == (undefined8 *******)0x8000000000000000) {
            puStack_178 = puStack_2d8;
            *param_1 = 2;
            param_1[1] = puStack_2a8;
            bVar7 = true;
            pppppppuVar9 = (undefined8 *******)0x8000000000000002;
            goto LAB_10138040c;
          }
          pppppppuStack_f0 = (undefined8 *******)CONCAT44(uStack_28c,uStack_290);
          puStack_f8 = puStack_298;
          pppppppuStack_100 = pppppppuStack_2a0;
          puStack_e8 = puStack_288;
          puStack_d8 = puStack_278;
          pppppppuStack_e0 = pppppppuStack_280;
          pppppppuStack_d0 = pppppppuStack_270;
          pppppppuVar9 = pppppppuStack_2b0;
          puStack_2d8 = puStack_2a8;
        }
LAB_1013802d8:
        puStack_168 = puStack_f8;
        pppppppuStack_170 = pppppppuStack_100;
        puStack_158 = puStack_e8;
        pppppppuStack_160 = pppppppuStack_f0;
        puStack_148 = puStack_d8;
        pppppppuStack_150 = pppppppuStack_e0;
        pppppppuStack_140 = pppppppuStack_d0;
      }
      else {
        if ((char)pppppppuStack_2b0 == '\x17') {
          puStack_178 = puStack_2d8;
          bVar7 = pppppppuVar9 == (undefined8 *******)0x8000000000000002;
          if (bVar7) {
            pppppppuStack_100 = (undefined8 *******)0x8000000000000001;
          }
          else {
            puStack_d8 = puStack_158;
            pppppppuStack_e0 = pppppppuStack_160;
            puStack_c8 = puStack_148;
            pppppppuStack_d0 = pppppppuStack_150;
            pppppppuStack_c0 = pppppppuStack_140;
            puStack_f8 = puStack_2d8;
            puStack_e8 = puStack_168;
            pppppppuStack_f0 = pppppppuStack_170;
            pppppppuStack_100 = pppppppuVar9;
          }
          lStack_88 = lStack_130 + lStack_128 * 0x40;
          lStack_90 = lStack_130;
          cStack_b0 = '\x16';
          puStack_80 = &UNK_10b236580;
          uStack_78 = 4;
          FUN_1009e9a84(&pppppppuStack_2b0,&cStack_b0);
          if (pppppppuStack_2b0 != (undefined8 *******)0x2) {
            param_1[0x17] = uStack_1f8;
            param_1[0x16] = uStack_200;
            param_1[0x19] = uStack_1e8;
            param_1[0x18] = uStack_1f0;
            param_1[0xf] = uStack_238;
            param_1[0xe] = uStack_240;
            param_1[0x11] = uStack_228;
            param_1[0x10] = uStack_230;
            param_1[0x13] = uStack_218;
            param_1[0x12] = uStack_220;
            param_1[0x15] = uStack_208;
            param_1[0x14] = uStack_210;
            param_1[7] = puStack_278;
            param_1[6] = pppppppuStack_280;
            param_1[9] = uStack_268;
            param_1[8] = pppppppuStack_270;
            param_1[0xb] = uStack_258;
            param_1[10] = uStack_260;
            param_1[0xd] = uStack_248;
            param_1[0xc] = uStack_250;
            param_1[3] = puStack_298;
            param_1[2] = pppppppuStack_2a0;
            param_1[5] = puStack_288;
            param_1[4] = CONCAT44(uStack_28c,uStack_290);
            param_1[0x1f] = puStack_e8;
            param_1[0x1e] = pppppppuStack_f0;
            param_1[0x21] = puStack_d8;
            param_1[0x20] = pppppppuStack_e0;
            param_1[0x23] = puStack_c8;
            param_1[0x22] = pppppppuStack_d0;
            param_1[0x24] = pppppppuStack_c0;
            param_1[0x1b] = uStack_1d8;
            param_1[0x1a] = uStack_1e0;
            param_1[0x1d] = puStack_f8;
            param_1[0x1c] = pppppppuStack_100;
            *param_1 = pppppppuStack_2b0;
            param_1[1] = puStack_2a8;
            FUN_100d5c778(&lStack_138);
            _memcpy(&pppppppuStack_2b0,param_1,0x128);
            if (lStack_2c8 - lStack_2d0 == 0) {
              return;
            }
            pppppppuStack_100 = (undefined8 *******)ppppppuStack_2b8;
            uVar8 = FUN_1087e422c((long)ppppppuStack_2b8 + ((ulong)(lStack_2c8 - lStack_2d0) >> 6),
                                  &pppppppuStack_100,&UNK_10b23a190);
            *param_1 = 2;
            param_1[1] = uVar8;
            if ((alStack_1d0[0] != -0x7fffffffffffffff) && (alStack_1d0[0] != -0x8000000000000000))
            {
              if ((lStack_1b0 != 0) && (lStack_1b0 * 9 != -0x11)) {
                _free(lStack_1b8 + lStack_1b0 * -8 + -8);
              }
              func_0x000100cd7284(alStack_1d0);
            }
            FUN_100dfdc0c(&pppppppuStack_2b0);
            return;
          }
          *param_1 = 2;
          param_1[1] = puStack_2a8;
          if ((pppppppuStack_100 != (undefined8 *******)0x8000000000000001) &&
             (pppppppuStack_100 != (undefined8 *******)0x8000000000000000)) {
            if ((pppppppuStack_e0 != (undefined8 *******)0x0) &&
               ((long)pppppppuStack_e0 * 9 != -0x11)) {
              _free(puStack_e8 + (long)pppppppuStack_e0 * -8 + -8);
            }
            func_0x000100cd7284(&pppppppuStack_100);
          }
          goto LAB_10138040c;
        }
        *(undefined4 *)((ulong)&cStack_b0 | 1) = uStack_108;
        *(undefined4 *)((long)((ulong)&cStack_b0 | 1) + 3) = uVar2;
        puStack_98 = puStack_298;
        pppppppuStack_a0 = pppppppuStack_2a0;
        cStack_b0 = (char)pppppppuStack_2b0;
        puStack_a8 = puStack_2a8;
        pcStack_2c0 = (char *)0x0;
        if (pcVar4 == (char *)0x0) {
          puStack_178 = puStack_2d8;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b209338);
LAB_1013805dc:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1013805e0);
          (*pcVar6)();
        }
        __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE(&pppppppuStack_100);
        lVar5 = lStack_128;
        if ((char)pppppppuStack_100 == '\x16') {
          puStack_178 = puStack_2d8;
          *param_1 = 2;
          param_1[1] = puStack_f8;
          bVar7 = true;
          FUN_100e077ec(&cStack_b0);
          goto LAB_10138040c;
        }
        uStack_28c = *(undefined4 *)((long)((ulong)&pppppppuStack_100 | 1) + 3);
        puStack_288 = puStack_f8;
        puStack_278 = puStack_e8;
        pppppppuStack_280 = pppppppuStack_f0;
        puStack_2a8 = puStack_a8;
        pppppppuStack_2b0 = (undefined8 *******)CONCAT71(uStack_af,cStack_b0);
        puStack_298 = puStack_98;
        pppppppuStack_2a0 = pppppppuStack_a0;
        uStack_290 = CONCAT31((int3)*(undefined4 *)((ulong)&pppppppuStack_100 | 1),
                              (char)pppppppuStack_100);
        if (lStack_128 == lStack_138) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_138);
        }
        puVar1 = (undefined8 *)(lStack_130 + lVar5 * 0x40);
        puVar1[1] = puStack_2a8;
        *puVar1 = pppppppuStack_2b0;
        puVar1[3] = puStack_298;
        puVar1[2] = pppppppuStack_2a0;
        puVar1[5] = puStack_288;
        puVar1[4] = CONCAT44(uStack_28c,uStack_290);
        puVar1[7] = puStack_278;
        puVar1[6] = pppppppuStack_280;
        lStack_128 = lVar5 + 1;
      }
    }
    puStack_178 = puStack_2d8;
    *param_1 = 2;
    param_1[1] = puStack_2a8;
    bVar7 = true;
LAB_10138040c:
    FUN_100d5c778(&lStack_138);
    bVar7 = (bool)(bVar7 ^ 1);
    if (pppppppuVar9 == (undefined8 *******)0x8000000000000002) {
      bVar7 = true;
    }
    if ((!bVar7) && (pppppppuVar9 != (undefined8 *******)0x8000000000000001)) {
      if ((pppppppuStack_160 != (undefined8 *******)0x0) && ((long)pppppppuStack_160 * 9 != -0x11))
      {
        _free(puStack_168 + (long)pppppppuStack_160 * -8 + -8);
      }
      func_0x000100cd7284(&pppppppuStack_180);
    }
  }
  else {
    uVar8 = FUN_108855c40(param_2,&pppppppuStack_2b0,&UNK_10b213368);
    *param_1 = 2;
    param_1[1] = uVar8;
  }
  return;
}

