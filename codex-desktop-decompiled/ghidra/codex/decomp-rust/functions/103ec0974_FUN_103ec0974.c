
void FUN_103ec0974(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (*param_2 != 2) {
    uVar1 = param_2[1];
    if ((*param_2 & 1) != 0) {
      uVar1 = uVar1 + (*(long *)(param_2[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_2[2] + 0x60))(uVar1,param_2 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar1 = param_2[4], uVar1 != 0)) {
    uStack_60 = *(undefined8 *)(uVar1 + 0x10);
    uStack_58 = *(undefined8 *)(uVar1 + 0x18);
    puStack_48 = &DAT_103d8be04;
    puStack_50 = (undefined1 *)&uStack_60;
    func_0x000103e76334(param_2,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_50);
  }
  func_0x000103de7174(param_1,param_2 + 5,param_3);
  if (*param_2 != 2) {
    uVar1 = param_2[1];
    if ((*param_2 & 1) != 0) {
      uVar1 = uVar1 + (*(long *)(param_2[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_2[2] + 0x68))(uVar1,param_2 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar1 = param_2[4], uVar1 != 0)) {
    uStack_60 = *(undefined8 *)(uVar1 + 0x10);
    uStack_58 = *(undefined8 *)(uVar1 + 0x18);
    puStack_48 = &DAT_103d8be04;
    puStack_50 = (undefined1 *)&uStack_60;
    func_0x000103e76334(param_2,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_50);
  }
  return;
}

