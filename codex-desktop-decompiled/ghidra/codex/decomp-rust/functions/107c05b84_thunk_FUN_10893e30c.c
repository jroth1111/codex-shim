
undefined8
thunk_FUN_10893e30c(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
  ulong unaff_x20;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [31];
  undefined1 uStack_61;
  ulong uStack_60;
  ulong *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
    func_0x0001087c9084(0);
  }
  else {
    uVar4 = *param_1 * 2;
    unaff_x20 = param_3 + param_2;
    if (param_3 + param_2 <= uVar4) {
      unaff_x20 = uVar4;
    }
    uVar4 = 4;
    if (0x400 < param_5) {
      uVar4 = 1;
    }
    uVar1 = 8;
    if (param_5 != 1) {
      uVar1 = uVar4;
    }
    if (unaff_x20 <= uVar1) {
      unaff_x20 = uVar1;
    }
    uVar2 = func_0x00010893e1c4(aiStack_38,*param_1,param_1[1],unaff_x20,param_4);
    unaff_x19 = param_1;
    if (aiStack_38[0] != 1) {
      *param_1 = unaff_x20;
      param_1[1] = uStack_30;
      return uVar2;
    }
  }
  puVar3 = (undefined8 *)func_0x0001087c9084(uStack_30,uStack_28);
  uStack_48 = 0x10893e3a0;
  uStack_98 = *puVar3;
  lStack_a8 = puVar3[1];
  lStack_90 = lStack_a8 + puVar3[2] * 0x40;
  uStack_88 = 0;
  auStack_80[0] = 0xb;
  lStack_a0 = lStack_a8;
  uStack_60 = unaff_x20;
  puStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  uVar2 = func_0x000108a4a50c(auStack_80,&uStack_61,&UNK_10b2b6100);
  FUN_10331033c(&lStack_a8);
  return uVar2;
}

