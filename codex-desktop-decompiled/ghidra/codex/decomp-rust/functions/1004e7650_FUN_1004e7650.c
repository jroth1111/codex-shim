
void FUN_1004e7650(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 in_stack_00000008;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000030);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if ((unaff_x23 & 0xfffffffffffffffe) != 0x8000000000000002) {
    FUN_100cd2d8c(&stack0x000000e0);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000008);
  }
  return;
}

