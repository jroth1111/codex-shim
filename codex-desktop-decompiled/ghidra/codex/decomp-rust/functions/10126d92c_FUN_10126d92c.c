
/* WARNING: Removing unreachable block (ram,0x00010126d7c8) */
/* WARNING: Removing unreachable block (ram,0x00010126d5c0) */
/* WARNING: Removing unreachable block (ram,0x00010126d854) */
/* WARNING: Removing unreachable block (ram,0x00010126d888) */
/* WARNING: Removing unreachable block (ram,0x00010126d63c) */
/* WARNING: Removing unreachable block (ram,0x00010126d64c) */
/* WARNING: Removing unreachable block (ram,0x00010126d654) */
/* WARNING: Removing unreachable block (ram,0x00010126d658) */

void FUN_10126d92c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x27;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  char in_stack_00000058;
  char in_stack_00000300;
  long in_stack_00000358;
  long in_stack_00000360;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000420);
  if (in_stack_00000040 != 2) {
    func_0x000100e0dab4(&stack0x00000388);
  }
  if ((unaff_x20 != -0x7fffffffffffffff) && (unaff_x20 != -0x8000000000000000)) {
    if ((in_stack_00000360 != 0) && (in_stack_00000360 * 9 != -0x11)) {
      _free(in_stack_00000358 + in_stack_00000360 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000340);
  }
  if (in_stack_00000300 != '\x16') {
    FUN_100e077ec(&stack0x00000300);
  }
  *in_stack_00000048 = 2;
  in_stack_00000048[1] = uVar1;
  if ((-0x7fffffffffffffff < in_stack_00000028) && (in_stack_00000028 != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d5c778(&stack0x000001d8);
  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ ^ 1;
  if (in_stack_00000050 == -0x7ffffffffffffffe) {
    in_stack_00000020._4_4_ = 1;
  }
  if ((((in_stack_00000020._4_4_ & 1) == 0) && (-0x7fffffffffffffff < in_stack_00000050)) &&
     (in_stack_00000050 != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(unaff_x27 + 0x20);
  if (in_stack_00000058 != '\x16') {
    FUN_100e077ec(&stack0x00000058);
  }
  return;
}

