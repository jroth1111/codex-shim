
void FUN_101c2da48(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  ulong unaff_x26;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  uVar2 = FUN_1088dc508(s_duplicate_field_____108ac2973,unaff_x29 + -0x90);
  *in_stack_00000020 = 0x11;
  in_stack_00000020[1] = uVar2;
  if (in_stack_00000068 != -0x8000000000000000) {
    lVar3 = unaff_x22 + 1;
    lVar1 = in_stack_00000048;
    while (lVar3 = lVar3 + -1, lVar3 != 0) {
      func_0x00010203527c(lVar1);
      lVar1 = lVar1 + 0x48;
    }
    if (in_stack_00000068 != 0) {
      _free(in_stack_00000048);
    }
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  if ((in_stack_00000058 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((in_stack_00000060 != 0x8000000000000001) && ((in_stack_00000060 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000028);
  }
  FUN_102033488(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_1020378e0(&stack0x00000070);
  }
  return;
}

