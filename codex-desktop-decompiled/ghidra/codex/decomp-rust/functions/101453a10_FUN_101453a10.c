
/* WARNING: Removing unreachable block (ram,0x00010145365c) */
/* WARNING: Removing unreachable block (ram,0x0001014536ac) */
/* WARNING: Removing unreachable block (ram,0x0001014536dc) */
/* WARNING: Removing unreachable block (ram,0x000101453674) */
/* WARNING: Removing unreachable block (ram,0x0001014536a4) */
/* WARNING: Removing unreachable block (ram,0x0001014536e0) */

void FUN_101453a10(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined1 *in_stack_00000000;
  char cStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xc0);
  FUN_100d03040(&stack0x000000e8);
  FUN_100d34830(&stack0x00000090);
  if (cStack0000000000000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  *(undefined8 *)(in_stack_00000000 + 8) = uVar1;
  *in_stack_00000000 = 1;
  return;
}

