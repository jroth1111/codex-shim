
/* WARNING: Removing unreachable block (ram,0x000100acf43c) */

void FUN_100aced00(void)

{
  undefined8 uVar1;
  ulong unaff_x20;
  long unaff_x22;
  ulong unaff_x24;
  uint unaff_w27;
  undefined8 *in_stack_00000070;
  char in_stack_00000150;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000100);
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  if ((unaff_x20 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000150 != '\x16') {
    FUN_100e077ec(&stack0x00000150);
  }
  if ((unaff_w27 & 0x1e) != 0x14) {
    FUN_100e077ec(&stack0x000000e0);
  }
  in_stack_00000070[1] = uVar1;
  *in_stack_00000070 = 0x800000000000000f;
  return;
}

