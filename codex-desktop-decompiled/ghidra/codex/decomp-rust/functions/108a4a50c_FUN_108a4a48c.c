
void FUN_108a4a48c(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3 + param_2;
  if (CARRY8(param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    param_3 = param_1[1];
    uVar3 = *param_1 * 2;
    if (uVar1 <= uVar3) {
      uVar1 = uVar3;
    }
    if (uVar1 < 9) {
      uVar1 = 8;
    }
    func_0x000108a4a344(aiStack_38,*param_1,param_3,uVar1,1,1);
    if (aiStack_38[0] != 1) {
      *param_1 = uVar1;
      param_1[1] = uStack_30;
      return;
    }
  }
  auVar4 = func_0x0001087c9084(uStack_30,uStack_28);
  uStack_a0 = auVar4._8_8_;
  puVar2 = auVar4._0_8_;
  puStack_60 = (undefined1 *)&uStack_a0;
  uStack_48 = 0x108a4a50c;
  uStack_88 = puVar2[1];
  uStack_90 = *puVar2;
  uStack_80 = puVar2[2];
  puStack_70 = &uStack_90;
  puStack_68 = &
               __ZN72__LT_serde_json__error__JsonUnexpected_u20_as_u20_core__fmt__Display_GT_3fmt17hafc6f23e03ca31d9E
  ;
  puStack_58 = &DAT_105dc6858;
  uStack_98 = param_3;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_108a4a70c(s_invalid_type____expected_108b2e1a0,&puStack_70);
  return;
}

