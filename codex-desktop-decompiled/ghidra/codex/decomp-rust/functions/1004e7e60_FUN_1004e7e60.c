
void FUN_1004e7e60(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  ulong unaff_x22;
  undefined8 in_stack_00000008;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000010);
  *unaff_x20 = 0x8000000000000001;
  unaff_x20[1] = uVar1;
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000008);
  }
  return;
}

