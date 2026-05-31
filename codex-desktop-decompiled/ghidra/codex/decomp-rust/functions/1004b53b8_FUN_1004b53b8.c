
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004b53b8(long *param_1,char *param_2)

{
  long lVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  char acStack_258 [32];
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined1 auStack_188 [16];
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [72];
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  if (*param_2 == '\x15') {
    uStack_228 = *(undefined8 *)(param_2 + 8);
    lStack_238 = *(long *)(param_2 + 0x10);
    lStack_220 = lStack_238 + *(long *)(param_2 + 0x18) * 0x40;
    acStack_258[0] = '\x16';
    lStack_218 = 0;
    lStack_230 = lStack_238;
    pauVar2 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar2[1][0] == '\x01') {
      auStack_188 = *pauVar2;
    }
    else {
      auStack_188 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar2 + 8) = auStack_188._8_8_;
      pauVar2[1][0] = 1;
    }
    lStack_1a0 = 0;
    puStack_1a8 = &UNK_108c56c70;
    *(long *)*pauVar2 = auStack_188._0_8_ + 1;
    lStack_1c0 = 0;
    lStack_1b8 = 8;
    lStack_190 = 0;
    lStack_198 = 0;
    lStack_1b0 = 0;
    while( true ) {
      func_0x00010061f894(&lStack_178,acStack_258);
      lVar1 = lStack_220;
      lVar3 = lStack_230;
      if (lStack_178 == -0x8000000000000000) break;
      if (lStack_178 == -0x7fffffffffffffff) {
        *param_1 = -0x8000000000000000;
        param_1[1] = lStack_170;
        if ((lStack_1a0 != 0) && (lStack_1a0 * 9 != -0x11)) {
          _free(puStack_1a8 + lStack_1a0 * -8 + -8);
        }
        func_0x000100cd7284(&lStack_1c0);
        goto LAB_1004b5560;
      }
      lStack_118 = lStack_178;
      uStack_108 = uStack_168;
      lStack_110 = lStack_170;
      FUN_101497a9c(auStack_b8,&lStack_1c0,&lStack_118,auStack_160);
      uStack_f8 = uStack_a8;
      lStack_100 = lStack_b0;
      uStack_e8 = uStack_98;
      uStack_f0 = uStack_a0;
      uStack_d8 = uStack_88;
      uStack_e0 = uStack_90;
      uStack_c8 = uStack_78;
      uStack_d0 = uStack_80;
      uStack_c0 = uStack_70;
      if (lStack_b0 != -0x7ffffffffffffffb) {
        FUN_100de6690(&lStack_100);
      }
    }
    param_1[1] = lStack_1b8;
    *param_1 = lStack_1c0;
    param_1[3] = (long)puStack_1a8;
    param_1[2] = lStack_1b0;
    param_1[5] = lStack_198;
    param_1[4] = lStack_1a0;
    param_1[7] = auStack_188._0_8_;
    param_1[6] = lStack_190;
    param_1[8] = auStack_188._8_8_;
    if (*param_1 == -0x8000000000000000) {
LAB_1004b5560:
      FUN_100d34830(&lStack_238);
      if (acStack_258[0] != '\x16') {
        FUN_100e077ec(acStack_258);
      }
    }
    else {
      lStack_1e8 = param_1[5];
      lStack_1f0 = param_1[4];
      lStack_1d8 = param_1[7];
      lStack_1e0 = param_1[6];
      lStack_1d0 = param_1[8];
      lStack_208 = param_1[1];
      lStack_210 = *param_1;
      lStack_1f8 = param_1[3];
      lStack_200 = param_1[2];
      FUN_100d34830(&lStack_238);
      if (lVar1 == lVar3) {
        lVar3 = 0;
      }
      else {
        lStack_178 = lStack_218;
        lVar3 = thunk_FUN_1087e422c(lStack_218 + ((ulong)(lVar1 - lVar3) >> 6),&lStack_178,
                                    &UNK_10b23a190);
      }
      if (acStack_258[0] != '\x16') {
        FUN_100e077ec(acStack_258);
      }
      if (lVar3 != 0) {
        *param_1 = -0x8000000000000000;
        param_1[1] = lVar3;
        if ((lStack_1f0 != 0) && (lStack_1f0 * 9 != -0x11)) {
          _free(lStack_1f8 + lStack_1f0 * -8 + -8);
        }
        func_0x000100cd7284(&lStack_210);
      }
    }
  }
  else {
    lVar3 = thunk_FUN_108855b04(param_2,&uStack_61,&UNK_10b209be0);
    *param_1 = -0x8000000000000000;
    param_1[1] = lVar3;
  }
  return;
}

