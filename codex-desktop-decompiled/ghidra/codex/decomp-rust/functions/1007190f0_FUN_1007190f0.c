
void FUN_1007190f0(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined6 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  long unaff_x19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x28;
  ulong in_xzr;
  undefined8 *in_stack_000000a8;
  
  FUN_10072475c(&stack0x00002e40);
  FUN_100d66e74(&stack0x00001600);
  *(undefined1 *)(unaff_x28 + 0xeea) = 0;
  lVar11 = **(long **)(unaff_x19 + 0x1080);
  **(long **)(unaff_x19 + 0x1080) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x1080);
  }
  FUN_100e62894(unaff_x19 + 0x11f0);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x990);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x998);
  uVar13 = *(undefined8 *)(unaff_x19 + 0x9a0);
  uVar5 = *(undefined2 *)(unaff_x19 + 0x9a8);
  uVar6 = *(undefined2 *)(unaff_x28 + 0x826);
  uVar3 = *(undefined4 *)(unaff_x28 + 0x822);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x9b0);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x9b8);
  uVar7 = *(undefined2 *)(unaff_x19 + 0x9c0);
  uVar8 = *(undefined2 *)(unaff_x28 + 0x83e);
  uVar4 = *(undefined4 *)(unaff_x28 + 0x83a);
  uVar15 = *(undefined8 *)(unaff_x19 + 0x9c8);
  uVar16 = *(undefined8 *)(unaff_x19 + 0x9d0);
  uVar9 = *(undefined2 *)(unaff_x19 + 0x9d8);
  uVar10 = *(undefined6 *)(unaff_x28 + 0x852);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x9e0);
  FUN_100da4514(unaff_x19 + 0x980);
  *(undefined1 *)(unaff_x28 + 0xee2) = 0;
  *(undefined1 *)(unaff_x28 + 0xeed) = 0;
  *(undefined4 *)(unaff_x28 + 0xee5) = 0;
  plVar18 = *(long **)(unaff_x19 + 0x568);
  if (plVar18 != (long *)0x0) {
    lVar11 = *plVar18;
    *plVar18 = lVar11 + -1;
    LORelease();
    if (lVar11 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x568);
    }
  }
  *(undefined1 *)(unaff_x28 + 0xeee) = 0;
  *(undefined1 *)(unaff_x28 + 0xee3) = 0;
  *(undefined1 *)(unaff_x28 + 0xef0) = 0;
  *(undefined1 *)(unaff_x28 + 0xee9) = 0;
  FUN_100e3bcd4(unaff_x19 + 0x220);
  puVar1 = (undefined8 *)(unaff_x19 + 0x218);
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (puVar1);
  lVar11 = *(long *)*puVar1;
  *(long *)*puVar1 = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(puVar1);
  }
  FUN_100e84360(unaff_x19 + 0x1d0);
  FUN_100d88cd8(unaff_x19 + 0x1c8);
  lVar20 = *(long *)(unaff_x19 + 0x1c0);
  LOAcquire();
  lVar11 = *(long *)(lVar20 + 0x1f0);
  *(long *)(lVar20 + 0x1f0) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    LOAcquire();
    lVar11 = *(long *)(lVar20 + 0x88);
    *(long *)(lVar20 + 0x88) = lVar11 + 1;
    lVar11 = func_0x000100fcaa8c(lVar20 + 0x80,lVar11);
    *(ulong *)(lVar11 + 0x6210) = *(ulong *)(lVar11 + 0x6210) | 0x200000000;
    LORelease();
    puVar2 = (ulong *)(lVar20 + 0x110);
    LOAcquire();
    uVar12 = *puVar2;
    *puVar2 = uVar12 | 2;
    LORelease();
    if (uVar12 == 0) {
      lVar11 = *(long *)(lVar20 + 0x100);
      *(undefined8 *)(lVar20 + 0x100) = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 8))(*(undefined8 *)(lVar20 + 0x108));
      }
    }
  }
  lVar11 = **(long **)(unaff_x19 + 0x1c0);
  **(long **)(unaff_x19 + 0x1c0) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(unaff_x19 + 0x1c0);
  }
  FUN_100d95344(unaff_x19 + 0x1a8);
  FUN_100e62894(unaff_x19 + 0xe0);
  lVar11 = **(long **)(unaff_x19 + 0x178);
  **(long **)(unaff_x19 + 0x178) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x178);
  }
  lVar11 = **(long **)(unaff_x19 + 0x188);
  **(long **)(unaff_x19 + 0x188) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E(unaff_x19 + 0x188);
  }
  *(undefined1 *)(unaff_x28 + 0xee4) = 0;
  *in_stack_000000a8 = uVar21;
  in_stack_000000a8[1] = uVar19;
  in_stack_000000a8[2] = uVar13;
  *(undefined2 *)(in_stack_000000a8 + 3) = uVar5;
  *(undefined4 *)((long)in_stack_000000a8 + 0x1a) = uVar3;
  *(undefined2 *)((long)in_stack_000000a8 + 0x1e) = uVar6;
  in_stack_000000a8[4] = uVar14;
  in_stack_000000a8[5] = uVar22;
  *(undefined2 *)(in_stack_000000a8 + 6) = uVar7;
  *(undefined4 *)((long)in_stack_000000a8 + 0x32) = uVar4;
  *(undefined2 *)((long)in_stack_000000a8 + 0x36) = uVar8;
  in_stack_000000a8[7] = uVar15;
  in_stack_000000a8[8] = uVar16;
  *(undefined2 *)(in_stack_000000a8 + 9) = uVar9;
  *(int *)((long)in_stack_000000a8 + 0x4a) = (int)uVar10;
  *(short *)((long)in_stack_000000a8 + 0x4e) = (short)((uint6)uVar10 >> 0x20);
  in_stack_000000a8[10] = uVar17;
  *(undefined1 *)(unaff_x28 + 0xee0) = 1;
  return;
}

