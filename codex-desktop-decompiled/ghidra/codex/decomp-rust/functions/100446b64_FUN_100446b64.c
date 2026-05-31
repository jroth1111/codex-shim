
/* WARNING: Removing unreachable block (ram,0x000100446ee4) */
/* WARNING: Removing unreachable block (ram,0x000100446eec) */

void FUN_100446b64(void)

{
  undefined8 uVar1;
  ulong unaff_x19;
  long unaff_x21;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  char in_stack_00000050;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
  *unaff_x27 = 0x8000000000000006;
  unaff_x27[1] = uVar1;
  if (unaff_x26 != 0) {
    _free();
  }
  if (unaff_x25 != 0) {
    _free();
  }
  if (((unaff_x26 & 0x7fffffffffffffff) != 0) && ((unaff_x19 & 1) != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x21 + 0x20);
  if (in_stack_00000050 != '\x16') {
    FUN_100e077ec(&stack0x00000050);
  }
  return;
}

