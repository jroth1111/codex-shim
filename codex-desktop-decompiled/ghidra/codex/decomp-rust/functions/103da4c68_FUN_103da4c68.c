
void FUN_103da4c68(ulong *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
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
  if ((char)param_1[9] == '\x03') {
    uVar1 = param_1[7];
    puVar2 = (undefined8 *)param_1[8];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
  }
  else {
    if ((char)param_1[9] != '\0') goto LAB_103da4d50;
    uVar1 = param_1[5];
    puVar2 = (undefined8 *)param_1[6];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
  }
  if (puVar2[1] != 0) {
    _free(uVar1);
  }
LAB_103da4d50:
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

