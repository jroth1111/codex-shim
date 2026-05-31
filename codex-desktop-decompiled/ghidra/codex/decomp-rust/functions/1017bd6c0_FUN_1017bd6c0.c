
void FUN_1017bd6c0(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  
  uVar1 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000090);
  FUN_1017a4824(unaff_x19 + 0x48);
  if (in_stack_00000020 != -0x7ffffffffffffffb) {
    FUN_1017a4698(&stack0x00000020);
  }
  if (((long)in_stack_00000018 < 0) &&
     ((in_stack_00000018 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_1017a4698(in_stack_00000010);
  }
  *in_stack_00000008 = 2;
  in_stack_00000008[1] = uVar1;
  return;
}

