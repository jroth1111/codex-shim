
void FUN_103db11e4(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
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
  uVar2 = param_1[5];
  if (uVar2 != 0) {
    puVar5 = (undefined8 *)param_1[6];
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar2);
    }
    if (puVar5[1] != 0) {
      _free(uVar2);
    }
    plVar4 = (long *)param_1[7];
    if (plVar4 != (long *)0x0) {
      lVar1 = *plVar4;
      *plVar4 = lVar1 + -1;
      LORelease();
      if (lVar1 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
    }
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

