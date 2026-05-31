
/* WARNING: Removing unreachable block (ram,0x00010044fa90) */

void FUN_10044fb2c(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  char in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *in_stack_00000040 = 0x1d;
  in_stack_00000040[1] = uVar1;
  if (unaff_x21 != 0) {
    _free(in_stack_00000030);
  }
  if (unaff_x24 != 0) {
    _free(in_stack_00000038);
  }
  if ((unaff_x22 != -0x8000000000000000) && (unaff_x22 != 0)) {
    _free(in_stack_00000010);
  }
  if (((unaff_x21 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  return;
}

