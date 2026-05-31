
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101471c8c(long *param_1,undefined8 param_2)

{
  ushort *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  int *piVar13;
  undefined *puVar14;
  ulong *puVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long unaff_x22;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  ulong uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  ulong uStack_638;
  long lStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  undefined1 (*pauStack_580) [16];
  undefined8 uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  undefined8 uStack_528;
  undefined1 (*pauStack_520) [16];
  undefined8 uStack_518;
  undefined8 uStack_498;
  long lStack_490;
  long lStack_488;
  ulong uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_90 = 10;
    uVar16 = func_0x000108a4a0f8(&uStack_90,0,0);
    return uVar16;
  }
  puVar4 = (undefined4 *)_malloc(4);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x6d657469;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar4;
    param_1[0xb] = 4;
    param_1[9] = -0x8000000000000000;
    lStack_e0 = param_1[0xb];
    lStack_e8 = param_1[10];
    uStack_f0 = 4;
    func_0x00010079936c(&lStack_d8,param_2);
    if (lStack_d8 == -0x7ffffffffffffffb) {
      _free(lStack_e8);
      return uStack_d0;
    }
    FUN_101497a9c(&uStack_90,param_1,&uStack_f0,&lStack_d8);
    uStack_138 = uStack_80;
    lStack_140 = lStack_88;
    uStack_128 = uStack_70;
    uStack_130 = uStack_78;
    uStack_118 = uStack_60;
    uStack_120 = uStack_68;
    uStack_108 = uStack_50;
    uStack_110 = uStack_58;
    uStack_100 = uStack_48;
    if (lStack_88 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_140);
    }
    return 0;
  }
  uVar5 = func_0x0001087c9084(1,4);
  _free(lStack_e8);
  auVar23 = __Unwind_Resume(uVar5);
  plVar19 = auVar23._8_8_;
  plVar6 = auVar23._0_8_;
  if (*plVar6 == -0x8000000000000000) {
    uStack_1e0 = 10;
    uVar16 = func_0x000108a4a0f8(&uStack_1e0,0,0);
    return uVar16;
  }
  puVar4 = (undefined4 *)_malloc(5);
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar4 + 1) = 0x72;
    *puVar4 = 0x6f727265;
    if (plVar6[9] != -0x8000000000000000 && plVar6[9] != 0) {
      _free(plVar6[10]);
    }
    plVar6[10] = (long)puVar4;
    plVar6[0xb] = 5;
    plVar6[9] = -0x8000000000000000;
    lStack_290 = plVar6[0xb];
    lStack_298 = plVar6[10];
    uStack_2a0 = 5;
    if (*plVar19 == -0x8000000000000000) {
      uStack_288 = 0x8000000000000000;
LAB_101471e94:
      FUN_101497a9c(&uStack_1e0,plVar6,&uStack_2a0,&uStack_288);
      uStack_238 = uStack_1d0;
      uStack_240 = uStack_1d8;
      uStack_228 = uStack_1c0;
      uStack_230 = uStack_1c8;
      uStack_218 = uStack_1b0;
      uStack_220 = uStack_1b8;
      uStack_208 = uStack_1a0;
      uStack_210 = uStack_1a8;
      uStack_200 = uStack_198;
      if (uStack_1d8 != 0x8000000000000005) {
        FUN_100de6690(&uStack_240);
      }
      uVar16 = 0;
    }
    else {
      lVar21 = plVar19[1];
      lVar22 = plVar19[2];
      pauVar7 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar7[1][0] == '\x01') {
        auVar23 = *pauVar7;
      }
      else {
        auVar23 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar7 + 8) = auVar23._8_8_;
        pauVar7[1][0] = 1;
      }
      *(long *)*pauVar7 = auVar23._0_8_ + 1;
      FUN_105dc99f8(&uStack_1e0,1,auVar23._0_8_,auVar23._8_8_);
      uStack_198 = 0x8000000000000000;
      uVar16 = uStack_1d8;
      if (uStack_1e0 != 0x8000000000000001) {
        uStack_208 = uStack_1a8;
        uStack_210 = uStack_1b0;
        uStack_1f8 = 0x8000000000000000;
        uStack_200 = uStack_1a0;
        uStack_1e8 = uStack_188;
        uStack_1f0 = uStack_190;
        uStack_228 = uStack_1c8;
        uStack_230 = uStack_1d0;
        uStack_218 = uStack_1b8;
        uStack_220 = uStack_1c0;
        uStack_240 = uStack_1e0;
        uStack_238 = uStack_1d8;
        if (uStack_1e0 == 0x8000000000000000) {
          uStack_1e0 = 10;
          uVar8 = func_0x000108a4a0f8(&uStack_1e0,0,0);
        }
        else {
          uVar8 = FUN_10063fe00(&uStack_240,&UNK_108ca1064,7,lVar21,lVar22);
          uVar16 = uStack_238;
          uVar10 = uStack_240;
          if (uVar8 == 0) {
            uStack_288 = uStack_238;
            uStack_248 = uStack_1f8;
            if (uStack_240 == 0x8000000000000000) {
              if (uStack_238 == 0x8000000000000005) {
                func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1014720b4);
                (*pcVar2)();
              }
              uStack_278 = uStack_228;
              uStack_280 = uStack_230;
              uStack_268 = uStack_218;
              uStack_270 = uStack_220;
              uStack_258 = uStack_208;
              uStack_260 = uStack_210;
              uStack_250 = uStack_200;
            }
            else {
              uStack_288 = uStack_240;
              uStack_280 = uStack_238;
              uStack_270 = uStack_228;
              uStack_278 = uStack_230;
              uStack_260 = uStack_218;
              uStack_268 = uStack_220;
              uStack_250 = uStack_208;
              uStack_258 = uStack_210;
              uStack_248 = uStack_200;
              if ((uStack_1f8 & 0x7fffffffffffffff) != 0) {
                _free(uStack_1f0);
              }
              if (uVar10 == 0x8000000000000005) goto LAB_101471fb4;
            }
            goto LAB_101471e94;
          }
        }
        uVar16 = uVar8;
        FUN_100e040f0(&uStack_240);
      }
LAB_101471fb4:
      _free(lStack_298);
    }
    return uVar16;
  }
  uVar5 = func_0x0001087c9084(1,5);
  FUN_100e040f0(&uStack_240);
  _free(lStack_298);
  auVar23 = __Unwind_Resume(uVar5);
  piVar13 = auVar23._8_8_;
  plVar6 = auVar23._0_8_;
  if (*plVar6 == -0x8000000000000000) {
    uStack_420 = 10;
    uVar16 = func_0x000108a4a0f8(&uStack_420,0,0);
    return uVar16;
  }
  puVar9 = (undefined8 *)_malloc(10);
  if (puVar9 == (undefined8 *)0x0) {
    uVar5 = func_0x0001087c9084(1,10);
    _free(lStack_490);
    uVar5 = __Unwind_Resume(uVar5);
    if (unaff_x22 != 0) {
      _free(uStack_370);
    }
    FUN_100e040f0(&uStack_480);
    _free(lStack_490);
    __Unwind_Resume(uVar5);
    auVar23 = func_0x000108a07bc4();
    plVar19 = auVar23._8_8_;
    plVar6 = auVar23._0_8_;
    if (*plVar6 == -0x8000000000000000) {
      uStack_570 = 10;
      uVar16 = func_0x000108a4a0f8(&uStack_570,0,0);
      return uVar16;
    }
    puVar4 = (undefined4 *)_malloc(7);
    if (puVar4 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,7);
      plVar17 = plVar19;
    }
    else {
      *(undefined4 *)((long)puVar4 + 3) = 0x736e6f69;
      *puVar4 = 0x6974706f;
      uVar16 = 0x8000000000000000;
      if (plVar6[9] != -0x8000000000000000 && plVar6[9] != 0) {
        _free(plVar6[10]);
      }
      plVar6[10] = (long)puVar4;
      plVar6[0xb] = 7;
      plVar6[9] = -0x8000000000000000;
      lStack_678 = plVar6[0xb];
      lStack_680 = plVar6[10];
      uStack_688 = 7;
      if (*plVar19 == -0x8000000000000000) {
        uStack_5c8 = 0x8000000000000000;
LAB_1014729a0:
        uStack_5b8 = uStack_668;
        uStack_5c0 = lStack_670;
        uStack_5a8 = uStack_658;
        uStack_5b0 = uStack_660;
        uStack_598 = uStack_648;
        uStack_5a0 = uStack_650;
        uStack_590 = uStack_640;
        uStack_5d0 = uVar16;
        FUN_101497a9c(&uStack_570,plVar6,&uStack_688,&uStack_5d0);
        uStack_618 = uStack_560;
        uStack_620 = uStack_568;
        uStack_608 = uStack_550;
        uStack_610 = uStack_558;
        uStack_5f8 = uStack_540;
        uStack_600 = uStack_548;
        uStack_5e8 = uStack_530;
        uStack_5f0 = uStack_538;
        uStack_5e0 = uStack_528;
        if (uStack_568 != 0x8000000000000005) {
          FUN_100de6690(&uStack_620);
        }
        return 0;
      }
      uVar16 = plVar19[2];
      plVar17 = (long *)(uVar16 * 0x48);
      if (0x1c71c71c71c71c7 < uVar16) {
        uVar5 = 0;
        goto LAB_10147273c;
      }
      lVar21 = plVar19[1];
      if (plVar17 == (long *)0x0) {
        lVar22 = 8;
        uVar10 = 0;
LAB_10147276c:
        uStack_628 = 0;
        uStack_638 = uVar10;
        lStack_630 = lVar22;
        pauVar11 = (undefined1 (*) [16])
                   (*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
        puVar9 = (undefined8 *)(lVar21 + 0x28);
        lVar21 = uVar16 * 0x30;
        pauVar7 = pauVar11;
        do {
          if (lVar21 == 0) {
            uStack_668 = uStack_628;
            lStack_670 = lStack_630;
            uVar16 = 0x8000000000000004;
            uStack_5c8 = uStack_638;
            goto LAB_1014729a0;
          }
          if (pauVar11[1][0] == '\x01') {
            auVar23 = *pauVar11;
          }
          else {
            auVar23 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E(pauVar7);
            *(long *)(*pauVar11 + 8) = auVar23._8_8_;
            pauVar11[1][0] = 1;
          }
          *(long *)*pauVar11 = auVar23._0_8_ + 1;
          pauVar7 = (undefined1 (*) [16])FUN_105dc99f8(&uStack_570,2,auVar23._0_8_,auVar23._8_8_);
          uStack_528 = 0x8000000000000000;
          uVar16 = uStack_568;
          if (uStack_570 != 0x8000000000000001) {
            uStack_598 = uStack_538;
            uStack_5a0 = uStack_540;
            uStack_590 = uStack_530;
            uStack_588 = 0x8000000000000000;
            uStack_578 = uStack_518;
            pauStack_580 = pauStack_520;
            uStack_5b8 = uStack_558;
            uStack_5c0 = uStack_560;
            uStack_5a8 = uStack_548;
            uStack_5b0 = uStack_550;
            uStack_5d0 = uStack_570;
            uStack_5c8 = uStack_568;
            uVar16 = 0x8000000000000000;
            if (uStack_570 == 0x8000000000000000) {
LAB_1014727a8:
              uStack_588 = uVar16;
              uStack_570 = 10;
              uVar10 = func_0x000108a4a0f8(&uStack_570,0,0);
            }
            else {
              uVar10 = FUN_10063fe00(&uStack_5d0,&UNK_108ca1b9f,5,puVar9[-4],puVar9[-3]);
              if (uVar10 == 0) {
                uVar16 = uStack_588;
                if (uStack_5d0 == 0x8000000000000000) goto LAB_1014727a8;
                uVar10 = FUN_10063fe00(&uStack_5d0,&UNK_108ca155d,0xb,puVar9[-1],*puVar9);
                uVar16 = uStack_5c8;
                uVar8 = uStack_5d0;
                if (uVar10 == 0) {
                  if (uStack_5d0 == 0x8000000000000000) {
                    if (uStack_5c8 == 0x8000000000000005) {
                      func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                      goto LAB_101472aac;
                    }
                    uStack_610 = uStack_5b8;
                    uStack_618 = uStack_5c0;
                    uStack_600 = uStack_5a8;
                    uStack_608 = uStack_5b0;
                    uStack_5f0 = uStack_598;
                    uStack_5f8 = uStack_5a0;
                    uStack_5e8 = uStack_590;
                    uStack_5e0 = uStack_588;
                    uStack_620 = uStack_5c8;
                    pauVar7 = (undefined1 (*) [16])0x0;
                  }
                  else {
                    uStack_620 = uStack_5d0;
                    uStack_618 = uStack_5c8;
                    uStack_608 = uStack_5b8;
                    uStack_610 = uStack_5c0;
                    uStack_5f8 = uStack_5a8;
                    uStack_600 = uStack_5b0;
                    uStack_5e8 = uStack_598;
                    uStack_5f0 = uStack_5a0;
                    uStack_5e0 = uStack_590;
                    pauVar7 = pauStack_580;
                    if ((uStack_588 & 0x7fffffffffffffff) != 0) {
                      pauVar7 = (undefined1 (*) [16])_free();
                    }
                    if (uVar8 == 0x8000000000000005) goto LAB_1014727cc;
                  }
                  uVar10 = uStack_628;
                  if (uStack_628 == uStack_638) {
                    pauVar7 = (undefined1 (*) [16])
                              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE
                                        (&uStack_638);
                  }
                  uVar16 = 0;
                  puVar15 = (ulong *)(lStack_630 + uVar10 * 0x48);
                  puVar15[8] = uStack_5e0;
                  puVar15[1] = uStack_618;
                  *puVar15 = uStack_620;
                  puVar15[3] = uStack_608;
                  puVar15[2] = uStack_610;
                  puVar15[5] = uStack_5f8;
                  puVar15[4] = uStack_600;
                  puVar15[7] = uStack_5e8;
                  puVar15[6] = uStack_5f0;
                  uStack_628 = uVar10 + 1;
                  goto LAB_1014727cc;
                }
              }
            }
            uVar16 = uVar10;
            pauVar7 = (undefined1 (*) [16])FUN_100e040f0(&uStack_5d0);
          }
LAB_1014727cc:
          lVar22 = lStack_630;
          puVar9 = puVar9 + 6;
          lVar21 = lVar21 + -0x30;
          if (uVar16 != 0) {
            lVar21 = uStack_628 + 1;
            lVar12 = lStack_630;
            while (lVar21 = lVar21 + -1, lVar21 != 0) {
              FUN_100de6690(lVar12);
              lVar12 = lVar12 + 0x48;
            }
            if (uStack_638 != 0) {
              _free(lVar22);
            }
            _free(lStack_680);
            return uVar16;
          }
        } while( true );
      }
      lVar22 = _malloc(plVar17);
      uVar10 = uVar16;
      if (lVar22 != 0) goto LAB_10147276c;
    }
    uVar5 = 8;
LAB_10147273c:
    func_0x0001087c9084(uVar5,plVar17);
LAB_101472aac:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101472ab0);
    (*pcVar2)();
  }
  *(undefined2 *)(puVar9 + 1) = 0x6574;
  *puVar9 = 0x6174736563617274;
  if (plVar6[9] != -0x8000000000000000 && plVar6[9] != 0) {
    _free(plVar6[10]);
  }
  plVar6[10] = (long)puVar9;
  plVar6[0xb] = 10;
  plVar6[9] = -0x8000000000000000;
  lStack_488 = plVar6[0xb];
  lStack_490 = plVar6[10];
  uStack_498 = 10;
  if (*piVar13 == 1) {
    plVar19 = *(long **)(piVar13 + 2);
    uVar16 = *(ulong *)(piVar13 + 4);
    lVar22 = *(long *)(piVar13 + 6);
    bVar3 = plVar19 != (long *)0x0;
    lVar21 = lVar22;
    if (!bVar3) {
      lVar21 = 0;
    }
    pauVar7 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar7[1][0] == '\x01') {
      auVar23 = *pauVar7;
    }
    else {
      auVar23 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar7 + 8) = auVar23._8_8_;
      pauVar7[1][0] = 1;
    }
    *(long *)*pauVar7 = auVar23._0_8_ + 1;
    FUN_105dc99f8(&uStack_420,lVar21,auVar23._0_8_,auVar23._8_8_);
    uStack_3d8 = 0x8000000000000000;
    uVar10 = uStack_418;
    if (uStack_420 != 0x8000000000000001) {
      uStack_458 = uStack_3f8;
      uStack_460 = uStack_400;
      uStack_448 = uStack_3e8;
      uStack_450 = uStack_3f0;
      uStack_438 = 0x8000000000000000;
      uStack_440 = uStack_3e0;
      uStack_428 = uStack_3c8;
      uStack_430 = uStack_3d0;
      uStack_478 = uStack_418;
      uStack_480 = uStack_420;
      uStack_468 = uStack_408;
      uStack_470 = uStack_410;
      if (lVar21 != 0) {
        plVar17 = (long *)0x0;
        do {
          if (!bVar3) {
            func_0x000108a07a20(&UNK_10b212c38);
            goto LAB_1014725f0;
          }
          plVar18 = plVar19;
          if (plVar17 == (long *)0x0) {
            for (; uVar16 != 0; uVar16 = uVar16 - 1) {
              plVar18 = (long *)plVar18[0x44];
            }
            plVar19 = (long *)0x0;
            uVar16 = 0;
            if (*(short *)((long)plVar18 + 0x21a) == 0) goto LAB_1014722e8;
          }
          else {
            plVar18 = plVar17;
            if (*(ushort *)((long)plVar17 + 0x21a) <= uVar16) {
LAB_1014722e8:
              do {
                plVar17 = (long *)*plVar18;
                if (plVar17 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b2382c8);
                  goto LAB_1014725f0;
                }
                plVar19 = (long *)((long)plVar19 + 1);
                puVar1 = (ushort *)(plVar18 + 0x43);
                uVar16 = (ulong)*puVar1;
                plVar18 = plVar17;
              } while (*(ushort *)((long)plVar17 + 0x21a) <= *puVar1);
            }
          }
          uVar8 = uVar16 + 1;
          if (plVar19 != (long *)0x0) {
            plVar17 = plVar18 + uVar8;
            do {
              plVar17 = (long *)plVar17[0x44];
              plVar19 = (long *)((long)plVar19 + -1);
            } while (plVar19 != (long *)0x0);
            uVar8 = 0;
            if (uStack_480 != 0x8000000000000000) goto LAB_10147234c;
LAB_101472548:
            puVar14 = &UNK_10b24c5c0;
LAB_10147255c:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar14);
            goto LAB_1014725f0;
          }
          plVar17 = plVar18;
          if (uStack_480 == 0x8000000000000000) goto LAB_101472548;
LAB_10147234c:
          uVar20 = plVar18[uVar16 * 3 + 3];
          if (uVar20 != 0) {
            lVar21 = plVar18[uVar16 * 3 + 2];
            uVar10 = _malloc(uVar20);
            if (uVar10 == 0) {
              func_0x0001087c9084(1,uVar20);
              goto LAB_1014725f0;
            }
            _memcpy(uVar10,lVar21,uVar20);
            if (uVar20 != 0x8000000000000000) goto joined_r0x00010147238c;
LAB_1014724f8:
            FUN_100e040f0(&uStack_480);
            goto LAB_10147251c;
          }
          uVar10 = 1;
joined_r0x00010147238c:
          if (((uStack_438 != 0x8000000000000000) && (uStack_438 != 0)) &&
             (_free(uStack_430), uStack_480 == 0x8000000000000000)) {
            puVar14 = &UNK_10b24c5f0;
            uStack_438 = uVar20;
            uStack_430 = uVar10;
            uStack_428 = uVar20;
            goto LAB_10147255c;
          }
          uStack_438 = 0x8000000000000000;
          if (uVar20 == 0x8000000000000000) {
            uStack_430 = uVar10;
            uStack_428 = uVar20;
            func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
            goto LAB_1014725f0;
          }
          uStack_430 = uVar10;
          uStack_428 = uVar20;
          uStack_378 = uVar20;
          uStack_370 = uVar10;
          uStack_368 = uVar20;
          FUN_100644190(&uStack_360,plVar18 + uVar16 * 3 + 0x22);
          uVar10 = uStack_358;
          if (uStack_360 == 0x8000000000000005) {
            if (uVar20 != 0) {
              _free(uStack_370);
            }
            goto LAB_1014724f8;
          }
          FUN_101497a9c(&uStack_420,&uStack_480,&uStack_378,&uStack_360);
          uStack_3b8 = uStack_410;
          uStack_3c0 = uStack_418;
          uStack_3a8 = uStack_400;
          uStack_3b0 = uStack_408;
          uStack_398 = uStack_3f0;
          uStack_3a0 = uStack_3f8;
          uStack_388 = uStack_3e0;
          uStack_390 = uStack_3e8;
          uStack_380 = uStack_3d8;
          if (uStack_418 != 0x8000000000000005) {
            FUN_100de6690(&uStack_3c0);
          }
          plVar19 = (long *)0x0;
          bVar3 = true;
          lVar22 = lVar22 + -1;
          uVar16 = uVar8;
        } while (lVar22 != 0);
      }
      uStack_418 = uStack_478;
      uStack_420 = uStack_480;
      uStack_3e8 = uStack_448;
      uStack_3f0 = uStack_450;
      uStack_3d8 = uStack_438;
      uStack_3e0 = uStack_440;
      uStack_3c8 = uStack_428;
      uStack_3d0 = uStack_430;
      uStack_408 = uStack_468;
      uStack_410 = uStack_470;
      uStack_3f8 = uStack_458;
      uStack_400 = uStack_460;
      if (uStack_480 == 0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_1014725f0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014725f4);
        (*pcVar2)();
      }
      uStack_338 = uStack_458;
      uStack_340 = uStack_460;
      uStack_328 = uStack_448;
      uStack_330 = uStack_450;
      uStack_320 = uStack_440;
      uStack_358 = uStack_478;
      uStack_360 = uStack_480;
      uStack_348 = uStack_468;
      uStack_350 = uStack_470;
      if ((uStack_438 & 0x7fffffffffffffff) != 0) {
        _free(uStack_430);
      }
      uVar10 = uStack_358;
      if (uStack_360 != 0x8000000000000005) goto LAB_101472208;
    }
LAB_10147251c:
    _free(lStack_490);
  }
  else {
    uStack_360 = 0x8000000000000000;
LAB_101472208:
    FUN_101497a9c(&uStack_420,plVar6,&uStack_498,&uStack_360);
    uStack_478 = uStack_410;
    uStack_480 = uStack_418;
    uStack_468 = uStack_400;
    uStack_470 = uStack_408;
    uStack_458 = uStack_3f0;
    uStack_460 = uStack_3f8;
    uStack_448 = uStack_3e0;
    uStack_450 = uStack_3e8;
    uStack_440 = uStack_3d8;
    if (uStack_418 != 0x8000000000000005) {
      FUN_100de6690(&uStack_480);
    }
    uVar10 = 0;
  }
  return uVar10;
}

