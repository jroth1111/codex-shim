
/* WARNING: Removing unreachable block (ram,0x000100acf9c4) */

void FUN_100ad09ec(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x26;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  char in_stack_00000150;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000100);
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  FUN_100d34830(&stack0x00000170);
  if (in_stack_00000150 != '\x16') {
    FUN_100e077ec(&stack0x00000150);
  }
  if ((in_stack_00000078._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x000000e0);
  }
  unaff_x19[1] = uVar1;
  *unaff_x19 = 0x800000000000000f;
  return;
}

