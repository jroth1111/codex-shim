
undefined1  [16]
__ZN5alloc3ffi5c_str7CString19_from_vec_unchecked17h1836188feadd5beaE(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  int aiStack_48 [2];
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar4 = param_1[2];
  uVar3 = *param_1;
  if (uVar3 == uVar4) {
    uVar2 = uVar4 + 1;
    FUN_107c03c70(aiStack_48,uVar4,param_1[1]);
    if (aiStack_48[0] == 1) {
      FUN_107c03c64(uStack_40,uStack_38);
LAB_10002402c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100024030);
      (*pcVar1)();
    }
    *(undefined1 *)(uStack_40 + uVar4) = 0;
  }
  else {
    uStack_40 = param_1[1];
    uVar2 = uVar4 + 1;
    *(undefined1 *)(uStack_40 + uVar4) = 0;
    if (uVar2 < uVar3) {
      if (uVar2 == 0) {
        _free();
        uVar2 = 0;
        uStack_40 = 1;
      }
      else {
        uStack_40 = _realloc();
        if (uStack_40 == 0) {
          FUN_107c03c64(1,uVar2);
          goto LAB_10002402c;
        }
      }
    }
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uStack_40;
  return auVar5;
}

