
void FUN_10132e408(void)

{
  long unaff_x19;
  ulong unaff_x23;
  ulong unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
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
  long in_stack_00000228;
  long in_stack_00000260;
  undefined8 in_stack_00000268;
  
  in_stack_00000058 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000050);
  in_stack_00000050 = 7;
  if (unaff_x19 != unaff_x28) {
    FUN_100de6690(unaff_x29 + -0xf8);
  }
  if ((in_stack_00000228 != 7) && (FUN_100e5d1e8(&stack0x00000228), in_stack_00000260 != 0)) {
    _free(in_stack_00000268);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100de8910(unaff_x27 + 0x48);
  if (in_stack_00000100 != unaff_x28) {
    FUN_100de6690(&stack0x00000100);
  }
  if (((long)unaff_x25 < 0) && ((unaff_x25 & 0xfffffffffffffffe) != unaff_x28 - 1U)) {
    FUN_100de6690();
  }
  if (in_stack_00000050 == 7) {
    *in_stack_00000048 = 8;
    in_stack_00000048[1] = in_stack_00000058;
  }
  else {
    in_stack_00000048[0x11] = in_stack_000000d8;
    in_stack_00000048[0x10] = in_stack_000000d0;
    in_stack_00000048[0x13] = in_stack_000000e8;
    in_stack_00000048[0x12] = in_stack_000000e0;
    in_stack_00000048[0x15] = in_stack_000000f8;
    in_stack_00000048[0x14] = in_stack_000000f0;
    in_stack_00000048[9] = in_stack_00000098;
    in_stack_00000048[8] = in_stack_00000090;
    in_stack_00000048[0xb] = in_stack_000000a8;
    in_stack_00000048[10] = in_stack_000000a0;
    in_stack_00000048[0xd] = in_stack_000000b8;
    in_stack_00000048[0xc] = in_stack_000000b0;
    in_stack_00000048[0xf] = in_stack_000000c8;
    in_stack_00000048[0xe] = in_stack_000000c0;
    in_stack_00000048[1] = in_stack_00000058;
    *in_stack_00000048 = in_stack_00000050;
    in_stack_00000048[3] = in_stack_00000068;
    in_stack_00000048[2] = in_stack_00000060;
    in_stack_00000048[5] = in_stack_00000078;
    in_stack_00000048[4] = in_stack_00000070;
    in_stack_00000048[7] = in_stack_00000088;
    in_stack_00000048[6] = in_stack_00000080;
  }
  return;
}

