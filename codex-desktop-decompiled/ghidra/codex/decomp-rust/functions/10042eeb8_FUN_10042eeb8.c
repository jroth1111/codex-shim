
/* WARNING: Removing unreachable block (ram,0x00010042f140) */
/* WARNING: Removing unreachable block (ram,0x00010042f148) */

void FUN_10042eeb8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000018;
  char in_stack_00000030;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xf0);
  *unaff_x19 = 0x1d;
  unaff_x19[1] = uVar1;
  if (unaff_x25 != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x21 != -0x7fffffffffffffff) && (unaff_x21 != -0x8000000000000000)) {
    if (unaff_x21 != 0) {
      _free();
    }
    if (in_stack_000001b0 != 0) {
      _free(in_stack_000001b8);
    }
  }
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

