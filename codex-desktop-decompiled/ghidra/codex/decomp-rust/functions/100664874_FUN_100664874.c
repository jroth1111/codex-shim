
void FUN_100664874(void)

{
  undefined8 uVar1;
  long unaff_x27;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000030;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000170);
  *in_stack_00000020 = 2;
  in_stack_00000020[1] = uVar1;
  if (in_stack_00000118 != 0) {
    _free(in_stack_00000120);
  }
  if (in_stack_00000130 != 0) {
    _free(in_stack_00000138);
  }
  FUN_100de8910(unaff_x27 + 0x48);
  if (in_stack_00000030 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000030);
  }
  if (((long)in_stack_00000018 < 0) &&
     ((in_stack_00000018 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690(in_stack_00000010);
  }
  return;
}

