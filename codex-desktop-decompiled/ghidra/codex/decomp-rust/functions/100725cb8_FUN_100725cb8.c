
void FUN_100725cb8(undefined8 param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long lVar4;
  long *plVar5;
  undefined2 *unaff_x24;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack00000000000000b0;
  long lStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined2 in_stack_00000220;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  
  *(char **)(unaff_x29 + -0x80) = s_fail_to_get_common_stream__108ac5676;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x80;
  *(undefined **)(unaff_x29 + -0x88) = &UNK_10b208fd0;
  lStack00000000000000b8 = unaff_x29 + -0x90;
  uStack00000000000000b0 = 1;
  uStack00000000000000c0 = 1;
  uStack0000000000000058 = *(undefined8 *)(unaff_x26 + 0x60);
  uStack0000000000000050 = *(undefined8 *)(unaff_x26 + 0x58);
  uStack0000000000000060 = *(undefined8 *)(unaff_x29 + -0x98);
  uStack00000000000000c8 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  uVar6 = *(undefined8 *)(unaff_x28 + 2);
  uVar8 = *(undefined8 *)(unaff_x28 + 0x1a);
  uVar7 = *(undefined8 *)(unaff_x28 + 0x12);
  *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x28 + 10);
  *(undefined8 *)(unaff_x29 + -0x100) = uVar6;
  *(undefined8 *)(unaff_x29 + -0xe8) = uVar8;
  *(undefined8 *)(unaff_x29 + -0xf0) = uVar7;
  uVar6 = *(undefined8 *)(unaff_x28 + 0x22);
  *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x28 + 0x2a);
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar6;
  *(undefined8 *)(unaff_x26 + 0x36) = in_stack_00000258;
  *(undefined8 *)(unaff_x26 + 0x2e) = in_stack_00000250;
  if ((*(short *)(unaff_x19 + 0x108) != 0x1f) && ((*(byte *)(unaff_x19 + 0x149) & 1) != 0)) {
    FUN_100d66e74(unaff_x19 + 0x108);
  }
  *(undefined1 *)(unaff_x19 + 0x149) = 0;
  FUN_100e62894();
  lVar2 = **(long **)(unaff_x19 + 0x80);
  **(long **)(unaff_x19 + 0x80) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h6c8cac43574eef9aE();
  }
  lVar2 = **(long **)(unaff_x19 + 0xb8);
  **(long **)(unaff_x19 + 0xb8) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
  }
  lVar2 = **(long **)(unaff_x19 + 200);
  **(long **)(unaff_x19 + 200) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
  }
  if ((*(long *)(unaff_x19 + 0x88) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x88) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x90));
  }
  if ((*(byte *)(unaff_x19 + 0x14d) & 1) != 0) {
    lVar2 = **(long **)(unaff_x19 + 0xd8);
    **(long **)(unaff_x19 + 0xd8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
  }
  if ((((*(byte *)(unaff_x19 + 0x14c) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0xa0) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0xa0) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xa8));
  }
  if ((*(byte *)(unaff_x19 + 0x14b) & 1) != 0) {
    lVar2 = **(long **)(unaff_x19 + 0xe8);
    **(long **)(unaff_x19 + 0xe8) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E();
    }
  }
  if ((*(byte *)(unaff_x19 + 0x14a) & 1) != 0) {
    plVar5 = (long *)(unaff_x19 + 0xf8);
    lVar4 = *plVar5;
    LOAcquire();
    lVar2 = *(long *)(lVar4 + 0x1f0);
    *(long *)(lVar4 + 0x1f0) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      LOAcquire();
      lVar2 = *(long *)(lVar4 + 0x88);
      *(long *)(lVar4 + 0x88) = lVar2 + 1;
      lVar2 = func_0x000100fcaa8c(lVar4 + 0x80,lVar2);
      *(ulong *)(lVar2 + 0x6210) = *(ulong *)(lVar2 + 0x6210) | 0x200000000;
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
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(plVar5);
    }
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (unaff_x19 + 0x100);
  lVar2 = **(long **)(unaff_x19 + 0x100);
  **(long **)(unaff_x19 + 0x100) = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x19 + 0x100);
  }
  *unaff_x24 = in_stack_00000220;
  uVar6 = *(undefined8 *)(unaff_x29 + -0x100);
  uVar8 = *(undefined8 *)(unaff_x29 + -0xe8);
  uVar7 = *(undefined8 *)(unaff_x29 + -0xf0);
  *(undefined8 *)(unaff_x24 + 5) = *(undefined8 *)(unaff_x29 + -0xf8);
  *(undefined8 *)(unaff_x24 + 1) = uVar6;
  *(undefined8 *)(unaff_x24 + 0xd) = uVar8;
  *(undefined8 *)(unaff_x24 + 9) = uVar7;
  uVar6 = *(undefined8 *)(unaff_x29 + -0xe0);
  *(undefined8 *)(unaff_x24 + 0x15) = *(undefined8 *)(unaff_x29 + -0xd8);
  *(undefined8 *)(unaff_x24 + 0x11) = uVar6;
  uVar6 = *(undefined8 *)(unaff_x26 + 0x2e);
  *(undefined8 *)(unaff_x24 + 0x1c) = *(undefined8 *)(unaff_x26 + 0x36);
  *(undefined8 *)(unaff_x24 + 0x18) = uVar6;
  *(undefined1 *)(unaff_x19 + 0x148) = 1;
  return;
}

