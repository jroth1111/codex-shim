
void FUN_101436510(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  long unaff_x25;
  long unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  char in_stack_00000070;
  
  in_stack_00000048 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000040);
  in_stack_00000040 = -0x8000000000000000;
  if (unaff_x28 != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + 0x20);
    do {
      if (puVar1[-4] != 0) {
        _free(puVar1[-3]);
      }
      if (puVar1[-1] != 0) {
        _free(*puVar1);
      }
      puVar1 = puVar1 + 7;
      unaff_x28 = unaff_x28 + -1;
    } while (unaff_x28 != 0);
  }
  if (unaff_x25 != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000090);
  if (in_stack_00000070 != '\x16') {
    FUN_100e077ec(&stack0x00000070);
  }
  if ((in_stack_00000010._4_4_ & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000008);
  }
  if (in_stack_00000040 == -0x8000000000000000) {
    *in_stack_00000018 = -0x7fffffffffffffff;
    in_stack_00000018[1] = in_stack_00000048;
  }
  else {
    in_stack_00000018[1] = in_stack_00000048;
    *in_stack_00000018 = in_stack_00000040;
    in_stack_00000018[3] = in_stack_00000058;
    in_stack_00000018[2] = in_stack_00000050;
    in_stack_00000018[5] = in_stack_00000068;
    in_stack_00000018[4] = in_stack_00000060;
  }
  return;
}

