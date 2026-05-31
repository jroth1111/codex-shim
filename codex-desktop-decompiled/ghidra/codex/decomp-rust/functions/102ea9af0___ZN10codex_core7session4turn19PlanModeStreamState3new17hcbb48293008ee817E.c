
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN10codex_core7session4turn19PlanModeStreamState3new17hcbb48293008ee817E
               (undefined8 *param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint6 uStack_66;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  
  auVar3 = (*
           ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
           )();
  uStack_58 = auVar3._8_8_;
  pauVar1 = auVar3._0_8_;
  if (pauVar1[1][0] == '\x01') {
    auVar3 = *pauVar1;
  }
  else {
    auVar3 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar1 + 8) = auVar3._8_8_;
    pauVar1[1][0] = 1;
  }
  lVar2 = auVar3._0_8_;
  *(long *)*pauVar1 = lVar2 + 3;
  puStack_50 = &uStack_60;
  puStack_48 = &DAT_103296230;
  uStack_60 = param_2;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_80,s__plan_108af5d6d,&puStack_50);
  param_1[5] = 0;
  param_1[4] = &UNK_108d52778;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar3;
  param_1[0xb] = 0;
  param_1[10] = &UNK_108d52778;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = auVar3._8_8_;
  param_1[0xe] = lVar2 + 1;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = auVar3._8_8_;
  param_1[0x14] = lVar2 + 2;
  param_1[0x11] = 0;
  param_1[0x10] = &UNK_108d52778;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = (ulong)uStack_66 << 0x10;
  param_1[2] = uStack_70;
  return;
}

