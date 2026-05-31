
undefined8 FUN_100c08c8c(undefined8 param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  long *plVar5;
  long unaff_x24;
  long unaff_x29;
  ulong in_xzr;
  undefined8 in_stack_00000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  
  *(char **)(unaff_x29 + -0x50) = s_websocket_receive_error__108ad2c16;
  *(long *)(unaff_x29 + -0x48) = unaff_x29 + -0xd8;
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x60;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  uStack0000000000000118 = *(undefined8 *)(unaff_x24 + 0x78);
  uStack0000000000000110 = *(undefined8 *)(unaff_x24 + 0x70);
  uStack0000000000000120 = in_stack_00000108;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100de8b24(&stack0x000000a0);
  if (*(long *)(unaff_x19 + 0xa8) != 7) {
    *(undefined1 *)(unaff_x19 + 0xa2) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0xa2) = 0;
  lVar2 = **(long **)(unaff_x19 + 0x30);
  **(long **)(unaff_x19 + 0x30) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf0ec7bcaf6bf0fb0E();
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (unaff_x19 + 0x28);
  lVar2 = **(long **)(unaff_x19 + 0x28);
  **(long **)(unaff_x19 + 0x28) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x19 + 0x28);
  }
  plVar5 = (long *)(unaff_x19 + 0x18);
  lVar4 = *plVar5;
  LOAcquire();
  lVar2 = *(long *)(lVar4 + 0x1f0);
  *(long *)(lVar4 + 0x1f0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(lVar4 + 0x88);
    *(long *)(lVar4 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcb944(lVar4 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0x710) = *(ulong *)(lVar2 + 0x710) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar4 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = *(long *)(lVar4 + 0x100);
      *(undefined8 *)(lVar4 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar4 + 0x108));
      }
    }
  }
  lVar2 = *(long *)*plVar5;
  *(long *)*plVar5 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h3ca62d46b878cf2cE(plVar5);
  }
  plVar5 = (long *)(unaff_x19 + 0x10);
  lVar4 = *plVar5;
  LOAcquire();
  lVar2 = *(long *)(lVar4 + 0x1f0);
  *(long *)(lVar4 + 0x1f0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(lVar4 + 0x88);
    *(long *)(lVar4 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcaed8(lVar4 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0x4110) = *(ulong *)(lVar2 + 0x4110) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar4 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = *(long *)(lVar4 + 0x100);
      *(undefined8 *)(lVar4 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar4 + 0x108));
      }
    }
  }
  lVar2 = *(long *)*plVar5;
  *(long *)*plVar5 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h87dced07d7317f69E(plVar5);
  }
  plVar5 = (long *)(unaff_x19 + 8);
  lVar4 = *plVar5;
  LOAcquire();
  lVar2 = *(long *)(lVar4 + 0x1f0);
  *(long *)(lVar4 + 0x1f0) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    LOAcquire();
    lVar2 = *(long *)(lVar4 + 0x88);
    *(long *)(lVar4 + 0x88) = lVar2 + 1;
    lVar2 = func_0x000100fcb05c(lVar4 + 0x80,lVar2);
    *(ulong *)(lVar2 + 0x1610) = *(ulong *)(lVar2 + 0x1610) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar4 + 0x110);
    LOAcquire();
    uVar3 = *puVar1;
    *puVar1 = uVar3 | 2;
    LORelease();
    if (uVar3 == 0) {
      lVar2 = *(long *)(lVar4 + 0x100);
      *(undefined8 *)(lVar4 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar4 + 0x108));
      }
    }
  }
  lVar2 = *(long *)*plVar5;
  *(long *)*plVar5 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE(plVar5);
  }
  *(undefined1 *)(unaff_x19 + 0xa3) = 1;
  return 0;
}

