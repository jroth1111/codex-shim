
void FUN_1007bda38(void)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char in_stack_00000030;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000d0);
  *in_stack_00000008 = 0x8000000000000001;
  in_stack_00000008[1] = uVar1;
  if (unaff_x21 != -0x8000000000000000) {
    FUN_100e4e914(&stack0x00000080);
    if (in_stack_00000098 != 0) {
      _free(in_stack_000000a0);
    }
    if (in_stack_000000b0 != 0) {
      _free(in_stack_000000b8);
    }
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000018._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000010);
  }
  return;
}

