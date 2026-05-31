
void thunk_FUN_1088561c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
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
  
  lVar5 = _malloc(param_2);
  if (lVar5 != 0) {
    _memcpy(lVar5,param_1,param_2);
    uStack_48 = param_2;
    lStack_40 = lVar5;
    uStack_38 = param_2;
    __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_48);
    return;
  }
  iVar4 = func_0x0001087c9084(1,param_2);
  uStack_58 = 0x108856228;
  uStack_90 = 0;
  uStack_88 = 1;
  uStack_68 = 0x60000020;
  puStack_78 = &uStack_90;
  puStack_70 = &UNK_10b209290;
  uStack_80 = 0;
  puVar1 = &UNK_108f63b26;
  if (iVar4 == 0) {
    puVar1 = &UNK_108f63aeb;
  }
  uVar2 = 0x48;
  if (iVar4 == 0) {
    uVar2 = 0x3b;
  }
  puStack_60 = &stack0xfffffffffffffff0;
  iVar4 = func_0x0001055b8dfc(&puStack_78,puVar1,uVar2);
  if (iVar4 == 0) {
    uStack_a8 = uStack_88;
    uStack_b0 = uStack_90;
    uStack_a0 = uStack_80;
    __ZN10serde_json5error10make_error17h192c88b3464e8daaE(&uStack_b0);
    return;
  }
  func_0x000108a07a3c(&UNK_108cc3daa,0x37,&uStack_b0,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1088562d8);
  (*pcVar3)();
}

