
void FUN_100435210(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
  *unaff_x28 = 0x800000000000006e;
  unaff_x28[1] = uVar1;
  if (unaff_x22 != -0x8000000000000000) {
    if (unaff_x25 != 0) {
      puVar2 = (undefined8 *)(unaff_x21 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x25 = unaff_x25 + -1;
      } while (unaff_x25 != 0);
    }
    if (unaff_x22 != 0) {
      _free();
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(unaff_x24 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

