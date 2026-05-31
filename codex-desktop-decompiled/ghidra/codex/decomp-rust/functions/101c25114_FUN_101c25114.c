
/* WARNING: Removing unreachable block (ram,0x000101c25228) */

void FUN_101c25114(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x22;
  uint unaff_w24;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  char in_stack_00000060;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x19 = 0x12;
  unaff_x19[1] = uVar2;
  if (unaff_x22 != 0) {
    _free(in_stack_00000048);
  }
  if ((-0x7fffffffffffffff < in_stack_00000050) && (in_stack_00000050 != 0)) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x28 != 0x8000000000000001) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  uVar1 = 0;
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w24;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000040);
  }
  FUN_102033488(&stack0x00000080);
  if (in_stack_00000060 != '\x16') {
    FUN_1020378e0(&stack0x00000060);
  }
  return;
}

