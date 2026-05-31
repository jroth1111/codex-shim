
void FUN_100d735a0(ulong *param_1)

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
    puStack_38 = &DAT_100c7b3a0;
    puStack_40 = (undefined1 *)&uStack_50;
    FUN_1011d7d74(param_1,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&puStack_40);
  }
  FUN_100cfa7a0(param_1 + 5);
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
    puStack_38 = &DAT_100c7b3a0;
    puStack_40 = (undefined1 *)&uStack_50;
    FUN_1011d7d74(param_1,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&puStack_40);
  }
  FUN_100dddd8c(param_1);
  return;
}

