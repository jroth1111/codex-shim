
void FUN_103db1014(ulong *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (*param_1 != 2) {
    uVar2 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar2 = uVar2 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x60))(uVar2,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar2 = param_1[4], uVar2 != 0)) {
    uStack_60 = *(undefined8 *)(uVar2 + 0x10);
    uStack_58 = *(undefined8 *)(uVar2 + 0x18);
    puStack_48 = &DAT_103d8be04;
    puStack_50 = (undefined1 *)&uStack_60;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_50);
  }
  if (param_1[5] != 0x8000000000000002) {
    uVar2 = param_1[0xb];
    puVar1 = (undefined8 *)param_1[0xc];
    pcVar3 = (code *)*puVar1;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar2);
    }
    if (puVar1[1] != 0) {
      _free(uVar2);
    }
    func_0x000103da0d28(param_1 + 5);
  }
  if (*param_1 != 2) {
    uVar2 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar2 = uVar2 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x68))(uVar2,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar2 = param_1[4], uVar2 != 0)) {
    uStack_60 = *(undefined8 *)(uVar2 + 0x10);
    uStack_58 = *(undefined8 *)(uVar2 + 0x18);
    puStack_48 = &DAT_103d8be04;
    puStack_50 = (undefined1 *)&uStack_60;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_50);
  }
  func_0x000103da7b74(param_1);
  return;
}

