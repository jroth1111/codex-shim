
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101485390(long *param_1,undefined8 param_2,long param_3,long *param_4,long param_5)

{
  ushort *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulong *puVar14;
  int *piVar15;
  undefined *puVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long unaff_x21;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long unaff_x28;
  undefined1 auVar24 [16];
  long lStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a0;
  long lStack_698;
  long lStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 *puStack_678;
  undefined8 uStack_670;
  undefined8 uStack_640;
  long lStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5a8;
  long lStack_5a0;
  long lStack_598;
  ulong uStack_590;
  undefined4 *puStack_588;
  undefined4 *puStack_580;
  ulong uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  undefined4 *puStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  undefined4 *puStack_4c8;
  ulong uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  undefined4 *puStack_460;
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  ulong uStack_340;
  long lStack_338;
  ulong uStack_330;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  ulong uStack_250;
  ulong uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long lStack_188;
  ulong uStack_180;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_e0 = 10;
    uVar9 = func_0x000108a4a0f8(&uStack_e0,0,0);
    return uVar9;
  }
  lVar7 = _malloc(param_3);
  if (lVar7 != 0) {
    _memcpy(lVar7,param_2,param_3);
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = lVar7;
    param_1[0xb] = param_3;
    param_1[9] = -0x8000000000000000;
    lStack_258 = param_1[0xb];
    lStack_260 = param_1[10];
    plVar11 = param_4 + 1;
    lVar7 = *param_4;
    lStack_268 = param_3;
    pauVar8 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar8[1][0] == '\x01') {
      auVar24 = *pauVar8;
    }
    else {
      auVar24 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar8 + 8) = auVar24._8_8_;
      pauVar8[1][0] = 1;
    }
    *(long *)*pauVar8 = auVar24._0_8_ + 1;
    FUN_105dc99f8(&uStack_e0,param_5,auVar24._0_8_,auVar24._8_8_);
    uStack_98 = 0x8000000000000000;
    uVar9 = uStack_d8;
    if (uStack_e0 != 0x8000000000000001) {
      uStack_228 = uStack_b8;
      uStack_230 = uStack_c0;
      uStack_218 = uStack_a8;
      uStack_220 = uStack_b0;
      uStack_208 = 0x8000000000000000;
      uStack_210 = uStack_a0;
      lStack_1f8 = lStack_88;
      uStack_200 = uStack_90;
      uStack_248 = uStack_d8;
      uStack_250 = uStack_e0;
      uStack_238 = uStack_c8;
      lStack_240 = lStack_d0;
      if (param_5 != 0) {
        uVar22 = CONCAT17(-(-1 < lVar7),
                          CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar7 >>
                                                                                    0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
                 0x8080808080808080;
        do {
          while (uVar22 == 0) {
            lVar7 = *plVar11;
            param_4 = param_4 + -0x48;
            plVar11 = plVar11 + 1;
            uVar22 = CONCAT17(-(-1 < lVar7),
                              CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar7 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar7 >> 8)),
                                                           -(-1 < (char)lVar7)))))))) &
                     0x8080808080808080;
          }
          if (uStack_250 == 0x8000000000000000) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
            goto LAB_101485b94;
          }
          uVar9 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          iVar4 = (int)((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
          func_0x0001055bf348(&uStack_e0,param_4[(long)-iVar4 * 9 + -8],
                              param_4[(long)-iVar4 * 9 + -7]);
          lVar7 = lStack_d0;
          uVar18 = uStack_d8;
          if ((int)uStack_e0 == 1) {
            uVar9 = FUN_1088564ec(&UNK_108ca7604,0x26);
LAB_101485ac0:
            FUN_100e040f0(&uStack_250);
            goto LAB_101485ac8;
          }
          if (lStack_d0 == 0) {
            uVar9 = 1;
          }
          else {
            uVar9 = _malloc(lStack_d0);
            if (uVar9 == 0) {
              func_0x0001087c9084(1,lVar7);
              goto LAB_101485b94;
            }
            _memcpy(uVar9,uVar18,lVar7);
            if (lVar7 == -0x8000000000000000) goto LAB_101485ac0;
          }
          if ((uStack_208 != 0x8000000000000000) && (uStack_208 != 0)) {
            _free(uStack_200);
          }
          lStack_1f8 = lVar7;
          uStack_208 = 0x8000000000000000;
          uStack_200 = uVar9;
          if (lVar7 == -0x8000000000000000) {
            func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
            goto LAB_101485b94;
          }
          lStack_190 = lVar7;
          lStack_1a0 = lVar7;
          uVar18 = param_4[(long)-iVar4 * 9 + -6] ^ 0x8000000000000000;
          if (-1 < param_4[(long)-iVar4 * 9 + -6]) {
            uVar18 = 2;
          }
          uStack_198 = uVar9;
          if (uVar18 == 0) {
            if (pauVar8[1][0] == '\x01') {
              auVar24 = *pauVar8;
            }
            else {
              auVar24 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar8 + 8) = auVar24._8_8_;
              pauVar8[1][0] = 1;
            }
            *(long *)*pauVar8 = auVar24._0_8_ + 1;
            FUN_105dc99f8(&uStack_e0,2,auVar24._0_8_,auVar24._8_8_);
            uStack_98 = 0x8000000000000000;
            if (uStack_e0 == 0x8000000000000001) goto LAB_101485710;
            uStack_108 = uStack_a8;
            uStack_110 = uStack_b0;
            uStack_f8 = 0x8000000000000000;
            uStack_100 = uStack_a0;
            lStack_e8 = lStack_88;
            uStack_f0 = uStack_90;
            uStack_128 = uStack_c8;
            lStack_130 = lStack_d0;
            uStack_118 = uStack_b8;
            uStack_120 = uStack_c0;
            uStack_140 = uStack_e0;
            uStack_138 = uStack_d8;
            if (uStack_e0 == 0x8000000000000000) {
LAB_1014856bc:
              uStack_e0 = 10;
              uVar9 = func_0x000108a4a0f8(&uStack_e0,0,0);
            }
            else {
              uVar9 = func_0x0001006358e0(&uStack_140,&UNK_108cde34c,4,&UNK_108ca1948,3);
              if (uVar9 == 0) {
                if (uStack_140 != 0x8000000000000000) {
                  uVar9 = FUN_10063fe00(&uStack_140,&UNK_108ca1095,7,param_4[(long)-iVar4 * 9 + -4],
                                        param_4[(long)-iVar4 * 9 + -3]);
                  if (uVar9 != 0) goto LAB_1014857b4;
                  uStack_b8 = uStack_118;
                  uStack_c0 = uStack_120;
                  uStack_a8 = uStack_108;
                  uStack_b0 = uStack_110;
                  uStack_98 = uStack_f8;
                  uStack_a0 = uStack_100;
                  lStack_88 = lStack_e8;
                  uStack_90 = uStack_f0;
                  uStack_d8 = uStack_138;
                  uStack_e0 = uStack_140;
                  uStack_c8 = uStack_128;
                  lStack_d0 = lStack_130;
                  __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                            (&lStack_188,&uStack_e0);
                  goto LAB_1014857f4;
                }
                goto LAB_1014856bc;
              }
            }
LAB_1014857b4:
            lStack_188 = -0x7ffffffffffffffb;
            uStack_180 = uVar9;
            FUN_100e040f0(&uStack_140);
          }
          else if (uVar18 == 1) {
            if (pauVar8[1][0] == '\x01') {
              auVar24 = *pauVar8;
            }
            else {
              auVar24 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar8 + 8) = auVar24._8_8_;
              pauVar8[1][0] = 1;
            }
            *(long *)*pauVar8 = auVar24._0_8_ + 1;
            FUN_105dc99f8(&uStack_e0,2,auVar24._0_8_,auVar24._8_8_);
            uStack_98 = 0x8000000000000000;
            if (uStack_e0 == 0x8000000000000001) {
LAB_101485710:
              uStack_98 = 0x8000000000000000;
              lStack_188 = -0x7ffffffffffffffb;
              uStack_180 = uStack_d8;
            }
            else {
              uStack_108 = uStack_a8;
              uStack_110 = uStack_b0;
              uStack_f8 = 0x8000000000000000;
              uStack_100 = uStack_a0;
              lStack_e8 = lStack_88;
              uStack_f0 = uStack_90;
              uStack_128 = uStack_c8;
              lStack_130 = lStack_d0;
              uStack_118 = uStack_b8;
              uStack_120 = uStack_c0;
              uStack_140 = uStack_e0;
              uStack_138 = uStack_d8;
              if (uStack_e0 == 0x8000000000000000) {
LAB_101485640:
                uStack_e0 = 10;
                uVar9 = func_0x000108a4a0f8(&uStack_e0,0,0);
              }
              else {
                uVar9 = func_0x0001006358e0(&uStack_140,&UNK_108cde34c,4,&UNK_108cafb4c,6);
                if (uVar9 == 0) {
                  if (uStack_140 == 0x8000000000000000) goto LAB_101485640;
                  uVar9 = FUN_10063fe00(&uStack_140,&UNK_108ca1095,7,param_4[(long)-iVar4 * 9 + -4],
                                        param_4[(long)-iVar4 * 9 + -3]);
                  if (uVar9 == 0) {
                    uStack_b8 = uStack_118;
                    uStack_c0 = uStack_120;
                    uStack_a8 = uStack_108;
                    uStack_b0 = uStack_110;
                    uStack_98 = uStack_f8;
                    uStack_a0 = uStack_100;
                    lStack_88 = lStack_e8;
                    uStack_90 = uStack_f0;
                    uStack_d8 = uStack_138;
                    uStack_e0 = uStack_140;
                    uStack_c8 = uStack_128;
                    lStack_d0 = lStack_130;
                    __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                              (&lStack_188,&uStack_e0);
                    goto LAB_1014857f4;
                  }
                }
              }
              lStack_188 = -0x7ffffffffffffffb;
              uStack_180 = uVar9;
              FUN_100e040f0(&uStack_140);
            }
          }
          else {
            if (pauVar8[1][0] == '\x01') {
              auVar24 = *pauVar8;
            }
            else {
              auVar24 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar8 + 8) = auVar24._8_8_;
              pauVar8[1][0] = 1;
            }
            *(long *)*pauVar8 = auVar24._0_8_ + 1;
            FUN_105dc99f8(&uStack_e0,3,auVar24._0_8_,auVar24._8_8_);
            uStack_98 = 0x8000000000000000;
            if (uStack_e0 == 0x8000000000000001) goto LAB_101485710;
            uStack_108 = uStack_a8;
            uStack_110 = uStack_b0;
            uStack_f8 = 0x8000000000000000;
            uStack_100 = uStack_a0;
            lStack_e8 = lStack_88;
            uStack_f0 = uStack_90;
            uStack_128 = uStack_c8;
            lStack_130 = lStack_d0;
            uStack_118 = uStack_b8;
            uStack_120 = uStack_c0;
            uStack_140 = uStack_e0;
            uStack_138 = uStack_d8;
            if (uStack_e0 == 0x8000000000000000) {
LAB_101485740:
              uStack_e0 = 10;
              uVar9 = func_0x000108a4a0f8(&uStack_e0,0,0);
            }
            else {
              uVar9 = func_0x0001006358e0(&uStack_140,&UNK_108cde34c,4,&UNK_108cafb52,6);
              if (uVar9 == 0) {
                if (uStack_140 == 0x8000000000000000) goto LAB_101485740;
                uVar9 = FUN_10063fe00(&uStack_140,&UNK_108cafb58,0xc,param_4[(long)-iVar4 * 9 + -5],
                                      param_4[(long)-iVar4 * 9 + -4]);
                if (uVar9 == 0) {
                  if (uStack_140 == 0x8000000000000000) goto LAB_101485740;
                  uVar9 = func_0x00010063bbfc(&uStack_140,&UNK_108cafb64,9,
                                              param_4 + (long)-iVar4 * 9 + -3);
                  if (uVar9 == 0) {
                    uStack_b8 = uStack_118;
                    uStack_c0 = uStack_120;
                    uStack_a8 = uStack_108;
                    uStack_b0 = uStack_110;
                    uStack_98 = uStack_f8;
                    uStack_a0 = uStack_100;
                    lStack_88 = lStack_e8;
                    uStack_90 = uStack_f0;
                    uStack_d8 = uStack_138;
                    uStack_e0 = uStack_140;
                    uStack_c8 = uStack_128;
                    lStack_d0 = lStack_130;
                    __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                              (&lStack_188,&uStack_e0);
                    goto LAB_1014857f4;
                  }
                }
              }
            }
            lStack_188 = -0x7ffffffffffffffb;
            uStack_180 = uVar9;
            FUN_100e040f0(&uStack_140);
          }
LAB_1014857f4:
          uVar9 = uStack_180;
          if (lStack_188 == -0x7ffffffffffffffb) {
            if (lVar7 != 0) {
              _free(uStack_198);
            }
            goto LAB_101485ac0;
          }
          FUN_101497a9c(&uStack_e0,&uStack_250,&lStack_1a0,&lStack_188);
          lStack_1e8 = lStack_d0;
          uStack_1f0 = uStack_d8;
          uStack_1d8 = uStack_c0;
          uStack_1e0 = uStack_c8;
          uStack_1c8 = uStack_b0;
          uStack_1d0 = uStack_b8;
          uStack_1b8 = uStack_a0;
          uStack_1c0 = uStack_a8;
          uStack_1b0 = uStack_98;
          if (uStack_d8 != 0x8000000000000005) {
            FUN_100de6690(&uStack_1f0);
          }
          uVar22 = uVar22 - 1 & uVar22;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      uStack_b8 = uStack_228;
      uStack_c0 = uStack_230;
      uStack_a8 = uStack_218;
      uStack_b0 = uStack_220;
      uStack_98 = uStack_208;
      uStack_a0 = uStack_210;
      lStack_88 = lStack_1f8;
      uStack_90 = uStack_200;
      uStack_d8 = uStack_248;
      uStack_e0 = uStack_250;
      uStack_c8 = uStack_238;
      lStack_d0 = lStack_240;
      if (uStack_250 == 0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_101485b94:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101485b98);
        (*pcVar5)();
      }
      uStack_118 = uStack_228;
      uStack_120 = uStack_230;
      uStack_108 = uStack_218;
      uStack_110 = uStack_220;
      uStack_100 = uStack_210;
      uStack_138 = uStack_248;
      uStack_140 = uStack_250;
      uStack_128 = uStack_238;
      lStack_130 = lStack_240;
      if ((uStack_208 & 0x7fffffffffffffff) != 0) {
        _free(uStack_200);
      }
      if (uStack_140 != 0x8000000000000005) {
        FUN_101497a9c(&uStack_e0,param_1,&lStack_268,&uStack_140);
        uStack_248 = lStack_d0;
        uStack_250 = uStack_d8;
        uStack_238 = uStack_c0;
        lStack_240 = uStack_c8;
        uStack_228 = uStack_b0;
        uStack_230 = uStack_b8;
        uStack_218 = uStack_a0;
        uStack_220 = uStack_a8;
        uStack_210 = uStack_98;
        if (uStack_d8 != 0x8000000000000005) {
          FUN_100de6690(&uStack_250);
        }
        return 0;
      }
      uStack_140 = 0x8000000000000005;
      uVar9 = uStack_138;
    }
LAB_101485ac8:
    _free(lStack_260);
    return uVar9;
  }
  uVar10 = func_0x0001087c9084(1,param_3);
  FUN_100e040f0(&uStack_140);
  if (unaff_x28 != 0) {
    _free(uStack_198);
  }
  FUN_100e040f0(&uStack_250);
  _free(lStack_260);
  __Unwind_Resume(uVar10);
  auVar24 = func_0x000108a07bc4();
  puVar14 = auVar24._8_8_;
  plVar11 = auVar24._0_8_;
  if (*plVar11 == -0x8000000000000000) {
    uStack_300 = 10;
    uVar9 = func_0x000108a4a0f8(&uStack_300,0,0);
    return uVar9;
  }
  puVar12 = (undefined8 *)_malloc(0x1b);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = 0x775f747067746168;
    *puVar12 = 0x635f646563726f66;
    *(undefined8 *)((long)puVar12 + 0x13) = 0x64695f6563617073;
    *(undefined8 *)((long)puVar12 + 0xb) = 0x6b726f775f747067;
    if (plVar11[9] != -0x8000000000000000 && plVar11[9] != 0) {
      _free(plVar11[10]);
    }
    plVar11[10] = (long)puVar12;
    plVar11[0xb] = 0x1b;
    plVar11[9] = -0x8000000000000000;
    lStack_350 = plVar11[0xb];
    lStack_358 = plVar11[10];
    uStack_360 = 0x1b;
    if (*puVar14 == 2) {
      lStack_348 = -0x8000000000000000;
    }
    else {
      uVar9 = puVar14[2];
      uVar22 = puVar14[3];
      if ((*puVar14 & 1) == 0) {
        if (uVar22 == 0) {
          lVar7 = 1;
        }
        else {
          lVar7 = _malloc(uVar22,uVar9);
          if (lVar7 == 0) {
            func_0x0001087c9084(1,uVar22);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101485d4c);
            (*pcVar5)();
          }
        }
        _memcpy(lVar7,uVar9,uVar22);
        lStack_348 = -0x7ffffffffffffffd;
        uStack_340 = uVar22;
        lStack_338 = lVar7;
        uStack_330 = uVar22;
      }
      else {
        func_0x000100633f00(&lStack_348,uVar9,uVar22);
        if (lStack_348 == -0x7ffffffffffffffb) {
          _free(lStack_358);
          return uStack_340;
        }
      }
    }
    FUN_101497a9c(&uStack_300,plVar11,&uStack_360,&lStack_348);
    uStack_3a8 = uStack_2f0;
    lStack_3b0 = lStack_2f8;
    uStack_398 = uStack_2e0;
    uStack_3a0 = uStack_2e8;
    uStack_388 = uStack_2d0;
    uStack_390 = uStack_2d8;
    uStack_378 = uStack_2c0;
    uStack_380 = uStack_2c8;
    uStack_370 = uStack_2b8;
    if (lStack_2f8 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_3b0);
    }
    return 0;
  }
  uVar10 = func_0x0001087c9084(1,0x1b);
  _free(lStack_358);
  auVar24 = __Unwind_Resume(uVar10);
  piVar15 = auVar24._8_8_;
  plVar11 = auVar24._0_8_;
  if (*plVar11 == -0x8000000000000000) {
    uStack_530 = 10;
    uVar9 = func_0x000108a4a0f8(&uStack_530,0,0);
    return uVar9;
  }
  puVar13 = (undefined4 *)_malloc(7);
  if (puVar13 == (undefined4 *)0x0) {
    uVar10 = func_0x0001087c9084(1,7);
    _free(lStack_5a0);
    uVar10 = __Unwind_Resume(uVar10);
    if (unaff_x21 != 0) {
      _free(uStack_480);
    }
    FUN_100e040f0(&uStack_590);
    _free(lStack_5a0);
    __Unwind_Resume(uVar10);
    auVar24 = func_0x000108a07bc4();
    uVar9 = auVar24._8_8_;
    plVar11 = auVar24._0_8_;
    if (*plVar11 == -0x8000000000000000) {
      uStack_640 = 10;
      uVar9 = func_0x000108a4a0f8(&uStack_640,0,0);
    }
    else {
      puVar13 = (undefined4 *)_malloc(6);
      if (puVar13 == (undefined4 *)0x0) {
        func_0x0001087c9084(1,6);
        goto LAB_101486610;
      }
      *(undefined2 *)(puVar13 + 1) = 0x7375;
      *puVar13 = 0x74617473;
      if (plVar11[9] != -0x8000000000000000 && plVar11[9] != 0) {
        _free(plVar11[10]);
      }
      plVar11[10] = (long)puVar13;
      plVar11[0xb] = 6;
      plVar11[9] = -0x8000000000000000;
      lStack_690 = plVar11[0xb];
      lStack_698 = plVar11[10];
      uStack_6a0 = 6;
      uVar2 = auVar24._8_4_ & 0xff;
      if (uVar2 == 1 || (uVar9 & 0xff) == 0) {
        if ((uVar9 & 0xff) == 0) {
          uVar9 = 0xb;
          puStack_678 = (undefined8 *)_malloc(0xb);
          if (puStack_678 == (undefined8 *)0x0) {
LAB_101486610:
            func_0x0001087c9084(1,uVar9);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101486620);
            (*pcVar5)();
          }
          *(undefined4 *)((long)puStack_678 + 7) = 0x73736572;
          *puStack_678 = 0x72676f72705f6e69;
          uStack_680 = 0xb;
        }
        else {
          uVar9 = 8;
          puStack_678 = (undefined8 *)_malloc(8);
          if (puStack_678 == (undefined8 *)0x0) goto LAB_101486610;
          *puStack_678 = 0x6465766f72707061;
          uStack_680 = 8;
        }
      }
      else if (uVar2 == 2) {
        uVar9 = 6;
        puStack_678 = (undefined8 *)_malloc(6);
        if (puStack_678 == (undefined8 *)0x0) goto LAB_101486610;
        *(undefined2 *)((long)puStack_678 + 4) = 0x6465;
        *(undefined4 *)puStack_678 = 0x696e6564;
        uStack_680 = 6;
      }
      else if (uVar2 == 3) {
        uVar9 = 9;
        puStack_678 = (undefined8 *)_malloc(9);
        if (puStack_678 == (undefined8 *)0x0) goto LAB_101486610;
        *(undefined1 *)(puStack_678 + 1) = 0x74;
        *puStack_678 = 0x756f5f64656d6974;
        uStack_680 = 9;
      }
      else {
        uVar9 = 7;
        puStack_678 = (undefined8 *)_malloc(7);
        if (puStack_678 == (undefined8 *)0x0) goto LAB_101486610;
        *(undefined4 *)((long)puStack_678 + 3) = 0x64657472;
        *(undefined4 *)puStack_678 = 0x726f6261;
        uStack_680 = 7;
      }
      uStack_688 = 0x8000000000000003;
      uStack_670 = uStack_680;
      FUN_101497a9c(&uStack_640,plVar11,&uStack_6a0,&uStack_688);
      uStack_6e8 = uStack_630;
      lStack_6f0 = lStack_638;
      uStack_6d8 = uStack_620;
      uStack_6e0 = uStack_628;
      uStack_6c8 = uStack_610;
      uStack_6d0 = uStack_618;
      uStack_6b8 = uStack_600;
      uStack_6c0 = uStack_608;
      uStack_6b0 = uStack_5f8;
      if (lStack_638 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_6f0);
      }
      uVar9 = 0;
    }
    return uVar9;
  }
  *(undefined4 *)((long)puVar13 + 3) = 0x736e6961;
  *puVar13 = 0x616d6f64;
  if (plVar11[9] != -0x8000000000000000 && plVar11[9] != 0) {
    _free(plVar11[10]);
  }
  plVar11[10] = (long)puVar13;
  plVar11[0xb] = 7;
  plVar11[9] = -0x8000000000000000;
  lStack_598 = plVar11[0xb];
  lStack_5a0 = plVar11[10];
  uStack_5a8 = 7;
  if (*piVar15 == 1) {
    plVar21 = *(long **)(piVar15 + 2);
    uVar9 = *(ulong *)(piVar15 + 4);
    lVar23 = *(long *)(piVar15 + 6);
    bVar6 = plVar21 != (long *)0x0;
    lVar7 = lVar23;
    if (!bVar6) {
      lVar7 = 0;
    }
    pauVar8 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar8[1][0] == '\x01') {
      auVar24 = *pauVar8;
    }
    else {
      auVar24 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar8 + 8) = auVar24._8_8_;
      pauVar8[1][0] = 1;
    }
    *(long *)*pauVar8 = auVar24._0_8_ + 1;
    FUN_105dc99f8(&uStack_530,lVar7,auVar24._0_8_,auVar24._8_8_);
    uStack_4e8 = 0x8000000000000000;
    uVar22 = uStack_528;
    if (uStack_530 != 0x8000000000000001) {
      uStack_568 = uStack_508;
      uStack_570 = uStack_510;
      uStack_558 = uStack_4f8;
      uStack_560 = uStack_500;
      uStack_548 = 0x8000000000000000;
      uStack_550 = uStack_4f0;
      uStack_538 = uStack_4d8;
      uStack_540 = uStack_4e0;
      puStack_588 = (undefined4 *)uStack_528;
      uStack_590 = uStack_530;
      uStack_578 = uStack_518;
      puStack_580 = puStack_520;
      if (lVar7 != 0) {
        plVar17 = (long *)0x0;
        do {
          if (!bVar6) {
            func_0x000108a07a20(&UNK_10b212c38);
            goto LAB_101486360;
          }
          if (plVar17 == (long *)0x0) {
            for (; plVar17 = plVar21, uVar9 != 0; uVar9 = uVar9 - 1) {
              plVar21 = (long *)plVar17[0x24];
            }
            plVar21 = (long *)0x0;
            uVar9 = 0;
            plVar19 = plVar17;
            if (*(short *)((long)plVar17 + 0x112) == 0) goto LAB_10148600c;
          }
          else {
            plVar19 = plVar17;
            if (*(ushort *)((long)plVar17 + 0x112) <= uVar9) {
LAB_10148600c:
              do {
                plVar17 = (long *)*plVar19;
                if (plVar17 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b2382c8);
                  goto LAB_101486360;
                }
                plVar21 = (long *)((long)plVar21 + 1);
                puVar1 = (ushort *)(plVar19 + 0x22);
                uVar9 = (ulong)*puVar1;
                plVar19 = plVar17;
              } while (*(ushort *)((long)plVar17 + 0x112) <= *puVar1);
            }
          }
          uVar18 = uVar9 + 1;
          if (plVar21 == (long *)0x0) {
            plVar19 = plVar17;
            if (uStack_590 != 0x8000000000000000) goto LAB_101486070;
LAB_1014862ac:
            puVar16 = &UNK_10b24c5c0;
LAB_1014862c0:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar16);
            goto LAB_101486360;
          }
          plVar19 = plVar17 + uVar18;
          do {
            plVar19 = (long *)plVar19[0x24];
            plVar21 = (long *)((long)plVar21 + -1);
          } while (plVar21 != (long *)0x0);
          uVar18 = 0;
          if (uStack_590 == 0x8000000000000000) goto LAB_1014862ac;
LAB_101486070:
          bVar3 = *(byte *)((long)plVar17 + uVar9 + 0x114);
          uVar20 = plVar17[uVar9 * 3 + 3];
          if (uVar20 == 0) {
            uVar22 = 1;
          }
          else {
            lVar7 = plVar17[uVar9 * 3 + 2];
            uVar22 = _malloc(uVar20);
            if (uVar22 == 0) {
              func_0x0001087c9084(1,uVar20);
              goto LAB_101486360;
            }
            _memcpy(uVar22,lVar7,uVar20);
            if (uVar20 == 0x8000000000000000) {
              FUN_100e040f0(&uStack_590);
              goto LAB_101486280;
            }
          }
          if (((uStack_548 != 0x8000000000000000) && (uStack_548 != 0)) &&
             (_free(uStack_540), uStack_590 == 0x8000000000000000)) {
            puVar16 = &UNK_10b24c5f0;
            uStack_548 = uVar20;
            uStack_540 = uVar22;
            uStack_538 = uVar20;
            goto LAB_1014862c0;
          }
          uStack_548 = 0x8000000000000000;
          if (uVar20 == 0x8000000000000000) {
            uStack_540 = uVar22;
            uStack_538 = uVar20;
            func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
            goto LAB_101486360;
          }
          uStack_488 = uVar20;
          uStack_480 = uVar22;
          uStack_478 = uVar20;
          if ((bVar3 & 1) == 0) {
            uStack_540 = uVar22;
            uStack_538 = uVar20;
            puVar13 = (undefined4 *)_malloc(5);
            uVar10 = 5;
            if (puVar13 == (undefined4 *)0x0) goto LAB_101486348;
            *(undefined1 *)(puVar13 + 1) = 0x77;
            *puVar13 = 0x6f6c6c61;
            uStack_468 = 5;
          }
          else {
            uStack_540 = uVar22;
            uStack_538 = uVar20;
            puVar13 = (undefined4 *)_malloc(4);
            uVar10 = 4;
            if (puVar13 == (undefined4 *)0x0) {
LAB_101486348:
              func_0x0001087c9084(1,uVar10);
              goto LAB_101486360;
            }
            *puVar13 = 0x796e6564;
            uStack_468 = 4;
          }
          uStack_470 = 0x8000000000000003;
          puStack_460 = puVar13;
          uStack_458 = uStack_468;
          FUN_101497a9c(&uStack_530,&uStack_590,&uStack_488,&uStack_470);
          puStack_4c8 = puStack_520;
          uStack_4d0 = uStack_528;
          uStack_4b8 = uStack_510;
          uStack_4c0 = uStack_518;
          uStack_4a8 = uStack_500;
          uStack_4b0 = uStack_508;
          uStack_498 = uStack_4f0;
          uStack_4a0 = uStack_4f8;
          uStack_490 = uStack_4e8;
          if (uStack_528 != 0x8000000000000005) {
            FUN_100de6690(&uStack_4d0);
          }
          plVar21 = (long *)0x0;
          bVar6 = true;
          lVar23 = lVar23 + -1;
          plVar17 = plVar19;
          uVar9 = uVar18;
        } while (lVar23 != 0);
      }
      uStack_528 = (ulong)puStack_588;
      uStack_530 = uStack_590;
      uStack_4f8 = uStack_558;
      uStack_500 = uStack_560;
      uStack_4e8 = uStack_548;
      uStack_4f0 = uStack_550;
      uStack_4d8 = uStack_538;
      uStack_4e0 = uStack_540;
      uStack_518 = uStack_578;
      puStack_520 = puStack_580;
      uStack_508 = uStack_568;
      uStack_510 = uStack_570;
      if (uStack_590 == 0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_101486360:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101486364);
        (*pcVar5)();
      }
      uStack_448 = uStack_568;
      uStack_450 = uStack_570;
      uStack_438 = uStack_558;
      uStack_440 = uStack_560;
      uStack_430 = uStack_550;
      uStack_468 = (ulong)puStack_588;
      uStack_470 = uStack_590;
      uStack_458 = uStack_578;
      puStack_460 = puStack_580;
      if ((uStack_548 & 0x7fffffffffffffff) != 0) {
        _free(uStack_540);
      }
      uVar22 = uStack_468;
      if (uStack_470 != 0x8000000000000005) goto LAB_101485f2c;
    }
LAB_101486280:
    _free(lStack_5a0);
  }
  else {
    uStack_470 = 0x8000000000000000;
LAB_101485f2c:
    FUN_101497a9c(&uStack_530,plVar11,&uStack_5a8,&uStack_470);
    puStack_588 = puStack_520;
    uStack_590 = uStack_528;
    uStack_578 = uStack_510;
    puStack_580 = (undefined4 *)uStack_518;
    uStack_568 = uStack_500;
    uStack_570 = uStack_508;
    uStack_558 = uStack_4f0;
    uStack_560 = uStack_4f8;
    uStack_550 = uStack_4e8;
    if (uStack_528 != 0x8000000000000005) {
      FUN_100de6690(&uStack_590);
    }
    uVar22 = 0;
  }
  return uVar22;
}

