
bool FUN_100893d18(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  long lStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  *(undefined1 **)(unaff_x29 + -0xe0) = &stack0x000003d8;
  *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b208fd0;
  lStack0000000000000008 = unaff_x29 + -0xe0;
  uStack0000000000000000 = 1;
  uStack0000000000000010 = 1;
  uStack0000000000000018 = param_1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  if ((*(byte *)(unaff_x19 + 0x1a9) & 1) != 0) {
    if (*(long *)(unaff_x19 + 0xc0) != unaff_x25) {
      FUN_100de6690();
    }
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xb0));
    }
  }
  *(undefined1 *)(unaff_x19 + 0x1a9) = 0;
  if ((*(long *)(unaff_x19 + 0x90) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x90) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x98));
  }
  *(undefined1 *)(unaff_x19 + 0x1a8) = 1;
  return unaff_x23 == unaff_x24;
}

