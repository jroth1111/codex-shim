
/* WARNING: Removing unreachable block (ram,0x00010134e7f4) */

void FUN_10134e978(void)

{
  long lVar1;
  long unaff_x21;
  long unaff_x24;
  ulong unaff_x28;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  
  lVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  FUN_100de8910(unaff_x24 + 0x48);
  if (in_stack_00000040 != unaff_x21) {
    FUN_100de6690(&stack0x00000040);
  }
  if (((long)in_stack_00000018 < 0) && ((in_stack_00000018 & 0xfffffffffffffffe) != unaff_x21 - 1U))
  {
    FUN_100de6690(in_stack_00000010);
  }
  *in_stack_00000020 = unaff_x21 + -3;
  in_stack_00000020[1] = lVar1;
  return;
}

