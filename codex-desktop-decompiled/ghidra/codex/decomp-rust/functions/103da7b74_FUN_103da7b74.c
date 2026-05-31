
void FUN_103da7b74(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (*param_1 != 2) {
    uVar2 = param_1[1];
    if ((*param_1 & 1) != 0) {
      uVar2 = uVar2 + (*(long *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_1[2] + 0x80))(uVar2,param_1[3]);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar2 = param_1[4], uVar2 != 0)) {
    uStack_40 = *(undefined8 *)(uVar2 + 0x10);
    uStack_38 = *(undefined8 *)(uVar2 + 0x18);
    puStack_28 = &DAT_103d8be04;
    puStack_30 = (undefined1 *)&uStack_40;
    func_0x000103e76334(param_1,&UNK_108dc4233,0xd,s______108ab65de,&puStack_30);
  }
  if (*param_1 != 2 && *param_1 != 0) {
    plVar3 = (long *)param_1[1];
    lVar1 = *plVar3;
    *plVar3 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdf85dc28d5530721E(param_1 + 1);
    }
  }
  return;
}

