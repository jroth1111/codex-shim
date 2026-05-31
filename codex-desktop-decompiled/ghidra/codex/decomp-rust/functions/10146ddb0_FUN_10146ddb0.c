
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10146ddb0(long *param_1,undefined8 param_2,long param_3,int param_4)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 uVar11;
  long *plVar12;
  byte *pbVar13;
  undefined2 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 uStack_638;
  long lStack_630;
  long lStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_580;
  undefined8 uStack_578;
  long lStack_570;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_460;
  long lStack_458;
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
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_a0 = 10;
    lVar15 = func_0x000108a4a0f8(&uStack_a0,0,0);
    return lVar15;
  }
  lVar15 = param_3;
  lVar7 = _malloc(param_3);
  if (lVar7 != 0) {
    _memcpy(lVar7,param_2,param_3);
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = lVar7;
    param_1[0xb] = param_3;
    param_1[9] = -0x8000000000000000;
    lStack_f0 = param_1[0xb];
    lStack_f8 = param_1[10];
    uStack_d8 = (ulong)param_4;
    uStack_e0 = uStack_d8 >> 0x3f;
    uStack_e8 = 0x8000000000000002;
    lStack_100 = param_3;
    FUN_101497a9c(&uStack_a0,param_1,&lStack_100,&uStack_e8);
    uStack_148 = uStack_90;
    lStack_150 = lStack_98;
    uStack_138 = uStack_80;
    uStack_140 = uStack_88;
    uStack_128 = uStack_70;
    uStack_130 = uStack_78;
    uStack_118 = uStack_60;
    uStack_120 = uStack_68;
    uStack_110 = uStack_58;
    if (lStack_98 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_150);
    }
    return 0;
  }
  auVar19 = func_0x0001087c9084(1,param_3);
  plVar16 = auVar19._8_8_;
  plVar8 = auVar19._0_8_;
  if (*plVar8 == -0x8000000000000000) {
    lStack_2e0 = 10;
    lVar15 = func_0x000108a4a0f8(&lStack_2e0,0,0);
    return lVar15;
  }
  puVar9 = (undefined8 *)_malloc(8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0x7365737574617473;
    if (plVar8[9] != -0x8000000000000000 && plVar8[9] != 0) {
      _free(plVar8[10]);
    }
    plVar8[10] = (long)puVar9;
    plVar8[0xb] = 8;
    plVar8[9] = -0x8000000000000000;
    lStack_348 = plVar8[0xb];
    lStack_350 = plVar8[10];
    uStack_358 = 8;
    plVar12 = plVar16 + 1;
    lVar7 = *plVar16;
    pauVar10 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar10[1][0] == '\x01') {
      auVar19 = *pauVar10;
    }
    else {
      auVar19 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar10 + 8) = auVar19._8_8_;
      pauVar10[1][0] = 1;
    }
    *(long *)*pauVar10 = auVar19._0_8_ + 1;
    FUN_105dc99f8(&lStack_2e0,lVar15,auVar19._0_8_,auVar19._8_8_);
    uStack_298 = 0x8000000000000000;
    lVar17 = lStack_2d8;
    if (lStack_2e0 != -0x7fffffffffffffff) {
      uStack_318 = uStack_2b8;
      uStack_320 = uStack_2c0;
      uStack_308 = uStack_2a8;
      uStack_310 = uStack_2b0;
      uStack_2f8 = 0x8000000000000000;
      uStack_300 = uStack_2a0;
      lStack_2e8 = lStack_288;
      lStack_2f0 = lStack_290;
      lStack_338 = lStack_2d8;
      lStack_340 = lStack_2e0;
      lStack_328 = lStack_2c8;
      lStack_330 = lStack_2d0;
      if (lVar15 != 0) {
        uVar18 = CONCAT17(-(-1 < lVar7),
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
          while (uVar18 == 0) {
            lVar7 = *plVar12;
            plVar16 = plVar16 + -0x30;
            plVar12 = plVar12 + 1;
            uVar18 = CONCAT17(-(-1 < lVar7),
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
          if (lStack_340 == -0x8000000000000000) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
            goto LAB_10146e304;
          }
          uVar3 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          iVar4 = (int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3);
          lStack_220 = 0;
          lStack_218 = 1;
          lStack_210 = 0;
          FUN_10624142c(&lStack_2e0,plVar16 + (long)-iVar4 * 6 + -6,0);
          FUN_108855060(&lStack_220,0,0x24,1,1);
          lVar5 = lStack_210;
          lVar17 = lStack_218;
          lVar7 = lStack_220;
          plVar1 = (long *)(lStack_218 + lStack_210);
          plVar1[1] = lStack_2d8;
          *plVar1 = lStack_2e0;
          plVar1[3] = lStack_2c8;
          plVar1[2] = lStack_2d0;
          *(undefined4 *)(plVar1 + 4) = (undefined4)uStack_2c0;
          if (lStack_220 == -0x8000000000000000) {
LAB_10146e1f8:
            FUN_100e040f0(&lStack_340);
            goto LAB_10146e200;
          }
          if ((uStack_2f8 != 0x8000000000000000) && (uStack_2f8 != 0)) {
            _free(lStack_2f0);
          }
          lStack_2e8 = lVar5 + 0x24;
          lStack_2f0 = lVar17;
          uStack_2f8 = 0x8000000000000000;
          lStack_230 = lVar17;
          lStack_238 = lVar7;
          lStack_228 = lStack_2e8;
          func_0x000100645c28(&lStack_220,plVar16 + (long)-iVar4 * 6 + -4);
          lVar17 = lStack_218;
          if (lStack_220 == -0x7ffffffffffffffb) {
            if (lVar7 != 0) {
              _free(lStack_230);
            }
            goto LAB_10146e1f8;
          }
          FUN_101497a9c(&lStack_2e0,&lStack_340,&lStack_238,&lStack_220);
          lStack_278 = lStack_2d0;
          lStack_280 = lStack_2d8;
          uStack_268 = uStack_2c0;
          lStack_270 = lStack_2c8;
          uStack_258 = uStack_2b0;
          uStack_260 = uStack_2b8;
          uStack_248 = uStack_2a0;
          uStack_250 = uStack_2a8;
          uStack_240 = uStack_298;
          if (lStack_2d8 != -0x7ffffffffffffffb) {
            FUN_100de6690(&lStack_280);
          }
          uVar18 = uVar18 - 1 & uVar18;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      lStack_2d8 = lStack_338;
      lStack_2e0 = lStack_340;
      uStack_2a8 = uStack_308;
      uStack_2b0 = uStack_310;
      uStack_298 = uStack_2f8;
      uStack_2a0 = uStack_300;
      lStack_288 = lStack_2e8;
      lStack_290 = lStack_2f0;
      lStack_2c8 = lStack_328;
      lStack_2d0 = lStack_330;
      uStack_2b8 = uStack_318;
      uStack_2c0 = uStack_320;
      if (lStack_340 == -0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_10146e304:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10146e308);
        (*pcVar6)();
      }
      uStack_1f8 = uStack_318;
      uStack_200 = uStack_320;
      uStack_1e8 = uStack_308;
      uStack_1f0 = uStack_310;
      uStack_1e0 = uStack_300;
      lStack_218 = lStack_338;
      lStack_220 = lStack_340;
      lStack_208 = lStack_328;
      lStack_210 = lStack_330;
      if ((uStack_2f8 & 0x7fffffffffffffff) != 0) {
        _free(lStack_2f0);
      }
      if (lStack_220 != -0x7ffffffffffffffb) {
        FUN_101497a9c(&lStack_2e0,plVar8,&uStack_358,&lStack_220);
        lStack_338 = lStack_2d0;
        lStack_340 = lStack_2d8;
        lStack_328 = uStack_2c0;
        lStack_330 = lStack_2c8;
        uStack_318 = uStack_2b0;
        uStack_320 = uStack_2b8;
        uStack_308 = uStack_2a0;
        uStack_310 = uStack_2a8;
        uStack_300 = uStack_298;
        if (lStack_2d8 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_340);
        }
        return 0;
      }
      lStack_220 = -0x7ffffffffffffffb;
      lVar17 = lStack_218;
    }
LAB_10146e200:
    _free(lStack_350);
    return lVar17;
  }
  uVar11 = func_0x0001087c9084(1,8);
  _free(lStack_350);
  uVar11 = __Unwind_Resume(uVar11);
  if (param_1 != (long *)0x0) {
    _free(lStack_230);
  }
  FUN_100e040f0(&lStack_340);
  _free(lStack_350);
  __Unwind_Resume(uVar11);
  auVar19 = func_0x000108a07bc4();
  plVar12 = auVar19._8_8_;
  plVar8 = auVar19._0_8_;
  if (*plVar8 == -0x8000000000000000) {
    lStack_400 = 10;
    lVar15 = func_0x000108a4a0f8(&lStack_400,0,0);
    return lVar15;
  }
  puVar9 = (undefined8 *)_malloc(0xe);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0x6e735f74736f6867;
    *(undefined8 *)((long)puVar9 + 6) = 0x746f687370616e73;
    if (plVar8[9] != -0x8000000000000000 && plVar8[9] != 0) {
      _free(plVar8[10]);
    }
    plVar8[10] = (long)puVar9;
    plVar8[0xb] = 0xe;
    plVar8[9] = -0x8000000000000000;
    lStack_4b0 = plVar8[0xb];
    lStack_4b8 = plVar8[10];
    uStack_4c0 = 0xe;
    lVar15 = *plVar12;
    if (lVar15 == 2) {
      lStack_4a8 = -0x8000000000000000;
LAB_10146e434:
      FUN_101497a9c(&lStack_400,plVar8,&uStack_4c0,&lStack_4a8);
      lStack_458 = uStack_3f0;
      lStack_460 = lStack_3f8;
      uStack_448 = uStack_3e0;
      uStack_450 = uStack_3e8;
      uStack_438 = uStack_3d0;
      uStack_440 = uStack_3d8;
      uStack_428 = uStack_3c0;
      uStack_430 = uStack_3c8;
      uStack_420 = uStack_3b8;
      if (lStack_3f8 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_460);
      }
      return 0;
    }
    pauVar10 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar10[1][0] == '\x01') {
      auVar19 = *pauVar10;
    }
    else {
      auVar19 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar10 + 8) = auVar19._8_8_;
      pauVar10[1][0] = 1;
    }
    *(long *)*pauVar10 = auVar19._0_8_ + 1;
    FUN_105dc99f8(&lStack_400,3,auVar19._0_8_,auVar19._8_8_);
    uStack_3b8 = 0x8000000000000000;
    lVar7 = lStack_3f8;
    if (lStack_400 != -0x7fffffffffffffff) {
      uStack_428 = uStack_3c8;
      uStack_430 = uStack_3d0;
      uStack_418 = 0x8000000000000000;
      uStack_420 = uStack_3c0;
      uStack_408 = uStack_3a8;
      uStack_410 = uStack_3b0;
      uStack_448 = uStack_3e8;
      uStack_450 = uStack_3f0;
      uStack_438 = uStack_3d8;
      uStack_440 = uStack_3e0;
      lStack_460 = lStack_400;
      lStack_458 = lStack_3f8;
      lVar7 = func_0x00010147c3f4(&lStack_460,&UNK_108cab6db,0x1c,lVar15,plVar12[1]);
      if ((lVar7 == 0) &&
         (lVar7 = func_0x00010147c3f4(&lStack_460,&UNK_108cab6f7,0x1b,plVar12[2],plVar12[3]),
         lVar7 == 0)) {
        if (lStack_460 == -0x8000000000000000) {
          lStack_400 = 10;
          lVar7 = func_0x000108a4a0f8(&lStack_400,0,0);
        }
        else {
          lVar7 = func_0x0001006384d0(&lStack_460,&UNK_108cdca50,0x10,(char)plVar12[4]);
          if (lVar7 == 0) {
            uStack_3d8 = uStack_438;
            uStack_3e0 = uStack_440;
            uStack_3c8 = uStack_428;
            uStack_3d0 = uStack_430;
            uStack_3b8 = uStack_418;
            uStack_3c0 = uStack_420;
            uStack_3a8 = uStack_408;
            uStack_3b0 = uStack_410;
            lStack_3f8 = lStack_458;
            lStack_400 = lStack_460;
            uStack_3e8 = uStack_448;
            uStack_3f0 = uStack_450;
            __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                      (&lStack_4a8,&lStack_400);
            lVar7 = lStack_4a0;
            if (lStack_4a8 != -0x7ffffffffffffffb) goto LAB_10146e434;
            goto LAB_10146e5b8;
          }
        }
      }
      FUN_100e040f0(&lStack_460);
    }
LAB_10146e5b8:
    _free(lStack_4b8);
    return lVar7;
  }
  uVar11 = func_0x0001087c9084(1,0xe);
  FUN_100e040f0(&lStack_460);
  _free(lStack_4b8);
  auVar19 = __Unwind_Resume(uVar11);
  pbVar13 = auVar19._8_8_;
  plVar8 = auVar19._0_8_;
  if (*plVar8 == -0x8000000000000000) {
    lStack_630 = 10;
    lVar15 = func_0x000108a4a0f8(&lStack_630,0,0);
    return lVar15;
  }
  puVar9 = (undefined8 *)_malloc(8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,8);
    goto LAB_10146ed40;
  }
  *puVar9 = 0x656d69746c616572;
  if (plVar8[9] != -0x8000000000000000 && plVar8[9] != 0) {
    _free(plVar8[10]);
  }
  plVar8[10] = (long)puVar9;
  plVar8[0xb] = 8;
  plVar8[9] = -0x8000000000000000;
  lStack_698 = plVar8[0xb];
  lStack_6a0 = plVar8[10];
  uStack_6a8 = 8;
  bVar2 = *pbVar13;
  if (bVar2 == 3) {
    lStack_570 = -0x8000000000000000;
LAB_10146e71c:
    FUN_101497a9c(&lStack_630,plVar8,&uStack_6a8,&lStack_570);
    lStack_688 = uStack_620;
    lStack_690 = lStack_628;
    uStack_678 = uStack_610;
    uStack_680 = uStack_618;
    uStack_668 = uStack_600;
    uStack_670 = uStack_608;
    uStack_658 = uStack_5f0;
    uStack_660 = uStack_5f8;
    lStack_650 = lStack_5e8;
    if (lStack_628 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_690);
    }
    lVar15 = 0;
  }
  else {
    pauVar10 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar10[1][0] == '\x01') {
      auVar19 = *pauVar10;
    }
    else {
      auVar19 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar10 + 8) = auVar19._8_8_;
      pauVar10[1][0] = 1;
    }
    *(long *)*pauVar10 = auVar19._0_8_ + 1;
    FUN_105dc99f8(&lStack_630,4,auVar19._0_8_,auVar19._8_8_);
    lStack_5e8 = -0x8000000000000000;
    lVar15 = lStack_628;
    if (lStack_630 != -0x7fffffffffffffff) {
      uStack_658 = uStack_5f8;
      uStack_660 = uStack_600;
      lStack_648 = -0x8000000000000000;
      lStack_650 = uStack_5f0;
      uStack_638 = uStack_5d8;
      puStack_640 = puStack_5e0;
      uStack_678 = uStack_618;
      uStack_680 = uStack_620;
      uStack_668 = uStack_608;
      uStack_670 = uStack_610;
      lStack_690 = lStack_630;
      lStack_688 = lStack_628;
      if (lStack_630 == -0x8000000000000000) {
LAB_10146eba0:
        lStack_630 = 10;
        lVar15 = func_0x000108a4a0f8(&lStack_630,0,0);
LAB_10146ebbc:
        FUN_100e040f0(&lStack_690);
      }
      else {
        plVar16 = (long *)0x7;
        puVar9 = (undefined8 *)_malloc(7);
        if (puVar9 == (undefined8 *)0x0) {
LAB_10146ed40:
          func_0x0001087c9084(1,plVar16);
LAB_10146ed7c:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10146ed80);
          (*pcVar6)();
        }
        *(undefined4 *)((long)puVar9 + 3) = 0x6e6f6973;
        *(undefined4 *)puVar9 = 0x73726576;
        lVar15 = -0x8000000000000000;
        if ((lStack_648 != -0x8000000000000000) && (lStack_648 != 0)) {
          _free(puStack_640);
        }
        uStack_638 = 7;
        lStack_648 = -0x8000000000000000;
        uStack_578 = 7;
        uStack_588 = 7;
        puStack_640 = puVar9;
        puStack_580 = puVar9;
        if (bVar2 != 2) {
          puVar9 = (undefined8 *)_malloc(2);
          if (puVar9 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,2);
            goto LAB_10146ed7c;
          }
          uVar14 = 0x3276;
          if ((bVar2 & 1) == 0) {
            uVar14 = 0x3176;
          }
          *(undefined2 *)puVar9 = uVar14;
          lVar15 = -0x7ffffffffffffffd;
        }
        lStack_568 = 2;
        uStack_558 = 2;
        lStack_570 = lVar15;
        puStack_560 = puVar9;
        FUN_101497a9c(&lStack_630,&lStack_690,&uStack_588,&lStack_570);
        uStack_5c8 = uStack_620;
        lStack_5d0 = lStack_628;
        uStack_5b8 = uStack_610;
        uStack_5c0 = uStack_618;
        uStack_5a8 = uStack_600;
        uStack_5b0 = uStack_608;
        uStack_598 = uStack_5f0;
        uStack_5a0 = uStack_5f8;
        lStack_590 = lStack_5e8;
        if (lStack_628 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_5d0);
        }
        if (lStack_690 == -0x8000000000000000) goto LAB_10146eba0;
        bVar2 = pbVar13[1];
        plVar16 = (long *)0x4;
        puVar9 = (undefined8 *)_malloc(4);
        if (puVar9 == (undefined8 *)0x0) goto LAB_10146ed40;
        *(undefined4 *)puVar9 = 0x65707974;
        if ((lStack_648 != -0x8000000000000000) && (lStack_648 != 0)) {
          _free(puStack_640);
        }
        uVar11 = 4;
        uStack_638 = 4;
        lStack_648 = -0x8000000000000000;
        uStack_578 = 4;
        uStack_588 = 4;
        puStack_640 = puVar9;
        puStack_580 = puVar9;
        if (bVar2 == 2) {
          lStack_570 = -0x8000000000000000;
          lStack_568 = -0x8000000000000000;
        }
        else if ((bVar2 & 1) == 0) {
          uVar11 = 0xe;
          puVar9 = (undefined8 *)_malloc(0xe);
          if (puVar9 == (undefined8 *)0x0) goto LAB_10146ed60;
          *puVar9 = 0x61737265766e6f63;
          *(undefined8 *)((long)puVar9 + 6) = 0x6c616e6f69746173;
          lStack_568 = 0xe;
          lStack_570 = -0x7ffffffffffffffd;
          uVar11 = 0xe;
        }
        else {
          uVar11 = 0xd;
          puVar9 = (undefined8 *)_malloc(0xd);
          if (puVar9 == (undefined8 *)0x0) {
LAB_10146ed60:
            func_0x0001087c9084(1,uVar11);
            goto LAB_10146ed7c;
          }
          *puVar9 = 0x697263736e617274;
          *(undefined8 *)((long)puVar9 + 5) = 0x6e6f697470697263;
          lStack_568 = 0xd;
          lStack_570 = -0x7ffffffffffffffd;
          uVar11 = 0xd;
        }
        puStack_560 = puVar9;
        uStack_558 = uVar11;
        FUN_101497a9c(&lStack_630,&lStack_690,&uStack_588,&lStack_570);
        uStack_5c8 = uStack_620;
        lStack_5d0 = lStack_628;
        uStack_5b8 = uStack_610;
        uStack_5c0 = uStack_618;
        uStack_5a8 = uStack_600;
        uStack_5b0 = uStack_608;
        uStack_598 = uStack_5f0;
        uStack_5a0 = uStack_5f8;
        lStack_590 = lStack_5e8;
        if (lStack_628 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_5d0);
        }
        if (lStack_690 == -0x8000000000000000) goto LAB_10146eba0;
        bVar2 = pbVar13[2];
        plVar16 = (long *)0x9;
        puVar9 = (undefined8 *)_malloc(9);
        if (puVar9 == (undefined8 *)0x0) goto LAB_10146ed40;
        *(undefined1 *)(puVar9 + 1) = 0x74;
        *puVar9 = 0x726f70736e617274;
        if ((lStack_648 != -0x8000000000000000) && (lStack_648 != 0)) {
          _free(puStack_640);
        }
        uVar11 = 9;
        uStack_638 = 9;
        lStack_648 = -0x8000000000000000;
        uStack_578 = 9;
        uStack_588 = 9;
        puStack_640 = puVar9;
        puStack_580 = puVar9;
        if (bVar2 == 2) {
          lStack_570 = -0x8000000000000000;
          lStack_568 = -0x8000000000000000;
        }
        else if ((bVar2 & 1) == 0) {
          uVar11 = 6;
          puVar9 = (undefined8 *)_malloc(6);
          if (puVar9 == (undefined8 *)0x0) goto LAB_10146ed70;
          *(undefined2 *)((long)puVar9 + 4) = 0x6374;
          *(undefined4 *)puVar9 = 0x72626577;
          lStack_568 = 6;
          lStack_570 = -0x7ffffffffffffffd;
          uVar11 = 6;
        }
        else {
          uVar11 = 9;
          puVar9 = (undefined8 *)_malloc(9);
          if (puVar9 == (undefined8 *)0x0) {
LAB_10146ed70:
            func_0x0001087c9084(1,uVar11);
            goto LAB_10146ed7c;
          }
          *(undefined1 *)(puVar9 + 1) = 0x74;
          *puVar9 = 0x656b636f73626577;
          lStack_568 = 9;
          lStack_570 = -0x7ffffffffffffffd;
          uVar11 = 9;
        }
        puStack_560 = puVar9;
        uStack_558 = uVar11;
        FUN_101497a9c(&lStack_630,&lStack_690,&uStack_588,&lStack_570);
        uStack_5c8 = uStack_620;
        lStack_5d0 = lStack_628;
        uStack_5b8 = uStack_610;
        uStack_5c0 = uStack_618;
        uStack_5a8 = uStack_600;
        uStack_5b0 = uStack_608;
        uStack_598 = uStack_5f0;
        uStack_5a0 = uStack_5f8;
        lStack_590 = lStack_5e8;
        if (lStack_628 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_5d0);
        }
        if (lStack_690 == -0x8000000000000000) goto LAB_10146eba0;
        bVar2 = pbVar13[3];
        plVar16 = (long *)0x5;
        puVar9 = (undefined8 *)_malloc(5);
        if (puVar9 == (undefined8 *)0x0) goto LAB_10146ed40;
        *(undefined1 *)((long)puVar9 + 4) = 0x65;
        *(undefined4 *)puVar9 = 0x63696f76;
        if ((lStack_648 != -0x8000000000000000) && (lStack_648 != 0)) {
          _free(puStack_640);
        }
        uStack_638 = 5;
        lStack_648 = -0x8000000000000000;
        uStack_578 = 5;
        uStack_588 = 5;
        puStack_640 = puVar9;
        puStack_580 = puVar9;
        if (bVar2 == 0x13) {
          lStack_570 = -0x8000000000000000;
        }
        else {
          FUN_1007dc9dc(&lStack_570,bVar2);
          lVar15 = lStack_568;
          if (lStack_570 == -0x7ffffffffffffffb) {
            _free(puStack_580);
            goto LAB_10146ebbc;
          }
        }
        FUN_101497a9c(&lStack_630,&lStack_690,&uStack_588,&lStack_570);
        uStack_5c8 = uStack_620;
        lStack_5d0 = lStack_628;
        uStack_5b8 = uStack_610;
        uStack_5c0 = uStack_618;
        uStack_5a8 = uStack_600;
        uStack_5b0 = uStack_608;
        uStack_598 = uStack_5f0;
        uStack_5a0 = uStack_5f8;
        lStack_590 = lStack_5e8;
        if (lStack_628 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_5d0);
        }
        uStack_5f8 = uStack_658;
        uStack_600 = uStack_660;
        lStack_5e8 = lStack_648;
        uStack_5f0 = lStack_650;
        uStack_5d8 = uStack_638;
        puStack_5e0 = puStack_640;
        lStack_628 = lStack_688;
        lStack_630 = lStack_690;
        uStack_618 = uStack_678;
        uStack_620 = uStack_680;
        uStack_608 = uStack_668;
        uStack_610 = uStack_670;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (&lStack_570,&lStack_630);
        lVar15 = lStack_568;
        if (lStack_570 != -0x7ffffffffffffffb) goto LAB_10146e71c;
      }
    }
    _free(lStack_6a0);
  }
  return lVar15;
}

