
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10147d488(long *param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_708;
  long lStack_700;
  long lStack_6f8;
  undefined8 *puStack_6f0;
  undefined8 *puStack_6e8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 *puStack_6c0;
  undefined8 *puStack_6b8;
  undefined8 *puStack_6b0;
  undefined8 *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *puStack_690;
  undefined8 *puStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined8 *puStack_660;
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 *puStack_630;
  undefined8 *puStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  undefined8 *puStack_5c8;
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 *puStack_580;
  undefined8 *puStack_578;
  undefined8 *puStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined8 *puStack_548;
  undefined8 *puStack_540;
  undefined8 *puStack_538;
  undefined8 *puStack_530;
  undefined8 uStack_528;
  undefined8 *puStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  long lStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  long lStack_278;
  ulong uStack_270;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined4 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined4 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_c0 = 10;
    puVar14 = (undefined8 *)func_0x000108a4a0f8(&uStack_c0,0,0);
    return puVar14;
  }
  lVar10 = param_3;
  uVar4 = param_4;
  uVar13 = param_5;
  lVar3 = _malloc(param_3);
  if (lVar3 == 0) {
    uVar5 = func_0x0001087c9084(1,param_3);
    FUN_100e238ac(&uStack_170);
    _free(lStack_118);
    auVar21 = __Unwind_Resume(uVar5);
    plVar16 = auVar21._0_8_;
    if (*plVar16 == -0x8000000000000000) {
      uStack_240 = 10;
      puVar14 = (undefined8 *)func_0x000108a4a0f8(&uStack_240,0,0);
      return puVar14;
    }
    lVar3 = lVar10;
    uVar12 = uVar4;
    lVar7 = _malloc(lVar10);
    if (lVar7 != 0) {
      _memcpy(lVar7,auVar21._8_8_,lVar10);
      if (plVar16[9] == -0x8000000000000000 || plVar16[9] == 0) {
        plVar16[10] = lVar7;
        plVar16[0xb] = lVar10;
        plVar16[9] = -0x8000000000000000;
        lStack_290 = plVar16[0xb];
        lStack_298 = plVar16[10];
      }
      else {
        _free(plVar16[10]);
        plVar16[10] = lVar7;
        plVar16[0xb] = lVar10;
        plVar16[9] = -0x8000000000000000;
        lStack_290 = plVar16[0xb];
        lStack_298 = plVar16[10];
      }
      lStack_2a0 = lVar10;
      if (uVar13 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = _malloc(uVar13);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,uVar13);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10147d82c);
          (*pcVar2)();
        }
      }
      _memcpy(lVar10,uVar4,uVar13);
      uStack_288 = 0x8000000000000003;
      uStack_280 = uVar13;
      lStack_278 = lVar10;
      uStack_270 = uVar13;
      FUN_101497a9c(&uStack_240,plVar16,&lStack_2a0,&uStack_288);
      uStack_2e8 = uStack_230;
      lStack_2f0 = lStack_238;
      uStack_2d8 = uStack_220;
      uStack_2e0 = uStack_228;
      uStack_2c8 = uStack_210;
      uStack_2d0 = uStack_218;
      uStack_2b8 = uStack_200;
      uStack_2c0 = uStack_208;
      uStack_2b0 = uStack_1f8;
      if (lStack_238 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_2f0);
      }
      return (undefined8 *)0x0;
    }
    uVar5 = func_0x0001087c9084(1,lVar10);
    _free(lStack_298);
    auVar21 = __Unwind_Resume(uVar5);
    plVar16 = auVar21._0_8_;
    if (*plVar16 == -0x8000000000000000) {
      uStack_390 = 10;
      puVar14 = (undefined8 *)func_0x000108a4a0f8(&uStack_390,0,0);
    }
    else {
      lVar10 = lVar3;
      lVar7 = _malloc(lVar3);
      if (lVar7 == 0) {
        auVar21 = func_0x0001087c9084(1,lVar3);
        plVar16 = auVar21._8_8_;
        plVar8 = auVar21._0_8_;
        if (*plVar8 == -0x8000000000000000) {
          puStack_5d0 = (undefined8 *)0xa;
          puVar14 = (undefined8 *)func_0x000108a4a0f8(&puStack_5d0,0,0);
        }
        else {
          puVar14 = (undefined8 *)_malloc(8);
          if (puVar14 == (undefined8 *)0x0) {
            func_0x0001087c9084(1,8);
LAB_10147e16c:
            func_0x0001087c9084(1,0xb);
LAB_10147e184:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10147e188);
            (*pcVar2)();
          }
          *puVar14 = 0x737463656a6f7270;
          if (plVar8[9] != -0x8000000000000000 && plVar8[9] != 0) {
            _free(plVar8[10]);
          }
          plVar8[10] = (long)puVar14;
          plVar8[0xb] = 8;
          plVar8[9] = -0x8000000000000000;
          lStack_6f8 = plVar8[0xb];
          lStack_700 = plVar8[10];
          uStack_708 = 8;
          if (plVar16 == (long *)0x0) {
            puStack_630 = (undefined8 *)0x8000000000000000;
LAB_10147db5c:
            FUN_101497a9c(&puStack_5d0,plVar8,&uStack_708,&puStack_630);
            puStack_6e8 = puStack_5c0;
            puStack_6f0 = puStack_5c8;
            puStack_6d8 = puStack_5b0;
            puStack_6e0 = puStack_5b8;
            puStack_6c8 = puStack_5a0;
            puStack_6d0 = puStack_5a8;
            puStack_6b8 = puStack_590;
            puStack_6c0 = puStack_598;
            puStack_6b0 = puStack_588;
            if (puStack_5c8 != (undefined8 *)0x8000000000000005) {
              FUN_100de6690(&puStack_6f0);
            }
            puVar14 = (undefined8 *)0x0;
          }
          else {
            lVar3 = *plVar16;
            pauVar9 = (undefined1 (*) [16])
                      (*
                      ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                      )();
            if (pauVar9[1][0] == '\x01') {
              auVar21 = *pauVar9;
            }
            else {
              auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar9 + 8) = auVar21._8_8_;
              pauVar9[1][0] = 1;
            }
            *(long *)*pauVar9 = auVar21._0_8_ + 1;
            FUN_105dc99f8(&puStack_5d0,lVar10,auVar21._0_8_,auVar21._8_8_);
            puStack_588 = (undefined8 *)0x8000000000000000;
            puVar14 = puStack_5c8;
            if (puStack_5d0 != (undefined8 *)0x8000000000000001) {
              uVar4 = CONCAT17(-(-1 < lVar3),
                               CONCAT16(-(-1 < (char)((ulong)lVar3 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar3 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar3 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar3 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar3 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar3 >> 8)),
                                                           -(-1 < (char)lVar3)))))))) &
                      0x8080808080808080;
              plVar19 = plVar16 + 1;
              puStack_6c8 = puStack_5a8;
              puStack_6d0 = puStack_5b0;
              puStack_6b8 = puStack_598;
              puStack_6c0 = puStack_5a0;
              puStack_6a8 = (undefined8 *)0x8000000000000000;
              puStack_6b0 = puStack_590;
              puStack_698 = puStack_578;
              puStack_6a0 = puStack_580;
              uStack_718 = 0x8000000000000000;
              uStack_720 = 0x8000000000000000;
              puStack_6e8 = puStack_5c8;
              puStack_6f0 = puStack_5d0;
              puStack_6d8 = puStack_5b8;
              puStack_6e0 = puStack_5c0;
              do {
                if (lVar10 == 0) {
                  puStack_5a8 = puStack_6c8;
                  puStack_5b0 = puStack_6d0;
                  puStack_598 = puStack_6b8;
                  puStack_5a0 = puStack_6c0;
                  puStack_588 = puStack_6a8;
                  puStack_590 = puStack_6b0;
                  puStack_578 = puStack_698;
                  puStack_580 = puStack_6a0;
                  puStack_5c8 = puStack_6e8;
                  puStack_5d0 = puStack_6f0;
                  puStack_5b8 = puStack_6d8;
                  puStack_5c0 = puStack_6e0;
                  if (puStack_6f0 == (undefined8 *)0x8000000000000000) {
                    __ZN4core9panicking5panic17h30f5ec71e3af4326E
                              (&UNK_109b9e649,0x28,&UNK_10b46a4e0);
                    goto LAB_10147e184;
                  }
                  puStack_608 = puStack_6c8;
                  puStack_610 = puStack_6d0;
                  puStack_5f8 = puStack_6b8;
                  puStack_600 = puStack_6c0;
                  puStack_5f0 = puStack_6b0;
                  puStack_628 = puStack_6e8;
                  puStack_630 = puStack_6f0;
                  puStack_618 = puStack_6d8;
                  puStack_620 = puStack_6e0;
                  if (((ulong)puStack_6a8 & 0x7fffffffffffffff) != 0) {
                    _free(puStack_6a0);
                  }
                  puVar14 = puStack_628;
                  if (puStack_630 != (undefined8 *)0x8000000000000005) goto LAB_10147db5c;
                  goto LAB_10147e068;
                }
                while (uVar4 == 0) {
                  lVar3 = *plVar19;
                  plVar16 = plVar16 + -0x20;
                  plVar19 = plVar19 + 1;
                  uVar4 = CONCAT17(-(-1 < lVar3),
                                   CONCAT16(-(-1 < (char)((ulong)lVar3 >> 0x30)),
                                            CONCAT15(-(-1 < (char)((ulong)lVar3 >> 0x28)),
                                                     CONCAT14(-(-1 < (char)((ulong)lVar3 >> 0x20)),
                                                              CONCAT13(-(-1 < (char)((ulong)lVar3 >>
                                                                                    0x18)),
                                                                       CONCAT12(-(-1 < (char)((ulong
                                                  )lVar3 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar3 >> 8)),
                                                           -(-1 < (char)lVar3)))))))) &
                          0x8080808080808080;
                }
                if (puStack_6f0 == (undefined8 *)0x8000000000000000) {
                  puVar11 = &UNK_10b24c5c0;
LAB_10147e0cc:
                  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar11);
                  goto LAB_10147e184;
                }
                uVar13 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                         (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
                uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) & 0x78;
                bVar1 = *(byte *)((long)plVar16 + uVar13 * -4 + -8);
                puVar18 = *(undefined8 **)((long)plVar16 + uVar13 * -4 + -0x10);
                if (puVar18 == (undefined8 *)0x0) {
                  puVar14 = (undefined8 *)0x1;
                }
                else {
                  uVar5 = *(undefined8 *)((long)plVar16 + uVar13 * -4 + -0x18);
                  puVar14 = (undefined8 *)_malloc(puVar18);
                  if (puVar14 == (undefined8 *)0x0) {
                    func_0x0001087c9084(1,puVar18);
                    goto LAB_10147e184;
                  }
                  _memcpy(puVar14,uVar5,puVar18);
                  if (puVar18 == (undefined8 *)0x8000000000000000) break;
                }
                if (((puStack_6a8 != (undefined8 *)0x8000000000000000) &&
                    (puStack_6a8 != (undefined8 *)0x0)) &&
                   (_free(puStack_6a0), puStack_6f0 == (undefined8 *)0x8000000000000000)) {
                  puVar11 = &UNK_10b24c5f0;
                  puStack_6a8 = puVar18;
                  puStack_6a0 = puVar14;
                  puStack_698 = puVar18;
                  goto LAB_10147e0cc;
                }
                puStack_6a8 = (undefined8 *)0x8000000000000000;
                if (puVar18 == (undefined8 *)0x8000000000000000) {
                  puStack_6a0 = puVar14;
                  puStack_698 = puVar18;
                  func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
                  goto LAB_10147e184;
                }
                puStack_690 = puVar18;
                puStack_688 = puVar14;
                puStack_680 = puVar18;
                if (pauVar9[1][0] == '\x01') {
                  auVar21 = *pauVar9;
                  puStack_6a0 = puVar14;
                  puStack_698 = puVar18;
                }
                else {
                  puStack_6a0 = puVar14;
                  puStack_698 = puVar18;
                  auVar21 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                  *(long *)(*pauVar9 + 8) = auVar21._8_8_;
                  pauVar9[1][0] = 1;
                }
                *(long *)*pauVar9 = auVar21._0_8_ + 1;
                FUN_105dc99f8(&puStack_5d0,1,auVar21._0_8_,auVar21._8_8_);
                puStack_588 = (undefined8 *)0x8000000000000000;
                puVar14 = puStack_5c8;
                if (puStack_5d0 == (undefined8 *)0x8000000000000001) {
LAB_10147dd84:
                  if (puVar18 != (undefined8 *)0x0) {
                    _free(puStack_688);
                  }
                }
                else {
                  puStack_5f8 = puStack_598;
                  puStack_600 = puStack_5a0;
                  puStack_5e8 = (undefined8 *)0x8000000000000000;
                  puStack_5f0 = puStack_590;
                  puStack_5d8 = puStack_578;
                  puStack_5e0 = puStack_580;
                  puStack_618 = puStack_5b8;
                  puStack_620 = puStack_5c0;
                  puStack_608 = puStack_5a8;
                  puStack_610 = puStack_5b0;
                  puStack_630 = puStack_5d0;
                  puStack_628 = puStack_5c8;
                  if (puStack_5d0 == (undefined8 *)0x8000000000000000) {
                    puStack_5d0 = (undefined8 *)0xa;
                    puVar14 = (undefined8 *)func_0x000108a4a0f8(&puStack_5d0,0,0);
                    FUN_100e040f0(&puStack_630);
                    goto LAB_10147dd84;
                  }
                  puVar14 = (undefined8 *)_malloc(0xb);
                  if (puVar14 == (undefined8 *)0x0) goto LAB_10147e16c;
                  *(undefined4 *)((long)puVar14 + 7) = 0x6c657665;
                  *puVar14 = 0x656c5f7473757274;
                  if ((puStack_5e8 != (undefined8 *)0x8000000000000000) &&
                     (puStack_5e8 != (undefined8 *)0x0)) {
                    _free(puStack_5e0);
                  }
                  puStack_5d8 = (undefined8 *)0xb;
                  puStack_5e8 = (undefined8 *)0x8000000000000000;
                  puVar15 = &uStack_528;
                  uStack_518 = 0xb;
                  uStack_528 = 0xb;
                  uVar5 = uStack_720;
                  uVar20 = uStack_718;
                  puStack_5e0 = puVar14;
                  puStack_520 = puVar14;
                  if (bVar1 != 2) {
                    if ((bVar1 & 1) == 0) {
                      puVar14 = (undefined8 *)_malloc(7);
                      uVar5 = 7;
                      if (puVar14 == (undefined8 *)0x0) goto LAB_10147e17c;
                      *(undefined4 *)((long)puVar14 + 3) = 0x64657473;
                      *(undefined4 *)puVar14 = 0x73757274;
                      puVar15 = (undefined8 *)0x7;
                      uVar20 = 7;
                      uVar5 = 0x8000000000000003;
                    }
                    else {
                      puVar14 = (undefined8 *)_malloc(9);
                      uVar5 = 9;
                      if (puVar14 == (undefined8 *)0x0) {
LAB_10147e17c:
                        func_0x0001087c9084(1,uVar5);
                        goto LAB_10147e184;
                      }
                      *(undefined1 *)(puVar14 + 1) = 100;
                      *puVar14 = 0x6574737572746e75;
                      puVar15 = (undefined8 *)0x9;
                      uVar20 = 9;
                      uVar5 = 0x8000000000000003;
                    }
                  }
                  uStack_510 = uVar5;
                  uStack_508 = uVar20;
                  puStack_500 = puVar14;
                  puStack_4f8 = puVar15;
                  FUN_101497a9c(&puStack_5d0,&puStack_630,&uStack_528,&uStack_510);
                  puStack_568 = puStack_5c0;
                  puStack_570 = puStack_5c8;
                  puStack_558 = puStack_5b0;
                  puStack_560 = puStack_5b8;
                  puStack_548 = puStack_5a0;
                  puStack_550 = puStack_5a8;
                  puStack_538 = puStack_590;
                  puStack_540 = puStack_598;
                  puStack_530 = puStack_588;
                  if (puStack_5c8 != (undefined8 *)0x8000000000000005) {
                    FUN_100de6690(&puStack_570);
                  }
                  puVar14 = puStack_628;
                  puVar15 = puStack_630;
                  if (puStack_630 == (undefined8 *)0x8000000000000000) {
                    if (puStack_628 == (undefined8 *)0x8000000000000005) {
                      func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                      goto LAB_10147e184;
                    }
                    puStack_668 = puStack_618;
                    puStack_670 = puStack_620;
                    puStack_658 = puStack_608;
                    puStack_660 = puStack_610;
                    puStack_648 = puStack_5f8;
                    puStack_650 = puStack_600;
                    puStack_640 = puStack_5f0;
                    puStack_638 = puStack_5e8;
                    puStack_678 = puStack_628;
                  }
                  else {
                    puStack_678 = puStack_630;
                    puStack_670 = puStack_628;
                    puStack_660 = puStack_618;
                    puStack_668 = puStack_620;
                    puStack_650 = puStack_608;
                    puStack_658 = puStack_610;
                    puStack_640 = puStack_5f8;
                    puStack_648 = puStack_600;
                    puStack_638 = puStack_5f0;
                    if (((ulong)puStack_5e8 & 0x7fffffffffffffff) != 0) {
                      _free(puStack_5e0);
                    }
                    if (puVar15 == (undefined8 *)0x8000000000000005) goto LAB_10147dd84;
                  }
                  FUN_101497a9c(&puStack_5d0,&puStack_6f0,&puStack_690,&puStack_678);
                  puStack_628 = puStack_5c0;
                  puStack_630 = puStack_5c8;
                  puStack_618 = puStack_5b0;
                  puStack_620 = puStack_5b8;
                  puStack_608 = puStack_5a0;
                  puStack_610 = puStack_5a8;
                  puStack_5f8 = puStack_590;
                  puStack_600 = puStack_598;
                  puStack_5f0 = puStack_588;
                  if (puStack_5c8 != (undefined8 *)0x8000000000000005) {
                    FUN_100de6690(&puStack_630);
                  }
                  puVar14 = (undefined8 *)0x0;
                }
                uVar4 = uVar4 - 1 & uVar4;
                lVar10 = lVar10 + -1;
              } while (puVar14 == (undefined8 *)0x0);
              FUN_100e040f0(&puStack_6f0);
            }
LAB_10147e068:
            _free(lStack_700);
          }
        }
        return puVar14;
      }
      _memcpy(lVar7,auVar21._8_8_,lVar3);
      if (plVar16[9] != -0x8000000000000000 && plVar16[9] != 0) {
        _free(plVar16[10]);
      }
      plVar16[10] = lVar7;
      plVar16[0xb] = lVar3;
      plVar16[9] = -0x8000000000000000;
      lStack_3e0 = plVar16[0xb];
      lStack_3e8 = plVar16[10];
      uStack_3d0 = uVar12 >> 0x3f;
      uStack_3d8 = 0x8000000000000002;
      lStack_3f0 = lVar3;
      uStack_3c8 = uVar12;
      FUN_101497a9c(&uStack_390,plVar16,&lStack_3f0,&uStack_3d8);
      uStack_438 = uStack_380;
      lStack_440 = lStack_388;
      uStack_428 = uStack_370;
      uStack_430 = uStack_378;
      uStack_418 = uStack_360;
      uStack_420 = uStack_368;
      uStack_408 = uStack_350;
      uStack_410 = uStack_358;
      uStack_400 = uStack_348;
      if (lStack_388 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_440);
      }
      puVar14 = (undefined8 *)0x0;
    }
    return puVar14;
  }
  uVar4 = _memcpy(lVar3,param_2,param_3);
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    uVar4 = _free(param_1[10]);
  }
  param_1[10] = lVar3;
  param_1[0xb] = param_3;
  param_1[9] = -0x8000000000000000;
  lStack_110 = param_1[0xb];
  lStack_118 = param_1[10];
  lVar10 = param_5 * 0x48;
  lStack_120 = param_3;
  if (0x1c71c71c71c71c7 < param_5) {
    uVar5 = 0;
LAB_10147d53c:
    func_0x0001087c9084(uVar5,lVar10);
LAB_10147d738:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10147d73c);
    (*pcVar2)();
  }
  if (lVar10 == 0) {
    uVar13 = 0;
    puVar17 = (undefined4 *)0x8;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar4;
  }
  else {
    auVar21 = _malloc(lVar10);
    puVar17 = auVar21._0_8_;
    uVar13 = param_5;
    if (puVar17 == (undefined4 *)0x0) {
      uVar5 = 8;
      goto LAB_10147d53c;
    }
  }
  lVar10 = 0;
  puStack_160 = (undefined8 *)0x0;
  uStack_178 = 0x8000000000000000;
  uStack_180 = 0x8000000000000000;
  uStack_188 = 8;
  uStack_190 = 0x8000000000000003;
  puVar14 = (undefined8 *)&UNK_108cdb000;
  uStack_170 = uVar13;
  puStack_168 = puVar17;
  do {
    puVar18 = puStack_160;
    uVar5 = uStack_180;
    uVar4 = uStack_178;
    if (*(byte *)(param_4 + (long)puStack_160) == 2) {
LAB_10147d638:
      puStack_b0 = auVar21._0_8_;
      uStack_b8 = uVar4;
      uStack_c0 = uVar5;
      puStack_a8 = puVar14;
    }
    else {
      if ((*(byte *)(param_4 + (long)puStack_160) & 1) != 0) {
        puVar14 = (undefined8 *)_malloc(8,auVar21._8_8_);
        auVar21._8_8_ = 8;
        auVar21._0_8_ = puVar14;
        if (puVar14 == (undefined8 *)0x0) goto LAB_10147d730;
        *puVar14 = 0x6c616e696769726f;
        puVar14 = (undefined8 *)0x8;
        uVar5 = uStack_190;
        uVar4 = uStack_188;
        goto LAB_10147d638;
      }
      puVar6 = (undefined4 *)_malloc(4,auVar21._8_8_);
      auVar21._8_8_ = 4;
      auVar21._0_8_ = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
LAB_10147d730:
        func_0x0001087c9084(1);
        goto LAB_10147d738;
      }
      *puVar6 = 0x68676968;
      uStack_b8 = 4;
      uStack_c0 = 0x8000000000000003;
      puStack_a8 = (undefined8 *)0x4;
      puStack_b0 = puVar6;
    }
    if (puVar18 == (undefined8 *)uStack_170) {
      auVar21 = __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&uStack_170);
      puVar17 = puStack_168;
    }
    puVar14 = (undefined8 *)((long)puVar17 + lVar10);
    puVar14[1] = uStack_b8;
    *puVar14 = uStack_c0;
    puVar14[8] = uStack_80;
    puVar14[5] = uStack_98;
    puVar14[4] = uStack_a0;
    puVar14[7] = uStack_88;
    puVar14[6] = uStack_90;
    puVar14[3] = puStack_a8;
    puVar14[2] = puStack_b0;
    puStack_160 = (undefined8 *)((long)puVar18 + 1);
    lVar10 = lVar10 + 0x48;
    if ((undefined8 *)param_5 == puStack_160) {
      lStack_f8 = (long)puStack_168;
      uStack_108 = 0x8000000000000004;
      uStack_100 = uStack_170;
      uStack_f0 = (ulong)puStack_160;
      FUN_101497a9c(&uStack_c0,param_1,&lStack_120,&uStack_108);
      puStack_168 = puStack_b0;
      uStack_170 = uStack_b8;
      uStack_158 = uStack_a0;
      puStack_160 = puStack_a8;
      uStack_148 = uStack_90;
      uStack_150 = uStack_98;
      uStack_138 = uStack_80;
      uStack_140 = uStack_88;
      uStack_130 = uStack_78;
      if (uStack_b8 != 0x8000000000000005) {
        FUN_100de6690(&uStack_170);
      }
      return (undefined8 *)0x0;
    }
  } while( true );
}

