
void FUN_100bd4128(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *in_stack_00000030 = 4;
  in_stack_00000030[1] = uVar1;
  if (unaff_x24 != -0x8000000000000000) {
    if (unaff_x21 != 0) {
      puVar2 = (undefined8 *)(in_stack_00000028 + 8);
      do {
        if (puVar2[-1] != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 3;
        unaff_x21 = unaff_x21 + -1;
      } while (unaff_x21 != 0);
    }
    if (unaff_x24 != 0) {
      _free(in_stack_00000028);
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000018);
  }
  FUN_100d34830(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

