
/* WARNING: Type propagation algorithm not settling */

void FUN_10144a0c0(undefined8 *param_1,char *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *******pppppppuVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *******pppppppuVar14;
  char *pcVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long unaff_x23;
  long unaff_x24;
  undefined8 *******pppppppuVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  long lStack_598;
  long lStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long lStack_538;
  long lStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 uStack_501;
  uint uStack_48c;
  undefined8 *******pppppppuStack_480;
  undefined8 *******pppppppuStack_470;
  undefined *puStack_458;
  undefined8 *******pppppppuStack_450;
  undefined *puStack_448;
  undefined8 *******pppppppuStack_440;
  undefined8 *******pppppppuStack_438;
  undefined *puStack_430;
  undefined1 auStack_428 [264];
  undefined8 *******pppppppuStack_320;
  undefined *puStack_318;
  undefined8 *******pppppppuStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *******pppppppuStack_238;
  undefined *puStack_230;
  undefined8 *******pppppppuStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 *******pppppppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  undefined *puStack_1b8;
  undefined4 uStack_1a8;
  undefined3 uStack_1a4;
  char cStack_1a0;
  undefined7 uStack_19f;
  undefined *puStack_198;
  undefined8 *******pppppppuStack_190;
  undefined *puStack_188;
  undefined8 *******pppppppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_71 [17];
  
  if (*param_2 == '\x14') {
    pcVar15 = *(char **)(param_2 + 0x10);
    pppppppuVar11 = *(undefined8 ********)(param_2 + 0x18);
    pcVar10 = pcVar15 + (long)pppppppuVar11 * 0x20;
    pppppppuVar19 = pppppppuVar11;
    if ((undefined8 *******)0xe9f < pppppppuVar11) {
      pppppppuVar19 = (undefined8 *******)0xea0;
    }
    if (pppppppuVar11 == (undefined8 *******)0x0) {
      pppppppuVar11 = (undefined8 *******)0x0;
      pppppppuStack_450 = (undefined8 *******)0x0;
      puStack_448 = (undefined *)0x8;
      pppppppuStack_440 = (undefined8 *******)0x0;
    }
    else {
      puStack_448 = (undefined *)_malloc((long)pppppppuVar19 * 0x118);
      if (puStack_448 == (undefined *)0x0) {
        uVar7 = func_0x0001087c9084(8,(long)pppppppuVar19 * 0x118);
        if (unaff_x23 != 0) {
          _free(pppppppuVar19);
          uVar7 = __Unwind_Resume(uVar7);
          if ((((unaff_x24 != -0x7ffffffffffffffe) && ((uStack_48c & 1) != 0)) &&
              (-0x7fffffffffffffff < unaff_x24)) && (unaff_x24 != 0)) {
            _free(puStack_458);
          }
          FUN_100cda468(&pppppppuStack_450);
        }
        __Unwind_Resume(uVar7);
        func_0x000108a07bc4();
        auVar21 = func_0x000108a07bc4();
        pcVar10 = auVar21._8_8_;
        puVar8 = auVar21._0_8_;
        if (*pcVar10 == '\x15') {
          lVar16 = *(long *)(pcVar10 + 0x10);
          uStack_5c8 = 0;
          uStack_5b8 = 0;
          uVar7 = 0;
          if (*(long *)(pcVar10 + 0x18) != 0) {
            lVar18 = lVar16 + *(long *)(pcVar10 + 0x18) * 0x40;
            do {
              FUN_1004e07f8(&lStack_550,lVar16);
              uVar6 = uStack_540;
              uVar7 = uStack_548;
              lVar13 = lStack_550;
              if (lStack_550 == -0x8000000000000000) {
LAB_10144a964:
                FUN_100d755b4(&uStack_5c8);
                goto LAB_10144a96c;
              }
              FUN_1004de164(&lStack_550,lVar16 + 0x20);
              if (lStack_550 == -0x8000000000000000) {
                if (lVar13 != 0) {
                  _free(uVar7);
                }
                goto LAB_10144a964;
              }
              uStack_588 = uStack_528;
              lStack_590 = lStack_530;
              uStack_578 = uStack_518;
              uStack_580 = uStack_520;
              uStack_570 = uStack_510;
              lStack_568 = lVar13;
              uStack_5a8 = uStack_548;
              lStack_5b0 = lStack_550;
              lStack_598 = lStack_538;
              uStack_5a0 = uStack_540;
              uStack_560 = uVar7;
              uStack_558 = uVar6;
              FUN_100f33f70(&lStack_550,&uStack_5c8,&lStack_568,&lStack_5b0);
              if (lStack_550 != -0x8000000000000000) {
                if ((lStack_530 != 0) && (lStack_530 * 9 != -0x11)) {
                  _free(lStack_538 + lStack_530 * -8 + -8);
                }
                func_0x000100cd7284(&lStack_550);
              }
              lVar16 = lVar16 + 0x40;
              uVar7 = uStack_5c8;
            } while (lVar16 != lVar18);
          }
          puVar8[3] = uStack_5b8;
          puVar8[2] = uStack_5c0;
          *puVar8 = 1;
          puVar8[1] = uVar7;
        }
        else {
          uStack_548 = FUN_108855c40(pcVar10,&uStack_501,&UNK_10b209bc0);
LAB_10144a96c:
          *puVar8 = 2;
          puVar8[1] = uStack_548;
        }
        return;
      }
      pppppppuStack_440 = (undefined8 *******)0x0;
      pppppppuVar11 = (undefined8 *******)(((long)pppppppuVar11 * 0x20 - 0x20U >> 5) + 1);
      pcVar9 = pcVar15;
      pppppppuStack_450 = pppppppuVar19;
      do {
        pcVar12 = pcVar9 + 0x20;
        if (*pcVar9 != '\x15') {
          puVar17 = (undefined *)FUN_108855c40(pcVar9,auStack_71,&UNK_10b209d00);
LAB_10144a56c:
          puVar5 = puStack_448;
          FUN_100ca97fc(puStack_448,pppppppuStack_440);
          puVar4 = puStack_448;
          pppppppuVar19 = pppppppuStack_450;
          goto joined_r0x00010144a57c;
        }
        lVar18 = *(long *)(pcVar9 + 0x10);
        lVar13 = *(long *)(pcVar9 + 0x18) * 0x40;
        lVar16 = lVar18 + lVar13;
        lStack_1d8 = 0;
        lStack_1d0 = 8;
        lStack_1c8 = 0;
        if (*(long *)(pcVar9 + 0x18) == 0) {
          pppppppuStack_480 = (undefined8 *******)0x0;
          pppppppuStack_470 = (undefined8 *******)0x8000000000000001;
          bVar20 = 1;
          pppppppuVar19 = (undefined8 *******)0x8000000000000002;
        }
        else {
          pppppppuStack_480 = (undefined8 *******)((lVar13 - 0x40U >> 6) + 1);
          pcVar15 = (char *)(lVar18 + 0x20);
          pppppppuVar19 = (undefined8 *******)0x8000000000000002;
          do {
            while( true ) {
              FUN_1013a6da0(&pppppppuStack_160,pcVar15 + -0x20);
              if ((char)pppppppuStack_160 == '\x17') {
                bVar20 = 1;
                puVar17 = puStack_158;
                goto LAB_10144a52c;
              }
              uVar2 = *(undefined4 *)((long)((ulong)&pppppppuStack_160 | 1) + 3);
              uStack_1a8._0_3_ = (undefined3)*(undefined4 *)((ulong)&pppppppuStack_160 | 1);
              uStack_1a8._3_1_ = (undefined1)uVar2;
              uStack_1a4 = (undefined3)((uint)uVar2 >> 8);
              puStack_1b8 = puStack_148;
              pppppppuStack_1c0 = pppppppuStack_150;
              if ((char)pppppppuStack_160 != '\x16') break;
              if (pppppppuVar19 != (undefined8 *******)0x8000000000000002) {
                pppppppuStack_180 = (undefined8 *******)&UNK_108cb4be5;
                puStack_178 = (undefined *)0xb;
                pppppppuStack_160 = &pppppppuStack_180;
                puStack_158 = &DAT_100c7b3a0;
                puVar17 = (undefined *)
                          FUN_108856088(s_duplicate_field_____108ac2973,&pppppppuStack_160);
                bVar20 = 1;
                goto LAB_10144a52c;
              }
              cVar3 = *pcVar15;
              if (cVar3 == '\x10') {
LAB_10144a29c:
                pppppppuVar19 = (undefined8 *******)0x8000000000000001;
              }
              else {
                if (cVar3 == '\x11') {
                  pcVar9 = *(char **)(pcVar15 + 8);
                }
                else {
                  pcVar9 = pcVar15;
                  if (cVar3 == '\x12') goto LAB_10144a29c;
                }
                FUN_1014161d4(&pppppppuStack_160,pcVar9);
                pppppppuVar19 = pppppppuStack_160;
                if (pppppppuStack_160 == (undefined8 *******)0x8000000000000002) {
                  bVar20 = 1;
                  pppppppuVar19 = (undefined8 *******)0x8000000000000002;
                  puVar17 = puStack_158;
                  goto LAB_10144a52c;
                }
              }
              puStack_1f8 = puStack_148;
              pppppppuStack_200 = pppppppuStack_150;
              puStack_1e8 = puStack_138;
              uStack_1f0 = CONCAT44(uStack_13c,uStack_140);
              puStack_458 = puStack_158;
              pcVar15 = pcVar15 + 0x40;
              lVar13 = lVar13 + -0x40;
              if (lVar13 == 0) goto LAB_10144a37c;
            }
            *(undefined4 *)((ulong)&cStack_1a0 | 1) = uStack_1a8;
            *(undefined4 *)((long)((ulong)&cStack_1a0 | 1) + 3) = uVar2;
            puStack_188 = puStack_148;
            pppppppuStack_190 = pppppppuStack_150;
            cStack_1a0 = (char)pppppppuStack_160;
            puStack_198 = puStack_158;
            __ZN5serde7private2de7content13content_clone17h3f71e49cad2f86faE
                      (&pppppppuStack_180,pcVar15);
            puVar17 = puStack_178;
            lVar18 = lStack_1c8;
            if ((char)pppppppuStack_180 == '\x16') {
              FUN_100e077ec(&cStack_1a0);
              bVar20 = 1;
              goto LAB_10144a52c;
            }
            uStack_13c = *(undefined4 *)((long)((ulong)&pppppppuStack_180 | 1) + 3);
            puStack_138 = puStack_178;
            puStack_128 = puStack_168;
            uStack_130 = uStack_170;
            puStack_158 = puStack_198;
            pppppppuStack_160 = (undefined8 *******)CONCAT71(uStack_19f,cStack_1a0);
            puStack_148 = puStack_188;
            pppppppuStack_150 = pppppppuStack_190;
            uStack_140 = CONCAT31((int3)*(undefined4 *)((ulong)&pppppppuStack_180 | 1),
                                  (char)pppppppuStack_180);
            if (lStack_1c8 == lStack_1d8) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_1d8);
            }
            puVar8 = (undefined8 *)(lStack_1d0 + lVar18 * 0x40);
            puVar8[1] = puStack_158;
            *puVar8 = pppppppuStack_160;
            puVar8[3] = puStack_148;
            puVar8[2] = pppppppuStack_150;
            puVar8[5] = puStack_138;
            puVar8[4] = CONCAT44(uStack_13c,uStack_140);
            puVar8[7] = puStack_128;
            puVar8[6] = uStack_130;
            lStack_1c8 = lVar18 + 1;
            pcVar15 = pcVar15 + 0x40;
            lVar13 = lVar13 + -0x40;
          } while (lVar13 != 0);
LAB_10144a37c:
          lVar18 = lVar16;
          if (pppppppuVar19 == (undefined8 *******)0x8000000000000002) {
            pppppppuStack_470 = (undefined8 *******)0x8000000000000001;
            bVar20 = 1;
            pppppppuVar19 = (undefined8 *******)0x8000000000000002;
          }
          else {
            bVar20 = 0;
            puStack_178 = puStack_1f8;
            pppppppuStack_180 = pppppppuStack_200;
            puStack_168 = puStack_1e8;
            uStack_170 = uStack_1f0;
            pppppppuStack_470 = pppppppuVar19;
          }
        }
        FUN_100ec901c(&pppppppuStack_160,lStack_1d0,lStack_1c8);
        puVar17 = puStack_158;
        pppppppuVar14 = pppppppuStack_160;
        if (pppppppuStack_160 == (undefined8 *******)0x5) {
          if ((-0x7fffffffffffffff < (long)pppppppuStack_470) &&
             (pppppppuStack_470 != (undefined8 *******)0x0)) {
            _free(puStack_458);
          }
LAB_10144a52c:
          FUN_100d5c778(&lStack_1d8);
          bVar1 = (bool)(bVar20 ^ 1);
          if (pppppppuVar19 == (undefined8 *******)0x8000000000000002) {
            bVar1 = true;
          }
          if (!bVar1) goto joined_r0x00010144a55c;
          goto LAB_10144a56c;
        }
        uStack_268 = uStack_a8;
        uStack_270 = uStack_b0;
        uStack_258 = uStack_98;
        uStack_260 = uStack_a0;
        uStack_248 = uStack_88;
        uStack_250 = uStack_90;
        uStack_240 = uStack_80;
        uStack_2a8 = uStack_e8;
        uStack_2b0 = uStack_f0;
        uStack_298 = uStack_d8;
        uStack_2a0 = uStack_e0;
        uStack_288 = uStack_c8;
        uStack_290 = uStack_d0;
        uStack_278 = uStack_b8;
        uStack_280 = uStack_c0;
        puStack_2e8 = puStack_128;
        uStack_2f0 = uStack_130;
        uStack_2d8 = uStack_118;
        uStack_2e0 = uStack_120;
        uStack_2c8 = uStack_108;
        uStack_2d0 = uStack_110;
        uStack_2b8 = uStack_f8;
        uStack_2c0 = uStack_100;
        uStack_300 = CONCAT44(uStack_13c,uStack_140);
        puStack_308 = puStack_148;
        pppppppuStack_310 = pppppppuStack_150;
        puStack_2f8 = puStack_138;
        puStack_220 = puStack_178;
        pppppppuStack_228 = pppppppuStack_180;
        puStack_210 = puStack_168;
        uStack_218 = uStack_170;
        pppppppuStack_320 = pppppppuStack_160;
        puStack_318 = puStack_158;
        pppppppuStack_238 = pppppppuStack_470;
        puStack_230 = puStack_458;
        FUN_100d5c778(&lStack_1d8);
        if (lVar16 - lVar18 != 0) {
          pppppppuStack_160 = pppppppuStack_480;
          puVar17 = (undefined *)
                    FUN_1087e422c((undefined *)
                                  ((long)pppppppuStack_480 + ((ulong)(lVar16 - lVar18) >> 6)),
                                  &pppppppuStack_160,&UNK_10b23a190);
          FUN_100df8370(&pppppppuStack_320);
          pppppppuVar19 = pppppppuStack_470;
joined_r0x00010144a55c:
          if ((-0x7fffffffffffffff < (long)pppppppuVar19) &&
             (pppppppuVar19 != (undefined8 *******)0x0)) {
            _free(puStack_458);
          }
          goto LAB_10144a56c;
        }
        _memcpy(auStack_428,&pppppppuStack_310,0x108);
        pppppppuVar19 = pppppppuStack_440;
        pppppppuStack_438 = pppppppuVar14;
        puStack_430 = puVar17;
        if (pppppppuStack_440 == pppppppuStack_450) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h6c233abdf44c8d9dE(&pppppppuStack_450);
        }
        _memcpy(puStack_448 + (long)pppppppuVar19 * 0x118,&pppppppuStack_438,0x118);
        pppppppuStack_440 = (undefined8 *******)((long)pppppppuVar19 + 1);
        pcVar9 = pcVar12;
        pcVar15 = pcVar10;
      } while (pcVar12 != pcVar10);
    }
    pppppppuVar14 = pppppppuStack_440;
    puVar5 = puStack_448;
    pppppppuVar19 = pppppppuStack_450;
    puStack_318 = puStack_448;
    pppppppuStack_320 = pppppppuStack_450;
    pppppppuStack_310 = pppppppuStack_440;
    if (pppppppuStack_450 != (undefined8 *******)0x8000000000000000) {
      if ((long)pcVar10 - (long)pcVar15 == 0) {
        param_1[1] = puStack_448;
        *param_1 = pppppppuStack_450;
        param_1[2] = pppppppuStack_440;
        return;
      }
      pppppppuStack_438 = pppppppuVar11;
      puVar17 = (undefined *)
                FUN_1087e422c((undefined *)
                              ((long)pppppppuVar11 + ((ulong)((long)pcVar10 - (long)pcVar15) >> 5)),
                              &pppppppuStack_438,&UNK_10b23a1b0);
      FUN_100ca97fc(puVar5,pppppppuVar14);
      puVar4 = puStack_448;
joined_r0x00010144a57c:
      puStack_448 = puVar17;
      if (pppppppuVar19 != (undefined8 *******)0x0) {
        puStack_448 = puVar4;
        _free(puVar5);
        puStack_448 = puVar17;
      }
    }
  }
  else {
    puStack_448 = (undefined *)FUN_108855c40(param_2,auStack_71,&UNK_10b20a300);
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = puStack_448;
  return;
}

