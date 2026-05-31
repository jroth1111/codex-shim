
void FUN_100bc42e8(void)

{
  undefined8 uVar1;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x25;
  undefined8 *unaff_x27;
  char in_stack_00000270;
  
  uVar1 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000180);
  *unaff_x27 = 0x12;
  unaff_x27[1] = uVar1;
  if (unaff_x22 != -0x8000000000000000) {
    FUN_100cb624c(&stack0x00000200);
  }
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x25 + 0x20);
  if (in_stack_00000270 != '\x16') {
    FUN_100e077ec(&stack0x00000270);
  }
  return;
}

