
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101487d14(long *param_1,long *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  if (*param_1 == -0x8000000000000000) {
    lStack_160 = 10;
    lVar4 = func_0x000108a4a0f8(&lStack_160,0,0);
    return lVar4;
  }
  puVar2 = (undefined4 *)_malloc(4);
  if (puVar2 == (undefined4 *)0x0) {
    func_0x0001087c9084(1,4);
LAB_1014880bc:
    func_0x0001087c9084(1,10);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014880cc);
    (*pcVar1)();
  }
  *puVar2 = 0x68747561;
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  param_1[10] = (long)puVar2;
  param_1[0xb] = 4;
  param_1[9] = -0x8000000000000000;
  lStack_1c8 = param_1[0xb];
  lStack_1d0 = param_1[10];
  uStack_1d8 = 4;
  if (*param_2 == -0x8000000000000000) {
    lStack_a0 = -0x8000000000000000;
LAB_101487db8:
    FUN_101497a9c(&lStack_160,param_1,&uStack_1d8,&lStack_a0);
    lStack_1b8 = uStack_150;
    lStack_1c0 = lStack_158;
    uStack_1a8 = uStack_140;
    uStack_1b0 = uStack_148;
    uStack_198 = uStack_130;
    uStack_1a0 = uStack_138;
    uStack_188 = uStack_120;
    uStack_190 = uStack_128;
    lStack_180 = lStack_118;
    if (lStack_158 != -0x7ffffffffffffffb) {
      FUN_100de6690(&lStack_1c0);
    }
    return 0;
  }
  pauVar3 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar3[1][0] == '\x01') {
    auVar6 = *pauVar3;
  }
  else {
    auVar6 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar3 + 8) = auVar6._8_8_;
    pauVar3[1][0] = 1;
  }
  *(long *)*pauVar3 = auVar6._0_8_ + 1;
  FUN_105dc99f8(&lStack_160,5,auVar6._0_8_,auVar6._8_8_);
  lStack_118 = -0x8000000000000000;
  lVar4 = lStack_158;
  if (lStack_160 == -0x7fffffffffffffff) goto LAB_101487ecc;
  uStack_188 = uStack_128;
  uStack_190 = uStack_130;
  lStack_178 = -0x8000000000000000;
  lStack_180 = uStack_120;
  uStack_168 = uStack_108;
  puStack_170 = puStack_110;
  uStack_1a8 = uStack_148;
  uStack_1b0 = uStack_150;
  uStack_198 = uStack_138;
  uStack_1a0 = uStack_140;
  lStack_1c0 = lStack_160;
  lStack_1b8 = lStack_158;
  if (lStack_160 == -0x8000000000000000) {
LAB_101487e84:
    lStack_160 = 10;
    lVar4 = func_0x000108a4a0f8(&lStack_160,0,0);
  }
  else {
    lVar4 = FUN_10063fe00(&lStack_1c0,&UNK_108ca281e,7,param_2[1],param_2[2]);
    if (lVar4 == 0) {
      if (lStack_1c0 == -0x8000000000000000) goto LAB_101487e84;
      lVar4 = func_0x000100638604(&lStack_1c0,&UNK_108cde3c4,4,param_2[4],param_2[5]);
      if (lVar4 == 0) {
        if (lStack_1c0 == -0x8000000000000000) goto LAB_101487e84;
        lVar4 = param_2[9];
        puVar5 = (undefined8 *)_malloc(10);
        if (puVar5 == (undefined8 *)0x0) goto LAB_1014880bc;
        *(undefined2 *)(puVar5 + 1) = 0x736d;
        *puVar5 = 0x5f74756f656d6974;
        if ((lStack_178 != -0x8000000000000000) && (lStack_178 != 0)) {
          _free(puStack_170);
        }
        uStack_168 = 10;
        lStack_178 = -0x8000000000000000;
        uStack_b8 = 10;
        uStack_a8 = 10;
        lStack_98 = 0;
        lStack_a0 = -0x7ffffffffffffffe;
        puStack_170 = puVar5;
        puStack_b0 = puVar5;
        lStack_90 = lVar4;
        FUN_101497a9c(&lStack_160,&lStack_1c0,&uStack_b8,&lStack_a0);
        uStack_f8 = uStack_150;
        lStack_100 = lStack_158;
        uStack_e8 = uStack_140;
        uStack_f0 = uStack_148;
        uStack_d8 = uStack_130;
        uStack_e0 = uStack_138;
        uStack_c8 = uStack_120;
        uStack_d0 = uStack_128;
        lStack_c0 = lStack_118;
        if (lStack_158 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_100);
        }
        lVar4 = func_0x00010148b744(&lStack_1c0,&UNK_108cada59,0x13,param_2[10]);
        if ((lVar4 == 0) &&
           (lVar4 = FUN_10149283c(&lStack_1c0,&UNK_108ca1f1d,3,param_2[7],param_2[8]), lVar4 == 0))
        {
          uStack_128 = uStack_188;
          uStack_130 = uStack_190;
          lStack_118 = lStack_178;
          uStack_120 = lStack_180;
          uStack_108 = uStack_168;
          puStack_110 = puStack_170;
          lStack_158 = lStack_1b8;
          lStack_160 = lStack_1c0;
          uStack_148 = uStack_1a8;
          uStack_150 = uStack_1b0;
          uStack_138 = uStack_198;
          uStack_140 = uStack_1a0;
          __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                    (&lStack_a0,&lStack_160);
          lVar4 = lStack_98;
          if (lStack_a0 != -0x7ffffffffffffffb) goto LAB_101487db8;
          goto LAB_101487ecc;
        }
      }
    }
  }
  FUN_100e040f0(&lStack_1c0);
LAB_101487ecc:
  _free(lStack_1d0);
  return lVar4;
}

