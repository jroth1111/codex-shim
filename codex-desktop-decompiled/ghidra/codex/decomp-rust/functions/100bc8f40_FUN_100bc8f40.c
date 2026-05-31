
void FUN_100bc8f40(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  char in_stack_00000270;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000180);
  *in_stack_000000f0 = 0x12;
  in_stack_000000f0[1] = uVar1;
  if (unaff_x25 != 0) {
    puVar2 = (undefined8 *)(unaff_x24 + 0x20);
    do {
      if (puVar2[-4] != 0) {
        _free(puVar2[-3]);
      }
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 6;
      unaff_x25 = unaff_x25 + -1;
    } while (unaff_x25 != 0);
  }
  if (in_stack_000000e8 != 0) {
    _free();
  }
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(&stack0x00000290);
  if (in_stack_00000270 != '\x16') {
    FUN_100e077ec(&stack0x00000270);
  }
  return;
}

