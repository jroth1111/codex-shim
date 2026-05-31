
/* WARNING: Removing unreachable block (ram,0x000101426f34) */

void FUN_101426f88(void)

{
  undefined8 uVar1;
  long unaff_x26;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  if (unaff_x26 != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((in_stack_00000028._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  *in_stack_00000010 = 0x8000000000000001;
  in_stack_00000010[1] = uVar1;
  return;
}

