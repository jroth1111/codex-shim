
/* WARNING: Removing unreachable block (ram,0x00010141be5c) */

void FUN_10141c0b4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  if ((-0x7fffffffffffffff < unaff_x28) && (unaff_x28 != 0)) {
    _free(in_stack_00000010);
  }
  FUN_100d34830(&stack0x00000060);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000030);
  }
  *unaff_x20 = 0x8000000000000002;
  unaff_x20[1] = uVar1;
  return;
}

