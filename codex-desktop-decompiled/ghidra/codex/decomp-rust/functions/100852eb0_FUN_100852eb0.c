
void FUN_100852eb0(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *unaff_x27;
  long unaff_x29;
  long in_stack_00000360;
  undefined8 in_stack_00000368;
  long *in_stack_00000378;
  
  *(char **)(unaff_x29 + -0x80) = s__MCP_server_progress_notificatio_108ac4df2;
  *(undefined1 **)(unaff_x29 + -0x78) = &stack0x000003a0;
  *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0x80;
  *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0xe0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 1;
  *(undefined8 *)(unaff_x29 + -0x98) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100e80dd4(&stack0x000000f0);
  if (in_stack_00000378 != (long *)0x0) {
    lVar1 = *in_stack_00000378;
    *in_stack_00000378 = lVar1 + -1;
    LORelease();
    if (lVar1 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE(&stack0x00000378);
    }
  }
  if ((in_stack_00000360 != -0x8000000000000000) && (in_stack_00000360 != 0)) {
    _free(in_stack_00000368);
  }
  *(undefined1 *)(unaff_x19 + 0x378) = 1;
  FUN_100d82518();
  func_0x000100dccb50(*(undefined8 *)(unaff_x20 + 0x1b0));
  *unaff_x21 = 0x8000000000000001;
  *unaff_x27 = 1;
  FUN_100dac274();
  *(undefined1 *)(unaff_x19 + 0x3d0) = 1;
  return;
}

