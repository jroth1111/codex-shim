
void FUN_100798f2c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  long unaff_x27;
  long in_stack_00000018;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  char in_stack_000000b0;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000050);
  *unaff_x20 = 0x8000000000000000;
  unaff_x20[1] = uVar1;
  if (1 < in_stack_00000048 + 0x7ffffffffffffffbU) {
    FUN_100de6690(&stack0x00000218);
  }
  if (1 < unaff_x22 + 0x7ffffffffffffffbU) {
    FUN_100de6690(&stack0x000001d0);
  }
  if (unaff_x27 != -0x8000000000000000) {
    in_stack_00000018 = in_stack_00000018 + 1;
    while (in_stack_00000018 = in_stack_00000018 + -1, in_stack_00000018 != 0) {
      FUN_100de6690();
    }
    if (unaff_x27 != 0) {
      _free();
    }
  }
  FUN_100d34830(&stack0x000000d0);
  if (in_stack_000000b0 != '\x16') {
    FUN_100e077ec(&stack0x000000b0);
  }
  if ((in_stack_00000040._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000038);
  }
  return;
}

