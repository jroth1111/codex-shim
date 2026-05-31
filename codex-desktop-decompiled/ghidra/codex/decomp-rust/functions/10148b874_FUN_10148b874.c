
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10148b874(long *param_1,int *param_2,undefined8 param_3)

{
  ushort *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long unaff_x21;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_590;
  long lStack_588;
  long lStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_3f0;
  long lStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
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
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  long lStack_1c8;
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
  undefined4 *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  undefined4 *puStack_118;
  long lStack_110;
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
  undefined4 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (*param_1 == -0x8000000000000000) {
    lStack_180 = 10;
    lVar16 = func_0x000108a4a0f8(&lStack_180,0,0);
    return lVar16;
  }
  puVar5 = (undefined4 *)_malloc(7);
  if (puVar5 == (undefined4 *)0x0) {
    uVar8 = func_0x0001087c9084(1,7);
    _free(lStack_1f0);
    uVar8 = __Unwind_Resume(uVar8);
    if (unaff_x21 != 0) {
      _free(lStack_d0);
    }
    FUN_100e040f0(&lStack_1e0);
    _free(lStack_1f0);
    __Unwind_Resume(uVar8);
    auVar19 = func_0x000108a07bc4();
    lVar16 = auVar19._8_8_;
    plVar11 = auVar19._0_8_;
    if (*plVar11 == -0x8000000000000000) {
      lStack_2a0 = 10;
      lVar16 = func_0x000108a4a0f8(&lStack_2a0,0,0);
      return lVar16;
    }
    puVar5 = (undefined4 *)_malloc(4);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0x7473696c;
      if (plVar11[9] != -0x8000000000000000 && plVar11[9] != 0) {
        _free(plVar11[10]);
      }
      plVar11[10] = (long)puVar5;
      plVar11[0xb] = 4;
      plVar11[9] = -0x8000000000000000;
      lStack_350 = plVar11[0xb];
      lStack_358 = plVar11[10];
      uStack_360 = 4;
      pauVar6 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar6[1][0] == '\x01') {
        auVar19 = *pauVar6;
      }
      else {
        auVar19 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar6 + 8) = auVar19._8_8_;
        pauVar6[1][0] = 1;
      }
      *(long *)*pauVar6 = auVar19._0_8_ + 1;
      FUN_105dc99f8(&lStack_2a0,10,auVar19._0_8_,auVar19._8_8_);
      uStack_258 = 0x8000000000000000;
      lVar15 = lStack_298;
      if (lStack_2a0 != -0x7fffffffffffffff) {
        uStack_2c8 = uStack_268;
        uStack_2d0 = uStack_270;
        uStack_2b8 = 0x8000000000000000;
        uStack_2c0 = uStack_260;
        uStack_2a8 = uStack_248;
        uStack_2b0 = uStack_250;
        uStack_2e8 = uStack_288;
        uStack_2f0 = uStack_290;
        uStack_2d8 = uStack_278;
        uStack_2e0 = uStack_280;
        lStack_300 = lStack_2a0;
        lStack_2f8 = lStack_298;
        lVar15 = FUN_1014788c0(&lStack_300,&UNK_108cab321,7,lVar16);
        if ((((((lVar15 == 0) &&
               (lVar15 = FUN_1014788c0(&lStack_300,&UNK_108cab328,9,lVar16 + 0x20), lVar15 == 0)) &&
              (lVar15 = FUN_1014788c0(&lStack_300,&UNK_108cab30e,9,lVar16 + 0x40), lVar15 == 0)) &&
             (((lVar15 = FUN_1014788c0(&lStack_300,&UNK_108cab317,10,lVar16 + 0x60), lVar15 == 0 &&
               (lVar15 = FUN_1014788c0(&lStack_300,&UNK_108cab4d7,7,lVar16 + 0x80), lVar15 == 0)) &&
              ((lVar15 = FUN_1014788c0(&lStack_300,&UNK_108cab4de,9,lVar16 + 0xa0), lVar15 == 0 &&
               ((lVar15 = FUN_1014788c0(&lStack_300,&UNK_108c981b8,8,lVar16 + 0xc0), lVar15 == 0 &&
                (lVar15 = FUN_1014788c0(&lStack_300,&UNK_108cab4e7,0xb,lVar16 + 0xe0), lVar15 == 0))
               )))))) &&
            (lVar15 = FUN_1014788c0(&lStack_300,&UNK_108cab4f2,6,lVar16 + 0x100), lVar15 == 0)) &&
           (lVar15 = FUN_1014788c0(&lStack_300,&UNK_108cab265,6,lVar16 + 0x120), lVar15 == 0)) {
          uStack_278 = uStack_2d8;
          uStack_280 = uStack_2e0;
          uStack_268 = uStack_2c8;
          uStack_270 = uStack_2d0;
          uStack_258 = uStack_2b8;
          uStack_260 = uStack_2c0;
          uStack_248 = uStack_2a8;
          uStack_250 = uStack_2b0;
          lStack_298 = lStack_2f8;
          lStack_2a0 = lStack_300;
          uStack_288 = uStack_2e8;
          uStack_290 = uStack_2f0;
          __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                    (&lStack_348,&lStack_2a0);
          lVar15 = lStack_340;
          if (lStack_348 != -0x7ffffffffffffffb) {
            FUN_101497a9c(&lStack_2a0,plVar11,&uStack_360,&lStack_348);
            lStack_2f8 = uStack_290;
            lStack_300 = lStack_298;
            uStack_2e8 = uStack_280;
            uStack_2f0 = uStack_288;
            uStack_2d8 = uStack_270;
            uStack_2e0 = uStack_278;
            uStack_2c8 = uStack_260;
            uStack_2d0 = uStack_268;
            uStack_2c0 = uStack_258;
            if (lStack_298 != -0x7ffffffffffffffb) {
              FUN_100de6690(&lStack_300);
            }
            return 0;
          }
        }
        else {
          FUN_100e040f0(&lStack_300);
        }
      }
      _free(lStack_358);
      return lVar15;
    }
    uVar8 = func_0x0001087c9084(1,4);
    FUN_100e040f0(&lStack_300);
    _free(lStack_358);
    auVar19 = __Unwind_Resume(uVar8);
    plVar11 = auVar19._0_8_;
    if (*plVar11 == -0x8000000000000000) {
      uStack_3f0 = 10;
      lVar16 = func_0x000108a4a0f8(&uStack_3f0,0,0);
      return lVar16;
    }
    puVar7 = (undefined8 *)_malloc(8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0x6e6f697461727564;
      if (plVar11[9] != -0x8000000000000000 && plVar11[9] != 0) {
        _free(plVar11[10]);
      }
      plVar11[10] = (long)puVar7;
      plVar11[0xb] = 8;
      plVar11[9] = -0x8000000000000000;
      lStack_440 = plVar11[0xb];
      lStack_448 = plVar11[10];
      uStack_450 = 8;
      FUN_10064c3a8(&lStack_438,auVar19._8_8_,param_3);
      if (lStack_438 == -0x7ffffffffffffffb) {
        _free(lStack_448);
        return lStack_430;
      }
      FUN_101497a9c(&uStack_3f0,plVar11,&uStack_450,&lStack_438);
      uStack_498 = uStack_3e0;
      lStack_4a0 = lStack_3e8;
      uStack_488 = uStack_3d0;
      uStack_490 = uStack_3d8;
      uStack_478 = uStack_3c0;
      uStack_480 = uStack_3c8;
      uStack_468 = uStack_3b0;
      uStack_470 = uStack_3b8;
      uStack_460 = uStack_3a8;
      if (lStack_3e8 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_4a0);
      }
      return 0;
    }
    uVar8 = func_0x0001087c9084(1,8);
    _free(lStack_448);
    auVar19 = __Unwind_Resume(uVar8);
    uVar13 = auVar19._8_8_;
    plVar11 = auVar19._0_8_;
    if (*plVar11 == -0x8000000000000000) {
      uStack_530 = 10;
      lVar16 = func_0x000108a4a0f8(&uStack_530,0,0);
      return lVar16;
    }
    puVar5 = (undefined4 *)_malloc(6);
    if (puVar5 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,6);
      goto LAB_10148c514;
    }
    *(undefined2 *)(puVar5 + 1) = 0x7375;
    *puVar5 = 0x74617473;
    if (plVar11[9] != -0x8000000000000000 && plVar11[9] != 0) {
      _free(plVar11[10]);
    }
    plVar11[10] = (long)puVar5;
    plVar11[0xb] = 6;
    plVar11[9] = -0x8000000000000000;
    lStack_580 = plVar11[0xb];
    lStack_588 = plVar11[10];
    uStack_590 = 6;
    uVar2 = auVar19._8_4_ & 0xff;
    if (uVar2 == 1 || (uVar13 & 0xff) == 0) {
      if ((uVar13 & 0xff) != 0) {
        uVar13 = 9;
        puStack_568 = (undefined8 *)_malloc(9);
        if (puStack_568 != (undefined8 *)0x0) {
          *(undefined1 *)(puStack_568 + 1) = 100;
          *puStack_568 = 0x6574656c706d6f63;
          uStack_570 = 9;
          goto LAB_10148c470;
        }
LAB_10148c514:
        func_0x0001087c9084(1,uVar13);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10148c524);
        (*pcVar4)();
      }
      uVar13 = 7;
      puStack_568 = (undefined8 *)_malloc(7);
      if (puStack_568 == (undefined8 *)0x0) goto LAB_10148c514;
      *(undefined4 *)((long)puStack_568 + 3) = 0x676e696e;
      uVar10 = 0x6e6e7572;
    }
    else {
      if (uVar2 == 2) {
        uVar13 = 6;
        puStack_568 = (undefined8 *)_malloc(6);
        if (puStack_568 == (undefined8 *)0x0) goto LAB_10148c514;
        *(undefined2 *)((long)puStack_568 + 4) = 0x6465;
        *(undefined4 *)puStack_568 = 0x6c696166;
        uStack_570 = 6;
        goto LAB_10148c470;
      }
      uVar13 = 7;
      if (uVar2 == 3) {
        puStack_568 = (undefined8 *)_malloc(7);
        if (puStack_568 == (undefined8 *)0x0) goto LAB_10148c514;
        *(undefined4 *)((long)puStack_568 + 3) = 0x64656b63;
        uVar10 = 0x636f6c62;
      }
      else {
        puStack_568 = (undefined8 *)_malloc(7);
        if (puStack_568 == (undefined8 *)0x0) goto LAB_10148c514;
        *(undefined4 *)((long)puStack_568 + 3) = 0x64657070;
        uVar10 = 0x706f7473;
      }
    }
    *(undefined4 *)puStack_568 = uVar10;
    uStack_570 = 7;
LAB_10148c470:
    uStack_578 = 0x8000000000000003;
    uStack_560 = uStack_570;
    FUN_101497a9c(&uStack_530,plVar11,&uStack_590,&uStack_578);
    uStack_5d8 = uStack_520;
    lStack_5e0 = lStack_528;
    uStack_5c8 = uStack_510;
    uStack_5d0 = uStack_518;
    uStack_5b8 = uStack_500;
    uStack_5c0 = uStack_508;
    uStack_5a8 = uStack_4f0;
    uStack_5b0 = uStack_4f8;
    uStack_5a0 = uStack_4e8;
    if (lStack_528 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_5e0);
    }
    return 0;
  }
  *(undefined4 *)((long)puVar5 + 3) = 0x736e6961;
  *puVar5 = 0x616d6f64;
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  param_1[10] = (long)puVar5;
  param_1[0xb] = 7;
  param_1[9] = -0x8000000000000000;
  lStack_1e8 = param_1[0xb];
  lStack_1f0 = param_1[10];
  uStack_1f8 = 7;
  if (*param_2 == 1) {
    pauVar6 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar6[1][0] == '\x01') {
      auVar19 = *pauVar6;
    }
    else {
      auVar19 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar6 + 8) = auVar19._8_8_;
      pauVar6[1][0] = 1;
    }
    *(long *)*pauVar6 = auVar19._0_8_ + 1;
    FUN_105dc99f8(&lStack_180,0,auVar19._0_8_,auVar19._8_8_);
    uStack_138 = 0x8000000000000000;
    puVar5 = (undefined4 *)lStack_178;
    if (lStack_180 != -0x7fffffffffffffff) {
      uStack_1a8 = uStack_148;
      uStack_1b0 = uStack_150;
      uStack_198 = 0x8000000000000000;
      uStack_1a0 = uStack_140;
      uStack_188 = uStack_128;
      lStack_190 = lStack_130;
      lStack_1c8 = lStack_168;
      puStack_1d0 = puStack_170;
      uStack_1b8 = uStack_158;
      uStack_1c0 = uStack_160;
      lStack_1e0 = lStack_180;
      puStack_1d8 = (undefined4 *)lStack_178;
      plVar11 = *(long **)(param_2 + 2);
      if ((plVar11 != (long *)0x0) && (lVar16 = *(long *)(param_2 + 6), lVar16 != 0)) {
        uVar13 = *(ulong *)(param_2 + 4);
        plVar12 = (long *)0x0;
        do {
          if (plVar12 == (long *)0x0) {
            for (; plVar12 = plVar11, uVar13 != 0; uVar13 = uVar13 - 1) {
              plVar11 = (long *)plVar12[0x24];
            }
            plVar11 = (long *)0x0;
            uVar13 = 0;
            plVar18 = plVar12;
            if (*(short *)((long)plVar12 + 0x112) == 0) goto LAB_10148ba00;
          }
          else {
            plVar18 = plVar12;
            if (*(ushort *)((long)plVar12 + 0x112) <= uVar13) {
LAB_10148ba00:
              do {
                plVar12 = (long *)*plVar18;
                if (plVar12 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b2382c8);
                  goto LAB_10148bda4;
                }
                plVar11 = (long *)((long)plVar11 + 1);
                puVar1 = (ushort *)(plVar18 + 0x22);
                uVar13 = (ulong)*puVar1;
                plVar18 = plVar12;
              } while (*(ushort *)((long)plVar12 + 0x112) <= *puVar1);
            }
          }
          uVar17 = uVar13 + 1;
          if (plVar11 == (long *)0x0) {
            plVar18 = plVar12;
            if (lStack_1e0 != -0x8000000000000000) goto LAB_10148ba64;
LAB_10148bd00:
            puVar9 = &UNK_10b24c5c0;
LAB_10148bd14:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar9);
            goto LAB_10148bda4;
          }
          plVar18 = plVar12 + uVar17;
          do {
            plVar18 = (long *)plVar18[0x24];
            plVar11 = (long *)((long)plVar11 + -1);
          } while (plVar11 != (long *)0x0);
          uVar17 = 0;
          if (lStack_1e0 == -0x8000000000000000) goto LAB_10148bd00;
LAB_10148ba64:
          bVar3 = *(byte *)((long)plVar12 + uVar13 + 0x114);
          uVar14 = plVar12[uVar13 * 3 + 3];
          if (uVar14 == 0) {
            puVar5 = (undefined4 *)0x1;
          }
          else {
            lVar15 = plVar12[uVar13 * 3 + 2];
            puVar5 = (undefined4 *)_malloc(uVar14);
            if (puVar5 == (undefined4 *)0x0) {
              func_0x0001087c9084(1,uVar14);
              goto LAB_10148bda4;
            }
            _memcpy(puVar5,lVar15,uVar14);
            if (uVar14 == 0x8000000000000000) {
              FUN_100e040f0(&lStack_1e0);
              goto LAB_10148bcd4;
            }
          }
          if (((uStack_198 != 0x8000000000000000) && (uStack_198 != 0)) &&
             (_free(lStack_190), lStack_1e0 == -0x8000000000000000)) {
            puVar9 = &UNK_10b24c5f0;
            uStack_198 = uVar14;
            lStack_190 = (long)puVar5;
            uStack_188 = uVar14;
            goto LAB_10148bd14;
          }
          uStack_198 = 0x8000000000000000;
          if (uVar14 == 0x8000000000000000) {
            lStack_190 = (long)puVar5;
            uStack_188 = uVar14;
            func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
            goto LAB_10148bda4;
          }
          uStack_d8 = uVar14;
          lStack_d0 = (long)puVar5;
          uStack_c8 = uVar14;
          if ((bVar3 & 1) == 0) {
            lStack_190 = (long)puVar5;
            uStack_188 = uVar14;
            puVar5 = (undefined4 *)_malloc(5);
            uVar8 = 5;
            if (puVar5 == (undefined4 *)0x0) goto LAB_10148bd8c;
            *(undefined1 *)(puVar5 + 1) = 0x77;
            *puVar5 = 0x6f6c6c61;
            lStack_b8 = 5;
          }
          else {
            lStack_190 = (long)puVar5;
            uStack_188 = uVar14;
            puVar5 = (undefined4 *)_malloc(4);
            uVar8 = 4;
            if (puVar5 == (undefined4 *)0x0) {
LAB_10148bd8c:
              func_0x0001087c9084(1,uVar8);
              goto LAB_10148bda4;
            }
            *puVar5 = 0x796e6564;
            lStack_b8 = 4;
          }
          lStack_c0 = -0x7ffffffffffffffd;
          puStack_b0 = puVar5;
          lStack_a8 = lStack_b8;
          FUN_101497a9c(&lStack_180,&lStack_1e0,&uStack_d8,&lStack_c0);
          puStack_118 = puStack_170;
          lStack_120 = lStack_178;
          uStack_108 = uStack_160;
          lStack_110 = lStack_168;
          uStack_f8 = uStack_150;
          uStack_100 = uStack_158;
          uStack_e8 = uStack_140;
          uStack_f0 = uStack_148;
          uStack_e0 = uStack_138;
          if (lStack_178 != -0x7ffffffffffffffb) {
            FUN_100de6690(&lStack_120);
          }
          plVar11 = (long *)0x0;
          lVar16 = lVar16 + -1;
          uVar13 = uVar17;
          plVar12 = plVar18;
        } while (lVar16 != 0);
      }
      lStack_178 = (long)puStack_1d8;
      lStack_180 = lStack_1e0;
      uStack_148 = uStack_1a8;
      uStack_150 = uStack_1b0;
      uStack_138 = uStack_198;
      uStack_140 = uStack_1a0;
      uStack_128 = uStack_188;
      lStack_130 = lStack_190;
      lStack_168 = lStack_1c8;
      puStack_170 = puStack_1d0;
      uStack_158 = uStack_1b8;
      uStack_160 = uStack_1c0;
      if (lStack_1e0 == -0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_10148bda4:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10148bda8);
        (*pcVar4)();
      }
      uStack_98 = uStack_1b8;
      uStack_a0 = uStack_1c0;
      uStack_88 = uStack_1a8;
      uStack_90 = uStack_1b0;
      uStack_80 = uStack_1a0;
      lStack_b8 = (long)puStack_1d8;
      lStack_c0 = lStack_1e0;
      lStack_a8 = lStack_1c8;
      puStack_b0 = puStack_1d0;
      puVar5 = puStack_1d8;
      if ((uStack_198 & 0x7fffffffffffffff) != 0) {
        _free(lStack_190);
        puVar5 = (undefined4 *)lStack_b8;
      }
      lStack_b8 = (long)puVar5;
      if (lStack_c0 != -0x7ffffffffffffffb) goto LAB_10148bbc4;
    }
LAB_10148bcd4:
    _free(lStack_1f0);
  }
  else {
    lStack_c0 = -0x8000000000000000;
LAB_10148bbc4:
    FUN_101497a9c(&lStack_180,param_1,&uStack_1f8,&lStack_c0);
    puStack_1d8 = puStack_170;
    lStack_1e0 = lStack_178;
    lStack_1c8 = uStack_160;
    puStack_1d0 = (undefined4 *)lStack_168;
    uStack_1b8 = uStack_150;
    uStack_1c0 = uStack_158;
    uStack_1a8 = uStack_140;
    uStack_1b0 = uStack_148;
    uStack_1a0 = uStack_138;
    if (lStack_178 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_1e0);
    }
    puVar5 = (undefined4 *)0x0;
  }
  return (long)puVar5;
}

