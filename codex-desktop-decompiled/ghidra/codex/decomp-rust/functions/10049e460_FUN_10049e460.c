
void FUN_10049e460(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  long unaff_x27;
  undefined8 *unaff_x28;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000002c8);
  *unaff_x28 = 0x800000000000006e;
  unaff_x28[1] = uVar1;
  if (unaff_x27 != 2) {
    FUN_100e6db70(&stack0x00000240);
  }
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x19 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

