
void FUN_101c2f61c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x22;
  char in_stack_00000010;
  
  uVar1 = FUN_1088dc508(s_duplicate_field_____108ac2973,&stack0x00000080);
  *unaff_x19 = 0x8000000000000003;
  unaff_x19[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_102033488(&stack0x00000030);
  if (in_stack_00000010 != '\x16') {
    FUN_1020378e0(&stack0x00000010);
  }
  return;
}

