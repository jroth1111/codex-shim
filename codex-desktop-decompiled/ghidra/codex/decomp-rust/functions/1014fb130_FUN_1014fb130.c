
undefined8 FUN_1014fb130(undefined8 param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong *puVar4;
  ulong uVar5;
  char *unaff_x25;
  long unaff_x29;
  ulong in_xzr;
  char *pcStack0000000000000018;
  undefined8 *puStack0000000000000020;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 uStack00000000000000a0;
  long lStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined1 *in_stack_00000150;
  undefined *in_stack_00000158;
  
  puStack0000000000000020 = &stack0x00000150;
  pcStack0000000000000018 = s__________abort_conn__failed_to_a_108ad884e;
  *(char ***)(unaff_x29 + -0xb0) = &stack0x00000018;
  *(undefined **)(unaff_x29 + -0xa8) = &UNK_10b208fd0;
  lStack00000000000000a8 = unaff_x29 + -0xb0;
  uStack00000000000000a0 = 1;
  uStack00000000000000b0 = 1;
  uStack0000000000000108 = in_stack_00000058;
  uStack0000000000000100 = in_stack_00000050;
  uStack0000000000000110 = in_stack_00000060;
  uStack00000000000000b8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar2 = *(long *)unaff_x19[0xb];
  *(long *)unaff_x19[0xb] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE();
  }
  lVar2 = *(long *)unaff_x19[0xc];
  *(long *)unaff_x19[0xc] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001060e2224();
  }
  if ((char)unaff_x19[9] != '\0') {
    lVar2 = *(long *)unaff_x19[10];
    *(long *)unaff_x19[10] = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h10f445fb86fd931aE();
    }
  }
  puVar4 = unaff_x19 + 0xd;
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
  *(undefined1 *)((long)unaff_x19 + 0xc1) = 1;
  if (*unaff_x19 != 2) {
    uVar5 = unaff_x19[1];
    if ((*unaff_x19 & 1) != 0) {
      uVar5 = uVar5 + (*(long *)(unaff_x19[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(unaff_x19[2] + 0x68))(uVar5,unaff_x19 + 3);
  }
  if ((*unaff_x25 == '\0') && (uVar5 = unaff_x19[4], uVar5 != 0)) {
    uStack00000000000000a0 = *(undefined8 *)(uVar5 + 0x10);
    lStack00000000000000a8 = *(undefined8 *)(uVar5 + 0x18);
    in_stack_00000150 = (undefined1 *)&stack0x000000a0;
    in_stack_00000158 = &DAT_100c7b3a0;
    FUN_1011d7d74();
  }
  return 0;
}

