
void FUN_100444a14(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000003e8);
  *unaff_x20 = 0x800000000000006e;
  unaff_x20[1] = uVar1;
  if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

