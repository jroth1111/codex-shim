
undefined8 FUN_1014e8724(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  long *unaff_x25;
  ulong in_xzr;
  undefined1 *puStack00000000000000d0;
  undefined *puStack00000000000000d8;
  
  puStack00000000000000d0 = &stack0x00000bf8;
  puStack00000000000000d8 = &UNK_10b208fd0;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar2 = *(long *)unaff_x19[0x18];
  *(long *)unaff_x19[0x18] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001060e2224(unaff_x19 + 0x18);
  }
  puVar6 = unaff_x19 + 0x17;
  uVar4 = *puVar6;
  *(undefined1 *)((long)unaff_x19 + 0x77) = 0;
  LOAcquire();
  lVar2 = *(long *)(uVar4 + 0x1f0);
  *(long *)(uVar4 + 0x1f0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(uVar4 + 0x88);
    *(long *)(uVar4 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcbaa8(uVar4 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0xb10) = *(ulong *)(lVar2 + 0xb10) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(uVar4 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = *(long *)(uVar4 + 0x100);
      *(undefined8 *)(uVar4 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(uVar4 + 0x108));
      }
    }
  }
  lVar2 = *(long *)*puVar6;
  *(long *)*puVar6 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(puVar6);
  }
  *(undefined1 *)(unaff_x19 + 0xf) = 0;
  lVar2 = *(long *)unaff_x19[0x16];
  *(long *)unaff_x19[0x16] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
  }
  *(undefined1 *)((long)unaff_x19 + 0x79) = 0;
  if (unaff_x19[0x1c] != 0) {
    _free(unaff_x19[0x1a]);
  }
  lVar2 = *(long *)unaff_x19[7];
  *(long *)unaff_x19[7] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
  }
  lVar2 = *(long *)unaff_x19[6];
  *(long *)unaff_x19[6] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001060e2224();
  }
  lVar5 = *unaff_x25;
  LOAcquire();
  lVar2 = *(long *)(lVar5 + 0x1f0);
  *(long *)(lVar5 + 0x1f0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(lVar5 + 0x88);
    *(long *)(lVar5 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcbaa8(lVar5 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0xb10) = *(ulong *)(lVar2 + 0xb10) | 0x200000000;
    LORelease();
    puVar6 = (ulong *)(lVar5 + 0x110);
    LOAcquire();
    uVar4 = *puVar6;
    *puVar6 = uVar4 | 2;
    LORelease();
    if (uVar4 == 0) {
      lVar2 = *(long *)(lVar5 + 0x100);
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *puVar6 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar5 + 0x108));
      }
    }
  }
  lVar2 = *(long *)*unaff_x25;
  *(long *)*unaff_x25 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E();
  }
  *(undefined1 *)((long)unaff_x19 + 0x7a) = 1;
  if (*unaff_x19 != 2) {
    uVar4 = unaff_x19[1];
    if ((*unaff_x19 & 1) != 0) {
      uVar4 = uVar4 + (*(long *)(unaff_x19[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(unaff_x19[2] + 0x68))(uVar4,unaff_x19 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') && (unaff_x19[4] != 0)) {
    FUN_1011d7d74();
  }
  return 0;
}

