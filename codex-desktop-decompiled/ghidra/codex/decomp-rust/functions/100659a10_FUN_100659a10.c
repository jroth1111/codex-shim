
void FUN_100659a10(void)

{
  undefined8 uVar1;
  long unaff_x23;
  long lVar2;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long in_stack_00000040;
  long in_stack_00000168;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000208);
  *unaff_x28 = 2;
  unaff_x28[1] = uVar1;
  lVar2 = 2;
  if ((unaff_x27 != -0x8000000000000000) && (unaff_x27 != 0)) {
    _free();
    lVar2 = in_stack_00000168;
  }
  if (lVar2 != 2) {
    FUN_100e4623c(&stack0x00000168);
  }
  FUN_100de8910(unaff_x23 + 0x48);
  if (in_stack_00000040 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00000040);
  }
  if (((long)unaff_x26 < 0) && ((unaff_x26 & 0xfffffffffffffffe) != 0x8000000000000004)) {
    FUN_100de6690();
  }
  return;
}

