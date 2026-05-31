
void FUN_100445c58(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  ulong unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000018;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x19 = 0x8000000000000006;
  unaff_x19[1] = uVar1;
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

