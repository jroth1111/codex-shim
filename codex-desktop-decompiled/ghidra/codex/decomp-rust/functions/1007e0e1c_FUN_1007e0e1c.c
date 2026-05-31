
void FUN_1007e0e1c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long unaff_x27;
  long unaff_x29;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000120);
  *in_stack_00000030 = 0x8000000000000003;
  in_stack_00000030[1] = uVar1;
  if (in_stack_00000028 != -0x8000000000000000) {
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
    if (in_stack_00000028 != 0) {
      _free();
    }
  }
  FUN_100d34830(unaff_x29 + -0x90);
  if (*(char *)(unaff_x29 + -0xb0) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return;
}

