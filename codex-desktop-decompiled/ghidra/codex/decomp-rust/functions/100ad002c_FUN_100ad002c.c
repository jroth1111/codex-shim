
/* WARNING: Removing unreachable block (ram,0x000100acf43c) */

void FUN_100ad002c(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  long unaff_x24;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000078;
  char in_stack_00000150;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000100);
  if (unaff_x24 != 0) {
    _free(in_stack_00000060);
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000068);
  }
  FUN_100d34830(&stack0x00000170);
  if (in_stack_00000150 != '\x16') {
    FUN_100e077ec(&stack0x00000150);
  }
  if ((in_stack_00000078._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x000000e0);
  }
  in_stack_00000070[1] = uVar1;
  *in_stack_00000070 = 0x800000000000000f;
  return;
}

