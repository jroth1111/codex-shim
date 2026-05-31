
void FUN_100d40388(ulong *param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (*param_1 != 2) {
    uVar3 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar3 = uVar3 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x60))(uVar3,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar3 = param_1[4], uVar3 != 0)) {
    uStack_50 = *(undefined8 *)(uVar3 + 0x10);
    uStack_48 = *(undefined8 *)(uVar3 + 0x18);
    puStack_38 = &DAT_100c7b3a0;
    puStack_40 = (undefined1 *)&uStack_50;
    FUN_1011d7d74(param_1,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&puStack_40);
  }
  cVar1 = (char)param_1[0x57];
  if (cVar1 == '\x04') {
    FUN_100d17e1c(param_1 + 0x58);
  }
  else {
    if (cVar1 != '\x03') {
      if ((cVar1 == '\0') && (FUN_100e02a24(param_1 + 5), param_1[0x1d] != 0x800000000000000b)) {
        FUN_100df5b9c();
      }
      uVar3 = *param_1;
      goto joined_r0x000100d404b0;
    }
    func_0x000100d7e07c(param_1 + 0x58);
  }
  *(undefined1 *)((long)param_1 + 0x2ba) = 0;
  if ((*(byte *)((long)param_1 + 0x2b9) & 1) != 0) {
    FUN_100dddd8c(param_1 + 0x52);
  }
  *(undefined1 *)((long)param_1 + 0x2b9) = 0;
  *(undefined2 *)((long)param_1 + 699) = 0;
  uVar3 = *param_1;
joined_r0x000100d404b0:
  if (uVar3 != 2) {
    uVar2 = param_1[1];
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar2 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x68))(uVar2,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar3 = param_1[4], uVar3 != 0)) {
    uStack_50 = *(undefined8 *)(uVar3 + 0x10);
    uStack_48 = *(undefined8 *)(uVar3 + 0x18);
    puStack_38 = &DAT_100c7b3a0;
    puStack_40 = (undefined1 *)&uStack_50;
    FUN_1011d7d74(param_1,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&puStack_40);
  }
  FUN_100dddd8c(param_1);
  return;
}

