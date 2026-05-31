
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN18codex_core_plugins6loader29configured_plugins_from_stack17h56e0ab41e5d3b3c9E
               (undefined8 *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010294f6ac(&lStack_70);
  if (lStack_70 == -0x7ffffffffffffffa) {
    pauVar1 = (undefined1 (*) [16])
              (*
              ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
              )();
    if (pauVar1[1][0] == '\x01') {
      auVar2 = *pauVar1;
    }
    else {
      auVar2 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar1 + 8) = auVar2._8_8_;
      pauVar1[1][0] = 1;
    }
    *(long *)*pauVar1 = auVar2._0_8_ + 1;
    param_1[1] = 0;
    *param_1 = &UNK_108d961a0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 (*) [16])(param_1 + 4) = auVar2;
  }
  else {
    uStack_98 = uStack_48;
    uStack_a0 = uStack_50;
    uStack_88 = uStack_38;
    uStack_90 = uStack_40;
    uStack_78 = uStack_28;
    uStack_80 = uStack_30;
    uStack_b8 = uStack_68;
    lStack_c0 = lStack_70;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    func_0x0001038e34cc(param_1,&lStack_c0);
    func_0x000103938604(&lStack_c0);
  }
  return;
}

