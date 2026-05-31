
/* WARNING: Removing unreachable block (ram,0x0001004383e8) */
/* WARNING: Removing unreachable block (ram,0x0001004383f0) */

void FUN_10043844c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x23;
  long unaff_x25;
  long unaff_x29;
  long in_stack_00000038;
  char in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  *unaff_x19 = 0x1d;
  unaff_x19[1] = uVar1;
  if (unaff_x25 != 0) {
    _free();
  }
  if (in_stack_00000038 != -0x8000000000000000) {
    if (in_stack_00000038 != 0) {
      _free();
    }
    if (*(long *)(unaff_x29 + -0xe0) != 0) {
      _free(*(undefined8 *)(unaff_x29 + -0xd8));
    }
  }
  FUN_100d34830(unaff_x23 + 0x20);
  if (in_stack_00000040 != '\x16') {
    FUN_100e077ec(&stack0x00000040);
  }
  return;
}

