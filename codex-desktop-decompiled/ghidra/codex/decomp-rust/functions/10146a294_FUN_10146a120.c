
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10146a120(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined2 *puVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulong uStack_438;
  long lStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  undefined1 (*pauStack_380) [16];
  undefined8 uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  undefined8 uStack_328;
  undefined1 (*pauStack_320) [16];
  undefined8 uStack_318;
  undefined8 uStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  ulong uStack_280;
  ulong uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
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
    uVar9 = func_0x000108a4a0f8(&uStack_90,0,0);
    return uVar9;
  }
  puVar4 = (undefined4 *)_malloc(5);
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar4 + 1) = 0x74;
    *puVar4 = 0x75706e69;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar4;
    param_1[0xb] = 5;
    param_1[9] = -0x8000000000000000;
    lStack_e0 = param_1[0xb];
    lStack_e8 = param_1[10];
    uStack_f0 = 5;
    FUN_100647abc(&lStack_d8,param_2,param_3);
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
  uVar5 = func_0x0001087c9084(1,5);
  _free(lStack_e8);
  auVar18 = __Unwind_Resume(uVar5);
  plVar13 = auVar18._8_8_;
  plVar6 = auVar18._0_8_;
  if (*plVar6 == -0x8000000000000000) {
    uStack_1e0 = 10;
    uVar9 = func_0x000108a4a0f8(&uStack_1e0,0,0);
    return uVar9;
  }
  puVar7 = (undefined2 *)_malloc(3);
  if (puVar7 == (undefined2 *)0x0) {
    uVar5 = func_0x0001087c9084(1,3);
    FUN_100e040f0(&uStack_240);
    _free(lStack_298);
    auVar18 = __Unwind_Resume(uVar5);
    puVar15 = auVar18._8_8_;
    plVar6 = auVar18._0_8_;
    if (*plVar6 == -0x8000000000000000) {
      uStack_370 = 10;
      uVar9 = func_0x000108a4a0f8(&uStack_370,0,0);
      return uVar9;
    }
    puVar4 = (undefined4 *)_malloc(7);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)((long)puVar4 + 3) = 0x746e6574;
      *puVar4 = 0x746e6f63;
      uVar9 = 0x8000000000000000;
      if (plVar6[9] != -0x8000000000000000 && plVar6[9] != 0) {
        _free(plVar6[10]);
      }
      plVar6[10] = (long)puVar4;
      plVar6[0xb] = 7;
      plVar6[9] = -0x8000000000000000;
      lStack_478 = plVar6[0xb];
      lStack_480 = plVar6[10];
      uStack_488 = 7;
      uVar16 = *puVar15;
      if (*puVar15 == 0x8000000000000000) goto LAB_10146a600;
      uVar9 = puVar15[2];
      puVar14 = (ulong *)(uVar9 * 0x48);
      if (0x1c71c71c71c71c7 < uVar9) {
        uVar5 = 0;
        goto LAB_10146a6bc;
      }
      uVar16 = puVar15[1];
      if (puVar14 == (ulong *)0x0) {
        uStack_438 = 0;
        lStack_430 = 8;
        uVar2 = uStack_438;
        lVar10 = lStack_430;
      }
      else {
        lVar10 = _malloc(puVar14);
        uVar2 = uVar9;
        if (lVar10 == 0) goto LAB_10146aaa8;
      }
      lStack_430 = lVar10;
      uStack_438 = uVar2;
      uStack_428 = 0;
      if (uVar9 != 0) {
        uStack_428 = 0;
        lVar10 = uVar9 << 5;
        pauVar11 = (undefined1 (*) [16])
                   (*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
        puVar17 = (undefined8 *)(uVar16 + 0x18);
        pauVar8 = pauVar11;
        do {
          if (*(int *)(puVar17 + -3) != 1) {
            if (pauVar11[1][0] == '\x01') {
              auVar18 = *pauVar11;
            }
            else {
              auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E(pauVar8);
              *(long *)(*pauVar11 + 8) = auVar18._8_8_;
              pauVar11[1][0] = 1;
            }
            *(long *)*pauVar11 = auVar18._0_8_ + 1;
            FUN_105dc99f8(&uStack_370,2,auVar18._0_8_,auVar18._8_8_);
            uStack_328 = 0x8000000000000000;
            if (uStack_370 != 0x8000000000000001) {
              uStack_398 = uStack_338;
              uStack_3a0 = uStack_340;
              uStack_388 = 0x8000000000000000;
              uStack_390 = uStack_330;
              uStack_378 = uStack_318;
              pauStack_380 = pauStack_320;
              uStack_3b8 = uStack_358;
              uStack_3c0 = uStack_360;
              uStack_3a8 = uStack_348;
              uStack_3b0 = uStack_350;
              uStack_3d0 = uStack_370;
              uStack_3c8 = uStack_368;
              if (uStack_370 == 0x8000000000000000) {
LAB_10146a9d0:
                uStack_370 = 10;
                uVar9 = func_0x000108a4a0f8(&uStack_370,0,0);
              }
              else {
                uVar9 = func_0x0001006358e0(&uStack_3d0,&UNK_108cde34c,4,&UNK_108cae23d,0xe);
                if (uVar9 == 0) {
                  if (uStack_3d0 == 0x8000000000000000) goto LAB_10146a9d0;
                  uVar9 = FUN_10063fe00(&uStack_3d0,&UNK_108c72520,4,puVar17[-1],*puVar17);
                  if (uVar9 == 0) goto LAB_10146a8cc;
                }
              }
              uStack_418 = uVar9;
              FUN_100e040f0(&uStack_3d0);
              goto LAB_10146aa1c;
            }
LAB_10146a9c8:
            uStack_328 = 0x8000000000000000;
            uStack_418 = uStack_368;
LAB_10146aa1c:
            uVar9 = uStack_418;
            lVar1 = lStack_430;
            lVar10 = uStack_428 + 1;
            lVar12 = lStack_430;
            while (lVar10 = lVar10 + -1, lVar10 != 0) {
              FUN_100de6690(lVar12);
              lVar12 = lVar12 + 0x48;
            }
            if (uStack_438 != 0) {
              _free(lVar1);
            }
            _free(lStack_480);
            return uVar9;
          }
          if (pauVar11[1][0] == '\x01') {
            auVar18 = *pauVar11;
          }
          else {
            auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E(pauVar8);
            *(long *)(*pauVar11 + 8) = auVar18._8_8_;
            pauVar11[1][0] = 1;
          }
          *(long *)*pauVar11 = auVar18._0_8_ + 1;
          FUN_105dc99f8(&uStack_370,2,auVar18._0_8_,auVar18._8_8_);
          uStack_328 = 0x8000000000000000;
          if (uStack_370 == 0x8000000000000001) goto LAB_10146a9c8;
          uStack_398 = uStack_338;
          uStack_3a0 = uStack_340;
          uStack_388 = 0x8000000000000000;
          uStack_390 = uStack_330;
          uStack_378 = uStack_318;
          pauStack_380 = pauStack_320;
          uStack_3b8 = uStack_358;
          uStack_3c0 = uStack_360;
          uStack_3a8 = uStack_348;
          uStack_3b0 = uStack_350;
          uStack_3d0 = uStack_370;
          uStack_3c8 = uStack_368;
          if (uStack_370 == 0x8000000000000000) {
LAB_10146a9f8:
            uStack_370 = 10;
            uVar9 = func_0x000108a4a0f8(&uStack_370,0,0);
LAB_10146aa10:
            uStack_418 = uVar9;
            FUN_100e040f0(&uStack_3d0);
            goto LAB_10146aa1c;
          }
          uVar9 = func_0x0001006358e0(&uStack_3d0,&UNK_108cde34c,4,&UNK_108c72520,4);
          if (uVar9 != 0) goto LAB_10146aa10;
          if (uStack_3d0 == 0x8000000000000000) goto LAB_10146a9f8;
          uVar9 = FUN_10063fe00(&uStack_3d0,&UNK_108c72520,4,puVar17[-1],*puVar17);
          if (uVar9 != 0) goto LAB_10146aa10;
LAB_10146a8cc:
          uVar9 = uStack_3d0;
          if (uStack_3d0 == 0x8000000000000000) {
            if (uStack_3c8 == 0x8000000000000005) {
              func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
              goto LAB_10146aa98;
            }
            uStack_410 = uStack_3b8;
            uStack_418 = uStack_3c0;
            uStack_400 = uStack_3a8;
            uStack_408 = uStack_3b0;
            uStack_3f0 = uStack_398;
            uStack_3f8 = uStack_3a0;
            uStack_3e8 = uStack_390;
            uStack_3e0 = uStack_388;
            uStack_420 = uStack_3c8;
            pauVar8 = (undefined1 (*) [16])0x0;
            uVar9 = uStack_3c8;
          }
          else {
            uStack_420 = uStack_3d0;
            uStack_418 = uStack_3c8;
            uStack_408 = uStack_3b8;
            uStack_410 = uStack_3c0;
            uStack_3f8 = uStack_3a8;
            uStack_400 = uStack_3b0;
            uStack_3e8 = uStack_398;
            uStack_3f0 = uStack_3a0;
            uStack_3e0 = uStack_390;
            pauVar8 = pauStack_380;
            if ((uStack_388 & 0x7fffffffffffffff) != 0) {
              pauVar8 = (undefined1 (*) [16])_free();
            }
          }
          uVar16 = uStack_428;
          if (uVar9 == 0x8000000000000005) goto LAB_10146aa1c;
          if (uStack_428 == uStack_438) {
            pauVar8 = (undefined1 (*) [16])
                      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE
                                (&uStack_438);
          }
          puVar15 = (ulong *)(lStack_430 + uVar16 * 0x48);
          puVar15[1] = uStack_418;
          *puVar15 = uStack_420;
          puVar15[3] = uStack_408;
          puVar15[2] = uStack_410;
          puVar15[5] = uStack_3f8;
          puVar15[4] = uStack_400;
          puVar15[7] = uStack_3e8;
          puVar15[6] = uStack_3f0;
          puVar15[8] = uStack_3e0;
          uStack_428 = uVar16 + 1;
          puVar17 = puVar17 + 4;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
      }
      uStack_468 = uStack_428;
      lStack_470 = lStack_430;
      uVar9 = 0x8000000000000004;
      uVar16 = uStack_438;
LAB_10146a600:
      uStack_3b8 = uStack_468;
      uStack_3c0 = lStack_470;
      uStack_3a8 = uStack_458;
      uStack_3b0 = uStack_460;
      uStack_398 = uStack_448;
      uStack_3a0 = uStack_450;
      uStack_390 = uStack_440;
      uStack_3d0 = uVar9;
      uStack_3c8 = uVar16;
      FUN_101497a9c(&uStack_370,plVar6,&uStack_488,&uStack_3d0);
      uStack_418 = uStack_360;
      uStack_420 = uStack_368;
      uStack_408 = uStack_350;
      uStack_410 = uStack_358;
      uStack_3f8 = uStack_340;
      uStack_400 = uStack_348;
      uStack_3e8 = uStack_330;
      uStack_3f0 = uStack_338;
      uStack_3e0 = uStack_328;
      if (uStack_368 != 0x8000000000000005) {
        FUN_100de6690(&uStack_420);
      }
      return 0;
    }
    func_0x0001087c9084(1,7);
    puVar14 = puVar15;
LAB_10146aaa8:
    uVar5 = 8;
LAB_10146a6bc:
    func_0x0001087c9084(uVar5,puVar14);
LAB_10146aa98:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10146aa9c);
    (*pcVar3)();
  }
  *(undefined1 *)(puVar7 + 1) = 0x73;
  *puVar7 = 0x7761;
  if (plVar6[9] != -0x8000000000000000 && plVar6[9] != 0) {
    _free(plVar6[10]);
  }
  plVar6[10] = (long)puVar7;
  plVar6[0xb] = 3;
  plVar6[9] = -0x8000000000000000;
  lStack_290 = plVar6[0xb];
  lStack_298 = plVar6[10];
  uStack_2a0 = 3;
  if (*plVar13 == -0x7fffffffffffffff) {
    lStack_288 = -0x8000000000000000;
LAB_10146a338:
    FUN_101497a9c(&uStack_1e0,plVar6,&uStack_2a0,&lStack_288);
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
    return 0;
  }
  pauVar8 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar8[1][0] == '\x01') {
    auVar18 = *pauVar8;
  }
  else {
    auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar8 + 8) = auVar18._8_8_;
    pauVar8[1][0] = 1;
  }
  *(long *)*pauVar8 = auVar18._0_8_ + 1;
  FUN_105dc99f8(&uStack_1e0,2,auVar18._0_8_,auVar18._8_8_);
  uStack_198 = 0x8000000000000000;
  uVar9 = uStack_1d8;
  if (uStack_1e0 == 0x8000000000000001) goto LAB_10146a450;
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
LAB_10146a408:
    uStack_1e0 = 10;
    uVar9 = func_0x000108a4a0f8(&uStack_1e0,0,0);
  }
  else {
    uVar9 = func_0x000100643448(&uStack_240,&UNK_108cabb35,7,plVar13);
    if (uVar9 == 0) {
      if (uStack_240 == 0x8000000000000000) goto LAB_10146a408;
      uVar9 = func_0x000100643448(&uStack_240,&UNK_108cada35,6,plVar13 + 3);
      if (uVar9 == 0) {
        uStack_1b8 = uStack_218;
        uStack_1c0 = uStack_220;
        uStack_1a8 = uStack_208;
        uStack_1b0 = uStack_210;
        uStack_198 = uStack_1f8;
        uStack_1a0 = uStack_200;
        uStack_188 = uStack_1e8;
        uStack_190 = uStack_1f0;
        uStack_1d8 = uStack_238;
        uStack_1e0 = uStack_240;
        uStack_1c8 = uStack_228;
        uStack_1d0 = uStack_230;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (&lStack_288,&uStack_1e0);
        uVar9 = uStack_280;
        if (lStack_288 != -0x7ffffffffffffffb) goto LAB_10146a338;
        goto LAB_10146a450;
      }
    }
  }
  FUN_100e040f0(&uStack_240);
LAB_10146a450:
  _free(lStack_298);
  return uVar9;
}

