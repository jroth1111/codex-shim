
void FUN_100bc9b48(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x23;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined8 in_stack_000000c0;
  ulong in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 *in_stack_000000f0;
  char in_stack_00000270;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000180);
  *in_stack_000000f0 = 0x12;
  in_stack_000000f0[1] = uVar1;
  if (unaff_x28 != 0) {
    puVar2 = (undefined8 *)(unaff_x26 + 8);
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      unaff_x28 = unaff_x28 + -1;
    } while (unaff_x28 != 0);
  }
  if (in_stack_000000e0 != 0) {
    _free();
  }
  if (unaff_x23 != -0x8000000000000000) {
    if (unaff_x27 != 0) {
      puVar2 = (undefined8 *)(unaff_x21 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x27 = unaff_x27 + -1;
      } while (unaff_x27 != 0);
    }
    if (unaff_x23 != 0) {
      _free();
    }
  }
  if ((in_stack_000000d8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c0);
  }
  FUN_100d34830(&stack0x00000290);
  if (in_stack_00000270 != '\x16') {
    FUN_100e077ec(&stack0x00000270);
  }
  return;
}

