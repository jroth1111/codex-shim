
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10148a714(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  undefined *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *unaff_x25;
  undefined1 auVar18 [16];
  long lStack_370;
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
  undefined8 *puStack_2f8;
  undefined8 *puStack_2e8;
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
  undefined8 *puStack_228;
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
  undefined8 *puStack_1c8;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*param_1 == -0x8000000000000000) {
    uStack_a0 = 10;
    puVar11 = (undefined8 *)func_0x000108a4a0f8(&uStack_a0,0,0);
    return puVar11;
  }
  lVar6 = _malloc(param_3);
  if (lVar6 != 0) {
    _memcpy(lVar6,param_2,param_3);
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = lVar6;
    param_1[0xb] = param_3;
    param_1[9] = -0x8000000000000000;
    lStack_f0 = param_1[0xb];
    lStack_f8 = param_1[10];
    lStack_100 = param_3;
    if (*param_4 == -0x7ffffffffffffffb) {
      lStack_e8 = -0x8000000000000000;
    }
    else {
      func_0x000100684748(&lStack_e8,param_4);
      if (lStack_e8 == -0x7ffffffffffffffb) {
        _free(lStack_f8);
        return puStack_e0;
      }
    }
    FUN_101497a9c(&uStack_a0,param_1,&lStack_100,&lStack_e8);
    uStack_148 = uStack_90;
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
  uVar7 = func_0x0001087c9084(1,param_3);
  _free(lStack_f8);
  auVar18 = __Unwind_Resume(uVar7);
  plVar16 = auVar18._8_8_;
  plVar8 = auVar18._0_8_;
  if (*plVar8 == -0x8000000000000000) {
    puStack_220 = (undefined8 *)0xa;
    puVar11 = (undefined8 *)func_0x000108a4a0f8(&puStack_220,0,0);
    return puVar11;
  }
  puVar9 = (undefined4 *)_malloc(6);
  if (puVar9 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar9 + 1) = 0x7374;
    *puVar9 = 0x6e656761;
    if (plVar8[9] != -0x8000000000000000 && plVar8[9] != 0) {
      _free(plVar8[10]);
    }
    plVar8[10] = (long)puVar9;
    plVar8[0xb] = 6;
    plVar8[9] = -0x8000000000000000;
    lStack_358 = plVar8[0xb];
    lStack_360 = plVar8[10];
    uStack_368 = 6;
    lVar6 = *plVar16;
    if (lVar6 == 2) {
      puStack_280 = (undefined8 *)0x8000000000000000;
LAB_10148a940:
      FUN_101497a9c(&puStack_220,plVar8,&uStack_368,&puStack_280);
      puStack_348 = puStack_210;
      puStack_350 = puStack_218;
      puStack_338 = puStack_200;
      puStack_340 = puStack_208;
      puStack_328 = puStack_1f0;
      puStack_330 = puStack_1f8;
      puStack_318 = puStack_1e0;
      puStack_320 = puStack_1e8;
      puStack_310 = puStack_1d8;
      if (puStack_218 != (undefined8 *)0x8000000000000005) {
        FUN_100de6690(&puStack_350);
      }
      return (undefined8 *)0x0;
    }
    pauVar10 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar10[1][0] == '\x01') {
      auVar18 = *pauVar10;
    }
    else {
      auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar10 + 8) = auVar18._8_8_;
      pauVar10[1][0] = 1;
    }
    *(long *)*pauVar10 = auVar18._0_8_ + 1;
    FUN_105dc99f8(&puStack_220,0,auVar18._0_8_,auVar18._8_8_);
    puStack_1d8 = (undefined8 *)0x8000000000000000;
    puVar11 = puStack_218;
    if (puStack_220 == (undefined8 *)0x8000000000000001) goto LAB_10148ab70;
    puStack_318 = puStack_1e8;
    puStack_320 = puStack_1f0;
    puStack_308 = (undefined8 *)0x8000000000000000;
    puStack_310 = puStack_1e0;
    puStack_2f8 = puStack_1c8;
    puStack_300 = puStack_1d0;
    puStack_338 = puStack_208;
    puStack_340 = puStack_210;
    puStack_328 = puStack_1f8;
    puStack_330 = puStack_200;
    puStack_350 = puStack_220;
    puStack_348 = puStack_218;
    puVar11 = (undefined8 *)func_0x00010063b76c(&puStack_350,&UNK_108cab84c,0xb,lVar6,plVar16[1]);
    if (puVar11 == (undefined8 *)0x0) {
      if (puStack_350 == (undefined8 *)0x8000000000000000) {
LAB_10148afa0:
        puVar12 = &UNK_10b24c5c0;
LAB_10148afb4:
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,puVar12);
        goto LAB_10148b01c;
      }
      uVar2 = *(uint *)(plVar16 + 4);
      iVar3 = *(int *)((long)plVar16 + 0x24);
      unaff_x25 = (undefined8 *)0x9;
      puVar11 = (undefined8 *)_malloc(9);
      if (puVar11 == (undefined8 *)0x0) goto LAB_10148b000;
      *(undefined1 *)(puVar11 + 1) = 0x68;
      *puVar11 = 0x747065645f78616d;
      if ((puStack_308 != (undefined8 *)0x8000000000000000) && (puStack_308 != (undefined8 *)0x0)) {
        _free(puStack_300);
      }
      puStack_2f8 = (undefined8 *)0x9;
      puStack_308 = (undefined8 *)0x8000000000000000;
      puStack_2d8 = (undefined8 *)0x9;
      puStack_2e8 = (undefined8 *)0x9;
      puStack_278 = (undefined8 *)((ulong)(long)iVar3 >> 0x3f);
      puStack_280 = (undefined8 *)0x8000000000000002;
      if ((uVar2 & 1) == 0) {
        puStack_280 = (undefined8 *)0x8000000000000000;
      }
      puStack_300 = puVar11;
      puStack_2e0 = puVar11;
      puStack_270 = (undefined8 *)(long)iVar3;
      FUN_101497a9c(&puStack_220,&puStack_350,&puStack_2e8,&puStack_280);
      puStack_2c8 = puStack_210;
      puStack_2d0 = puStack_218;
      puStack_2b8 = puStack_200;
      puStack_2c0 = puStack_208;
      puStack_2a8 = puStack_1f0;
      puStack_2b0 = puStack_1f8;
      puStack_298 = puStack_1e0;
      puStack_2a0 = puStack_1e8;
      puStack_290 = puStack_1d8;
      if (puStack_218 != (undefined8 *)0x8000000000000005) {
        FUN_100de6690(&puStack_2d0);
      }
      puVar11 = (undefined8 *)
                func_0x00010063b634(&puStack_350,&UNK_108cab860,0x17,plVar16[2],plVar16[3]);
      if ((puVar11 == (undefined8 *)0x0) &&
         (puVar11 = (undefined8 *)
                    func_0x0001006384d0(&puStack_350,&UNK_108cab877,0x11,(char)plVar16[8]),
         puVar11 == (undefined8 *)0x0)) {
        plVar15 = (long *)0x0;
        plVar13 = (long *)plVar16[5];
        uVar14 = plVar16[6];
        lStack_370 = plVar16[7];
        bVar5 = plVar13 != (long *)0x0;
        if (!bVar5) {
          lStack_370 = 0;
        }
        do {
          if (lStack_370 == 0) {
            puStack_1f8 = puStack_328;
            puStack_200 = puStack_330;
            puStack_1e8 = puStack_318;
            puStack_1f0 = puStack_320;
            puStack_1d8 = puStack_308;
            puStack_1e0 = puStack_310;
            puStack_1c8 = puStack_2f8;
            puStack_1d0 = puStack_300;
            puStack_218 = puStack_348;
            puStack_220 = puStack_350;
            puStack_208 = puStack_338;
            puStack_210 = puStack_340;
            __ZN86__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeMap_GT_3end17h34ae74b1de8dd2f6E
                      (&puStack_280,&puStack_220);
            puVar11 = puStack_278;
            if (puStack_280 == (undefined8 *)0x8000000000000005) goto LAB_10148ab70;
            goto LAB_10148a940;
          }
          if (!bVar5) {
            func_0x000108a07a20(&UNK_10b212c38);
            goto LAB_10148b01c;
          }
          if (plVar15 == (long *)0x0) {
            for (; plVar15 = plVar13, uVar14 != 0; uVar14 = uVar14 - 1) {
              plVar13 = (long *)plVar15[0x86];
            }
            plVar13 = (long *)0x0;
            uVar17 = 0;
            plVar16 = plVar15;
            if (*(short *)((long)plVar15 + 0x42a) == 0) goto LAB_10148ac48;
          }
          else {
            plVar16 = plVar15;
            uVar17 = uVar14;
            if (*(ushort *)((long)plVar15 + 0x42a) <= uVar14) {
LAB_10148ac48:
              do {
                plVar15 = (long *)*plVar16;
                if (plVar15 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b2382c8);
                  goto LAB_10148b01c;
                }
                plVar13 = (long *)((long)plVar13 + 1);
                puVar1 = (ushort *)(plVar16 + 0x85);
                plVar16 = plVar15;
                uVar17 = (ulong)*puVar1;
              } while (*(ushort *)((long)plVar15 + 0x42a) <= *puVar1);
            }
          }
          uVar14 = uVar17 + 1;
          plVar16 = plVar15;
          if (plVar13 != (long *)0x0) {
            plVar16 = plVar15 + uVar14;
            do {
              plVar16 = (long *)plVar16[0x86];
              plVar13 = (long *)((long)plVar13 + -1);
            } while (plVar13 != (long *)0x0);
            uVar14 = 0;
          }
          if (puStack_350 == (undefined8 *)0x8000000000000000) goto LAB_10148afa0;
          unaff_x25 = (undefined8 *)plVar15[uVar17 * 3 + 3];
          if (unaff_x25 == (undefined8 *)0x0) {
            puVar11 = (undefined8 *)0x1;
          }
          else {
            lVar6 = plVar15[uVar17 * 3 + 2];
            puVar11 = (undefined8 *)_malloc(unaff_x25);
            if (puVar11 == (undefined8 *)0x0) goto LAB_10148b000;
            _memcpy(puVar11,lVar6,unaff_x25);
            if (unaff_x25 == (undefined8 *)0x8000000000000000) break;
          }
          if (((puStack_308 != (undefined8 *)0x8000000000000000) &&
              (puStack_308 != (undefined8 *)0x0)) &&
             (_free(puStack_300), puStack_350 == (undefined8 *)0x8000000000000000)) {
            puVar12 = &UNK_10b24c5f0;
            puStack_308 = unaff_x25;
            puStack_300 = puVar11;
            puStack_2f8 = unaff_x25;
            goto LAB_10148afb4;
          }
          puStack_308 = (undefined8 *)0x8000000000000000;
          if (unaff_x25 == (undefined8 *)0x8000000000000000) {
            puStack_300 = puVar11;
            puStack_2f8 = unaff_x25;
            func_0x000108a079f0(&UNK_108cd2aad,0x2b,&UNK_10b24c5d8);
            goto LAB_10148b01c;
          }
          puStack_2e8 = unaff_x25;
          puStack_2e0 = puVar11;
          puStack_2d8 = unaff_x25;
          if (pauVar10[1][0] == '\x01') {
            auVar18 = *pauVar10;
            puStack_300 = puVar11;
            puStack_2f8 = unaff_x25;
          }
          else {
            puStack_300 = puVar11;
            puStack_2f8 = unaff_x25;
            auVar18 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
            *(long *)(*pauVar10 + 8) = auVar18._8_8_;
            pauVar10[1][0] = 1;
          }
          *(long *)*pauVar10 = auVar18._0_8_ + 1;
          FUN_105dc99f8(&puStack_220,3,auVar18._0_8_,auVar18._8_8_);
          puStack_1d8 = (undefined8 *)0x8000000000000000;
          puVar11 = puStack_218;
          if (puStack_220 == (undefined8 *)0x8000000000000001) {
LAB_10148ae2c:
            if (unaff_x25 != (undefined8 *)0x0) {
LAB_10148ae30:
              _free(puStack_2e0);
            }
          }
          else {
            puStack_248 = puStack_1e8;
            puStack_250 = puStack_1f0;
            puStack_238 = (undefined8 *)0x8000000000000000;
            puStack_240 = puStack_1e0;
            puStack_228 = puStack_1c8;
            puStack_230 = puStack_1d0;
            puStack_268 = puStack_208;
            puStack_270 = puStack_210;
            puStack_258 = puStack_1f8;
            puStack_260 = puStack_200;
            puStack_280 = puStack_220;
            puStack_278 = puStack_218;
            if (puStack_220 == (undefined8 *)0x8000000000000000) {
LAB_10148adb4:
              puStack_220 = (undefined8 *)0xa;
              puVar11 = (undefined8 *)func_0x000108a4a0f8(&puStack_220,0,0);
LAB_10148ae20:
              FUN_100e040f0(&puStack_280);
              goto LAB_10148ae2c;
            }
            puVar11 = (undefined8 *)
                      func_0x000100643448(&puStack_280,&UNK_108ca155d,0xb,
                                          plVar15 + uVar17 * 9 + 0x22);
            if ((puVar11 != (undefined8 *)0x0) ||
               (puVar11 = (undefined8 *)
                          func_0x00010147c598(&puStack_280,&UNK_108cabe70,0xb,
                                              plVar15 + uVar17 * 9 + 0x25),
               puVar11 != (undefined8 *)0x0)) goto LAB_10148ae20;
            if (puStack_280 == (undefined8 *)0x8000000000000000) goto LAB_10148adb4;
            puVar11 = (undefined8 *)
                      func_0x00010063b4bc(&puStack_280,&UNK_108cabe7b,0x13,
                                          plVar15 + uVar17 * 9 + 0x28);
            if (puVar11 != (undefined8 *)0x0) goto LAB_10148ae20;
            puStack_1f8 = puStack_258;
            puStack_200 = puStack_260;
            puStack_1e8 = puStack_248;
            puStack_1f0 = puStack_250;
            puStack_1d8 = puStack_238;
            puStack_1e0 = puStack_240;
            puStack_1c8 = puStack_228;
            puStack_1d0 = puStack_230;
            puStack_218 = puStack_278;
            puStack_220 = puStack_280;
            puStack_208 = puStack_268;
            puStack_210 = puStack_270;
            __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                      (&puStack_2d0,&puStack_220);
            if (puStack_2d0 == (undefined8 *)0x8000000000000005) {
              puVar11 = puStack_2c8;
              if (unaff_x25 == (undefined8 *)0x0) goto LAB_10148abe4;
              goto LAB_10148ae30;
            }
            FUN_101497a9c(&puStack_220,&puStack_350,&puStack_2e8,&puStack_2d0);
            puStack_278 = puStack_210;
            puStack_280 = puStack_218;
            puStack_268 = puStack_200;
            puStack_270 = puStack_208;
            puStack_258 = puStack_1f0;
            puStack_260 = puStack_1f8;
            puStack_248 = puStack_1e0;
            puStack_250 = puStack_1e8;
            puStack_240 = puStack_1d8;
            if (puStack_218 != (undefined8 *)0x8000000000000005) {
              FUN_100de6690(&puStack_280);
            }
            puVar11 = (undefined8 *)0x0;
          }
LAB_10148abe4:
          plVar13 = (long *)0x0;
          lStack_370 = lStack_370 + -1;
          bVar5 = true;
          plVar15 = plVar16;
        } while (puVar11 == (undefined8 *)0x0);
      }
    }
    FUN_100e040f0(&puStack_350);
LAB_10148ab70:
    _free(lStack_360);
    return puVar11;
  }
  func_0x0001087c9084(1,6);
LAB_10148b000:
  func_0x0001087c9084(1,unaff_x25);
LAB_10148b01c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10148b020);
  (*pcVar4)();
}

