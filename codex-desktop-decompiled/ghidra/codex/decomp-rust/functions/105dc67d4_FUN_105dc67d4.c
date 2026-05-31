
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105dc67d4(void)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  plVar1 = (long *)(*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
  if ((char)plVar1[2] == '\x01') {
    lVar2 = *plVar1;
  }
  else {
    auVar3 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    lVar2 = auVar3._0_8_;
    plVar1[1] = auVar3._8_8_;
    *(undefined1 *)(plVar1 + 2) = 1;
  }
  *plVar1 = lVar2 + 1;
  return lVar2;
}

