
/* WARNING: Removing unreachable block (ram,0x0001013860bc) */
/* WARNING: Removing unreachable block (ram,0x0001013860c4) */

void FUN_101386000(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000058;
  char in_stack_00000070;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x90);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if (unaff_x27 != 0) {
    _free();
  }
  if ((unaff_x28 != 0x8000000000000001) && ((unaff_x28 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000058._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  return;
}

