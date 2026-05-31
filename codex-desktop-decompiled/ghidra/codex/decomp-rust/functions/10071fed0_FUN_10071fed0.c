
void FUN_10071fed0(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined6 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x19;
  long lVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 *unaff_x26;
  long unaff_x28;
  ulong in_xzr;
  uint uStack0000000000000074;
  undefined8 *in_stack_00000088;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x100);
  unaff_x26[1] = *(undefined8 *)(unaff_x22 + 0x108);
  *unaff_x26 = uVar12;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100d66e74(&stack0x00001600);
  *(undefined1 *)(unaff_x28 + 0xef2) = 0;
  lVar10 = **(long **)(unaff_x19 + 0x13f8);
  **(long **)(unaff_x19 + 0x13f8) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x13f8);
  }
  FUN_100e62894(unaff_x19 + 0x1098);
  lVar10 = **(long **)(unaff_x19 + 0x1118);
  **(long **)(unaff_x19 + 0x1118) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE(unaff_x19 + 0x1118);
  }
  uVar12 = *(undefined8 *)(unaff_x19 + 0x9a8);
  uVar18 = *(undefined8 *)(unaff_x19 + 0x9b0);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x9b8);
  uVar5 = *(undefined2 *)(unaff_x19 + 0x9c0);
  uVar6 = *(undefined2 *)(unaff_x28 + 0x82e);
  uVar3 = *(undefined4 *)(unaff_x28 + 0x82a);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x9c8);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x9d0);
  uStack0000000000000074 = (uint)*(ushort *)(unaff_x19 + 0x9d8);
  uVar7 = *(undefined2 *)(unaff_x28 + 0x846);
  uVar4 = *(undefined4 *)(unaff_x28 + 0x842);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x9e0);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x9e8);
  uVar8 = *(undefined2 *)(unaff_x19 + 0x9f0);
  uVar9 = *(undefined6 *)(unaff_x28 + 0x85a);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x9f8);
  FUN_100da4514(unaff_x19 + 0x998);
  *(undefined1 *)(unaff_x28 + 0xeea) = 0;
  *(undefined1 *)(unaff_x28 + 0xef5) = 0;
  *(undefined4 *)(unaff_x28 + 0xeed) = 0;
  plVar17 = *(long **)(unaff_x19 + 0x578);
  if (plVar17 != (long *)0x0) {
    lVar10 = *plVar17;
    *plVar17 = lVar10 + -1;
    LORelease();
    if (lVar10 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x578);
    }
  }
  *(undefined1 *)(unaff_x28 + 0xef6) = 0;
  *(undefined1 *)(unaff_x28 + 0xeeb) = 0;
  *(undefined1 *)(unaff_x28 + 0xef8) = 0;
  *(undefined1 *)(unaff_x28 + 0xef1) = 0;
  FUN_100e3bcd4(unaff_x19 + 0x230);
  puVar1 = (undefined8 *)(unaff_x19 + 0x228);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (puVar1);
  lVar10 = *(long *)*puVar1;
  *(long *)*puVar1 = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar1);
  }
  FUN_100e84360(unaff_x19 + 0x1e0);
  FUN_100d88cd8(unaff_x19 + 0x1d8);
  lVar20 = *(long *)(unaff_x19 + 0x1d0);
  LOAcquire();
  lVar10 = *(long *)(lVar20 + 0x1f0);
  *(long *)(lVar20 + 0x1f0) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    LOAcquire();
    lVar10 = *(long *)(lVar20 + 0x88);
    *(long *)(lVar20 + 0x88) = lVar10 + 1;
    lVar10 = func_0x000100fcaa8c(lVar20 + 0x80,lVar10);
    *(ulong *)(lVar10 + 0x6210) = *(ulong *)(lVar10 + 0x6210) | 0x200000000;
    LORelease();
    puVar2 = (ulong *)(lVar20 + 0x110);
    LOAcquire();
    uVar11 = *puVar2;
    *puVar2 = uVar11 | 2;
    LORelease();
    if (uVar11 == 0) {
      lVar10 = *(long *)(lVar20 + 0x100);
      *(undefined8 *)(lVar20 + 0x100) = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar10 != 0) {
        (**(code **)(lVar10 + 8))(*(undefined8 *)(lVar20 + 0x108));
      }
    }
  }
  lVar10 = **(long **)(unaff_x19 + 0x1d0);
  **(long **)(unaff_x19 + 0x1d0) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(unaff_x19 + 0x1d0);
  }
  FUN_100dac4b8(unaff_x19 + 0x1b8);
  FUN_100e62894(unaff_x19 + 0xe8);
  lVar10 = **(long **)(unaff_x19 + 0x168);
  **(long **)(unaff_x19 + 0x168) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE(unaff_x19 + 0x168);
  }
  lVar10 = **(long **)(unaff_x19 + 0x188);
  **(long **)(unaff_x19 + 0x188) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x188);
  }
  lVar10 = **(long **)(unaff_x19 + 0x198);
  **(long **)(unaff_x19 + 0x198) = lVar10 + -1;
  LORelease();
  if (lVar10 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E(unaff_x19 + 0x198);
  }
  *(undefined1 *)(unaff_x28 + 0xeec) = 0;
  *in_stack_00000088 = uVar12;
  in_stack_00000088[1] = uVar18;
  in_stack_00000088[2] = uVar13;
  *(undefined2 *)(in_stack_00000088 + 3) = uVar5;
  *(undefined4 *)((long)in_stack_00000088 + 0x1a) = uVar3;
  *(undefined2 *)((long)in_stack_00000088 + 0x1e) = uVar6;
  in_stack_00000088[4] = uVar19;
  in_stack_00000088[5] = uVar14;
  *(short *)(in_stack_00000088 + 6) = (short)uStack0000000000000074;
  *(undefined4 *)((long)in_stack_00000088 + 0x32) = uVar4;
  *(undefined2 *)((long)in_stack_00000088 + 0x36) = uVar7;
  in_stack_00000088[7] = uVar15;
  in_stack_00000088[8] = uVar21;
  *(undefined2 *)(in_stack_00000088 + 9) = uVar8;
  *(int *)((long)in_stack_00000088 + 0x4a) = (int)uVar9;
  *(short *)((long)in_stack_00000088 + 0x4e) = (short)((uint6)uVar9 >> 0x20);
  in_stack_00000088[10] = uVar16;
  *(undefined1 *)(unaff_x28 + 0xee8) = 1;
  return;
}

