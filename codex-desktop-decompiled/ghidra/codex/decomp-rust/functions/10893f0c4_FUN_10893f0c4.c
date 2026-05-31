
void FUN_10893f0c4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
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
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar3 = _malloc(param_2);
  if (lVar3 != 0) {
    _memcpy(lVar3,param_1,param_2);
    uStack_48 = param_2;
    lStack_40 = lVar3;
    uStack_38 = param_2;
    __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_48);
    return;
  }
  uVar4 = func_0x0001087c9084(1,param_2);
  uStack_58 = 0x10893f12c;
  uStack_90 = 0;
  uStack_88 = 1;
  uStack_80 = 0;
  uStack_68 = 0x60000020;
  puStack_78 = &uStack_90;
  puStack_70 = &UNK_10b29a448;
  puStack_60 = &stack0xfffffffffffffff0;
  iVar2 = __ZN57__LT_uuid__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h8d1de1e4c2f094b6E
                    (uVar4,&puStack_78);
  if (iVar2 == 0) {
    uStack_a8 = uStack_88;
    uStack_b0 = uStack_90;
    uStack_a0 = uStack_80;
    __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_b0);
    return;
  }
  func_0x000108a07a3c(&UNK_108d8639e,0x37,&uStack_b0,&UNK_10b2c0eb8,&UNK_10b2c0b18);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10893f1b8);
  (*pcVar1)();
}

