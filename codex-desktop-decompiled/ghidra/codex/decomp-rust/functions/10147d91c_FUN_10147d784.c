
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10147d784(long *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 (*pauVar10) [16];
  undefined *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_568;
  long lStack_560;
  long lStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
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
    puVar8 = (undefined8 *)func_0x000108a4a0f8(&uStack_a0,0,0);
    return puVar8;
  }
  lVar5 = param_3;
  uVar15 = param_4;
  lVar4 = _malloc(param_3);
  if (lVar4 != 0) {
    _memcpy(lVar4,param_2,param_3);
    if (param_1[9] == -0x8000000000000000 || param_1[9] == 0) {
      param_1[10] = lVar4;
      param_1[0xb] = param_3;
      param_1[9] = -0x8000000000000000;
      lStack_f0 = param_1[0xb];
      lStack_f8 = param_1[10];
    }
    else {
      _free(param_1[10]);
      param_1[10] = lVar4;
      param_1[0xb] = param_3;
      param_1[9] = -0x8000000000000000;
      lStack_f0 = param_1[0xb];
      lStack_f8 = param_1[10];
    }
    lStack_100 = param_3;
    if (param_5 == 0) {
      lVar5 = 1;
    }
    else {
      lVar5 = _malloc(param_5);
      if (lVar5 == 0) {
        func_0x0001087c9084(1,param_5);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10147d82c);
        (*pcVar3)();
      }
    }
    _memcpy(lVar5,param_4,param_5);
    uStack_e8 = 0x8000000000000003;
    lStack_e0 = param_5;
    lStack_d8 = lVar5;
    lStack_d0 = param_5;
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
    return (undefined8 *)0x0;
  }
  uVar6 = func_0x0001087c9084(1,param_3);
  _free(lStack_f8);
  auVar18 = __Unwind_Resume(uVar6);
  plVar13 = auVar18._0_8_;
  if (*plVar13 == -0x8000000000000000) {
    uStack_1f0 = 10;
    puVar8 = (undefined8 *)func_0x000108a4a0f8(&uStack_1f0,0,0);
  }
  else {
    lVar4 = lVar5;
    lVar7 = _malloc(lVar5);
    if (lVar7 == 0) {
      auVar18 = func_0x0001087c9084(1,lVar5);
      plVar13 = auVar18._8_8_;
      plVar9 = auVar18._0_8_;
      if (*plVar9 == -0x8000000000000000) {
        puStack_430 = (undefined8 *)0xa;
        puVar8 = (undefined8 *)func_0x000108a4a0f8(&puStack_430,0,0);
      }
      else {
        puVar8 = (undefined8 *)_malloc(8);
        if (puVar8 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,8);
LAB_10147e16c:
          func_0x0001087c9084(1,0xb);
LAB_10147e184:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10147e188);
          (*pcVar3)();
        }
        *puVar8 = 0x737463656a6f7270;
        if (plVar9[9] != -0x8000000000000000 && plVar9[9] != 0) {
          _free(plVar9[10]);
        }
        plVar9[10] = (long)puVar8;
        plVar9[0xb] = 8;
        plVar9[9] = -0x8000000000000000;
        lStack_558 = plVar9[0xb];
        lStack_560 = plVar9[10];
        uStack_568 = 8;
        if (plVar13 == (long *)0x0) {
          puStack_490 = (undefined8 *)0x8000000000000000;
LAB_10147db5c:
          FUN_101497a9c(&puStack_430,plVar9,&uStack_568,&puStack_490);
          puStack_548 = puStack_420;
          puStack_550 = puStack_428;
          puStack_538 = puStack_410;
          puStack_540 = puStack_418;
          puStack_528 = puStack_400;
          puStack_530 = puStack_408;
          puStack_518 = puStack_3f0;
          puStack_520 = puStack_3f8;
          puStack_510 = puStack_3e8;
          if (puStack_428 != (undefined8 *)0x8000000000000005) {
            FUN_100de6690(&puStack_550);
          }
          puVar8 = (undefined8 *)0x0;
        }
        else {
          lVar5 = *plVar13;
          pauVar10 = (undefined1 (*) [16])
                     (*
                     ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                     )();
          if (pauVar10[1][0] == '\x01') {
            auVar18 = *pauVar10;
          }
          else {
            auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
            *(long *)(*pauVar10 + 8) = auVar18._8_8_;
            pauVar10[1][0] = 1;
          }
          *(long *)*pauVar10 = auVar18._0_8_ + 1;
          FUN_105dc99f8(&puStack_430,lVar4,auVar18._0_8_,auVar18._8_8_);
          puStack_3e8 = (undefined8 *)0x8000000000000000;
          puVar8 = puStack_428;
          if (puStack_430 != (undefined8 *)0x8000000000000001) {
            uVar15 = CONCAT17(-(-1 < lVar5),
                              CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar5 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar5 >> 8)),
                                                           -(-1 < (char)lVar5)))))))) &
                     0x8080808080808080;
            plVar16 = plVar13 + 1;
            puStack_528 = puStack_408;
            puStack_530 = puStack_410;
            puStack_518 = puStack_3f8;
            puStack_520 = puStack_400;
            puStack_508 = (undefined8 *)0x8000000000000000;
            puStack_510 = puStack_3f0;
            puStack_4f8 = puStack_3d8;
            puStack_500 = puStack_3e0;
            uStack_578 = 0x8000000000000000;
            uStack_580 = 0x8000000000000000;
            puStack_548 = puStack_428;
            puStack_550 = puStack_430;
            puStack_538 = puStack_418;
            puStack_540 = puStack_420;
            do {
              if (lVar4 == 0) {
                puStack_408 = puStack_528;
                puStack_410 = puStack_530;
                puStack_3f8 = puStack_518;
                puStack_400 = puStack_520;
                puStack_3e8 = puStack_508;
                puStack_3f0 = puStack_510;
                puStack_3d8 = puStack_4f8;
                puStack_3e0 = puStack_500;
                puStack_428 = puStack_548;
                puStack_430 = puStack_550;
                puStack_418 = puStack_538;
                puStack_420 = puStack_540;
                if (puStack_550 == (undefined8 *)0x8000000000000000) {
                  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
                  goto LAB_10147e184;
                }
                puStack_468 = puStack_528;
                puStack_470 = puStack_530;
                puStack_458 = puStack_518;
                puStack_460 = puStack_520;
                puStack_450 = puStack_510;
                puStack_488 = puStack_548;
                puStack_490 = puStack_550;
                puStack_478 = puStack_538;
                puStack_480 = puStack_540;
                if (((ulong)puStack_508 & 0x7fffffffffffffff) != 0) {
                  _free(puStack_500);
                }
                puVar8 = puStack_488;
                if (puStack_490 != (undefined8 *)0x8000000000000005) goto LAB_10147db5c;
                goto LAB_10147e068;
              }
              while (uVar15 == 0) {
                lVar5 = *plVar16;
                plVar13 = plVar13 + -0x20;
                plVar16 = plVar16 + 1;
                uVar15 = CONCAT17(-(-1 < lVar5),
                                  CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                           CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                                    CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                             CONCAT13(-(-1 < (char)((ulong)lVar5 >>
                                                                                   0x18)),
                                                                      CONCAT12(-(-1 < (char)((ulong)
                                                  lVar5 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar5 >> 8)),
                                                           -(-1 < (char)lVar5)))))))) &
                         0x8080808080808080;
              }
              if (puStack_550 == (undefined8 *)0x8000000000000000) {
                puVar11 = &UNK_10b24c5c0;
LAB_10147e0cc:
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar11);
                goto LAB_10147e184;
              }
              uVar2 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                      (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
              uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
              bVar1 = *(byte *)((long)plVar13 + uVar2 * -4 + -8);
              puVar14 = *(undefined8 **)((long)plVar13 + uVar2 * -4 + -0x10);
              if (puVar14 == (undefined8 *)0x0) {
                puVar8 = (undefined8 *)0x1;
              }
              else {
                uVar6 = *(undefined8 *)((long)plVar13 + uVar2 * -4 + -0x18);
                puVar8 = (undefined8 *)_malloc(puVar14);
                if (puVar8 == (undefined8 *)0x0) {
                  func_0x0001087c9084(1,puVar14);
                  goto LAB_10147e184;
                }
                _memcpy(puVar8,uVar6,puVar14);
                if (puVar14 == (undefined8 *)0x8000000000000000) break;
              }
              if (((puStack_508 != (undefined8 *)0x8000000000000000) &&
                  (puStack_508 != (undefined8 *)0x0)) &&
                 (_free(puStack_500), puStack_550 == (undefined8 *)0x8000000000000000)) {
                puVar11 = &UNK_10b24c5f0;
                puStack_508 = puVar14;
                puStack_500 = puVar8;
                puStack_4f8 = puVar14;
                goto LAB_10147e0cc;
              }
              puStack_508 = (undefined8 *)0x8000000000000000;
              if (puVar14 == (undefined8 *)0x8000000000000000) {
                puStack_500 = puVar8;
                puStack_4f8 = puVar14;
                func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
                goto LAB_10147e184;
              }
              puStack_4f0 = puVar14;
              puStack_4e8 = puVar8;
              puStack_4e0 = puVar14;
              if (pauVar10[1][0] == '\x01') {
                auVar18 = *pauVar10;
                puStack_500 = puVar8;
                puStack_4f8 = puVar14;
              }
              else {
                puStack_500 = puVar8;
                puStack_4f8 = puVar14;
                auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                *(long *)(*pauVar10 + 8) = auVar18._8_8_;
                pauVar10[1][0] = 1;
              }
              *(long *)*pauVar10 = auVar18._0_8_ + 1;
              FUN_105dc99f8(&puStack_430,1,auVar18._0_8_,auVar18._8_8_);
              puStack_3e8 = (undefined8 *)0x8000000000000000;
              puVar8 = puStack_428;
              if (puStack_430 == (undefined8 *)0x8000000000000001) {
LAB_10147dd84:
                if (puVar14 != (undefined8 *)0x0) {
                  _free(puStack_4e8);
                }
              }
              else {
                puStack_458 = puStack_3f8;
                puStack_460 = puStack_400;
                puStack_448 = (undefined8 *)0x8000000000000000;
                puStack_450 = puStack_3f0;
                puStack_438 = puStack_3d8;
                puStack_440 = puStack_3e0;
                puStack_478 = puStack_418;
                puStack_480 = puStack_420;
                puStack_468 = puStack_408;
                puStack_470 = puStack_410;
                puStack_490 = puStack_430;
                puStack_488 = puStack_428;
                if (puStack_430 == (undefined8 *)0x8000000000000000) {
                  puStack_430 = (undefined8 *)0xa;
                  puVar8 = (undefined8 *)func_0x000108a4a0f8(&puStack_430,0,0);
                  FUN_100e040f0(&puStack_490);
                  goto LAB_10147dd84;
                }
                puVar8 = (undefined8 *)_malloc(0xb);
                if (puVar8 == (undefined8 *)0x0) goto LAB_10147e16c;
                *(undefined4 *)((long)puVar8 + 7) = 0x6c657665;
                *puVar8 = 0x656c5f7473757274;
                if ((puStack_448 != (undefined8 *)0x8000000000000000) &&
                   (puStack_448 != (undefined8 *)0x0)) {
                  _free(puStack_440);
                }
                puStack_438 = (undefined8 *)0xb;
                puStack_448 = (undefined8 *)0x8000000000000000;
                puVar12 = &uStack_388;
                uStack_378 = 0xb;
                uStack_388 = 0xb;
                uVar6 = uStack_580;
                uVar17 = uStack_578;
                puStack_440 = puVar8;
                puStack_380 = puVar8;
                if (bVar1 != 2) {
                  if ((bVar1 & 1) == 0) {
                    puVar8 = (undefined8 *)_malloc(7);
                    uVar6 = 7;
                    if (puVar8 == (undefined8 *)0x0) goto LAB_10147e17c;
                    *(undefined4 *)((long)puVar8 + 3) = 0x64657473;
                    *(undefined4 *)puVar8 = 0x73757274;
                    puVar12 = (undefined8 *)0x7;
                    uVar17 = 7;
                    uVar6 = 0x8000000000000003;
                  }
                  else {
                    puVar8 = (undefined8 *)_malloc(9);
                    uVar6 = 9;
                    if (puVar8 == (undefined8 *)0x0) {
LAB_10147e17c:
                      func_0x0001087c9084(1,uVar6);
                      goto LAB_10147e184;
                    }
                    *(undefined1 *)(puVar8 + 1) = 100;
                    *puVar8 = 0x6574737572746e75;
                    puVar12 = (undefined8 *)0x9;
                    uVar17 = 9;
                    uVar6 = 0x8000000000000003;
                  }
                }
                uStack_370 = uVar6;
                uStack_368 = uVar17;
                puStack_360 = puVar8;
                puStack_358 = puVar12;
                FUN_101497a9c(&puStack_430,&puStack_490,&uStack_388,&uStack_370);
                puStack_3c8 = puStack_420;
                puStack_3d0 = puStack_428;
                puStack_3b8 = puStack_410;
                puStack_3c0 = puStack_418;
                puStack_3a8 = puStack_400;
                puStack_3b0 = puStack_408;
                puStack_398 = puStack_3f0;
                puStack_3a0 = puStack_3f8;
                puStack_390 = puStack_3e8;
                if (puStack_428 != (undefined8 *)0x8000000000000005) {
                  FUN_100de6690(&puStack_3d0);
                }
                puVar8 = puStack_488;
                puVar12 = puStack_490;
                if (puStack_490 == (undefined8 *)0x8000000000000000) {
                  if (puStack_488 == (undefined8 *)0x8000000000000005) {
                    func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                    goto LAB_10147e184;
                  }
                  puStack_4c8 = puStack_478;
                  puStack_4d0 = puStack_480;
                  puStack_4b8 = puStack_468;
                  puStack_4c0 = puStack_470;
                  puStack_4a8 = puStack_458;
                  puStack_4b0 = puStack_460;
                  puStack_4a0 = puStack_450;
                  puStack_498 = puStack_448;
                  puStack_4d8 = puStack_488;
                }
                else {
                  puStack_4d8 = puStack_490;
                  puStack_4d0 = puStack_488;
                  puStack_4c0 = puStack_478;
                  puStack_4c8 = puStack_480;
                  puStack_4b0 = puStack_468;
                  puStack_4b8 = puStack_470;
                  puStack_4a0 = puStack_458;
                  puStack_4a8 = puStack_460;
                  puStack_498 = puStack_450;
                  if (((ulong)puStack_448 & 0x7fffffffffffffff) != 0) {
                    _free(puStack_440);
                  }
                  if (puVar12 == (undefined8 *)0x8000000000000005) goto LAB_10147dd84;
                }
                FUN_101497a9c(&puStack_430,&puStack_550,&puStack_4f0,&puStack_4d8);
                puStack_488 = puStack_420;
                puStack_490 = puStack_428;
                puStack_478 = puStack_410;
                puStack_480 = puStack_418;
                puStack_468 = puStack_400;
                puStack_470 = puStack_408;
                puStack_458 = puStack_3f0;
                puStack_460 = puStack_3f8;
                puStack_450 = puStack_3e8;
                if (puStack_428 != (undefined8 *)0x8000000000000005) {
                  FUN_100de6690(&puStack_490);
                }
                puVar8 = (undefined8 *)0x0;
              }
              uVar15 = uVar15 - 1 & uVar15;
              lVar4 = lVar4 + -1;
            } while (puVar8 == (undefined8 *)0x0);
            FUN_100e040f0(&puStack_550);
          }
LAB_10147e068:
          _free(lStack_560);
        }
      }
      return puVar8;
    }
    _memcpy(lVar7,auVar18._8_8_,lVar5);
    if (plVar13[9] != -0x8000000000000000 && plVar13[9] != 0) {
      _free(plVar13[10]);
    }
    plVar13[10] = lVar7;
    plVar13[0xb] = lVar5;
    plVar13[9] = -0x8000000000000000;
    lStack_240 = plVar13[0xb];
    lStack_248 = plVar13[10];
    uStack_230 = uVar15 >> 0x3f;
    uStack_238 = 0x8000000000000002;
    lStack_250 = lVar5;
    uStack_228 = uVar15;
    FUN_101497a9c(&uStack_1f0,plVar13,&lStack_250,&uStack_238);
    uStack_298 = uStack_1e0;
    lStack_2a0 = lStack_1e8;
    uStack_288 = uStack_1d0;
    uStack_290 = uStack_1d8;
    uStack_278 = uStack_1c0;
    uStack_280 = uStack_1c8;
    uStack_268 = uStack_1b0;
    uStack_270 = uStack_1b8;
    uStack_260 = uStack_1a8;
    if (lStack_1e8 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_2a0);
    }
    puVar8 = (undefined8 *)0x0;
  }
  return puVar8;
}

