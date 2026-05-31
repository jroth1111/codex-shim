
void FUN_10046af28(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  char in_stack_00000030;
  
  uVar1 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
  *in_stack_00000010 = 0x800000000000006e;
  in_stack_00000010[1] = uVar1;
  if (unaff_x24 != -0x8000000000000000) {
    lVar2 = *(long *)(unaff_x29 + -0xb0);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(in_stack_00000028 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (unaff_x24 != 0) {
      _free(in_stack_00000028);
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free(in_stack_00000018);
  }
  FUN_100d34830(&stack0x00000050);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

