
undefined8 FUN_1014e1d70(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong *unaff_x19;
  ulong *puVar5;
  ulong uVar6;
  ulong in_xzr;
  undefined8 in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined1 *puStack00000000000000d0;
  undefined *puStack00000000000000d8;
  
  puStack00000000000000d0 = &stack0x00000bf8;
  puStack00000000000000d8 = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((code *)*in_stack_000000c0 != (code *)0x0) {
    (*(code *)*in_stack_000000c0)(in_stack_000000b8);
  }
  if (in_stack_000000c0[1] != 0) {
    _free(in_stack_000000b8);
  }
  lVar2 = *(long *)unaff_x19[0x11];
  *(long *)unaff_x19[0x11] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
  }
  lVar2 = *(long *)unaff_x19[0x10];
  *(long *)unaff_x19[0x10] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001060e2224();
  }
  puVar5 = unaff_x19 + 0xf;
  uVar6 = *puVar5;
  LOAcquire();
  lVar2 = *(long *)(uVar6 + 0x1f0);
  *(long *)(uVar6 + 0x1f0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(uVar6 + 0x88);
    *(long *)(uVar6 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcbaa8(uVar6 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0xb10) = *(ulong *)(lVar2 + 0xb10) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(uVar6 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = *(long *)(uVar6 + 0x100);
      *(undefined8 *)(uVar6 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(uVar6 + 0x108));
      }
    }
  }
  lVar2 = *(long *)*puVar5;
  *(long *)*puVar5 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(puVar5);
  }
  if (unaff_x19[0xd] == 0) {
    plVar4 = (long *)unaff_x19[0xe];
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0f68883db9c1e126E();
    }
  }
  else {
    plVar4 = (long *)unaff_x19[0xe];
    lVar2 = *plVar4;
    *plVar4 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h576a4a0a079aa50eE();
    }
  }
  *(undefined1 *)((long)unaff_x19 + 0x97) = 1;
  if (*unaff_x19 != 2) {
    uVar6 = unaff_x19[1];
    if ((*unaff_x19 & 1) != 0) {
      uVar6 = uVar6 + (*(long *)(unaff_x19[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(unaff_x19[2] + 0x68))(uVar6,unaff_x19 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (unaff_x19[4] != 0)) {
    FUN_1011d7d74();
  }
  return 0;
}

