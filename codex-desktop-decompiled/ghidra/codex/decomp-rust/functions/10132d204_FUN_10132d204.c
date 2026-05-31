
/* WARNING: Removing unreachable block (ram,0x00010132d464) */
/* WARNING: Removing unreachable block (ram,0x00010132d470) */
/* WARNING: Removing unreachable block (ram,0x00010132d478) */
/* WARNING: Removing unreachable block (ram,0x00010132d408) */

void FUN_10132d204(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  char in_stack_00000050;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000170);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if (unaff_x21 != 0) {
    _free(in_stack_00000028);
  }
  if ((in_stack_00000048 != -0x7ffffffffffffffa) && (in_stack_00000048 != -0x7ffffffffffffffb)) {
    FUN_100de6690(&stack0x00000120);
  }
  FUN_100d34830(&stack0x00000070);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  if ((in_stack_00000038._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000000);
  }
  return;
}

