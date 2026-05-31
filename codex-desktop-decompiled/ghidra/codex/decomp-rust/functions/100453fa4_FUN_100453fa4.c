
void FUN_100453fa4(void)

{
  undefined8 uVar1;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x27;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000388);
  *unaff_x27 = 0x800000000000006e;
  unaff_x27[1] = uVar1;
  if (unaff_x23 != -0x8000000000000000) {
    FUN_100e61518(&stack0x00000240);
  }
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x22 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

