
void FUN_100724b18(undefined8 param_1)

{
  ulong *puVar1;
  undefined2 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  long *plVar6;
  undefined2 *unaff_x24;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  ulong in_xzr;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack0000000000000050;
  long lStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined2 in_stack_000001c0;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  
  *(char **)(unaff_x29 + -0x90) = s_fail_to_get_common_stream__108ac5676;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  lStack0000000000000058 = unaff_x29 + -0xa0;
  uStack0000000000000050 = 1;
  uStack0000000000000060 = 1;
  uStack0000000000000068 = param_1;
  FUN_1007263a0(&stack0x00000050);
  uVar2 = in_stack_000001c0;
  uVar9 = *(undefined8 *)(unaff_x28 + 10);
  uVar7 = *(undefined8 *)(unaff_x28 + 2);
  uVar12 = *(undefined8 *)(unaff_x28 + 0x1a);
  uVar11 = *(undefined8 *)(unaff_x28 + 0x12);
  uVar10 = *(undefined8 *)(unaff_x28 + 0x2a);
  uVar8 = *(undefined8 *)(unaff_x28 + 0x22);
  *(undefined8 *)(unaff_x26 + 0x36) = in_stack_000001f8;
  *(undefined8 *)(unaff_x26 + 0x2e) = in_stack_000001f0;
  if ((*(short *)(unaff_x19 + 0x100) != 0x1f) && ((*(byte *)(unaff_x19 + 0x141) & 1) != 0)) {
    FUN_100d66e74(unaff_x19 + 0x100);
  }
  *(undefined1 *)(unaff_x19 + 0x141) = 0;
  FUN_100e62894();
  lVar3 = **(long **)(unaff_x19 + 0xb0);
  **(long **)(unaff_x19 + 0xb0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
  }
  lVar3 = **(long **)(unaff_x19 + 0xc0);
  **(long **)(unaff_x19 + 0xc0) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
  }
  if ((*(long *)(unaff_x19 + 0x80) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x80) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x88));
  }
  if ((*(byte *)(unaff_x19 + 0x145) & 1) != 0) {
    lVar3 = **(long **)(unaff_x19 + 0xd0);
    **(long **)(unaff_x19 + 0xd0) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
    }
  }
  if ((((*(byte *)(unaff_x19 + 0x144) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x98) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x98) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xa0));
  }
  if ((*(byte *)(unaff_x19 + 0x143) & 1) != 0) {
    lVar3 = **(long **)(unaff_x19 + 0xe0);
    **(long **)(unaff_x19 + 0xe0) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E();
    }
  }
  if ((*(byte *)(unaff_x19 + 0x142) & 1) != 0) {
    plVar6 = (long *)(unaff_x19 + 0xf0);
    lVar5 = *plVar6;
    LOAcquire();
    lVar3 = *(long *)(lVar5 + 0x1f0);
    *(long *)(lVar5 + 0x1f0) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      LOAcquire();
      lVar3 = *(long *)(lVar5 + 0x88);
      *(long *)(lVar5 + 0x88) = lVar3 + 1;
      lVar3 = func_0x000100fcaa8c(lVar5 + 0x80,lVar3);
      *(ulong *)(lVar3 + 0x6210) = *(ulong *)(lVar3 + 0x6210) | 0x200000000;
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
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(plVar6);
    }
  }
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (unaff_x19 + 0xf8);
  lVar3 = **(long **)(unaff_x19 + 0xf8);
  **(long **)(unaff_x19 + 0xf8) = lVar3 + -1;
  LORelease();
  if (lVar3 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(unaff_x19 + 0xf8);
  }
  *unaff_x24 = uVar2;
  *(undefined8 *)(unaff_x24 + 5) = uVar9;
  *(undefined8 *)(unaff_x24 + 1) = uVar7;
  *(undefined8 *)(unaff_x24 + 0xd) = uVar12;
  *(undefined8 *)(unaff_x24 + 9) = uVar11;
  *(undefined8 *)(unaff_x24 + 0x15) = uVar10;
  *(undefined8 *)(unaff_x24 + 0x11) = uVar8;
  uVar7 = *(undefined8 *)(unaff_x26 + 0x2e);
  *(undefined8 *)(unaff_x24 + 0x1c) = *(undefined8 *)(unaff_x26 + 0x36);
  *(undefined8 *)(unaff_x24 + 0x18) = uVar7;
  *(undefined1 *)(unaff_x19 + 0x140) = 1;
  return;
}

