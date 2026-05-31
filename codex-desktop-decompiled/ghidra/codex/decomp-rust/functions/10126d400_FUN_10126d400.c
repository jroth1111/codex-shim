
/* WARNING: Removing unreachable block (ram,0x00010126d5c0) */
/* WARNING: Removing unreachable block (ram,0x00010126d854) */
/* WARNING: Removing unreachable block (ram,0x00010126d888) */
/* WARNING: Removing unreachable block (ram,0x00010126d63c) */
/* WARNING: Removing unreachable block (ram,0x00010126d64c) */
/* WARNING: Removing unreachable block (ram,0x00010126d654) */
/* WARNING: Removing unreachable block (ram,0x00010126d658) */

void FUN_10126d400(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000048;
  char in_stack_00000058;
  char in_stack_00000300;
  long in_stack_00000358;
  long in_stack_00000360;
  long in_stack_00000420;
  long in_stack_00000438;
  long in_stack_00000440;
  
  uVar2 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  if (in_stack_00000420 != -0x8000000000000000) {
    if ((in_stack_00000440 != 0) && (in_stack_00000440 * 9 != -0x11)) {
      _free(in_stack_00000438 + in_stack_00000440 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000420);
  }
  if (((unaff_w21 != 0) && (unaff_x20 != -0x7fffffffffffffff)) && (unaff_x20 != -0x8000000000000000)
     ) {
    if ((in_stack_00000360 != 0) && (in_stack_00000360 * 9 != -0x11)) {
      _free(in_stack_00000358 + in_stack_00000360 * -8 + -8);
    }
    func_0x000100cd7284(&stack0x00000340);
  }
  if (in_stack_00000300 != '\x16') {
    FUN_100e077ec(&stack0x00000300);
  }
  *in_stack_00000048 = 2;
  in_stack_00000048[1] = uVar2;
  if ((-0x7fffffffffffffff < unaff_x26) && (unaff_x26 != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d5c778(&stack0x000001d8);
  uVar1 = unaff_w24 ^ 1;
  if (unaff_x23 == -0x7ffffffffffffffe) {
    uVar1 = 1;
  }
  if ((((uVar1 & 1) == 0) && (-0x7fffffffffffffff < unaff_x23)) && (unaff_x23 != 0)) {
    _free(in_stack_00000030);
  }
  FUN_100d34830(unaff_x27 + 0x20);
  if (in_stack_00000058 != '\x16') {
    FUN_100e077ec(&stack0x00000058);
  }
  return;
}

