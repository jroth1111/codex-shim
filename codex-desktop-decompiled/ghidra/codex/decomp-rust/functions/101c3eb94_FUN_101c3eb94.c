
/* WARNING: Removing unreachable block (ram,0x000101c3eb48) */
/* WARNING: Removing unreachable block (ram,0x000101c3eb54) */
/* WARNING: Removing unreachable block (ram,0x000101c3eb5c) */
/* WARNING: Removing unreachable block (ram,0x000101c3eb20) */

void FUN_101c3eb94(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x23;
  long unaff_x24;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  char in_stack_00000060;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x19 = 0x8000000000000006;
  unaff_x19[1] = uVar1;
  if (unaff_x27 != 0) {
    _free(in_stack_00000048);
  }
  if ((unaff_x28 != 0x8000000000000001) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000030);
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  return;
}

