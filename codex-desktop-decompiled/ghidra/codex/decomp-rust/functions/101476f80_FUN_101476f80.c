
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101476f80(long *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
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
  long lStack_440;
  long lStack_438;
  undefined4 *puStack_430;
  undefined8 uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  undefined4 *puStack_3d0;
  undefined8 uStack_3c8;
  ulong uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined4 *puStack_370;
  undefined8 uStack_368;
  long lStack_360;
  ulong uStack_358;
  undefined4 *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
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
  undefined8 uStack_210;
  undefined8 uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_a0 = 10;
    uVar6 = func_0x000108a4a0f8(&uStack_a0,0,0);
    return uVar6;
  }
  puVar4 = (undefined8 *)_malloc(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0x6c61766f72707061;
    *puVar4 = 0x5f6b726f7774656e;
    puVar4[2] = 0x747865746e6f635f;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar4;
    param_1[0xb] = 0x18;
    param_1[9] = -0x8000000000000000;
    lStack_150 = param_1[0xb];
    lStack_158 = param_1[10];
    uStack_160 = 0x18;
    if (*param_2 == -0x8000000000000000) {
      lStack_148 = -0x8000000000000000;
LAB_101477028:
      FUN_101497a9c(&uStack_a0,param_1,&uStack_160,&lStack_148);
      uStack_f8 = uStack_90;
      uStack_100 = uStack_98;
      uStack_e8 = uStack_80;
      uStack_f0 = uStack_88;
      uStack_d8 = uStack_70;
      uStack_e0 = uStack_78;
      uStack_c8 = uStack_60;
      uStack_d0 = uStack_68;
      uStack_c0 = uStack_58;
      if (uStack_98 != 0x8000000000000005) {
        FUN_100de6690(&uStack_100);
      }
      return 0;
    }
    pauVar5 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar5[1][0] == '\x01') {
      auVar13 = *pauVar5;
    }
    else {
      auVar13 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar5 + 8) = auVar13._8_8_;
      pauVar5[1][0] = 1;
    }
    *(long *)*pauVar5 = auVar13._0_8_ + 1;
    FUN_105dc99f8(&uStack_a0,2,auVar13._0_8_,auVar13._8_8_);
    uStack_58 = 0x8000000000000000;
    uVar6 = uStack_98;
    if (uStack_a0 != 0x8000000000000001) {
      uStack_c8 = uStack_68;
      uStack_d0 = uStack_70;
      uStack_b8 = 0x8000000000000000;
      uStack_c0 = uStack_60;
      uStack_a8 = uStack_48;
      uStack_b0 = uStack_50;
      uStack_e8 = uStack_88;
      uStack_f0 = uStack_90;
      uStack_d8 = uStack_78;
      uStack_e0 = uStack_80;
      uStack_100 = uStack_a0;
      uStack_f8 = uStack_98;
      if (uStack_a0 == 0x8000000000000000) {
        uStack_a0 = 10;
        uVar6 = func_0x000108a4a0f8(&uStack_a0,0,0);
      }
      else {
        uVar6 = FUN_10063fe00(&uStack_100,&UNK_108c73770,4,param_2[1],param_2[2]);
        if ((uVar6 == 0) && (uVar6 = FUN_10147e800(&uStack_100,(char)param_2[3]), uVar6 == 0)) {
          uStack_78 = uStack_d8;
          uStack_80 = uStack_e0;
          uStack_68 = uStack_c8;
          uStack_70 = uStack_d0;
          uStack_58 = uStack_b8;
          uStack_60 = uStack_c0;
          uStack_48 = uStack_a8;
          uStack_50 = uStack_b0;
          uStack_98 = uStack_f8;
          uStack_a0 = uStack_100;
          uStack_88 = uStack_e8;
          uStack_90 = uStack_f0;
          __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                    (&lStack_148,&uStack_a0);
          uVar6 = uStack_140;
          if (lStack_148 != -0x7ffffffffffffffb) goto LAB_101477028;
          goto LAB_101477154;
        }
      }
      FUN_100e040f0(&uStack_100);
    }
LAB_101477154:
    _free(lStack_158);
    return uVar6;
  }
  uVar7 = func_0x0001087c9084(1,0x18);
  FUN_100e040f0(&uStack_100);
  _free(lStack_158);
  auVar13 = __Unwind_Resume(uVar7);
  plVar8 = auVar13._0_8_;
  if (*plVar8 == -0x8000000000000000) {
    uStack_200 = 10;
    uVar6 = func_0x000108a4a0f8(&uStack_200,0,0);
    return uVar6;
  }
  puVar4 = (undefined8 *)_malloc(9);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar4 + 1) = 0x73;
    *puVar4 = 0x636974796c616e61;
    if (plVar8[9] != -0x8000000000000000 && plVar8[9] != 0) {
      _free(plVar8[10]);
    }
    plVar8[10] = (long)puVar4;
    plVar8[0xb] = 9;
    plVar8[9] = -0x8000000000000000;
    lStack_2b0 = plVar8[0xb];
    lStack_2b8 = plVar8[10];
    uStack_2c0 = 9;
    if ((auVar13._8_4_ & 0xff) == 3) {
      uStack_2a8 = 0x8000000000000000;
LAB_1014772d0:
      FUN_101497a9c(&uStack_200,plVar8,&uStack_2c0,&uStack_2a8);
      uStack_258 = uStack_1f0;
      uStack_260 = uStack_1f8;
      uStack_248 = uStack_1e0;
      uStack_250 = uStack_1e8;
      uStack_238 = uStack_1d0;
      uStack_240 = uStack_1d8;
      uStack_228 = uStack_1c0;
      uStack_230 = uStack_1c8;
      uStack_220 = uStack_1b8;
      if (uStack_1f8 != 0x8000000000000005) {
        FUN_100de6690(&uStack_260);
      }
      uVar6 = 0;
    }
    else {
      pauVar5 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar5[1][0] == '\x01') {
        auVar14 = *pauVar5;
      }
      else {
        auVar14 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar5 + 8) = auVar14._8_8_;
        pauVar5[1][0] = 1;
      }
      *(long *)*pauVar5 = auVar14._0_8_ + 1;
      FUN_105dc99f8(&uStack_200,1,auVar14._0_8_,auVar14._8_8_);
      uStack_1b8 = 0x8000000000000000;
      uVar6 = uStack_1f8;
      if (uStack_200 != 0x8000000000000001) {
        uStack_228 = uStack_1c8;
        uStack_230 = uStack_1d0;
        uStack_218 = 0x8000000000000000;
        uStack_220 = uStack_1c0;
        uStack_208 = uStack_1a8;
        uStack_210 = uStack_1b0;
        uStack_248 = uStack_1e8;
        uStack_250 = uStack_1f0;
        uStack_238 = uStack_1d8;
        uStack_240 = uStack_1e0;
        uStack_260 = uStack_200;
        uStack_258 = uStack_1f8;
        if (uStack_200 == 0x8000000000000000) {
          uStack_200 = 10;
          uVar9 = func_0x000108a4a0f8(&uStack_200,0,0);
        }
        else {
          uVar9 = func_0x0001006384d0(&uStack_260,&UNK_108ca2209,7,auVar13._8_8_);
          uVar6 = uStack_258;
          uVar2 = uStack_260;
          if (uVar9 == 0) {
            uStack_2a8 = uStack_258;
            uStack_268 = uStack_218;
            if (uStack_260 == 0x8000000000000000) {
              if (uStack_258 == 0x8000000000000005) {
                func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1014774e8);
                (*pcVar3)();
              }
              uStack_298 = uStack_248;
              uStack_2a0 = uStack_250;
              uStack_288 = uStack_238;
              uStack_290 = uStack_240;
              uStack_278 = uStack_228;
              uStack_280 = uStack_230;
              uStack_270 = uStack_220;
            }
            else {
              uStack_2a8 = uStack_260;
              uStack_2a0 = uStack_258;
              uStack_290 = uStack_248;
              uStack_298 = uStack_250;
              uStack_280 = uStack_238;
              uStack_288 = uStack_240;
              uStack_270 = uStack_228;
              uStack_278 = uStack_230;
              uStack_268 = uStack_220;
              if ((uStack_218 & 0x7fffffffffffffff) != 0) {
                _free(uStack_210);
              }
              if (uVar2 == 0x8000000000000005) goto LAB_1014773e8;
            }
            goto LAB_1014772d0;
          }
        }
        uVar6 = uVar9;
        FUN_100e040f0(&uStack_260);
      }
LAB_1014773e8:
      _free(lStack_2b8);
    }
    return uVar6;
  }
  uVar7 = func_0x0001087c9084(1,9);
  FUN_100e040f0(&uStack_260);
  _free(lStack_2b8);
  auVar13 = __Unwind_Resume(uVar7);
  lVar11 = auVar13._8_8_;
  plVar8 = auVar13._0_8_;
  if (*plVar8 == -0x8000000000000000) {
    uStack_420 = 10;
    uVar6 = func_0x000108a4a0f8(&uStack_420,0,0);
    return uVar6;
  }
  puVar4 = (undefined8 *)_malloc(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0x18);
LAB_101477974:
    func_0x0001087c9084(1,7);
    goto LAB_101477990;
  }
  puVar4[1] = 0x6e656d6e6f726976;
  *puVar4 = 0x6e655f6c6c656873;
  puVar4[2] = 0x7963696c6f705f74;
  if (plVar8[9] != -0x8000000000000000 && plVar8[9] != 0) {
    _free(plVar8[10]);
  }
  plVar8[10] = (long)puVar4;
  plVar8[0xb] = 0x18;
  plVar8[9] = -0x8000000000000000;
  lStack_488 = plVar8[0xb];
  lStack_490 = plVar8[10];
  uStack_498 = 0x18;
  pauVar5 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar5[1][0] == '\x01') {
    auVar13 = *pauVar5;
  }
  else {
    auVar13 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar5 + 8) = auVar13._8_8_;
    pauVar5[1][0] = 1;
  }
  *(long *)*pauVar5 = auVar13._0_8_ + 1;
  FUN_105dc99f8(&uStack_420,6,auVar13._0_8_,auVar13._8_8_);
  lStack_3d8 = -0x8000000000000000;
  uVar6 = uStack_418;
  if (uStack_420 == 0x8000000000000001) goto LAB_1014777b4;
  uStack_448 = uStack_3e8;
  uStack_450 = uStack_3f0;
  lStack_438 = -0x8000000000000000;
  lStack_440 = uStack_3e0;
  uStack_428 = uStack_3c8;
  puStack_430 = puStack_3d0;
  uStack_468 = uStack_408;
  uStack_470 = uStack_410;
  uStack_458 = uStack_3f8;
  uStack_460 = uStack_400;
  uStack_480 = uStack_420;
  uStack_478 = uStack_418;
  if (uStack_420 == 0x8000000000000000) {
LAB_101477790:
    uStack_420 = 10;
    uVar6 = func_0x000108a4a0f8(&uStack_420,0,0);
  }
  else {
    bVar1 = *(byte *)(lVar11 + 0x62);
    puVar10 = (undefined4 *)_malloc(7);
    if (puVar10 == (undefined4 *)0x0) goto LAB_101477974;
    *(undefined4 *)((long)puVar10 + 3) = 0x74697265;
    *puVar10 = 0x65686e69;
    if ((lStack_438 != -0x8000000000000000) && (lStack_438 != 0)) {
      _free(puStack_430);
    }
    uStack_348 = 7;
    uStack_428 = 7;
    lStack_438 = -0x8000000000000000;
    uStack_368 = 7;
    uStack_378 = 7;
    puStack_430 = puVar10;
    puStack_370 = puVar10;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar7 = 4;
        puVar10 = (undefined4 *)_malloc(4);
        if (puVar10 != (undefined4 *)0x0) {
          uVar12 = 0x65726f63;
          goto LAB_1014776dc;
        }
      }
      else {
        uVar7 = 3;
        puVar10 = (undefined4 *)_malloc(3);
        if (puVar10 != (undefined4 *)0x0) {
          *(undefined1 *)((long)puVar10 + 2) = 0x6c;
          *(undefined2 *)puVar10 = 0x6c61;
          uStack_358 = 3;
          lStack_360 = -0x7ffffffffffffffd;
          uStack_348 = 3;
          goto LAB_101477728;
        }
      }
LAB_101477984:
      func_0x0001087c9084(1,uVar7);
LAB_101477990:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101477994);
      (*pcVar3)();
    }
    if (bVar1 == 2) {
      uVar7 = 4;
      puVar10 = (undefined4 *)_malloc(4);
      if (puVar10 == (undefined4 *)0x0) goto LAB_101477984;
      uVar12 = 0x656e6f6e;
LAB_1014776dc:
      *puVar10 = uVar12;
      uStack_358 = 4;
      lStack_360 = -0x7ffffffffffffffd;
      uStack_348 = 4;
    }
    else {
      lStack_360 = -0x8000000000000000;
      uStack_358 = 0x8000000000000000;
    }
LAB_101477728:
    puStack_350 = puVar10;
    FUN_101497a9c(&uStack_420,&uStack_480,&uStack_378,&lStack_360);
    uStack_3b8 = uStack_410;
    uStack_3c0 = uStack_418;
    uStack_3a8 = uStack_400;
    uStack_3b0 = uStack_408;
    uStack_398 = uStack_3f0;
    uStack_3a0 = uStack_3f8;
    uStack_388 = uStack_3e0;
    uStack_390 = uStack_3e8;
    lStack_380 = lStack_3d8;
    if (uStack_418 != 0x8000000000000005) {
      FUN_100de6690(&uStack_3c0);
    }
    if (uStack_480 == 0x8000000000000000) goto LAB_101477790;
    uVar6 = func_0x0001006384d0(&uStack_480,&UNK_108cac313,0x17,*(undefined1 *)(lVar11 + 0x60));
    if (uVar6 == 0) {
      if (uStack_480 == 0x8000000000000000) goto LAB_101477790;
      uVar6 = FUN_10063b4bc(&uStack_480,&UNK_108cac32a,7,lVar11);
      if (uVar6 == 0) {
        if (uStack_480 == 0x8000000000000000) goto LAB_101477790;
        uVar6 = func_0x00010063e2e4(&uStack_480,&UNK_108cac331,3,*(undefined8 *)(lVar11 + 0x30),
                                    *(undefined8 *)(lVar11 + 0x48));
        if (((uVar6 == 0) &&
            (uVar6 = func_0x00010148d338(&uStack_480,&UNK_108cac334,0xc,lVar11 + 0x18), uVar6 == 0))
           && (uVar6 = FUN_101486eb8(&uStack_480,&UNK_108cac340,0x18,*(undefined1 *)(lVar11 + 0x61))
              , uVar6 == 0)) {
          uStack_3e8 = uStack_448;
          uStack_3f0 = uStack_450;
          lStack_3d8 = lStack_438;
          uStack_3e0 = lStack_440;
          uStack_3c8 = uStack_428;
          puStack_3d0 = puStack_430;
          uStack_418 = uStack_478;
          uStack_420 = uStack_480;
          uStack_408 = uStack_468;
          uStack_410 = uStack_470;
          uStack_3f8 = uStack_458;
          uStack_400 = uStack_460;
          __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                    (&lStack_360,&uStack_420);
          uVar6 = uStack_358;
          if (lStack_360 != -0x7ffffffffffffffb) {
            FUN_101497a9c(&uStack_420,plVar8,&uStack_498,&lStack_360);
            uStack_478 = uStack_410;
            uStack_480 = uStack_418;
            uStack_468 = uStack_400;
            uStack_470 = uStack_408;
            uStack_458 = uStack_3f0;
            uStack_460 = uStack_3f8;
            uStack_448 = uStack_3e0;
            uStack_450 = uStack_3e8;
            lStack_440 = lStack_3d8;
            if (uStack_418 != 0x8000000000000005) {
              FUN_100de6690(&uStack_480);
            }
            return 0;
          }
          goto LAB_1014777b4;
        }
      }
    }
  }
  FUN_100e040f0(&uStack_480);
LAB_1014777b4:
  _free(lStack_490);
  return uVar6;
}

