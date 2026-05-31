
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10148be18(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
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
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_100;
  long lStack_f8;
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
  long lStack_a0;
  long lStack_98;
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
    lStack_a0 = 10;
    lVar5 = func_0x000108a4a0f8(&lStack_a0,0,0);
    return lVar5;
  }
  puVar3 = (undefined4 *)_malloc(4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x7473696c;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar3;
    param_1[0xb] = 4;
    param_1[9] = -0x8000000000000000;
    lStack_150 = param_1[0xb];
    lStack_158 = param_1[10];
    uStack_160 = 4;
    pauVar4 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar4[1][0] == '\x01') {
      auVar11 = *pauVar4;
    }
    else {
      auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar4 + 8) = auVar11._8_8_;
      pauVar4[1][0] = 1;
    }
    *(long *)*pauVar4 = auVar11._0_8_ + 1;
    FUN_105dc99f8(&lStack_a0,10,auVar11._0_8_,auVar11._8_8_);
    uStack_58 = 0x8000000000000000;
    lVar5 = lStack_98;
    if (lStack_a0 != -0x7fffffffffffffff) {
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
      lStack_100 = lStack_a0;
      lStack_f8 = lStack_98;
      lVar5 = FUN_1014788c0(&lStack_100,&UNK_108cab321,7,param_2);
      if ((((((lVar5 == 0) &&
             (lVar5 = FUN_1014788c0(&lStack_100,&UNK_108cab328,9,param_2 + 0x20), lVar5 == 0)) &&
            (lVar5 = FUN_1014788c0(&lStack_100,&UNK_108cab30e,9,param_2 + 0x40), lVar5 == 0)) &&
           ((lVar5 = FUN_1014788c0(&lStack_100,&UNK_108cab317,10,param_2 + 0x60), lVar5 == 0 &&
            (lVar5 = FUN_1014788c0(&lStack_100,&UNK_108cab4d7,7,param_2 + 0x80), lVar5 == 0)))) &&
          ((lVar5 = FUN_1014788c0(&lStack_100,&UNK_108cab4de,9,param_2 + 0xa0), lVar5 == 0 &&
           ((lVar5 = FUN_1014788c0(&lStack_100,&UNK_108c981b8,8,param_2 + 0xc0), lVar5 == 0 &&
            (lVar5 = FUN_1014788c0(&lStack_100,&UNK_108cab4e7,0xb,param_2 + 0xe0), lVar5 == 0))))))
         && ((lVar5 = FUN_1014788c0(&lStack_100,&UNK_108cab4f2,6,param_2 + 0x100), lVar5 == 0 &&
             (lVar5 = FUN_1014788c0(&lStack_100,&UNK_108cab265,6,param_2 + 0x120), lVar5 == 0)))) {
        uStack_78 = uStack_d8;
        uStack_80 = uStack_e0;
        uStack_68 = uStack_c8;
        uStack_70 = uStack_d0;
        uStack_58 = uStack_b8;
        uStack_60 = uStack_c0;
        uStack_48 = uStack_a8;
        uStack_50 = uStack_b0;
        lStack_98 = lStack_f8;
        lStack_a0 = lStack_100;
        uStack_88 = uStack_e8;
        uStack_90 = uStack_f0;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (&lStack_148,&lStack_a0);
        lVar5 = lStack_140;
        if (lStack_148 != -0x7ffffffffffffffb) {
          FUN_101497a9c(&lStack_a0,param_1,&uStack_160,&lStack_148);
          lStack_f8 = uStack_90;
          lStack_100 = lStack_98;
          uStack_e8 = uStack_80;
          uStack_f0 = uStack_88;
          uStack_d8 = uStack_70;
          uStack_e0 = uStack_78;
          uStack_c8 = uStack_60;
          uStack_d0 = uStack_68;
          uStack_c0 = uStack_58;
          if (lStack_98 != -0x7ffffffffffffffb) {
            FUN_100de6690(&lStack_100);
          }
          return 0;
        }
      }
      else {
        FUN_100e040f0(&lStack_100);
      }
    }
    _free(lStack_158);
    return lVar5;
  }
  uVar6 = func_0x0001087c9084(1,4);
  FUN_100e040f0(&lStack_100);
  _free(lStack_158);
  auVar11 = __Unwind_Resume(uVar6);
  plVar7 = auVar11._0_8_;
  if (*plVar7 == -0x8000000000000000) {
    uStack_1f0 = 10;
    lVar5 = func_0x000108a4a0f8(&uStack_1f0,0,0);
    return lVar5;
  }
  puVar8 = (undefined8 *)_malloc(8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0x6e6f697461727564;
    if (plVar7[9] != -0x8000000000000000 && plVar7[9] != 0) {
      _free(plVar7[10]);
    }
    plVar7[10] = (long)puVar8;
    plVar7[0xb] = 8;
    plVar7[9] = -0x8000000000000000;
    lStack_240 = plVar7[0xb];
    lStack_248 = plVar7[10];
    uStack_250 = 8;
    FUN_10064c3a8(&lStack_238,auVar11._8_8_,param_3);
    if (lStack_238 == -0x7ffffffffffffffb) {
      _free(lStack_248);
      return lStack_230;
    }
    FUN_101497a9c(&uStack_1f0,plVar7,&uStack_250,&lStack_238);
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
    return 0;
  }
  uVar6 = func_0x0001087c9084(1,8);
  _free(lStack_248);
  auVar11 = __Unwind_Resume(uVar6);
  uVar10 = auVar11._8_8_;
  plVar7 = auVar11._0_8_;
  if (*plVar7 == -0x8000000000000000) {
    uStack_330 = 10;
    lVar5 = func_0x000108a4a0f8(&uStack_330,0,0);
    return lVar5;
  }
  puVar3 = (undefined4 *)_malloc(6);
  if (puVar3 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,6);
    goto LAB_10148c514;
  }
  *(undefined2 *)(puVar3 + 1) = 0x7375;
  *puVar3 = 0x74617473;
  if (plVar7[9] != -0x8000000000000000 && plVar7[9] != 0) {
    _free(plVar7[10]);
  }
  plVar7[10] = (long)puVar3;
  plVar7[0xb] = 6;
  plVar7[9] = -0x8000000000000000;
  lStack_380 = plVar7[0xb];
  lStack_388 = plVar7[10];
  uStack_390 = 6;
  uVar1 = auVar11._8_4_ & 0xff;
  if (uVar1 == 1 || (uVar10 & 0xff) == 0) {
    if ((uVar10 & 0xff) != 0) {
      uVar10 = 9;
      puStack_368 = (undefined8 *)_malloc(9);
      if (puStack_368 != (undefined8 *)0x0) {
        *(undefined1 *)(puStack_368 + 1) = 100;
        *puStack_368 = 0x6574656c706d6f63;
        uStack_370 = 9;
        goto LAB_10148c470;
      }
LAB_10148c514:
      func_0x0001087c9084(1,uVar10);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10148c524);
      (*pcVar2)();
    }
    uVar10 = 7;
    puStack_368 = (undefined8 *)_malloc(7);
    if (puStack_368 == (undefined8 *)0x0) goto LAB_10148c514;
    *(undefined4 *)((long)puStack_368 + 3) = 0x676e696e;
    uVar9 = 0x6e6e7572;
  }
  else {
    if (uVar1 == 2) {
      uVar10 = 6;
      puStack_368 = (undefined8 *)_malloc(6);
      if (puStack_368 == (undefined8 *)0x0) goto LAB_10148c514;
      *(undefined2 *)((long)puStack_368 + 4) = 0x6465;
      *(undefined4 *)puStack_368 = 0x6c696166;
      uStack_370 = 6;
      goto LAB_10148c470;
    }
    uVar10 = 7;
    if (uVar1 == 3) {
      puStack_368 = (undefined8 *)_malloc(7);
      if (puStack_368 == (undefined8 *)0x0) goto LAB_10148c514;
      *(undefined4 *)((long)puStack_368 + 3) = 0x64656b63;
      uVar9 = 0x636f6c62;
    }
    else {
      puStack_368 = (undefined8 *)_malloc(7);
      if (puStack_368 == (undefined8 *)0x0) goto LAB_10148c514;
      *(undefined4 *)((long)puStack_368 + 3) = 0x64657070;
      uVar9 = 0x706f7473;
    }
  }
  *(undefined4 *)puStack_368 = uVar9;
  uStack_370 = 7;
LAB_10148c470:
  uStack_378 = 0x8000000000000003;
  uStack_360 = uStack_370;
  FUN_101497a9c(&uStack_330,plVar7,&uStack_390,&uStack_378);
  uStack_3d8 = uStack_320;
  lStack_3e0 = lStack_328;
  uStack_3c8 = uStack_310;
  uStack_3d0 = uStack_318;
  uStack_3b8 = uStack_300;
  uStack_3c0 = uStack_308;
  uStack_3a8 = uStack_2f0;
  uStack_3b0 = uStack_2f8;
  uStack_3a0 = uStack_2e8;
  if (lStack_328 != -0x7ffffffffffffffb) {
    FUN_100de6690(&lStack_3e0);
  }
  return 0;
}

