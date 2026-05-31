
/* WARNING: Removing unreachable block (ram,0x000100acf974) */
/* WARNING: Removing unreachable block (ram,0x000100acf97c) */
/* WARNING: Removing unreachable block (ram,0x000100acf9c4) */

void FUN_100acf540(void)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 *unaff_x24;
  long unaff_x26;
  uint unaff_w27;
  undefined8 in_stack_00000038;
  ulong in_stack_00000070;
  char in_stack_00000150;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000100);
  if (unaff_x26 != 0) {
    _free();
  }
  if ((in_stack_00000070 != 0x8000000000000001) && ((in_stack_00000070 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000038);
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000150 != '\x16') {
    FUN_100e077ec(&stack0x00000150);
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x000000e0);
  }
  unaff_x24[1] = uVar1;
  *unaff_x24 = 0x800000000000000f;
  return;
}

