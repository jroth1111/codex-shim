
void FUN_10142b848(void)

{
  undefined8 *puVar1;
  long unaff_x23;
  long unaff_x28;
  undefined8 in_stack_00000010;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  char in_stack_00000080;
  
  in_stack_00000058 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000050);
  in_stack_00000050 = -0x7fffffffffffffff;
  if (-0x7fffffffffffffff < in_stack_00000048) {
    if (unaff_x28 != 0) {
      puVar1 = (undefined8 *)(unaff_x23 + 8);
      do {
        if ((puVar1[-1] & 0x7fffffffffffffff) != 0) {
          _free(*puVar1);
        }
        puVar1 = puVar1 + 3;
        unaff_x28 = unaff_x28 + -1;
      } while (unaff_x28 != 0);
    }
    if (in_stack_00000048 != 0) {
      _free();
    }
  }
  FUN_100d34830(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000030);
  }
  if (in_stack_00000050 == -0x7fffffffffffffff) {
    *in_stack_00000028 = -0x7ffffffffffffffe;
    in_stack_00000028[1] = in_stack_00000058;
  }
  else {
    in_stack_00000028[1] = in_stack_00000058;
    *in_stack_00000028 = in_stack_00000050;
    in_stack_00000028[3] = in_stack_00000068;
    in_stack_00000028[2] = in_stack_00000060;
    in_stack_00000028[5] = in_stack_00000078;
    in_stack_00000028[4] = in_stack_00000070;
  }
  return;
}

