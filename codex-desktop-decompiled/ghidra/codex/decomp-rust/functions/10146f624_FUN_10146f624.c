
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10146f624(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_498;
  long lStack_490;
  long lStack_488;
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
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
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
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
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
    puStack_a0 = (undefined8 *)0xa;
    puVar4 = (undefined8 *)func_0x000108a4a0f8(&puStack_a0,0,0);
    return puVar4;
  }
  puVar4 = (undefined8 *)_malloc(10);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar4 + 1) = 0x6e6f;
    *puVar4 = 0x697461636f766e69;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar4;
    param_1[0xb] = 10;
    param_1[9] = -0x8000000000000000;
    lStack_150 = param_1[0xb];
    lStack_158 = param_1[10];
    uStack_160 = 10;
    pauVar5 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar5[1][0] == '\x01') {
      auVar12 = *pauVar5;
    }
    else {
      auVar12 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar5 + 8) = auVar12._8_8_;
      pauVar5[1][0] = 1;
    }
    *(long *)*pauVar5 = auVar12._0_8_ + 1;
    FUN_105dc99f8(&puStack_a0,3,auVar12._0_8_,auVar12._8_8_);
    uStack_58 = 0x8000000000000000;
    puVar4 = puStack_98;
    if (puStack_a0 == (undefined8 *)0x8000000000000001) goto LAB_10146f774;
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
    puStack_100 = puStack_a0;
    puStack_f8 = puStack_98;
    if (puStack_a0 == (undefined8 *)0x8000000000000000) {
LAB_10146f72c:
      puStack_a0 = (undefined8 *)0xa;
      puVar4 = (undefined8 *)func_0x000108a4a0f8(&puStack_a0,0,0);
    }
    else {
      puVar4 = (undefined8 *)
               FUN_10063fe00(&puStack_100,&UNK_108caaace,6,*(undefined8 *)(param_2 + 8),
                             *(undefined8 *)(param_2 + 0x10));
      if (puVar4 == (undefined8 *)0x0) {
        if (puStack_100 == (undefined8 *)0x8000000000000000) goto LAB_10146f72c;
        puVar4 = (undefined8 *)
                 FUN_10063fe00(&puStack_100,&UNK_108cde3ec,4,*(undefined8 *)(param_2 + 0x20),
                               *(undefined8 *)(param_2 + 0x28));
        if ((puVar4 == (undefined8 *)0x0) &&
           (puVar4 = (undefined8 *)func_0x00010148a714(&puStack_100,&UNK_108cadb54,9,param_2 + 0x30)
           , puVar4 == (undefined8 *)0x0)) {
          uStack_78 = uStack_d8;
          uStack_80 = uStack_e0;
          uStack_68 = uStack_c8;
          uStack_70 = uStack_d0;
          uStack_58 = uStack_b8;
          uStack_60 = uStack_c0;
          uStack_48 = uStack_a8;
          uStack_50 = uStack_b0;
          puStack_98 = puStack_f8;
          puStack_a0 = puStack_100;
          uStack_88 = uStack_e8;
          uStack_90 = uStack_f0;
          __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                    (&lStack_148,&puStack_a0);
          puVar4 = puStack_140;
          if (lStack_148 != -0x7ffffffffffffffb) {
            FUN_101497a9c(&puStack_a0,param_1,&uStack_160,&lStack_148);
            puStack_f8 = (undefined8 *)uStack_90;
            puStack_100 = puStack_98;
            uStack_e8 = uStack_80;
            uStack_f0 = uStack_88;
            uStack_d8 = uStack_70;
            uStack_e0 = uStack_78;
            uStack_c8 = uStack_60;
            uStack_d0 = uStack_68;
            uStack_c0 = uStack_58;
            if (puStack_98 != (undefined8 *)0x8000000000000005) {
              FUN_100de6690(&puStack_100);
            }
            return (undefined8 *)0x0;
          }
          goto LAB_10146f774;
        }
      }
    }
    FUN_100e040f0(&puStack_100);
LAB_10146f774:
    _free(lStack_158);
    return puVar4;
  }
  uVar6 = func_0x0001087c9084(1,10);
  FUN_100e040f0(&puStack_100);
  _free(lStack_158);
  auVar12 = __Unwind_Resume(uVar6);
  plVar7 = auVar12._0_8_;
  if (*plVar7 == -0x8000000000000000) {
    puStack_200 = (undefined8 *)0xa;
    puVar4 = (undefined8 *)func_0x000108a4a0f8(&puStack_200,0,0);
    return puVar4;
  }
  lVar8 = _malloc(param_3);
  if (lVar8 != 0) {
    _memcpy(lVar8,auVar12._8_8_,param_3);
    if (plVar7[9] != -0x8000000000000000 && plVar7[9] != 0) {
      _free(plVar7[10]);
    }
    plVar7[10] = lVar8;
    plVar7[0xb] = param_3;
    plVar7[9] = -0x8000000000000000;
    lStack_2b0 = plVar7[0xb];
    lStack_2b8 = plVar7[10];
    lStack_2c0 = param_3;
    pauVar5 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar5[1][0] == '\x01') {
      auVar12 = *pauVar5;
    }
    else {
      auVar12 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar5 + 8) = auVar12._8_8_;
      pauVar5[1][0] = 1;
    }
    *(long *)*pauVar5 = auVar12._0_8_ + 1;
    FUN_105dc99f8(&puStack_200,5,auVar12._0_8_,auVar12._8_8_);
    uStack_1b8 = 0x8000000000000000;
    puVar4 = puStack_1f8;
    if (puStack_200 != (undefined8 *)0x8000000000000001) {
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
      puStack_260 = puStack_200;
      puStack_258 = puStack_1f8;
      puVar4 = (undefined8 *)func_0x00010147d91c(&puStack_260,&UNK_108cafc1c,0xc,*param_4);
      if ((((puVar4 == (undefined8 *)0x0) &&
           (puVar4 = (undefined8 *)func_0x00010147d91c(&puStack_260,&UNK_108cafc28,0x13,param_4[1]),
           puVar4 == (undefined8 *)0x0)) &&
          (puVar4 = (undefined8 *)func_0x00010147d91c(&puStack_260,&UNK_108cafc3b,0xd,param_4[2]),
          puVar4 == (undefined8 *)0x0)) &&
         ((puVar4 = (undefined8 *)func_0x00010147d91c(&puStack_260,&UNK_108cafc48,0x17,param_4[3]),
          puVar4 == (undefined8 *)0x0 &&
          (puVar4 = (undefined8 *)func_0x00010147d91c(&puStack_260,&UNK_108cafc5f,0xc,param_4[4]),
          puVar4 == (undefined8 *)0x0)))) {
        uStack_1d8 = uStack_238;
        uStack_1e0 = uStack_240;
        uStack_1c8 = uStack_228;
        uStack_1d0 = uStack_230;
        uStack_1b8 = uStack_218;
        uStack_1c0 = uStack_220;
        uStack_1a8 = uStack_208;
        uStack_1b0 = uStack_210;
        puStack_1f8 = puStack_258;
        puStack_200 = puStack_260;
        uStack_1e8 = uStack_248;
        uStack_1f0 = uStack_250;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (&lStack_2a8,&puStack_200);
        puVar4 = puStack_2a0;
        if (lStack_2a8 != -0x7ffffffffffffffb) {
          FUN_101497a9c(&puStack_200,plVar7,&lStack_2c0,&lStack_2a8);
          puStack_258 = (undefined8 *)uStack_1f0;
          puStack_260 = puStack_1f8;
          uStack_248 = uStack_1e0;
          uStack_250 = uStack_1e8;
          uStack_238 = uStack_1d0;
          uStack_240 = uStack_1d8;
          uStack_228 = uStack_1c0;
          uStack_230 = uStack_1c8;
          uStack_220 = uStack_1b8;
          if (puStack_1f8 != (undefined8 *)0x8000000000000005) {
            FUN_100de6690(&puStack_260);
          }
          return (undefined8 *)0x0;
        }
      }
      else {
        FUN_100e040f0(&puStack_260);
      }
    }
    _free(lStack_2b8);
    return puVar4;
  }
  uVar6 = func_0x0001087c9084(1,param_3);
  FUN_100e040f0(&puStack_260);
  _free(lStack_2b8);
  auVar12 = __Unwind_Resume(uVar6);
  plVar11 = auVar12._8_8_;
  plVar7 = auVar12._0_8_;
  if (*plVar7 == -0x8000000000000000) {
    puStack_420 = (undefined8 *)0xa;
    puVar4 = (undefined8 *)func_0x000108a4a0f8(&puStack_420,0,0);
    return puVar4;
  }
  puVar9 = (undefined4 *)_malloc(7);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,7);
LAB_10146ffa0:
    func_0x0001087c9084(1,0xb);
    goto LAB_10146ffbc;
  }
  *(undefined4 *)((long)puVar9 + 3) = 0x79726f74;
  *puVar9 = 0x74736968;
  if (plVar7[9] != -0x8000000000000000 && plVar7[9] != 0) {
    _free(plVar7[10]);
  }
  plVar7[10] = (long)puVar9;
  plVar7[0xb] = 7;
  plVar7[9] = -0x8000000000000000;
  lStack_488 = plVar7[0xb];
  lStack_490 = plVar7[10];
  uStack_498 = 7;
  lVar8 = *plVar11;
  if (lVar8 == 2) {
    puStack_358 = (undefined8 *)0x8000000000000000;
    goto LAB_10146fc5c;
  }
  pauVar5 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar5[1][0] == '\x01') {
    auVar12 = *pauVar5;
  }
  else {
    auVar12 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar5 + 8) = auVar12._8_8_;
    pauVar5[1][0] = 1;
  }
  *(long *)*pauVar5 = auVar12._0_8_ + 1;
  FUN_105dc99f8(&puStack_420,2,auVar12._0_8_,auVar12._8_8_);
  uStack_3d8 = 0x8000000000000000;
  puVar4 = puStack_418;
  if (puStack_420 == (undefined8 *)0x8000000000000001) goto LAB_10146fe74;
  puStack_448 = puStack_3e8;
  puStack_450 = puStack_3f0;
  puStack_438 = (undefined8 *)0x8000000000000000;
  puStack_440 = puStack_3e0;
  uStack_428 = uStack_3c8;
  puStack_430 = puStack_3d0;
  puStack_468 = puStack_408;
  puStack_470 = puStack_410;
  puStack_458 = puStack_3f8;
  puStack_460 = puStack_400;
  puStack_480 = puStack_420;
  puStack_478 = puStack_418;
  if (puStack_420 == (undefined8 *)0x8000000000000000) {
LAB_10146fe50:
    puStack_420 = (undefined8 *)0xa;
    puVar10 = (undefined8 *)func_0x000108a4a0f8(&puStack_420,0,0);
  }
  else {
    bVar1 = *(byte *)(plVar11 + 2);
    puVar4 = (undefined8 *)_malloc(0xb);
    if (puVar4 == (undefined8 *)0x0) goto LAB_10146ffa0;
    *(undefined4 *)((long)puVar4 + 7) = 0x65636e65;
    *puVar4 = 0x6574736973726570;
    if ((puStack_438 != (undefined8 *)0x8000000000000000) && (puStack_438 != (undefined8 *)0x0)) {
      _free(puStack_430);
    }
    uStack_428 = 0xb;
    puStack_438 = (undefined8 *)0x8000000000000000;
    uStack_360 = 0xb;
    uStack_370 = 0xb;
    puStack_430 = puVar4;
    puStack_368 = puVar4;
    if ((bVar1 & 1) == 0) {
      uVar6 = 8;
      puVar4 = (undefined8 *)_malloc(8);
      if (puVar4 == (undefined8 *)0x0) goto LAB_10146ffb0;
      *puVar4 = 0x6c6c612d65766173;
      puStack_350 = (undefined8 *)0x8;
    }
    else {
      uVar6 = 4;
      puVar4 = (undefined8 *)_malloc(4);
      if (puVar4 == (undefined8 *)0x0) {
LAB_10146ffb0:
        func_0x0001087c9084(1,uVar6);
        goto LAB_10146ffbc;
      }
      *(undefined4 *)puVar4 = 0x656e6f6e;
      puStack_350 = (undefined8 *)0x4;
    }
    puStack_358 = (undefined8 *)0x8000000000000003;
    puStack_348 = puVar4;
    puStack_340 = puStack_350;
    FUN_101497a9c(&puStack_420,&puStack_480,&uStack_370,&puStack_358);
    puStack_3b8 = puStack_410;
    puStack_3c0 = puStack_418;
    puStack_3a8 = puStack_400;
    puStack_3b0 = puStack_408;
    puStack_398 = puStack_3f0;
    puStack_3a0 = puStack_3f8;
    puStack_388 = puStack_3e0;
    puStack_390 = puStack_3e8;
    uStack_380 = uStack_3d8;
    if (puStack_418 != (undefined8 *)0x8000000000000005) {
      FUN_100de6690(&puStack_3c0);
    }
    if (puStack_480 == (undefined8 *)0x8000000000000000) goto LAB_10146fe50;
    puVar10 = (undefined8 *)func_0x00010063b76c(&puStack_480,&UNK_108cac50d,9,lVar8,plVar11[1]);
    puVar4 = puStack_478;
    puVar2 = puStack_480;
    if (puVar10 == (undefined8 *)0x0) {
      puStack_318 = puStack_438;
      if (puStack_480 == (undefined8 *)0x8000000000000000) {
        if (puStack_478 == (undefined8 *)0x8000000000000005) {
          func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
LAB_10146ffbc:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10146ffc0);
          (*pcVar3)();
        }
        puStack_348 = puStack_468;
        puStack_350 = puStack_470;
        puStack_338 = puStack_458;
        puStack_340 = puStack_460;
        puStack_328 = puStack_448;
        puStack_330 = puStack_450;
        puStack_320 = puStack_440;
        puStack_358 = puStack_478;
LAB_10146fc5c:
        FUN_101497a9c(&puStack_420,plVar7,&uStack_498,&puStack_358);
        puStack_478 = puStack_410;
        puStack_480 = puStack_418;
        puStack_468 = puStack_400;
        puStack_470 = puStack_408;
        puStack_458 = puStack_3f0;
        puStack_460 = puStack_3f8;
        puStack_448 = puStack_3e0;
        puStack_450 = puStack_3e8;
        puStack_440 = (undefined8 *)uStack_3d8;
        if (puStack_418 != (undefined8 *)0x8000000000000005) {
          FUN_100de6690(&puStack_480);
        }
        return (undefined8 *)0x0;
      }
      puStack_358 = puStack_480;
      puStack_350 = puStack_478;
      puStack_340 = puStack_468;
      puStack_348 = puStack_470;
      puStack_330 = puStack_458;
      puStack_338 = puStack_460;
      puStack_320 = puStack_448;
      puStack_328 = puStack_450;
      puStack_318 = puStack_440;
      if (((ulong)puStack_438 & 0x7fffffffffffffff) != 0) {
        _free(puStack_430);
      }
      if (puVar2 != (undefined8 *)0x8000000000000005) goto LAB_10146fc5c;
      goto LAB_10146fe74;
    }
  }
  puVar4 = puVar10;
  FUN_100e040f0(&puStack_480);
LAB_10146fe74:
  _free(lStack_490);
  return puVar4;
}

