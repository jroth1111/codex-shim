
void FUN_10071762c(void)

{
  byte bVar1;
  long lVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x28;
  long unaff_x29;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *in_stack_00000008;
  long in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  long in_stack_00000248;
  long in_stack_00000250;
  long in_stack_00000258;
  long in_stack_00000260;
  short in_stack_00000290;
  ulong in_stack_00000298;
  long in_stack_00000368;
  long in_stack_00000370;
  long in_stack_00000378;
  long in_stack_00000380;
  long in_stack_000003a8;
  long in_stack_000003b0;
  
  *(char **)(unaff_x29 + -0x80) = s_8failed_to_receive_local_addr_of_108ac7519;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x70;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_00000290 == 2) && ((in_stack_00000298 & 3) == 1)) {
    uVar6 = *(undefined8 *)(in_stack_00000298 - 1);
    puVar7 = *(undefined8 **)(in_stack_00000298 + 7);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar7[1] != 0) {
      _free(uVar6);
    }
    _free((undefined8 *)(in_stack_00000298 - 1));
  }
  FUN_1016e91f0(&stack0x00000250,&stack0x00000550);
  lVar5 = *(long *)(unaff_x19 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x148);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x160);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x158);
  *(undefined8 *)(unaff_x28 + 0x60) = *(undefined8 *)(unaff_x19 + 0x150);
  *(undefined8 *)(unaff_x28 + 0x58) = uVar6;
  *(undefined8 *)(unaff_x28 + 0x70) = uVar11;
  *(undefined8 *)(unaff_x28 + 0x68) = uVar9;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x168);
  *(undefined8 *)(unaff_x28 + 0x80) = *(undefined8 *)(unaff_x19 + 0x170);
  *(undefined8 *)(unaff_x28 + 0x78) = uVar6;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x128);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x138);
  *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)(unaff_x19 + 0x130);
  *(undefined8 *)(unaff_x28 + 0x38) = uVar6;
  *(undefined8 *)(unaff_x28 + 0x50) = uVar11;
  *(undefined8 *)(unaff_x28 + 0x48) = uVar9;
  *(undefined2 *)(unaff_x19 + 0x182) = 0;
  bVar1 = *(byte *)(unaff_x19 + 0x310);
  if (((bVar1 != 0x20) && (5 < bVar1 - 0x1a)) && (0x18 < bVar1)) {
    lVar2 = **(long **)(unaff_x19 + 0x318);
    **(long **)(unaff_x19 + 0x318) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x318);
    }
  }
  if ((*(byte *)(unaff_x19 + 0x328) != 0x1a) && (0x18 < *(byte *)(unaff_x19 + 0x328))) {
    lVar2 = **(long **)(unaff_x19 + 0x330);
    **(long **)(unaff_x19 + 0x330) = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(unaff_x19 + 0x330);
    }
  }
  *(undefined2 *)(unaff_x19 + 0x181) = 0;
  lVar8 = *(long *)(unaff_x28 + 0xf0);
  lVar2 = *(long *)(unaff_x28 + 0xe8);
  lVar12 = *(long *)(unaff_x28 + 0x100);
  lVar10 = *(long *)(unaff_x28 + 0xf8);
  *in_stack_00000008 = 1;
  if (in_stack_00000230 == 3) {
    uVar3 = 3;
    *unaff_x20 = 3;
  }
  else {
    FUN_100d92020();
    unaff_x20[0xc] = lVar8;
    unaff_x20[0xb] = lVar2;
    unaff_x20[0xe] = lVar12;
    unaff_x20[0xd] = lVar10;
    unaff_x20[0x10] = in_stack_000003b0;
    unaff_x20[0xf] = in_stack_000003a8;
    unaff_x20[4] = in_stack_00000250;
    unaff_x20[3] = in_stack_00000248;
    unaff_x20[6] = in_stack_00000260;
    unaff_x20[5] = in_stack_00000258;
    unaff_x20[8] = in_stack_00000370;
    unaff_x20[7] = in_stack_00000368;
    *(undefined1 *)(unaff_x19 + 0xb9) = 0;
    *unaff_x20 = in_stack_00000230;
    unaff_x20[1] = in_stack_00000238;
    unaff_x20[2] = in_stack_00000240;
    unaff_x20[0x11] = lVar5;
    uVar3 = 1;
    unaff_x20[10] = in_stack_00000380;
    unaff_x20[9] = in_stack_00000378;
  }
  *(undefined1 *)(unaff_x19 + 0xb8) = uVar3;
  return;
}

