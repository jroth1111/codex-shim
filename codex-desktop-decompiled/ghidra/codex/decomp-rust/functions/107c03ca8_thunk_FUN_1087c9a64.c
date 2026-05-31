
void thunk_FUN_1087c9a64(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    uVar2 = *param_1 * 2;
    uVar1 = param_3 + param_2;
    if (param_3 + param_2 <= uVar2) {
      uVar1 = uVar2;
    }
    if (uVar1 < 9) {
      uVar1 = 8;
    }
    func_0x0001087c99f0(aiStack_38,*param_1,param_1[1],uVar1);
    if (aiStack_38[0] != 1) {
      *param_1 = uVar1;
      param_1[1] = uStack_30;
      return;
    }
  }
  auVar3 = func_0x0001087c9084(uStack_30,uStack_28);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&uStack_a0);
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  func_0x0001087c9b50(auVar3._0_8_,auVar3._8_8_,&uStack_d0);
  return;
}

