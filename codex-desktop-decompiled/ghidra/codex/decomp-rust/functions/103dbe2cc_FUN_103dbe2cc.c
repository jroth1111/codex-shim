
void FUN_103dbe2cc(long *param_1)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  puVar1 = (ulong *)(param_1 + 0xd9);
  if (param_1[0xd9] != 2) {
    lVar2 = param_1[0xda];
    if ((param_1[0xd9] & 1U) != 0) {
      lVar2 = lVar2 + (*(long *)(param_1[0xdb] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[0xdb] + 0x60))(lVar2,param_1 + 0xdc);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (lVar2 = param_1[0xdd], lVar2 != 0)) {
    uStack_50 = *(undefined8 *)(lVar2 + 0x10);
    uStack_48 = *(undefined8 *)(lVar2 + 0x18);
    puStack_38 = &DAT_103d8be04;
    puStack_40 = (undefined1 *)&uStack_50;
    func_0x000103e76334(puVar1,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_40);
  }
  if (*param_1 == 0) {
    func_0x000103da66bc(param_1 + 1);
    plVar3 = (long *)param_1[0xd7];
    if (plVar3 != (long *)0x0) {
      lVar2 = *plVar3;
      *plVar3 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(param_1 + 0xd7);
      }
    }
  }
  if (*puVar1 != 2) {
    lVar2 = param_1[0xda];
    if ((*puVar1 & 1) != 0) {
      lVar2 = lVar2 + (*(long *)(param_1[0xdb] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[0xdb] + 0x68))(lVar2,param_1 + 0xdc);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (lVar2 = param_1[0xdd], lVar2 != 0)) {
    uStack_50 = *(undefined8 *)(lVar2 + 0x10);
    uStack_48 = *(undefined8 *)(lVar2 + 0x18);
    puStack_38 = &DAT_103d8be04;
    puStack_40 = (undefined1 *)&uStack_50;
    func_0x000103e76334(puVar1,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_40);
  }
  func_0x000103da7b74(puVar1);
  return;
}

