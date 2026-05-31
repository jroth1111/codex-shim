
void FUN_100473ae4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000028;
  char in_stack_00000030;
  
  uVar2 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
  *unaff_x26 = 0x800000000000006e;
  unaff_x26[1] = uVar2;
  if (unaff_x22 != -0x8000000000000000) {
    if (unaff_x22 != 0) {
      _free(in_stack_00000028);
    }
    lVar1 = *(long *)(unaff_x29 + -0xb8);
    lVar4 = *(long *)(unaff_x29 + -0xb0) + 1;
    lVar3 = lVar1;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100de6690(lVar3);
      lVar3 = lVar3 + 0x48;
    }
    if (*(long *)(unaff_x29 + -0xc0) != 0) {
      _free(lVar1);
    }
  }
  if ((-0x7fffffffffffffff < unaff_x23) && (unaff_x23 != 0)) {
    _free();
  }
  FUN_100d34830(unaff_x27 + 0x20);
  if (in_stack_00000030 != '\x16') {
    FUN_100e077ec(&stack0x00000030);
  }
  return;
}

