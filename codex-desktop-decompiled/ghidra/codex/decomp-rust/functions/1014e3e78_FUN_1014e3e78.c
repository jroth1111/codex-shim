
undefined8 FUN_1014e3e78(undefined8 param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong *puVar4;
  ulong uVar5;
  char *unaff_x24;
  ulong in_xzr;
  undefined1 *puStack0000000000000018;
  undefined *puStack0000000000000020;
  char *pcStack0000000000000050;
  undefined8 *puStack0000000000000058;
  undefined8 uStack00000000000000a0;
  undefined1 *puStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined1 *in_stack_00000150;
  undefined *in_stack_00000158;
  
  puStack0000000000000058 = &stack0x00000150;
  pcStack0000000000000050 = s__________abort_conn__failed_to_a_108ad884e;
  puStack0000000000000018 = (undefined1 *)&stack0x00000050;
  puStack0000000000000020 = &UNK_10b208fd0;
  puStack00000000000000a8 = (undefined1 *)&stack0x00000018;
  uStack00000000000000a0 = 1;
  uStack00000000000000b0 = 1;
  uStack00000000000000b8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar2 = *(long *)unaff_x19[9];
  *(long *)unaff_x19[9] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
  }
  lVar2 = *(long *)unaff_x19[10];
  *(long *)unaff_x19[10] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001060e2224();
  }
  puVar4 = unaff_x19 + 0xb;
  uVar5 = *puVar4;
  LOAcquire();
  lVar2 = *(long *)(uVar5 + 0x1f0);
  *(long *)(uVar5 + 0x1f0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(uVar5 + 0x88);
    *(long *)(uVar5 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcbaa8(uVar5 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0xb10) = *(ulong *)(lVar2 + 0xb10) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(uVar5 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = *(long *)(uVar5 + 0x100);
      *(undefined8 *)(uVar5 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(uVar5 + 0x108));
      }
    }
  }
  lVar2 = *(long *)*puVar4;
  *(long *)*puVar4 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h49f814765505db59E(puVar4);
  }
  *(undefined1 *)((long)unaff_x19 + 0xb1) = 1;
  if (*unaff_x19 != 2) {
    uVar5 = unaff_x19[1];
    if ((*unaff_x19 & 1) != 0) {
      uVar5 = uVar5 + (*(long *)(unaff_x19[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(unaff_x19[2] + 0x68))(uVar5,unaff_x19 + 3);
  }
  if ((*unaff_x24 == '\0') && (uVar5 = unaff_x19[4], uVar5 != 0)) {
    uStack00000000000000a0 = *(undefined8 *)(uVar5 + 0x10);
    puStack00000000000000a8 = *(undefined1 **)(uVar5 + 0x18);
    in_stack_00000150 = (undefined1 *)&stack0x000000a0;
    in_stack_00000158 = &DAT_100c7b3a0;
    FUN_1011d7d74();
  }
  return 0;
}

