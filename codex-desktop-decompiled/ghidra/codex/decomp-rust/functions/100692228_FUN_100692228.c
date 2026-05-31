
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100692228(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  undefined1 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  char *unaff_x25;
  undefined1 auVar9 [16];
  undefined1 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  char *pcStack0000000000000168;
  undefined1 *puStack0000000000000170;
  
  puStack0000000000000170 = &stack0x00000240;
  pcStack0000000000000168 = s_waiting_for_task_s__to_finish_108ad33e4;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000400);
  if ((*unaff_x25 == '\0') && (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar8 = *unaff_x20;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000320);
    if (iVar4 != 0) {
      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                (uVar8,puVar2,puVar1,&stack0x00000320,&stack0x00000400);
    }
  }
  *(long *)(unaff_x19 + 0x150) = unaff_x19 + 0x130;
  *(undefined1 *)(unaff_x19 + 0x1a8) = 0;
  uVar5 = FUN_100fd434c(unaff_x19 + 0x150,in_stack_00000070);
  if ((uVar5 & 1) == 0) {
    if ((*(char *)(unaff_x19 + 0x1a8) == '\x03') && (*(char *)(unaff_x19 + 0x161) == '\x04')) {
      FUN_1060fb5d4(&stack0x00000400);
      if (*(long *)(unaff_x19 + 0x188) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x188) + 0x18))(*(undefined8 *)(unaff_x19 + 400));
      }
      *(undefined1 *)(unaff_x19 + 0x160) = 0;
    }
    *(undefined1 *)(unaff_x19 + 0x149) = 0;
    lVar6 = *(long *)(unaff_x19 + 0x130);
    LOAcquire();
    lVar3 = *(long *)(lVar6 + 0x148);
    *(long *)(lVar6 + 0x148) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      *(ulong *)(lVar6 + 0x138) = *(ulong *)(lVar6 + 0x138) | 1;
      LORelease();
      __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar6 + 0x10);
    }
    lVar3 = **(long **)(unaff_x19 + 0x130);
    **(long **)(unaff_x19 + 0x130) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(unaff_x19 + 0x130);
    }
    *(undefined1 *)(unaff_x19 + 0x14d) = 0;
    lVar6 = *(long *)(unaff_x19 + 0x128);
    LOAcquire();
    lVar3 = *(long *)(lVar6 + 0x148);
    *(long *)(lVar6 + 0x148) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      *(ulong *)(lVar6 + 0x138) = *(ulong *)(lVar6 + 0x138) | 1;
      LORelease();
      __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE(lVar6 + 0x10);
    }
    lVar3 = **(long **)(unaff_x19 + 0x128);
    **(long **)(unaff_x19 + 0x128) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h55ac392a03c3ae0cE(unaff_x19 + 0x128);
    }
    *(undefined1 *)(unaff_x19 + 0x14e) = 0;
    lVar3 = **(long **)(unaff_x19 + 0x120);
    **(long **)(unaff_x19 + 0x120) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h61476cd51be4393bE(unaff_x19 + 0x120);
    }
    *(undefined1 *)(unaff_x19 + 0x14a) = 0;
    uVar7 = 1;
    *(undefined1 *)(unaff_x19 + 0x148) = 1;
    FUN_100df87ec(in_stack_00000078);
    uVar5 = 0;
  }
  else {
    *in_stack_00000068 = 5;
    uVar7 = 3;
    uVar5 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x2d8) = uVar7;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar5;
  return auVar9;
}

