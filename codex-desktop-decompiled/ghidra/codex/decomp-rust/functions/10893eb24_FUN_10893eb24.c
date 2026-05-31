
void FUN_10893eb24(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  ulong uStack_48;
  long lStack_40;
  ulong uStack_38;
  
  if ((param_2 & 1) == 0) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_48);
  }
  else {
    uVar3 = param_2 >> 1;
    if (param_2 < 2) {
      lVar4 = 1;
    }
    else {
      lVar4 = _malloc(uVar3);
      if (lVar4 == 0) {
        uStack_b1 = func_0x0001087c9084(1,uVar3);
        uStack_58 = 0x10893ebb0;
        uStack_90 = 0;
        uStack_88 = 1;
        uStack_80 = 0;
        uStack_68 = 0x60000020;
        puStack_78 = &uStack_90;
        puStack_70 = &UNK_10b29a448;
        puStack_60 = &stack0xfffffffffffffff0;
        iVar2 = __ZN65__LT_chrono__format__ParseError_u20_as_u20_core__fmt__Display_GT_3fmt17he7245d649d8fc332E
                          (&uStack_b1,&puStack_78);
        if (iVar2 == 0) {
          uStack_a8 = uStack_88;
          uStack_b0 = uStack_90;
          uStack_a0 = uStack_80;
          __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_b0);
          return;
        }
        func_0x000108a07a3c(&UNK_108d8639e,0x37,&uStack_b0,&UNK_10b2c0eb8,&UNK_10b2c0b18);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10893ec44);
        (*pcVar1)();
      }
    }
    _memcpy(lVar4,param_1,uVar3);
    uStack_48 = uVar3;
    lStack_40 = lVar4;
    uStack_38 = uVar3;
  }
  __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_48);
  return;
}

