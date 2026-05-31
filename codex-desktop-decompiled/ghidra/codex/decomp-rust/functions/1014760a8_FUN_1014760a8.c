
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1014760a8(long *param_1,long *param_2,long param_3,ulong *param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  undefined8 unaff_x22;
  undefined1 auVar10 [16];
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined4 *puStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [16];
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
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
  long lStack_d0;
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
    lVar5 = func_0x000108a4a0f8(&uStack_90,0,0);
    return lVar5;
  }
  puVar2 = (undefined4 *)_malloc(4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x79646f62;
    if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
      _free(param_1[10]);
    }
    param_1[10] = (long)puVar2;
    param_1[0xb] = 4;
    param_1[9] = -0x8000000000000000;
    lStack_e0 = param_1[0xb];
    lStack_e8 = param_1[10];
    uStack_f0 = 4;
    if (*param_2 == -0x7ffffffffffffffb) {
      lStack_d8 = -0x8000000000000000;
    }
    else {
      func_0x000100684748(&lStack_d8,param_2);
      if (lStack_d8 == -0x7ffffffffffffffb) {
        _free(lStack_e8);
        return lStack_d0;
      }
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
  uVar3 = func_0x0001087c9084(1,4);
  _free(lStack_e8);
  auVar10 = __Unwind_Resume(uVar3);
  plVar4 = auVar10._0_8_;
  if (*plVar4 == -0x8000000000000000) {
    puStack_1f0 = (undefined8 *)0xa;
    lVar5 = func_0x000108a4a0f8(&puStack_1f0,0,0);
    return lVar5;
  }
  lVar5 = _malloc(param_3);
  if (lVar5 == 0) {
    func_0x0001087c9084(1,param_3);
    goto LAB_1014766b4;
  }
  _memcpy(lVar5,auVar10._8_8_,param_3);
  if (plVar4[9] != -0x8000000000000000 && plVar4[9] != 0) {
    _free(plVar4[10]);
  }
  plVar4[10] = lVar5;
  plVar4[0xb] = param_3;
  plVar4[9] = -0x8000000000000000;
  lStack_2a8 = plVar4[0xb];
  lStack_2b0 = plVar4[10];
  uVar8 = *param_4;
  lStack_2b8 = param_3;
  if (uVar8 == 0x8000000000000004) {
    lStack_2a0 = -0x8000000000000000;
    goto LAB_1014764a4;
  }
  uVar9 = uVar8 ^ 0x8000000000000000;
  if (-1 < (long)uVar8) {
    uVar9 = 2;
  }
  if ((long)uVar9 < 2) {
    if (uVar9 == 0) {
      unaff_x22 = 4;
      puStack_290 = (undefined4 *)_malloc(4);
      if (puStack_290 == (undefined4 *)0x0) {
LAB_1014766b4:
        func_0x0001087c9084(1,unaff_x22);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014766c4);
        (*pcVar1)();
      }
      *puStack_290 = 0x656e6f6e;
      lStack_298 = 4;
      uStack_288 = 4;
    }
    else {
      unaff_x22 = 7;
      puStack_290 = (undefined4 *)_malloc(7);
      if (puStack_290 == (undefined4 *)0x0) goto LAB_1014766b4;
      *(undefined4 *)((long)puStack_290 + 3) = 0x67697374;
      *puStack_290 = 0x74617473;
      lStack_298 = 7;
      uStack_288 = 7;
    }
    lStack_2a0 = -0x7ffffffffffffffd;
    goto LAB_1014764a4;
  }
  unaff_x22 = 9;
  if (uVar9 == 2) {
    puVar6 = (undefined8 *)_malloc(9);
    if (puVar6 == (undefined8 *)0x0) goto LAB_1014766b4;
    *(undefined1 *)(puVar6 + 1) = 0x70;
    *puVar6 = 0x7474682d706c746f;
    pauVar7 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar7[1][0] == '\x01') {
      auStack_200 = *pauVar7;
    }
    else {
      auStack_200 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar7 + 8) = auStack_200._8_8_;
      pauVar7[1][0] = 1;
    }
    *(long *)*pauVar7 = auStack_200._0_8_ + 1;
    uStack_238 = 0;
    uStack_240 = 9;
    uStack_230 = 8;
    puStack_228 = (undefined *)0x0;
    lStack_218 = 0;
    puStack_220 = &UNK_109b9f7e8;
    uStack_208 = 0;
    uStack_210 = 0;
    puStack_250 = (undefined8 *)0x9;
    puStack_248 = puVar6;
    func_0x0001004d54e0(&puStack_250,&UNK_108c57cc0,8,param_4[1],param_4[2]);
    lVar5 = FUN_1004d5748(&puStack_250,param_4[0xc],param_4[0xf]);
    if (lVar5 == 0) {
      func_0x0001004d5608(&puStack_250,(char)param_4[0x12]);
      lVar5 = FUN_1004d5298(&puStack_250,param_4 + 3);
      if (lVar5 == 0) {
        uStack_1c8 = puStack_228;
        uStack_1d0 = uStack_230;
        lStack_1b8 = lStack_218;
        puStack_1c0 = puStack_220;
        uStack_1a8 = uStack_208;
        uStack_1b0 = uStack_210;
        puStack_1e8 = puStack_248;
        puStack_1f0 = puStack_250;
        uStack_1d8 = uStack_238;
        uStack_1e0 = uStack_240;
        auStack_1a0 = auStack_200;
        __ZN106__LT_serde_json__value__ser__SerializeStructVariant_u20_as_u20_serde_core__ser__SerializeStructVariant_GT_3end17hbdbd58c4bcabbbcaE
                  (&lStack_2a0,&puStack_1f0);
        goto LAB_10147643c;
      }
    }
    lStack_2a0 = -0x7ffffffffffffffb;
    lStack_298 = lVar5;
    if (puStack_250 != (undefined8 *)0x0) {
      _free(puStack_248);
    }
    if ((lStack_218 != 0) && (lStack_218 * 9 != -0x11)) {
      _free(puStack_220 + lStack_218 * -8 + -8);
    }
    func_0x000100cd7284(&uStack_238);
  }
  else {
    puVar6 = (undefined8 *)_malloc(9);
    if (puVar6 == (undefined8 *)0x0) goto LAB_1014766b4;
    *(undefined1 *)(puVar6 + 1) = 99;
    *puVar6 = 0x7072672d706c746f;
    pauVar7 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar7[1][0] == '\x01') {
      auStack_200 = *pauVar7;
    }
    else {
      auStack_200 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar7 + 8) = auStack_200._8_8_;
      pauVar7[1][0] = 1;
    }
    *(long *)*pauVar7 = auStack_200._0_8_ + 1;
    uStack_238 = 0;
    uStack_240 = 9;
    uStack_230 = 8;
    puStack_228 = (undefined *)0x0;
    lStack_218 = 0;
    puStack_220 = &UNK_109b9f7e8;
    uStack_208 = 0;
    uStack_210 = 0;
    puStack_250 = (undefined8 *)0x9;
    puStack_248 = puVar6;
    func_0x0001004d54e0(&puStack_250,&UNK_108c57cc0,8,param_4[2],param_4[3]);
    lVar5 = FUN_1004d5748(&puStack_250,param_4[0xd],param_4[0x10]);
    if (lVar5 == 0) {
      lVar5 = FUN_1004d5298(&puStack_250,param_4 + 4);
      if (lVar5 == 0) {
        uStack_1c8 = puStack_228;
        uStack_1d0 = uStack_230;
        lStack_1b8 = lStack_218;
        puStack_1c0 = puStack_220;
        uStack_1a8 = uStack_208;
        uStack_1b0 = uStack_210;
        puStack_1e8 = puStack_248;
        puStack_1f0 = puStack_250;
        uStack_1d8 = uStack_238;
        uStack_1e0 = uStack_240;
        auStack_1a0 = auStack_200;
        __ZN106__LT_serde_json__value__ser__SerializeStructVariant_u20_as_u20_serde_core__ser__SerializeStructVariant_GT_3end17hbdbd58c4bcabbbcaE
                  (&lStack_2a0,&puStack_1f0);
        goto LAB_10147643c;
      }
    }
    lStack_2a0 = -0x7ffffffffffffffb;
    lStack_298 = lVar5;
    if (puStack_250 != (undefined8 *)0x0) {
      _free(puStack_248);
    }
    if ((lStack_218 != 0) && (lStack_218 * 9 != -0x11)) {
      _free(puStack_220 + lStack_218 * -8 + -8);
    }
    func_0x000100cd7284(&uStack_238);
  }
LAB_10147643c:
  lVar5 = lStack_298;
  if (lStack_2a0 == -0x7ffffffffffffffb) {
    _free(lStack_2b0);
    return lVar5;
  }
LAB_1014764a4:
  FUN_101497a9c(&puStack_1f0,plVar4,&lStack_2b8,&lStack_2a0);
  puStack_248 = (undefined8 *)uStack_1e0;
  puStack_250 = puStack_1e8;
  uStack_238 = uStack_1d0;
  uStack_240 = uStack_1d8;
  puStack_228 = puStack_1c0;
  uStack_230 = uStack_1c8;
  lStack_218 = uStack_1b0;
  puStack_220 = (undefined *)lStack_1b8;
  uStack_210 = uStack_1a8;
  if (puStack_1e8 != (undefined8 *)0x8000000000000005) {
    FUN_100de6690(&puStack_250);
  }
  return 0;
}

