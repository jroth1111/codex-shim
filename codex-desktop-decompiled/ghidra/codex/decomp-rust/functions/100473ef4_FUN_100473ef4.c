
void FUN_100473ef4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  long unaff_x23;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar3 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
  *in_stack_00000008 = 0x800000000000006e;
  in_stack_00000008[1] = uVar3;
  if (unaff_x22 != 0) {
    _free(in_stack_00000028);
  }
  lVar1 = *(long *)(unaff_x29 + -0xb8);
  lVar4 = *(long *)(unaff_x29 + -0xb0) + 1;
  lVar2 = lVar1;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    FUN_100de6690(lVar2);
    lVar2 = lVar2 + 0x48;
  }
  if (*(long *)(unaff_x29 + -0xc0) != 0) {
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

