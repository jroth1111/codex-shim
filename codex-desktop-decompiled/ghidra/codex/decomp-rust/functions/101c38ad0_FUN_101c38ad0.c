
void FUN_101c38ad0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong unaff_x19;
  ulong unaff_x25;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  char in_stack_00000030;
  ulong in_stack_00000090;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x000000a8);
  *in_stack_00000010 = 0x8000000000000007;
  in_stack_00000010[1] = uVar1;
  uVar2 = unaff_x25 ^ 0x8000000000000000;
  if (-1 < (long)unaff_x25) {
    uVar2 = 5;
  }
  if (uVar2 < 5) {
    in_stack_00000000 = in_stack_00000028;
    if (uVar2 != 2) goto LAB_101c38828;
  }
  else {
    unaff_x19 = in_stack_00000090;
    if (unaff_x25 != 0) {
      _free(in_stack_00000020);
      unaff_x19 = in_stack_00000090;
    }
  }
  if ((unaff_x19 & 0x7fffffffffffffff) != 0) {
    _free(*in_stack_00000000);
  }
LAB_101c38828:
  FUN_102033488(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_1020378e0(&stack0x00000030);
  }
  return;
}

