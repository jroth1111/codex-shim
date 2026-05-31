
void FUN_1004e8068(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000010);
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = uVar1;
  FUN_100de6690(&stack0x00000070);
  if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
    _free(in_stack_00000008);
  }
  return;
}

