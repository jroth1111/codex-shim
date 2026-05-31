
void FUN_103da4e28(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (*param_1 != 2) {
    uVar2 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar2 = uVar2 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x60))(uVar2,param_1 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar2 = param_1[4], uVar2 != 0)) {
    uStack_50 = *(undefined8 *)(uVar2 + 0x10);
    uStack_48 = *(undefined8 *)(uVar2 + 0x18);
    puStack_38 = &DAT_103d8be04;
    puStack_40 = (undefined1 *)&uStack_50;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_40);
  }
  if ((char)param_1[0x9f] == '\x03') {
    func_0x000103d9dac4(param_1 + 0x24);
    lVar1 = *(long *)param_1[0x23];
    *(long *)param_1[0x23] = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h258abc3dab4742c3E(param_1 + 0x23);
    }
  }
  else if ((char)param_1[0x9f] == '\0') {
    lVar1 = *(long *)param_1[0x23];
    *(long *)param_1[0x23] = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h258abc3dab4742c3E(param_1 + 0x23);
    }
    func_0x000103daf538(param_1 + 0x15);
    func_0x000103dc1800(param_1 + 5);
    func_0x000103da4abc(param_1[0x14]);
    func_0x000103dbd204(param_1 + 0xe);
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
    uStack_50 = *(undefined8 *)(uVar2 + 0x10);
    uStack_48 = *(undefined8 *)(uVar2 + 0x18);
    puStack_38 = &DAT_103d8be04;
    puStack_40 = (undefined1 *)&uStack_50;
    func_0x000103e76334(param_1,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_40);
  }
  func_0x000103da7b74(param_1);
  return;
}

