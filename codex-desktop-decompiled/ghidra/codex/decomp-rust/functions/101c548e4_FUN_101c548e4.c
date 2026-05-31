
/* WARNING: Removing unreachable block (ram,0x000101c5496c) */
/* WARNING: Removing unreachable block (ram,0x000101c54978) */

void FUN_101c548e4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  uint in_stack_00000050;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  char in_stack_00000080;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *in_stack_00000058 = unaff_x19;
  in_stack_00000058[1] = uVar1;
  if ((in_stack_00000068 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000070 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  FUN_102033488(&stack0x000000a0);
  if (in_stack_00000080 != '\x16') {
    FUN_1020378e0(&stack0x00000080);
  }
  if ((in_stack_00000050 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

