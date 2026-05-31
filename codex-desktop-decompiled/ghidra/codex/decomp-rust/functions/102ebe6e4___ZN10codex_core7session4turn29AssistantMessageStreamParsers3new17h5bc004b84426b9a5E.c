
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN10codex_core7session4turn29AssistantMessageStreamParsers3new17h5bc004b84426b9a5E
               (undefined1 param_1)

{
  undefined1 (*pauVar1) [16];
  undefined8 *extraout_x8;
  undefined1 auVar2 [16];
  
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
  *(undefined1 *)(extraout_x8 + 6) = param_1;
  extraout_x8[1] = 0;
  *extraout_x8 = &UNK_108d52778;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  *(undefined1 (*) [16])(extraout_x8 + 4) = auVar2;
  return;
}

