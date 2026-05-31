
void FUN_100cea3c4(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (*(char *)(param_1 + 0x212a) != '\0') {
    if (*(char *)(param_1 + 0x212a) == '\x03') {
      puVar1 = param_1 + 6;
      if (*puVar1 != 2) {
        lVar4 = param_1[7];
        if ((*puVar1 & 1) != 0) {
          lVar4 = lVar4 + (*(long *)(param_1[8] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(param_1[8] + 0x60))(lVar4,param_1 + 9);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (lVar4 = param_1[10], lVar4 != 0)) {
        uStack_50 = *(undefined8 *)(lVar4 + 0x10);
        uStack_48 = *(undefined8 *)(lVar4 + 0x18);
        puStack_38 = &DAT_100c7b3a0;
        puStack_40 = (undefined1 *)&uStack_50;
        FUN_1011d7d74(puVar1,&UNK_108cd3ef5,0x15,s__>___108ab67cd,&puStack_40);
      }
      FUN_100e7e9e8(param_1 + 0xb);
      if (*puVar1 != 2) {
        lVar4 = param_1[7];
        if ((*puVar1 & 1) != 0) {
          lVar4 = lVar4 + (*(long *)(param_1[8] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(param_1[8] + 0x68))(lVar4,param_1 + 9);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (lVar4 = param_1[10], lVar4 != 0)) {
        uStack_50 = *(undefined8 *)(lVar4 + 0x10);
        uStack_48 = *(undefined8 *)(lVar4 + 0x18);
        puStack_38 = &DAT_100c7b3a0;
        puStack_40 = (undefined1 *)&uStack_50;
        FUN_1011d7d74(puVar1,&UNK_108cd3ef5,0x15,s_<____108ab67c5,&puStack_40);
      }
      FUN_100dddd8c(puVar1);
      return;
    }
    return;
  }
  lVar4 = *(long *)*param_1;
  *(long *)*param_1 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(param_1);
  }
  lVar4 = *(long *)param_1[1];
  *(long *)param_1[1] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E();
  }
  plVar2 = param_1 + 2;
  LOAcquire();
  lVar4 = *(long *)(*plVar2 + 0x328);
  *(long *)(*plVar2 + 0x328) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    lVar4 = *plVar2;
    if (*(long *)(lVar4 + 0x80) == 0) {
      LOAcquire();
      uVar3 = *(ulong *)(lVar4 + 0x2b8);
      *(ulong *)(lVar4 + 0x2b8) = uVar3 | 4;
      LORelease();
      if (((uint)uVar3 >> 2 & 1) != 0) goto LAB_100e601f4;
    }
    else {
      if (*(long *)(lVar4 + 0x80) == 1) {
        LOAcquire();
        uVar3 = *(ulong *)(lVar4 + 0x180);
        *(ulong *)(lVar4 + 0x180) = uVar3 | *(ulong *)(lVar4 + 0x208);
        LORelease();
        uVar3 = *(ulong *)(lVar4 + 0x208) & uVar3;
      }
      else {
        LOAcquire();
        uVar3 = *(ulong *)(lVar4 + 0x180);
        *(ulong *)(lVar4 + 0x180) = uVar3 | 1;
        LORelease();
        uVar3 = uVar3 & 1;
      }
      if (uVar3 != 0) goto LAB_100e601f4;
    }
    FUN_108833f44(lVar4 + 0x300);
    FUN_108833f44(lVar4 + 0x308);
    FUN_108833f44(lVar4 + 0x310);
    FUN_108833f44(lVar4 + 0x318);
  }
LAB_100e601f4:
  lVar4 = *(long *)*plVar2;
  *(long *)*plVar2 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001034c4ca8(plVar2);
  }
  lVar4 = param_1[3];
  if (lVar4 != 0) {
    FUN_100d07adc(lVar4);
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(lVar4);
    return;
  }
  return;
}

