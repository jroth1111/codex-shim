
void FUN_100d615cc(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  FUN_10081075c(*(long *)(param_1 + 0x588) + 0x10,*(long *)(param_1 + 0x590) + 0x10,1);
  func_0x000100dc2b64(param_1);
  if (*(long *)(param_1 + 0x598) != 0) {
    (**(code **)(*(long *)(param_1 + 0x598) + 0x20))
              (param_1 + 0x5b0,*(undefined8 *)(param_1 + 0x5a0),*(undefined8 *)(param_1 + 0x5a8));
  }
  if (*(long *)(param_1 + 0x528) != 0) {
    (**(code **)(*(long *)(param_1 + 0x528) + 0x20))
              (param_1 + 0x540,*(undefined8 *)(param_1 + 0x530),*(undefined8 *)(param_1 + 0x538));
  }
  lVar4 = *(long *)(param_1 + 0x560);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = 4;
    puVar1 = (ulong *)(lVar4 + 0x40);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = *(long *)(lVar4 + 0x30);
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *puVar1 = *puVar1 & 0xfffffffffffffffd;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar4 + 0x38));
      }
    }
    lVar4 = **(long **)(param_1 + 0x560);
    **(long **)(param_1 + 0x560) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h692021b45c2d9807E(param_1 + 0x560);
    }
  }
  if ((((*(long *)(param_1 + 0x3f0) == 1) || (*(long *)(param_1 + 0x3f0) == 0)) &&
      (*(short *)(param_1 + 0x438) != 2)) && (8 < *(ulong *)(param_1 + 0x460))) {
    _free(*(undefined8 *)(param_1 + 0x448));
  }
  if (((*(int *)(param_1 + 0x478) != 2) && (*(short *)(param_1 + 0x4b8) != 2)) &&
     (8 < *(ulong *)(param_1 + 0x4e0))) {
    _free(*(undefined8 *)(param_1 + 0x4c8));
  }
  FUN_100d7f170(param_1 + 0x588);
  puVar1 = (ulong *)(param_1 + 0x500);
  if (*puVar1 != 2) {
    lVar4 = *(long *)(param_1 + 0x508);
    if ((*puVar1 & 1) != 0) {
      lVar4 = lVar4 + (*(long *)(*(long *)(param_1 + 0x510) + 0x10) - 1U & 0xfffffffffffffff0) +
              0x10;
    }
    (**(code **)(*(long *)(param_1 + 0x510) + 0x80))(lVar4,*(undefined8 *)(param_1 + 0x518));
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (lVar4 = *(long *)(param_1 + 0x520), lVar4 != 0)) {
    uStack_40 = *(undefined8 *)(lVar4 + 0x10);
    uStack_38 = *(undefined8 *)(lVar4 + 0x18);
    puStack_28 = &DAT_100c7b3a0;
    puStack_30 = (undefined1 *)&uStack_40;
    FUN_1011d7d74(puVar1,&UNK_108cca231,0xd,s______108ab65de,&puStack_30);
  }
  if (*puVar1 != 2 && *puVar1 != 0) {
    plVar5 = *(long **)(param_1 + 0x508);
    lVar4 = *plVar5;
    *plVar5 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdf85dc28d5530721E
                ((undefined8 *)(param_1 + 0x508));
    }
  }
  return;
}

