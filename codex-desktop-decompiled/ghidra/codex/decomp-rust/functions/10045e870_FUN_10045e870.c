
void FUN_10045e870(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x25;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000020;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000008 = 0x8000000000000006;
  in_stack_00000008[1] = uVar1;
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
  if ((unaff_x23 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000020);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

