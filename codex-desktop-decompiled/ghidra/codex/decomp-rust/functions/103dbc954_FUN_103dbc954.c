
void FUN_103dbc954(ulong *param_1)

{
  ulong uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (*param_1 != 2) {
    uVar1 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar1 = uVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x60))(uVar1,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar1 = param_1[4], uVar1 != 0)) {
    uStack_50 = *(undefined8 *)(uVar1 + 0x10);
    uStack_48 = *(undefined8 *)(uVar1 + 0x18);
    puStack_38 = &DAT_103d8be04;
    puStack_40 = (undefined1 *)&uStack_50;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_40);
  }
  if (param_1[5] != 0x8000000000000002) {
    func_0x000103da56c8(param_1 + 0xb);
    func_0x000103da0d28(param_1 + 5);
  }
  if (*param_1 != 2) {
    uVar1 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar1 = uVar1 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x68))(uVar1,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar1 = param_1[4], uVar1 != 0)) {
    uStack_50 = *(undefined8 *)(uVar1 + 0x10);
    uStack_48 = *(undefined8 *)(uVar1 + 0x18);
    puStack_38 = &DAT_103d8be04;
    puStack_40 = (undefined1 *)&uStack_50;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_40);
  }
  func_0x000103da7b74(param_1);
  return;
}

