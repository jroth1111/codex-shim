
void FUN_1004e396c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x22;
  ulong unaff_x24;
  undefined8 in_stack_00000018;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000c0;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000020);
  *unaff_x19 = 0x8000000000000000;
  unaff_x19[1] = uVar1;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
    unaff_x22 = in_stack_000000a8;
  }
  if (unaff_x22 != -0x8000000000000000) {
    if (in_stack_000000c0 != -0x7ffffffffffffffb) {
      FUN_100de6690(&stack0x000000c0);
    }
    if (unaff_x22 != 0) {
      _free(in_stack_000000b0);
    }
  }
  return;
}

