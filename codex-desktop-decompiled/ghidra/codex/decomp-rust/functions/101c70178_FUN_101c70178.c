
/* WARNING: Removing unreachable block (ram,0x000101c700e4) */

void FUN_101c70178(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_w19;
  uint unaff_w27;
  long unaff_x28;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000048;
  char in_stack_00000050;
  long in_stack_00000190;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,&stack0x00000300);
  *in_stack_00000008 = 0x11;
  in_stack_00000008[1] = uVar2;
  if (unaff_x28 != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000190 != 0x11) {
    FUN_102036bf0(&stack0x00000190);
  }
  uVar1 = 0;
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    uVar1 = unaff_w19;
  }
  if ((uVar1 & 1) != 0) {
    _free(in_stack_00000030);
  }
  FUN_102033488(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_1020378e0(&stack0x00000050);
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

