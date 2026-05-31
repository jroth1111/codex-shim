
void FUN_1004e5f14(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined8 in_stack_00000020;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000028);
  *unaff_x19 = unaff_x28;
  unaff_x19[1] = uVar1;
  if ((-0x7ffffffffffffffe < unaff_x27) && (unaff_x27 != 0)) {
    _free();
  }
  if ((-0x7ffffffffffffffe < unaff_x26) && (unaff_x26 != 0)) {
    _free(in_stack_00000020);
  }
  return;
}

