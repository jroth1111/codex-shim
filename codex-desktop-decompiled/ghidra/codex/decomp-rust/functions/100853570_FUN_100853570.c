
void FUN_100853570(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  
  *(char **)(unaff_x29 + -0x80) = s_MCP_server_log_message__level____108ac4ed3;
  *(undefined1 **)(unaff_x29 + -0x78) = &stack0x00000350;
  *(long *)(unaff_x29 + -0x90) = unaff_x29 + -0x80;
  *(undefined **)(unaff_x29 + -0x88) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x90;
  *(undefined8 *)(unaff_x29 + -0xa0) = 1;
  *(undefined8 *)(unaff_x29 + -0x98) = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  FUN_100de6690(&stack0x000003a0);
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100e80dd4(&stack0x000000f0);
  *(undefined1 *)(unaff_x19 + 0x358) = 1;
  func_0x000100dccb50(*(undefined8 *)(unaff_x20 + 0x2d0));
  *unaff_x21 = 0x8000000000000001;
  *unaff_x27 = 1;
  FUN_100dac274();
  *(undefined1 *)(unaff_x19 + 0x3d0) = 1;
  return;
}

