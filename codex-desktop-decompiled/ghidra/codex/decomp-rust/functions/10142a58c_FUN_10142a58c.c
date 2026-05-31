
/* WARNING: Removing unreachable block (ram,0x000101429c14) */

void FUN_10142a58c(void)

{
  undefined8 uVar1;
  long unaff_x24;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char in_stack_00000060;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000030);
  in_stack_00000030 = 0x8000000000000001;
  in_stack_00000038 = uVar1;
  if (-0x7fffffffffffffff < unaff_x24) {
    FUN_100e79780(unaff_x29 + -0xd0);
  }
  FUN_100d34830(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_100e077ec(&stack0x00000060);
  }
  if ((in_stack_00000020._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000010);
  }
  *in_stack_00000008 = 0x8000000000000002;
  in_stack_00000008[1] = uVar1;
  return;
}

