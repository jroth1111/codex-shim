
/* WARNING: Removing unreachable block (ram,0x000101426f34) */

void FUN_101426ecc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  uint unaff_w23;
  undefined8 *unaff_x27;
  long unaff_x29;
  char in_stack_00000030;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
  FUN_100d34830(unaff_x20 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  if ((unaff_w23 & 0x1e) != 0x14) {
    FUN_100e077ec();
  }
  *unaff_x27 = 0x8000000000000001;
  unaff_x27[1] = uVar1;
  return;
}

