
void FUN_1004aed08(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar2 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar2;
  if (unaff_x24 != 0) {
    _free(in_stack_00000028);
  }
  lVar1 = *(long *)(unaff_x29 + -200);
  lVar3 = *(long *)(unaff_x29 + -0xc0);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(long *)(unaff_x29 + -0xd0) != 0) {
    _free(lVar1);
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

