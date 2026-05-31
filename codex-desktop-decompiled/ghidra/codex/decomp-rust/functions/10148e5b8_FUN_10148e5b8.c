
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10148e5b8(long *param_1,long *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_368;
  long lStack_360;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  if (*param_1 == -0x8000000000000000) {
    puStack_d0 = (undefined8 *)0xa;
    puVar8 = (undefined8 *)func_0x000108a4a0f8(&puStack_d0,0,0);
    return puVar8;
  }
  puVar5 = (undefined4 *)_malloc(5);
  if (puVar5 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,5);
LAB_10148ee78:
    func_0x0001087c9084(1,10);
    goto LAB_10148eea4;
  }
  *(undefined1 *)(puVar5 + 1) = 0x73;
  *puVar5 = 0x6c6f6f74;
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  param_1[10] = (long)puVar5;
  param_1[0xb] = 5;
  param_1[9] = -0x8000000000000000;
  lStack_358 = param_1[0xb];
  lStack_360 = param_1[10];
  uStack_368 = 5;
  lVar10 = *param_2;
  if (lVar10 == -0x7ffffffffffffffe) {
    puStack_130 = (undefined8 *)0x8000000000000000;
LAB_10148e678:
    FUN_101497a9c(&puStack_d0,param_1,&uStack_368,&puStack_130);
    puStack_238 = puStack_c0;
    puStack_240 = puStack_c8;
    puStack_228 = puStack_b0;
    puStack_230 = puStack_b8;
    puStack_218 = puStack_a0;
    puStack_220 = puStack_a8;
    puStack_208 = puStack_90;
    puStack_210 = puStack_98;
    puStack_200 = (undefined8 *)lStack_88;
    if (puStack_c8 != (undefined8 *)0x8000000000000005) {
      FUN_100de6690(&puStack_240);
    }
    puVar8 = (undefined8 *)0x0;
  }
  else {
    pauVar6 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar6[1][0] == '\x01') {
      auVar11 = *pauVar6;
    }
    else {
      auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar6 + 8) = auVar11._8_8_;
      pauVar6[1][0] = 1;
    }
    *(long *)*pauVar6 = auVar11._0_8_ + 1;
    FUN_105dc99f8(&puStack_d0,1,auVar11._0_8_,auVar11._8_8_);
    puVar3 = puStack_c8;
    puVar2 = puStack_d0;
    lStack_88 = -0x8000000000000000;
    puVar8 = puStack_c8;
    if (puStack_d0 != (undefined8 *)0x8000000000000001) {
      puStack_318 = puStack_98;
      puStack_320 = puStack_a0;
      puStack_308 = (undefined8 *)0x8000000000000000;
      puStack_310 = puStack_90;
      uStack_2f8 = uStack_78;
      puStack_300 = puStack_80;
      puStack_338 = puStack_b8;
      puStack_340 = puStack_c0;
      puStack_328 = puStack_a8;
      puStack_330 = puStack_b0;
      puStack_350 = puStack_d0;
      puStack_348 = puStack_c8;
      if (puStack_d0 == (undefined8 *)0x8000000000000000) {
        puStack_d0 = (undefined8 *)0xa;
        puVar8 = (undefined8 *)func_0x000108a4a0f8(&puStack_d0,0,0);
      }
      else {
        puVar8 = (undefined8 *)_malloc(10);
        if (puVar8 == (undefined8 *)0x0) goto LAB_10148ee78;
        *(undefined2 *)(puVar8 + 1) = 0x6863;
        *puVar8 = 0x726165735f626577;
        if ((puStack_308 != (undefined8 *)0x8000000000000000) && (puStack_308 != (undefined8 *)0x0))
        {
          _free(puStack_300);
        }
        uStack_2f8 = 10;
        puStack_308 = (undefined8 *)0x8000000000000000;
        uStack_290 = 10;
        uStack_2a0 = 10;
        puStack_300 = puVar8;
        puStack_298 = puVar8;
        if (lVar10 == -0x7fffffffffffffff) {
          lStack_288 = -0x8000000000000000;
LAB_10148e7e4:
          FUN_101497a9c(&puStack_d0,&puStack_350,&uStack_2a0,&lStack_288);
          puStack_2e8 = puStack_c0;
          puStack_2f0 = puStack_c8;
          puStack_2d8 = puStack_b0;
          puStack_2e0 = puStack_b8;
          puStack_2c8 = puStack_a0;
          puStack_2d0 = puStack_a8;
          puStack_2b8 = puStack_90;
          puStack_2c0 = puStack_98;
          lStack_2b0 = lStack_88;
          if (puStack_c8 != (undefined8 *)0x8000000000000005) {
            FUN_100de6690(&puStack_2f0);
          }
          puVar8 = puStack_348;
          puVar2 = puStack_350;
          if (puStack_350 == (undefined8 *)0x8000000000000000) {
            if (puStack_348 == (undefined8 *)0x8000000000000005) {
              func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
LAB_10148eea4:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10148eea8);
              (*pcVar4)();
            }
            puStack_120 = puStack_338;
            puStack_128 = puStack_340;
            puStack_110 = puStack_328;
            puStack_118 = puStack_330;
            puStack_100 = puStack_318;
            puStack_108 = puStack_320;
            puStack_f8 = puStack_310;
            puStack_130 = puStack_348;
            puStack_f0 = puStack_308;
          }
          else {
            puStack_130 = puStack_350;
            puStack_128 = puStack_348;
            puStack_118 = puStack_338;
            puStack_120 = puStack_340;
            puStack_108 = puStack_328;
            puStack_110 = puStack_330;
            puStack_f8 = puStack_318;
            puStack_100 = puStack_320;
            puStack_f0 = puStack_310;
            if (((ulong)puStack_308 & 0x7fffffffffffffff) != 0) {
              _free(puStack_300);
            }
            if (puVar2 == (undefined8 *)0x8000000000000005) goto LAB_10148eb00;
          }
          goto LAB_10148e678;
        }
        if (pauVar6[1][0] == '\x01') {
          auVar11 = *pauVar6;
        }
        else {
          auVar11 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar6 + 8) = auVar11._8_8_;
          pauVar6[1][0] = 1;
        }
        *(long *)*pauVar6 = auVar11._0_8_ + 1;
        FUN_105dc99f8(&puStack_d0,3,auVar11._0_8_,auVar11._8_8_);
        lStack_88 = -0x8000000000000000;
        puVar8 = puStack_c8;
        if (puStack_d0 == (undefined8 *)0x8000000000000001) {
LAB_10148eae8:
          _free(puStack_298);
        }
        else {
          puStack_208 = puStack_98;
          puStack_210 = puStack_a0;
          lStack_1f8 = -0x8000000000000000;
          puStack_200 = puStack_90;
          uStack_1e8 = uStack_78;
          puStack_1f0 = puStack_80;
          puStack_228 = puStack_b8;
          puStack_230 = puStack_c0;
          puStack_218 = puStack_a8;
          puStack_220 = puStack_b0;
          puStack_240 = puStack_d0;
          puStack_238 = puStack_c8;
          if (puStack_d0 == (undefined8 *)0x8000000000000000) {
LAB_10148eac4:
            puStack_d0 = (undefined8 *)0xa;
            puVar8 = (undefined8 *)func_0x000108a4a0f8(&puStack_d0,0,0);
LAB_10148eae0:
            FUN_100e040f0(&puStack_240);
            goto LAB_10148eae8;
          }
          bVar1 = *(byte *)(param_2 + 0xf);
          uVar9 = 0xc;
          puVar8 = (undefined8 *)_malloc(0xc);
          if (puVar8 == (undefined8 *)0x0) {
LAB_10148ee88:
            func_0x0001087c9084(1,uVar9);
            goto LAB_10148eea4;
          }
          *(undefined4 *)(puVar8 + 1) = 0x657a6973;
          *puVar8 = 0x5f747865746e6f63;
          if ((lStack_1f8 != -0x8000000000000000) && (lStack_1f8 != 0)) {
            _free(puStack_1f0);
          }
          puVar7 = (undefined8 *)0xc;
          uStack_1e8 = 0xc;
          lStack_1f8 = -0x8000000000000000;
          puStack_1d0 = (undefined8 *)0xc;
          puStack_1e0 = (undefined8 *)0xc;
          puStack_1f0 = puVar8;
          puStack_1d8 = puVar8;
          if (bVar1 < 2) {
            if (bVar1 == 0) {
              uVar9 = 3;
              puVar8 = (undefined8 *)_malloc(3);
              if (puVar8 == (undefined8 *)0x0) {
LAB_10148ee98:
                func_0x0001087c9084(1,uVar9);
                goto LAB_10148eea4;
              }
              *(undefined1 *)((long)puVar8 + 2) = 0x77;
              *(undefined2 *)puVar8 = 0x6f6c;
              puStack_128 = (undefined8 *)0x3;
              puStack_130 = (undefined8 *)0x8000000000000003;
              puVar7 = (undefined8 *)0x3;
            }
            else {
              uVar9 = 6;
              puVar8 = (undefined8 *)_malloc(6);
              if (puVar8 == (undefined8 *)0x0) goto LAB_10148ee98;
              *(undefined2 *)((long)puVar8 + 4) = 0x6d75;
              *(undefined4 *)puVar8 = 0x6964656d;
              puStack_128 = (undefined8 *)0x6;
              puStack_130 = (undefined8 *)0x8000000000000003;
              puVar7 = (undefined8 *)0x6;
            }
          }
          else if (bVar1 == 2) {
            uVar9 = 4;
            puVar8 = (undefined8 *)_malloc(4);
            if (puVar8 == (undefined8 *)0x0) goto LAB_10148ee98;
            *(undefined4 *)puVar8 = 0x68676968;
            puStack_128 = (undefined8 *)0x4;
            puStack_130 = (undefined8 *)0x8000000000000003;
            puVar7 = (undefined8 *)0x4;
          }
          else {
            puStack_130 = (undefined8 *)0x8000000000000000;
            puStack_128 = (undefined8 *)0x8000000000000000;
          }
          puStack_120 = puVar8;
          puStack_118 = puVar7;
          FUN_101497a9c(&puStack_d0,&puStack_240,&puStack_1e0,&puStack_130);
          puStack_178 = puStack_c0;
          puStack_180 = puStack_c8;
          puStack_168 = puStack_b0;
          puStack_170 = puStack_b8;
          puStack_158 = puStack_a0;
          puStack_160 = puStack_a8;
          puStack_148 = puStack_90;
          puStack_150 = puStack_98;
          lStack_140 = lStack_88;
          if (puStack_c8 != (undefined8 *)0x8000000000000005) {
            FUN_100de6690(&puStack_180);
          }
          if (puStack_240 == (undefined8 *)0x8000000000000000) goto LAB_10148eac4;
          puVar8 = (undefined8 *)FUN_10063b4bc(&puStack_240,&UNK_108ca2284,0xf,param_2);
          if (puVar8 != (undefined8 *)0x0) goto LAB_10148eae0;
          if (puStack_240 == (undefined8 *)0x8000000000000000) goto LAB_10148eac4;
          uVar9 = 8;
          puVar8 = (undefined8 *)_malloc(8);
          if (puVar8 == (undefined8 *)0x0) goto LAB_10148ee88;
          *puVar8 = 0x6e6f697461636f6c;
          if ((lStack_1f8 != -0x8000000000000000) && (lStack_1f8 != 0)) {
            _free(puStack_1f0);
          }
          uStack_1e8 = 8;
          lStack_1f8 = -0x8000000000000000;
          uStack_188 = 8;
          uStack_198 = 8;
          puStack_1f0 = puVar8;
          puStack_190 = puVar8;
          if (param_2[3] == -0x7fffffffffffffff) {
            puStack_180 = (undefined8 *)0x8000000000000000;
LAB_10148ebe8:
            FUN_101497a9c(&puStack_d0,&puStack_240,&uStack_198,&puStack_180);
            puStack_1d8 = puStack_c0;
            puStack_1e0 = puStack_c8;
            puStack_1c8 = puStack_b0;
            puStack_1d0 = puStack_b8;
            puStack_1b8 = puStack_a0;
            puStack_1c0 = puStack_a8;
            puStack_1a8 = puStack_90;
            puStack_1b0 = puStack_98;
            lStack_1a0 = lStack_88;
            if (puStack_c8 != (undefined8 *)0x8000000000000005) {
              FUN_100de6690(&puStack_1e0);
            }
          }
          else {
            __ZN82__LT_serde_json__value__ser__Serializer_u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17h1afe0e688f2d23f7E
                      (&puStack_d0,&UNK_108cada1d,0x11,4);
            puVar8 = puStack_c8;
            if (puStack_d0 == (undefined8 *)0x8000000000000001) {
LAB_10148ecec:
              _free(puStack_190);
            }
            else {
              puStack_f8 = puStack_98;
              puStack_100 = puStack_a0;
              lStack_e8 = lStack_88;
              puStack_f0 = puStack_90;
              uStack_d8 = uStack_78;
              puStack_e0 = puStack_80;
              puStack_118 = puStack_b8;
              puStack_120 = puStack_c0;
              puStack_108 = puStack_a8;
              puStack_110 = puStack_b0;
              puStack_130 = puStack_d0;
              puStack_128 = puStack_c8;
              if (puStack_d0 == (undefined8 *)0x8000000000000000) {
LAB_10148ec88:
                puStack_d0 = (undefined8 *)0xa;
                puVar8 = (undefined8 *)func_0x000108a4a0f8(&puStack_d0,0,0);
LAB_10148ece4:
                FUN_100e040f0(&puStack_130);
                goto LAB_10148ecec;
              }
              puVar8 = (undefined8 *)func_0x000100643448(&puStack_130,&UNK_108cada2e,7,param_2 + 3);
              if (puVar8 != (undefined8 *)0x0) goto LAB_10148ece4;
              if (puStack_130 == (undefined8 *)0x8000000000000000) goto LAB_10148ec88;
              puVar8 = (undefined8 *)func_0x000100643448(&puStack_130,&UNK_108cada35,6,param_2 + 6);
              if (puVar8 != (undefined8 *)0x0) goto LAB_10148ece4;
              if (puStack_130 == (undefined8 *)0x8000000000000000) goto LAB_10148ec88;
              puVar8 = (undefined8 *)func_0x000100643448(&puStack_130,&UNK_108cde3dc,4,param_2 + 9);
              if (puVar8 != (undefined8 *)0x0) goto LAB_10148ece4;
              if (puStack_130 == (undefined8 *)0x8000000000000000) goto LAB_10148ec88;
              puVar8 = (undefined8 *)
                       func_0x000100643448(&puStack_130,&UNK_108c98268,8,param_2 + 0xc);
              if (puVar8 != (undefined8 *)0x0) goto LAB_10148ece4;
              puStack_a8 = puStack_108;
              puStack_b0 = puStack_110;
              puStack_98 = puStack_f8;
              puStack_a0 = puStack_100;
              lStack_88 = lStack_e8;
              puStack_90 = puStack_f0;
              uStack_78 = uStack_d8;
              puStack_80 = puStack_e0;
              puStack_c8 = puStack_128;
              puStack_d0 = puStack_130;
              puStack_b8 = puStack_118;
              puStack_c0 = puStack_120;
              __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                        (&puStack_180,&puStack_d0);
              puVar8 = puStack_178;
              if (puStack_180 != (undefined8 *)0x8000000000000005) goto LAB_10148ebe8;
              _free(puStack_190);
            }
            if (puVar8 != (undefined8 *)0x0) goto LAB_10148eae0;
          }
          puStack_a8 = puStack_218;
          puStack_b0 = puStack_220;
          puStack_98 = puStack_208;
          puStack_a0 = puStack_210;
          lStack_88 = lStack_1f8;
          puStack_90 = puStack_200;
          uStack_78 = uStack_1e8;
          puStack_80 = puStack_1f0;
          puStack_c8 = puStack_238;
          puStack_d0 = puStack_240;
          puStack_b8 = puStack_228;
          puStack_c0 = puStack_230;
          __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                    (&lStack_288,&puStack_d0);
          if (lStack_288 != -0x7ffffffffffffffb) goto LAB_10148e7e4;
          _free(puStack_298);
          puVar8 = puStack_280;
        }
        if (puVar8 == (undefined8 *)0x0) {
          puStack_130 = puVar2;
          puStack_128 = puVar3;
          puStack_120 = puStack_340;
          puStack_118 = puStack_338;
          puStack_110 = puStack_330;
          puStack_108 = puStack_328;
          puStack_100 = puStack_320;
          puStack_f8 = puStack_318;
          puStack_f0 = puStack_310;
          goto LAB_10148e678;
        }
      }
      FUN_100e040f0(&puStack_350);
    }
LAB_10148eb00:
    _free(lStack_360);
  }
  return puVar8;
}

