
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101472f54(long *param_1,undefined8 param_2,long param_3,long *param_4,ulong param_5)

{
  ushort *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x22;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  ulong uStack_398;
  long lStack_390;
  ulong uStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_330;
  ulong uStack_328;
  long lStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
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
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (*param_1 == -0x8000000000000000) {
    lStack_180 = 10;
    lVar15 = func_0x000108a4a0f8(&lStack_180,0,0);
    return lVar15;
  }
  lVar15 = param_3;
  plVar12 = param_4;
  lVar4 = _malloc(param_3);
  if (lVar4 != 0) {
    _memcpy(lVar4,param_2,param_3);
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = lVar4;
    param_1[0xb] = param_3;
    param_1[9] = -0x8000000000000000;
    lStack_1e8 = param_1[0xb];
    lStack_1f0 = param_1[10];
    plVar12 = (long *)*param_4;
    uVar11 = param_4[1];
    lVar4 = param_4[2];
    bVar3 = plVar12 != (long *)0x0;
    lVar15 = lVar4;
    if (!bVar3) {
      lVar15 = 0;
    }
    lStack_1f8 = param_3;
    pauVar5 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar5[1][0] == '\x01') {
      auVar18 = *pauVar5;
    }
    else {
      auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar5 + 8) = auVar18._8_8_;
      pauVar5[1][0] = 1;
    }
    *(long *)*pauVar5 = auVar18._0_8_ + 1;
    FUN_105dc99f8(&lStack_180,lVar15,auVar18._0_8_,auVar18._8_8_);
    uStack_138 = 0x8000000000000000;
    lVar6 = lStack_178;
    if (lStack_180 != -0x7fffffffffffffff) {
      uStack_1b8 = uStack_158;
      uStack_1c0 = uStack_160;
      uStack_1a8 = uStack_148;
      uStack_1b0 = uStack_150;
      uStack_198 = 0x8000000000000000;
      uStack_1a0 = uStack_140;
      uStack_188 = uStack_128;
      lStack_190 = lStack_130;
      lStack_1d8 = lStack_178;
      lStack_1e0 = lStack_180;
      uStack_1c8 = uStack_168;
      uStack_1d0 = uStack_170;
      if (lVar15 != 0) {
        plVar10 = (long *)0x0;
        do {
          if (!bVar3) {
            func_0x000108a07a20(&UNK_10b212c38);
            goto LAB_101473434;
          }
          if (plVar10 == (long *)0x0) {
            for (; plVar10 = plVar12, uVar11 != 0; uVar11 = uVar11 - 1) {
              plVar12 = (long *)plVar10[0x44];
            }
            plVar12 = (long *)0x0;
            uVar11 = 0;
            plVar17 = plVar10;
            if (*(short *)((long)plVar10 + 0x21a) == 0) goto LAB_1014730dc;
          }
          else {
            plVar17 = plVar10;
            if (*(ushort *)((long)plVar10 + 0x21a) <= uVar11) {
LAB_1014730dc:
              do {
                plVar10 = (long *)*plVar17;
                if (plVar10 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b2382c8);
                  goto LAB_101473434;
                }
                plVar12 = (long *)((long)plVar12 + 1);
                puVar1 = (ushort *)(plVar17 + 0x43);
                uVar11 = (ulong)*puVar1;
                plVar17 = plVar10;
              } while (*(ushort *)((long)plVar10 + 0x21a) <= *puVar1);
            }
          }
          uVar16 = uVar11 + 1;
          if (plVar12 != (long *)0x0) {
            plVar17 = plVar10 + uVar16;
            do {
              plVar17 = (long *)plVar17[0x44];
              plVar12 = (long *)((long)plVar12 + -1);
            } while (plVar12 != (long *)0x0);
            uVar16 = 0;
            if (lStack_1e0 != -0x8000000000000000) goto LAB_101473140;
LAB_10147338c:
            puVar9 = &UNK_10b24c5c0;
LAB_1014733a0:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar9);
            goto LAB_101473434;
          }
          plVar17 = plVar10;
          if (lStack_1e0 == -0x8000000000000000) goto LAB_10147338c;
LAB_101473140:
          lVar15 = plVar10[uVar11 * 3 + 0x23];
          lVar8 = plVar10[uVar11 * 3 + 0x24];
          uVar13 = plVar10[uVar11 * 3 + 3];
          if (uVar13 != 0) {
            lVar14 = plVar10[uVar11 * 3 + 2];
            lVar6 = _malloc(uVar13);
            if (lVar6 == 0) {
              func_0x0001087c9084(1,uVar13);
              goto LAB_101473434;
            }
            _memcpy(lVar6,lVar14,uVar13);
            if (uVar13 != 0x8000000000000000) goto joined_r0x000101473190;
LAB_1014732d4:
            FUN_100e040f0(&lStack_1e0);
            goto LAB_1014732dc;
          }
          lVar6 = 1;
joined_r0x000101473190:
          if (((uStack_198 != 0x8000000000000000) && (uStack_198 != 0)) &&
             (_free(lStack_190), lStack_1e0 == -0x8000000000000000)) {
            puVar9 = &UNK_10b24c5f0;
            uStack_198 = uVar13;
            lStack_190 = lVar6;
            uStack_188 = uVar13;
            goto LAB_1014733a0;
          }
          uStack_198 = 0x8000000000000000;
          if (uVar13 == 0x8000000000000000) {
            lStack_190 = lVar6;
            uStack_188 = uVar13;
            func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
            goto LAB_101473434;
          }
          lStack_190 = lVar6;
          uStack_188 = uVar13;
          uStack_d8 = uVar13;
          lStack_d0 = lVar6;
          uStack_c8 = uVar13;
          func_0x000100633f00(&lStack_c0,lVar15,lVar8);
          lVar6 = lStack_b8;
          if (lStack_c0 == -0x7ffffffffffffffb) {
            if (uVar13 != 0) {
              _free(lStack_d0);
            }
            goto LAB_1014732d4;
          }
          FUN_101497a9c(&lStack_180,&lStack_1e0,&uStack_d8,&lStack_c0);
          uStack_118 = uStack_170;
          lStack_120 = lStack_178;
          uStack_108 = uStack_160;
          uStack_110 = uStack_168;
          uStack_f8 = uStack_150;
          uStack_100 = uStack_158;
          uStack_e8 = uStack_140;
          uStack_f0 = uStack_148;
          uStack_e0 = uStack_138;
          if (lStack_178 != -0x7ffffffffffffffb) {
            FUN_100de6690(&lStack_120);
          }
          plVar12 = (long *)0x0;
          bVar3 = true;
          lVar4 = lVar4 + -1;
          uVar11 = uVar16;
          plVar10 = plVar17;
        } while (lVar4 != 0);
      }
      lStack_178 = lStack_1d8;
      lStack_180 = lStack_1e0;
      uStack_148 = uStack_1a8;
      uStack_150 = uStack_1b0;
      uStack_138 = uStack_198;
      uStack_140 = uStack_1a0;
      uStack_128 = uStack_188;
      lStack_130 = lStack_190;
      uStack_168 = uStack_1c8;
      uStack_170 = uStack_1d0;
      uStack_158 = uStack_1b8;
      uStack_160 = uStack_1c0;
      if (lStack_1e0 == -0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_101473434:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101473438);
        (*pcVar2)();
      }
      uStack_98 = uStack_1b8;
      uStack_a0 = uStack_1c0;
      uStack_88 = uStack_1a8;
      uStack_90 = uStack_1b0;
      uStack_80 = uStack_1a0;
      lStack_b8 = lStack_1d8;
      lStack_c0 = lStack_1e0;
      uStack_a8 = uStack_1c8;
      uStack_b0 = uStack_1d0;
      if ((uStack_198 & 0x7fffffffffffffff) != 0) {
        _free(lStack_190);
      }
      if (lStack_c0 != -0x7ffffffffffffffb) {
        FUN_101497a9c(&lStack_180,param_1,&lStack_1f8,&lStack_c0);
        lStack_1d8 = uStack_170;
        lStack_1e0 = lStack_178;
        uStack_1c8 = uStack_160;
        uStack_1d0 = uStack_168;
        uStack_1b8 = uStack_150;
        uStack_1c0 = uStack_158;
        uStack_1a8 = uStack_140;
        uStack_1b0 = uStack_148;
        uStack_1a0 = uStack_138;
        if (lStack_178 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_1e0);
        }
        return 0;
      }
      lStack_c0 = -0x7ffffffffffffffb;
      lVar6 = lStack_b8;
    }
LAB_1014732dc:
    _free(lStack_1f0);
    return lVar6;
  }
  uVar7 = func_0x0001087c9084(1,param_3);
  _free(lStack_1f0);
  uVar7 = __Unwind_Resume(uVar7);
  if (unaff_x22 != 0) {
    _free(lStack_d0);
  }
  FUN_100e040f0(&lStack_1e0);
  _free(lStack_1f0);
  __Unwind_Resume(uVar7);
  auVar18 = func_0x000108a07bc4();
  plVar10 = auVar18._0_8_;
  if (*plVar10 == -0x8000000000000000) {
    lStack_2d0 = 10;
    lVar15 = func_0x000108a4a0f8(&lStack_2d0,0,0);
    return lVar15;
  }
  lVar4 = _malloc(lVar15);
  if (lVar4 == 0) {
    func_0x0001087c9084(1,lVar15);
    lVar4 = lVar15;
  }
  else {
    _memcpy(lVar4,auVar18._8_8_,lVar15);
    if (plVar10[9] != -0x8000000000000000 && plVar10[9] != 0) {
      _free(plVar10[10]);
    }
    plVar10[10] = lVar4;
    plVar10[0xb] = lVar15;
    plVar10[9] = -0x8000000000000000;
    lStack_3a0 = plVar10[0xb];
    lStack_3a8 = plVar10[10];
    lVar4 = param_5 * 0x48;
    lStack_3b0 = lVar15;
    if (0x1c71c71c71c71c7 < param_5) {
      uVar7 = 0;
      goto LAB_10147355c;
    }
    if (lVar4 == 0) {
      uStack_398 = 0;
      lStack_390 = 8;
joined_r0x0001014735ac:
      uStack_388 = 0;
      if (param_5 != 0) {
        uStack_388 = 0;
        lVar15 = param_5 * 0x50;
        pauVar5 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
        plVar12 = plVar12 + 5;
        do {
          lVar4 = plVar12[-5];
          if (lVar4 < 2) {
            if (lVar4 == 0) {
              if (pauVar5[1][0] == '\x01') {
                auVar18 = *pauVar5;
              }
              else {
                auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                *(long *)(*pauVar5 + 8) = auVar18._8_8_;
                pauVar5[1][0] = 1;
              }
              *(long *)*pauVar5 = auVar18._0_8_ + 1;
              FUN_105dc99f8(&lStack_2d0,4,auVar18._0_8_,auVar18._8_8_);
              uStack_288 = 0x8000000000000000;
              if (lStack_2d0 != -0x7fffffffffffffff) {
                uStack_2f8 = uStack_298;
                uStack_300 = uStack_2a0;
                uStack_2e8 = 0x8000000000000000;
                uStack_2f0 = uStack_290;
                uStack_2d8 = uStack_278;
                uStack_2e0 = uStack_280;
                uStack_318 = uStack_2b8;
                lStack_320 = uStack_2c0;
                uStack_308 = uStack_2a8;
                uStack_310 = uStack_2b0;
                lStack_330 = lStack_2d0;
                uStack_328 = lStack_2c8;
                if (lStack_2d0 == -0x8000000000000000) {
LAB_101473684:
                  lStack_2d0 = 10;
                  lVar4 = func_0x000108a4a0f8(&lStack_2d0,0,0);
                }
                else {
                  lVar4 = func_0x0001006358e0(&lStack_330,&UNK_108cde34c,4,&UNK_108c60fec,4);
                  if (lVar4 == 0) {
                    if (lStack_330 == -0x8000000000000000) goto LAB_101473684;
                    lVar4 = FUN_10063fe00(&lStack_330,&UNK_108cade40,3,plVar12[-3],plVar12[-2]);
                    if (lVar4 == 0) {
                      if (lStack_330 == -0x8000000000000000) goto LAB_101473684;
                      lVar4 = FUN_10063fe00(&lStack_330,&UNK_108c61018,4,*plVar12,plVar12[1]);
                      if (lVar4 == 0) {
                        if (lStack_330 == -0x8000000000000000) goto LAB_101473684;
                        lVar4 = func_0x0001006437e8(&lStack_330,&UNK_108c61038,4,plVar12[3],
                                                    plVar12[4]);
                        if (lVar4 == 0) {
                          uStack_2a8 = uStack_308;
                          uStack_2b0 = uStack_310;
                          uStack_298 = uStack_2f8;
                          uStack_2a0 = uStack_300;
                          uStack_288 = uStack_2e8;
                          uStack_290 = uStack_2f0;
                          uStack_278 = uStack_2d8;
                          uStack_280 = uStack_2e0;
                          lStack_2c8 = uStack_328;
                          lStack_2d0 = lStack_330;
                          uStack_2b8 = uStack_318;
                          uStack_2c0 = lStack_320;
                          __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                                    (&lStack_380,&lStack_2d0);
                          goto LAB_1014737c8;
                        }
                      }
                    }
                  }
                }
                lStack_380 = -0x7ffffffffffffffb;
                lStack_378 = lVar4;
                FUN_100e040f0(&lStack_330);
                goto LAB_1014737c8;
              }
            }
            else {
              if (pauVar5[1][0] == '\x01') {
                auVar18 = *pauVar5;
              }
              else {
                auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                *(long *)(*pauVar5 + 8) = auVar18._8_8_;
                pauVar5[1][0] = 1;
              }
              *(long *)*pauVar5 = auVar18._0_8_ + 1;
              FUN_105dc99f8(&lStack_2d0,3,auVar18._0_8_,auVar18._8_8_);
              uStack_288 = 0x8000000000000000;
              if (lStack_2d0 != -0x7fffffffffffffff) {
                uStack_2f8 = uStack_298;
                uStack_300 = uStack_2a0;
                uStack_2e8 = 0x8000000000000000;
                uStack_2f0 = uStack_290;
                uStack_2d8 = uStack_278;
                uStack_2e0 = uStack_280;
                uStack_318 = uStack_2b8;
                lStack_320 = uStack_2c0;
                uStack_308 = uStack_2a8;
                uStack_310 = uStack_2b0;
                lStack_330 = lStack_2d0;
                uStack_328 = lStack_2c8;
                if (lStack_2d0 == -0x8000000000000000) {
LAB_101473774:
                  lStack_2d0 = 10;
                  lVar4 = func_0x000108a4a0f8(&lStack_2d0,0,0);
                }
                else {
                  lVar4 = func_0x0001006358e0(&lStack_330,&UNK_108cde34c,4,&UNK_108cade43,10);
                  if (lVar4 == 0) {
                    if (lStack_330 == -0x8000000000000000) goto LAB_101473774;
                    lVar4 = FUN_10063fe00(&lStack_330,&UNK_108cade40,3,*plVar12,plVar12[1]);
                    if (lVar4 == 0) {
                      if (lStack_330 == -0x8000000000000000) goto LAB_101473774;
                      lVar4 = func_0x000100643448(&lStack_330,&UNK_108c61038,4,plVar12 + -4);
                      if (lVar4 == 0) {
                        uStack_2a8 = uStack_308;
                        uStack_2b0 = uStack_310;
                        uStack_298 = uStack_2f8;
                        uStack_2a0 = uStack_300;
                        uStack_288 = uStack_2e8;
                        uStack_290 = uStack_2f0;
                        uStack_278 = uStack_2d8;
                        uStack_280 = uStack_2e0;
                        lStack_2c8 = uStack_328;
                        lStack_2d0 = lStack_330;
                        uStack_2b8 = uStack_318;
                        uStack_2c0 = lStack_320;
                        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                                  (&lStack_380,&lStack_2d0);
                        goto LAB_1014737c8;
                      }
                    }
                  }
                }
                lStack_380 = -0x7ffffffffffffffb;
                lStack_378 = lVar4;
                FUN_100e040f0(&lStack_330);
                goto LAB_1014737c8;
              }
            }
LAB_1014737c4:
            uStack_288 = 0x8000000000000000;
            lStack_380 = -0x7ffffffffffffffb;
            lStack_378 = lStack_2c8;
          }
          else if (lVar4 == 2) {
            if (pauVar5[1][0] == '\x01') {
              auVar18 = *pauVar5;
            }
            else {
              auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar5 + 8) = auVar18._8_8_;
              pauVar5[1][0] = 1;
            }
            *(long *)*pauVar5 = auVar18._0_8_ + 1;
            FUN_105dc99f8(&lStack_2d0,4,auVar18._0_8_,auVar18._8_8_);
            uStack_288 = 0x8000000000000000;
            if (lStack_2d0 == -0x7fffffffffffffff) goto LAB_1014737c4;
            uStack_2f8 = uStack_298;
            uStack_300 = uStack_2a0;
            uStack_2e8 = 0x8000000000000000;
            uStack_2f0 = uStack_290;
            uStack_2d8 = uStack_278;
            uStack_2e0 = uStack_280;
            uStack_318 = uStack_2b8;
            lStack_320 = uStack_2c0;
            uStack_308 = uStack_2a8;
            uStack_310 = uStack_2b0;
            lStack_330 = lStack_2d0;
            uStack_328 = lStack_2c8;
            if (lStack_2d0 == -0x8000000000000000) {
LAB_101473700:
              lStack_2d0 = 10;
              lVar4 = func_0x000108a4a0f8(&lStack_2d0,0,0);
            }
            else {
              lVar4 = func_0x0001006358e0(&lStack_330,&UNK_108cde34c,4,&UNK_108cade4d,6);
              if (lVar4 == 0) {
                if (lStack_330 == -0x8000000000000000) goto LAB_101473700;
                lVar4 = FUN_10063fe00(&lStack_330,&UNK_108cade40,3,plVar12[3],plVar12[4]);
                if (lVar4 == 0) {
                  if (lStack_330 == -0x8000000000000000) goto LAB_101473700;
                  lVar4 = func_0x000100643448(&lStack_330,&UNK_108cabfee,5,plVar12 + -4);
                  if (lVar4 == 0) {
                    if (lStack_330 == -0x8000000000000000) goto LAB_101473700;
                    lVar4 = func_0x000100643448(&lStack_330,&UNK_108c61038,4,plVar12 + -1);
                    if (lVar4 == 0) {
                      uStack_2a8 = uStack_308;
                      uStack_2b0 = uStack_310;
                      uStack_298 = uStack_2f8;
                      uStack_2a0 = uStack_300;
                      uStack_288 = uStack_2e8;
                      uStack_290 = uStack_2f0;
                      uStack_278 = uStack_2d8;
                      uStack_280 = uStack_2e0;
                      lStack_2c8 = uStack_328;
                      lStack_2d0 = lStack_330;
                      uStack_2b8 = uStack_318;
                      uStack_2c0 = lStack_320;
                      __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                                (&lStack_380,&lStack_2d0);
                      goto LAB_1014737c8;
                    }
                  }
                }
              }
            }
            lStack_380 = -0x7ffffffffffffffb;
            lStack_378 = lVar4;
            FUN_100e040f0(&lStack_330);
          }
          else {
            if (pauVar5[1][0] == '\x01') {
              auVar18 = *pauVar5;
            }
            else {
              auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
              *(long *)(*pauVar5 + 8) = auVar18._8_8_;
              pauVar5[1][0] = 1;
            }
            *(long *)*pauVar5 = auVar18._0_8_ + 1;
            FUN_105dc99f8(&lStack_2d0,2,auVar18._0_8_,auVar18._8_8_);
            uStack_288 = 0x8000000000000000;
            if (lStack_2d0 == -0x7fffffffffffffff) goto LAB_1014737c4;
            uStack_2f8 = uStack_298;
            uStack_300 = uStack_2a0;
            uStack_2e8 = 0x8000000000000000;
            uStack_2f0 = uStack_290;
            uStack_2d8 = uStack_278;
            uStack_2e0 = uStack_280;
            uStack_318 = uStack_2b8;
            lStack_320 = uStack_2c0;
            uStack_308 = uStack_2a8;
            uStack_310 = uStack_2b0;
            lStack_330 = lStack_2d0;
            uStack_328 = lStack_2c8;
            if (lStack_2d0 == -0x8000000000000000) {
LAB_101473814:
              lStack_2d0 = 10;
              lVar4 = func_0x000108a4a0f8(&lStack_2d0,0,0);
            }
            else {
              lVar4 = func_0x0001006358e0(&lStack_330,&UNK_108cde34c,4,&UNK_108ca7eab,7);
              if (lVar4 == 0) {
                if (lStack_330 == -0x8000000000000000) goto LAB_101473814;
                lVar4 = FUN_10063fe00(&lStack_330,&UNK_108cade40,3,plVar12[-3],plVar12[-2]);
                if (lVar4 != 0) goto LAB_1014738f0;
                uStack_2a8 = uStack_308;
                uStack_2b0 = uStack_310;
                uStack_298 = uStack_2f8;
                uStack_2a0 = uStack_300;
                uStack_288 = uStack_2e8;
                uStack_290 = uStack_2f0;
                uStack_278 = uStack_2d8;
                uStack_280 = uStack_2e0;
                lStack_2c8 = uStack_328;
                lStack_2d0 = lStack_330;
                uStack_2b8 = uStack_318;
                uStack_2c0 = lStack_320;
                __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                          (&lStack_380,&lStack_2d0);
                goto LAB_1014737c8;
              }
            }
LAB_1014738f0:
            lStack_380 = -0x7ffffffffffffffb;
            lStack_378 = lVar4;
            FUN_100e040f0(&lStack_330);
          }
LAB_1014737c8:
          lVar6 = lStack_378;
          uVar11 = uStack_388;
          lVar4 = lStack_390;
          if (lStack_380 == -0x7ffffffffffffffb) {
            lVar15 = uStack_388 + 1;
            lVar8 = lStack_390;
            while (lVar15 = lVar15 + -1, lVar15 != 0) {
              FUN_100de6690(lVar8);
              lVar8 = lVar8 + 0x48;
            }
            if (uStack_398 != 0) {
              _free(lVar4);
            }
            _free(lStack_3a8);
            return lVar6;
          }
          if (uStack_388 == uStack_398) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&uStack_398);
          }
          plVar17 = (long *)(lStack_390 + uVar11 * 0x48);
          plVar17[1] = lStack_378;
          *plVar17 = lStack_380;
          plVar17[3] = lStack_368;
          plVar17[2] = lStack_370;
          plVar17[5] = lStack_358;
          plVar17[4] = lStack_360;
          plVar17[7] = lStack_348;
          plVar17[6] = lStack_350;
          plVar17[8] = lStack_340;
          uStack_388 = uVar11 + 1;
          plVar12 = plVar12 + 10;
          lVar15 = lVar15 + -0x50;
        } while (lVar15 != 0);
      }
      uStack_318 = uStack_388;
      lStack_320 = lStack_390;
      lStack_330 = -0x7ffffffffffffffc;
      uStack_328 = uStack_398;
      FUN_101497a9c(&lStack_2d0,plVar10,&lStack_3b0,&lStack_330);
      lStack_378 = uStack_2c0;
      lStack_380 = lStack_2c8;
      lStack_368 = uStack_2b0;
      lStack_370 = uStack_2b8;
      lStack_358 = uStack_2a0;
      lStack_360 = uStack_2a8;
      lStack_348 = uStack_290;
      lStack_350 = uStack_298;
      lStack_340 = uStack_288;
      if (lStack_2c8 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_380);
      }
      return 0;
    }
    lStack_390 = _malloc(lVar4);
    uStack_398 = param_5;
    if (lStack_390 != 0) goto joined_r0x0001014735ac;
  }
  uVar7 = 8;
LAB_10147355c:
  func_0x0001087c9084(uVar7,lVar4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101473564);
  (*pcVar2)();
}

