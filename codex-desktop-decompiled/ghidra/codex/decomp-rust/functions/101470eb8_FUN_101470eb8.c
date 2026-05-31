
/* WARNING: Removing unreachable block (ram,0x000101470f88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_101470eb8(float param_1,long *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_408;
  long lStack_400;
  long lStack_3f8;
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
  undefined8 uStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  long lStack_150;
  double dStack_148;
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
  long lStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*param_2 == -0x8000000000000000) {
    uStack_a0 = 10;
    puVar5 = (undefined8 *)func_0x000108a4a0f8(&uStack_a0,0,0);
    return puVar5;
  }
  lVar2 = _malloc(param_4);
  if (lVar2 != 0) {
    _memcpy(lVar2,param_3,param_4);
    if (param_2[9] != -0x8000000000000000 && param_2[9] != 0) {
      _free(param_2[10]);
    }
    param_2[10] = lVar2;
    param_2[0xb] = param_4;
    param_2[9] = -0x8000000000000000;
    lStack_f8 = param_2[0xb];
    lStack_100 = param_2[10];
    lStack_108 = param_4;
    if ((uint)ABS(param_1) < 0x7f800000) {
      dStack_e0 = (double)param_1;
      uStack_a0 = 0x8000000000000000;
      lStack_e8 = 2;
      uStack_f0 = 0x8000000000000002;
      FUN_105dc6c20(&uStack_a0);
    }
    else {
      uStack_a0 = 0x8000000000000000;
      lStack_e8 = lStack_98;
      uStack_f0 = 0x8000000000000000;
      uStack_d8 = uStack_88;
      dStack_e0 = dStack_90;
      uStack_c8 = uStack_78;
      uStack_d0 = uStack_80;
      uStack_b8 = uStack_68;
      uStack_c0 = uStack_70;
      uStack_b0 = uStack_60;
    }
    FUN_101497a9c(&uStack_a0,param_2,&lStack_108,&uStack_f0);
    dStack_148 = dStack_90;
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
  uVar3 = func_0x0001087c9084(1,param_4);
  _free(lStack_100);
  auVar13 = __Unwind_Resume(uVar3);
  plVar8 = auVar13._8_8_;
  plVar4 = auVar13._0_8_;
  if (*plVar4 == -0x8000000000000000) {
    puStack_220 = (undefined8 *)0xa;
    puVar5 = (undefined8 *)func_0x000108a4a0f8(&puStack_220,0,0);
    return puVar5;
  }
  puVar5 = (undefined8 *)_malloc(0xc);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0xc);
LAB_101471970:
    func_0x0001087c9084(1,param_3);
    goto LAB_10147197c;
  }
  *(undefined4 *)(puVar5 + 1) = 0x74736567;
  *puVar5 = 0x6775735f6c6f6f74;
  if (plVar4[9] != -0x8000000000000000 && plVar4[9] != 0) {
    _free(plVar4[10]);
  }
  plVar4[10] = (long)puVar5;
  plVar4[0xb] = 0xc;
  plVar4[9] = -0x8000000000000000;
  lStack_3f8 = plVar4[0xb];
  lStack_400 = plVar4[10];
  uStack_408 = 0xc;
  if (*plVar8 == -0x8000000000000000) {
    puStack_280 = (undefined8 *)0x8000000000000000;
LAB_101471120:
    FUN_101497a9c(&puStack_220,plVar4,&uStack_408,&puStack_280);
    puStack_3e8 = puStack_210;
    puStack_3f0 = puStack_218;
    puStack_3d8 = puStack_200;
    puStack_3e0 = puStack_208;
    puStack_3c8 = puStack_1f0;
    puStack_3d0 = puStack_1f8;
    puStack_3b8 = puStack_1e0;
    puStack_3c0 = puStack_1e8;
    puStack_3b0 = puStack_1d8;
    if (puStack_218 != (undefined8 *)0x8000000000000005) {
      FUN_100de6690(&puStack_3f0);
    }
    return (undefined8 *)0x0;
  }
  pauVar6 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar6[1][0] == '\x01') {
    auVar13 = *pauVar6;
  }
  else {
    auVar13 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar6 + 8) = auVar13._8_8_;
    pauVar6[1][0] = 1;
  }
  *(long *)*pauVar6 = auVar13._0_8_ + 1;
  FUN_105dc99f8(&puStack_220,2,auVar13._0_8_,auVar13._8_8_);
  puStack_1d8 = (undefined8 *)0x8000000000000000;
  puVar5 = puStack_218;
  if (puStack_220 == (undefined8 *)0x8000000000000001) goto LAB_101471900;
  puStack_3b8 = puStack_1e8;
  puStack_3c0 = puStack_1f0;
  puStack_3a8 = (undefined8 *)0x8000000000000000;
  puStack_3b0 = puStack_1e0;
  uStack_398 = uStack_1c8;
  puStack_3a0 = puStack_1d0;
  puStack_3d8 = puStack_208;
  puStack_3e0 = puStack_210;
  puStack_3c8 = puStack_1f8;
  puStack_3d0 = puStack_200;
  puStack_3f0 = puStack_220;
  puStack_3e8 = puStack_218;
  if (puStack_220 != (undefined8 *)0x8000000000000000) {
    lVar2 = plVar8[1];
    puVar5 = (undefined8 *)plVar8[2];
    param_3 = 0xd;
    puVar7 = (undefined8 *)_malloc(0xd);
    if (puVar7 == (undefined8 *)0x0) goto LAB_101471970;
    *puVar7 = 0x7265766f63736964;
    *(undefined8 *)((long)puVar7 + 5) = 0x73656c6261726576;
    if ((puStack_3a8 != (undefined8 *)0x8000000000000000) && (puStack_3a8 != (undefined8 *)0x0)) {
      _free(puStack_3a0);
    }
    uStack_398 = 0xd;
    puStack_3a8 = (undefined8 *)0x8000000000000000;
    uStack_330 = 0xd;
    uStack_340 = 0xd;
    lVar9 = (long)puVar5 * 0x48;
    puStack_3a0 = puVar7;
    puStack_338 = puVar7;
    if ((undefined8 *)0x1c71c71c71c71c7 < puVar5) {
      uVar3 = 0;
LAB_1014712a0:
      func_0x0001087c9084(uVar3,lVar9);
LAB_10147197c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101471980);
      (*pcVar1)();
    }
    if (lVar9 == 0) {
      puVar7 = (undefined8 *)0x8;
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)_malloc(lVar9);
      puVar10 = puVar5;
      if (puVar7 == (undefined8 *)0x0) {
        uVar3 = 8;
        goto LAB_1014712a0;
      }
    }
    puStack_2d0 = (undefined8 *)0x0;
    puVar12 = (undefined1 *)(lVar2 + 0x18);
    lVar2 = (long)puVar5 << 5;
    puStack_2e0 = puVar10;
    puStack_2d8 = puVar7;
    do {
      if (lVar2 == 0) {
        puStack_310 = puStack_2d0;
        puStack_318 = puStack_2d8;
        uStack_328 = 0x8000000000000004;
        puStack_320 = puStack_2e0;
        FUN_101497a9c(&puStack_220,&puStack_3f0,&uStack_340,&uStack_328);
        puStack_388 = puStack_210;
        puStack_390 = puStack_218;
        puStack_378 = puStack_200;
        puStack_380 = puStack_208;
        puStack_368 = puStack_1f0;
        puStack_370 = puStack_1f8;
        puStack_358 = puStack_1e0;
        puStack_360 = puStack_1e8;
        puStack_350 = puStack_1d8;
        if (puStack_218 != (undefined8 *)0x8000000000000005) {
          FUN_100de6690(&puStack_390);
        }
        if (puStack_3f0 == (undefined8 *)0x8000000000000000) goto LAB_1014711f0;
        lVar2 = plVar8[4];
        lVar9 = plVar8[5];
        param_3 = 0xe;
        puVar5 = (undefined8 *)_malloc(0xe);
        if (puVar5 == (undefined8 *)0x0) goto LAB_101471970;
        *puVar5 = 0x64656c6261736964;
        *(undefined8 *)((long)puVar5 + 6) = 0x736c6f6f745f6465;
        if ((puStack_3a8 != (undefined8 *)0x8000000000000000) && (puStack_3a8 != (undefined8 *)0x0))
        {
          _free(puStack_3a0);
        }
        uStack_398 = 0xe;
        puStack_3a8 = (undefined8 *)0x8000000000000000;
        uStack_330 = 0xe;
        uStack_340 = 0xe;
        puStack_3a0 = puVar5;
        puStack_338 = puVar5;
        __ZN82__LT_serde_json__value__ser__Serializer_u20_as_u20_serde_core__ser__Serializer_GT_13serialize_seq17h66090bd2f7fdd8e8E
                  (&puStack_220,1,lVar9);
        puVar5 = puStack_218;
        if (puStack_220 == (undefined8 *)0x8000000000000000) goto LAB_1014718f0;
        puStack_2d8 = puStack_218;
        puStack_2e0 = puStack_220;
        puStack_2d0 = puStack_210;
        puVar12 = (undefined1 *)(lVar2 + 0x18);
        lVar9 = lVar9 << 5;
        goto LAB_101471684;
      }
      if (pauVar6[1][0] == '\x01') {
        auVar13 = *pauVar6;
      }
      else {
        auVar13 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E(puVar7);
        *(long *)(*pauVar6 + 8) = auVar13._8_8_;
        pauVar6[1][0] = 1;
      }
      *(long *)*pauVar6 = auVar13._0_8_ + 1;
      puVar7 = (undefined8 *)FUN_105dc99f8(&puStack_220,2,auVar13._0_8_,auVar13._8_8_);
      puStack_1d8 = (undefined8 *)0x8000000000000000;
      puVar5 = puStack_218;
      if (puStack_220 != (undefined8 *)0x8000000000000001) {
        puStack_248 = puStack_1e8;
        puStack_250 = puStack_1f0;
        puStack_238 = (undefined8 *)0x8000000000000000;
        puStack_240 = puStack_1e0;
        uStack_228 = uStack_1c8;
        puStack_230 = puStack_1d0;
        puStack_268 = puStack_208;
        puStack_270 = puStack_210;
        puStack_258 = puStack_1f8;
        puStack_260 = puStack_200;
        puStack_280 = puStack_220;
        puStack_278 = puStack_218;
        puVar7 = (undefined8 *)func_0x00010148f278(&puStack_280,*puVar12);
        if (puVar7 == (undefined8 *)0x0) {
          if (puStack_280 == (undefined8 *)0x8000000000000000) {
            puStack_220 = (undefined8 *)0xa;
            puVar7 = (undefined8 *)func_0x000108a4a0f8(&puStack_220,0,0);
          }
          else {
            puVar7 = (undefined8 *)
                     FUN_10063fe00(&puStack_280,&UNK_108ca26b0,2,*(undefined8 *)(puVar12 + -0x10),
                                   *(undefined8 *)(puVar12 + -8));
            puVar5 = puStack_278;
            puVar10 = puStack_280;
            if (puVar7 == (undefined8 *)0x0) {
              if (puStack_280 == (undefined8 *)0x8000000000000000) {
                if (puStack_278 == (undefined8 *)0x8000000000000005) {
                  func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                  goto LAB_10147197c;
                }
                puStack_2b8 = puStack_268;
                puStack_2c0 = puStack_270;
                puStack_2a8 = puStack_258;
                puStack_2b0 = puStack_260;
                puStack_298 = puStack_248;
                puStack_2a0 = puStack_250;
                puStack_290 = puStack_240;
                puStack_288 = puStack_238;
                puStack_2c8 = puStack_278;
                puVar7 = (undefined8 *)0x0;
              }
              else {
                puStack_2c8 = puStack_280;
                puStack_2c0 = puStack_278;
                puStack_2b0 = puStack_268;
                puStack_2b8 = puStack_270;
                puStack_2a0 = puStack_258;
                puStack_2a8 = puStack_260;
                puStack_290 = puStack_248;
                puStack_298 = puStack_250;
                puStack_288 = puStack_240;
                puVar7 = puStack_230;
                if (((ulong)puStack_238 & 0x7fffffffffffffff) != 0) {
                  puVar7 = (undefined8 *)_free();
                }
                if (puVar10 == (undefined8 *)0x8000000000000005) goto LAB_101471334;
              }
              puVar10 = puStack_2d0;
              if (puStack_2d0 == puStack_2e0) {
                puVar7 = (undefined8 *)
                         __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE
                                   (&puStack_2e0);
              }
              puVar5 = (undefined8 *)0x0;
              puVar11 = puStack_2d8 + (long)puVar10 * 9;
              puVar11[8] = puStack_288;
              puVar11[1] = puStack_2c0;
              *puVar11 = puStack_2c8;
              puVar11[3] = puStack_2b0;
              puVar11[2] = puStack_2b8;
              puVar11[5] = puStack_2a0;
              puVar11[4] = puStack_2a8;
              puVar11[7] = puStack_290;
              puVar11[6] = puStack_298;
              puStack_2d0 = (undefined8 *)((long)puVar10 + 1);
              goto LAB_101471334;
            }
          }
        }
        puVar5 = puVar7;
        puVar7 = (undefined8 *)FUN_100e040f0(&puStack_280);
      }
LAB_101471334:
      puVar10 = puStack_2d8;
      puVar12 = puVar12 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (puVar5 == (undefined8 *)0x0);
    lVar2 = (long)puStack_2d0 + 1;
    puVar7 = puStack_2d8;
    while (lVar2 = lVar2 + -1, lVar2 != 0) {
      FUN_100de6690(puVar7);
      puVar7 = puVar7 + 9;
    }
    goto LAB_1014718e0;
  }
LAB_1014711f0:
  puStack_220 = (undefined8 *)0xa;
  puVar5 = (undefined8 *)func_0x000108a4a0f8(&puStack_220,0,0);
  goto LAB_1014718f8;
LAB_101471684:
  do {
    if (lVar9 == 0) {
      puStack_310 = (undefined8 *)((undefined8 *)((ulong)&puStack_2e0 | 8))[1];
      puStack_318 = *(undefined8 **)((ulong)&puStack_2e0 | 8);
      uStack_328 = 0x8000000000000004;
      puStack_320 = puStack_2e0;
      FUN_101497a9c(&puStack_220,&puStack_3f0,&uStack_340,&uStack_328);
      puStack_388 = puStack_210;
      puStack_390 = puStack_218;
      puStack_378 = puStack_200;
      puStack_380 = puStack_208;
      puStack_368 = puStack_1f0;
      puStack_370 = puStack_1f8;
      puStack_358 = puStack_1e0;
      puStack_360 = puStack_1e8;
      puStack_350 = puStack_1d8;
      if (puStack_218 != (undefined8 *)0x8000000000000005) {
        FUN_100de6690(&puStack_390);
      }
      puStack_1f8 = puStack_3c8;
      puStack_200 = puStack_3d0;
      puStack_1e8 = puStack_3b8;
      puStack_1f0 = puStack_3c0;
      puStack_1d8 = puStack_3a8;
      puStack_1e0 = puStack_3b0;
      uStack_1c8 = uStack_398;
      puStack_1d0 = puStack_3a0;
      puStack_218 = puStack_3e8;
      puStack_220 = puStack_3f0;
      puStack_208 = puStack_3d8;
      puStack_210 = puStack_3e0;
      __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                (&puStack_280,&puStack_220);
      puVar5 = puStack_278;
      if (puStack_280 == (undefined8 *)0x8000000000000005) goto LAB_101471900;
      goto LAB_101471120;
    }
    if (pauVar6[1][0] == '\x01') {
      auVar13 = *pauVar6;
    }
    else {
      auVar13 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar6 + 8) = auVar13._8_8_;
      pauVar6[1][0] = 1;
    }
    *(long *)*pauVar6 = auVar13._0_8_ + 1;
    FUN_105dc99f8(&puStack_220,2,auVar13._0_8_,auVar13._8_8_);
    puStack_1d8 = (undefined8 *)0x8000000000000000;
    puVar5 = puStack_218;
    if (puStack_220 != (undefined8 *)0x8000000000000001) {
      puStack_248 = puStack_1e8;
      puStack_250 = puStack_1f0;
      puStack_238 = (undefined8 *)0x8000000000000000;
      puStack_240 = puStack_1e0;
      uStack_228 = uStack_1c8;
      puStack_230 = puStack_1d0;
      puStack_268 = puStack_208;
      puStack_270 = puStack_210;
      puStack_258 = puStack_1f8;
      puStack_260 = puStack_200;
      puStack_280 = puStack_220;
      puStack_278 = puStack_218;
      puVar5 = (undefined8 *)func_0x00010148f278(&puStack_280,*puVar12);
      if (puVar5 == (undefined8 *)0x0) {
        if (puStack_280 == (undefined8 *)0x8000000000000000) {
          puStack_220 = (undefined8 *)0xa;
          puVar5 = (undefined8 *)func_0x000108a4a0f8(&puStack_220,0,0);
        }
        else {
          puVar5 = (undefined8 *)
                   FUN_10063fe00(&puStack_280,&UNK_108ca26b0,2,*(undefined8 *)(puVar12 + -0x10),
                                 *(undefined8 *)(puVar12 + -8));
          if (puVar5 == (undefined8 *)0x0) {
            puStack_1f8 = puStack_258;
            puStack_200 = puStack_260;
            puStack_1e8 = puStack_248;
            puStack_1f0 = puStack_250;
            puStack_1d8 = puStack_238;
            puStack_1e0 = puStack_240;
            uStack_1c8 = uStack_228;
            puStack_1d0 = puStack_230;
            puStack_218 = puStack_278;
            puStack_220 = puStack_280;
            puStack_208 = puStack_268;
            puStack_210 = puStack_270;
            __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                      (&puStack_2c8,&puStack_220);
            puVar7 = puStack_2d0;
            puVar5 = puStack_2c0;
            if (puStack_2c8 != (undefined8 *)0x8000000000000005) {
              if (puStack_2d0 == puStack_2e0) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&puStack_2e0);
              }
              puVar5 = (undefined8 *)0x0;
              puVar10 = puStack_2d8 + (long)puVar7 * 9;
              puVar10[8] = puStack_288;
              puVar10[1] = puStack_2c0;
              *puVar10 = puStack_2c8;
              puVar10[3] = puStack_2b0;
              puVar10[2] = puStack_2b8;
              puVar10[5] = puStack_2a0;
              puVar10[4] = puStack_2a8;
              puVar10[7] = puStack_290;
              puVar10[6] = puStack_298;
              puStack_2d0 = (undefined8 *)((long)puVar7 + 1);
            }
            goto LAB_101471678;
          }
        }
      }
      FUN_100e040f0(&puStack_280);
    }
LAB_101471678:
    puVar10 = puStack_2d8;
    puVar12 = puVar12 + 0x20;
    lVar9 = lVar9 + -0x20;
  } while (puVar5 == (undefined8 *)0x0);
  lVar2 = (long)puStack_2d0 + 1;
  puVar7 = puStack_2d8;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
    FUN_100de6690(puVar7);
    puVar7 = puVar7 + 9;
  }
LAB_1014718e0:
  if (puStack_2e0 != (undefined8 *)0x0) {
    _free(puVar10);
  }
LAB_1014718f0:
  _free(puStack_338);
LAB_1014718f8:
  FUN_100e040f0(&puStack_3f0);
LAB_101471900:
  _free(lStack_400);
  return puVar5;
}

