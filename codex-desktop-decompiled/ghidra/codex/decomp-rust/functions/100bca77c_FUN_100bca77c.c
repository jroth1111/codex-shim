
void FUN_100bca77c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  char in_stack_00000270;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000180);
  *unaff_x21 = 0x12;
  unaff_x21[1] = uVar1;
  if ((-0x7fffffffffffffff < in_stack_000000e8) && (in_stack_000000e8 != 0)) {
    _free(in_stack_000000b0);
  }
  if ((in_stack_000000d8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  if ((in_stack_000000e0 != 0x8000000000000001) && ((in_stack_000000e0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000a8);
  }
  if ((in_stack_000000d0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c0);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c8);
  }
  FUN_100d34830(&stack0x00000290);
  if (in_stack_00000270 != '\x16') {
    FUN_100e077ec(&stack0x00000270);
  }
  return;
}

