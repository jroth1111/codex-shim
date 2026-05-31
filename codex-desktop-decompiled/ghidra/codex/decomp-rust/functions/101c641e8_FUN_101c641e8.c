
/* WARNING: Removing unreachable block (ram,0x000101c64278) */
/* WARNING: Removing unreachable block (ram,0x000101c64284) */
/* WARNING: Removing unreachable block (ram,0x000101c64300) */

void FUN_101c641e8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  ulong unaff_x23;
  undefined8 *unaff_x25;
  uint unaff_w26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000078;
  ulong in_stack_00000080;
  char in_stack_00000090;
  
  uVar1 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x25 = unaff_x20;
  unaff_x25[1] = uVar1;
  if ((in_stack_00000078 != -0x8000000000000000) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  FUN_102033488(&stack0x000000b0);
  if (in_stack_00000090 != '\x16') {
    FUN_1020378e0(&stack0x00000090);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_1020378e0();
  }
  return;
}

