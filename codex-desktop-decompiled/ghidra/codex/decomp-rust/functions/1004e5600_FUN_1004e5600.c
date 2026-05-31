
void FUN_1004e5600(void)

{
  undefined8 uVar1;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000038);
  *in_stack_00000030 = 2;
  in_stack_00000030[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x27) && (unaff_x27 != 0)) {
    _free(in_stack_00000020);
  }
  if ((-0x7ffffffffffffffe < unaff_x26) && (unaff_x26 != 0)) {
    _free(in_stack_00000028);
  }
  return;
}

