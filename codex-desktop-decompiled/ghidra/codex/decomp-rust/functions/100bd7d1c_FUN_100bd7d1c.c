
void FUN_100bd7d1c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x26;
  long unaff_x29;
  undefined1 *in_stack_00000030;
  
  uVar1 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000a0);
  *(undefined8 *)(in_stack_00000030 + 8) = uVar1;
  *in_stack_00000030 = 5;
  if (unaff_x23 != -0x8000000000000000) {
    if (unaff_x26 != 0) {
      puVar2 = (undefined8 *)(unaff_x22 + 8);
      do {
        if ((puVar2[-1] & 0x7fffffffffffffff) != 0) {
          _free(*puVar2);
        }
        puVar2 = puVar2 + 5;
        unaff_x26 = unaff_x26 + -1;
      } while (unaff_x26 != 0);
    }
    if (unaff_x23 != 0) {
      _free();
    }
  }
  if ((unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_100d34830(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

