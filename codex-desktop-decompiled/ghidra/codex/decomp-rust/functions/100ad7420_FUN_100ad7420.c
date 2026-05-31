
void FUN_100ad7420(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_000000e0;
  
  lVar1 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *unaff_x19 = unaff_x28 + 1;
  unaff_x19[1] = lVar1;
  if ((-0x7fffffffffffffff < in_stack_00000090) && (in_stack_00000090 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < in_stack_00000080) && (in_stack_00000080 != 0)) {
    _free(in_stack_00000068);
  }
  if ((-0x7fffffffffffffff < in_stack_00000088) && (in_stack_00000088 != 0)) {
    _free(in_stack_00000058);
  }
  FUN_100de8910(&stack0x00000128);
  if (in_stack_000000e0 != unaff_x28) {
    FUN_100de6690(&stack0x000000e0);
  }
  return;
}

