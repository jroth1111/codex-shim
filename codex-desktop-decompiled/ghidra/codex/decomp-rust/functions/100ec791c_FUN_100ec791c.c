
/* WARNING: Removing unreachable block (ram,0x000100ec7b94) */

void FUN_100ec791c(void)

{
  undefined8 uVar1;
  ulong unaff_x24;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000060;
  ulong in_stack_00000070;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x70);
  *in_stack_00000060 = 2;
  in_stack_00000060[1] = uVar1;
  if (unaff_x26 != 0) {
    _free(in_stack_00000058);
  }
  if ((unaff_x24 != 0x8000000000000001) && ((unaff_x24 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000050);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((in_stack_00000070 != 0x8000000000000001) && ((in_stack_00000070 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000040);
  }
  return;
}

