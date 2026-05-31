
void FUN_1088c6670(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_138 [16];
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined1 ***pppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((param_2 & 1) == 0) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_48);
  }
  else {
    uVar2 = param_2 >> 1;
    if (param_2 < 2) {
      lVar3 = 1;
    }
    else {
      lVar3 = _malloc(uVar2);
      if (lVar3 == 0) {
        auVar4 = func_0x0001087c9084(1,uVar2);
        uVar1 = auVar4._8_8_;
        uStack_58 = 0x1088c66fc;
        puStack_60 = &stack0xfffffffffffffff0;
        lVar3 = _malloc(uVar1);
        if (lVar3 != 0) {
          _memcpy(lVar3,auVar4._0_8_,uVar1);
          uStack_98 = uVar1;
          lStack_90 = lVar3;
          uStack_88 = uVar1;
          __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_98);
          return;
        }
        auVar4 = func_0x0001087c9084(1,uVar1);
        uVar1 = auVar4._8_8_;
        uStack_a8 = 0x1088c6764;
        ppuStack_b0 = &puStack_60;
        lVar3 = _malloc(uVar1);
        if (lVar3 != 0) {
          _memcpy(lVar3,auVar4._0_8_,uVar1);
          uStack_e8 = uVar1;
          lStack_e0 = lVar3;
          uStack_d8 = uVar1;
          __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_e8);
          return;
        }
        auStack_138 = func_0x0001087c9084(1,uVar1);
        uStack_f8 = 0x1088c67cc;
        puStack_128 = &UNK_10b26b100;
        puStack_120 = (undefined8 *)auStack_138;
        puStack_118 = &
                      __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
        ;
        puStack_110 = auStack_138 + 8;
        puStack_108 = &DAT_101bf73f8;
        pppuStack_100 = &ppuStack_b0;
        FUN_1088c6b64(s_invalid_length___expected_108ac2954,&puStack_120);
        return;
      }
    }
    _memcpy(lVar3,param_1,uVar2);
    uStack_48 = uVar2;
    lStack_40 = lVar3;
    uStack_38 = uVar2;
  }
  __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_48);
  return;
}

