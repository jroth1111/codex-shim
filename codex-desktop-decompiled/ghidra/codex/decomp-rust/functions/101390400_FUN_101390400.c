
void FUN_101390400(void)

{
  ulong in_x10;
  long unaff_x27;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000078;
  ulong in_stack_00000080;
  long *in_stack_00000088;
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
  
  in_stack_000000a8 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  in_stack_000000a0 = -0x8000000000000000;
  if ((-0x7fffffffffffffff < in_stack_00000090) && (in_stack_00000090 != 0)) {
    _free(in_stack_00000068);
  }
  if ((-0x7fffffffffffffff < in_stack_00000078) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000050);
  }
  if ((-0x7fffffffffffffff < in_stack_00000098) && (in_stack_00000098 != 0)) {
    _free(in_stack_00000058);
  }
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100de8910(&stack0x00000148);
  if (in_stack_00000100 != unaff_x27) {
    FUN_100de6690(&stack0x00000100);
  }
  if (((long)in_stack_00000080 < 0) && ((in_stack_00000080 & 0xfffffffffffffffe) != unaff_x27 - 1U))
  {
    FUN_100de6690(in_stack_00000060);
  }
  if (in_stack_000000a0 == -0x8000000000000000) {
    *in_stack_00000088 = -0x7fffffffffffffff;
    in_stack_00000088[1] = in_stack_000000a8;
  }
  else {
    in_stack_00000088[5] = in_stack_000000c8;
    in_stack_00000088[4] = in_stack_000000c0;
    in_stack_00000088[7] = in_stack_000000d8;
    in_stack_00000088[6] = in_stack_000000d0;
    in_stack_00000088[9] = in_stack_000000e8;
    in_stack_00000088[8] = in_stack_000000e0;
    in_stack_00000088[0xb] = in_stack_000000f8;
    in_stack_00000088[10] = in_stack_000000f0;
    in_stack_00000088[1] = in_stack_000000a8;
    *in_stack_00000088 = in_stack_000000a0;
    in_stack_00000088[3] = in_stack_000000b8;
    in_stack_00000088[2] = in_stack_000000b0;
  }
  return;
}

