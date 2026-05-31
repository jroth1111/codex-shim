
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10148b744(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  ushort *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  long lStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_680;
  long lStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  undefined8 uStack_540;
  long lStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_450;
  long lStack_448;
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
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  undefined4 *puStack_328;
  undefined4 *puStack_320;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  long lStack_2e0;
  ulong uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined4 *puStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  long lStack_280;
  ulong uStack_278;
  long lStack_270;
  undefined4 *puStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  long lStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  undefined4 *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
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
    lVar18 = func_0x000108a4a0f8(&uStack_a0,0,0);
    return lVar18;
  }
  lVar18 = param_3;
  lVar5 = _malloc(param_3);
  if (lVar5 != 0) {
    _memcpy(lVar5,param_2,param_3);
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = lVar5;
    param_1[0xb] = param_3;
    param_1[9] = -0x8000000000000000;
    lStack_f8 = param_1[0xb];
    lStack_100 = param_1[10];
    uStack_e8 = 0;
    uStack_f0 = 0x8000000000000002;
    lStack_108 = param_3;
    lStack_e0 = param_4;
    FUN_101497a9c(&uStack_a0,param_1,&lStack_108,&uStack_f0);
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
  auVar21 = func_0x0001087c9084(1,param_3);
  piVar10 = auVar21._8_8_;
  plVar6 = auVar21._0_8_;
  if (*plVar6 == -0x8000000000000000) {
    lStack_2d0 = 10;
    lVar18 = func_0x000108a4a0f8(&lStack_2d0,0,0);
    return lVar18;
  }
  puVar7 = (undefined4 *)_malloc(7);
  if (puVar7 == (undefined4 *)0x0) {
    uVar11 = func_0x0001087c9084(1,7);
    _free(lStack_340);
    uVar11 = __Unwind_Resume(uVar11);
    if (param_4 != 0) {
      _free(lStack_220);
    }
    FUN_100e040f0(&lStack_330);
    _free(lStack_340);
    __Unwind_Resume(uVar11);
    auVar21 = func_0x000108a07bc4();
    lVar5 = auVar21._8_8_;
    plVar6 = auVar21._0_8_;
    if (*plVar6 == -0x8000000000000000) {
      lStack_3f0 = 10;
      lVar18 = func_0x000108a4a0f8(&lStack_3f0,0,0);
      return lVar18;
    }
    puVar7 = (undefined4 *)_malloc(4);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0x7473696c;
      if (plVar6[9] != -0x8000000000000000 && plVar6[9] != 0) {
        _free(plVar6[10]);
      }
      plVar6[10] = (long)puVar7;
      plVar6[0xb] = 4;
      plVar6[9] = -0x8000000000000000;
      lStack_4a0 = plVar6[0xb];
      lStack_4a8 = plVar6[10];
      uStack_4b0 = 4;
      pauVar8 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar8[1][0] == '\x01') {
        auVar21 = *pauVar8;
      }
      else {
        auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar8 + 8) = auVar21._8_8_;
        pauVar8[1][0] = 1;
      }
      *(long *)*pauVar8 = auVar21._0_8_ + 1;
      FUN_105dc99f8(&lStack_3f0,10,auVar21._0_8_,auVar21._8_8_);
      uStack_3a8 = 0x8000000000000000;
      lVar18 = lStack_3e8;
      if (lStack_3f0 != -0x7fffffffffffffff) {
        uStack_418 = uStack_3b8;
        uStack_420 = uStack_3c0;
        uStack_408 = 0x8000000000000000;
        uStack_410 = uStack_3b0;
        uStack_3f8 = uStack_398;
        uStack_400 = uStack_3a0;
        uStack_438 = uStack_3d8;
        uStack_440 = uStack_3e0;
        uStack_428 = uStack_3c8;
        uStack_430 = uStack_3d0;
        lStack_450 = lStack_3f0;
        lStack_448 = lStack_3e8;
        lVar18 = FUN_1014788c0(&lStack_450,&UNK_108cab321,7,lVar5);
        if ((((((lVar18 == 0) &&
               (lVar18 = FUN_1014788c0(&lStack_450,&UNK_108cab328,9,lVar5 + 0x20), lVar18 == 0)) &&
              (lVar18 = FUN_1014788c0(&lStack_450,&UNK_108cab30e,9,lVar5 + 0x40), lVar18 == 0)) &&
             (((lVar18 = FUN_1014788c0(&lStack_450,&UNK_108cab317,10,lVar5 + 0x60), lVar18 == 0 &&
               (lVar18 = FUN_1014788c0(&lStack_450,&UNK_108cab4d7,7,lVar5 + 0x80), lVar18 == 0)) &&
              ((lVar18 = FUN_1014788c0(&lStack_450,&UNK_108cab4de,9,lVar5 + 0xa0), lVar18 == 0 &&
               ((lVar18 = FUN_1014788c0(&lStack_450,&UNK_108c981b8,8,lVar5 + 0xc0), lVar18 == 0 &&
                (lVar18 = FUN_1014788c0(&lStack_450,&UNK_108cab4e7,0xb,lVar5 + 0xe0), lVar18 == 0)))
               ))))) &&
            (lVar18 = FUN_1014788c0(&lStack_450,&UNK_108cab4f2,6,lVar5 + 0x100), lVar18 == 0)) &&
           (lVar18 = FUN_1014788c0(&lStack_450,&UNK_108cab265,6,lVar5 + 0x120), lVar18 == 0)) {
          uStack_3c8 = uStack_428;
          uStack_3d0 = uStack_430;
          uStack_3b8 = uStack_418;
          uStack_3c0 = uStack_420;
          uStack_3a8 = uStack_408;
          uStack_3b0 = uStack_410;
          uStack_398 = uStack_3f8;
          uStack_3a0 = uStack_400;
          lStack_3e8 = lStack_448;
          lStack_3f0 = lStack_450;
          uStack_3d8 = uStack_438;
          uStack_3e0 = uStack_440;
          __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                    (&lStack_498,&lStack_3f0);
          lVar18 = lStack_490;
          if (lStack_498 != -0x7ffffffffffffffb) {
            FUN_101497a9c(&lStack_3f0,plVar6,&uStack_4b0,&lStack_498);
            lStack_448 = uStack_3e0;
            lStack_450 = lStack_3e8;
            uStack_438 = uStack_3d0;
            uStack_440 = uStack_3d8;
            uStack_428 = uStack_3c0;
            uStack_430 = uStack_3c8;
            uStack_418 = uStack_3b0;
            uStack_420 = uStack_3b8;
            uStack_410 = uStack_3a8;
            if (lStack_3e8 != -0x7ffffffffffffffb) {
              FUN_100de6690(&lStack_450);
            }
            return 0;
          }
        }
        else {
          FUN_100e040f0(&lStack_450);
        }
      }
      _free(lStack_4a8);
      return lVar18;
    }
    uVar11 = func_0x0001087c9084(1,4);
    FUN_100e040f0(&lStack_450);
    _free(lStack_4a8);
    auVar21 = __Unwind_Resume(uVar11);
    plVar6 = auVar21._0_8_;
    if (*plVar6 == -0x8000000000000000) {
      uStack_540 = 10;
      lVar18 = func_0x000108a4a0f8(&uStack_540,0,0);
      return lVar18;
    }
    puVar9 = (undefined8 *)_malloc(8);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0x6e6f697461727564;
      if (plVar6[9] != -0x8000000000000000 && plVar6[9] != 0) {
        _free(plVar6[10]);
      }
      plVar6[10] = (long)puVar9;
      plVar6[0xb] = 8;
      plVar6[9] = -0x8000000000000000;
      lStack_590 = plVar6[0xb];
      lStack_598 = plVar6[10];
      uStack_5a0 = 8;
      FUN_10064c3a8(&lStack_588,auVar21._8_8_,lVar18);
      if (lStack_588 == -0x7ffffffffffffffb) {
        _free(lStack_598);
        return lStack_580;
      }
      FUN_101497a9c(&uStack_540,plVar6,&uStack_5a0,&lStack_588);
      uStack_5e8 = uStack_530;
      lStack_5f0 = lStack_538;
      uStack_5d8 = uStack_520;
      uStack_5e0 = uStack_528;
      uStack_5c8 = uStack_510;
      uStack_5d0 = uStack_518;
      uStack_5b8 = uStack_500;
      uStack_5c0 = uStack_508;
      uStack_5b0 = uStack_4f8;
      if (lStack_538 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_5f0);
      }
      return 0;
    }
    uVar11 = func_0x0001087c9084(1,8);
    _free(lStack_598);
    auVar21 = __Unwind_Resume(uVar11);
    uVar16 = auVar21._8_8_;
    plVar6 = auVar21._0_8_;
    if (*plVar6 == -0x8000000000000000) {
      uStack_680 = 10;
      lVar18 = func_0x000108a4a0f8(&uStack_680,0,0);
      return lVar18;
    }
    puVar7 = (undefined4 *)_malloc(6);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
      goto LAB_10148c514;
    }
    *(undefined2 *)(puVar7 + 1) = 0x7375;
    *puVar7 = 0x74617473;
    if (plVar6[9] != -0x8000000000000000 && plVar6[9] != 0) {
      _free(plVar6[10]);
    }
    plVar6[10] = (long)puVar7;
    plVar6[0xb] = 6;
    plVar6[9] = -0x8000000000000000;
    lStack_6d0 = plVar6[0xb];
    lStack_6d8 = plVar6[10];
    uStack_6e0 = 6;
    uVar2 = auVar21._8_4_ & 0xff;
    if (uVar2 == 1 || (uVar16 & 0xff) == 0) {
      if ((uVar16 & 0xff) != 0) {
        uVar16 = 9;
        puStack_6b8 = (undefined8 *)_malloc(9);
        if (puStack_6b8 != (undefined8 *)0x0) {
          *(undefined1 *)(puStack_6b8 + 1) = 100;
          *puStack_6b8 = 0x6574656c706d6f63;
          uStack_6c0 = 9;
          goto LAB_10148c470;
        }
LAB_10148c514:
        func_0x0001087c9084(1,uVar16);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10148c524);
        (*pcVar4)();
      }
      uVar16 = 7;
      puStack_6b8 = (undefined8 *)_malloc(7);
      if (puStack_6b8 == (undefined8 *)0x0) goto LAB_10148c514;
      *(undefined4 *)((long)puStack_6b8 + 3) = 0x676e696e;
      uVar13 = 0x6e6e7572;
    }
    else {
      if (uVar2 == 2) {
        uVar16 = 6;
        puStack_6b8 = (undefined8 *)_malloc(6);
        if (puStack_6b8 == (undefined8 *)0x0) goto LAB_10148c514;
        *(undefined2 *)((long)puStack_6b8 + 4) = 0x6465;
        *(undefined4 *)puStack_6b8 = 0x6c696166;
        uStack_6c0 = 6;
        goto LAB_10148c470;
      }
      uVar16 = 7;
      if (uVar2 == 3) {
        puStack_6b8 = (undefined8 *)_malloc(7);
        if (puStack_6b8 == (undefined8 *)0x0) goto LAB_10148c514;
        *(undefined4 *)((long)puStack_6b8 + 3) = 0x64656b63;
        uVar13 = 0x636f6c62;
      }
      else {
        puStack_6b8 = (undefined8 *)_malloc(7);
        if (puStack_6b8 == (undefined8 *)0x0) goto LAB_10148c514;
        *(undefined4 *)((long)puStack_6b8 + 3) = 0x64657070;
        uVar13 = 0x706f7473;
      }
    }
    *(undefined4 *)puStack_6b8 = uVar13;
    uStack_6c0 = 7;
LAB_10148c470:
    uStack_6c8 = 0x8000000000000003;
    uStack_6b0 = uStack_6c0;
    FUN_101497a9c(&uStack_680,plVar6,&uStack_6e0,&uStack_6c8);
    uStack_728 = uStack_670;
    lStack_730 = lStack_678;
    uStack_718 = uStack_660;
    uStack_720 = uStack_668;
    uStack_708 = uStack_650;
    uStack_710 = uStack_658;
    uStack_6f8 = uStack_640;
    uStack_700 = uStack_648;
    uStack_6f0 = uStack_638;
    if (lStack_678 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_730);
    }
    return 0;
  }
  *(undefined4 *)((long)puVar7 + 3) = 0x736e6961;
  *puVar7 = 0x616d6f64;
  if (plVar6[9] != -0x8000000000000000 && plVar6[9] != 0) {
    _free(plVar6[10]);
  }
  plVar6[10] = (long)puVar7;
  plVar6[0xb] = 7;
  plVar6[9] = -0x8000000000000000;
  lStack_338 = plVar6[0xb];
  lStack_340 = plVar6[10];
  uStack_348 = 7;
  if (*piVar10 == 1) {
    pauVar8 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar8[1][0] == '\x01') {
      auVar21 = *pauVar8;
    }
    else {
      auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar8 + 8) = auVar21._8_8_;
      pauVar8[1][0] = 1;
    }
    *(long *)*pauVar8 = auVar21._0_8_ + 1;
    FUN_105dc99f8(&lStack_2d0,0,auVar21._0_8_,auVar21._8_8_);
    uStack_288 = 0x8000000000000000;
    puVar7 = (undefined4 *)lStack_2c8;
    if (lStack_2d0 != -0x7fffffffffffffff) {
      uStack_2f8 = uStack_298;
      uStack_300 = uStack_2a0;
      uStack_2e8 = 0x8000000000000000;
      uStack_2f0 = uStack_290;
      uStack_2d8 = uStack_278;
      lStack_2e0 = lStack_280;
      lStack_318 = lStack_2b8;
      puStack_320 = puStack_2c0;
      uStack_308 = uStack_2a8;
      uStack_310 = uStack_2b0;
      lStack_330 = lStack_2d0;
      puStack_328 = (undefined4 *)lStack_2c8;
      plVar14 = *(long **)(piVar10 + 2);
      if ((plVar14 != (long *)0x0) && (lVar18 = *(long *)(piVar10 + 6), lVar18 != 0)) {
        uVar16 = *(ulong *)(piVar10 + 4);
        plVar15 = (long *)0x0;
        do {
          if (plVar15 == (long *)0x0) {
            for (; plVar15 = plVar14, uVar16 != 0; uVar16 = uVar16 - 1) {
              plVar14 = (long *)plVar15[0x24];
            }
            plVar14 = (long *)0x0;
            uVar16 = 0;
            plVar20 = plVar15;
            if (*(short *)((long)plVar15 + 0x112) == 0) goto LAB_10148ba00;
          }
          else {
            plVar20 = plVar15;
            if (*(ushort *)((long)plVar15 + 0x112) <= uVar16) {
LAB_10148ba00:
              do {
                plVar15 = (long *)*plVar20;
                if (plVar15 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b2382c8);
                  goto LAB_10148bda4;
                }
                plVar14 = (long *)((long)plVar14 + 1);
                puVar1 = (ushort *)(plVar20 + 0x22);
                uVar16 = (ulong)*puVar1;
                plVar20 = plVar15;
              } while (*(ushort *)((long)plVar15 + 0x112) <= *puVar1);
            }
          }
          uVar19 = uVar16 + 1;
          if (plVar14 == (long *)0x0) {
            plVar20 = plVar15;
            if (lStack_330 != -0x8000000000000000) goto LAB_10148ba64;
LAB_10148bd00:
            puVar12 = &UNK_10b24c5c0;
LAB_10148bd14:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar12);
            goto LAB_10148bda4;
          }
          plVar20 = plVar15 + uVar19;
          do {
            plVar20 = (long *)plVar20[0x24];
            plVar14 = (long *)((long)plVar14 + -1);
          } while (plVar14 != (long *)0x0);
          uVar19 = 0;
          if (lStack_330 == -0x8000000000000000) goto LAB_10148bd00;
LAB_10148ba64:
          bVar3 = *(byte *)((long)plVar15 + uVar16 + 0x114);
          uVar17 = plVar15[uVar16 * 3 + 3];
          if (uVar17 == 0) {
            puVar7 = (undefined4 *)0x1;
          }
          else {
            lVar5 = plVar15[uVar16 * 3 + 2];
            puVar7 = (undefined4 *)_malloc(uVar17);
            if (puVar7 == (undefined4 *)0x0) {
              func_0x0001087c9084(1,uVar17);
              goto LAB_10148bda4;
            }
            _memcpy(puVar7,lVar5,uVar17);
            if (uVar17 == 0x8000000000000000) {
              FUN_100e040f0(&lStack_330);
              goto LAB_10148bcd4;
            }
          }
          if (((uStack_2e8 != 0x8000000000000000) && (uStack_2e8 != 0)) &&
             (_free(lStack_2e0), lStack_330 == -0x8000000000000000)) {
            puVar12 = &UNK_10b24c5f0;
            uStack_2e8 = uVar17;
            lStack_2e0 = (long)puVar7;
            uStack_2d8 = uVar17;
            goto LAB_10148bd14;
          }
          uStack_2e8 = 0x8000000000000000;
          if (uVar17 == 0x8000000000000000) {
            lStack_2e0 = (long)puVar7;
            uStack_2d8 = uVar17;
            func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
            goto LAB_10148bda4;
          }
          uStack_228 = uVar17;
          lStack_220 = (long)puVar7;
          uStack_218 = uVar17;
          if ((bVar3 & 1) == 0) {
            lStack_2e0 = (long)puVar7;
            uStack_2d8 = uVar17;
            puVar7 = (undefined4 *)_malloc(5);
            uVar11 = 5;
            if (puVar7 == (undefined4 *)0x0) goto LAB_10148bd8c;
            *(undefined1 *)(puVar7 + 1) = 0x77;
            *puVar7 = 0x6f6c6c61;
            lStack_208 = 5;
          }
          else {
            lStack_2e0 = (long)puVar7;
            uStack_2d8 = uVar17;
            puVar7 = (undefined4 *)_malloc(4);
            uVar11 = 4;
            if (puVar7 == (undefined4 *)0x0) {
LAB_10148bd8c:
              func_0x0001087c9084(1,uVar11);
              goto LAB_10148bda4;
            }
            *puVar7 = 0x796e6564;
            lStack_208 = 4;
          }
          lStack_210 = -0x7ffffffffffffffd;
          puStack_200 = puVar7;
          lStack_1f8 = lStack_208;
          FUN_101497a9c(&lStack_2d0,&lStack_330,&uStack_228,&lStack_210);
          puStack_268 = puStack_2c0;
          lStack_270 = lStack_2c8;
          uStack_258 = uStack_2b0;
          lStack_260 = lStack_2b8;
          uStack_248 = uStack_2a0;
          uStack_250 = uStack_2a8;
          uStack_238 = uStack_290;
          uStack_240 = uStack_298;
          uStack_230 = uStack_288;
          if (lStack_2c8 != -0x7ffffffffffffffb) {
            FUN_100de6690(&lStack_270);
          }
          plVar14 = (long *)0x0;
          lVar18 = lVar18 + -1;
          uVar16 = uVar19;
          plVar15 = plVar20;
        } while (lVar18 != 0);
      }
      lStack_2c8 = (long)puStack_328;
      lStack_2d0 = lStack_330;
      uStack_298 = uStack_2f8;
      uStack_2a0 = uStack_300;
      uStack_288 = uStack_2e8;
      uStack_290 = uStack_2f0;
      uStack_278 = uStack_2d8;
      lStack_280 = lStack_2e0;
      lStack_2b8 = lStack_318;
      puStack_2c0 = puStack_320;
      uStack_2a8 = uStack_308;
      uStack_2b0 = uStack_310;
      if (lStack_330 == -0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_10148bda4:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10148bda8);
        (*pcVar4)();
      }
      uStack_1e8 = uStack_308;
      uStack_1f0 = uStack_310;
      uStack_1d8 = uStack_2f8;
      uStack_1e0 = uStack_300;
      uStack_1d0 = uStack_2f0;
      lStack_208 = (long)puStack_328;
      lStack_210 = lStack_330;
      lStack_1f8 = lStack_318;
      puStack_200 = puStack_320;
      puVar7 = puStack_328;
      if ((uStack_2e8 & 0x7fffffffffffffff) != 0) {
        _free(lStack_2e0);
        puVar7 = (undefined4 *)lStack_208;
      }
      lStack_208 = (long)puVar7;
      if (lStack_210 != -0x7ffffffffffffffb) goto LAB_10148bbc4;
    }
LAB_10148bcd4:
    _free(lStack_340);
  }
  else {
    lStack_210 = -0x8000000000000000;
LAB_10148bbc4:
    FUN_101497a9c(&lStack_2d0,plVar6,&uStack_348,&lStack_210);
    puStack_328 = puStack_2c0;
    lStack_330 = lStack_2c8;
    lStack_318 = uStack_2b0;
    puStack_320 = (undefined4 *)lStack_2b8;
    uStack_308 = uStack_2a0;
    uStack_310 = uStack_2a8;
    uStack_2f8 = uStack_290;
    uStack_300 = uStack_298;
    uStack_2f0 = uStack_288;
    if (lStack_2c8 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_330);
    }
    puVar7 = (undefined4 *)0x0;
  }
  return (long)puVar7;
}

