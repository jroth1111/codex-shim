
void FUN_1007e4e48(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  char in_stack_00000050;
  long in_stack_000000f0;
  undefined8 in_stack_000000f8;
  long in_stack_00000108;
  undefined8 in_stack_00000110;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000001a8);
  *unaff_x20 = 3;
  unaff_x20[1] = uVar1;
  if ((in_stack_00000040 != 4) && (in_stack_00000040 != 3)) {
    if ((in_stack_000000f0 != -0x8000000000000000) && (in_stack_000000f0 != 0)) {
      _free(in_stack_000000f8);
    }
    if ((in_stack_00000108 != -0x8000000000000000) && (in_stack_00000108 != 0)) {
      _free(in_stack_00000110);
    }
    if ((-0x7fffffffffffffff < in_stack_00000120) && (in_stack_00000120 != 0)) {
      _free(in_stack_00000128);
    }
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((in_stack_00000028._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000030);
  }
  return;
}

