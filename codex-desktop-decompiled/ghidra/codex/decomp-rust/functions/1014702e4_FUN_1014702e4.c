
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1014702e4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long lStack_258;
  undefined4 *puStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f0;
  undefined4 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined4 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined4 *puStack_80;
  undefined8 uStack_78;
  
  if (*param_1 == -0x8000000000000000) {
    lStack_d0 = 10;
    lVar6 = func_0x000108a4a0f8(&lStack_d0,0,0);
    return lVar6;
  }
  puVar4 = (undefined8 *)_malloc(0xf);
  if (puVar4 == (undefined8 *)0x0) {
    func_0x0001087c9084(1,0xf);
LAB_1014708e4:
    func_0x0001087c9084(1,7);
    goto LAB_1014708f0;
  }
  *puVar4 = 0x635f79726f6d656d;
  *(undefined8 *)((long)puVar4 + 7) = 0x6e6f697461746963;
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  param_1[10] = (long)puVar4;
  param_1[0xb] = 0xf;
  param_1[9] = -0x8000000000000000;
  lStack_2a8 = param_1[0xb];
  lStack_2b0 = param_1[10];
  uStack_2b8 = 0xf;
  if (*param_2 == -0x8000000000000000) {
    lStack_130 = -0x8000000000000000;
LAB_101470398:
    FUN_101497a9c(&lStack_d0,param_1,&uStack_2b8,&lStack_130);
    lStack_298 = uStack_c0;
    lStack_2a0 = lStack_c8;
    uStack_288 = uStack_b0;
    uStack_290 = uStack_b8;
    uStack_278 = uStack_a0;
    uStack_280 = uStack_a8;
    uStack_268 = uStack_90;
    uStack_270 = uStack_98;
    lStack_260 = lStack_88;
    if (lStack_c8 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_2a0);
    }
    return 0;
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
  FUN_105dc99f8(&lStack_d0,2,auVar12._0_8_,auVar12._8_8_);
  lStack_88 = -0x8000000000000000;
  lVar6 = lStack_c8;
  if (lStack_d0 == -0x7fffffffffffffff) goto LAB_10147048c;
  uStack_268 = uStack_98;
  uStack_270 = uStack_a0;
  lStack_258 = -0x8000000000000000;
  lStack_260 = uStack_90;
  uStack_248 = uStack_78;
  puStack_250 = puStack_80;
  uStack_288 = uStack_b8;
  uStack_290 = uStack_c0;
  uStack_278 = uStack_a8;
  uStack_280 = uStack_b0;
  lStack_2a0 = lStack_d0;
  lStack_298 = lStack_c8;
  if (lStack_d0 == -0x8000000000000000) {
LAB_101470468:
    lStack_d0 = 10;
    lVar6 = func_0x000108a4a0f8(&lStack_d0,0,0);
  }
  else {
    lVar6 = param_2[1];
    uVar1 = param_2[2];
    puVar7 = (undefined4 *)_malloc(7);
    if (puVar7 == (undefined4 *)0x0) goto LAB_1014708e4;
    *(undefined4 *)((long)puVar7 + 3) = 0x73656972;
    *puVar7 = 0x72746e65;
    if ((lStack_258 != -0x8000000000000000) && (lStack_258 != 0)) {
      _free(puStack_250);
    }
    uStack_248 = 7;
    lStack_258 = -0x8000000000000000;
    uStack_1e0 = 7;
    uStack_1f0 = 7;
    lVar10 = uVar1 * 0x48;
    puStack_250 = puVar7;
    puStack_1e8 = puVar7;
    if (0x1c71c71c71c71c7 < uVar1) {
      uVar8 = 0;
LAB_101470544:
      func_0x0001087c9084(uVar8,lVar10);
LAB_1014708f0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014708f4);
      (*pcVar3)();
    }
    if (lVar10 == 0) {
      lStack_188 = 8;
      uStack_190 = 0;
    }
    else {
      lStack_188 = _malloc(lVar10);
      uStack_190 = uVar1;
      if (lStack_188 == 0) {
        uVar8 = 8;
        goto LAB_101470544;
      }
    }
    puVar7 = (undefined4 *)(lVar6 + 0x34);
    uStack_180 = 0;
    lVar10 = uVar1 * 0x38;
    do {
      if (lVar10 == 0) {
        uStack_1c0 = uStack_180;
        lStack_1c8 = lStack_188;
        uStack_1d8 = 0x8000000000000004;
        uStack_1d0 = uStack_190;
        FUN_101497a9c(&lStack_d0,&lStack_2a0,&uStack_1f0,&uStack_1d8);
        uStack_238 = uStack_c0;
        lStack_240 = lStack_c8;
        uStack_228 = uStack_b0;
        uStack_230 = uStack_b8;
        uStack_218 = uStack_a0;
        uStack_220 = uStack_a8;
        uStack_208 = uStack_90;
        uStack_210 = uStack_98;
        lStack_200 = lStack_88;
        if (lStack_c8 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_240);
        }
        if (lStack_2a0 == -0x8000000000000000) goto LAB_101470468;
        lVar6 = func_0x000100638604(&lStack_2a0,&UNK_108cade85,10,param_2[4],param_2[5]);
        if (lVar6 != 0) goto LAB_101470484;
        uStack_a8 = uStack_278;
        uStack_b0 = uStack_280;
        uStack_98 = uStack_268;
        uStack_a0 = uStack_270;
        lStack_88 = lStack_258;
        uStack_90 = lStack_260;
        uStack_78 = uStack_248;
        puStack_80 = puStack_250;
        lStack_c8 = lStack_298;
        lStack_d0 = lStack_2a0;
        uStack_b8 = uStack_288;
        uStack_c0 = uStack_290;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (&lStack_130,&lStack_d0);
        lVar6 = lStack_128;
        if (lStack_130 == -0x7ffffffffffffffb) goto LAB_10147048c;
        goto LAB_101470398;
      }
      if (pauVar5[1][0] == '\x01') {
        auVar12 = *pauVar5;
      }
      else {
        auVar12 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar5 + 8) = auVar12._8_8_;
        pauVar5[1][0] = 1;
      }
      *(long *)*pauVar5 = auVar12._0_8_ + 1;
      FUN_105dc99f8(&lStack_d0,4,auVar12._0_8_,auVar12._8_8_);
      lStack_88 = -0x8000000000000000;
      lVar6 = lStack_c8;
      if (lStack_d0 != -0x7fffffffffffffff) {
        uStack_f8 = uStack_98;
        uStack_100 = uStack_a0;
        uStack_f0 = uStack_90;
        lStack_e8 = -0x8000000000000000;
        uStack_d8 = uStack_78;
        puStack_e0 = puStack_80;
        uStack_118 = uStack_b8;
        uStack_120 = uStack_c0;
        uStack_108 = uStack_a8;
        uStack_110 = uStack_b0;
        lStack_130 = lStack_d0;
        lStack_128 = lStack_c8;
        lVar6 = -0x8000000000000000;
        if (lStack_d0 == -0x8000000000000000) {
LAB_1014705b4:
          lStack_e8 = lVar6;
          lStack_d0 = 10;
          lVar6 = func_0x000108a4a0f8(&lStack_d0,0,0);
        }
        else {
          lVar6 = FUN_10063fe00(&lStack_130,&UNK_108c61038,4,*(undefined8 *)(puVar7 + -0xb),
                                *(undefined8 *)(puVar7 + -9));
          if (((lVar6 == 0) &&
              (lVar6 = func_0x000101491098(&lStack_130,&UNK_108cade8f,9,puVar7[-1]), lVar6 == 0)) &&
             (lVar6 = func_0x000101491098(&lStack_130,&UNK_108cade98,7,*puVar7), lVar6 == 0)) {
            lVar6 = lStack_e8;
            if (lStack_130 == -0x8000000000000000) goto LAB_1014705b4;
            lVar6 = FUN_10063fe00(&lStack_130,&UNK_108c51c0c,4,*(undefined8 *)(puVar7 + -5),
                                  *(undefined8 *)(puVar7 + -3));
            if (lVar6 == 0) {
              uStack_a8 = uStack_108;
              uStack_b0 = uStack_110;
              uStack_98 = uStack_f8;
              uStack_a0 = uStack_100;
              lStack_88 = lStack_e8;
              uStack_90 = uStack_f0;
              uStack_78 = uStack_d8;
              puStack_80 = puStack_e0;
              lStack_c8 = lStack_128;
              lStack_d0 = lStack_130;
              uStack_b8 = uStack_118;
              uStack_c0 = uStack_120;
              __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                        (&lStack_178,&lStack_d0);
              uVar1 = uStack_180;
              lVar6 = lStack_170;
              if (lStack_178 != -0x7ffffffffffffffb) {
                if (uStack_180 == uStack_190) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE(&uStack_190);
                }
                lVar6 = 0;
                plVar11 = (long *)(lStack_188 + uVar1 * 0x48);
                plVar11[8] = lStack_138;
                plVar11[1] = lStack_170;
                *plVar11 = lStack_178;
                plVar11[3] = lStack_160;
                plVar11[2] = lStack_168;
                plVar11[5] = lStack_150;
                plVar11[4] = lStack_158;
                plVar11[7] = lStack_140;
                plVar11[6] = lStack_148;
                uStack_180 = uVar1 + 1;
              }
              goto LAB_1014705d8;
            }
          }
        }
        FUN_100e040f0(&lStack_130);
      }
LAB_1014705d8:
      lVar2 = lStack_188;
      puVar7 = puVar7 + 0xe;
      lVar10 = lVar10 + -0x38;
    } while (lVar6 == 0);
    lVar10 = uStack_180 + 1;
    lVar9 = lStack_188;
    while (lVar10 = lVar10 + -1, lVar10 != 0) {
      FUN_100de6690(lVar9);
      lVar9 = lVar9 + 0x48;
    }
    if (uStack_190 != 0) {
      _free(lVar2);
    }
    _free(puStack_1e8);
  }
LAB_101470484:
  FUN_100e040f0(&lStack_2a0);
LAB_10147048c:
  _free(lStack_2b0);
  return lVar6;
}

