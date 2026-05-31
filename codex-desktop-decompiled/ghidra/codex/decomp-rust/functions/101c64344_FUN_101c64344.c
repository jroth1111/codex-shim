
/* WARNING: Removing unreachable block (ram,0x000101c64284) */

void FUN_101c64344(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint unaff_w19;
  undefined8 *unaff_x20;
  ulong unaff_x23;
  uint unaff_w26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000078;
  ulong in_stack_00000080;
  long in_stack_00000088;
  char in_stack_00000090;
  
  uVar2 = FUN_1088dc508(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar2;
  if (in_stack_00000088 != 0) {
    _free(in_stack_00000060);
  }
  if ((in_stack_00000078 != -0x8000000000000000) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000030);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) == 0) {
    uVar1 = 0;
    if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w19;
    }
  }
  else {
    _free(in_stack_00000050);
    uVar1 = 0;
    if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
      uVar1 = unaff_w19;
    }
  }
  if ((uVar1 & 1) != 0) {
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

