
undefined1  [16] FUN_100692174(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  undefined1 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  char *pcStack0000000000000168;
  undefined1 *puStack0000000000000170;
  
  puStack0000000000000170 = &stack0x00000240;
  pcStack0000000000000168 = s_waiting_for_task_s__to_finish_108ad33e4;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  *(long *)(unaff_x19 + 0x150) = unaff_x19 + 0x130;
  *(undefined1 *)(unaff_x19 + 0x1a8) = 0;
  uVar2 = FUN_100fd434c(unaff_x19 + 0x150,in_stack_00000070);
  if ((uVar2 & 1) == 0) {
    if ((*(char *)(unaff_x19 + 0x1a8) == '\x03') && (*(char *)(unaff_x19 + 0x161) == '\x04')) {
      FUN_1060fb5d4(&stack0x00000400);
      if (*(long *)(unaff_x19 + 0x188) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x188) + 0x18))(*(undefined8 *)(unaff_x19 + 400));
      }
      *(undefined1 *)(unaff_x19 + 0x160) = 0;
    }
    *(undefined1 *)(unaff_x19 + 0x149) = 0;
    lVar3 = *(long *)(unaff_x19 + 0x130);
    LOAcquire();
    lVar1 = *(long *)(lVar3 + 0x148);
    *(long *)(lVar3 + 0x148) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      *(ulong *)(lVar3 + 0x138) = *(ulong *)(lVar3 + 0x138) | 1;
      LORelease();
      __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar3 + 0x10);
    }
    lVar1 = **(long **)(unaff_x19 + 0x130);
    **(long **)(unaff_x19 + 0x130) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(unaff_x19 + 0x130);
    }
    *(undefined1 *)(unaff_x19 + 0x14d) = 0;
    lVar3 = *(long *)(unaff_x19 + 0x128);
    LOAcquire();
    lVar1 = *(long *)(lVar3 + 0x148);
    *(long *)(lVar3 + 0x148) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      *(ulong *)(lVar3 + 0x138) = *(ulong *)(lVar3 + 0x138) | 1;
      LORelease();
      __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar3 + 0x10);
    }
    lVar1 = **(long **)(unaff_x19 + 0x128);
    **(long **)(unaff_x19 + 0x128) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(unaff_x19 + 0x128);
    }
    *(undefined1 *)(unaff_x19 + 0x14e) = 0;
    lVar1 = **(long **)(unaff_x19 + 0x120);
    **(long **)(unaff_x19 + 0x120) = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h61476cd51be4393bE(unaff_x19 + 0x120);
    }
    *(undefined1 *)(unaff_x19 + 0x14a) = 0;
    uVar4 = 1;
    *(undefined1 *)(unaff_x19 + 0x148) = 1;
    FUN_100df87ec(in_stack_00000078);
    uVar2 = 0;
  }
  else {
    *in_stack_00000068 = 5;
    uVar4 = 3;
    uVar2 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x2d8) = uVar4;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  return auVar5;
}

