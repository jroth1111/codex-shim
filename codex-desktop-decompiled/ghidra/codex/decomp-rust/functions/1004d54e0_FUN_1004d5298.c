
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1004d5298(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
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
  undefined8 *puStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined4 *puStack_368;
  undefined8 uStack_360;
  undefined1 auStack_330 [8];
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  undefined1 auStack_200 [8];
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_160;
  undefined2 *puStack_158;
  undefined8 uStack_150;
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
  
  puVar2 = (undefined2 *)_malloc(3);
  if (puVar2 == (undefined2 *)0x0) {
    uVar4 = FUN_107c03c64(1,3);
    FUN_100e040f0(&lStack_100);
    _free();
    auVar8 = __Unwind_Resume(uVar4);
    lStack_258 = _malloc(param_3);
    if (lStack_258 != 0) {
      _memcpy(lStack_258,auVar8._8_8_,param_3);
      uStack_260 = param_3;
      uStack_250 = param_3;
      if (param_5 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(param_5);
        if (lVar7 == 0) {
          FUN_107c03c64(1,param_5);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1004d5558);
          (*pcVar1)();
        }
      }
      _memcpy(lVar7,param_4,param_5);
      uStack_248 = 0x8000000000000003;
      lStack_240 = param_5;
      lStack_238 = lVar7;
      lStack_230 = param_5;
      lVar7 = FUN_101497a9c(auStack_200,auVar8._0_8_ + 0x18,&uStack_260,&uStack_248);
      uStack_2a8 = uStack_1f0;
      lStack_2b0 = lStack_1f8;
      uStack_298 = uStack_1e0;
      uStack_2a0 = uStack_1e8;
      uStack_288 = uStack_1d0;
      uStack_290 = uStack_1d8;
      uStack_278 = uStack_1c0;
      uStack_280 = uStack_1c8;
      uStack_270 = uStack_1b8;
      if (lStack_1f8 != -0x7ffffffffffffffb) {
        lVar7 = FUN_100de6690(&lStack_2b0);
      }
      return lVar7;
    }
    uVar4 = FUN_107c03c64(1,param_3);
    _free();
    auVar8 = __Unwind_Resume(uVar4);
    uVar6 = auVar8._8_8_;
    puVar5 = (undefined8 *)_malloc(8);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_107c03c64(1,8);
    }
    else {
      *puVar5 = 0x6c6f636f746f7270;
      uStack_390 = 8;
      uStack_380 = 8;
      puStack_388 = puVar5;
      if ((uVar6 & 1) == 0) {
        uVar6 = 6;
        puStack_368 = (undefined4 *)_malloc(6);
        if (puStack_368 != (undefined4 *)0x0) {
          *(undefined2 *)(puStack_368 + 1) = 0x7972;
          *puStack_368 = 0x616e6962;
          uStack_370 = 6;
          goto LAB_1004d56a4;
        }
      }
      else {
        uVar6 = 4;
        puStack_368 = (undefined4 *)_malloc(4);
        if (puStack_368 != (undefined4 *)0x0) {
          *puStack_368 = 0x6e6f736a;
          uStack_370 = 4;
LAB_1004d56a4:
          uStack_378 = 0x8000000000000003;
          uStack_360 = uStack_370;
          lVar7 = FUN_101497a9c(auStack_330,auVar8._0_8_ + 0x18,&uStack_390,&uStack_378);
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
            lVar7 = FUN_100de6690(&lStack_3e0);
          }
          return lVar7;
        }
      }
    }
    FUN_107c03c64(1,uVar6);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004d5734);
    (*pcVar1)();
  }
  *(undefined1 *)(puVar2 + 1) = 0x73;
  *puVar2 = 0x6c74;
  uStack_160 = 3;
  uStack_150 = 3;
  puStack_158 = puVar2;
  if (*param_2 == -0x7fffffffffffffff) {
    lStack_148 = -0x8000000000000000;
LAB_1004d52fc:
    FUN_101497a9c(&lStack_a0,param_1 + 0x18,&uStack_160,&lStack_148);
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
    lVar7 = 0;
  }
  else {
    pauVar3 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar3[1][0] == '\x01') {
      auVar8 = *pauVar3;
    }
    else {
      auVar8 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar3 + 8) = auVar8._8_8_;
      pauVar3[1][0] = 1;
    }
    *(long *)*pauVar3 = auVar8._0_8_ + 1;
    FUN_105dc99f8(&lStack_a0,3,auVar8._0_8_,auVar8._8_8_);
    uStack_58 = 0x8000000000000000;
    lVar7 = lStack_98;
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
      lVar7 = func_0x00010147c598(&lStack_100,&UNK_108cac67f,0xe,param_2);
      if (((lVar7 == 0) &&
          (lVar7 = func_0x00010147c598(&lStack_100,&UNK_108cac68d,0x12,param_2 + 3), lVar7 == 0)) &&
         (lVar7 = func_0x00010147c598(&lStack_100,&UNK_108cac69f,0x12,param_2 + 6), lVar7 == 0)) {
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
        lVar7 = lStack_140;
        if (lStack_148 != -0x7ffffffffffffffb) goto LAB_1004d52fc;
      }
      else {
        FUN_100e040f0(&lStack_100);
      }
    }
    _free(puVar2);
  }
  return lVar7;
}

