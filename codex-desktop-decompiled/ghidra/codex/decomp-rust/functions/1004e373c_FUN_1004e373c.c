
void FUN_1004e373c(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x22;
  ulong unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000c0;
  
  lVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x70);
  *unaff_x19 = unaff_x22;
  unaff_x19[1] = lVar1;
  if ((unaff_x24 != 0x8000000000000001) && ((unaff_x24 & 0x7fffffffffffffff) != 0)) {
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

