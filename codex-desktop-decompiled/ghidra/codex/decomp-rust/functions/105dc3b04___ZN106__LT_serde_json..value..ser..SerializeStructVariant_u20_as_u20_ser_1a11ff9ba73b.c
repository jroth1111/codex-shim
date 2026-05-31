
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN106__LT_serde_json__value__ser__SerializeStructVariant_u20_as_u20_serde_core__ser__SerializeStructVariant_GT_3end17hbdbd58c4bcabbbcaE
               (undefined8 *param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pauVar1 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar1[1][0] == '\x01') {
    auStack_e0 = *pauVar1;
  }
  else {
    auStack_e0 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar1 + 8) = auStack_e0._8_8_;
    pauVar1[1][0] = 1;
  }
  *(long *)*pauVar1 = auStack_e0._0_8_ + 1;
  uStack_118 = 0;
  uStack_110 = 8;
  uStack_108 = 0;
  uStack_f8 = 0;
  puStack_100 = &UNK_109b9f7e8;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x000105dc93e8(auStack_80,&uStack_118,param_2,param_2 + 0x18);
  uStack_c8 = uStack_70;
  lStack_d0 = lStack_78;
  uStack_b8 = uStack_60;
  uStack_c0 = uStack_68;
  uStack_a8 = uStack_50;
  uStack_b0 = uStack_58;
  uStack_98 = uStack_40;
  uStack_a0 = uStack_48;
  uStack_90 = uStack_38;
  if (lStack_78 != -0x7ffffffffffffffb) {
    FUN_105dc6c20(&lStack_d0);
  }
  param_1[5] = uStack_f0;
  param_1[4] = uStack_f8;
  param_1[7] = auStack_e0._0_8_;
  param_1[6] = uStack_e8;
  param_1[8] = auStack_e0._8_8_;
  param_1[1] = uStack_110;
  *param_1 = uStack_118;
  param_1[3] = puStack_100;
  param_1[2] = uStack_108;
  return;
}

