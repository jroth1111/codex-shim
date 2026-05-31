
/* WARNING: Removing unreachable block (ram,0x000101c4622c) */
/* WARNING: Removing unreachable block (ram,0x000101c46238) */
/* WARNING: Removing unreachable block (ram,0x000101c46240) */
/* WARNING: Removing unreachable block (ram,0x000101c461f4) */

void FUN_101c4626c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x23;
  long unaff_x29;
  long in_stack_00000058;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x100);
  *unaff_x19 = 0x12;
  unaff_x19[1] = uVar1;
  if (unaff_x23 != 0) {
    _free();
  }
  if (-0x7fffffffffffffff < in_stack_00000058) {
    FUN_10203d530(&stack0x000001b0);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  return;
}

