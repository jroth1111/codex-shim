
void FUN_1004e61c8(void)

{
  undefined8 uVar1;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000028);
  *in_stack_00000020 = 2;
  in_stack_00000020[1] = uVar1;
  if ((-0x7ffffffffffffffe < unaff_x25) && (unaff_x25 != 0)) {
    _free(in_stack_00000010);
  }
  if ((-0x7ffffffffffffffe < unaff_x24) && (unaff_x24 != 0)) {
    _free(in_stack_00000018);
  }
  return;
}

