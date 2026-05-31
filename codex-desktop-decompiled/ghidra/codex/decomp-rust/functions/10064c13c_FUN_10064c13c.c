
undefined8 FUN_10064c13c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_e0 [48];
  long lStack_b0;
  ulong uStack_a8;
  undefined1 **ppuStack_a0;
  undefined8 uStack_98;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001055bf348(&uStack_48);
  if ((int)uStack_48 != 1) {
    lVar3 = param_3[2];
    if (*param_3 == lVar3) {
      thunk_FUN_108855060(param_3,lVar3,1,1,1);
      lVar3 = param_3[2];
    }
    *(undefined1 *)(param_3[1] + lVar3) = 0x22;
    param_3[2] = lVar3 + 1;
    FUN_100657654(param_3,lStack_40,uStack_38);
    lVar3 = param_3[2];
    if (*param_3 == lVar3) {
      thunk_FUN_108855060(param_3,lVar3,1,1,1);
      lVar3 = param_3[2];
    }
    *(undefined1 *)(param_3[1] + lVar3) = 0x22;
    param_3[2] = lVar3 + 1;
    return 0;
  }
  lVar3 = _malloc(0x26);
  if (lVar3 != 0) {
    _memcpy(lVar3,&UNK_108ca7604,0x26);
    uStack_48 = 0x26;
    uStack_38 = 0x26;
    lStack_40 = lVar3;
    uVar1 = __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_48);
    return uVar1;
  }
  uVar2 = func_0x0001087c9084(1,0x26);
  puStack_70 = &UNK_108ca7604;
  uStack_68 = 0x26;
  uStack_58 = 0x108856554;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((uVar2 & 1) == 0) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_88,s__can_only_flatten_structs_and_ma_108ad6017);
  }
  else {
    uVar4 = uVar2 >> 1;
    if (uVar2 < 2) {
      lVar3 = 1;
    }
    else {
      lVar3 = _malloc(uVar4);
      if (lVar3 == 0) {
        auVar5 = func_0x0001087c9084(1,uVar4);
        uStack_98 = 0x1088565e4;
        lStack_b0 = lVar3;
        uStack_a8 = uVar4;
        ppuStack_a0 = &puStack_60;
        __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(auStack_e0);
        uVar1 = FUN_108857e80(auVar5._0_8_,auVar5._8_8_,auStack_e0);
        return uVar1;
      }
    }
    _memcpy(lVar3,s__can_only_flatten_structs_and_ma_108ad6017,uVar4);
    uStack_88 = uVar4;
    lStack_80 = lVar3;
    uStack_78 = uVar4;
  }
  uVar1 = __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_88);
  return uVar1;
}

