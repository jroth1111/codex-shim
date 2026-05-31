
void FUN_101259824(void)

{
  long in_x10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  ulong unaff_x24;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_000001e0;
  
  in_stack_000000c8 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000c0);
  in_stack_000000c0 = -0x7fffffffffffffff;
  if ((-0x7fffffffffffffff < in_stack_00000090) && (in_stack_00000090 != 0)) {
    _free(in_stack_00000048);
  }
  if ((-0x7fffffffffffffff < in_stack_00000098) && (in_stack_00000098 != 0)) {
    _free(in_stack_00000058);
  }
  if ((-0x7fffffffffffffff < in_stack_000000b8) && (in_stack_000000b8 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < in_stack_000000b0) && (in_stack_000000b0 != 0)) {
    _free(in_stack_00000040);
  }
  if ((-0x7fffffffffffffff < in_stack_000000a0) && (in_stack_000000a0 != 0)) {
    _free(in_stack_00000078);
  }
  if ((-0x7fffffffffffffff < in_x10) && (in_x10 != 0)) {
    _free(in_stack_00000080);
  }
  FUN_100de8910(unaff_x22 + 0x48);
  if (in_stack_000001e0 != unaff_x19) {
    FUN_100de6690(&stack0x000001e0);
  }
  if (((long)unaff_x24 < 0) && ((unaff_x24 & 0xfffffffffffffffe) != unaff_x19 - 1U)) {
    FUN_100de6690(in_stack_000000a8);
  }
  if (in_stack_000000c0 == -0x7fffffffffffffff) {
    *unaff_x20 = unaff_x19 + -3;
    unaff_x20[1] = in_stack_000000c8;
  }
  else {
    unaff_x20[0xd] = in_stack_00000128;
    unaff_x20[0xc] = in_stack_00000120;
    unaff_x20[0xf] = in_stack_00000138;
    unaff_x20[0xe] = in_stack_00000130;
    unaff_x20[0x11] = in_stack_00000148;
    unaff_x20[0x10] = in_stack_00000140;
    unaff_x20[5] = in_stack_000000e8;
    unaff_x20[4] = in_stack_000000e0;
    unaff_x20[7] = in_stack_000000f8;
    unaff_x20[6] = in_stack_000000f0;
    unaff_x20[9] = in_stack_00000108;
    unaff_x20[8] = in_stack_00000100;
    unaff_x20[0xb] = in_stack_00000118;
    unaff_x20[10] = in_stack_00000110;
    unaff_x20[1] = in_stack_000000c8;
    *unaff_x20 = in_stack_000000c0;
    unaff_x20[3] = in_stack_000000d8;
    unaff_x20[2] = in_stack_000000d0;
  }
  return;
}

