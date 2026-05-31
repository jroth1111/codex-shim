
/* WARNING: Removing unreachable block (ram,0x000100739cb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007399c4(undefined8 *param_1,char param_2,undefined8 param_3)

{
  long *plVar1;
  long *****ppppplVar2;
  long ****pppplVar3;
  byte bVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ***ppplVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  undefined4 *puVar12;
  long *plVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  long *****ppppplVar16;
  char *pcVar17;
  long *****ppppplVar18;
  uint *puVar19;
  long *plVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long lVar31;
  long *****ppppplVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  long ****pppplStack_580;
  long ****pppplStack_578;
  long ****pppplStack_570;
  code *pcStack_568;
  long ****pppplStack_560;
  undefined *puStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long ****pppplStack_520;
  long ****pppplStack_518;
  long ****pppplStack_510;
  code *pcStack_508;
  long ****pppplStack_500;
  undefined *puStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long ***ppplStack_4c8;
  undefined8 *puStack_4c0;
  long ***ppplStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_490 [16];
  undefined2 uStack_480;
  undefined1 uStack_47e;
  long ***ppplStack_478;
  long lStack_470;
  long ***ppplStack_468;
  long ***ppplStack_460;
  undefined8 *puStack_458;
  long ***ppplStack_450;
  long ****pppplStack_440;
  long ****pppplStack_438;
  long ****pppplStack_430;
  code *pcStack_428;
  long ****pppplStack_420;
  undefined *puStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long ****pppplStack_3f0;
  code *pcStack_3e8;
  long ****pppplStack_3e0;
  undefined *puStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long ****pppplStack_2c0;
  code *pcStack_2b8;
  long ****pppplStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long ****pppplStack_280;
  long ****pppplStack_278;
  long ****pppplStack_270;
  code *pcStack_268;
  long ****pppplStack_260;
  undefined *puStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long ****pppplStack_210;
  long ****pppplStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  long ****pppplStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  
  if (param_2 == '\0') {
    puVar12 = (undefined4 *)_malloc(4);
    if (puVar12 == (undefined4 *)0x0) {
LAB_100739a5c:
      FUN_107c03c64(1,4);
      goto LAB_100739a68;
    }
    uVar21 = 0x6f747561;
  }
  else {
    if (param_2 != '\x01') {
      puVar12 = (undefined4 *)_malloc(7);
      if (puVar12 != (undefined4 *)0x0) {
        *(undefined4 *)((long)puVar12 + 3) = 0x676e6972;
        *puVar12 = 0x7279656b;
        uVar22 = 7;
        goto LAB_100739a44;
      }
LAB_100739a68:
      auVar36 = FUN_107c03c64(1,7);
      plVar20 = auVar36._8_8_;
      plVar13 = auVar36._0_8_;
      bVar4 = *(byte *)((long)plVar20 + 0x1d7);
      if (3 < bVar4) {
        if (bVar4 == 6) goto LAB_10073a0b0;
        if (bVar4 == 5) goto LAB_10073a380;
        auVar36 = *(undefined1 (*) [16])(plVar20 + 0x3c);
        goto LAB_100739f90;
      }
      if (bVar4 < 2) {
        if (bVar4 != 0) {
          FUN_107c05cc0(&UNK_10b220c60);
          goto LAB_100739ec0;
        }
        plVar20[0xf] = plVar20[0x39];
        plVar20[0xe] = (long)plVar20[0x38];
        *(undefined2 *)((long)plVar20 + 0x1d5) = 0;
        *(undefined4 *)((long)plVar20 + 0x1d1) = 0;
        plVar20[9] = plVar20[0xb];
        plVar20[8] = plVar20[10];
        lVar28 = plVar20[0x37];
        *(char *)(plVar20 + 0x3a) = (char)plVar20[0x3b];
        __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                  (&pppplStack_520,plVar20[0xc],plVar20[0xd]);
        ppppplVar18 = (long *****)pppplStack_518;
        __ZN25codex_utils_absolute_path10absolutize10absolutize17h28de722e70c9dcbeE
                  (&pppplStack_210,pppplStack_518,pppplStack_510);
        ppppplVar32 = uStack_200;
        pppplVar5 = pppplStack_208;
        pppplVar3 = pppplStack_210;
        if ((long *****)pppplStack_210 == (long *****)0x8000000000000000) {
          ppppplVar16 = (long *****)pppplStack_208;
          ppppplVar32 = ppppplVar18;
          if ((long *****)pppplStack_520 != (long *****)0x0) {
LAB_10073ab70:
            _free(ppppplVar18);
            ppppplVar18 = ppppplVar32;
          }
LAB_10073ab74:
          lVar28 = -0x8000000000000000;
          goto LAB_10073b5f0;
        }
        if ((long *****)pppplStack_520 != (long *****)0x0) {
          _free(ppppplVar18);
        }
        plVar20[0x10] = (long)pppplVar3;
        plVar20[0x11] = (long)pppplVar5;
        plVar20[0x12] = (long)ppppplVar32;
        if (ppppplVar32 < (long *****)0x180) {
          _memcpy(&pppplStack_210,pppplVar5,ppppplVar32);
          *(char *)((long)&pppplStack_210 + (long)ppppplVar32) = '\0';
          __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
                    (&pppplStack_520,&pppplStack_210,(char *)((long)ppppplVar32 + 1));
          if ((int)pppplStack_520 == 1) {
            pppplStack_580 = (long ****)0x8000000000000000;
            pppplStack_578 = (long ****)&UNK_10b4add80;
          }
          else {
            lVar31 = func_0x000107c0610c(pppplStack_518,0);
            if (lVar31 == 0) {
              puVar19 = (uint *)___error();
              pppplStack_578 = (long ****)((ulong)*puVar19 << 0x20 | 2);
              pppplStack_580 = (long ****)0x8000000000000000;
            }
            else {
              ppppplVar18 = (long *****)_strlen();
              if (ppppplVar18 == (long *****)0x0) {
                ppppplVar32 = (long *****)0x1;
              }
              else {
                ppppplVar32 = (long *****)_malloc(ppppplVar18);
                if (ppppplVar32 == (long *****)0x0) {
                  FUN_107c03c64(1,ppppplVar18);
                  goto LAB_10073b674;
                }
              }
              _memcpy(ppppplVar32,lVar31,ppppplVar18);
              _free(lVar31);
              pppplStack_580 = (long ****)ppppplVar18;
              pppplStack_578 = (long ****)ppppplVar32;
              pppplStack_570 = (long ****)ppppplVar18;
              if (ppppplVar18 != (long *****)0x8000000000000000) goto LAB_100739ce8;
            }
          }
LAB_100739bc8:
          pppplVar3 = pppplStack_578;
          pppplStack_210 = pppplStack_578;
          lVar31 = plVar20[0x11];
          lVar33 = plVar20[0x12];
          if (lVar33 == 0) {
            lVar14 = 1;
          }
          else {
            lVar14 = _malloc(lVar33);
            if (lVar14 == 0) {
              FUN_107c03c64(1,lVar33);
              goto LAB_10073b674;
            }
          }
          _memcpy(lVar14,lVar31,lVar33);
          plVar20[0x13] = lVar33;
          plVar20[0x14] = lVar14;
          plVar20[0x15] = lVar33;
          if (((ulong)pppplVar3 & 3) == 1) {
            uVar22 = *(undefined8 *)((long)pppplVar3 + -1);
            puVar24 = *(undefined8 **)((long)pppplVar3 + 7);
            pcVar23 = (code *)*puVar24;
            if (pcVar23 != (code *)0x0) {
              (*pcVar23)(uVar22);
            }
            if (puVar24[1] != 0) {
              _free(uVar22);
            }
            _free((char *)((long)pppplVar3 + -1));
          }
        }
        else {
          func_0x000107c05df0(&pppplStack_580,pppplVar5,ppppplVar32,&DAT_10603cc5c);
          if ((long *****)pppplStack_580 == (long *****)0x8000000000000000) goto LAB_100739bc8;
LAB_100739ce8:
          plVar20[0x14] = (long)pppplStack_578;
          plVar20[0x13] = (long)pppplStack_580;
          plVar20[0x15] = (long)pppplStack_570;
        }
        pppplStack_518 = *(long *****)(lVar28 + 8);
        pppplStack_510 = *(long *****)(lVar28 + 0x10);
        pcStack_508 = (code *)((ulong)pcStack_508 & 0xffffffffffffff00);
        pppplStack_520 = (long ****)(plVar20 + 0xe);
        func_0x0001004d8d80(&pppplStack_210,&pppplStack_520);
        ppppplVar18 = uStack_200;
        pppplVar5 = pppplStack_208;
        pppplVar3 = pppplStack_210;
        if ((long *****)pppplStack_210 == (long *****)0x8000000000000000) {
          uVar29 = 0;
          lVar28 = 8;
          plVar20[0x16] = 0;
          plVar20[0x17] = 8;
          plVar20[0x18] = 0;
          *(undefined1 *)((long)plVar20 + 0x1d6) = 1;
LAB_100739e5c:
          plVar20[0x19] = 0;
          plVar20[0x1a] = 8;
          plVar20[0x1b] = 0;
          plVar20[0x1c] = 0;
          plVar20[0x1d] = 8;
          plVar20[0x1e] = 0;
          *(undefined1 *)((long)plVar20 + 0x1d6) = 0;
          *plVar20 = lVar28;
          plVar20[1] = lVar28;
          plVar20[2] = plVar20[0x16];
          plVar20[3] = lVar28 + uVar29 * 0x18;
          while( true ) {
            plVar26 = (long *)plVar20[3];
            plVar25 = (long *)plVar20[1];
            if (plVar25 == plVar26) break;
            plVar1 = plVar25 + 3;
            plVar20[1] = (long)plVar1;
            lVar28 = plVar25[2];
            lVar31 = *plVar25;
            plVar20[0x20] = plVar25[1];
            plVar20[0x1f] = lVar31;
            plVar20[0x21] = lVar28;
            if (plVar20[0x1f] == -0x8000000000000000) {
              uVar29 = (long)plVar26 - (long)plVar1;
              plVar25 = plVar1;
              if (uVar29 == 0) goto LAB_10073b5a4;
              goto LAB_10073b56c;
            }
            lVar28 = plVar25[2];
            lVar31 = *plVar25;
            plVar20[0x23] = plVar25[1];
            plVar20[0x22] = lVar31;
            plVar20[0x24] = lVar28;
            lVar31 = plVar20[0x23];
            __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                      (&pppplStack_520,&UNK_108cac7af,6);
            pppplVar3 = pppplStack_518;
            __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                      (&pppplStack_210,pppplStack_518,pppplStack_510,lVar31,lVar28);
            plVar20[0x26] = (long)pppplStack_208;
            plVar20[0x25] = (long)pppplStack_210;
            plVar20[0x27] = (long)uStack_200;
            if ((long *****)pppplStack_520 != (long *****)0x0) {
              _free(pppplVar3);
            }
            auVar36 = (**(code **)(plVar20[9] + 0x38))(plVar20[8],plVar20 + 0x25,0);
            *(undefined1 (*) [16])(plVar20 + 0x3c) = auVar36;
LAB_10073b0a0:
            (**(code **)(auVar36._8_8_ + 0x18))(&pppplStack_210,auVar36._0_8_,param_3);
            ppppplVar18 = uStack_200;
            pppplVar3 = pppplStack_210;
            cVar10 = uStack_200._2_1_;
            if (uStack_200._2_1_ == '\x03') {
              *plVar13 = -0x7fffffffffffffff;
              uVar11 = 3;
              goto LAB_10073b60c;
            }
            lVar28 = plVar20[0x3c];
            puVar24 = (undefined8 *)plVar20[0x3d];
            pcVar23 = (code *)*puVar24;
            if (pcVar23 != (code *)0x0) {
              (*pcVar23)(lVar28);
            }
            if (puVar24[1] != 0) {
              _free(lVar28);
            }
            if (cVar10 != '\x02') {
              if (((ulong)ppppplVar18 & 1) == 0) goto LAB_10073afcc;
              __ZN12codex_config6loader19ProjectTrustContext16decision_for_dir17h2a1c5f9c52787496E
                        (plVar20 + 4,plVar20[0xf],plVar20 + 0x22);
              lVar28 = plVar20[0xf];
              bVar4 = *(byte *)(plVar20 + 7);
              if ((bVar4 == 2) || ((bVar4 & 1) != 0)) {
                ppplStack_4c8 = (long ***)&UNK_108d49759;
                puStack_4c0 = (undefined8 *)0x2e;
                pppplStack_580 = (long ****)plVar20[5];
                pppplStack_578 = (long ****)plVar20[6];
                pppplStack_520 = *(long *****)(lVar28 + 0x50);
                pppplStack_518 = *(long *****)(lVar28 + 0x58);
                if ((bVar4 & 1) == 0) {
                  pppplStack_210 = &ppplStack_4c8;
                  pppplStack_208 = (long ****)&DAT_102a025c0;
                  uStack_200 = &pppplStack_580;
                  pcStack_1f8 = (code *)&DAT_102a025c0;
                  pppplStack_1f0 = (long ****)&pppplStack_520;
                  puStack_1e8 = &
                                __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (plVar20 + 0x28,s_To_load___add_as_a_trusted_proje_108aefa69,
                             &pppplStack_210);
                }
                else {
                  pppplStack_210 = (long ****)&pppplStack_580;
                  pppplStack_208 = (long ****)&DAT_102a025c0;
                  uStack_200 = &pppplStack_520;
                  pcStack_1f8 = (code *)&
                                        __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  pppplStack_1f0 = &ppplStack_4c8;
                  puStack_1e8 = &DAT_102a025c0;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (plVar20 + 0x28,s_is_marked_as_untrusted_in___To_l_108aefa2b,
                             &pppplStack_210);
                }
                lVar28 = plVar20[0xf];
              }
              else {
                plVar20[0x28] = -0x8000000000000000;
              }
              *(undefined1 *)((long)plVar20 + 0x1d2) = 1;
              func_0x0001029514ec(plVar20 + 0x2b,lVar28,plVar20 + 0x22);
              *(undefined1 *)((long)plVar20 + 0x1d1) = 1;
              uVar29 = plVar20[0x27];
              if (uVar29 < 0x180) {
                _memcpy(&pppplStack_210,plVar20[0x26],uVar29);
                *(undefined1 *)((long)&pppplStack_210 + uVar29) = 0;
                __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
                          (&pppplStack_520,&pppplStack_210,uVar29 + 1);
                if ((int)pppplStack_520 == 1) {
                  pppplStack_580 = (long ****)0x8000000000000000;
                  pppplStack_578 = (long ****)&UNK_10b4add80;
                }
                else {
                  lVar28 = func_0x000107c0610c(pppplStack_518,0);
                  if (lVar28 == 0) {
                    puVar19 = (uint *)___error();
                    pppplStack_578 = (long ****)((ulong)*puVar19 << 0x20 | 2);
                    pppplStack_580 = (long ****)0x8000000000000000;
                  }
                  else {
                    ppppplVar18 = (long *****)_strlen();
                    ppppplVar32 = (long *****)0x1;
                    if (ppppplVar18 != (long *****)0x0) {
                      ppppplVar32 = (long *****)_malloc(ppppplVar18);
                      if (ppppplVar32 == (long *****)0x0) {
                        FUN_107c03c64(1,ppppplVar18);
                        goto LAB_10073b674;
                      }
                    }
                    _memcpy(ppppplVar32,lVar28,ppppplVar18);
                    _free(lVar28);
                    pppplStack_580 = (long ****)ppppplVar18;
                    pppplStack_578 = (long ****)ppppplVar32;
                    pppplStack_570 = (long ****)ppppplVar18;
                    if (ppppplVar18 != (long *****)0x8000000000000000) goto LAB_10073b368;
                  }
                }
LAB_10073b28c:
                pppplVar3 = pppplStack_578;
                pppplStack_210 = pppplStack_578;
                lVar28 = plVar20[0x26];
                lVar31 = plVar20[0x27];
                lVar33 = 1;
                if (lVar31 != 0) {
                  lVar33 = _malloc(lVar31);
                  if (lVar33 == 0) {
                    FUN_107c03c64(1,lVar31);
                    goto LAB_10073b674;
                  }
                }
                _memcpy(lVar33,lVar28,lVar31);
                plVar20[0x2e] = lVar31;
                plVar20[0x2f] = lVar33;
                plVar20[0x30] = lVar31;
                if (((ulong)pppplVar3 & 3) == 1) {
                  uVar22 = *(undefined8 *)((long)pppplVar3 + -1);
                  puVar24 = *(undefined8 **)((long)pppplVar3 + 7);
                  pcVar23 = (code *)*puVar24;
                  if (pcVar23 != (code *)0x0) {
                    (*pcVar23)(uVar22);
                  }
                  if (puVar24[1] != 0) {
                    _free(uVar22);
                  }
                  _free((char *)((long)pppplVar3 + -1));
                }
              }
              else {
                func_0x000107c05df0(&pppplStack_580,plVar20[0x26],uVar29,&DAT_10603cc5c);
                if ((long *****)pppplStack_580 == (long *****)0x8000000000000000)
                goto LAB_10073b28c;
LAB_10073b368:
                plVar20[0x2f] = (long)pppplStack_578;
                plVar20[0x2e] = (long)pppplStack_580;
                plVar20[0x30] = (long)pppplStack_570;
              }
              bVar8 = false;
              pppplStack_520 = (long ****)plVar20[0x26];
              pppplStack_518 = (long ****)plVar20[0x27];
              pppplStack_210 = (long ****)plVar20[0x11];
              pppplStack_208 = (long ****)plVar20[0x12];
              if ((long *****)pppplStack_518 != (long *****)0x0) {
                bVar8 = *(char *)pppplStack_520 == '/';
              }
              bVar9 = false;
              pppplStack_510 = (long ****)CONCAT71(pppplStack_510._1_7_,6);
              lStack_4e8 = CONCAT62(CONCAT51(lStack_4e8._3_5_,bVar8),0x201);
              if ((long *****)pppplStack_208 != (long *****)0x0) {
                bVar9 = *(char *)pppplStack_210 == '/';
              }
              uStack_200 = (long *****)CONCAT71(uStack_200._1_7_,6);
              lStack_1d8 = CONCAT62(CONCAT51(lStack_1d8._3_5_,bVar9),0x201);
              uVar29 = FUN_10112a6c0(&pppplStack_520,&pppplStack_210);
              if ((uVar29 & 1) != 0) {
LAB_10073b450:
                if (plVar20[0x2e] != 0) {
                  _free(plVar20[0x2f]);
                }
                if ((plVar20[0x2b] & 0x7fffffffffffffffU) == 0) {
                  *(undefined1 *)((long)plVar20 + 0x1d1) = 0;
                  lVar28 = plVar20[0x28];
                }
                else {
                  _free(plVar20[0x2c]);
                  *(undefined1 *)((long)plVar20 + 0x1d1) = 0;
                  lVar28 = plVar20[0x28];
                }
                if (lVar28 != -0x8000000000000000) {
LAB_10073afac:
                  if (lVar28 != 0) {
                    _free(plVar20[0x29]);
                  }
                }
LAB_10073afb8:
                *(undefined1 *)((long)plVar20 + 0x1d2) = 0;
                if (plVar20[4] != 0) {
                  pcVar17 = (char *)plVar20[5];
                  goto LAB_10073afc8;
                }
                goto LAB_10073afcc;
              }
              bVar8 = false;
              pppplStack_520 = (long ****)plVar20[0x2f];
              pppplStack_518 = (long ****)plVar20[0x30];
              pppplStack_210 = (long ****)plVar20[0x14];
              pppplStack_208 = (long ****)plVar20[0x15];
              if ((long *****)pppplStack_518 != (long *****)0x0) {
                bVar8 = *(char *)pppplStack_520 == '/';
              }
              bVar9 = false;
              pppplStack_510 = (long ****)CONCAT71(pppplStack_510._1_7_,6);
              lStack_4e8 = CONCAT62(CONCAT51(lStack_4e8._3_5_,bVar8),0x201);
              if ((long *****)pppplStack_208 != (long *****)0x0) {
                bVar9 = *(char *)pppplStack_210 == '/';
              }
              uStack_200 = (long *****)CONCAT71(uStack_200._1_7_,6);
              lStack_1d8 = CONCAT62(CONCAT51(lStack_1d8._3_5_,bVar9),0x201);
              uVar29 = FUN_10112a6c0(&pppplStack_520,&pppplStack_210);
              if ((uVar29 & 1) != 0) goto LAB_10073b450;
              lVar28 = plVar20[0x26];
              lVar31 = plVar20[0x27];
              __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                        (&pppplStack_520,&UNK_108ca55c4,0xb);
              pppplVar3 = pppplStack_518;
              __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                        (&pppplStack_210,pppplStack_518,pppplStack_510,lVar28,lVar31);
              plVar20[0x32] = (long)pppplStack_208;
              plVar20[0x31] = (long)pppplStack_210;
              plVar20[0x33] = (long)uStack_200;
              if ((long *****)pppplStack_520 != (long *****)0x0) {
                _free(pppplVar3);
              }
              auVar36 = (**(code **)(plVar20[9] + 0x20))(plVar20[8],plVar20 + 0x31,0);
              *(undefined1 (*) [16])(plVar20 + 0x3c) = auVar36;
LAB_100739f90:
              (**(code **)(auVar36._8_8_ + 0x18))(&pppplStack_210,auVar36._0_8_,param_3);
              if ((long *****)pppplStack_210 == (long *****)0x8000000000000001) {
                *plVar13 = -0x7fffffffffffffff;
                uVar11 = 4;
                goto LAB_10073b60c;
              }
              ppppplVar32 = (long *****)(plVar20 + 0x3c);
              plVar20[0x35] = (long)pppplStack_208;
              plVar20[0x34] = (long)pppplStack_210;
              plVar20[0x36] = (long)uStack_200;
              lVar28 = plVar20[0x3c];
              puVar24 = (undefined8 *)plVar20[0x3d];
              pcVar23 = (code *)*puVar24;
              if (pcVar23 != (code *)0x0) {
                (*pcVar23)(lVar28);
              }
              if (puVar24[1] != 0) {
                _free(lVar28);
              }
              if (plVar20[0x34] != -0x8000000000000000) {
                plVar20[0x3d] = plVar20[0x35];
                *ppppplVar32 = (long ****)plVar20[0x34];
                plVar20[0x3e] = plVar20[0x36];
                func_0x000100f139dc(&pppplStack_580,plVar20[0x3d],plVar20[0x3e]);
                if ((long *****)pppplStack_580 != (long *****)0x2) {
                  puStack_4f8 = puStack_558;
                  pppplStack_500 = pppplStack_560;
                  lStack_4e8 = lStack_548;
                  lStack_4f0 = lStack_550;
                  lStack_4d8 = lStack_538;
                  lStack_4e0 = lStack_540;
                  lStack_4d0 = lStack_530;
                  pppplStack_518 = pppplStack_578;
                  pppplStack_520 = pppplStack_580;
                  pcStack_508 = pcStack_568;
                  pppplStack_510 = pppplStack_570;
                  if (((*(byte *)(plVar20 + 7) != 2 ^ *(byte *)(plVar20 + 7)) & 1) == 0) {
                    pauVar15 = (undefined1 (*) [16])
                               (*
                               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                               )();
                    if (pauVar15[1][0] == '\x01') {
                      auVar36 = *pauVar15;
                    }
                    else {
                      auVar36 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                      *(long *)(*pauVar15 + 8) = auVar36._8_8_;
                      pauVar15[1][0] = 1;
                    }
                    *(long *)*pauVar15 = auVar36._0_8_ + 1;
                    ppplStack_4c8 = (long ***)0x0;
                    puStack_4c0 = (undefined8 *)0x8;
                    uStack_4a8 = 0;
                    puStack_4b0 = &UNK_108c56c70;
                    uStack_498 = 0;
                    uStack_4a0 = 0;
                    ppplStack_4b8 = (long ***)0x0;
                    uStack_480 = 0;
                    uStack_47e = 0;
                    auStack_490 = auVar36;
                    if (plVar20[0x28] == -0x8000000000000000) {
                      ppplStack_478 = (long ***)0x8000000000000000;
                      if (plVar20[0x2b] == -0x8000000000000000) goto LAB_10073a59c;
LAB_10073a7a4:
                      lVar28 = plVar20[0x2c];
                      pppplVar3 = (long ****)plVar20[0x2d];
                      puVar24 = (undefined8 *)0x1;
                      if (pppplVar3 != (long ****)0x0) {
                        puVar24 = (undefined8 *)_malloc(pppplVar3);
                        if (puVar24 == (undefined8 *)0x0) {
                          FUN_107c03c64(1,pppplVar3);
                          goto LAB_10073b674;
                        }
                      }
                      _memcpy(puVar24,lVar28,pppplVar3);
                      ppplStack_460 = (long ***)pppplVar3;
                      puStack_458 = puVar24;
                      ppplStack_450 = (long ***)pppplVar3;
                    }
                    else {
                      lVar28 = plVar20[0x29];
                      pppplVar3 = (long ****)plVar20[0x2a];
                      lVar31 = 1;
                      if (pppplVar3 != (long ****)0x0) {
                        lVar31 = _malloc(pppplVar3);
                        if (lVar31 == 0) {
                          FUN_107c03c64(1,pppplVar3);
                          goto LAB_10073b674;
                        }
                      }
                      _memcpy(lVar31,lVar28,pppplVar3);
                      ppplStack_478 = (long ***)pppplVar3;
                      lStack_470 = lVar31;
                      ppplStack_468 = (long ***)pppplVar3;
                      if (plVar20[0x2b] != -0x8000000000000000) goto LAB_10073a7a4;
LAB_10073a59c:
                      ppplStack_460 = (long ***)0x8000000000000000;
                    }
                    __ZN12codex_config6loader19project_layer_entry17h5c9970f8da612941E
                              (&pppplStack_210,plVar20 + 0x25,&ppplStack_4c8,&ppplStack_478,
                               &ppplStack_460);
                    lVar28 = plVar20[0x1b];
                    if (lVar28 == plVar20[0x19]) {
                      func_0x000107c05b08(plVar20 + 0x19);
                    }
                    puVar24 = (undefined8 *)(plVar20[0x1a] + lVar28 * 0xe8);
                    puVar24[0x17] = uStack_158;
                    puVar24[0x16] = uStack_160;
                    puVar24[0x19] = uStack_148;
                    puVar24[0x18] = uStack_150;
                    puVar24[0x1b] = uStack_138;
                    puVar24[0x1a] = uStack_140;
                    puVar24[0x1c] = uStack_130;
                    puVar24[0xf] = uStack_198;
                    puVar24[0xe] = uStack_1a0;
                    puVar24[0x11] = uStack_188;
                    puVar24[0x10] = uStack_190;
                    puVar24[0x13] = uStack_178;
                    puVar24[0x12] = uStack_180;
                    puVar24[0x15] = uStack_168;
                    puVar24[0x14] = uStack_170;
                    puVar24[7] = lStack_1d8;
                    puVar24[6] = lStack_1e0;
                    puVar24[9] = lStack_1c8;
                    puVar24[8] = lStack_1d0;
                    puVar24[0xb] = uStack_1b8;
                    puVar24[10] = uStack_1c0;
                    puVar24[0xd] = uStack_1a8;
                    puVar24[0xc] = uStack_1b0;
                    puVar24[1] = pppplStack_208;
                    *puVar24 = pppplStack_210;
                    puVar24[3] = pcStack_1f8;
                    puVar24[2] = uStack_200;
                    puVar24[5] = puStack_1e8;
                    puVar24[4] = pppplStack_1f0;
                    plVar20[0x1b] = lVar28 + 1;
                    FUN_100de3b58(&pppplStack_520);
                    *(undefined1 *)((long)plVar20 + 0x1d5) = 0;
                    if (plVar20[0x3c] != 0) {
                      _free(plVar20[0x3d]);
                    }
                    if (plVar20[0x31] != 0) {
                      _free(plVar20[0x32]);
                    }
                    goto LAB_10073b450;
                  }
                  ppplStack_478 = (long ***)plVar20[0x32];
                  lStack_470 = plVar20[0x33];
                  pppplStack_210 = &ppplStack_478;
                  pppplStack_208 =
                       (long ****)
                       &
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
                  ;
                  uStack_200 = &pppplStack_520;
                  pcStack_1f8 = (code *)&
                                        __ZN61__LT_toml__de__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h65029d4c3eea911dE
                  ;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (&ppplStack_4c8,s__Error_parsing_project_config_fi_108ac5b90,
                             &pppplStack_210);
                  puStack_458 = puStack_4c0;
                  ppplStack_460 = ppplStack_4c8;
                  ppplStack_450 = ppplStack_4b8;
                  ppppplVar16 = (long *****)
                                __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&ppplStack_460)
                  ;
                  FUN_100de3b58(&pppplStack_520);
                  goto LAB_10073a920;
                }
                *(undefined1 *)((long)plVar20 + 0x1d5) = 0;
                *(undefined1 *)((long)plVar20 + 0x1d3) = 1;
                plVar20[0x47] = lStack_550;
                plVar20[0x46] = (long)puStack_558;
                plVar20[0x49] = lStack_540;
                plVar20[0x48] = lStack_548;
                plVar20[0x4b] = lStack_530;
                plVar20[0x4a] = lStack_538;
                plVar20[0x43] = (long)pppplStack_570;
                plVar20[0x42] = (long)pppplStack_578;
                plVar20[0x45] = (long)pppplStack_560;
                plVar20[0x44] = (long)pcStack_568;
                if ((plVar20[0x28] == -0x8000000000000000) && ((*(byte *)(plVar20 + 0x3a) & 1) != 0)
                   ) {
                  ppppplVar16 = (long *****)
                                __ZN12codex_config6loader29validate_config_toml_strictly17hb8bda8be7f004108E
                                          (plVar20[0x32],plVar20[0x33],plVar20[0x3d],plVar20[0x3e],
                                           plVar20 + 0x42,plVar20[0x26],plVar20[0x27]);
                  if (ppppplVar16 != (long *****)0x0) goto LAB_10073a90c;
                }
                __ZN12codex_config6loader23sanitize_project_config17h9af4ec1a740005d4E
                          (plVar20 + 0x3f,plVar20 + 0x42);
                *(undefined1 *)((long)plVar20 + 0x1d3) = 0;
                puStack_1e8 = (undefined *)plVar20[0x47];
                pppplStack_1f0 = (long ****)plVar20[0x46];
                lStack_1d8 = plVar20[0x49];
                lStack_1e0 = plVar20[0x48];
                lStack_1c8 = plVar20[0x4b];
                lStack_1d0 = plVar20[0x4a];
                pppplStack_208 = (long ****)plVar20[0x43];
                pppplStack_210 = (long ****)plVar20[0x42];
                pcStack_1f8 = (code *)plVar20[0x45];
                uStack_200 = (long *****)plVar20[0x44];
                __ZN12codex_config6loader37resolve_relative_paths_in_config_toml17h000dac96a78002beE
                          (&pppplStack_520,&pppplStack_210,plVar20[0x26],plVar20[0x27]);
                ppppplVar16 = (long *****)pppplStack_518;
                if ((long *****)pppplStack_520 != (long *****)0x8000000000000006) {
                  pcStack_428 = pcStack_508;
                  pppplStack_430 = pppplStack_510;
                  puStack_418 = puStack_4f8;
                  pppplStack_420 = pppplStack_500;
                  lStack_408 = lStack_4e8;
                  lStack_410 = lStack_4f0;
                  lStack_3f8 = lStack_4d8;
                  lStack_400 = lStack_4e0;
                  pppplStack_440 = pppplStack_520;
                  pppplStack_438 = pppplStack_518;
                  *(undefined1 *)((long)plVar20 + 0x1d4) = 0;
                  plVar25 = (long *)0x0;
                  if (plVar20[0x2b] != -0x8000000000000000) {
                    plVar25 = plVar20 + 0x2b;
                  }
                  plVar20[0x51] = (long)puStack_4f8;
                  plVar20[0x50] = (long)pppplStack_500;
                  plVar20[0x53] = lStack_4e8;
                  plVar20[0x52] = lStack_4f0;
                  plVar20[0x4d] = (long)pppplStack_518;
                  plVar20[0x4c] = (long)pppplStack_520;
                  plVar20[0x4f] = (long)pcStack_508;
                  plVar20[0x4e] = (long)pppplStack_510;
                  plVar20[0x55] = lStack_4d8;
                  plVar20[0x54] = lStack_4e0;
                  plVar20[0x57] = plVar20[9];
                  plVar20[0x56] = plVar20[8];
                  plVar20[0x58] = (long)plVar25;
                  *(byte *)(plVar20 + 0x69) =
                       (*(byte *)(plVar20 + 7) != 2 ^ *(byte *)(plVar20 + 7)) & 1;
                  *(undefined1 *)((long)plVar20 + 0x349) = 0;
LAB_10073a380:
                  func_0x000100744e30(&pppplStack_210,plVar20 + 0x4c,param_3);
                  ppppplVar16 = (long *****)pppplStack_208;
                  ppppplVar32 = (long *****)pppplStack_210;
                  if ((long *****)pppplStack_210 == (long *****)0x8000000000000007) {
                    *plVar13 = -0x7fffffffffffffff;
                    uVar11 = 5;
                    goto LAB_10073b60c;
                  }
                  pcStack_3e8 = pcStack_1f8;
                  pppplStack_3f0 = (long ****)uStack_200;
                  puStack_3d8 = puStack_1e8;
                  pppplStack_3e0 = pppplStack_1f0;
                  lStack_3c8 = lStack_1d8;
                  lStack_3d0 = lStack_1e0;
                  lStack_3b8 = lStack_1c8;
                  lStack_3c0 = lStack_1d0;
                  func_0x000100cae04c(plVar20 + 0x4c);
                  if (ppppplVar32 != (long *****)0x8000000000000006) {
                    pcStack_508 = pcStack_3e8;
                    pppplStack_510 = pppplStack_3f0;
                    puStack_4f8 = puStack_3d8;
                    pppplStack_500 = pppplStack_3e0;
                    lStack_4e8 = lStack_3c8;
                    lStack_4f0 = lStack_3d0;
                    lStack_4d8 = lStack_3b8;
                    lStack_4e0 = lStack_3c0;
                    pppplStack_520 = (long ****)ppppplVar32;
                    pppplStack_518 = (long ****)ppppplVar16;
                    if (plVar20[0x28] == -0x8000000000000000) {
                      if (plVar20[0x41] == 0) {
                        puStack_1e8 = puStack_3d8;
                        pppplStack_1f0 = pppplStack_3e0;
                        lStack_1d8 = lStack_3c8;
                        lStack_1e0 = lStack_3d0;
                        lStack_1c8 = lStack_3b8;
                        lStack_1d0 = lStack_3c0;
                        pcStack_1f8 = pcStack_3e8;
                        uStack_200 = (long *****)pppplStack_3f0;
                        pppplStack_210 = (long ****)ppppplVar32;
                        pppplStack_208 = (long ****)ppppplVar16;
                      }
                      else {
                        __ZN12codex_config6loader35project_ignored_config_keys_warning17h8be7ba0a052a1514E
                                  (&pppplStack_210,plVar20 + 0x25,plVar20[0x40]);
                        lVar28 = plVar20[0x1e];
                        if (lVar28 == plVar20[0x1c]) {
                          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                                    (plVar20 + 0x1c);
                        }
                        puVar24 = (undefined8 *)(plVar20[0x1d] + lVar28 * 0x18);
                        puVar24[1] = pppplStack_208;
                        *puVar24 = pppplStack_210;
                        puVar24[2] = uStack_200;
                        plVar20[0x1e] = lVar28 + 1;
                        puStack_1e8 = puStack_4f8;
                        pppplStack_1f0 = pppplStack_500;
                        lStack_1d8 = lStack_4e8;
                        lStack_1e0 = lStack_4f0;
                        lStack_1c8 = lStack_4d8;
                        lStack_1d0 = lStack_4e0;
                        pppplStack_208 = pppplStack_518;
                        pppplStack_210 = pppplStack_520;
                        pcStack_1f8 = pcStack_508;
                        uStack_200 = (long *****)pppplStack_510;
                        if (plVar20[0x28] != -0x8000000000000000) {
                          lVar28 = plVar20[0x29];
                          pppplVar3 = (long ****)plVar20[0x2a];
                          goto joined_r0x00010073a4a8;
                        }
                      }
                      ppplStack_4c8 = (long ***)0x8000000000000000;
                      pppplStack_520 = pppplStack_210;
                      pppplStack_518 = pppplStack_208;
                      pppplStack_510 = (long ****)uStack_200;
                      pcStack_508 = pcStack_1f8;
                      pppplStack_500 = pppplStack_1f0;
                      puStack_4f8 = puStack_1e8;
                      lStack_4f0 = lStack_1e0;
                      lStack_4e8 = lStack_1d8;
                      lStack_4e0 = lStack_1d0;
                      lStack_4d8 = lStack_1c8;
                      if (plVar20[0x2b] == -0x8000000000000000) goto LAB_10073a4e4;
LAB_10073a5d8:
                      lVar28 = plVar20[0x2c];
                      ppppplVar18 = (long *****)plVar20[0x2d];
                      ppppplVar32 = (long *****)0x1;
                      if (ppppplVar18 != (long *****)0x0) {
                        ppppplVar32 = (long *****)_malloc(ppppplVar18);
                        if (ppppplVar32 == (long *****)0x0) {
                          FUN_107c03c64(1,ppppplVar18);
                          goto LAB_10073b674;
                        }
                      }
                      _memcpy(ppppplVar32,lVar28,ppppplVar18);
                      pppplStack_580 = (long ****)ppppplVar18;
                      pppplStack_578 = (long ****)ppppplVar32;
                      pppplStack_570 = (long ****)ppppplVar18;
                    }
                    else {
                      lVar28 = plVar20[0x29];
                      pppplVar3 = (long ****)plVar20[0x2a];
joined_r0x00010073a4a8:
                      puVar24 = (undefined8 *)0x1;
                      pppplStack_210 = pppplStack_520;
                      pppplStack_208 = pppplStack_518;
                      uStack_200 = (long *****)pppplStack_510;
                      pcStack_1f8 = pcStack_508;
                      pppplStack_1f0 = pppplStack_500;
                      puStack_1e8 = puStack_4f8;
                      lStack_1e0 = lStack_4f0;
                      lStack_1d8 = lStack_4e8;
                      lStack_1d0 = lStack_4e0;
                      lStack_1c8 = lStack_4d8;
                      if (pppplVar3 != (long ****)0x0) {
                        puVar24 = (undefined8 *)_malloc(pppplVar3);
                        if (puVar24 == (undefined8 *)0x0) {
                          FUN_107c03c64(1,pppplVar3);
                          goto LAB_10073b674;
                        }
                      }
                      _memcpy(puVar24,lVar28,pppplVar3);
                      ppplStack_4c8 = (long ***)pppplVar3;
                      puStack_4c0 = puVar24;
                      ppplStack_4b8 = (long ***)pppplVar3;
                      if (plVar20[0x2b] != -0x8000000000000000) goto LAB_10073a5d8;
LAB_10073a4e4:
                      pppplStack_580 = (long ****)0x8000000000000000;
                    }
                    __ZN12codex_config6loader19project_layer_entry17h5c9970f8da612941E
                              (&uStack_3a8,plVar20 + 0x25,&pppplStack_210,&ppplStack_4c8,
                               &pppplStack_580);
                    lVar28 = plVar20[0x1b];
                    if (lVar28 == plVar20[0x19]) {
                      func_0x000107c05b08();
                    }
                    puVar24 = (undefined8 *)(plVar20[0x1a] + lVar28 * 0xe8);
                    puVar24[0x19] = uStack_2e0;
                    puVar24[0x18] = uStack_2e8;
                    puVar24[0x1b] = uStack_2d0;
                    puVar24[0x1a] = uStack_2d8;
                    puVar24[0x1c] = uStack_2c8;
                    puVar24[0x11] = uStack_320;
                    puVar24[0x10] = uStack_328;
                    puVar24[0x13] = uStack_310;
                    puVar24[0x12] = uStack_318;
                    puVar24[0x15] = uStack_300;
                    puVar24[0x14] = uStack_308;
                    puVar24[0x17] = uStack_2f0;
                    puVar24[0x16] = uStack_2f8;
                    puVar24[9] = uStack_360;
                    puVar24[8] = uStack_368;
                    puVar24[0xb] = uStack_350;
                    puVar24[10] = uStack_358;
                    puVar24[0xd] = uStack_340;
                    puVar24[0xc] = uStack_348;
                    puVar24[0xf] = uStack_330;
                    puVar24[0xe] = uStack_338;
                    puVar24[1] = uStack_3a0;
                    *puVar24 = uStack_3a8;
                    puVar24[3] = uStack_390;
                    puVar24[2] = uStack_398;
                    puVar24[5] = uStack_380;
                    puVar24[4] = uStack_388;
                    puVar24[7] = uStack_370;
                    puVar24[6] = uStack_378;
                    plVar20[0x1b] = lVar28 + 1;
                    *(undefined1 *)((long)plVar20 + 0x1d4) = 0;
                    lVar31 = plVar20[0x40];
                    lVar28 = plVar20[0x41];
                    if (lVar28 != 0) {
                      puVar24 = (undefined8 *)(lVar31 + 8);
                      do {
                        if (puVar24[-1] != 0) {
                          _free(*puVar24);
                        }
                        puVar24 = puVar24 + 3;
                        lVar28 = lVar28 + -1;
                      } while (lVar28 != 0);
                    }
                    if (plVar20[0x3f] != 0) {
                      _free(lVar31);
                    }
                    *(undefined1 *)((long)plVar20 + 0x1d3) = 0;
                    *(undefined1 *)((long)plVar20 + 0x1d5) = 0;
                    if (plVar20[0x3c] != 0) {
                      puVar30 = (undefined8 *)plVar20[0x3d];
                      goto LAB_10073a6ec;
                    }
                    goto LAB_10073a6f4;
                  }
                }
                *(undefined1 *)((long)plVar20 + 0x1d4) = 0;
                lVar31 = plVar20[0x40];
                lVar28 = plVar20[0x41];
                if (lVar28 != 0) {
                  ppppplVar32 = (long *****)(lVar31 + 8);
                  do {
                    if (ppppplVar32[-1] != (long ****)0x0) {
                      _free(*ppppplVar32);
                    }
                    ppppplVar32 = ppppplVar32 + 3;
                    lVar28 = lVar28 + -1;
                  } while (lVar28 != 0);
                }
                if (plVar20[0x3f] != 0) {
                  _free(lVar31);
                }
LAB_10073a90c:
                if ((*(byte *)((long)plVar20 + 0x1d3) & 1) != 0) {
                  FUN_100ddb5bc(plVar20 + 0x42);
                }
                *(undefined1 *)((long)plVar20 + 0x1d3) = 0;
LAB_10073a920:
                *(undefined1 *)((long)plVar20 + 0x1d5) = 0;
                if (plVar20[0x3c] != 0) {
                  puVar30 = (undefined8 *)plVar20[0x3d];
LAB_10073a930:
                  _free(puVar30);
                }
LAB_10073a9e4:
                if (plVar20[0x31] != 0) {
                  _free(plVar20[0x32]);
                }
                if (plVar20[0x2e] != 0) {
                  _free(plVar20[0x2f]);
                }
                if ((plVar20[0x2b] & 0x7fffffffffffffffU) == 0) {
                  *(undefined1 *)((long)plVar20 + 0x1d1) = 0;
                  lVar28 = plVar20[0x28];
                }
                else {
                  _free(plVar20[0x2c]);
                  *(undefined1 *)((long)plVar20 + 0x1d1) = 0;
                  lVar28 = plVar20[0x28];
                }
                if ((lVar28 != -0x8000000000000000) && (lVar28 != 0)) {
                  _free(plVar20[0x29]);
                }
                *(undefined1 *)((long)plVar20 + 0x1d2) = 0;
                if (plVar20[4] != 0) {
                  _free(plVar20[5]);
                }
                if (plVar20[0x25] != 0) {
                  _free(plVar20[0x26]);
                }
                if (plVar20[0x22] != 0) {
                  _free(plVar20[0x23]);
                }
                uVar29 = plVar20[3] - plVar20[1];
                if (uVar29 != 0) {
                  uVar29 = uVar29 / 0x18;
                  puVar24 = (undefined8 *)(plVar20[1] + 8);
                  do {
                    if (puVar24[-1] != 0) {
                      _free(*puVar24);
                    }
                    puVar24 = puVar24 + 3;
                    uVar29 = uVar29 - 1;
                  } while (uVar29 != 0);
                }
                if (plVar20[2] != 0) {
                  _free(*plVar20);
                }
                lVar28 = plVar20[0x1d];
                lVar31 = plVar20[0x1e];
                if (lVar31 != 0) {
                  ppppplVar32 = (long *****)(lVar28 + 8);
                  do {
                    if (ppppplVar32[-1] != (long ****)0x0) {
                      _free(*ppppplVar32);
                    }
                    ppppplVar32 = ppppplVar32 + 3;
                    lVar31 = lVar31 + -1;
                  } while (lVar31 != 0);
                }
                if (plVar20[0x1c] != 0) {
                  _free(lVar28);
                }
                ppppplVar2 = (long *****)plVar20[0x1a];
                lVar28 = plVar20[0x1b] + 1;
                ppppplVar18 = ppppplVar2;
                while (lVar28 = lVar28 + -1, lVar28 != 0) {
                  ppppplVar18 = ppppplVar18 + 0x1d;
                  FUN_100e05a40();
                  ppppplVar32 = ppppplVar18;
                }
                if (plVar20[0x19] != 0) {
                  _free(ppppplVar2);
                }
                *(undefined1 *)((long)plVar20 + 0x1d6) = 0;
                if (plVar20[0x13] != 0) {
                  _free(plVar20[0x14]);
                }
                ppppplVar18 = ppppplVar32;
                if (plVar20[0x10] != 0) {
                  ppppplVar18 = (long *****)plVar20[0x11];
                  goto LAB_10073ab70;
                }
                goto LAB_10073ab74;
              }
              lVar28 = plVar20[0x35];
              plVar20[0x3c] = lVar28;
              cVar10 = FUN_100c355d4(lVar28);
              if (cVar10 == '\0') {
                lVar31 = plVar20[9];
                lVar28 = plVar20[8];
                pauVar15 = (undefined1 (*) [16])
                           (*
                           ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                           )();
                if (pauVar15[1][0] == '\x01') {
                  auVar36 = *pauVar15;
                }
                else {
                  auVar36 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                  *(long *)(*pauVar15 + 8) = auVar36._8_8_;
                  pauVar15[1][0] = 1;
                }
                *(long *)*pauVar15 = auVar36._0_8_ + 1;
                plVar25 = (long *)0x0;
                if (plVar20[0x2b] != -0x8000000000000000) {
                  plVar25 = plVar20 + 0x2b;
                }
                plVar20[0x3d] = 0;
                plVar20[0x3e] = 8;
                plVar20[0x3f] = 0;
                plVar20[0x41] = 0;
                plVar20[0x40] = (long)&UNK_108c56c70;
                plVar20[0x43] = 0;
                plVar20[0x42] = 0;
                *(undefined1 (*) [16])(plVar20 + 0x44) = auVar36;
                *(undefined2 *)(plVar20 + 0x46) = 0;
                *(undefined1 *)((long)plVar20 + 0x232) = 0;
                plVar20[0x48] = lVar31;
                plVar20[0x47] = lVar28;
                plVar20[0x49] = (long)plVar25;
                *(byte *)(plVar20 + 0x5a) =
                     (*(byte *)(plVar20 + 7) != 2 ^ *(byte *)(plVar20 + 7)) & 1;
                *(undefined1 *)((long)plVar20 + 0x2d1) = 0;
LAB_10073a0b0:
                func_0x000100744e30(&pppplStack_210,plVar20 + 0x3d,param_3);
                ppppplVar16 = (long *****)pppplStack_208;
                ppppplVar32 = (long *****)pppplStack_210;
                if ((long *****)pppplStack_210 != (long *****)0x8000000000000007) {
                  pcStack_2b8 = pcStack_1f8;
                  pppplStack_2c0 = (long ****)uStack_200;
                  puStack_2a8 = puStack_1e8;
                  pppplStack_2b0 = pppplStack_1f0;
                  lStack_298 = lStack_1d8;
                  lStack_2a0 = lStack_1e0;
                  lStack_288 = lStack_1c8;
                  lStack_290 = lStack_1d0;
                  func_0x000100cae04c(plVar20 + 0x3d);
                  if (ppppplVar32 == (long *****)0x8000000000000006) goto LAB_10073a9d4;
                  pcStack_268 = pcStack_2b8;
                  pppplStack_270 = pppplStack_2c0;
                  puStack_258 = puStack_2a8;
                  pppplStack_260 = pppplStack_2b0;
                  lStack_248 = lStack_298;
                  lStack_250 = lStack_2a0;
                  lStack_238 = lStack_288;
                  lStack_240 = lStack_290;
                  pppplStack_280 = (long ****)ppppplVar32;
                  pppplStack_278 = (long ****)ppppplVar16;
                  *(undefined1 *)((long)plVar20 + 0x1d2) = 0;
                  pppplStack_578 = (long ****)plVar20[0x29];
                  pppplStack_580 = (long ****)plVar20[0x28];
                  pppplStack_570 = (long ****)plVar20[0x2a];
                  *(undefined1 *)((long)plVar20 + 0x1d1) = 0;
                  pppplStack_518 = (long ****)plVar20[0x2c];
                  pppplStack_520 = (long ****)plVar20[0x2b];
                  pppplStack_510 = (long ****)plVar20[0x2d];
                  __ZN12codex_config6loader19project_layer_entry17h5c9970f8da612941E
                            (&pppplStack_210,plVar20 + 0x25,&pppplStack_280,&pppplStack_580,
                             &pppplStack_520);
                  lVar28 = plVar20[0x1b];
                  if (lVar28 == plVar20[0x19]) {
                    func_0x000107c05b08();
                  }
                  puVar24 = (undefined8 *)(plVar20[0x1a] + lVar28 * 0xe8);
                  puVar24[0x17] = uStack_158;
                  puVar24[0x16] = uStack_160;
                  puVar24[0x19] = uStack_148;
                  puVar24[0x18] = uStack_150;
                  puVar24[0x1b] = uStack_138;
                  puVar24[0x1a] = uStack_140;
                  puVar24[0x1c] = uStack_130;
                  puVar24[0xf] = uStack_198;
                  puVar24[0xe] = uStack_1a0;
                  puVar24[0x11] = uStack_188;
                  puVar24[0x10] = uStack_190;
                  puVar24[0x13] = uStack_178;
                  puVar24[0x12] = uStack_180;
                  puVar24[0x15] = uStack_168;
                  puVar24[0x14] = uStack_170;
                  puVar24[7] = lStack_1d8;
                  puVar24[6] = lStack_1e0;
                  puVar24[9] = lStack_1c8;
                  puVar24[8] = lStack_1d0;
                  puVar24[0xb] = uStack_1b8;
                  puVar24[10] = uStack_1c0;
                  puVar24[0xd] = uStack_1a8;
                  puVar24[0xc] = uStack_1b0;
                  puVar24[1] = pppplStack_208;
                  *puVar24 = pppplStack_210;
                  puVar24[3] = pcStack_1f8;
                  puVar24[2] = uStack_200;
                  puVar24[5] = puStack_1e8;
                  puVar24[4] = pppplStack_1f0;
                  plVar20[0x1b] = lVar28 + 1;
                  uVar29 = plVar20[0x3c];
                  if ((uVar29 & 3) == 1) {
                    puVar30 = (undefined8 *)(uVar29 - 1);
                    uVar22 = *puVar30;
                    puVar24 = *(undefined8 **)(uVar29 + 7);
                    pcVar23 = (code *)*puVar24;
                    if (pcVar23 != (code *)0x0) {
                      (*pcVar23)(uVar22);
                    }
                    if (puVar24[1] != 0) {
                      _free(uVar22);
                    }
LAB_10073a6ec:
                    _free(puVar30);
                  }
LAB_10073a6f4:
                  if (plVar20[0x31] != 0) {
                    _free(plVar20[0x32]);
                  }
                  if (plVar20[0x2e] != 0) {
                    _free(plVar20[0x2f]);
                  }
                  if (((*(byte *)((long)plVar20 + 0x1d1) & 1) != 0) &&
                     ((plVar20[0x2b] & 0x7fffffffffffffffU) != 0)) {
                    _free(plVar20[0x2c]);
                    *(undefined1 *)((long)plVar20 + 0x1d1) = 0;
                    if ((*(byte *)((long)plVar20 + 0x1d2) & 1) == 0) goto LAB_10073afb8;
LAB_10073a734:
                    lVar28 = plVar20[0x28];
                    if (lVar28 == -0x8000000000000000) goto LAB_10073afb8;
                    goto LAB_10073afac;
                  }
                  *(undefined1 *)((long)plVar20 + 0x1d1) = 0;
                  if ((*(byte *)((long)plVar20 + 0x1d2) & 1) != 0) goto LAB_10073a734;
                  goto LAB_10073afb8;
                }
                *plVar13 = -0x7fffffffffffffff;
                uVar11 = 6;
                goto LAB_10073b60c;
              }
              ppplStack_4c8 = (long ***)plVar20[0x32];
              puStack_4c0 = (undefined8 *)plVar20[0x33];
              uVar11 = FUN_100c355d4(lVar28);
              pppplStack_210 = &ppplStack_4c8;
              pppplStack_208 =
                   (long ****)
                   &
                   __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
              ;
              pcStack_1f8 = 
              __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
              ;
              uStack_200 = ppppplVar32;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&pppplStack_520,s__Failed_to_read_project_config_f_108ac5bb9,
                         &pppplStack_210);
              pppplStack_578 = pppplStack_518;
              pppplStack_580 = pppplStack_520;
              pppplStack_570 = pppplStack_510;
              ppppplVar16 = (long *****)
                            __ZN3std2io5error5Error3new17h002dced88496ea8bE(uVar11,&pppplStack_580);
LAB_10073a9d4:
              uVar29 = plVar20[0x3c];
              if ((uVar29 & 3) != 1) goto LAB_10073a9e4;
              puVar30 = (undefined8 *)(uVar29 - 1);
              ppppplVar32 = (long *****)*puVar30;
              puVar24 = *(undefined8 **)(uVar29 + 7);
              pcVar23 = (code *)*puVar24;
              if (pcVar23 != (code *)0x0) {
                (*pcVar23)(ppppplVar32);
              }
              if (puVar24[1] != 0) {
                _free(ppppplVar32);
              }
              goto LAB_10073a930;
            }
            if (((ulong)pppplVar3 & 3) == 1) {
              pcVar17 = (char *)((long)pppplVar3 + -1);
              uVar22 = *(undefined8 *)pcVar17;
              puVar24 = *(undefined8 **)((long)pppplVar3 + 7);
              pcVar23 = (code *)*puVar24;
              if (pcVar23 != (code *)0x0) {
                (*pcVar23)(uVar22);
              }
              if (puVar24[1] != 0) {
                _free(uVar22);
              }
LAB_10073afc8:
              _free(pcVar17);
            }
LAB_10073afcc:
            if (plVar20[0x25] != 0) {
              _free(plVar20[0x26]);
            }
            if (plVar20[0x22] != 0) {
              _free(plVar20[0x23]);
            }
          }
          plVar20[0x1f] = -0x8000000000000000;
          uVar29 = (long)plVar26 - (long)plVar25;
          if (uVar29 != 0) {
LAB_10073b56c:
            uVar29 = uVar29 / 0x18;
            plVar25 = plVar25 + 1;
            do {
              if (plVar25[-1] != 0) {
                _free(*plVar25);
              }
              plVar25 = plVar25 + 3;
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
          }
LAB_10073b5a4:
          if (plVar20[2] != 0) {
            _free(*plVar20);
          }
          lVar28 = plVar20[0x19];
          ppppplVar16 = (long *****)plVar20[0x1a];
          ppppplVar18 = (long *****)plVar20[0x1b];
          lStack_228 = plVar20[0x1d];
          lStack_230 = plVar20[0x1c];
          lStack_220 = plVar20[0x1e];
          *(undefined1 *)((long)plVar20 + 0x1d6) = 0;
          if (plVar20[0x13] != 0) {
            _free(plVar20[0x14]);
          }
          if (plVar20[0x10] != 0) {
            _free(plVar20[0x11]);
          }
LAB_10073b5f0:
          *plVar13 = lVar28;
          plVar13[1] = (long)ppppplVar16;
          plVar13[2] = (long)ppppplVar18;
          plVar13[4] = lStack_228;
          plVar13[3] = lStack_230;
          plVar13[5] = lStack_220;
          uVar11 = 1;
LAB_10073b60c:
          *(undefined1 *)((long)plVar20 + 0x1d7) = uVar11;
          return;
        }
        puVar24 = (undefined8 *)_malloc(0x60);
        if (puVar24 != (undefined8 *)0x0) {
          lVar28 = 0;
          *puVar24 = pppplVar3;
          puVar24[1] = pppplVar5;
          puVar24[2] = ppppplVar18;
          ppplStack_4c8 = (long ***)0x4;
          ppplStack_4b8 = (long ***)0x1;
          pppplStack_208 = pppplStack_518;
          pppplStack_210 = pppplStack_520;
          pcStack_1f8 = pcStack_508;
          uStack_200 = (long *****)pppplStack_510;
          puStack_4c0 = puVar24;
          while (ppplVar7 = ppplStack_4b8, func_0x0001004d8d80(&pppplStack_580,&pppplStack_210),
                pppplVar6 = pppplStack_570, pppplVar5 = pppplStack_578, pppplVar3 = pppplStack_580,
                (long *****)pppplStack_580 != (long *****)0x8000000000000000) {
            if (ppplVar7 == ppplStack_4c8) {
              thunk_FUN_108855060(&ppplStack_4c8,ppplVar7,1,8,0x18);
              puVar24 = puStack_4c0;
            }
            *(long *****)((long)puVar24 + lVar28 + 0x18) = pppplVar3;
            *(long *****)((long)puVar24 + lVar28 + 0x20) = pppplVar5;
            *(long *****)((long)puVar24 + lVar28 + 0x28) = pppplVar6;
            ppplStack_4b8 = (long ***)((long)ppplVar7 + 1);
            lVar28 = lVar28 + 0x18;
          }
          plVar20[0x18] = (long)ppplStack_4b8;
          plVar20[0x17] = (long)puStack_4c0;
          plVar20[0x16] = (long)ppplStack_4c8;
          lVar28 = plVar20[0x17];
          uVar29 = plVar20[0x18];
          *(undefined1 *)((long)plVar20 + 0x1d6) = 1;
          if (1 < uVar29) {
            uVar27 = uVar29 >> 1;
            puVar24 = (undefined8 *)(lVar28 + uVar29 * 0x18 + -8);
            puVar30 = (undefined8 *)(lVar28 + 0x10);
            do {
              uVar34 = puVar30[-1];
              uVar22 = puVar30[-2];
              uVar35 = puVar24[-2];
              puVar30[-1] = puVar24[-1];
              puVar30[-2] = uVar35;
              puVar24[-1] = uVar34;
              puVar24[-2] = uVar22;
              uVar22 = *puVar30;
              *puVar30 = *puVar24;
              *puVar24 = uVar22;
              uVar27 = uVar27 - 1;
              puVar24 = puVar24 + -3;
              puVar30 = puVar30 + 3;
            } while (uVar27 != 0);
            lVar28 = plVar20[0x17];
            uVar29 = plVar20[0x18];
          }
          goto LAB_100739e5c;
        }
      }
      else {
        if (bVar4 == 3) {
          auVar36 = *(undefined1 (*) [16])(plVar20 + 0x3c);
          goto LAB_10073b0a0;
        }
LAB_100739ec0:
        FUN_107c05cc4(&UNK_10b220c60);
      }
      FUN_107c03c64(8,0x60);
LAB_10073b674:
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x10073b678);
      (*pcVar23)();
    }
    puVar12 = (undefined4 *)_malloc(4);
    if (puVar12 == (undefined4 *)0x0) goto LAB_100739a5c;
    uVar21 = 0x656c6966;
  }
  *puVar12 = uVar21;
  uVar22 = 4;
LAB_100739a44:
  *param_1 = 0x8000000000000003;
  param_1[1] = uVar22;
  param_1[2] = puVar12;
  param_1[3] = uVar22;
  return;
}

