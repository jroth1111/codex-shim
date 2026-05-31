
/* WARNING: Removing unreachable block (ram,0x00010142015c) */

void FUN_1014203a0(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  char in_stack_00000060;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000048._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000028);
  }
  *in_stack_00000040 = 3;
  in_stack_00000040[1] = uVar1;
  return;
}

