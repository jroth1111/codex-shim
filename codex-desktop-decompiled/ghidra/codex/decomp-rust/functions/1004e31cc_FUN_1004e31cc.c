
void FUN_1004e31cc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000040;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000058);
  *unaff_x19 = 0x8000000000000002;
  unaff_x19[1] = uVar1;
  if ((-0x7fffffffffffffff < unaff_x27) && (unaff_x27 != 0)) {
    _free(in_stack_00000020);
  }
  if ((-0x7ffffffffffffffe < unaff_x26) && (unaff_x26 != 0)) {
    _free(in_stack_00000040);
  }
  return;
}

