
undefined8 FUN_100c09df8(undefined8 param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  long *plVar6;
  long unaff_x24;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar7;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_00000108;
  
  *(char **)(unaff_x29 + -0x50) = s_websocket_receive_error__108ad2c16;
  *(undefined1 **)(unaff_x29 + -0x48) = &stack0x00000060;
  *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x50;
  *(undefined **)(unaff_x29 + -0x58) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0x60;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  uVar7 = *(undefined8 *)(unaff_x24 + 0x60);
  *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x24 + 0x68);
  *(undefined8 *)(unaff_x29 + -0xf0) = uVar7;
  *(undefined8 *)(unaff_x29 + -0xe0) = in_stack_00000108;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  puVar2 = in_stack_000000b8;
  uVar7 = in_stack_000000b0;
  if ((code *)*in_stack_000000b8 != (code *)0x0) {
    (*(code *)*in_stack_000000b8)(in_stack_000000b0);
  }
  if (puVar2[1] != 0) {
    _free(uVar7);
  }
  if (*(long *)(unaff_x19 + 0x528) != 6) {
    *(undefined1 *)(unaff_x19 + 0x9a) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x9a) = 0;
  lVar3 = **(long **)(unaff_x19 + 0x60);
  **(long **)(unaff_x19 + 0x60) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4393153463fa3bcbE();
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (unaff_x19 + 0x58);
  lVar3 = **(long **)(unaff_x19 + 0x58);
  **(long **)(unaff_x19 + 0x58) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x19 + 0x58);
  }
  plVar6 = (long *)(unaff_x19 + 0x48);
  lVar5 = *plVar6;
  LOAcquire();
  lVar3 = *(long *)(lVar5 + 0x1f0);
  *(long *)(lVar5 + 0x1f0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    LOAcquire();
    lVar3 = *(long *)(lVar5 + 0x88);
    *(long *)(lVar5 + 0x88) = lVar3 + 1;
    lVar3 = func_0x000100fcac10(lVar5 + 0x80,lVar3);
    *(ulong *)(lVar3 + 0x610) = *(ulong *)(lVar3 + 0x610) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar5 + 0x110);
    LOAcquire();
    uVar4 = *puVar1;
    *puVar1 = uVar4 | 2;
    LORelease();
    if (uVar4 == 0) {
      lVar3 = *(long *)(lVar5 + 0x100);
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar5 + 0x108));
      }
    }
  }
  lVar3 = *(long *)*plVar6;
  *(long *)*plVar6 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf80e57327abf0319E(plVar6);
  }
  plVar6 = (long *)(unaff_x19 + 0x40);
  lVar5 = *plVar6;
  LOAcquire();
  lVar3 = *(long *)(lVar5 + 0x1f0);
  *(long *)(lVar5 + 0x1f0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    LOAcquire();
    lVar3 = *(long *)(lVar5 + 0x88);
    *(long *)(lVar5 + 0x88) = lVar3 + 1;
    lVar3 = func_0x000100fcaed8(lVar5 + 0x80,lVar3);
    *(ulong *)(lVar3 + 0x4110) = *(ulong *)(lVar3 + 0x4110) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar5 + 0x110);
    LOAcquire();
    uVar4 = *puVar1;
    *puVar1 = uVar4 | 2;
    LORelease();
    if (uVar4 == 0) {
      lVar3 = *(long *)(lVar5 + 0x100);
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar5 + 0x108));
      }
    }
  }
  lVar3 = *(long *)*plVar6;
  *(long *)*plVar6 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h87dced07d7317f69E(plVar6);
  }
  plVar6 = (long *)(unaff_x19 + 0x38);
  lVar5 = *plVar6;
  LOAcquire();
  lVar3 = *(long *)(lVar5 + 0x1f0);
  *(long *)(lVar5 + 0x1f0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    LOAcquire();
    lVar3 = *(long *)(lVar5 + 0x88);
    *(long *)(lVar5 + 0x88) = lVar3 + 1;
    lVar3 = func_0x000100fcb05c(lVar5 + 0x80,lVar3);
    *(ulong *)(lVar3 + 0x1610) = *(ulong *)(lVar3 + 0x1610) | 0x200000000;
    LORelease();
    puVar1 = (ulong *)(lVar5 + 0x110);
    LOAcquire();
    uVar4 = *puVar1;
    *puVar1 = uVar4 | 2;
    LORelease();
    if (uVar4 == 0) {
      lVar3 = *(long *)(lVar5 + 0x100);
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *puVar1 = in_xzr;
      LORelease();
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar5 + 0x108));
      }
    }
  }
  lVar3 = *(long *)*plVar6;
  *(long *)*plVar6 = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE(plVar6);
  }
  *(undefined1 *)(unaff_x19 + 0x9b) = 1;
  return 0;
}

