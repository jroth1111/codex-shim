
void FUN_100bc9968(void)

{
  undefined8 uVar1;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 *in_stack_000000f0;
  char in_stack_00000270;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000180);
  *in_stack_000000f0 = 0x12;
  in_stack_000000f0[1] = uVar1;
  if ((unaff_x22 != 5) && (unaff_x22 != 4)) {
    FUN_100e0c988(&stack0x00000130);
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000d0);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000d8);
  }
  FUN_100d34830(&stack0x00000290);
  if (in_stack_00000270 != '\x16') {
    FUN_100e077ec(&stack0x00000270);
  }
  return;
}

