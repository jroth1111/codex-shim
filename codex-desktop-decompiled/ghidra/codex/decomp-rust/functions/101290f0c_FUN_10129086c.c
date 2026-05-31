
/* WARNING: Type propagation algorithm not settling */

void FUN_10129086c(ulong *param_1,char *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char *pcVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  code *pcVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined8 *******pppppppuVar22;
  undefined *puVar23;
  undefined8 *******pppppppuVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *puStack_730;
  long lStack_710;
  char *pcStack_708;
  char *pcStack_700;
  ulong uStack_6f8;
  char *pcStack_6f0;
  long lStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  undefined1 auStack_6c8 [264];
  undefined8 *******pppppppuStack_5c0;
  undefined *puStack_5b8;
  undefined1 auStack_5b0 [264];
  undefined8 *******pppppppuStack_4a8;
  undefined *puStack_4a0;
  undefined8 *******pppppppuStack_498;
  undefined *puStack_490;
  undefined8 uStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *******pppppppuStack_3c0;
  undefined *puStack_3b8;
  undefined8 *******pppppppuStack_3b0;
  undefined *puStack_3a8;
  undefined8 *******pppppppuStack_3a0;
  undefined *puStack_398;
  char acStack_390 [8];
  undefined8 uStack_388;
  long lStack_380;
  long lStack_378;
  char acStack_370 [8];
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *******pppppppuStack_330;
  undefined1 auStack_328 [232];
  long lStack_240;
  undefined8 uStack_238;
  undefined8 *******pppppppuStack_210;
  undefined *puStack_208;
  undefined8 *******pppppppuStack_200;
  undefined *puStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined4 uStack_1b8;
  undefined3 uStack_1b4;
  undefined8 *******pppppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined *puStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined *puStack_188;
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
  char acStack_c0 [8];
  undefined8 *puStack_b8;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined1 auStack_71 [17];
  
  if (*param_2 == '\x14') {
    uVar3 = *(ulong *)(param_2 + 8);
    pcVar4 = *(char **)(param_2 + 0x10);
    uVar12 = *(ulong *)(param_2 + 0x18);
    pcVar1 = pcVar4 + uVar12 * 0x20;
    lStack_6e8 = 0;
    uVar17 = uVar12;
    if (0xe9f < uVar12) {
      uVar17 = 0xea0;
    }
    pcStack_708 = pcVar4;
    uStack_6f8 = uVar3;
    pcStack_6f0 = pcVar1;
    if (uVar12 == 0) {
      uStack_6e0 = 0;
      uStack_6d8 = 8;
      uStack_6d0 = 0;
      pcVar13 = pcVar4;
    }
    else {
      pcStack_700 = pcVar4;
      uVar11 = _malloc(uVar17 * 0x118);
      if (uVar11 == 0) {
        func_0x0001087c9084(8,uVar17 * 0x118);
LAB_101291050:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x101291054);
        (*pcVar9)();
      }
      uStack_6d0 = 0;
      pcVar14 = pcVar4 + 0x20;
      uStack_6e0 = uVar17;
      uStack_6d8 = uVar11;
      if (*pcVar4 == '\x16') {
        lStack_710 = 0;
      }
      else {
        lStack_710 = 0;
        puVar15 = (undefined8 *)((ulong)acStack_390 | 1);
        puVar20 = (undefined4 *)((ulong)&pppppppuStack_a0 | 1);
        puVar21 = (undefined8 *)((ulong)acStack_370 | 1);
        puVar16 = (undefined8 *)((ulong)acStack_c0 | 1);
        pcVar19 = pcVar4;
        cVar8 = *pcVar4;
        do {
          acStack_390[0] = cVar8;
          pcVar13 = pcVar14;
          uVar26 = *(undefined8 *)(pcVar19 + 9);
          uVar25 = *(undefined8 *)(pcVar19 + 1);
          uVar27 = *(undefined8 *)(pcVar19 + 0x10);
          *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)(pcVar19 + 0x18);
          *(undefined8 *)((long)puVar15 + 0xf) = uVar27;
          puVar15[1] = uVar26;
          *puVar15 = uVar25;
          lVar18 = lStack_710 + 1;
          if (acStack_390[0] != '\x15') {
            pcStack_700 = pcVar13;
            lStack_6e8 = lVar18;
            puVar23 = (undefined *)FUN_108855b04(acStack_390,auStack_71,&UNK_10b209d00);
            pcVar14 = pcStack_700;
            lVar18 = lStack_6e8;
LAB_101290f6c:
            lStack_6e8 = lVar18;
            pcStack_700 = pcVar14;
            uVar17 = uStack_6d8;
            *param_1 = 0x8000000000000000;
            param_1[1] = (ulong)puVar23;
            FUN_100ca97fc(uStack_6d8,uStack_6d0);
            if (uStack_6e0 != 0) {
              _free(uVar17);
            }
            goto LAB_101290954;
          }
          lStack_338 = lStack_380 + lStack_378 * 0x40;
          lStack_350 = lStack_380;
          lStack_348 = lStack_380;
          uStack_340 = uStack_388;
          acStack_370[0] = '\x16';
          pppppppuStack_330 = (undefined8 *******)0x0;
          lStack_1e8 = 0;
          lStack_1e0 = 8;
          lStack_1d8 = 0;
          pppppppuVar22 = (undefined8 *******)0x8000000000000002;
          while( true ) {
            func_0x000100f236cc(&pppppppuStack_1b0,acStack_370);
            puVar2 = puStack_b8;
            lVar6 = lStack_1d8;
            cVar8 = acStack_370[0];
            if ((char)pppppppuStack_1b0 == '\x18') break;
            uVar5 = *(undefined4 *)((long)((ulong)&pppppppuStack_1b0 | 1) + 3);
            uStack_1b8._0_3_ = (undefined3)*(undefined4 *)((ulong)&pppppppuStack_1b0 | 1);
            uStack_1b8._3_1_ = (undefined1)uVar5;
            uStack_1b4 = (undefined3)((uint)uVar5 >> 8);
            puStack_1c8 = puStack_198;
            pppppppuStack_1d0 = pppppppuStack_1a0;
            if ((char)pppppppuStack_1b0 == '\x16') {
              if (pppppppuVar22 != (undefined8 *******)0x8000000000000002) {
                pppppppuStack_a0 = (undefined8 *******)&UNK_108cb4be5;
                puStack_98 = (undefined *)0xb;
                puStack_1a8 = &DAT_100c7b3a0;
                pppppppuStack_1b0 = &pppppppuStack_a0;
                puStack_4a0 = (undefined *)
                              FUN_108856088(s_duplicate_field_____108ac2973,&pppppppuStack_1b0);
                goto LAB_101290c68;
              }
              acStack_370[0] = '\x16';
              if (cVar8 == '\x16') {
                pcStack_700 = pcVar13;
                lStack_6e8 = lVar18;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_101291050;
              }
              uVar25 = *puVar21;
              puVar16[1] = puVar21[1];
              *puVar16 = uVar25;
              uVar25 = *(undefined8 *)((long)puVar21 + 0xf);
              *(undefined8 *)((long)puVar16 + 0x17) = *(undefined8 *)((long)puVar21 + 0x17);
              *(undefined8 *)((long)puVar16 + 0xf) = uVar25;
              acStack_c0[0] = cVar8;
              if (cVar8 == '\x10') {
LAB_101290be4:
                pppppppuStack_1b0 = (undefined8 *******)0x8000000000000001;
                FUN_100e077ec(acStack_c0);
                pppppppuVar22 = (undefined8 *******)0x8000000000000001;
              }
              else {
                if (cVar8 == '\x11') {
                  puStack_98 = (undefined *)puStack_b8[1];
                  pppppppuStack_a0 = (undefined8 *******)*puStack_b8;
                  puStack_88 = (undefined *)puStack_b8[3];
                  pppppppuStack_90 = (undefined8 *******)puStack_b8[2];
                  FUN_1014239e4(&pppppppuStack_1b0,&pppppppuStack_a0);
                  _free(puVar2);
                }
                else {
                  if (cVar8 == '\x12') goto LAB_101290be4;
                  FUN_1014239e4(&pppppppuStack_1b0,acStack_c0);
                }
                pppppppuVar22 = pppppppuStack_1b0;
                if (pppppppuStack_1b0 == (undefined8 *******)0x8000000000000002) {
                  pppppppuStack_4a8 = (undefined8 *******)0x5;
                  bVar10 = true;
                  pppppppuVar22 = (undefined8 *******)0x8000000000000002;
                  puStack_4a0 = puStack_1a8;
                  goto LAB_101290cf0;
                }
              }
              puStack_208 = puStack_198;
              pppppppuStack_210 = pppppppuStack_1a0;
              puStack_1f8 = puStack_188;
              pppppppuStack_200 = (undefined8 *******)CONCAT44(uStack_18c,uStack_190);
              puStack_730 = puStack_1a8;
            }
            else {
              if ((char)pppppppuStack_1b0 == '\x17') {
                bVar10 = pppppppuVar22 == (undefined8 *******)0x8000000000000002;
                if (bVar10) {
                  pppppppuVar24 = (undefined8 *******)0x8000000000000001;
                }
                else {
                  puStack_98 = puStack_208;
                  pppppppuStack_a0 = pppppppuStack_210;
                  puStack_88 = puStack_1f8;
                  pppppppuStack_90 = pppppppuStack_200;
                  pppppppuVar24 = pppppppuVar22;
                }
                FUN_100ec901c(&pppppppuStack_1b0,lStack_1e0,lStack_1d8);
                if (pppppppuStack_1b0 == (undefined8 *******)0x5) {
                  puStack_4a0 = puStack_1a8;
                  pppppppuStack_4a8 = (undefined8 *******)0x5;
                  if ((-0x7fffffffffffffff < (long)pppppppuVar24) &&
                     (pppppppuVar24 != (undefined8 *******)0x0)) {
                    _free(puStack_730);
                  }
                  goto LAB_101290cf0;
                }
                uStack_3f0 = uStack_f8;
                uStack_3f8 = uStack_100;
                uStack_3e0 = uStack_e8;
                uStack_3e8 = uStack_f0;
                uStack_3d0 = uStack_d8;
                uStack_3d8 = uStack_e0;
                uStack_3c8 = uStack_d0;
                uStack_430 = uStack_138;
                uStack_438 = uStack_140;
                uStack_420 = uStack_128;
                uStack_428 = uStack_130;
                uStack_410 = uStack_118;
                uStack_418 = uStack_120;
                uStack_400 = uStack_108;
                uStack_408 = uStack_110;
                uStack_470 = uStack_178;
                uStack_478 = uStack_180;
                uStack_460 = uStack_168;
                uStack_468 = uStack_170;
                uStack_450 = uStack_158;
                uStack_458 = uStack_160;
                uStack_440 = uStack_148;
                uStack_448 = uStack_150;
                uStack_488 = CONCAT44(uStack_18c,uStack_190);
                puStack_490 = puStack_198;
                pppppppuStack_498 = pppppppuStack_1a0;
                puStack_480 = puStack_188;
                puStack_3a8 = puStack_98;
                pppppppuStack_3b0 = pppppppuStack_a0;
                puStack_398 = puStack_88;
                pppppppuStack_3a0 = pppppppuStack_90;
                pppppppuStack_4a8 = pppppppuStack_1b0;
                puStack_4a0 = puStack_1a8;
                puStack_3b8 = puStack_730;
                pppppppuStack_3c0 = pppppppuVar24;
                FUN_100d5c778(&lStack_1e8);
                _memcpy(auStack_328,&pppppppuStack_4a8,0x118);
                lVar7 = lStack_338;
                lVar6 = lStack_348;
                FUN_100d34830(&lStack_350);
                if (lVar7 == lVar6) {
                  puVar23 = (undefined *)0x0;
                }
                else {
                  pppppppuStack_1b0 = pppppppuStack_330;
                  puVar23 = (undefined *)
                            FUN_1087e422c((undefined *)
                                          ((long)pppppppuStack_330 + ((ulong)(lVar7 - lVar6) >> 6)),
                                          &pppppppuStack_1b0,&UNK_10b23a190);
                }
                if (acStack_370[0] != '\x16') {
                  FUN_100e077ec(acStack_370);
                }
                if (puVar23 != (undefined *)0x0) {
                  pppppppuStack_4a8 = (undefined8 *******)0x5;
                  puStack_4a0 = puVar23;
                  FUN_100df8370(auStack_328);
                  if ((-0x7fffffffffffffff < lStack_240) && (lStack_240 != 0)) {
                    _free(uStack_238);
                  }
                }
                goto LAB_101290d40;
              }
              *puVar20 = uStack_1b8;
              *(undefined4 *)((long)puVar20 + 3) = uVar5;
              puStack_88 = puStack_198;
              pppppppuStack_90 = pppppppuStack_1a0;
              pppppppuStack_a0 =
                   (undefined8 *******)CONCAT71(pppppppuStack_a0._1_7_,(char)pppppppuStack_1b0);
              puStack_98 = puStack_1a8;
              acStack_370[0] = '\x16';
              if (cVar8 == '\x16') {
                pcStack_700 = pcVar13;
                lStack_6e8 = lVar18;
                func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                goto LAB_101291050;
              }
              uStack_18c = *(undefined4 *)((long)puVar21 + 3);
              puStack_188 = puStack_368;
              uStack_178 = uStack_358;
              uStack_180 = uStack_360;
              pppppppuStack_1b0 = pppppppuStack_a0;
              uStack_190 = CONCAT31((int3)*(undefined4 *)puVar21,cVar8);
              if (lStack_1d8 == lStack_1e8) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_1e8);
              }
              puVar2 = (undefined8 *)(lStack_1e0 + lVar6 * 0x40);
              puVar2[1] = puStack_1a8;
              *puVar2 = pppppppuStack_1b0;
              puVar2[3] = puStack_198;
              puVar2[2] = pppppppuStack_1a0;
              puVar2[5] = puStack_188;
              puVar2[4] = CONCAT44(uStack_18c,uStack_190);
              puVar2[7] = uStack_178;
              puVar2[6] = uStack_180;
              lStack_1d8 = lVar6 + 1;
            }
          }
          puStack_4a0 = puStack_1a8;
LAB_101290c68:
          pppppppuStack_4a8 = (undefined8 *******)0x5;
          bVar10 = true;
LAB_101290cf0:
          FUN_100d5c778(&lStack_1e8);
          bVar10 = (bool)(bVar10 ^ 1);
          if (pppppppuVar22 == (undefined8 *******)0x8000000000000002) {
            bVar10 = true;
          }
          if (((!bVar10) && (-0x7fffffffffffffff < (long)pppppppuVar22)) &&
             (pppppppuVar22 != (undefined8 *******)0x0)) {
            _free(puStack_730);
          }
          FUN_100d34830(&lStack_350);
          if (acStack_370[0] != '\x16') {
            FUN_100e077ec(acStack_370);
          }
LAB_101290d40:
          puVar23 = puStack_4a0;
          pppppppuVar22 = pppppppuStack_4a8;
          pcVar14 = pcVar13;
          if ((pppppppuStack_4a8 == (undefined8 *******)0x5) ||
             (_memcpy(auStack_6c8,&pppppppuStack_498,0x108),
             pppppppuVar22 == (undefined8 *******)0x6)) goto LAB_101290f6c;
          pppppppuStack_5c0 = pppppppuVar22;
          puStack_5b8 = puVar23;
          _memcpy(auStack_5b0,auStack_6c8,0x108);
          uVar17 = uStack_6d0;
          if (uStack_6d0 == uStack_6e0) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h6c233abdf44c8d9dE(&uStack_6e0);
          }
          _memcpy(uStack_6d8 + uVar17 * 0x118,&pppppppuStack_5c0,0x118);
          uStack_6d0 = uVar17 + 1;
          pcVar14 = pcVar1;
          lStack_710 = (uVar12 * 0x20 - 0x20 >> 5) + 1;
          if (pcVar13 == pcVar1) break;
          pcVar14 = pcVar13 + 0x20;
          pcVar19 = pcVar13;
          lStack_710 = lVar18;
          cVar8 = *pcVar13;
        } while (*pcVar13 != '\x16');
      }
      lStack_6e8 = lStack_710;
      pcVar13 = pcVar14;
    }
    param_1[1] = uStack_6d8;
    *param_1 = uStack_6e0;
    param_1[2] = uStack_6d0;
    uVar17 = *param_1;
    pcStack_700 = pcVar13;
    if (uVar17 == 0x8000000000000000) {
LAB_101290954:
      lVar18 = ((ulong)((long)pcVar1 - (long)pcVar13) >> 5) + 1;
      while (lVar18 = lVar18 + -1, lVar18 != 0) {
        FUN_100e077ec(pcVar13);
        pcVar13 = pcVar13 + 0x20;
      }
    }
    else {
      pcVar4 = (char *)param_1[1];
      uVar3 = param_1[2];
      uVar12 = FUN_100fbc738(&pcStack_708);
      if (uVar12 == 0) {
        return;
      }
      *param_1 = 0x8000000000000000;
      param_1[1] = uVar12;
      FUN_100ca97fc(pcVar4,uVar3);
      uVar3 = uVar17;
    }
    if (uVar3 != 0) {
      _free(pcVar4);
    }
  }
  else {
    uVar17 = FUN_108855b04(param_2,auStack_71,&UNK_10b20a300);
    *param_1 = 0x8000000000000000;
    param_1[1] = uVar17;
  }
  return;
}

