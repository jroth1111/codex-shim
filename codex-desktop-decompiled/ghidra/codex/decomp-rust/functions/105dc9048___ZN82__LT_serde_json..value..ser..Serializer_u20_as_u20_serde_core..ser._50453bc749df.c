
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN82__LT_serde_json__value__ser__Serializer_u20_as_u20_serde_core__ser__Serializer_GT_13serialize_seq17h66090bd2f7fdd8e8E
               (ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long extraout_x1;
  ulong *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((param_2 & 1) == 0) {
    param_3 = 0;
  }
  lVar4 = param_3 * 0x48;
  if (0x1c71c71c71c71c7 < param_3) {
    func_0x0001087c9084(0);
    lVar4 = extraout_x1;
    param_1 = extraout_x8;
  }
  if (lVar4 == 0) {
    param_3 = 0;
    uVar1 = 8;
  }
  else {
    uVar1 = _malloc(lVar4);
    if (uVar1 == 0) {
      auVar6 = func_0x0001087c9084(8,lVar4);
      plVar2 = auVar6._0_8_;
      if ((auVar6._8_8_ == 0x1e) &&
         (((*plVar2 == 0x6a5f656472657324 && plVar2[1] == 0x6972703a3a6e6f73) &&
          plVar2[2] == 0x61523a3a65746176) && *(long *)((long)plVar2 + 0x16) == 0x65756c6156776152))
      {
        *extraout_x8_00 = 0x8000000000000000;
        uVar5 = 0x8000000000000005;
        lVar4 = 8;
      }
      else {
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
        FUN_105dc99f8(extraout_x8_00,param_4,auVar6._0_8_,auVar6._8_8_);
        uVar5 = 0x8000000000000000;
        lVar4 = 0x48;
      }
      *(undefined8 *)((long)extraout_x8_00 + lVar4) = uVar5;
      return;
    }
  }
  *param_1 = param_3;
  param_1[1] = uVar1;
  param_1[2] = 0;
  return;
}

