
void FUN_10027ab1c(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined2 *unaff_x22;
  undefined8 uVar2;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  ulong in_stack_00000148;
  undefined4 uStack0000000000000168;
  undefined2 uStack000000000000016c;
  char *pcStack0000000000000170;
  long lStack0000000000000178;
  undefined1 *puStack00000000000001b0;
  undefined *puStack00000000000001b8;
  
  lStack0000000000000178 = unaff_x29 + -0xe0;
  pcStack0000000000000170 = s_tcp_set_nodelay_error__108ab90af;
  puStack00000000000001b0 = (undefined1 *)&stack0x00000170;
  puStack00000000000001b8 = &UNK_10b1f3630;
  *(undefined8 *)(unaff_x29 + -0xa0) = 1;
  *(undefined1 ***)(unaff_x29 + -0x98) = &stack0x000001b0;
  *(undefined8 *)(unaff_x29 + -0x90) = 1;
  *(undefined8 *)(unaff_x29 + -0x88) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((in_stack_00000148 & 3) == 1) {
    uVar2 = *(undefined8 *)(in_stack_00000148 - 1);
    unaff_x20 = *(undefined8 **)(in_stack_00000148 + 7);
    if ((code *)*unaff_x20 != (code *)0x0) {
      (*(code *)*unaff_x20)(uVar2);
    }
    if (unaff_x20[1] != 0) {
      _free(uVar2);
    }
    _free((undefined8 *)(in_stack_00000148 - 1));
  }
  *(undefined1 *)(unaff_x19 + 0x123) = 0;
  FUN_1002bd1ac(unaff_x19 + 0xc0);
  *unaff_x22 = 3;
  *(undefined4 *)(unaff_x22 + 1) = uStack0000000000000168;
  unaff_x22[3] = uStack000000000000016c;
  *(undefined8 *)(unaff_x22 + 4) = in_stack_00000120;
  *(undefined8 *)(unaff_x22 + 8) = in_stack_00000128;
  *(undefined8 *)(unaff_x22 + 0xc) = in_stack_00000130;
  *(undefined8 *)(unaff_x22 + 0x10) = in_stack_00000138;
  *(undefined8 *)(unaff_x22 + 0x14) = unaff_x26;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x25;
  *(undefined8 **)(unaff_x22 + 0x1c) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0x122) = 1;
  lVar1 = **(long **)(unaff_x19 + 0x58);
  **(long **)(unaff_x19 + 0x58) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc80b7741cc3d4002E();
  }
  *(undefined1 *)(unaff_x19 + 0xdb0) = 1;
  return;
}

