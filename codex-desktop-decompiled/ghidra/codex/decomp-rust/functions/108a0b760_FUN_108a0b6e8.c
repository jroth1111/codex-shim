
void FUN_108a0b6e8(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    uVar3 = *param_1 * 2;
    uVar1 = param_3 + param_2;
    if (param_3 + param_2 <= uVar3) {
      uVar1 = uVar3;
    }
    if (uVar1 < 9) {
      uVar1 = 8;
    }
    FUN_108a0b668(aiStack_38,*param_1,param_1[1],uVar1);
    if (aiStack_38[0] != 1) {
      *param_1 = uVar1;
      param_1[1] = uStack_30;
      return;
    }
  }
  auStack_70 = func_0x0001087c9084(uStack_30,uStack_28);
  puStack_60 = auStack_70;
  uStack_48 = 0x108a0b760;
  puStack_58 = &DAT_105611d8c;
  puStack_50 = &stack0xfffffffffffffff0;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b10ffc,&puStack_60,&UNK_10b3982e0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108a0b7b8);
  (*pcVar2)();
}

