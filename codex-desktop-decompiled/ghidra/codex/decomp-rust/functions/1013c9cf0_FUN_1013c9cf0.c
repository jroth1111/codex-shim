
/* WARNING: Removing unreachable block (ram,0x0001013c6394) */

void FUN_1013c9cf0(void)

{
  undefined8 uVar1;
  long unaff_x23;
  undefined8 *unaff_x26;
  undefined8 in_stack_000000f8;
  char in_stack_00000310;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000120);
  if (unaff_x23 != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000330);
  if (in_stack_00000310 != '\x16') {
    FUN_100e077ec(&stack0x00000310);
  }
  if ((in_stack_000000f8._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x00000100);
  }
  *unaff_x26 = 0x800000000000000b;
  unaff_x26[1] = uVar1;
  return;
}

