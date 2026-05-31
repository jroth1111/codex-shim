
void FUN_108855060(ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [4];
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
    uVar3 = *param_1 * 2;
    unaff_x20 = param_3 + param_2;
    if (param_3 + param_2 <= uVar3) {
      unaff_x20 = uVar3;
    }
    uVar3 = 4;
    if (0x400 < param_5) {
      uVar3 = 1;
    }
    uVar1 = 8;
    if (param_5 != 1) {
      uVar1 = uVar3;
    }
    if (unaff_x20 <= uVar1) {
      unaff_x20 = uVar1;
    }
    FUN_108854f18(aiStack_38,*param_1,param_1[1],unaff_x20,param_4);
    unaff_x19 = param_1;
    if (aiStack_38[0] != 1) {
      *param_1 = unaff_x20;
      param_1[1] = uStack_30;
      return;
    }
  }
  plVar2 = (long *)func_0x0001087c9084(uStack_30,uStack_28);
  uStack_48 = 0x1088550f4;
  puStack_50 = &stack0xfffffffffffffff0;
  if (*plVar2 == 0) {
    if (plVar2[1] == 0) {
      uStack_48 = 0x1088550f4;
      uStack_60 = unaff_x20;
      puStack_58 = unaff_x19;
      __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&uStack_90);
      FUN_108857e80(&UNK_108cc6d43,0x3f,&uStack_90);
      return;
    }
    uStack_88 = FUN_1088566c8();
    puStack_98 = &UNK_108cc6d43;
    uStack_90 = 0x3f;
  }
  else {
    uStack_88 = FUN_10885672c();
    puStack_98 = &UNK_108cc6d82;
    uStack_90 = 0x44;
  }
  auStack_80[0] = 3;
  FUN_108857de4(&puStack_98,auStack_80);
  return;
}

