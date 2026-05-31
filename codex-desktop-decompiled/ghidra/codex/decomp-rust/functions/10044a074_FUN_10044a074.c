
/* WARNING: Removing unreachable block (ram,0x000100449fcc) */

void FUN_10044a074(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  long unaff_x22;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  ulong in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *in_stack_00000038 = 0x1d;
  in_stack_00000038[1] = uVar1;
  if (in_stack_00000048 != 0) {
    _free(in_stack_00000018);
  }
  if (unaff_x27 != 0) {
    _free(in_stack_00000028);
  }
  if (in_stack_00000040 != -0x8000000000000000) {
    if (in_stack_00000040 != 0) {
      _free();
    }
    if (*(long *)(unaff_x29 + -0xe0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd8));
    }
  }
  if (((in_stack_00000048 & 0x7fffffffffffffff) != 0) && ((unaff_x20 & 1) != 0)) {
    _free(in_stack_00000018);
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  return;
}

