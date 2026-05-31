
/* WARNING: Removing unreachable block (ram,0x000101251144) */

void FUN_1012511c8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x24;
  long unaff_x25;
  uint unaff_w26;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  char in_stack_00000090;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if (unaff_x24 != 0) {
    _free();
  }
  if (((in_stack_00000078 != -0x7ffffffffffffffe) && (-0x7fffffffffffffff < in_stack_00000078)) &&
     (in_stack_00000078 != 0)) {
    _free(in_stack_00000048);
  }
  if ((-0x7fffffffffffffff < in_stack_00000088) && (in_stack_00000088 != 0)) {
    _free(in_stack_00000040);
  }
  if ((-0x7ffffffffffffffe < in_stack_00000080) && (in_stack_00000080 != 0)) {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (in_stack_00000090 != '\x16') {
    FUN_100e077ec(&stack0x00000090);
  }
  if ((unaff_w26 & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000050);
  }
  return;
}

